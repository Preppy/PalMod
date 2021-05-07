#include "StdAfx.h"
#include "GameDef.h"
#include "Game_RANMAHB_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define RANMAHB_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_RANMAHB_SNES::m_nExpectedGameROMSize = 0x180000;

CGame_RANMAHB_SNES::CGame_RANMAHB_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_RANMAHB_SNES::CGame_RANMAHB_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = RANMAHB_SNES_NUMUNIT;
    m_nExtraUnit = RANMAHB_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 24;
    m_pszExtraFilename = EXTRA_FILENAME_RANMAHB_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForRANMAHB;

    m_nLowestKnownPaletteRomLocation = 0x181e1;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = RANMAHB_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = nullptr;  // RANMAHB_SNES_IMG_UNITS
    nImgUnitAmt = 0; // ARRAYSIZE(RANMAHB_SNES_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in gamedef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating RANMAHB to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_RANMAHB_SNES::RANMAHB_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_RANMAHB_SNES::MainDescTree = nullptr;
int CGame_RANMAHB_SNES::rgExtraCountAll[RANMAHB_SNES_NUMUNIT + 1];
int CGame_RANMAHB_SNES::rgExtraLoc[RANMAHB_SNES_NUMUNIT + 1];
UINT32 CGame_RANMAHB_SNES::m_nTotalPaletteCountForRANMAHB = 0;
UINT32 CGame_RANMAHB_SNES::m_nConfirmedROMSize = -1;

void CGame_RANMAHB_SNES::InitializeStatics()
{
    safe_delete_array(CGame_RANMAHB_SNES::RANMAHB_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_RANMAHB_SNES::InitDescTree());
}

CGame_RANMAHB_SNES::~CGame_RANMAHB_SNES(void)
{
    safe_delete_array(CGame_RANMAHB_SNES::RANMAHB_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_RANMAHB_SNES::GetMainTree()
{
    return &CGame_RANMAHB_SNES::MainDescTree;
}

int CGame_RANMAHB_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, RANMAHB_SNES_NUMUNIT, nUnitId, RANMAHB_SNES_EXTRA_CUSTOM);
}

int CGame_RANMAHB_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, RANMAHB_SNES_NUMUNIT, nUnitId, RANMAHB_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_RANMAHB_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_RANMAHB_SNES, RANMAHB_SNES_EXTRA, &RANMAHB_SNES_EXTRA_CUSTOM, RANMAHB_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = RANMAHB_SNES_NUMUNIT + (GetExtraCt(RANMAHB_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[RANMAHB_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForRANMAHB = _InitDescTree(NewDescTree,
        RANMAHB_SNES_UNITS,
        RANMAHB_SNES_EXTRALOC,
        RANMAHB_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        RANMAHB_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_RANMAHB_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, RANMAHB_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_RANMAHB_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(RANMAHB_SNES_UNITS, rgExtraCountAll, RANMAHB_SNES_NUMUNIT, RANMAHB_SNES_EXTRALOC, nUnitId, RANMAHB_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_RANMAHB_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(RANMAHB_SNES_UNITS, rgExtraCountAll, RANMAHB_SNES_NUMUNIT, RANMAHB_SNES_EXTRALOC, nUnitId, nCollectionId, RANMAHB_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_RANMAHB_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(RANMAHB_SNES_UNITS, RANMAHB_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_RANMAHB_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(RANMAHB_SNES_UNITS, rgExtraCountAll, RANMAHB_SNES_NUMUNIT, RANMAHB_SNES_EXTRALOC, nUnitId, RANMAHB_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_RANMAHB_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(RANMAHB_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_RANMAHB_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(RANMAHB_SNES_UNITS, rgExtraCountAll, RANMAHB_SNES_NUMUNIT, RANMAHB_SNES_EXTRALOC, nUnitId, nPaletteId, RANMAHB_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_RANMAHB_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(RANMAHB_SNES_UNITS, rgExtraCountAll, RANMAHB_SNES_NUMUNIT, RANMAHB_SNES_EXTRALOC, nUnitId, nPaletteId, RANMAHB_SNES_EXTRA_CUSTOM);
}

void CGame_RANMAHB_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != RANMAHB_SNES_EXTRALOC)
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
    else // RANMAHB_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&RANMAHB_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_RANMAHB_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(RANMAHB_SNES_UNITS, rgExtraCountAll, RANMAHB_SNES_NUMUNIT, RANMAHB_SNES_EXTRALOC, RANMAHB_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
