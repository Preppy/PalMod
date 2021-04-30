#include "StdAfx.h"
#include "GameDef.h"
#include "Game_FatalFury1_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define FatalFury1_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_FatalFury1_A::FatalFury1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_FatalFury1_A::MainDescTree = nullptr;

int CGame_FatalFury1_A::rgExtraCountAll[FatalFury1_A_NUMUNIT + 1];
int CGame_FatalFury1_A::rgExtraLoc[FatalFury1_A_NUMUNIT + 1];

UINT32 CGame_FatalFury1_A::m_nTotalPaletteCountForFatalFury1 = 0;
UINT32 CGame_FatalFury1_A::m_nExpectedGameROMSize = 0x80000;
UINT32 CGame_FatalFury1_A::m_nConfirmedROMSize = -1;

void CGame_FatalFury1_A::InitializeStatics()
{
    safe_delete_array(CGame_FatalFury1_A::FatalFury1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_FatalFury1_A::InitDescTree());
}

CGame_FatalFury1_A::CGame_FatalFury1_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_FatalFury1_A::CGame_FatalFury1_A: Loading ROM...\n");

    //Set color mode: see the definitions in GameClass.h
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = FatalFury1_A_NUMUNIT;
    m_nExtraUnit = FatalFury1_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 45;
    m_pszExtraFilename = EXTRA_FILENAME_FatalFury1_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForFatalFury1;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x32d6c;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = FatalFury1_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = FatalFury1_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(FatalFury1_A_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_FatalFury1_A::~CGame_FatalFury1_A(void)
{
    safe_delete_array(CGame_FatalFury1_A::FatalFury1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

sFileRule CGame_FatalFury1_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"033-p1.p1"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_FatalFury1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury: King of Fighters (Neo-Geo)", L"033-p1.p1", 0x47ebdc2f, 0 },
        { L"Fatal Fury: King of Fighters (Neo-Geo)", L"033-p1.bin", 0x47ebdc2f, 0 },
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

CDescTree* CGame_FatalFury1_A::GetMainTree()
{
    return &CGame_FatalFury1_A::MainDescTree;
}

int CGame_FatalFury1_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, FatalFury1_A_NUMUNIT, nUnitId, FatalFury1_A_EXTRA_CUSTOM);
}

int CGame_FatalFury1_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, FatalFury1_A_NUMUNIT, nUnitId, FatalFury1_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_FatalFury1_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_FatalFury1_A, FatalFury1_A_EXTRA, &FatalFury1_A_EXTRA_CUSTOM, FatalFury1_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = FatalFury1_A_NUMUNIT + (GetExtraCt(FatalFury1_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[FatalFury1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForFatalFury1 = _InitDescTree(NewDescTree,
        FatalFury1_A_UNITS,
        FatalFury1_A_EXTRALOC,
        FatalFury1_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        FatalFury1_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

UINT16 CGame_FatalFury1_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(FatalFury1_A_UNITS, rgExtraCountAll, FatalFury1_A_NUMUNIT, FatalFury1_A_EXTRALOC, nUnitId, FatalFury1_A_EXTRA_CUSTOM);
}

UINT16 CGame_FatalFury1_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(FatalFury1_A_UNITS, rgExtraCountAll, FatalFury1_A_NUMUNIT, FatalFury1_A_EXTRALOC, nUnitId, nCollectionId, FatalFury1_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_FatalFury1_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(FatalFury1_A_UNITS, FatalFury1_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_FatalFury1_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(FatalFury1_A_UNITS, rgExtraCountAll, FatalFury1_A_NUMUNIT, FatalFury1_A_EXTRALOC, nUnitId, FatalFury1_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_FatalFury1_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(FatalFury1_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_FatalFury1_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(FatalFury1_A_UNITS, rgExtraCountAll, FatalFury1_A_NUMUNIT, FatalFury1_A_EXTRALOC, nUnitId, nPaletteId, FatalFury1_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_FatalFury1_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(FatalFury1_A_UNITS, rgExtraCountAll, FatalFury1_A_NUMUNIT, FatalFury1_A_EXTRALOC, nUnitId, nPaletteId, FatalFury1_A_EXTRA_CUSTOM);
}

void CGame_FatalFury1_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != FatalFury1_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            // Adjust for ROM-specific variant locations
            if (m_pCRC32SpecificData)
            {
                m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // FatalFury1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForFatalFury1_A(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_FatalFury1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(FatalFury1_A_UNITS, rgExtraCountAll, FatalFury1_A_NUMUNIT, FatalFury1_A_EXTRALOC, FatalFury1_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
