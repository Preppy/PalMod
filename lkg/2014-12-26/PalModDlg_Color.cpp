#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#include "Game\ColorScale.h"



void CPalModDlg::EnableSlider(int RH, int GS, int BL)
{
	GetDlgItem(IDC_EDIT_RH)->EnableWindow(RH);
	m_RHSlider.EnableWindow(RH);

	GetDlgItem(IDC_EDIT_GS)->EnableWindow(GS);
	m_GSSlider.EnableWindow(GS);

	GetDlgItem(IDC_EDIT_BL)->EnableWindow(BL);
	m_BLSlider.EnableWindow(BL);

}

void CPalModDlg::ResetSlider(BOOL bSetZero)
{
	UpdateData();

	nTRMul = ((bShow32 && bRGB)? nRMul : 1);
	nTGMul = ((bShow32 && bRGB)? nGMul : 1);
	nTBMul = ((bShow32 && bRGB)? nBMul : 1);
	nTAMul = ((bShow32 && bRGB)? (nAMul ? nAMul : 1) : 1);

	if(bSetZero)
	{
		
		m_Edit_RH = 0;
		m_Edit_GS = 0;
		m_Edit_BL = 0;
		m_Edit_A = 0;
	}
	
	m_RHSlider.SetPos((int)(double)(round(m_Edit_RH/nTRMul)));
	m_GSSlider.SetPos((int)(double)(round(m_Edit_GS/nTGMul)));
	m_BLSlider.SetPos((int)(double)(round(m_Edit_BL/nTBMul)));
	m_ASlider.SetPos((int)(double)(round(m_Edit_A/nTAMul)));

	UpdateData(FALSE);
}

void CPalModDlg::UpdateSliderSel(BOOL bModeChange, BOOL bResetRF)
{
	
	static int nRangeFlag = 0xFFFF;
	static int bSliderEnabled = TRUE;
	static int bAlphaEnabled = TRUE;

	if(bResetRF)
	{
		nRangeFlag = 0xFFFF;
	}

	BOOL bEnableSlider = FALSE;
	BOOL bEnableAlpha = FALSE;

	if(bEnabled && CurrPalCtrl)
	{
		CGameClass * CurrGame = GetHost()->GetCurrGame();
		int nGameFlag = CurrGame->GetGameFlag();
		
		nPalSelAmt = CurrPalCtrl->GetSelAmt();

		if(nPalSelAmt == 0)
		{
				bEnableSlider = !bAutoSetCol;
				bEnableAlpha = !bAutoSetCol * nAAmt;
		}
		else if(nPalSelAmt == 1 || !bAutoSetCol)
		{
			
			bEnableSlider = TRUE;
			bEnableAlpha = TRUE * nAAmt;
			
			switch(bRGB)
			{
			case TRUE:
				{
					if(nRangeFlag != 0 + nGameFlag)
					{
						m_RHSlider.SetRange(0, nRAmt, TRUE);
						m_GSSlider.SetRange(0, nGAmt, TRUE);
						m_BLSlider.SetRange(0, nBAmt, TRUE);
						m_ASlider.SetRange(0, nAAmt, TRUE);
						
						nRangeFlag = 0 + nGameFlag;
						
					}
					
				}
				break;
			case FALSE:
				{
					if(nRangeFlag != 0xFF * 1 + nGameFlag)
					{

						m_RHSlider.SetRange(0, 360, TRUE);
						m_GSSlider.SetRange(0, 255, TRUE);
						m_BLSlider.SetRange(0, 100, TRUE);
						m_ASlider.SetRange(0, nAAmt, TRUE);
						

						nRangeFlag = 0xFF * 1 + nGameFlag;

					}

				}
				break;
			}

			if(bModeChange)
			{
				ResetSlider(FALSE);
			}
			else
			{
				GetSetSingleCol();
			}


		}
		else if(bAutoSetCol)
		{
			bEnableSlider = TRUE;
			bEnableAlpha = TRUE * nAAmt;

			switch(bRGB)
			{
			case TRUE:
				{

					if(nRangeFlag != 0xFF * 2 + nGameFlag)
					{
						m_RHSlider.SetRange(-nRAmt, nRAmt, TRUE);
						m_GSSlider.SetRange(-nGAmt, nGAmt, TRUE);
						m_BLSlider.SetRange(-nBAmt, nBAmt, TRUE);
						m_ASlider.SetRange(-nAAmt, nAAmt, TRUE);

						nRangeFlag = 0xFF * 2 + nGameFlag;
					}

				}
				break;
			case FALSE:
				{
					if(nRangeFlag != 0xFF * 3 + nGameFlag)
					{
						m_RHSlider.SetRange(0, 360, TRUE);
						m_GSSlider.SetRange(-255, 255, TRUE);
						m_BLSlider.SetRange(-100, 100, TRUE);
						m_ASlider.SetRange(-nAAmt, nAAmt, TRUE);

						nRangeFlag  = 0xFF * 3 + nGameFlag;
					}
				}
				break;
			}


			ResetSlider(!bModeChange);
			
		}

		//Enable/disable set color button
		GetDlgItem(IDC_BSETCOL)->EnableWindow(!bAutoSetCol);
	}
	else
	{
		bEnableSlider = FALSE;
		bEnableAlpha = FALSE;

		m_RHSlider.SetRange(0, 0, TRUE);
		m_GSSlider.SetRange(0, 0, TRUE);
		m_BLSlider.SetRange(0, 0, TRUE);
		m_ASlider.SetRange(0, 0, TRUE);

		ResetSlider();
	}

	
	GetDlgItem(IDC_BNEWCOL)->EnableWindow(nPalSelAmt + !bAutoSetCol);

	if(bEnableSlider != bSliderEnabled)
	{
		EnableSlider(bEnableSlider, bEnableSlider, bEnableSlider);
		bSliderEnabled = bEnableSlider;
	}	
	
	if(bEnableAlpha != bAlphaEnabled)
	{
		m_ASlider.EnableWindow(bEnableAlpha);
		GetDlgItem(IDC_EDIT_A)->EnableWindow(bEnableAlpha);

		bAlphaEnabled = bEnableAlpha;
		
	}
	

}

void CPalModDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
	UpdateData();

	//Update the slider undo data before changing
	if(bAutoSetCol && bGetSliderUndo)
	{
		ProcChange();

		bGetSliderUndo = FALSE;
	}

	//Update the edit control
	int * m_Edit;
	double nMul;
	int nSliderId = pScrollBar->GetDlgCtrlID();
	CSliderCtrl * SrcScroll = (CSliderCtrl *)pScrollBar;

	switch(pScrollBar->GetDlgCtrlID())
	{
	case IDC_RH_SLIDER:
		{
			m_Edit = &m_Edit_RH;
			nMul = nRMul;
			
		}
		break;
	case IDC_GS_SLIDER:
		{
			m_Edit = &m_Edit_GS;
			nMul = nGMul;
		}
		break;
	case IDC_BL_SLIDER:
		{
			m_Edit = &m_Edit_BL;
			nMul = nBMul;
		}
		break;
	case IDC_A_SLIDER:
		{
			m_Edit = &m_Edit_A;
			nMul = nAMul;
		}
		break;
	}

	

	if(nSliderId == IDC_A_SLIDER)
	{
		nMul = bShow32 ? nMul : 1;
	}
	else
	{
		nMul = bRGB ? (bShow32 ? nMul : 1) : 1;
	}

	*m_Edit = (int)round(nMul * SrcScroll->GetPos());

	UpdateData(FALSE);

	//Update the selected palette indexes
	UpdatePalSel();
	
	CDialog::OnHScroll(nSBCode, nPos, pScrollBar);


}

void CPalModDlg::OnRadioHLS()
{
	// TODO: Add your control notification handler code here

	UpdateData();
	SetColMode(FALSE);
	UpdateData(FALSE);
}

void CPalModDlg::OnRadioRGB()
{
	// TODO: Add your control notification handler code here

	UpdateData();
	SetColMode(TRUE);
	UpdateData(FALSE);
}

