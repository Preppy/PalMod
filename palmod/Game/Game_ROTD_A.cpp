#include "StdAfx.h"
#include "GameDef.h"
#include "Game_ROTD_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define ROTD_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_ROTD_A::ROTD_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_ROTD_A::MainDescTree = nullptr;

int CGame_ROTD_A::rgExtraCountAll[ROTD_A_NUMUNIT + 1];
int CGame_ROTD_A::rgExtraLoc[ROTD_A_NUMUNIT + 1];

UINT32 CGame_ROTD_A::m_nTotalPaletteCountForROTD = 0;
UINT32 CGame_ROTD_A::m_nExpectedGameROMSize = 0x800000;
UINT32 CGame_ROTD_A::m_nConfirmedROMSize = -1;

void CGame_ROTD_A::InitializeStatics()
{
    safe_delete_array(CGame_ROTD_A::ROTD_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_ROTD_A::InitDescTree());
}

CGame_ROTD_A::CGame_ROTD_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_ROTD_A::CGame_ROTD_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = ROTD_A_NUMUNIT;
    m_nExtraUnit = ROTD_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 536;
    m_pszExtraFilename = EXTRA_FILENAME_ROTD_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForROTD;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x80406;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = ROTD_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    m_prgGameImageSet = ROTD_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(ROTD_A_IMGIDS_USED);

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

CGame_ROTD_A::~CGame_ROTD_A(void)
{
    safe_delete_array(CGame_ROTD_A::ROTD_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_ROTD_A::GetMainTree()
{
    return &CGame_ROTD_A::MainDescTree;
}

int CGame_ROTD_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, ROTD_A_NUMUNIT, nUnitId, ROTD_A_EXTRA_CUSTOM);
}

int CGame_ROTD_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, ROTD_A_NUMUNIT, nUnitId, ROTD_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_ROTD_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_ROTD_A, ROTD_A_EXTRA, &ROTD_A_EXTRA_CUSTOM, ROTD_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = ROTD_A_NUMUNIT + (GetExtraCt(ROTD_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[ROTD_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForROTD = _InitDescTree(NewDescTree,
        ROTD_A_UNITS,
        ROTD_A_EXTRALOC,
        ROTD_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        ROTD_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_ROTD_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"264-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_ROTD_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Rage of the Dragons (Neo-Geo)", L"264-p1.p1", 0xb8cc969d, 0 },
        // This is a smaller file but it works
        { L"Rage of the Dragons (Neo-Geo Clone)", L"264-pk1.p1", 0xff2fa719, 0 },
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

UINT16 CGame_ROTD_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(ROTD_A_UNITS, rgExtraCountAll, ROTD_A_NUMUNIT, ROTD_A_EXTRALOC, nUnitId, ROTD_A_EXTRA_CUSTOM);
}

UINT16 CGame_ROTD_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(ROTD_A_UNITS, rgExtraCountAll, ROTD_A_NUMUNIT, ROTD_A_EXTRALOC, nUnitId, nCollectionId, ROTD_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_ROTD_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(ROTD_A_UNITS, ROTD_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_ROTD_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(ROTD_A_UNITS, rgExtraCountAll, ROTD_A_NUMUNIT, ROTD_A_EXTRALOC, nUnitId, ROTD_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_ROTD_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(ROTD_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_ROTD_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(ROTD_A_UNITS, rgExtraCountAll, ROTD_A_NUMUNIT, ROTD_A_EXTRALOC, nUnitId, nPaletteId, ROTD_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_ROTD_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(ROTD_A_UNITS, rgExtraCountAll, ROTD_A_NUMUNIT, ROTD_A_EXTRALOC, nUnitId, nPaletteId, ROTD_A_EXTRA_CUSTOM);
}

void CGame_ROTD_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != ROTD_A_EXTRALOC)
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
    else // ROTD_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForROTD(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_ROTD_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(ROTD_A_UNITS, rgExtraCountAll, ROTD_A_NUMUNIT, ROTD_A_EXTRALOC, ROTD_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
