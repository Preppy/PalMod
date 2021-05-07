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
    COLORREF* pAltPal = nullptr;
};

enum class SpriteImportDirection { TopDown, UpsideDown };

// CImgDisp

class CImgDisp : public CWnd
{
private:
    sImgNode* pImgBuffer[MAX_IMAGES_DISPLAYABLE] = {};
    int nImgAmt = 0;

    CDC* MainDC = nullptr;
    CDC* ImageDC = nullptr;

    CBitmap BGBitmap;
    HBITMAP hBGBitmap = nullptr;
    CBrush BGBrush;

    BITMAPINFO Bmpi;
    HBITMAP hBmp = nullptr;

    RECT rBlt = {};

    UINT32* pBmpData = nullptr;

    int nBGBmpW = 0;
    int nBGBmpH = 0;
    int nBGXOffs = 0;
    int nBGYOffs = 0;

    BOOL m_fIsBGAvail = FALSE;
    //BOOL bFillBGBmp = FALSE;
    BOOL m_fShouldTileBGBmp = FALSE;
    BOOL m_fShouldUseBGCol = FALSE;
    BOOL m_fNeedFirstInit = TRUE;
    BOOL m_fClickToFindColor = TRUE;

    COLORREF crBGCol = 0x00FF0000;
    COLORREF crBlinkCol = 0x00FFFFFF;
    double fpZoom = DEF_ZOOM;

    void InitDC(CPaintDC& PaintDC);
    void DrawMainBG();
    void InitImgBuffer();

    //void CreateImgBitmap(int nIndex, int nWidth, int nHeight);
    void ResizeMainBitmap();

    void ModifySrcRect();
    void ModifyClRect();

    BOOL CustomBlt(int nSrcIndex, int x, int y, bool fUseAltPal = false);

    CScrollBar m_HScroll;
    CScrollBar m_VScroll;

    BOOL bLButtonDown = FALSE;
    BOOL bCtrlDown = FALSE;

    double fpPrevX = 0.0, fpPrevY = 0.0;
    double fpDiffX = 0.0, fpDiffY = 0.0;

    CRect rCtrlRct;
    CRect rCtrlSrcRct;
    CRect rSrcRct;
    CRect rImgRct;

    int nImgRctW = 0;
    int nImgRctH = 0;

    UINT8 bUsed[MAX_IMAGES_DISPLAYABLE] = {};

    POINT ptOffs[MAX_IMAGES_DISPLAYABLE] = {};
    
    CString m_strBackgroundLoc = L"";

    int nXOffsTop = 0;
    int nYOffsTop = 0;

    int MAIN_W = 0, MAIN_H = 0;

    // This should be converted over to an sImageNode probably...
    UINT8* m_ppSpriteOverrideTexture[MAX_IMAGES_DISPLAYABLE] = { nullptr };
    int m_nTextureOverrideW[MAX_IMAGES_DISPLAYABLE] = { 0 };
    int m_nTextureOverrideH[MAX_IMAGES_DISPLAYABLE] = { 0 };

    sPalDef* m_pBackupPaletteDef = nullptr;
    COLORREF* m_pBackupAltPalette = nullptr;

public:
    CImgDisp();
    ~CImgDisp();

    void AddImageNode(int nIndex, UINT16 uImgW, UINT16 uImgH, UINT8* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs);
    void FlushImageNode(int nIndex);
    void FlushImages();
    void UpdateCtrl(BOOL bRedraw = TRUE, int nUseAltPal = 0);
    void Redraw();
    void SetBGCol(COLORREF crNewCol) { crBGCol = crNewCol; };
    void SetBlinkCol(COLORREF crNewCol) { crBlinkCol = crNewCol; };
    COLORREF GetBGCol() { return crBGCol; };
    COLORREF GetBlinkCol() { return crBlinkCol; };
    void CenterImg() { ModifySrcRect(); };

    void SetAltPal(int nIndex, COLORREF* pAltPal);

    BOOL IsBGTiled() { return m_fShouldTileBGBmp; };
    BOOL IsUsingBGCol() { return m_fShouldUseBGCol; };
    void SetBGXOffs(int nOffs) { nBGXOffs = nOffs; };
    void SetBGYOffs(int nOffs) { nBGYOffs = nOffs; };
    void SetBGTiled(BOOL bTiled) { m_fShouldTileBGBmp = bTiled; };
    void SetUseBGCol(BOOL bUse) { m_fShouldUseBGCol = bUse; };
    void SetClickToFindColorSetting(BOOL fClickToFind) { m_fClickToFindColor = fClickToFind; };
    BOOL GetClickToFindColorSetting() { return m_fClickToFindColor; };
    BOOL CanForceBGBitmapAvailable();

    int GetBGXOffs() { return nBGXOffs; };
    int GetBGYOffs() { return nBGYOffs; };

    sImgNode** GetImgBuffer() { return pImgBuffer; };
    // Note that we only check for the 0 sprite: export keys off of that.
    bool HaveImageData() { return pImgBuffer[0] && pImgBuffer[0]->pImgData; };
    CRect GetImgRct() { return rImgRct; }; // currently unused: commented out in imgdumpbmp.cpp

    void UpdateImgPalette(int nIndex, COLORREF* pPalette, int nPalSz);

    bool LoadExternalSprite(UINT nPositionToLoadTo, SpriteImportDirection direction, WCHAR* pszTextureLocation);
    void AssignBackupPalette(sPalDef* pBackupPaletteDef);
    bool DoWeHaveImageForIndex(int nIndex);
    
    void SetZoom(double fpNewZoom)
    {
        fpZoom = fpNewZoom;
        ModifySrcRect();
        Redraw();
    };

    double GetZoom() { return fpZoom; };

    BOOL LoadBGBmp(WCHAR* szBmpLoc);
    void SetBGBmpPath(WCHAR* szBmpLoc) { m_strBackgroundLoc = szBmpLoc; };
    //void UseBGCol(){bFillBGBmp = FALSE;};

    int GetImgAmt() { return nImgAmt; };

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
