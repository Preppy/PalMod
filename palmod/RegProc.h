#pragma once

#define REG_MAIN        0
#define REG_PREV        1
#define REG_IMGOUT      2

#define RECT_STRSZ      256

#define BGBMPFILE _T("bgbmp.bmp")
constexpr auto c_badWindowPosValue = -512;

constexpr auto c_mainDefaultGetColor = TRUE;
constexpr auto c_mainDefaultAllowAlphaChanges = FALSE;
constexpr auto c_mainDefaultShowAs32 = FALSE;
constexpr auto c_mainDefaultProcSupp = TRUE;
constexpr auto c_mainDefaultAutoSetCol = TRUE;

constexpr auto c_AppRegistryRoot = _T("Software\\knarxed\\PalMod");

class CRegProc
{
public:
    CRegProc(int nSrcType = -1);
    ~CRegProc(void);

    void LoadReg(int src);
    void SaveReg(int src);

    static void SetColModeForUnknownGame(ColMode colorMode);
    static void SetColorsPerLine(DWORD dwColors);
    static ColMode GetColModeForUnknownGame();
    static UINT16 GetColorsPerLine();
    static UINT16 GetMaxColorsPerPageOverride();
    static UINT16 GetMaxPalettePageSize();
    static DWORD dwColorsPerLine;
    static bool ShouldForcePeerPreviewWindow();

    static int GetUserSavePaletteToMemoryPreference();
    static void SetUserSavePaletteToMemoryPreference(int nPreference);

    //Main

    RECT main_szpos = { c_badWindowPosValue };

    BOOL main_bGetColor = c_mainDefaultGetColor;
    BOOL main_fAllowAlphaChanges = c_mainDefaultAllowAlphaChanges;
    BOOL main_bShow32 = c_mainDefaultShowAs32;
    BOOL main_bProcSupp = c_mainDefaultProcSupp;
    BOOL main_bAutoSetCol = c_mainDefaultAutoSetCol;

    //Preview

    RECT prev_szpos = { c_badWindowPosValue };

    COLORREF prev_bgcol;
    COLORREF prev_blinkcol;

    TCHAR szPrevBGLoc[MAX_PATH];
    int nBGXOffs;
    int nBGYOffs;
    BOOL bTileBG;
    BOOL bUseBGCol;
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

