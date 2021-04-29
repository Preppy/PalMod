#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "palmod.h"

#include "Game\ColorScale.h"

void CPalModDlg::EnableSlider(int RH, int GS, int BL)
{
    GetDlgItem(IDC_EDIT_RH)->EnableWindow(RH);
    m_RHSlider.EnableWindow(RH);
    GetDlgItem(IDC_SPIN_RH)->EnableWindow(RH);

    GetDlgItem(IDC_EDIT_GS)->EnableWindow(GS);
    m_GSSlider.EnableWindow(GS);
    GetDlgItem(IDC_SPIN_GS)->EnableWindow(RH);

    GetDlgItem(IDC_EDIT_BL)->EnableWindow(BL);
    m_BLSlider.EnableWindow(BL);
    GetDlgItem(IDC_SPIN_BL)->EnableWindow(RH);
}

void CPalModDlg::ResetSlider(BOOL bSetZero)
{
    UpdateData();

    nTRGBMul = ((m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL) ? nRGBMul : 1);
    nTAMul = ((m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL && nAMul) ? nAMul : 1);

    if (bSetZero)
    {
        m_Edit_RH = 0;
        m_Edit_GS = 0;
        m_Edit_BL = 0;
        m_Edit_A = 0;
    }

    m_RHSlider.SetPos((int)(double)(round(m_Edit_RH / nTRGBMul)));
    m_GSSlider.SetPos((int)(double)(round(m_Edit_GS / nTRGBMul)));
    m_BLSlider.SetPos((int)(double)(round(m_Edit_BL / nTRGBMul)));
    m_ASlider.SetPos((int)(double)(round(m_Edit_A / nTAMul)));

    UpdateData(FALSE);
}

int CPalModDlg::BoundIntBySliderRange(int nIntValue, CSliderCtrl* pSlider)
{
    int nAdjustedValue = nIntValue;
    int nMin, nMax;
    pSlider->GetRange(nMin, nMax);

    if (m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        // max values for 32bit values are -255/0/255
        if (nMin < 0)
        {
            nMin = -255;
        }
        nMax = 255;
    }

    nAdjustedValue = min(nAdjustedValue, nMax);
    nAdjustedValue = max(nAdjustedValue, nMin);

    if (m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        if ((nAdjustedValue != nMax) && (nAdjustedValue != nMin))
        {
            // Now round to legal values for this color mode
            // Note that this doesn't correctly handle NeoGeo's color table
            const double flMultiplier = ((&m_ASlider == pSlider) ? nAMul : nRGBMul);
            const double flStepsUsed = nAdjustedValue / flMultiplier;
            
            nAdjustedValue = (int)round((int)round(flStepsUsed) * flMultiplier);
        }
    }

    return nAdjustedValue;
}

// Handle the spinner controls...
void CPalModDlg::OnDeltaposSpinRH(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    // Adjust by amount, but correct the orientation
    UpdateData();
    ProcChange();
    const int nStepLength = -1 * (m_fForceShowAs32bitColor ? (int)nRGBMul : 1);
    m_Edit_RH = m_Edit_RH + (nStepLength * pNMUpDown->iDelta);

    m_Edit_RH = BoundIntBySliderRange(m_Edit_RH, &m_RHSlider);
    UpdateData(FALSE);
    UpdateEditKillFocus(IDC_EDIT_RH);
}

void CPalModDlg::OnDeltaposSpinGS(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    // Adjust by amount, but correct the orientation
    UpdateData();
    ProcChange();
    const int nStepLength = -1 * (m_fForceShowAs32bitColor ? (int)nRGBMul : 1);
    m_Edit_GS = m_Edit_GS + (nStepLength * pNMUpDown->iDelta);

    m_Edit_GS = BoundIntBySliderRange(m_Edit_GS, &m_GSSlider);
    UpdateData(FALSE);
    UpdateEditKillFocus(IDC_EDIT_GS);
}

