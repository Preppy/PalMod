#include "StdAfx.h"
#include "GameDef.h"
#include "Game_BSSMSJR_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define BSSMSJR_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_BSSMSJR_SNES::m_nExpectedGameROMSize = 0x280000;

CGame_BSSMSJR_SNES::CGame_BSSMSJR_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_BSSMSJR_SNES::CGame_BSSMSJR_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = BSSMSJR_SNES_NUMUNIT;
    m_nExtraUnit = BSSMSJR_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 18;
    m_pszExtraFilename = EXTRA_FILENAME_BSSMSJR_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForBMKNS;

    m_nLowestKnownPaletteRomLocation = 0x20057e;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = BSSMSJR_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = BSSMSJR_SNES_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(BSSMSJR_SNES_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AB; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AB);

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

stExtraDef* CGame_BSSMSJR_SNES::BSSMSJR_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_BSSMSJR_SNES::MainDescTree = nullptr;
int CGame_BSSMSJR_SNES::rgExtraCountAll[BSSMSJR_SNES_NUMUNIT + 1];
int CGame_BSSMSJR_SNES::rgExtraLoc[BSSMSJR_SNES_NUMUNIT + 1];
UINT32 CGame_BSSMSJR_SNES::m_nTotalPaletteCountForBMKNS = 0;
UINT32 CGame_BSSMSJR_SNES::m_nConfirmedROMSize = -1;

void CGame_BSSMSJR_SNES::InitializeStatics()
{
    safe_delete_array(CGame_BSSMSJR_SNES::BSSMSJR_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_BSSMSJR_SNES::InitDescTree());
}

CGame_BSSMSJR_SNES::~CGame_BSSMSJR_SNES(void)
{
    safe_delete_array(CGame_BSSMSJR_SNES::BSSMSJR_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_BSSMSJR_SNES::GetMainTree()
{
    return &CGame_BSSMSJR_SNES::MainDescTree;
}

int CGame_BSSMSJR_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, nUnitId, BSSMSJR_SNES_EXTRA_CUSTOM);
}

int CGame_BSSMSJR_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, BSSMSJR_SNES_NUMUNIT, nUnitId, BSSMSJR_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_BSSMSJR_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_BSSMSJR_SNES, BSSMSJR_SNES_EXTRA, &BSSMSJR_SNES_EXTRA_CUSTOM, BSSMSJR_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = BSSMSJR_SNES_NUMUNIT + (GetExtraCt(BSSMSJR_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[BSSMSJR_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForBMKNS = _InitDescTree(NewDescTree,
        BSSMSJR_SNES_UNITS,
        BSSMSJR_SNES_EXTRALOC,
        BSSMSJR_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        BSSMSJR_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_BSSMSJR_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, BSSMSJR_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_BSSMSJR_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(BSSMSJR_SNES_UNITS, rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, BSSMSJR_SNES_EXTRALOC, nUnitId, BSSMSJR_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_BSSMSJR_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(BSSMSJR_SNES_UNITS, rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, BSSMSJR_SNES_EXTRALOC, nUnitId, nCollectionId, BSSMSJR_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_BSSMSJR_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(BSSMSJR_SNES_UNITS, BSSMSJR_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_BSSMSJR_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(BSSMSJR_SNES_UNITS, rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, BSSMSJR_SNES_EXTRALOC, nUnitId, BSSMSJR_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_BSSMSJR_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(BSSMSJR_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_BSSMSJR_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(BSSMSJR_SNES_UNITS, rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, BSSMSJR_SNES_EXTRALOC, nUnitId, nPaletteId, BSSMSJR_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_BSSMSJR_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(BSSMSJR_SNES_UNITS, rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, BSSMSJR_SNES_EXTRALOC, nUnitId, nPaletteId, BSSMSJR_SNES_EXTRA_CUSTOM);
}

void CGame_BSSMSJR_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != BSSMSJR_SNES_EXTRALOC)
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
    else // BSSMSJR_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&BSSMSJR_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_BSSMSJR_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(BSSMSJR_SNES_UNITS, rgExtraCountAll, BSSMSJR_SNES_NUMUNIT, BSSMSJR_SNES_EXTRALOC, BSSMSJR_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
