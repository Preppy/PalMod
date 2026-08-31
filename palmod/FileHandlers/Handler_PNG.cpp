#include "StdAfx.h"
#include "Handler_PNG.h"
#include "lodepng\lodepng.h"
#include "palmod.h"
#include "RegProc.h"

//Initialize the selection tree
CDescTree CImageViewers_PNGorRAW::m_MainDescTree = nullptr;

const uint32_t c_nImageViewerUnitAmount = 1;

void CImageViewers_PNGorRAW::InitializeStatics()
{
    m_MainDescTree.SetRootTree(CImageViewers_PNGorRAW::InitDescTree());
}

CImageViewers_PNGorRAW::CImageViewers_PNGorRAW(SupportedGamesList nGameDef, LPCWSTR pszImagePath, uint32_t nConfirmedROMSize)
{
    //Set color mode
    m_createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_RGBA8888_LE);
    //Set the image out display type
    m_DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM;

    m_nGameFlag = nGameDef;

    m_pButtonLabelSet = DEF_NOBUTTONS;
   
    InitializeStatics();

    // InitDataBuffer uses this value so make sure to set first
    m_nUnitAmt = 1;

    InitDataBuffer();

    //Set game information
    m_nImgGameFlag = IMGDAT_SECTION_OTHER;
    m_prgGameImageSet = {};

    m_nFileAmt = 1;

    //Prepare the file list
    PrepChangeTrackingArray();

    //Create the redirect buffer
    m_rgUnitRedir.resize(m_nUnitAmt, 0);
    m_rgUnitRedir.at(0) = 0;

    // Save image path so we know what we're previewing
    m_strImagePath = pszImagePath;
}

CImageViewers_PNGorRAW::~CImageViewers_PNGorRAW()
{
    _StorePaletteInRegistry();
    FlushChangeTrackingArray();
    ClearDataBuffer();
}

sDescTreeNode* CImageViewers_PNGorRAW::InitDescTree()
{
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    wcsncpy(NewDescTree->szDesc, L"Image Viewer", ARRAYSIZE(NewDescTree->szDesc));
    
    NewDescTree->ChildNodes = new sDescTreeNode[c_nImageViewerUnitAmount];
    NewDescTree->uChildAmt = c_nImageViewerUnitAmount;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CImageViewers_PNGorRAW::InitDescTree: Building desc tree for ImageViewer_PNGorRAW...\n");
    OutputDebugString(strMsg);

    for (int iUnitCtr = 0; iUnitCtr < c_nImageViewerUnitAmount; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* ButtonNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];
        //Set each description
        wcsncpy(UnitNode->szDesc, L"Image Viewer", ARRAYSIZE(UnitNode->szDesc));

        UnitNode->ChildNodes = new sDescTreeNode[c_nImageViewerUnitAmount];

        //All children have button trees
        UnitNode->uChildType = DESC_NODETYPE_TREE;
        UnitNode->uChildAmt = 1;

        ButtonNode = &((sDescTreeNode*)UnitNode->ChildNodes)[0];

        //Set each button data
        wcsncpy(ButtonNode->szDesc, L"Image Viewer", ARRAYSIZE(ButtonNode->szDesc));

        //Button children have nodes
        ButtonNode->uChildType = DESC_NODETYPE_NODE;
        ButtonNode->uChildAmt = 1;

        ButtonNode->ChildNodes = (sDescTreeNode*)new sDescNode[1];

        ChildNode = &((sDescNode*)ButtonNode->ChildNodes)[0];

        // This is a dummy value that we override later
        wcsncpy(ChildNode->szDesc, L"Native Palette", ARRAYSIZE(ChildNode->szDesc));
                
        ChildNode->uUnitId = 0;
        ChildNode->uPalId = 0;
    }

    return NewDescTree;
}

sFileRule CImageViewers_PNGorRAW::GetRule(uint32_t nRule)
{
    sFileRule NewFileRule;

    wcsncpy(NewFileRule.szFileName, L"Image Viewer", ARRAYSIZE(NewFileRule.szFileName));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1;

    return NewFileRule;
}

