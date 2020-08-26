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

    int img_amt = 0;

    RECT rct_dummy = {};

protected:
    HICON m_hIcon;

    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual BOOL OnInitDialog();

    DECLARE_MESSAGE_MAP()
public:

    BOOL bDlgInit = FALSE;

    CComboBox m_CB_Amt;
    CComboBox m_CB_Pal;
    CComboBox m_CB_Zoom;

    BOOL bCanSize = FALSE;

    BOOL bTransPNG = FALSE;

    TCHAR* pButtonLabel = nullptr;

    int nPalAmt = 0;

    int m_pal = 0;
    int m_zoom = 0;
    int border_sz = 0;
    int outline_sz = 0;

    int nZoomMin = 0;
    int nZoomMax = 0;

    void UpdImgVar(BOOL bResize = TRUE);
    void FillPalCombo();

    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);

    void UpdateImg();
    afx_msg void OnCbnSelchangeAmt();
    afx_msg void OnCbnSelchangePal();
    afx_msg void OnCbnSelchangeZoom();

    afx_msg void OnEnChangeBdrsz();
    afx_msg void OnEnChangeSpcsz();
    afx_msg void OnDeltaposBdrspn(NMHDR* pNMHDR, LRESULT* pResult);

    CSpinButtonCtrl m_BdrSpn;
    afx_msg void OnSettingsSetbackgroundcolor32847();
    afx_msg void OnFileSave();
    afx_msg void OnClose();

    int re5(int re_val) { return re_val % 5; };

    void LoadSettings();
    void SaveSettings();

    void ResizeBmp();
    afx_msg void OnEnChangeEditBdrsz();

    BOOL PreTranslateMessage(MSG* pMsg);
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);

    void AddZoom() { int nCurrZoom = m_CB_Zoom.GetCurSel() + 1; if (nCurrZoom <= nZoomMax)m_CB_Zoom.SetCurSel(nCurrZoom); UpdateImg(); };
    void SubZoom() { int nCurrZoom = m_CB_Zoom.GetCurSel() - 1; if (nCurrZoom >= nZoomMin)m_CB_Zoom.SetCurSel(nCurrZoom); UpdateImg(); };
    afx_msg void OnSettingsUsetransparentpng();
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
};
