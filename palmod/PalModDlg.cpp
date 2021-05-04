// PalModDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#ifdef ENABLE_MUI_SUPPORT
#include <muiload.h>
#endif

// CAboutDlg dialog used for App About

class CAboutDlg : public CDialog
{
public:
    CAboutDlg();

    // Dialog Data
    enum { IDD = IDD_ABOUTBOX };

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    BOOL OnInitDialog();

// Implementation
protected:
    DECLARE_MESSAGE_MAP()
};

CAboutDlg::CAboutDlg() : CDialog(CAboutDlg::IDD)
{
}

void CAboutDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
}

BEGIN_MESSAGE_MAP(CAboutDlg, CDialog)
END_MESSAGE_MAP()

BOOL CAboutDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    CString strAppName;
    if (strAppName.LoadString(IDS_CURRENTAPPNAME))
    {
        GetDlgItem(IDC_ABOUTNAME)->SetWindowText(strAppName);
    }

    return TRUE;  // return TRUE unless you set the focus to a control
}

static UINT BASED_CODE indicators[] =
{
    ID_INDICATOR_MAIN,
    ID_INDICATOR_EXTRA
};

CStringA szPasteStr = "";

#ifdef ENABLE_MUI_SUPPORT
HMODULE g_hMUIInstance = nullptr;

CPalModDlg::~CPalModDlg()
{
    FreeMUILibrary(g_hMUIInstance);
}
#endif

// CPalModDlg dialog
CPalModDlg::CPalModDlg(CWnd* pParent /*=NULL*/)
    : CDialog(CPalModDlg::IDD, pParent)
{
#ifdef ENABLE_MUI_SUPPORT_TESTING
    WCHAR szzPreferredLanguage[10] = L"en-gb";
    DWORD langCount = 0;

    SetThreadPreferredUILanguages(MUI_LANGUAGE_NAME, szzPreferredLanguage, &langCount);
#endif

#ifdef ENABLE_MUI_SUPPORT
    WCHAR szFileName[MAX_PATH];

    if (GetModuleFileName(nullptr, szFileName, ARRAYSIZE(szFileName)))
    {
#ifdef ENABLE_MUI_SUPPORT_TESTING
        g_hMUIInstance = LoadMUILibrary(szFileName, MUI_LANGUAGE_NAME, LOCALE_CUSTOM_DEFAULT);
#else
        g_hMUIInstance = LoadMUILibrary(szFileName, MUI_LANGUAGE_NAME, LOCALE_USER_DEFAULT);
#endif
    }

    if (!g_hMUIInstance)
    {
        AfxMessageBox(L"Warning: resources failed to load!\n");
    }
#endif

    m_hIcon = AfxGetApp()->LoadIcon(IDR_MAINFRAME);
}

void CPalModDlg::DoDataExchange(CDataExchange* pDX)
{
    CDialog::DoDataExchange(pDX);
    DDX_Control(pDX, IDC_CHARCOMBO, m_CBUnitSel);
    DDX_Control(pDX, IDC_CHILDCOMBO2, m_CBChildSel2);
    DDX_Control(pDX, IDC_CHILDCOMBO1, m_CBChildSel1);
    DDX_Control(pDX, IDC_PALHOST, m_PalHost);
    DDX_Control(pDX, IDC_RH_SLIDER, m_RHSlider);
    DDX_Control(pDX, IDC_GS_SLIDER, m_GSSlider);
    DDX_Control(pDX, IDC_BL_SLIDER, m_BLSlider);
    DDX_Radio(pDX, IDC_RADIO_RGB, m_ColMode);
    DDX_Control(pDX, IDC_A_SLIDER, m_ASlider);
    DDX_Text(pDX, IDC_EDIT_RH, m_Edit_RH);
    DDX_Text(pDX, IDC_EDIT_GS, m_Edit_GS);
    DDX_Text(pDX, IDC_EDIT_BL, m_Edit_BL);
    DDX_Text(pDX, IDC_EDIT_A, m_Edit_A);
    DDX_Text(pDX, IDC_EDIT_RHDESC, m_EditRHDesc);
    DDX_Text(pDX, IDC_EDIT_GSDESC, m_EditGSDesc);
    DDX_Text(pDX, IDC_EDIT_BLDESC, m_EditBLDesc);
    DDX_Text(pDX, IDC_EDIT_ADESC, m_EditADesc);
}

