#include "stdafx.h"
#include "PalMod.h"
#include "regproc.h"

constexpr auto c_previewWndPos = L"prev_wndpos";
// Display options for 8 colors or for 16 colors per line
constexpr auto c_mainWndPos_8ColorsPerLine = L"main_wndpos_02"; // changed default app size so incrementing this
constexpr auto c_mainWndPos_16ColorsPerLine = L"main_wndpos_02_16c";
constexpr auto c_mainAllowAlphaChanges = L"main_AllowAlphaChanges"; // incremented for warning.
constexpr auto c_mainExtraCopyInfo = L"main_ExtraCopyInfo";
constexpr auto c_mainWndColorsPerLine = L"main_wndColorsPerLine";
constexpr auto c_mainWndMaxColorsPerPage = L"extras_MaxColorsPerPage";
constexpr auto c_mainWndForcePeerPreviewWindow = L"extras_ForcePeerPreviewWindow";
constexpr auto c_mainUnknownGameAlphaMode = L"main_UnknownGameAlphaMode";
constexpr auto c_mainUnknownGameColMode = L"main_UnknownGameColMode";
constexpr auto c_mainUnknownGameMaxWrite = L"main_UnknownGameMaxWrite";
constexpr auto c_mainExtraFileCanaryKey = L"main_lastExtraFileSize_%s";

constexpr auto c_nPrefSavePaletteToMemory = L"pref_ShouldSavePaletteToMemory";
constexpr auto c_prevClickToFind = L"PreviewClickToFind";
constexpr auto c_prevBlendMode = L"PreviewBlendMode";
constexpr auto c_exportOFNValueName = L"pref_FavoriteExportIndex";
constexpr auto c_exportBBCFOFNValueName = L"pref_FavoriteExportIndexWithBBCF";
constexpr auto c_exportImageOFNValueName = L"pref_FavoriteImageExportIndex";
constexpr auto c_LoadCustomSpriteOFNValueName = L"pref_LoadCustomSpriteIndex";
constexpr auto c_nPrefImageExportForNumber = L"imgout_PrefPrevCount_%u";
constexpr auto c_prevPreviewDropsArePalettes = L"prev_DropsArePalettes";
constexpr auto c_prevPreviewDropsTrim = L"prev_DropsTrimPreview";
constexpr auto c_prevPreviewDropsKawaksFirst = L"prev_DropsTryKawaksFirst";
constexpr auto c_prevAllowAutoPreviewFallback = L"prev_AllowAutoPreviewFallback";

extern int GetDpiForScreen();

DWORD CRegProc::dwColorsPerLine = 0;

CRegProc::CRegProc(eRegistryStoreID nSrcType)
{
    if (nSrcType != eRegistryStoreID::REG_UNKNOWN)
    {
        LoadReg(nSrcType);
    }
}

CRegProc::~CRegProc()
{
}

void CRegProc::SetUserSavePaletteToMemoryPreference(int nPreference)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_nPrefSavePaletteToMemory, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&nPreference), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

int CRegProc::GetUserSavePaletteToMemoryPreference()
{
    HKEY hKey;
    int nShouldAutoSavePalettesToMemory = IDYES;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD dwValue = 0;
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_nPrefSavePaletteToMemory, 0, &RegType, reinterpret_cast<LPBYTE>(&dwValue), &GetSz) != ERROR_SUCCESS)
        {
            nShouldAutoSavePalettesToMemory = IDYES;
        }
        else
        {
            nShouldAutoSavePalettesToMemory = static_cast<int>(dwValue);
        }

        RegCloseKey(hKey);
    }

    return nShouldAutoSavePalettesToMemory;
}

int CRegProc::GetImageAmountForPalettePreview(int nMaxAmount)
{
    HKEY hKey;
    int nPreferredAmount = 0;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD dwValue = 0;
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        CString strText;
        strText.Format(c_nPrefImageExportForNumber, nMaxAmount);

        if (RegQueryValueEx(hKey, strText.GetString(), 0, &RegType, reinterpret_cast<LPBYTE>(&dwValue), &GetSz) != ERROR_SUCCESS)
        {
            nPreferredAmount = 0;
        }
        else
        {
            nPreferredAmount = static_cast<int>(dwValue);
        }

        RegCloseKey(hKey);
    }

    return nPreferredAmount;
}

