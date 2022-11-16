#include "StdAfx.h"
#include "Game_DevMode_DIR.h"
#include "..\PalMod.h"
#include "RegProc.h"

sDirectoryLoadingData CGame_DevMode_DIR::m_sFileLoadingData;
bool CGame_DevMode_DIR::m_fHaveReadOverrideFromFile = false;

CGame_DevMode_DIR::CGame_DevMode_DIR(uint32_t nConfirmedROMSize)
{
    createPalOptions = { NO_SPECIAL_OPTIONS, CRegProc::GetMaxWriteForUnknownGame() };

    ColMode cmCurrentDefault = CRegProc::GetColorModeForUnknownGame();
    AlphaMode amCurrentDefault = CRegProc::GetAlphaModeForUnknownGame();

#ifdef WantOverrideFromFile
    // I need to figure out this logic.  Commenting out for now.
    // When do we want to load from file and when from registry?

    if ((m_AlphaModeOverride != AlphaMode::Unknown) ||
        (m_ColorModeOverride != ColMode::COLMODE_LAST))
    {
        m_fHaveDoneInitialColorSet = false;
        amCurrentDefault = (m_AlphaModeOverride != AlphaMode::Unknown) ? m_AlphaModeOverride : amCurrentDefault;
        cmCurrentDefault = (m_ColorModeOverride != ColMode::COLMODE_LAST) ? m_ColorModeOverride : cmCurrentDefault;
        SetAlphaAndColorModeInternal(cmCurrentDefault, amCurrentDefault);
    }
#endif

    m_sCoreGameData_UseExtrasFile.createPalOptions = createPalOptions;
    m_sCoreGameData_UseExtrasFile.eAlphaMode = amCurrentDefault;
    m_sCoreGameData_UseExtrasFile.eColMode = cmCurrentDefault;

    m_fCurrentlyInitializing = true;

    InitializeGame(nConfirmedROMSize, m_sCoreGameData_UseExtrasFile); 

    if (m_nTotalPaletteCount == 0)
    {
        // Fail over to the empty set
        CString strIntro;
        strIntro = L"Howdy!  This \"dummy\" game mode is designed to allow you to spelunk any random game ROM that PalMod does not already support. \n\n";
        strIntro += L"PalMod will read / write specified RAM offsets as if they indicated colors for the color format specified in the Settings menu.\n\n";
        strIntro += L"Right now, you don't have any entries in your UnknownFileSetE.txt Extras file: you will want to add entries there if you wish to use this \"dummy\" mode.\n\n";
        strIntro += L"Please make sure to only change a copy of the ROMs you're interested in: since you're directly playing around with the game ROM, weird things could happen.\n\n";
        strIntro += L"Good luck!";
        MessageBox(g_appHWnd, strIntro, GetHost()->GetAppName(), MB_ICONINFORMATION);

        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Stub);
    }

    m_fCurrentlyInitializing = false;
}

sFileRule CGame_DevMode_DIR::GetRule(uint32_t nRuleId)
{
    if (m_sFileLoadingData.rgFileList.size() == 0)
    {
        // This is a re-open: Load last selection
        ReloadLoadingChoices();
    }

    if (m_sFileLoadingData.rgFileList.size() == 0)
    {
        // Uh-oh: let them reestablish
        UserCreatesRules();
    }

    return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); 
}

