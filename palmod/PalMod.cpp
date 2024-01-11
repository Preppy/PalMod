// PalMod.cpp : Defines the class behaviors for the application.
//

#include "StdAfx.h"
#include "PalMod.h"
#include "regproc.h"

CString ImgStr;
HACCEL g_hAccelTable;
HWND g_appHWnd = nullptr;

// CPalModApp

BEGIN_MESSAGE_MAP(CPalModApp, CWinApp)
    ON_COMMAND(ID_HELP, LaunchReadMe)
END_MESSAGE_MAP()

void get_date_when_compiled(tm& buildDate)
{
    std::string datestr = __DATE__;

    std::string strMonth;
    strMonth.reserve(32);

    (void)sscanf(datestr.c_str(), "%s %u %u", &strMonth[0], &buildDate.tm_mday, &buildDate.tm_year);

    constexpr char month_names[] = "JanFebMarAprMayJunJulAugSepOctNovDec";

    buildDate.tm_mon = static_cast<int>((strstr(month_names, strMonth.c_str()) - month_names) / 3 + 1);

    return;
}

// The App Name here is shown in the app title bar.  We include the build
// date in some fashion so that it's easy to track which version people are using.
CString CPalModApp::GetAppName(bool fIncludeGameName /*= true*/)
{
    CString strAppName;
    CString strPalModString;

    (void)strPalModString.LoadString(IDS_CURRENTAPPNAME);
    
    tm buildDate = { 0 };
    
    get_date_when_compiled(buildDate);

    // Temporary(?) tweak to avoid needing to increment the build number to 1.80 since
    // there's no meaningful core changes yet.
    const int nDisplayMonth = ((buildDate.tm_year - 2023) * 12) + buildDate.tm_mon;

    strAppName.Format(L"%s.%02u%02u", strPalModString.GetString(), nDisplayMonth, buildDate.tm_mday);
 
#ifdef DEBUG
    strAppName += L" DEBUG";
#endif

    if (fIncludeGameName && GetCurrGame())
    {
        strAppName += L": ";
        strAppName += GetCurrGame()->GetGameName();
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

    if (FAILED(CoInitialize(nullptr)))
    {
        return FALSE;
    }

    //AfxEnableControlContainer();

    // Standard initialization
    // If you are not using these features and wish to reduce the size
    // of your final executable, you should remove from the following
    // the specific initialization routines you do not need

    //Create the main window
    PalModDlg = new CPalModDlg();

    if (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE)
    {
        PalModDlg->Create(IDD_PALMOD_DIALOG);
    }
    else
    {
        PalModDlg->Create(IDD_PALMOD_DIALOG_FAT);
    }

    m_pMainWnd = PalModDlg;
    //m_pMainWnd->UpdateWindow();
    g_appHWnd = m_pMainWnd->GetSafeHwnd();

    //Create and show image dialog
    PreviewDlg = new CPreviewDlg();

    // As a child window Preview will share taskbar space with the main window.
    // It will also always clip the main window, which is an annoyance.
    // I prefer to be parented....
    m_fPreviewWasCreatedAsPeer = CRegProc::ShouldForcePeerPreviewWindow();
    PreviewDlg->Create(IDD_PREVIEW_DIALOG, m_fPreviewWasCreatedAsPeer ? CWnd::GetDesktopWindow() : nullptr);
    PreviewDlg->ShowWindow(SW_SHOW);

    //Load the accelerator table
    g_hAccelTable = LoadAccelerators(AfxGetInstanceHandle(), MAKEINTRESOURCE(IDR_PALMOD_ACC));

    //Get the image dat file
    GetModuleFileName(NULL, ImgStr.GetBufferSetLength(MAX_PATH), MAX_PATH);
    ImgStr = ImgStr.Left(ImgStr.ReverseFind(L'\\') + 1) + IMGDATFILE;

    return TRUE;
}

CPalModApp::~CPalModApp()
{
    safe_delete(CurrGame);

    if (m_fPreviewWasCreatedAsPeer)
    {
        PreviewDlg->DestroyWindow();
    }

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

    //Load the game's image set
    m_fIsImageLoaded = ImgBase.LoadGameImages(ImgStr.GetBuffer(), CurrGame->GetGameFlag(), CurrGame->GetImgGameFlag(), CurrGame->GetUnitCt(), CurrGame->GetImageSetForGame());
                                                                                                              
    if (!m_fIsImageLoaded)
    {
        CString strMessage;
        strMessage.Format(IDS_ERROR_LOADING_IMG_DAT_FORMAT, IMGDATFILE, ImgStr, IMGDATFILE);
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

void CPalModApp::LaunchReadMe()
{
    LaunchFileOrURL(L"ReadMe.html",  L"https://zachd.com/palmod/releases/ReadMe.html");
}

void LaunchFileOrURL(LPCWSTR pszFileName, LPCWSTR pszBackupURL)
{
    wchar_t szReadMeFile[MAX_PATH] = {};
    DWORD nFileAttrib = INVALID_FILE_ATTRIBUTES;

    if (pszFileName)
    {
        DWORD dwCharsUsed = GetModuleFileName(nullptr, szReadMeFile, static_cast<DWORD>(ARRAYSIZE(szReadMeFile)));
        wchar_t* pszExeFileName = wcsrchr(szReadMeFile, L'\\') + 1;
        wcsncpy(pszExeFileName, pszFileName, ARRAYSIZE(szReadMeFile) - dwCharsUsed);

        nFileAttrib = GetFileAttributes(szReadMeFile);
    }

    if (nFileAttrib == INVALID_FILE_ATTRIBUTES)
    {
        wcsncpy(szReadMeFile, pszBackupURL, ARRAYSIZE(szReadMeFile));
    }

    szReadMeFile[ARRAYSIZE(szReadMeFile) - 1] = '\0';

    ShellExecute(
        g_appHWnd,
        L"open",
        szReadMeFile,
        NULL,
        NULL,
        SW_SHOW);
}
