#include "StdAfx.h"
#include "Handler_PNG.h"
#include "lodepng\lodepng.h"
#include "palmod.h"

//Initialize the selection tree
CDescTree CImageViewers_PNG::m_MainDescTree = nullptr;

const uint32_t c_nImageViewerUnitAmount = 1;

void CImageViewers_PNG::InitializeStatics()
{
    m_MainDescTree.SetRootTree(CImageViewers_PNG::InitDescTree());
}

CImageViewers_PNG::CImageViewers_PNG(LPCWSTR pszImagePath, uint32_t nConfirmedROMSize)
{
    //Set color mode
    m_createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_RGBA8888_LE);
    //Set the image out display type
    m_DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_TOPTOBOTTOM;

    m_nGameFlag = ImageViewer_PNG;

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

CImageViewers_PNG::~CImageViewers_PNG()
{
    FlushChangeTrackingArray();
    ClearDataBuffer();
}

CDescTree* CImageViewers_PNG::GetMainTree()
{
    return &CImageViewers_PNG::m_MainDescTree;
}

sDescTreeNode* CImageViewers_PNG::InitDescTree()
{
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    wcsncpy(NewDescTree->szDesc, L"Image Viewer: PNG", ARRAYSIZE(NewDescTree->szDesc));
    
    NewDescTree->ChildNodes = new sDescTreeNode[c_nImageViewerUnitAmount];
    NewDescTree->uChildAmt = c_nImageViewerUnitAmount;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    strMsg.Format(L"CImageViewers_PNG::InitDescTree: Building desc tree for ImageViewer_PNG...\n");
    OutputDebugString(strMsg);

    for (int iUnitCtr = 0; iUnitCtr < c_nImageViewerUnitAmount; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* ButtonNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UnitNode = &((sDescTreeNode*)NewDescTree->ChildNodes)[iUnitCtr];
        //Set each description
        wcsncpy(UnitNode->szDesc, L"Image Viewer: PNG", ARRAYSIZE(UnitNode->szDesc));

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

        wcsncpy(ChildNode->szDesc, L"PNG (Native Palette)", ARRAYSIZE(ChildNode->szDesc));
                
        ChildNode->uUnitId = 0;
        ChildNode->uPalId = 0;
    }

    return NewDescTree;
}

sFileRule CImageViewers_PNG::GetRule(uint32_t nRule)
{
    sFileRule NewFileRule;

    wcsncpy(NewFileRule.szFileName, L"Image Viewer: PNG", ARRAYSIZE(NewFileRule.szFileName));

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1;

    return NewFileRule;
}

BOOL CImageViewers_PNG::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    if (m_pppDataBuffer32[nUnitId])
    {
        //Palette memory should always be NULL at this point
        return FALSE;
    }
    else
    {
        BOOL fIsValidIndexedPNG = FALSE;

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

                    // Set up a dummy palette
                    m_pppDataBuffer32[0] = new uint32_t*;
                    m_pppDataBuffer32[0][0] = new uint32_t[m_nPaletteLength];

                    for (size_t iPos = 0; iPos < m_nPaletteLength; iPos++)
                    {
                        uint32_t curColor = ((paletteBits[(iPos * 4) + 3]) << 24) +
                                            ((paletteBits[(iPos * 4) + 2]) << 16) +
                                            ((paletteBits[(iPos * 4) + 1]) <<  8) +
                                            ((paletteBits[(iPos * 4) + 0]));

                        m_pppDataBuffer32[0][0][iPos] = curColor;
                    }

                    fIsValidIndexedPNG = TRUE;
                }

                free(loadedAsPNG);
            }

            free(loadedAsFile);
        }

        lodepng_state_cleanup(&state);

        if (!fIsValidIndexedPNG)
        {
            MessageBox(g_appHWnd, L"This is not an indexed PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
        }

        return fIsValidIndexedPNG;
    }
}

BOOL CImageViewers_PNG::SaveFile(CFile* SaveFile, uint32_t nUnitId)
{
    BOOL fSavedOut = FALSE;

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

    return fSavedOut;
}

BOOL CImageViewers_PNG::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

bool CImageViewers_PNG::GetForcedSinglePreviewPath(CString& strPath)
{
    strPath = m_strImagePath;

    return true;
}

void CImageViewers_PNG::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    m_nCurrentPaletteROMLocation = 0;
    m_nCurrentPaletteSizeInColors = static_cast<uint16_t>(m_nPaletteLength);
    m_pszCurrentPaletteName = m_strImagePath;
}