bool CGame_DevMode_DIR::UserCreatesRules(LPWSTR pszPrimaryFilePath /* = nullptr */)
{
    bool fSuccess = true;

    // TODO: We want to allow them to pick 1 to 4 files and choose linkage type.

    static bool s_fHaveShownCaution = false;

    if (!s_fHaveShownCaution)
    {
        s_fHaveShownCaution = true;

        CString strMsg = L"I'm still prototyping this, but it mostly works.  Select one file (press Cancel on second dialog) for normal Unknown Game mode.  "
                         L"Select two files for interleaved two file Unknown Game Mode.";
        MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
    }

    CFileDialog OpenDialog(
        TRUE,
        NULL,
        NULL,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY
    );

    if (OpenDialog.DoModal() == IDOK)
    {
        OPENFILENAME& pOFN = OpenDialog.GetOFN();

        if (pszPrimaryFilePath)
        {
            wcsncpy(pszPrimaryFilePath, pOFN.lpstrFile, MAX_PATH);
        }

        WIN32_FILE_ATTRIBUTE_DATA wfad = {};

        if (GetFileAttributesEx(pOFN.lpstrFile, GetFileExInfoStandard, &wfad))
        {
            LPCWSTR pszFileName = wcsrchr(pOFN.lpstrFile, L'\\');
            pszFileName = pszFileName ? (pszFileName + 1) : L"unknown";

            m_sFileLoadingData.rgFileList.resize(1);
            m_sFileLoadingData.rgFileList.at(0).nFileSize = wfad.nFileSizeLow;
            m_sFileLoadingData.rgFileList.at(0).strFileName = pszFileName;
            m_sFileLoadingData.eReadType = FileReadType::Sequential;

            if (OpenDialog.DoModal() == IDOK)
            {
                OPENFILENAME& pOFN = OpenDialog.GetOFN();

                if (GetFileAttributesEx(pOFN.lpstrFile, GetFileExInfoStandard, &wfad))
                {
                    pszFileName = wcsrchr(pOFN.lpstrFile, L'\\');
                    pszFileName = pszFileName ? (pszFileName + 1) : L"unknown";

                    m_sFileLoadingData.rgFileList.resize(2);
                    m_sFileLoadingData.rgFileList.at(1).nFileSize = wfad.nFileSizeLow;
                    m_sFileLoadingData.rgFileList.at(1).strFileName = pszFileName;
                    m_sFileLoadingData.eReadType = FileReadType::Interleaved_2FileSets;
                }
            }
        }
    }

    if (fSuccess)
    {
        SaveLoadingChoices();
    }

    return fSuccess;
}

bool CGame_DevMode_DIR::ReloadLoadingChoices()
{
    HKEY hKey;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey) == ERROR_SUCCESS)
    {
        CString strValueName;
        DWORD RegType = REG_SZ;
        DWORD GetSz;
        DWORD dwValue = 0;

        for (size_t iFilePos = 0; iFilePos < c_nMaxFilesToLoad; iFilePos++)
        {
            CString strLookup;

            GetSz = MAX_PATH;
            strValueName.Format(c_strRegvalFileFormat, iFilePos);

            if (RegQueryValueEx(hKey, strValueName, 0, &RegType, (LPBYTE)strLookup.GetBufferSetLength(MAX_PATH), &GetSz) == ERROR_SUCCESS)
            {
                GetSz = sizeof(DWORD);

                strValueName.Format(c_strRegvalFileSizeFormat, iFilePos);
                if (RegQueryValueEx(hKey, strValueName, 0, &RegType, (LPBYTE)&dwValue, &GetSz) == ERROR_SUCCESS)
                {
                    m_sFileLoadingData.rgFileList.resize(iFilePos + 1);
                    m_sFileLoadingData.rgFileList.at(iFilePos).strFileName = strLookup.GetString();
                    m_sFileLoadingData.rgFileList.at(iFilePos).nFileSize = dwValue;
                }
            }
        }

        dwValue = static_cast<DWORD>(FileReadType::Sequential);

        if (m_sFileLoadingData.rgFileList.size() > 1)
        {
            GetSz = sizeof(DWORD);
            RegQueryValueEx(hKey, c_strRegValType, 0, &RegType, (LPBYTE)&dwValue, &GetSz);

            m_sFileLoadingData.eReadType = static_cast<FileReadType>(dwValue);
        }

        RegCloseKey(hKey);
    }

    return (m_sFileLoadingData.rgFileList.size() != 0);
}

