#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

void CPalModDlg::GetPlaneData()
{
	CGameClass * CurrGame = GetHost()->GetCurrGame();

	nRAmt = CurrGame->GetPlaneAmt(COL_R);
	nGAmt = CurrGame->GetPlaneAmt(COL_G);
	nBAmt = CurrGame->GetPlaneAmt(COL_B);
	nAAmt = CurrGame->GetPlaneAmt(COL_A);

	nRMul = CurrGame->GetPlaneMul(COL_R);
	nGMul = CurrGame->GetPlaneMul(COL_G);
	nBMul = CurrGame->GetPlaneMul(COL_B);
	nAMul = CurrGame->GetPlaneMul(COL_A);
}

void CPalModDlg::OnCBUnitChildChange()
{
	if(VerifyMsg(VM_PALCHANGE))
	{
		UpdateCombo();
	}
}

void CPalModDlg::UpdateCombo()
{
	int nCurrUnitSel;
	int nCurrChildSel1;
	int nCurrChildSel2;

	CGameClass * CurrGame = GetHost()->GetCurrGame();
	UINT8 * rgRedir = CurrGame->rgUnitRedir;

	if(bLoadUnit)
	{
		int nDescCtr = 0;
		
		//Grab the main tree
		sDescTreeNode * UnitTree = CurrGame->GetMainTree()->GetDescTree(-1);

		//Clear the unit list
		while(m_CBUnitSel.DeleteString(0) >= 0) NULL;

		//Add each unit
		while(rgRedir[nDescCtr] != 0xFF)
		{
			m_CBUnitSel.AddString( ((sDescTreeNode *)UnitTree->ChildNodes)[rgRedir[nDescCtr]].szDesc );
			nDescCtr++;
		}

		//Since we just updated, set to 0
		m_CBUnitSel.SetCurSel(0);

		bLoadUnit = FALSE;
	}

	//
	nCurrUnitSel = m_CBUnitSel.GetCurSel();
	

	if(nCurrUnitSel != nPrevUnitSel)
	{
		
		sDescTreeNode * ChildTree = CurrGame->GetMainTree()->GetDescTree(rgRedir[nCurrUnitSel], -1);
		
		//Clear the 1st child list
		while(m_CBChildSel1.DeleteString(0) >= 0) NULL;

		

		for(int nDescCtr = 0; nDescCtr < ChildTree->uChildAmt; nDescCtr++)
		{
			m_CBChildSel1.AddString( ((sDescTreeNode *)ChildTree->ChildNodes)[nDescCtr].szDesc );
		}

		//Set to 0 since update
		m_CBChildSel1.SetCurSel(0);
		nPrevUnitSel = nCurrUnitSel;

		//Reset the next list
		nPrevChildSel1 = 0xFFFF;
		
	}
	
	//
	nCurrChildSel1 = m_CBChildSel1.GetCurSel();

	if(nCurrChildSel1 != nPrevChildSel1)
	{
		sDescTreeNode * ChildTree = CurrGame->GetMainTree()->GetDescTree(rgRedir[nCurrUnitSel], nCurrChildSel1,  -1);
		
		//Clear the 1st child list
		while(m_CBChildSel2.DeleteString(0) >= 0) NULL;

		

		for(int nDescCtr = 0; nDescCtr < ChildTree->uChildAmt; nDescCtr++)
		{
			m_CBChildSel2.AddString( ((sDescNode *)ChildTree->ChildNodes)[nDescCtr].szDesc );
		}

		//Set to 0 since update
		m_CBChildSel2.SetCurSel(0);
		nPrevChildSel1 = nCurrChildSel1;

		//Reset the next selection
		nPrevChildSel2 = 0xFFFF;

		
		
	}

	nCurrChildSel2 = m_CBChildSel2.GetCurSel();

	if(nCurrChildSel2 != nPrevChildSel2)
	{

		//Clear the undo data
		UndoProc.Clear();

		//Get the selected palette
		GetHost()->GetCurrGame()->UpdatePalImg(
			rgRedir[nCurrUnitSel], nCurrChildSel1, nCurrChildSel2);

		PostPalSel();

		nPrevChildSel2 = nCurrChildSel2;
		
		//Select None
		//OnEditSelectNone();
		
		//Update the display palette selection
		int nNotifyIndex = m_PalHost.GetNotifyIndex();

		if(m_PalHost.GetPalCtrl(nNotifyIndex))
		{
			OnPalSelChange(nNotifyIndex);
		}
		else
		{
			OnEditSelectNone();
			OnPalSelChange(0);
		}

	}

	
}



