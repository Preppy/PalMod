#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MSHWOTG_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MSHWOTG_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MSHWOTG_SNES::MSHWOTG_SNES_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MSHWOTG_SNES::MainDescTree = nullptr;

int CGame_MSHWOTG_SNES::rgExtraCountAll[MSHWOTG_SNES_NUMUNIT + 1];
int CGame_MSHWOTG_SNES::rgExtraLoc[MSHWOTG_SNES_NUMUNIT + 1];

UINT32 CGame_MSHWOTG_SNES::m_nTotalPaletteCountForMSHWOTG = 0;
UINT32 CGame_MSHWOTG_SNES::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_MSHWOTG_SNES::m_nConfirmedROMSize = -1;

void CGame_MSHWOTG_SNES::InitializeStatics()
{
    safe_delete_array(CGame_MSHWOTG_SNES::MSHWOTG_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MSHWOTG_SNES::InitDescTree());
}

CGame_MSHWOTG_SNES::CGame_MSHWOTG_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MSHWOTG_SNES::CGame_MSHWOTG_SNES: Loading ROM...\n");

    //Set color mode: see the definitions in GameClass.h
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MSHWOTG_SNES_NUMUNIT;
    m_nExtraUnit = MSHWOTG_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 86;
    m_pszExtraFilename = EXTRA_FILENAME_MSHWOTG_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMSHWOTG;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x5e7d1;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = MSHWOTG_SNES;
    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = MSHWOTG_SNES_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(MSHWOTG_SNES_IMGIDS_USED);

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

CGame_MSHWOTG_SNES::~CGame_MSHWOTG_SNES(void)
{
    safe_delete_array(CGame_MSHWOTG_SNES::MSHWOTG_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

sFileRule CGame_MSHWOTG_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Marvel Super Heroes in War of the Gems (USA).sfc");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_MSHWOTG_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Marvel Super Heroes:  War of the Gems (SNES USA)", L"Marvel Super Heroes in War of the Gems (USA).sfc", 0, 0 },
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

CDescTree* CGame_MSHWOTG_SNES::GetMainTree()
{
    return &CGame_MSHWOTG_SNES::MainDescTree;
}

int CGame_MSHWOTG_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, nUnitId, MSHWOTG_SNES_EXTRA_CUSTOM);
}

int CGame_MSHWOTG_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, MSHWOTG_SNES_NUMUNIT, nUnitId, MSHWOTG_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MSHWOTG_SNES::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MSHWOTG_SNES, MSHWOTG_SNES_EXTRA, &MSHWOTG_SNES_EXTRA_CUSTOM, MSHWOTG_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MSHWOTG_SNES_NUMUNIT + (GetExtraCt(MSHWOTG_SNES_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MSHWOTG_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMSHWOTG = _InitDescTree(NewDescTree,
        MSHWOTG_SNES_UNITS,
        MSHWOTG_SNES_EXTRALOC,
        MSHWOTG_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MSHWOTG_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

UINT16 CGame_MSHWOTG_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(MSHWOTG_SNES_UNITS, rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, MSHWOTG_SNES_EXTRALOC, nUnitId, MSHWOTG_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_MSHWOTG_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(MSHWOTG_SNES_UNITS, rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, MSHWOTG_SNES_EXTRALOC, nUnitId, nCollectionId, MSHWOTG_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_MSHWOTG_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(MSHWOTG_SNES_UNITS, MSHWOTG_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_MSHWOTG_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(MSHWOTG_SNES_UNITS, rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, MSHWOTG_SNES_EXTRALOC, nUnitId, MSHWOTG_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MSHWOTG_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(MSHWOTG_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_MSHWOTG_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MSHWOTG_SNES_UNITS, rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, MSHWOTG_SNES_EXTRALOC, nUnitId, nPaletteId, MSHWOTG_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MSHWOTG_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(MSHWOTG_SNES_UNITS, rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, MSHWOTG_SNES_EXTRALOC, nUnitId, nPaletteId, MSHWOTG_SNES_EXTRA_CUSTOM);
}

void CGame_MSHWOTG_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != MSHWOTG_SNES_EXTRALOC)
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
    else // MSHWOTG_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMSHWOTG(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MSHWOTG_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MSHWOTG_SNES_UNITS, rgExtraCountAll, MSHWOTG_SNES_NUMUNIT, MSHWOTG_SNES_EXTRALOC, MSHWOTG_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
