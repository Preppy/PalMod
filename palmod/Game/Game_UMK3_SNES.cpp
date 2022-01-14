#include "StdAfx.h"
#include "GameDef.h"
#include "Game_UMK3_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

UINT32 CGame_UMK3_SNES::m_nExpectedGameROMSize = 0x400000;

CGame_UMK3_SNES::CGame_UMK3_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_UMK3_SNES::CGame_UMK3_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = UMK3_SNES_NUMUNIT;
    m_nExtraUnit = UMK3_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 69;
    m_pszExtraFilename = EXTRA_FILENAME_UMK3_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForUMK3;

    m_nLowestKnownPaletteRomLocation = 0x7155;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = UMK3_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = UMK3_SNES_IMGIDS_USED;

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
//  You don't need to make any further changes to the rest of this file, other than updating UMK3 to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_UMK3_SNES::UMK3_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_UMK3_SNES::MainDescTree = nullptr;
size_t CGame_UMK3_SNES::rgExtraCountAll[UMK3_SNES_NUMUNIT + 1];
size_t CGame_UMK3_SNES::rgExtraLoc[UMK3_SNES_NUMUNIT + 1];
UINT32 CGame_UMK3_SNES::m_nTotalPaletteCountForUMK3 = 0;
UINT32 CGame_UMK3_SNES::m_nConfirmedROMSize = -1;

void CGame_UMK3_SNES::InitializeStatics()
{
    safe_delete_array(CGame_UMK3_SNES::UMK3_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_UMK3_SNES::InitDescTree());
}

CGame_UMK3_SNES::~CGame_UMK3_SNES(void)
{
    safe_delete_array(CGame_UMK3_SNES::UMK3_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_UMK3_SNES::GetMainTree()
{
    return &CGame_UMK3_SNES::MainDescTree;
}

size_t CGame_UMK3_SNES::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, UMK3_SNES_NUMUNIT, nUnitId, UMK3_SNES_EXTRA_CUSTOM);
}

size_t CGame_UMK3_SNES::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, UMK3_SNES_NUMUNIT, nUnitId, UMK3_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_UMK3_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_UMK3_SNES, &UMK3_SNES_EXTRA_CUSTOM, UMK3_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = UMK3_SNES_NUMUNIT + (GetExtraCt(UMK3_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[UMK3_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForUMK3 = _InitDescTree(NewDescTree,
        UMK3_SNES_UNITS,
        UMK3_SNES_EXTRALOC,
        UMK3_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        UMK3_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_UMK3_SNES::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, UMK3_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

size_t CGame_UMK3_SNES::GetCollectionCountForUnit(size_t nUnitId)
{
    return _GetCollectionCountForUnit(UMK3_SNES_UNITS, rgExtraCountAll, UMK3_SNES_NUMUNIT, UMK3_SNES_EXTRALOC, nUnitId, UMK3_SNES_EXTRA_CUSTOM);
}

size_t CGame_UMK3_SNES::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(UMK3_SNES_UNITS, rgExtraCountAll, UMK3_SNES_NUMUNIT, UMK3_SNES_EXTRALOC, nUnitId, nCollectionId, UMK3_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_UMK3_SNES::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(UMK3_SNES_UNITS, UMK3_SNES_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_UMK3_SNES::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(UMK3_SNES_UNITS, rgExtraCountAll, UMK3_SNES_NUMUNIT, UMK3_SNES_EXTRALOC, nUnitId, UMK3_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_UMK3_SNES::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(UMK3_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_UMK3_SNES::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(UMK3_SNES_UNITS, rgExtraCountAll, UMK3_SNES_NUMUNIT, UMK3_SNES_EXTRALOC, nUnitId, nPaletteId, UMK3_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_UMK3_SNES::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(UMK3_SNES_UNITS, rgExtraCountAll, UMK3_SNES_NUMUNIT, UMK3_SNES_EXTRALOC, nUnitId, nPaletteId, UMK3_SNES_EXTRA_CUSTOM);
}

void CGame_UMK3_SNES::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
     if (nUnitId != UMK3_SNES_EXTRALOC)
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
    else // UMK3_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&UMK3_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_UMK3_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(UMK3_SNES_UNITS, rgExtraCountAll, UMK3_SNES_NUMUNIT, UMK3_SNES_EXTRALOC, UMK3_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