#pragma warning( push )
#pragma warning( disable : 26454 ) // bug in Microsoft headers

// CPalModDlg message handlers
BEGIN_MESSAGE_MAP(CPalModDlg, CDialog)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    //}}AFX_MSG_MAP
    ON_CBN_SELCHANGE(IDC_CHARCOMBO, &CPalModDlg::OnCBUnitChildChange)
    ON_CBN_SELCHANGE(IDC_CHILDCOMBO1, &CPalModDlg::OnCBUnitChildChange)
    ON_CBN_SELCHANGE(IDC_CHILDCOMBO2, &CPalModDlg::OnCBUnitChildChange)
    ON_WM_HSCROLL()
    ON_BN_CLICKED(IDC_RADIO_HLS, &CPalModDlg::OnRadioHLS)
    ON_BN_CLICKED(IDC_RADIO_RGB, &CPalModDlg::OnRadioRGB)
    ON_WM_CLOSE()
    ON_EN_KILLFOCUS(IDC_EDIT_RH, &CPalModDlg::OnKillFocusEditRh)
    ON_EN_KILLFOCUS(IDC_EDIT_GS, &CPalModDlg::OnKillFocusEditGS)
    ON_EN_KILLFOCUS(IDC_EDIT_BL, &CPalModDlg::OnKillFocusEditBL)
    ON_EN_KILLFOCUS(IDC_EDIT_A, &CPalModDlg::OnKillFocusEditA)
    ON_BN_CLICKED(IDC_BNEWCOL, &CPalModDlg::OnBnNewCol)
    ON_COMMAND(ID_SHOW32BITRGB, &CPalModDlg::OnColSett)
    ON_BN_CLICKED(IDC_BUPDATE, &CPalModDlg::OnBnUpdate)
    ON_COMMAND(ID_FILE_PATCH, &CPalModDlg::OnFilePatch)
    ON_COMMAND(ID_FILE_CROSSPATCH, &CPalModDlg::OnFileCrossPatch)
    ON_COMMAND(ID_TOOLS_GENERATEPATCHFILE, &CPalModDlg::OnSavePatchFile)
    ON_WM_INITMENUPOPUP()
    ON_COMMAND(ID_SETTINGS_SETTINGS, &CPalModDlg::OnSettingsSettings)
    ON_COMMAND(ID_SETTINGS_EXTCOPYDATA, &CPalModDlg::OnChangeExtendedCopyData)    
    ON_COMMAND(ID_ACC_UNDO, &CPalModDlg::OnEditUndo)
    ON_COMMAND(ID_ACC_REDO, &CPalModDlg::OnEditRedo)
    ON_COMMAND(ID_ACC_COPY, &CPalModDlg::OnEditCopy)
    ON_COMMAND(ID_ACC_PASTE, &CPalModDlg::OnEditPaste)
    ON_COMMAND(ID_ACC_SELALL, &CPalModDlg::OnEditSelectAll)
    ON_COMMAND(ID_ACC_SELNONE, &CPalModDlg::OnEditSelectNone)
    ON_COMMAND(ID_ACC_LOADLASTUSEDDIR, &CPalModDlg::LoadLastDir)
    ON_COMMAND(ID_ACC_BLINK, &CPalModDlg::Blink)
    ON_COMMAND(ID_ACC_FILEOPEN, &CPalModDlg::OnFileOpen)
    ON_COMMAND(ID_ACC_FILEPATCH, &CPalModDlg::OnFilePatch)
    ON_COMMAND(ID_ACC_LOADPALETTE, &CPalModDlg::OnImportPalette)
    ON_COMMAND(ID_ACC_SAVEPALETTE, &CPalModDlg::OnExportPalette)
    ON_COMMAND(ID_ACC_SNIFFCOLOR, &CPalModDlg::OnCopyColorAtPointer)
    ON_COMMAND(ID_ACC_SNIFFPASTE, &CPalModDlg::OnPasteColorAtPointer)

    ON_COMMAND(ID_EDIT_UNDO, &CPalModDlg::OnEditUndo)
    ON_COMMAND(ID_EDIT_REDO, &CPalModDlg::OnEditRedo)
    ON_COMMAND(ID_EDIT_COPY, &CPalModDlg::OnEditCopy)
    ON_COMMAND(ID_EDIT_PASTE, &CPalModDlg::OnEditPaste)
    ON_COMMAND(ID_EDIT_SELECTALL, &CPalModDlg::OnEditSelectAll)
    ON_COMMAND(ID_EDIT_SELECTNONE, &CPalModDlg::OnEditSelectNone)
    ON_COMMAND(ID_FILE_LOADLASTUSEDDIR, &CPalModDlg::LoadLastDir)

    ON_COMMAND(ID_COLORSPERLINE_8COLORSPERLINE, &CPalModDlg::SetColorsPerLineTo8)
    ON_COMMAND(ID_COLORSPERLINE_16COLORSPERLINE, &CPalModDlg::SetColorsPerLineTo16)
    ON_COMMAND(ID_COLORFORMAT_RGB333, &CPalModDlg::SetColorFormatTo9)
    ON_COMMAND(ID_COLORFORMAT_RGB444, &CPalModDlg::SetColorFormatTo12A)
    ON_COMMAND(ID_COLORFORMAT_RGB444_LE, &CPalModDlg::SetColorFormatTo12A_LE)
    ON_COMMAND(ID_COLORFORMAT_RGB555, &CPalModDlg::SetColorFormatTo15)
    ON_COMMAND(ID_COLORFORMAT_RGB555_ALT, &CPalModDlg::SetColorFormatTo15ALT)
    ON_COMMAND(ID_COLORFORMAT_RGB555_GBA, &CPalModDlg::SetColorFormatToGBA)
    ON_COMMAND(ID_COLORFORMAT_RGB666, &CPalModDlg::SetColorFormatToNEOGEO)
    ON_COMMAND(ID_COLORFORMAT_SHARPRGB, &CPalModDlg::SetColorFormatToSharpRGB)
    ON_COMMAND(ID_COLORFORMAT_xRGB888, &CPalModDlg::SetColorFormatToxRGB888)
    ON_COMMAND(ID_COLORFORMAT_xBGR888, &CPalModDlg::SetColorFormatToxBGR888)
    ON_COMMAND(ID_COLORFORMAT_ARGB1888, &CPalModDlg::SetColorFormatToARGB1888)
    ON_COMMAND(ID_COLORFORMAT_ARGB7888, &CPalModDlg::SetColorFormatToARGB7888)
    ON_COMMAND(ID_COLORFORMAT_ARGB8888, &CPalModDlg::SetColorFormatToARGB8888)
    ON_COMMAND(ID_TRANSPSETTING_16, &CPalModDlg::SetMaximumWriteTo16Colors)
    ON_COMMAND(ID_TRANSPSETTING_256, &CPalModDlg::SetMaximumWriteTo256Colors)
    
    ON_COMMAND(ID_ALPHASETTING_FIXED, &CPalModDlg::SetAlphaModeToFixed)
    ON_COMMAND(ID_ALPHASETTING_VARIABLE, &CPalModDlg::SetAlphaModeToVariable)
    ON_COMMAND(ID_ALPHASETTING_UNUSED, &CPalModDlg::SetAlphaModeToUnused)
    ON_COMMAND(ID_ALPHASETTING_CHAOTIC, &CPalModDlg::SetAlphaModeToChaotic)
    ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_RH_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
    ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_GS_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
    ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_BL_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
    ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_A_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
    ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN_RH, &CPalModDlg::OnDeltaposSpinRH)
    ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN_GS, &CPalModDlg::OnDeltaposSpinGS)
    ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN_BL, &CPalModDlg::OnDeltaposSpinBL)
    ON_NOTIFY(UDN_DELTAPOS, IDC_SPIN_A, &CPalModDlg::OnDeltaposSpinA)
    ON_COMMAND(ID_FILE_EXIT, &CPalModDlg::OnFileExit)
    ON_COMMAND(ID_FILE_OPENEXTRAS, &CPalModDlg::OnFileOpenExtrasFile)
    ON_COMMAND(ID_FILE_CLOSEFILEDIR, &CPalModDlg::OnFileCloseFileDir)
    ON_WM_TIMER()
    ON_BN_CLICKED(IDC_SHOWPREVIEW, &CPalModDlg::OnBnShowPrev)
    ON_WM_SETFOCUS()
    ON_WM_ACTIVATE()
    ON_COMMAND(ID_FILE_OPEN, &CPalModDlg::OnFileOpen)
    ON_BN_CLICKED(IDC_BCHECKMIX, &CPalModDlg::OnButtonClickCheckEdits)
    ON_BN_CLICKED(IDC_BREVERT, &CPalModDlg::OnBnRevert)
    ON_BN_CLICKED(IDC_BBLINK, &CPalModDlg::OnBnBlink)
    ON_COMMAND(ID_ABOUT_ABOUTPALMOD, &CPalModDlg::OnAboutAboutpalmod)
    ON_BN_CLICKED(IDC_BINVERT, &CPalModDlg::OnBnClickedBinvert)
    ON_COMMAND(ID_TOOLS_LOADACTPALETTE, &CPalModDlg::OnImportPalette)
    ON_COMMAND(ID_TOOLS_SAVEACTPALETTE, &CPalModDlg::OnExportPalette)
    ON_COMMAND(ID_TOOLS_INVERT, &CPalModDlg::OnBnClickedBinvert)
    ON_COMMAND(ID_TOOLS_REVERT, &CPalModDlg::OnBnRevert)
    ON_COMMAND(ID_TOOLS_REVERSE, &CPalModDlg::OnBnClickedReverse)
    ON_COMMAND(ID_TOOLS_BLINK, &CPalModDlg::OnBnBlink)
    ON_WM_GETMINMAXINFO()
    ON_COMMAND(ID_LOADDIRECTORY_DANKUGA, &CPalModDlg::OnLoadDir_Dankuga)
    ON_COMMAND(ID_LD_DBFCI, &CPalModDlg::OnLoadDir_DBFCI)    
    ON_COMMAND(ID_LD_GGXXACR_S, &CPalModDlg::OnLoadDir_GGXXACR_S)
    ON_COMMAND(ID_LD_GGXXACR_P, &CPalModDlg::OnLoadDir_GGXXACR_P)
    ON_COMMAND(ID_LD_JOJOS50, &CPalModDlg::OnLoadDir_Jojos50)
    ON_COMMAND(ID_LD_JOJOS51, &CPalModDlg::OnLoadDir_Jojos51)
    ON_COMMAND(ID_LD_MVC2ARCADE, &CPalModDlg::OnLoadDir_MVC2ArcadeAll)
    ON_COMMAND(ID_LD_MVC2DCUSA, &CPalModDlg::OnLoadDir_MVC2DCUSA)
    ON_COMMAND(ID_LD_MVC2PS2USA, &CPalModDlg::OnLoadDir_MVC2PS2USA)
    ON_COMMAND(ID_LD_MBAACC_S, &CPalModDlg::OnLoadDir_MBAACC_S)
    ON_COMMAND(ID_LOADDIRECTORY_REDEARTH_30, &CPalModDlg::OnLoadDir_RedEarth30)
    ON_COMMAND(ID_LOADDIRECTORY_REDEARTH_31, &CPalModDlg::OnLoadDir_RedEarth31)
    ON_COMMAND(ID_LD_SFIII1, &CPalModDlg::OnLoadDir_SFIII1Arcade)
    ON_COMMAND(ID_LD_SFIII2, &CPalModDlg::OnLoadDir_SFIII2Arcade)
    ON_COMMAND(ID_LD_SFIII3DCALL, &CPalModDlg::OnLoadDir_SFIII3DCAll)
    ON_COMMAND(ID_LD_SFIII3ARCADE10, &CPalModDlg::OnLoadDir_SFIII3Arcade10)
    ON_COMMAND(ID_LD_SFIII3ARCADE51, &CPalModDlg::OnLoadDir_SFIII3Arcade51)
    ON_COMMAND(ID_LD_SFIII3ARCADE4rd, &CPalModDlg::OnLoadDir_SFIII3Arcade4rd)
    ON_COMMAND(ID_LD_SFIII3ARCADE4rd10, &CPalModDlg::OnLoadDir_SFIII3Arcade4rd_10)
    ON_COMMAND(ID_LD_SFIII3ARCADEEX, &CPalModDlg::OnLoadDir_SFIII3ArcadeEx)
    ON_COMMAND(ID_LD_UNICLR, &CPalModDlg::OnLoadDir_UNICLR)

    ON_COMMAND_RANGE(k_nGameLoadROMListMask, k_nGameLoadROMListMask + NUM_GAMES, &CPalModDlg::OnFileOpenInternal)