void CRegProc::SetImageAmountForPalettePreview(int nMaxAmount, int nPreferredAmount)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        CString strText;
        strText.Format(c_nPrefImageExportForNumber, nMaxAmount);

        RegSetValueEx(hKey, strText.GetString(), 0, REG_DWORD, reinterpret_cast<LPBYTE>(&nPreferredAmount), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetAlphaModeForUnknownGame(AlphaMode alphaMode)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainUnknownGameAlphaMode, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&alphaMode), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetColorModeForUnknownGame(ColMode colorMode)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainUnknownGameColMode, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&colorMode), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetMaxWriteForUnknownGame(PALWriteOutputOptions maxWrite)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainUnknownGameMaxWrite, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&maxWrite), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetColorsPerLine(DWORD dwColors)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainWndColorsPerLine, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&dwColors), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

uint16_t CRegProc::GetMaxColorsPerPageOverride()
{
    static DWORD s_dwMaxColorsPerPage = -1;

    // Since this affects UI we should only update it once per instance
    if (s_dwMaxColorsPerPage == -1)
    {
        HKEY hKey;

        s_dwMaxColorsPerPage = 0;

        if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_READ, NULL, &hKey, NULL)
            == ERROR_SUCCESS)
        {
            DWORD RegType = REG_DWORD;
            DWORD GetSz = sizeof(DWORD);

            if (RegQueryValueEx(hKey, c_mainWndMaxColorsPerPage, 0, &RegType, reinterpret_cast<LPBYTE>(&s_dwMaxColorsPerPage), &GetSz) != ERROR_SUCCESS)
            {
                s_dwMaxColorsPerPage = 0;
            }

            RegCloseKey(hKey);
        }
    }

    return static_cast<uint16_t>(s_dwMaxColorsPerPage);
}

BOOL CRegProc::ShouldForcePeerPreviewWindow()
{
    static DWORD shouldForcePeerWindow = -1;

    // Since this affects UI we should only update it once per instance
    if (shouldForcePeerWindow == -1)
    {
        HKEY hKey;

        shouldForcePeerWindow = 0;

        if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
            == ERROR_SUCCESS)
        {
            DWORD RegType = REG_DWORD;
            DWORD GetSz = sizeof(DWORD);

            if (RegQueryValueEx(hKey, c_mainWndForcePeerPreviewWindow, 0, &RegType, reinterpret_cast<LPBYTE>(&shouldForcePeerWindow), &GetSz) != ERROR_SUCCESS)
            {
                shouldForcePeerWindow = 0;
            }

            RegCloseKey(hKey);
        }
    }

    return (shouldForcePeerWindow == 1);
}

void CRegProc::SetForcePeerPreviewWindow(BOOL fForcePeer)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD dwValue = fForcePeer;

        RegSetValueEx(hKey, c_mainWndForcePeerPreviewWindow, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&dwValue), sizeof(DWORD));

        RegCloseKey(hKey);
    }
}

AlphaMode CRegProc::GetAlphaModeForUnknownGame()
{
    HKEY hKey;
    DWORD dwAlphaMode = static_cast<DWORD>(AlphaMode::Unknown);

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_mainUnknownGameAlphaMode, 0, &RegType, reinterpret_cast<LPBYTE>(&dwAlphaMode), &GetSz) != ERROR_SUCCESS)
        {
            dwAlphaMode = static_cast<DWORD>(AlphaMode::Unknown);
        }

        RegCloseKey(hKey);
    }

    return (AlphaMode)dwAlphaMode;
}

ColMode CRegProc::GetColorModeForUnknownGame()
{
    HKEY hKey;
    DWORD dwColMode = static_cast<DWORD>(ColMode::COLMODE_RGB666_NEOGEO);

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_mainUnknownGameColMode, 0, &RegType, reinterpret_cast<LPBYTE>(&dwColMode), &GetSz) != ERROR_SUCCESS)
        {
            dwColMode = static_cast<DWORD>(ColMode::COLMODE_RGB666_NEOGEO);
        }

        RegCloseKey(hKey);
    }

    return (ColMode)dwColMode;
}

