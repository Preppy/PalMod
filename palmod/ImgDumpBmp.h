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

    BITMAPINFO MainBmpi; 
    HBITMAP MainHBmp;
    UINT32* pMainBmpData = nullptr;

    //Main preview image control
    CImgDisp* pMainImgCtrl = nullptr;
    sImgNode** rgSrcImg = nullptr;

    BOOL LButtonDown = FALSE;

    BOOL HScroll_Enabled = FALSE;
    BOOL VScroll_Enabled = FALSE;

    BOOL m_fInitialized = FALSE;
    BOOL m_fScrollbarIsReady = FALSE;

    POINT ptOffs[MAX_IMAGES_DISPLAYABLE] = {};
    CRect rImgRct = {};

    CDC MainDC;

    COLORREF*** pppPalettes = nullptr;
    
    COLORREF crBGCol = RGB(0, 0, 0);

    POINT old_pt;

    int complete_w = 0;
    int complete_h = 0;

    RECT ctrl_rect = {};
    RECT blt_rct = {};

    RECT main_blt = {};

    int clip_right = 0, clip_bottom = 0;

    int blt_w = 0, blt_h = 0;

    int nPalAmt = 0;
    int img_amt = 0;

    int m_nTotalImagesToDisplay = 0;
    int nPalIndex = 0;
    float zoom = 0.0f;
    int border_sz = 0;
    int outline_sz = 0;

    int output_width = 0;
    int output_height = 0;

    int cl_width = 0, cl_height = 0;

    void UpdateCtrl(BOOL bDraw = TRUE, UINT8 * pDstData = NULL);
    void UpdateClip();

    void ClearCtrlBG();

    int nMainW = 0, nMainH = 0;

    int GetImageCountForFirstLine();
    int GetMaxImagesPerLine();

    CScrollBar m_HScroll;
    CScrollBar m_VScroll;

    RECT h_rect = {};
    RECT v_rect = {};

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

    BOOL CustomBlt(int nSrcIndex, int nPalIndex, int nDstX, int nDstY, double fpZoom, BOOL bTransBG = FALSE);

    void ResizeMainBmp();
};
