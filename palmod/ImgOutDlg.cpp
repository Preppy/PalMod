// ImgOutDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PalMod.h"
#include "ImgOutDlg.h"
#include "atlimage.h"
#include "gdiplus.h"
#include "RegProc.h"

using namespace Gdiplus;

// CImgOutDlg dialog

IMPLEMENT_DYNAMIC(CImgOutDlg, CDialog)
CImgOutDlg::CImgOutDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CImgOutDlg::IDD, pParent)
{
    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

CImgOutDlg::~CImgOutDlg()
{
}

void CImgOutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);

    DDX_Control(pDX, IDC_IMGDBMP, m_DumpBmp);
    DDX_Control(pDX, IDC_AMT, m_CB_Amt);
    DDX_Control(pDX, IDC_PAL, m_CB_Pal);
    DDX_Control(pDX, IDC_ZOOM, m_CB_Zoom);
    DDX_Text(pDX, IDC_EDIT_BDRSZ, border_sz);
    DDX_Text(pDX, IDC_EDIT_SPCSZ, outline_sz);
    DDX_CBIndex(pDX, IDC_PAL, m_pal);
    DDX_CBIndex(pDX, IDC_ZOOM, m_zoom);
    DDX_Control(pDX, IDC_BDRSPN, m_BdrSpn);
}

BOOL CImgOutDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    CGameClass* CurrGame = GetHost()->GetCurrGame();

    //Set dialog data
    pButtonLabel = CurrGame->GetButtonDesc();

    //Set the image controls data
    m_DumpBmp.pMainImgCtrl = &GetHost()->GetPreviewDlg()->m_ImgDisp;
    m_DumpBmp.pppPalettes = CurrGame->CreateImgOutPal();
    m_DumpBmp.nPalAmt = CurrGame->GetImgOutPalAmt();
    m_DumpBmp.DispType = CurrGame->GetImgDispType();

    // Set the icon
    SetIcon(m_hIcon, TRUE);         // Set big icon
    SetIcon(m_hIcon, FALSE);        // Set small icon

    CString tmp_str;
    UpdateData();

    nPalAmt = m_DumpBmp.nPalAmt;

    m_CB_Amt.AddString(_T("1"));

    tmp_str.Format(_T("CImgOutDlg::OnInitDialog: preparing to show up to %u sprites\n"), nPalAmt);
    OutputDebugString(tmp_str);

    //Fix later... as we add more games
    switch (nPalAmt)
    {
    default:
        OutputDebugString(_T("WARNING BUGBUG: This palette count is not supported in CImgOutDlg::OnInitDialog yet!\n"));
    case 1:
        // By default, we export out only the one sprite
        m_CB_Amt.EnableWindow(FALSE);
        break;
    case 2: // MSH, XMvSF
        m_CB_Amt.AddString(_T("2"));
        break;
    case 4: // Garou
        m_CB_Amt.AddString(_T("4"));
        break;
    case 5: // Jojos & Garou
        m_CB_Amt.AddString(_T("5"));
        break;
    case 6: // MvC, MvC2
    case 7: // 3S
        m_CB_Amt.AddString(_T("6"));
        // Allow the user to export either the "normal" 6 sprite set or to export
        // the entire 7 sprite set
        nPalAmt == 7 ? m_CB_Amt.AddString(_T("7")) : NULL;
        break;
    case 8: // status effects or cvs2
        m_CB_Amt.AddString(_T("8"));
        break;
    case 10: // ST
        m_CB_Amt.AddString(_T("6"));
        m_CB_Amt.AddString(_T("10"));
        break;
    }

    int nGameFlag = CurrGame->GetGameFlag();

    FillPalCombo();

    //Cannot get accurate remainder amount

    //Populate Zoom combo box
    //3.8 is the max zoom amt

    for (int i = 0; i < (3 * 5) + 1; i++)
    {
        if (i == 3 * 5)
        {
            tmp_str.Format(_T("4.0x"));

        }
        else
        {
            tmp_str.Format(_T("%d.%dx"), 1 + (i / 5), (i % 5) * 2);
        }

        m_CB_Zoom.AddString(tmp_str);
    }

    nZoomMin = 0;
    nZoomMax = (3 * 5);

    //Change this if we ever decide to load a default image amount
    img_amt = 1;

    m_BdrSpn.SetRange(0, 999);
    m_BdrSpn.SetBuddy(GetDlgItem(IDC_EDIT_BDRSZ));

    //Get the size of the dummy rect

    GetDlgItem(IDC_DUMMY)->GetClientRect(&rct_dummy);

    bCanSize = TRUE;

    LoadSettings();
    UpdateData(FALSE);

    UpdImgVar(FALSE);

    m_DumpBmp.InitImgData();

    //Get the rest of the data
    bDlgInit = TRUE;
    return TRUE;
}

