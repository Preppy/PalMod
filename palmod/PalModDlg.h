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
#include "MappingPalettes.h"
#include "DropTarget.h"

#include "afxcmn.h"

#define round(x)(x > 0.0 ? x + 0.5 : x + -0.5)

constexpr auto TIMER_STATUS = 1;
constexpr auto TIMER_BLINK = 2;
constexpr auto TIMER_ELAPSE = 10 * 1000;
constexpr auto TIMER_BLINK_ELAPSE = 1 * 200;

enum class eVerifyType
{
    VM_PALCHANGE,
    VM_FILECHANGE
};

// GIF headers use an odd number of bytes, so avoid having our struct padded
#pragma pack(push, 1)
struct GIFHeader
{
    // packing per https://www.w3.org/Graphics/GIF/spec-gif89a.txt
    byte type[3];
    byte version[3];
    uint16_t width;
    uint16_t height;
    byte flags;
    byte bgcolor;
    byte aspectratio;
};
#pragma pack(pop)

// CPalModDlg dialog
class CPalModDlg : public CDialog
{
private:
    //Program variables
    BOOL m_fOleInit = TRUE;
    BOOL m_fEnabled = FALSE;

    BOOL m_fForceShowAs32bitColor = TRUE;
    BOOL m_fShowAsRGBNotHSL = TRUE;
    BOOL m_fCopyFromBase = FALSE;
    BOOL m_fShowExtraCopyData = TRUE;

    BOOL m_fFileChanged = FALSE;
    BOOL m_fPalChanged = FALSE;

    // We use this to bundle all mouse activity into one undo step
    // as opposed to a jumble of steps for each mouse notification.
    bool m_fCurrentlyBundlingSliderActions = false;

    CImgDisp* ImgDispCtrl = nullptr;
    CImgDat* ImgFile = nullptr;
    CPalDropTarget m_dropTarget;
    CMappingPaletteManager PaletteMapper;
    CUndoRedo UndoProc;

    sPalDef* CurrPalDef = nullptr;
    sPalSep* CurrPalSep = nullptr;
    CJunk* CurrPalCtrl = nullptr;

    BOOL m_fCanBlink = TRUE;
    COLORREF* m_pTempPalCopy = nullptr;

    BOOL m_fForceImg = FALSE; 
    UINT_PTR m_nCurrSelPal = 0;
    int m_nPalSelAmt = 0;

    int m_nPalImgIndex = 0;
    
    BOOL m_fLoadUnit = TRUE;
    int m_nPrevUnitSel = 0xffff;
    int m_nPrevChildSel1 = 0xffff;
    int m_nPrevChildSel2 = 0xffff;

    int m_nRGBAmt = 0, m_nAAmt = 0;

    COLORREF m_crBlinkCol = 0;

    BOOL m_fCanMinMax = FALSE;

    CString m_strPossiblePreviewStatus;

    void _WriteToFileAsANSIWithForcedLength(CFile& OutFile, CString strData, UINT nForcedLength);

    //Program functions
    void OnLoadGameByDirectory(SupportedGamesList nGameFlag);
    void OnLoadGameByUnknownFileSet();

    void UpdateAppTitle();

    void LoadLastDir();

    void SetColorsPerLineTo8();
    void SetColorsPerLineTo16();
    void SetColorFormatTo(ColMode newColMode);

    static_assert(static_cast<ColMode>(33) == ColMode::COLMODE_LAST, "New color formats need functions backing their menu command added here.");

    void SetColorFormatToBGR333() { SetColorFormatTo(ColMode::COLMODE_BGR333); };
    void SetColorFormatToRBG333() { SetColorFormatTo(ColMode::COLMODE_RBG333); };
    void SetColorFormatToRGB333() { SetColorFormatTo(ColMode::COLMODE_RGB333); };

    void SetColorFormatToBGR444() { SetColorFormatTo(ColMode::COLMODE_BGR444); };
    void SetColorFormatToBRG444() { SetColorFormatTo(ColMode::COLMODE_BRG444); };
    void SetColorFormatToRBG444() { SetColorFormatTo(ColMode::COLMODE_RBG444); };
    void SetColorFormatToRGB444_BE() { SetColorFormatTo(ColMode::COLMODE_RGB444_BE); };
    void SetColorFormatToRGB444_LE() { SetColorFormatTo(ColMode::COLMODE_RGB444_LE); };

