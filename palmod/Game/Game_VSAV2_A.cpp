#include "StdAfx.h"
#include "Game_VSAV2_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define VSAV2_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_VSAV2_A::VSAV2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_VSAV2_A::MainDescTree = nullptr;

int CGame_VSAV2_A::rgExtraCountAll[VSAV2_A_NUMUNIT + 1] = { -1 };
int CGame_VSAV2_A::rgExtraLoc[VSAV2_A_NUMUNIT + 1] = { -1 };

UINT32 CGame_VSAV2_A::m_nTotalPaletteCountForVSAV2 = 0;
UINT32 CGame_VSAV2_A::m_nExpectedGameROMSize = 0x80000; // 524288 bytes
UINT32 CGame_VSAV2_A::m_nConfirmedROMSize = -1;

void CGame_VSAV2_A::InitializeStatics()
{
    safe_delete_array(CGame_VSAV2_A::VSAV2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_VSAV2_A::InitDescTree());
}

CGame_VSAV2_A::CGame_VSAV2_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.

    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = VSAV2_A_NUMUNIT + (GetExtraCt(VSAV2_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = VSAV2_A_NUMUNIT;
    m_nExtraUnit = VSAV2_A_EXTRALOC;
    m_nSafeCountForThisRom = 3343 + GetExtraCt(VSAV2_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_VSAV2;
    m_nTotalPaletteCount = m_nTotalPaletteCountForVSAV2;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x16c9a;

    InitDataBuffer();

    //Set game information
    nGameFlag = VSAV2_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = VSAV2_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(VSAV2_A_IMGIDS_USED);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_VSAV;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_VSAV);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_VSAV2_A::~CGame_VSAV2_A(void)
{
    safe_delete_array(CGame_VSAV2_A::VSAV2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_VSAV2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Vampire Savior 2 (Japan 970913)", L"vs2j.10", 0xeb490213, 0 },
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

int CGame_VSAV2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, VSAV2_A_NUMUNIT, nUnitId, VSAV2_A_EXTRA_CUSTOM);
}

int CGame_VSAV2_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, VSAV2_A_NUMUNIT, nUnitId, VSAV2_A_EXTRA_CUSTOM);
}

CDescTree* CGame_VSAV2_A::GetMainTree()
{
    return &CGame_VSAV2_A::MainDescTree;
}

sDescTreeNode* CGame_VSAV2_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_VSAV2, VSAV2_A_EXTRA, &VSAV2_A_EXTRA_CUSTOM, VSAV2_A_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = VSAV2_A_NUMUNIT + (GetExtraCt(VSAV2_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VSAV2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForVSAV2 = _InitDescTree(NewDescTree,
        VSAV2_A_UNITS,
        VSAV2_A_EXTRALOC,
        VSAV2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        VSAV2_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_VSAV2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"vs2j.10");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_VSAV2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(VSAV2_A_UNITS, rgExtraCountAll, VSAV2_A_NUMUNIT, VSAV2_A_EXTRALOC, nUnitId, VSAV2_A_EXTRA_CUSTOM);
}

UINT16 CGame_VSAV2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(VSAV2_A_UNITS, rgExtraCountAll, VSAV2_A_NUMUNIT, VSAV2_A_EXTRALOC, nUnitId, nCollectionId, VSAV2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_VSAV2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(VSAV2_A_UNITS, VSAV2_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_VSAV2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(VSAV2_A_UNITS, rgExtraCountAll, VSAV2_A_NUMUNIT, VSAV2_A_EXTRALOC, nUnitId, VSAV2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_VSAV2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(VSAV2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_VSAV2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(VSAV2_A_UNITS, rgExtraCountAll, VSAV2_A_NUMUNIT, VSAV2_A_EXTRALOC, nUnitId, nPaletteId, VSAV2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_VSAV2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(VSAV2_A_UNITS, rgExtraCountAll, VSAV2_A_NUMUNIT, VSAV2_A_EXTRALOC, nUnitId, nPaletteId, VSAV2_A_EXTRA_CUSTOM);
}

void CGame_VSAV2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != VSAV2_A_EXTRALOC)
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

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
        }
    }
    else // VSAV2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForVSAV2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VSAV2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(VSAV2_A_UNITS, rgExtraCountAll, VSAV2_A_NUMUNIT, VSAV2_A_EXTRALOC, VSAV2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
