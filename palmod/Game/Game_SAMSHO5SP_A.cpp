#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO5SP_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SAMSHO5SP_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO5SP_A::MainDescTree = nullptr;

int CGame_SAMSHO5SP_A::rgExtraCountAll[SAMSHO5SP_A_NUMUNIT + 1];
int CGame_SAMSHO5SP_A::rgExtraLoc[SAMSHO5SP_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO5SP_A::m_nTotalPaletteCountForSAMSHO5SP = 0;
UINT32 CGame_SAMSHO5SP_A::m_nExpectedGameROMSize = -1;  // Figure this out dynamically
UINT32 CGame_SAMSHO5SP_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO5SP_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO5SP_A::InitDescTree());
}

CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO5SP_A_NUMUNIT;
    m_nExtraUnit = SAMSHO5SP_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1668;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO5SP_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO5SP;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd4000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAMSHO5SP_A;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    nImgUnitAmt = ARRAYSIZE(SAMSHO5SP_A_IMGIDS_USED);
    m_prgGameImageSet = SAMSHO5SP_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAMSHO5SP_A::~CGame_SAMSHO5SP_A(void)
{
    safe_delete_array(CGame_SAMSHO5SP_A::SAMSHO5SP_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO5SP_A::GetMainTree()
{
    return &CGame_SAMSHO5SP_A::MainDescTree;
}

int CGame_SAMSHO5SP_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

int CGame_SAMSHO5SP_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO5SP_A_NUMUNIT, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO5SP_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO5SP_A, SAMSHO5SP_A_EXTRA, &SAMSHO5SP_A_EXTRA_CUSTOM, SAMSHO5SP_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO5SP_A_NUMUNIT + (GetExtraCt(SAMSHO5SP_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO5SP_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO5SP = _InitDescTree(NewDescTree,
        SAMSHO5SP_A_UNITS,
        SAMSHO5SP_A_EXTRALOC,
        SAMSHO5SP_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO5SP_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SAMSHO5SP_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, (nUnitId == 0) ? L"272-p1.bin" : L"p1.bin");

    // The arcade and Steam versions of 5SP are identical other than ROM size.  Thankfully the offsets are unchanged.
    m_nExpectedGameROMSize = (nUnitId == 0) ? m_nExpectedGameROMSizeArcade : m_nExpectedGameROMSizeSteam;

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SAMSHO5SP_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

UINT16 CGame_SAMSHO5SP_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO5SP_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO5SP_A_UNITS, SAMSHO5SP_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SAMSHO5SP_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO5SP_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SAMSHO5SP_A_UNITS, nUnitId, nCollectionId);
}

UINT16 CGame_SAMSHO5SP_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO5SP_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5SP_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO5SP_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5SP_A_EXTRA_CUSTOM);
}

void CGame_SAMSHO5SP_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SAMSHO5SP_A_EXTRALOC)
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
    else // SAMSHO5SP_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5SP(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO5SP_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SAMSHO5SP_A_UNITS, rgExtraCountAll, SAMSHO5SP_A_NUMUNIT, SAMSHO5SP_A_EXTRALOC, SAMSHO5SP_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
