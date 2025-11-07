#include "StdAfx.h"
#include "GameRegistry.h"
#include "Game_DevMode_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

stExtraDef* CGame_DevMode_A::DEVMODE_A_EXTRA_CUSTOM = nullptr;

CDescTree CGame_DevMode_A::m_MainDescTree = nullptr;

uint32_t CGame_DevMode_A::m_rgExtraCountAll[DEVMODE_A_NUMUNIT + 1];
uint32_t CGame_DevMode_A::m_rgExtraLoc[DEVMODE_A_NUMUNIT + 1];

uint32_t CGame_DevMode_A::m_nTotalPaletteCountForNEOGEO = 0;
uint32_t CGame_DevMode_A::m_nConfirmedROMSize = -1;
wchar_t CGame_DevMode_A::m_pszExtraNameOverride[MAX_PATH] = L"";

void CGame_DevMode_A::InitializeStatics(LPCWSTR pszFileLoaded)
{
    safe_delete_array(CGame_DevMode_A::DEVMODE_A_EXTRA_CUSTOM);

    memset(m_rgExtraCountAll, -1, sizeof(m_rgExtraCountAll));
    memset(m_rgExtraLoc, -1, sizeof(m_rgExtraLoc));

    m_MainDescTree.SetRootTree(InitDescTree(pszFileLoaded));
}

CGame_DevMode_A::CGame_DevMode_A(uint32_t nConfirmedROMSize, LPCWSTR pszFileLoaded)
{
    OutputDebugString(L"CGame_DevMode_A::CGame_DevMode_A: Loading ROM...\n");

    // We need this set before we initialize so that corrupt Extras truncate correctly.
    // Otherwise the new user inadvertently corrupts their ROM.
    m_nConfirmedROMSize = nConfirmedROMSize;

    m_createPalOptions = { NO_SPECIAL_OPTIONS, CRegProc::GetMaxWriteForUnknownGame()};

    ColMode cmCurrentDefault = CRegProc::GetColorModeForUnknownGame();
    AlphaMode amCurrentDefault = CRegProc::GetAlphaModeForUnknownGame();

    SetAlphaAndColorModeInternal(cmCurrentDefault, amCurrentDefault);

    // InitializeStatics needs color size configured by color mode, so call after that
    // An Extras file can override this sizing, but we want the initial size to be correct
    InitializeStatics(pszFileLoaded);

    if ((m_AlphaModeOverride != AlphaMode::Unknown) ||
        (m_ColorModeOverride != ColMode::COLMODE_LAST))
    {
        m_fHaveDoneInitialColorSet = false;
        amCurrentDefault = (m_AlphaModeOverride != AlphaMode::Unknown) ? m_AlphaModeOverride : amCurrentDefault;
        cmCurrentDefault = (m_ColorModeOverride != ColMode::COLMODE_LAST) ? m_ColorModeOverride : cmCurrentDefault;
        SetAlphaAndColorModeInternal(cmCurrentDefault, amCurrentDefault);
    }

    m_pszExtraFilename = m_pszExtraNameOverride;
    m_nTotalInternalUnits = DEVMODE_A_NUMUNIT;
    m_nExtraUnit = static_cast<uint16_t>(m_nTotalInternalUnits);

    m_nSafeCountForThisRom = GetExtraCountForUnit(m_nExtraUnit) + 1;
    m_nTotalPaletteCount = m_nTotalPaletteCountForNEOGEO;
    // This magic number is used to warn users if their Extra file is trying to write somewhere potentially unusual
    m_nLowestKnownPaletteRomLocation = 0x0; // Don't worry about locations for a stubbed game...

    m_nUnitAmt = m_nTotalInternalUnits + (GetExtraCountForUnit(m_nExtraUnit) ? 1 : 0);

    // InitDataBuffer needs color size configured by color mode, so call after that
    InitDataBuffer();

    //Set game information
    m_nGameFlag = DEVMODE_A;
    m_nImgGameFlag = IMGDAT_SECTION_GAROU;
    m_prgGameImageSet.clear();

    m_nFileAmt = 1;

    //Set the image out display type
    m_DisplayType = eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT;
    // Button labels are used for the Export Image dialog: we don't need them for a game stub.
    m_pButtonLabelSet = DEF_NOBUTTONS;

    //Create the redirect buffer
    m_rgUnitRedir.resize(m_nUnitAmt, 0);

    //Create the file changed flag
    PrepChangeTrackingArray();
}

