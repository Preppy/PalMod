#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MK1_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define MK1_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_MK1_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_MK1_SNES::CGame_MK1_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MK1_SNES::CGame_MK1_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MK1_SNES_NUMUNIT;
    m_nExtraUnit = MK1_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 35;
    m_pszExtraFilename = EXTRA_FILENAME_MK1_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMK1;

    m_nLowestKnownPaletteRomLocation = 0x1c16;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = MK1_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = MK1_SNES_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in buttondef.

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating MK1 to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_MK1_SNES::MK1_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_MK1_SNES::MainDescTree = nullptr;
size_t CGame_MK1_SNES::rgExtraCountAll[MK1_SNES_NUMUNIT + 1];
size_t CGame_MK1_SNES::rgExtraLoc[MK1_SNES_NUMUNIT + 1];
UINT32 CGame_MK1_SNES::m_nTotalPaletteCountForMK1 = 0;
UINT32 CGame_MK1_SNES::m_nConfirmedROMSize = -1;

void CGame_MK1_SNES::InitializeStatics()
{
    safe_delete_array(CGame_MK1_SNES::MK1_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MK1_SNES::InitDescTree());
}

CGame_MK1_SNES::~CGame_MK1_SNES(void)
{
    safe_delete_array(CGame_MK1_SNES::MK1_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_MK1_SNES::GetMainTree()
{
    return &CGame_MK1_SNES::MainDescTree;
}

size_t CGame_MK1_SNES::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MK1_SNES_NUMUNIT, nUnitId, MK1_SNES_EXTRA_CUSTOM);
}

size_t CGame_MK1_SNES::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MK1_SNES_NUMUNIT, nUnitId, MK1_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MK1_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MK1_SNES, MK1_SNES_EXTRA, &MK1_SNES_EXTRA_CUSTOM, MK1_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MK1_SNES_NUMUNIT + (GetExtraCt(MK1_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MK1_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMK1 = _InitDescTree(NewDescTree,
        MK1_SNES_UNITS,
        MK1_SNES_EXTRALOC,
        MK1_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MK1_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MK1_SNES::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, MK1_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

size_t CGame_MK1_SNES::GetCollectionCountForUnit(size_t nUnitId)
{
    return _GetCollectionCountForUnit(MK1_SNES_UNITS, rgExtraCountAll, MK1_SNES_NUMUNIT, MK1_SNES_EXTRALOC, nUnitId, MK1_SNES_EXTRA_CUSTOM);
}

size_t CGame_MK1_SNES::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(MK1_SNES_UNITS, rgExtraCountAll, MK1_SNES_NUMUNIT, MK1_SNES_EXTRALOC, nUnitId, nCollectionId, MK1_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_MK1_SNES::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(MK1_SNES_UNITS, MK1_SNES_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_MK1_SNES::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(MK1_SNES_UNITS, rgExtraCountAll, MK1_SNES_NUMUNIT, MK1_SNES_EXTRALOC, nUnitId, MK1_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MK1_SNES::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(MK1_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_MK1_SNES::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MK1_SNES_UNITS, rgExtraCountAll, MK1_SNES_NUMUNIT, MK1_SNES_EXTRALOC, nUnitId, nPaletteId, MK1_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MK1_SNES::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(MK1_SNES_UNITS, rgExtraCountAll, MK1_SNES_NUMUNIT, MK1_SNES_EXTRALOC, nUnitId, nPaletteId, MK1_SNES_EXTRA_CUSTOM);
}

void CGame_MK1_SNES::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
     if (nUnitId != MK1_SNES_EXTRALOC)
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
    else // MK1_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&MK1_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MK1_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MK1_SNES_UNITS, rgExtraCountAll, MK1_SNES_NUMUNIT, MK1_SNES_EXTRALOC, MK1_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}