afx_msg void CImgOutDlg::OnSize(UINT nType, int cx, int cy)
{
    CDialog::OnSize(nType, cx, cy);

    ResizeBmp();
}

#pragma warning( push )
#pragma warning( disable : 26454 ) // bug in Microsoft headers

BEGIN_MESSAGE_MAP(CImgOutDlg, CDialog)
    ON_WM_SHOWWINDOW()
    ON_WM_SIZE()
    ON_WM_CLOSE()

    ON_BN_CLICKED(IDC_UPDATE, UpdateImg)

    ON_CBN_SELCHANGE(IDC_AMT, OnCbnSelchangeAmt)
    ON_CBN_SELCHANGE(IDC_PAL, UpdateImg)
    ON_CBN_SELCHANGE(IDC_ZOOM, UpdateImg)
    //ON_EN_CHANGE(IDC_EDIT_BDRSZ, UpdateImg)
    ON_EN_CHANGE(IDC_EDIT_SPCSZ, UpdateImg)
    //ON_COMMAND(REQ_VAR, UpdImgVar)
    ON_NOTIFY(UDN_DELTAPOS, IDC_BDRSPN, OnDeltaposBdrspn)
    ON_COMMAND(ID_SETTINGS_SETBACKGROUNDCOLOR32847, OnSettingsSetbackgroundcolor32847)
    ON_COMMAND(ID_FILE_SAVE32850, OnFileSave)
    ON_COMMAND(REQ_VAR, UpdateImg)
    ON_EN_CHANGE(IDC_EDIT_BDRSZ, OnEnChangeEditBdrsz)
    ON_WM_GETMINMAXINFO()

    ON_COMMAND(ID_ACC_ADDZOOM, &CImgOutDlg::AddZoom)
    ON_COMMAND(ID_ACC_SUBZOOM, &CImgOutDlg::SubZoom)
    ON_COMMAND(ID_SETTINGS_USETRANSPARENTPNG, &CImgOutDlg::OnSettingsUsetransparentpng)
    ON_WM_INITMENUPOPUP()
END_MESSAGE_MAP()

#pragma warning( pop )

// CImgOutDlg message handlers

void CImgOutDlg::OnShowWindow(BOOL bShow, UINT nStatus)
{
    CDialog::OnShowWindow(bShow, nStatus);

    m_CB_Amt.SetCurSel(0);
    m_CB_Pal.SetCurSel(0);
    //m_CB_Zoom.SetCurSel(0);
}

void CImgOutDlg::UpdImgVar(BOOL bResize)
{
    UpdateData();

    m_DumpBmp.amt = img_amt;
    m_DumpBmp.nPalIndex = m_pal;

    //Remainder Problem

    double fpTargetZoom;

    if (m_zoom == 15)
    {
        fpTargetZoom = 4.0;
    }
    else
    {
        fpTargetZoom = (((double)m_zoom / 5.0) + 1.0);
        fpTargetZoom += (0.2 * ((m_zoom) % 5));
    }

    m_DumpBmp.zoom = (float)fpTargetZoom;
    m_DumpBmp.outline_sz = outline_sz;
    m_DumpBmp.border_sz = border_sz;

    m_DumpBmp.GetOutputW();
    m_DumpBmp.GetOutputH();

    if (bResize)
    {
        m_DumpBmp.ResizeMainBmp();
    }

    UpdateData(FALSE);

    //m_DumpBmp.UpdateBltRect(FALSE);
}

void CImgOutDlg::UpdateImg()
{
    UpdImgVar();
    m_DumpBmp.UpdateBltRect(FALSE);
    m_DumpBmp.UpdateClip();
    m_DumpBmp.UpdateCtrl();
}