CGame_DevMode_A::~CGame_DevMode_A()
{
    safe_delete_array(CGame_DevMode_A::DEVMODE_A_EXTRA_CUSTOM);
    ClearDataBuffer();
    //Get rid of the file changed flag
    FlushChangeTrackingArray();
}

CDescTree* CGame_DevMode_A::GetMainTree()
{
    return &CGame_DevMode_A::m_MainDescTree;
}

uint32_t CGame_DevMode_A::GetExtraCountForUnit(uint32_t nUnitId, BOOL fCountVisibleOnly)
{
    return _GetExtraCount(m_rgExtraCountAll, DEVMODE_A_NUMUNIT, nUnitId, DEVMODE_A_EXTRA_CUSTOM);
}

void CGame_DevMode_A::SetAlphaModeInternal(AlphaMode NewMode)
{
    m_fGameUsesAlphaValue = (NewMode == AlphaMode::GameUsesVariableAlpha);

    return CGameClass::SetAlphaMode(NewMode);
}

void CGame_DevMode_A::SetAlphaMode(AlphaMode NewMode)
{
    // This is called from the Settings : Color Mode : Alpha menu
    // Stomp the setting for posterity
    // We set this here as this is an explicit action overriding the implicit default for any
    // given color format.
    CRegProc::SetAlphaModeForUnknownGame(NewMode);

    SetAlphaModeInternal(NewMode);

    CString strMsg = L"Updated.  Further palette changes will use this alpha setting.  Please change palettes now: things won't work correctly until you do.";
    MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);

    // This path uniquely needs to refresh availability of the Alpha color edit box
    GetHost()->GetPalModDlg()->OnPalSelChange(0);
}

