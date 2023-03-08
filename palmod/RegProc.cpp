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
constexpr auto c_nPrefImageExportForNumber = L"imgout_PrefPrevCount_%u";

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
        RegSetValueEx(hKey, c_nPrefSavePaletteToMemory, 0, REG_DWORD, (BYTE*)&nPreference, sizeof(DWORD));
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

        if (RegQueryValueEx(hKey, c_nPrefSavePaletteToMemory, 0, &RegType, (BYTE*)&dwValue, &GetSz) != ERROR_SUCCESS)
        {
            nShouldAutoSavePalettesToMemory = IDYES;
        }
        else
        {
            nShouldAutoSavePalettesToMemory = (int)dwValue;
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

        if (RegQueryValueEx(hKey, strText.GetString(), 0, &RegType, (BYTE*)&dwValue, &GetSz) != ERROR_SUCCESS)
        {
            nPreferredAmount = 0;
        }
        else
        {
            nPreferredAmount = (int)dwValue;
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

        RegSetValueEx(hKey, strText.GetString(), 0, REG_DWORD, (BYTE*)&nPreferredAmount, sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetAlphaModeForUnknownGame(AlphaMode alphaMode)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainUnknownGameAlphaMode, 0, REG_DWORD, (BYTE*)&alphaMode, sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetColorModeForUnknownGame(ColMode colorMode)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainUnknownGameColMode, 0, REG_DWORD, (BYTE*)&colorMode, sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetMaxWriteForUnknownGame(PALWriteOutputOptions maxWrite)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainUnknownGameMaxWrite, 0, REG_DWORD, (BYTE*)&maxWrite, sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

void CRegProc::SetColorsPerLine(DWORD dwColors)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_mainWndColorsPerLine, 0, REG_DWORD, (BYTE*)&dwColors, sizeof(DWORD));
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

            if (RegQueryValueEx(hKey, c_mainWndMaxColorsPerPage, 0, &RegType, (BYTE*)&s_dwMaxColorsPerPage, &GetSz) != ERROR_SUCCESS)
            {
                s_dwMaxColorsPerPage = 0;
            }

            RegCloseKey(hKey);
        }
    }

    return (uint16_t)s_dwMaxColorsPerPage;
}

bool CRegProc::ShouldForcePeerPreviewWindow()
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

            if (RegQueryValueEx(hKey, c_mainWndForcePeerPreviewWindow, 0, &RegType, (BYTE*)&shouldForcePeerWindow, &GetSz) != ERROR_SUCCESS)
            {
                shouldForcePeerWindow = 0;
            }

            RegCloseKey(hKey);
        }
    }

    return (shouldForcePeerWindow == 1);
}

AlphaMode CRegProc::GetAlphaModeForUnknownGame()
{
    HKEY hKey;
    DWORD dwAlphaMode = (DWORD)AlphaMode::Unknown;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_mainUnknownGameAlphaMode, 0, &RegType, (BYTE*)&dwAlphaMode, &GetSz) != ERROR_SUCCESS)
        {
            dwAlphaMode = (DWORD)AlphaMode::Unknown;
        }

        RegCloseKey(hKey);
    }

    return (AlphaMode)dwAlphaMode;
}

ColMode CRegProc::GetColorModeForUnknownGame()
{
    HKEY hKey;
    DWORD dwColMode = (DWORD)ColMode::COLMODE_RGB666_NEOGEO;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_mainUnknownGameColMode, 0, &RegType, (BYTE*)&dwColMode, &GetSz) != ERROR_SUCCESS)
        {
            dwColMode = (DWORD)ColMode::COLMODE_RGB666_NEOGEO;
        }

        RegCloseKey(hKey);
    }

    return (ColMode)dwColMode;
}

