// PreviewDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PalMod.h"

#include "PreviewDlg.h"
#include "ImgOutDlg.h"

#include "RegProc.h"

// CPreviewDlg dialog

IMPLEMENT_DYNAMIC(CPreviewDlg, CDialog)

CPreviewDlg::CPreviewDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CPreviewDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CPreviewDlg::~CPreviewDlg()
{
}

void CPreviewDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CPreviewDlg, CDialog)
    ON_WM_SHOWWINDOW()
    ON_WM_SIZE()
    ON_COMMAND(ID_ZOOM_1X, &CPreviewDlg::OnZoom1x)
    ON_COMMAND(ID_ZOOM_2X, &CPreviewDlg::OnZoom2x)
    ON_COMMAND(ID_ZOOM_3X, &CPreviewDlg::OnZoom3x)
    ON_COMMAND(ID_ZOOM_4X, &CPreviewDlg::OnZoom4x)
    ON_COMMAND(ID_SETTINGS_SETBACKGROUNDCOLOR, &CPreviewDlg::OnSetBGCol)
    ON_COMMAND(ID_SETTINGS_SETBLINKCOLOR, &CPreviewDlg::OnSetBlinkCol)
    ON_COMMAND(ID_SETTINGS_SETBACKGROUNDIMAGE, &CPreviewDlg::OnSetBGImage)
    ON_COMMAND(ID_ACC_ADDZOOM, &CPreviewDlg::AddZoom)
    ON_COMMAND(ID_ACC_SUBZOOM, &CPreviewDlg::SubZoom)
    ON_WM_CLOSE()
    ON_WM_DESTROY()
    ON_WM_CREATE()
    ON_COMMAND(ID_FILE_CLOSE, &CPreviewDlg::OnFileClose)
    ON_COMMAND(ID_SETTINGS_TILEIMAGEBACKGROUND, &CPreviewDlg::OnTileBg)
    ON_WM_INITMENUPOPUP()
    ON_COMMAND(ID_SETTINGS_RESETBACKGROUNDOFFSET, &CPreviewDlg::OnResetBGOffset)
    ON_COMMAND(ID_FILE_EXPORTIMAGE, &CPreviewDlg::OnFileExportImg)
    ON_COMMAND(ID_FILE_LOADSPRITE, &CPreviewDlg::OnLoadCustomSprite)
    ON_COMMAND(ID_SETTINGS_USEBGCOLOR, &CPreviewDlg::OnSettingsUsebgcolor)
END_MESSAGE_MAP()

void CPreviewDlg::InitDispCtrl()
{
    if (!bImgDispInit)
    {
        RECT rClient;
        GetClientRect(&rClient);

        m_ImgDisp.Create("CImgDisp", "ImgDisp", WS_CHILD | WS_VISIBLE, rClient, this, 1234);
        bImgDispInit = TRUE;
    }
}

void CPreviewDlg::SetWindowCaption(LPCSTR pszCaption)
{
    SetWindowText(pszCaption);
}

