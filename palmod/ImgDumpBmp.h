#pragma once
//#include "gamepal.h"
#include "ImgDisp.h"
#include "Game\GameDef.h"

#define IMGDUMPBMP		_T("ImgDumpBmp")
#define REQ_VAR			0xD010

#define SCROLL_W		17
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
	UINT32 * pMainBmpData;

	//Main preview image control
	CImgDisp * pMainImgCtrl;
	sImgNode ** rgSrcImg;

	BOOL LButtonDown;

	BOOL HScroll_Enabled;
	BOOL VScroll_Enabled;

	BOOL FirstRun;
	BOOL CanSizeScroll;

	POINT ptOffs[MAX_IMG];
	CRect rImgRct;

	CPaintDC *PaintDC;

	CDC		MainDC;
	//CBitmap MainBmp;

	COLORREF ***pppPalettes;
	
	COLORREF crBGCol;

	POINT old_pt;

	int complete_w;
	int complete_h;

	RECT ctrl_rect;
	RECT blt_rct;

	RECT main_blt;

	int clip_right, clip_bottom;

	int	blt_w, blt_h;

	int nPalAmt;
	int img_amt;

	int amt;
	int nPalIndex;
	float zoom;
	int border_sz;
	int outline_sz;

	int output_width;
	int output_height;

	int cl_width, cl_height;

	void UpdateCtrl(BOOL bDraw = TRUE, UINT8 * pDstData = NULL);
	void UpdateClip();

	void ClearCtrlBG();

	int nMainW, nMainH;

	CScrollBar m_HScroll;
	CScrollBar m_VScroll;

	RECT h_rect;
	RECT v_rect;

	eDispType DispType;


protected:
	DECLARE_MESSAGE_MAP()

public:

	BOOL RegisterWndClass();

	afx_msg void OnPaint();
	afx_msg void OnSize(UINT nType,int cx,int cy );
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

	void CreateMainBitmap();

	void Draw();

	BOOL CustomBlt(int nSrcIndex, int nPalIndex, int nDstX, int nDstY, double fpZoom, BOOL bTransBG = FALSE);

	void ResizeMainBmp();
	

};


