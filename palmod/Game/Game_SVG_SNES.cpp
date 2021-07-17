#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SVG_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define SVG_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_SVG_SNES::m_nExpectedGameROMSize = 0x300000;

CGame_SVG_SNES::CGame_SVG_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SVG_SNES::CGame_SVG_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SVG_SNES_NUMUNIT;
    m_nExtraUnit = SVG_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 45;
    m_pszExtraFilename = EXTRA_FILENAME_SVG_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSVG;

    m_nLowestKnownPaletteRomLocation = 0xb870;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = SVG_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = SVG_SNES_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SVG_SNES_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating SVG to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_SVG_SNES::SVG_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_SVG_SNES::MainDescTree = nullptr;
int CGame_SVG_SNES::rgExtraCountAll[SVG_SNES_NUMUNIT + 1];
int CGame_SVG_SNES::rgExtraLoc[SVG_SNES_NUMUNIT + 1];
UINT32 CGame_SVG_SNES::m_nTotalPaletteCountForSVG = 0;
UINT32 CGame_SVG_SNES::m_nConfirmedROMSize = -1;

void CGame_SVG_SNES::InitializeStatics()
{
    safe_delete_array(CGame_SVG_SNES::SVG_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SVG_SNES::InitDescTree());
}

CGame_SVG_SNES::~CGame_SVG_SNES(void)
{
    safe_delete_array(CGame_SVG_SNES::SVG_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SVG_SNES::GetMainTree()
{
    return &CGame_SVG_SNES::MainDescTree;
}

int CGame_SVG_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SVG_SNES_NUMUNIT, nUnitId, SVG_SNES_EXTRA_CUSTOM);
}

int CGame_SVG_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SVG_SNES_NUMUNIT, nUnitId, SVG_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SVG_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SVG_SNES, SVG_SNES_EXTRA, &SVG_SNES_EXTRA_CUSTOM, SVG_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SVG_SNES_NUMUNIT + (GetExtraCt(SVG_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SVG_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSVG = _InitDescTree(NewDescTree,
        SVG_SNES_UNITS,
        SVG_SNES_EXTRALOC,
        SVG_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SVG_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SVG_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, SVG_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SVG_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SVG_SNES_UNITS, rgExtraCountAll, SVG_SNES_NUMUNIT, SVG_SNES_EXTRALOC, nUnitId, SVG_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_SVG_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SVG_SNES_UNITS, rgExtraCountAll, SVG_SNES_NUMUNIT, SVG_SNES_EXTRALOC, nUnitId, nCollectionId, SVG_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_SVG_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SVG_SNES_UNITS, SVG_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SVG_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SVG_SNES_UNITS, rgExtraCountAll, SVG_SNES_NUMUNIT, SVG_SNES_EXTRALOC, nUnitId, SVG_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SVG_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SVG_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_SVG_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SVG_SNES_UNITS, rgExtraCountAll, SVG_SNES_NUMUNIT, SVG_SNES_EXTRALOC, nUnitId, nPaletteId, SVG_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SVG_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SVG_SNES_UNITS, rgExtraCountAll, SVG_SNES_NUMUNIT, SVG_SNES_EXTRALOC, nUnitId, nPaletteId, SVG_SNES_EXTRA_CUSTOM);
}

void CGame_SVG_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SVG_SNES_EXTRALOC)
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
    else // SVG_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&SVG_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SVG_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SVG_SNES_UNITS, rgExtraCountAll, SVG_SNES_NUMUNIT, SVG_SNES_EXTRALOC, SVG_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