PALWriteOutputOptions CRegProc::GetMaxWriteForUnknownGame()
{
    HKEY hKey;
    DWORD dwMaxWrite = static_cast<DWORD>(PALWriteOutputOptions::WRITE_16);

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_mainUnknownGameMaxWrite, 0, &RegType, reinterpret_cast<LPBYTE>(&dwMaxWrite), &GetSz) != ERROR_SUCCESS)
        {
            dwMaxWrite = static_cast<DWORD>(PALWriteOutputOptions::WRITE_16);
        }

        RegCloseKey(hKey);
    }

    return (PALWriteOutputOptions)dwMaxWrite;
}

uint16_t CRegProc::GetColorsPerLine()
{
    // Since this affects UI we should only update it once per instance
    if (dwColorsPerLine == 0)
    {
        HKEY hKey;

        if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
            == ERROR_SUCCESS)
        {
            DWORD RegType = REG_DWORD;
            DWORD GetSz = sizeof(DWORD);

            if (RegQueryValueEx(hKey, c_mainWndColorsPerLine, 0, &RegType, reinterpret_cast<LPBYTE>(&dwColorsPerLine), &GetSz) != ERROR_SUCCESS)
            {
                dwColorsPerLine = PAL_MAXWIDTH_16COLORSPERLINE;
            }

            RegCloseKey(hKey);
        }
    }

    return (dwColorsPerLine == PAL_MAXWIDTH_16COLORSPERLINE) ? PAL_MAXWIDTH_16COLORSPERLINE : PAL_MAXWIDTH_8COLORSPERLINE;
}

uint16_t CRegProc::GetMaxPalettePageSize()
{
    return (GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE) ? PAL_MAXAMT_8COLORSPERLINE : PAL_MAXAMT_16COLORSPERLINE;
}

void CRegProc::SetExtraFileLoadingCanary(LPCWSTR pszExtraFileName, DWORD nExtraFileSize)
{
    CRegKey extraKey;

    if (extraKey.Create(HKEY_CURRENT_USER, c_AppRegistryRoot) == ERROR_SUCCESS)
    {
        CString strValueName;
        strValueName.Format(c_mainExtraFileCanaryKey, pszExtraFileName);
        extraKey.SetDWORDValue(strValueName.GetString(), nExtraFileSize);
    }
}

bool CRegProc::WasExtraFileCanaryKilledLastTime(LPCWSTR pszExtraFileName, DWORD nExtraFileSize)
{
    CRegKey extraKey;
    bool fWasItKilled = false;

    if (extraKey.Open(HKEY_CURRENT_USER, c_AppRegistryRoot) == ERROR_SUCCESS)
    {
        DWORD dwLastKnownSize;
        CString strValueName;
        strValueName.Format(c_mainExtraFileCanaryKey, pszExtraFileName);
        if (extraKey.QueryDWORDValue(strValueName.GetString(), dwLastKnownSize) == ERROR_SUCCESS)
        {
            fWasItKilled = (nExtraFileSize == dwLastKnownSize);
        }
    }

    return fWasItKilled;
}

void CRegProc::ClearExtraFileLoadingCanary(LPCWSTR pszExtraFileName)
{
    CRegKey extraKey;

    if (extraKey.Open(HKEY_CURRENT_USER, c_AppRegistryRoot) == ERROR_SUCCESS)
    {
        CString strValueName;
        strValueName.Format(c_mainExtraFileCanaryKey, pszExtraFileName);
        extraKey.DeleteValue(strValueName.GetString());
    }
}

bool CRegProc::UserIsOnWINE()
{
    HMODULE ntdll = GetModuleHandle(L"ntdll.dll");

    if (!ntdll)
    {
        return false;
    }

    void* pWGV = (void*)GetProcAddress(ntdll, "wine_get_version");

    return (pWGV);
}

