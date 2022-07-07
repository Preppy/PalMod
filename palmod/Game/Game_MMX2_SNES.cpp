#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MMX2_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

uint32_t CGame_MMX2_SNES::m_nExpectedGameROMSize = 0x180000;

CGame_MMX2_SNES::CGame_MMX2_SNES(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MMX2_SNES::CGame_MMX2_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MMX2_SNES_NUMUNIT;
    m_nExtraUnit = MMX2_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 14;
    m_pszExtraFilename = EXTRA_FILENAME_MMX2_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMMX2;

    m_nLowestKnownPaletteRomLocation = 0x2b160;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = MMX2_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet.clear();

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
//  You don't need to make any further changes to the rest of this file, other than updating MMX2 to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_MMX2_SNES::MMX2_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_MMX2_SNES::MainDescTree = nullptr;
uint32_t CGame_MMX2_SNES::rgExtraCountAll[MMX2_SNES_NUMUNIT + 1];
uint32_t CGame_MMX2_SNES::rgExtraLoc[MMX2_SNES_NUMUNIT + 1];
uint32_t CGame_MMX2_SNES::m_nTotalPaletteCountForMMX2 = 0;
uint32_t CGame_MMX2_SNES::m_nConfirmedROMSize = -1;

void CGame_MMX2_SNES::InitializeStatics()
{
    safe_delete_array(CGame_MMX2_SNES::MMX2_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MMX2_SNES::InitDescTree());
}

CGame_MMX2_SNES::~CGame_MMX2_SNES(void)
{
    safe_delete_array(CGame_MMX2_SNES::MMX2_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_MMX2_SNES::GetMainTree()
{
    return &CGame_MMX2_SNES::MainDescTree;
}

uint32_t CGame_MMX2_SNES::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MMX2_SNES_NUMUNIT, nUnitId, MMX2_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_MMX2_SNES::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MMX2_SNES_NUMUNIT, nUnitId, MMX2_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MMX2_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MMX2_SNES, &MMX2_SNES_EXTRA_CUSTOM, MMX2_SNES_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = MMX2_SNES_NUMUNIT + (GetExtraCt(MMX2_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MMX2_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMMX2 = _InitDescTree(NewDescTree,
        MMX2_SNES_UNITS,
        MMX2_SNES_EXTRALOC,
        MMX2_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MMX2_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MMX2_SNES::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, MMX2_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_MMX2_SNES::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(MMX2_SNES_UNITS, rgExtraCountAll, MMX2_SNES_NUMUNIT, MMX2_SNES_EXTRALOC, nUnitId, MMX2_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_MMX2_SNES::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(MMX2_SNES_UNITS, rgExtraCountAll, MMX2_SNES_NUMUNIT, MMX2_SNES_EXTRALOC, nUnitId, nCollectionId, MMX2_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_MMX2_SNES::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(MMX2_SNES_UNITS, MMX2_SNES_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_MMX2_SNES::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(MMX2_SNES_UNITS, rgExtraCountAll, MMX2_SNES_NUMUNIT, MMX2_SNES_EXTRALOC, nUnitId, MMX2_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MMX2_SNES::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(MMX2_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_MMX2_SNES::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MMX2_SNES_UNITS, rgExtraCountAll, MMX2_SNES_NUMUNIT, MMX2_SNES_EXTRALOC, nUnitId, nPaletteId, MMX2_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MMX2_SNES::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(MMX2_SNES_UNITS, rgExtraCountAll, MMX2_SNES_NUMUNIT, MMX2_SNES_EXTRALOC, nUnitId, nPaletteId, MMX2_SNES_EXTRA_CUSTOM);
}

void CGame_MMX2_SNES::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != MMX2_SNES_EXTRALOC)
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
    else // MMX2_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&MMX2_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MMX2_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MMX2_SNES_UNITS, rgExtraCountAll, MMX2_SNES_NUMUNIT, MMX2_SNES_EXTRALOC, MMX2_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
