#include "StdAfx.h"
#include "GameDef.h"
#include "Game_NEOGEO_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

#define NEOGEO_A_DEBUG DEFAULT_GAME_DEBUG_STATE

stExtraDef* CGame_NEOGEO_A::NEOGEO_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_NEOGEO_A::MainDescTree = nullptr;

int CGame_NEOGEO_A::rgExtraCountAll[NEOGEO_A_NUMUNIT + 1];
int CGame_NEOGEO_A::rgExtraLoc[NEOGEO_A_NUMUNIT + 1];

UINT32 CGame_NEOGEO_A::m_nTotalPaletteCountForNEOGEO = 0;
UINT32 CGame_NEOGEO_A::m_nExpectedGameROMSize = -1; // This is a stub: we can't care about size
UINT32 CGame_NEOGEO_A::m_nConfirmedROMSize = -1;

void CGame_NEOGEO_A::InitializeStatics()
{
    safe_delete_array(CGame_NEOGEO_A::NEOGEO_A_EXTRA_CUSTOM);

    memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
    memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

    MainDescTree.SetRootTree(InitDescTree());
}

CGame_NEOGEO_A::CGame_NEOGEO_A(UINT32 nConfirmedROMSize)
{
    OutputDebugString(L"CGame_NEOGEO_A::CGame_NEOGEO_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    createPalOptions = { NO_SPECIAL_OPTIONS, CRegProc::GetMaxWriteForUnknownGame()};
    SetAlphaAndColorModeInternal(CRegProc::GetColorModeForUnknownGame(), CRegProc::GetAlphaModeForUnknownGame());

    // InitializeStatics needs color size configured by color mode, so call after that
    InitializeStatics();

    m_nTotalInternalUnits = NEOGEO_A_NUMUNIT;
    m_nExtraUnit = NEOGEO_A_EXTRALOC;

    m_nSafeCountForThisRom = GetExtraCt(m_nExtraUnit) + 1;
    m_pszExtraFilename = EXTRA_FILENAME_UNKNOWN_A;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEOGEO;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x0; // Don't worry about locations for a stubbed game...

    nUnitAmt = m_nTotalInternalUnits + (GetExtraCt(m_nExtraUnit) ? 1 : 0);

    if (GetExtraCt(m_nExtraUnit) == 0)
    {
        CString strIntro;
        strIntro = L"Howdy!  This \"dummy\" game mode is designed to allow you to spelunk any random game ROM that PalMod does not already support. \n\n";
        strIntro += L"PalMod will read / write specified RAM offsets as if they indicated colors for the color format specified in the Settings menu.\n\n";
        strIntro += L"Right now, you don't have any entries in your UnknownE.txt Extras file: you will want to add entries there if you wish to use this \"dummy\" mode.\n\n";
        strIntro += L"Please make sure to only change a copy of the ROM you're interested in: since you're directly playing around with the game ROM, weird things could happen.\n\n";
        strIntro += L"Good luck!";
        MessageBox(g_appHWnd, strIntro, GetHost()->GetAppName(), MB_ICONINFORMATION);
    }

    // InitDataBuffer needs color size configured by color mode, so call after that
    InitDataBuffer();

    //Set game information
    nGameFlag = NEOGEO_A;
    nImgGameFlag = IMGDAT_SECTION_GAROU;
    nImgUnitAmt = 0; // This is a stub game.  No images will be used.
    m_prgGameImageSet = nullptr;

    nFileAmt = 1;

    //Set the image out display type
    DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog: we don't need them for a game stub.
    pButtonLabelSet = DEF_NOBUTTONS;
    m_nNumberOfColorOptions = ARRAYSIZE(DEF_NOBUTTONS);

    //Create the redirect buffer
    rgUnitRedir = new UINT16[nUnitAmt + 1];
    memset(rgUnitRedir, NULL, sizeof(UINT16) * nUnitAmt);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_NEOGEO_A::~CGame_NEOGEO_A(void)
{
    safe_delete_array(CGame_NEOGEO_A::NEOGEO_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_NEOGEO_A::GetMainTree()
{
    return &CGame_NEOGEO_A::MainDescTree;
}

int CGame_NEOGEO_A::GetExtraCt(UINT16 nUnitId, BOOL bCountVisibleOnly)
{
    return _GetExtraCount(rgExtraCountAll, NEOGEO_A_NUMUNIT, nUnitId, NEOGEO_A_EXTRA_CUSTOM);
}

void CGame_NEOGEO_A::SetAlphaModeInternal(AlphaMode NewMode)
{
    return CGameClass::SetAlphaMode(NewMode);
}

void CGame_NEOGEO_A::SetAlphaMode(AlphaMode NewMode)
{
    CString strMsg = L"Updated.  Further palette changes will use this alpha setting.";
    MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);

    // stomp the setting for posterity
    // We set this here as this is an explicit action overriding the implicit default for any
    // given color format.
    CRegProc::SetAlphaModeForUnknownGame(NewMode);

    return SetAlphaModeInternal(NewMode);
}

BOOL CGame_NEOGEO_A::SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting)
{
    // ColorMode and AlphaMode need to be loosely tied together.  However, we do want to allow
    // people to override alpha mode for a given color mode.  The logic here allows for this.

    // stomp the setting for posterity
    CRegProc::SetColorModeForUnknownGame(NewMode);

    bool fShouldSetAlpha = CurrentAlphaSetting == AlphaMode::Unknown;
    AlphaMode suggestedAlphaSetting = CurrentAlphaSetting;
    
    const UINT8 cbPreviousColorSize = m_nSizeOfColorsInBytes;
    UINT8 cbRequiredColorSize = 0;
    bool fChangedColorSize = false;

    // This handles the color modes switches for:
    // ID_COLORFORMAT_RGB444_BE
    // ID_COLORFORMAT_RGB555_LE
    // ID_COLORFORMAT_RGB556
    // ID_COLORFORMAT_RGB666
    // ID_COLORFORMAT_RGB557
    // ID_COLORFORMAT_BGR555_LE
    // ID_COLORFORMAT_RGB555_BE
    // ID_COLORFORMAT_RGB333_BE
    // ID_COLORFORMAT_ARGB7888
    // ID_COLORFORMAT_SHARPRGB
    // ID_COLORFORMAT_RGB444_LE
    // ID_COLORFORMAT_ARGB8888
    // ID_COLORFORMAT_ARGB1888
    // ID_COLORFORMAT_xRGB888
    // ID_COLORFORMAT_xBGR888
    // ID_COLORFORMAT_GRB555_LE
    // ID_COLORFORMAT_ABGR8888
    // ID_COLORFORMAT_BGR555_BE
    // I am explicitly and needlessly listing out all of those string IDs because Visual Studio search sometimes misses the color modes below,
    // and we have to add expolicity color handling here so that people can change to that color mode in Unknown Game mode

    switch (NewMode)
    {
    case ColMode::COLMODE_RGB333:
    case ColMode::COLMODE_BGR555_LE:
    case ColMode::COLMODE_BGR555_BE:
    case ColMode::COLMODE_RGB444_BE:
    case ColMode::COLMODE_RGB444_LE:
    case ColMode::COLMODE_GRB555_LE:
    case ColMode::COLMODE_RGB555_SHARP:
        cbRequiredColorSize = 2;
        suggestedAlphaSetting= AlphaMode::GameDoesNotUseAlpha;
        break;
    case ColMode::COLMODE_RGB555_LE:
    case ColMode::COLMODE_RGB555_BE:
        cbRequiredColorSize = 2;
        suggestedAlphaSetting = AlphaMode::GameUsesFixedAlpha;
        break;
    case ColMode::COLMODE_xRGB888:
    case ColMode::COLMODE_xBGR888:
        cbRequiredColorSize = 3;
        suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
        break;        
    case ColMode::COLMODE_ARGB1888:
    case ColMode::COLMODE_ARGB1888_32STEPS:
    case ColMode::COLMODE_ARGB7888:
    case ColMode::COLMODE_ARGB8888:
    case ColMode::COLMODE_ABGR8888:
        cbRequiredColorSize = 4;
        suggestedAlphaSetting = AlphaMode::GameUsesVariableAlpha;
        break;
    default: // Something is wrong: reset
        MessageBox(g_appHWnd, L"Warning: unknown color mode was requested. Resetting to default\n", GetHost()->GetAppName(), MB_ICONSTOP);
        __fallthrough;
    case ColMode::COLMODE_RGB666_NEOGEO:
        cbRequiredColorSize = 2;
        fShouldSetAlpha = true;  // NEOGEO has no allowance for alpha: force to DoesNotUse
        suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
        break;
    };

    if (cbRequiredColorSize != cbPreviousColorSize)
    {
        if (!m_fHaveDoneInitialSet)
        {
            m_nSizeOfColorsInBytes = cbRequiredColorSize;
        }
        else
        {
            fChangedColorSize = true;
            CString strMsg = L"Configured.  You must now reload this game to use this setting.  PalMod will not work correctly until you reload.";

            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONSTOP);
        }
    }
    else
    {
        if (m_fHaveDoneInitialSet)
        {
            CString strMsg = L"Updated.  The next palette displayed will use this color format.";

            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }

    m_fHaveDoneInitialSet = true;

    if (fShouldSetAlpha)
    {
        SetAlphaModeInternal(suggestedAlphaSetting);
    }

    if (!fChangedColorSize)
    {
        return CGameClass::SetColorMode(NewMode);
    }
    else
    {
        return FALSE;
    }
}

BOOL CGame_NEOGEO_A::SetColorMode(ColMode NewMode)
{
    // Reset alpha mode since we're switching color formats...
    CRegProc::SetAlphaModeForUnknownGame(AlphaMode::Unknown);

    return SetAlphaAndColorModeInternal(NewMode, AlphaMode::Unknown);
}

int CGame_NEOGEO_A::GetExtraLoc(UINT16 nUnitId)
{
    return _GetExtraLocation(rgExtraLoc, NEOGEO_A_NUMUNIT, nUnitId, NEOGEO_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_NEOGEO_A::InitDescTree()
{
    //Load extra file if we're using it
    LoadExtraFileForGame(EXTRA_FILENAME_UNKNOWN_A, NEOGEO_A_EXTRA, &NEOGEO_A_EXTRA_CUSTOM, NEOGEO_A_EXTRALOC, m_nConfirmedROMSize, m_nSizeOfColorsInBytes);

    if (GetExtraCt(NEOGEO_A_EXTRALOC) == 0)
    {
        // Fall over to the old filename option
        safe_delete_array(NEOGEO_A_EXTRA_CUSTOM);
        memset(rgExtraCountAll, -1, sizeof(rgExtraCountAll));
        memset(rgExtraLoc, -1, sizeof(rgExtraLoc));

        LoadExtraFileForGame(EXTRA_FILENAME_NEO_GEO_A, NEOGEO_A_EXTRA, &NEOGEO_A_EXTRA_CUSTOM, NEOGEO_A_EXTRALOC, m_nConfirmedROMSize, m_nSizeOfColorsInBytes);
    }

    UINT16 nUnitCt = NEOGEO_A_NUMUNIT + (GetExtraCt(NEOGEO_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", g_GameFriendlyName[NEOGEO_A]);
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNEOGEO = _InitDescTree(NewDescTree,
        NEOGEO_A_UNITS,
        NEOGEO_A_EXTRALOC,
        NEOGEO_A_NUMUNIT,
        rgExtraCountAll,
        rgExtraLoc,
        NEOGEO_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_NEOGEO_A::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"stub.stb"); // use a stub value here

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1; // this game is a stub only

    return NewFileRule;
}

UINT16 CGame_NEOGEO_A::GetCollectionCountForUnit(UINT16 nUnitId)
{
    return _GetCollectionCountForUnit(NEOGEO_A_UNITS, rgExtraCountAll, NEOGEO_A_NUMUNIT, NEOGEO_A_EXTRALOC, nUnitId, NEOGEO_A_EXTRA_CUSTOM);
}

UINT16 CGame_NEOGEO_A::GetNodeCountForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetNodeCountForCollection(NEOGEO_A_UNITS, rgExtraCountAll, NEOGEO_A_NUMUNIT, NEOGEO_A_EXTRALOC, nUnitId, nCollectionId, NEOGEO_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_NEOGEO_A::GetDescriptionForCollection(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetDescriptionForCollection(NEOGEO_A_UNITS, NEOGEO_A_EXTRALOC, nUnitId, nCollectionId);
}

UINT16 CGame_NEOGEO_A::GetPaletteCountForUnit(UINT16 nUnitId)
{
    return _GetPaletteCountForUnit(NEOGEO_A_UNITS, rgExtraCountAll, NEOGEO_A_NUMUNIT, NEOGEO_A_EXTRALOC, nUnitId, NEOGEO_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_NEOGEO_A::GetPaletteSet(UINT16 nUnitId, UINT16 nCollectionId)
{
    return _GetPaletteSet(NEOGEO_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_NEOGEO_A::GetNodeFromPaletteId(UINT16 nUnitId, UINT16 nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(NEOGEO_A_UNITS, rgExtraCountAll, NEOGEO_A_NUMUNIT, NEOGEO_A_EXTRALOC, nUnitId, nPaletteId, NEOGEO_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_NEOGEO_A::GetSpecificPalette(UINT16 nUnitId, UINT16 nPaletteId)
{
    return _GetSpecificPalette(NEOGEO_A_UNITS, rgExtraCountAll, NEOGEO_A_NUMUNIT, NEOGEO_A_EXTRALOC, nUnitId, nPaletteId, NEOGEO_A_EXTRA_CUSTOM);
}

void CGame_NEOGEO_A::LoadSpecificPaletteData(UINT16 nUnitId, UINT16 nPalId)
{
     if (nUnitId != NEOGEO_A_EXTRALOC)
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
    else // NEOGEO_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = GetExtraDefForNEOGEO(GetExtraLoc(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_NEOGEO_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(NEOGEO_A_UNITS, rgExtraCountAll, NEOGEO_A_NUMUNIT, NEOGEO_A_EXTRALOC, NEOGEO_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}