void CPreviewDlg::OnShowWindow(BOOL bShow, UINT nStatus)
{
    CDialog::OnShowWindow(bShow, nStatus);

    if (bImgDispInit)
    {
        m_ImgDisp.UpdateCtrl();
    }
    else
    {
        InitDispCtrl();
    }

    CMenu* pSettMenu = GetMenu()->GetSubMenu(2); //2 = zoom menu

    double fpCurrZoom = m_ImgDisp.GetZoom();
    pSettMenu->CheckMenuItem(ID_ZOOM_1X, MF_BYCOMMAND | ((fpCurrZoom == 1.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_2X, MF_BYCOMMAND | ((fpCurrZoom == 2.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_3X, MF_BYCOMMAND | ((fpCurrZoom == 3.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_4X, MF_BYCOMMAND | ((fpCurrZoom == 4.0) ? MF_CHECKED : MF_UNCHECKED));
}

void CPreviewDlg::OnSize(UINT nType, int cx, int cy)
{
    CDialog::OnSize(nType, cx, cy);

    if (bImgDispInit)
    {
        RECT rClient;
        GetClientRect(&rClient);

        m_ImgDisp.MoveWindow(&rClient);
    }
}

void CPreviewDlg::OnSetBGCol()
{
    CColorDialog ColorDlg(m_ImgDisp.GetBGCol());

    if (ColorDlg.DoModal() == IDOK)
    {
        m_ImgDisp.SetBGCol(ColorDlg.GetColor());

        if (m_ImgDisp.IsBGTiled())
        {
            m_ImgDisp.SetUseBGCol(TRUE);
        }

        m_ImgDisp.UpdateCtrl();
    }
}

void CPreviewDlg::OnSetBlinkCol()
{
    CColorDialog ColorDlg(m_ImgDisp.GetBlinkCol());

    if (ColorDlg.DoModal() == IDOK)
    {
        COLORREF crNewBlinkCol = ColorDlg.GetColor();

        m_ImgDisp.SetBlinkCol(crNewBlinkCol);
        m_ImgDisp.UpdateCtrl();
    }
}

void CPreviewDlg::OnSetBGImage()
{
    CFileDialog OpenDialog(TRUE, NULL, NULL, NULL, "Standard graphics files|*.bmp; *.png; *.gif; *.jpg; *.jpeg||", this);

    if (OpenDialog.DoModal() == IDOK)
    {
        if (m_ImgDisp.LoadBGBmp(OpenDialog.GetPathName().GetBuffer()))
        {
            szBGLoc = OpenDialog.GetPathName();
            m_ImgDisp.SetBGXOffs(0);
            m_ImgDisp.SetBGYOffs(0);
            m_ImgDisp.SetUseBGCol(FALSE);
            m_ImgDisp.UpdateCtrl();
        }
        else
        {
            CString strError;
            strError.LoadString(IDS_ERROR_LOADING_BITMAP_BG);
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
    }
}

void CPreviewDlg::LoadSettings()
{
    CRegProc LoadSett;

    LoadSett.LoadReg(REG_PREV);

    szBGLoc = LoadSett.szPrevBGLoc;

    m_ImgDisp.SetBGCol(LoadSett.prev_bgcol);
    m_ImgDisp.SetBlinkCol(LoadSett.prev_blinkcol);
    m_ImgDisp.SetBGTiled(LoadSett.bTileBG);
    m_ImgDisp.SetBGXOffs(LoadSett.nBGXOffs);
    m_ImgDisp.SetBGYOffs(LoadSett.nBGYOffs);
    m_ImgDisp.SetUseBGCol(LoadSett.bUseBGCol);
    m_ImgDisp.SetZoom(LoadSett.dPreviewZoom);

    if (LoadSett.bUseBGCol)
    {
        // Don't bother loading the image yet: just make sure the right path is in use.
        m_ImgDisp.SetBGBmpPath(szBGLoc.GetBuffer());
    }
    else
    {
        m_ImgDisp.LoadBGBmp(szBGLoc.GetBuffer());
    }

    RECT window_rect;
    window_rect = LoadSett.prev_szpos;
    if (window_rect.top != c_badWindowPosValue)
    {
        MoveWindow(&window_rect);
    }
    else
    {
        // New user!  Offset ourselves...
        bool foundGoodPosition = false;

        ::GetWindowRect(g_appHWnd, &window_rect);

        window_rect.left += (window_rect.right - window_rect.left);
        window_rect.right += (window_rect.right - window_rect.left);

        if (MonitorFromRect(&window_rect, MONITOR_DEFAULTTONULL) != nullptr)
        {
            foundGoodPosition = true;
            MoveWindow(&window_rect);
        }

        if (!foundGoodPosition)
        {
            // Try a vertical shift...
            ::GetWindowRect(g_appHWnd, &window_rect);

            window_rect.top += (window_rect.bottom - window_rect.top);
            window_rect.bottom += (window_rect.bottom - window_rect.top);

            if (MonitorFromRect(&window_rect, MONITOR_DEFAULTTONULL) != nullptr)
            {
                MoveWindow(&window_rect);
            }
        }
    }

    if (bImgDispInit)
    {
        m_ImgDisp.UpdateCtrl();
    }
}

void CPreviewDlg::SaveSettings()
{
    CRegProc SaveSett;

    strcpy(SaveSett.szPrevBGLoc, szBGLoc.GetBuffer());
    SaveSett.prev_bgcol = m_ImgDisp.GetBGCol();
    SaveSett.prev_blinkcol = m_ImgDisp.GetBlinkCol();
    SaveSett.bTileBG = m_ImgDisp.IsBGTiled();
    SaveSett.nBGXOffs = m_ImgDisp.GetBGXOffs();
    SaveSett.nBGYOffs = m_ImgDisp.GetBGYOffs();
    SaveSett.bUseBGCol = m_ImgDisp.IsUsingBGCol();
    SaveSett.dPreviewZoom = m_ImgDisp.GetZoom();

    RECT window_rect;

    GetWindowRect(&window_rect);
    SaveSett.prev_szpos = window_rect;

    SaveSett.SaveReg(REG_PREV);
}

void CPreviewDlg::OnDestroy()
{
    CDialog::OnDestroy();

    //Save the settings before it is destroyed
    SaveSettings();
}

int CPreviewDlg::OnCreate(LPCREATESTRUCT lpCreateStruct)
{
    if (CDialog::OnCreate(lpCreateStruct) == -1)
    {
        return -1;
    }

    LoadSettings();

    return 0;
}

void CPreviewDlg::OnFileClose()
{
    // TODO: Add your command handler code here
    ShowWindow(SW_HIDE);
}

BOOL CPreviewDlg::PreTranslateMessage(MSG* pMsg)
{
    if (m_hAccelTable)
    {
        if (::TranslateAccelerator(GetSafeHwnd(), m_hAccelTable, pMsg))
        {
            return(TRUE);
        }
    }

    switch (pMsg->message)
    {
    case WM_KEYDOWN:
    {
        if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
        {
            pMsg->wParam = NULL;
        }
    }
    break;

    }
    return CDialog::PreTranslateMessage(pMsg);
}

BOOL CPreviewDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    // TODO:  Add extra initialization here

    // Set the icon for this dialog.  The framework does this automatically
    //  when the application's main window is not a dialog
    SetIcon(m_hIcon, TRUE);          // Set big icon
    SetIcon(m_hIcon, FALSE);        // Set small icon

    return TRUE;  // return TRUE unless you set the focus to a control
    // EXCEPTION: OCX Property Pages should return FALSE
}

void CPreviewDlg::OnTileBg()
{
    m_ImgDisp.SetBGTiled(!m_ImgDisp.IsBGTiled());
    m_ImgDisp.UpdateCtrl();
}

void CPreviewDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(1); //1 = settings menu

    if (pSettMenu == pPopupMenu)
    {
        pSettMenu->CheckMenuItem(ID_SETTINGS_TILEIMAGEBACKGROUND, m_ImgDisp.IsBGTiled() ? MF_CHECKED : MF_UNCHECKED);
        pSettMenu->CheckMenuItem(ID_SETTINGS_USEBGCOLOR, m_ImgDisp.IsUsingBGCol() ? MF_CHECKED : MF_UNCHECKED);
        //pSettMenu->EnableMenuItem(ID_SETTINGS_RESETBACKGROUNDOFFSET, m_ImgDisp.IsBGTiled());
    }
}

void CPreviewDlg::OnResetBGOffset()
{
    m_ImgDisp.SetBGXOffs(0);
    m_ImgDisp.SetBGYOffs(0);

    m_ImgDisp.UpdateCtrl();
}

void CPreviewDlg::OnLoadCustomSprite()
{
    if (GetHost()->GetCurrGame())
    {
        CFileDialog OpenDialog(TRUE, NULL, NULL, NULL, "RAW Texture file|*-W-*-H-*.*||", this);

        if (OpenDialog.DoModal() == IDOK)
        {
            if (m_ImgDisp.LoadExternalSprite(OpenDialog.GetPathName().GetBuffer()))
            {
                m_ImgDisp.UpdateCtrl();
            }
            else
            {
                CString strError;
                strError.LoadString(IDS_ERROR_TEXTURE_LOAD);
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }
    else
    {
        CString strError;
        strError.LoadString(IDS_ERROR_TEXTURE_NOGAME);
        MessageBox(strError, GetHost()->GetAppName(), MB_ICONEXCLAMATION);
    }
}

void CPreviewDlg::OnFileExportImg()
{
    if (m_ImgDisp.GetImgBuffer()[0])
    {
        if (GetHost()->GetCurrGame())
        {
            GetHost()->GetCurrGame()->UpdatePalData();
        }

        CImgOutDlg imgDlg;
        imgDlg.DoModal();
    }
    else
    {
        CString strError;
        strError.LoadString(IDS_ERROR_NO_IMAGES);

        MessageBox(strError, GetHost()->GetAppName(), MB_ICONEXCLAMATION);
    }
}

void CPreviewDlg::OnClose()
{
    CWnd::OnClose();
}

void CPreviewDlg::AddZoom()
{
    double fpCurrZoom = m_ImgDisp.GetZoom();

    if (fpCurrZoom < 4.0)
    {
        m_ImgDisp.SetZoom(fpCurrZoom + 1.0);
    }
}

void CPreviewDlg::SubZoom()
{
    double fpCurrZoom = m_ImgDisp.GetZoom();

    if (fpCurrZoom > 1.0)
    {
        m_ImgDisp.SetZoom(fpCurrZoom - 1.0);
    }
}

void  CPreviewDlg::UpdateZoomSetting(double fpNewZoom)
{
    m_ImgDisp.SetZoom(fpNewZoom);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(2); //2 = zoom menu
    pSettMenu->CheckMenuItem(ID_ZOOM_1X, MF_BYCOMMAND | ((fpNewZoom == 1.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_2X, MF_BYCOMMAND | ((fpNewZoom == 2.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_3X, MF_BYCOMMAND | ((fpNewZoom == 3.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_4X, MF_BYCOMMAND | ((fpNewZoom == 4.0) ? MF_CHECKED : MF_UNCHECKED));
}

void CPreviewDlg::OnSettingsUsebgcolor()
{
    m_ImgDisp.SetUseBGCol(!(m_ImgDisp.IsUsingBGCol()));

    if (m_ImgDisp.CanForceBGBitmapAvailable())
    {
        m_ImgDisp.UpdateCtrl();
    }
}
