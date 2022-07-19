#include "StdAfx.h"
#include "GameDef.h"
#include "Game_GalaxyFight_A.h"
#include "..\RegProc.h"

stExtraDef* CGame_GalaxyFight_A::GalaxyFight_A_EXTRA_CUSTOM = nullptr;
CDescTree CGame_GalaxyFight_A::MainDescTree = nullptr;
uint32_t CGame_GalaxyFight_A::rgExtraCountAll[GalaxyFight_A_NUMUNIT + 1];
uint32_t CGame_GalaxyFight_A::rgExtraLoc[GalaxyFight_A_NUMUNIT + 1];
uint32_t CGame_GalaxyFight_A::m_nTotalPaletteCountForGalaxyFight = 0;
uint32_t CGame_GalaxyFight_A::m_nConfirmedROMSize = -1;

void CGame_GalaxyFight_A::InitializeStatics()
{
    safe_delete_array(CGame_GalaxyFight_A::GalaxyFight_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_GalaxyFight_A::InitDescTree());
}

CGame_GalaxyFight_A::CGame_GalaxyFight_A(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_GalaxyFight_A::CGame_GalaxyFight_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    InitializeStatics();

    m_nTotalInternalUnits = GalaxyFight_A_NUMUNIT;
    m_nExtraUnit = GalaxyFight_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + m_nPaletteCountInHeaders;
    m_pszExtraFilename = EXTRA_FILENAME_GalaxyFight_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForGalaxyFight;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = m_nLowestROMLocationUsedInHeaders;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = GalaxyFight_A;
    nImgGameFlag = IMGDAT_SECTION_NEOGEO;
    m_prgGameImageSet = GalaxyFight_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_GalaxyFight_A::~CGame_GalaxyFight_A()
{
    safe_delete_array(CGame_GalaxyFight_A::GalaxyFight_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_GalaxyFight_A::GetMainTree()
{
    return &CGame_GalaxyFight_A::MainDescTree;
}

uint32_t CGame_GalaxyFight_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, GalaxyFight_A_NUMUNIT, nUnitId, GalaxyFight_A_EXTRA_CUSTOM);
}

uint32_t CGame_GalaxyFight_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, GalaxyFight_A_NUMUNIT, nUnitId, GalaxyFight_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_GalaxyFight_A::InitDescTree()
{
    uint32_t nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_GalaxyFight_A, &GalaxyFight_A_EXTRA_CUSTOM, GalaxyFight_A_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = GalaxyFight_A_NUMUNIT + (GetExtraCt(GalaxyFight_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[GalaxyFight_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForGalaxyFight = _InitDescTree(NewDescTree,
        GalaxyFight_A_UNITS,
        GalaxyFight_A_EXTRALOC,
        GalaxyFight_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        GalaxyFight_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_GalaxyFight_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, GalaxyFight_A_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_GalaxyFight_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(GalaxyFight_A_UNITS, rgExtraCountAll, GalaxyFight_A_NUMUNIT, GalaxyFight_A_EXTRALOC, nUnitId, GalaxyFight_A_EXTRA_CUSTOM);
}

uint32_t CGame_GalaxyFight_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(GalaxyFight_A_UNITS, rgExtraCountAll, GalaxyFight_A_NUMUNIT, GalaxyFight_A_EXTRALOC, nUnitId, nCollectionId, GalaxyFight_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_GalaxyFight_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(GalaxyFight_A_UNITS, GalaxyFight_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_GalaxyFight_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(GalaxyFight_A_UNITS, rgExtraCountAll, GalaxyFight_A_NUMUNIT, GalaxyFight_A_EXTRALOC, nUnitId, GalaxyFight_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_GalaxyFight_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(GalaxyFight_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_GalaxyFight_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(GalaxyFight_A_UNITS, rgExtraCountAll, GalaxyFight_A_NUMUNIT, GalaxyFight_A_EXTRALOC, nUnitId, nPaletteId, GalaxyFight_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_GalaxyFight_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(GalaxyFight_A_UNITS, rgExtraCountAll, GalaxyFight_A_NUMUNIT, GalaxyFight_A_EXTRALOC, nUnitId, nPaletteId, GalaxyFight_A_EXTRA_CUSTOM);
}

void CGame_GalaxyFight_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
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
        stExtraDef* pCurrDef = &GalaxyFight_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_GalaxyFight_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(GalaxyFight_A_UNITS, rgExtraCountAll, GalaxyFight_A_NUMUNIT, GalaxyFight_A_EXTRALOC, GalaxyFight_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
