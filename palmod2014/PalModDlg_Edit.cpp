#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#include "afxole.h"
#include "afxadv.h"

#include "SettDlg.h"

#include "Game\GameDef.h"
#include "Game\GameClass.h"
#include "Game\Game_MVC2_D.h"


void CPalModDlg::OnEditCopy()
{
	if(bEnabled)
	{
		CGameClass * CurrGame = GetHost()->GetCurrGame();
		CJunk * CurrPal = m_PalHost.GetNotifyPal();
		int nWorkingAmt = CurrPal->GetWorkingAmt();
		UINT8 * pSelIndex = CurrPal->GetSelIndex();

		UINT8 uCopyFlag1;
		UINT8 uCopyFlag2 = (CurrPal->GetSelAmt() ? CurrPal->GetSelAmt() : nWorkingAmt) + 33;

		// TODO: Add your command handler code her
		if(!bOleInit)
			return;

		COleDataSource*	pSource = new COleDataSource();
		CSharedFile	sf(GMEM_MOVEABLE|GMEM_DDESHARE|GMEM_ZEROINIT);
		
		CString CopyText;
		CString FormatTxt;

		UINT16 uCurrData= 0;
		BOOL bCopyAll = !CurrPal->GetSelAmt();

		
		
		switch(CurrGame->GetGameFlag())
		{
		case MVC2_D:
		case MVC2_P:
			uCopyFlag1 = 2+33;
			break;
		case SFIII3_A:
			uCopyFlag1 = 1+33;
			break;
		default:
			uCopyFlag1 = CurrGame->GetGameFlag() + 33;
			break;
		}
//
		CopyText.Format("(%c%c", uCopyFlag1, uCopyFlag2);

		for(int i = 0; i < nWorkingAmt; i++)
		{
			if(pSelIndex[i] || bCopyAll)
			{
				uCurrData = CurrGame->ConvCol(CurrPal->GetBasePal()[i]);
//
				FormatTxt.Format("%04X", uCurrData);

				//Only changed:
				//FormatTxt.Format("%04X", (UINT16)((uCurrData << 8) | (uCurrData >> 8) & (UINT16)0xFF0F));


				CopyText.Append(FormatTxt);

				
			}
		}
	//	
		CopyText.Append(")");

		sf.Write(CopyText, CopyText.GetLength());

		HGLOBAL hMem = sf.Detach();
		if (!hMem) return;
		pSource->CacheGlobalData(CF_TEXT, hMem);
		pSource->SetClipboard();
	}
}


void CPalModDlg::OnEditPaste()
{

	

	if(!VerifyPaste())
		return;
	
	COleDataObject obj;

	char * szPasteBuff = szPasteStr.GetBuffer();

	// Do something with the data in 'buffer'

	char szFormatStr[] = "0x0000";

	UINT8 uPasteGFlag = szPasteBuff[1]-33;
	UINT8 uPasteAmt = szPasteBuff[2]-33;

	switch(uPasteGFlag)
	{
	//case 3: //MVC2_P
	case 2: //MVC2_D
		uPasteGFlag = 0;
		break;
	case 1: //SFIII3
		uPasteGFlag = 1;
		break;
	}

	
	if(uPasteAmt)
	{
		CGameClass * CurrGame = GetHost()->GetCurrGame();
		UINT8 uCurrGFlag = CurrGame->GetGameFlag();
		ColMode eCurrColMode = CurrGame->GetColMode();

		COLORREF *rgPasteCol = new COLORREF[uPasteAmt];

		int nIndexCtr = 0, nWorkingAmt = CurrPalCtrl->GetWorkingAmt();

		if(uCurrGFlag != uPasteGFlag)
		{
			switch(uPasteGFlag)
			{
			case SFIII3_A:
				{
					CurrGame->SetColMode(COLMODE_15);
				}
				break;
			case MVC2_D:
			case MVC2_P:
				{
					CurrGame->SetColMode(COLMODE_12A);
				}
				break;
			}
		}

		//Notify the change data
		ProcChange();

		for(int i = 0; i < uPasteAmt; i++)
		{
			memcpy(&szFormatStr[2], &szPasteBuff[3+(4*i)], sizeof(UINT8)*4);
			
			rgPasteCol[i] = CurrGame->ConvPal((UINT16)strtol(szFormatStr, NULL, 16));
			((UINT8 *)rgPasteCol)[i * 4 + 3] |= (0xFF * (nAMul == 0));
		}

		if(uCurrGFlag != uPasteGFlag)
		{

			//Set the color mode back
			//Round the values with the switched game flag
			CurrGame->SetColMode(eCurrColMode);

			for(int i = 0; i < uPasteAmt; i++)
			{
				rgPasteCol[i] = CurrGame->ConvPal(CurrGame->ConvCol(rgPasteCol[i]));

			}

		}
		if(!CurrPalCtrl->GetSelAmt())
		{
			int nCopyAmt = nWorkingAmt < uPasteAmt ? nWorkingAmt : uPasteAmt;

			memcpy(CurrPalCtrl->GetBasePal(), rgPasteCol, sizeof(COLORREF) * nCopyAmt);

			

		}
		else
		{
			UINT8 * rgSelIndex = CurrPalCtrl->GetSelIndex();
			COLORREF * crTargetPal = CurrPalCtrl->GetBasePal();

			

			for(int i = 0; i < nWorkingAmt; i++)
			{
				if(rgSelIndex[i])
				{
					crTargetPal[i] = rgPasteCol[nIndexCtr];
					CurrPalDef->pBasePal[i + CurrPalSep->nStart] = rgPasteCol[nIndexCtr];

					nIndexCtr++;

					if(nIndexCtr >= uPasteAmt)
					{
						nIndexCtr = 0;
					}
				}
			}
		}

	
		
		
		CurrPalCtrl->UpdateIndexAll();

		ImgDispCtrl->UpdateCtrl();
		CurrPalCtrl->UpdateCtrl();


	}
}


