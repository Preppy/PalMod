#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MartialMasters_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define MartialMasters_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_MartialMasters_A::MartialMasters_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_MartialMasters_A::MainDescTree = nullptr;

int CGame_MartialMasters_A::rgExtraCountAll[MartialMasters_A_NUMUNIT + 1];
int CGame_MartialMasters_A::rgExtraLoc[MartialMasters_A_NUMUNIT + 1];

UINT32 CGame_MartialMasters_A::m_nTotalPaletteCountForMartialMasters = 0;
UINT32 CGame_MartialMasters_A::m_nExpectedGameROMSize = 0x400000;
UINT32 CGame_MartialMasters_A::m_nConfirmedROMSize = -1;

void CGame_MartialMasters_A::InitializeStatics()
{
    safe_delete_array(CGame_MartialMasters_A::MartialMasters_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_MartialMasters_A::InitDescTree());
}

CGame_MartialMasters_A::CGame_MartialMasters_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_MartialMasters_A::CGame_MartialMasters_A: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS, // Set to SKIP_FIRST_COLOR for most CPS2 games.  Use the nStartingPosition version of UpdatePalData as found in CPS2 game code.
                        WRITE_MAX           // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter UINT16.
                                            // You can set this to WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    };

    // Set alpha mode: this determines whether or not we set alpha values for the data we write back to the game ROM.
    // For color mode 12A you usually want it not set, for NEOGEO you cannot use it (there's no bit(s) for it), and for 15/15ALT you probably want it on.
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    //Set color mode: see the definitions in GameClass.h
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = MartialMasters_A_NUMUNIT;
    m_nExtraUnit = MartialMasters_A_EXTRALOC;

    // You will need to update this once you modify palettes, but PalMod will prompt you to do so.
    // Exact count will be shown in debug output in the debugger
    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 323;
    m_pszExtraFilename = EXTRA_FILENAME_MartialMasters_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForMartialMasters; // This value is calculated at runtime: don't change this.
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    // You will need to update this, but PalMod will prompt you to do so.  Exact location will be shown and also
    // visible in debug output in the debugger.
    m_nLowestKnownPaletteRomLocation = 0xa9600;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = MartialMasters_A; // This value is defined in gamedef.h.  See usage of other values defined there
    nImgGameFlag = IMGDAT_SECTION_PGM; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = MartialMasters_A_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(MartialMasters_A_IMGIDS_USED);

    nFileAmt = 1; // Always 1 for monolithic rom games

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_NOBUTTONS; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_MartialMasters_A::~CGame_MartialMasters_A(void)
{
    safe_delete_array(CGame_MartialMasters_A::MartialMasters_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_MartialMasters_A::GetMainTree()
{
    return &CGame_MartialMasters_A::MainDescTree;
}

int CGame_MartialMasters_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, MartialMasters_A_NUMUNIT, nUnitId, MartialMasters_A_EXTRA_CUSTOM);
}

int CGame_MartialMasters_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraCount(rgExtraLoc, MartialMasters_A_NUMUNIT, nUnitId, MartialMasters_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_MartialMasters_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_MartialMasters_A, MartialMasters_A_EXTRA, &MartialMasters_A_EXTRA_CUSTOM, MartialMasters_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = MartialMasters_A_NUMUNIT + (GetExtraCt(MartialMasters_A_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[MartialMasters_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForMartialMasters = _InitDescTree(NewDescTree,
        MartialMasters_A_UNITS,
        MartialMasters_A_EXTRALOC,
        MartialMasters_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        MartialMasters_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_MartialMasters_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"v104_32m.u9"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT32 CGame_MartialMasters_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Martial Masters (PGM)", L"v104_32m.u9", 0xcfd9dff4, 0 },
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

UINT16 CGame_MartialMasters_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(MartialMasters_A_UNITS, rgExtraCountAll, MartialMasters_A_NUMUNIT, MartialMasters_A_EXTRALOC, nUnitId, MartialMasters_A_EXTRA_CUSTOM);
}

UINT16 CGame_MartialMasters_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(MartialMasters_A_UNITS, rgExtraCountAll, MartialMasters_A_NUMUNIT, MartialMasters_A_EXTRALOC, nUnitId, nCollectionId, MartialMasters_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_MartialMasters_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(MartialMasters_A_UNITS, MartialMasters_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_MartialMasters_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(MartialMasters_A_UNITS, rgExtraCountAll, MartialMasters_A_NUMUNIT, MartialMasters_A_EXTRALOC, nUnitId, MartialMasters_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_MartialMasters_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(MartialMasters_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_MartialMasters_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(MartialMasters_A_UNITS, rgExtraCountAll, MartialMasters_A_NUMUNIT, MartialMasters_A_EXTRALOC, nUnitId, nPaletteId, MartialMasters_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_MartialMasters_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(MartialMasters_A_UNITS, rgExtraCountAll, MartialMasters_A_NUMUNIT, MartialMasters_A_EXTRALOC, nUnitId, nPaletteId, MartialMasters_A_EXTRA_CUSTOM);
}

void CGame_MartialMasters_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != MartialMasters_A_EXTRALOC)
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
    else // MartialMasters_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForMartialMasters(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_MartialMasters_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(MartialMasters_A_UNITS, rgExtraCountAll, MartialMasters_A_NUMUNIT, MartialMasters_A_EXTRALOC, MartialMasters_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
