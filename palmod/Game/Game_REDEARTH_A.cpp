#include "StdAfx.h"
#include "Game_REDEARTH_A.h"
#include "GameDef.h"
#include "..\ExtraFile.h"
#include "..\PalMod.h"
#include "..\regproc.h"

stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30 = NULL;
stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31 = NULL;
stExtraDef* CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_50 = NULL;

uint32_t CGame_REDEARTH_A::rgExtraCountAll_30[REDEARTH_A_NUMUNIT_30 + 1] = { (uint32_t)-1 };
uint32_t CGame_REDEARTH_A::rgExtraCountAll_31[REDEARTH_A_NUMUNIT_31 + 1] = { (uint32_t)-1 };
uint32_t CGame_REDEARTH_A::rgExtraCountAll_50[REDEARTH_A_NUMUNIT_50 + 1] = { (uint32_t)-1 };
uint32_t CGame_REDEARTH_A::rgExtraLoc_30[REDEARTH_A_NUMUNIT_30 + 1] = { (uint32_t)-1 };
uint32_t CGame_REDEARTH_A::rgExtraLoc_31[REDEARTH_A_NUMUNIT_31 + 1] = { (uint32_t)-1 };
uint32_t CGame_REDEARTH_A::rgExtraLoc_50[REDEARTH_A_NUMUNIT_50 + 1] = { (uint32_t)-1 };

CDescTree CGame_REDEARTH_A::MainDescTree_30 = nullptr;
CDescTree CGame_REDEARTH_A::MainDescTree_31 = nullptr;
CDescTree CGame_REDEARTH_A::MainDescTree_50 = nullptr;

uint32_t CGame_REDEARTH_A::m_nRedEarthMode = 31;
uint32_t CGame_REDEARTH_A::m_nTotalPaletteCount30 = 0;
uint32_t CGame_REDEARTH_A::m_nTotalPaletteCount31 = 0;
uint32_t CGame_REDEARTH_A::m_nTotalPaletteCount50 = 0;

uint32_t CGame_REDEARTH_A::m_nConfirmedROMSize = -1;

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

CGame_REDEARTH_A::CGame_REDEARTH_A(uint32_t nConfirmedROMSize /* = -1 */, int nRedEarthModeToLoad /* = 31 */)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    m_nRedEarthMode = nRedEarthModeToLoad;

    const uint32_t nSafeCountFor30 = 473;
    const uint32_t nSafeCountFor31 = 1297;
    const uint32_t nSafeCountFor50 = 4;

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

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_REDEARTH_A::~CGame_REDEARTH_A()
{
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_30);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_31);
    safe_delete_array(CGame_REDEARTH_A::REDEARTH_A_EXTRA_CUSTOM_50);
    //Get rid of the file changed flag
    ClearDataBuffer();
    FlushChangeTrackingArray();
}

uint32_t CGame_REDEARTH_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
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

