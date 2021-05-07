#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MMX_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define MMX_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

// There are two different versions of game: one split, and one not.
// So we just won't use sizing values here.
UINT32 CGame_MMX_SNES::m_nExpectedGameROMSize = 0x100000;

CGame_MMX_SNES::CGame_MMX_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MMX_SNES::CGame_MMX_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MMX_SNES_NUMUNIT;
    m_nExtraUnit = MMX_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 20;
    m_pszExtraFilename = EXTRA_FILENAME_MMX_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMMX;

    m_nLowestKnownPaletteRomLocation = 0x2b700;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = MMX_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = nullptr;  // MMX_SNES_IMG_UNITS
    nImgUnitAmt = 0; // ARRAYSIZE(MMX_SNES_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in gamedef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating MMX to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_MMX_SNES::MMX_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_MMX_SNES::MainDescTree = nullptr;
int CGame_MMX_SNES::rgExtraCountAll[MMX_SNES_NUMUNIT + 1];
int CGame_MMX_SNES::rgExtraLoc[MMX_SNES_NUMUNIT + 1];
UINT32 CGame_MMX_SNES::m_nTotalPaletteCountForMMX = 0;
UINT32 CGame_MMX_SNES::m_nConfirmedROMSize = -1;

void CGame_MMX_SNES::InitializeStatics()
{
    safe_delete_array(CGame_MMX_SNES::MMX_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MMX_SNES::InitDescTree());
}

CGame_MMX_SNES::~CGame_MMX_SNES(void)
{
    safe_delete_array(CGame_MMX_SNES::MMX_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_MMX_SNES::GetMainTree()
{
    return &CGame_MMX_SNES::MainDescTree;
}

int CGame_MMX_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MMX_SNES_NUMUNIT, nUnitId, MMX_SNES_EXTRA_CUSTOM);
}

int CGame_MMX_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MMX_SNES_NUMUNIT, nUnitId, MMX_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MMX_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MMX_SNES, MMX_SNES_EXTRA, &MMX_SNES_EXTRA_CUSTOM, MMX_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MMX_SNES_NUMUNIT + (GetExtraCt(MMX_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MMX_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMMX = _InitDescTree(NewDescTree,
        MMX_SNES_UNITS,
        MMX_SNES_EXTRALOC,
        MMX_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MMX_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MMX_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, MMX_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1;

    return NewFileRule;
}

UINT16 CGame_MMX_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(MMX_SNES_UNITS, rgExtraCountAll, MMX_SNES_NUMUNIT, MMX_SNES_EXTRALOC, nUnitId, MMX_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_MMX_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(MMX_SNES_UNITS, rgExtraCountAll, MMX_SNES_NUMUNIT, MMX_SNES_EXTRALOC, nUnitId, nCollectionId, MMX_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_MMX_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(MMX_SNES_UNITS, MMX_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_MMX_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(MMX_SNES_UNITS, rgExtraCountAll, MMX_SNES_NUMUNIT, MMX_SNES_EXTRALOC, nUnitId, MMX_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MMX_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(MMX_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_MMX_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MMX_SNES_UNITS, rgExtraCountAll, MMX_SNES_NUMUNIT, MMX_SNES_EXTRALOC, nUnitId, nPaletteId, MMX_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MMX_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(MMX_SNES_UNITS, rgExtraCountAll, MMX_SNES_NUMUNIT, MMX_SNES_EXTRALOC, nUnitId, nPaletteId, MMX_SNES_EXTRA_CUSTOM);
}

void CGame_MMX_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != MMX_SNES_EXTRALOC)
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
    else // MMX_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&MMX_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MMX_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MMX_SNES_UNITS, rgExtraCountAll, MMX_SNES_NUMUNIT, MMX_SNES_EXTRALOC, MMX_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
