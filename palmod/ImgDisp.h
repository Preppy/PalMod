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

    sImageDimensions m_ImgDimensions;
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

    CRect m_rCtrlRct;
    CRect m_rCtrlSrcRct;
    CRect m_rSrcRct;
    CRect m_rImgRct;

    // This should be converted over to an sImageNode probably...
    uint8_t* m_ppSpriteOverrideTexture[MAX_IMAGES_DISPLAYABLE] = { nullptr };
    sImageDimensions m_rgSpriteOverrideDimensions[MAX_IMAGES_DISPLAYABLE];

    sPalDef* m_pBackupPaletteDef = nullptr;
    COLORREF* m_pBackupBlinkPalette = nullptr;

    void InitDC(CPaintDC& PaintDC);
    void DrawMainBG();
    void InitImgBuffer();

    void ResizeMainBitmap();

    void ModifySrcRect();
    void ModifyClRect();

    BOOL CustomBlt(int nSrcIndex, int x, int y, bool fUseBlinkPal = false);

    bool _GetUserOptionsForTextureOverride(int nFileSize, int& nSuggestedImageWidth, int& nSuggestedImageHeight, UINT& nPositionToLoadTo, SpriteImportDirection& spriteDirection, SpriteImportCompositionStyle *pCompositionStyle);
    void _ResizeAndBlankCustomPreviews(UINT* pnPositionToLoadTo, size_t nNewSize);

    void _CompositeTexture(uint8_t* pNewOverrideTexture, UINT nPositionToLoadTo, int nSuggestedHeight, int nSuggestedWidth, SpriteImportDirection direction, SpriteImportCompositionStyle compositionStyle);
    void _UpdatePreviewForExternalSprite(UINT* pnPositionToLoadTo);

    void _FlipImageDataIfNeeded(SpriteImportDirection direction, uint8_t*& pImageData, int nWidth, int nHeight);

    void _ImportAndSplitSpriteComposition(SpriteImportDirection direction, UINT* pnPositionToLoadTo, unsigned char* pImageData, unsigned width, unsigned height, size_t nImagePalSize);
    void _ImportAndSplitRGBSpriteComposition(SpriteImportDirection direction, UINT* pnPositionToLoadTo, unsigned char* pImageData, unsigned width, unsigned height, size_t nImageSize);

    uint8_t* _LoadTextureFromCImageSprite(wchar_t* pszTextureLocation, UINT& nPositionToLoadTo, int& nSuggestedHeight, int& nSuggestedWidth, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, bool fPreferQuietMode = true);
    uint8_t* _LoadTextureFromRAWSprite(wchar_t* pszTextureLocation, UINT& nPositionToLoadTo, int& nSuggestedHeight, int& nSuggestedWidth, SpriteImportDirection& direction, SpriteImportCompositionStyle& compositionStyle, bool fUseQuietMode = true);

