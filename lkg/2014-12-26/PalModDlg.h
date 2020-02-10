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

enum eVerifyType
{
	VM_PALCHANGE,
	VM_FILECHANGE
};


#define DEFAULT_STATUS_TEXT "Always keep a backup of files!"
// CPalModDlg dialog
class CPalModDlg : public CDialog
{
public:
	
	//Program variables
	CPalGroup * MainPalGroup;
	CImgDisp * ImgDispCtrl;
	CImgDat * ImgFile;

	BOOL bOleInit;
	BOOL bEnabled;

	int nPalWMax;

	BOOL bShow32;
	BOOL bGetCol;
	BOOL bAutoSetCol;
	BOOL bRGB;
	BOOL bCopyFromBase;

	BOOL bFileChanged;
	BOOL bPalChanged;

	BOOL bGetSliderUndo;

	sPalDef * CurrPalDef;
	sPalSep * CurrPalSep;
	CJunk * CurrPalCtrl;

	BOOL bCanBlink;
	COLORREF * pTempPalCopy;

	BOOL bForceImg; 
	int nCurrSelPal;
	int nPalSelAmt;

	int nPalImgIndex;
	
	int bLoadUnit, nPrevUnitSel, nPrevChildSel1, nPrevChildSel2;

	int nRAmt, nGAmt, nBAmt, nAAmt;

	double nRMul, nGMul, nBMul, nAMul;
	double nTRMul, nTGMul, nTBMul, nTAMul;

	CUndoRedo UndoProc;

	COLORREF crBlinkCol;

	BOOL bCanMinMax;

	RECT rDefault;
	
	//Program functions

	void LoadGameDir(int nGameFlag, CHAR * szLoadDir);
	BOOL SetLoadDir(CString * szOut);

	void LoadGameFile(int nGameFlag, CHAR * szFile);

	void LoadLastDir();

	void PostGameLoad();
	void UpdateCombo();
	void PostPalSel();

	void LoadSettings();
	void SaveSettings();

	void UpdateSliderSel(BOOL bModeChange = FALSE, BOOL bResetRF = FALSE);
	void SetColMode(int nColMode);
	void GetPlaneData();
	void SetShow32(BOOL bNewMode);
	void UpdatePalSel(BOOL bSetSingleCol = FALSE);


	void Blink();

	void GetSetSingleCol();
	void SetSliderCol(int nRH, int nGS, int nBL, int nA = -1);
	void UpdateMultiEdit(BOOL bForce = FALSE);
	void SetSliderDescEdit();

	void NewUndoData(BOOL bUndo = TRUE);
	void DoUndoRedo(BOOL bUndo);
	void ClearUndoRedo();
	void ProcChange(BOOL bReset = FALSE);

	void PerformBlink();

	BOOL VerifyMsg(eVerifyType eType);

// Construction
public:
	CPalModDlg(CWnd* pParent = NULL);	// standard constructor

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
	virtual void DoDataExchange(CDataExchange* pDX);	// DDX/DDV support

	

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
	afx_msg void OnLDMVC2DCUSA();
	CComboBox m_CBUnitSel;
	CComboBox m_CBChildSel2;
	CComboBox m_CBChildSel1;
	afx_msg void OnCBUnitChildChange();
	CPalTool m_PalHost;
	virtual BOOL PreTranslateMessage(MSG* pMsg);
	afx_msg void OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar);
	CSliderCtrl m_RHSlider;
	CSliderCtrl m_GSSlider;
	CSliderCtrl m_BLSlider;
	int m_ColMode;
	afx_msg void OnRadioHLS();
	afx_msg void OnRadioRGB();
	CSliderCtrl m_ASlider;
	afx_msg void OnClose();
	int m_Edit_RH;
	int m_Edit_GS;
	int m_Edit_BL;
	int m_Edit_A;

	int nBlinkState;
	int nBlinkCount;

	CStatusBar m_StatusBar;
	afx_msg void OnKillFocusEditRh();
	afx_msg void OnKillFocusEditGS();
	afx_msg void OnKillFocusEditBL();
	afx_msg void OnKillFocusEditA();
	
	CString m_EditRHDesc;
	CString m_EditGSDesc;
	CString m_EditBLDesc;
	CString m_EditADesc;
	afx_msg void OnBnNewCol();
	afx_msg void OnBnSetCol();
	afx_msg void OnBnSettings();
	afx_msg void OnColSett();
	afx_msg void OnBnUpdate();
	afx_msg void OnFilePatch();
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
	afx_msg void OnFileExit();
	afx_msg void OnFileCloseFileDir();
	afx_msg void OnTimer(UINT_PTR nIDEvent);
	afx_msg void OnBnShowPrev();
	afx_msg void OnSetFocus(CWnd* pOldWnd);
	afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
	afx_msg void OnLdMVC2PS2USA();
	afx_msg void OnFileOpen();
	afx_msg void OnBnClickedBEidrian1();
	afx_msg void OnBnClickedBEidrian2();
	afx_msg void OnBnRevert();
	afx_msg void OnBnBlink();
	afx_msg void OnAboutAboutpalmod();
	afx_msg void OnBnClickedBinvert();
	afx_msg void OnLoadAct();
	afx_msg void OnSaveAct();
	afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
	afx_msg void OnLdsfiii3dcall();
};

extern BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);

extern BOOL VerifyPaste();
extern CString szPasteStr;

extern int CALLBACK OnBrowseDialog( HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData );
extern void SetLastUsedDirectory( LPCTSTR ptszPath, int nGameFlag );
extern BOOL GetLastUsedDirectory( LPTSTR ptszPath, DWORD cbSize, int * nGameFlag, BOOL bCheck = FALSE, BOOL * bIsDir = NULL);