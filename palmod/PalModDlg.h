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
#include "ColorSystem.h"

#include "afxcmn.h"
#include <afxole.h> // for drag and drop support

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

class CPalDropTarget : public COleDropTarget
{
public:
    DROPEFFECT OnDragEnter(CWnd* pWnd, COleDataObject* pDataObject, DWORD dwKeyState, CPoint point) override;
    BOOL OnDrop(CWnd* pWnd, COleDataObject* pDataObject, DROPEFFECT dropEffect, CPoint point) override;
    // maintain state until we have a new enter event
    DROPEFFECT OnDragOver(CWnd*, COleDataObject*, DWORD, CPoint) override{ return m_currentEffectState; };

private:
    DROPEFFECT m_currentEffectState = DROPEFFECT_NONE;
};

// CPalModDlg dialog
class CPalModDlg : public CDialog
{
public:
    
    //Program variables
    CPalGroup* MainPalGroup = nullptr;
    CImgDisp* ImgDispCtrl = nullptr;
    CImgDat* ImgFile = nullptr;
    CPalDropTarget m_dropTarget;

    BOOL bOleInit = TRUE;
    BOOL bEnabled = FALSE;

    BOOL m_fForceShowAs32bitColor = TRUE;
    BOOL m_fShowAsRGBNotHSL = TRUE;
    BOOL bCopyFromBase = FALSE;
    BOOL m_fShowExtraCopyData = TRUE;

    BOOL fFileChanged = FALSE;
    BOOL bPalChanged = FALSE;

    BOOL bGetSliderUndo = TRUE;

    sPalDef* CurrPalDef = nullptr;
    sPalSep* CurrPalSep = nullptr;
    CJunk* CurrPalCtrl = nullptr;

    BOOL bCanBlink = TRUE;
    COLORREF* pTempPalCopy = nullptr;

    BOOL bForceImg = FALSE; 
    UINT_PTR nCurrSelPal = 0;
    int nPalSelAmt = 0;

    int nPalImgIndex = 0;
    
    BOOL bLoadUnit = TRUE;
    int nPrevUnitSel = 0xffff;
    int nPrevChildSel1 = 0xffff;
    int nPrevChildSel2 = 0xffff;

    int m_nRGBAmt = 0, m_nAAmt = 0;

    CUndoRedo UndoProc;

    COLORREF crBlinkCol = 0;

    BOOL bCanMinMax = FALSE;

    //Program functions

    void LoadGameDir(SupportedGamesList nGameFlag, WCHAR* pszLoadDir);
    void OnLoadGameByDirectory(SupportedGamesList nGameFlag);
    BOOL SetLoadDir(CString* strOut, LPCWSTR pszDescriptionString = nullptr, SupportedGamesList nDefaultGameFlag = NUM_GAMES);
    void UpdateAppTitle();

    void LoadGameFile(SupportedGamesList nGameFlag, WCHAR* pszFile);

    void LoadLastDir();

    void SetColorsPerLineTo8();
    void SetColorsPerLineTo16();
    void SetColorFormatTo(ColMode newColMode);
    void SetColorFormatToRGB333() { SetColorFormatTo(ColMode::COLMODE_RGB333); };
    void SetColorFormatToRGB444_BE() { SetColorFormatTo(ColMode::COLMODE_RGB444_BE); };
    void SetColorFormatToRGB444_LE() { SetColorFormatTo(ColMode::COLMODE_RGB444_LE); };
    void SetColorFormatToRGB555_BE() { SetColorFormatTo(ColMode::COLMODE_RGB555_BE); };
    void SetColorFormatToRGB555_LE() { SetColorFormatTo(ColMode::COLMODE_RGB555_LE); };
    void SetColorFormatToBGR555_BE() { SetColorFormatTo(ColMode::COLMODE_BGR555_BE); };
    void SetColorFormatToBGR555_LE() { SetColorFormatTo(ColMode::COLMODE_BGR555_LE); };
    void SetColorFormatToNEOGEO() { SetColorFormatTo(ColMode::COLMODE_RGB666_NEOGEO); };
    void SetColorFormatToSharpRGB() { SetColorFormatTo(ColMode::COLMODE_RGB555_SHARP); };
    void SetColorFormatToGRB555_LE() { SetColorFormatTo(ColMode::COLMODE_GRB555_LE); };
    void SetColorFormatToxRGB888() { SetColorFormatTo(ColMode::COLMODE_xRGB888); };
    void SetColorFormatToxBGR888() { SetColorFormatTo(ColMode::COLMODE_xBGR888); };
    void SetColorFormatToARGB1888() { SetColorFormatTo(ColMode::COLMODE_ARGB1888); };
    // I'm deliberately not exposing ColMode::COLMODE_ARGB1888_32STEPS here at this point:
    // it's only currently used for MBAACC.
    void SetColorFormatToARGB7888() { SetColorFormatTo(ColMode::COLMODE_ARGB7888); };
    void SetColorFormatToARGB8888() { SetColorFormatTo(ColMode::COLMODE_ARGB8888); };
    void SetColorFormatToABGR8888() { SetColorFormatTo(ColMode::COLMODE_ABGR8888); };

