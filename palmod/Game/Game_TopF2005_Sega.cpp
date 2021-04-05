#include "StdAfx.h"
#include "Game_TOPF2005_SEGA.h"
#include "GameDef.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define TOPF2005_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_TOPF2005_SEGA::TOPF2005_SEGA_EXTRA_CUSTOM = nullptr;

CDescTree CGame_TOPF2005_SEGA::MainDescTree = nullptr;

int CGame_TOPF2005_SEGA::rgExtraCountAll[TOPF2005_SEGA_NUMUNIT + 1] = { -1 };
int CGame_TOPF2005_SEGA::rgExtraLoc[TOPF2005_SEGA_NUMUNIT + 1] = { -1 };

UINT32 CGame_TOPF2005_SEGA::m_nTotalPaletteCountForTOPF2005 = 0;
UINT32 CGame_TOPF2005_SEGA::m_nExpectedGameROMSize = 0x200000;
UINT32 CGame_TOPF2005_SEGA::m_nConfirmedROMSize = -1;

void CGame_TOPF2005_SEGA::InitializeStatics()
{
    safe_delete_array(CGame_TOPF2005_SEGA::TOPF2005_SEGA_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_TOPF2005_SEGA::InitDescTree());
}

CGame_TOPF2005_SEGA::CGame_TOPF2005_SEGA(UINT32 nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_9);

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    //We need the proper unit amt before we init the main buffer
    nUnitAmt = TOPF2005_SEGA_NUMUNIT + (GetExtraCt(TOPF2005_SEGA_EXTRALOC) ? 1 : 0);

    m_nTotalInternalUnits = TOPF2005_SEGA_NUMUNIT;
    m_nExtraUnit = TOPF2005_SEGA_EXTRALOC;
    m_nSafeCountForThisRom = 32 + GetExtraCt(TOPF2005_SEGA_EXTRALOC);
    m_pszExtraFilename = EXTRA_FILENAME_TOPF2005;
    m_nTotalPaletteCount = m_nTotalPaletteCountForTOPF2005;

    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x24798;

    InitDataBuffer();

    //Set game information
    nGameFlag = TOPF2005_SEGA;
    nImgGameFlag = IMGDAT_SECTION_SEGA;
    m_prgGameImageSet = TOPF2005_SEGA_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(TOPF2005_SEGA_IMG_UNITS);

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_NEOGEO;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_NEOGEO);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_TOPF2005_SEGA::~CGame_TOPF2005_SEGA(void)
{
    safe_delete_array(CGame_TOPF2005_SEGA::TOPF2005_SEGA_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_TOPF2005_SEGA::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Top Fighter 2005 (Mega Drive)", L"top fighter 2005 (unl).bin", 0x174DEFE6, 0 },
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

sFileRule CGame_TOPF2005_SEGA::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"top fighter 2005 (unl).bin");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

sDescTreeNode* CGame_TOPF2005_SEGA::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_TOPF2005, TOPF2005_SEGA_EXTRA, &TOPF2005_SEGA_EXTRA_CUSTOM, TOPF2005_SEGA_EXTRALOC, m_nConfirmedROMSize);

    const UINT16 nUnitCt = TOPF2005_SEGA_NUMUNIT + (GetExtraCt(TOPF2005_SEGA_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[TOPF2005_SEGA]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    CString strMsg;
    bool fHaveExtras = (GetExtraCt(TOPF2005_SEGA_EXTRALOC) > 0);
    strMsg.Format(L"CGame_TOPF2005_SEGA::InitDescTree: Building desc tree for TOPF2005 %s extras...\n", fHaveExtras ? L"with" : L"without");
    OutputDebugString(strMsg);

    nTotalPaletteCount = _InitDescTree(NewDescTree,
                                    TOPF2005_UNITS,
                                    nUnitCt,
                                    TOPF2005_SEGA_EXTRALOC,
                                    TOPF2005_SEGA_NUMUNIT,
                                    rgExtraCountAll,
                                    rgExtraLoc,
                                    TOPF2005_SEGA_EXTRA_CUSTOM    
    );

    strMsg.Format(L"CGame_TOPF2005_SEGA::InitDescTree: Loaded %u palettes for TOPF2005\n", nTotalPaletteCount);
    OutputDebugString(strMsg);

    m_nTotalPaletteCountForTOPF2005 = nTotalPaletteCount;

    return NewDescTree;
}

void CGame_TOPF2005_SEGA::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != TOPF2005_SEGA_EXTRALOC)
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
    else
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForTOPF2005(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

int CGame_TOPF2005_SEGA::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, nUnitId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

int CGame_TOPF2005_SEGA::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, TOPF2005_SEGA_NUMUNIT, nUnitId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

CDescTree* CGame_TOPF2005_SEGA::GetMainTree()
{
    return &CGame_TOPF2005_SEGA::MainDescTree;
}

UINT16 CGame_TOPF2005_SEGA::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, nUnitId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

UINT16 CGame_TOPF2005_SEGA::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, nUnitId, nCollectionId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

LPCWSTR CGame_TOPF2005_SEGA::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(TOPF2005_UNITS, TOPF2005_SEGA_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_TOPF2005_SEGA::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, nUnitId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_TOPF2005_SEGA::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(TOPF2005_UNITS, nUnitId, nCollectionId);
}

UINT16 CGame_TOPF2005_SEGA::GetNodeSizeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetNodeSizeFromPaletteId(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, nUnitId, nPaletteId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

const sDescTreeNode* CGame_TOPF2005_SEGA::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, nUnitId, nPaletteId, TOPF2005_SEGA_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_TOPF2005_SEGA::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, nUnitId, nPaletteId, TOPF2005_SEGA_EXTRA_CUSTOM);
}

BOOL CGame_TOPF2005_SEGA::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(TOPF2005_UNITS, rgExtraCountAll, TOPF2005_SEGA_NUMUNIT, TOPF2005_SEGA_EXTRALOC, TOPF2005_SEGA_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