END_MESSAGE_MAP()

#pragma warning( pop )

BOOL CPalModDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

    CRect rClient;
    GetClientRect(&rClient);

    // Add "About..." menu item to system menu.
    CMenu* pSysMenu = GetSystemMenu(FALSE);
    if (pSysMenu != NULL)
    {
        CString strAboutMenu;
        if (strAboutMenu.LoadString(IDS_ABOUTBOX))
        {
            pSysMenu->AppendMenu(MF_SEPARATOR);
            pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
        }
    }

    // Set the icon for this dialog.  The framework does this automatically
    //  when the application's main window is not a dialog
    SetIcon(m_hIcon, TRUE);            // Set big icon
    SetIcon(m_hIcon, FALSE);        // Set small icon

    //Init XP Style controls
    InitCommonControls();

    //Init Ole
    if (!AfxOleInit())
    {
        AfxMessageBox(L"AfxOleInit Error!");
        bOleInit = FALSE;
    }

    //Create and attach the status bar
    m_StatusBar.Create(this);

    m_StatusBar.SetIndicators(indicators, 2);
    m_StatusBar.SetPaneInfo(0, ID_INDICATOR_MAIN, 0, rClient.Width() - 55);

    m_StatusBar.SetPaneInfo(1, ID_INDICATOR_EXTRA, 0, 55);

    RepositionBars(AFX_IDW_CONTROLBAR_FIRST, AFX_IDW_CONTROLBAR_LAST, ID_INDICATOR_MAIN);

    CString strMsg;
    if (strMsg.LoadStringW(IDS_WELCOME_BACKUP))
    {
        m_StatusBar.SetPaneText(0, strMsg.GetString());
    }

    if (m_ToolTip.Create(this))
    {
        m_ToolTip.AddTool(GetDlgItem(IDC_BCHECKMIX), IDS_BCHECKMIX_TOOLTIP);
        m_ToolTip.AddTool(GetDlgItem(IDC_BUPDATE), IDS_TOOLTIP_UPDATE);
        m_ToolTip.AddTool(GetDlgItem(IDC_BREVERT), IDS_TOOLTIP_REVERT);
        m_ToolTip.AddTool(GetDlgItem(IDC_BNEWCOL), IDS_TOOLTIP_GETCOLOR);

        m_ToolTip.Activate(TRUE);
    }

    m_dropTarget.Register(this);

    //Load the settings
    LoadSettings();

    //Set the controls state
    UpdateEnableCtrls();

    //Set the slider descriptions
    SetSliderDescEdit();

    // Set the settings checkmarks
    UpdateSettingsMenuItems();

    // Use the dynamic appname description instead of the hardcoded RC value
    UpdateAppTitle();    

    return TRUE;  // return TRUE unless you set the focus to a control
}

