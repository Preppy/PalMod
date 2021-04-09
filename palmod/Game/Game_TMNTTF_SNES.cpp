#include "StdAfx.h"
#include "GameDef.h"
#include "Game_TMNTTF_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define TMNTTF_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_TMNTTF_SNES::m_nExpectedGameROMSize = 0x200000;

CGame_TMNTTF_SNES::CGame_TMNTTF_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_TMNTTF_SNES::CGame_TMNTTF_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_GBA);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = TMNTTF_SNES_NUMUNIT;
    m_nExtraUnit = TMNTTF_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 188;
    m_pszExtraFilename = EXTRA_FILENAME_TMNTTF_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForTMNTTF;

    m_nLowestKnownPaletteRomLocation = 0x481ac;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = TMNTTF_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = nullptr;  // TMNTTF_SNES_IMG_UNITS
    nImgUnitAmt = 0; // ARRAYSIZE(TMNTTF_SNES_IMG_UNITS);

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
//  You don't need to make any further changes to the rest of this file, other than updating TMNTTF to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_TMNTTF_SNES::MainDescTree = nullptr;
int CGame_TMNTTF_SNES::rgExtraCountAll[TMNTTF_SNES_NUMUNIT + 1];
int CGame_TMNTTF_SNES::rgExtraLoc[TMNTTF_SNES_NUMUNIT + 1];
UINT32 CGame_TMNTTF_SNES::m_nTotalPaletteCountForTMNTTF = 0;
UINT32 CGame_TMNTTF_SNES::m_nConfirmedROMSize = -1;

void CGame_TMNTTF_SNES::InitializeStatics()
{
    safe_delete_array(CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_TMNTTF_SNES::InitDescTree());
}

CGame_TMNTTF_SNES::~CGame_TMNTTF_SNES(void)
{
    safe_delete_array(CGame_TMNTTF_SNES::TMNTTF_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_TMNTTF_SNES::GetMainTree()
{
    return &CGame_TMNTTF_SNES::MainDescTree;
}

int CGame_TMNTTF_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, TMNTTF_SNES_NUMUNIT, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

int CGame_TMNTTF_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, TMNTTF_SNES_NUMUNIT, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_TMNTTF_SNES::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_TMNTTF_SNES, TMNTTF_SNES_EXTRA, &TMNTTF_SNES_EXTRA_CUSTOM, TMNTTF_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = TMNTTF_SNES_NUMUNIT + (GetExtraCt(TMNTTF_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[TMNTTF_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(TMNTTF_SNES_EXTRALOC) > 0);
    strMsg.Format(L"CGame_TMNTTF_SNES::InitDescTree: Building desc tree for TMNTTF_SNES %s extras...\n", fHaveExtras ? L"with" : L"without");
    OutputDebugString(strMsg);

    nTotalPaletteCount = _InitDescTree(NewDescTree,
        TMNTTF_SNES_UNITS,
        nUnitCt,
        TMNTTF_SNES_EXTRALOC,
        TMNTTF_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        TMNTTF_SNES_EXTRA_CUSTOM
    );

    strMsg.Format(L"CGame_TMNTTF_SNES::InitDescTree: Loaded %u palettes for TMNTTF\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForTMNTTF = nTotalPaletteCount;

    return NewDescTree;
}

sFileRule CGame_TMNTTF_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, TMNTTF_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_TMNTTF_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_TMNTTF_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nCollectionId, TMNTTF_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_TMNTTF_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(TMNTTF_SNES_UNITS, TMNTTF_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_TMNTTF_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, TMNTTF_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_TMNTTF_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(TMNTTF_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_TMNTTF_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nPaletteId, TMNTTF_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_TMNTTF_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, nUnitId, nPaletteId, TMNTTF_SNES_EXTRA_CUSTOM);
}

void CGame_TMNTTF_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != TMNTTF_SNES_EXTRALOC)
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
    else // TMNTTF_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&TMNTTF_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_TMNTTF_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(TMNTTF_SNES_UNITS, rgExtraCountAll, TMNTTF_SNES_NUMUNIT, TMNTTF_SNES_EXTRALOC, TMNTTF_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
