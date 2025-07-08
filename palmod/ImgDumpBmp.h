#pragma once
//#include "gamepal.h"
#include "ImgDisp.h"
#include "Game\GameDef.h"

#define IMGDUMPBMP        L"ImgDumpBmp"
#define REQ_VAR            0xD010

#define SCROLL_W        17
#define SCROLL_PAGE_AMT 20

// CImgDumpBmp

class CImgDumpBmp : public CWnd
{
    DECLARE_DYNAMIC(CImgDumpBmp)

public:
    CImgDumpBmp();
    virtual ~CImgDumpBmp();

    //void DrawSource();
    void SetBG(COLORREF new_crBGCol);

    BITMAPINFO m_MainBmpi; 
    HBITMAP m_MainHBmp;
    uint32_t* m_pMainBmpData = nullptr;

    //Main preview image control
    CImgDisp* m_pMainImgCtrl = nullptr;
    sImgNode** m_rgSrcImg = nullptr;

    BOOL m_LButtonDown = FALSE;

    BOOL HScroll_Enabled = FALSE;
    BOOL VScroll_Enabled = FALSE;

    BOOL m_fInitialized = FALSE;
    BOOL m_fScrollbarIsReady = FALSE;

    POINT m_ptOffs[MAX_IMAGES_DISPLAYABLE] = {};
    CRect m_rImgRct = {};

    CDC m_MainDC;

    COLORREF*** m_pppPalettes = nullptr;
    
    COLORREF m_crBGCol = RGB(0, 0, 0);

    POINT m_old_pt;

    RECT m_ctrl_rect = {};

    RECT m_main_blt = {};

    int m_clip_right = 0, m_clip_bottom = 0;

    sImageDimensions m_bltDimensions;

    int m_nPalAmt = 0;
    int m_nImageAmt = 0;

    int m_nTotalImagesToDisplay = 0;
    int m_nPalIndex = 0;
    float m_flZoomLevel = 0.0f;
    int m_border_sz = 0;
    int m_outline_sz = 0;

    sImageDimensions m_mainWindowDimensions;
    sImageDimensions m_clientDimensions;

    void UpdateCtrl(BOOL fDraw = TRUE, uint8_t* pDstData = NULL);
    void UpdateClip();

    void ClearCtrlBG();

    int GetImageCountForFirstLine();
    int GetMaxImagesPerLine();

    CScrollBar m_HScroll;
    CScrollBar m_VScroll;

    RECT m_h_rect = {};
    RECT m_v_rect = {};

    eImageOutputSpriteDisplay DispType;

protected:
    DECLARE_MESSAGE_MAP()

public:
    BOOL RegisterWndClass();

    afx_msg void OnPaint();
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnVScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    afx_msg void OnTimer(UINT nIDEvent);
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);

    int ScrollBounds(int in_val, BOOL horiz);

    void InitImgData();
    int GetOutputW();
    int GetOutputH();
    void SetClientSize();
    void UpdateBltRect(BOOL reset_flag = TRUE);

    void SizeScroll(BOOL resize = FALSE);

    void CleanUp();

    void Draw();

    BOOL CustomBlt(int nSrcIndex, int nPalIndex, int nDstX, int nDstY, double fpZoom, BOOL fTransBG = FALSE);

    void ResizeMainBmp();
};
