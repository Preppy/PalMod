#include "StdAfx.h"
#include "PalTool.h"

CPalTool::CPalTool()
{
    Init();

    RegisterWindowClass();
}

CPalTool::~CPalTool()
{
    CleanUp();
}

#pragma warning( push )
#pragma warning( disable : 26454 ) // bug in Microsoft headers

BEGIN_MESSAGE_MAP(CPalTool, CWnd)
    ON_WM_PAINT()
    ON_WM_ERASEBKGND()
    ON_NOTIFY(UDN_DELTAPOS, ID_PALTOOLSPIN, &CPalTool::OnDeltaposSpin)
END_MESSAGE_MAP()

#pragma warning( pop )

BOOL CPalTool::RegisterWindowClass()
{
    WNDCLASS wndcls;
    HINSTANCE hInst = AfxGetInstanceHandle();

    if (!(::GetClassInfo(hInst, PALTOOL_CLASSNAME, &wndcls)))
    {
        // otherwise we need to register a new class
        wndcls.style = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
        wndcls.lpfnWndProc = ::DefWindowProc;
        wndcls.cbClsExtra = wndcls.cbWndExtra = 0;
        wndcls.hInstance = hInst;
        wndcls.hIcon = NULL;
        wndcls.hCursor = AfxGetApp()->LoadStandardCursor(IDC_ARROW);
        wndcls.hbrBackground = (HBRUSH)(COLOR_3DFACE + 1);
        wndcls.lpszMenuName = NULL;
        wndcls.lpszClassName = PALTOOL_CLASSNAME;

        if (!AfxRegisterClass(&wndcls))
        {
            AfxThrowResourceException();
            return FALSE;
        }
    }

    return TRUE;
}

void CPalTool::SendPalMsg(UINT_PTR nCtrlId, int nType)
{
    static NMHDR hdr = {};

    hdr.hwndFrom = m_sPalEntry[nCtrlId].PaletteCtrl->GetSafeHwnd();
    hdr.idFrom = nCtrlId;
    hdr.code = nType;

    GetParent()->PostMessage(WM_NOTIFY, 0, (LPARAM)&hdr);
}

void CPalTool::OnPalSelChange(UINT_PTR nCtrlId, BOOL fCurrPage)
{
    //Deselect each palette that is not selected
    int nPalStart = m_rgPalRedir[m_nCurrPage - 1];
    int nPalEnd = m_rgPalRedir[m_nCurrPage];

    if (nPalEnd == 0xFF)
    {
        nPalEnd = m_nCurrPalAmt;
    }

    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        if (m_sPalEntry[iPalette].fPalAvailable)
        {
            if (nCtrlId != iPalette)
            {
                m_sPalEntry[iPalette].PaletteCtrl->ClearSelected();

                if (fCurrPage && (iPalette >= nPalStart) && (iPalette < nPalEnd))
                {
                    m_sPalEntry[iPalette].PaletteCtrl->UpdateCtrl();
                }
            }
        }
        else
        {
            //m_sPalEntry[iPalette].PaletteCtrl->ClearSelected();
        }
    }

    m_nNotifyCtrlIndex = nCtrlId;

    DrawText();
    Invalidate();
}

void CPalTool::Init()
{
    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        m_sPalEntry[iPalette].PaletteCtrl = new CJunk;
        m_sPalEntry[iPalette].PaletteCtrl->SetArrayIndex(iPalette);
        m_sPalEntry[iPalette].fPalAvailable = false;
    }

    //Set the base font
    LOGFONT lf = {};
    HFONT hf = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
    GetObject(hf, sizeof(lf), &lf);

    // Default to bold since we will be in an unloaded state that we want the user to understand.
    lf.lfWeight = FW_BOLD;
    m_BaseFont.CreateFontIndirect(&lf);
}

void CPalTool::CleanUp()
{
    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        if (m_sPalEntry[iPalette].PaletteCtrl)
        {
            m_sPalEntry[iPalette].PaletteCtrl->DestroyWindow();
            safe_delete(m_sPalEntry[iPalette].PaletteCtrl);
        }
    }

    //Delete the font
    m_BaseFont.Detach();
}

void CPalTool::SetFontToBold(bool beBold)
{
    if (m_fFontIsBold != beBold)
    {
        m_fFontIsBold = beBold;
        m_BaseFont.Detach();

        LOGFONT lf = {};
        HFONT hf = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
        GetObject(hf, sizeof(lf), &lf);

        if (beBold)
        {
            lf.lfWeight = FW_BOLD;
        }

        m_BaseFont.CreateFontIndirect(&lf);
    }
}

