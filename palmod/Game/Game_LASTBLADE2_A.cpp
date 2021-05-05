#include "StdAfx.h"
#include "GameDef.h"
#include "Game_LASTBLADE2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define LASTBLADE2_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_LASTBLADE2_A::LASTBLADE2_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_LASTBLADE2_A::MainDescTree = nullptr;

int CGame_LASTBLADE2_A::rgExtraCountAll[LASTBLADE2_A_NUMUNIT + 1];
int CGame_LASTBLADE2_A::rgExtraLoc[LASTBLADE2_A_NUMUNIT + 1];

UINT32 CGame_LASTBLADE2_A::m_nTotalPaletteCountForLASTBLADE2 = 0;
UINT32 CGame_LASTBLADE2_A::m_nExpectedGameROMSize = 0x100000; // Update to the actual size of the ROM you expect
UINT32 CGame_LASTBLADE2_A::m_nConfirmedROMSize = -1;

void CGame_LASTBLADE2_A::InitializeStatics()
{
    safe_delete_array(CGame_LASTBLADE2_A::LASTBLADE2_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_LASTBLADE2_A::InitDescTree());
}

CGame_LASTBLADE2_A::CGame_LASTBLADE2_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_LASTBLADE2_A::CGame_LASTBLADE2_A: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS, // Set to SKIP_FIRST_COLOR for most CPS2 games.  Use the nStartingPosition version of UpdatePalData as found in CPS2 game code.
                        WRITE_16            // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter UINT16.
                                            // You can set this to WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    };

    // Set alpha mode: this determines whether or not we set alpha values for the data we write back to the game ROM.
    // For color mode 12A you usually want it not set, for NEOGEO you cannot use it (there's no bit(s) for it), and for 15/15ALT you probably want it on.
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    //Set color mode: see the definitions in GameClass.h
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = LASTBLADE2_A_NUMUNIT;
    m_nExtraUnit = LASTBLADE2_A_EXTRALOC;

    // You will need to update this once you modify palettes, but PalMod will prompt you to do so.
    // Exact count will be shown in debug output in the debugger
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 6095;
    m_pszExtraFilename = EXTRA_FILENAME_LASTBLADE2_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForLASTBLADE2; // This value is calculated at runtime: don't change this.
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    // You will need to update this, but PalMod will prompt you to do so.  Exact location will be shown and also
    // visible in debug output in the debugger.
    m_nLowestKnownPaletteRomLocation = 0xa9600;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = LASTBLADE2_A; // This value is defined in gamedef.h.  See usage of other values defined there
    nImgGameFlag = IMGDAT_SECTION_KOF; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = LASTBLADE2_A_IMG_UNITS;
    nImgUnitAmt = ARRAYSIZE(LASTBLADE2_A_IMG_UNITS);

    nFileAmt = 1; // Always 1 for monolithic rom games

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_LASTBLADE2; // Check out the available options in gamedef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_LASTBLADE2);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_LASTBLADE2_A::~CGame_LASTBLADE2_A(void)
{
    safe_delete_array(CGame_LASTBLADE2_A::LASTBLADE2_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_LASTBLADE2_A::GetMainTree()
{
    return &CGame_LASTBLADE2_A::MainDescTree;
}

int CGame_LASTBLADE2_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, LASTBLADE2_A_NUMUNIT, nUnitId, LASTBLADE2_A_EXTRA_CUSTOM);
}

int CGame_LASTBLADE2_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraCount(rgExtraLoc, LASTBLADE2_A_NUMUNIT, nUnitId, LASTBLADE2_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_LASTBLADE2_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_LASTBLADE2_A, LASTBLADE2_A_EXTRA, &LASTBLADE2_A_EXTRA_CUSTOM, LASTBLADE2_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = LASTBLADE2_A_NUMUNIT + (GetExtraCt(LASTBLADE2_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[LASTBLADE2_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForLASTBLADE2 = _InitDescTree(NewDescTree,
        LASTBLADE2_A_UNITS,
        LASTBLADE2_A_EXTRALOC,
        LASTBLADE2_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        LASTBLADE2_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_LASTBLADE2_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"LB2_P1.ROM"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_LASTBLADE2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"The Last Blade 2 (Neo-Geo)", L"LB2_P1.ROM", 0xaf1e6554, 0 },
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

UINT16 CGame_LASTBLADE2_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(LASTBLADE2_A_UNITS, rgExtraCountAll, LASTBLADE2_A_NUMUNIT, LASTBLADE2_A_EXTRALOC, nUnitId, LASTBLADE2_A_EXTRA_CUSTOM);
}

UINT16 CGame_LASTBLADE2_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(LASTBLADE2_A_UNITS, rgExtraCountAll, LASTBLADE2_A_NUMUNIT, LASTBLADE2_A_EXTRALOC, nUnitId, nCollectionId, LASTBLADE2_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_LASTBLADE2_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(LASTBLADE2_A_UNITS, LASTBLADE2_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_LASTBLADE2_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(LASTBLADE2_A_UNITS, rgExtraCountAll, LASTBLADE2_A_NUMUNIT, LASTBLADE2_A_EXTRALOC, nUnitId, LASTBLADE2_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_LASTBLADE2_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(LASTBLADE2_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_LASTBLADE2_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(LASTBLADE2_A_UNITS, rgExtraCountAll, LASTBLADE2_A_NUMUNIT, LASTBLADE2_A_EXTRALOC, nUnitId, nPaletteId, LASTBLADE2_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_LASTBLADE2_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(LASTBLADE2_A_UNITS, rgExtraCountAll, LASTBLADE2_A_NUMUNIT, LASTBLADE2_A_EXTRALOC, nUnitId, nPaletteId, LASTBLADE2_A_EXTRA_CUSTOM);
}

void CGame_LASTBLADE2_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != LASTBLADE2_A_EXTRALOC)
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
    else // LASTBLADE2_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForLASTBLADE2(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_LASTBLADE2_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(LASTBLADE2_A_UNITS, rgExtraCountAll, LASTBLADE2_A_NUMUNIT, LASTBLADE2_A_EXTRALOC, LASTBLADE2_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
