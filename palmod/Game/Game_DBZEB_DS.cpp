#include "StdAfx.h"
#include "GameDef.h"
#include "Game_DBZEB_DS.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define DBZEB_DS_DEBUG DEFAULT_GAME_DEBUG_STATE

UINT32 CGame_DBZEB_DS::m_nExpectedGameROMSize = 0x18F32000;

CGame_DBZEB_DS::CGame_DBZEB_DS(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_DBZEB_DS::CGame_DBZEB_DS: Loading ROM...\n");

    createPalOptions = {
                        NO_SPECIAL_OPTIONS,
                        WRITE_MAX
    };

    SetAlphaMode(AlphaMode::GameUsesVariableAlpha);
    SetColorMode(ColMode::COLMODE_ARGB8888);

    m_fGameUsesAlphaValue = true;

    m_nConfirmedROMSize = nConfirmedROMSize;
    InitializeStatics();

    m_nTotalInternalUnits = DBZEB_DS_NUMUNIT;
    m_nExtraUnit = DBZEB_DS_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 695;
    m_pszExtraFilename = EXTRA_FILENAME_DBZEB_DS;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEWGAME; 
    m_nLowestKnownPaletteRomLocation = 0xc981a0;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    nGameFlag = DBZEB_DS;

    nImgGameFlag = IMGDAT_SECTION_DS;
    m_prgGameImageSet = DBZEB_3DS_IMGIDS_USED;
    nImgUnitAmt = ARRAYSIZE(DBZEB_3DS_IMGIDS_USED);

    nFileAmt = 1;

    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    pButtonLabelSet = DEF_BUTTONLABEL_2;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    PrepChangeTrackingArray();
}

stExtraDef* CGame_DBZEB_DS::DBZEB_DS_EXTRA_CUSTOM = nullptr;
CDescTree CGame_DBZEB_DS::MainDescTree = nullptr;
int CGame_DBZEB_DS::rgExtraCountAll[DBZEB_DS_NUMUNIT + 1];
int CGame_DBZEB_DS::rgExtraLoc[DBZEB_DS_NUMUNIT + 1];
UINT32 CGame_DBZEB_DS::m_nTotalPaletteCountForNEWGAME = 0;
UINT32 CGame_DBZEB_DS::m_nConfirmedROMSize = -1;

void CGame_DBZEB_DS::InitializeStatics()
{
    safe_delete_array(CGame_DBZEB_DS::DBZEB_DS_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_DBZEB_DS::InitDescTree());
}

CGame_DBZEB_DS::~CGame_DBZEB_DS(void)
{
    safe_delete_array(CGame_DBZEB_DS::DBZEB_DS_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_DBZEB_DS::GetMainTree()
{
    return &CGame_DBZEB_DS::MainDescTree;
}

int CGame_DBZEB_DS::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, DBZEB_DS_NUMUNIT, nUnitId, DBZEB_DS_EXTRA_CUSTOM);
}

int CGame_DBZEB_DS::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, DBZEB_DS_NUMUNIT, nUnitId, DBZEB_DS_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_DBZEB_DS::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_DBZEB_DS, DBZEB_DS_EXTRA, &DBZEB_DS_EXTRA_CUSTOM, DBZEB_DS_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = DBZEB_DS_NUMUNIT + (GetExtraCt(DBZEB_DS_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[DBZEB_DS]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNEWGAME = _InitDescTree(NewDescTree,
        DBZEB_DS_UNITS,
        DBZEB_DS_EXTRALOC,
        DBZEB_DS_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        DBZEB_DS_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_DBZEB_DS::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, DBZEB_DS_PRIMARY_ROMNAME);

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

UINT16 CGame_DBZEB_DS::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(DBZEB_DS_UNITS, rgExtraCountAll, DBZEB_DS_NUMUNIT, DBZEB_DS_EXTRALOC, nUnitId, DBZEB_DS_EXTRA_CUSTOM);
}

UINT16 CGame_DBZEB_DS::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(DBZEB_DS_UNITS, rgExtraCountAll, DBZEB_DS_NUMUNIT, DBZEB_DS_EXTRALOC, nUnitId, nCollectionId, DBZEB_DS_EXTRA_CUSTOM);
}

LPCWSTR CGame_DBZEB_DS::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(DBZEB_DS_UNITS, DBZEB_DS_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_DBZEB_DS::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(DBZEB_DS_UNITS, rgExtraCountAll, DBZEB_DS_NUMUNIT, DBZEB_DS_EXTRALOC, nUnitId, DBZEB_DS_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_DBZEB_DS::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(DBZEB_DS_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_DBZEB_DS::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(DBZEB_DS_UNITS, rgExtraCountAll, DBZEB_DS_NUMUNIT, DBZEB_DS_EXTRALOC, nUnitId, nPaletteId, DBZEB_DS_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_DBZEB_DS::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(DBZEB_DS_UNITS, rgExtraCountAll, DBZEB_DS_NUMUNIT, DBZEB_DS_EXTRALOC, nUnitId, nPaletteId, DBZEB_DS_EXTRA_CUSTOM);
}

void CGame_DBZEB_DS::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != DBZEB_DS_EXTRALOC)
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
    else // DBZEB_DS_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = (stExtraDef*)&DBZEB_DS_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_DBZEB_DS::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(DBZEB_DS_UNITS, rgExtraCountAll, DBZEB_DS_NUMUNIT, DBZEB_DS_EXTRALOC, DBZEB_DS_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
