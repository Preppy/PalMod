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
    wchar_t szzPreferredLanguage[10] = L"en-gb";
    DWORD langCount = 0;

    SetThreadPreferredUILanguages(MUI_LANGUAGE_NAME, szzPreferredLanguage, &langCount);
#endif

#ifdef ENABLE_MUI_SUPPORT
    wchar_t szFileName[MAX_PATH];

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

    static_assert(static_cast<ColMode>(33) == ColMode::COLMODE_LAST, "Please make sure to test new color format via TestColorConversions.");
    //ColorSystem::TestColorConversions();
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

static_assert(static_cast<ColMode>(33) == ColMode::COLMODE_LAST, "New color formats need menu command handlers added to the message map.");

// CPalModDlg message handlers
BEGIN_MESSAGE_MAP(CPalModDlg, CDialog)
    ON_WM_SYSCOMMAND()
    ON_WM_PAINT()
    ON_WM_QUERYDRAGICON()
    ON_WM_INITMENUPOPUP()
    ON_WM_HSCROLL()
    ON_WM_CLOSE()
    ON_WM_TIMER()
    ON_WM_SETFOCUS()
    ON_WM_ACTIVATE()
    ON_WM_GETMINMAXINFO()

    //}}AFX_MSG_MAP
    ON_CBN_SELCHANGE(IDC_CHARCOMBO, &CPalModDlg::OnCBUnitChildChange)
    ON_CBN_SELCHANGE(IDC_CHILDCOMBO1, &CPalModDlg::OnCBUnitChildChange)
    ON_CBN_SELCHANGE(IDC_CHILDCOMBO2, &CPalModDlg::OnCBUnitChildChange)

    ON_BN_CLICKED(IDC_RADIO_HLS, &CPalModDlg::OnRadioHLS)
    ON_BN_CLICKED(IDC_RADIO_RGB, &CPalModDlg::OnRadioRGB)

    ON_EN_KILLFOCUS(IDC_EDIT_RH, &CPalModDlg::OnKillFocusEditRh)
    ON_EN_KILLFOCUS(IDC_EDIT_GS, &CPalModDlg::OnKillFocusEditGS)
    ON_EN_KILLFOCUS(IDC_EDIT_BL, &CPalModDlg::OnKillFocusEditBL)
    ON_EN_KILLFOCUS(IDC_EDIT_A, &CPalModDlg::OnKillFocusEditA)

    ON_COMMAND(ID_SHOW32BITRGB, &CPalModDlg::OnChangeShowAs32BitColor)
    
    ON_COMMAND(ID_FILE_PATCH, &CPalModDlg::OnFilePatch)
    ON_COMMAND(ID_FILE_CROSSPATCH_DCPS2, &CPalModDlg::OnFileCrossPatch_DCPS2)
    ON_COMMAND(ID_FILE_CROSSPATCH_STEAM, &CPalModDlg::OnFileCrossPatch_Steam)
    ON_COMMAND(ID_FILE_LOADLASTUSEDDIR, &CPalModDlg::LoadLastDir)

    ON_COMMAND(ID_TOOLS_GENERATEPATCHFILE, &CPalModDlg::OnSavePatchFile)
    ON_COMMAND(ID_TOOLS_CHECKMVC2MIX, &CPalModDlg::OnButtonClickCheckEdits)

    ON_COMMAND(ID_TOOLS_MAPPING_USE_STEP1, &CPalModDlg::OnMappingPaletteUse_Step1)
    ON_COMMAND(ID_TOOLS_MAPPING_USE_STEP2, &CPalModDlg::OnMappingPaletteUse_Step2)

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
    ON_COMMAND(ID_ACC_SNIFFPASTE15, &CPalModDlg::OnPaste15ColorsAtPointer)
    ON_COMMAND(ID_ACC_SNIFFPASTEWALK, &CPalModDlg::OnPasteWalkColorAtPointer)
    ON_COMMAND(ID_ACC_FINDCOLOR, &CPalModDlg::OnFindColorAtPointer)

    ON_COMMAND(ID_ACC_PALSELLEFT, &CPalModDlg::OnPalSelShiftLeft)
    ON_COMMAND(ID_ACC_PALSELRIGHT, &CPalModDlg::OnPalSelShiftRight)
    ON_COMMAND(ID_ACC_PALSELUP, &CPalModDlg::OnPalSelShiftUp)
    ON_COMMAND(ID_ACC_PALSELDOWN, &CPalModDlg::OnPalSelShiftDown)
    ON_COMMAND(ID_ACC_PALSELPLUS, &CPalModDlg::OnPalSelPlus)
    ON_COMMAND(ID_ACC_PALSELMINUS, &CPalModDlg::OnPalSelMinus)

    ON_COMMAND(ID_EDIT_UNDO, &CPalModDlg::OnEditUndo)
    ON_COMMAND(ID_EDIT_REDO, &CPalModDlg::OnEditRedo)
    ON_COMMAND(ID_EDIT_COPY, &CPalModDlg::OnEditCopy)
    ON_COMMAND(ID_EDIT_PASTE, &CPalModDlg::OnEditPaste)
    ON_COMMAND(ID_EDIT_SNIFFCOPY, &CPalModDlg::OnCopyColorAtPointer)
    ON_COMMAND(ID_EDIT_SNIFFPASTE, &CPalModDlg::OnPasteColorAtPointer)
    ON_COMMAND(ID_EDIT_SNIFFPASTEWALK, &CPalModDlg::OnPasteWalkColorAtPointer)
    ON_COMMAND(ID_EDIT_SELECTALL, &CPalModDlg::OnEditSelectAll)
    ON_COMMAND(ID_EDIT_SELECTNONE, &CPalModDlg::OnEditSelectNone)

    ON_COMMAND(ID_COLORSPERLINE_8COLORSPERLINE, &CPalModDlg::SetColorsPerLineTo8)
    ON_COMMAND(ID_COLORSPERLINE_16COLORSPERLINE, &CPalModDlg::SetColorsPerLineTo16)

    ON_COMMAND(ID_COLORFORMAT_BGR333, &CPalModDlg::SetColorFormatToBGR333)
    ON_COMMAND(ID_COLORFORMAT_RBG333, &CPalModDlg::SetColorFormatToRBG333)
    ON_COMMAND(ID_COLORFORMAT_RGB333_BE, &CPalModDlg::SetColorFormatToRGB333)

    ON_COMMAND(ID_COLORFORMAT_BGR444, &CPalModDlg::SetColorFormatToBGR444)
    ON_COMMAND(ID_COLORFORMAT_BRG444, &CPalModDlg::SetColorFormatToBRG444)
    ON_COMMAND(ID_COLORFORMAT_RBG444, &CPalModDlg::SetColorFormatToRBG444)
    ON_COMMAND(ID_COLORFORMAT_RGB444_BE, &CPalModDlg::SetColorFormatToRGB444_BE)
    ON_COMMAND(ID_COLORFORMAT_RGB444_LE, &CPalModDlg::SetColorFormatToRGB444_LE)

    ON_COMMAND(ID_COLORFORMAT_BGR555_LE, &CPalModDlg::SetColorFormatToBGR555_LE)
    ON_COMMAND(ID_COLORFORMAT_BGR555_BE, &CPalModDlg::SetColorFormatToBGR555_BE)
    ON_COMMAND(ID_COLORFORMAT_BRG555_LE, &CPalModDlg::SetColorFormatToBRG555_LE)
    ON_COMMAND(ID_COLORFORMAT_GRB555_LE, &CPalModDlg::SetColorFormatToGRB555_LE)
    ON_COMMAND(ID_COLORFORMAT_GRB555_BE, &CPalModDlg::SetColorFormatToGRB555_BE)
    ON_COMMAND(ID_COLORFORMAT_RGB555_LE_CPS3, &CPalModDlg::SetColorFormatToRGB555_LE_CPS3)
    ON_COMMAND(ID_COLORFORMAT_RGB555_LE_NORMAL, &CPalModDlg::SetColorFormatToRGB555_LE_Normal)
    ON_COMMAND(ID_COLORFORMAT_RGB555_BE, &CPalModDlg::SetColorFormatToRGB555_BE)
    ON_COMMAND(ID_COLORFORMAT_xBGR555_LE, &CPalModDlg::SetColorFormatToxBGR555_LE)
    
    ON_COMMAND(ID_COLORFORMAT_RGB666, &CPalModDlg::SetColorFormatToNEOGEO)
    ON_COMMAND(ID_COLORFORMAT_SHARPRGB, &CPalModDlg::SetColorFormatToSharpRGB)

    ON_COMMAND(ID_COLORFORMAT_BGR888, &CPalModDlg::SetColorFormatToBGR888)
    ON_COMMAND(ID_COLORFORMAT_BRG888, &CPalModDlg::SetColorFormatToBRG888)
    ON_COMMAND(ID_COLORFORMAT_GRB888, &CPalModDlg::SetColorFormatToGRB888)
    ON_COMMAND(ID_COLORFORMAT_RGB888, &CPalModDlg::SetColorFormatToRGB888)

    ON_COMMAND(ID_COLORFORMAT_RGBA8881, &CPalModDlg::SetColorFormatToRGBA8881)
    ON_COMMAND(ID_COLORFORMAT_RGBA8887, &CPalModDlg::SetColorFormatToRGBA8887)
    ON_COMMAND(ID_COLORFORMAT_RGBA8888_BE, &CPalModDlg::SetColorFormatToRGBA8888_BE)
    ON_COMMAND(ID_COLORFORMAT_RGBA8888_BE16, &CPalModDlg::SetColorFormatToRGBA8888_BE16)
    ON_COMMAND(ID_COLORFORMAT_RGBA8888_LE, &CPalModDlg::SetColorFormatToRGBA8888_LE)
    ON_COMMAND(ID_COLORFORMAT_BGRA8888_BE, &CPalModDlg::SetColorFormatToBGRA8888_BE)
    ON_COMMAND(ID_COLORFORMAT_BGRA8888_LE, &CPalModDlg::SetColorFormatToBGRA8888_LE)
    ON_COMMAND(ID_COLORFORMAT_RBGA8888_LE, &CPalModDlg::SetColorFormatToRBGA8888_LE)

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

    ON_COMMAND(ID_FILE_OPEN, &CPalModDlg::OnFileOpen)
    ON_COMMAND(ID_FILE_EXIT, &CPalModDlg::OnFileExit)
    ON_COMMAND(ID_FILE_OPENEXTRAS, &CPalModDlg::OnFileOpenExtrasFile)
    ON_COMMAND(ID_FILE_CLOSEFILEDIR, &CPalModDlg::OnFileCloseFileDir)

    ON_BN_CLICKED(IDC_SHOWPREVIEW, &CPalModDlg::OnBnShowPrev)
    ON_BN_CLICKED(IDC_BBLINK, &CPalModDlg::OnBnBlink)
    ON_BN_CLICKED(IDC_BINVERT, &CPalModDlg::OnBnClickedBinvert)
    ON_BN_CLICKED(IDC_BREVERT, &CPalModDlg::OnBnRevert)
    ON_BN_CLICKED(IDC_BNEWCOL, &CPalModDlg::OnBnNewCol)
    ON_BN_CLICKED(IDC_BUPDATE, &CPalModDlg::OnBnUpdate)

    ON_BN_CLICKED(IDC_BSWAPRG, &CPalModDlg::OnBnSwapRG)
    ON_BN_CLICKED(IDC_BSWAPGB, &CPalModDlg::OnBnSwapGB)
    ON_BN_CLICKED(IDC_BSWAPRB, &CPalModDlg::OnBnSwapRB)
    ON_BN_CLICKED(IDC_BSWAPRGB, &CPalModDlg::OnBnSwapRGB)
    ON_BN_CLICKED(IDC_BSWAPRBG, &CPalModDlg::OnBnSwapRBG)

    ON_COMMAND(ID_ABOUT_ABOUTPALMOD, &CPalModDlg::OnAboutAboutPalMod)
    ON_COMMAND(ID_ABOUT_README, &CPalModDlg::OnAboutShowReadMe)
    ON_COMMAND(ID_ABOUT_PALMODSITE, &CPalModDlg::OnAboutLaunchPalModSite)
    ON_COMMAND(ID_ABOUT_VHISTORY, &CPalModDlg::OnAboutShowHistory)

    ON_COMMAND(ID_TOOLS_LOADACTPALETTE, &CPalModDlg::OnImportPalette)
    ON_COMMAND(ID_TOOLS_SAVEACTPALETTE, &CPalModDlg::OnExportPalette)
    ON_COMMAND(ID_TOOLS_GRADIENT_HSL, &CPalModDlg::OnBnClickedGradient_HSL)
    ON_COMMAND(ID_TOOLS_GRADIENT_HSV, &CPalModDlg::OnBnClickedGradient_HSV)
    ON_COMMAND(ID_TOOLS_GRADIENT_LAB, &CPalModDlg::OnBnClickedGradient_LAB)
    ON_COMMAND(ID_TOOLS_GRADIENT_RGB, &CPalModDlg::OnBnClickedGradient_RGB)
    ON_COMMAND(ID_TOOLS_GRADIENT_XYZ, &CPalModDlg::OnBnClickedGradient_XYZ)
    ON_COMMAND(ID_TOOLS_INVERT, &CPalModDlg::OnBnClickedBinvert)
    ON_COMMAND(ID_TOOLS_REVERT, &CPalModDlg::OnBnRevert)
    ON_COMMAND(ID_TOOLS_REVERSE, &CPalModDlg::OnBnClickedReverse)
    ON_COMMAND(ID_TOOLS_BLINK, &CPalModDlg::OnBnBlink)

    ON_COMMAND(ID_LD_AQUAPLUS_NL, &CPalModDlg::OnLoadDir_AquaPlus_NL)
    ON_COMMAND(ID_LD_AQUAPLUS_P, &CPalModDlg::OnLoadDir_AquaPlus_P)
    ON_COMMAND(ID_LD_BLAZBLUECF, &CPalModDlg::OnLoadDir_BlazBlueCF)    
    ON_COMMAND(ID_LD_CVS2DCUSA, &CPalModDlg::OnLoadDir_CVS2DCUSA)
    ON_COMMAND(ID_LD_CVS2PS2USA, &CPalModDlg::OnLoadDir_CVS2PS2USA)
    ON_COMMAND(ID_LD_DAEMONBRIDE_NL, &CPalModDlg::OnLoadDir_DaemonBride)
    ON_COMMAND(ID_LD_DAEMONBRIDEAG_NL, &CPalModDlg::OnLoadDir_DaemonBrideAG)
    ON_COMMAND(ID_LOADDIRECTORY_DANKUGA, &CPalModDlg::OnLoadDir_Dankuga)

    ON_COMMAND(ID_LD_DBFCI, &CPalModDlg::OnLoadDir_DBFCI)    
    ON_COMMAND(ID_LD_GGML_P, &CPalModDlg::OnLoadDir_GGML_P)
    ON_COMMAND(ID_LD_GGXXACP_Wii, &CPalModDlg::OnLoadDir_GGXXACP_Wii)
    ON_COMMAND(ID_LD_GGXXACR_S, &CPalModDlg::OnLoadDir_GGXXACR_S)
    ON_COMMAND(ID_LD_GGXXACR_S_EXCHAR, &CPalModDlg::OnLoadDir_GGXXACR_S_EXCHAR)
    ON_COMMAND(ID_LD_GGXXACR_S_EXTRAS, &CPalModDlg::OnLoadDir_GGXXACR_S_EXTRAS)
    ON_COMMAND(ID_LD_GGXXACR_P, &CPalModDlg::OnLoadDir_GGXXACR_P)
    ON_COMMAND(ID_LD_GGXXR_S, &CPalModDlg::OnLoadDir_GGXXR_S)
    ON_COMMAND(ID_LD_JOJOS50, &CPalModDlg::OnLoadDir_Jojos50)
    ON_COMMAND(ID_LD_JOJOS51, &CPalModDlg::OnLoadDir_Jojos51)
    ON_COMMAND(ID_LD_JOJOS_US_51, &CPalModDlg::OnLoadDir_Jojos51_USA)
    ON_COMMAND(ID_LD_MWARR, &CPalModDlg::OnLoadDir_MWarr)
    ON_COMMAND(ID_LD_VENTURE31, &CPalModDlg::OnLoadDir_Venture31)
    ON_COMMAND(ID_LD_VENTURE50, &CPalModDlg::OnLoadDir_Venture50)

    ON_COMMAND(ID_LD_KOF02UM_S_8888, &CPalModDlg::OnLoadDir_KOF02UM_S_8888)
    ON_COMMAND(ID_LD_KOF02UM_S_RGB555, &CPalModDlg::OnLoadDir_KOF02UM_S_RGB555)
    ON_COMMAND(ID_LD_KOF02UM_S_BGR555, &CPalModDlg::OnLoadDir_KOF02UM_S_BGR555)
    
    ON_COMMAND(ID_LD_MCI_S, &CPalModDlg::OnLoadDir_MCI_S)
    ON_COMMAND(ID_LD_MSHVSFP, &CPalModDlg::OnLoadDir_MSHVSF_P)
    ON_COMMAND(ID_LD_MVCPSXUSA, &CPalModDlg::OnLoadDir_MVCPSXUSA)
    ON_COMMAND(ID_LD_MVC2ARCADE, &CPalModDlg::OnLoadDir_MVC2ArcadeAll)
    ON_COMMAND(ID_LD_MVC2DCUSA, &CPalModDlg::OnLoadDir_MVC2DCUSA)
    ON_COMMAND(ID_LD_MVC2PS2USA, &CPalModDlg::OnLoadDir_MVC2PS2USA)
    ON_COMMAND(ID_LD_MVC2STEAM, &CPalModDlg::OnLoadDir_MVC2Steam)
    ON_COMMAND(ID_LD_MBAACC_S, &CPalModDlg::OnLoadDir_MBAACC_S)
    ON_COMMAND(ID_LD_P4AU_FIGHTCLUB, &CPalModDlg::OnLoadDir_P4AU_FightClub)
    ON_COMMAND(ID_LD_P4AU_NESICA, &CPalModDlg::OnLoadDir_P4AU_NESICA)
    ON_COMMAND(ID_LD_P4AU_STEAM, &CPalModDlg::OnLoadDir_P4AU_STEAM)
    ON_COMMAND(ID_LOADDIRECTORY_REDEARTH_30, &CPalModDlg::OnLoadDir_RedEarth30)
    ON_COMMAND(ID_LOADDIRECTORY_REDEARTH_31, &CPalModDlg::OnLoadDir_RedEarth31)
    ON_COMMAND(ID_LOADDIRECTORY_REDEARTH_50, &CPalModDlg::OnLoadDir_RedEarth50)
    ON_COMMAND(ID_LOADDIRECTORY_SFA3MAX, &CPalModDlg::OnLoadDir_SFA3MAX)
    ON_COMMAND(ID_LD_SFIII1, &CPalModDlg::OnLoadDir_SFIII1Arcade)
    ON_COMMAND(ID_LD_SFIII2, &CPalModDlg::OnLoadDir_SFIII2Arcade)
    ON_COMMAND(ID_LD_SFIII3DCALL, &CPalModDlg::OnLoadDir_SFIII3DCAll)
    ON_COMMAND(ID_LD_SFIII3ARCADE10, &CPalModDlg::OnLoadDir_SFIII3Arcade10)
    ON_COMMAND(ID_LD_SFIII3ARCADE51, &CPalModDlg::OnLoadDir_SFIII3Arcade51)
    ON_COMMAND(ID_LD_SFIII3ARCADE4rd, &CPalModDlg::OnLoadDir_SFIII3Arcade4rd)
    ON_COMMAND(ID_LD_SFIII3ARCADE4rd10, &CPalModDlg::OnLoadDir_SFIII3Arcade4rd_10)
    ON_COMMAND(ID_LD_SFIII3ARCADEEX, &CPalModDlg::OnLoadDir_SFIII3ArcadeEx)
    ON_COMMAND(ID_LD_UNICLR, &CPalModDlg::OnLoadDir_UNICLR)
	ON_COMMAND(ID_LD_UNI2, &CPalModDlg::OnLoadDir_UNI2)
    ON_COMMAND(ID_LD_XMVSFP, &CPalModDlg::OnLoadDir_XMVSF_P)
    ON_COMMAND(ID_LD_MAAB, &CPalModDlg::OnLoadDir_MAAB_S)
    ON_COMMAND(ID_LD_MBTL_A, &CPalModDlg::OnLoadDir_MBTL_A)
    ON_COMMAND(ID_LD_NBHID_NL, &CPalModDlg::OnLoadDir_NBHID_NL)
    ON_COMMAND(ID_LD_NBHID_P, &CPalModDlg::OnLoadDir_NBHID_P)
    ON_COMMAND(ID_LD_NBHID_S, &CPalModDlg::OnLoadDir_NBHID_S)
    ON_COMMAND(ID_LD_DEVMODE, &CPalModDlg::OnLoadDir_DevMode)

    ON_COMMAND_RANGE(k_nGameLoadROMListMask, k_nGameLoadROMListMask + NUM_GAMES, &CPalModDlg::OnFileOpenInternal)
