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
    ON_WM_MOUSEWHEEL()
    ON_WM_CLOSE()
    ON_WM_DESTROY()
    ON_WM_CREATE()
    ON_WM_INITMENUPOPUP()

    ON_COMMAND(ID_ZOOM_1X, &CPreviewDlg::OnZoom1x)
    ON_COMMAND(ID_ZOOM_2X, &CPreviewDlg::OnZoom2x)
    ON_COMMAND(ID_ZOOM_3X, &CPreviewDlg::OnZoom3x)
    ON_COMMAND(ID_ZOOM_4X, &CPreviewDlg::OnZoom4x)
    ON_COMMAND(ID_ZOOM_5X, &CPreviewDlg::OnZoom5x)
    ON_COMMAND(ID_ZOOM_6X, &CPreviewDlg::OnZoom6x)
    ON_COMMAND(ID_ZOOM_7X, &CPreviewDlg::OnZoom7x)
    ON_COMMAND(ID_ZOOM_8X, &CPreviewDlg::OnZoom8x)

    ON_COMMAND(ID_FILE_CLOSE, &CPreviewDlg::OnFileClose)
    ON_COMMAND(ID_FILE_EXPORTIMAGE, &CPreviewDlg::OnFileExportImg)
    ON_COMMAND(ID_FILE_LOADSPRITE, &CPreviewDlg::OnLoadCustomSpriteForZero)
    ON_COMMAND(ID_FILE_LOADSPRITEFLIPPED, &CPreviewDlg::OnLoadCustomSpriteForZeroFlipped)

    ON_COMMAND(ID_SETTINGS_BLINKINVERTS, &CPreviewDlg::OnSetBlinkInverts)
    ON_COMMAND(ID_SETTINGS_SETBACKGROUNDCOLOR, &CPreviewDlg::OnSetBackgroundCol)
    ON_COMMAND(ID_SETTINGS_SETBLINKCOLOR, &CPreviewDlg::OnSetBlinkCol)
    ON_COMMAND(ID_SETTINGS_SETBACKGROUNDIMAGE, &CPreviewDlg::OnSetBackgroundImage)

    ON_COMMAND(ID_ACC_ADDZOOM, &CPreviewDlg::AddZoom)
    ON_COMMAND(ID_ACC_SUBZOOM, &CPreviewDlg::SubZoom)

    ON_COMMAND(ID_SETTINGS_BLENDALPHA, &CPreviewDlg::SetBlendToAlpha)
    ON_COMMAND(ID_SETTINGS_BLENDADD, &CPreviewDlg::SetBlendToAdd)

    ON_COMMAND(ID_SETTINGS_TILEIMAGEBACKGROUND, &CPreviewDlg::OnTileBackground)
    ON_COMMAND(ID_SETTINGS_RESETBACKGROUNDOFFSET, &CPreviewDlg::OnResetBackgroundOffset)
    ON_COMMAND(ID_SETTINGS_USEBGCOLOR, &CPreviewDlg::OnSettingsUseBackgroundColor)
    ON_COMMAND(ID_SETTINGS_CLICKANDFIND, &CPreviewDlg::OnSettingsClickToFindColor)

    ON_COMMAND_RANGE(k_nTextureLoadCommandMask, k_nTextureLoadCommandMask + MAX_IMAGES_DISPLAYABLE, &CPreviewDlg::OnLoadCustomSpriteNormal)
    ON_COMMAND_RANGE(k_nTextureLoadCommandMask + FLIPPED_IMAGES_MESSAGE_OFFSET, k_nTextureLoadCommandMask + FLIPPED_IMAGES_MESSAGE_OFFSET + MAX_IMAGES_DISPLAYABLE, &CPreviewDlg::OnLoadCustomSpriteFlipped)

END_MESSAGE_MAP()

void CPreviewDlg::InitDispCtrl()
{
    if (!m_fImgDispInit)
    {
        RECT rClient;
        GetClientRect(&rClient);

        m_ImgDisp.Create(L"CImgDisp", L"ImgDisp", WS_CHILD | WS_VISIBLE, rClient, this, 1234);
        m_fImgDispInit = TRUE;
    }
}