    void SetColorFormatToBGR555_BE() { SetColorFormatTo(ColMode::COLMODE_BGR555_BE); };
    void SetColorFormatToBGR555_LE() { SetColorFormatTo(ColMode::COLMODE_BGR555_LE); };
    void SetColorFormatToBRG555_LE() { SetColorFormatTo(ColMode::COLMODE_BRG555_LE); };
    void SetColorFormatToGRB555_BE() { SetColorFormatTo(ColMode::COLMODE_GRB555_BE); };
    void SetColorFormatToGRB555_LE() { SetColorFormatTo(ColMode::COLMODE_GRB555_LE); };
    void SetColorFormatToRGB555_BE() { SetColorFormatTo(ColMode::COLMODE_RGB555_BE); };
    void SetColorFormatToRGB555_LE_CPS3() { SetColorFormatTo(ColMode::COLMODE_RGB555_LE_CPS3); };
    void SetColorFormatToRGB555_LE_Normal() { SetColorFormatTo(ColMode::COLMODE_RGB555_LE_NORMAL); };
    void SetColorFormatToxBGR555_LE() { SetColorFormatTo(ColMode::COLMODE_xBGR555_LE); };

    void SetColorFormatToNEOGEO() { SetColorFormatTo(ColMode::COLMODE_RGB666_NEOGEO); };
    // Deliberately not exposing the Neo Turf Masters CLUT: that requires knowledge of where to get the CLUT from
    void SetColorFormatToSharpRGB() { SetColorFormatTo(ColMode::COLMODE_RGB555_SHARP); };

    void SetColorFormatToBGR888() { SetColorFormatTo(ColMode::COLMODE_BGR888); };
    void SetColorFormatToBRG888() { SetColorFormatTo(ColMode::COLMODE_BRG888); };
    void SetColorFormatToGRB888() { SetColorFormatTo(ColMode::COLMODE_GRB888); };
    void SetColorFormatToRGB888() { SetColorFormatTo(ColMode::COLMODE_RGB888); };

    void SetColorFormatToRGBA8881() { SetColorFormatTo(ColMode::COLMODE_RGBA8881); };
    // I'm deliberately not exposing ColMode::COLMODE_RGBA8881_32STEPS here at this point:
    // it's only currently used for MBAACC.
    void SetColorFormatToRGBA8887() { SetColorFormatTo(ColMode::COLMODE_RGBA8887); };
    void SetColorFormatToRGBA8888_BE() { SetColorFormatTo(ColMode::COLMODE_RGBA8888_BE); };
    void SetColorFormatToRGBA8888_BE16() { SetColorFormatTo(ColMode::COLMODE_RGBA8888_BE16); };
    void SetColorFormatToRGBA8888_LE() { SetColorFormatTo(ColMode::COLMODE_RGBA8888_LE); };
    void SetColorFormatToBGRA8888_BE() { SetColorFormatTo(ColMode::COLMODE_BGRA8888_BE); };
    void SetColorFormatToBGRA8888_LE() { SetColorFormatTo(ColMode::COLMODE_BGRA8888_LE); };
    void SetColorFormatToRBGA8888_LE() { SetColorFormatTo(ColMode::COLMODE_RBGA8888_LE); };

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
    void UpdateCombo(bool fForceUpdate = false);
    void PostPalSel();

    void LoadSettings();
    void SaveSettings();
    void UpdateSettingsMenuItems();

    void SavePaletteToACT(LPCWSTR pszFileName, bool fRightsideUp, bool& fShouldShowGenericError);
    void SavePaletteToCFPL(LPCWSTR pszFileName, bool& fShouldShowGenericError);
    void SavePaletteToGPL(LPCWSTR pszFileName, bool& fShouldShowGenericError);
    void SavePaletteToHPAL(LPCWSTR pszFileName, bool& fShouldShowGenericError);
    void SavePaletteToIMPL(LPCWSTR pszFileName, bool& fShouldShowGenericError);
    void SavePaletteToPAL(LPCWSTR pszFileName, bool& fShouldShowGenericError);
    void SavePaletteToPRPL(LPCWSTR pszFileName, bool& fShouldShowGenericError);
    void SavePaletteToTPL(LPCWSTR pszFileName, bool& fShouldShowGenericError);