    void SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption);
    void SetMaximumWriteTo16Colors() { SetMaximumWritePerEachTransparency(PALWriteOutputOptions::WRITE_16); };
    void SetMaximumWriteTo256Colors() { SetMaximumWritePerEachTransparency(PALWriteOutputOptions::WRITE_MAX); };

    void SetAlphaModeTo(AlphaMode newAlphaMode);
    void SetAlphaModeToFixed() { SetAlphaModeTo(AlphaMode::GameUsesFixedAlpha); };
    void SetAlphaModeToUnused() { SetAlphaModeTo(AlphaMode::GameDoesNotUseAlpha); };
    void SetAlphaModeToVariable() { SetAlphaModeTo(AlphaMode::GameUsesVariableAlpha); };
    void SetAlphaModeToChaotic() { SetAlphaModeTo(AlphaMode::GameUsesChaoticAlpha); };

    void UpdateColorFormatMenu();

    void PostGameLoad();
    void UpdateCombo();
    void PostPalSel();

    void LoadSettings();
    void SaveSettings();
    void UpdateSettingsMenuItems();

    bool LoadPaletteFromACT(LPCWSTR pszFileName, bool fReadUpsideDown = false);
    bool LoadPaletteFromPAL(LPCWSTR pszFileName);
    bool LoadPaletteFromPNG(LPCWSTR pszFileName, bool fReadUpsideDown = false);
    bool LoadPaletteFromPS3SF3OETXT(LPCWSTR pszFileName);
    // if you add a new palette type here, please update the CPalDropTarget support

    bool SavePaletteToACT(LPCWSTR pszFileName, bool fRightsideUp);
    bool SavePaletteToGPL(LPCWSTR pszFileName);
    bool SavePaletteToPAL(LPCWSTR pszFileName);

    void UpdateSliderSel(BOOL bModeChange = FALSE, BOOL bResetRF = FALSE);
    void SetShowColorsAsRGBOrHSL(BOOL fShowAsRGB);
    void GetPlaneData();
    void UpdatePalSel(BOOL bSetSingleCol = FALSE);

    void Blink();

    void GetSetSingleCol();
    void SetSliderCol(int nRH, int nGS, int nBL, int nA = -1);
    void UpdateMultiEdit(BOOL bForce = FALSE);
    void SetSliderDescEdit();
    int BoundStepBySliderRange(int nIntValue, CSliderCtrl* pSlider);

    void NewUndoData(BOOL bUndo = TRUE);
    void DoUndoRedo(BOOL bUndo);
    void ProcChange(BOOL bReset = FALSE);

    void PerformBlink();

    BOOL VerifyMsg(eVerifyType eType);

    void CopyColorToClipboard(COLORREF crColor);

// Construction
public:
    CPalModDlg(CWnd* pParent = NULL);    // standard constructor
#ifdef ENABLE_MUI_SUPPORT
    ~CPalModDlg();
#endif

// Dialog Data
    enum { IDD = IDD_PALMOD_DIALOG };
    
    void OnPalSelChange(UINT_PTR nCtrlId);
    void OnPalHLChange(void * pPalCtrl, UINT_PTR nCtrlId);
    void CustomEditProc(void * pPalCtrl, UINT_PTR nCtrlId, int nMethod);
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
    void SetStatusText(UINT uStrId);
    void StopBlink();

protected:
    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support
    CToolTipCtrl m_ToolTip;

// Implementation
    HICON m_hIcon;

    void OnFileOpenInternal(UINT nDefaultGameFilter = NUM_GAMES);

    // Generated message map functions
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();
    DECLARE_MESSAGE_MAP()

private:
    void HandlePasteFromPalMod();
    void HandlePasteFromRGB();