END_MESSAGE_MAP()

#pragma warning( pop )

BOOL CPalModDlg::OnInitDialog()
{
    CDialog::OnInitDialog();

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

#ifdef WANT_TO_DISABLE_ROUND_CORNERS
    // Note that the call to DWM should be wrapped in a system version check so
    // we don't get the pointless "incorrect parameter" warning from dwmapi on
    // older systems when run under the debugger
#pragma warning(push)
#pragma warning( disable : 4996 )

    OSVERSIONINFO verInfo = {};
    verInfo.dwOSVersionInfoSize = sizeof(OSVERSIONINFO);

    if (GetVersionEx(&verInfo) &&
        (verInfo.dwMajorVersion >= 10) &&
        (verInfo.dwBuildNumber >= 22000)) // This is the Win11 RTM build
    {
        // Use a compile-time option that allows us to be SDK version agnostic
        __if_not_exists(DWM_WINDOW_CORNER_PREFERENCE)
        {
            int DWMWA_WINDOW_CORNER_PREFERENCE = 33;

            typedef enum {
                DWMWCP_DEFAULT = 0,
                DWMWCP_DONOTROUND = 1,
                DWMWCP_ROUND = 2,
                DWMWCP_ROUNDSMALL = 3
            } DWM_WINDOW_CORNER_PREFERENCE;
        }

        // Stop the DWM corner clipping
        DWM_WINDOW_CORNER_PREFERENCE preference = DWMWCP_DONOTROUND;
        DwmSetWindowAttribute(GetSafeHwnd(), DWMWA_WINDOW_CORNER_PREFERENCE, &preference, sizeof(preference));
    }
#pragma warning( pop )
#endif

    //Init Ole
    if (!AfxOleInit())
    {
        AfxMessageBox(L"AfxOleInit Error!");
        m_fOleInit = FALSE;
    }

    //Create and attach the status bar
    m_StatusBar.Create(this);

    m_StatusBar.SetIndicators(indicators, 2);
    _UpdateStatusBarWidthIfNeeded(80);

    CString strMsg;
    if (strMsg.LoadStringW(IDS_WELCOME_BACKUP))
    {
        m_StatusBar.SetPaneText(0, strMsg.GetString());
    }

    if (m_ToolTip.Create(this))
    {
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

    m_fCanMinMax = TRUE;
}

// The system calls this function to obtain the cursor to display while the user drags
//  the minimized window.
HCURSOR CPalModDlg::OnQueryDragIcon()
{
    return static_cast<HCURSOR>(m_hIcon);
}

void CPalModDlg::Enable(BOOL fEnableFlag)
{
    m_fEnabled = fEnableFlag;

    UpdateEnableCtrls();
}

void CPalModDlg::UpdateEnableCtrls()
{
    //Update general controls
    EnumChildWindows(this->GetSafeHwnd(), &EnumChildProc, (LPARAM)this);

    //Update the sliders
    UpdateSliderSel(FALSE, TRUE);
}

BOOL CALLBACK CPalModDlg::EnumChildProc(HWND hwnd, LPARAM lParam)
{
    int nId = GetWindowLong(hwnd, GWL_ID);

    switch (nId)
    {
    // These are all toggled within CPalModDlg::EnableSlider based upon the game constraints
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
        break;
    default:
        ::EnableWindow(hwnd, ((CPalModDlg*)lParam)->m_fEnabled);
        break;
    }

    return TRUE;
}

BOOL CPalModDlg::HaveUserPickADirectory(CString* strOut, LPCWSTR pszDescriptionString /* = nullptr */, SupportedGamesList nDefaultGameFlag /* = NUM_GAMES */)
{
    LPMALLOC pMalloc;
    BOOL fSuccess = TRUE;

    if (::SHGetMalloc(&pMalloc) == NOERROR)
    {
        BROWSEINFO      bi = {};
        wchar_t         szBuffer[MAX_PATH] = {};
        LPITEMIDLIST    pidl = nullptr;

        bi.hwndOwner = GetSafeHwnd();
        bi.pidlRoot = nullptr; // Avoid force browse
        bi.pszDisplayName = szBuffer;
        bi.lpszTitle = pszDescriptionString ? pszDescriptionString : L"Select a target directory";
        bi.ulFlags = BIF_RETURNFSANCESTORS | BIF_RETURNONLYFSDIRS | BIF_NEWDIALOGSTYLE | BIF_NONEWFOLDERBUTTON | BIF_EDITBOX;
        bi.lpfn = OnBrowseDialog;
        bi.lParam = nDefaultGameFlag;

        if (pidl = ::SHBrowseForFolder(&bi))
        {
            if (::SHGetPathFromIDList(pidl, szBuffer))
            {
                *strOut = szBuffer;
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

void CPalModDlg::OnPalSelShiftLeft()
{
    if (CurrPalCtrl)
    {
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Left);
    }
}

void CPalModDlg::OnPalSelShiftRight()
{
    if (CurrPalCtrl)
    {
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Right);
    }
}

void CPalModDlg::OnPalSelShiftUp()
{
    if (CurrPalCtrl)
    {
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Up);
    }
}

void CPalModDlg::OnPalSelShiftDown()
{
    if (CurrPalCtrl)
    {
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Down);
    }
}

void CPalModDlg::OnPalSelPlus()
{
    if (CurrPalCtrl)
    {
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Plus);
    }
}

