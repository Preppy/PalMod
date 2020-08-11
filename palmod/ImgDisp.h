#pragma once

#define aadd(x, y) ((x)+(y) > 255 ? 255 : (x)+(y))
#define fabs(x) (x < 0.0f ? -x : x)
//Notes

//Main bitmap is not cleared on destroy

//#define SETIMGPOS
#define SETIMGINDEX 1

#define IMGDISP_CLASSNAME _T("CImgDisp")

//#define MAIN_W 2048
//#define MAIN_H 2048

#define MAX_IMG 16
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

// CImgDisp

class CImgDisp : public CWnd
{
private:
    sImgNode* pImgBuffer[MAX_IMG] = {};
    int nImgAmt = 0;

    CPaintDC* PaintDC = nullptr;
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

    BOOL m_bBGAvail = FALSE;
    //BOOL bFillBGBmp = FALSE;
    BOOL bTileBGBmp = FALSE;
    BOOL bUseBGCol = FALSE;
    BOOL bFirstInit = TRUE;

    COLORREF crBGCol = 0x00FF0000;
    COLORREF crBlinkCol = 0x00FFFFFF;
    double fpZoom = DEF_ZOOM;

    void InitDC();
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

    UINT8 bUsed[MAX_IMG];

    POINT ptOffs[MAX_IMG];
    
    CString m_strBackgroundLoc = _T("");

    int nXOffsTop = 0;
    int nYOffsTop = 0;

    int MAIN_W = 0, MAIN_H = 0;

    // This should be converted over to an sImageNode probably...
    UINT8* m_pSpriteOverrideTexture = nullptr;
    COLORREF* m_pBackupPalette = nullptr;
    COLORREF* m_pBackupAltPalette = nullptr;
    int m_nTextureOverrideW = 0;
    int m_nTextureOverrideH = 0;

public:
    CImgDisp();
    ~CImgDisp();

    void AddImageNode(int nIndex, UINT16 uImgW, UINT16 uImgH, UINT8* pImgData, COLORREF* pPalette, int uPalSz, int nXOffs, int nYOffs);
    void FlushImageNode(int nIndex);
    void FlushImages();
    void UpdateCtrl(BOOL bRedraw = TRUE, BOOL bUseAltPal = FALSE);
    void Redraw();
    void SetBGCol(COLORREF crNewCol) { crBGCol = crNewCol; };
    void SetBlinkCol(COLORREF crNewCol) { crBlinkCol = crNewCol; };
    COLORREF GetBGCol() { return crBGCol; };
    COLORREF GetBlinkCol() { return crBlinkCol; };
    void CenterImg() { ModifySrcRect(); };

    void SetAltPal(int nIndex, COLORREF* pAltPal);

    BOOL IsBGTiled() { return bTileBGBmp; };
    BOOL IsUsingBGCol() { return bUseBGCol; };
    void SetBGXOffs(int nOffs) { nBGXOffs = nOffs; };
    void SetBGYOffs(int nOffs) { nBGYOffs = nOffs; };
    void SetBGTiled(BOOL bTiled) { bTileBGBmp = bTiled; };
    void SetUseBGCol(BOOL bUse) { bUseBGCol = bUse; };
    BOOL CanForceBGBitmapAvailable();

    int GetBGXOffs() { return nBGXOffs; };
    int GetBGYOffs() { return nBGYOffs; };

    sImgNode** GetImgBuffer() { return pImgBuffer; };
    CRect GetImgRct() { return rImgRct; }; // currently unused: commented out in imgdumpbmp.cpp

    void UpdateImgPalette(int nIndex, COLORREF* pPalette, int nPalSz);

    bool LoadExternalSprite(TCHAR* szTextureLocation);
    void AssignBackupPalette(UINT8* pBackupPalette);
    bool DoWeHaveImageForIndex(int nIndex);
    
    void SetZoom(double fpNewZoom)
    {
        fpZoom = fpNewZoom;
        ModifySrcRect();
        Redraw();
    };

    double GetZoom() { return fpZoom; };

    BOOL LoadBGBmp(TCHAR* szBmpLoc);
    void SetBGBmpPath(TCHAR* szBmpLoc) { m_strBackgroundLoc = szBmpLoc; };
    //void UseBGCol(){bFillBGBmp = FALSE;};

    int GetImgAmt() { return nImgAmt; };

    void ClearUsed();
    void FlushUnused();

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
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
};