public:
    static CStringA m_strPasteStr;

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
    
    CString m_EditRHDesc = L"";
    CString m_EditGSDesc = L"";
    CString m_EditBLDesc = L"";
    CString m_EditADesc = L"A";

    afx_msg void OnBnNewCol();
    afx_msg void OnChangeShowAs32BitColor();
    afx_msg void OnBnUpdate();
    afx_msg void OnFilePatch();
    afx_msg void OnFileCrossPatch();
    afx_msg void OnSavePatchFile();

    static void SetLastUsedDirectory(LPCWSTR pszPath, SupportedGamesList nGameFlag);
    static BOOL GetLastUsedPath(LPWSTR pszPath, DWORD cbSize, SupportedGamesList* nGameFlag, BOOL bCheckOnly = FALSE, BOOL* bIsDir = NULL);

    static BOOL IsPasteFromPalMod();
    static BOOL IsPasteSupported();
    static BOOL IsPasteRGB();

    afx_msg void OnEditCopy();
    afx_msg void OnEditPaste();
    afx_msg void OnCopyColorAtPointer();
    afx_msg void OnPasteColorAtPointer();

    DWORD GetColorAtCurrentMouseCursorPosition(int ptX = -1, int ptY = -1);
    bool SelectMatchingColorsInPalette(DWORD dwColorToMatch);

    static BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);
    static int CALLBACK OnBrowseDialog(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData);

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
    afx_msg void OnFileOpenExtrasFile();
    afx_msg void OnFileCloseFileDir();
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnBnShowPrev();
    afx_msg void OnSetFocus(CWnd* pOldWnd);
    afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized);
    afx_msg void OnFileOpen() { OnFileOpenInternal(); };
    afx_msg void OnButtonClickCheckEdits();
    afx_msg void OnBnRevert();
    afx_msg void OnBnClickedReverse();
    afx_msg void OnBnBlink();
    afx_msg void OnAboutAboutpalmod();
    afx_msg void OnBnClickedBinvert();
    afx_msg void OnImportPalette();
    afx_msg void OnExportPalette();
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
    afx_msg void OnChangeExtendedCopyData();

    afx_msg void OnLoadDir_Dankuga()        { OnLoadGameByDirectory(DANKUGA_A); };
    afx_msg void OnLoadDir_DBFCI()          { OnLoadGameByDirectory(DBFCI_A); };
    afx_msg void OnLoadDir_GGXXR_S()        { OnLoadGameByDirectory(GGXXR_S); };
    afx_msg void OnLoadDir_GGXXACR_S()      { OnLoadGameByDirectory(GGXXACR_S); };
    afx_msg void OnLoadDir_GGXXACR_P()      { OnLoadGameByDirectory(GGXXACR_P); };
    afx_msg void OnLoadDir_Jojos50()        { OnLoadGameByDirectory(JOJOS_A_DIR_50); };
    afx_msg void OnLoadDir_Jojos51()        { OnLoadGameByDirectory(JOJOS_A_DIR_51); };
    afx_msg void OnLoadDir_MAAB_S()         { OnLoadGameByDirectory(MAAB_A); };
    afx_msg void OnLoadDir_MBAACC_S()       { OnLoadGameByDirectory(MBAACC_S); };
    afx_msg void OnLoadDir_MVC2ArcadeAll()  { OnLoadGameByDirectory(MVC2_A_DIR); };
    afx_msg void OnLoadDir_MVC2DCUSA()      { OnLoadGameByDirectory(MVC2_D); };
    afx_msg void OnLoadDir_MVC2PS2USA()     { OnLoadGameByDirectory(MVC2_P); };
    afx_msg void OnLoadDir_P4AU_NESICA()    { OnLoadGameByDirectory(P4AU_NESICA); };
    afx_msg void OnLoadDir_RedEarth30()     { OnLoadGameByDirectory(REDEARTH_A_DIR_30); };
    afx_msg void OnLoadDir_RedEarth31()     { OnLoadGameByDirectory(REDEARTH_A_DIR_31); };
    afx_msg void OnLoadDir_RedEarth50()     { OnLoadGameByDirectory(REDEARTH_A_DIR_50); };
    afx_msg void OnLoadDir_SFIII3DCAll()    { OnLoadGameByDirectory(SFIII3_D); };
    afx_msg void OnLoadDir_SFIII1Arcade()   { OnLoadGameByDirectory(SFIII1_A_DIR); };
    afx_msg void OnLoadDir_SFIII2Arcade()   { OnLoadGameByDirectory(SFIII2_A_DIR); };
    afx_msg void OnLoadDir_SFIII3Arcade10() { OnLoadGameByDirectory(SFIII3_A_DIR_10); };
    afx_msg void OnLoadDir_SFIII3Arcade51() { OnLoadGameByDirectory(SFIII3_A_DIR_51); };
    afx_msg void OnLoadDir_SFIII3Arcade4rd() { OnLoadGameByDirectory(SFIII3_A_DIR_4rd); };
    afx_msg void OnLoadDir_SFIII3Arcade4rd_10() { OnLoadGameByDirectory(SFIII3_A_DIR_4rd_10); };
    afx_msg void OnLoadDir_SFIII3ArcadeEx() { OnLoadGameByDirectory(SFIII3_A_DIR_EX); };
    afx_msg void OnLoadDir_UNICLR()         { OnLoadGameByDirectory(UNICLR_A); };
};