BOOL VerifyPaste()
{
	
	COleDataObject obj;
	BOOL bCanPaste = FALSE;

	if (!obj.AttachClipboard())
		return FALSE;

	if(!obj.IsDataAvailable(CF_TEXT))
		return FALSE;

	HGLOBAL hmem = obj.GetGlobalData(CF_TEXT);
	CMemFile sf((BYTE*) ::GlobalLock(hmem), ::GlobalSize(hmem));
	

	LPSTR szTempStr = szPasteStr.GetBufferSetLength(::GlobalSize(hmem));
	sf.Read(szTempStr, ::GlobalSize(hmem));
	::GlobalUnlock(hmem);

	szPasteStr.Remove(' ');
	szPasteStr.Remove('\n');

	if(szTempStr[0] == '(')
	{
		if(szTempStr[1] - 33 <= NUM_GAMES) //Gameflag
		{

			if(szTempStr[2] - 33 <= 64)
			{
				if((szTempStr[((szTempStr[2]-33)*4)+3] == ')'))
					bCanPaste = TRUE;
			}
		}
	}

	return bCanPaste;
}




void CPalModDlg::NewUndoData(BOOL bUndo)
{
	
	CUndoNode * NewNode = bUndo ? UndoProc.NewUndo() : UndoProc.NewRedo();
	

	sPalRedir * rgRedir = MainPalGroup->GetRedir();
	sPalDef * srcDef = MainPalGroup->GetPalDef(rgRedir[nCurrSelPal].nDefIndex);
	sPalSep * srcSep = MainPalGroup->GetSep(rgRedir[nCurrSelPal].nDefIndex, rgRedir[nCurrSelPal].nSepIndex);
	
	int nPalSz = srcSep->nAmt;

	NewNode->nPalIndex = nCurrSelPal;
	NewNode->nPalSz = nPalSz;

	
	NewNode->rgPalData = new COLORREF[nPalSz];
	NewNode->rgBasePalData = new COLORREF[nPalSz];

	memcpy(NewNode->rgPalData, &srcDef->pPal[srcSep->nStart], nPalSz * sizeof(COLORREF));
	memcpy(NewNode->rgBasePalData, &srcDef->pBasePal[srcSep->nStart], nPalSz * sizeof(COLORREF));

	//Clear Redo data on undo
	//UndoProc.DeleteRedoList();



}

void CPalModDlg::DoUndoRedo(BOOL bUndo)
{
	CUndoNode * PopNode = bUndo ? UndoProc.PopUndo() : UndoProc.PopRedo();

	bUndo ? NewUndoData(FALSE) : NewUndoData();

	//Copy data to the program
	sPalRedir * rgRedir = MainPalGroup->GetRedir();
	sPalDef * srcDef = MainPalGroup->GetPalDef(rgRedir[PopNode->nPalIndex].nDefIndex);
	sPalSep * srcSep = MainPalGroup->GetSep(rgRedir[PopNode->nPalIndex].nDefIndex, rgRedir[PopNode->nPalIndex].nSepIndex);

	memcpy(&srcDef->pPal[srcSep->nStart], PopNode->rgPalData, srcSep->nAmt * sizeof(COLORREF));
	memcpy(&srcDef->pBasePal[srcSep->nStart], PopNode->rgBasePalData, srcSep->nAmt * sizeof(COLORREF));

	//Refresh slider selection
	if(PopNode->nPalIndex == nCurrSelPal)
	{
		UpdateSliderSel();
	}

	//Update the img/pal ctrls
	m_PalHost.GetPalCtrl(PopNode->nPalIndex)->UpdateIndexAll();

	m_PalHost.GetPalCtrl(PopNode->nPalIndex)->UpdateCtrl();
	ImgDispCtrl->UpdateCtrl();


}

void CPalModDlg::OnSettingsSettings()
{
	CSettDlg SettDlg;

	SettDlg.m_bAlphaTrans = CGame_MVC2_D::bAlphaTrans;
	SettDlg.m_bUpdSupp = CGameClass::bPostSetPalProc;

	if(SettDlg.DoModal() == IDOK)
	{
		CGame_MVC2_D::bAlphaTrans = SettDlg.m_bAlphaTrans;
		CGameClass::bPostSetPalProc = SettDlg.m_bUpdSupp;

		//SaveSettings();
	}
}

void CPalModDlg::OnEditUndo()
{
	// TODO: Add your command handler code here
	if(UndoProc.GetUndoCount())
		DoUndoRedo(TRUE);
}

void CPalModDlg::OnEditRedo()
{
	// TODO: Add your command handler code here
	if(UndoProc.GetRedoCount())
		DoUndoRedo(FALSE);
}

void CPalModDlg::OnEditSelectAll()
{
	// TODO: Add your command handler code here

	if(CurrPalCtrl)
	{
		CurrPalCtrl->SelectAll();
		CurrPalCtrl->UpdateCtrl();
	}
}

void CPalModDlg::OnEditSelectNone()
{
	// TODO: Add your command handler code here

	if(CurrPalCtrl)
	{
		CurrPalCtrl->ClearSelected();
		CurrPalCtrl->UpdateCtrl();
	}
}


void CPalModDlg::CustomEditProc(void * pPalCtrl, int nCtrlId, int nMethod)
{
	switch(nMethod)
	{
		case CUSTOM_COPY:
		case CUSTOM_PASTE:
		case CUSTOM_SALL:
		case CUSTOM_SNONE:
			break;
	}
}