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

private:
    void ExportToIndexedPNG(CString save_str, CString output_str, CString output_ext);
    void ExportToRAW(CString save_str, CString output_str, CString output_ext, LPCWSTR pszSuggestedFileName);
    void ExportToCImageType(CString output_str, GUID img_format, DWORD dwExportFlags);

public:
    BOOL bDlgInit = FALSE;

    CComboBox m_CB_Amt;
    CComboBox m_CB_Pal;
    CComboBox m_CB_Zoom;

    BOOL bCanSize = FALSE;

    BOOL bTransPNG = FALSE;

    const LPCWSTR *pButtonLabelSet = nullptr;

    int nPalAmt = 0;

    int m_pal = 0;
    int m_zoomSelIndex = 0;
    int border_sz = 0;

    const int m_nZoomSelOptionsMin = 0;

    void UpdImgVar(BOOL bResize = TRUE);
    void FillPalCombo();

    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);

    void UpdateImg();
    afx_msg void OnCbnSelchangeAmt();

    afx_msg void OnDeltaposBdrspn(NMHDR* pNMHDR, LRESULT* pResult);

    CSpinButtonCtrl m_BdrSpn;
    afx_msg void OnSettingsSetBackgroundColor();
    afx_msg void OnFileSave();
    afx_msg void OnClose();

    int re5(int re_val) { return re_val % 5; };

    void LoadSettings();
    void SaveSettings();

    void ResizeBmp();
    afx_msg void OnEnChangeEditBdrsz();

    BOOL PreTranslateMessage(MSG* pMsg);
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);

    void AddZoom();
    void SubZoom();
    afx_msg BOOL OnMouseWheel(UINT nFlags, short zDelta, CPoint pt);
    afx_msg void OnSettingsUseTransparentPNG();
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
};
