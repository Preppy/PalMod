#include "StdAfx.h"
#include "GameDef.h"
#include "Game_FatalFury2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_FatalFury2_A::FatalFury2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_FatalFury2_A::MainDescTree = nullptr;

uint32_t CGame_FatalFury2_A::rgExtraCountAll[FatalFury2_A_NUMUNIT + 1];
uint32_t CGame_FatalFury2_A::rgExtraLoc[FatalFury2_A_NUMUNIT + 1];

uint32_t CGame_FatalFury2_A::m_nTotalPaletteCountForFatalFury2 = 0;
uint32_t CGame_FatalFury2_A::m_nConfirmedROMSize = -1;

void CGame_FatalFury2_A::InitializeStatics()
{
    safe_delete_array(CGame_FatalFury2_A::FatalFury2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_FatalFury2_A::InitDescTree());
}

CGame_FatalFury2_A::CGame_FatalFury2_A(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_FatalFury2_A::CGame_FatalFury2_A: Loading ROM...\n");

    //Set color mode: see the definitions in GameClass.h
    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = FatalFury2_A_NUMUNIT;
    m_nExtraUnit = FatalFury2_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 93;
    m_pszExtraFilename = EXTRA_FILENAME_FatalFury2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForFatalFury2;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x38000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = FatalFury2_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = FatalFury2_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_FatalFury2_A::~CGame_FatalFury2_A()
{
    safe_delete_array(CGame_FatalFury2_A::FatalFury2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

sFileRule CGame_FatalFury2_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"047-p1.bin"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_FatalFury2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.bin", 0xbe40ea92, 0 },
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.p1", 0xbe40ea92, 0 },
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

CDescTree* CGame_FatalFury2_A::GetMainTree()
{
    return &CGame_FatalFury2_A::MainDescTree;
}

uint32_t CGame_FatalFury2_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, FatalFury2_A_NUMUNIT, nUnitId, FatalFury2_A_EXTRA_CUSTOM);
}

uint32_t CGame_FatalFury2_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, FatalFury2_A_NUMUNIT, nUnitId, FatalFury2_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_FatalFury2_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_FatalFury2_A, &FatalFury2_A_EXTRA_CUSTOM, FatalFury2_A_EXTRALOC, m_nConfirmedROMSize);

    uint16_t nUnitCt = FatalFury2_A_NUMUNIT + (GetExtraCt(FatalFury2_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[FatalFury2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForFatalFury2 = _InitDescTree(NewDescTree,
        FatalFury2_A_UNITS,
        FatalFury2_A_EXTRALOC,
        FatalFury2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        FatalFury2_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

uint32_t CGame_FatalFury2_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(FatalFury2_A_UNITS, rgExtraCountAll, FatalFury2_A_NUMUNIT, FatalFury2_A_EXTRALOC, nUnitId, FatalFury2_A_EXTRA_CUSTOM);
}

uint32_t CGame_FatalFury2_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(FatalFury2_A_UNITS, rgExtraCountAll, FatalFury2_A_NUMUNIT, FatalFury2_A_EXTRALOC, nUnitId, nCollectionId, FatalFury2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_FatalFury2_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(FatalFury2_A_UNITS, FatalFury2_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_FatalFury2_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(FatalFury2_A_UNITS, rgExtraCountAll, FatalFury2_A_NUMUNIT, FatalFury2_A_EXTRALOC, nUnitId, FatalFury2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_FatalFury2_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(FatalFury2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_FatalFury2_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(FatalFury2_A_UNITS, rgExtraCountAll, FatalFury2_A_NUMUNIT, FatalFury2_A_EXTRALOC, nUnitId, nPaletteId, FatalFury2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_FatalFury2_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(FatalFury2_A_UNITS, rgExtraCountAll, FatalFury2_A_NUMUNIT, FatalFury2_A_EXTRALOC, nUnitId, nPaletteId, FatalFury2_A_EXTRA_CUSTOM);
}

void CGame_FatalFury2_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != FatalFury2_A_EXTRALOC)
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
    else // FatalFury2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &FatalFury2_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_FatalFury2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(FatalFury2_A_UNITS, rgExtraCountAll, FatalFury2_A_NUMUNIT, FatalFury2_A_EXTRALOC, FatalFury2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
