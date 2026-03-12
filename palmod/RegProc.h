#pragma once

#include <array>
#include "ColorSystem.h"
#include "Game\GameDef.h"

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
constexpr auto c_strLastUsedGFlag = L"LastUsedGFlag";
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
// Incremented this because we are changing it to ON at this time.
constexpr auto c_prevPreviewDropsArePalettes = L"prev_DropsArePalettes3";
constexpr auto c_prevTrimImportedPreviews = L"prev_DropsTrimPreview";
constexpr auto c_prevPreviewImportsKawaksFirst = L"prev_DropsTryKawaksFirst";
constexpr auto c_prevPreviewImportsUseFullCPS3 = L"prev_ImportsUseFullCPS3";
constexpr auto c_prevAllowAutoPreviewFallback = L"prev_AllowAutoPreviewFallback";
constexpr auto c_mainDefaultRemapFileTypeStr = L"main_RemapFileType";
constexpr auto c_mainDefaultColorTransformStr = L"main_ColorTransformType";

struct sPreviewWindowSettings
{
    COLORREF prev_bgcol = 0x00D0D0D0;
    COLORREF prev_blinkcol = 0x00FFFFFF;

    CString strPreviewBGBMPPath;
    sImageDisplayOffsets nBGBMPOffsets;

    BOOL fTileBG = FALSE;
    BOOL fUseBGCol = FALSE;
    BOOL fClickToFindColor = TRUE;
    BOOL fBlinkInverts = FALSE;
    BOOL fPreviewDropIsPalette = FALSE;
    BOOL fPreviewTrimImportedPreviews = TRUE;
    BOOL fPreviewImportWinKawaksFirst = FALSE;
    BOOL fPreviewImportUseFullCPS3 = FALSE;
    BOOL fAllowAutoPreviewFallback = TRUE;

    double dPreviewZoom = 0.0;
    BlendMode eBlendMode = BlendMode::Default;
};

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
private:
    static DWORD GetDWORDValueForKeyName(LPCWSTR pszKeyName, DWORD dwFallbackValue = 0);
    static void StoreDWORDValueForKeyName(LPCWSTR pszKeyName, DWORD nPreferredIndex);

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
    static void SetForcePeerPreviewWindow(BOOL fForcePeer);
    static BOOL ShouldForcePeerPreviewWindow();

    static DWORD GetOFNIndexForPaletteExport(bool fUsingBBCFOptions) { return GetDWORDValueForKeyName(fUsingBBCFOptions ? c_exportBBCFOFNValueName : c_exportOFNValueName); };
    static void StoreOFNIndexForPaletteExport(bool fUsingBBCFOptions, DWORD nPreferredIndex) { StoreDWORDValueForKeyName(fUsingBBCFOptions ? c_exportBBCFOFNValueName : c_exportOFNValueName, nPreferredIndex); };

    static DWORD GetOFNIndexForImageExport() { return GetDWORDValueForKeyName(c_exportImageOFNValueName); };
    static void StoreOFNIndexForImageExport(DWORD nPreferredIndex) { StoreDWORDValueForKeyName(c_exportImageOFNValueName, nPreferredIndex); };

    static DWORD GetOFNIndexForLoadCustomSprite() { return GetDWORDValueForKeyName(c_LoadCustomSpriteOFNValueName); };
    static void StoreOFNIndexForLoadCustomSprite(DWORD nPreferredIndex) { StoreDWORDValueForKeyName(c_LoadCustomSpriteOFNValueName, nPreferredIndex); };

    static DWORD GetDefaultColorTransform(DWORD dwFallbackValue = 0) { return GetDWORDValueForKeyName(c_mainDefaultColorTransformStr, dwFallbackValue); };
    static void SetDefaultColorTransform(DWORD dwDefault) { StoreDWORDValueForKeyName(c_mainDefaultColorTransformStr, dwDefault); };

    static DWORD GetDefaultRemapFiletype() { return GetDWORDValueForKeyName(c_mainDefaultRemapFileTypeStr); };
    static void SetDefaultRemapFiletype(DWORD dwDefault) { StoreDWORDValueForKeyName(c_mainDefaultRemapFileTypeStr, dwDefault); };

    static int GetUserSavePaletteToMemoryPreference();
    static void SetUserSavePaletteToMemoryPreference(int nPreference);

    static int GetImageAmountForPalettePreview(int nMaxAmount);
    static void SetImageAmountForPalettePreview(int nMaxAmount, int nPreferredAmount);

    static void SetExtraFileLoadingCanary(LPCWSTR pszExtraFileName, DWORD nExtraFileSize);
    static bool WasExtraFileCanaryKilledLastTime(LPCWSTR pszExtraFileName, DWORD nExtraFileSize);
    static void ClearExtraFileLoadingCanary(LPCWSTR pszExtraFileName);

    static void GetLastUsedGameFlag(SupportedGamesList& nGameFlag);

    static bool UserIsOnWINE();

    //Main

    RECT main_szpos = { c_badWindowPosValue };

    BOOL main_fAllowAlphaChanges = c_mainDefaultAllowAlphaChanges;
    BOOL main_bShow32 = c_mainDefaultShowAs32;
    BOOL main_bProcSupp = c_mainDefaultProcSupp;
    BOOL main_bExtraCopyData = c_mainDefaultExtraCopyData;

    //Preview
    RECT prev_szpos = { c_badWindowPosValue };
    sPreviewWindowSettings m_PreviewSettings;

    //New Image
    RECT imgout_szpos = { c_badWindowPosValue };
    // these values are all ignored and set during lookup
    COLORREF imgout_bgcol = 0;
    DWORD imgout_border = 0;
    DWORD imgout_zoomindex = 0;
    BOOL fTransPNG = TRUE;
    BOOL fExportPNGAsJoined = TRUE;
};

CString RectToStr(RECT in_rect);
RECT StrToRect(CString in_str);