void CPalModDlg::SetColMode(int nColMode)
{

	if(bRGB != nColMode)
	{
		BOOL bZeroSlider;

		if(nPalSelAmt == 1 || !bAutoSetCol)
		{
			double dH, dS, dL;

			nTRMul = (bShow32 ? 1: nRMul);
			nTGMul = (bShow32 ? 1: nGMul);
			nTBMul = (bShow32 ? 1: nBMul);

			
			UpdateData();
			if(nColMode) //HLStoRGB
			{
				
				dH = ((double)(m_Edit_RH)/360.0f);
				dS = ((double)(m_Edit_GS)/255.0f);
				dL = ((double)(m_Edit_BL)/100.0f);

				COLORREF crRGBVal = HLStoRGB(dH, dL, dS);

				m_Edit_RH = (int)round(GetRValue(crRGBVal)/nTRMul);
				m_Edit_GS = (int)round(GetGValue(crRGBVal)/nTGMul);
				m_Edit_BL = (int)round(GetBValue(crRGBVal)/nTBMul);

			}
			else //RGBtoHLS
			{

				COLORREF crRGBVal = RGB(
					(int)round(m_Edit_RH*nTRMul), 
					(int)round(m_Edit_GS*nTGMul), 
					(int)round(m_Edit_BL*nTBMul));

				RGBtoHLS(crRGBVal, &dH, &dL, &dS);

				m_Edit_RH = (int)(dH * 360.0f);
				m_Edit_GS = (int)(dS * 255.0f);
				m_Edit_BL = (int)(dL * 100.0f);
			}

			bZeroSlider = FALSE;
			UpdateData(FALSE);

			
		}
		else if(nPalSelAmt > 1)
		{
			UpdateData();

			m_Edit_RH = 0;
			m_Edit_GS = 0;
			m_Edit_BL = 0;

			bZeroSlider = TRUE;

			UpdateData(FALSE);

			UpdateMultiEdit();
		}

		bRGB = nColMode;

		UpdateSliderSel(TRUE);
		
		SetSliderDescEdit();

		
	}

	

	
}

void CPalModDlg::UpdateSliderPos(int nCtrlId)
{
}

void CPalModDlg::UpdateEditKillFocus(int nCtrlId)
{

	UpdateData();

	int * m_Edit;
	
	int nColMax;
	double nColMul;
	int nHLSHI;
	
	CSliderCtrl * TargetSlider;

	int nSetFlag = nPalSelAmt;

	switch(nCtrlId)
	{
	case IDC_EDIT_RH:
		{
			m_Edit = &m_Edit_RH;
			TargetSlider = &m_RHSlider;
			nColMax = nRAmt;
			nColMul = nRMul;
			nHLSHI = 360;
		}
		break;
	case IDC_EDIT_GS:
		{
			m_Edit = &m_Edit_GS;
			TargetSlider = &m_GSSlider;
			
			nColMax = nGAmt;
			nColMul = nGMul;

			nHLSHI = 255;
		}
		break;
	case IDC_EDIT_BL:
		{
			m_Edit = &m_Edit_BL;
			TargetSlider = &m_BLSlider;
			
			nColMax = nBAmt;
			nColMul = nBMul;

			nHLSHI = 100;
		}
		break;
	case IDC_EDIT_A:
		{
			if(nAMul)
			{
				m_Edit = &m_Edit_A;
				TargetSlider = &m_ASlider;
				
				nColMax = nAAmt;
				nColMul = nAMul;
				nHLSHI = nColMax;
				nSetFlag = 1;
			}
			else
			{
				return;
			}
		}
		break;
	}
	
	//Make sure the multiplier is set correctly
	nColMul = bShow32 ? nColMul : 1;
	nColMul = bRGB ? nColMul : 1;

	switch(nSetFlag)
	{
	case 0:
		break;
	case 1:
		{
			if(bRGB)
			{

				if(bShow32)
				{
					*m_Edit = MainPalGroup->ROUND(MainPalGroup->LimitRGB(*m_Edit));
				}
				else
				{
					*m_Edit = LimitVal(*m_Edit, nColMax, 0);
				}
			}
			else
			{
				*m_Edit = LimitVal(*m_Edit, nHLSHI, 0);
			}
		}
		break;
	default:
		{
			if(bRGB)
			{
				BOOL bNeg = *m_Edit < 0 ? TRUE : FALSE;

				if(bShow32)
				{
					
					*m_Edit = MainPalGroup->ROUND(MainPalGroup->LimitRGB(abs(*m_Edit)));

					*m_Edit = bNeg ? *m_Edit - *m_Edit - *m_Edit : *m_Edit;
				}
				else
				{
					*m_Edit = LimitVal(*m_Edit, nColMax, -nColMax);
				}
			}
			else
			{
				*m_Edit = LimitVal(*m_Edit, nHLSHI, -nHLSHI);
			}

		}
		break;
	}

	TargetSlider->SetPos((int)round(*m_Edit / nColMul));

	UpdatePalSel();


	UpdateData(FALSE);

}