void CImageViewers_PNGorRAW::_StorePaletteInRegistry()
{
    if (m_nPaletteLength == 256)
    {
        HKEY hKey;

        // Store the working palette.  They need to have clicked Update for us to use any changes they made
        if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, nullptr, REG_OPTION_NON_VOLATILE, KEY_WRITE, nullptr, &hKey, nullptr) == ERROR_SUCCESS)
        {
            DWORD cbSize = static_cast<DWORD>(m_nPaletteLength * sizeof(uint32_t));

            RegSetValueExW(hKey, m_strKeyName, 0, REG_BINARY, reinterpret_cast<const BYTE*>(&m_pppDataBuffer32[0][0][0]), cbSize);

            RegCloseKey(hKey);
        }
    }
}

bool CImageViewers_PNGorRAW::_RestorePaletteFromRegistry()
{
    bool fFoundData = false;

    if (m_nPaletteLength == 256)
    {
        HKEY hKey;

        if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
        {
            DWORD cbSize = static_cast<DWORD>(m_nPaletteLength * sizeof(uint32_t));
            DWORD dwType = REG_BINARY;

            if (RegQueryValueExW(hKey, m_strKeyName, 0, &dwType, reinterpret_cast<BYTE*>(&m_pppDataBuffer32[0][0][0]), &cbSize) == ERROR_SUCCESS)
            {
                fFoundData = true;
            }

            RegCloseKey(hKey);
        }
    }

    return fFoundData;
}