void CPreviewDlg::SetWindowCaption(LPCWSTR pszCaption)
{
    SetWindowText(pszCaption);
}

void CPreviewDlg::OnShowWindow(BOOL fShow, UINT nStatus)
{
    CDialog::OnShowWindow(fShow, nStatus);

    if (m_fImgDispInit)
    {
        m_ImgDisp.UpdateCtrl();
    }
    else
    {
        InitDispCtrl();
    }
}

void CPreviewDlg::OnSize(UINT nType, int cx, int cy)
{
    CDialog::OnSize(nType, cx, cy);

    if (m_fImgDispInit)
    {
        RECT rClient;
        GetClientRect(&rClient);

        m_ImgDisp.MoveWindow(&rClient);
    }
}

BOOL CPreviewDlg::OnMouseWheel(UINT nFlags, short zDelta, CPoint pt)
{
    if (zDelta > 0)
    {
        AddZoom();
    }
    else
    {
        SubZoom();
    }

    return TRUE;
}

void CPreviewDlg::OnSetBackgroundCol()
{
    CColorDialog ColorDlg(m_ImgDisp.GetBGCol());

    if (ColorDlg.DoModal() == IDOK)
    {
        m_ImgDisp.SetBGCol(ColorDlg.GetColor());

        bool fShouldSwitchToUseColor = (m_ImgDisp.IsBGTiled() || m_ImgDisp.IsUsingBGCol());

        if (!fShouldSwitchToUseColor)
        {
            CString strQuestion;
            if (strQuestion.LoadString(IDS_SETBACKGROUND_FULL))
            {
                fShouldSwitchToUseColor = (MessageBox(strQuestion, GetHost()->GetAppName(), MB_YESNO | MB_DEFBUTTON1) == IDYES);
            }
        }

        if (fShouldSwitchToUseColor)
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

void CPreviewDlg::OnSetBlinkInverts()
{
    m_ImgDisp.SetBlinkInverts(!m_ImgDisp.GetBlinkInverts());
}

void CPreviewDlg::OnSetBackgroundImage()
{
    CFileDialog OpenDialog(TRUE, NULL, NULL, NULL, L"Standard graphics files|*.bmp; *.png; *.gif; *.jpg; *.jpeg||", this);

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
            if (strError.LoadString(IDS_ERROR_LOADING_BITMAP_BG))
            {
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }
}

void CPreviewDlg::LoadSettings()
{
    CRegProc LoadSett;

    LoadSett.LoadReg(eRegistryStoreID::REG_PREV);

    szBGLoc = LoadSett.szPrevBGLoc;

    m_ImgDisp.SetBGCol(LoadSett.prev_bgcol);
    m_ImgDisp.SetBlinkCol(LoadSett.prev_blinkcol);
    m_ImgDisp.SetBlinkInverts(LoadSett.prev_blinkinverts);
    m_ImgDisp.SetBGTiled(LoadSett.fTileBG);
    m_ImgDisp.SetBGXOffs(LoadSett.nBGXOffs);
    m_ImgDisp.SetBGYOffs(LoadSett.nBGYOffs);
    m_ImgDisp.SetUseBGCol(LoadSett.fUseBGCol);
    m_ImgDisp.SetZoom(LoadSett.dPreviewZoom);
    m_ImgDisp.SetClickToFindColorSetting(LoadSett.fClickToFind);

    if (LoadSett.fUseBGCol)
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

        long nWindowDelta = (window_rect.right - window_rect.left);

        window_rect.left += nWindowDelta;
        window_rect.right += nWindowDelta;

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

    if (m_fImgDispInit)
    {
        m_ImgDisp.UpdateCtrl();
    }
}

void CPreviewDlg::SaveSettings()
{
    CRegProc SaveSett;

    wcscpy(SaveSett.szPrevBGLoc, szBGLoc.GetBuffer());
    SaveSett.prev_bgcol = m_ImgDisp.GetBGCol();
    SaveSett.prev_blinkcol = m_ImgDisp.GetBlinkCol();
    SaveSett.prev_blinkinverts = m_ImgDisp.GetBlinkInverts();
    SaveSett.fTileBG = m_ImgDisp.IsBGTiled();
    SaveSett.nBGXOffs = m_ImgDisp.GetBGXOffs();
    SaveSett.nBGYOffs = m_ImgDisp.GetBGYOffs();
    SaveSett.fUseBGCol = m_ImgDisp.IsUsingBGCol();
    SaveSett.dPreviewZoom = m_ImgDisp.GetZoom();
    SaveSett.fClickToFind = m_ImgDisp.GetClickToFindColorSetting();

    RECT window_rect;

    GetWindowRect(&window_rect);
    SaveSett.prev_szpos = window_rect;

    SaveSett.SaveReg(eRegistryStoreID::REG_PREV);
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

    m_dropTarget.Register(this);

    return 0;
}

void CPreviewDlg::OnFileClose()
{
    // TODO: Add your command handler code here
    ShowWindow(SW_HIDE);
}

BOOL CPreviewDlg::PreTranslateMessage(MSG* pMsg)
{
    if (g_hAccelTable)
    {
        if (::TranslateAccelerator(GetSafeHwnd(), g_hAccelTable, pMsg))
        {
            return(TRUE);
        }
    }

    switch (pMsg->message)
    {
    case WM_KEYDOWN:
    {
        if ((pMsg->wParam == VK_RETURN) || (pMsg->wParam == VK_ESCAPE))
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

    // Set the icon for this dialog.  The framework does this automatically
    //  when the application's main window is not a dialog
    SetIcon(m_hIcon, TRUE);          // Set big icon
    SetIcon(m_hIcon, FALSE);        // Set small icon

    return TRUE;  // return TRUE unless you set the focus to a control
    // EXCEPTION: OCX Property Pages should return FALSE
}

void CPreviewDlg::OnTileBackground()
{
    m_ImgDisp.SetBGTiled(!m_ImgDisp.IsBGTiled());
    m_ImgDisp.UpdateCtrl();
}

void CPreviewDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, fSysMenu);

    CMenu* pFileMenu = GetMenu()->GetSubMenu(0); // edit menu

    if (pFileMenu == pPopupMenu)
    {
        const bool fGameLoaded = GetHost()->GetCurrGame();
        pPopupMenu->EnableMenuItem(ID_FILE_EXPORTIMAGE, !fGameLoaded);
        pPopupMenu->EnableMenuItem(ID_FILE_LOADSPRITE, !fGameLoaded);
        pPopupMenu->EnableMenuItem(ID_FILE_LOADSPRITEFLIPPED, !fGameLoaded);

        if (fGameLoaded)
        {
            struct ImportMenuOption
            {
                int nOriginalMenuId;
                LPWSTR pszMonoString;
                LPCWSTR pszMultiFormat;
                UINT nAdditionalOffset;
            };

            ImportMenuOption rgImportMenuOptions[] =
            {
                { ID_FILE_LOADSPRITE, (LPWSTR)L"Load Texture", L"Load Texture for Palette %u", 0 },
                { ID_FILE_LOADSPRITEFLIPPED, (LPWSTR)L"Load Flipped Texture", L"Load Flipped Texture for Palette %u", FLIPPED_IMAGES_MESSAGE_OFFSET },
            };

            for (UINT iIndex = 0; iIndex < ARRAYSIZE(rgImportMenuOptions); iIndex++)
            {
                // Since the optional submenu is dynamically sized, reset everything...
                pPopupMenu->DeleteMenu(rgImportMenuOptions[iIndex].nOriginalMenuId, MF_BYCOMMAND);

                const uint32_t nPaletteCount = GetHost()->GetPalModDlg()->MainPalGroup->GetPalAmt();

                MENUITEMINFO miiNew = { 0 };
                miiNew.cbSize = sizeof(MENUITEMINFO);
                miiNew.dwTypeData = rgImportMenuOptions[iIndex].pszMonoString;
                miiNew.wID = rgImportMenuOptions[iIndex].nOriginalMenuId;

                // For multisprite palettes, enable loading to any given sprite slot
                if (nPaletteCount > 1)
                {
                    MENUITEMINFO mii = { 0 };
                    UINT nCurrentPosition = iIndex + 1; // after Export
                    CMenu spriteMenu;
                    spriteMenu.CreatePopupMenu();
                    CString strMenuName;

                    for (uint32_t nSpritePos = 0; nSpritePos < nPaletteCount; nSpritePos++)
                    {
                        mii.cbSize = sizeof(MENUITEMINFO);
                        mii.fMask = MIIM_ID | MIIM_STRING;
                        mii.wID = (nSpritePos | k_nTextureLoadCommandMask) + rgImportMenuOptions[iIndex].nAdditionalOffset;
                        strMenuName.Format(rgImportMenuOptions[iIndex].pszMultiFormat, nSpritePos);

                        mii.dwTypeData = (LPWSTR)strMenuName.GetString();

                        spriteMenu.InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                    }

                    miiNew.fMask = MIIM_ID | MIIM_SUBMENU | MIIM_STRING;
                    miiNew.hSubMenu = spriteMenu.Detach();   // Detach() to keep the pop-up menu alive
                }
                else
                {
                    miiNew.fMask = MIIM_ID | MIIM_STRING;
                    miiNew.hSubMenu = nullptr;
                }

                pPopupMenu->InsertMenuItem(iIndex + 1, &miiNew, TRUE);
            }
        }
    }

    CMenu* pSettMenu = GetMenu()->GetSubMenu(1); //1 = settings menu

    if (pSettMenu == pPopupMenu)
    {
        pSettMenu->CheckMenuItem(ID_SETTINGS_BLINKINVERTS, m_ImgDisp.IsUsingBlinkInverts() ? MF_CHECKED : MF_UNCHECKED);
        pSettMenu->CheckMenuItem(ID_SETTINGS_TILEIMAGEBACKGROUND, m_ImgDisp.IsBGTiled() ? MF_CHECKED : MF_UNCHECKED);
        pSettMenu->CheckMenuItem(ID_SETTINGS_USEBGCOLOR, m_ImgDisp.IsUsingBGCol() ? MF_CHECKED : MF_UNCHECKED);
        pSettMenu->CheckMenuItem(ID_SETTINGS_CLICKANDFIND, m_ImgDisp.GetClickToFindColorSetting() ? MF_CHECKED : MF_UNCHECKED);
        //pSettMenu->EnableMenuItem(ID_SETTINGS_RESETBACKGROUNDOFFSET, m_ImgDisp.IsBGTiled());

        pSettMenu->CheckMenuItem(ID_SETTINGS_BLENDALPHA, (m_ImgDisp.GetBlendMode() == CImgDisp::BlendMode::Alpha) ? MF_CHECKED : MF_UNCHECKED);
        pSettMenu->CheckMenuItem(ID_SETTINGS_BLENDADD,   (m_ImgDisp.GetBlendMode() == CImgDisp::BlendMode::AdditiveARGB) ? MF_CHECKED : MF_UNCHECKED);
    }

    CMenu* pZoomMenu = GetMenu()->GetSubMenu(2); //2 = Zoom menu

    if (pZoomMenu == pPopupMenu)
    {
        double fpCurrZoom = m_ImgDisp.GetZoom();
        pZoomMenu->CheckMenuItem(ID_ZOOM_1X, MF_BYCOMMAND | ((fpCurrZoom == 1.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_2X, MF_BYCOMMAND | ((fpCurrZoom == 2.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_3X, MF_BYCOMMAND | ((fpCurrZoom == 3.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_4X, MF_BYCOMMAND | ((fpCurrZoom == 4.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_5X, MF_BYCOMMAND | ((fpCurrZoom == 5.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_6X, MF_BYCOMMAND | ((fpCurrZoom == 6.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_7X, MF_BYCOMMAND | ((fpCurrZoom == 7.0) ? MF_CHECKED : MF_UNCHECKED));
        pZoomMenu->CheckMenuItem(ID_ZOOM_8X, MF_BYCOMMAND | ((fpCurrZoom == 8.0) ? MF_CHECKED : MF_UNCHECKED));
    }
}

void CPreviewDlg::OnResetBackgroundOffset()
{
    m_ImgDisp.SetBGXOffs(0);
    m_ImgDisp.SetBGYOffs(0);

    m_ImgDisp.UpdateCtrl();
}

void CPreviewDlg::LoadCustomSpriteFromPath(UINT nPositionToLoadTo, SpriteImportDirection direction, wchar_t* pszPath)
{
    if (m_ImgDisp.LoadExternalRAWSprite(nPositionToLoadTo, direction, pszPath))
    {
        m_ImgDisp.UpdateCtrl();
    }
}

void CPreviewDlg::OnLoadCustomSprite(UINT nPositionToLoadTo /*= 0*/, SpriteImportDirection direction /* = SpriteImportDirection::TopDown */)
{
    if (GetHost()->GetCurrGame())
    {
        CFileDialog OpenDialog(TRUE, NULL, NULL, NULL, L"RAW Texture file|*-W-*-H-*.*||", this);

        if (OpenDialog.DoModal() == IDOK)
        {
            // eliminate the k_nTextureLoadCommandMask mask for usage...
            UINT nCorrectedPosition = (nPositionToLoadTo >= k_nTextureLoadCommandMask) ? nPositionToLoadTo - k_nTextureLoadCommandMask : nPositionToLoadTo;

            if (nCorrectedPosition > MAX_IMAGES_DISPLAYABLE)
            {
                nCorrectedPosition -= FLIPPED_IMAGES_MESSAGE_OFFSET;
            }

            LoadCustomSpriteFromPath(nCorrectedPosition, direction, OpenDialog.GetPathName().GetBuffer());
        }
    }
    else
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_TEXTURE_NOGAME))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONEXCLAMATION);
        }
    }
}

void CPreviewDlg::OnFileExportImg()
{
    if (m_ImgDisp.HaveImageData())
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
        if (strError.LoadString(IDS_ERROR_NO_IMAGES))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONEXCLAMATION);
        }
    }
}

void CPreviewDlg::OnClose()
{
    CWnd::OnClose();
}

void CPreviewDlg::AddZoom()
{
    double fpCurrZoom = m_ImgDisp.GetZoom();

    CPalModZoom::IncrementZoom(&fpCurrZoom);

    m_ImgDisp.SetZoom(fpCurrZoom);
}

void CPreviewDlg::SubZoom()
{
    double fpCurrZoom = m_ImgDisp.GetZoom();

    CPalModZoom::DecrementZoom(&fpCurrZoom);

    m_ImgDisp.SetZoom(fpCurrZoom);
}

void CPreviewDlg::UpdateZoomSetting(double fpNewZoom)
{
    m_ImgDisp.SetZoom(fpNewZoom);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(2); //2 = zoom menu
    pSettMenu->CheckMenuItem(ID_ZOOM_1X, MF_BYCOMMAND | ((fpNewZoom == 1.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_2X, MF_BYCOMMAND | ((fpNewZoom == 2.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_3X, MF_BYCOMMAND | ((fpNewZoom == 3.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_4X, MF_BYCOMMAND | ((fpNewZoom == 4.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_5X, MF_BYCOMMAND | ((fpNewZoom == 5.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_6X, MF_BYCOMMAND | ((fpNewZoom == 6.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_7X, MF_BYCOMMAND | ((fpNewZoom == 7.0) ? MF_CHECKED : MF_UNCHECKED));
    pSettMenu->CheckMenuItem(ID_ZOOM_8X, MF_BYCOMMAND | ((fpNewZoom == 8.0) ? MF_CHECKED : MF_UNCHECKED));
}

void CPreviewDlg::OnSettingsUseBackgroundColor()
{
    m_ImgDisp.SetUseBGCol(!(m_ImgDisp.IsUsingBGCol()));

    if (m_ImgDisp.CanForceBGBitmapAvailable())
    {
        m_ImgDisp.UpdateCtrl();
    }
}

void CPreviewDlg::OnSettingsClickToFindColor()
{
    m_ImgDisp.SetClickToFindColorSetting(!m_ImgDisp.GetClickToFindColorSetting());
}
