#pragma once
#include "game\Default.h"
#include "game\palgroup.h"
#include "regproc.h"

#define aadd(x, y) ((x)+(y) > 255 ? 255 : (x)+(y))
#define fabs(x) (x < 0.0f ? -x : x)

//#define SETIMGPOS
constexpr auto SETIMGINDEX = 1;

constexpr auto IMGDISP_CLASSNAME = L"CImgDisp";

constexpr auto DEF_ZOOM = 1.0f;

struct sImgNode
{
    sImageDimensions dimensions;
    sImageDisplayOffsets offsets;

    uint8_t* pImgData = nullptr;

    uint16_t uPalSz = 0;
    COLORREF* pPalette = nullptr;
    COLORREF* pBlinkPalette = nullptr;

    BlendMode eBlendMode = BlendMode::Alpha;
};

enum class SpriteImportDirection { TopDown, UpsideDown, FlipHorizontal };
enum class SpriteImportCompositionStyle { Replace, MergeAbove, MergeBelow };

struct PNGImportSpecialOptions
{
    bool fReversedColorTable = false;
    bool fForceNonIndexed = false;
    bool fColorTableStartsAtOne = true;
};

// CImgDisp

class CImgDisp : public CWnd
{
private:
    CDC* m_MainDC = nullptr;
    CDC* m_ImageDC = nullptr;

    CScrollBar m_HScroll;
    CScrollBar m_VScroll;

    BITMAPINFO m_Bmpi;
    HBITMAP m_hBmp = nullptr;

    sImgNode* m_pImgBuffer[MAX_IMAGES_DISPLAYABLE] = {};
    int m_nImgAmt = 0;

    RECT m_rBlt = {};

    uint32_t* m_pBmpData = nullptr;

    sImageDimensions m_PreviewDimensions;
    sImageDimensions m_MainLayout;
    sImageDisplayOffsets m_ImageOffsets;

    uint8_t m_bUsed[MAX_IMAGES_DISPLAYABLE] = {};
    POINT m_ptOffs[MAX_IMAGES_DISPLAYABLE] = {};

    BOOL m_fIsBGAvail = FALSE;
    CBitmap m_BGBitmap;
    sImageDimensions m_BGBmpDimensions;
    HBITMAP m_hBGBitmap = nullptr;
    CBrush m_BGBrush;

    BOOL m_bLButtonDown = FALSE;
    BOOL m_bCtrlDown = FALSE;
    CPoint m_ptMouseDown = { 0, 0 }, m_ptLastMouse = { 0, 0 };

    sPoint m_fpDiffs;

    CRect m_rViewportRct;
    CRect m_rCtrlSrcRct;
    CRect m_rSrcRct;
    CRect m_rImgRct;

    // This should be converted over to an sImageNode probably...
    std::array<sTextureData, MAX_IMAGES_DISPLAYABLE> m_vSpriteOverrideTextures;

    sPalDef* m_pBackupPaletteDef = nullptr;
    COLORREF* m_pBackupBlinkPalette = nullptr;

    void InitDC(CPaintDC& PaintDC);
    void DrawMainBG();
    void InitImgBuffer();

    void _ResizeMainBitmap();

    void ModifySrcRect();
    void ModifyClRect();

    BOOL CustomBlt(int nSrcIndex, int x, int y, bool fUseBlinkPal = false);

    void _ResizeAndBlankCustomPreviews(UINT* pnLayerToLoadTo, size_t nNewSize);

    void _CompositeTexture(std::vector<uint8_t> vNewOverrideTexture, UINT nLayerToLoadTo, int nSuggestedWidth, int nSuggestedHeight, SpriteImportDirection direction, SpriteImportCompositionStyle compositionStyle);
    void _UpdatePreviewForExternalSprite(UINT* pnLayerToLoadTo);

    void _FlipImageDataIfNeeded(SpriteImportDirection direction, std::vector<uint8_t>& vImageData, int nWidth, int nHeight);

    void _ImportAndSplitSpriteComposition(SpriteImportDirection direction, UINT* pnLayerToLoadTo, unsigned char* pImageData, unsigned width, unsigned height,
                                            size_t nImagePalSize, bool fReverseColorTable = false, bool fColorTableStartsAtOne = true, SpriteImportCompositionStyle compositionStyle = SpriteImportCompositionStyle::Replace);
    void _ImportAndSplitRGBSpriteComposition(SpriteImportDirection direction, SpriteImportCompositionStyle compositionStyle, UINT* pnLayerToLoadTo, unsigned char* pImageData, unsigned width, unsigned height, size_t nImageSize);

