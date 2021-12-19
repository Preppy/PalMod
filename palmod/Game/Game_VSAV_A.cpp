#include "StdAfx.h"
#include "Game_VSAV_A.h"
#include "GameDef.h"
#include "..\PalMod.h"

#define VSAV_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_VSAV_A::VSAV_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_VSAV_A::MainDescTree = nullptr;

size_t CGame_VSAV_A::rgExtraCountAll[VSAV_A_NUMUNIT + 1] = { (size_t)-1 };
size_t CGame_VSAV_A::rgExtraLoc[VSAV_A_NUMUNIT + 1] = { (size_t)-1 };

UINT32 CGame_VSAV_A::m_nTotalPaletteCountForVSAV = 0;
UINT32 CGame_VSAV_A::m_nConfirmedROMSize = -1;

void CGame_VSAV_A::InitializeStatics()
{
    safe_delete_array(CGame_VSAV_A::VSAV_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_VSAV_A::InitDescTree());
}

CGame_VSAV_A::CGame_VSAV_A(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = VSAV_A_NUMUNIT + (GetExtraCt(VSAV_A_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = VSAV_A_NUMUNIT;
    m_nExtraUnit = VSAV_A_EXTRALOC;
    m_nSafeCountForThisRom = 3522 + GetExtraCt(VSAV_A_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_VSAV;
    m_nTotalPaletteCount = m_nTotalPaletteCountForVSAV;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0xc1aa;

    InitDataBuffer();

    //Set game information
    nGameFlag = VSAV_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = VSAV_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_VSAV;

    //Create the redirect buffer
    rgUnitRedir = new size_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(size_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_VSAV_A::~CGame_VSAV_A(void)
{
    safe_delete_array(CGame_VSAV_A::VSAV_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_VSAV_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        // Vampire Savior: The Lord of Vampire (Euro 970519), same for US, Asia, Hispanic
        { L"Vampire Savior (970519)", L"vm3.10b",  0xfffbb5b8, 0 },
        // Vampire Savior: The Lord of Vampire (Japan 970519)
        { L"Vampire Savior (Japan 970519)", L"vm3j.10b", 0x434518e9, 0x00F4 },
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

size_t CGame_VSAV_A::GetExtraCt(size_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, VSAV_A_NUMUNIT, nUnitId, VSAV_A_EXTRA_CUSTOM);
}

size_t CGame_VSAV_A::GetExtraLoc(size_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, VSAV_A_NUMUNIT, nUnitId, VSAV_A_EXTRA_CUSTOM);
}

CDescTree* CGame_VSAV_A::GetMainTree()
{
    return &CGame_VSAV_A::MainDescTree;
}

sDescTreeNode* CGame_VSAV_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_VSAV, VSAV_A_EXTRA, &VSAV_A_EXTRA_CUSTOM, VSAV_A_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = VSAV_A_NUMUNIT + (GetExtraCt(VSAV_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[VSAV_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForVSAV = _InitDescTree(NewDescTree,
        VSAV_A_UNITS,
        VSAV_A_EXTRALOC,
        VSAV_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        VSAV_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_VSAV_A::GetRule(size_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"vm3.10b");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

size_t CGame_VSAV_A::GetCollectionCountForUnit(size_t nUnitId)
{
    return _GetCollectionCountForUnit(VSAV_A_UNITS, rgExtraCountAll, VSAV_A_NUMUNIT, VSAV_A_EXTRALOC, nUnitId, VSAV_A_EXTRA_CUSTOM);
}

size_t CGame_VSAV_A::GetNodeCountForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetNodeCountForCollection(VSAV_A_UNITS, rgExtraCountAll, VSAV_A_NUMUNIT, VSAV_A_EXTRALOC, nUnitId, nCollectionId, VSAV_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_VSAV_A::GetDescriptionForCollection(size_t nUnitId, size_t nCollectionId)
{
    return _GetDescriptionForCollection(VSAV_A_UNITS, VSAV_A_EXTRALOC, nUnitId, nCollectionId);
}

size_t CGame_VSAV_A::GetPaletteCountForUnit(size_t nUnitId)
{
    return _GetPaletteCountForUnit(VSAV_A_UNITS, rgExtraCountAll, VSAV_A_NUMUNIT, VSAV_A_EXTRALOC, nUnitId, VSAV_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_VSAV_A::GetPaletteSet(size_t nUnitId, size_t nCollectionId)
{
    return _GetPaletteSet(VSAV_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_VSAV_A::GetNodeFromPaletteId(size_t nUnitId, size_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(VSAV_A_UNITS, rgExtraCountAll, VSAV_A_NUMUNIT, VSAV_A_EXTRALOC, nUnitId, nPaletteId, VSAV_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_VSAV_A::GetSpecificPalette(size_t nUnitId, size_t nPaletteId)
{
    return _GetSpecificPalette(VSAV_A_UNITS, rgExtraCountAll, VSAV_A_NUMUNIT, VSAV_A_EXTRALOC, nUnitId, nPaletteId, VSAV_A_EXTRA_CUSTOM);
}

void CGame_VSAV_A::LoadSpecificPaletteData(size_t nUnitId, size_t nPalId)
{
    if (nUnitId != VSAV_A_EXTRALOC)
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
    else // VSAV_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForVSAV(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_VSAV_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(VSAV_A_UNITS, rgExtraCountAll, VSAV_A_NUMUNIT, VSAV_A_EXTRALOC, VSAV_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
