#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Matrimelee_A.h"
#include "..\RegProc.h"

#define Matrimelee_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_Matrimelee_A::Matrimelee_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_Matrimelee_A::MainDescTree = nullptr;

int CGame_Matrimelee_A::rgExtraCountAll[Matrimelee_A_NUMUNIT + 1];
int CGame_Matrimelee_A::rgExtraLoc[Matrimelee_A_NUMUNIT + 1];

UINT32 CGame_Matrimelee_A::m_nTotalPaletteCountForMatrimelee = 0;
const UINT32 CGame_Matrimelee_A::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_Matrimelee_A::m_nConfirmedROMSize = -1;

void CGame_Matrimelee_A::InitializeStatics()
{
    safe_delete_array(CGame_Matrimelee_A::Matrimelee_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Matrimelee_A::InitDescTree());
}

CGame_Matrimelee_A::CGame_Matrimelee_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Matrimelee_A::CGame_Matrimelee_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = Matrimelee_A_NUMUNIT;
    m_nExtraUnit = Matrimelee_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 823;
    m_pszExtraFilename = EXTRA_FILENAME_Matrimelee_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMatrimelee;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x72ba;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MATRIMELEE_A;
    nImgGameFlag = IMGDAT_SECTION_MATRIM;
    nImgUnitAmt = ARRAYSIZE(MATRIM_A_IMGIDS_USED);
    m_prgGameImageSet = MATRIM_A_IMGIDS_USED;

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

CGame_Matrimelee_A::~CGame_Matrimelee_A(void)
{
    safe_delete_array(CGame_Matrimelee_A::Matrimelee_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Matrimelee_A::GetMainTree()
{
    return &CGame_Matrimelee_A::MainDescTree;
}

int CGame_Matrimelee_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Matrimelee_A_NUMUNIT, nUnitId, Matrimelee_A_EXTRA_CUSTOM);
}

int CGame_Matrimelee_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Matrimelee_A_NUMUNIT, nUnitId, Matrimelee_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Matrimelee_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Matrimelee_A, Matrimelee_A_EXTRA, &Matrimelee_A_EXTRA_CUSTOM, Matrimelee_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Matrimelee_A_NUMUNIT + (GetExtraCt(Matrimelee_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MATRIMELEE_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMatrimelee = _InitDescTree(NewDescTree,
        Matrimelee_A_UNITS,
        Matrimelee_A_EXTRALOC,
        Matrimelee_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Matrimelee_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Matrimelee_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"066-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_Matrimelee_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(Matrimelee_A_UNITS, rgExtraCountAll, Matrimelee_A_NUMUNIT, Matrimelee_A_EXTRALOC, nUnitId, Matrimelee_A_EXTRA_CUSTOM);
}

UINT16 CGame_Matrimelee_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(Matrimelee_A_UNITS, rgExtraCountAll, Matrimelee_A_NUMUNIT, Matrimelee_A_EXTRALOC, nUnitId, nCollectionId, Matrimelee_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Matrimelee_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(Matrimelee_A_UNITS, Matrimelee_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_Matrimelee_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(Matrimelee_A_UNITS, rgExtraCountAll, Matrimelee_A_NUMUNIT, Matrimelee_A_EXTRALOC, nUnitId, Matrimelee_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Matrimelee_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(Matrimelee_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Matrimelee_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Matrimelee_A_UNITS, rgExtraCountAll, Matrimelee_A_NUMUNIT, Matrimelee_A_EXTRALOC, nUnitId, nPaletteId, Matrimelee_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Matrimelee_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(Matrimelee_A_UNITS, rgExtraCountAll, Matrimelee_A_NUMUNIT, Matrimelee_A_EXTRALOC, nUnitId, nPaletteId, Matrimelee_A_EXTRA_CUSTOM);
}

void CGame_Matrimelee_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != m_nExtraUnit)
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
    else // m_nExtraUnit
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMatrimelee(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Matrimelee_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(Matrimelee_A_UNITS, rgExtraCountAll, Matrimelee_A_NUMUNIT, Matrimelee_A_EXTRALOC, Matrimelee_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
