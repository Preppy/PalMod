#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF01_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF01_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF01_A::KOF01_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF01_A::MainDescTree = nullptr;

int CGame_KOF01_A::rgExtraCountAll[KOF01_A_NUMUNIT + 1];
int CGame_KOF01_A::rgExtraLoc[KOF01_A_NUMUNIT + 1];

UINT32 CGame_KOF01_A::m_nTotalPaletteCountForKOF01 = 0;
UINT32 CGame_KOF01_A::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_KOF01_A::m_nConfirmedROMSize = -1;

void CGame_KOF01_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF01_A::KOF01_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF01_A::InitDescTree());
}

CGame_KOF01_A::CGame_KOF01_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KOF01_A::CGame_KOF01_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF01_A_NUMUNIT;
    m_nExtraUnit = KOF01_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 90;
    m_pszExtraFilename = EXTRA_FILENAME_KOF01_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF01;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x387122;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF01_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF01_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(KOF01_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_PK);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_KOF01_A::~CGame_KOF01_A(void)
{
    safe_delete_array(CGame_KOF01_A::KOF01_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF01_A::GetMainTree()
{
    return &CGame_KOF01_A::MainDescTree;
}

int CGame_KOF01_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    if (rgExtraCountAll[0] == -1)
    {
        int nDefCtr = 0;
        memset(rgExtraCountAll, 0, ((KOF01_A_NUMUNIT + 1) * sizeof(int)));

        stExtraDef* pCurrDef = GetExtraDefForKOF01(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible || !bCountVisibleOnly)
            {
                rgExtraCountAll[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForKOF01(nDefCtr);
        }
    }

    return rgExtraCountAll[nUnitId];
}

int CGame_KOF01_A::GetExtraLoc(UINT16 nUnitId)
{
    if (rgExtraLoc[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLoc, 0, (KOF01_A_NUMUNIT + 1) * sizeof(int));

        stExtraDef* pCurrDef = GetExtraDefForKOF01(0);

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = GetExtraDefForKOF01(nDefCtr);
        }
    }

    return rgExtraLoc[nUnitId];
}

sDescTreeNode* CGame_KOF01_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF01_A, KOF01_A_EXTRA, &KOF01_A_EXTRA_CUSTOM, KOF01_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF01_A_NUMUNIT + (GetExtraCt(KOF01_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF01_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF01 = _InitDescTree(NewDescTree,
        KOF01_A_UNITS,
        KOF01_A_EXTRALOC,
        KOF01_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF01_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_KOF01_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"pal_a.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF01_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"King of Fighters 2001 (Neo-Geo)", L"262-p2-08-e0.sp2", 0x8e0d8329, 0 },
        { L"Crouching Tiger Hidden Dragon 2003 (Bootleg)", L"5003-p2.bin", 0xadc1c22b, 0 },
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

UINT16 CGame_KOF01_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, KOF01_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF01_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, nCollectionId, KOF01_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF01_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF01_A_UNITS, KOF01_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF01_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, KOF01_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF01_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF01_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF01_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, nPaletteId, KOF01_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF01_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, nUnitId, nPaletteId, KOF01_A_EXTRA_CUSTOM);
}

void CGame_KOF01_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KOF01_A_EXTRALOC)
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
    else // KOF01_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF01(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF01_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF01_A_UNITS, rgExtraCountAll, KOF01_A_NUMUNIT, KOF01_A_EXTRALOC, KOF01_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
