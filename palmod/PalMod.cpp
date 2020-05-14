// PalMod.cpp : Defines the class behaviors for the application.
//

#include "StdAfx.h"
#include "PalMod.h"
#include "regproc.h"

CString ImgStr;
HACCEL m_hAccelTable;
HWND g_appHWnd = nullptr;

// CPalModApp

BEGIN_MESSAGE_MAP(CPalModApp, CWinApp)
    ON_COMMAND(ID_HELP, &CWinApp::OnHelp)
END_MESSAGE_MAP()

CString CPalModApp::GetAppName()
{
    CString strAppName;
    strAppName.LoadString(IDS_CURRENTAPPNAME);
    strAppName += " (" __DATE__ ")";

#ifdef DEBUG
    strAppName += " DEBUG build";
#endif

    if (GetCurrGame())
    {
        strAppName += ": ";
        strAppName += g_GameFriendlyName[GetCurrGame()->GetGameFlag()];
    }

    return strAppName;
}

// CPalModApp construction

CPalModApp::CPalModApp()
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

    CoInitialize(nullptr);

    //AfxEnableControlContainer();

    // Standard initialization
    // If you are not using these features and wish to reduce the size
    // of your final executable, you should remove from the following
    // the specific initialization routines you do not need

    //Create the main window
    PalModDlg = new CPalModDlg();

    if (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE)
    {
        ((CPalModDlg*)PalModDlg)->Create(IDD_PALMOD_DIALOG);
    }
    else
    {
        ((CPalModDlg*)PalModDlg)->Create(IDD_PALMOD_DIALOG_FAT);
    }

    m_pMainWnd = PalModDlg;
    //m_pMainWnd->UpdateWindow();
    g_appHWnd = m_pMainWnd->GetSafeHwnd();

    //Create and show image dialog
    PreviewDlg = new CPreviewDlg();

    // As a child window Preview will share taskbar space with the main window.
    // It will also always clip the main window, which is an annoyance.
    // I prefer to be parented....
    bool fMakeItAChild = true;
    PreviewDlg->Create(IDD_PREVIEW_DIALOG, fMakeItAChild ? nullptr : CWnd::GetDesktopWindow() );
    PreviewDlg->ShowWindow(SW_SHOW);

    //Load the accelerator table
    m_hAccelTable = LoadAccelerators(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_PALMOD_ACC));

    //Get the image dat file
    GetModuleFileName(NULL, ImgStr.GetBufferSetLength(MAX_PATH), MAX_PATH);
    ImgStr = ImgStr.Left(ImgStr.ReverseFind('\\') + 1) + IMGDATFILE;

    return TRUE;
}

CPalModApp::~CPalModApp()
{
    safe_delete(CurrGame);
    safe_delete(PreviewDlg);
    safe_delete(PalModDlg);

    CoUninitialize();
}

CPalModApp* GetHost()
{
    return &theApp;
}

void CPalModApp::SetGameClass(CGameClass* NewGame)
{
    safe_delete(CurrGame);
    //ImgBase.FlushImageBuffer();

    //Set game 
    CurrGame = NewGame;
    //Set ptr to main pal group
    BasePal = CurrGame->GetPalGroup();

    //Load the game's image
    bImgLoaded = ImgBase.LoadImage(ImgStr.GetBuffer(), CurrGame->GetGameFlag(), CurrGame->GetImgGameFlag(), CurrGame->GetImgUnitCt(), CurrGame->GetImgCt());
                                                                                                              
    if (!bImgLoaded)
    {
        CString strMessage;
        strMessage.Format(IDS_ERROR_LOADING_IMG_DAT_FORMAT, IMGDATFILE, ImgStr);
        MessageBox(g_appHWnd, strMessage, GetAppName(), MB_ICONERROR);
    }
}

void CPalModApp::CleanUp()
{

}

void CPalModApp::ClearGameClass()
{
    safe_delete(CurrGame);
    BasePal = NULL;
}

BOOL CPalModApp::PreTranslateMessage(MSG* pMsg)
{
    // TODO: Add your specialized code here and/or call the base class
    return CWinApp::PreTranslateMessage(pMsg);
}