void CPalModDlg::OnKillFocusEditRh()
{
	// TODO: Add your control notification handler code here
	UpdateEditKillFocus(IDC_EDIT_RH);
}

void CPalModDlg::OnKillFocusEditGS()
{
	// TODO: Add your control notification handler code here
	UpdateEditKillFocus(IDC_EDIT_GS);
}

void CPalModDlg::OnKillFocusEditBL()
{

	// TODO:  Add your control notification handler code here
	UpdateEditKillFocus(IDC_EDIT_BL);
}

void CPalModDlg::OnKillFocusEditA()
{
	// TODO: Add your control notification handler code here
	UpdateEditKillFocus(IDC_EDIT_A);
}

void CPalModDlg::SetSliderCol(int nRH, int nGS, int nBL, int nA)
{

	nTRMul = (bShow32 ? 1: nRMul);
	nTGMul = (bShow32 ? 1: nGMul);
	nTBMul = (bShow32 ? 1: nBMul);
	nTAMul = (bShow32 ? 1: nAMul);

	


	if(!bRGB)
	{
		double dH, dL, dS;

		RGBtoHLS(RGB(nRH, nGS, nBL), &dH, &dL, &dS);
		
		nRH = (int)(dH * 360.0f);
		nGS = (int)(dS * 255.0f);
		nBL = (int)(dL * 100.0f);

	}
	else
	{
		nRH = (int)round(nRH/nTRMul);
		nGS = (int)round(nGS/nTGMul);
		nBL = (int)round(nBL/nTBMul);
		
	}
	
	if(!nAMul)
	{
		nA = 0;
	}
	else
	{
		nA = (int)round(nA/nTAMul);
	}

	UpdateData();

	m_Edit_RH = nRH;
	m_Edit_GS = nGS;
	m_Edit_BL = nBL;
	m_Edit_A = nA;

	UpdateData(FALSE);
	

}

