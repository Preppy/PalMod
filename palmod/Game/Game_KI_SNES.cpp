#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KI_SNES.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

// This decides whether or not you get extra debug output while running under the debugger
#define KI_SNES_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_KI_SNES::m_nExpectedGameROMSize = 0x400000;

CGame_KI_SNES::CGame_KI_SNES(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_KI_SNES::CGame_KI_SNES: Loading ROM...\n");

    createPalOptions = { NO_SPECIAL_OPTIONS, WRITE_16 };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_BGR555_LE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = KI_SNES_NUMUNIT;
    m_nExtraUnit = KI_SNES_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 82;
    m_pszExtraFilename = EXTRA_FILENAME_KI_SNES;
    m_nTotalPaletteCount = m_nTotalPaletteCountForKI;

    m_nLowestKnownPaletteRomLocation = 0x1949;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = KI_SNES;

    nImgGameFlag = IMGDAT_SECTION_SNES;
    m_prgGameImageSet = KI_SNES_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(KI_SNES_IMGIDS_USED);

    nFileAmt = 1;

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

//
//  ***************************************************************************************************************************************
//  You don't need to make any further changes to the rest of this file, other than updating KI to your game's short name.
//  ***************************************************************************************************************************************
//

stExtraDef* CGame_KI_SNES::KI_SNES_EXTRA_CUSTOM = nullptr;
CDescTree CGame_KI_SNES::MainDescTree = nullptr;
int CGame_KI_SNES::rgExtraCountAll[KI_SNES_NUMUNIT + 1];
int CGame_KI_SNES::rgExtraLoc[KI_SNES_NUMUNIT + 1];
UINT32 CGame_KI_SNES::m_nTotalPaletteCountForKI = 0;
UINT32 CGame_KI_SNES::m_nConfirmedROMSize = -1;

void CGame_KI_SNES::InitializeStatics()
{
    safe_delete_array(CGame_KI_SNES::KI_SNES_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_KI_SNES::InitDescTree());
}

CGame_KI_SNES::~CGame_KI_SNES(void)
{
    safe_delete_array(CGame_KI_SNES::KI_SNES_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

UINT32 CGame_KI_SNES::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Killer Instinct (SNES Rev 1)", L"Killer Instinct (USA) (Rev 1).sfc", 0x09e9a04e, 0 },
        { L"Killer Instinct (SNES Rev 2)", L"Killer Instinct (USA).sfc", 0x252c1da7, 0x8 },
        { L"Killer Instinct (SNES Rev 2)", L"sns-akle-0.u1", 0x252c1da7, 0x8 },
        { L"Killer Instinct (SNES Rev 1)", L"Killer Instinct (USA) (Rev 1).smc", 0x09e9a04e, 0 },
        { L"Killer Instinct (SNES Rev 2)", L"Killer Instinct (USA).smc", 0x252c1da7, 0x8 },
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

CDescTree* CGame_KI_SNES::GetMainTree()
{
    return &CGame_KI_SNES::MainDescTree;
}

int CGame_KI_SNES::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, KI_SNES_NUMUNIT, nUnitId, KI_SNES_EXTRA_CUSTOM);
}

int CGame_KI_SNES::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, KI_SNES_NUMUNIT, nUnitId, KI_SNES_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_KI_SNES::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_KI_SNES, KI_SNES_EXTRA, &KI_SNES_EXTRA_CUSTOM, KI_SNES_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = KI_SNES_NUMUNIT + (GetExtraCt(KI_SNES_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[KI_SNES]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForKI = _InitDescTree(NewDescTree,
        KI_SNES_UNITS,
        KI_SNES_EXTRALOC,
        KI_SNES_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        KI_SNES_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_KI_SNES::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, KI_SNES_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_KI_SNES::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(KI_SNES_UNITS, rgExtraCountAll, KI_SNES_NUMUNIT, KI_SNES_EXTRALOC, nUnitId, KI_SNES_EXTRA_CUSTOM);
}

UINT16 CGame_KI_SNES::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(KI_SNES_UNITS, rgExtraCountAll, KI_SNES_NUMUNIT, KI_SNES_EXTRALOC, nUnitId, nCollectionId, KI_SNES_EXTRA_CUSTOM);
}

LPCWSTR CGame_KI_SNES::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(KI_SNES_UNITS, KI_SNES_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_KI_SNES::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(KI_SNES_UNITS, rgExtraCountAll, KI_SNES_NUMUNIT, KI_SNES_EXTRALOC, nUnitId, KI_SNES_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_KI_SNES::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(KI_SNES_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_KI_SNES::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(KI_SNES_UNITS, rgExtraCountAll, KI_SNES_NUMUNIT, KI_SNES_EXTRALOC, nUnitId, nPaletteId, KI_SNES_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_KI_SNES::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(KI_SNES_UNITS, rgExtraCountAll, KI_SNES_NUMUNIT, KI_SNES_EXTRALOC, nUnitId, nPaletteId, KI_SNES_EXTRA_CUSTOM);
}

void CGame_KI_SNES::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != KI_SNES_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            if (m_pCRC32SpecificData)
            {
                // adjust for ROM, but bound it by 0
                m_nCurrentPaletteROMLocation = max(0, m_nCurrentPaletteROMLocation + m_pCRC32SpecificData->nROMSpecificOffset);
            }
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else // KI_SNES_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&KI_SNES_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_KI_SNES::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(KI_SNES_UNITS, rgExtraCountAll, KI_SNES_NUMUNIT, KI_SNES_EXTRALOC, KI_SNES_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