void CPalModDlg::UpdateAppTitle()
{
    SetWindowText(GetHost()->GetAppName());
}

void CPalModDlg::OnSysCommand(UINT nID, LPARAM lParam)
{
    if ((nID & 0xFFF0) == IDM_ABOUTBOX)
    {
        CAboutDlg dlgAbout;
        dlgAbout.DoModal();
    }
    else
    {
        CDialog::OnSysCommand(nID, lParam);
    }
}

// If you add a minimize button to your dialog, you will need the code below
//  to draw the icon.  For MFC applications using the document/view model,
//  this is automatically done for you by the framework.

void CPalModDlg::OnPaint()
{
    if (IsIconic())
    {
        CPaintDC dc(this); // device context for painting

        SendMessage(WM_ICONERASEBKGND, reinterpret_cast<WPARAM>(dc.GetSafeHdc()), 0);

        // Center icon in client rectangle
        int cxIcon = GetSystemMetrics(SM_CXICON);
        int cyIcon = GetSystemMetrics(SM_CYICON);

        CRect rect;
        GetClientRect(&rect);
        int x = (rect.Width() - cxIcon + 1) / 2;
        int y = (rect.Height() - cyIcon + 1) / 2;

        // Draw the icon
        dc.DrawIcon(x, y, m_hIcon);
    }
    else
    {
        CDialog::OnPaint();
    }

    bCanMinMax = TRUE;
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPalModDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

void CPalModDlg::Enable(BOOL bEnableFlag)
{
    bEnabled = bEnableFlag;

    UpdateEnableCtrls();
}

void CPalModDlg::UpdateEnableCtrls()
{
    //Update general controls
    EnumChildWindows(this->GetSafeHwnd(), &EnumChildProc, (LPARAM)this);

    //Update the sliders
    UpdateSliderSel(FALSE, TRUE);
}

BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam)
{
    int nId = GetWindowLong(hwnd, GWL_ID);

    switch (nId)
    {
    case IDC_RH_SLIDER:
    case IDC_GS_SLIDER:
    case IDC_BL_SLIDER:
    case IDC_A_SLIDER:
    case IDC_EDIT_RH:
    case IDC_EDIT_GS:
    case IDC_EDIT_BL:
    case IDC_EDIT_A:
    case IDC_SPIN_RH:
    case IDC_SPIN_GS:
    case IDC_SPIN_BL:
    case IDC_SPIN_A:
    case IDC_SHOWPREVIEW:
        break;
    case IDC_BNEWCOL:
    default:
        EnableWindow(hwnd, ((CPalModDlg*)lParam)->bEnabled);
        break;
    }

    return TRUE;
}

