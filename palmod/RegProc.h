#pragma once

#define REG_MAIN        0
#define REG_PREV        1
#define REG_IMGOUT      2

#define RECT_STRSZ      256

#define BGBMPFILE L"bgbmp.bmp"
constexpr auto c_badWindowPosValue = -512;

constexpr auto c_mainDefaultAllowAlphaChanges = FALSE;
constexpr auto c_mainDefaultShowAs32 = FALSE;
constexpr auto c_mainDefaultProcSupp = TRUE;
constexpr auto c_mainDefaultExtraCopyData = FALSE;
constexpr auto c_AppRegistryRoot = L"Software\\knarxed\\PalMod";

class CRegProc
{
public:
    CRegProc(int nSrcType = -1);
    ~CRegProc(void);

    void LoadReg(int src);
    void SaveReg(int src);

    static void SetAlphaModeForUnknownGame(AlphaMode alphaMode);
    static void SetColorModeForUnknownGame(ColMode colorMode);
    static void SetMaxWriteForUnknownGame(PALWriteOutputOptions maxWrite);
    static void SetColorsPerLine(DWORD dwColors);
    static AlphaMode GetAlphaModeForUnknownGame();
    static ColMode GetColorModeForUnknownGame();
    static PALWriteOutputOptions GetMaxWriteForUnknownGame();
    static UINT16 GetColorsPerLine();
    static UINT16 GetMaxColorsPerPageOverride();
    static UINT16 GetMaxPalettePageSize();
    static DWORD dwColorsPerLine;
    static bool ShouldForcePeerPreviewWindow();

    static int GetUserSavePaletteToMemoryPreference();
    static void SetUserSavePaletteToMemoryPreference(int nPreference);

    static void SetExtraFileLoadingCanary(LPCWSTR pszExtraFileName, DWORD nExtraFileSize);
    static bool WasExtraFileCanaryKilledLastTime(LPCWSTR pszExtraFileName, DWORD nExtraFileSize);
    static void ClearExtraFileLoadingCanary(LPCWSTR pszExtraFileName);

    static bool UserIsOnWINE();

    //Main

    RECT main_szpos = { c_badWindowPosValue };

    BOOL main_fAllowAlphaChanges = c_mainDefaultAllowAlphaChanges;
    BOOL main_bShow32 = c_mainDefaultShowAs32;
    BOOL main_bProcSupp = c_mainDefaultProcSupp;
    BOOL main_bExtraCopyData = c_mainDefaultExtraCopyData;

    //Preview

    RECT prev_szpos = { c_badWindowPosValue };

    COLORREF prev_bgcol;
    COLORREF prev_blinkcol;

    WCHAR szPrevBGLoc[MAX_PATH];
    int nBGXOffs;
    int nBGYOffs;
    BOOL bTileBG;
    BOOL bUseBGCol;
    BOOL bClickToFind;
    double dPreviewZoom = 0.0;

    //New Image

    RECT imgout_szpos = { c_badWindowPosValue };
    COLORREF imgout_bgcol;
    DWORD imgout_border;
    DWORD imgout_zoomindex;
    BOOL bTransPNG;
};

CString RectToStr(RECT in_rect);
RECT StrToRect(CString in_str);

