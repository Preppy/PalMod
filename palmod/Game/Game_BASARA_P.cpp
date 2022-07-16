#include "StdAfx.h"
#include "GameDef.h"
#include "Game_BASARA_P.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

CGame_BASARA_P::CGame_BASARA_P(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_BASARA_P::CGame_BASARA_P: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS, // Obsolete, don't change.
                        PALWriteOutputOptions::WRITE_MAX // This is the number of colors to write when saving to the game ROM before we need to add another reserved color/counter uint16_t.
                                                         // You can set this to PALWriteOutputOptions::WRITE_MAX to write out a maximum of 256 colors.  See CGameClass::UpdatePalData for usage.
    };

    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB555_BE);

    // The value passed in to us was the confirmed ROM size we have.
    // We keep track of this before we initialize so that we can truncate bad Extras correctly on load.
    // Otherwise the new user could inadvertently corrupt their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = BASARA_P_NUMUNIT;
    m_nExtraUnit = BASARA_P_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + m_nPaletteCountInHeaders;
    m_pszExtraFilename = EXTRA_FILENAME_BASARA_P;
    m_nTotalPaletteCount = m_nTotalPaletteCountForBASARA; // This value is calculated at runtime: don't change this.
    m_nLowestKnownPaletteRomLocation = m_nLowestROMLocationUsedInHeaders;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = BASARA_P;

    nImgGameFlag = IMGDAT_SECTION_ARCSYS; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = BASARA_P_IMGIDS_USED;

    nFileAmt = 1; // Always 1 for monolithic rom games

    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_BASARA;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

stExtraDef* CGame_BASARA_P::BASARA_P_EXTRA_CUSTOM = nullptr;
CDescTree CGame_BASARA_P::MainDescTree = nullptr;
uint32_t CGame_BASARA_P::rgExtraCountAll[BASARA_P_NUMUNIT + 1];
uint32_t CGame_BASARA_P::rgExtraLoc[BASARA_P_NUMUNIT + 1];
uint32_t CGame_BASARA_P::m_nTotalPaletteCountForBASARA = 0;
uint32_t CGame_BASARA_P::m_nConfirmedROMSize = -1;

void CGame_BASARA_P::InitializeStatics()
{
    safe_delete_array(CGame_BASARA_P::BASARA_P_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_BASARA_P::InitDescTree());
}

CGame_BASARA_P::~CGame_BASARA_P(void)
{
    safe_delete_array(CGame_BASARA_P::BASARA_P_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_BASARA_P::GetMainTree()
{
    return &CGame_BASARA_P::MainDescTree;
}

uint32_t CGame_BASARA_P::GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, BASARA_P_NUMUNIT, nUnitId, BASARA_P_EXTRA_CUSTOM);
}

uint32_t CGame_BASARA_P::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, BASARA_P_NUMUNIT, nUnitId, BASARA_P_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_BASARA_P::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_BASARA_P, &BASARA_P_EXTRA_CUSTOM, BASARA_P_EXTRALOC, m_nConfirmedROMSize);

    uint32_t nUnitCt = BASARA_P_NUMUNIT + (GetExtraCt(BASARA_P_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[BASARA_P]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForBASARA = _InitDescTree(NewDescTree,
        BASARA_P_UNITS,
        BASARA_P_EXTRALOC,
        BASARA_P_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        BASARA_P_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_BASARA_P::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, BASARA_P_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_BASARA_P::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(BASARA_P_UNITS, rgExtraCountAll, BASARA_P_NUMUNIT, BASARA_P_EXTRALOC, nUnitId, BASARA_P_EXTRA_CUSTOM);
}

uint32_t CGame_BASARA_P::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(BASARA_P_UNITS, rgExtraCountAll, BASARA_P_NUMUNIT, BASARA_P_EXTRALOC, nUnitId, nCollectionId, BASARA_P_EXTRA_CUSTOM);
}

LPCWSTR CGame_BASARA_P::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(BASARA_P_UNITS, BASARA_P_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_BASARA_P::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(BASARA_P_UNITS, rgExtraCountAll, BASARA_P_NUMUNIT, BASARA_P_EXTRALOC, nUnitId, BASARA_P_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_BASARA_P::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(BASARA_P_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_BASARA_P::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(BASARA_P_UNITS, rgExtraCountAll, BASARA_P_NUMUNIT, BASARA_P_EXTRALOC, nUnitId, nPaletteId, BASARA_P_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_BASARA_P::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(BASARA_P_UNITS, rgExtraCountAll, BASARA_P_NUMUNIT, BASARA_P_EXTRALOC, nUnitId, nPaletteId, BASARA_P_EXTRA_CUSTOM);
}

void CGame_BASARA_P::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != BASARA_P_EXTRALOC)
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
    else // BASARA_P_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &BASARA_P_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_BASARA_P::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(BASARA_P_UNITS, rgExtraCountAll, BASARA_P_NUMUNIT, BASARA_P_EXTRALOC, BASARA_P_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
