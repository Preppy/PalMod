#include "StdAfx.h"
#include "GameDef.h"
#include "Game_NeoBomberman_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define NeoBomberman_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_NeoBomberman_A::NeoBomberman_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_NeoBomberman_A::MainDescTree = nullptr;

int CGame_NeoBomberman_A::rgExtraCountAll[NeoBomberman_A_NUMUNIT + 1];
int CGame_NeoBomberman_A::rgExtraLoc[NeoBomberman_A_NUMUNIT + 1];

UINT32 CGame_NeoBomberman_A::m_nTotalPaletteCountForNeoBomberman = 0;
UINT32 CGame_NeoBomberman_A::m_nExpectedGameROMSize = 0x100000;
UINT32 CGame_NeoBomberman_A::m_nConfirmedROMSize = -1;

void CGame_NeoBomberman_A::InitializeStatics()
{
    safe_delete_array(CGame_NeoBomberman_A::NeoBomberman_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_NeoBomberman_A::InitDescTree());
}

CGame_NeoBomberman_A::CGame_NeoBomberman_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_NeoBomberman_A::CGame_NeoBomberman_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = NeoBomberman_A_NUMUNIT;
    m_nExtraUnit = NeoBomberman_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 43;
    m_pszExtraFilename = EXTRA_FILENAME_NeoBomberman_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNeoBomberman;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x0c14ea;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = NeoBomberman_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    m_prgGameImageSet = NEOBOMBERMAN_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(NEOBOMBERMAN_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_NeoBomberman_A::~CGame_NeoBomberman_A(void)
{
    safe_delete_array(CGame_NeoBomberman_A::NeoBomberman_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_NeoBomberman_A::GetMainTree()
{
    return &CGame_NeoBomberman_A::MainDescTree;
}

int CGame_NeoBomberman_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, NeoBomberman_A_NUMUNIT, nUnitId, NeoBomberman_A_EXTRA_CUSTOM);
}

int CGame_NeoBomberman_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, NeoBomberman_A_NUMUNIT, nUnitId, NeoBomberman_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_NeoBomberman_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_NeoBomberman_A, NeoBomberman_A_EXTRA, &NeoBomberman_A_EXTRA_CUSTOM, NeoBomberman_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = NeoBomberman_A_NUMUNIT + (GetExtraCt(NeoBomberman_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[NeoBomberman_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNeoBomberman = _InitDescTree(NewDescTree,
        NeoBomberman_A_UNITS,
        NeoBomberman_A_EXTRALOC,
        NeoBomberman_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        NeoBomberman_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_NeoBomberman_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"pal_a.bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_NeoBomberman_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(NeoBomberman_A_UNITS, rgExtraCountAll, NeoBomberman_A_NUMUNIT, NeoBomberman_A_EXTRALOC, nUnitId, NeoBomberman_A_EXTRA_CUSTOM);
}

UINT16 CGame_NeoBomberman_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(NeoBomberman_A_UNITS, rgExtraCountAll, NeoBomberman_A_NUMUNIT, NeoBomberman_A_EXTRALOC, nUnitId, nCollectionId, NeoBomberman_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_NeoBomberman_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(NeoBomberman_A_UNITS, NeoBomberman_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_NeoBomberman_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(NeoBomberman_A_UNITS, rgExtraCountAll, NeoBomberman_A_NUMUNIT, NeoBomberman_A_EXTRALOC, nUnitId, NeoBomberman_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_NeoBomberman_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(NeoBomberman_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_NeoBomberman_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(NeoBomberman_A_UNITS, rgExtraCountAll, NeoBomberman_A_NUMUNIT, NeoBomberman_A_EXTRALOC, nUnitId, nPaletteId, NeoBomberman_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_NeoBomberman_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(NeoBomberman_A_UNITS, rgExtraCountAll, NeoBomberman_A_NUMUNIT, NeoBomberman_A_EXTRALOC, nUnitId, nPaletteId, NeoBomberman_A_EXTRA_CUSTOM);
}

void CGame_NeoBomberman_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != NeoBomberman_A_EXTRALOC)
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
    else // NeoBomberman_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForNeoBomberman(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_NeoBomberman_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(NeoBomberman_A_UNITS, rgExtraCountAll, NeoBomberman_A_NUMUNIT, NeoBomberman_A_EXTRALOC, NeoBomberman_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