bool CGame_DevMode_A::SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting)
{
    // ColorMode and AlphaMode need to be loosely tied together.  However, we do want to allow
    // people to override alpha mode for a given color mode.  The logic here allows for this.

    // stomp the setting for posterity
    CRegProc::SetColorModeForUnknownGame(NewMode);

    bool fMustOverrideAlphaSetting = CurrentAlphaSetting == AlphaMode::Unknown;
    AlphaMode suggestedAlphaSetting = CurrentAlphaSetting;
    
    const uint8_t cbPreviousColorSize = m_nSizeOfColorsInBytes;
    uint8_t cbRequiredColorSize = 0;
    bool fChangedColorSize = false;

    // This handles the color modes switches for:
    // ID_COLORFORMAT_RGB444_BE
    // ID_COLORFORMAT_RGB555_LE_CPS3
    // ID_COLORFORMAT_RGB555_LE_NORMAL
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
    // ID_COLORFORMAT_xBGR888
    // ID_COLORFORMAT_xGRB888
    // ID_COLORFORMAT_xRGB888
    // ID_COLORFORMAT_GRB555_LE
    // ID_COLORFORMAT_ABGR8888
    // ID_COLORFORMAT_BGR555_BE
    // ID_COLORFORMAT_xBGR555_LE
    // ID_COLORFORMAT_BRG555_LE
    // ID_COLORFORMAT_GRB555_BE
    // ID_COLORFORMAT_RBGA8888_LE
    // ID_COLORFORMAT_NEOTURFMASTERS
    // I am explicitly and needlessly listing out all of those string IDs because Visual Studio search sometimes misses the color modes below,
    // and we have to add explicit color handling here so that people can change to that color mode in Unknown Game mode

    // Update this check once you've decided whether to expose the new color or not.
    static_assert(static_cast<ColMode>(33) == ColMode::COLMODE_LAST, "New color formats usually mean updating color selectability in the Developer Mode support.");

    switch (NewMode)
    {
    case ColMode::COLMODE_BGR333:
    case ColMode::COLMODE_RBG333:
    case ColMode::COLMODE_RGB333:
    case ColMode::COLMODE_RGB555_SHARP:
    case ColMode::COLMODE_BGR444:
    case ColMode::COLMODE_BRG444:
    case ColMode::COLMODE_RBG444:
    case ColMode::COLMODE_RGB444_BE:
    case ColMode::COLMODE_RGB444_LE:

    case ColMode::COLMODE_BGR555_LE:
    case ColMode::COLMODE_BGR555_BE:
    case ColMode::COLMODE_GRB555_LE:
    case ColMode::COLMODE_GRB555_BE:
    case ColMode::COLMODE_BRG555_LE:
        cbRequiredColorSize = 2;
        suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
        break;

    case ColMode::COLMODE_RGB555_LE_CPS3:
    case ColMode::COLMODE_RGB555_LE_NORMAL:
    case ColMode::COLMODE_xBGR555_LE:
    case ColMode::COLMODE_RGB555_BE:
        cbRequiredColorSize = 2;
        suggestedAlphaSetting = AlphaMode::GameUsesFixedAlpha;
        break;

    case ColMode::COLMODE_BGR888:
    case ColMode::COLMODE_BRG888:
    case ColMode::COLMODE_GRB888:
    case ColMode::COLMODE_RGB888:
        cbRequiredColorSize = 3;
        fMustOverrideAlphaSetting = true; // 24bit, no room
        suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
        break;        

    case ColMode::COLMODE_RGBA8881:
    case ColMode::COLMODE_RGBA8881_32STEPS:
    case ColMode::COLMODE_RGBA8887:
    case ColMode::COLMODE_RGBA8888_BE:
    case ColMode::COLMODE_RGBA8888_BE16:
    case ColMode::COLMODE_RGBA8888_LE:
    case ColMode::COLMODE_BGRA8888_BE:
    case ColMode::COLMODE_BGRA8888_LE:
    case ColMode::COLMODE_RBGA8888_LE:
        cbRequiredColorSize = 4;
        suggestedAlphaSetting = AlphaMode::GameUsesVariableAlpha;
        break;

    default: // Something is wrong: reset
        MessageBox(g_appHWnd, L"Warning: unknown color mode was requested. Resetting to default\n", GetHost()->GetAppName(), MB_ICONSTOP);
        __fallthrough;
    case ColMode::COLMODE_RGB666_NEOGEO:
        cbRequiredColorSize = 2;
        fMustOverrideAlphaSetting = true;  // NEOGEO has no allowance for alpha: force to DoesNotUse
        suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
        break;
    };

    if (cbRequiredColorSize != cbPreviousColorSize)
    {
        if (!m_fHaveDoneInitialColorSet)
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
        if (m_fHaveDoneInitialColorSet)
        {
            CString strMsg = L"Updated.  The next palette displayed will use this color format.";

            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }

    m_fHaveDoneInitialColorSet = true;

    if (fMustOverrideAlphaSetting)
    {
        CurrentAlphaSetting = suggestedAlphaSetting;
    }

    SetAlphaModeInternal(CurrentAlphaSetting);

    if (!fChangedColorSize)
    {
        return CGameClass::SetColorMode(NewMode);
    }
    else
    {
        return false;
    }
}

bool CGame_DevMode_A::SetColorMode(ColMode NewMode)
{
    // Reset alpha mode since we're switching color formats...
    CRegProc::SetAlphaModeForUnknownGame(AlphaMode::Unknown);

    return SetAlphaAndColorModeInternal(NewMode, AlphaMode::Unknown);
}

void CGame_DevMode_A::SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption)
{
    // Store for next launch
    CRegProc::SetMaxWriteForUnknownGame(eUpdatedOption);

    return CGameClass::SetMaximumWritePerEachTransparency(eUpdatedOption);
}

uint32_t CGame_DevMode_A::GetExtraLoc(uint32_t nUnitId)
{
    return _GetExtraLocation(m_rgExtraLoc, DEVMODE_A_NUMUNIT, nUnitId, DEVMODE_A_EXTRA_CUSTOM);
}

