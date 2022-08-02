#include "StdAfx.h"
#include "Game_MWarr_A_DIR.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

uint32_t CGame_MWarr_A_DIR::uRuleCtr = 0;

stExtraDef* CGame_MWarr_A_DIR::MWarr_A_EXTRA_CUSTOM = NULL;

uint32_t CGame_MWarr_A_DIR::rgExtraCountAll[MWarr_A_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_MWarr_A_DIR::rgExtraLoc[MWarr_A_NUMUNIT + 1] = { (uint32_t)-1 };

CDescTree CGame_MWarr_A_DIR::MainDescTree = nullptr;
uint32_t CGame_MWarr_A_DIR::m_nConfirmedROMSize = -1;

const LPCWSTR c_ppszMWarr_Files[]
{
    L"prg_ev",
    L"prg_od",
};

void CGame_MWarr_A_DIR::InitializeStatics()
{
    safe_delete_array(CGame_MWarr_A_DIR::MWarr_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MWarr_A_DIR::InitDescTree());
}

CGame_MWarr_A_DIR::CGame_MWarr_A_DIR(uint32_t nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = m_nExpectedGameROMSize * ARRAYSIZE(c_ppszMWarr_Files);
    InitializeStatics();

    m_pszExtraFilename = EXTRA_FILENAME_MWarr;

    //We need the proper unit amt before we init the main buffer
    m_nTotalInternalUnits = MWarr_A_NUMUNIT;
    m_nExtraUnit = MWarr_A_EXTRALOC;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 21;
    m_nLowestKnownPaletteRomLocation = 0x92C24;

    CString strInfo;
    strInfo.Format(L"CGame_MWarr_A_DIR::CGame_MWarr_A_DIR: Loaded MWarr_A with %u Extras\n", GetExtraCt(m_nExtraUnit));
    OutputDebugString(strInfo);

    InitDataBuffer();

    //Set game information
    nGameFlag = MWARR_A;
    nImgGameFlag = IMGDAT_SECTION_OTHER;
    m_prgGameImageSet = MWarr_A_IMGIDS_USED;
    
    nFileAmt = ARRAYSIZE(c_ppszMWarr_Files);

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;

    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MWarr_A_DIR::~CGame_MWarr_A_DIR()
{
    safe_delete_array(CGame_MWarr_A_DIR::MWarr_A_EXTRA_CUSTOM);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

uint32_t CGame_MWarr_A_DIR::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MWarr_A_NUMUNIT, nUnitId, MWarr_A_EXTRA_CUSTOM);
}

uint32_t CGame_MWarr_A_DIR::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MWarr_A_NUMUNIT, nUnitId, MWarr_A_EXTRA_CUSTOM);
}

CDescTree* CGame_MWarr_A_DIR::GetMainTree()
{
    return &CGame_MWarr_A_DIR::MainDescTree;
}

