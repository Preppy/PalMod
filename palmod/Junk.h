#pragma once
#include "afxwin.h"

constexpr auto CUSTOM_HLCHANGE        = WM_USER + 1;
constexpr auto CUSTOM_SELHLCHANGE     = WM_USER + 2;
constexpr auto CUSTOM_SS              = WM_USER + 3; // single select
constexpr auto CUSTOM_MS              = WM_USER + 4; // multi select

constexpr auto CUSTOM_COPY            = WM_USER + 11;
constexpr auto CUSTOM_PASTE           = WM_USER + 12;
constexpr auto CUSTOM_SALL            = WM_USER + 13;
constexpr auto CUSTOM_SNONE           = WM_USER + 14;
constexpr auto CUSTOM_REVERSE         = WM_USER + 15;
constexpr auto CUSTOM_COPYOFFSET      = WM_USER + 16;
constexpr auto CUSTOM_GRADIENT_RGB    = WM_USER + 17;
constexpr auto CUSTOM_GRADIENT_HSL    = WM_USER + 18;
constexpr auto CUSTOM_GRADIENT_HSV    = WM_USER + 19;
constexpr auto CUSTOM_GRADIENT_LAB    = WM_USER + 20;
constexpr auto CUSTOM_GRADIENT_XYZ    = WM_USER + 21;

class CJunk :
    public CWnd
{
private:
    void NotifyParent(int iCustomMessage);
    UCHAR Toggle(UCHAR& tVar);

    void CleanUp();

    //Drawing functions
    void InitDC(CPaintDC &PaintDC);
    void DrawBG();
    BOOL ProcBaseBMP();
    void ClearBaseBMP();

    int GetPaletteSquareSize();

    void CustomFillRect(RECT* lpRect, uint8_t* crSrcCol, BlendMode bm);
    //Input management

    BOOL ProcessHovered(CPoint hPoint, CPoint& auxPos);
    void LoadDefaultPal();

    // Constants

    //Default Index color
    static constexpr uint8_t F_R = 48;
    static constexpr uint8_t F_G = 48;
    static constexpr uint8_t F_B = 48;
    
    //Background Color
    static constexpr uint8_t BG_R = 0;
    static constexpr uint8_t BG_G = 0;
    static constexpr uint8_t BG_B = 0;

    //Highlighted
    static constexpr uint8_t HL_R = 0;
    static constexpr uint8_t HL_G = 255;
    static constexpr uint8_t HL_B = 0;

    //Multiple Highlight
    static constexpr uint8_t MH_R = 255;
    static constexpr uint8_t MH_G = 255;
    static constexpr uint8_t MH_B = 255;

    //Selected
    static constexpr uint8_t SL_R = 255;
    static constexpr uint8_t SL_G = 0;
    static constexpr uint8_t SL_B = 0;

    //Background
    static constexpr uint8_t JUNK_BG_W = 16;
    static constexpr uint8_t JUNK_BG_H = 16;

    const COLORREF JUNK_BG[JUNK_BG_W * JUNK_BG_H] =
    {
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,
        0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF,  0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00FFFFFF, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC,  0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC, 0x00CCCCCC
    };

    static constexpr int BASE_PALETTE_SQUARE_SIZE = 15;
    static constexpr int BDR_SZ = 1;

    enum class PenOptions
    {
        FLAG_HIGHLIGHT,
        FLAG_SELECTED,
        FLAG_MULTIHIGHLIGHT,
        FLAG_DEFAULT,
    };

    static constexpr LPCWSTR JUNK_CLASSNAME = L"CJunk";  // Window class name

    //Default variables
    BOOL m_LButtonDown = FALSE;
    BOOL m_bFirstDCInit = TRUE;
    BOOL m_bFirstInit = TRUE;

    BOOL m_bEnabled = TRUE;
    BOOL m_bOverControl = FALSE;
    BOOL m_bInCtrl = FALSE;

    //Draw variables
    RECT m_rIndexRect;

    HBITMAP m_hBmp = nullptr;
    BITMAPINFO m_Bmpi;
    uint32_t* m_pBmpData = nullptr;
    CDC m_dcBaseDC;

    static BOOL m_bCreatedPens;

    static CPen m_PIndexHL;
    static CPen m_PIndexSL;
    static CPen m_PIndexMHL;
    static CPen m_PIndexBG;

    int m_nCurrAmt = -1;

    int m_iBaseW = 0;
    int m_iBaseH = 0;

    int m_iPalW = 0;
    int m_iPalH = 0;

    RECT m_rUnused = {};

    // These are initialized in the constructor
    int m_nWidthMax;
    int m_nMaximumColorsPerPage;

    //Input variables

    UCHAR* m_Highlighted = nullptr;
    UCHAR* m_Selected = nullptr;
    UCHAR* m_SelView = nullptr;

    inline void SetJunkState(UCHAR* State, LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);
    inline void SetHighlighted(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);
    inline void SetSelected(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);
    inline void SetSelViewItem(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);

    void SetIndexPen(int nIndex, PenOptions pFlag);

    int m_iHLAmt = 0;
    int m_iWorkingAmt = 0;
    int m_nAllocationLength = 0;

    int m_iHighlightx = 0;
    int m_iHighlighty = 0;

    int m_iCurrentIndexIfSingleSelection = 0;
    int m_iSelAmt = 0;

    int m_xHLOld = 0;
    int m_yHLOld = 0;

    int m_xInSelStart = 0;
    int m_yInSelStart = 0;

    int m_iHighlightIndex = 0;
    int m_nArrayIndex = 0;

    //Main palette
    COLORREF* m_BasePal = nullptr;

    void UpdateFace();

public:
    CJunk();
    ~CJunk();

    void Enable(BOOL fEnableFlag = TRUE) { m_bEnabled = fEnableFlag; UpdateCtrl(); }

    BOOL InitNewSize(int nNewAmt, COLORREF* rgNewPal);
    static BOOL InitPen();

    int GetBaseWidth() { return m_iBaseW; };
    int GetBaseHeight() { return m_iBaseH; };
    BOOL UpdateCtrl(BOOL fUpdFace = TRUE);

    void ClearSelected();
    void ClearSelView();
    void ClearHighlighted();
    bool SelectMatchingColorsInPalette(DWORD dwColorToMatch, DWORD dwBackgroundColor);

    void SelectAll();

    int GetWorkingAmt() { return m_iWorkingAmt; };
    UCHAR* GetSelIndex() { return m_Selected; };

    int GetSingleSelectIndex() { return m_iCurrentIndexIfSingleSelection; };
    COLORREF* GetBasePal() { return m_BasePal; };

    int GetHighlightIndex() { return m_iHighlightIndex; };

    void UpdateSelAmt();

    int GetSelAmt() { return m_iSelAmt; };
    int GetHLAmt() { return m_iHLAmt; };
    void SetArrayIndex(int nIndex) { m_nArrayIndex = nIndex; };
    void UpdateIndex(int nIndex);
    void UpdateIndexAll();

    enum class SelectionMovement
    {
        Left,
        Right,
        Up,
        Down,
        Plus,
        Minus
    };

    void MovePaletteSelection(SelectionMovement nOption);

    BOOL RegisterWindowClass();

    DECLARE_MESSAGE_MAP()

    afx_msg void OnPaint();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu);
    afx_msg void OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu);

protected:
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
