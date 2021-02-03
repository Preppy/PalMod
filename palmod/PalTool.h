#pragma once

#include "afxwin.h"
#include "game\Default.h"
#include "Junk.h"

#define PALTOOL_CLASSNAME    L"CPalTool"  // Window class name

#define PAL_TXT_SPACE    5

#define ID_PALTOOLSPIN    0xFF00
#define PT_PAGECHANGE    WM_USER - 100

struct sPalEntry
{
    CJunk* PaletteCtrl = nullptr;
    WCHAR* szPalStr = nullptr;
    BOOL bAvail = FALSE;
};

class CPalTool : public CWnd
{
private:
    sPalEntry pPalEntry[MAX_PALETTES_DISPLAYABLE];
    CSize PalSize[MAX_PALETTES_DISPLAYABLE];

    BOOL bFirstPaint = TRUE;
    BOOL bSpinInit = TRUE;

    CFont BaseFont;
    bool m_fFontIsBold = true;
    int nFontHeight = -1;

    UINT_PTR nNotifyCtrlIndex = 0;

    CSpinButtonCtrl m_PgSpin;

    CRect rClient;

    int nCurrPage = 0;
    int nPageAmt = 0;
    int nCurrPalAmt = 0;
    int nPrevPalAmt = -1;

    int nPalViewH = 0;
    UINT16 rgPalRedir[MAX_PALETTES_DISPLAYABLE + 1];

    void Init();

    void ClearBG(CPaintDC* PaintDC);
    void DrawText();

    void OnPalSelChange(UINT_PTR nCtrlId, BOOL bCurrPage = TRUE);

    void SendPalMsg(UINT_PTR nCtrlId, int nType);
    void SetFontToBold(bool beBold);

public:
    CPalTool(void);
    ~CPalTool(void);

    void CleanUp();

    void BeginSetPal();
    void EndSetPal();
    void SetPal(int nIndex, int nAmt, COLORREF* rgNewCol, WCHAR* szNewPalStr);
    UINT_PTR GetNotifyIndex() { return nNotifyCtrlIndex; };
    CJunk* GetNotifyPal() { return pPalEntry[nNotifyCtrlIndex].PaletteCtrl; };
    CJunk* GetPalCtrl(UINT_PTR nIndex) { return pPalEntry[nIndex].bAvail ? pPalEntry[nIndex].PaletteCtrl : NULL; };
    LPCWSTR GetPalName(UINT_PTR nIndex) { return pPalEntry[nIndex].bAvail ? pPalEntry[nIndex].szPalStr : L"Untitled Palette"; };

    void ResetNotifyIndex() { nNotifyCtrlIndex = 0; };

    BOOL CurrPalAvail() { return pPalEntry[nNotifyCtrlIndex].bAvail; };
    void ShowAvailPal();
    void UpdateAllPalCtrls();
    void UpdateCtrl();

    int GetCurrentPageCount() { return nPageAmt; };

    //void ResetNotifyPal(int nIndex){OnPalSelChange(0);SendPalMsg(nNotifyCtrlIndex);};

    BOOL RegisterWindowClass();

    DECLARE_MESSAGE_MAP()
    afx_msg void OnPaint();
    afx_msg BOOL OnEraseBkgnd(CDC* pDC);
    afx_msg void OnDeltaposSpin(NMHDR* pNMHDR, LRESULT* pResult);

public:
    void UpdateEveryIndex();
    void UpdateEveryCtrl();

protected:
    virtual void PreSubclassWindow();

public:
    virtual BOOL PreTranslateMessage(MSG* pMsg);
};
