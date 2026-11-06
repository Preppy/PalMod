#pragma once

#include "PNGfiles.h"

enum class TextureSourceFileType
{
    PNG,
    RAW,
    CImage,
};

constexpr auto PaletteBox_MinimumRect = 1;
constexpr auto PaletteBox_MaxmiumRect = 48;

constexpr auto PaletteBox_MinimumPerLine = 1;
constexpr auto PaletteBox_MaxmiumPerLine = 256;

struct PaletteBoxSettings
{
    uint8_t nRectSize = 5;
    uint16_t nWidthInBoxes = 16;
    sImageDisplayOffsets offsets;
};

uint8_t BoundPaletteBoxRectSizeValue(uint8_t nVal);
uint16_t BoundPaletteBoxPerLineValue(uint16_t nVal);

class CPreviewImportManager : public CDialog
{
public:
    DECLARE_DYNAMIC(CPreviewImportManager)

    CPreviewImportManager(CWnd* pParent = nullptr);
    ~CPreviewImportManager();

    BOOL OnInitDialog();
    afx_msg void OnUpdateCombobox_HW();
    afx_msg void OnUpdateCombobox_Layer();
    afx_msg void OnUpdateCombobox_Read();
    afx_msg void OnUpdateCombobox_Composition();
    afx_msg void OnUpdateCombobox_Merge();

    afx_msg void OnAlignToBottomCheckChange();
    afx_msg void OnAutoPreviewCheckChange();
    afx_msg void OnTrimCheckChange();
    afx_msg void OnDrawPalBoxesCheckChange();

    afx_msg void OnUpdatePaddingValues();
    afx_msg void OnSpinPaddingWidth(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnSpinPaddingHeight(NMHDR* pNMHDR, LRESULT* pResult);

    afx_msg void OnUpdatePalBoxesRect();
    afx_msg void OnSpinPalBoxesRect(NMHDR* pNMHDR, LRESULT* pResult);

    afx_msg void OnUpdatePalBoxesPerLine();
    afx_msg void OnSpinPalBoxesPerLine(NMHDR* pNMHDR, LRESULT* pResult);

    afx_msg void OnUpdatePalBoxesOffsets();
    afx_msg void OnSpinPalBoxesWidth(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnSpinPalBoxesHeight(NMHDR* pNMHDR, LRESULT* pResult);

    afx_msg void LoadAndWorkWithOriginalTextures();
    bool LoadFromFile();

    afx_msg void OnLoadFromFile();
    afx_msg void UpdateDisplayedPreview();

    bool LoadCustomSpriteFromPath(LPCWSTR pszPath, PNGImportSpecialOptions importOptions = {});

    void SetTargetLayer(std::optional<int> optTargetLayer);

    void SetShouldShowUI(bool fShouldShowUI) { m_fShouldShowUI = m_fShouldShowUI || fShouldShowUI; };

    bool ImportNow();

    void SetTextureToUse(sTextureData newTexture);

    void SetTextureSourceType(TextureSourceFileType textureType) { m_textureSourceType = textureType; };

protected:
    enum { IDD = IDD_PREVIEWIMPORT_DIALOG };

    DECLARE_MESSAGE_MAP()

    virtual void DoDataExchange(CDataExchange* pDX);
    virtual void OnOK();
    afx_msg void OnCancel();

    void _CacheCurrentWindowPos();

    void _CacheOriginalLayout();
    std::optional<int> _GetCurrentLayerSelectionFromUI();
    int _GetCurrentLayerSelectionForCListBox();

    void _ResetDisplayToOriginalTextures();
    void _ResetToWorkingTextures();
    
    bool _CompositeToDisplay(bool& fHaveAnyPaletteMatches, std::optional<sImageDimensions>& optTrimmedDimensions);

    void _SyncEnabledControls();

    void _UpdateInfoText();
    void _UpdateDimensionsOptions();

    CImgDisp* m_pImgDisp = nullptr;

    CListBox m_lbDimensionOptions;
    std::vector<sImageDimensions> m_rgDimensionOptionsList;

    CListBox m_lbLayerOptions;
    std::optional<int> m_optCurrentSel_Layer;
    std::optional<bool> m_optPaletteTargetsAreMappingSafe;

    CListBox m_lbReadOptions;
    CListBox m_lbCompositionOptions;
    CListBox m_lbMergeOptions;

    // Original is on load.  This gets restored on cancel
    std::vector<sTextureData> m_rgOriginalTextures;
    // Working is as we move along.  Source from original and then
    // updated as we load new previews and/or swap layer targets
    std::vector<sTextureData> m_rgUserConfirmedTextures;
    // Last drawn to screen pre-boxes
    std::vector<sTextureData> m_rgWorkingTexturesNoBoxes;

    // This is our composed data pre slicing
    sTextureData m_rgTextureLoadedFromFile;

    bool m_fHaveChangedPreview = false;

    std::vector<std::vector<COLORREF>> m_rgrgPaletteSet;
    PALWriteOutputOptions m_currTransparencyWriteMode = PALWriteOutputOptions::WRITE_MAX;

    RGBAImportMathQuirk m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;

    int m_nCurrentSel_Dimensions = 0;

    CString m_strPaddingOffsets_Width = L"0";
    CString m_strPaddingOffsets_Height = L"0";

    CString m_strPalBoxes_Rect = L"5";
    CString m_strPalBoxes_PerLine = L"16";
    CString m_strPalBoxesOffset_Width = L"0";
    CString m_strPalBoxesOffset_Height = L"0";

    sSpriteImportOptions m_importOptions;
    TextureSourceFileType m_textureSourceType = TextureSourceFileType::RAW;

    PaletteBoxSettings m_paletteBoxSettings;

    HICON m_hIcon;

    BOOL m_fAlignToBottom = TRUE;
    BOOL m_fAutoPreview = TRUE;
    BOOL m_fDrawPaletteBoxes = TRUE;
    BOOL m_fKeepChangesOnLayerSwap = FALSE;
    BOOL m_fKeepChangesOnFileLoad = FALSE;
    BOOL m_fTrim = TRUE;

    bool m_fShouldShowUI = false;
    bool m_fUIIsUp = false;
    bool m_fBusyComposing = false;
};

namespace PreviewImport
{
    bool LoadCustomSpriteFromPath(LPCWSTR pszPath, bool fShowAdvancedOptions);
    bool LoadExternalPreviewQuietly(TextureSourceFileType allowedType, int nTargetLayer, LPCWSTR pszPath);
    void OnLoadCustomSprite(std::optional<int> optSuggestedLayerToLoadTo,
                                   bool fMustShowAdvancedOptions = false);
};
