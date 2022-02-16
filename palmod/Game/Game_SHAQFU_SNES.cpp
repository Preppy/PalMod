#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SHAQFU_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

UINT32 CGame_SHAQFU_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_SHAQFU_SNES::CGame_SHAQFU_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SHAQFU_SNES::CGame_SHAQFU_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SHAQFU_SNES_NUMUNIT;
    m_nExtraUnit = SHAQFU_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 19;
    m_pszExtraFilename = EXTRA_FILENAME_SHAQFU_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSHAQFU;

    m_nLowestKnownPaletteRomLocation = 0x13ffac;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = SHAQFU_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = SHAQFU_SNES_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in buttondef.

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating SHAQFU to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_SHAQFU_SNES::SHAQFU_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_SHAQFU_SNES::MainDescTree = nullptr;
uint32_t CGame_SHAQFU_SNES::rgExtraCountAll[SHAQFU_SNES_NUMUNIT + 1];
uint32_t CGame_SHAQFU_SNES::rgExtraLoc[SHAQFU_SNES_NUMUNIT + 1];
UINT32 CGame_SHAQFU_SNES::m_nTotalPaletteCountForSHAQFU = 0;
UINT32 CGame_SHAQFU_SNES::m_nConfirmedROMSize = -1;

void CGame_SHAQFU_SNES::InitializeStatics()
{
    safe_delete_array(CGame_SHAQFU_SNES::SHAQFU_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SHAQFU_SNES::InitDescTree());
}

CGame_SHAQFU_SNES::~CGame_SHAQFU_SNES(void)
{
    safe_delete_array(CGame_SHAQFU_SNES::SHAQFU_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SHAQFU_SNES::GetMainTree()
{
    return &CGame_SHAQFU_SNES::MainDescTree;
}

uint32_t CGame_SHAQFU_SNES::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SHAQFU_SNES_NUMUNIT, nUnitId, SHAQFU_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_SHAQFU_SNES::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SHAQFU_SNES_NUMUNIT, nUnitId, SHAQFU_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SHAQFU_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SHAQFU_SNES, &SHAQFU_SNES_EXTRA_CUSTOM, SHAQFU_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SHAQFU_SNES_NUMUNIT + (GetExtraCt(SHAQFU_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SHAQFU_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSHAQFU = _InitDescTree(NewDescTree,
        SHAQFU_SNES_UNITS,
        SHAQFU_SNES_EXTRALOC,
        SHAQFU_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SHAQFU_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SHAQFU_SNES::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, SHAQFU_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_SHAQFU_SNES::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(SHAQFU_SNES_UNITS, rgExtraCountAll, SHAQFU_SNES_NUMUNIT, SHAQFU_SNES_EXTRALOC, nUnitId, SHAQFU_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_SHAQFU_SNES::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(SHAQFU_SNES_UNITS, rgExtraCountAll, SHAQFU_SNES_NUMUNIT, SHAQFU_SNES_EXTRALOC, nUnitId, nCollectionId, SHAQFU_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_SHAQFU_SNES::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(SHAQFU_SNES_UNITS, SHAQFU_SNES_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_SHAQFU_SNES::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(SHAQFU_SNES_UNITS, rgExtraCountAll, SHAQFU_SNES_NUMUNIT, SHAQFU_SNES_EXTRALOC, nUnitId, SHAQFU_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SHAQFU_SNES::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(SHAQFU_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_SHAQFU_SNES::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SHAQFU_SNES_UNITS, rgExtraCountAll, SHAQFU_SNES_NUMUNIT, SHAQFU_SNES_EXTRALOC, nUnitId, nPaletteId, SHAQFU_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SHAQFU_SNES::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(SHAQFU_SNES_UNITS, rgExtraCountAll, SHAQFU_SNES_NUMUNIT, SHAQFU_SNES_EXTRALOC, nUnitId, nPaletteId, SHAQFU_SNES_EXTRA_CUSTOM);
}

void CGame_SHAQFU_SNES::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != SHAQFU_SNES_EXTRALOC)
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
    else // SHAQFU_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&SHAQFU_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SHAQFU_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SHAQFU_SNES_UNITS, rgExtraCountAll, SHAQFU_SNES_NUMUNIT, SHAQFU_SNES_EXTRALOC, SHAQFU_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
