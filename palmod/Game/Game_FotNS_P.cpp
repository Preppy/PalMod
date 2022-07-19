#include "StdAfx.h"
#include "GameDef.h"
#include "Game_FotNS_P.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

CGame_FotNS_P::CGame_FotNS_P(uint32_t nConfirmedROMSize)
{
    OutputDebugString(L"CGame_FotNS_P::CGame_FotNS_P: Loading ROM...\n");

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

    m_nTotalInternalUnits = FotNS_P_NUMUNIT;
    m_nExtraUnit = FotNS_P_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + m_nPaletteCountInHeaders;
    m_pszExtraFilename = EXTRA_FILENAME_FotNS_P;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEWGAME; // This value is calculated at runtime: don't change this.
    m_nLowestKnownPaletteRomLocation = m_nLowestROMLocationUsedInHeaders;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = FotNS_P;

    nImgGameFlag = IMGDAT_SECTION_ARCSYS; // This value is used to determine which section of the image file is used
    m_prgGameImageSet = FotNS_P_IMGIDS_USED;

    nFileAmt = 1; // Always 1 for monolithic rom games

    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_FotNS;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

stExtraDef* CGame_FotNS_P::FotNS_P_EXTRA_CUSTOM = nullptr;
CDescTree CGame_FotNS_P::MainDescTree = nullptr;
uint32_t CGame_FotNS_P::rgExtraCountAll[FotNS_P_NUMUNIT + 1];
uint32_t CGame_FotNS_P::rgExtraLoc[FotNS_P_NUMUNIT + 1];
uint32_t CGame_FotNS_P::m_nTotalPaletteCountForNEWGAME = 0;
uint32_t CGame_FotNS_P::m_nConfirmedROMSize = -1;

void CGame_FotNS_P::InitializeStatics()
{
    safe_delete_array(CGame_FotNS_P::FotNS_P_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_FotNS_P::InitDescTree());
}

CGame_FotNS_P::~CGame_FotNS_P()
{
    safe_delete_array(CGame_FotNS_P::FotNS_P_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_FotNS_P::GetMainTree()
{
    return &CGame_FotNS_P::MainDescTree;
}

uint32_t CGame_FotNS_P::GetExtraCt(uint32_t nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, FotNS_P_NUMUNIT, nUnitId, FotNS_P_EXTRA_CUSTOM);
}

uint32_t CGame_FotNS_P::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, FotNS_P_NUMUNIT, nUnitId, FotNS_P_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_FotNS_P::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_FotNS_P, &FotNS_P_EXTRA_CUSTOM, FotNS_P_EXTRALOC, m_nConfirmedROMSize);

    uint32_t nUnitCt = FotNS_P_NUMUNIT + (GetExtraCt(FotNS_P_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[FotNS_P]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNEWGAME = _InitDescTree(NewDescTree,
        FotNS_P_UNITS,
        FotNS_P_EXTRALOC,
        FotNS_P_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        FotNS_P_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_FotNS_P::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, FotNS_P_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_FotNS_P::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(FotNS_P_UNITS, rgExtraCountAll, FotNS_P_NUMUNIT, FotNS_P_EXTRALOC, nUnitId, FotNS_P_EXTRA_CUSTOM);
}

uint32_t CGame_FotNS_P::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(FotNS_P_UNITS, rgExtraCountAll, FotNS_P_NUMUNIT, FotNS_P_EXTRALOC, nUnitId, nCollectionId, FotNS_P_EXTRA_CUSTOM);
}

LPCWSTR CGame_FotNS_P::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(FotNS_P_UNITS, FotNS_P_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_FotNS_P::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(FotNS_P_UNITS, rgExtraCountAll, FotNS_P_NUMUNIT, FotNS_P_EXTRALOC, nUnitId, FotNS_P_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_FotNS_P::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(FotNS_P_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_FotNS_P::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(FotNS_P_UNITS, rgExtraCountAll, FotNS_P_NUMUNIT, FotNS_P_EXTRALOC, nUnitId, nPaletteId, FotNS_P_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_FotNS_P::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(FotNS_P_UNITS, rgExtraCountAll, FotNS_P_NUMUNIT, FotNS_P_EXTRALOC, nUnitId, nPaletteId, FotNS_P_EXTRA_CUSTOM);
}

void CGame_FotNS_P::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != FotNS_P_EXTRALOC)
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
    else // FotNS_P_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &FotNS_P_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_FotNS_P::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(FotNS_P_UNITS, rgExtraCountAll, FotNS_P_NUMUNIT, FotNS_P_EXTRALOC, FotNS_P_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
