#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Cyberbots_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define Cyberbots_A_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_Cyberbots_A::m_nExpectedGameROMSize = 0x80000;

CGame_Cyberbots_A::CGame_Cyberbots_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Cyberbots_A::CGame_Cyberbots_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = Cyberbots_A_NUMUNIT;
    m_nExtraUnit = Cyberbots_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 25;
    m_pszExtraFilename = EXTRA_FILENAME_Cyberbots_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForCyberbots;

    m_nLowestKnownPaletteRomLocation = 0x549e4;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = CYBERBOTS_A;

    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = Cyberbots_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(Cyberbots_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating "Cyberbots" to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_Cyberbots_A::Cyberbots_A_EXTRA_CUSTOM = nullptr;
CDescTree CGame_Cyberbots_A::MainDescTree = nullptr;
int CGame_Cyberbots_A::rgExtraCountAll[Cyberbots_A_NUMUNIT + 1];
int CGame_Cyberbots_A::rgExtraLoc[Cyberbots_A_NUMUNIT + 1];
UINT32 CGame_Cyberbots_A::m_nTotalPaletteCountForCyberbots = 0;
UINT32 CGame_Cyberbots_A::m_nConfirmedROMSize = -1;

void CGame_Cyberbots_A::InitializeStatics()
{
    safe_delete_array(CGame_Cyberbots_A::Cyberbots_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Cyberbots_A::InitDescTree());
}

CGame_Cyberbots_A::~CGame_Cyberbots_A(void)
{
    safe_delete_array(CGame_Cyberbots_A::Cyberbots_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Cyberbots_A::GetMainTree()
{
    return &CGame_Cyberbots_A::MainDescTree;
}

int CGame_Cyberbots_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Cyberbots_A_NUMUNIT, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

int CGame_Cyberbots_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Cyberbots_A_NUMUNIT, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Cyberbots_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Cyberbots_A, Cyberbots_A_EXTRA, &Cyberbots_A_EXTRA_CUSTOM, Cyberbots_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Cyberbots_A_NUMUNIT + (GetExtraCt(Cyberbots_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[CYBERBOTS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForCyberbots = _InitDescTree(NewDescTree,
        Cyberbots_A_UNITS,
        Cyberbots_A_EXTRALOC,
        Cyberbots_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Cyberbots_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Cyberbots_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, Cyberbots_A_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_Cyberbots_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

UINT16 CGame_Cyberbots_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, nCollectionId, Cyberbots_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Cyberbots_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(Cyberbots_A_UNITS, Cyberbots_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_Cyberbots_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, Cyberbots_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Cyberbots_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(Cyberbots_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Cyberbots_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, nPaletteId, Cyberbots_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Cyberbots_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, nUnitId, nPaletteId, Cyberbots_A_EXTRA_CUSTOM);
}

void CGame_Cyberbots_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != Cyberbots_A_EXTRALOC)
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
    else // Cyberbots_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&Cyberbots_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Cyberbots_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(Cyberbots_A_UNITS, rgExtraCountAll, Cyberbots_A_NUMUNIT, Cyberbots_A_EXTRALOC, Cyberbots_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
