// PalModDlg.h : header file
//

#pragma once
#include "resource.h"
#include "afxwin.h"
#include "paltool.h"

#include "ImgDisp.h"
#include "Game\GameLoad.h"
#include "ImgDat.h"
#include "UndoRedo.h"

#include "afxcmn.h"

#define round(x)(x > 0.0 ? x + 0.5 : x + -0.5)

#define TIMER_STATUS 1
#define TIMER_BLINK 2
#define TIMER_ELAPSE 10 * 1000
#define TIMER_BLINK_ELAPSE 1 * 200

enum class eVerifyType
{
    VM_PALCHANGE,
    VM_FILECHANGE
};

constexpr auto DEFAULT_STATUS_TEXT = _T("Always keep a backup of files!");

// CPalModDlg dialog
class CPalModDlg : public CDialog
{
public:
    
    //Program variables
    CPalGroup* MainPalGroup = nullptr;
    CImgDisp* ImgDispCtrl = nullptr;
    CImgDat* ImgFile = nullptr;

    BOOL bOleInit = TRUE;
    BOOL bEnabled = FALSE;

    BOOL bShow32 = TRUE;
    BOOL bGetCol = TRUE;
    BOOL bAutoSetCol = TRUE;
    BOOL bRGB = TRUE;
    BOOL bCopyFromBase = FALSE;

    BOOL fFileChanged = FALSE;
    BOOL bPalChanged = FALSE;

    BOOL bGetSliderUndo = TRUE;

    sPalDef* CurrPalDef = nullptr;
    sPalSep* CurrPalSep = nullptr;
    CJunk* CurrPalCtrl = nullptr;

    BOOL bCanBlink = TRUE;
    COLORREF* pTempPalCopy = nullptr;

    BOOL bForceImg = FALSE; 
    int nCurrSelPal = 0;
    int nPalSelAmt = 0;

    int nPalImgIndex = 0;
    
    BOOL bLoadUnit = TRUE;
    int nPrevUnitSel = 0xffff;
    int nPrevChildSel1 = 0xffff;
    int nPrevChildSel2 = 0xffff;

    int nRGBAmt = 0, nAAmt = 0;

    double nRGBMul = 1.0, nAMul = 1.0;
    double nTRGBMul = 1.0, nTAMul = 1.0;

    CUndoRedo UndoProc;

    COLORREF crBlinkCol = 0;

    BOOL bCanMinMax = FALSE;

    //Program functions

    void LoadGameDir(int nGameFlag, TCHAR * szLoadDir);
    void OnLoadGameByDirectory(int nGameFlag);
    BOOL SetLoadDir(CString* szOut);
    void UpdateAppTitle();

    void LoadGameFile(int nGameFlag, TCHAR * szFile);

    void LoadLastDir();

    void SetColorsPerLineTo8();
    void SetColorsPerLineTo16();

    void PostGameLoad();
    void UpdateCombo();
    void PostPalSel();

    void LoadSettings();
    void SaveSettings();
    void UpdateSettingsMenuItems();

    bool LoadPaletteFromACT(LPCTSTR pszFileName);
    bool LoadPaletteFromPAL(LPCTSTR pszFileName);
    bool LoadPaletteFromPNG(LPCTSTR pszFileName);

    void UpdateSliderSel(BOOL bModeChange = FALSE, BOOL bResetRF = FALSE);
    void SetColMode(int nColMode);
    void GetPlaneData();
    void UpdatePalSel(BOOL bSetSingleCol = FALSE);

    void Blink();

    void GetSetSingleCol();
    void SetSliderCol(int nRH, int nGS, int nBL, int nA = -1);
    void UpdateMultiEdit(BOOL bForce = FALSE);
    void SetSliderDescEdit();
    int BoundIntBySliderRange(int nIntValue, CSliderCtrl* pSlider);

    void NewUndoData(BOOL bUndo = TRUE);
    void DoUndoRedo(BOOL bUndo);
    void ProcChange(BOOL bReset = FALSE);

    void PerformBlink();

    BOOL VerifyMsg(eVerifyType eType);

// Construction
public:
    CPalModDlg(CWnd* pParent = NULL);    // standard constructor

// Dialog Data
    enum { IDD = IDD_PALMOD_DIALOG };
    
    void OnPalSelChange(int nCtrlId);
    void OnPalHLChange(void * pPalCtrl, int nCtrlId);
    void CustomEditProc(void * pPalCtrl, int nCtrlId, int nMethod);
    //void OnPalMHL(void * pPalCtrl, int nCtrlId);

    void UpdateSliderPos(int nCtrlId);

    void Enable(BOOL bEnableFlag = TRUE);
    void UpdateEnableCtrls();
    void EnableSlider(int RH, int GS, int BL);
    void ResetSlider(BOOL bSetZero = TRUE);

