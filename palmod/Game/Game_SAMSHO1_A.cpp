#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SAMSHO1_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_SAMSHO1_A::SAMSHO1_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SAMSHO1_A::MainDescTree = nullptr;

uint32_t CGame_SAMSHO1_A::rgExtraCountAll[SAMSHO1_A_NUMUNIT + 1];
uint32_t CGame_SAMSHO1_A::rgExtraLoc[SAMSHO1_A_NUMUNIT + 1];

UINT32 CGame_SAMSHO1_A::m_nTotalPaletteCountForSAMSHO1 = 0;
UINT32 CGame_SAMSHO1_A::m_nExpectedGameROMSize = 0x100000;  // 1,048,576 bytes
UINT32 CGame_SAMSHO1_A::m_nConfirmedROMSize = -1;

void CGame_SAMSHO1_A::InitializeStatics()
{
    safe_delete_array(CGame_SAMSHO1_A::SAMSHO1_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SAMSHO1_A::InitDescTree());
}

CGame_SAMSHO1_A::CGame_SAMSHO1_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_SAMSHO1_A::CGame_SAMSHO1_A: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SAMSHO1_A_NUMUNIT;
    m_nExtraUnit = SAMSHO1_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 260;
    m_pszExtraFilename = EXTRA_FILENAME_SAMSHO1_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSAMSHO1;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xe4a8a;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SAMSHO1_A;
    nImgGameFlag = IMGDAT_SECTION_SAMSHO;
    m_prgGameImageSet = SAMSHO1_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2_PK;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, 0, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_SAMSHO1_A::~CGame_SAMSHO1_A(void)
{
    safe_delete_array(CGame_SAMSHO1_A::SAMSHO1_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_SAMSHO1_A::GetMainTree()
{
    return &CGame_SAMSHO1_A::MainDescTree;
}

uint32_t CGame_SAMSHO1_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SAMSHO1_A_NUMUNIT, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

uint32_t CGame_SAMSHO1_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SAMSHO1_A_NUMUNIT, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SAMSHO1_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SAMSHO1_A, &SAMSHO1_A_EXTRA_CUSTOM, SAMSHO1_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SAMSHO1_A_NUMUNIT + (GetExtraCt(SAMSHO1_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SAMSHO1_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSAMSHO1 = _InitDescTree(NewDescTree,
        SAMSHO1_A_UNITS,
        SAMSHO1_A_EXTRALOC,
        SAMSHO1_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        SAMSHO1_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_SAMSHO1_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"045-p1.p1");
    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    // NeoStation variant is cut in twain: use p2 there.
    NewFileRule.fHasAltName = true;
    _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"045-p2.rom");
    NewFileRule.uAltVerifyVar = 0x80000;

    return NewFileRule;
}

UINT32 CGame_SAMSHO1_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Samurai Shodown (Neo-Geo)", L"045-p1.p1", 0xdfe51bf0, 0 },
        { L"Samurai Shodown (Neo-Geo Station)", L"045-p2.rom", 0x71768728, -0x80000 },
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

uint32_t CGame_SAMSHO1_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

uint32_t CGame_SAMSHO1_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nCollectionId, SAMSHO1_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SAMSHO1_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(SAMSHO1_A_UNITS, SAMSHO1_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_SAMSHO1_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, SAMSHO1_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SAMSHO1_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(SAMSHO1_A_UNITS, nUnitId, nCollectionId);
}

uint32_t CGame_SAMSHO1_A::GetNodeSizeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetNodeSizeFromPaletteId(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO1_A_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_SAMSHO1_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO1_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SAMSHO1_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, nUnitId, nPaletteId, SAMSHO1_A_EXTRA_CUSTOM);
}

void CGame_SAMSHO1_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != SAMSHO1_A_EXTRALOC)
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
    else // SAMSHO1_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSAMSHO1(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SAMSHO1_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SAMSHO1_A_UNITS, rgExtraCountAll, SAMSHO1_A_NUMUNIT, SAMSHO1_A_EXTRALOC, SAMSHO1_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
