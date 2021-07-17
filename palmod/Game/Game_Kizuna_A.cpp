#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Kizuna_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define Kizuna_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_Kizuna_A::Kizuna_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_Kizuna_A::MainDescTree = nullptr;

int CGame_Kizuna_A::rgExtraCountAll[Kizuna_A_NUMUNIT + 1];
int CGame_Kizuna_A::rgExtraLoc[Kizuna_A_NUMUNIT + 1];

UINT32 CGame_Kizuna_A::m_nTotalPaletteCountForKizuna = 0;
UINT32 CGame_Kizuna_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_Kizuna_A::m_nConfirmedROMSize = -1;

void CGame_Kizuna_A::InitializeStatics()
{
    safe_delete_array(CGame_Kizuna_A::Kizuna_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Kizuna_A::InitDescTree());
}

CGame_Kizuna_A::CGame_Kizuna_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Kizuna_A::CGame_Kizuna_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = Kizuna_A_NUMUNIT;
    m_nExtraUnit = Kizuna_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 52;
    m_pszExtraFilename = EXTRA_FILENAME_Kizuna_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKizuna;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x170200;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KIZUNA_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = nullptr;
    nImgUnitAmt = 0;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AOF3;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AOF3);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_Kizuna_A::~CGame_Kizuna_A(void)
{
    safe_delete_array(CGame_Kizuna_A::Kizuna_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Kizuna_A::GetMainTree()
{
    return &CGame_Kizuna_A::MainDescTree;
}

sFileRule CGame_Kizuna_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"216-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_Kizuna_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Kizuna Encounter (Neo-Geo)", L"216-p1.p1", 0x75d2b3de, 0 },
        { L"Kizuna Encounter (Neo-Geo)", L"216-p1.bin", 0x75d2b3de, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

int CGame_Kizuna_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Kizuna_A_NUMUNIT, nUnitId, Kizuna_A_EXTRA_CUSTOM);
}

int CGame_Kizuna_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Kizuna_A_NUMUNIT, nUnitId, Kizuna_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Kizuna_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Kizuna_A, Kizuna_A_EXTRA, &Kizuna_A_EXTRA_CUSTOM, Kizuna_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Kizuna_A_NUMUNIT + (GetExtraCt(Kizuna_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KIZUNA_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKizuna = _InitDescTree(NewDescTree,
        Kizuna_A_UNITS,
        Kizuna_A_EXTRALOC,
        Kizuna_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Kizuna_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

UINT16 CGame_Kizuna_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(Kizuna_A_UNITS, rgExtraCountAll, Kizuna_A_NUMUNIT, Kizuna_A_EXTRALOC, nUnitId, Kizuna_A_EXTRA_CUSTOM);
}

UINT16 CGame_Kizuna_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(Kizuna_A_UNITS, rgExtraCountAll, Kizuna_A_NUMUNIT, Kizuna_A_EXTRALOC, nUnitId, nCollectionId, Kizuna_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Kizuna_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(Kizuna_A_UNITS, Kizuna_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_Kizuna_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(Kizuna_A_UNITS, rgExtraCountAll, Kizuna_A_NUMUNIT, Kizuna_A_EXTRALOC, nUnitId, Kizuna_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Kizuna_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(Kizuna_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Kizuna_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Kizuna_A_UNITS, rgExtraCountAll, Kizuna_A_NUMUNIT, Kizuna_A_EXTRALOC, nUnitId, nPaletteId, Kizuna_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Kizuna_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(Kizuna_A_UNITS, rgExtraCountAll, Kizuna_A_NUMUNIT, Kizuna_A_EXTRALOC, nUnitId, nPaletteId, Kizuna_A_EXTRA_CUSTOM);
}

void CGame_Kizuna_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != Kizuna_A_EXTRALOC)
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
    else // Kizuna_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKizuna(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Kizuna_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(Kizuna_A_UNITS, rgExtraCountAll, Kizuna_A_NUMUNIT, Kizuna_A_EXTRALOC, Kizuna_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
