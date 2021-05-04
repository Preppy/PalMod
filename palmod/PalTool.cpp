#include "StdAfx.h"
#include "PalTool.h"

CPalTool::CPalTool(void)
{
    Init();

    RegisterWindowClass();
}

CPalTool::~CPalTool(void)
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
    static NMHDR hdr;

    hdr.hwndFrom = pPalEntry[nCtrlId].PaletteCtrl->GetSafeHwnd();
    hdr.idFrom = nCtrlId;
    hdr.code = nType;

    GetParent()->PostMessage(WM_NOTIFY, 0, (LPARAM)&hdr);
}

void CPalTool::OnPalSelChange(UINT_PTR nCtrlId, BOOL bCurrPage)
{
    //Deselect each palette that is not selected
    int nPalStart = rgPalRedir[nCurrPage - 1];
    int nPalEnd = rgPalRedir[nCurrPage];

    if (nPalEnd == 0xFF)
    {
        nPalEnd = nCurrPalAmt;
    }

    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        if (pPalEntry[i].bAvail)
        {
            if (nCtrlId != i)
            {
                pPalEntry[i].PaletteCtrl->ClearSelected();

                if (bCurrPage && (i >= nPalStart) && (i < nPalEnd))
                {
                    pPalEntry[i].PaletteCtrl->UpdateCtrl();
                }
            }
        }
        else
        {
            //pPalEntry[i].PaletteCtrl->ClearSelected();
        }
    }

    nNotifyCtrlIndex = nCtrlId;

    DrawText();
    Invalidate();
}

void CPalTool::Init()
{
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        pPalEntry[i].PaletteCtrl = new CJunk;
        pPalEntry[i].PaletteCtrl->SetArrayIndex(i);
        pPalEntry[i].bAvail = FALSE;
    }

    //Set the base font
    LOGFONT lf;
    HFONT hf = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
    GetObject(hf, sizeof(lf), &lf);

    // Default to bold since we will be in an unloaded state that we want the user to understand.
    lf.lfWeight = FW_BOLD;
    BaseFont.CreateFontIndirect(&lf);
}

void CPalTool::CleanUp()
{
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        if (pPalEntry[i].PaletteCtrl)
        {
            pPalEntry[i].PaletteCtrl->DestroyWindow();
            safe_delete(pPalEntry[i].PaletteCtrl);
        }
    }

    //Delete the font
    BaseFont.Detach();
}

void CPalTool::SetFontToBold(bool beBold)
{
    if (m_fFontIsBold != beBold)
    {
        m_fFontIsBold = beBold;
        BaseFont.Detach();

        LOGFONT lf;
        HFONT hf = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
        GetObject(hf, sizeof(lf), &lf);

        if (beBold)
        {
            lf.lfWeight = FW_BOLD;
        }

        BaseFont.CreateFontIndirect(&lf);
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
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        pPalEntry[i].bAvail = FALSE;
    }

    nCurrPalAmt = 0;

    //nNotifyCtrlIndex ? pPalEntry[nNotifyCtrlIndex].PaletteCtrl->ClearSelected() : NULL;

    ResetNotifyIndex();
}

void CPalTool::SetPal(int nIndex, int nAmt, COLORREF* rgNewCol, WCHAR* szNewPalStr)
{
    SetFontToBold(false);
    //Set palette width/height/color
    pPalEntry[nIndex].PaletteCtrl->InitNewSize(nAmt, rgNewCol);
    pPalEntry[nIndex].szPalStr = szNewPalStr;

    //Set offset
    PalSize[nIndex].cx = pPalEntry[nIndex].PaletteCtrl->GetBaseWidth();
    PalSize[nIndex].cy = pPalEntry[nIndex].PaletteCtrl->GetBaseHeight();

    pPalEntry[nIndex].bAvail = TRUE;

    nCurrPalAmt++;
}

