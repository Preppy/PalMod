#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF98AE2016_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define KOF98AE2016_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_KOF98AE2016_A::KOF98AE2016_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_KOF98AE2016_A::MainDescTree = nullptr;

int CGame_KOF98AE2016_A::rgExtraCountAll[KOF98AE2016_A_NUMUNIT + 1];
int CGame_KOF98AE2016_A::rgExtraLoc[KOF98AE2016_A_NUMUNIT + 1];

UINT32 CGame_KOF98AE2016_A::m_nTotalPaletteCountForKOF98AE2016 = 1932;
UINT32 CGame_KOF98AE2016_A::m_nExpectedGameROMSize = 0x600000;
UINT32 CGame_KOF98AE2016_A::m_nConfirmedROMSize = -1;

void CGame_KOF98AE2016_A::InitializeStatics()
{
    safe_delete_array(CGame_KOF98AE2016_A::KOF98AE2016_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KOF98AE2016_A::InitDescTree());
}

CGame_KOF98AE2016_A::CGame_KOF98AE2016_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_KOF98AE2016_A::CGame_KOF98AE2016_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KOF98AE2016_A_NUMUNIT;
    m_nExtraUnit = KOF98AE2016_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 2188;
    m_pszExtraFilename = EXTRA_FILENAME_KOF98AE2016_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKOF98AE2016;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1b97f0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = KOF98AE2016_A;
    nImgGameFlag = IMGDAT_SECTION_KOF;
    m_prgGameImageSet = KOF98ae_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(KOF98ae_A_IMG_UNITS);

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

CGame_KOF98AE2016_A::~CGame_KOF98AE2016_A(void)
{
    safe_delete_array(CGame_KOF98AE2016_A::KOF98AE2016_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_KOF98AE2016_A::GetMainTree()
{
    return &CGame_KOF98AE2016_A::MainDescTree;
}

int CGame_KOF98AE2016_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KOF98AE2016_A_NUMUNIT, nUnitId, KOF98AE2016_A_EXTRA_CUSTOM);
}

int CGame_KOF98AE2016_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KOF98AE2016_A_NUMUNIT, nUnitId, KOF98AE2016_A_EXTRA_CUSTOM);
}

struct sKOF98AE2016_A_PaletteData
{
    LPCWSTR pszCharacterName;
    UINT32 nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOFSprites_98Kyo";
    bool rgIsEffectUsed[11];
};

sFileRule CGame_KOF98AE2016_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"242ae-p2.sp2");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_KOF98AE2016_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"KOF98AE2016 (Romhack)", L"242ae-p2.sp2", 0xAC1E9E79, 0 },
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

sDescTreeNode* CGame_KOF98AE2016_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KOF98AE2016_A, KOF98AE2016_A_EXTRA, &KOF98AE2016_A_EXTRA_CUSTOM, KOF98AE2016_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KOF98AE2016_A_NUMUNIT + (GetExtraCt(KOF98AE2016_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KOF98AE2016_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKOF98AE2016 = _InitDescTree(NewDescTree,
        KOF98AE2016_A_UNITS,
        KOF98AE2016_A_EXTRALOC,
        KOF98AE2016_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KOF98AE2016_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}


UINT16 CGame_KOF98AE2016_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KOF98AE2016_A_UNITS, rgExtraCountAll, KOF98AE2016_A_NUMUNIT, KOF98AE2016_A_EXTRALOC, nUnitId, KOF98AE2016_A_EXTRA_CUSTOM);
}

UINT16 CGame_KOF98AE2016_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KOF98AE2016_A_UNITS, rgExtraCountAll, KOF98AE2016_A_NUMUNIT, KOF98AE2016_A_EXTRALOC, nUnitId, nCollectionId, KOF98AE2016_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_KOF98AE2016_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KOF98AE2016_A_UNITS, KOF98AE2016_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KOF98AE2016_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KOF98AE2016_A_UNITS, rgExtraCountAll, KOF98AE2016_A_NUMUNIT, KOF98AE2016_A_EXTRALOC, nUnitId, KOF98AE2016_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KOF98AE2016_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KOF98AE2016_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KOF98AE2016_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KOF98AE2016_A_UNITS, rgExtraCountAll, KOF98AE2016_A_NUMUNIT, KOF98AE2016_A_EXTRALOC, nUnitId, nPaletteId, KOF98AE2016_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KOF98AE2016_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KOF98AE2016_A_UNITS, rgExtraCountAll, KOF98AE2016_A_NUMUNIT, KOF98AE2016_A_EXTRALOC, nUnitId, nPaletteId, KOF98AE2016_A_EXTRA_CUSTOM);
}

void CGame_KOF98AE2016_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != KOF98AE2016_A_EXTRALOC)
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
    else // KOF98AE2016_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForKOF98AE2016(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KOF98AE2016_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KOF98AE2016_A_UNITS, rgExtraCountAll, KOF98AE2016_A_NUMUNIT, KOF98AE2016_A_EXTRALOC, KOF98AE2016_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