    void UpdateSliderSel(BOOL fModeChange = FALSE, BOOL fResetRF = FALSE);
    void SetShowColorsAsRGBOrHSL(BOOL fShowAsRGB);
    void GetPlaneData();
    void UpdatePalSel(BOOL fSetSingleCol = FALSE);

    void Blink();
    void PerformBlink();

    void GetSetSingleCol();
    void SetSliderCol(int nRH, int nGS, int nBL, int nA = -1);
    void UpdateMultiEdit(BOOL fForce = FALSE);
    void SetSliderDescEdit();
    int BoundStepBySliderRange(int nIntValue, CSliderCtrl* pSlider);

    void NewUndoData(BOOL fUndo = TRUE);
    void DoUndoRedo(BOOL fUndo);
    void ProcChange(BOOL fReset = FALSE);

    void _UpdateStatusBarWidthIfNeeded(uint32_t nPaneTwoWidth);

    BOOL VerifyMsg(eVerifyType eType);

// Dialog Data
    enum { IDD = IDD_PALMOD_DIALOG };
    
    void OnPalHLChange(void * pPalCtrl, UINT_PTR nCtrlId);
    void CustomEditProc(void * pPalCtrl, UINT_PTR nCtrlId, int nMethod);
    //void OnPalMHL(void * pPalCtrl, int nCtrlId);

    void UpdateSliderPos(int nCtrlId);

    void Enable(BOOL fEnableFlag = TRUE);
    void UpdateEnableCtrls();
    void EnableSlider(int RH, int GS, int BL);
    void ResetSlider(BOOL fSetZero = TRUE);

    void UpdateEditKillFocus(int nCtrlId);
    void CloseFileDir();
    void ClearGameVar();
    void StopBlink();

    void HandlePasteFromPalMod();
    void HandlePasteFromRGB(bool fAdvanceNext = false, bool fRefreshUI = true);
    void PasteToPaletteFromRGB(COLORREF clrIn, bool fAdvanceNext = false, bool fRefreshUI = true);

    bool CurrentBBCFCharacterIsInBBTAG();

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

    int m_nBlinkState = 0;
    int m_nBlinkCount = 0;

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
    afx_msg void OnFileCrossPatch_DCPS2();
    afx_msg void OnFileCrossPatch_Steam();
    afx_msg void OnSavePatchFile();

    static void SetLastUsedDirectory(LPCWSTR pszPath, SupportedGamesList nGameFlag);

    static BOOL IsPasteFromPalMod();
    static BOOL IsPasteRGB();

    afx_msg void OnFindColorAtPointer();
    afx_msg void OnCopyColorAtPointer();
    afx_msg void OnPaste15ColorsAtPointer();
    afx_msg void OnPasteColorAtPointer();
    afx_msg void OnPasteWalkColorAtPointer();

    void HandleCopyToClipboard(bool fIncludeNonBinaryText = true);

    afx_msg void OnEditCopy() { HandleCopyToClipboard(true); };
    afx_msg void OnEditCopyBinary() { HandleCopyToClipboard(false); };
    afx_msg void OnEditCopyOffset();

    afx_msg void OnPalSelShiftLeft();
    afx_msg void OnPalSelShiftRight();
    afx_msg void OnPalSelShiftUp();
    afx_msg void OnPalSelShiftDown();
    afx_msg void OnPalSelPlus();
    afx_msg void OnPalSelMinus();

    static BOOL CALLBACK EnumChildProc(HWND hwnd, LPARAM lParam);
    static int CALLBACK OnBrowseDialog(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData);