    void UpdateEditKillFocus(int nCtrlId);
    void CloseFileDir();
    void ClearGameVar();
    void SetStatusText(CString szText);
    void StopBlink();

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    CToolTipCtrl m_ToolTip;

// Implementation
protected:
    HICON m_hIcon;

    // Generated message map functions
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()

public:
    CComboBox m_CBUnitSel;
    CComboBox m_CBChildSel1;
    CComboBox m_CBChildSel2;
    afx_msg void OnCBUnitChildChange();
    CPalTool m_PalHost;
    virtual BOOL PreTranslateMessage(MSG* pMsg);
    afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
    CSliderCtrl m_RHSlider;
    CSliderCtrl m_GSSlider;
    CSliderCtrl m_BLSlider;
    int m_ColMode = 0;
    afx_msg void OnRadioHLS();
    afx_msg void OnRadioRGB();
    CSliderCtrl m_ASlider;
    afx_msg void OnClose();
    int m_Edit_RH = 0;
    int m_Edit_GS = 0;
    int m_Edit_BL = 0;
    int m_Edit_A = 0;

    int nBlinkState = 0;
    int nBlinkCount = 0;

    CStatusBar m_StatusBar;
    afx_msg void OnKillFocusEditRh();
    afx_msg void OnKillFocusEditGS();
    afx_msg void OnKillFocusEditBL();
    afx_msg void OnKillFocusEditA();
    
    CString m_EditRHDesc = _T("");
    CString m_EditGSDesc = _T("");
    CString m_EditBLDesc = _T("");
    CString m_EditADesc = _T("A");

    afx_msg void OnBnNewCol();
    afx_msg void OnBnSetCol();
    afx_msg void OnColSett();
    afx_msg void OnBnUpdate();
    afx_msg void OnFilePatch();
    afx_msg void OnSavePatchFile();
    afx_msg void OnGetCol();
    afx_msg void OnAutoSetCol();

    afx_msg void OnEditCopy();
    afx_msg void OnEditPaste();

    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
    afx_msg void OnSettingsSettings();
    afx_msg void OnEditUndo();
    afx_msg void OnEditRedo();
    afx_msg void OnEditSelectAll();
    afx_msg void OnEditSelectNone();
    afx_msg void OnNMReleasedCaptureAll(NMHDR *pNMHDR, LRESULT *pResult);
    afx_msg void OnDeltaposSpinRH(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnDeltaposSpinGS(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnDeltaposSpinBL(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnDeltaposSpinA(NMHDR* pNMHDR, LRESULT* pResult);
    afx_msg void OnFileExit();
    afx_msg void OnFileCloseFileDir();
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnBnShowPrev();
    afx_msg void OnSetFocus(CWnd* pOldWnd);
    afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
    afx_msg void OnFileOpen();
    afx_msg void OnButtonClickCheckEdits();
    afx_msg void OnBnRevert();
    afx_msg void OnBnBlink();
    afx_msg void OnAboutAboutpalmod();
    afx_msg void OnBnClickedBinvert();
    afx_msg void OnImportPalette();
    afx_msg void OnExportPalette();
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);

    afx_msg void OnLoadDir_Jojos50()        { OnLoadGameByDirectory(JOJOS_A_DIR_50); };
    afx_msg void OnLoadDir_Jojos51()        { OnLoadGameByDirectory(JOJOS_A_DIR_51); };
    afx_msg void OnLoadDir_MVC2ArcadeAll()  { OnLoadGameByDirectory(MVC2_A_DIR); };
    afx_msg void OnLoadDir_MVC2DCUSA()      { OnLoadGameByDirectory(MVC2_D); };
    afx_msg void OnLoadDir_MVC2PS2USA()     { OnLoadGameByDirectory(MVC2_P); };
    afx_msg void OnLoadDir_RedEarthAll()    { OnLoadGameByDirectory(REDEARTH_A_DIR); };
    afx_msg void OnLoadDir_SFIII3DCAll()    { OnLoadGameByDirectory(SFIII3_D); };
    afx_msg void OnLoadDir_SFIII3ArcadeAll() { OnLoadGameByDirectory(SFIII3_A_DIR); };
};

extern BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);

extern BOOL IsPasteSupported();
extern CStringA szPasteStr;

extern int CALLBACK OnBrowseDialog( HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData );
extern void SetLastUsedDirectory( LPCTSTR ptszPath, int nGameFlag );
extern BOOL GetLastUsedDirectory( LPTSTR ptszPath, DWORD cbSize, int * nGameFlag, BOOL bCheck = FALSE, BOOL * bIsDir = NULL);