    void _UpdateCompositionDisplayRect(UINT nLayer, sImageDimensions dimensions, bool fForceThisAsBackmostLayer = false);
    void _TrimLoadedCustomImages(bool fIsFullStackReplacement);
    void _ResizeImageStack(bool fIsFullStackReplacement);
    void _AdjustLayoutForNewlyLoadedImage();

    std::vector<uint8_t> _LoadTextureFromCImageSprite(LPCWSTR pszTextureLocation, UINT& nLayerToLoadTo, sImageDimensions& suggestedImageSize, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, bool fShowAdvancedOptions = false);

    bool _GetDropLayerFromFileName(const std::wstring& strFileName, UINT& iLayerToDropTo);
    bool _SanitizeRequestedImageLayer(UINT* pnLayerToLoadTo, UINT& nConfirmedLayerToLoadTo);

    bool _LoadExternalCImageSprite(UINT* pnLayerToLoadTo, SpriteImportDirection direction, LPCWSTR pszTextureLocation, bool fShowAdvancedOptionsIfNeeded = true);
    // PNG Sprite import uniquely uses a pointer for layer placement since it can replace the full layer stack
    // A null pointer passed in indicates to us to replace the full stack: a pointer of value 0 means just the first layer.
    bool _LoadExternalPNGSprite(UINT* pnLayerToLoadTo, SpriteImportDirection direction, LPCWSTR pszTextureLocation, bool fShowAdvancedOptionsIfNeeded = true, PNGImportSpecialOptions importOptions = {});
    bool _LoadExternalRAWSprite(UINT* pnLayerToLoadTo, SpriteImportDirection direction, LPCWSTR pszTextureLocation, bool fMustShowAdvancedOptions = true);

public:
    CImgDisp();
    ~CImgDisp();
    
    sPreviewWindowSettings m_Settings;

    void AddImageNode(int nIndex, int uImgW, int uImgH, uint8_t* pImgData, COLORREF* pPalette, uint16_t uPalSz, int nXOffs, int nYOffs, BlendMode eBlendMode = BlendMode::Alpha);
    void FlushImageNode(int nIndex);
    void ClearAllImages();
    void UpdateCtrl(BOOL fRedraw = TRUE, int nUseBlinkPal = 0);
    void Redraw();
    void SetBGCol(COLORREF crNewCol) { m_Settings.prev_bgcol = crNewCol; };
    void SetBlinkCol(COLORREF crNewCol) { m_Settings.prev_blinkcol = crNewCol; };
    void SetBlinkInverts(BOOL fBlinkInverts) { m_Settings.fBlinkInverts = fBlinkInverts; };
    COLORREF GetBGCol() const { return m_Settings.prev_bgcol; };
    COLORREF GetBlinkCol() const { return m_Settings.prev_blinkcol; };
    BOOL GetBlinkInverts() const { return m_Settings.fBlinkInverts; };
    void CenterImg() { ModifySrcRect(); };

    void SetBlinkPalette(int nIndex, COLORREF* pBlinkPalette);

    BlendMode GetForcedBlendMode() const { return m_Settings.eBlendMode; };
    void SetForcedBlendMode(BlendMode newMode) { m_Settings.eBlendMode = newMode; };