sDescTreeNode* CGame_MWarr_A_DIR::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MWarr, &MWarr_A_EXTRA_CUSTOM, MWarr_A_EXTRALOC, m_nConfirmedROMSize);

    bool fHaveExtras = (GetExtraCt(MWarr_A_EXTRALOC) > 0);
    uint16_t nUnitCt = MWarr_A_NUMUNIT + (GetExtraCt(MWarr_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MWARR_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCount = _InitDescTree(NewDescTree,
        MWarr_A_UNITS,
        MWarr_A_EXTRALOC,
        MWarr_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MWarr_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MWarr_A_DIR::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s", c_ppszMWarr_Files[nUnitId & 0xFF]);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_MWarr_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= ARRAYSIZE(c_ppszMWarr_Files))
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline uint32_t CGame_MWarr_A_DIR::GetSIMMLocationFromROMLocation(uint32_t nROMLocation)
{
    const uint32_t nSIMMLocation = nROMLocation / ARRAYSIZE(c_ppszMWarr_Files);
    return nSIMMLocation;
}

uint32_t CGame_MWarr_A_DIR::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(MWarr_A_UNITS, rgExtraCountAll, MWarr_A_NUMUNIT, MWarr_A_EXTRALOC, nUnitId, MWarr_A_EXTRA_CUSTOM);
}

uint32_t CGame_MWarr_A_DIR::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(MWarr_A_UNITS, rgExtraCountAll, MWarr_A_NUMUNIT, MWarr_A_EXTRALOC, nUnitId, nCollectionId, MWarr_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_MWarr_A_DIR::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(MWarr_A_UNITS, MWarr_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_MWarr_A_DIR::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(MWarr_A_UNITS, rgExtraCountAll, MWarr_A_NUMUNIT, MWarr_A_EXTRALOC, nUnitId, MWarr_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MWarr_A_DIR::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(MWarr_A_UNITS, nUnitId, nCollectionId);
}

const sGame_PaletteDataset* CGame_MWarr_A_DIR::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(MWarr_A_UNITS, rgExtraCountAll, MWarr_A_NUMUNIT, MWarr_A_EXTRALOC, nUnitId, nPaletteId, MWarr_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_MWarr_A_DIR::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MWarr_A_UNITS, rgExtraCountAll, MWarr_A_NUMUNIT, MWarr_A_EXTRALOC, nUnitId, nPaletteId, MWarr_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

void CGame_MWarr_A_DIR::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != MWarr_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // MWarr_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &MWarr_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MWarr_A_DIR::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MWarr_A_UNITS, rgExtraCountAll, MWarr_A_NUMUNIT, MWarr_A_EXTRALOC, MWarr_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

BOOL CGame_MWarr_A_DIR::LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_MWarr_A_DIR::LoadFile: Preparing to load data from SIMM number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    if (nSIMMNumber != 0)
    {
        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;

        OutputDebugString(L"\tAlready handled.\n");
        return TRUE;
    }

    CFile fileSIMM2;
    CString strSIMMName2;

    strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszMWarr_Files[1]);

    if (fileSIMM2.Open(strSIMMName2, CFile::modeRead | CFile::typeBinary))
    {
        OutputDebugString(L"\tLoading MWarr from SIMMs....\n");

        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], NULL, sizeof(uint16_t*) * nPalAmt);
            }

            // These are already sorted, no need to redirect
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                memset(m_pppDataBuffer[nUnitCtr][nPalCtr], NULL, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                fileSIMM2.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                {
                    BYTE high, low;

                    LoadedFile->Read(&low, 1);
                    fileSIMM2.Read(&high, 1);

                    uint16_t nColorValue = (uint16_t)((high << 8) | low);

                    m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = nColorValue;
                }
            }
        }
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull)
    {
        fileSIMM2.Close();
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return fSuccess;
}

BOOL CGame_MWarr_A_DIR::SaveFile(CFile* SaveFile, uint32_t nSaveUnit)
{
    CString strInfo;
    strInfo.Format(L"CGame_MWarr_A_DIR::SaveFile: Preparing to save data for MWarr ROM set\n");
    OutputDebugString(strInfo);

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;

    strSIMMName1.Format(L"%s\\%s", GetLoadDir(), c_ppszMWarr_Files[0]);
    strSIMMName2.Format(L"%s\\%s", GetLoadDir(), c_ppszMWarr_Files[1]);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)))
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);

                    fileSIMM1.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    fileSIMM2.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                    for (uint16_t nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSizeInColors; nWordsWritten++)
                    {
                        uint16_t nColorValue = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten];

                        BYTE high = (nColorValue & 0xFF00) >> 8;
                        BYTE low = nColorValue & 0xFF;

                        fileSIMM1.Write(&low, 1);
                        fileSIMM2.Write(&high, 1);
                    }
                }
            }
        }
    }

    if (fileSIMM1.m_hFile != CFile::hFileNull)
    {
        fileSIMM1.Close();
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull)
    {
        fileSIMM2.Close();
    }

    return TRUE;
}
