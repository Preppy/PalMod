#pragma once
#include "afxwin.h"
#include "JunkC.h"

#define JUNK_CLASSNAME    _T("CJunk")  // Window class name

#define aaadd(x, y) ((x)+(y) > 255 ? 255 : (x)+(y))

#define CUSTOM_HLCHANGE		WM_USER	+1
#define CUSTOM_SELHLCHANGE	WM_USER +2
#define CUSTOM_SS			WM_USER	+3
#define CUSTOM_MS			WM_USER +4

#define CUSTOM_COPY			WM_USER +11
#define CUSTOM_PASTE		WM_USER +12
#define CUSTOM_SALL			WM_USER +13
#define CUSTOM_SNONE		WM_USER +14

#define PAL_MAXWIDTH 8
#define PAL_MAXAMT 64

#define PAL_SQ_SZ 15
#define BDR_SZ 1

#define FLAG_HL 0
#define FLAG_SL 1
#define FLAG_MH 2
#define FLAG_DE 3

class CJunk :
	public CWnd
{
private:
	void	NotifyParent(int iCustomMessage);
	UCHAR Toggle(UCHAR &tVar);

	void CleanUp();

	//Drawing functions
	void InitDC();
	void DrawBG();
	BOOL ProcBaseBMP();
	void ClearBaseBMP();

	
	void  SetIndexPen(int nIndex, int pFlag);	

	void CustomFillRect(RECT * lpRect, UINT8 * crSrcCol);
	//Input management

	BOOL ProcessHovered(CPoint hPoint, CPoint &auxPos);
	void LoadDefaultPal();

	//Default variables
	BOOL LButtonDown;
	BOOL bFirstDCInit;
	BOOL bFirstInit;

	BOOL bEnabled;
	BOOL bOverControl;
	BOOL bInCtrl;

	//Draw variables
	RECT rIndexRect;

	CPaintDC *dcPaintDC;

	HBITMAP hBmp;
	BITMAPINFO Bmpi;
	UINT32 * pBmpData;
	CDC dcBaseDC;

	CBitmap FaceBitmap;


	//CBitmap BGBmp;
	//CBitmap BGBrush;

	static CPen PIndexHL;
	static CPen PIndexSL;
	static CPen PIndexMHL;
	static CPen PIndexBG;

	int nCurrAmt;

	int iBaseW;
	int iBaseH;

	int iPalW;
	int iPalH;
	int iSqSz;
	int iSqBdrSz;
	int iBdrSz;
	int bUnused;

	RECT rUnused;

	static int nWidthMax;

	//Input variables

	UCHAR * Highlighted;
	UCHAR * Selected;
	UCHAR * SelView;

	int iHLAmt;
	int iWorkingAmt;

	int iHighlightx;
	int iHighlighty;

	int SingleSelect;
	int iSelAmt;

	BOOL bSingleSel;

	int xHLOld;
	int yHLOld;

	int xInSelStart;
	int yInSelStart;

	int xInSelOld;
	int yInSelOld;

	int iHighlightIndex;

	//Main palette
	COLORREF * BasePal;

	void UpdateFace();
	

	

public:
	CJunk();
	~CJunk(void);

	void	Enable(BOOL bEnableFlag = TRUE){bEnabled = bEnableFlag; UpdateCtrl();}

	BOOL InitNewSize(int nNewAmt, COLORREF * rgNewPal);
	static BOOL	InitPen();

	int GetBaseWidth(){return iBaseW;};
	int GetBaseHeight(){return iBaseH;};
	BOOL UpdateCtrl(BOOL bUpdFace = TRUE);

	void ClearSelected();
	void ClearSelView();
	void ClearHighlighted();

	void SelectAll();

	int GetWorkingAmt(){return iWorkingAmt;};
	UCHAR * GetSelIndex(){return Selected;};

	int GetSS(){return SingleSelect;};
	COLORREF * GetBasePal(){return BasePal;};

	int GetHighlightIndex(){return iHighlightIndex;};

	int GetSelAmt(){return iSelAmt;};
	int GetHLAmt(){return iHLAmt;};
	void UpdateIndex(int nIndex);
	void UpdateIndexAll();

	BOOL RegisterWindowClass();

	DECLARE_MESSAGE_MAP()

	
	afx_msg void OnPaint();
	afx_msg BOOL OnEraseBkgnd(CDC* pDC);
	afx_msg void OnMouseMove(UINT nFlags, CPoint point);
	afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
	afx_msg void OnTimer(UINT nIDEvent);
	afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
	afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
	afx_msg void OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu);
protected:
	virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
