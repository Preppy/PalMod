#include "StdAfx.h"
#include "Game_KOTM_A.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_KOTM_A::KOTM_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOTM_A::MainDescTree = nullptr;

uint32_t CGame_KOTM_A::rgExtraCountAll[KOTM_A_NUMUNIT + 1] = { (uint32_t)-1 };
uint32_t CGame_KOTM_A::rgExtraLoc[KOTM_A_NUMUNIT + 1] = { (uint32_t)-1 };

uint32_t CGame_KOTM_A::m_nTotalPaletteCountForKOTM = 0;
uint32_t CGame_KOTM_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
uint32_t CGame_KOTM_A::m_nConfirmedROMSize = -1;

void CGame_KOTM_A::InitializeStatics()
{
    safe_delete_array(CGame_KOTM_A::KOTM_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOTM_A::InitDescTree());
}

CGame_KOTM_A::CGame_KOTM_A(uint32_t nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = KOTM_A_NUMUNIT + (GetExtraCt(KOTM_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = KOTM_A_NUMUNIT;
    m_nExtraUnit = KOTM_A_EXTRALOC;
    m_nSafeCountForThisRom = 49 + GetExtraCt(KOTM_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_KOTM;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOTM;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x20000;

    InitDataBuffer();

    //Set game information
    nGameFlag = KOTM_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    m_prgGameImageSet = KOTM_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOTM_A::~CGame_KOTM_A()
{
    safe_delete_array(CGame_KOTM_A::KOTM_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

uint32_t CGame_KOTM_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of the Monsters (Neo-Geo set 1)", L"016-p1.p1", 0x1b818731, 0 },
        { L"King of the Monsters (Neo-Geo set 2)", L"016-hp1.bin", 0xb774621e, 0 },
    };

    if (ppKnownROMSet)
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

sFileRule CGame_KOTM_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"016-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

sDescTreeNode* CGame_KOTM_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOTM, &KOTM_A_EXTRA_CUSTOM, KOTM_A_EXTRALOC, m_nConfirmedROMSize);

    const uint16_t nUnitCt = KOTM_A_NUMUNIT + (GetExtraCt(KOTM_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOTM_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOTM = _InitDescTree(NewDescTree,
        KOTM_UNITS,
        KOTM_A_EXTRALOC,
        KOTM_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOTM_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

void CGame_KOTM_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != KOTM_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOTM(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

uint32_t CGame_KOTM_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOTM_A_NUMUNIT, nUnitId, KOTM_A_EXTRA_CUSTOM);
}

uint32_t CGame_KOTM_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOTM_A_NUMUNIT, nUnitId, KOTM_A_EXTRA_CUSTOM);
}

CDescTree* CGame_KOTM_A::GetMainTree()
{
    return &CGame_KOTM_A::MainDescTree;
}

uint32_t CGame_KOTM_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, nUnitId, KOTM_A_EXTRA_CUSTOM);
}

uint32_t CGame_KOTM_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, nUnitId, nCollectionId, KOTM_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOTM_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(KOTM_UNITS, KOTM_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_KOTM_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, nUnitId, KOTM_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOTM_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(KOTM_UNITS, nUnitId, nCollectionId);
}

uint32_t CGame_KOTM_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetNodeSizeFromPaletteId(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, nUnitId, nPaletteId, KOTM_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_KOTM_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, nUnitId, nPaletteId, KOTM_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOTM_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, nUnitId, nPaletteId, KOTM_A_EXTRA_CUSTOM);
}

BOOL CGame_KOTM_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOTM_UNITS, rgExtraCountAll, KOTM_A_NUMUNIT, KOTM_A_EXTRALOC, KOTM_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
