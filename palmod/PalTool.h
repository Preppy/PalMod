#pragma once

#include "afxwin.h"
#include "game\Default.h"
#include "Junk.h"

constexpr auto PALTOOL_CLASSNAME = L"CPalTool";  // Window class name

constexpr auto PAL_TXT_SPACE = 5;

constexpr auto ID_PALTOOLSPIN = 0xFF00;
constexpr auto PT_PAGECHANGE = WM_USER - 100;

struct sPalEntry
{
    CJunk* PaletteCtrl = nullptr;
    LPCWSTR pszPalStr = nullptr;
    bool fPalAvailable = false;
};

class CPalTool : public CWnd
{
private:
    sPalEntry m_sPalEntry[MAX_PALETTES_DISPLAYABLE];
    CSize m_PalSize[MAX_PALETTES_DISPLAYABLE];

    bool m_fIsFirstPaint = true;
    bool m_fSpinInit = true;

    CFont m_BaseFont;
    bool m_fFontIsBold = true;
    int m_nFontHeight = -1;

    UINT_PTR m_nActivePaletteCtrlIndex = 0;

    CSpinButtonCtrl m_PgSpin;

    CRect m_rClient;

    int m_nCurrPage = 0;
    int m_nPageAmt = 0;
    int m_nCurrPalAmt = 0;
    int m_nPrevPalAmt = -1;

    int m_nPalViewH = 0;
    uint16_t m_rgPalRedir[MAX_PALETTES_DISPLAYABLE + 1] = {};

    void Init();

    void ClearBG(CPaintDC* PaintDC);
    void DrawText();

    void OnPalSelChange(UINT_PTR nCtrlId, BOOL fCurrPage = TRUE);

    void SendPalMsg(UINT_PTR nCtrlId, int nType);
    void SetFontToBold(bool beBold);

public:
    CPalTool();
    ~CPalTool();

    void CleanUp();

    void BeginSetPal();
    void EndSetPal();
    void SetPal(int nIndex, int nAmt, COLORREF* rgNewCol, LPCWSTR pszNewPalStr);
    UINT_PTR GetActivePaletteIndex() { return m_nActivePaletteCtrlIndex; };
    CJunk* GetNotifyPal() { return m_sPalEntry[m_nActivePaletteCtrlIndex].PaletteCtrl; };
    CJunk* GetPalCtrl(UINT_PTR nIndex) { return m_sPalEntry[nIndex].fPalAvailable ? m_sPalEntry[nIndex].PaletteCtrl : nullptr; };
    LPCWSTR GetPalName(UINT_PTR nIndex) { return m_sPalEntry[nIndex].fPalAvailable ? m_sPalEntry[nIndex].pszPalStr : L"Untitled Palette"; };

    void ResetNotifyIndex() { m_nActivePaletteCtrlIndex = 0; };

    bool CurrPalAvail() { return m_sPalEntry[m_nActivePaletteCtrlIndex].fPalAvailable; };
    void ShowAvailPal();
    void UpdateAllPalCtrls();
    void UpdateCtrl();

    int GetCurrentPaletteCount() { return m_nCurrPalAmt; };

    //void ResetNotifyPal(int nIndex){OnPalSelChange(0);SendPalMsg(m_nActivePaletteCtrlIndex);};

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