void CPalModDlg::UpdatePalSel(BOOL bSetSingleCol)
{

	int nAVal = nAMul ? m_ASlider.GetPos() : 0xFF;
	nAVal = (int)round((double)nAVal * (nAMul ? nAMul : 1));

	if(bAutoSetCol && CurrPalCtrl)
	{
		
		switch(nPalSelAmt)
		{
		case 0:
			{
			}
			break;
		case 1:
			{

				int nSingleSel = CurrPalCtrl->GetSS();
				COLORREF * crTarget = &CurrPalCtrl->GetBasePal()[nSingleSel];


				switch(bRGB)
				{
				case TRUE:
					{
						
						MainPalGroup->SetRGBA(crTarget, 
							(int)round(m_RHSlider.GetPos() * nRMul), 
							(int)round(m_GSSlider.GetPos() * nGMul), 
							(int)round(m_BLSlider.GetPos() * nBMul),
							nAVal
							);
							
					}
					break;
				case FALSE:
					{
						
						MainPalGroup->SetHLSA(crTarget, 
							(double)m_RHSlider.GetPos() / 360.0f, 
							(double)m_BLSlider.GetPos() / 100.0f,
							(double)m_GSSlider.GetPos() / 255.0f,
							nAVal
							);
							
					}
					break;
				}

				CurrPalCtrl->UpdateIndex(nSingleSel);
				CurrPalCtrl->UpdateCtrl();

				ImgDispCtrl->UpdateCtrl();

				//Update the change flag on the base palette
				CurrPalDef->bChanged = TRUE;
			}
			break;
		default:
			{
				COLORREF * crTarget = CurrPalCtrl->GetBasePal();
				int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
				UCHAR * uSelBuffer = CurrPalCtrl->GetSelIndex();
				COLORREF * crBasePal = &CurrPalDef->pBasePal[CurrPalSep->nStart];

				switch(bRGB)
				{
				case TRUE:
					{
						
						for(int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
						{
							

							if(uSelBuffer[nICtr])
							{
								MainPalGroup->SetAddRGBA(crBasePal[nICtr], &crTarget[nICtr],
									(int)round(m_RHSlider.GetPos() * nRMul), 
									(int)round(m_GSSlider.GetPos() * nGMul), 
									(int)round(m_BLSlider.GetPos() * nBMul),
									nAVal
									);
								
								CurrPalCtrl->UpdateIndex(nICtr);
							}

							
						}
							
					}
					break;
				case FALSE:
					{
						for(int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
						{
							if(uSelBuffer[nICtr])
							{
								
								MainPalGroup->SetAddHLSA(crBasePal[nICtr], &crTarget[nICtr],
									(double)m_RHSlider.GetPos() / 360.0f, 
									(double)m_BLSlider.GetPos() / 100.0f,
									(double)m_GSSlider.GetPos() / 255.0f,
									nAVal
									);
								
								CurrPalCtrl->UpdateIndex(nICtr);

							}
							
						}
					}
					break;
				}


				CurrPalCtrl->UpdateCtrl();
				ImgDispCtrl->UpdateCtrl();

				bCopyFromBase = TRUE;

				//Update the change flag on the base palette
				CurrPalDef->bChanged = TRUE;
			}
			break;
		}

	}
	else if(bSetSingleCol && CurrPalCtrl)
	{
		


		if(nPalSelAmt)
		{
			//Get undo data based on current color
			
			ProcChange();

			COLORREF * crTarget = CurrPalCtrl->GetBasePal();

			int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
			UCHAR * uSelBuffer = CurrPalCtrl->GetSelIndex();

			switch(bRGB)
			{
			case TRUE:
				{
					for(int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
					{
						if(uSelBuffer[nICtr])
						{
							MainPalGroup->SetRGBA(&crTarget[nICtr], 
								(int)round(m_RHSlider.GetPos() * nRMul), 
								(int)round(m_GSSlider.GetPos() * nGMul), 
								(int)round(m_BLSlider.GetPos() * nBMul),
								nAVal
								);

							CurrPalCtrl->UpdateIndex(nICtr);
						}
					}
						
				}
				break;
			case FALSE:
				{
					for(int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
					{
						if(uSelBuffer[nICtr])
						{
							MainPalGroup->SetHLSA(&crTarget[nICtr], 
								(double)m_RHSlider.GetPos() / 360.0f, 
								(double)m_BLSlider.GetPos() / 100.0f,
								(double)m_GSSlider.GetPos() / 255.0f,
								nAVal
								);

							CurrPalCtrl->UpdateIndex(nICtr);
						}
					}
						
				}
				break;
			}

			CurrPalCtrl->UpdateCtrl();
			ImgDispCtrl->UpdateCtrl();

			//Update the change flag on the base palette
			CurrPalDef->bChanged = TRUE;
		}
	}

}
void CPalModDlg::GetSetSingleCol()
{
	if(bGetCol && CurrPalCtrl)
	{

		COLORREF crSrc = CurrPalCtrl->GetBasePal()[CurrPalCtrl->GetSS()];

		SetSliderCol(GetRValue(crSrc), GetGValue(crSrc), GetBValue(crSrc), GetAValue(crSrc));
		ResetSlider(FALSE);
	}
}

void CPalModDlg::UpdateMultiEdit(BOOL bForce)
{
	if(bCopyFromBase || bForce)
	{
		memcpy(CurrPalDef->pBasePal, CurrPalDef->pPal, CurrPalDef->uPalSz * sizeof(COLORREF));

		bCopyFromBase = FALSE;
	}
}

void CPalModDlg::SetSliderDescEdit()
{
	UpdateData();

	if(bRGB)
	{
		m_EditRHDesc = "R";
		m_EditGSDesc = "G";
		m_EditBLDesc = "B";
	}
	else
	{
		m_EditRHDesc = "H";
		m_EditGSDesc = "S";
		m_EditBLDesc = "L";
	}

	UpdateData(FALSE);
}


void CPalModDlg::OnBnNewCol()
{
	CColorDialog * ColorDlg = NULL;
	int nSelAmt = CurrPalCtrl->GetSelAmt();

	UpdateData();
	
	int nAVal;

	if(nAMul)
	{
		nTAMul = (bShow32 ? 1: nAMul);
		nAVal = (int)round(m_Edit_A * nTAMul);
	}
	else
	{
		nAVal = 0xFF;
	}

	
	if(nSelAmt > 1)
	{
		ColorDlg = new CColorDialog( RGB( 255, 255, 255 ) );
	}
	else
	{
	
		if(bRGB)
		{
			nTRMul = (bShow32 ? 1: nRMul);
			nTGMul = (bShow32 ? 1: nGMul);
			nTBMul = (bShow32 ? 1: nBMul);

			ColorDlg = new CColorDialog(RGB(
				(int)round(m_Edit_RH*nTRMul),
				(int)round(m_Edit_GS*nTGMul),
				(int)round(m_Edit_BL*nTBMul)));
				
		}
		else
		{
			double dH, dS, dL;
				
			dH = ((double)(m_Edit_RH)/360.0f);
			dS = ((double)(m_Edit_GS)/255.0f);
			dL = ((double)(m_Edit_BL)/100.0f);

			ColorDlg = new CColorDialog(HLStoRGB(dH, dL, dS));
		}

	}
	

	

	

	UpdateData(FALSE);
	if(ColorDlg->DoModal() == IDOK)
	{
		COLORREF crNewCol = ColorDlg->GetColor();

		if(nSelAmt == 1 || !bAutoSetCol)
		{
			SetSliderCol(
				GetRValue(crNewCol),
				GetGValue(crNewCol),
				GetBValue(crNewCol),
				nAVal);

			ResetSlider(FALSE);

			if(bAutoSetCol)
			{
				int nSelIndex = CurrPalCtrl->GetSS();
				CurrPalCtrl->GetBasePal()[nSelIndex] = (crNewCol | ((COLORREF)nAVal << 24));

				CurrPalCtrl->UpdateIndex(nSelIndex);
				CurrPalCtrl->UpdateCtrl();

				ImgDispCtrl->UpdateCtrl();

				UpdateMultiEdit(TRUE);
			}
		}
		else
		{

			UINT8 * rgSel = CurrPalCtrl->GetSelIndex();
			int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
			COLORREF * pPal = CurrPalCtrl->GetBasePal();

			for(int i = 0; i < nWorkingAmt; i++)
			{
				if(rgSel[i])
				{
					pPal[i] = (crNewCol | ((COLORREF)0xFF << 24));
				}

				CurrPalCtrl->UpdateIndex(i);
			}

			CurrPalCtrl->UpdateCtrl();
			ImgDispCtrl->UpdateCtrl();

			UpdateMultiEdit(TRUE);

			ResetSlider(TRUE);

			//UpdatePalSel();
		}
	}

	if(ColorDlg)
	{
		delete ColorDlg;
	}
}



void CPalModDlg::OnBnSetCol()
{
	UpdatePalSel(TRUE);
}

void CPalModDlg::OnColSett()
{
	bShow32 = !bShow32;

	nTAMul = (bShow32 ? 1: (nAMul == 0 ? 1 : nAMul));

	UpdateData();
	
	if(bRGB)
	{
		if(bShow32)
		{
			m_Edit_RH = (int)round(m_Edit_RH * nRMul);
			m_Edit_GS = (int)round(m_Edit_GS * nGMul);
			m_Edit_BL = (int)round(m_Edit_BL * nBMul);
			m_Edit_A = (int)round(m_Edit_A * nTAMul);
		}
		else
		{
			m_Edit_RH = (int)round(m_Edit_RH / nRMul);
			m_Edit_GS = (int)round(m_Edit_GS / nGMul);
			m_Edit_BL = (int)round(m_Edit_BL / nBMul);
			m_Edit_A = (int)round(m_Edit_A / nTAMul);
		}
	}

	UpdateData(FALSE);
}

void CPalModDlg::Blink()
{
	if(bEnabled &&  bCanBlink && ImgDispCtrl->GetImgBuffer()[nPalImgIndex])
	{
		sPalDef * srcDef = 
			MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex);

		pTempPalCopy = new COLORREF[srcDef->uPalSz];
		memcpy(pTempPalCopy, srcDef->pPal, srcDef->uPalSz * sizeof(COLORREF));

		nBlinkCount = 2;
		nBlinkState = 3; //Start of blink
		bCanBlink = FALSE;

		crBlinkCol = ImgDispCtrl->GetBlinkCol() | (0xFF000000);

		ImgDispCtrl->SetAltPal(nPalImgIndex, pTempPalCopy);
		PerformBlink();
	}
}

void CPalModDlg::PerformBlink()
{
	//BlinkState
	//3 = start / on
	//2 = on
	//1 = off
	//0 = n/a
	BOOL bRedraw = FALSE;
	BOOL bSetTimer = FALSE;


	UINT8 * rgSel = CurrPalCtrl->GetSelIndex();
	int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
	int nOffs = MainPalGroup->GetSep(
		MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex,
		MainPalGroup->GetRedir()[nCurrSelPal].nSepIndex
		)->nStart;

	if(nWorkingAmt)
	{
		switch(nBlinkState)
		{
		case 3:
			{
				COLORREF * pPalette = 
					MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex)->pPal;

				for(int i = 0; i < nWorkingAmt; i++)
				{
					if(rgSel[i])
					{
						pTempPalCopy[i + nOffs] = crBlinkCol;
					}
					else
					{
						pTempPalCopy[i + nOffs] = pPalette[i + nOffs];
					}
				}

				bSetTimer = TRUE;
				bRedraw = TRUE;
				nBlinkState = 1;
			}
			break;
		case 2:
			{
				nBlinkState = 1;
			}

			break;
		case 1:
			{
				nBlinkCount --;

				if(nBlinkCount)
				{
					nBlinkState = 2;
				}
				else
				{
					nBlinkState = 0;
				}
			}
			break;
		}

		

		ImgDispCtrl->UpdateCtrl(bRedraw, ((nBlinkState == 1 ? (nPalImgIndex | 0xFF00) : FALSE)));
		

		bSetTimer ? SetTimer(TIMER_BLINK, TIMER_BLINK_ELAPSE, NULL) : NULL;
			
		
	}
	else
	{
		nBlinkState = 0;
	}
}

void CPalModDlg::OnBnRevert()
{
	// TODO: Add your control notification handler code here

	if(bEnabled)
	{
		ProcChange();

		GetHost()->GetCurrGame()->Revert(nCurrSelPal);

		ImgDispCtrl->UpdateCtrl();

		CurrPalCtrl->UpdateIndexAll();
		CurrPalCtrl->UpdateCtrl();

		UpdateMultiEdit(TRUE);
		UpdateSliderSel();
	}
	
}

void CPalModDlg::OnBnClickedBinvert()
{
	if(bEnabled)
	{
		ProcChange();

		UINT8 * rgSel = (UINT8 *)CurrPalCtrl->GetSelIndex();
		UINT8 * pCurrPal = (UINT8 *)CurrPalCtrl->GetBasePal();
		UINT8 nIndex;
		BOOL bForce = !CurrPalCtrl->GetSelAmt();


		for(int i = 0; i < CurrPalCtrl->GetWorkingAmt(); i++)
		{
			if(rgSel[i] || bForce)
			{
				nIndex = (i * 4);

				pCurrPal[nIndex] = MainPalGroup->ROUND_R(~pCurrPal[nIndex]);
				pCurrPal[nIndex + 1] = MainPalGroup->ROUND_G(~pCurrPal[nIndex + 1]);
				pCurrPal[nIndex + 2] = MainPalGroup->ROUND_B(~pCurrPal[nIndex + 2]);

				CurrPalCtrl->UpdateIndex(i);
			}
		}

		ImgDispCtrl->UpdateCtrl();

		//CurrPalCtrl->UpdateIndexAll();
		CurrPalCtrl->UpdateCtrl();

		UpdateMultiEdit(TRUE);
		UpdateSliderSel();
	}
}