void CPalTool::ClearBG(CPaintDC* PaintDC)
{
    RECT rClient;

    GetClientRect(&rClient);

    PaintDC->FillSolidRect(&rClient, GetSysColor(COLOR_3DFACE));
}

void CPalTool::BeginSetPal()
{
    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        m_sPalEntry[iPalette].fPalAvailable = false;
    }

    m_nCurrPalAmt = 0;

    //m_nNotifyCtrlIndex ? m_sPalEntry[m_nNotifyCtrlIndex].PaletteCtrl->ClearSelected() : NULL;

    ResetNotifyIndex();
}

void CPalTool::SetPal(int nIndex, int nAmt, COLORREF* rgNewCol, LPCWSTR pszNewPalStr)
{
    SetFontToBold(false);
    //Set palette width/height/color
    m_sPalEntry[nIndex].PaletteCtrl->InitNewSize(nAmt, rgNewCol);
    m_sPalEntry[nIndex].pszPalStr = pszNewPalStr;

    //Set offset
    m_PalSize[nIndex].cx = m_sPalEntry[nIndex].PaletteCtrl->GetBaseWidth();
    m_PalSize[nIndex].cy = m_sPalEntry[nIndex].PaletteCtrl->GetBaseHeight();

    m_sPalEntry[nIndex].fPalAvailable = true;

    m_nCurrPalAmt++;
}

void CPalTool::EndSetPal()
{
    if (m_nCurrPalAmt)
    {
        int nCurrentPageHeight = 0;
        int nCurrentPage = 0;
        // Once we turn on navigation controls, make sure to lock that space in
        int nUsedNavigationSpace = 0;
        const int nNavigationControlSize = PAL_TXT_SPACE * 2;
        const int nSpaceRequiredForText = m_nFontHeight + (PAL_TXT_SPACE * 2);

        m_rgPalRedir[nCurrentPage] = 0;

        // Verify whether or not we will be showing navigation controls for this set...
        int nTotalHeightNeeded = 0;
        for (int nIndex = 0; nIndex < m_nCurrPalAmt; nIndex++)
        {
            if (m_sPalEntry[nIndex].fPalAvailable)
            {
                nTotalHeightNeeded += m_PalSize[nIndex].cy + nSpaceRequiredForText;

                if (nTotalHeightNeeded > m_nPalViewH)
                {
                    nUsedNavigationSpace = nNavigationControlSize;
                    break;
                }
            }
        }

        const int nAvailablePageH = m_nPalViewH - nUsedNavigationSpace;
        int nPalettesThisPage = 0;

        for (int iCurrentPalette = 0; iCurrentPalette < m_nCurrPalAmt; iCurrentPalette++)
        {
            if (m_sPalEntry[iCurrentPalette].fPalAvailable)
            {
                // Need space for the palette and the descriptive text.  And maybe navigation arrows.
                const int nCurrentPaletteHeight = m_PalSize[iCurrentPalette].cy + nSpaceRequiredForText;
                nCurrentPageHeight += nCurrentPaletteHeight;

                // We want to know information about future pages so that we can display navigation controls appropriately.
                const bool isNextPaletteAvailable = ((iCurrentPalette + 1) < m_nCurrPalAmt) && (m_sPalEntry[iCurrentPalette + 1].fPalAvailable);
                const int nNextPaletteHeight = isNextPaletteAvailable ? (m_PalSize[iCurrentPalette + 1].cy + nSpaceRequiredForText) : 0;

                if ((nCurrentPageHeight + nNextPaletteHeight) > nAvailablePageH)
                {
                    // We need to add a new page for the overflow
                    nCurrentPageHeight = 0;

                    if (nPalettesThisPage == 0)
                    {
                        // m_rgPalRedir indicates the first palette to show for any given page: set the indicator for the first palette every page
                        m_rgPalRedir[nCurrentPage] = static_cast<uint8_t>(iCurrentPalette);
                    }

                    nPalettesThisPage = 0;
                    
                    if (isNextPaletteAvailable)
                    {
                        // Ensure that a final palette has a page to show upon, as without this that final palette
                        // will not be associated in m_rgPalRedir
                        nCurrentPage++;
                        m_rgPalRedir[nCurrentPage] = static_cast<uint8_t>(iCurrentPalette + 1);
                    }
                }

                nPalettesThisPage++;
            }
        }

        m_rgPalRedir[nCurrentPage + 1] = 0xFF;

        m_nCurrPage = 1;
        m_nPageAmt = nCurrentPage + 1;

        m_PgSpin.SetRange(1, m_nPageAmt);
    }
    else
    {
        m_PgSpin.SetRange(0, 0);

        m_nCurrPage = 0;
        m_nPageAmt = 0;
    }

    if (m_nPageAmt > 1)
    {
        m_PgSpin.ShowWindow(SW_SHOW);
        m_PgSpin.EnableWindow(TRUE);
    }
    else
    {
        m_PgSpin.ShowWindow(SW_HIDE);
        //m_PgSpin.EnableWindow(FALSE);
    }

    m_nPrevPalAmt = m_nCurrPalAmt;
}