void CRegProc::LoadReg(eRegistryStoreID src)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE|KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType;
        DWORD GetSz;

        CString conv_str;

        switch (src)
        {
        case eRegistryStoreID::REG_MAIN:
        {
            RegType = REG_DWORD;
            GetSz = sizeof(BOOL);

            if (RegQueryValueEx(hKey, c_mainAllowAlphaChanges, 0, &RegType, reinterpret_cast<LPBYTE>(&main_fAllowAlphaChanges), &GetSz) != ERROR_SUCCESS)
            {
                main_fAllowAlphaChanges = c_mainDefaultAllowAlphaChanges;
            }

            if (RegQueryValueEx(hKey, L"main_show32", 0, &RegType, reinterpret_cast<LPBYTE>(&main_bShow32), &GetSz) != ERROR_SUCCESS)
            {
                main_bShow32 = c_mainDefaultShowAs32;
            }

            if (RegQueryValueEx(hKey, L"main_procsupps", 0, &RegType, reinterpret_cast<LPBYTE>(&main_bProcSupp), &GetSz) != ERROR_SUCCESS)
            {
                main_bProcSupp = c_mainDefaultProcSupp;
            }

#ifdef ENABLE_OLD_OPTIONS
            // These were classic PalMod 2008 options, but ... I don't really see a reason for continuing to include them
            if (RegQueryValueEx(hKey, L"main_getcolor", 0, &RegType, reinterpret_cast<LPBYTE>(&main_bGetColor), &GetSz) != ERROR_SUCCESS)
            {
                main_bGetColor = c_mainDefaultGetColor;
            }

            if (RegQueryValueEx(hKey, L"AutoSetColor", 0, &RegType, reinterpret_cast<LPBYTE>(&main_bAutoSetCol), &GetSz) != ERROR_SUCCESS)
            {
                main_bAutoSetCol = c_mainDefaultAutoSetCol;
            }
#endif

            if (RegQueryValueEx(hKey, c_mainExtraCopyInfo, 0, &RegType, reinterpret_cast<LPBYTE>(&main_bExtraCopyData), &GetSz) != ERROR_SUCCESS)
            {
                main_bExtraCopyData = c_mainDefaultExtraCopyData;
            }

            RegType = REG_SZ;
            GetSz = MAX_PATH;

            CString strPosAndDpi;
            strPosAndDpi.Format(L"%s_%u", (GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE) ? c_mainWndPos_8ColorsPerLine : c_mainWndPos_16ColorsPerLine, GetDpiForScreen());

            if (RegQueryValueEx(hKey, strPosAndDpi, 0, &RegType, reinterpret_cast<LPBYTE>(conv_str.GetBufferSetLength(MAX_PATH)), &GetSz) == ERROR_SUCCESS)
            {
                main_szpos = StrToRect(conv_str);
                // This good faith check doesn't seem to do anything meaningful. 
                // Maybe I'm overthinking issues with multiple monitors and such.
                if (MonitorFromRect(&main_szpos, MONITOR_DEFAULTTONULL) == nullptr)
                {
                    main_szpos.top = c_badWindowPosValue;
                }
            }
            else
            {
                main_szpos.top = c_badWindowPosValue;
            }
        }
        break;

        case eRegistryStoreID::REG_PREV:
        {
            RegType = REG_DWORD;

            GetSz = sizeof(m_PreviewSettings.prev_bgcol);
            if (RegQueryValueEx(hKey, L"prev_bgcol", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.prev_bgcol), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.prev_bgcol = RGB(0xd0, 0xd0, 0xd0); // Default to grey background

            GetSz = sizeof(m_PreviewSettings.prev_blinkcol);
            if (RegQueryValueEx(hKey, L"prev_blinkcol", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.prev_blinkcol), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.prev_blinkcol = RGB(255, 255, 255); // Default to white blink

            GetSz = sizeof(m_PreviewSettings.fBlinkInverts);
            if (RegQueryValueEx(hKey, L"prev_blinkinverts", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fBlinkInverts), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fBlinkInverts = FALSE; // Default to non-inverting blink

            GetSz = sizeof(m_PreviewSettings.fTileBG);
            if (RegQueryValueEx(hKey, L"PreviewTiledBG", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fTileBG), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fTileBG = TRUE;

            GetSz = sizeof(m_PreviewSettings.nBGBMPOffsets.x);
            if (RegQueryValueEx(hKey, L"PreviewBGXOffset", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.nBGBMPOffsets.x), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.nBGBMPOffsets.x = 0;

            GetSz = sizeof(m_PreviewSettings.nBGBMPOffsets.y);
            if (RegQueryValueEx(hKey, L"PreviewBGYOffset", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.nBGBMPOffsets.y), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.nBGBMPOffsets.y = 0;

            GetSz = sizeof(m_PreviewSettings.fUseBGCol);
            if (RegQueryValueEx(hKey, L"UseBGCol", 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fUseBGCol), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fUseBGCol = TRUE;

            GetSz = sizeof(m_PreviewSettings.fClickToFindColor);
            if (RegQueryValueEx(hKey, c_prevClickToFind, 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fClickToFindColor), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fClickToFindColor = TRUE;

            GetSz = sizeof(m_PreviewSettings.fPreviewDropIsPalette);
            if (RegQueryValueEx(hKey, c_prevPreviewDropsArePalettes, 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fPreviewDropIsPalette), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fPreviewDropIsPalette = TRUE;

            GetSz = sizeof(m_PreviewSettings.fPreviewDropTrimPreview);
            if (RegQueryValueEx(hKey, c_prevPreviewDropsTrim, 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fPreviewDropTrimPreview), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fPreviewDropTrimPreview = TRUE;

            GetSz = sizeof(m_PreviewSettings.fPreviewDropWinKawaksFirst);
            if (RegQueryValueEx(hKey, c_prevPreviewDropsKawaksFirst, 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fPreviewDropWinKawaksFirst), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fPreviewDropWinKawaksFirst = FALSE;

            GetSz = sizeof(m_PreviewSettings.fAllowAutoPreviewFallback);
            if (RegQueryValueEx(hKey, c_prevAllowAutoPreviewFallback, 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fAllowAutoPreviewFallback), &GetSz) != ERROR_SUCCESS)
                m_PreviewSettings.fAllowAutoPreviewFallback = TRUE;

            GetSz = sizeof(m_PreviewSettings.eBlendMode);
            if (RegQueryValueEx(hKey, c_prevBlendMode, 0, &RegType, reinterpret_cast<LPBYTE>(&m_PreviewSettings.eBlendMode), &GetSz) != ERROR_SUCCESS)
            {
                m_PreviewSettings.eBlendMode = BlendMode::Default;
            }

            int nTranslation = 1;
            GetSz = sizeof(nTranslation);
            if (RegQueryValueEx(hKey, L"PreviewZoom", 0, &RegType, reinterpret_cast<LPBYTE>(&nTranslation), &GetSz) == ERROR_SUCCESS)
            {
                m_PreviewSettings.dPreviewZoom = static_cast<double>(nTranslation);
            }
            else
            {
                m_PreviewSettings.dPreviewZoom = 1.0;
            }

            RegType = REG_SZ;
            GetSz = MAX_PATH;

            if (RegQueryValueEx(hKey, c_previewWndPos, 0, &RegType, reinterpret_cast<LPBYTE>(conv_str.GetBufferSetLength(MAX_PATH)), &GetSz) == ERROR_SUCCESS)
            {
                prev_szpos = StrToRect(conv_str);
                // This is a good faith check to make sure we didn't get positioned off-screen
                if ((MonitorFromRect(&prev_szpos, MONITOR_DEFAULTTONULL) == nullptr) ||
                    ((prev_szpos.bottom - prev_szpos.top) < 60)) // make sure we actually have a window to work with
                {
                    prev_szpos.top = c_badWindowPosValue;
                }
            }
            else
            {
                prev_szpos.top = c_badWindowPosValue;
            }

            //Reset get size 
            GetSz = MAX_PATH;
            if ((RegQueryValueEx(hKey, L"PreviewBGFile", 0, &RegType, reinterpret_cast<LPBYTE>(m_PreviewSettings.strPreviewBGBMPPath.GetBufferSetLength(MAX_PATH)), &GetSz) != ERROR_SUCCESS)  ||
                (GetFileAttributes(m_PreviewSettings.strPreviewBGBMPPath.GetString()) == INVALID_FILE_ATTRIBUTES))
            {
                CString strTemp;
                GetModuleFileName(NULL, strTemp.GetBufferSetLength(MAX_PATH), MAX_PATH);
                m_PreviewSettings.strPreviewBGBMPPath = strTemp.Left(strTemp.ReverseFind('\\') + 1) + BGBMPFILE;
            }
        }
        break;
        case eRegistryStoreID::REG_IMGOUT:
        {
            RegType = REG_DWORD;
            GetSz = sizeof(DWORD);

            if (RegQueryValueEx(hKey, L"imgout_bgcol", 0, &RegType, reinterpret_cast<LPBYTE>(&imgout_bgcol), &GetSz) != ERROR_SUCCESS)
                imgout_bgcol = RGB(0, 0, 0);

            if (RegQueryValueEx(hKey, L"imgout_border", 0, &RegType, reinterpret_cast<LPBYTE>(&imgout_border), &GetSz) != ERROR_SUCCESS)
                imgout_border = 0;

            // Changed our index, so don't try to mismap settings.
            if (RegQueryValueEx(hKey, L"imgout_zoomindex_2", 0, &RegType, reinterpret_cast<LPBYTE>(&imgout_zoomindex), &GetSz) != ERROR_SUCCESS)
                imgout_zoomindex = 0;

            GetSz = sizeof(BOOL);
            if (RegQueryValueEx(hKey, L"TransparentPNG", 0, &RegType, reinterpret_cast<LPBYTE>(&fTransPNG), &GetSz) != ERROR_SUCCESS)
            {
                fTransPNG = TRUE;
            }

            GetSz = sizeof(BOOL);
            if (RegQueryValueEx(hKey, L"imgout_ExportPNGAsJoined", 0, &RegType, reinterpret_cast<LPBYTE>(&fExportPNGAsJoined), &GetSz) != ERROR_SUCCESS)
            {
                fExportPNGAsJoined = TRUE;
            }

            RegType = REG_SZ;
            GetSz = MAX_PATH;

            if (RegQueryValueEx(hKey, L"imgout_szpos", 0, &RegType, reinterpret_cast<LPBYTE>(conv_str.GetBufferSetLength(MAX_PATH)), &GetSz) == ERROR_SUCCESS)
            {
                imgout_szpos = StrToRect(conv_str);

                if (MonitorFromRect(&imgout_szpos, MONITOR_DEFAULTTONULL) == nullptr)
                {
                    imgout_szpos.top = c_badWindowPosValue;
                }
            }
            else
            {
                imgout_szpos.top = c_badWindowPosValue;
            }

        }
        break;
        }

        RegCloseKey(hKey);
    }
}

void CRegProc::SaveReg(eRegistryStoreID src)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        CString conv_str;

        switch (src)
        {
            case eRegistryStoreID::REG_MAIN:
            {
                RegSetValueEx(hKey, c_mainAllowAlphaChanges, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&main_fAllowAlphaChanges), sizeof(main_fAllowAlphaChanges));
                RegSetValueEx(hKey, L"main_show32", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&main_bShow32), sizeof(main_bShow32));
                RegSetValueEx(hKey, L"main_procsupps", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&main_bProcSupp), sizeof(main_bProcSupp));
                RegSetValueEx(hKey, c_mainExtraCopyInfo, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&main_bExtraCopyData), sizeof(main_bExtraCopyData));

                conv_str = RectToStr(main_szpos);

                CString strPosAndDpi;
                strPosAndDpi.Format(L"%s_%u", (GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE) ? c_mainWndPos_8ColorsPerLine : c_mainWndPos_16ColorsPerLine, GetDpiForScreen());

                RegSetValueEx(hKey, strPosAndDpi, 0, REG_SZ, reinterpret_cast<LPBYTE>(conv_str.GetBuffer()), sizeof(wchar_t) * (conv_str.GetLength() + 1));
                break;
            }

            case eRegistryStoreID::REG_PREV:
            {
                RegSetValueEx(hKey, L"prev_bgCol", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.prev_bgcol), sizeof(m_PreviewSettings.prev_bgcol));
                RegSetValueEx(hKey, L"prev_blinkCol", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.prev_blinkcol), sizeof(m_PreviewSettings.prev_blinkcol));
                RegSetValueEx(hKey, L"prev_blinkinverts", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fBlinkInverts), sizeof(m_PreviewSettings.fBlinkInverts));

                conv_str = RectToStr(prev_szpos);

                RegSetValueEx(hKey, c_previewWndPos, 0, REG_SZ, reinterpret_cast<LPBYTE>(conv_str.GetBuffer()), sizeof(wchar_t) * (conv_str.GetLength() + 1));
                RegSetValueEx(hKey, L"PreviewBGFile", 0, REG_SZ, reinterpret_cast<LPBYTE>(m_PreviewSettings.strPreviewBGBMPPath.GetBuffer()), static_cast<DWORD>((m_PreviewSettings.strPreviewBGBMPPath.GetLength() + 1) * sizeof(wchar_t)));
                RegSetValueEx(hKey, L"PreviewTiledBG", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fTileBG), sizeof(m_PreviewSettings.fTileBG));
                RegSetValueEx(hKey, L"PreviewBGXOffset", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.nBGBMPOffsets.x), sizeof(m_PreviewSettings.nBGBMPOffsets.x));
                RegSetValueEx(hKey, L"PreviewBGYOffset", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.nBGBMPOffsets.y), sizeof(m_PreviewSettings.nBGBMPOffsets.y));
                RegSetValueEx(hKey, L"UseBGCol", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fUseBGCol), sizeof(m_PreviewSettings.fUseBGCol));
                RegSetValueEx(hKey, c_prevClickToFind, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fClickToFindColor), sizeof(m_PreviewSettings.fClickToFindColor));
                RegSetValueEx(hKey, c_prevBlendMode, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.eBlendMode), sizeof(m_PreviewSettings.eBlendMode));
                RegSetValueEx(hKey, c_prevPreviewDropsArePalettes, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fPreviewDropIsPalette), sizeof(m_PreviewSettings.fPreviewDropIsPalette));
                RegSetValueEx(hKey, c_prevPreviewDropsTrim, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fPreviewDropTrimPreview), sizeof(m_PreviewSettings.fPreviewDropTrimPreview));
                RegSetValueEx(hKey, c_prevPreviewDropsKawaksFirst, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fPreviewDropWinKawaksFirst), sizeof(m_PreviewSettings.fPreviewDropWinKawaksFirst));
                RegSetValueEx(hKey, c_prevAllowAutoPreviewFallback, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&m_PreviewSettings.fAllowAutoPreviewFallback), sizeof(m_PreviewSettings.fAllowAutoPreviewFallback));
                DWORD nTranslation = static_cast<DWORD>(m_PreviewSettings.dPreviewZoom);
                RegSetValueEx(hKey, L"PreviewZoom", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&nTranslation), sizeof(nTranslation));
                break;
            }

            case eRegistryStoreID::REG_IMGOUT:
            {
                RegSetValueEx(hKey, L"imgout_bgcol", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&imgout_bgcol), sizeof(imgout_bgcol));
                RegSetValueEx(hKey, L"imgout_border", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&imgout_border), sizeof(imgout_border));
                RegSetValueEx(hKey, L"imgout_zoomindex_2", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&imgout_zoomindex), sizeof(imgout_zoomindex));
                RegSetValueEx(hKey, L"TransparentPNG", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&fTransPNG), sizeof(fTransPNG));
                RegSetValueEx(hKey, L"imgout_ExportPNGAsJoined", 0, REG_DWORD, reinterpret_cast<LPBYTE>(&fExportPNGAsJoined), sizeof(fExportPNGAsJoined));

                conv_str = RectToStr(imgout_szpos);

                RegSetValueEx(hKey, L"imgout_szpos", 0, REG_SZ, reinterpret_cast<LPBYTE>(conv_str.GetBuffer()), sizeof(wchar_t) * (conv_str.GetLength() + 1));
                break;
            }
        }

        RegCloseKey(hKey);
    }
}

