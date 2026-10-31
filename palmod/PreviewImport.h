#pragma once

enum class TextureSourceFileType
{
    PNG,
    RAW,
    CImage,
};

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

    afx_msg void OnTrimCheckChange();
    afx_msg void OnAutoPreviewCheckChange();

    afx_msg void OnUpdatePaddingValues();

    afx_msg void OnSpinPaddingWidth(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnSpinPaddingHeight(NMHDR* pNMHDR, LRESULT* pResult);

    afx_msg void OnCancel();

    void _ResetToOriginalTextures();
    void _ResetToWorkingTextures();

    afx_msg void ShowOriginal();
    bool LoadFromFile();

    void _UpdateInfoText();
    void _UpdateDimensionsOptions();

    afx_msg void OnLoadFromFile();
    afx_msg void UpdateDisplayedPreview();

    bool LoadCustomSpriteFromPath(LPCWSTR pszPath, PNGImportSpecialOptions importOptions = {});

    void SetTargetLayer(std::optional<int> optTargetLayer);

    void SetShouldShowUI(bool fShouldShowUI) { m_fShouldShowUI = m_fShouldShowUI || fShouldShowUI; };

    bool ImportNow();

    void SetTextureToUse(sTextureData newTexture);

    enum { IDD = IDD_PREVIEWIMPORT_DIALOG };

    int m_nCurrentSel_HW = 0;

    CString m_strTrimWidth = L"0";
    CString m_strTrimHeight = L"0";

    void SetTextureSourceType(TextureSourceFileType textureType) { m_textureSourceType = textureType; };

    sSpriteImportOptions m_importOptions;
    TextureSourceFileType m_textureSourceType = TextureSourceFileType::RAW;

protected:
    virtual void DoDataExchange(CDataExchange* pDX);
    virtual void OnOK();

    void _UpdatePaddingEnableState();
    void _CacheCurrentlyDisplayedLayout();
    std::optional<int> _GetCurrentLayerSelectionFromUI();
    int _GetCurrentLayerSelectionForCListBox();

    DECLARE_MESSAGE_MAP()

    CImgDisp* m_pImgDisp = nullptr;

    CListBox m_lbHWOptions;
    std::vector<sImageDimensions> m_rgHWOptionsList;

    CListBox m_lbLayerOptions;
    std::optional<int> m_optCurrentSel_Layer;
    std::optional<bool> m_optPaletteTargetsAreMappingSafe;

    CListBox m_lbReadOptions;
    CListBox m_lbCompositionOptions;

    // Original is on load.  This gets restored on cancel
    std::vector<sTextureData> m_rgOriginalTextures;
    bool m_fHaveChangedPreview = false;

    std::vector<std::vector<COLORREF>> m_rgrgPaletteSet;
    PALWriteOutputOptions m_currTransparencyWriteMode = PALWriteOutputOptions::WRITE_MAX;

    // Working is as we move along
    std::vector<sTextureData> m_rgWorkingTextures;

    sTextureData m_rgTextureLoadedFromFile;
    RGBAImportMathQuirk m_rgbaMathQuirkInUse = RGBAImportMathQuirk::None;

    HICON m_hIcon;
    BOOL m_fAutoPreview = TRUE;
    BOOL m_fKeepChangesOnLayerSwap = FALSE;
    BOOL m_fKeepChangesOnFileLoad = FALSE;
    BOOL m_fTrim = TRUE;

    bool m_fShouldShowUI = false;
    bool m_fUIIsUp = false;
};

namespace PreviewImport
{
    bool LoadCustomSpriteFromPath(LPCWSTR pszPath, bool fShowAdvancedOptions);
    bool LoadExternalPreviewQuietly(TextureSourceFileType allowedType, int nTargetLayer, LPCWSTR pszPath);
    void OnLoadCustomSprite(std::optional<int> optSuggestedLayerToLoadTo,
                                   bool fMustShowAdvancedOptions = false);
};
