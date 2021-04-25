#include "StdAfx.h"
#include "GameDef.h"
#include "Game_FatalFuryS_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define FatalFuryS_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_FatalFuryS_SNES::FatalFuryS_SNES_EXTRA_CUSTOM = nullptr;

CDescTree CGame_FatalFuryS_SNES::MainDescTree = nullptr;

int CGame_FatalFuryS_SNES::rgExtraCountAll[FatalFuryS_SNES_NUMUNIT + 1];
int CGame_FatalFuryS_SNES::rgExtraLoc[FatalFuryS_SNES_NUMUNIT + 1];

UINT32 CGame_FatalFuryS_SNES::m_nTotalPaletteCountForFatalFuryS = 0;
UINT32 CGame_FatalFuryS_SNES::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_FatalFuryS_SNES::m_nConfirmedROMSize = -1;

void CGame_FatalFuryS_SNES::InitializeStatics()
{
    safe_delete_array(CGame_FatalFuryS_SNES::FatalFuryS_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_FatalFuryS_SNES::InitDescTree());
}

CGame_FatalFuryS_SNES::CGame_FatalFuryS_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_FatalFuryS_SNES::CGame_FatalFuryS_SNES: Loading ROM...\n");

    //Set color mode: see the definitions in GameClass.h
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = FatalFuryS_SNES_NUMUNIT;
    m_nExtraUnit = FatalFuryS_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 30;
    m_pszExtraFilename = EXTRA_FILENAME_FatalFuryS_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForFatalFuryS;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x13f1a0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = FatalFuryS_SNES;
    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = nullptr;
    nImgUnitAmt = 0;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AB;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AB);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_FatalFuryS_SNES::~CGame_FatalFuryS_SNES(void)
{
    safe_delete_array(CGame_FatalFuryS_SNES::FatalFuryS_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

sFileRule CGame_FatalFuryS_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Fatal Fury Special (USA).sfc"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_FatalFuryS_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury Special (SNES)", L"Fatal Fury Special (USA).sfc", 0, 0 },
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

CDescTree* CGame_FatalFuryS_SNES::GetMainTree()
{
    return &CGame_FatalFuryS_SNES::MainDescTree;
}

int CGame_FatalFuryS_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, nUnitId, FatalFuryS_SNES_EXTRA_CUSTOM);
}

int CGame_FatalFuryS_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, FatalFuryS_SNES_NUMUNIT, nUnitId, FatalFuryS_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_FatalFuryS_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_FatalFuryS_SNES, FatalFuryS_SNES_EXTRA, &FatalFuryS_SNES_EXTRA_CUSTOM, FatalFuryS_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = FatalFuryS_SNES_NUMUNIT + (GetExtraCt(FatalFuryS_SNES_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[FatalFuryS_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForFatalFuryS = _InitDescTree(NewDescTree,
        FatalFuryS_SNES_UNITS,
        FatalFuryS_SNES_EXTRALOC,
        FatalFuryS_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        FatalFuryS_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

UINT16 CGame_FatalFuryS_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(FatalFuryS_SNES_UNITS, rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, FatalFuryS_SNES_EXTRALOC, nUnitId, FatalFuryS_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_FatalFuryS_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(FatalFuryS_SNES_UNITS, rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, FatalFuryS_SNES_EXTRALOC, nUnitId, nCollectionId, FatalFuryS_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_FatalFuryS_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(FatalFuryS_SNES_UNITS, FatalFuryS_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_FatalFuryS_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(FatalFuryS_SNES_UNITS, rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, FatalFuryS_SNES_EXTRALOC, nUnitId, FatalFuryS_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_FatalFuryS_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(FatalFuryS_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_FatalFuryS_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(FatalFuryS_SNES_UNITS, rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, FatalFuryS_SNES_EXTRALOC, nUnitId, nPaletteId, FatalFuryS_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_FatalFuryS_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(FatalFuryS_SNES_UNITS, rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, FatalFuryS_SNES_EXTRALOC, nUnitId, nPaletteId, FatalFuryS_SNES_EXTRA_CUSTOM);
}

void CGame_FatalFuryS_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != FatalFuryS_SNES_EXTRALOC)
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
    else // FatalFuryS_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForFatalFuryS(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_FatalFuryS_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(FatalFuryS_SNES_UNITS, rgExtraCountAll, FatalFuryS_SNES_NUMUNIT, FatalFuryS_SNES_EXTRALOC, FatalFuryS_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