CString RectToStr(RECT in_rect)
{
    CString out_str;

    out_str.Format(L"%d %d %d %d", in_rect.left, in_rect.top, in_rect.right, in_rect.bottom);

    return out_str;
}

RECT StrToRect(CString in_str)
{
    RECT out_rect = {};

    wchar_t* rect_val = in_str.GetBuffer();

    out_rect.left = wcstol(rect_val, &rect_val, 10);
    out_rect.top = wcstol(rect_val, &rect_val, 10);
    out_rect.right = wcstol(rect_val, &rect_val, 10);
    out_rect.bottom = wcstol(rect_val, NULL, 10);

    return out_rect;
}

const std::array<double, 6> CPalModZoom::m_nZoomSizes{ 1.0, 2.0, 3.0, 4.0, 5.0, 6.0 };

void CPalModZoom::IncrementZoom(double* fpPreviousZoom)
{
    int32_t nCurrentPosition = 0;

    for (; nCurrentPosition < static_cast<int32_t>(m_nZoomSizes.size()); nCurrentPosition++)
    {
        if (m_nZoomSizes[nCurrentPosition] == *fpPreviousZoom)
        {
            break;
        }
    }

    nCurrentPosition = min(nCurrentPosition + 1, static_cast<int32_t>(m_nZoomSizes.size()) - 1);
    *fpPreviousZoom = m_nZoomSizes[nCurrentPosition];
}