void CPalModDlg::OnDeltaposSpinBL(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    // Adjust by amount, but correct the orientation
    UpdateData();
    ProcChange();
    const int nStepLength = -1 * (m_fForceShowAs32bitColor ? (int)nRGBMul : 1);
    m_Edit_BL = m_Edit_BL + (nStepLength * pNMUpDown->iDelta);

    m_Edit_BL = BoundIntBySliderRange(m_Edit_BL, &m_BLSlider);
    UpdateData(FALSE);
    UpdateEditKillFocus(IDC_EDIT_BL);
}

void CPalModDlg::OnDeltaposSpinA(NMHDR* pNMHDR, LRESULT* pResult)
{
    LPNMUPDOWN pNMUpDown = reinterpret_cast<LPNMUPDOWN>(pNMHDR);
    *pResult = 0;

    // Adjust by amount, but correct the orientation
    UpdateData();
    ProcChange();
    const int nStepLength = -1 * (m_fForceShowAs32bitColor ? (int)nAMul : 1);
    m_Edit_A = m_Edit_A + (nStepLength * pNMUpDown->iDelta);

    m_Edit_A = BoundIntBySliderRange(m_Edit_A, &m_ASlider);
    UpdateData(FALSE);
    UpdateEditKillFocus(IDC_EDIT_A);
}

void CPalModDlg::UpdateSliderSel(BOOL bModeChange, BOOL bResetRF)
{
    static int nRangeFlag = 0xFFFF;
    static int bSliderEnabled = TRUE;
    static int bAlphaEnabled = TRUE;

    if (bResetRF)
    {
        nRangeFlag = 0xFFFF;
    }

    BOOL bEnableSlider = FALSE;
    BOOL bEnableAlpha = FALSE;

    if (bEnabled && CurrPalCtrl)
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        int nGameFlag = CurrGame->GetGameFlag();

        nPalSelAmt = CurrPalCtrl->GetSelAmt();

        if (nPalSelAmt == 1)
        {
            bEnableSlider = TRUE;
            bEnableAlpha = (nAAmt != 0);

            if (m_fShowAsRGBNotHSL)
            {
                if (nRangeFlag != (0 + nGameFlag))
                {
                    m_RHSlider.SetRange(0, nRGBAmt, TRUE);
                    m_GSSlider.SetRange(0, nRGBAmt, TRUE);
                    m_BLSlider.SetRange(0, nRGBAmt, TRUE);
                    m_ASlider.SetRange(0, nAAmt, TRUE);

                    nRangeFlag = 0 + nGameFlag;
                }
            }
            else
            {
                if (nRangeFlag != ((0xFF * 1) + nGameFlag))
                {
                    m_RHSlider.SetRange(0, 360, TRUE);
                    m_GSSlider.SetRange(0, 255, TRUE);
                    m_BLSlider.SetRange(0, 100, TRUE);
                    m_ASlider.SetRange(0, nAAmt, TRUE);

                    nRangeFlag = (0xFF * 1) + nGameFlag;
                }
            }

            if (bModeChange)
            {
                ResetSlider(FALSE);
            }
            else
            {
                GetSetSingleCol();
            }
        }
        else
        {
            bEnableSlider = TRUE;
            bEnableAlpha = TRUE * nAAmt;

            if (m_fShowAsRGBNotHSL)
            {
                if (nRangeFlag != ((0xFF * 2) + nGameFlag))
                {
                    m_RHSlider.SetRange(-nRGBAmt, nRGBAmt, TRUE);
                    m_GSSlider.SetRange(-nRGBAmt, nRGBAmt, TRUE);
                    m_BLSlider.SetRange(-nRGBAmt, nRGBAmt, TRUE);
                    m_ASlider.SetRange(-nAAmt, nAAmt, TRUE);

                    nRangeFlag = (0xFF * 2) + nGameFlag;
                }
            }
            else
            {
                if (nRangeFlag != ((0xFF * 3) + nGameFlag))
                {
                    m_RHSlider.SetRange(0, 360, TRUE);
                    m_GSSlider.SetRange(-255, 255, TRUE);
                    m_BLSlider.SetRange(-100, 100, TRUE);
                    m_ASlider.SetRange(-nAAmt, nAAmt, TRUE);

                    nRangeFlag = (0xFF * 3) + nGameFlag;
                }
            }

            ResetSlider(!bModeChange);
        }

        // Games have to opt in to allow editing alpha
        bEnableAlpha = bEnableAlpha && CurrGame->AllowTransparency();
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

    GetDlgItem(IDC_BNEWCOL)->EnableWindow(nPalSelAmt);

    if (bEnableSlider != bSliderEnabled)
    {
        EnableSlider(bEnableSlider, bEnableSlider, bEnableSlider);
        bSliderEnabled = bEnableSlider;
    }

    if (bEnableAlpha != bAlphaEnabled)
    {
        m_ASlider.EnableWindow(bEnableAlpha);
        GetDlgItem(IDC_EDIT_A)->EnableWindow(bEnableAlpha);
        GetDlgItem(IDC_SPIN_A)->EnableWindow(bEnableAlpha);

        bAlphaEnabled = bEnableAlpha;
    }
}

void CPalModDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    UpdateData();

    //Update the edit control
    int* editControl = &m_Edit_RH;
    double nMul = 0.0;
    int nSliderId = pScrollBar->GetDlgCtrlID();
    CSliderCtrl* SrcScroll = (CSliderCtrl*)pScrollBar;

    switch (nSliderId)
    {
    case IDC_RH_SLIDER:
    {
        editControl = &m_Edit_RH;
        nMul = nRGBMul;
        break;
    }
    case IDC_GS_SLIDER:
    {
        editControl = &m_Edit_GS;
        nMul = nRGBMul;
        break;
    }
    case IDC_BL_SLIDER:
    {
        editControl = &m_Edit_BL;
        nMul = nRGBMul;
        break;
    }
    case IDC_A_SLIDER:
    {
        editControl = &m_Edit_A;
        nMul = nAMul;
        break;
    }
    case IDC_SPIN_RH:
    case IDC_SPIN_GS:
    case IDC_SPIN_BL:
    case IDC_SPIN_A:
        // These are handled over in OnDeltaposSpin*
        return;
    default:
        OutputDebugString(L"Bogus slider ID: bad things will happen\n");
        return;
    }

    //Update the slider undo data before changing
    if (bGetSliderUndo)
    {
        ProcChange();

        bGetSliderUndo = FALSE;
    }

    if ((nSliderId == IDC_A_SLIDER) || (nSliderId == IDC_SPIN_A))
    {
        nMul = m_fForceShowAs32bitColor ? nMul : 1;
    }
    else
    {
        nMul = m_fShowAsRGBNotHSL ? (m_fForceShowAs32bitColor ? nMul : 1) : 1;
    }

    // Note that this doesn't correctly handle NeoGeo's color table
    *editControl = (int)round(nMul * SrcScroll->GetPos());

    UpdateData(FALSE);

    //Update the selected palette indexes
    UpdatePalSel();

    CDialog::OnHScroll(nSBCode, nPos, pScrollBar);
}

void CPalModDlg::OnRadioHLS()
{
    UpdateData();
    SetShowColorsAsRGBOrHSL(FALSE);
    UpdateData(FALSE);
}

void CPalModDlg::OnRadioRGB()
{
    UpdateData();
    SetShowColorsAsRGBOrHSL(TRUE);
    UpdateData(FALSE);
}