BOOL CPalModDlg::SetLoadDir(CString* strOut, LPCWSTR pszDescriptionString /* = nullptr */, SupportedGamesList nDefaultGameFlag /* = NUM_GAMES */)
{
    LPMALLOC pMalloc;
    BOOL fSuccess = TRUE;

    if (::SHGetMalloc(&pMalloc) == NOERROR)
    {
        BROWSEINFO      bi = {};
        WCHAR           pszBuffer[MAX_PATH] = {};
        LPITEMIDLIST    pidl;

        bi.hwndOwner = GetSafeHwnd();
        bi.pidlRoot = nullptr; // We don't want to force browse-below
        bi.pszDisplayName = pszBuffer;
        bi.lpszTitle = pszDescriptionString ? pszDescriptionString : L"Select a target directory";
        bi.ulFlags = BIF_RETURNFSANCESTORS | BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE | BIF_NONEWFOLDERBUTTON;
        bi.lpfn = OnBrowseDialog;
        bi.lParam = nDefaultGameFlag;

        if (pidl = ::SHBrowseForFolder(&bi))
        {
            if (::SHGetPathFromIDList(pidl, pszBuffer))
            {
                *strOut = pszBuffer;
            }
            pMalloc->Free(pidl);
        }
        else
        {
            fSuccess = FALSE;
        }

        pMalloc->Release();
    }

    return fSuccess;
}