BOOL CImageViewers_PNGorRAW::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    CString strFileName = LoadedFile->GetFilePath();

    if ((m_pppDataBuffer32[nUnitId]) ||
        (strFileName.GetLength() < 5)) // need at least x.foo
    {
        //Palette memory should always be NULL at this point
        return FALSE;
    }
    else
    {
        BOOL fHaveValidIndexedImage = FALSE;

        if (m_nGameFlag == ImageViewer_PNG)
        {
            LodePNGState state;
            lodepng_state_init(&state);

            size_t nSize = 0;
            unsigned char* loadedAsFile = nullptr;

            if (lodepng_load_file(&loadedAsFile, &nSize, LoadedFile->GetFilePath()) == 0)
            {
                unsigned width = 0, height = 0;
                unsigned char* loadedAsPNG = nullptr;

                if (lodepng_decode(&loadedAsPNG, &width, &height, &state, loadedAsFile, nSize) == 0)
                {
                    if (state.info_png.color.colortype == LodePNGColorType::LCT_PALETTE)
                    {
                        unsigned char* paletteBits = state.info_png.color.palette;
                        m_nPaletteLength = state.info_png.color.palettesize;

                        m_pppDataBuffer32[0] = new uint32_t*;
                        m_pppDataBuffer32[0][0] = new uint32_t[m_nPaletteLength];

                        for (size_t iPos = 0; iPos < m_nPaletteLength; iPos++)
                        {
                            uint32_t curColor = ((paletteBits[(iPos * 4) + 3]) << 24) +
                                ((paletteBits[(iPos * 4) + 2]) << 16) +
                                ((paletteBits[(iPos * 4) + 1]) << 8) +
                                ((paletteBits[(iPos * 4) + 0]));

                            m_pppDataBuffer32[0][0][iPos] = curColor;
                        }

                        fHaveValidIndexedImage = TRUE;
                    }

                    free(loadedAsPNG);
                }

                free(loadedAsFile);
            }

            lodepng_state_cleanup(&state);

            if (!fHaveValidIndexedImage)
            {
                MessageBox(g_appHWnd, L"This is not an indexed PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
        else // RAW
        {
            // set up a dummy palette
            m_nPaletteLength = 256;
            m_pppDataBuffer32[0] = new uint32_t*;
            m_pppDataBuffer32[0][0] = new uint32_t[m_nPaletteLength];

            if (!_RestorePaletteFromRegistry())
            {
                uint32_t curColor = 0xff000000;

                // TODO: make a better default palette?
                for (size_t iPos = 0; iPos < m_nPaletteLength; iPos++)
                {
                    m_pppDataBuffer32[0][0][iPos] = curColor;
                    curColor += 0x44ff;
                }
            }

            fHaveValidIndexedImage = TRUE;
        }

        if (fHaveValidIndexedImage)
        {
            wcsncpy(m_MainDescTree.GetDescNode(0, 0, 0, 0)->szDesc,
                            (m_nGameFlag == ImageViewer_PNG) ? L"PNG (Native Palette)" : L"RAW (Generated Palette)",
                            ARRAYSIZE(m_MainDescTree.GetDescNode(0, 0, 0, 0)->szDesc));
        }

        return fHaveValidIndexedImage;
    }
}

BOOL CImageViewers_PNGorRAW::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    BOOL fSavedOut = FALSE;

    if (m_nGameFlag == ImageViewer_PNG)
    {
        LodePNGState state;
        lodepng_state_init(&state);

        size_t nSize = 0;
        unsigned char* loadedAsFile = nullptr;

        // Close the open file handle, we'll be doing this ourselves
        SaveFile->Abort();

        state.encoder.auto_convert = 0;
        state.info_raw.colortype = LCT_PALETTE;
        state.info_raw.bitdepth = 8;

        if (lodepng_load_file(&loadedAsFile, &nSize, m_strImagePath) == 0)
        {
            unsigned width = 0, height = 0;
            unsigned char* loadedAsPNG = nullptr;

            if (lodepng_decode(&loadedAsPNG, &width, &height, &state, loadedAsFile, nSize) == 0)
            {
                if (state.info_png.color.colortype == LodePNGColorType::LCT_PALETTE)
                {
                    lodepng_palette_clear(&state.info_png.color);
                    lodepng_palette_clear(&state.info_raw);

                    for (size_t iPos = 0; iPos < m_nPaletteLength; iPos++)
                    {
                        const unsigned char r = (m_pppDataBuffer32[0][0][iPos] & 0xff);
                        const unsigned char g = (m_pppDataBuffer32[0][0][iPos] & 0xff00) >> 8;
                        const unsigned char b = (m_pppDataBuffer32[0][0][iPos] & 0xff0000) >> 16;
                        const unsigned char a = (m_pppDataBuffer32[0][0][iPos] & 0xff000000) >> 24;

                        lodepng_palette_add(&state.info_png.color, r, g, b, a);
                        lodepng_palette_add(&state.info_raw, r, g, b, a);
                    }

                    unsigned char* encodedBackToPNG = nullptr;
                    size_t saveSize = 0;

                    if (lodepng_encode(&encodedBackToPNG, &saveSize, loadedAsPNG, width, height, &state) == 0)
                    {
                        if (lodepng_save_file(encodedBackToPNG, saveSize, m_strImagePath) == 0)
                        {
                            fSavedOut = TRUE;
                        }

                        free(encodedBackToPNG);
                    }
                }

                free(loadedAsPNG);
            }

            free(loadedAsFile);

            lodepng_state_cleanup(&state);
        }
    }
    else // RAW
    {
        GetHost()->GetPreviewDlg()->OnFileExportImgQuick();
        // actual status text messaging will be handled via quick export
        fSavedOut = TRUE;
    }

    return fSavedOut;
}

BOOL CImageViewers_PNGorRAW::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    //Get rid of any palettes if there are any
    m_BasePalGroup.FlushPalAll();

    ClearSetImgTicket(CreateImgTicket(INVALID_UNIT_VALUE_16, INVALID_UNIT_VALUE_8));

    CreateDefPal(NodeGet, 0);

    SetSourcePal(0, 0, 0, 1, 0, 0);

    return TRUE;
}

bool CImageViewers_PNGorRAW::GetForcedSinglePreviewPath(CString& strPath)
{
    strPath = m_strImagePath;

    return true;
}

void CImageViewers_PNGorRAW::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    m_nCurrentPaletteROMLocation = 0;
    m_nCurrentPaletteSizeInColors = static_cast<uint16_t>(m_nPaletteLength);
    m_pszCurrentPaletteName = m_strImagePath;
}