PALWriteOutputOptions CRegProc::GetMaxWriteForUnknownGame()
{
    HKEY hKey;
    DWORD dwMaxWrite = (DWORD)PALWriteOutputOptions::WRITE_16;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_READ, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_mainUnknownGameMaxWrite, 0, &RegType, (BYTE*)&dwMaxWrite, &GetSz) != ERROR_SUCCESS)
        {
            dwMaxWrite = (DWORD)PALWriteOutputOptions::WRITE_16;
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

            if (RegQueryValueEx(hKey, c_mainWndColorsPerLine, 0, &RegType, (BYTE*)&dwColorsPerLine, &GetSz) != ERROR_SUCCESS)
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

            if (RegQueryValueEx(hKey, c_mainAllowAlphaChanges, 0, &RegType, (BYTE*)&main_fAllowAlphaChanges, &GetSz) != ERROR_SUCCESS)
            {
                main_fAllowAlphaChanges = c_mainDefaultAllowAlphaChanges;
            }

            if (RegQueryValueEx(hKey, L"main_show32", 0, &RegType, (BYTE*)&main_bShow32, &GetSz) != ERROR_SUCCESS)
            {
                main_bShow32 = c_mainDefaultShowAs32;
            }

            if (RegQueryValueEx(hKey, L"main_procsupps", 0, &RegType, (BYTE*)&main_bProcSupp, &GetSz) != ERROR_SUCCESS)
            {
                main_bProcSupp = c_mainDefaultProcSupp;
            }

#ifdef ENABLE_OLD_OPTIONS
            // These were classic PalMod 2008 options, but ... I don't really see a reason for continuing to include them
            if (RegQueryValueEx(hKey, L"main_getcolor", 0, &RegType, (BYTE*)&main_bGetColor, &GetSz) != ERROR_SUCCESS)
            {
                main_bGetColor = c_mainDefaultGetColor;
            }

            if (RegQueryValueEx(hKey, L"AutoSetColor", 0, &RegType, (BYTE*)&main_bAutoSetCol, &GetSz) != ERROR_SUCCESS)
            {
                main_bAutoSetCol = c_mainDefaultAutoSetCol;
            }
#endif

            if (RegQueryValueEx(hKey, c_mainExtraCopyInfo, 0, &RegType, (BYTE*)&main_bExtraCopyData, &GetSz) != ERROR_SUCCESS)
            {
                main_bExtraCopyData = c_mainDefaultExtraCopyData;
            }

            RegType = REG_SZ;
            GetSz = MAX_PATH;

            CString strPosAndDpi;
            strPosAndDpi.Format(L"%s_%u", (GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE) ? c_mainWndPos_8ColorsPerLine : c_mainWndPos_16ColorsPerLine, GetDpiForScreen());

            if (RegQueryValueEx(hKey, strPosAndDpi, 0, &RegType, (BYTE*)conv_str.GetBufferSetLength(MAX_PATH), &GetSz) == ERROR_SUCCESS)
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

            GetSz = sizeof(prev_bgcol);
            if (RegQueryValueEx(hKey, L"prev_bgcol", 0, &RegType, (BYTE*)&prev_bgcol, &GetSz) != ERROR_SUCCESS)
                prev_bgcol = RGB(0xd0, 0xd0, 0xd0); // Default to grey background

            GetSz = sizeof(prev_blinkcol);
            if (RegQueryValueEx(hKey, L"prev_blinkcol", 0, &RegType, (BYTE*)&prev_blinkcol, &GetSz) != ERROR_SUCCESS)
                prev_blinkcol = RGB(255, 255, 255); // Default to white blink

            GetSz = sizeof(prev_blinkinverts);
            if (RegQueryValueEx(hKey, L"prev_blinkinverts", 0, &RegType, (BYTE*)&prev_blinkinverts, &GetSz) != ERROR_SUCCESS)
                prev_blinkinverts = FALSE; // Default to non-inverting blink

            GetSz = sizeof(fTileBG);
            if (RegQueryValueEx(hKey, L"PreviewTiledBG", 0, &RegType, (BYTE*)&fTileBG, &GetSz) != ERROR_SUCCESS)
                fTileBG = TRUE;

            GetSz = sizeof(nBGXOffs);
            if (RegQueryValueEx(hKey, L"PreviewBGXOffset", 0, &RegType, (BYTE*)&nBGXOffs, &GetSz) != ERROR_SUCCESS)
                nBGXOffs = 0;

            GetSz = sizeof(nBGYOffs);
            if (RegQueryValueEx(hKey, L"PreviewBGYOffset", 0, &RegType, (BYTE*)&nBGYOffs, &GetSz) != ERROR_SUCCESS)
                nBGYOffs = 0;

            GetSz = sizeof(fUseBGCol);
            if (RegQueryValueEx(hKey, L"UseBGCol", 0, &RegType, (BYTE*)&fUseBGCol, &GetSz) != ERROR_SUCCESS)
                fUseBGCol = TRUE;

            GetSz = sizeof(fClickToFind);
            if (RegQueryValueEx(hKey, c_prevClickToFind, 0, &RegType, (BYTE*)&fClickToFind, &GetSz) != ERROR_SUCCESS)
                fClickToFind = TRUE;

            GetSz = sizeof(eBlendMode);
            if (RegQueryValueEx(hKey, c_prevBlendMode, 0, &RegType, (BYTE*)&eBlendMode, &GetSz) != ERROR_SUCCESS)
            {
                eBlendMode = BlendMode::Default;
            }

            int nTranslation = 1;
            GetSz = sizeof(nTranslation);
            if (RegQueryValueEx(hKey, L"PreviewZoom", 0, &RegType, (BYTE*)&nTranslation, &GetSz) == ERROR_SUCCESS)
            {
                dPreviewZoom = (double)nTranslation;
            }
            else
            {
                dPreviewZoom = 1.0;
            }

            RegType = REG_SZ;
            GetSz = MAX_PATH;

            if (RegQueryValueEx(hKey, c_previewWndPos, 0, &RegType, (BYTE*)conv_str.GetBufferSetLength(MAX_PATH), &GetSz) == ERROR_SUCCESS)
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
            if ((RegQueryValueEx(hKey, L"PreviewBGFile", 0, &RegType, (BYTE*)szPrevBGLoc, &GetSz) != ERROR_SUCCESS)  ||
                (GetFileAttributes(szPrevBGLoc) == INVALID_FILE_ATTRIBUTES))
            {
                CString szTemp;
                GetModuleFileName(NULL, szTemp.GetBufferSetLength(MAX_PATH), MAX_PATH);
                wcscpy(szPrevBGLoc, szTemp.Left(szTemp.ReverseFind('\\') + 1) + BGBMPFILE);
            }
        }
        break;
        case eRegistryStoreID::REG_IMGOUT:
        {
            RegType = REG_DWORD;
            GetSz = sizeof(DWORD);

            if (RegQueryValueEx(hKey, L"imgout_bgcol", 0, &RegType, (BYTE*)&imgout_bgcol, &GetSz) != ERROR_SUCCESS)
                imgout_bgcol = RGB(0, 0, 0);

            if (RegQueryValueEx(hKey, L"imgout_border", 0, &RegType, (BYTE*)&imgout_border, &GetSz) != ERROR_SUCCESS)
                imgout_border = 0;

            // Changed our index, so don't try to mismap settings.
            if (RegQueryValueEx(hKey, L"imgout_zoomindex_2", 0, &RegType, (BYTE*)&imgout_zoomindex, &GetSz) != ERROR_SUCCESS)
                imgout_zoomindex = 0;

            GetSz = sizeof(BOOL);
            if (RegQueryValueEx(hKey, L"TransparentPNG", 0, &RegType, (BYTE*)&fTransPNG, &GetSz) != ERROR_SUCCESS)
            {
                fTransPNG = TRUE;
            }

            RegType = REG_SZ;
            GetSz = MAX_PATH;

            if (RegQueryValueEx(hKey, L"imgout_szpos", 0, &RegType, (BYTE*)conv_str.GetBufferSetLength(MAX_PATH), &GetSz) == ERROR_SUCCESS)
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
            RegSetValueEx(hKey, c_mainAllowAlphaChanges, 0, REG_DWORD, (BYTE*)&main_fAllowAlphaChanges, sizeof(main_fAllowAlphaChanges));
            RegSetValueEx(hKey, L"main_show32", 0, REG_DWORD, (BYTE*)&main_bShow32, sizeof(main_bShow32));
            RegSetValueEx(hKey, L"main_procsupps", 0, REG_DWORD, (BYTE*)&main_bProcSupp, sizeof(main_bProcSupp));
            RegSetValueEx(hKey, c_mainExtraCopyInfo, 0, REG_DWORD, (BYTE*)&main_bExtraCopyData, sizeof(main_bExtraCopyData));

            conv_str = RectToStr(main_szpos);

            CString strPosAndDpi;
            strPosAndDpi.Format(L"%s_%u", (GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE) ? c_mainWndPos_8ColorsPerLine : c_mainWndPos_16ColorsPerLine, GetDpiForScreen());

            RegSetValueEx(hKey, strPosAndDpi, 0, REG_SZ, (BYTE*)conv_str.GetBuffer(), sizeof(wchar_t) * (conv_str.GetLength() + 1));
        }
        break;

        case eRegistryStoreID::REG_PREV:
        {
            RegSetValueEx(hKey, L"prev_bgCol", 0, REG_DWORD, (BYTE*)&prev_bgcol, sizeof(prev_bgcol));
            RegSetValueEx(hKey, L"prev_blinkCol", 0, REG_DWORD, (BYTE*)&prev_blinkcol, sizeof(prev_blinkcol));
            RegSetValueEx(hKey, L"prev_blinkinverts", 0, REG_DWORD, (BYTE*)&prev_blinkinverts, sizeof(prev_blinkinverts));

            conv_str = RectToStr(prev_szpos);

            RegSetValueEx(hKey, c_previewWndPos, 0, REG_SZ, (BYTE*)conv_str.GetBuffer(), sizeof(wchar_t) * (conv_str.GetLength() + 1));
            RegSetValueEx(hKey, L"PreviewBGFile", 0, REG_SZ, (BYTE*)szPrevBGLoc, (DWORD)((wcslen(szPrevBGLoc) + 1) * sizeof(wchar_t)));
            RegSetValueEx(hKey, L"PreviewTiledBG", 0, REG_DWORD, (BYTE*)&fTileBG, sizeof(fTileBG));
            RegSetValueEx(hKey, L"PreviewBGXOffset", 0, REG_DWORD, (BYTE*)&nBGXOffs, sizeof(nBGXOffs));
            RegSetValueEx(hKey, L"PreviewBGYOffset", 0, REG_DWORD, (BYTE*)&nBGYOffs, sizeof(nBGYOffs));
            RegSetValueEx(hKey, L"UseBGCol", 0, REG_DWORD, (BYTE*)&fUseBGCol, sizeof(fUseBGCol));
            RegSetValueEx(hKey, c_prevClickToFind, 0, REG_DWORD, (BYTE*)&fClickToFind, sizeof(fClickToFind));
            RegSetValueEx(hKey, c_prevBlendMode, 0, REG_DWORD, (BYTE*)&eBlendMode, sizeof(eBlendMode));
            


            int nTranslation = (int)dPreviewZoom;
            RegSetValueEx(hKey, L"PreviewZoom", 0, REG_DWORD, (BYTE*)&nTranslation, sizeof(nTranslation));
        }
        break;

        case eRegistryStoreID::REG_IMGOUT:
        {
            RegSetValueEx(hKey, L"imgout_bgcol", 0, REG_DWORD, (BYTE*)&imgout_bgcol, sizeof(imgout_bgcol));
            RegSetValueEx(hKey, L"imgout_border", 0, REG_DWORD, (BYTE*)&imgout_border, sizeof(imgout_border));
            RegSetValueEx(hKey, L"imgout_zoomindex_2", 0, REG_DWORD, (BYTE*)&imgout_zoomindex, sizeof(imgout_zoomindex));
            RegSetValueEx(hKey, L"TransparentPNG", 0, REG_DWORD, (BYTE*)&fTransPNG, sizeof(fTransPNG));

            conv_str = RectToStr(imgout_szpos);

            RegSetValueEx(hKey, L"imgout_szpos", 0, REG_SZ, (BYTE*)conv_str.GetBuffer(), sizeof(wchar_t) * (conv_str.GetLength() + 1));
        }
        break;
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