BOOL CPalModDlg::PreTranslateMessage(MSG* pMsg)
{
    m_ToolTip.RelayEvent(pMsg);

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
        break;
    }

    case WM_NOTIFY:
    {
        CJunk* pCtrl = (CJunk*)CWnd::FromHandle(((LPNMHDR)pMsg->lParam)->hwndFrom);

        switch (((LPNMHDR)pMsg->lParam)->code)
        {
        case CUSTOM_SS:
        case CUSTOM_MS:
        {
            OnPalSelChange(((LPNMHDR)pMsg->lParam)->idFrom);
        }
        break;
        case CUSTOM_HLCHANGE:
        {
            OnPalHLChange(pCtrl, ((LPNMHDR)pMsg->lParam)->idFrom);
        }
        break;
        case CUSTOM_SELHLCHANGE:
        {
            //OnPalMHL(pCtrl, ((LPNMHDR)pMsg->lParam)->idFrom);
        }
        break;

        case CUSTOM_COPY:
        case CUSTOM_PASTE:
        case CUSTOM_SALL:
        case CUSTOM_SNONE:
        {
            CustomEditProc(pCtrl, ((LPNMHDR)pMsg->lParam)->idFrom, ((LPNMHDR)pMsg->lParam)->code);
        }
        break;
        }
    }
    }

    return CDialog::PreTranslateMessage(pMsg);
}

