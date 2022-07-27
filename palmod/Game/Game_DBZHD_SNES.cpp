#include "StdAfx.h"
#include "GameDef.h"
#include "Game_DBZHD_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

CGame_DBZHD_SNES::CGame_DBZHD_SNES(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_DBZHD_SNES::CGame_DBZHD_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = DBZHD_SNES_NUMUNIT;
    m_nExtraUnit = DBZHD_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 185;
    m_pszExtraFilename = EXTRA_FILENAME_DBZHD_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForDBZHD;

    m_nLowestKnownPaletteRomLocation = 0x18140;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = DBZHD_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = DBZHD_SNES_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in buttondef.h

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating DBZHD to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_DBZHD_SNES::DBZHD_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_DBZHD_SNES::MainDescTree = nullptr;
uint32_t CGame_DBZHD_SNES::rgExtraCountAll[DBZHD_SNES_NUMUNIT + 1];
uint32_t CGame_DBZHD_SNES::rgExtraLoc[DBZHD_SNES_NUMUNIT + 1];
uint32_t CGame_DBZHD_SNES::m_nTotalPaletteCountForDBZHD = 0;
uint32_t CGame_DBZHD_SNES::m_nConfirmedROMSize = -1;

void CGame_DBZHD_SNES::InitializeStatics()
{
    safe_delete_array(CGame_DBZHD_SNES::DBZHD_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_DBZHD_SNES::InitDescTree());
}

CGame_DBZHD_SNES::~CGame_DBZHD_SNES()
{
    safe_delete_array(CGame_DBZHD_SNES::DBZHD_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_DBZHD_SNES::GetMainTree()
{
    return &CGame_DBZHD_SNES::MainDescTree;
}

uint32_t CGame_DBZHD_SNES::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, DBZHD_SNES_NUMUNIT, nUnitId, DBZHD_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_DBZHD_SNES::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, DBZHD_SNES_NUMUNIT, nUnitId, DBZHD_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_DBZHD_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_DBZHD_SNES, &DBZHD_SNES_EXTRA_CUSTOM, DBZHD_SNES_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = DBZHD_SNES_NUMUNIT + (GetExtraCt(DBZHD_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[DBZHD_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForDBZHD = _InitDescTree(NewDescTree,
        DBZHD_SNES_UNITS,
        DBZHD_SNES_EXTRALOC,
        DBZHD_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        DBZHD_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_DBZHD_SNES::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, DBZHD_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_DBZHD_SNES::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(DBZHD_SNES_UNITS, rgExtraCountAll, DBZHD_SNES_NUMUNIT, DBZHD_SNES_EXTRALOC, nUnitId, DBZHD_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_DBZHD_SNES::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(DBZHD_SNES_UNITS, rgExtraCountAll, DBZHD_SNES_NUMUNIT, DBZHD_SNES_EXTRALOC, nUnitId, nCollectionId, DBZHD_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_DBZHD_SNES::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(DBZHD_SNES_UNITS, DBZHD_SNES_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_DBZHD_SNES::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(DBZHD_SNES_UNITS, rgExtraCountAll, DBZHD_SNES_NUMUNIT, DBZHD_SNES_EXTRALOC, nUnitId, DBZHD_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_DBZHD_SNES::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(DBZHD_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_DBZHD_SNES::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(DBZHD_SNES_UNITS, rgExtraCountAll, DBZHD_SNES_NUMUNIT, DBZHD_SNES_EXTRALOC, nUnitId, nPaletteId, DBZHD_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_DBZHD_SNES::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(DBZHD_SNES_UNITS, rgExtraCountAll, DBZHD_SNES_NUMUNIT, DBZHD_SNES_EXTRALOC, nUnitId, nPaletteId, DBZHD_SNES_EXTRA_CUSTOM);
}

void CGame_DBZHD_SNES::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != DBZHD_SNES_EXTRALOC)
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
    else // DBZHD_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &DBZHD_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_DBZHD_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(DBZHD_SNES_UNITS, rgExtraCountAll, DBZHD_SNES_NUMUNIT, DBZHD_SNES_EXTRALOC, DBZHD_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
