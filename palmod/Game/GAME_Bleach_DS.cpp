#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Bleach_DS.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define BLEACH_DS_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_BLEACH_DS::BLEACH_DS_EXTRA_CUSTOM = nullptr;

CDescTree CGame_BLEACH_DS::MainDescTree = nullptr;

int CGame_BLEACH_DS::rgExtraCountAll[BLEACH_DS_NUMUNIT + 1];
int CGame_BLEACH_DS::rgExtraLoc[BLEACH_DS_NUMUNIT + 1];

UINT32 CGame_BLEACH_DS::m_nTotalPaletteCountForBleach = 0;
UINT32 CGame_BLEACH_DS::m_nExpectedGameROMSize = 0x08000000; // Update to the actual size of the ROM you expect
UINT32 CGame_BLEACH_DS::m_nConfirmedROMSize = -1;

void CGame_BLEACH_DS::InitializeStatics()
{
    safe_delete_array(CGame_BLEACH_DS::BLEACH_DS_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_BLEACH_DS::InitDescTree());
}

CGame_BLEACH_DS::CGame_BLEACH_DS(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_BLEACH_DS::CGame_BLEACH_DS: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // We need this set before we initialize so that we can truncate bad Extras correctly.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = BLEACH_DS_NUMUNIT;
    m_nExtraUnit = BLEACH_DS_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 816; // You will need to update this, but PalMod will prompt you to do so
    m_pszExtraFilename = EXTRA_FILENAME_BLEACH_DS;
    m_nTotalPaletteCount = m_nTotalPaletteCountForBleach;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x1fd2fa0; // You will need to update this, but PalMod will prompt you to do so

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = BLEACH_DS; // This value is defined in gamedef.h.  See usage of other values defined there
    nImgGameFlag = IMGDAT_SECTION_DS; // Kept default as i have no img2020.dat file to mess with
    m_prgGameImageSet = BLEACH_DS_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(BLEACH_DS_IMGIDS_USED);

    nFileAmt = 1; // Always 1 for monolithic rom games

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_BLEACH; // Check out the available options in buttondef.h
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_BUTTONLABEL_BLEACH);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_BLEACH_DS::~CGame_BLEACH_DS(void)
{
    safe_delete_array(CGame_BLEACH_DS::BLEACH_DS_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_BLEACH_DS::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Bleach DS (Europe - Nintendo DS)", L"3494 - Bleach - Dark Souls (Europe) (En,Fr,De,Es,It).nds",  0, 0 },
        { L"Bleach DS (US - Nintendo DS)", L"2761 Bleach - Dark Souls (US).nds", 0, -0x5DBA00 },
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

CDescTree* CGame_BLEACH_DS::GetMainTree()
{
    return &CGame_BLEACH_DS::MainDescTree;
}

int CGame_BLEACH_DS::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, BLEACH_DS_NUMUNIT, nUnitId, BLEACH_DS_EXTRA_CUSTOM);
}

int CGame_BLEACH_DS::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, BLEACH_DS_NUMUNIT, nUnitId, BLEACH_DS_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_BLEACH_DS::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_BLEACH_DS, BLEACH_DS_EXTRA, &BLEACH_DS_EXTRA_CUSTOM, BLEACH_DS_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = BLEACH_DS_NUMUNIT + (GetExtraCt(BLEACH_DS_EXTRALOC) ? 1 : 0);

    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[BLEACH_DS]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForBleach = _InitDescTree(NewDescTree,
        BLEACH_DS_UNITS,
        BLEACH_DS_EXTRALOC,
        BLEACH_DS_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        BLEACH_DS_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_BLEACH_DS::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"Bleach.nds"); // Update with the primary expected ROM name here.

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_BLEACH_DS::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(BLEACH_DS_UNITS, rgExtraCountAll, BLEACH_DS_NUMUNIT, BLEACH_DS_EXTRALOC, nUnitId, BLEACH_DS_EXTRA_CUSTOM);
}

UINT16 CGame_BLEACH_DS::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(BLEACH_DS_UNITS, rgExtraCountAll, BLEACH_DS_NUMUNIT, BLEACH_DS_EXTRALOC, nUnitId, nCollectionId, BLEACH_DS_EXTRA_CUSTOM);
}

LPCWSTR CGame_BLEACH_DS::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(BLEACH_DS_UNITS, BLEACH_DS_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_BLEACH_DS::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(BLEACH_DS_UNITS, rgExtraCountAll, BLEACH_DS_NUMUNIT, BLEACH_DS_EXTRALOC, nUnitId, BLEACH_DS_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_BLEACH_DS::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(BLEACH_DS_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_BLEACH_DS::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(BLEACH_DS_UNITS, rgExtraCountAll, BLEACH_DS_NUMUNIT, BLEACH_DS_EXTRALOC, nUnitId, nPaletteId, BLEACH_DS_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_BLEACH_DS::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(BLEACH_DS_UNITS, rgExtraCountAll, BLEACH_DS_NUMUNIT, BLEACH_DS_EXTRALOC, nUnitId, nPaletteId, BLEACH_DS_EXTRA_CUSTOM);
}

void CGame_BLEACH_DS::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
    if (nUnitId != BLEACH_DS_EXTRALOC)
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
    else // BLEACH_DS_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForBLEACHDS(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_BLEACH_DS::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(BLEACH_DS_UNITS, rgExtraCountAll, BLEACH_DS_NUMUNIT, BLEACH_DS_EXTRALOC, BLEACH_DS_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
