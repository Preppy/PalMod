#pragma once


#include "ImgDisp.h"

// CPreviewDlg dialog

class CPreviewDlg : public CDialog
{
	DECLARE_DYNAMIC(CPreviewDlg)

private:
	void InitDispCtrl();
	BOOL bImgDispInit;

	void LoadSettings();
	void SaveSettings();

	void SubZoom();
	void AddZoom();

	CString szBGLoc;
public:
	CPreviewDlg(CWnd* pParent = NULL);   // standard constructor
	virtual ~CPreviewDlg();

// Dialog Data
	enum { IDD = IDD_PREVIEW_DIALOG };

//Additional data
	CImgDisp m_ImgDisp;

protected:
	HICON m_hIcon;

	virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

	DECLARE_MESSAGE_MAP()
public:
	afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
	afx_msg void OnSize(UINT nType, int cx, int cy);
	afx_msg void OnZoom1x(){m_ImgDisp.SetZoom(1.0f);};
	afx_msg void OnZoom2x(){m_ImgDisp.SetZoom(2.0f);};
	afx_msg void OnZoom3x(){m_ImgDisp.SetZoom(3.0f);};
	afx_msg void OnZoom4x(){m_ImgDisp.SetZoom(4.0f);;};
	afx_msg void OnSetBGCol();
	afx_msg void OnSetBlinkCol();
	afx_msg void OnSetBGImage();
	afx_msg void OnDestroy();
	afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
	afx_msg void OnClose();
	afx_msg void OnFileClose();
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	virtual BOOL OnInitDialog();
	afx_msg void OnTileBg();
	afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
	afx_msg void OnResetBGOffset();
	afx_msg void OnFileExportImg();
	afx_msg void OnSettingsUsebgcolor();
};


