// PalModDlg.cpp : implementation file
//

#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#ifdef _DEBUG
#define new DEBUG_NEW
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


// CPalModDlg dialog

static UINT BASED_CODE indicators [] = 
{
	ID_INDICATOR_MAIN,
	ID_INDICATOR_EXTRA
};

CString szPasteStr = _T("");


CPalModDlg::CPalModDlg(CWnd* pParent /*=NULL*/)
	: CDialog(CPalModDlg::IDD, pParent)
	, bLoadUnit(TRUE)
	, nPrevUnitSel(0xFFFF)
	, nPrevChildSel1(0xFFFF)
	, nPrevChildSel2(0xFFFF)
	, MainPalGroup(NULL)
	, ImgDispCtrl(NULL)
	, ImgFile(NULL)
	, nPalWMax(0)
	, m_ColMode(0)
	, bRGB(TRUE)
	, bShow32(TRUE)
	, nPalSelAmt(0)
	, nCurrSelPal(0)
	, bEnabled(0)
	, m_Edit_RH(0)
	, m_Edit_GS(0)
	, m_Edit_BL(0)
	, m_Edit_A(0)
	, bAutoSetCol(TRUE)
	, bGetCol(TRUE)
	, bCopyFromBase(FALSE)
	, m_EditADesc(_T("A"))
	, m_EditRHDesc(_T(""))
	, m_EditGSDesc(_T(""))
	, m_EditBLDesc(_T(""))
	, bFileChanged(FALSE)
	, bPalChanged(FALSE)
	, bOleInit(TRUE)
	, CurrPalDef(NULL)
	, CurrPalSep(NULL)
	, nPalImgIndex(0)
	, bGetSliderUndo(TRUE)
	, nBlinkState(0)
	, nBlinkCount(0)
	, bForceImg(FALSE)
	, bCanBlink(TRUE)
	, crBlinkCol(0)
	, pTempPalCopy(FALSE)
	, bCanMinMax(FALSE)
{
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

BEGIN_MESSAGE_MAP(CPalModDlg, CDialog)
	ON_WM_SYSCOMMAND()
	ON_WM_PAINT()
	ON_WM_QUERYDRAGICON()
	//}}AFX_MSG_MAP
	ON_COMMAND(ID_LDMVC2DCUSA, &CPalModDlg::OnLDMVC2DCUSA)
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
	ON_BN_CLICKED(IDC_BSETCOL, &CPalModDlg::OnBnSetCol)
	ON_BN_CLICKED(IDC_BSETTINGS, &CPalModDlg::OnBnSettings)
	ON_COMMAND(ID_SHOW32BITRGB, &CPalModDlg::OnColSett)
	ON_BN_CLICKED(IDC_BUPDATE, &CPalModDlg::OnBnUpdate)
	ON_COMMAND(ID_FILE_PATCH, &CPalModDlg::OnFilePatch)
	ON_COMMAND(ID_GETCOLORONSELECT, &CPalModDlg::OnGetCol)
	ON_COMMAND(ID_AUTOSETCOL, &CPalModDlg::OnAutoSetCol)
	ON_WM_INITMENUPOPUP()
	ON_COMMAND(ID_SETTINGS_SETTINGS, &CPalModDlg::OnSettingsSettings)
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

	ON_COMMAND(ID_EDIT_UNDO, &CPalModDlg::OnEditUndo)
	ON_COMMAND(ID_EDIT_REDO, &CPalModDlg::OnEditRedo)
	ON_COMMAND(ID_EDIT_COPY, &CPalModDlg::OnEditCopy)
	ON_COMMAND(ID_EDIT_PASTE, &CPalModDlg::OnEditPaste)
	ON_COMMAND(ID_EDIT_SELECTALL, &CPalModDlg::OnEditSelectAll)
	ON_COMMAND(ID_EDIT_SELECTNONE, &CPalModDlg::OnEditSelectNone)
	ON_COMMAND(ID_FILE_LOADLASTUSEDDIR, &CPalModDlg::LoadLastDir)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_RH_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_GS_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_BL_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
	ON_NOTIFY(NM_RELEASEDCAPTURE, IDC_A_SLIDER, &CPalModDlg::OnNMReleasedCaptureAll)
	ON_COMMAND(ID_FILE_EXIT, &CPalModDlg::OnFileExit)
	ON_COMMAND(ID_FILE_CLOSEFILEDIR, &CPalModDlg::OnFileCloseFileDir)
	ON_WM_TIMER()
	ON_BN_CLICKED(IDC_SHOWPREVIEW, &CPalModDlg::OnBnShowPrev)
	ON_WM_SETFOCUS()
	ON_WM_ACTIVATE()
	ON_COMMAND(ID_LDMVC2PS2USA, &CPalModDlg::OnLdMVC2PS2USA)
	ON_COMMAND(ID_FILE_OPEN, &CPalModDlg::OnFileOpen)
	ON_BN_CLICKED(IDC_BEIDRIAN1, &CPalModDlg::OnBnClickedBEidrian1)
	ON_BN_CLICKED(IDC_BEIDRIAN2, &CPalModDlg::OnBnClickedBEidrian2)
	ON_BN_CLICKED(IDC_BREVERT, &CPalModDlg::OnBnRevert)
	ON_BN_CLICKED(IDC_BBLINK, &CPalModDlg::OnBnBlink)
	ON_COMMAND(ID_ABOUT_ABOUTPALMOD, &CPalModDlg::OnAboutAboutpalmod)
	ON_BN_CLICKED(IDC_BINVERT, &CPalModDlg::OnBnClickedBinvert)
	ON_COMMAND(ID_TOOLS_LOADACTPALETTE, &CPalModDlg::OnLoadAct)
	ON_COMMAND(ID_TOOLS_SAVEACTPALETTE, &CPalModDlg::OnSaveAct)
	ON_COMMAND(ID_TOOLS_INVERT, &CPalModDlg::OnBnClickedBinvert)
	ON_COMMAND(ID_TOOLS_REVERT, &CPalModDlg::OnBnRevert)
	ON_COMMAND(ID_TOOLS_BLINK, &CPalModDlg::OnBnBlink)
	ON_WM_GETMINMAXINFO()
	ON_COMMAND(ID_LDSFIII3DCALL, &CPalModDlg::OnLdsfiii3dcall)
END_MESSAGE_MAP()


// CPalModDlg message handlers

BOOL CPalModDlg::OnInitDialog()
{
	CDialog::OnInitDialog();

	CRect rClient;
	GetClientRect(&rClient);

	// Add "About..." menu item to system menu.

	// IDM_ABOUTBOX must be in the system command range.
	ASSERT((IDM_ABOUTBOX & 0xFFF0) == IDM_ABOUTBOX);
	ASSERT(IDM_ABOUTBOX < 0xF000);

	CMenu* pSysMenu = GetSystemMenu(FALSE);
	if (pSysMenu != NULL)
	{
		CString strAboutMenu;
		strAboutMenu.LoadString(IDS_ABOUTBOX);
		if (!strAboutMenu.IsEmpty())
		{
			pSysMenu->AppendMenu(MF_SEPARATOR);
			pSysMenu->AppendMenu(MF_STRING, IDM_ABOUTBOX, strAboutMenu);
		}
	}

	// Set the icon for this dialog.  The framework does this automatically
	//  when the application's main window is not a dialog
	SetIcon(m_hIcon, TRUE);			// Set big icon
	SetIcon(m_hIcon, FALSE);		// Set small icon

	//Init XP Style controls
	InitCommonControls();
	

	//Init Ole
	if (!AfxOleInit())
	{
		AfxMessageBox("AfxOleInit Error!");
		bOleInit = FALSE;	
	}
	//Create and attach the status bar
	m_StatusBar.Create(this);

	m_StatusBar.SetIndicators(indicators, 2);
	m_StatusBar.SetPaneInfo(0, ID_INDICATOR_MAIN, 0, rClient.Width() - 55);
	
	m_StatusBar.SetPaneInfo(1, ID_INDICATOR_EXTRA, 0, 55);

	RepositionBars(AFX_IDW_CONTROLBAR_FIRST,AFX_IDW_CONTROLBAR_LAST,ID_INDICATOR_MAIN);

	m_StatusBar.SetPaneText(0, DEFAULT_STATUS_TEXT);

	//Load the settings
	LoadSettings();

	//Set the contols state
	UpdateEnableCtrls();

	//Set the slider descriptions
	SetSliderDescEdit();



	return TRUE;  // return TRUE  unless you set the focus to a control
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
	GetWindowRect(&rDefault);
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

	switch(nId)
	{
	case IDC_RH_SLIDER:
	case IDC_GS_SLIDER:
	case IDC_BL_SLIDER:
	case IDC_A_SLIDER:
	case IDC_EDIT_RH:
	case IDC_EDIT_GS:
	case IDC_EDIT_BL:
	case IDC_EDIT_A:
	case IDC_SHOWPREVIEW:
		break;
	case IDC_BNEWCOL:
		{
			EnableWindow(hwnd, ((CPalModDlg *)lParam)->bEnabled * !((CPalModDlg *)lParam)->bAutoSetCol);
		}
		break;

	default:
		{
			EnableWindow(hwnd, ((CPalModDlg *)lParam)->bEnabled);
		}
		break;
	}

	return TRUE;
}

BOOL CPalModDlg::SetLoadDir(CString * szOut)
{
	LPMALLOC pMalloc;

	if(::SHGetMalloc(&pMalloc) == NOERROR)
	{
		BROWSEINFO      bi;
		char            pszBuffer[MAX_PATH];
		LPITEMIDLIST    pidl;

		bi.hwndOwner        =   GetSafeHwnd();
		bi.pidlRoot         =   NULL;
		bi.pszDisplayName   =   pszBuffer;
		bi.lpszTitle        =   _T("Select a target Directory");
		bi.ulFlags          =   BIF_RETURNFSANCESTORS | BIF_RETURNONLYFSDIRS;
		bi.lpfn             =   OnBrowseDialog;
		bi.lParam           =   0;

		if(pidl = ::SHBrowseForFolder(&bi))
		{
			if (::SHGetPathFromIDList(pidl, pszBuffer))
			{
				*szOut = pszBuffer;
			}
			pMalloc->Free(pidl);
		}
		else
		{
			pMalloc->Release();
			return FALSE;
		}

		pMalloc->Release();    
	}

	return TRUE;
}







BOOL CPalModDlg::PreTranslateMessage(MSG* pMsg)
{
	if (m_hAccelTable) 
	{
		if (::TranslateAccelerator(GetSafeHwnd(), m_hAccelTable, pMsg)) 
		{
			return(TRUE);
		}
	}

	switch(pMsg->message)
	{
	case WM_KEYDOWN:
		{
			if(pMsg->wParam==VK_RETURN || pMsg->wParam==VK_ESCAPE)
			{
				pMsg->wParam=NULL;
			}
		}
		break;

	case WM_NOTIFY:
		{
			CJunk * pCtrl = (CJunk *)CWnd::FromHandle(((LPNMHDR)pMsg->lParam)->hwndFrom);

			switch(((LPNMHDR)pMsg->lParam)->code)
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
	switch(eType)
	{
	case VM_PALCHANGE:
		{
			if(bPalChanged)
			{
				switch(MessageBox("Update Palette Changes?", "PalMod", MB_YESNOCANCEL | MB_ICONEXCLAMATION))
				{
				case IDYES:
					{
						OnBnUpdate();
						return TRUE;
					}
					break;
				case IDNO:
					{
						bPalChanged  = FALSE;
						return TRUE;
					}
					break;
				case IDCANCEL:
					{
						nPrevUnitSel != m_CBUnitSel.GetCurSel() ? m_CBUnitSel.SetCurSel(nPrevUnitSel) : NULL;
						nPrevChildSel1 != m_CBChildSel1.GetCurSel() ? m_CBChildSel1.SetCurSel(nPrevChildSel1) : NULL;
						nPrevChildSel2 != m_CBChildSel2.GetCurSel() ? m_CBChildSel2.SetCurSel(nPrevChildSel2) : NULL;
						
						

						return FALSE;
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
	case VM_FILECHANGE:
		{
			if(bFileChanged)
			{
				switch(MessageBox("Save Changes?", "PalMod", MB_YESNOCANCEL | MB_ICONEXCLAMATION))
				{
				case IDYES:
					{
						OnFilePatch();
						return TRUE;
					}
					break;
				case IDNO:
					{
						bFileChanged = FALSE;
						bPalChanged = FALSE;
						return TRUE;
					}
					break;
				case IDCANCEL:
					{
						
						return FALSE;
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
		{
		}
		break;
	}

	return FALSE;
}

void CPalModDlg::OnClose()
{

	if(VerifyMsg(VM_FILECHANGE))
	{
		SaveSettings();

		CDialog::OnClose();

		//End the program
		CWnd::DestroyWindow();
	}
}

void CPalModDlg::CloseFileDir()
{
	if(bEnabled)
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

	if(ImgDispCtrl)
	{
		//Get rid of any images
		ImgDispCtrl->FlushImages();
		ImgDispCtrl->UpdateCtrl();
	}

	//if(ImgFile)
	//{
		//ImgFile->FlushImageBuffer();
	//}

	//Clear each combo box
	while(m_CBUnitSel.DeleteString(0) >= 0) NULL;
	while(m_CBChildSel1.DeleteString(0) >= 0) NULL;
	while(m_CBChildSel2.DeleteString(0) >= 0) NULL;

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
	nRAmt = nGAmt = nBAmt = nAAmt = 0;
	//Clear plane multiplier
	nRMul = nGMul = nBMul = nAMul = 1.0;
	//Clear temporary plane multiplier
	nTRMul = nTGMul = nTBMul = nTAMul = 1.0;

	bCopyFromBase = FALSE;

	bEnabled = FALSE;
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


void CPalModDlg::OnAboutAboutpalmod()
{
	// TODO: Add your command handler code here

	CAboutDlg AboutDlg;
	AboutDlg.DoModal();
}
