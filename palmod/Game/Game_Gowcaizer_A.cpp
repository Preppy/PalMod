#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Gowcaizer_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define Gowcaizer_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_Gowcaizer_A::Gowcaizer_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_Gowcaizer_A::MainDescTree = nullptr;

int CGame_Gowcaizer_A::rgExtraCountAll[Gowcaizer_A_NUMUNIT + 1];
int CGame_Gowcaizer_A::rgExtraLoc[Gowcaizer_A_NUMUNIT + 1];

UINT32 CGame_Gowcaizer_A::m_nTotalPaletteCountForGowcaizer = 0;
UINT32 CGame_Gowcaizer_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_Gowcaizer_A::m_nConfirmedROMSize = -1;

void CGame_Gowcaizer_A::InitializeStatics()
{
    safe_delete_array(CGame_Gowcaizer_A::Gowcaizer_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Gowcaizer_A::InitDescTree());
}

CGame_Gowcaizer_A::CGame_Gowcaizer_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Gowcaizer_A::CGame_Gowcaizer_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_MAX };
    SetAlphaMode(AlphaMode::GameUsesFixedAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = Gowcaizer_A_NUMUNIT;
    m_nExtraUnit = Gowcaizer_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 7680;
    m_pszExtraFilename = EXTRA_FILENAME_Gowcaizer_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForGowcaizer;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1011000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = Gowcaizer_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    nImgUnitAmt = ARRAYSIZE(Gowcaizer_A_IMGIDS_USED);
    m_prgGameImageSet = Gowcaizer_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_Gowcaizer_A::~CGame_Gowcaizer_A(void)
{
    safe_delete_array(CGame_Gowcaizer_A::Gowcaizer_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Gowcaizer_A::GetMainTree()
{
    return &CGame_Gowcaizer_A::MainDescTree;
}

int CGame_Gowcaizer_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Gowcaizer_A_NUMUNIT, nUnitId, Gowcaizer_A_EXTRA_CUSTOM);
}

int CGame_Gowcaizer_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Gowcaizer_A_NUMUNIT, nUnitId, Gowcaizer_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Gowcaizer_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Gowcaizer_A, Gowcaizer_A_EXTRA, &Gowcaizer_A_EXTRA_CUSTOM, Gowcaizer_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Gowcaizer_A_NUMUNIT + (GetExtraCt(Gowcaizer_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[Gowcaizer_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForGowcaizer = _InitDescTree(NewDescTree,
        Gowcaizer_A_UNITS,
        Gowcaizer_A_EXTRALOC,
        Gowcaizer_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Gowcaizer_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Gowcaizer_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"094-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_Gowcaizer_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(Gowcaizer_A_UNITS, rgExtraCountAll, Gowcaizer_A_NUMUNIT, Gowcaizer_A_EXTRALOC, nUnitId, Gowcaizer_A_EXTRA_CUSTOM);
}

UINT16 CGame_Gowcaizer_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(Gowcaizer_A_UNITS, rgExtraCountAll, Gowcaizer_A_NUMUNIT, Gowcaizer_A_EXTRALOC, nUnitId, nCollectionId, Gowcaizer_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Gowcaizer_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(Gowcaizer_A_UNITS, Gowcaizer_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_Gowcaizer_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(Gowcaizer_A_UNITS, rgExtraCountAll, Gowcaizer_A_NUMUNIT, Gowcaizer_A_EXTRALOC, nUnitId, Gowcaizer_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Gowcaizer_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(Gowcaizer_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Gowcaizer_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Gowcaizer_A_UNITS, rgExtraCountAll, Gowcaizer_A_NUMUNIT, Gowcaizer_A_EXTRALOC, nUnitId, nPaletteId, Gowcaizer_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Gowcaizer_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(Gowcaizer_A_UNITS, rgExtraCountAll, Gowcaizer_A_NUMUNIT, Gowcaizer_A_EXTRALOC, nUnitId, nPaletteId, Gowcaizer_A_EXTRA_CUSTOM);
}

void CGame_Gowcaizer_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != Gowcaizer_A_EXTRALOC)
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
    else // Gowcaizer_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForGowcaizer(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Gowcaizer_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(Gowcaizer_A_UNITS, rgExtraCountAll, Gowcaizer_A_NUMUNIT, Gowcaizer_A_EXTRALOC, Gowcaizer_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
