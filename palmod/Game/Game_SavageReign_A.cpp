#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAVAGEREIGN_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SAVAGEREIGN_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SAVAGEREIGN_A::SAVAGEREIGN_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAVAGEREIGN_A::MainDescTree = nullptr;

int CGame_SAVAGEREIGN_A::rgExtraCountAll[SAVAGEREIGN_A_NUMUNIT + 1];
int CGame_SAVAGEREIGN_A::rgExtraLoc[SAVAGEREIGN_A_NUMUNIT + 1];

UINT32 CGame_SAVAGEREIGN_A::m_nTotalPaletteCountForSAVAGEREIGN = 0;
UINT32 CGame_SAVAGEREIGN_A::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_SAVAGEREIGN_A::m_nConfirmedROMSize = -1;

void CGame_SAVAGEREIGN_A::InitializeStatics()
{
    safe_delete_array(CGame_SAVAGEREIGN_A::SAVAGEREIGN_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAVAGEREIGN_A::InitDescTree());
}

CGame_SAVAGEREIGN_A::CGame_SAVAGEREIGN_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SAVAGEREIGN_A::CGame_SAVAGEREIGN_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAVAGEREIGN_A_NUMUNIT;
    m_nExtraUnit = SAVAGEREIGN_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 269;
    m_pszExtraFilename = EXTRA_FILENAME_SAVAGEREIGN_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAVAGEREIGN;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xa3400;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAVAGEREIGN_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    m_prgGameImageSet = SAVAGEREIGN_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SAVAGEREIGN_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_AB;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_2_AB);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAVAGEREIGN_A::~CGame_SAVAGEREIGN_A(void)
{
    safe_delete_array(CGame_SAVAGEREIGN_A::SAVAGEREIGN_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAVAGEREIGN_A::GetMainTree()
{
    return &CGame_SAVAGEREIGN_A::MainDescTree;
}

int CGame_SAVAGEREIGN_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, nUnitId, SAVAGEREIGN_A_EXTRA_CUSTOM);
}

int CGame_SAVAGEREIGN_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAVAGEREIGN_A_NUMUNIT, nUnitId, SAVAGEREIGN_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAVAGEREIGN_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAVAGEREIGN_A, SAVAGEREIGN_A_EXTRA, &SAVAGEREIGN_A_EXTRA_CUSTOM, SAVAGEREIGN_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAVAGEREIGN_A_NUMUNIT + (GetExtraCt(SAVAGEREIGN_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAVAGEREIGN_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAVAGEREIGN = _InitDescTree(NewDescTree,
        SAVAGEREIGN_A_UNITS,
        SAVAGEREIGN_A_EXTRALOC,
        SAVAGEREIGN_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAVAGEREIGN_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SAVAGEREIGN_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"059-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_SAVAGEREIGN_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Savage Reign (Neo-Geo)", L"059-p1.p1", 0x01d4e9c0, 0 },
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

UINT16 CGame_SAVAGEREIGN_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SAVAGEREIGN_A_UNITS, rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, SAVAGEREIGN_A_EXTRALOC, nUnitId, SAVAGEREIGN_A_EXTRA_CUSTOM);
}

UINT16 CGame_SAVAGEREIGN_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SAVAGEREIGN_A_UNITS, rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, SAVAGEREIGN_A_EXTRALOC, nUnitId, nCollectionId, SAVAGEREIGN_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAVAGEREIGN_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SAVAGEREIGN_A_UNITS, SAVAGEREIGN_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SAVAGEREIGN_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SAVAGEREIGN_A_UNITS, rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, SAVAGEREIGN_A_EXTRALOC, nUnitId, SAVAGEREIGN_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAVAGEREIGN_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SAVAGEREIGN_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_SAVAGEREIGN_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAVAGEREIGN_A_UNITS, rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, SAVAGEREIGN_A_EXTRALOC, nUnitId, nPaletteId, SAVAGEREIGN_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAVAGEREIGN_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SAVAGEREIGN_A_UNITS, rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, SAVAGEREIGN_A_EXTRALOC, nUnitId, nPaletteId, SAVAGEREIGN_A_EXTRA_CUSTOM);
}

void CGame_SAVAGEREIGN_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SAVAGEREIGN_A_EXTRALOC)
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
    else // SAVAGEREIGN_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAVAGEREIGN(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAVAGEREIGN_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SAVAGEREIGN_A_UNITS, rgExtraCountAll, SAVAGEREIGN_A_NUMUNIT, SAVAGEREIGN_A_EXTRALOC, SAVAGEREIGN_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
