#include "StdAfx.h"
#include "GameDef.h"
#include "Game_Windjammers_A.h"
#include "..\RegProc.h"

stExtraDef* CGame_Windjammers_A::Windjammers_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_Windjammers_A::MainDescTree = nullptr;

uint32_t CGame_Windjammers_A::rgExtraCountAll[Windjammers_A_NUMUNIT + 1];
uint32_t CGame_Windjammers_A::rgExtraLoc[Windjammers_A_NUMUNIT + 1];

UINT32 CGame_Windjammers_A::m_nTotalPaletteCountForWindjammers = 0;
const UINT32 CGame_Windjammers_A::m_nExpectedGameROMSize = 0x100000;  // 4194304 bytes
UINT32 CGame_Windjammers_A::m_nConfirmedROMSize = -1;

void CGame_Windjammers_A::InitializeStatics()
{
    safe_delete_array(CGame_Windjammers_A::Windjammers_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(CGame_Windjammers_A::InitDescTree());
}

CGame_Windjammers_A::CGame_Windjammers_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_Windjammers_A::CGame_Windjammers_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    createPalOptions = { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX };
    SetAlphaMode(AlphaMode::GameDoesNotUseAlpha);
    SetColorMode(ColMode::COLMODE_RGB666_NEOGEO);

    InitializeStatics();

    m_nTotalInternalUnits = Windjammers_A_NUMUNIT;
    m_nExtraUnit = Windjammers_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 35;
    m_pszExtraFilename = EXTRA_FILENAME_Windjammers_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForWindjammers;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x30080;

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    InitDataBuffer();

    //Set game information
    nGameFlag = WINDJAMMERS_A;
    nImgGameFlag = IMGDAT_SECTION_WINDJAMMERS;
    m_prgGameImageSet = WINDJAMMERS_A_IMGIDS_USED;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog
    pButtonLabelSet = DEF_BUTTONLABEL_2;

    //Create the redirect buffer
    rgUnitRedir = new uint32_t[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(uint32_t) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_Windjammers_A::~CGame_Windjammers_A(void)
{
    safe_delete_array(CGame_Windjammers_A::Windjammers_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_Windjammers_A::GetMainTree()
{
    return &CGame_Windjammers_A::MainDescTree;
}

uint32_t CGame_Windjammers_A::GetExtraCt(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, Windjammers_A_NUMUNIT, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

uint32_t CGame_Windjammers_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, Windjammers_A_NUMUNIT, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_Windjammers_A::InitDescTree()
{
    UINT32 nTotalPaletteCount = 0;

    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_Windjammers_A, &Windjammers_A_EXTRA_CUSTOM, Windjammers_A_EXTRALOC, m_nConfirmedROMSize);

    UINT16 nUnitCt = Windjammers_A_NUMUNIT + (GetExtraCt(Windjammers_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[WINDJAMMERS_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForWindjammers = _InitDescTree(NewDescTree,
        Windjammers_A_UNITS,
        Windjammers_A_EXTRALOC,
        Windjammers_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        Windjammers_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_Windjammers_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"066-p1.p1");

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = m_nExpectedGameROMSize;

    return NewFileRule;
}

uint32_t CGame_Windjammers_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

uint32_t CGame_Windjammers_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, nCollectionId, Windjammers_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_Windjammers_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(Windjammers_A_UNITS, Windjammers_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_Windjammers_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, Windjammers_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_Windjammers_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(Windjammers_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_Windjammers_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, nPaletteId, Windjammers_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_Windjammers_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, nUnitId, nPaletteId, Windjammers_A_EXTRA_CUSTOM);
}

void CGame_Windjammers_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != m_nExtraUnit)
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
    else // m_nExtraUnit
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForWindjammers(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_Windjammers_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(Windjammers_A_UNITS, rgExtraCountAll, Windjammers_A_NUMUNIT, Windjammers_A_EXTRALOC, Windjammers_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
