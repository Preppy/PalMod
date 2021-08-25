#include "StdAfx.h"
#include "Game_REDEARTH_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

#define REDEARTH_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30 = NULL;
stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31 = NULL;
stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_50 = NULL;

int CGame_REDEARTH_A::rgExtraCountAll_30[REDEARTH_A_NUMUNIT_30 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraCountAll_31[REDEARTH_A_NUMUNIT_31 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraCountAll_50[REDEARTH_A_NUMUNIT_50 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraLoc_30[REDEARTH_A_NUMUNIT_30 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraLoc_31[REDEARTH_A_NUMUNIT_31 + 1] = { -1 };
int CGame_REDEARTH_A::rgExtraLoc_50[REDEARTH_A_NUMUNIT_50 + 1] = { -1 };

CDescTree CGame_REDEARTH_A::MainDescTree_30 = nullptr;
CDescTree CGame_REDEARTH_A::MainDescTree_31 = nullptr;
CDescTree CGame_REDEARTH_A::MainDescTree_50 = nullptr;

int CGame_REDEARTH_A::m_nRedEarthMode = 31;
UINT32 CGame_REDEARTH_A::m_nTotalPaletteCount30 = 0;
UINT32 CGame_REDEARTH_A::m_nTotalPaletteCount31 = 0;
UINT32 CGame_REDEARTH_A::m_nTotalPaletteCount50 = 0;

UINT32 CGame_REDEARTH_A::m_nExpectedGameROMSize_3 = 0x800000; // 8388608 bytes
UINT32 CGame_REDEARTH_A::m_nExpectedGameROMSize_5 = 0x400000;
UINT32 CGame_REDEARTH_A::m_nConfirmedROMSize = -1;

void CGame_REDEARTH_A::InitializeStatics()
{
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_50);

    memset(rgExtraCountAll_30, -1, sizeof(rgExtraCountAll_30));
    memset(rgExtraCountAll_31, -1, sizeof(rgExtraCountAll_31));
    memset(rgExtraCountAll_50, -1, sizeof(rgExtraCountAll_50));
    memset(rgExtraLoc_30, -1, sizeof(rgExtraLoc_30));
    memset(rgExtraLoc_31, -1, sizeof(rgExtraLoc_31));
    memset(rgExtraLoc_50, -1, sizeof(rgExtraLoc_50));

    MainDescTree_30.SetRootTree(CGame_REDEARTH_A::InitDescTree(30));
    MainDescTree_31.SetRootTree(CGame_REDEARTH_A::InitDescTree(31));
    MainDescTree_50.SetRootTree(CGame_REDEARTH_A::InitDescTree(50));
}

CGame_REDEARTH_A::CGame_REDEARTH_A(UINT32 nConfirmedROMSize /* = -1 */, int nRedEarthModeToLoad /* = 31 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nRedEarthMode = nRedEarthModeToLoad;

    const UINT32 nSafeCountFor30 = 126;
    const UINT32 nSafeCountFor31 = 641;
    const UINT32 nSafeCountFor50 = 4;

    switch (m_nRedEarthMode)
    {
    case 30:
        OutputDebugString(L"CGame_REDEARTH_A::CGame_REDEARTH_A: Loading for the 30 ROM\n");
        nUnitAmt = REDEARTH_A_NUMUNIT_30 + (GetExtraCt(REDEARTH_A_EXTRALOC_30) ? 1 : 0);
        m_nTotalInternalUnits = REDEARTH_A_NUMUNIT_30;
        m_nExtraUnit = REDEARTH_A_EXTRALOC_30;
        m_nSafeCountForThisRom = nSafeCountFor30 + GetExtraCt(REDEARTH_A_EXTRALOC_30);
        m_pszExtraFilename = EXTRA_FILENAME_REDEARTH_30;
        m_nTotalPaletteCount = m_nTotalPaletteCount30;
        m_nLowestKnownPaletteRomLocation = 0x734000;
        break;
    case 31:
    default:
        OutputDebugString(L"CGame_REDEARTH_A::CGame_REDEARTH_A: Loading for the 31 ROM\n");
        nUnitAmt = REDEARTH_A_NUMUNIT_31 + (GetExtraCt(REDEARTH_A_EXTRALOC_31) ? 1 : 0);
        m_nTotalInternalUnits = REDEARTH_A_NUMUNIT_31;
        m_nExtraUnit = REDEARTH_A_EXTRALOC_31;
        m_nSafeCountForThisRom = nSafeCountFor31 + GetExtraCt(REDEARTH_A_EXTRALOC_31);
        m_pszExtraFilename = EXTRA_FILENAME_REDEARTH_31;
        m_nTotalPaletteCount = m_nTotalPaletteCount31;
        m_nLowestKnownPaletteRomLocation = 0x132600;
        break;
    case 50:
        OutputDebugString(L"CGame_REDEARTH_A::CGame_REDEARTH_A: Loading for the 50 ROM\n");
        nUnitAmt = REDEARTH_A_NUMUNIT_50 + (GetExtraCt(REDEARTH_A_EXTRALOC_50) ? 1 : 0);
        m_nTotalInternalUnits = REDEARTH_A_NUMUNIT_50;
        m_nExtraUnit = REDEARTH_A_EXTRALOC_50;
        m_nSafeCountForThisRom = nSafeCountFor50 + GetExtraCt(REDEARTH_A_EXTRALOC_50);
        m_pszExtraFilename = EXTRA_FILENAME_REDEARTH_50;
        m_nTotalPaletteCount = m_nTotalPaletteCount50;
        m_nLowestKnownPaletteRomLocation = 0x358000;
        break;
    }

    InitDataBuffer();

    //Set game information
    nGameFlag = REDEARTH_A;
    nImgGameFlag = IMGDAT_SECTION_REDEARTH;
    m_prgGameImageSet = REDEARTH_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(REDEARTH_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_PK);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_REDEARTH_A::~CGame_REDEARTH_A(void)
{
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_50);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

int CGame_REDEARTH_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetExtraCount(rgExtraCountAll_30, REDEARTH_A_NUMUNIT_30, nUnitId, REDEARTH_A_EXTRA_CUSTOM_30);
    case 31:
    default:
        return _GetExtraCount(rgExtraCountAll_31, REDEARTH_A_NUMUNIT_31, nUnitId, REDEARTH_A_EXTRA_CUSTOM_31);
    case 50:
        return _GetExtraCount(rgExtraCountAll_50, REDEARTH_A_NUMUNIT_50, nUnitId, REDEARTH_A_EXTRA_CUSTOM_50);
    }
}

int CGame_REDEARTH_A::GetExtraLoc(UINT16 nUnitId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetExtraCount(rgExtraLoc_30, REDEARTH_A_NUMUNIT_30, nUnitId, REDEARTH_A_EXTRA_CUSTOM_30);
    case 31:
    default:
        return _GetExtraCount(rgExtraLoc_31, REDEARTH_A_NUMUNIT_31, nUnitId, REDEARTH_A_EXTRA_CUSTOM_31);
    case 50:
        return _GetExtraCount(rgExtraLoc_50, REDEARTH_A_NUMUNIT_50, nUnitId, REDEARTH_A_EXTRA_CUSTOM_50);
    }
}

CDescTree* CGame_REDEARTH_A::GetMainTree()
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return &CGame_REDEARTH_A::MainDescTree_30;
    case 31:
    default:
        return &CGame_REDEARTH_A::MainDescTree_31;
    case 50:
        return &CGame_REDEARTH_A::MainDescTree_50;
    }
}

void CGame_REDEARTH_A::InitDataBuffer()
{
    m_nBufferRedEarthMode = m_nRedEarthMode;
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, 0, sizeof(UINT16**) * nUnitAmt);
}

void CGame_REDEARTH_A::ClearDataBuffer()
{
    // We walk the tree to clear it according to RedEarth mode, but if you live switch games
    // we would use the new mode incorrectly as we clear the old buffer.
    int nCurrentRedEarthMode = m_nRedEarthMode;

    m_nRedEarthMode = m_nBufferRedEarthMode;

    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPaletteCount = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPaletteIndex]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }

    m_nRedEarthMode = nCurrentRedEarthMode;
}

sDescTreeNode* CGame_REDEARTH_A::InitDescTree(int nPaletteSetToUse)
{
    UINT32 nTotalPaletteCount = 0;
    m_nRedEarthMode = nPaletteSetToUse;

    bool fHaveExtras;
    UINT16 nUnitCt;

    switch (m_nRedEarthMode)
    {
    case 30:
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_30, REDEARTH_A_EXTRA, &REDEARTH_A_EXTRA_CUSTOM_30, REDEARTH_A_EXTRALOC_30, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(REDEARTH_A_EXTRALOC_30) != 0;
        nUnitCt = REDEARTH_A_NUMUNIT_30 + (GetExtraCt(REDEARTH_A_EXTRALOC_30) ? 1 : 0);
        break;
    case 31:
    default:
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_31, REDEARTH_A_EXTRA, &REDEARTH_A_EXTRA_CUSTOM_31, REDEARTH_A_EXTRALOC_31, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(REDEARTH_A_EXTRALOC_31) != 0;
        nUnitCt = REDEARTH_A_NUMUNIT_31 + (GetExtraCt(REDEARTH_A_EXTRALOC_31) ? 1 : 0);
        break;
    case 50:
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_50, REDEARTH_A_EXTRA, &REDEARTH_A_EXTRA_CUSTOM_50, REDEARTH_A_EXTRALOC_50, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(REDEARTH_A_EXTRALOC_50) != 0;
        nUnitCt = REDEARTH_A_NUMUNIT_50 + (GetExtraCt(REDEARTH_A_EXTRALOC_50) ? 1 : 0);
        break;
    }

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[REDEARTH_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    switch (m_nRedEarthMode)
    {
    case 30:
        m_nTotalPaletteCount30 = _InitDescTree(NewDescTree,
            REDEARTH_A_UNITS_30,
            REDEARTH_A_EXTRALOC_30,
            REDEARTH_A_NUMUNIT_30,
            rgExtraCountAll_30,
            rgExtraLoc_30,
            REDEARTH_A_EXTRA_CUSTOM_30
        );
        break;
    case 31:
    default:
        m_nTotalPaletteCount31 = _InitDescTree(NewDescTree,
            REDEARTH_A_UNITS_31,
            REDEARTH_A_EXTRALOC_31,
            REDEARTH_A_NUMUNIT_31,
            rgExtraCountAll_31,
            rgExtraLoc_31,
            REDEARTH_A_EXTRA_CUSTOM_31
        );
        break;
    case 50:
        m_nTotalPaletteCount50 = _InitDescTree(NewDescTree,
            REDEARTH_A_UNITS_50,
            REDEARTH_A_EXTRALOC_50,
            REDEARTH_A_NUMUNIT_50,
            rgExtraCountAll_50,
            rgExtraLoc_50,
            REDEARTH_A_EXTRA_CUSTOM_50
        );
        break;
    }

    return NewDescTree;
}

sFileRule CGame_REDEARTH_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    switch (nUnitId)
    {
    case 30:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"30");
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_3;
        break;
    case 31:
    default:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"31");
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_3;
        break;
    case 50:
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"50");
        NewFileRule.uVerifyVar = m_nExpectedGameROMSize_5;
        break;
    }

    NewFileRule.uUnitId = 0;

    return NewFileRule;
}

UINT32 CGame_REDEARTH_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Red Earth: Stages (Arcade ROM 30)",     L"30", 0x074cab4d, 0 },
        { L"Red Earth: Characters (Arcade ROM 31)", L"31", 0x14e2cad4, 0 },
        { L"Red Earth: Coming Next (Arcade ROM 50)", L"50", 0x2f5b44bd, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

stExtraDef* CGame_REDEARTH_A::GetRedEarthExtraDef(int x)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return (stExtraDef*)&REDEARTH_A_EXTRA_CUSTOM_30[x];
    case 31:
    default:
        return (stExtraDef*)&REDEARTH_A_EXTRA_CUSTOM_31[x];
    case 50:
        return (stExtraDef*)&REDEARTH_A_EXTRA_CUSTOM_50[x];
    }
}

UINT16 CGame_REDEARTH_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetCollectionCountForUnit(REDEARTH_A_UNITS_30, rgExtraCountAll_30, REDEARTH_A_NUMUNIT_30, REDEARTH_A_EXTRALOC_30, nUnitId, REDEARTH_A_EXTRA_CUSTOM_30);
    case 31:
    default:
        return _GetCollectionCountForUnit(REDEARTH_A_UNITS_31, rgExtraCountAll_31, REDEARTH_A_NUMUNIT_31, REDEARTH_A_EXTRALOC_31, nUnitId, REDEARTH_A_EXTRA_CUSTOM_31);
    case 50:
        return _GetCollectionCountForUnit(REDEARTH_A_UNITS_50, rgExtraCountAll_50, REDEARTH_A_NUMUNIT_50, REDEARTH_A_EXTRALOC_50, nUnitId, REDEARTH_A_EXTRA_CUSTOM_50);
    }
}

UINT16 CGame_REDEARTH_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetNodeCountForCollection(REDEARTH_A_UNITS_30, rgExtraCountAll_30, REDEARTH_A_NUMUNIT_30, REDEARTH_A_EXTRALOC_30, nUnitId, nCollectionId, REDEARTH_A_EXTRA_CUSTOM_30);
    case 31:
    default:
        return _GetNodeCountForCollection(REDEARTH_A_UNITS_31, rgExtraCountAll_31, REDEARTH_A_NUMUNIT_31, REDEARTH_A_EXTRALOC_31, nUnitId, nCollectionId, REDEARTH_A_EXTRA_CUSTOM_31);
    case 50:
        return _GetNodeCountForCollection(REDEARTH_A_UNITS_50, rgExtraCountAll_50, REDEARTH_A_NUMUNIT_50, REDEARTH_A_EXTRALOC_50, nUnitId, nCollectionId, REDEARTH_A_EXTRA_CUSTOM_50);
    }
}

LPCWSTR CGame_REDEARTH_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetDescriptionForCollection(REDEARTH_A_UNITS_30, REDEARTH_A_EXTRALOC_30, nUnitId, nCollectionId);
    case 31:
    default:
        return _GetDescriptionForCollection(REDEARTH_A_UNITS_31, REDEARTH_A_EXTRALOC_31, nUnitId, nCollectionId);
    case 50:
        return _GetDescriptionForCollection(REDEARTH_A_UNITS_50, REDEARTH_A_EXTRALOC_50, nUnitId, nCollectionId);
    }
}

UINT16 CGame_REDEARTH_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetPaletteCountForUnit(REDEARTH_A_UNITS_30, rgExtraCountAll_30, REDEARTH_A_NUMUNIT_30, REDEARTH_A_EXTRALOC_30, nUnitId, REDEARTH_A_EXTRA_CUSTOM_30);
    case 31:
    default:
        return _GetPaletteCountForUnit(REDEARTH_A_UNITS_31, rgExtraCountAll_31, REDEARTH_A_NUMUNIT_31, REDEARTH_A_EXTRALOC_31, nUnitId, REDEARTH_A_EXTRA_CUSTOM_31);
    case 50:
        return _GetPaletteCountForUnit(REDEARTH_A_UNITS_50, rgExtraCountAll_50, REDEARTH_A_NUMUNIT_50, REDEARTH_A_EXTRALOC_50, nUnitId, REDEARTH_A_EXTRA_CUSTOM_50);
    }
}

const sGame_PaletteDataset* CGame_REDEARTH_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetPaletteSet(REDEARTH_A_UNITS_30, nUnitId, nCollectionId);
    case 31:
    default:
        return _GetPaletteSet(REDEARTH_A_UNITS_31, nUnitId, nCollectionId);
    case 50:
        return _GetPaletteSet(REDEARTH_A_UNITS_50, nUnitId, nCollectionId);
    }
}

const sGame_PaletteDataset* CGame_REDEARTH_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

UINT16 CGame_REDEARTH_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        UINT16 nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_REDEARTH_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetNodeFromPaletteId(REDEARTH_A_UNITS_30, rgExtraCountAll_30, REDEARTH_A_NUMUNIT_30, REDEARTH_A_EXTRALOC_30, nUnitId, nPaletteId, REDEARTH_A_EXTRA_CUSTOM_30, fReturnBasicNodesOnly);
    case 31:
    default:
        return _GetNodeFromPaletteId(REDEARTH_A_UNITS_31, rgExtraCountAll_31, REDEARTH_A_NUMUNIT_31, REDEARTH_A_EXTRALOC_31, nUnitId, nPaletteId, REDEARTH_A_EXTRA_CUSTOM_31, fReturnBasicNodesOnly);
    case 50:
        return _GetNodeFromPaletteId(REDEARTH_A_UNITS_50, rgExtraCountAll_50, REDEARTH_A_NUMUNIT_50, REDEARTH_A_EXTRALOC_50, nUnitId, nPaletteId, REDEARTH_A_EXTRA_CUSTOM_50, fReturnBasicNodesOnly);
    }
}

void CGame_REDEARTH_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    bool fIsForCoreUnit;

    switch (m_nRedEarthMode)
    {
    case 30:
        fIsForCoreUnit = (nUnitId != REDEARTH_A_EXTRALOC_30);
        break;
    case 31:
    default:
        fIsForCoreUnit = (nUnitId != REDEARTH_A_EXTRALOC_31);
        break;
    case 50:
        fIsForCoreUnit = (nUnitId != REDEARTH_A_EXTRALOC_50);
        break;
    }

    if (fIsForCoreUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;
    }
    else // REDEARTH_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetRedEarthExtraDef(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

bool CGame_REDEARTH_A::CanEnableMultispriteExport(UINT16 nUnitId, UINT16 nPalId)
{
    bool isBalanced = false;

    const sDescTreeNode* pUnitTree;

    switch (m_nRedEarthMode)
    {
    case 30:
        pUnitTree = &(REDEARTH_A_UNITS_30[nUnitId]);
        break;
    case 31:
    default:
        pUnitTree = &(REDEARTH_A_UNITS_31[nUnitId]);
        break;
    case 50:
        // These are only bonus nodes that don't have pairs
        return false;
    }

    // Only enable for character nodes
    if (pUnitTree->uChildAmt >= m_nNumberOfColorOptions)
    {
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pUnitTree->ChildNodes);

        isBalanced = (pCurrentCollection[0].uChildAmt == pCurrentCollection[1].uChildAmt);

        if (isBalanced)
        {
            // We know the button nodes are balanced... but are we in a core button node?
            isBalanced = nPalId < (m_nNumberOfColorOptions* pCurrentCollection[0].uChildAmt);
        }
    }

    return isBalanced;
}

BOOL CGame_REDEARTH_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == NULL)
    {
        return FALSE;
    }

    //Change the image id if we need to
    nTargetImgId = 0;
    UINT16 nImgUnitId = NodeGet->uUnitId;

    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    bool fShouldUseAlternateLoadLogic = false;

    //Select the image
    if (m_nExtraUnit != NodeGet->uUnitId)
    {
        const sGame_PaletteDataset* paletteDataSet = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId);
        const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = GetNodeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                if (((_wcsicmp(pCurrentNode->szDesc, pButtonLabelSet[0]) == 0) || (_wcsicmp(pCurrentNode->szDesc, pButtonLabelSet[1]) == 0)) &&
                    CanEnableMultispriteExport(NodeGet->uUnitId, NodeGet->uPalId)) // make sure we're in a balanced node, since we have unbalanced P palettes
                {
                    nSrcAmt = 2;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                if (paletteDataSetToJoin)
                {
                    if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1)
                    {
                        const UINT16 nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                        fShouldUseAlternateLoadLogic = true;
                        sImgTicket* pImgArray = nullptr;

                        for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                        {
                            // The palettes get added forward, but the image tickets need to be generated in reverse order
                            const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex));
                            if (paletteDataSetToJoin)
                            {
                                pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                                //Set each palette
                                sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                                CreateDefPal(JoinedNode, nStageIndex);
                                SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                            }
                        }

                        ClearSetImgTicket(pImgArray);
                    }
                    else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
                    {
                        const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                        const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                        const sGame_PaletteDataset* paletteDataSetToJoin1 = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1);
                        const sGame_PaletteDataset* paletteDataSetToJoin2 = GetSpecificPalette( NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2);
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                                ))
                        );

                        //Set each palette
                        sDescNode* JoinedNode[] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);
                        CreateDefPal(JoinedNode[2], 2);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                        SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);

                    }
                    else
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                           GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                           GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                    }
                }
            }
        }
    }
    else // Extra region
    {
        stExtraDef* pCurrDef = GetRedEarthExtraDef(GetExtraLoc(NodeGet->uUnitId) + NodeGet->uPalId);

        if (pCurrDef->indexImgToUse != INVALID_UNIT_VALUE)
        {
            nImgUnitId = pCurrDef->indexImgToUse;
            nTargetImgId = pCurrDef->indexOffsetToUse;
        }
        else
        {
            fShouldUseAlternateLoadLogic = true;

            CreateDefPal(NodeGet, 0);

            // Only internal units get sprites
            ClearSetImgTicket(nullptr);

            SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, 1);
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        CreateDefPal(NodeGet, 0);

        // Only internal units get sprites
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}