void CPalModDlg::PostPalSel()
{
	static int nPrevImgIndex[MAX_IMG] = {-1, -1};
	//Update the host palette control
	CGameClass * CurrGame = GetHost()->GetCurrGame();
	sImgDef * CurrImgDef;
	sPalDef * CurrPalDef;
	sPalSep * CurrSep;

	sImgTicket * CurrTicket = CurrGame->GetImgTicket();;
	
	int nPalAmt = MainPalGroup->GetPalAmt();
	int nPalIndexCtr = 0;
	int nImgIndexCtr = 0;
	int nCurrSepAmt = 0;

	int nPalW, nPalH;
	BOOL bSameImg = FALSE;
	


	StopBlink();

	//Flush the host pal ctrl
	m_PalHost.BeginSetPal();
	
	for(int i = 0; i < nPalAmt; i++)
	{
		CurrPalDef = MainPalGroup->GetPalDef(i);
		nCurrSepAmt = CurrPalDef->uSepAmt;

		//Fill the palette control
		for(int nSepCtr = 0; nSepCtr < nCurrSepAmt; nSepCtr++)
		{
			CurrSep = MainPalGroup->GetSep(i, nSepCtr);

			m_PalHost.SetPal(nPalIndexCtr, CurrSep->nAmt, &CurrPalDef->pPal[CurrSep->nStart], CurrSep->szDesc);

			nPalIndexCtr++;
		}

		//Fill the image control
		if(ImgFile)
		{

			if(CurrTicket != NULL)
			{
				int nImgKey  = (UINT16)(CurrTicket->nUnitId << 8) | (UINT8)CurrTicket->nImgId;

				CurrImgDef = ImgFile->GetImageDef(CurrTicket->nUnitId, CurrTicket->nImgId);

				if(nPrevImgIndex[nImgIndexCtr] != nImgKey || bForceImg)
				{

					if(nImgIndexCtr == 0)
					{
						ImgDispCtrl->ClearUsed();

						//Get and flush the image ctrl

						ImgFile->FlushLastImg();
						
					}

					if(CurrImgDef)
					{
						ImgDispCtrl->AddImageNode(
							nImgIndexCtr,
							CurrImgDef->uImgWidth, 
							CurrImgDef->uImgHeight,
							ImgFile->GetImgData(CurrImgDef),
							MainPalGroup->GetPalDef(i)->pPal,
							MainPalGroup->GetPalDef(i)->uPalSz,
							CurrTicket->nXOffs,
							CurrTicket->nYOffs);
					}
				
				}
				else
				{
					ImgDispCtrl->UpdateImgPalette(
						nImgIndexCtr, 
						MainPalGroup->GetPalDef(i)->pPal,
						MainPalGroup->GetPalDef(i)->uPalSz);

					bSameImg = TRUE;
				}

				nPrevImgIndex[nImgIndexCtr] = nImgKey;

				nImgIndexCtr++;
				
			}
		}

		if(CurrTicket)
		{
			CurrTicket = CurrTicket->NextTicket;
		}
	}

	//No images
	if(!nImgIndexCtr)
	{
		ImgDispCtrl->ClearUsed();
	}

	//Get rid of the unused images
	if(!bSameImg)
	{
		ImgDispCtrl->FlushUnused();
	}

	//Reset the prev indexes
	memset(&nPrevImgIndex[nImgIndexCtr], -1, sizeof(int) * (MAX_IMG - nImgIndexCtr));
	
	m_PalHost.EndSetPal();

	//Display the palettes
	m_PalHost.UpdateCtrl();

	//Display the new images
	//ImgDispCtrl->CenterImg();
	ImgDispCtrl->UpdateCtrl();
	


	//Reset change flag
	ProcChange(TRUE);

	//Reset the palette focus 
	//m_PalHost.ResetNotifyPal(0);

	//If force img was set, unset it
	bForceImg = FALSE;	
}

void CPalModDlg::OnPalSelChange(int nCtrlId)
{
	//Update the base palette if multi-edit
	UpdateMultiEdit();

	//Fill the current palette info
	nCurrSelPal = nCtrlId;

	CurrPalCtrl = m_PalHost.GetPalCtrl(nCtrlId);
	CurrPalDef = MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex);
	CurrPalSep = CurrPalDef->SepList[MainPalGroup->GetRedir()[nCurrSelPal].nSepIndex];
	nPalImgIndex = MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex;


	UpdateSliderSel();


}

void CPalModDlg::OnPalHLChange(void * pPalCtrl, int nCtrlId)
{
	CJunk * pNotifyCtrl = (CJunk *)pPalCtrl;
	int nHLAmt = pNotifyCtrl->GetHLAmt();

	if(!nHLAmt)
	{
		m_StatusBar.SetPaneText(1, "");
	}
	else if(nHLAmt == 1)
	{

		CHAR szIndex[32];
		sprintf(szIndex, "(%d: %d)", nCtrlId, pNotifyCtrl->GetHighlightIndex());

		m_StatusBar.SetPaneText(1, szIndex);
	}
	else
	{
		m_StatusBar.SetPaneText(1, "--");
	}
}

void CPalModDlg::OnTimer(UINT_PTR nIDEvent)
{
	// TODO: Add your message handler code here and/or call default

	switch(nIDEvent)
	{
	case TIMER_STATUS:
		{
			m_StatusBar.SetPaneText(0, DEFAULT_STATUS_TEXT);
			KillTimer(TIMER_STATUS);
		}
		break;
	case TIMER_BLINK:
		{
			PerformBlink();
		
			if(!nBlinkState)
			{
				KillTimer(TIMER_BLINK);

				bCanBlink = TRUE;

				if(pTempPalCopy)
				{
					delete [] pTempPalCopy;
					pTempPalCopy = NULL;
				}
			}
			
			ImgDispCtrl->Redraw();

		}
		break;
	}

	CDialog::OnTimer(nIDEvent);
}

void CPalModDlg::StopBlink()
{
	//Stop blinking
	nBlinkState = 0;
	KillTimer(TIMER_BLINK);
	bCanBlink = TRUE;

	if(pTempPalCopy)
	{
		delete [] pTempPalCopy;
		pTempPalCopy = NULL;
	}
}