uint32_t CGame_REDEARTH_A::GetExtraLoc(uint32_t nUnitId)
{
    switch (m_nRedEarthMode)
    {
    case 30:
        return _GetExtraLocation(rgExtraLoc_30, REDEARTH_A_NUMUNIT_30, nUnitId, REDEARTH_A_EXTRA_CUSTOM_30);
    case 31:
    default:
        return _GetExtraLocation(rgExtraLoc_31, REDEARTH_A_NUMUNIT_31, nUnitId, REDEARTH_A_EXTRA_CUSTOM_31);
    case 50:
        return _GetExtraLocation(rgExtraLoc_50, REDEARTH_A_NUMUNIT_50, nUnitId, REDEARTH_A_EXTRA_CUSTOM_50);
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
    m_pppDataBuffer = new uint16_t * *[nUnitAmt];
    memset(m_pppDataBuffer, 0, sizeof(uint16_t**) * nUnitAmt);
}

void CGame_REDEARTH_A::ClearDataBuffer()
{
    // We walk the tree to clear it according to RedEarth mode, but if you live switch games
    // we would use the new mode incorrectly as we clear the old buffer.
    int nCurrentRedEarthMode = m_nRedEarthMode;

    m_nRedEarthMode = m_nBufferRedEarthMode;

    if (m_pppDataBuffer)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                uint32_t nPaletteCount = GetPaletteCountForUnit(nUnitCtr);

                for (uint16_t nPaletteIndex = 0; nPaletteIndex < nPaletteCount; nPaletteIndex++)
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
    m_nRedEarthMode = nPaletteSetToUse;

    bool fHaveExtras;
    uint16_t nUnitCt;

    switch (m_nRedEarthMode)
    {
    case 30:
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_30, &REDEARTH_A_EXTRA_CUSTOM_30, REDEARTH_A_EXTRALOC_30, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(REDEARTH_A_EXTRALOC_30) != 0;
        nUnitCt = REDEARTH_A_NUMUNIT_30 + (GetExtraCt(REDEARTH_A_EXTRALOC_30) ? 1 : 0);
        break;
    case 31:
    default:
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_31, &REDEARTH_A_EXTRA_CUSTOM_31, REDEARTH_A_EXTRALOC_31, m_nConfirmedROMSize);
        fHaveExtras = GetExtraCt(REDEARTH_A_EXTRALOC_31) != 0;
        nUnitCt = REDEARTH_A_NUMUNIT_31 + (GetExtraCt(REDEARTH_A_EXTRALOC_31) ? 1 : 0);
        break;
    case 50:
        LoadExtraFileForGame(EXTRA_FILENAME_REDEARTH_50, &REDEARTH_A_EXTRA_CUSTOM_50, REDEARTH_A_EXTRALOC_50, m_nConfirmedROMSize);
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

sFileRule CGame_REDEARTH_A::GetRule(uint32_t nUnitId)
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

uint32_t CGame_REDEARTH_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Red Earth: Stages (CPS3 ROM 30)",     L"30", 0x074cab4d, 0 },
        { L"Red Earth: Characters (CPS3 ROM 31)", L"31", 0x14e2cad4, 0 },
        { L"Red Earth: Coming Next (CPS3 ROM 50)", L"50", 0x2f5b44bd, 0 },
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

uint32_t CGame_REDEARTH_A::GetCollectionCountForUnit(uint32_t nUnitId)
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

uint32_t CGame_REDEARTH_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
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

LPCWSTR CGame_REDEARTH_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
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

uint32_t CGame_REDEARTH_A::GetPaletteCountForUnit(uint32_t nUnitId)
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

const sGame_PaletteDataset* CGame_REDEARTH_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
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

const sGame_PaletteDataset* CGame_REDEARTH_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

uint32_t CGame_REDEARTH_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    // Don't use this for Extra palettes.
    uint32_t nNodeSize = 0;
    uint32_t nTotalCollections = GetCollectionCountForUnit(nUnitId);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    uint32_t nDistanceFromZero = nPaletteId;

    for (uint32_t nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = GetPaletteSet(nUnitId, nCollectionIndex);
        uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, nCollectionIndex);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGame_REDEARTH_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
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

void CGame_REDEARTH_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
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

bool CGame_REDEARTH_A::CanEnableMultispriteExport(uint32_t nUnitId, uint32_t nPalId)
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
    if (pUnitTree->uChildAmt >= pButtonLabelSet.size())
    {
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pUnitTree->ChildNodes);

        isBalanced = (pCurrentCollection[0].uChildAmt == pCurrentCollection[1].uChildAmt);

        if (isBalanced)
        {
            // We know the button nodes are balanced... but are we in a core button node?
            isBalanced = nPalId < (pButtonLabelSet.size()* pCurrentCollection[0].uChildAmt);
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
    int nTargetImgId = 0;
    uint32_t nImgUnitId = NodeGet->uUnitId;

    uint32_t nSrcStart = NodeGet->uPalId;
    uint32_t nSrcAmt = 1;
    uint32_t nNodeIncrement = 1;

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
                else
                {
                    OutputDebugString(L"DANGER ZACH ROBINSON!\r\n");
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                int8_t nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance);

                if (paletteDataSetToJoin)
                {
                    if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1) // link the entire node
                    {
                        const uint32_t nStageCount = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);

                        fShouldUseAlternateLoadLogic = true;
                        sImgTicket* pImgArray = nullptr;

                        for (uint32_t nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
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
                    else if ((paletteDataSet->pPalettePairingInfo->nPalettesToJoin > 1) &&
                             (paletteDataSet->pPalettePairingInfo->nPalettesToJoin <= MAXIMUM_PALETTE_PAIRS_ALLOWED))
                    {
                        std::vector<const sGame_PaletteDataset*> vsPaletteDataSetToJoin;
                        std::vector<int8_t> vnPeerPaletteDistances;
                        bool fAllNodesFound = true;

                        for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                        {
                            switch (nPairIndex)
                            {
                            case 0:
                                vnPeerPaletteDistances.push_back(0);
                                break;
                            case 1:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner);
                                break;
                            case 2:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner);
                                break;
                            case 3:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner);
                                break;
                            case 4:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo4thPartner);
                                break;
                            case 5:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo5thPartner);
                                break;
                            case 6:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo6thPartner);
                                break;
                            case 7:
                                vnPeerPaletteDistances.push_back(paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo7thPartner);
                                break;
                            default:
                                // Anything past this just gets default pairing
                                vnPeerPaletteDistances.push_back(nPairIndex);
                                break;
                            }

                            const sGame_PaletteDataset* paletteDataSetToJoin = GetSpecificPalette(NodeGet->uUnitId, NodeGet->uPalId + vnPeerPaletteDistances[nPairIndex]);

                            if (paletteDataSetToJoin)
                            {
                                vsPaletteDataSetToJoin.push_back(paletteDataSetToJoin);
                            }
                            else
                            {
                                fAllNodesFound = false;
                            }
                        }

                        std::vector<sDescNode*> vsJoinedNodes;

                        for (uint32_t nNodeIndex = 0; nNodeIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nNodeIndex++)
                        {
                            sDescNode* sSearchedNode = nullptr;

                            // We need to readjust the nodes here.
                            uint32_t nNodeSize = GetNodeSizeFromPaletteId(NodeGet->uUnitId, NodeGet->uPalId);
                            uint32_t nAdjustedCollectionIndex = Node02;
                            ptrdiff_t nAdjustedButtonIndex = Node03 + vnPeerPaletteDistances[nNodeIndex];

                            while (nAdjustedButtonIndex >= 0)
                            {
                                sSearchedNode = GetMainTree()->GetDescNode(Node01, nAdjustedCollectionIndex, nAdjustedButtonIndex, -1);

                                if (sSearchedNode)
                                {
                                    break;
                                }

                                // This palette isn't in this node: walk to the next available node for this unit.
                                nAdjustedButtonIndex -= nNodeSize;
                                nAdjustedCollectionIndex++;
                            }

                            if (sSearchedNode)
                            {
                                vsJoinedNodes.push_back(sSearchedNode);
                            }
                            else
                            {
                                fAllNodesFound = false;
                            }
                        }

                        if (fAllNodesFound)
                        {
                            fShouldUseAlternateLoadLogic = true;

                            std::vector<sImgTicket*> vsImagePairs;
                            sImgTicket* pPreviousImage = nullptr;

                            for (int32_t nNodeIndex = (paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1); nNodeIndex >= 0; nNodeIndex--)
                            {
                                sImgTicket* pThisImage = CreateImgTicket(vsPaletteDataSetToJoin[nNodeIndex]->indexImgToUse, vsPaletteDataSetToJoin[nNodeIndex]->indexOffsetToUse, pPreviousImage);

                                vsImagePairs.push_back(pThisImage);

                                pPreviousImage = pThisImage;
                            }

                            ClearSetImgTicket(vsImagePairs[(paletteDataSet->pPalettePairingInfo->nPalettesToJoin - 1)]);

                            for (uint32_t nPairIndex = 0; nPairIndex < paletteDataSet->pPalettePairingInfo->nPalettesToJoin; nPairIndex++)
                            {
                                //Set each palette
                                CreateDefPal(vsJoinedNodes[nPairIndex], nPairIndex);

                                SetSourcePal(nPairIndex, NodeGet->uUnitId, nSrcStart + vnPeerPaletteDistances[nPairIndex], nSrcAmt, nNodeIncrement);
                            }
                        }
                        else
                        {
                            OutputDebugString(L"ERROR: Invalid palette pairing requested.   You probably want to check the linkage here.\n");
                        }
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