void CGame_DevMode_DIR::SaveLoadingChoices()
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        for (size_t iFilePos = 0; iFilePos < c_nMaxFilesToLoad; iFilePos++)
        {
            CString strValueName;
            strValueName.Format(c_strRegvalFileFormat, iFilePos);

            if (iFilePos < m_sFileLoadingData.rgFileList.size())
            {
                RegSetValueEx(hKey, strValueName, 0, REG_SZ, (LPBYTE)m_sFileLoadingData.rgFileList.at(iFilePos).strFileName.c_str(), sizeof(wchar_t) * (m_sFileLoadingData.rgFileList.at(iFilePos).strFileName.length() + 1));
                
                strValueName.Format(c_strRegvalFileSizeFormat, iFilePos);
                
                DWORD dwFilesize = static_cast<DWORD>(m_sFileLoadingData.rgFileList.at(iFilePos).nFileSize);
                RegSetValueEx(hKey, strValueName, 0, REG_DWORD, (LPBYTE)&dwFilesize, sizeof(DWORD));
            }
            else
            {
                RegDeleteValue(hKey, strValueName);
            }
        }

        RegSetValueEx(hKey, c_strRegValType, 0, REG_DWORD, (LPBYTE)&m_sFileLoadingData.eReadType, sizeof(DWORD));
        
        RegCloseKey(hKey);
    }
}

void CGame_DevMode_DIR::SetAlphaModeInternal(AlphaMode NewMode)
{
    return CGameClass::SetAlphaMode(NewMode);
}

void CGame_DevMode_DIR::SetAlphaMode(AlphaMode NewMode)
{
    if (!m_fCurrentlyInitializing)
    {
        CString strMsg = L"Updated.  Further palette changes will use this alpha setting.";
        MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
    }

    // stomp the setting for posterity
    // We set this here as this is an explicit action overriding the implicit default for any
    // given color format.
    CRegProc::SetAlphaModeForUnknownGame(NewMode);

    return SetAlphaModeInternal(NewMode);
}