BOOL CPalModDlg::VerifyMsg(eVerifyType eType)
{
    switch (eType)
    {
    case eVerifyType::VM_PALCHANGE:
    {
        if (bPalChanged)
        {
            const int nMBDefault = CRegProc::GetUserSavePaletteToMemoryPreference();
            // WINE currently muffs their implementation of SHMessageBoxCheck - special-case handling there
            // Filed https://bugs.winehq.org/show_bug.cgi?id=50488 to track this for them
            static bool s_fIsUserOnWINE = CRegProc::UserIsOnWINE();

            int nUserAnswer = IDCANCEL;
            
            CString strQuestion;
            if (strQuestion.LoadString(IDS_SAVE_PALETTE_CHANGES))
            {
                const UINT uiButtonFlag = s_fIsUserOnWINE ? MB_YESNO : MB_YESNOCANCEL;

                nUserAnswer = SHMessageBoxCheck(g_appHWnd, strQuestion, GetHost()->GetAppName(), uiButtonFlag | MB_ICONEXCLAMATION, nMBDefault, L"{11BFAC2D-42CA-40e2-967C-1017C1B2676A}");
            }

            if (s_fIsUserOnWINE && (nUserAnswer == IDCANCEL))
            {
                // You'll note that the user never got an option for CANCEL: WINE treated their NO as CANCEL for no good reason
                nUserAnswer = IDNO;
            }

            CRegProc::SetUserSavePaletteToMemoryPreference(nUserAnswer);

            switch (nUserAnswer)
            {
            case IDYES:
            // If you're playing along at home, you'll note that IDOK isn't a legal value.  But WINE
            // is currently returning IDOK when users press YES, so we'll work with that
            case IDOK:
            {
                OnBnUpdate();
                return TRUE;
            }
            case IDNO:
            {
                bPalChanged = FALSE;
                return TRUE;
            }
            case IDCANCEL:
            {
                nPrevUnitSel != m_CBUnitSel.GetCurSel() ? m_CBUnitSel.SetCurSel(nPrevUnitSel) : NULL;
                nPrevChildSel1 != m_CBChildSel1.GetCurSel() ? m_CBChildSel1.SetCurSel(nPrevChildSel1) : NULL;
                nPrevChildSel2 != m_CBChildSel2.GetCurSel() ? m_CBChildSel2.SetCurSel(nPrevChildSel2) : NULL;

                return FALSE;
            }
            }
        }
        else
        {
            return TRUE;
        }

    }
    break;
    case eVerifyType::VM_FILECHANGE:
    {
        if (fFileChanged)
        {
            CString strQuestion;
            if (strQuestion.LoadString(IDS_SAVE_FILE_CHANGES))
            {
                switch (MessageBox(strQuestion, GetHost()->GetAppName(), MB_YESNOCANCEL | MB_ICONEXCLAMATION))
                {
                case IDYES:
                {
                    OnFilePatch();
                    return TRUE;
                }
                case IDNO:
                {
                    fFileChanged = FALSE;
                    bPalChanged = FALSE;
                    return TRUE;
                }
                case IDCANCEL:
                {
                    return FALSE;
                }
                }
            break;
            }
        }
        else
        {
            return TRUE;
        }
    }
    break;
    default:
        break;
    }

    return FALSE;
}