void CImgOutDlg::OnCbnSelchangeAmt()
{
    UpdateData();

    TCHAR szCount[32];
    if (m_CB_Amt.GetLBText(m_CB_Amt.GetCurSel(), szCount) != CB_ERR)
    {
        _stscanf_s(szCount, _T("%u"), &img_amt);

        m_CB_Pal.EnableWindow(img_amt == 1);

        //There's no member variable for the border size edit box
        //But now I decided to just use border size instead of outline

        //GetDlgItem(IDC_BDRSZ)->EnableWindow(!is_basic_amt);

        UpdateData(FALSE);

        //m_DumpBmp.UpdateBltRect(FALSE);

        UpdateImg();
    }
}

void CImgOutDlg::FillPalCombo()
{
    if ((nPalAmt != 1) && (pButtonLabel != nullptr))
    {
        for (int nNodeIndex = 0; nNodeIndex < nPalAmt; nNodeIndex++)
        {
            m_CB_Pal.AddString(&pButtonLabel[nNodeIndex * 16]);
        }
    }
    else
    {
        m_CB_Pal.AddString(_T("Selected"));
    }

    m_CB_Pal.SetCurSel(0);
}

void CImgOutDlg::OnCbnSelchangePal()
{
    // TODO: Add your control notification handler code here
}

void CImgOutDlg::OnCbnSelchangeZoom()
{
    // TODO: Add your control notification handler code here

    UpdateImg();
}

void CImgOutDlg::OnEnChangeBdrsz()
{

}

void CImgOutDlg::OnEnChangeSpcsz()
{
    // TODO:  If this is a RICHEDIT control, the control will not
    // send this notification unless you override the CDialog::OnInitDialog()
    // function and call CRichEditCtrl().SetEventMask()
    // with the ENM_CHANGE flag ORed into the mask.

    // TODO:  Add your control notification handler code here
}

void CImgOutDlg::OnDeltaposBdrspn(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);

    m_BdrSpn.SetPos(pNMUpDown->iPos);

    UpdateImg();

    *pResult = 0;
}

void CImgOutDlg::OnSettingsSetbackgroundcolor32847()
{
    CColorDialog c_dlg(m_DumpBmp.crBGCol);

    if (c_dlg.DoModal() == IDOK)
    {
        m_DumpBmp.SetBG(c_dlg.GetColor());
        UpdateImg();
    }
}

void CImgOutDlg::LoadSettings()
{
    CRegProc sett;

    sett.LoadReg(REG_IMGOUT);

    m_DumpBmp.crBGCol = sett.imgout_bgcol;

    m_CB_Zoom.SetCurSel(sett.imgout_zoomindex);

    UpdateData();

    bTransPNG = sett.bTransPNG;
    border_sz = sett.imgout_border;

    UpdateData(FALSE);

    // This logic is turned off because it causes the imgdumpbmp code to redraw before the
    // sprite is loaded, which results in all bad.
    /*
    RECT window_rect;

    window_rect = sett.imgout_szpos;

    if (window_rect.top != c_badWindowPosValue)
    {
        MoveWindow(&window_rect);
        ResizeBmp();
    } */
}

void CImgOutDlg::SaveSettings()
{
    CRegProc sett;

    sett.imgout_bgcol = m_DumpBmp.crBGCol;

    sett.imgout_border = border_sz;
    sett.imgout_zoomindex = m_CB_Zoom.GetCurSel();
    sett.bTransPNG = bTransPNG;

    RECT window_rect;

    GetWindowRect(&window_rect);
    sett.imgout_szpos = window_rect;

    sett.SaveReg(REG_IMGOUT);
}

void CImgOutDlg::ResizeBmp()
{
    if (bCanSize)
    {
        RECT new_sz;
        GetClientRect(&new_sz);

        new_sz.left += rct_dummy.right;

        GetDlgItem(IDC_IMGDBMP)->MoveWindow(&new_sz);

        UpdateImg();
    }
}