void CPalTool::EndSetPal()
{
    if (nCurrPalAmt)
    {
        int nCurrentPageHeight = 0;
        int nCurrentPage = 0;
        // Once we turn on navigation controls, make sure to lock that space in
        int nUsedNavigationSpace = 0;
        const int nNavigationControlSize = PAL_TXT_SPACE * 2;
        const int nSpaceRequiredForText = nFontHeight + (PAL_TXT_SPACE * 2);

        rgPalRedir[nCurrentPage] = 0;

        // Verify whether or not we will be showing navigation controls for this set...
        int nTotalHeightNeeded = 0;
        for (int nIndex = 0; nIndex < nCurrPalAmt; nIndex++)
        {
            if (pPalEntry[nIndex].bAvail)
            {
                nTotalHeightNeeded += PalSize[nIndex].cy + nSpaceRequiredForText;

                if (nTotalHeightNeeded > nPalViewH)
                {
                    nUsedNavigationSpace = nNavigationControlSize;
                    break;
                }
            }
        }

        const int nAvailablePageH = nPalViewH - nUsedNavigationSpace;
        int nPalettesThisPage = 0;

        for (int iCurrentPalette = 0; iCurrentPalette < nCurrPalAmt; iCurrentPalette++)
        {
            if (pPalEntry[iCurrentPalette].bAvail)
            {
                // Need space for the palette and the descriptive text.  And maybe navigation arrows.
                const int nCurrentPaletteHeight = PalSize[iCurrentPalette].cy + nSpaceRequiredForText;
                nCurrentPageHeight += nCurrentPaletteHeight;

                // We want to know information about future pages so that we can display navigation controls appropriately.
                const bool isNextPaletteAvailable = ((iCurrentPalette + 1) < nCurrPalAmt) && (pPalEntry[iCurrentPalette + 1].bAvail);
                const int nNextPaletteHeight = isNextPaletteAvailable ? (PalSize[iCurrentPalette + 1].cy + nSpaceRequiredForText) : 0;

                if ((nCurrentPageHeight + nNextPaletteHeight) > nAvailablePageH)
                {
                    // We need to add a new page for the overflow
                    nCurrentPageHeight = 0;

                    if (nPalettesThisPage == 0)
                    {
                        // rgPalRedir indicates the first palette to show for any given page: set the indicator for the first palette every page
                        rgPalRedir[nCurrentPage] = (UINT8)iCurrentPalette;
                    }

                    nPalettesThisPage = 0;
                    
                    if (isNextPaletteAvailable)
                    {
                        // Ensure that a final palette has a page to show upon, as without this that final palette
                        // will not be associated in rgPalRedir
                        nCurrentPage++;
                        rgPalRedir[nCurrentPage] = (UINT8)(iCurrentPalette + 1);
                    }
                }

                nPalettesThisPage++;
            }
        }

        rgPalRedir[nCurrentPage + 1] = 0xFF;

        nCurrPage = 1;
        nPageAmt = nCurrentPage + 1;

        m_PgSpin.SetRange(1, nPageAmt);
    }
    else
    {
        m_PgSpin.SetRange(0, 0);

        nCurrPage = 0;
        nPageAmt = 0;
    }

    if (nPageAmt > 1)
    {
        m_PgSpin.ShowWindow(SW_SHOW);
        m_PgSpin.EnableWindow(TRUE);
    }
    else
    {
        m_PgSpin.ShowWindow(SW_HIDE);
        //m_PgSpin.EnableWindow(FALSE);
    }

    nPrevPalAmt = nCurrPalAmt;
}

void CPalTool::UpdateAllPalCtrls()
{
    for (UINT8 nCurPalSet = 0; nCurPalSet < nCurrPalAmt; nCurPalSet++)
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

    int nPalStart = rgPalRedir[nCurrPage - 1];
    int nPalEnd = rgPalRedir[nCurrPage];

    if (nPalEnd == 0xFF)
    {
        nPalEnd = nCurrPalAmt;
    }

    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        if ((i >= nPalStart) && (i < nPalEnd) || !nCurrPalAmt)
        {
            if (pPalEntry[i].bAvail)
            {
                rCurrPos.right = rCurrPos.left + PalSize[i].cx;

                //The top is always going downward
                rCurrPos.top += (PAL_TXT_SPACE * 2) + nFontHeight;
                rCurrPos.bottom = rCurrPos.top + PalSize[i].cy;

                //Do window resize
                pPalEntry[i].PaletteCtrl->MoveWindow(&rCurrPos);
                pPalEntry[i].PaletteCtrl->ShowWindow(SW_SHOW);
                //pPalEntry[i].PaletteCtrl->UpdateCtrl();

                //Add the current palette size to the top
                rCurrPos.top += PalSize[i].cy;
            }
            else
            {
                //if (pPalEntry[i].PaletteCtrl->IsWindowVisible())
                //    pPalEntry[i].PaletteCtrl->ShowWindow(SW_HIDE);
            }
        }
        else
        {
            if (pPalEntry[i].PaletteCtrl->IsWindowVisible())
            {
                pPalEntry[i].PaletteCtrl->ShowWindow(SW_HIDE);
            }
        }
    }
}