    BOOL IsBGTiled() const { return m_Settings.fTileBG; };
    BOOL IsUsingBGCol() const { return m_Settings.fUseBGCol; };
    BOOL IsUsingBlinkInverts() { return m_Settings.fBlinkInverts; };
    void SetBGXOffs(int nOffs) { m_Settings.nBGBMPOffsets.x = nOffs; };
    void SetBGYOffs(int nOffs) { m_Settings.nBGBMPOffsets.y = nOffs; };
    void SetBGTiled(BOOL fTiled) { m_Settings.fTileBG = fTiled; };
    void SetUseBGCol(BOOL fUse) { m_Settings.fUseBGCol = fUse; };
    void SetClickToFindColorSetting(BOOL fClickToFindColor) { m_Settings.fClickToFindColor = fClickToFindColor; };
    BOOL GetClickToFindColorSetting() const { return m_Settings.fClickToFindColor; };
    void SetAllowAutoPreviewFallback(BOOL fAllowAutoPreviewFallback) { m_Settings.fAllowAutoPreviewFallback = fAllowAutoPreviewFallback; };
    BOOL GetAllowAutoPreviewFallback() const { return m_Settings.fAllowAutoPreviewFallback; };
    // This is turned off at the caller level (see comments there).  The initial thought was "just for BBCF".
    // If we wanted to go further we'd want to establish some UI on this.  But per comments, probably a 
    // flawed idea.  It's now updated to work for MCI, but we're pending feedback on implementation 
    // so leave it off for now
    BOOL CanForceBGBitmapAvailable();
    BOOL GetPreviewDropIsPalette() const { return m_Settings.fPreviewDropIsPalette; };
    void SetDropIsPalette(BOOL fPreviewDropIsPalette) { m_Settings.fPreviewDropIsPalette = fPreviewDropIsPalette; };
    BOOL GetTrimImportedPreviews() const { return m_Settings.fPreviewTrimImportedPreviews; };
    void SetTrimImportedPreviews(BOOL fPreviewDropTrim) { m_Settings.fPreviewTrimImportedPreviews = fPreviewDropTrim; };
    BOOL GetPreviewImportWinKawaksFirst() const { return m_Settings.fPreviewImportWinKawaksFirst; };
    void SetPreviewImportWinKawaksFirst(BOOL fPreviewImportWinKawaksFirst) { m_Settings.fPreviewImportWinKawaksFirst = fPreviewImportWinKawaksFirst; };
    BOOL GetPreviewImportUseFullCPS3() const { { return m_Settings.fPreviewImportUseFullCPS3; }; };
    void SetPreviewImportUseFullCPS3(BOOL fPreviewImportUseFullCPS3) { m_Settings.fPreviewImportUseFullCPS3 = fPreviewImportUseFullCPS3; };

    int GetBGXOffs() const { return m_Settings.nBGBMPOffsets.x; };
    int GetBGYOffs() const { return m_Settings.nBGBMPOffsets.y; };

    sImgNode** GetImgBuffer() { return m_pImgBuffer; };
    // Note that we only check for the 0 sprite: export keys off of that.
    bool HaveImageData() const { return m_pImgBuffer[0] && m_pImgBuffer[0]->pImgData; };
    CRect GetImgRct() const { return m_rImgRct; }; // currently unused: commented out in imgdumpbmp.cpp

    void UpdateImgPalette(int nIndex, COLORREF* pPalette, uint16_t nPalSz);

    enum class ImageLoadType
    {
        PNG,
        RAW,
        CImage,
    };

    bool LoadExternalPreview(ImageLoadType iType, UINT* pnLayerToLoadTo, SpriteImportDirection direction, LPCWSTR pszTextureLocation, bool fShowAdvancedOptionsIfNeeded = true, PNGImportSpecialOptions importOptions = {});

    void AssignBackupPalette(sPalDef* pBackupPaletteDef);
    bool DoWeHaveImageForIndex(int nIndex);
    
    void SetZoom(double fpNewZoom)
    {
        if ((fpNewZoom != 0) &&
            (m_Settings.dPreviewZoom != fpNewZoom))
        {
            m_Settings.dPreviewZoom = fpNewZoom;
            ModifySrcRect();
            Redraw();
        }
    };

    double GetZoom() const { return m_Settings.dPreviewZoom; };

    BOOL LoadBGBmp(LPCWSTR pszBmpLoc);
    void SetBGBmpPath(LPCWSTR pszBmpLoc) { m_Settings.strPreviewBGBMPPath = pszBmpLoc; };
    //void UseBGCol(){bFillBGBmp = FALSE;};

    int GetImgAmt() { return m_nImgAmt; };

    void ResetImageCompositionLayout();
    // Eliminates all unused buffers and resets for new display
    void FlushUnusedAndResize(bool fKeepImageCache);
    void FlushInternalSprites();
    // Just reset custom loaded sprites for this layer
    void ResetCustomSpriteOverride(size_t nLayer);
    // Nuke all layers
    void FlushCustomSpriteOverrides();

protected:
    BOOL RegisterWindowClass();
    DECLARE_MESSAGE_MAP()

public:
    afx_msg void OnPaint();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
};
