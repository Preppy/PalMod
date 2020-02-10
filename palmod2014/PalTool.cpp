#include "StdAfx.h"
#include ".\PalTool.h"

CPalTool::CPalTool(void)
: nNotifyCtrlIndex(0),
bFirstPaint(TRUE),
bSpinInit(TRUE),
nCurrPage(0),
nPageAmt(0),
nPalViewH(0),
nCurrPalAmt(0),
nPrevPalAmt(-1)
{
	Init();

	//Set the base font
	LOGFONT lf;
	HFONT hf = (HFONT)GetStockObject(DEFAULT_GUI_FONT);
	GetObject(hf, sizeof(lf), &lf);
	
	lf.lfWeight = FW_BOLD;
	BaseFont.CreateFontIndirect(&lf);

	RegisterWindowClass();
}

CPalTool::~CPalTool(void)
{
	CleanUp();
}


BEGIN_MESSAGE_MAP(CPalTool, CWnd)
	ON_WM_PAINT()
	ON_WM_ERASEBKGND()
	ON_NOTIFY(UDN_DELTAPOS, ID_PALTOOLSPIN, &CPalTool::OnDeltaposSpin)
END_MESSAGE_MAP()

BOOL CPalTool::RegisterWindowClass()
{
	WNDCLASS wndcls;
    HINSTANCE hInst = AfxGetInstanceHandle();

    if (!(::GetClassInfo(hInst, PALTOOL_CLASSNAME, &wndcls)))
    {
        // otherwise we need to register a new class
        wndcls.style            = CS_DBLCLKS | CS_HREDRAW | CS_VREDRAW;
        wndcls.lpfnWndProc      = ::DefWindowProc;
        wndcls.cbClsExtra       = wndcls.cbWndExtra = 0;
        wndcls.hInstance        = hInst;
        wndcls.hIcon            = NULL;
        wndcls.hCursor          = AfxGetApp()->LoadStandardCursor(IDC_ARROW);
        wndcls.hbrBackground    = (HBRUSH) (COLOR_3DFACE + 1);
        wndcls.lpszMenuName     = NULL;
        wndcls.lpszClassName    = PALTOOL_CLASSNAME;

        if (!AfxRegisterClass(&wndcls))
        {
            AfxThrowResourceException();
            return FALSE;
        }
    }

    return TRUE;
}

void CPalTool::SendPalMsg(int nCtrlId, int nType)
{
	static NMHDR hdr;
     
	hdr.hwndFrom = pPalEntry[nCtrlId].PaletteCtrl->GetSafeHwnd();
    hdr.idFrom = nCtrlId;
    hdr.code = nType;

	GetParent()->PostMessage(WM_NOTIFY, 0, (LPARAM)&hdr);
}