void CPalTool::DrawText()
{
    CPaintDC dc(this);

    int nVisibleAmt = 0;

    CSize CurrPos(PAL_TXT_SPACE, PAL_TXT_SPACE); //Set a margin from the top/left

    dc.SelectObject(BaseFont);
    dc.SetBkColor(GetSysColor(COLOR_3DFACE));

    if (bFirstPaint)
    {
        nFontHeight = (dc.GetTextExtent(L"Height", 5).cy + 4); // height plus padding
        bFirstPaint = FALSE;
    }

    ClearBG(&dc);

    //Draw page numbers
    if (nPageAmt > 1)
    {
        CString szTemp;
        szTemp.Format(L"%d/%d", nCurrPage, nPageAmt);
        dc.SetTextColor(RGB(0, 0, 0)); //Red for selected palette
        const int nLeftOffset = (nCurrPage > 9) ? 30 : 25; // extra space for 10/10 vs narrower 9/9
        dc.TextOut(rClient.right - nLeftOffset + 1, rClient.bottom - 15 + 1, szTemp);
    }

    if (nCurrPalAmt)
    {
        //Get the page information
        int nPalStart = rgPalRedir[nCurrPage - 1];
        int nPalEnd = rgPalRedir[nCurrPage];

        if (nPalEnd == 0xFF)
        {
            nPalEnd = nCurrPalAmt;
        }

        for (int i = nPalStart; i < nPalEnd; i++)
        {
            if (pPalEntry[i].bAvail)
            {
                if (i == (int)nNotifyCtrlIndex)
                {
                    dc.SetTextColor(RGB(0, 0, 0)); //Black for selected palette
                }
                else
                {
                    dc.SetTextColor(RGB(96, 96, 96)); //Gray for unselected palette
                }

                nVisibleAmt++;

                dc.TextOut(CurrPos.cx, CurrPos.cy, CString(pPalEntry[i].szPalStr));

                CurrPos.cy += ((PAL_TXT_SPACE * 2) + nFontHeight + PalSize[i].cy);
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
    if (bSpinInit)
    {
        bSpinInit = FALSE;

        GetClientRect(&rClient);

        nPalViewH = rClient.bottom - 15;

        m_PgSpin.Create(
            UDS_ARROWKEYS | UDS_HOTTRACK | UDS_HORZ | UDS_WRAP,
            CRect(rClient.right - 55, nPalViewH, rClient.right - 30, rClient.bottom),
            this, ID_PALTOOLSPIN);

        //m_PgSpin.ShowWindow(SW_SHOW);

        bSpinInit = FALSE;
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
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        pPalEntry[i].PaletteCtrl->Create(L"CJunk", L"", 0, CRect(0, 0, 100, 100), this, i);
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

            SendPalMsg(nNotifyCtrlIndex, ((LPNMHDR)pMsg->lParam)->code);
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
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        if (pPalEntry[i].bAvail)
        {
            pPalEntry[i].PaletteCtrl->UpdateIndexAll();
        }
    }
}

void CPalTool::UpdateEveryCtrl()
{
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        if (pPalEntry[i].bAvail)
        {
            pPalEntry[i].PaletteCtrl->UpdateCtrl();
        }
    }
}

void CPalTool::OnDeltaposSpin(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    int nAdd = pNMUpDown->iDelta;//(~pNMUpDown->iDelta) + 1;

    if (nAdd + nCurrPage <= nPageAmt && nAdd + nCurrPage >= 1)
    {
        nCurrPage += nAdd;

        UpdateCtrl();

        OnPalSelChange(rgPalRedir[nCurrPage - 1], FALSE);
        SendPalMsg(nNotifyCtrlIndex, CUSTOM_SS);
    }

    *pResult = 0;
}