    void GenerateGradientForSelectedColors(ColorSystem::ColorStepFunction pGradientFunctionToUse);

    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu);
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
    afx_msg void OnActivate(UINT nState, CWnd* pWndOther, BOOL fMinimized);
    afx_msg void OnFileOpen() { OnFileOpenInternal(); };
    afx_msg void OnButtonClickCheckEdits();
    afx_msg void OnBnRevert();
    afx_msg void OnBnBlink();
    afx_msg void OnAboutAboutPalMod();
    afx_msg void OnAboutShowReadMe();
    afx_msg void OnAboutShowHistory();
    afx_msg void OnAboutLaunchPalModSite();
    afx_msg void OnImportPalette();
    afx_msg void OnExportPalette();
    afx_msg void OnGetMinMaxInfo(MINMAXINFO* lpMMI);
    afx_msg void OnChangeExtendedCopyData();
    void OnMappingPaletteUse(uint8_t nStep);
    afx_msg void OnMappingPaletteUse_Step1() { OnMappingPaletteUse(1); };
    afx_msg void OnMappingPaletteUse_Step2() { OnMappingPaletteUse(2); };

    enum class ColorSwap
    {
        Invert = 0,
        Swap_RB = 1,
        Swap_GB = 2,
        Swap_RG = 3,
        Swap_RGB = 4,
        Swap_RBG = 5,
    };

    void HandleColorSwap(ColorSwap action);

    afx_msg void OnBnClickedBinvert() { HandleColorSwap(ColorSwap::Invert); };
    afx_msg void OnBnSwapRG() { HandleColorSwap(ColorSwap::Swap_RG); };
    afx_msg void OnBnSwapGB() { HandleColorSwap(ColorSwap::Swap_GB); };
    afx_msg void OnBnSwapRB() { HandleColorSwap(ColorSwap::Swap_RB); };
    afx_msg void OnBnSwapRGB() { HandleColorSwap(ColorSwap::Swap_RGB); };
    afx_msg void OnBnSwapRBG() { HandleColorSwap(ColorSwap::Swap_RBG); };

    afx_msg void OnLoadDir_AquaPlus_NL()    { OnLoadGameByDirectory(AquaPlus_NL); };
    afx_msg void OnLoadDir_AquaPlus_P()     { OnLoadGameByDirectory(AquaPlus_P); };
	afx_msg void OnLoadDir_AquaPlus_S()     { OnLoadGameByDirectory(AquaPlus_S); };
    afx_msg void OnLoadDir_BlazBlueCF()     { OnLoadGameByDirectory(BlazBlueCF_S); };
    afx_msg void OnLoadDir_CVS2DCUSA()      { OnLoadGameByDirectory(CVS2_D); };
    afx_msg void OnLoadDir_CVS2PS2USA()     { OnLoadGameByDirectory(CVS2_P); };
    afx_msg void OnLoadDir_Dankuga()        { OnLoadGameByDirectory(DANKUGA_A); };
    afx_msg void OnLoadDir_DaemonBride()    { OnLoadGameByDirectory(DaemonBride_NL); };
    afx_msg void OnLoadDir_DaemonBrideAG()  { OnLoadGameByDirectory(DaemonBrideAG_NL); };

    afx_msg void OnLoadDir_DBFCI()          { OnLoadGameByDirectory(DBFCI_A); };
    afx_msg void OnLoadDir_GGML_P()         { OnLoadGameByDirectory(GGML_P); };
    afx_msg void OnLoadDir_GGXXR_S()        { OnLoadGameByDirectory(GGXXR_S); };
    afx_msg void OnLoadDir_GGXXACP_Wii()    { OnLoadGameByDirectory(GGXXACP_Wii); };
    afx_msg void OnLoadDir_GGXXACR_S()      { OnLoadGameByDirectory(GGXXACR_S); };
    afx_msg void OnLoadDir_GGXXACR_S_EXCHAR() { OnLoadGameByDirectory(GGXXACR_S_EXCHAR); };
    afx_msg void OnLoadDir_GGXXACR_S_EXTRAS() { OnLoadGameByDirectory(GGXXACR_S_EXTRAS); };
    afx_msg void OnLoadDir_GGXXACR_P()      { OnLoadGameByDirectory(GGXXACR_P); };
    afx_msg void OnLoadDir_Jojos50()        { OnLoadGameByDirectory(JOJOS_A_DIR_50); };
    afx_msg void OnLoadDir_Jojos51()        { OnLoadGameByDirectory(JOJOS_A_DIR_51); };
    afx_msg void OnLoadDir_Jojos51_USA()    { OnLoadGameByDirectory(JOJOS_US_A_DIR_51); };
    
    afx_msg void OnLoadDir_KOF02UM_S_8888() { OnLoadGameByDirectory(KOF02UM_S_DIR_8888); };
    afx_msg void OnLoadDir_KOF02UM_S_BGR555() { OnLoadGameByDirectory(KOF02UM_S_DIR_BGR555); };
    afx_msg void OnLoadDir_KOF02UM_S_RGB555() { OnLoadGameByDirectory(KOF02UM_S_DIR_RGB555); };
    afx_msg void OnLoadDir_MAAB_S()         { OnLoadGameByDirectory(MAAB_A); };
    afx_msg void OnLoadDir_MBTL_A()         { OnLoadGameByDirectory(MBTL_A); };
    afx_msg void OnLoadDir_MBAACC_S()       { OnLoadGameByDirectory(MBAACC_S); };
    afx_msg void OnLoadDir_MCI_S()          { OnLoadGameByDirectory(MCI_S); };
    afx_msg void OnLoadDir_MSHVSF_P()       { OnLoadGameByDirectory(MSHVSF_P); };
    afx_msg void OnLoadDir_MVC2ArcadeAll()  { OnLoadGameByDirectory(MVC2_A_DIR); };
    afx_msg void OnLoadDir_MVCPSXUSA()      { OnLoadGameByDirectory(MVC_P); };
    afx_msg void OnLoadDir_MVC2DCUSA()      { OnLoadGameByDirectory(MVC2_D); };
    afx_msg void OnLoadDir_MVC2PS2USA()     { OnLoadGameByDirectory(MVC2_P); };
    afx_msg void OnLoadDir_MVC2Steam()      { OnLoadGameByDirectory(MVC2_S_DIR); };
    afx_msg void OnLoadDir_MWarr()          { OnLoadGameByDirectory(MWARR_A); };
    afx_msg void OnLoadDir_NBHID_NL()       { OnLoadGameByDirectory(NBHID_NL); };
    afx_msg void OnLoadDir_NBHID_P()        { OnLoadGameByDirectory(NBHID_P); };
    afx_msg void OnLoadDir_NBHID_S()        { OnLoadGameByDirectory(NBHID_S); };
    
    afx_msg void OnLoadDir_P4AU_FightClub() { OnLoadGameByDirectory(P4AU_FightClub); };
    afx_msg void OnLoadDir_P4AU_NESICA()    { OnLoadGameByDirectory(P4AU_NESICA); };
    afx_msg void OnLoadDir_P4AU_STEAM()     { OnLoadGameByDirectory(P4AU_STEAM); };
    afx_msg void OnLoadDir_RedEarth30()     { OnLoadGameByDirectory(REDEARTH_A_DIR_30); };
    afx_msg void OnLoadDir_RedEarth31()     { OnLoadGameByDirectory(REDEARTH_A_DIR_31); };
    afx_msg void OnLoadDir_RedEarth50()     { OnLoadGameByDirectory(REDEARTH_A_DIR_50); };
    afx_msg void OnLoadDir_SFA3MAX()        { OnLoadGameByDirectory(SFA3MAX_PSP_D); };
    afx_msg void OnLoadDir_SFIII3DCAll()    { OnLoadGameByDirectory(SFIII3_D); };
    afx_msg void OnLoadDir_SFIII1Arcade()   { OnLoadGameByDirectory(SFIII1_A_DIR); };
    afx_msg void OnLoadDir_SFIII2Arcade()   { OnLoadGameByDirectory(SFIII2_A_DIR); };
    afx_msg void OnLoadDir_SFIII3Arcade10() { OnLoadGameByDirectory(SFIII3_A_DIR_10); };
    afx_msg void OnLoadDir_SFIII3Arcade51() { OnLoadGameByDirectory(SFIII3_A_DIR_51); };
    afx_msg void OnLoadDir_SFIII3Arcade4rd() { OnLoadGameByDirectory(SFIII3_A_DIR_4rd); };
    afx_msg void OnLoadDir_SFIII3Arcade4rd_10() { OnLoadGameByDirectory(SFIII3_A_DIR_4rd_10); };
    afx_msg void OnLoadDir_SFIII3ArcadeEx() { OnLoadGameByDirectory(SFIII3_A_DIR_EX); };
    afx_msg void OnLoadDir_UNICLR()         { OnLoadGameByDirectory(UNICLR_A); };
	afx_msg void OnLoadDir_UNI2()           { OnLoadGameByDirectory(UNI2_S); };
    afx_msg void OnLoadDir_XMVSF_P()         { OnLoadGameByDirectory(XMVSF_P); };
    afx_msg void OnLoadDir_Venture31()      { OnLoadGameByDirectory(VENTURE_A_DIR_31); };
    afx_msg void OnLoadDir_Venture50()      { OnLoadGameByDirectory(VENTURE_A_DIR_50); };
    afx_msg void OnLoadDir_DevMode()        { OnLoadGameByUnknownFileSet(); };

    CToolTipCtrl m_ToolTip;
    HICON m_hIcon;

    virtual void DoDataExchange(CDataExchange* pDX);    // DDX/DDV support

    void OnFileOpenInternal(UINT nDefaultGameFilter = NUM_GAMES);

    // Generated message map functions
    virtual BOOL OnInitDialog();
    afx_msg void OnSysCommand(UINT nID, LPARAM lParam);
    afx_msg void OnPaint();
    afx_msg HCURSOR OnQueryDragIcon();

