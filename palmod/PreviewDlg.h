#pragma once

#include "ImgDisp.h"
#include "PalModDlg.h"

// CPreviewDlg dialog

class CPreviewDlg : public CDialog
{
    DECLARE_DYNAMIC(CPreviewDlg)

private:
    void InitDispCtrl();
    BOOL bImgDispInit = FALSE;

    void LoadSettings();
    void SaveSettings();

    void SubZoom();
    void AddZoom();
    void UpdateZoomSetting(double fpNewZoom);

    CString szBGLoc;

public:
    CPreviewDlg(CWnd* pParent = NULL);   // standard constructor
    virtual ~CPreviewDlg();

// Dialog Data
    enum { IDD = IDD_PREVIEW_DIALOG };

    void SetWindowCaption(LPCTSTR pszCaption);

//Additional data
    CImgDisp m_ImgDisp;
    CPalDropTarget m_dropTarget;

protected:
    HICON m_hIcon;

    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    DECLARE_MESSAGE_MAP()
public:
    afx_msg void OnShowWindow(BOOL bShow, UINT nStatus);
    afx_msg void OnSize(UINT nType, int cx, int cy);
    afx_msg void OnZoom1x() { UpdateZoomSetting(1.0); };
    afx_msg void OnZoom2x() { UpdateZoomSetting(2.0); };
    afx_msg void OnZoom3x() { UpdateZoomSetting(3.0); };
    afx_msg void OnZoom4x() { UpdateZoomSetting(4.0); };
    afx_msg void OnSetBackgroundCol();
    afx_msg void OnSetBlinkCol();
    afx_msg void OnSetBackgroundImage();
    afx_msg void OnDestroy();
    afx_msg int OnCreate(LPCREATESTRUCT lpCreateStruct);
    afx_msg void OnClose();
    afx_msg void OnFileClose();
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    virtual BOOL OnInitDialog();
    afx_msg void OnTileBackground();
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
    afx_msg void OnResetBackgroundOffset();
    afx_msg void OnFileExportImg();
    afx_msg void OnSettingsUseBackgroundColor();
    afx_msg void OnSettingsClickToFindColor();
    afx_msg void OnLoadCustomSprite();

    void LoadCustomSpriteFromPath(TCHAR* pszPath);
};
