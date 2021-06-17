#include "StdAfx.h"
#include "GameDef.h"
#include "Game_GEMFIGHTER_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define GEMFIGHTER_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_GEMFIGHTER_A::GEMFIGHTER_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_GEMFIGHTER_A::MainDescTree = nullptr;

int CGame_GEMFIGHTER_A::rgExtraCountAll[GEMFIGHTER_A_NUMUNITS + 1];
int CGame_GEMFIGHTER_A::rgExtraLoc[GEMFIGHTER_A_NUMUNITS + 1];

UINT32 CGame_GEMFIGHTER_A::m_nTotalPaletteCountForGemFighter = 0;
UINT32 CGame_GEMFIGHTER_A::m_nExpectedGameROMSize = 0x80000;
UINT32 CGame_GEMFIGHTER_A::m_nConfirmedROMSize = -1;

void CGame_GEMFIGHTER_A::InitializeStatics()
{
    safe_delete_array(CGame_GEMFIGHTER_A::GEMFIGHTER_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_GEMFIGHTER_A::InitDescTree());
}

CGame_GEMFIGHTER_A::CGame_GEMFIGHTER_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_GEMFIGHTER_A::CGame_GEMFIGHTER_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = GEMFIGHTER_A_NUMUNITS;
    m_nExtraUnit = GEMFIGHTER_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 302;
    m_pszExtraFilename = EXTRA_FILENAME_GEMFIGHTER_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForGemFighter;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x99e6;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = GEMFIGHTER_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    nImgUnitAmt = ARRAYSIZE(GEMFIGHTER_A_IMGIDS_USED);
    m_prgGameImageSet = GEMFIGHTER_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_GEMFIGHTER;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_GEMFIGHTER);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_GEMFIGHTER_A::~CGame_GEMFIGHTER_A(void)
{
    safe_delete_array(CGame_GEMFIGHTER_A::GEMFIGHTER_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_GEMFIGHTER_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // sgemf    Super Gem Fighter: Mini Mix (US 970904)
        // sgemfa   Super Gem Fighter: Mini Mix (Asia 970904)
        // pfghtj   Pocket Fighter (Japan 970904)
        // sgemfh   Super Gem Fighter: Mini Mix (Hispanic 970904)
        { L"Super Gem Fighter: Mini Mix (USA 970904)", L"pcf.07",  0x5ac6d5ea, 0 },
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

CDescTree* CGame_GEMFIGHTER_A::GetMainTree()
{
    return &CGame_GEMFIGHTER_A::MainDescTree;
}

int CGame_GEMFIGHTER_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, nUnitId, GEMFIGHTER_A_EXTRA_CUSTOM);
}

int CGame_GEMFIGHTER_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, GEMFIGHTER_A_NUMUNITS, nUnitId, GEMFIGHTER_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_GEMFIGHTER_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_GEMFIGHTER_A, GEMFIGHTER_A_EXTRA, &GEMFIGHTER_A_EXTRA_CUSTOM, GEMFIGHTER_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = GEMFIGHTER_A_NUMUNITS + (GetExtraCt(GEMFIGHTER_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GEMFIGHTER_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForGemFighter = _InitDescTree(NewDescTree,
        GEMFIGHTER_A_UNITS,
        GEMFIGHTER_A_EXTRALOC,
        GEMFIGHTER_A_NUMUNITS,
        rgExtraCountAll,
        rgExtraLoc,
        GEMFIGHTER_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_GEMFIGHTER_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"pcf.07");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_GEMFIGHTER_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(GEMFIGHTER_A_UNITS, rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, GEMFIGHTER_A_EXTRALOC, nUnitId, GEMFIGHTER_A_EXTRA_CUSTOM);
}

UINT16 CGame_GEMFIGHTER_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(GEMFIGHTER_A_UNITS, rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, GEMFIGHTER_A_EXTRALOC, nUnitId, nCollectionId, GEMFIGHTER_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_GEMFIGHTER_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(GEMFIGHTER_A_UNITS, GEMFIGHTER_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_GEMFIGHTER_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(GEMFIGHTER_A_UNITS, rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, GEMFIGHTER_A_EXTRALOC, nUnitId, GEMFIGHTER_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_GEMFIGHTER_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(GEMFIGHTER_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_GEMFIGHTER_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(GEMFIGHTER_A_UNITS, rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, GEMFIGHTER_A_EXTRALOC, nUnitId, nPaletteId, GEMFIGHTER_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_GEMFIGHTER_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(GEMFIGHTER_A_UNITS, rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, GEMFIGHTER_A_EXTRALOC, nUnitId, nPaletteId, GEMFIGHTER_A_EXTRA_CUSTOM);
}

void CGame_GEMFIGHTER_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != GEMFIGHTER_A_EXTRALOC)
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
    else // GEMFIGHTER_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForGemFighter(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_GEMFIGHTER_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(GEMFIGHTER_A_UNITS, rgExtraCountAll, GEMFIGHTER_A_NUMUNITS, GEMFIGHTER_A_EXTRALOC, GEMFIGHTER_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
