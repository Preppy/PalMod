#include "StdAfx.h"
#include "GameDef.h"
#include "Game_NEWGAME_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// Howdy!  To adapt this file for your game:
// 
// In this file:
// * replace usage of NEWGAME with the shortname for your game.
// * slowly read through the first 100 lines of this file and make any changes you need to make to tune this for your game.
// * Please note that the few places you probably want to change here have a "// **" comment just above them

// Elsewhere:
// * go to game\gamedef.h and add your game to the end of SupportedGamesList
// * in gamedef.h add a string for your name to the end of g_GameFriendlyName
// * go to game\gameload.cpp and add an include for your game's header
// * in game\gameload.cpp add a handler for your game to CGameLoad::SetGame
// * in game\gameload.cpp add a handler for your game to CGameLoad::CreateGame
// * go to palmoddlg_file.cpp and add your game to the SupportedGameList array

// That's it!  Good luck!  If you have any questions, feel free to ask.

// This decides whether or not you get extra debug output while running under the debugger
#define NEWGAME_A_DEBUG DEFAULT_GAME_DEBUG_STATE

 // ** Update to the actual byte size in hex of the ROM file size you expect
UINT32 CGame_NEWGAME_A::m_nExpectedGameROMSize = 0x200000;

CGame_NEWGAME_A::CGame_NEWGAME_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_NEWGAME_A::CGame_NEWGAME_A: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS, // Obsolete, don't change.
                        WRITE_16            // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter UINT16.
                                            // You can set this to WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    };

    // ** Set alpha mode: this determines whether or not we set alpha values for the data we write back to the game ROM.
    // For color mode 12A you usually want it not set, for NEOGEO you cannot use it (there's no bit(s) for it), and for 15/15ALT you probably want it on.
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    // ** Set color mode: see the definitions in GameClass.h
    // We need to set color mode before calling InitializeStatics as color mode affects color size (2 bytes vs 4 bytes)
    // which in turn affects all our calculations involving colors
    SetColorMode(ColMode::COLMODE_12A);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = NEWGAME_A_NUMUNIT;
    m_nExtraUnit = NEWGAME_A_EXTRALOC;

    // You will need to update this once you modify palettes, but PalMod will prompt you to do so.
    // Exact count will be shown in debug output in the debugger
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 4;
    m_pszExtraFilename = EXTRA_FILENAME_NEWGAME_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEWGAME; // This value is calculated at runtime: don't change this.
    // ** This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    // You will need to update this, but PalMod will prompt you to do so.  Exact location will be shown and also
    // visible in debug output in the debugger.
    m_nLowestKnownPaletteRomLocation = 0xbadf00d;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    // ** Set game flag: you need to add a value for your game in gamedef.h and then set that value here.
    nGameFlag = NEWGAME_A;

    // These next three values define which section in imgdat palmod looks up sprites from, as well as defining
    // what sprites palmod will load from that section.
    // For the most part, you can just keep these values since you won't have images in imgdat.
    // If for some reason there *are* already usable images in imgdat, update these values to point to the right section
    // and create an array (NEWGAME_A_IMG_UNITS) that lists the sprites you want to use from that section.
    nImgGameFlag = IMGDAT_SECTION_CPS2; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = nullptr;  // NEWGAME_A_IMG_UNITS -- this is the array of images present in imgdat once that happens
    nImgUnitAmt = 0; // ARRAYSIZE(NEWGAME_A_IMG_UNITS); // This is the size of the array tracking which IDs to load from the game's image section

    nFileAmt = 1; // Always 1 for monolithic rom games

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating NEWGAME to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_NEWGAME_A::NEWGAME_A_EXTRA_CUSTOM = nullptr;
CDescTree CGame_NEWGAME_A::MainDescTree = nullptr;
int CGame_NEWGAME_A::rgExtraCountAll[NEWGAME_A_NUMUNIT + 1];
int CGame_NEWGAME_A::rgExtraLoc[NEWGAME_A_NUMUNIT + 1];
UINT32 CGame_NEWGAME_A::m_nTotalPaletteCountForNEWGAME = 0;
UINT32 CGame_NEWGAME_A::m_nConfirmedROMSize = -1;

void CGame_NEWGAME_A::InitializeStatics()
{
    safe_delete_array(CGame_NEWGAME_A::NEWGAME_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_NEWGAME_A::InitDescTree());
}

CGame_NEWGAME_A::~CGame_NEWGAME_A(void)
{
    safe_delete_array(CGame_NEWGAME_A::NEWGAME_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_NEWGAME_A::GetMainTree()
{
    return &CGame_NEWGAME_A::MainDescTree;
}

int CGame_NEWGAME_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, NEWGAME_A_NUMUNIT, nUnitId, NEWGAME_A_EXTRA_CUSTOM);
}

int CGame_NEWGAME_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, NEWGAME_A_NUMUNIT, nUnitId, NEWGAME_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_NEWGAME_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_NEWGAME_A, NEWGAME_A_EXTRA, &NEWGAME_A_EXTRA_CUSTOM, NEWGAME_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = NEWGAME_A_NUMUNIT + (GetExtraCt(NEWGAME_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[NEWGAME_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNEWGAME = _InitDescTree(NewDescTree,
        NEWGAME_A_UNITS,
        NEWGAME_A_EXTRALOC,
        NEWGAME_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        NEWGAME_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_NEWGAME_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, NEWGAME_A_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_NEWGAME_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(NEWGAME_A_UNITS, rgExtraCountAll, NEWGAME_A_NUMUNIT, NEWGAME_A_EXTRALOC, nUnitId, NEWGAME_A_EXTRA_CUSTOM);
}

UINT16 CGame_NEWGAME_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(NEWGAME_A_UNITS, rgExtraCountAll, NEWGAME_A_NUMUNIT, NEWGAME_A_EXTRALOC, nUnitId, nCollectionId, NEWGAME_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_NEWGAME_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(NEWGAME_A_UNITS, NEWGAME_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_NEWGAME_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(NEWGAME_A_UNITS, rgExtraCountAll, NEWGAME_A_NUMUNIT, NEWGAME_A_EXTRALOC, nUnitId, NEWGAME_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_NEWGAME_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(NEWGAME_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_NEWGAME_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(NEWGAME_A_UNITS, rgExtraCountAll, NEWGAME_A_NUMUNIT, NEWGAME_A_EXTRALOC, nUnitId, nPaletteId, NEWGAME_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_NEWGAME_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(NEWGAME_A_UNITS, rgExtraCountAll, NEWGAME_A_NUMUNIT, NEWGAME_A_EXTRALOC, nUnitId, nPaletteId, NEWGAME_A_EXTRA_CUSTOM);
}

void CGame_NEWGAME_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != NEWGAME_A_EXTRALOC)
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
    else // NEWGAME_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&NEWGAME_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_NEWGAME_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(NEWGAME_A_UNITS, rgExtraCountAll, NEWGAME_A_NUMUNIT, NEWGAME_A_EXTRALOC, NEWGAME_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
