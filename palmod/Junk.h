#pragma once
#include "afxwin.h"
#include "JunkC.h"

#define JUNK_CLASSNAME    L"CJunk"  // Window class name

#define aaadd(x, y) ((UINT8)(((x) + (y) > 255) ? 255 : (x) + (y)))

#define CUSTOM_HLCHANGE        WM_USER +1
#define CUSTOM_SELHLCHANGE     WM_USER +2
#define CUSTOM_SS              WM_USER +3 // single select
#define CUSTOM_MS              WM_USER +4 // multi select

#define CUSTOM_COPY            WM_USER +11
#define CUSTOM_PASTE           WM_USER +12
#define CUSTOM_SALL            WM_USER +13
#define CUSTOM_SNONE           WM_USER +14
#define CUSTOM_REVERSE         WM_USER +15

#define BASE_PALETTE_SQUARE_SIZE 15
#define BDR_SZ 1

#define FLAG_HIGHLIGHT 0
#define FLAG_SELECTED 1
#define FLAG_MULTIHIGHLIGHT 2
#define FLAG_DEFAULT 3

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

    void SetIndexPen(int nIndex, int pFlag);

    void CustomFillRect(RECT* lpRect, UINT8* crSrcCol);
    //Input management

    BOOL ProcessHovered(CPoint hPoint, CPoint& auxPos);
    void LoadDefaultPal();

    //Default variables
    BOOL LButtonDown = FALSE;
    BOOL bFirstDCInit = TRUE;
    BOOL bFirstInit = TRUE;

    BOOL bEnabled = TRUE;
    BOOL bOverControl = FALSE;
    BOOL bInCtrl = FALSE;

    //Draw variables
    RECT rIndexRect;

    HBITMAP hBmp = nullptr;
    BITMAPINFO Bmpi;
    UINT32* pBmpData = nullptr;
    CDC dcBaseDC;

    static CPen PIndexHL;
    static CPen PIndexSL;
    static CPen PIndexMHL;
    static CPen PIndexBG;

    int nCurrAmt = -1;

    int iBaseW = 0;
    int iBaseH = 0;

    int iPalW = 0;
    int iPalH = 0;

    RECT rUnused = {};

    // These are initialized in the constructor
    int nWidthMax;
    int nMaximumColorsPerPage;

    //Input variables

    UCHAR* Highlighted = nullptr;
    UCHAR* Selected = nullptr;
    UCHAR* SelView = nullptr;

    inline void SetJunkState(UCHAR* State, LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);
    inline void SetHighlighted(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);
    inline void SetSelected(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);
    inline void SetSelViewItem(LPCWSTR pszFunctionName, int nIndex, UCHAR nValue);

    int iHLAmt = 0;
    int iWorkingAmt = 0;
    int nAllocationLength = 0;

    int iHighlightx = 0;
    int iHighlighty = 0;

    int SingleSelect = 0;
    int iSelAmt = 0;

    int xHLOld = 0;
    int yHLOld = 0;

    int xInSelStart = 0;
    int yInSelStart = 0;

    int iHighlightIndex = 0;
    int nArrayIndex = 0;

    //Main palette
    COLORREF* BasePal = nullptr;

    void UpdateFace();

public:
    CJunk();
    ~CJunk(void);

    void Enable(BOOL bEnableFlag = TRUE) { bEnabled = bEnableFlag; UpdateCtrl(); }

    BOOL InitNewSize(int nNewAmt, COLORREF* rgNewPal);
    static BOOL InitPen();

    int GetBaseWidth() { return iBaseW; };
    int GetBaseHeight() { return iBaseH; };
    BOOL UpdateCtrl(BOOL bUpdFace = TRUE);

    void ClearSelected();
    void ClearSelView();
    void ClearHighlighted();
    bool SelectMatchingColorsInPalette(DWORD dwColorToMatch);

    void SelectAll();

    int GetWorkingAmt() { return iWorkingAmt; };
    UCHAR* GetSelIndex() { return Selected; };

    int GetSS() { return SingleSelect; };
    COLORREF* GetBasePal() { return BasePal; };

    int GetHighlightIndex() { return iHighlightIndex; };

    void UpdateSelAmt();

    int GetSelAmt() { return iSelAmt; };
    int GetHLAmt() { return iHLAmt; };
    void SetArrayIndex(int nIndex) { nArrayIndex = nIndex; };
    void UpdateIndex(int nIndex);
    void UpdateIndexAll();

    BOOL RegisterWindowClass();

    DECLARE_MESSAGE_MAP()

    afx_msg void OnPaint();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnMouseMove(UINT nFlags, CPoint point);
    afx_msg void OnLButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnLButtonUp(UINT nFlags, CPoint point);
    afx_msg void OnTimer(UINT_PTR nIDEvent);
    afx_msg void OnRButtonDown(UINT nFlags, CPoint point);
    afx_msg void OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu);
    afx_msg void OnMenuSelect(UINT nItemID, UINT nFlags, HMENU hSysMenu);

protected:
    virtual BOOL OnCommand(WPARAM wParam, LPARAM lParam);
};
