#include "StdAfx.h"
#include "GameDef.h"
#include "Game_JusticeLeagueTF_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

CGame_JusticeLeagueTF_SNES::CGame_JusticeLeagueTF_SNES(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_JusticeLeagueTF_SNES::CGame_JusticeLeagueTF_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = JusticeLeagueTF_SNES_NUMUNIT;
    m_nExtraUnit = JusticeLeagueTF_SNES_EXTRALOC;

    constexpr uint32_t nInternalPaletteCount = 77;
    constexpr uint32_t nLowestInternalPaletteLocation = 0x1a92a;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + nInternalPaletteCount;
    m_pszExtraFilename = EXTRA_FILENAME_JusticeLeagueTF_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForJusticeLeagueTF;

    m_nLowestKnownPaletteRomLocation = nLowestInternalPaletteLocation;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = JusticeLeagueTF_SNES;
    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = JusticeLeagueTF_SNES_IMGIDS_USED;
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
//  You don't need to make any further changes to the rest of this file, other than updating JusticeLeagueTF to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_JusticeLeagueTF_SNES::JusticeLeagueTF_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_JusticeLeagueTF_SNES::MainDescTree = nullptr;
uint32_t CGame_JusticeLeagueTF_SNES::rgExtraCountAll[JusticeLeagueTF_SNES_NUMUNIT + 1];
uint32_t CGame_JusticeLeagueTF_SNES::rgExtraLoc[JusticeLeagueTF_SNES_NUMUNIT + 1];
uint32_t CGame_JusticeLeagueTF_SNES::m_nTotalPaletteCountForJusticeLeagueTF = 0;
uint32_t CGame_JusticeLeagueTF_SNES::m_nConfirmedROMSize = -1;

void CGame_JusticeLeagueTF_SNES::InitializeStatics()
{
    safe_delete_array(CGame_JusticeLeagueTF_SNES::JusticeLeagueTF_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_JusticeLeagueTF_SNES::InitDescTree());
}

CGame_JusticeLeagueTF_SNES::~CGame_JusticeLeagueTF_SNES(void)
{
    safe_delete_array(CGame_JusticeLeagueTF_SNES::JusticeLeagueTF_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_JusticeLeagueTF_SNES::GetMainTree()
{
    return &CGame_JusticeLeagueTF_SNES::MainDescTree;
}

uint32_t CGame_JusticeLeagueTF_SNES::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, nUnitId, JusticeLeagueTF_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_JusticeLeagueTF_SNES::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, JusticeLeagueTF_SNES_NUMUNIT, nUnitId, JusticeLeagueTF_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_JusticeLeagueTF_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_JusticeLeagueTF_SNES, &JusticeLeagueTF_SNES_EXTRA_CUSTOM, JusticeLeagueTF_SNES_EXTRALOC, m_nConfirmedROMSize);

    const uint16_t nUnitCt = JusticeLeagueTF_SNES_NUMUNIT + (GetExtraCt(JusticeLeagueTF_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[JusticeLeagueTF_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForJusticeLeagueTF = _InitDescTree(NewDescTree,
        JusticeLeagueTF_SNES_UNITS,
        JusticeLeagueTF_SNES_EXTRALOC,
        JusticeLeagueTF_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        JusticeLeagueTF_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_JusticeLeagueTF_SNES::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, JusticeLeagueTF_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_JusticeLeagueTF_SNES::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(JusticeLeagueTF_SNES_UNITS, rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, JusticeLeagueTF_SNES_EXTRALOC, nUnitId, JusticeLeagueTF_SNES_EXTRA_CUSTOM);
}

uint32_t CGame_JusticeLeagueTF_SNES::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(JusticeLeagueTF_SNES_UNITS, rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, JusticeLeagueTF_SNES_EXTRALOC, nUnitId, nCollectionId, JusticeLeagueTF_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_JusticeLeagueTF_SNES::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(JusticeLeagueTF_SNES_UNITS, JusticeLeagueTF_SNES_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_JusticeLeagueTF_SNES::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(JusticeLeagueTF_SNES_UNITS, rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, JusticeLeagueTF_SNES_EXTRALOC, nUnitId, JusticeLeagueTF_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_JusticeLeagueTF_SNES::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(JusticeLeagueTF_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_JusticeLeagueTF_SNES::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(JusticeLeagueTF_SNES_UNITS, rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, JusticeLeagueTF_SNES_EXTRALOC, nUnitId, nPaletteId, JusticeLeagueTF_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_JusticeLeagueTF_SNES::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(JusticeLeagueTF_SNES_UNITS, rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, JusticeLeagueTF_SNES_EXTRALOC, nUnitId, nPaletteId, JusticeLeagueTF_SNES_EXTRA_CUSTOM);
}

void CGame_JusticeLeagueTF_SNES::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != JusticeLeagueTF_SNES_EXTRALOC)
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
    else // JusticeLeagueTF_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &JusticeLeagueTF_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_JusticeLeagueTF_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(JusticeLeagueTF_SNES_UNITS, rgExtraCountAll, JusticeLeagueTF_SNES_NUMUNIT, JusticeLeagueTF_SNES_EXTRALOC, JusticeLeagueTF_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
