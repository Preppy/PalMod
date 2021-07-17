#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO5_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SAMSHO5_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SAMSHO5_A::SAMSHO5_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO5_A::MainDescTree = nullptr;

int CGame_SAMSHO5_A::rgExtraCountAll[SAMSHO5_A_NUMUNIT + 1];
int CGame_SAMSHO5_A::rgExtraLoc[SAMSHO5_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO5_A::m_nTotalPaletteCountForSAMSHO5 = 0;
UINT32 CGame_SAMSHO5_A::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_SAMSHO5_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO5_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO5_A::SAMSHO5_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO5_A::InitDescTree());
}

CGame_SAMSHO5_A::CGame_SAMSHO5_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SAMSHO5_A::CGame_SAMSHO5_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO5_A_NUMUNIT;
    m_nExtraUnit = SAMSHO5_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1689;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO5_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO5;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd4000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAMSHO5_A;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    nImgUnitAmt = ARRAYSIZE(SAMSHO5_A_IMGIDS_USED);
    m_prgGameImageSet = SAMSHO5_A_IMGIDS_USED;

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

CGame_SAMSHO5_A::~CGame_SAMSHO5_A(void)
{
    safe_delete_array(CGame_SAMSHO5_A::SAMSHO5_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO5_A::GetMainTree()
{
    return &CGame_SAMSHO5_A::MainDescTree;
}

int CGame_SAMSHO5_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO5_A_NUMUNIT, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

int CGame_SAMSHO5_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO5_A_NUMUNIT, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO5_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO5_A, SAMSHO5_A_EXTRA, &SAMSHO5_A_EXTRA_CUSTOM, SAMSHO5_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO5_A_NUMUNIT + (GetExtraCt(SAMSHO5_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO5_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO5 = _InitDescTree(NewDescTree,
        SAMSHO5_A_UNITS,
        SAMSHO5_A_EXTRALOC,
        SAMSHO5_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO5_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SAMSHO5_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"270-p1.bin");
    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_SAMSHO5_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

UINT16 CGame_SAMSHO5_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO5_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO5_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO5_A_UNITS, SAMSHO5_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SAMSHO5_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO5_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SAMSHO5_A_UNITS, nUnitId, nCollectionId);
}

UINT16 CGame_SAMSHO5_A::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO5_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO5_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5_A_EXTRA_CUSTOM);
}

void CGame_SAMSHO5_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SAMSHO5_A_EXTRALOC)
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
    else // SAMSHO5_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO5_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, SAMSHO5_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
