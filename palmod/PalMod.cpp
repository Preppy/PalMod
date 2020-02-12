// PalMod.cpp : Defines the class behaviors for the application.
//

#include "stdafx.h"
#include "PalMod.h"
#include "regproc.h"

#ifdef _DEBUG
#define new DEBUG_NEW
#endif

CString ImgStr;
HACCEL m_hAccelTable;

// CPalModApp

BEGIN_MESSAGE_MAP(CPalModApp, CWinApp)
	ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CString GetAppName()
{
	CString strAppName;
	strAppName.LoadString(IDS_CURRENTAPPNAME);
	strAppName += " (" __DATE__ ")";

#ifdef DEBUG
	strAppName += " DEBUG build";
#endif

	return strAppName;
}

// CPalModApp construction

CPalModApp::CPalModApp()
:	CurrGame(NULL),
BasePal(NULL)
{
	// TODO: add construction code here,
	// Place all significant initialization in InitInstance

	CleanUp();
}

// The one and only CPalModApp object

CPalModApp theApp;

// CPalModApp initialization

BOOL CPalModApp::InitInstance()
{
	// InitCommonControlsEx() is required on Windows XP if an application
	// manifest specifies use of ComCtl32.dll version 6 or later to enable
	// visual styles.  Otherwise, any window creation will fail.
	//INITCOMMONCONTROLSEX InitCtrls;
	//InitCtrls.dwSize = sizeof(InitCtrls);
	// Set this to include all the common control classes you want to use
	// in your application.
	//InitCtrls.dwICC = ICC_WIN95_CLASSES;
	//InitCommonControlsEx(&InitCtrls);

	CWinApp::InitInstance();

	//AfxEnableControlContainer();

	// Standard initialization
	// If you are not using these features and wish to reduce the size
	// of your final executable, you should remove from the following
	// the specific initialization routines you do not need
	// Change the registry key under which our settings are stored
	// TODO: You should modify this string to be something appropriate
	// such as the name of your company or organization
	SetRegistryKey(_T("Local AppWizard-Generated Applications"));

	//Create the main window
	PalModDlg = new CPalModDlg();
	((CPalModDlg * )PalModDlg)->Create(IDD_PALMOD_DIALOG);

	m_pMainWnd = PalModDlg;
	//m_pMainWnd->UpdateWindow();

	//Create and show image dialog
	PreviewDlg = new CPreviewDlg();
	PreviewDlg->Create(IDD_PREVIEW_DIALOG);
	PreviewDlg->ShowWindow(SW_SHOW);

	//Load the accelerator table
	m_hAccelTable = LoadAccelerators(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_PALMOD_ACC));

	//Get the image dat file
	GetModuleFileName(NULL, ImgStr.GetBufferSetLength(MAX_PATH), MAX_PATH);
	ImgStr = ImgStr.Left(ImgStr.ReverseFind('\\') + 1) + IMGDATFILE;	
	
	return TRUE;
}

CPalModApp * GetHost()
{
	return &theApp;
}

void CPalModApp::SetGameClass(CGameClass * NewGame)
{
	if(CurrGame)
	{
		delete CurrGame;
		//ImgBase.FlushImageBuffer();
	}

	//Set game 
	CurrGame = NewGame;
	//Set ptr to main pal group
	BasePal = CurrGame->GetPalGroup();

	//Load the game's image
	bImgLoaded = ImgBase.LoadImage(ImgStr.GetBuffer(), CurrGame->GetImgGameFlag(), CurrGame->GetImgCt());

	if (!bImgLoaded)
	{
		CString strMessage;
		strMessage.Format(IDS_ERROR_LOADING_IMG_DAT_FORMAT, ImgStr);
		MessageBox(nullptr, strMessage, GetAppName(), MB_ICONERROR);
	}
}

void CPalModApp::CleanUp()
{
	
}

void CPalModApp::ClearGameClass()
{
	if(CurrGame)
	{
		delete CurrGame;
		CurrGame = NULL;

		BasePal = NULL;
	}
}
BOOL CPalModApp::PreTranslateMessage(MSG* pMsg)
{
	// TODO: Add your specialized code here and/or call the base class

	


	return CWinApp::PreTranslateMessage(pMsg);
}