public:
    // Construction
    //public:
    CPalModDlg(CWnd* pParent = NULL);    // standard constructor
#ifdef ENABLE_MUI_SUPPORT
    ~CPalModDlg();
#endif

    CPalGroup* MainPalGroup = nullptr;

    // This should be called after a game's PostSelProc call changes a shown secondary palette
    void RefreshSecondaryPalettesForPaletteChange();
    bool TryFallbackImageLoad(CGameClass* CurrGame, UINT nPosition);

    static BOOL GetLastUsedPath(LPWSTR pszPath, DWORD cbSize, SupportedGamesList* nGameFlag, BOOL fCheckOnly = FALSE, BOOL* fIsDir = nullptr);
    BOOL HaveUserPickADirectory(CString* strOut, LPCWSTR pszDescriptionString = nullptr, SupportedGamesList nDefaultGameFlag = NUM_GAMES);

    void LoadGameDir(SupportedGamesList nGameFlag, wchar_t* pszLoadDir);
    void LoadGameFile(SupportedGamesList nGameFlag, wchar_t* pszFile);

    BOOL IsActivePaletteChanged() { return m_fPalChanged; };

    static BOOL IsPasteSupported();

    DWORD GetColorAtCurrentMouseCursorPosition(int ptX = -1, int ptY = -1);
    void CopyColorToClipboard(COLORREF crColor);
    bool SelectMatchingColorsInPalette(DWORD dwColorToMatch, DWORD dwBackgroundColor);

    void SetStatusText(CString szText);
    void SetStatusText(UINT uStrId);

    afx_msg void OnBnClickedGradient_HSL();
    afx_msg void OnBnClickedGradient_HSV();
    afx_msg void OnBnClickedGradient_LAB();
    afx_msg void OnBnClickedGradient_RGB();
    afx_msg void OnBnClickedGradient_XYZ();
    afx_msg void OnBnClickedReverse();
    afx_msg void OnEditPaste();

    void OnPalSelChange(UINT_PTR nCtrlId);

    void SetSliderDescForAlpha(bool fUseAlphaNotSTB);

    // Generic palette data files
    bool LoadPaletteFromACT(LPCWSTR pszFileName, bool fReadUpsideDown = false);
    bool LoadPaletteFromBMP(LPCWSTR pszFileName);
    bool LoadGIFHeaderAndValidate(CFile& sourceGIF, GIFHeader& gif_header);
    bool ReadPaletteFromGIFFile(LPCWSTR pszGIFFileName, std::vector<COLORREF>& rgclrPaletteData);
    bool LoadPaletteFromGIF(LPCWSTR pszFileName);
    bool LoadPaletteFromGPL(LPCWSTR pszFileName);
    bool LoadPaletteFromPAL(LPCWSTR pszFileName);
    bool LoadPaletteFromPNG(LPCWSTR pszFileName, bool fReadUpsideDown = false);
    // BlazBlue palette files
    bool LoadPaletteFromCFPL(LPCWSTR pszFileName);
    bool LoadPaletteFromHPAL(LPCWSTR pszFileName);
    bool LoadPaletteFromIMPL(LPCWSTR pszFileName);
    // ACR palette files
    bool LoadPaletteFromPRPL(LPCWSTR pszFileName);
    // PS3 palette files
    bool LoadPaletteFromPS3SF3OETXT(LPCWSTR pszFileName);
    // if you add a new palette type here, please update the CPalDropTarget support in DropTarget.cpp

    DECLARE_MESSAGE_MAP()
};
