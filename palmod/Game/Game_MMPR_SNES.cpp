#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MMPR_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MMPR_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MMPR_SNES::MMPR_SNES_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MMPR_SNES::MainDescTree = nullptr;

int CGame_MMPR_SNES::rgExtraCountAll[MMPR_SNES_NUMUNIT + 1];
int CGame_MMPR_SNES::rgExtraLoc[MMPR_SNES_NUMUNIT + 1];

UINT32 CGame_MMPR_SNES::m_nTotalPaletteCountForMMPR = 0;
UINT32 CGame_MMPR_SNES::m_nExpectedGameROMSize = 0x180000;
UINT32 CGame_MMPR_SNES::m_nConfirmedROMSize = -1;

void CGame_MMPR_SNES::InitializeStatics()
{
    safe_delete_array(CGame_MMPR_SNES::MMPR_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MMPR_SNES::InitDescTree());
}

CGame_MMPR_SNES::CGame_MMPR_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MMPR_SNES::CGame_MMPR_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MMPR_SNES_NUMUNIT;
    m_nExtraUnit = MMPR_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 21;
    m_pszExtraFilename = EXTRA_FILENAME_MMPR_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMMPR;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x141b24;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = MMPR_SNES;
    nImgGameFlag = IMGDAT_SECTION_SNES;
    nImgUnitAmt = ARRAYSIZE(MMPR_SNES_IMGIDS_USED);
    m_prgGameImageSet = MMPR_SNES_IMGIDS_USED;

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

CGame_MMPR_SNES::~CGame_MMPR_SNES(void)
{
    safe_delete_array(CGame_MMPR_SNES::MMPR_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_MMPR_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"MMPR:TFE (SNES)", L"Mighty Morphin Power Rangers - The Fighting Edition (USA).sfc", 0x460b0a60, 0 },
    };

    if (ppKnownROMSet)
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

CDescTree* CGame_MMPR_SNES::GetMainTree()
{
    return &CGame_MMPR_SNES::MainDescTree;
}

int CGame_MMPR_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MMPR_SNES_NUMUNIT, nUnitId, MMPR_SNES_EXTRA_CUSTOM);
}

int CGame_MMPR_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MMPR_SNES_NUMUNIT, nUnitId, MMPR_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MMPR_SNES::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MMPR_SNES, MMPR_SNES_EXTRA, &MMPR_SNES_EXTRA_CUSTOM, MMPR_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MMPR_SNES_NUMUNIT + (GetExtraCt(MMPR_SNES_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MMPR_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMMPR = _InitDescTree(NewDescTree,
        MMPR_SNES_UNITS,
        MMPR_SNES_EXTRALOC,
        MMPR_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MMPR_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MMPR_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Mighty Morphin Power Rangers - The Fighting Edition (USA).sfc"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_MMPR_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(MMPR_SNES_UNITS, rgExtraCountAll, MMPR_SNES_NUMUNIT, MMPR_SNES_EXTRALOC, nUnitId, MMPR_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_MMPR_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(MMPR_SNES_UNITS, rgExtraCountAll, MMPR_SNES_NUMUNIT, MMPR_SNES_EXTRALOC, nUnitId, nCollectionId, MMPR_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_MMPR_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(MMPR_SNES_UNITS, MMPR_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_MMPR_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(MMPR_SNES_UNITS, rgExtraCountAll, MMPR_SNES_NUMUNIT, MMPR_SNES_EXTRALOC, nUnitId, MMPR_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MMPR_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(MMPR_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_MMPR_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MMPR_SNES_UNITS, rgExtraCountAll, MMPR_SNES_NUMUNIT, MMPR_SNES_EXTRALOC, nUnitId, nPaletteId, MMPR_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MMPR_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(MMPR_SNES_UNITS, rgExtraCountAll, MMPR_SNES_NUMUNIT, MMPR_SNES_EXTRALOC, nUnitId, nPaletteId, MMPR_SNES_EXTRA_CUSTOM);
}

void CGame_MMPR_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != MMPR_SNES_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            // Adjust for ROM-specific variant locations
            if (m_pCRC32SpecificData)
            {
                m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // MMPR_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMMPR(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MMPR_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MMPR_SNES_UNITS, rgExtraCountAll, MMPR_SNES_NUMUNIT, MMPR_SNES_EXTRALOC, MMPR_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
