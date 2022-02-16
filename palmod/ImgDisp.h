#pragma once
#include "game\Default.h"
#include "game\palgroup.h"

#define aadd(x, y) ((x)+(y) > 255 ? 255 : (x)+(y))
#define fabs(x) (x < 0.0f ? -x : x)
//Notes

//Main bitmap is not cleared on destroy

//#define SETIMGPOS
constexpr auto SETIMGINDEX = 1;

#define IMGDISP_CLASSNAME L"CImgDisp"

#define DEF_ZOOM 1.0f

struct sImgIndex
{
    UINT32* pIndexAmt = nullptr;
    POINT** ppIndexes = nullptr;
};

struct sImgNode
{
    UINT16 uImgW = 0;
    UINT16 uImgH = 0;

    int nXOffs = 0;
    int nYOffs = 0;

    UINT8* pImgData = nullptr;

    int uPalSz = 0;
    COLORREF* pPalette = nullptr;
    COLORREF* pBlinkPalette = nullptr;
};

enum class SpriteImportDirection { TopDown, UpsideDown };

// CImgDisp

class CImgDisp : public CWnd
{
private:
    sImgNode* m_pImgBuffer[MAX_IMAGES_DISPLAYABLE] = {};
    int m_nImgAmt = 0;

    CDC* m_MainDC = nullptr;
    CDC* m_ImageDC = nullptr;

    CBitmap m_BGBitmap;
    HBITMAP m_hBGBitmap = nullptr;
    CBrush m_BGBrush;

    BITMAPINFO m_Bmpi;
    HBITMAP m_hBmp = nullptr;

    RECT m_rBlt = {};

    UINT32* m_pBmpData = nullptr;

    int m_nBGBmpW = 0;
    int m_nBGBmpH = 0;
    int m_nBGXOffs = 0;
    int m_nBGYOffs = 0;

    BOOL m_fIsBGAvail = FALSE;
    //BOOL m_fFillBGBmp = FALSE;
    BOOL m_fShouldTileBGBmp = FALSE;
    BOOL m_fShouldUseBGCol = FALSE;
    BOOL m_fNeedFirstInit = TRUE;
    BOOL m_fClickToFindColor = TRUE;

    COLORREF m_crBGCol = 0x00FF0000;
    COLORREF m_crBlinkCol = 0x00FFFFFF;
    double m_fpZoom = DEF_ZOOM;

    void InitDC(CPaintDC& PaintDC);
    void DrawMainBG();
    void InitImgBuffer();

    //void CreateImgBitmap(int nIndex, int nWidth, int nHeight);
    void ResizeMainBitmap();

    void ModifySrcRect();
    void ModifyClRect();

    BOOL CustomBlt(int nSrcIndex, int x, int y, bool fUseBlinkPal = false);

    CScrollBar m_HScroll;
    CScrollBar m_VScroll;

    BOOL m_bLButtonDown = FALSE;
    BOOL m_bCtrlDown = FALSE;

    double m_fpPrevX = 0.0, m_fpPrevY = 0.0;
    double m_fpDiffX = 0.0, m_fpDiffY = 0.0;

    CRect m_rCtrlRct;
    CRect m_rCtrlSrcRct;
    CRect m_rSrcRct;
    CRect m_rImgRct;

    int m_nImgRctW = 0;
    int m_nImgRctH = 0;

    UINT8 m_bUsed[MAX_IMAGES_DISPLAYABLE] = {};

    POINT m_ptOffs[MAX_IMAGES_DISPLAYABLE] = {};
    
    CString m_strBackgroundLoc = L"";

    int m_nXOffsTop = 0;
    int m_nYOffsTop = 0;

    int MAIN_W = 0, MAIN_H = 0;

    // This should be converted over to an sImageNode probably...
    UINT8* m_ppSpriteOverrideTexture[MAX_IMAGES_DISPLAYABLE] = { nullptr };
    int m_nTextureOverrideW[MAX_IMAGES_DISPLAYABLE] = { 0 };
    int m_nTextureOverrideH[MAX_IMAGES_DISPLAYABLE] = { 0 };

    sPalDef* m_pBackupPaletteDef = nullptr;
    COLORREF* m_pBackupBlinkPalette = nullptr;

public:
    CImgDisp();
    ~CImgDisp();

    void AddImageNode(int nIndex, UINT16 uImgW, UINT16 uImgH, UINT8* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs);
    void FlushImageNode(int nIndex);
    void ClearAllImages();
    void UpdateCtrl(BOOL fRedraw = TRUE, int nUseBlinkPal = 0);
    void Redraw();
    void SetBGCol(COLORREF crNewCol) { m_crBGCol = crNewCol; };
    void SetBlinkCol(COLORREF crNewCol) { m_crBlinkCol = crNewCol; };
    COLORREF GetBGCol() { return m_crBGCol; };
    COLORREF GetBlinkCol() { return m_crBlinkCol; };
    void CenterImg() { ModifySrcRect(); };

    void SetBlinkPalette(int nIndex, COLORREF* pBlinkPalette);

    BOOL IsBGTiled() { return m_fShouldTileBGBmp; };
    BOOL IsUsingBGCol() { return m_fShouldUseBGCol; };
    void SetBGXOffs(int nOffs) { m_nBGXOffs = nOffs; };
    void SetBGYOffs(int nOffs) { m_nBGYOffs = nOffs; };
    void SetBGTiled(BOOL fTiled) { m_fShouldTileBGBmp = fTiled; };
    void SetUseBGCol(BOOL fUse) { m_fShouldUseBGCol = fUse; };
    void SetClickToFindColorSetting(BOOL fClickToFind) { m_fClickToFindColor = fClickToFind; };
    BOOL GetClickToFindColorSetting() { return m_fClickToFindColor; };
    BOOL CanForceBGBitmapAvailable();

    int GetBGXOffs() { return m_nBGXOffs; };
    int GetBGYOffs() { return m_nBGYOffs; };

    sImgNode** GetImgBuffer() { return m_pImgBuffer; };
    // Note that we only check for the 0 sprite: export keys off of that.
    bool HaveImageData() { return m_pImgBuffer[0] && m_pImgBuffer[0]->pImgData; };
    CRect GetImgRct() { return m_rImgRct; }; // currently unused: commented out in imgdumpbmp.cpp

    void UpdateImgPalette(int nIndex, COLORREF* pPalette, int nPalSz);

    bool LoadExternalRAWSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, WCHAR* pszTextureLocation);
    void AssignBackupPalette(sPalDef* pBackupPaletteDef);
    bool DoWeHaveImageForIndex(int nIndex);
    
    void SetZoom(double fpNewZoom)
    {
        m_fpZoom = fpNewZoom;
        ModifySrcRect();
        Redraw();
    };

    double GetZoom() { return m_fpZoom; };

    BOOL LoadBGBmp(LPCWSTR pszBmpLoc);
    void SetBGBmpPath(LPCWSTR pszBmpLoc) { m_strBackgroundLoc = pszBmpLoc; };
    //void UseBGCol(){bFillBGBmp = FALSE;};

    int GetImgAmt() { return m_nImgAmt; };

    void ClearUsed();
    // Eliminates all unused buffers and resets for new display
    void FlushUnused();

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