void CImgOutDlg::OnFileSave()
{
    CFileDialog sfd(
        FALSE,
        NULL,
        NULL,
        OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY,
        _T("PNG Image (*.png)|*.png|GIF Image (*.gif)|*.GIF|BMP Image (*.bmp)|*.BMP|JPEG Image (*.jpg)|*.jpg||")
    );

    if (sfd.DoModal() == IDOK)
    {
        int output_width = m_DumpBmp.GetOutputW();
        int output_height = m_DumpBmp.GetOutputH();

        CString output_ext = _T(".png");
        GUID img_format = ImageFormatPNG;

        switch (sfd.GetOFN().nFilterIndex)
        {
        default:
        case 1:
        {
            img_format = ImageFormatPNG;
            output_ext = _T(".png");
            break;
        }
        case 2:
        {
            img_format = ImageFormatGIF;
            output_ext = _T(".gif");
            break;
        }
        case 3:
        {
            img_format = ImageFormatBMP;
            output_ext = _T(".bmp");
            break;
        }
        case 4:
        {
            img_format = ImageFormatJPEG;
            output_ext = _T(".jpg");
            break;
        }
        }

        CImage out_img;
        if (out_img.Create(output_width, output_height, 32, CImage::createAlphaChannel * bTransPNG * (sfd.GetOFN().nFilterIndex == 1)))
        {
            if (bTransPNG)
            {
                m_DumpBmp.UpdateCtrl(FALSE, (UINT8*)out_img.GetBits());
            }
            else
            {
                CDC* output_DC;

                output_DC = CDC::FromHandle(out_img.GetDC());
                output_DC->BitBlt(0, 0, output_width, output_height, &m_DumpBmp.MainDC, 0, 0, SRCCOPY);
            }

            OPENFILENAME sfd_ofn = sfd.GetOFN();

            CString save_str;
            CString output_str;

            save_str = sfd_ofn.lpstrFile;

            if (save_str.Find(output_ext) == save_str.GetLength() - 4)
            {
                output_str = save_str;
            }
            else
            {
                output_str.Format(_T("%s%s"), sfd_ofn.lpstrFile, output_ext);
            }

            HRESULT hr = out_img.Save(output_str, img_format);

            if (FAILED(hr))
            {
                CString strInfo;
                strInfo.Format(_T("Image export to file '%s' failed.\n\nThe error code is 0x%x"), output_str.GetString(), hr);
                MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONERROR);
            }

            if (!bTransPNG)
            {
                out_img.ReleaseDC();
            }
            else
            {
                m_DumpBmp.UpdateCtrl();
            }
        }
        else
        {
            MessageBox(_T("Image export failed: Failed to create the image file."), GetHost()->GetAppName(), MB_ICONERROR);
        }
    }
}

void CImgOutDlg::OnClose()
{
    SaveSettings();

    CDialog::OnClose();
}

void CImgOutDlg::OnEnChangeEditBdrsz()
{
    // TODO:  If this is a RICHEDIT control, the control will not
    // send this notification unless you override the CDialog::OnInitDialog()
    // function and call CRichEditCtrl().SetEventMask()
    // with the ENM_CHANGE flag ORed into the mask.

    // TODO:  Add your control notification handler code here

    static BOOL bFirstSet = TRUE;

    if (bFirstSet)
    {
        bFirstSet = FALSE;
    }
    else
    {
        UpdateData();
        m_BdrSpn.SetPos(border_sz);
        UpdateData(FALSE);
        UpdateImg();
    }
}

BOOL CImgOutDlg::PreTranslateMessage(MSG* pMsg)
{
    if (m_hAccelTable)
    {
        if (::TranslateAccelerator(GetSafeHwnd(), m_hAccelTable, pMsg))
        {
            return(TRUE);
        }
    }

    if (pMsg->message == WM_KEYDOWN)
    {
        if (pMsg->wParam == VK_RETURN || pMsg->wParam == VK_ESCAPE)
        {
            pMsg->wParam = NULL;
        }
    }

    return CDialog::PreTranslateMessage(pMsg);
}

void CImgOutDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    if (bDlgInit)
    {
        RECT rDummy;
        GetDlgItem(IDC_DUMMY)->GetWindowRect(&rDummy);

        lpMMI->ptMinTrackSize.x = (rDummy.right - rDummy.left) + (SCROLL_W * 4);
        lpMMI->ptMinTrackSize.y = (rDummy.bottom - rDummy.top) + (SCROLL_W * (2 + 1));
    }

    CWnd::OnGetMinMaxInfo(lpMMI);
}

void CImgOutDlg::OnSettingsUsetransparentpng()
{
    bTransPNG = !bTransPNG;
}

void CImgOutDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);

    CMenu* SettMenu = GetMenu()->GetSubMenu(1); //1 == Settings Menu

    if (pPopupMenu == SettMenu)
    {
        pPopupMenu->CheckMenuItem(ID_SETTINGS_USETRANSPARENTPNG, MF_CHECKED * bTransPNG);
    }
}