sDescTreeNode* CGame_DevMode_A::InitDescTree(LPCWSTR pszFileLoaded)
{
    //Load extra file if we're using it
    if (pszFileLoaded)
    {
        uint32_t nStrLen = static_cast<uint32_t>(wcslen(pszFileLoaded));
        LPCWSTR pszNewSuffix = L"E.txt";

        if (nStrLen < (MAX_PATH - (wcslen(pszNewSuffix) + 1))) // room for extras suffix
        {
            const wchar_t* pszSlash = wcsrchr(pszFileLoaded, L'\\');

            if (pszSlash)
            {
                wcsncpy_s(m_pszExtraNameOverride, pszSlash + 1, ARRAYSIZE(m_pszExtraNameOverride));

                wchar_t* pszDot = wcsrchr(m_pszExtraNameOverride, L'.');
                if (pszDot)
                {
                    pszDot[0] = 0;

                    wcsncat(m_pszExtraNameOverride, pszNewSuffix, ARRAYSIZE(m_pszExtraNameOverride) - wcslen(m_pszExtraNameOverride));
                    LoadExtraFileForGame(m_pszExtraNameOverride, &DEVMODE_A_EXTRA_CUSTOM, DEVMODE_A_EXTRALOC, m_nConfirmedROMSize, m_nSizeOfColorsInBytes);
                }
            }
        }
    }

    if (GetExtraCountForUnit(DEVMODE_A_EXTRALOC) == 0)
    {
        safe_delete_array(DEVMODE_A_EXTRA_CUSTOM);
        memset(m_rgExtraCountAll, -1, sizeof(m_rgExtraCountAll));
        memset(m_rgExtraLoc, -1, sizeof(m_rgExtraLoc));

        wcsncpy_s(m_pszExtraNameOverride, EXTRA_FILENAME_UNKNOWN_A, ARRAYSIZE(m_pszExtraNameOverride));
        LoadExtraFileForGame(m_pszExtraNameOverride, &DEVMODE_A_EXTRA_CUSTOM, DEVMODE_A_EXTRALOC, m_nConfirmedROMSize, m_nSizeOfColorsInBytes);
    }

    if (GetExtraCountForUnit(DEVMODE_A_EXTRALOC) == 0)
    {
        // Fall over to the old filename option
        safe_delete_array(DEVMODE_A_EXTRA_CUSTOM);
        memset(m_rgExtraCountAll, -1, sizeof(m_rgExtraCountAll));
        memset(m_rgExtraLoc, -1, sizeof(m_rgExtraLoc));

        LoadExtraFileForGame(EXTRA_FILENAME_NEO_GEO_A, &DEVMODE_A_EXTRA_CUSTOM, DEVMODE_A_EXTRALOC, m_nConfirmedROMSize, m_nSizeOfColorsInBytes);

        if (GetExtraCountForUnit(DEVMODE_A_EXTRALOC) == 0)
        {
            // Load the stock dummy Extra
            safe_delete_array(DEVMODE_A_EXTRA_CUSTOM);
            memset(m_rgExtraCountAll, -1, sizeof(m_rgExtraCountAll));
            memset(m_rgExtraLoc, -1, sizeof(m_rgExtraLoc));

            uint32_t nExtraArraySize = ARRAYSIZE(UNKNOWN_GAME_EXTRAS_LIST);

            DEVMODE_A_EXTRA_CUSTOM = new stExtraDef[nExtraArraySize];
            memcpy(DEVMODE_A_EXTRA_CUSTOM, UNKNOWN_GAME_EXTRAS_LIST, nExtraArraySize * sizeof(stExtraDef));

            CString strIntro;
            strIntro = L"Howdy!  This \"dummy\" game mode is designed to allow you to spelunk any random game ROM that PalMod does not already support. \n\n";
            strIntro += L"PalMod will read / write specified RAM offsets as if they indicated colors for the color format specified in the Settings menu.\n\n";
            strIntro += L"Right now, you don't have any entries in your UnknownE.txt Extras file: you will want to add entries there if you wish to use this \"dummy\" mode.\n\n";
            strIntro += L"Please make sure to only change a copy of the ROM you're interested in: since you're directly playing around with the game ROM, weird things could happen.\n\n";
            strIntro += L"Good luck!";
            MessageBox(g_appHWnd, strIntro, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }

    uint16_t nUnitCt = DEVMODE_A_NUMUNIT + (GetExtraCountForUnit(DEVMODE_A_EXTRALOC) ? 1 : 0);
    
    sDescTreeNode* NewDescTree = new sDescTreeNode;

    //Create the main character tree
    _snwprintf_s(NewDescTree->szDesc, ARRAYSIZE(NewDescTree->szDesc), _TRUNCATE, L"%s", KnownGameInfo::GetGameNameForGameID(DEVMODE_A));
    NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
    NewDescTree->uChildAmt = nUnitCt;
    //All units have tree children
    NewDescTree->uChildType = DESC_NODETYPE_TREE;

    m_nTotalPaletteCountForNEOGEO = _InitDescTree(NewDescTree,
        DEVMODE_A_UNITS,
        DEVMODE_A_EXTRALOC,
        DEVMODE_A_NUMUNIT,
        m_rgExtraCountAll,
        m_rgExtraLoc,
        DEVMODE_A_EXTRA_CUSTOM
    );

    return NewDescTree;
}

sFileRule CGame_DevMode_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"stub.stb"); // use a stub value here

    NewFileRule.uUnitId = 0;
    NewFileRule.uVerifyVar = -1; // this game is a stub only

    return NewFileRule;
}

