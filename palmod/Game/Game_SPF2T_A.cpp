#include "StdAfx.h"
#include "GameDef.h"
#include "Game_SPF2T_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define SPF2T_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_SPF2T_A::SPF2T_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_SPF2T_A::MainDescTree = nullptr;

int CGame_SPF2T_A::rgExtraCountAll[SPF2T_A_NUMUNITS + 1];
int CGame_SPF2T_A::rgExtraLoc[SPF2T_A_NUMUNITS + 1];

UINT32 CGame_SPF2T_A::m_nTotalPaletteCountForSPF2T = 0;
UINT32 CGame_SPF2T_A::m_nExpectedGameROMSize = 0x80000;
UINT32 CGame_SPF2T_A::m_nConfirmedROMSize = -1;

void CGame_SPF2T_A::InitializeStatics()
{
    safe_delete_array(CGame_SPF2T_A::SPF2T_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_SPF2T_A::InitDescTree());
}

CGame_SPF2T_A::CGame_SPF2T_A(UINT32 nConfirmedROMSize)
{
    CString strMessage;
    strMessage.Format(L"CGame_SPF2T_A::CGame_SPF2T_A: Loading ROM...\n");
    OutputDebugString(strMessage);

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB444_BE);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = SPF2T_A_NUMUNITS;
    m_nExtraUnit = SPF2T_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 127;
    m_pszExtraFilename = EXTRA_FILENAME_SPF2T_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForSPF2T;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1fffe;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = SPF2T_A;
    nImgGameFlag = IMGDAT_SECTION_CPS2;
    m_prgGameImageSet = SPF2T_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(SPF2T_A_IMGIDS_USED);

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

CGame_SPF2T_A::~CGame_SPF2T_A(void)
{
    safe_delete_array(CGame_SPF2T_A::SPF2T_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_SPF2T_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Super Puzzle Fighter II Turbo", L"pzf.04", 0xb80649e2, 0 },
        { L"Super Puzzle Fighter II Turbo", L"pzf.04a", 0xb80649e2, 0 },
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

sFileRule CGame_SPF2T_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"pzf.04");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

CDescTree* CGame_SPF2T_A::GetMainTree()
{
    return &CGame_SPF2T_A::MainDescTree;
}

int CGame_SPF2T_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, SPF2T_A_NUMUNITS, nUnitId, SPF2T_A_EXTRA_CUSTOM);
}

int CGame_SPF2T_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, SPF2T_A_NUMUNITS, nUnitId, SPF2T_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_SPF2T_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_SPF2T_A, SPF2T_A_EXTRA, &SPF2T_A_EXTRA_CUSTOM, SPF2T_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = SPF2T_A_NUMUNITS + (GetExtraCt(SPF2T_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[SPF2T_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForSPF2T = _InitDescTree(NewDescTree,
        SPF2T_A_UNITS,
        SPF2T_A_EXTRALOC,
        SPF2T_A_NUMUNITS,
        rgExtraCountAll,
        rgExtraLoc,
        SPF2T_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

UINT16 CGame_SPF2T_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(SPF2T_A_UNITS, rgExtraCountAll, SPF2T_A_NUMUNITS, SPF2T_A_EXTRALOC, nUnitId, SPF2T_A_EXTRA_CUSTOM);
}

UINT16 CGame_SPF2T_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(SPF2T_A_UNITS, rgExtraCountAll, SPF2T_A_NUMUNITS, SPF2T_A_EXTRALOC, nUnitId, nCollectionId, SPF2T_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_SPF2T_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(SPF2T_A_UNITS, SPF2T_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_SPF2T_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(SPF2T_A_UNITS, rgExtraCountAll, SPF2T_A_NUMUNITS, SPF2T_A_EXTRALOC, nUnitId, SPF2T_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_SPF2T_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(SPF2T_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_SPF2T_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(SPF2T_A_UNITS, rgExtraCountAll, SPF2T_A_NUMUNITS, SPF2T_A_EXTRALOC, nUnitId, nPaletteId, SPF2T_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_SPF2T_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(SPF2T_A_UNITS, rgExtraCountAll, SPF2T_A_NUMUNITS, SPF2T_A_EXTRALOC, nUnitId, nPaletteId, SPF2T_A_EXTRA_CUSTOM);
}

void CGame_SPF2T_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != SPF2T_A_EXTRALOC)
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
    else // SPF2T_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForSPF2T(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_SPF2T_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(SPF2T_A_UNITS, rgExtraCountAll, SPF2T_A_NUMUNITS, SPF2T_A_EXTRALOC, SPF2T_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
