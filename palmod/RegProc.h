#pragma once

#include <array>

enum class eRegistryStoreID
{
    REG_MAIN,        // 0
    REG_PREV,        // 1
    REG_IMGOUT,      // 2
    REG_UNKNOWN = 255,
};

#define BGBMPFILE L"bgbmp.bmp"
constexpr auto c_badWindowPosValue = -512;

constexpr auto c_mainDefaultAllowAlphaChanges = FALSE;
constexpr auto c_mainDefaultShowAs32 = FALSE;
constexpr auto c_mainDefaultProcSupp = TRUE;
constexpr auto c_mainDefaultExtraCopyData = FALSE;
constexpr auto c_AppRegistryRoot = L"Software\\knarxed\\PalMod";

class CPalModZoom
{
private:
    static const std::array<double, 6> m_nZoomSizes;

public:
    static void IncrementZoom(double *fpPreviousZoom);
    static void DecrementZoom(double *fpPreviousZoom);

    static double GetMaximumZoomFactor() { return m_nZoomSizes[m_nZoomSizes.size() - 1]; };
    static double GetValueAt(uint32_t nIndex) { return m_nZoomSizes[nIndex]; };
    static size_t GetZoomListSize() { return m_nZoomSizes.size(); };
};

class CRegProc
{
public:
    CRegProc(eRegistryStoreID nSrcType = eRegistryStoreID::REG_UNKNOWN);
    ~CRegProc();

    void LoadReg(eRegistryStoreID src);
    void SaveReg(eRegistryStoreID src);

    static void SetAlphaModeForUnknownGame(AlphaMode alphaMode);
    static void SetColorModeForUnknownGame(ColMode colorMode);
    static void SetMaxWriteForUnknownGame(PALWriteOutputOptions maxWrite);
    static void SetColorsPerLine(DWORD dwColors);
    static AlphaMode GetAlphaModeForUnknownGame();
    static ColMode GetColorModeForUnknownGame();
    static PALWriteOutputOptions GetMaxWriteForUnknownGame();
    static uint16_t GetColorsPerLine();
    static uint16_t GetMaxColorsPerPageOverride();
    static uint16_t GetMaxPalettePageSize();
    static DWORD dwColorsPerLine;
    static bool ShouldForcePeerPreviewWindow();

    static DWORD GetOFNIndexForPaletteExport(bool fUsingBBCFOptions);
    static void StoreOFNIndexForPaletteExport(bool fUsingBBCFOptions, DWORD nPreferredIndex);

    static DWORD GetOFNIndexForImageExport();
    static void StoreOFNIndexForImageExport(DWORD nPreferredIndex);    

    static int GetUserSavePaletteToMemoryPreference();
    static void SetUserSavePaletteToMemoryPreference(int nPreference);

    static int GetImageAmountForPalettePreview(int nMaxAmount);
    static void SetImageAmountForPalettePreview(int nMaxAmount, int nPreferredAmount);

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
    BOOL prev_blinkinverts;

    wchar_t szPrevBGLoc[MAX_PATH];
    int nBGXOffs;
    int nBGYOffs;
    BOOL fTileBG;
    BOOL fUseBGCol;
    BOOL fClickToFind;
    double dPreviewZoom = 0.0;
    BlendMode eBlendMode = BlendMode::Default;

    //New Image

    RECT imgout_szpos = { c_badWindowPosValue };
    COLORREF imgout_bgcol;
    DWORD imgout_border;
    DWORD imgout_zoomindex;
    BOOL fTransPNG;
};

CString RectToStr(RECT in_rect);
RECT StrToRect(CString in_str);
