#include "StdAfx.h"
#include "GameDef.h"
#include "Game_XMMA_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define XMMA_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_XMMA_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_XMMA_SNES::CGame_XMMA_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_XMMA_SNES::CGame_XMMA_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_GBA);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = XMMA_SNES_NUMUNIT;
    m_nExtraUnit = XMMA_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 65;
    m_pszExtraFilename = EXTRA_FILENAME_XMMA_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForXMMA;

    m_nLowestKnownPaletteRomLocation = 0xa860;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = XMMA_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = nullptr;  // XMMA_SNES_IMG_UNITS
    nImgUnitAmt = 0; // ARRAYSIZE(XMMA_SNES_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in gamedef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating XMMA to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_XMMA_SNES::XMMA_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_XMMA_SNES::MainDescTree = nullptr;
int CGame_XMMA_SNES::rgExtraCountAll[XMMA_SNES_NUMUNIT + 1];
int CGame_XMMA_SNES::rgExtraLoc[XMMA_SNES_NUMUNIT + 1];
UINT32 CGame_XMMA_SNES::m_nTotalPaletteCountForXMMA = 0;
UINT32 CGame_XMMA_SNES::m_nConfirmedROMSize = -1;

void CGame_XMMA_SNES::InitializeStatics()
{
    safe_delete_array(CGame_XMMA_SNES::XMMA_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_XMMA_SNES::InitDescTree());
}

CGame_XMMA_SNES::~CGame_XMMA_SNES(void)
{
    safe_delete_array(CGame_XMMA_SNES::XMMA_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_XMMA_SNES::GetMainTree()
{
    return &CGame_XMMA_SNES::MainDescTree;
}

int CGame_XMMA_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, XMMA_SNES_NUMUNIT, nUnitId, XMMA_SNES_EXTRA_CUSTOM);
}

int CGame_XMMA_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, XMMA_SNES_NUMUNIT, nUnitId, XMMA_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_XMMA_SNES::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_XMMA_SNES, XMMA_SNES_EXTRA, &XMMA_SNES_EXTRA_CUSTOM, XMMA_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = XMMA_SNES_NUMUNIT + (GetExtraCt(XMMA_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[XMMA_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(XMMA_SNES_EXTRALOC) > 0);
    strMsg.Format(L"CGame_XMMA_SNES::InitDescTree: Building desc tree for XMMA_SNES %s extras...\n", fHaveExtras ? L"with" : L"without");
    OutputDebugString(strMsg);

    nTotalPaletteCount = _InitDescTree(NewDescTree,
        XMMA_SNES_UNITS,
        nUnitCt,
        XMMA_SNES_EXTRALOC,
        XMMA_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        XMMA_SNES_EXTRA_CUSTOM
    );

    strMsg.Format(L"CGame_XMMA_SNES::InitDescTree: Loaded %u palettes for XMMA\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForXMMA = nTotalPaletteCount;

    return NewDescTree;
}

sFileRule CGame_XMMA_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, XMMA_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_XMMA_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(XMMA_SNES_UNITS, rgExtraCountAll, XMMA_SNES_NUMUNIT, XMMA_SNES_EXTRALOC, nUnitId, XMMA_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_XMMA_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(XMMA_SNES_UNITS, rgExtraCountAll, XMMA_SNES_NUMUNIT, XMMA_SNES_EXTRALOC, nUnitId, nCollectionId, XMMA_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_XMMA_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(XMMA_SNES_UNITS, XMMA_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_XMMA_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(XMMA_SNES_UNITS, rgExtraCountAll, XMMA_SNES_NUMUNIT, XMMA_SNES_EXTRALOC, nUnitId, XMMA_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_XMMA_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(XMMA_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_XMMA_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(XMMA_SNES_UNITS, rgExtraCountAll, XMMA_SNES_NUMUNIT, XMMA_SNES_EXTRALOC, nUnitId, nPaletteId, XMMA_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_XMMA_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(XMMA_SNES_UNITS, rgExtraCountAll, XMMA_SNES_NUMUNIT, XMMA_SNES_EXTRALOC, nUnitId, nPaletteId, XMMA_SNES_EXTRA_CUSTOM);
}

void CGame_XMMA_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != XMMA_SNES_EXTRALOC)
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
    else // XMMA_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&XMMA_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_XMMA_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(XMMA_SNES_UNITS, rgExtraCountAll, XMMA_SNES_NUMUNIT, XMMA_SNES_EXTRALOC, XMMA_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