void CPalTool::OnPalSelChange(int nCtrlId, BOOL bCurrPage)
{

	//Deselect each palette that is not selected

	int nPalStart = rgPalRedir[nCurrPage - 1];
	int nPalEnd = rgPalRedir[nCurrPage];

	if(nPalEnd == 0xFF)
	{
		nPalEnd = nCurrPalAmt;
	}

	for(int i = 0; i < MAX_PALETTE; i++)
	{
		if(pPalEntry[i].bAvail)
		{
			if(nCtrlId != i)
			{
				pPalEntry[i].PaletteCtrl->ClearSelected();
				
				if(bCurrPage && i >= nPalStart && i < nPalEnd)
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

void CPalTool::OnPalHLChange(int nCtrlId)
{
}

void CPalTool::OnPalMHL(int nCtrlId)
{
}

UINT8 * CPalTool::GetCurrPalSel()
{
	for(int i = 0; i < MAX_PALETTE; i++)
	{
		//if(pPalEntry[i].PaletteCtrl
	}

	return NULL;

}
void CPalTool::Init()
{

	for(int i = 0; i < MAX_PALETTE; i++)
	{
		pPalEntry[i].PaletteCtrl = new CJunk;
		pPalEntry[i].bAvail = FALSE;
	}
}

void CPalTool::CleanUp()
{
	for(int i = 0; i < MAX_PALETTE; i++)
	{
		if(pPalEntry[i].PaletteCtrl)
		{
			pPalEntry[i].PaletteCtrl->DestroyWindow();
			delete pPalEntry[i].PaletteCtrl;
		}
	}

	//Delete the font
	BaseFont.Detach();
}

void CPalTool::SetFont()
{
}

void CPalTool::ClearBG(CPaintDC * PaintDC)
{

	RECT rClient;

	GetClientRect(&rClient);

	PaintDC->FillSolidRect(&rClient, GetSysColor(COLOR_3DFACE));
}

void CPalTool::BeginSetPal()
{
	for(int i = 0; i < MAX_PALETTE; i++)
	{
		pPalEntry[i].bAvail = FALSE;
	}

	nCurrPalAmt = 0;

	//nNotifyCtrlIndex ? pPalEntry[nNotifyCtrlIndex].PaletteCtrl->ClearSelected() : NULL;

	ResetNotifyIndex();
}

void CPalTool::SetPal(int nIndex, int nAmt, COLORREF * rgNewCol, CHAR * szNewPalStr)
{
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
	if(nCurrPalAmt)
	{

		int nCurrPgH = 0;
		int nPgH = 0;
		int nCurrPg = 0;
		
		rgPalRedir[nCurrPg] = 0;

		for(int i = 0; i < nCurrPalAmt; i++)
		{
			

			if(pPalEntry[i].bAvail)
			{
				nCurrPgH = PalSize[i].cy + PAL_TXT_SPACE*2 + nFontHeight;
				nPgH += nCurrPgH;

				if(nPgH > nPalViewH)
				{
					nPgH = 0;
					nCurrPg++;

					rgPalRedir[nCurrPg] = (UINT8)i;
				}

				
			}
		}

		rgPalRedir[nCurrPg + 1] = 0xFF;

		

		nCurrPage = 1;
		nPageAmt = nCurrPg + 1;
		
		m_PgSpin.SetRange(1, nPageAmt);
	}
	else
	{
		m_PgSpin.SetRange(0, 0);

		nCurrPage = 0;
		nPageAmt = 0;
	}

	if(nPageAmt > 1)
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

	if(nPalEnd == 0xFF)
	{
		nPalEnd = nCurrPalAmt;
	}

	for(int i = 0; i < MAX_PALETTE; i++)
	{
		if(i >= nPalStart && i < nPalEnd || !nCurrPalAmt)
		{
			if(pPalEntry[i].bAvail)
			{

				rCurrPos.right = rCurrPos.left + PalSize[i].cx;

				//The top is always going downward
				rCurrPos.top += PAL_TXT_SPACE*2 + nFontHeight;
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
				//if(pPalEntry[i].PaletteCtrl->IsWindowVisible())
				//	pPalEntry[i].PaletteCtrl->ShowWindow(SW_HIDE);
			}
		}
		else
		{
			if(pPalEntry[i].PaletteCtrl->IsWindowVisible())
				pPalEntry[i].PaletteCtrl->ShowWindow(SW_HIDE);
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

	if(bFirstPaint)
	{
		nFontHeight = dc.GetTextExtent(_T("Height"), 5).cy;
		bFirstPaint = FALSE;
	}	

	ClearBG(&dc);

	//Draw page numbers
	if(nPageAmt > 1)
	{
		CString szTemp;
		szTemp.Format("%d/%d", nCurrPage, nPageAmt);
		dc.SetTextColor(RGB(0, 0, 0)); //Red for selected palette
		dc.TextOutA(rClient.right - 25 + 1, rClient.bottom - 15 + 1, szTemp);
	}

	if(nCurrPalAmt)
	{
		//Get the page information
		int nPalStart = rgPalRedir[nCurrPage - 1];
		int nPalEnd = rgPalRedir[nCurrPage];

		if(nPalEnd == 0xFF)
		{
			nPalEnd = nCurrPalAmt;
		}


		for(int i = nPalStart; i < nPalEnd; i++)
		{
			if(pPalEntry[i].bAvail)
			{
				if(i == nNotifyCtrlIndex)
				{
					dc.SetTextColor(RGB(0, 0, 0)); //Black for selected palette
				}
				else
				{
					dc.SetTextColor(RGB(96, 96, 96)); //Gray for unselected palette
				}

				nVisibleAmt++;

				dc.TextOutA(CurrPos.cx, CurrPos.cy, CString(pPalEntry[i].szPalStr));

				CurrPos.cy += (PAL_TXT_SPACE*2 + nFontHeight + PalSize[i].cy);
			}
		}
	}
	else
	{
		dc.TextOutA(CurrPos.cx, CurrPos.cy, CString("No Palettes Available"));
		//Draw text to show none are visible
	}
}


void CPalTool::OnPaint()
{
	if(bSpinInit)
	{

		bSpinInit = FALSE;

		GetClientRect(&rClient);

		nPalViewH = rClient.bottom - 15;

		m_PgSpin.Create(
			UDS_ARROWKEYS | UDS_HOTTRACK | UDS_HORZ | UDS_WRAP, 
			CRect(rClient.right - 50, nPalViewH, rClient.right - 25, rClient.bottom),
			this, ID_PALTOOLSPIN);

		//m_PgSpin.ShowWindow(SW_SHOW);

		bSpinInit = FALSE;
	}
	
	DrawText();

	// TODO: Add your message handler code here
	// Do not call CWnd::OnPaint() for painting messages
	
}

BOOL CPalTool::OnEraseBkgnd(CDC* pDC)
{
	// TODO: Add your message handler code here and/or call default

	return TRUE; 

	//CWnd::OnEraseBkgnd(pDC);
	
}

void CPalTool::PreSubclassWindow()
{
	//Initialize each palette window
	for(int i = 0; i < MAX_PALETTE; i++)
	{
		pPalEntry[i].PaletteCtrl->Create( _T("CJunk"), _T(""), 0, CRect(0, 0, 100, 100), this, i);
	}

	CWnd::PreSubclassWindow();
}

BOOL CPalTool::PreTranslateMessage(MSG* pMsg)
{

	switch(pMsg->message)
	{
		
	case WM_NOTIFY:
		{
			switch(((LPNMHDR)pMsg->lParam)->code)
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
			}
		}
		break;
	
	}
	return CWnd::PreTranslateMessage(pMsg);
}

void CPalTool::UpdateEveryIndex()
{
	for(int i = 0; i < MAX_PALETTE; i++)
	{
		if(pPalEntry[i].bAvail)
		{
				pPalEntry[i].PaletteCtrl->UpdateIndexAll();
		}
	}
}

void CPalTool::UpdateEveryCtrl()
{
	for(int i = 0; i < MAX_PALETTE; i++)
	{
		if(pPalEntry[i].bAvail)
		{
				pPalEntry[i].PaletteCtrl->UpdateCtrl();
		}
	}
}

void CPalTool::OnDeltaposSpin(NMHDR *pNMHDR, LRESULT *pResult)
{
	LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
	// TODO: Add your control notification handler code here

	int nAdd = pNMUpDown->iDelta;//(~pNMUpDown->iDelta) + 1;;


	if(nAdd + nCurrPage <= nPageAmt && nAdd + nCurrPage >= 1)
	{
		nCurrPage += nAdd;
		
		UpdateCtrl();
		
		OnPalSelChange(rgPalRedir[nCurrPage - 1], FALSE);
		SendPalMsg(nNotifyCtrlIndex, CUSTOM_SS);

		
	}

	

	*pResult = 0;
}