void CPalModDlg::SetShowColorsAsRGBOrHSL(BOOL fShowAsRGB)
{
    if (m_fShowAsRGBNotHSL != fShowAsRGB)
    {
        if (nPalSelAmt == 1)
        {
            double dH, dS, dL;

            nTRGBMul = (m_fForceShowAs32bitColor ? 1 : nRGBMul);

            UpdateData();
            if (fShowAsRGB) //HLStoRGB
            {
                dH = ((double)(m_Edit_RH) / 360.0f);
                dS = ((double)(m_Edit_GS) / 255.0f);
                dL = ((double)(m_Edit_BL) / 100.0f);

                COLORREF crRGBVal = HLStoRGB(dH, dL, dS);

                if (m_fForceShowAs32bitColor)
                {
                    m_Edit_RH = GetHost()->GetCurrGame()->GetPalGroup()->ROUND_R((int)round(GetRValue(crRGBVal) / nTRGBMul));
                    m_Edit_GS = GetHost()->GetCurrGame()->GetPalGroup()->ROUND_G((int)round(GetGValue(crRGBVal) / nTRGBMul));
                    m_Edit_BL = GetHost()->GetCurrGame()->GetPalGroup()->ROUND_B((int)round(GetBValue(crRGBVal) / nTRGBMul));
                }
                else
                {
                    m_Edit_RH = (int)round(GetRValue(crRGBVal) / nTRGBMul);
                    m_Edit_GS = (int)round(GetGValue(crRGBVal) / nTRGBMul);
                    m_Edit_BL = (int)round(GetBValue(crRGBVal) / nTRGBMul);
                }
            }
            else //RGBtoHLS
            {
                COLORREF crRGBVal = RGB(
                    (int)round(m_Edit_RH * nTRGBMul),
                    (int)round(m_Edit_GS * nTRGBMul),
                    (int)round(m_Edit_BL * nTRGBMul));

                RGBtoHLS(crRGBVal, &dH, &dL, &dS);

                m_Edit_RH = (int)(dH * 360.0f);
                m_Edit_GS = (int)(dS * 255.0f);
                m_Edit_BL = (int)(dL * 100.0f);
            }

            UpdateData(FALSE);
        }
        else if (nPalSelAmt > 1)
        {
            UpdateData();

            m_Edit_RH = 0;
            m_Edit_GS = 0;
            m_Edit_BL = 0;

            UpdateData(FALSE);

            UpdateMultiEdit();
        }

        m_fShowAsRGBNotHSL = fShowAsRGB;

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

    int* editControl = &m_Edit_RH;

    int nColMax = 0;
    double nColMul = 0.0;
    int nHLSHI = 0;

    CSliderCtrl* TargetSlider = &m_RHSlider;

    int nSetFlag = nPalSelAmt;

    switch (nCtrlId)
    {
    case IDC_EDIT_RH:
    {
        editControl = &m_Edit_RH;
        TargetSlider = &m_RHSlider;

        nColMax = nRGBAmt;
        nColMul = nRGBMul;
        nHLSHI = 360;
        break;
    }
    case IDC_EDIT_GS:
    {
        editControl = &m_Edit_GS;
        TargetSlider = &m_GSSlider;

        nColMax = nRGBAmt;
        nColMul = nRGBMul;
        nHLSHI = 255;
        break;
    }
    case IDC_EDIT_BL:
    {
        editControl = &m_Edit_BL;
        TargetSlider = &m_BLSlider;

        nColMax = nRGBAmt;
        nColMul = nRGBMul;
        nHLSHI = 100;
        break;
    }
    case IDC_EDIT_A:
    {
        if (nAMul)
        {
            editControl = &m_Edit_A;
            TargetSlider = &m_ASlider;

            nColMax = nAAmt;
            nColMul = nAMul;
            nHLSHI = nColMax;
        }
        else
        {
            return;
        }
        break;
    }
    default:
        OutputDebugString(L"bogus edit control specified");
        return;
    }

    //Make sure the multiplier is set correctly
    nColMul = m_fForceShowAs32bitColor ? nColMul : 1;
    nColMul = m_fShowAsRGBNotHSL ? nColMul : 1;

    switch (nSetFlag)
    {
    case 0:
        break;
    case 1:
    {
        if (m_fShowAsRGBNotHSL)
        {
            if (m_fForceShowAs32bitColor)
            {
                *editControl = MainPalGroup->ROUND(MainPalGroup->LimitRGB(*editControl));
            }
            else
            {
                *editControl = LimitVal(*editControl, nColMax, 0);
            }
        }
        else
        {
            *editControl = LimitVal(*editControl, nHLSHI, 0);
        }
    }
    break;
    default:
    {
        if (m_fShowAsRGBNotHSL)
        {
            if (m_fForceShowAs32bitColor)
            {
                BOOL bNeg = (*editControl < 0);

                *editControl = MainPalGroup->ROUND(MainPalGroup->LimitRGB(abs(*editControl)));

                *editControl = bNeg ? *editControl - *editControl - *editControl : *editControl;
            }
            else
            {
                *editControl = LimitVal(*editControl, nColMax, -nColMax);
            }
        }
        else
        {
            *editControl = LimitVal(*editControl, nHLSHI, -nHLSHI);
        }

    }
    break;
    }

    int nOldPos = TargetSlider->GetPos();
    int nNewPos = (int)round(*editControl / nColMul);

    if (nOldPos != nNewPos)
    {
        ProcChange();

        TargetSlider->SetPos(nNewPos);

        UpdatePalSel();

        UpdateData(FALSE);
    }
}

void CPalModDlg::OnKillFocusEditRh()
{
    UpdateEditKillFocus(IDC_EDIT_RH);
}

void CPalModDlg::OnKillFocusEditGS()
{
    UpdateEditKillFocus(IDC_EDIT_GS);
}

void CPalModDlg::OnKillFocusEditBL()
{
    UpdateEditKillFocus(IDC_EDIT_BL);
}

void CPalModDlg::OnKillFocusEditA()
{
    UpdateEditKillFocus(IDC_EDIT_A);
}

void CPalModDlg::SetSliderCol(int nRH, int nGS, int nBL, int nA)
{
    nTRGBMul = (m_fForceShowAs32bitColor ? 1 : nRGBMul);
    nTAMul = (m_fForceShowAs32bitColor ? 1 : nAMul);

    if (!m_fShowAsRGBNotHSL)
    {
        double dH, dL, dS;

        RGBtoHLS(RGB(nRH, nGS, nBL), &dH, &dL, &dS);

        nRH = (int)(dH * 360.0f);
        nGS = (int)(dS * 255.0f);
        nBL = (int)(dL * 100.0f);
    }
    else
    {
        nRH = (int)round(nRH / nTRGBMul);
        nGS = (int)round(nGS / nTRGBMul);
        nBL = (int)round(nBL / nTRGBMul);
    }

    if (!nAMul)
    {
        nA = 0;
    }
    else
    {
        nA = (int)round(nA / nTAMul);
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

    if (CurrPalCtrl)
    {
        switch (nPalSelAmt)
        {
        case 0:
            break;
        case 1:
        {
            int nSingleSel = CurrPalCtrl->GetSS();
            COLORREF* crTarget = &CurrPalCtrl->GetBasePal()[nSingleSel];

            if (m_fShowAsRGBNotHSL)
            {
                MainPalGroup->SetRGBA(crTarget,
                    (int)round(m_RHSlider.GetPos() * nRGBMul),
                    (int)round(m_GSSlider.GetPos() * nRGBMul),
                    (int)round(m_BLSlider.GetPos() * nRGBMul),
                    nAVal
                );
            }
            else
            {
                MainPalGroup->SetHLSA(crTarget,
                    (double)m_RHSlider.GetPos() / 360.0f,
                    (double)m_BLSlider.GetPos() / 100.0f,
                    (double)m_GSSlider.GetPos() / 255.0f,
                    nAVal
                );
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
            COLORREF* crTarget = CurrPalCtrl->GetBasePal();
            int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
            UCHAR* uSelBuffer = CurrPalCtrl->GetSelIndex();
            COLORREF* crBasePal = &CurrPalDef->pBasePal[CurrPalSep->nStart];

            if (m_fShowAsRGBNotHSL)
            {
                for (int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
                {
                    if (uSelBuffer[nICtr])
                    {
                        MainPalGroup->SetAddRGBA(crBasePal[nICtr], &crTarget[nICtr],
                            (int)round(m_RHSlider.GetPos() * nRGBMul),
                            (int)round(m_GSSlider.GetPos() * nRGBMul),
                            (int)round(m_BLSlider.GetPos() * nRGBMul),
                            nAVal
                        );

                        CurrPalCtrl->UpdateIndex(nICtr);
                    }
                }
            }
            else
            {
                for (int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
                {
                    if (uSelBuffer[nICtr])
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

            CurrPalCtrl->UpdateCtrl();
            ImgDispCtrl->UpdateCtrl();

            bCopyFromBase = TRUE;

            //Update the change flag on the base palette
            CurrPalDef->bChanged = TRUE;
        }
        break;
        }
    }
    else if (bSetSingleCol && CurrPalCtrl)
    {
        if (nPalSelAmt)
        {
            //Get undo data based on current color

            ProcChange();

            COLORREF* crTarget = CurrPalCtrl->GetBasePal();

            int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
            UCHAR* uSelBuffer = CurrPalCtrl->GetSelIndex();

            if (m_fShowAsRGBNotHSL)
            {
                for (int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
                {
                    if (uSelBuffer[nICtr])
                    {
                        MainPalGroup->SetRGBA(&crTarget[nICtr],
                            (int)round(m_RHSlider.GetPos() * nRGBMul),
                            (int)round(m_GSSlider.GetPos() * nRGBMul),
                            (int)round(m_BLSlider.GetPos() * nRGBMul),
                            nAVal
                        );

                        CurrPalCtrl->UpdateIndex(nICtr);
                    }
                }
            }
            else
            {
                for (int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
                {
                    if (uSelBuffer[nICtr])
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

            CurrPalCtrl->UpdateCtrl();
            ImgDispCtrl->UpdateCtrl();

            //Update the change flag on the base palette
            CurrPalDef->bChanged = TRUE;
        }
    }
}

void CPalModDlg::GetSetSingleCol()
{
    if (CurrPalCtrl)
    {
        COLORREF crSrc = CurrPalCtrl->GetBasePal()[CurrPalCtrl->GetSS()];

        SetSliderCol(GetRValue(crSrc), GetGValue(crSrc), GetBValue(crSrc), GetAValue(crSrc));
        ResetSlider(FALSE);
    }
}

void CPalModDlg::UpdateMultiEdit(BOOL bForce)
{
    if (bCopyFromBase || bForce)
    {
        memcpy(CurrPalDef->pBasePal, CurrPalDef->pPal, CurrPalDef->uPalSz * sizeof(COLORREF));

        bCopyFromBase = FALSE;
    }
}

void CPalModDlg::SetSliderDescEdit()
{
    UpdateData();

    if (m_fShowAsRGBNotHSL)
    {
        m_EditRHDesc = L"R";
        m_EditGSDesc = L"G";
        m_EditBLDesc = L"B";
    }
    else
    {
        m_EditRHDesc = L"H";
        m_EditGSDesc = L"S";
        m_EditBLDesc = L"L";
    }

    UpdateData(FALSE);
}

void CPalModDlg::OnBnNewCol()
{
    CColorDialog* ColorDlg = NULL;
    int nSelAmt = CurrPalCtrl->GetSelAmt();
    DWORD colorFlags = CC_FULLOPEN | CC_RGBINIT;

    UpdateData();

    int nAVal;

    if (nAMul)
    {
        nTAMul = (m_fForceShowAs32bitColor ? 1 : nAMul);
        nAVal = min(0xFF, (int)round(m_Edit_A * nTAMul));
    }
    else
    {
        nAVal = 0xFF;
    }

    if (nSelAmt > 1)
    {
        ColorDlg = new CColorDialog(RGB(255, 255, 255), colorFlags);
    }
    else
    {
        if (m_fShowAsRGBNotHSL)
        {
            nTRGBMul = (m_fForceShowAs32bitColor ? 1 : nRGBMul);
            
            ColorDlg = new CColorDialog(RGB(
                (int)round(m_Edit_RH * nTRGBMul),
                (int)round(m_Edit_GS * nTRGBMul),
                (int)round(m_Edit_BL * nTRGBMul)),
                colorFlags);
        }
        else
        {
            double dH, dS, dL;

            dH = ((double)(m_Edit_RH) / 360.0f);
            dS = ((double)(m_Edit_GS) / 255.0f);
            dL = ((double)(m_Edit_BL) / 100.0f);

            ColorDlg = new CColorDialog(HLStoRGB(dH, dL, dS), colorFlags);
        }
    }

    UpdateData(FALSE);
    if (ColorDlg->DoModal() == IDOK)
    {
        ProcChange();

        COLORREF crNewCol = ColorDlg->GetColor();

        if (nSelAmt == 1)
        {
            SetSliderCol(
                GetRValue(crNewCol),
                GetGValue(crNewCol),
                GetBValue(crNewCol),
                nAVal);

            ResetSlider(FALSE);

            int nSelIndex = CurrPalCtrl->GetSS();
            CurrPalCtrl->GetBasePal()[nSelIndex] = (crNewCol | ((COLORREF)nAVal << 24));

            CurrPalCtrl->UpdateIndex(nSelIndex);
            CurrPalCtrl->UpdateCtrl();

            ImgDispCtrl->UpdateCtrl();

            UpdateMultiEdit(TRUE);
        }
        else
        {
            UINT8* rgSel = CurrPalCtrl->GetSelIndex();
            int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
            COLORREF* pPal = CurrPalCtrl->GetBasePal();

            for (int i = 0; i < nWorkingAmt; i++)
            {
                if (rgSel[i])
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

        SetStatusText(IDS_PASTE_FROMBUTTON);
    }

    safe_delete(ColorDlg);
}

void CPalModDlg::OnColSett()
{
    m_fForceShowAs32bitColor = !m_fForceShowAs32bitColor;
    // Currently only MvC2 has alpha support in the code as seen in the Game_%GAME%.cpp files
    nTAMul = (m_fForceShowAs32bitColor ? nAMul : ((nAMul == 0) ? 1 : nAMul));

    UpdateData();

    if (m_fShowAsRGBNotHSL)
    {
        if (m_fForceShowAs32bitColor)
        {
            m_Edit_RH = (int)round(m_Edit_RH * nRGBMul);
            m_Edit_GS = (int)round(m_Edit_GS * nRGBMul);
            m_Edit_BL = (int)round(m_Edit_BL * nRGBMul);
            m_Edit_A = (int)round(m_Edit_A * nTAMul);
        }
        else
        {
            m_Edit_RH = (int)round(m_Edit_RH / nRGBMul);
            m_Edit_GS = (int)round(m_Edit_GS / nRGBMul);
            m_Edit_BL = (int)round(m_Edit_BL / nRGBMul);
            m_Edit_A = (int)round(m_Edit_A / nTAMul);
        }
    }

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_SHOW32BITRGB, m_fForceShowAs32bitColor ? MF_CHECKED : MF_UNCHECKED);

    UpdateData(FALSE);
}

void CPalModDlg::Blink()
{
    if (bEnabled && bCanBlink)
    {
        if (ImgDispCtrl->DoWeHaveImageForIndex(nPalImgIndex))
        {
            sPalDef* srcDef =
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

    UINT8* rgSel = CurrPalCtrl->GetSelIndex();
    int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
    BOOL fSelectAll = !CurrPalCtrl->GetSelAmt();
    int nOffs = MainPalGroup->GetSep(
        MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex,
        MainPalGroup->GetRedir()[nCurrSelPal].nSepIndex
    )->nStart;

    if (nWorkingAmt)
    {
        switch (nBlinkState)
        {
        case 3:
        {
            COLORREF* pPalette =
                MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[nCurrSelPal].nDefIndex)->pPal;

            for (int i = 0; i < nWorkingAmt; i++)
            {
                if (rgSel[i] || fSelectAll)
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
            break;
        }
        case 2:
        {
            nBlinkState = 1;
            break;
        }
        case 1:
        {
            nBlinkCount--;

            if (nBlinkCount)
            {
                nBlinkState = 2;
            }
            else
            {
                nBlinkState = 0;
            }
            break;
        }
        }

        ImgDispCtrl->UpdateCtrl(bRedraw, (((nBlinkState == 1) ? (nPalImgIndex | 0xFF00) : FALSE)));


        bSetTimer ? SetTimer(TIMER_BLINK, TIMER_BLINK_ELAPSE, NULL) : NULL;
    }
    else
    {
        nBlinkState = 0;
    }
}

void CPalModDlg::OnBnRevert()
{
    if (bEnabled)
    {
        ProcChange();

        GetHost()->GetCurrGame()->Revert((int)nCurrSelPal);

        ImgDispCtrl->UpdateCtrl();

        CurrPalCtrl->UpdateIndexAll();
        CurrPalCtrl->UpdateCtrl();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();
    }
}

void CPalModDlg::OnBnClickedReverse()
{
    if (bEnabled)
    {
        UINT16 nSelectionAmt = CurrPalCtrl->GetSelAmt();

        if (nSelectionAmt != 1) // we can't flip just one color
        {
            ProcChange();

            BOOL fSelectAll = (nSelectionAmt == 0);
            const UINT16 nWorkingAmount = CurrPalCtrl->GetWorkingAmt();

            // if they want to flip all, we ignore the first transparent color
            nSelectionAmt = fSelectAll ? (nWorkingAmount - 1) : nSelectionAmt;

            UINT8* rgSel = (UINT8*)CurrPalCtrl->GetSelIndex();
            UINT8* pCurrPal = (UINT8*)CurrPalCtrl->GetBasePal();
            UINT8* pFlippedPal = new UINT8[nSelectionAmt * 4];

            // walk backwards to get the flipped ordering
            int iFlippedPos = nSelectionAmt - 1;
            for (int iCurPos = 1; iCurPos < nWorkingAmount; iCurPos++)
            {
                if (rgSel[iCurPos] || fSelectAll)
                {
                    const UINT16 nPaletteIndex = iCurPos * 4;
                    const UINT16 nFlippedIndex = iFlippedPos * 4;

                    pFlippedPal[nFlippedIndex]     = pCurrPal[nPaletteIndex];
                    pFlippedPal[nFlippedIndex + 1] = pCurrPal[nPaletteIndex + 1];
                    pFlippedPal[nFlippedIndex + 2] = pCurrPal[nPaletteIndex + 2];
                    pFlippedPal[nFlippedIndex + 3] = pCurrPal[nPaletteIndex + 3];

                    if (iFlippedPos == 0)
                    {
                        // We've traversed the list completely
                        break;
                    }
                    else
                    {
                        iFlippedPos--;
                    }                    
                }
            }

            for (int iCurPos = 1; iCurPos < nWorkingAmount; iCurPos++)
            {
                if (rgSel[iCurPos] || fSelectAll)
                {
                    const UINT16 nPaletteIndex = iCurPos * 4;
                    const UINT16 nFlippedIndex = iFlippedPos * 4;

                    pCurrPal[nPaletteIndex]     = pFlippedPal[nFlippedIndex];
                    pCurrPal[nPaletteIndex + 1] = pFlippedPal[nFlippedIndex + 1];
                    pCurrPal[nPaletteIndex + 2] = pFlippedPal[nFlippedIndex + 2];
                    pCurrPal[nPaletteIndex + 3] = pFlippedPal[nFlippedIndex + 3];

                    iFlippedPos++;

                    CurrPalCtrl->UpdateIndex(iCurPos);
                }
            }

            safe_delete_array(pFlippedPal);

            ImgDispCtrl->UpdateCtrl();

            CurrPalCtrl->UpdateCtrl();

            UpdateMultiEdit(TRUE);
            UpdateSliderSel();
        }
    }
}

void CPalModDlg::OnBnClickedBinvert()
{
    if (bEnabled)
    {
        ProcChange();

        UINT8* rgSel = (UINT8*)CurrPalCtrl->GetSelIndex();
        UINT8* pCurrPal = (UINT8*)CurrPalCtrl->GetBasePal();
        UINT16 nPaletteIndex;
        BOOL fSelectAll = !CurrPalCtrl->GetSelAmt();

        for (int i = 0; i < CurrPalCtrl->GetWorkingAmt(); i++)
        {
            if (rgSel[i] || fSelectAll)
            {
                nPaletteIndex = i * 4;

                pCurrPal[nPaletteIndex] = MainPalGroup->ROUND_R(~pCurrPal[nPaletteIndex]);
                pCurrPal[nPaletteIndex + 1] = MainPalGroup->ROUND_G(~pCurrPal[nPaletteIndex + 1]);
                pCurrPal[nPaletteIndex + 2] = MainPalGroup->ROUND_B(~pCurrPal[nPaletteIndex + 2]);

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