void CPalModZoom::DecrementZoom(double *fpPreviousZoom)
{
    int32_t nCurrentPosition = static_cast<int32_t>(m_nZoomSizes.size()) - 1;

    for (; nCurrentPosition > 0; nCurrentPosition--)
    {
        if (m_nZoomSizes[nCurrentPosition] == *fpPreviousZoom)
        {
            break;
        }
    }

    nCurrentPosition = max(nCurrentPosition - 1, 0);
    *fpPreviousZoom = m_nZoomSizes[nCurrentPosition];
}

DWORD CRegProc::GetOFNIndexForKeyName(LPCWSTR pszKeyName)
{
    HKEY hKey;
    DWORD nPreferredIndex = 0;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, pszKeyName, 0, &RegType, reinterpret_cast<LPBYTE>(&nPreferredIndex), &GetSz) != ERROR_SUCCESS)
        {
            nPreferredIndex = 0;
        }

        RegCloseKey(hKey);
    }

    return nPreferredIndex;
}

void CRegProc::StoreOFNIndexForKeyName(LPCWSTR pszKeyName, DWORD nPreferredIndex)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, pszKeyName, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&nPreferredIndex), sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

DWORD CRegProc::GetOFNIndexForPaletteExport(bool fUsingBBCFOptions)
{
    return GetOFNIndexForKeyName(fUsingBBCFOptions ? c_exportBBCFOFNValueName : c_exportOFNValueName);
}

void CRegProc::StoreOFNIndexForPaletteExport(bool fUsingBBCFOptions, DWORD nPreferredIndex)
{
    StoreOFNIndexForKeyName(fUsingBBCFOptions ? c_exportBBCFOFNValueName : c_exportOFNValueName, nPreferredIndex);
}

DWORD CRegProc::GetOFNIndexForImageExport()
{
    return GetOFNIndexForKeyName(c_exportImageOFNValueName);
}

void CRegProc::StoreOFNIndexForImageExport(DWORD nPreferredIndex)
{
    StoreOFNIndexForKeyName(c_exportImageOFNValueName, nPreferredIndex);
}

DWORD CRegProc::GetOFNIndexForLoadCustomSprite()
{
    return GetOFNIndexForKeyName(c_LoadCustomSpriteOFNValueName);
}

void CRegProc::StoreOFNIndexForLoadCustomSprite(DWORD nPreferredIndex)
{
    StoreOFNIndexForKeyName(c_LoadCustomSpriteOFNValueName, nPreferredIndex);
}