DWORD CRegProc::GetOFNIndexForPaletteExport(bool fUsingBBCFOptions)
{
    HKEY hKey;
    DWORD nPreferredIndex = 0;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, fUsingBBCFOptions? c_exportBBCFOFNValueName : c_exportOFNValueName, 0, &RegType, (LPBYTE)&nPreferredIndex, &GetSz) != ERROR_SUCCESS)
        {
            nPreferredIndex = 0;
        }

        RegCloseKey(hKey);
    }

    return nPreferredIndex;
}

void CRegProc::StoreOFNIndexForPaletteExport(bool fUsingBBCFOptions, DWORD nPreferredIndex)
{
    HKEY hKey;
    
    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, fUsingBBCFOptions ? c_exportBBCFOFNValueName : c_exportOFNValueName, 0, REG_DWORD, (LPBYTE)&nPreferredIndex, sizeof(DWORD));
        RegCloseKey(hKey);
    }
}

DWORD CRegProc::GetOFNIndexForImageExport()
{
    HKEY hKey;
    DWORD nPreferredIndex = 0;

    if (RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey)
        == ERROR_SUCCESS)
    {
        DWORD RegType = REG_DWORD;
        DWORD GetSz = sizeof(DWORD);

        if (RegQueryValueEx(hKey, c_exportImageOFNValueName, 0, &RegType, (LPBYTE)&nPreferredIndex, &GetSz) != ERROR_SUCCESS)
        {
            nPreferredIndex = 0;
        }

        RegCloseKey(hKey);
    }

    return nPreferredIndex;
}

void CRegProc::StoreOFNIndexForImageExport(DWORD nPreferredIndex)
{
    HKEY hKey;

    if (RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_SET_VALUE, NULL, &hKey, NULL)
        == ERROR_SUCCESS)
    {
        RegSetValueEx(hKey, c_exportImageOFNValueName, 0, REG_DWORD, (LPBYTE)&nPreferredIndex, sizeof(DWORD));
        RegCloseKey(hKey);
    }
}
