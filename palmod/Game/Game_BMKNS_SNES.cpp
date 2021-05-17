#include "StdAfx.h"
#include "GameDef.h"
#include "Game_BMKNS_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define BMKNS_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_BMKNS_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_BMKNS_SNES::CGame_BMKNS_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_BMKNS_SNES::CGame_BMKNS_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = BMKNS_SNES_NUMUNIT;
    m_nExtraUnit = BMKNS_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 74;
    m_pszExtraFilename = EXTRA_FILENAME_BMKNS_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForBMKNS;

    m_nLowestKnownPaletteRomLocation = 0x1c092;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = BMKNS_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = BMKNS_SNES_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(BMKNS_SNES_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_4_BMKNS; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_4_BMKNS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating BMKNS to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_BMKNS_SNES::BMKNS_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_BMKNS_SNES::MainDescTree = nullptr;
int CGame_BMKNS_SNES::rgExtraCountAll[BMKNS_SNES_NUMUNIT + 1];
int CGame_BMKNS_SNES::rgExtraLoc[BMKNS_SNES_NUMUNIT + 1];
UINT32 CGame_BMKNS_SNES::m_nTotalPaletteCountForBMKNS = 0;
UINT32 CGame_BMKNS_SNES::m_nConfirmedROMSize = -1;

void CGame_BMKNS_SNES::InitializeStatics()
{
    safe_delete_array(CGame_BMKNS_SNES::BMKNS_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_BMKNS_SNES::InitDescTree());
}

CGame_BMKNS_SNES::~CGame_BMKNS_SNES(void)
{
    safe_delete_array(CGame_BMKNS_SNES::BMKNS_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_BMKNS_SNES::GetMainTree()
{
    return &CGame_BMKNS_SNES::MainDescTree;
}

int CGame_BMKNS_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, BMKNS_SNES_NUMUNIT, nUnitId, BMKNS_SNES_EXTRA_CUSTOM);
}

int CGame_BMKNS_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, BMKNS_SNES_NUMUNIT, nUnitId, BMKNS_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_BMKNS_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_BMKNS_SNES, BMKNS_SNES_EXTRA, &BMKNS_SNES_EXTRA_CUSTOM, BMKNS_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = BMKNS_SNES_NUMUNIT + (GetExtraCt(BMKNS_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[BMKNS_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForBMKNS = _InitDescTree(NewDescTree,
        BMKNS_SNES_UNITS,
        BMKNS_SNES_EXTRALOC,
        BMKNS_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        BMKNS_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_BMKNS_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, BMKNS_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_BMKNS_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(BMKNS_SNES_UNITS, rgExtraCountAll, BMKNS_SNES_NUMUNIT, BMKNS_SNES_EXTRALOC, nUnitId, BMKNS_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_BMKNS_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(BMKNS_SNES_UNITS, rgExtraCountAll, BMKNS_SNES_NUMUNIT, BMKNS_SNES_EXTRALOC, nUnitId, nCollectionId, BMKNS_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_BMKNS_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(BMKNS_SNES_UNITS, BMKNS_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_BMKNS_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(BMKNS_SNES_UNITS, rgExtraCountAll, BMKNS_SNES_NUMUNIT, BMKNS_SNES_EXTRALOC, nUnitId, BMKNS_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_BMKNS_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(BMKNS_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_BMKNS_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(BMKNS_SNES_UNITS, rgExtraCountAll, BMKNS_SNES_NUMUNIT, BMKNS_SNES_EXTRALOC, nUnitId, nPaletteId, BMKNS_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_BMKNS_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(BMKNS_SNES_UNITS, rgExtraCountAll, BMKNS_SNES_NUMUNIT, BMKNS_SNES_EXTRALOC, nUnitId, nPaletteId, BMKNS_SNES_EXTRA_CUSTOM);
}

void CGame_BMKNS_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != BMKNS_SNES_EXTRALOC)
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
    else // BMKNS_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&BMKNS_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_BMKNS_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(BMKNS_SNES_UNITS, rgExtraCountAll, BMKNS_SNES_NUMUNIT, BMKNS_SNES_EXTRALOC, BMKNS_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