uint32_t CGame_DevMode_A::GetCollectionCountForUnit(uint32_t nUnitId)
{
    return _GetCollectionCountForUnit(DEVMODE_A_UNITS, m_rgExtraCountAll, DEVMODE_A_NUMUNIT, DEVMODE_A_EXTRALOC, nUnitId, DEVMODE_A_EXTRA_CUSTOM);
}

uint32_t CGame_DevMode_A::GetNodeCountForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetNodeCountForCollection(DEVMODE_A_UNITS, m_rgExtraCountAll, DEVMODE_A_NUMUNIT, DEVMODE_A_EXTRALOC, nUnitId, nCollectionId, DEVMODE_A_EXTRA_CUSTOM);
}

LPCWSTR CGame_DevMode_A::GetDescriptionForCollection(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetDescriptionForCollection(DEVMODE_A_UNITS, DEVMODE_A_EXTRALOC, nUnitId, nCollectionId);
}

uint32_t CGame_DevMode_A::GetPaletteCountForUnit(uint32_t nUnitId)
{
    return _GetPaletteCountForUnit(DEVMODE_A_UNITS, m_rgExtraCountAll, DEVMODE_A_NUMUNIT, DEVMODE_A_EXTRALOC, nUnitId, DEVMODE_A_EXTRA_CUSTOM);
}

const sGame_PaletteDataset* CGame_DevMode_A::GetPaletteSet(uint32_t nUnitId, uint32_t nCollectionId)
{
    return _GetPaletteSet(DEVMODE_A_UNITS, nUnitId, nCollectionId);
}

const sDescTreeNode* CGame_DevMode_A::GetNodeFromPaletteId(uint32_t nUnitId, uint32_t nPaletteId, bool fReturnBasicNodesOnly)
{
    return _GetNodeFromPaletteId(DEVMODE_A_UNITS, m_rgExtraCountAll, DEVMODE_A_NUMUNIT, DEVMODE_A_EXTRALOC, nUnitId, nPaletteId, DEVMODE_A_EXTRA_CUSTOM, fReturnBasicNodesOnly);
}

const sGame_PaletteDataset* CGame_DevMode_A::GetSpecificPalette(uint32_t nUnitId, uint32_t nPaletteId)
{
    return _GetSpecificPalette(DEVMODE_A_UNITS, m_rgExtraCountAll, DEVMODE_A_NUMUNIT, DEVMODE_A_EXTRALOC, nUnitId, nPaletteId, DEVMODE_A_EXTRA_CUSTOM);
}

void CGame_DevMode_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
     if (nUnitId != DEVMODE_A_EXTRALOC)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

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
    else // DEVMODE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &DEVMODE_A_EXTRA_CUSTOM[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}

BOOL CGame_DevMode_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
    return _UpdatePalImg(DEVMODE_A_UNITS, m_rgExtraCountAll, DEVMODE_A_NUMUNIT, DEVMODE_A_EXTRALOC, DEVMODE_A_EXTRA_CUSTOM, Node01, Node02, Node03, Node03);
}

LPCWSTR CGame_DevMode_A::GetGameName()
{
    uint32_t nOverrideLength = static_cast<uint32_t>(strlen(m_paszGameNameOverride));

    if (nOverrideLength)
    {
        _snwprintf_s(m_pszGameNameOverride, ARRAYSIZE(m_pszGameNameOverride), _TRUNCATE, L"%S", m_paszGameNameOverride);

        return m_pszGameNameOverride;
    }
    else
    {
        return L"Unknown Game";
    }
}