bool CGame_DevMode_DIR::SetAlphaAndColorModeInternal(ColMode NewMode, AlphaMode CurrentAlphaSetting)
{
    // ColorMode and AlphaMode need to be loosely tied together.  However, we do want to allow
    // people to override alpha mode for a given color mode.  The logic here allows for this.

    if (ColorSystem::GetCbForColMode(NewMode) == 3)
    {
        CString strMsg = L"We don't support 24bit color in this mode yet, sorry.";
        MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
        return false;
    }
    else if (ColorSystem::GetCbForColMode(NewMode) == 4)
    {
        CString strMsg = L"We don't support 32bit color in this mode yet, sorry.";
        MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
        return false;
    }

    // stomp the setting for posterity
    CRegProc::SetColorModeForUnknownGame(NewMode);

    bool fShouldSetAlpha = CurrentAlphaSetting == AlphaMode::Unknown;
    AlphaMode suggestedAlphaSetting = CurrentAlphaSetting;

    const uint8_t cbPreviousColorSize = m_nSizeOfColorsInBytes;
    uint8_t cbRequiredColorSize = 0;
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
    // ID_COLORFORMAT_xBGR888
    // ID_COLORFORMAT_xGRB888
    // ID_COLORFORMAT_xRGB888
    // ID_COLORFORMAT_GRB555_LE
    // ID_COLORFORMAT_ABGR8888
    // ID_COLORFORMAT_BGR555_BE
    // ID_COLORFORMAT_xBGR555_LE
    // ID_COLORFORMAT_BRG555_LE
    // I am explicitly and needlessly listing out all of those string IDs because Visual Studio search sometimes misses the color modes below,
    // and we have to add explicit color handling here so that people can change to that color mode in Unknown Game mode

    // Update this check once you've decided whether to expose the new color or not.
    static_assert((ColMode)28 == ColMode::COLMODE_LAST, "New color formats usually mean updating color selectability in the Developer Mode support.");

    switch (NewMode)
    {
        case ColMode::COLMODE_BGR333:
        case ColMode::COLMODE_RBG333:
        case ColMode::COLMODE_RGB333:

        case ColMode::COLMODE_BGR444:
        case ColMode::COLMODE_BRG444:
        case ColMode::COLMODE_RBG444:
        case ColMode::COLMODE_RGB444_BE:
        case ColMode::COLMODE_RGB444_LE:

        case ColMode::COLMODE_BGR555_LE:
        case ColMode::COLMODE_BGR555_BE:
        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_BRG555_LE:

        case ColMode::COLMODE_RGB555_SHARP:
            cbRequiredColorSize = 2;
            suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
            m_fGameUsesAlphaValue = false;
            break;

        case ColMode::COLMODE_RGB555_LE:
        case ColMode::COLMODE_xBGR555_LE:
        case ColMode::COLMODE_RGB555_BE:
            cbRequiredColorSize = 2;
            suggestedAlphaSetting = AlphaMode::GameUsesFixedAlpha;
            m_fGameUsesAlphaValue = true;
            break;

        case ColMode::COLMODE_BGR888:
        case ColMode::COLMODE_BRG888:
        case ColMode::COLMODE_GRB888:
        case ColMode::COLMODE_RGB888:
            cbRequiredColorSize = 3;
            suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
            m_fGameUsesAlphaValue = false;
            break;

        case ColMode::COLMODE_RGBA8881:
        case ColMode::COLMODE_RGBA8881_32STEPS:
        case ColMode::COLMODE_RGBA8887:
        case ColMode::COLMODE_RGBA8888_BE:
        case ColMode::COLMODE_RGBA8888_LE:
        case ColMode::COLMODE_BGRA8888_BE:
        case ColMode::COLMODE_BGRA8888_LE:
            cbRequiredColorSize = 4;
            suggestedAlphaSetting = AlphaMode::GameUsesVariableAlpha;
            m_fGameUsesAlphaValue = true;
            break;

        default: // Something is wrong: reset
            MessageBox(g_appHWnd, L"Warning: unknown color mode was requested. Resetting to default\n", GetHost()->GetAppName(), MB_ICONSTOP);
            __fallthrough;
        case ColMode::COLMODE_RGB666_NEOGEO:
            cbRequiredColorSize = 2;
            fShouldSetAlpha = true;  // NEOGEO has no allowance for alpha: force to DoesNotUse
            suggestedAlphaSetting = AlphaMode::GameDoesNotUseAlpha;
            m_fGameUsesAlphaValue = false;
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
        if (m_fHaveDoneInitialColorSet && !m_fCurrentlyInitializing)
        {
            CString strMsg = L"Updated.  The next palette displayed will use this color format.";

            MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }

    m_fHaveDoneInitialColorSet = true;

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
        return false;
    }
}

bool CGame_DevMode_DIR::SetColorMode(ColMode NewMode)
{
    // Reset alpha mode since we're switching color formats...
    CRegProc::SetAlphaModeForUnknownGame(AlphaMode::Unknown);

    return SetAlphaAndColorModeInternal(NewMode, AlphaMode::Unknown);
}

void CGame_DevMode_DIR::SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption)
{
    // Store for next launch
    CRegProc::SetMaxWriteForUnknownGame(eUpdatedOption);

    return CGameClass::SetMaximumWritePerEachTransparency(eUpdatedOption);
}

LPCWSTR CGame_DevMode_DIR::GetGameName()
{
    size_t nOverrideLength = strlen(m_paszGameNameOverride);

    if (nOverrideLength)
    {
        _snwprintf_s(m_pszGameNameOverride, ARRAYSIZE(m_pszGameNameOverride), _TRUNCATE, L"%S", m_paszGameNameOverride);

        return m_pszGameNameOverride;
    }
    else
    {
        return CGameClassByDir::GetGameName();
    }
}

