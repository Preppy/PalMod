#include "StdAfx.h"
#include "GameDef.h"
#include "Game_VENTURE_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define VENTURE_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_VENTURE_A::MainDescTree = nullptr;

int CGame_VENTURE_A::rgExtraCountAll[VENTURE_A_NUMUNIT + 1];
int CGame_VENTURE_A::rgExtraLoc[VENTURE_A_NUMUNIT + 1];

UINT32 CGame_VENTURE_A::m_nTotalPaletteCountForVENTURE = 0;
UINT32 CGame_VENTURE_A::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_VENTURE_A::m_nConfirmedROMSize = -1;

void CGame_VENTURE_A::InitializeStatics()
{
    safe_delete_array(CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_VENTURE_A::InitDescTree());
}

CGame_VENTURE_A::CGame_VENTURE_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_VENTURE_A::CGame_VENTURE_A: Loading ROM...\n");

    //Set color mode
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_LE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = VENTURE_A_NUMUNIT;
    m_nExtraUnit = VENTURE_A_EXTRALOC;

    // You will need to update this once you modify palettes, but PalMod will prompt you to do so.
    // Exact count will be shown in debug output in the debugger
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 193;
    m_pszExtraFilename = EXTRA_FILENAME_VENTURE_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForVENTURE; // This value is calculated at runtime: don't change this.
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
     // You will need to update this, but PalMod will prompt you to do so.  Exact location will be shown and also
    // visible in debug output in the debugger.
    m_nLowestKnownPaletteRomLocation = 0x3b0000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = VENTURE_A; // This value is defined in gamedef.h.  See usage of other values defined there
    nImgGameFlag = IMGDAT_SECTION_JOJOS; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = VENTURE_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(VENTURE_A_IMGIDS_USED);

    nFileAmt = 1; // Always 1 for monolithic rom games

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

CGame_VENTURE_A::~CGame_VENTURE_A(void)
{
    safe_delete_array(CGame_VENTURE_A::VENTURE_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_VENTURE_A::GetMainTree()
{
    return &CGame_VENTURE_A::MainDescTree;
}

int CGame_VENTURE_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, VENTURE_A_NUMUNIT, nUnitId, VENTURE_A_EXTRA_CUSTOM);
}

int CGame_VENTURE_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, VENTURE_A_NUMUNIT, nUnitId, VENTURE_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_VENTURE_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_VENTURE_A, VENTURE_A_EXTRA, &VENTURE_A_EXTRA_CUSTOM, VENTURE_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = VENTURE_A_NUMUNIT + (GetExtraCt(VENTURE_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VENTURE_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForVENTURE = _InitDescTree(NewDescTree,
        VENTURE_A_UNITS,
        VENTURE_A_EXTRALOC,
        VENTURE_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        VENTURE_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_VENTURE_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"50");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_VENTURE_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(VENTURE_A_UNITS, rgExtraCountAll, VENTURE_A_NUMUNIT, VENTURE_A_EXTRALOC, nUnitId, VENTURE_A_EXTRA_CUSTOM);
}

UINT16 CGame_VENTURE_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(VENTURE_A_UNITS, rgExtraCountAll, VENTURE_A_NUMUNIT, VENTURE_A_EXTRALOC, nUnitId, nCollectionId, VENTURE_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_VENTURE_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(VENTURE_A_UNITS, VENTURE_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_VENTURE_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(VENTURE_A_UNITS, rgExtraCountAll, VENTURE_A_NUMUNIT, VENTURE_A_EXTRALOC, nUnitId, VENTURE_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_VENTURE_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(VENTURE_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_VENTURE_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(VENTURE_A_UNITS, rgExtraCountAll, VENTURE_A_NUMUNIT, VENTURE_A_EXTRALOC, nUnitId, nPaletteId, VENTURE_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_VENTURE_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(VENTURE_A_UNITS, rgExtraCountAll, VENTURE_A_NUMUNIT, VENTURE_A_EXTRALOC, nUnitId, nPaletteId, VENTURE_A_EXTRA_CUSTOM);
}

void CGame_VENTURE_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != VENTURE_A_EXTRALOC)
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
    else // VENTURE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForVENTURE(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VENTURE_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(VENTURE_A_UNITS, rgExtraCountAll, VENTURE_A_NUMUNIT, VENTURE_A_EXTRALOC, VENTURE_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