void CPalTool::UpdateAllPalCtrls()
{
    for (uint8_t nCurPalSet = 0; nCurPalSet < m_nCurrPalAmt; nCurPalSet++)
    {
        GetPalCtrl(nCurPalSet)->UpdateIndexAll();
        GetPalCtrl(nCurPalSet)->UpdateCtrl();
    }
}

void CPalTool::UpdateCtrl()
{
    DrawText();
    Invalidate();
    ShowAvailPal();
}

void CPalTool::ShowAvailPal()
{
    //The left will always be the same position
    CRect rCurrPos(PAL_TXT_SPACE, 0, 0, 0);

    int nPalStart = m_rgPalRedir[m_nCurrPage - 1];
    int nPalEnd = m_rgPalRedir[m_nCurrPage];

    if (nPalEnd == 0xFF)
    {
        nPalEnd = m_nCurrPalAmt;
    }

    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        if ((iPalette >= nPalStart) && (iPalette < nPalEnd) || !m_nCurrPalAmt)
        {
            if (m_sPalEntry[iPalette].fPalAvailable)
            {
                rCurrPos.right = rCurrPos.left + m_PalSize[iPalette].cx;

                //The top is always going downward
                rCurrPos.top += (PAL_TXT_SPACE * 2) + m_nFontHeight;
                rCurrPos.bottom = rCurrPos.top + m_PalSize[iPalette].cy;

                //Do window resize
                m_sPalEntry[iPalette].PaletteCtrl->MoveWindow(&rCurrPos);
                m_sPalEntry[iPalette].PaletteCtrl->ShowWindow(SW_SHOW);
                //m_sPalEntry[i].PaletteCtrl->UpdateCtrl();

                //Add the current palette size to the top
                rCurrPos.top += m_PalSize[iPalette].cy;
            }
            else
            {
                //if (m_sPalEntry[i].PaletteCtrl->IsWindowVisible())
                //    m_sPalEntry[i].PaletteCtrl->ShowWindow(SW_HIDE);
            }
        }
        else
        {
            if (m_sPalEntry[iPalette].PaletteCtrl->IsWindowVisible())
            {
                m_sPalEntry[iPalette].PaletteCtrl->ShowWindow(SW_HIDE);
            }
        }
    }
}

void CPalTool::DrawText()
{
    CPaintDC dc(this);

    int nVisibleAmt = 0;

    CSize CurrPos(PAL_TXT_SPACE, PAL_TXT_SPACE); //Set a margin from the top/left

    dc.SelectObject(m_BaseFont);
    dc.SetBkColor(GetSysColor(COLOR_3DFACE));

    if (m_fIsFirstPaint)
    {
        m_fIsFirstPaint = false;
        m_nFontHeight = (dc.GetTextExtent(L"Height", 5).cy + 4); // height plus padding
    }

    ClearBG(&dc);

    //Draw page numbers
    if (m_nPageAmt > 1)
    {
        CString szTemp;
        szTemp.Format(L"%d/%d", m_nCurrPage, m_nPageAmt);
        dc.SetTextColor(RGB(0, 0, 0)); //Red for selected palette
        const int nLeftOffset = (m_nCurrPage > 9) ? 30 : 25; // extra space for 10/10 vs narrower 9/9
        dc.TextOut(m_rClient.right - nLeftOffset + 1, m_rClient.bottom - 15 + 1, szTemp);
    }

    if (m_nCurrPalAmt)
    {
        //Get the page information
        int nPalStart = m_rgPalRedir[m_nCurrPage - 1];
        int nPalEnd = m_rgPalRedir[m_nCurrPage];

        if (nPalEnd == 0xFF)
        {
            nPalEnd = m_nCurrPalAmt;
        }

        for (int iPaletteIndex = nPalStart; iPaletteIndex < nPalEnd; iPaletteIndex++)
        {
            if (m_sPalEntry[iPaletteIndex].fPalAvailable)
            {
                if (iPaletteIndex == (int)m_nNotifyCtrlIndex)
                {
                    dc.SetTextColor(RGB(0, 0, 0)); //Black for selected palette
                }
                else
                {
                    dc.SetTextColor(RGB(96, 96, 96)); //Gray for unselected palette
                }

                nVisibleAmt++;

                dc.TextOut(CurrPos.cx, CurrPos.cy, CString(m_sPalEntry[iPaletteIndex].pszPalStr));

                CurrPos.cy += ((PAL_TXT_SPACE * 2) + m_nFontHeight + m_PalSize[iPaletteIndex].cy);
            }
        }
    }
    else
    {
        //Draw bold text to show none are visible
        SetFontToBold(true);
        dc.TextOut(CurrPos.cx, CurrPos.cy, CString(L"Load a game to continue."));
    }
}