void CPalModDlg::OnPalSelMinus()
{
    if (CurrPalCtrl)
    {
        CurrPalCtrl->MovePaletteSelection(CJunk::SelectionMovement::Minus);
    }
}

BOOL CPalModDlg::PreTranslateMessage(MSG* pMsg)
{
    m_ToolTip.RelayEvent(pMsg);

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
            switch (pMsg->wParam)
            {
                case VK_RETURN:
                case VK_ESCAPE:
                {
                    pMsg->wParam = NULL;
                    break;
                }
                default:
                    break;
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
                    return TRUE;
                }
                case CUSTOM_HLCHANGE:
                {
                    OnPalHLChange(pCtrl, ((LPNMHDR)pMsg->lParam)->idFrom);
                    return TRUE;
                }
                case CUSTOM_SELHLCHANGE:
                {
                    //OnPalMHL(pCtrl, ((LPNMHDR)pMsg->lParam)->idFrom);
                    break;
                }
                case CUSTOM_COPY:
                case CUSTOM_PASTE:
                case CUSTOM_SALL:
                case CUSTOM_SNONE:
                case CUSTOM_COPYOFFSET:
                case CUSTOM_COPYBINARY:
                {
                    CustomEditProc(pCtrl, ((LPNMHDR)pMsg->lParam)->idFrom, ((LPNMHDR)pMsg->lParam)->code);
                    return TRUE;
                }
            }

            break;
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
        if (m_fPalChanged)
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
                m_fPalChanged = FALSE;
                return TRUE;
            }
            case IDCANCEL:
            {
                m_nPrevUnitSel != m_CBUnitSel.GetCurSel() ? m_CBUnitSel.SetCurSel(m_nPrevUnitSel) : NULL;
                m_nPrevChildSel1 != m_CBChildSel1.GetCurSel() ? m_CBChildSel1.SetCurSel(m_nPrevChildSel1) : NULL;
                m_nPrevChildSel2 != m_CBChildSel2.GetCurSel() ? m_CBChildSel2.SetCurSel(m_nPrevChildSel2) : NULL;

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
        if (m_fFileChanged)
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
                    m_fFileChanged = FALSE;
                    m_fPalChanged = FALSE;
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
    if (m_fEnabled)
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
        ImgDispCtrl->ClearAllImages();
        ImgDispCtrl->UpdateCtrl();
    }

    //Clear each combo box
    while (m_CBUnitSel.DeleteString(0) >= 0) NULL;
    while (m_CBChildSel1.DeleteString(0) >= 0) NULL;
    while (m_CBChildSel2.DeleteString(0) >= 0) NULL;

    //Clear the game class
    GetHost()->ClearGameClass();

    m_fLoadUnit = TRUE;
    m_nPrevUnitSel = m_nPrevChildSel1 = m_nPrevChildSel2 = 0xFF;

    CurrPalDef = nullptr;
    CurrPalSep = nullptr;
    CurrPalCtrl = nullptr;

    //Set the edits to 0
    UpdateData();
    m_Edit_RH = m_Edit_GS = m_Edit_BL = m_Edit_A = 0;
    UpdateData(FALSE);
    //Clear plane amt
    m_nRGBAmt = m_nAAmt = 0;

    m_fCopyFromBase = FALSE;

    // Indicate no game is loaded
    Enable(FALSE);
    SetStatusText(L"No game loaded.");

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

void CPalModDlg::OnAboutAboutPalMod()
{
    CAboutDlg AboutDlg;
    AboutDlg.DoModal();
}

void CPalModDlg::OnAboutShowReadMe()
{
    LaunchFileOrURL(L"ReadMe.html", L"https://zachd.com/palmod/releases/ReadMe.html");
}

void CPalModDlg::OnAboutShowHistory()
{
    LaunchFileOrURL(L"Version History.html", L"https://zachd.com/palmod/releases/Version History.html");
}

void CPalModDlg::OnAboutLaunchPalModSite()
{
    LaunchFileOrURL(nullptr, L"https://zachd.com/palmod/");
}