public:
    CImgDisp();
    ~CImgDisp();
    
    sPreviewWindowSettings m_Settings;

    void AddImageNode(int nIndex, uint16_t uImgW, uint16_t uImgH, uint8_t* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs, BlendMode eBlendMode = BlendMode::Alpha);
    void FlushImageNode(int nIndex);
    void ClearAllImages();
    void UpdateCtrl(BOOL fRedraw = TRUE, int nUseBlinkPal = 0);
    void Redraw();
    void SetBGCol(COLORREF crNewCol) { m_Settings.prev_bgcol = crNewCol; };
    void SetBlinkCol(COLORREF crNewCol) { m_Settings.prev_blinkcol = crNewCol; };
    void SetBlinkInverts(BOOL fBlinkInverts) { m_Settings.fBlinkInverts = fBlinkInverts; };
    COLORREF GetBGCol() { return m_Settings.prev_bgcol; };
    COLORREF GetBlinkCol() { return m_Settings.prev_blinkcol; };
    BOOL GetBlinkInverts() { return m_Settings.fBlinkInverts; };
    void CenterImg() { ModifySrcRect(); };

    void SetBlinkPalette(int nIndex, COLORREF* pBlinkPalette);

    BlendMode GetForcedBlendMode() { return m_Settings.eBlendMode; };
    void SetForcedBlendMode(BlendMode newMode) { m_Settings.eBlendMode = newMode; };

    BOOL IsBGTiled() { return m_Settings.fTileBG; };
    BOOL IsUsingBGCol() { return m_Settings.fUseBGCol; };
    BOOL IsUsingBlinkInverts() { return m_Settings.fBlinkInverts; };
    void SetBGXOffs(int nOffs) { m_Settings.nBGBMPOffsets.x = nOffs; };
    void SetBGYOffs(int nOffs) { m_Settings.nBGBMPOffsets.y = nOffs; };
    void SetBGTiled(BOOL fTiled) { m_Settings.fTileBG = fTiled; };
    void SetUseBGCol(BOOL fUse) { m_Settings.fUseBGCol = fUse; };
    void SetClickToFindColorSetting(BOOL fClickToFindColor) { m_Settings.fClickToFindColor = fClickToFindColor; };
    BOOL GetClickToFindColorSetting() { return m_Settings.fClickToFindColor; };
    BOOL CanForceBGBitmapAvailable();
    BOOL GetPreviewDropIsPalette() { return m_Settings.fPreviewDropIsPalette; };
    void SetDropIsPalette(BOOL fPreviewDropIsPalette) { m_Settings.fPreviewDropIsPalette = fPreviewDropIsPalette; };
    BOOL GetPreviewDropTrim() { return m_Settings.fPreviewDropTrimPreview; };
    void SetPreviewDropTrim(BOOL fPreviewDropTrim) { m_Settings.fPreviewDropTrimPreview = fPreviewDropTrim; };
    BOOL GetPreviewDropWinKawaksFirst() { return m_Settings.fPreviewDropWinKawaksFirst; };
    BOOL GetPreviewDropMAMEMathFirst() { return m_Settings.fPreviewDropMAMEMathFirst; };

    void SetPreviewDropWinKawaksFirst(BOOL fPreviewDropWinKawaksFirst) { m_Settings.fPreviewDropWinKawaksFirst = fPreviewDropWinKawaksFirst; };
    void SetPreviewDropMAMEMathFirst(BOOL fPreviewDropMAMEMathFirst) { m_Settings.fPreviewDropMAMEMathFirst = fPreviewDropMAMEMathFirst; };

    int GetBGXOffs() { return m_Settings.nBGBMPOffsets.x; };
    int GetBGYOffs() { return m_Settings.nBGBMPOffsets.y; };

    sImgNode** GetImgBuffer() { return m_pImgBuffer; };
    // Note that we only check for the 0 sprite: export keys off of that.
    bool HaveImageData() { return m_pImgBuffer[0] && m_pImgBuffer[0]->pImgData; };
    CRect GetImgRct() { return m_rImgRct; }; // currently unused: commented out in imgdumpbmp.cpp

    void UpdateImgPalette(int nIndex, COLORREF* pPalette, int nPalSz);

    bool LoadExternalCImageSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fPreferQuietMode = false);
    // PNG Sprite import uniquely uses a pointer for layer placement since it can replace the full layer stack
    // A null pointer passed in indicates to us to replace the full stack: a pointer of value 0 means just the first layer.
    bool LoadExternalPNGSprite(UINT* pnPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fPreferQuietMode = false);
    bool LoadExternalRAWSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszTextureLocation, bool fPreferQuietMode = false);

    void AssignBackupPalette(sPalDef* pBackupPaletteDef);
    bool DoWeHaveImageForIndex(int nIndex);
    
    void SetZoom(double fpNewZoom)
    {
        if (fpNewZoom != 0)
        {
            m_Settings.dPreviewZoom = fpNewZoom;
            ModifySrcRect();
            Redraw();
        }
    };

    double GetZoom() { return m_Settings.dPreviewZoom; };

    BOOL LoadBGBmp(LPCWSTR pszBmpLoc);
    void SetBGBmpPath(LPCWSTR pszBmpLoc) { m_Settings.strPreviewBGBMPPath = pszBmpLoc; };
    //void UseBGCol(){bFillBGBmp = FALSE;};

    int GetImgAmt() { return m_nImgAmt; };

    void ResetImageCompositionLayout();
    // Eliminates all unused buffers and resets for new display
    void FlushUnused();
    // Just reset custom loaded sprites
    void FlushCustomSpriteOverrides();
    void ResetCustomSpriteOverride(int nPosition);

    void ResetForNewImage();

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
