#pragma once

#include "afxwin.h"
#include "ImgDumpBmp.h"
#include "afxcmn.h"

// CImgOutDlg dialog

class CImgOutDlg : public CDialog
{
	DECLARE_DYNAMIC(CImgOutDlg)

public:
	CImgOutDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CImgOutDlg();

// Dialog Data
	enum { IDD = IDD_IMGDDLG };

//Img Data
	

	CImgDumpBmp m_DumpBmp;

	int img_amt;

	RECT rct_dummy;


protected:
	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
	virtual BOOL OnInitDialog();

	DECLARE_MESSAGE_MAP()
public:

	BOOL bDlgInit;

	CComboBox m_CB_Amt;
	CComboBox m_CB_Pal;
	CComboBox m_CB_Zoom;

	BOOL bCanSize;

	BOOL bTransPNG;

	CHAR * pButtonLabel;

	int nPalAmt;

	int m_amt;
	int m_pal;
	int m_zoom;
	int border_sz;
	int outline_sz;

	int nZoomMin;
	int nZoomMax;

	void UpdImgVar(BOOL bResize = TRUE);
	void FillPalCombo();

	afx_msg void OnSize(UINT nType,int cx,int cy );
	afx_msg	void OnShowWindow(BOOL bShow, UINT nStatus);
	
	void UpdateImg();
	afx_msg void OnCbnSelchangeAmt();
	afx_msg void OnCbnSelchangePal();
	afx_msg void OnCbnSelchangeZoom();
	
	afx_msg void OnEnChangeBdrsz();
	afx_msg void OnEnChangeSpcsz();
	afx_msg void OnDeltaposBdrspn(NMHDR *pNMHDR, LRESULT *pResult);

	CSpinButtonCtrl m_BdrSpn;
	afx_msg void OnSettingsSetbackgroundcolor32847();
	afx_msg void OnFileSave();
	afx_msg void OnClose( );

	int re5(int re_val){return re_val%5;};

	void LoadSett();
	void SaveSett();

	void ResizeBmp();
	afx_msg void OnEnChangeEditBdrsz();

	BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnSizing(UINT fwSide, LPRECT pRect);
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);

	void AddZoom(){int nCurrZoom = m_CB_Zoom.GetCurSel() + 1; if(nCurrZoom <= nZoomMax)m_CB_Zoom.SetCurSel(nCurrZoom); UpdateImg();};
	void SubZoom(){int nCurrZoom = m_CB_Zoom.GetCurSel() - 1; if(nCurrZoom >= nZoomMin)m_CB_Zoom.SetCurSel(nCurrZoom); UpdateImg();};
	afx_msg void OnSettingsUsetransparentpng();
	afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
};

const int amt_val[] = {1, 6, 7};