void CPalModDlg::OnClose()
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        SaveSettings();

        m_PalHost.CleanUp();

        CDialog::OnClose();

        //End the program
        CWnd::DestroyWindow();
    }
}

void CPalModDlg::CloseFileDir()
{
    if (bEnabled)
    {
        ClearGameVar();

        //Update the controls
        UpdateEnableCtrls();
    }
}

void CPalModDlg::ClearGameVar()
{
    //Get rid of any palettes in the pal ctrl
    m_PalHost.BeginSetPal();
    m_PalHost.EndSetPal();
    m_PalHost.UpdateCtrl();

    if (ImgDispCtrl)
    {
        //Get rid of any images
        ImgDispCtrl->FlushImages();
        ImgDispCtrl->UpdateCtrl();
    }

    //if (ImgFile)
    //{
        //ImgFile->FlushImageBuffer();
    //}

    //Clear each combo box
    while (m_CBUnitSel.DeleteString(0) >= 0) NULL;
    while (m_CBChildSel1.DeleteString(0) >= 0) NULL;
    while (m_CBChildSel2.DeleteString(0) >= 0) NULL;

    //Clear the game class
    GetHost()->ClearGameClass();

    bLoadUnit = TRUE;
    nPrevUnitSel = nPrevChildSel1 = nPrevChildSel2 = 0xFF;

    CurrPalDef = NULL;
    CurrPalSep = NULL;
    CurrPalCtrl = NULL;

    //Set the edits to 0
    UpdateData();
    m_Edit_RH = m_Edit_GS = m_Edit_BL = m_Edit_A = 0;
    UpdateData(FALSE);
    //Clear plane amt
    nRGBAmt = nAAmt = 0;
    //Clear plane multiplier
    nRGBMul = nAMul = 1.0;
    //Clear temporary plane multiplier
    nTRGBMul = nTAMul = 1.0;

    bCopyFromBase = FALSE;

    // Indicate no game is loaded
    Enable(FALSE);

    UpdateAppTitle();
}

void CPalModDlg::SetStatusText(CString szText)
{
    //Kill the timer if it exists
    KillTimer(TIMER_STATUS);

    //Set text
    m_StatusBar.SetPaneText(0, szText);

    //Set timer
    SetTimer(TIMER_STATUS, TIMER_ELAPSE, NULL);
}

void CPalModDlg::SetStatusText(UINT uStrId)
{
    CString strMessage;
    if (strMessage.LoadString(uStrId))
    {
        SetStatusText(strMessage);
    }
}

void CPalModDlg::OnAboutAboutpalmod()
{
    CAboutDlg AboutDlg;
    AboutDlg.DoModal();
}
