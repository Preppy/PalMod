#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO5_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_SAMSHO5_A::SAMSHO5_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO5_A::MainDescTree = nullptr;

size_t CGame_SAMSHO5_A::rgExtraCountAll[SAMSHO5_A_NUMUNIT + 1];
size_t CGame_SAMSHO5_A::rgExtraLoc[SAMSHO5_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO5_A::m_nTotalPaletteCountForSAMSHO5 = 0;
UINT32 CGame_SAMSHO5_A::m_nExpectedGameROMSize_5 = 0x400000;
UINT32 CGame_SAMSHO5_A::m_nExpectedGameROMSize_5X = 0x800000;
UINT32 CGame_SAMSHO5_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO5_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO5_A::SAMSHO5_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO5_A::InitDescTree());
}

CGame_SAMSHO5_A::CGame_SAMSHO5_A(UINT32 nConfirmedROMSize, SupportedGamesList nROMToLoad /*= SAMSHO5_A*/)
{
    OutputDebugString(L"CGame_SAMSHO5_A::CGame_SAMSHO5_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO5_A_NUMUNIT;
    m_nExtraUnit = SAMSHO5_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1689;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO5_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO5;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xd4000;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = (SupportedGamesList)nROMToLoad;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    m_prgGameImageSet = SAMSHO5_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAMSHO5_A::~CGame_SAMSHO5_A(void)
{
    safe_delete_array(CGame_SAMSHO5_A::SAMSHO5_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO5_A::GetMainTree()
{
    return &CGame_SAMSHO5_A::MainDescTree;
}

size_t CGame_SAMSHO5_A::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO5_A_NUMUNIT, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

size_t CGame_SAMSHO5_A::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO5_A_NUMUNIT, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO5_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO5_A, &SAMSHO5_A_EXTRA_CUSTOM, SAMSHO5_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO5_A_NUMUNIT + (GetExtraCt(SAMSHO5_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO5_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO5 = _InitDescTree(NewDescTree,
        SAMSHO5_A_UNITS,
        SAMSHO5_A_EXTRALOC,
        SAMSHO5_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO5_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SAMSHO5_A::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"270-p1.bin");
    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = (nUnitId == SAMSHO5X_A) ? m_nExpectedGameROMSize_5X : m_nExpectedGameROMSize_5;

    return NewFileRule;
}

size_t CGame_SAMSHO5_A::GetCollectionCountForUnit(size_t nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

size_t CGame_SAMSHO5_A::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO5_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO5_A::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO5_A_UNITS, SAMSHO5_A_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_SAMSHO5_A::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, SAMSHO5_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO5_A::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(SAMSHO5_A_UNITS, nUnitId, nCollectionId);
}

size_t CGame_SAMSHO5_A::GetNodeSizeFromPaletteId(size_t nUnitId, size_t nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO5_A::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO5_A::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO5_A_EXTRA_CUSTOM);
}

UINT32 CGame_SAMSHO5_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Samurai Shodown V (Neo-Geo)", L"270-p1.bin", 0x4a2a09e6, 0 },
        { L"Samurai Shodown V (Neo-Geo)", L"270-p1.p1", 0x4a2a09e6, 0 },

        { L"Samurai Shodown V (Xbox)", L"ssvx_p1.rom", 0x16983af9, 0x6d1000 - 0x0d5000 },
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

void CGame_SAMSHO5_A::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
     if (nUnitId != SAMSHO5_A_EXTRALOC)
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
                m_nCurrentPaletteROMLocation = max(0, m_nCurrentPaletteROMLocation + m_pCRC32SpecificData->nROMSpecificOffset);
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // SAMSHO5_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO5(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO5_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SAMSHO5_A_UNITS, rgExtraCountAll, SAMSHO5_A_NUMUNIT, SAMSHO5_A_EXTRALOC, SAMSHO5_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
