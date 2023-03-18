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

    int m_iSelectedImageAmount = 0;

    RECT m_rcDummyRect = {};

protected:
    HICON m_hIcon;

    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    virtual BOOL OnInitDialog();

    DECLARE_MESSAGE_MAP()

private:
    void ExportToIndexedPNG(CString save_str, CString output_str, CString output_ext);
    void ExportToRAW(CString save_str, CString output_ext, LPCWSTR pszSuggestedFileName);
    void ExportToHTML(CString save_str, CString output_ext, LPCWSTR pszSuggestedFileName);
    void ExportToCImageType(CString output_str, GUID img_format, DWORD dwExportFlags);

    void UpdatePaletteInGIF(CString output_str);

public:
    BOOL m_fDlgInit = FALSE;

    CComboBox m_CB_Amt;
    CComboBox m_CB_Pal;
    CComboBox m_CB_Zoom;

    BOOL m_fCanSize = FALSE;

    BOOL m_fTransPNG = FALSE;

    std::vector<LPCWSTR> pButtonLabelSet;

    int m_nPalAmt = 0;

    int m_pal = 0;
    int m_zoomSelIndex = 0;
    int m_border_sz = 0;

    const int m_nZoomSelOptionsMin = 0;

    void UpdImgVar(BOOL fResize = TRUE);
    void FillPalCombo();

    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnShowWindow(BOOL fShow, UINT nStatus);

    void UpdateImg();
    afx_msg void OnCbnSelchangeAmt();

    afx_msg void OnDeltaposBdrspn(NMHDR* pNMHDR, LRESULT* pResult);

    CSpinButtonCtrl m_BdrSpn;
    afx_msg void OnSettingsSetBackgroundColor();
    afx_msg void OnFileSave();
    afx_msg void OnClose();

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
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu);
};
