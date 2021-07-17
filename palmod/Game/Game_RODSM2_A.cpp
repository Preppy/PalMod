#include "StdAfx.h"
#include "GameDef.h"
#include "Game_RODSM2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define RODSM2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_RODSM2_A::RODSM2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_RODSM2_A::MainDescTree = nullptr;

int CGame_RODSM2_A::rgExtraCountAll[RODSM2_A_NUMUNITS + 1];
int CGame_RODSM2_A::rgExtraLoc[RODSM2_A_NUMUNITS + 1];

UINT32 CGame_RODSM2_A::m_nTotalPaletteCountForSM2 = 0;
UINT32 CGame_RODSM2_A::m_nExpectedGameROMSize = 0x80000;
UINT32 CGame_RODSM2_A::m_nConfirmedROMSize = -1;

void CGame_RODSM2_A::InitializeStatics()
{
    safe_delete_array(CGame_RODSM2_A::RODSM2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_RODSM2_A::InitDescTree());
}

CGame_RODSM2_A::CGame_RODSM2_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_RODSM2_A::CGame_RODSM2_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = RODSM2_A_NUMUNITS;
    m_nExtraUnit = RODSM2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 202;
    m_pszExtraFilename = EXTRA_FILENAME_RODSM2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSM2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x7ce08;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = RODSM2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = RODSM2_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(RODSM2_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_RODSM2_A::~CGame_RODSM2_A(void)
{
    safe_delete_array(CGame_RODSM2_A::RODSM2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_RODSM2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Ring of Destruction: Slam Masters 2", L"smbe.05b",  0x0, 0 },
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

CDescTree* CGame_RODSM2_A::GetMainTree()
{
    return &CGame_RODSM2_A::MainDescTree;
}

int CGame_RODSM2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, RODSM2_A_NUMUNITS, nUnitId, RODSM2_A_EXTRA_CUSTOM);
}

int CGame_RODSM2_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, RODSM2_A_NUMUNITS, nUnitId, RODSM2_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_RODSM2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_RODSM2_A, RODSM2_A_EXTRA, &RODSM2_A_EXTRA_CUSTOM, RODSM2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = RODSM2_A_NUMUNITS + (GetExtraCt(RODSM2_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[RODSM2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSM2 = _InitDescTree(NewDescTree,
        RODSM2_A_UNITS,
        RODSM2_A_EXTRALOC,
        RODSM2_A_NUMUNITS,
        rgExtraCountAll,
        rgExtraLoc,
        RODSM2_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_RODSM2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"smbe.05b");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_RODSM2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(RODSM2_A_UNITS, rgExtraCountAll, RODSM2_A_NUMUNITS, RODSM2_A_EXTRALOC, nUnitId, RODSM2_A_EXTRA_CUSTOM);
}

UINT16 CGame_RODSM2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(RODSM2_A_UNITS, rgExtraCountAll, RODSM2_A_NUMUNITS, RODSM2_A_EXTRALOC, nUnitId, nCollectionId, RODSM2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_RODSM2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(RODSM2_A_UNITS, RODSM2_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_RODSM2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(RODSM2_A_UNITS, rgExtraCountAll, RODSM2_A_NUMUNITS, RODSM2_A_EXTRALOC, nUnitId, RODSM2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_RODSM2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(RODSM2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_RODSM2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(RODSM2_A_UNITS, rgExtraCountAll, RODSM2_A_NUMUNITS, RODSM2_A_EXTRALOC, nUnitId, nPaletteId, RODSM2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_RODSM2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(RODSM2_A_UNITS, rgExtraCountAll, RODSM2_A_NUMUNITS, RODSM2_A_EXTRALOC, nUnitId, nPaletteId, RODSM2_A_EXTRA_CUSTOM);
}

void CGame_RODSM2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != RODSM2_A_EXTRALOC)
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
    else // RODSM2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSM2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_RODSM2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(RODSM2_A_UNITS, rgExtraCountAll, RODSM2_A_NUMUNITS, RODSM2_A_EXTRALOC, RODSM2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
