#include "StdAfx.h"
#include "GameDef.h"
#include "Game_RBFF1_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define RBFF1_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_RBFF1_A::RBFF1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_RBFF1_A::MainDescTree = nullptr;

int CGame_RBFF1_A::rgExtraCountAll[RBFF1_A_NUMUNIT + 1];
int CGame_RBFF1_A::rgExtraLoc[RBFF1_A_NUMUNIT + 1];

UINT32 CGame_RBFF1_A::m_nTotalPaletteCountForRBFF1 = 0;
UINT32 CGame_RBFF1_A::m_nExpectedGameROMSize = 0x100000;
UINT32 CGame_RBFF1_A::m_nConfirmedROMSize = -1;

void CGame_RBFF1_A::InitializeStatics()
{
    safe_delete_array(CGame_RBFF1_A::RBFF1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_RBFF1_A::InitDescTree());
}

CGame_RBFF1_A::CGame_RBFF1_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_RBFF1_A::CGame_RBFF1_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = RBFF1_A_NUMUNIT;
    m_nExtraUnit = RBFF1_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 64;
    m_pszExtraFilename = EXTRA_FILENAME_RBFF1_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForRBFF1;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xc0200;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = RBFF1_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = RBFF1_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(RBFF1_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AOF3;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AOF3);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_RBFF1_A::~CGame_RBFF1_A(void)
{
    safe_delete_array(CGame_RBFF1_A::RBFF1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_RBFF1_A::GetMainTree()
{
    return &CGame_RBFF1_A::MainDescTree;
}

int CGame_RBFF1_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, RBFF1_A_NUMUNIT, nUnitId, RBFF1_A_EXTRA_CUSTOM);
}

int CGame_RBFF1_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, RBFF1_A_NUMUNIT, nUnitId, RBFF1_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_RBFF1_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_RBFF1_A, RBFF1_A_EXTRA, &RBFF1_A_EXTRA_CUSTOM, RBFF1_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = RBFF1_A_NUMUNIT + (GetExtraCt(RBFF1_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[RBFF1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;


    m_nTotalPaletteCountForRBFF1 = _InitDescTree(NewDescTree,
        RBFF1_A_UNITS,
        RBFF1_A_EXTRALOC,
        RBFF1_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        RBFF1_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_RBFF1_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"095-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_RBFF1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Real Bout Fatal Fury (Neo-Geo)", L"095-p1.p1", 0x63b4d8ae, 0 },
        { L"Real Bout Fatal Fury (Neo-Geo)", L"095-p1.bin", 0x63b4d8ae, 0 },
        { L"Real Bout Fatal Fury (Neo-Geo Korea)", L"095-p1k.p1", 0xf705364b, 0 },
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

UINT16 CGame_RBFF1_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(RBFF1_A_UNITS, rgExtraCountAll, RBFF1_A_NUMUNIT, RBFF1_A_EXTRALOC, nUnitId, RBFF1_A_EXTRA_CUSTOM);
}

UINT16 CGame_RBFF1_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(RBFF1_A_UNITS, rgExtraCountAll, RBFF1_A_NUMUNIT, RBFF1_A_EXTRALOC, nUnitId, nCollectionId, RBFF1_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_RBFF1_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(RBFF1_A_UNITS, RBFF1_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_RBFF1_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(RBFF1_A_UNITS, rgExtraCountAll, RBFF1_A_NUMUNIT, RBFF1_A_EXTRALOC, nUnitId, RBFF1_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_RBFF1_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(RBFF1_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_RBFF1_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(RBFF1_A_UNITS, rgExtraCountAll, RBFF1_A_NUMUNIT, RBFF1_A_EXTRALOC, nUnitId, nPaletteId, RBFF1_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_RBFF1_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(RBFF1_A_UNITS, rgExtraCountAll, RBFF1_A_NUMUNIT, RBFF1_A_EXTRALOC, nUnitId, nPaletteId, RBFF1_A_EXTRA_CUSTOM);
}

void CGame_RBFF1_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != RBFF1_A_EXTRALOC)
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
    else // RBFF1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForRBFF1(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_RBFF1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(RBFF1_A_UNITS, rgExtraCountAll, RBFF1_A_NUMUNIT, RBFF1_A_EXTRALOC, RBFF1_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