void CPalTool::OnPaint()
{
    if (m_fSpinInit)
    {
        m_fSpinInit = false;

        GetClientRect(&m_rClient);

        m_nPalViewH = m_rClient.bottom - 15;

        m_PgSpin.Create(
            UDS_ARROWKEYS | UDS_HOTTRACK | UDS_HORZ | UDS_WRAP,
            CRect(m_rClient.right - 55, m_nPalViewH, m_rClient.right - 30, m_rClient.bottom),
            this, ID_PALTOOLSPIN);

        //m_PgSpin.ShowWindow(SW_SHOW);
    }

    DrawText();

    // Do not call CWnd::OnPaint() for painting messages
}

BOOL CPalTool::OnEraseBkgnd(CDC* pDC)
{
    // TODO: Add your message handler code here and/or call default

    return FALSE;

    //CWnd::OnEraseBkgnd(pDC);    
}

void CPalTool::PreSubclassWindow()
{
    //Initialize each palette window
    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        m_sPalEntry[iPalette].PaletteCtrl->Create(L"CJunk", L"", 0, CRect(0, 0, 100, 100), this, iPalette);
    }

    CWnd::PreSubclassWindow();
}

BOOL CPalTool::PreTranslateMessage(MSG* pMsg)
{
    switch (pMsg->message)
    {
    case WM_NOTIFY:
    {
        switch (((LPNMHDR)pMsg->lParam)->code)
        {
        case CUSTOM_SS:
        case CUSTOM_MS:
        {
            OnPalSelChange(((LPNMHDR)pMsg->lParam)->idFrom);

            SendPalMsg(m_nNotifyCtrlIndex, ((LPNMHDR)pMsg->lParam)->code);
        }
        break;

        case CUSTOM_HLCHANGE:
        case CUSTOM_SELHLCHANGE:
        {
            SendPalMsg(((LPNMHDR)pMsg->lParam)->idFrom, ((LPNMHDR)pMsg->lParam)->code);
        }
        break;

        case CUSTOM_COPY:
        case CUSTOM_PASTE:
        case CUSTOM_SALL:
        case CUSTOM_SNONE:
        case CUSTOM_COPYOFFSET:
        {
            SendPalMsg(((LPNMHDR)pMsg->lParam)->idFrom, ((LPNMHDR)pMsg->lParam)->code);
        }
        break;

        default:
            break;
        }
    }
    break;

    default:
        break;
    }

    return CWnd::PreTranslateMessage(pMsg);
}

void CPalTool::UpdateEveryIndex()
{
    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        if (m_sPalEntry[iPalette].fPalAvailable)
        {
            m_sPalEntry[iPalette].PaletteCtrl->UpdateIndexAll();
        }
    }
}

void CPalTool::UpdateEveryCtrl()
{
    for (int iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        if (m_sPalEntry[iPalette].fPalAvailable)
        {
            m_sPalEntry[iPalette].PaletteCtrl->UpdateCtrl();
        }
    }
}

void CPalTool::OnDeltaposSpin(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    int nAdd = pNMUpDown->iDelta;//(~pNMUpDown->iDelta) + 1;

    if (nAdd + m_nCurrPage <= m_nPageAmt && nAdd + m_nCurrPage >= 1)
    {
        m_nCurrPage += nAdd;

        UpdateCtrl();

        OnPalSelChange(m_rgPalRedir[m_nCurrPage - 1], FALSE);
        SendPalMsg(m_nNotifyCtrlIndex, CUSTOM_SS);
    }

    *pResult = 0;
}
