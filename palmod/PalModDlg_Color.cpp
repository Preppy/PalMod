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

    GetDlgItem(IDC_BNEWCOL)->EnableWindow(RH);
}

void CPalModDlg::ResetSlider(BOOL fSetZero)
{
    UpdateData();

    if (fSetZero)
    {
        m_Edit_RH = 0;
        m_Edit_GS = 0;
        m_Edit_BL = 0;
        m_Edit_A = 0;
    }

    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (CurrGame && m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        m_RHSlider.SetPos(CurrGame->GetColorStepFor8BitValue_RGB(m_Edit_RH));
        m_GSSlider.SetPos(CurrGame->GetColorStepFor8BitValue_RGB(m_Edit_GS));
        m_BLSlider.SetPos(CurrGame->GetColorStepFor8BitValue_RGB(m_Edit_BL));
        m_ASlider.SetPos(CurrGame->GetColorStepFor8BitValue_A(m_Edit_A));
    }
    else
    {
        m_RHSlider.SetPos(m_Edit_RH);
        m_GSSlider.SetPos(m_Edit_GS);
        m_BLSlider.SetPos(m_Edit_BL);
        m_ASlider.SetPos(m_Edit_A);
    }

    UpdateData(FALSE);
}

int CPalModDlg::BoundStepBySliderRange(int nIntValue, CSliderCtrl* pSlider)
{
    int nAdjustedValue = nIntValue;
    int nMin, nMax;
    pSlider->GetRange(nMin, nMax);

    nAdjustedValue = min(nAdjustedValue, nMax);
    nAdjustedValue = max(nAdjustedValue, nMin);

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

    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        // Handle the conversion
        int nCurrentStep = CurrGame->GetColorStepFor8BitValue_RGB(m_Edit_RH);
        nCurrentStep = nCurrentStep + (-1 * pNMUpDown->iDelta);
        nCurrentStep = BoundStepBySliderRange(nCurrentStep, &m_RHSlider);
        m_Edit_RH = CurrGame->Get8BitValueForColorStep_RGB(nCurrentStep);
    }
    else
    {
        m_Edit_RH = BoundStepBySliderRange(m_Edit_RH + (-1 * pNMUpDown->iDelta), &m_RHSlider);
    }

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

    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        // Handle the conversion
        int nCurrentStep = CurrGame->GetColorStepFor8BitValue_RGB(m_Edit_GS);
        nCurrentStep = nCurrentStep + (-1 * pNMUpDown->iDelta);
        nCurrentStep = BoundStepBySliderRange(nCurrentStep, &m_GSSlider);
        m_Edit_GS = CurrGame->Get8BitValueForColorStep_RGB(nCurrentStep);
    }
    else
    {
        m_Edit_GS = BoundStepBySliderRange(m_Edit_GS + (-1 * pNMUpDown->iDelta), &m_GSSlider);
    }

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
    
    CGameClass* CurrGame = GetHost()->GetCurrGame();

    if (m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        // Handle the conversion
        int nCurrentStep = CurrGame->GetColorStepFor8BitValue_RGB(m_Edit_BL);
        nCurrentStep = nCurrentStep + (-1 * pNMUpDown->iDelta);
        nCurrentStep = BoundStepBySliderRange(nCurrentStep, &m_BLSlider);
        m_Edit_BL = CurrGame->Get8BitValueForColorStep_RGB(nCurrentStep);
    }
    else
    {
        m_Edit_BL = BoundStepBySliderRange(m_Edit_BL + (-1 * pNMUpDown->iDelta), &m_BLSlider);
    }

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
    
    if (m_fForceShowAs32bitColor)
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();

        // Handle the conversion
        int nCurrentStep = CurrGame->GetColorStepFor8BitValue_A(m_Edit_A);
        nCurrentStep = nCurrentStep + (-1 * pNMUpDown->iDelta);
        nCurrentStep = BoundStepBySliderRange(nCurrentStep, &m_ASlider);
        m_Edit_A = CurrGame->Get8BitValueForColorStep_A(nCurrentStep);
    }
    else
    {
        m_Edit_A = BoundStepBySliderRange(m_Edit_A + (-1 * pNMUpDown->iDelta), &m_ASlider);
    }

    UpdateData(FALSE);
    UpdateEditKillFocus(IDC_EDIT_A);
}

void CPalModDlg::UpdateSliderSel(BOOL fModeChange, BOOL fResetRF)
{
    // RangeFlag is a cute way for us to know whether or not we need to reset 
    // the min/max for each slider.  It's a combination of gameflag +
    // a per-display-type value.
    static int nRangeFlag = 0xFFFF;
    static BOOL fSliderEnabled = TRUE;
    static BOOL fAlphaEnabled = TRUE;

    if (fResetRF)
    {
        nRangeFlag = 0xFFFF;
    }

    BOOL fEnableSlider = FALSE;
    BOOL fEnableAlpha = FALSE;

    if (m_fEnabled && CurrPalCtrl)
    {
        CGameClass* CurrGame = GetHost()->GetCurrGame();
        const int nGameFlag = CurrGame->GetGameFlag();

        // Games have to opt in to allow editing alpha
        fEnableAlpha = CurrGame->AllowTransparency();

        m_nPalSelAmt = CurrPalCtrl->GetSelAmt();

        if (m_nPalSelAmt == 1)
        {
            fEnableSlider = TRUE;

            if (m_fShowAsRGBNotHSL)
            {
                if (nRangeFlag != (0 + nGameFlag))
                {
                    m_RHSlider.SetRange(0, m_nRGBAmt, TRUE);
                    m_GSSlider.SetRange(0, m_nRGBAmt, TRUE);
                    m_BLSlider.SetRange(0, m_nRGBAmt, TRUE);
                    m_ASlider.SetRange(0, m_nAAmt, TRUE);

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
                    m_ASlider.SetRange(0, m_nAAmt, TRUE);

                    nRangeFlag = (0xFF * 1) + nGameFlag;
                }
            }

            if (fModeChange)
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
            fEnableSlider = TRUE;

            if (m_fShowAsRGBNotHSL)
            {
                if (nRangeFlag != ((0xFF * 2) + nGameFlag))
                {
                    m_RHSlider.SetRange(-m_nRGBAmt, m_nRGBAmt, TRUE);
                    m_GSSlider.SetRange(-m_nRGBAmt, m_nRGBAmt, TRUE);
                    m_BLSlider.SetRange(-m_nRGBAmt, m_nRGBAmt, TRUE);
                    m_ASlider.SetRange(-m_nAAmt, m_nAAmt, TRUE);

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
                    m_ASlider.SetRange(-m_nAAmt, m_nAAmt, TRUE);

                    nRangeFlag = (0xFF * 3) + nGameFlag;
                }
            }

            ResetSlider(!fModeChange);
        }
    }
    else
    {
        fEnableSlider = FALSE;
        fEnableAlpha = FALSE;

        m_RHSlider.SetRange(0, 0, TRUE);
        m_GSSlider.SetRange(0, 0, TRUE);
        m_BLSlider.SetRange(0, 0, TRUE);
        m_ASlider.SetRange(0, 0, TRUE);

        ResetSlider();
    }

    GetDlgItem(IDC_BNEWCOL)->EnableWindow(m_nPalSelAmt);

    if (fEnableSlider != fSliderEnabled)
    {
        EnableSlider(fEnableSlider, fEnableSlider, fEnableSlider);
        fSliderEnabled = fEnableSlider;
    }

    if (fEnableAlpha != fAlphaEnabled)
    {
        m_ASlider.EnableWindow(fEnableAlpha);
        GetDlgItem(IDC_EDIT_A)->EnableWindow(fEnableAlpha);
        GetDlgItem(IDC_SPIN_A)->EnableWindow(fEnableAlpha);

        fAlphaEnabled = fEnableAlpha;
    }
}

void CPalModDlg::OnHScroll(UINT nSBCode, UINT nPos, CScrollBar* pScrollBar)
{
    UpdateData();

    //Update the edit control
    int* editControl = &m_Edit_RH;
    double nMul = 0.0;
    int nSliderId = pScrollBar->GetDlgCtrlID();
    CSliderCtrl* SrcScroll = reinterpret_cast<CSliderCtrl*>(pScrollBar);

    switch (nSliderId)
    {
    case IDC_RH_SLIDER:
    {
        editControl = &m_Edit_RH;
        break;
    }
    case IDC_GS_SLIDER:
    {
        editControl = &m_Edit_GS;
        break;
    }
    case IDC_BL_SLIDER:
    {
        editControl = &m_Edit_BL;
        break;
    }
    case IDC_A_SLIDER:
    {
        editControl = &m_Edit_A;
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
    if (m_fGetSliderUndo)
    {
        ProcChange();

        m_fGetSliderUndo = FALSE;
    }

    if (m_fForceShowAs32bitColor && m_fShowAsRGBNotHSL)
    {
        if (nSliderId == IDC_A_SLIDER)
        {
            *editControl = GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(SrcScroll->GetPos());
        }
        else
        {
            *editControl = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(SrcScroll->GetPos());
        }
    }
    else
    {
        *editControl = SrcScroll->GetPos();
    }

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
        if (m_nPalSelAmt == 1)
        {
            double dH, dS, dL;

            UpdateData();
            if (fShowAsRGB) //HLStoRGB
            {
                dH = (static_cast<double>(m_Edit_RH) / 360.0f);
                dS = (static_cast<double>(m_Edit_GS) / 255.0f);
                dL = (static_cast<double>(m_Edit_BL) / 100.0f);

                COLORREF crRGBVal = HLStoRGB(dH, dL, dS);

                m_Edit_RH = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(crRGBVal));
                m_Edit_GS = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(crRGBVal));
                m_Edit_BL = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(crRGBVal));

                if (!m_fForceShowAs32bitColor)
                {
                    m_Edit_RH = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(m_Edit_RH);
                    m_Edit_GS = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(m_Edit_GS);
                    m_Edit_BL = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(m_Edit_BL);
                }
            }
            else //RGBtoHLS
            {
                COLORREF crRGBVal;
                
                if (m_fForceShowAs32bitColor)
                {
                    crRGBVal = RGB(m_Edit_RH, m_Edit_GS, m_Edit_BL);
                }
                else
                {
                    uint8_t red = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_RH);
                    uint8_t green = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_GS);
                    uint8_t blue = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_BL);

                    crRGBVal = RGB(red, green, blue);
                }

                RGBtoHLS(crRGBVal, &dH, &dL, &dS);

                m_Edit_RH = static_cast<int>(round((dH * 360.0f)));
                m_Edit_GS = static_cast<int>(round((dS * 255.0f)));
                m_Edit_BL = static_cast<int>(round((dL * 100.0f)));
            }

            UpdateData(FALSE);
        }
        else if (m_nPalSelAmt > 1)
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

        SetStatusText(L"Note: conversion between RGB and HSL requires rounding!");
    }
}

void CPalModDlg::UpdateSliderPos(int nCtrlId)
{
}

void CPalModDlg::UpdateEditKillFocus(int nCtrlId)
{
    UpdateData();

    bool fGameIsLoaded = GetHost()->GetCurrGame();
    int* editControl = &m_Edit_RH;

    int nColMax = 0;
    int nHLSHI = 0;

    CSliderCtrl* TargetSlider = &m_RHSlider;

    int nSetFlag = m_nPalSelAmt;

    switch (nCtrlId)
    {
    case IDC_EDIT_RH:
    {
        editControl = &m_Edit_RH;
        TargetSlider = &m_RHSlider;

        nColMax = m_nRGBAmt;
        nHLSHI = 360;
        break;
    }
    case IDC_EDIT_GS:
    {
        editControl = &m_Edit_GS;
        TargetSlider = &m_GSSlider;

        nColMax = m_nRGBAmt;
        nHLSHI = 255;
        break;
    }
    case IDC_EDIT_BL:
    {
        editControl = &m_Edit_BL;
        TargetSlider = &m_BLSlider;

        nColMax = m_nRGBAmt;
        nHLSHI = 100;
        break;
    }
    case IDC_EDIT_A:
    {
        editControl = &m_Edit_A;
        TargetSlider = &m_ASlider;

        nColMax = m_nAAmt;
        nHLSHI = nColMax;
        break;
    }
    default:
        OutputDebugString(L"bogus edit control specified");
        return;
    }

    switch (nSetFlag)
    {
    case 0:
        break;
    case 1:
    {
        if (m_fShowAsRGBNotHSL)
        {
            if (m_fForceShowAs32bitColor && fGameIsLoaded)
            {
                if (nCtrlId == IDC_EDIT_A)
                {
                    *editControl = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(LimitRGB(*editControl));
                }
                else
                {
                    *editControl = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(LimitRGB(*editControl));
                }
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
            if (m_fForceShowAs32bitColor && fGameIsLoaded)
            {
                BOOL fNeg = (*editControl < 0);

                if (nCtrlId == IDC_EDIT_A)
                {
                    *editControl = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(LimitRGB(abs(*editControl)));
                }
                else
                {
                    *editControl = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(LimitRGB(abs(*editControl)));
                }

                *editControl = fNeg ? *editControl - *editControl - *editControl : *editControl;
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
    int nNewPos = *editControl;

    if (fGameIsLoaded)
    {
        if (m_fForceShowAs32bitColor && 
            (m_fShowAsRGBNotHSL || (nCtrlId == IDC_EDIT_A)))
        {
            if (nCtrlId == IDC_EDIT_A)
            {
                nNewPos = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_A(*editControl);
            }
            else
            {
                nNewPos = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(*editControl);
            }
        }
    }

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
    if (m_fShowAsRGBNotHSL)
    {
        if (m_fForceShowAs32bitColor)
        {
            // everything should be correct
            // ... or do we need to worry about rounding...?
        }
        else
        {
            nRH = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(nRH);
            nGS = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(nGS);
            nBL = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(nBL);
            nA = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_A(nA);
        }
    }
    else
    {
        double dH, dL, dS;

        RGBtoHLS(RGB(nRH, nGS, nBL), &dH, &dL, &dS);

        nRH = static_cast<int>(dH * 360.0f);
        nGS = static_cast<int>(dS * 255.0f);
        nBL = static_cast<int>(dL * 100.0f);

        if (!m_fForceShowAs32bitColor)
        {
            nA = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_A(nA);
        }
    }

    UpdateData();

    m_Edit_RH = nRH;
    m_Edit_GS = nGS;
    m_Edit_BL = nBL;
    m_Edit_A = nA;

    UpdateData(FALSE);
}

void CPalModDlg::UpdatePalSel(BOOL fSetSingleCol)
{
    if (CurrPalCtrl)
    {
        switch (m_nPalSelAmt)
        {
        case 1:
        {
            // Single-select
            int nSingleSel = CurrPalCtrl->GetSingleSelectIndex();
            COLORREF* crTarget = &CurrPalCtrl->GetBasePal()[nSingleSel];

            if (m_fShowAsRGBNotHSL)
            {
                MainPalGroup->SetRGBA(crTarget,
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_RHSlider.GetPos()),
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_GSSlider.GetPos()),
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_BLSlider.GetPos()),
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_ASlider.GetPos())
                );
            }
            else
            {
                MainPalGroup->SetHLSA(crTarget,
                    static_cast<double>(m_RHSlider.GetPos()) / 360.0f,
                    static_cast<double>(m_BLSlider.GetPos()) / 100.0f,
                    static_cast<double>(m_GSSlider.GetPos()) / 255.0f,
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_ASlider.GetPos())
                );
            }

            CurrPalCtrl->UpdateIndex(nSingleSel);
            CurrPalCtrl->UpdateCtrl();

            ImgDispCtrl->UpdateCtrl();

            //Update the change flag on the base palette
            CurrPalDef->fIsChanged = true;
        }
        break;
        case 0: // Nothing selected: presume full coverage
        default:
        {
            // Multi-select!
            // Since values will "bounce" 0 or max, we need to be operating off of the memory-saved pBasePal
            // as opposed to the "live" pPal values.
            // This is so that rgb(255,255,255) + 5 red - 5 red returns to rgb(255,255,255) instead of rgb(250,255,255)
            COLORREF* crTarget = CurrPalCtrl->GetBasePal();
            int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
            UCHAR* uSelBuffer = CurrPalCtrl->GetSelIndex();
            COLORREF* crBasePal = &CurrPalDef->pBasePal[CurrPalSep->nStart];

            if (m_fShowAsRGBNotHSL)
            {
                for (int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
                {
                    if (uSelBuffer[nICtr] || (m_nPalSelAmt == 0))
                    {
                        MainPalGroup->AddColorStepsToColorValue(crBasePal[nICtr], &crTarget[nICtr],
                            m_RHSlider.GetPos(),
                            m_GSSlider.GetPos(),
                            m_BLSlider.GetPos(),
                            m_ASlider.GetPos()
                        );

                        CurrPalCtrl->UpdateIndex(nICtr);
                    }
                }
            }
            else
            {
                for (int nICtr = 0; nICtr < nWorkingAmt; nICtr++)
                {
                    if (uSelBuffer[nICtr] || (m_nPalSelAmt == 0))
                    {
                        MainPalGroup->SetAddHLSA(crBasePal[nICtr], &crTarget[nICtr],
                            static_cast<double>(m_RHSlider.GetPos()) / 360.0f,
                            static_cast<double>(m_BLSlider.GetPos()) / 100.0f,
                            static_cast<double>(m_GSSlider.GetPos()) / 255.0f,
                            GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_ASlider.GetPos())
                        );

                        CurrPalCtrl->UpdateIndex(nICtr);
                    }
                }
            }

            CurrPalCtrl->UpdateCtrl();
            ImgDispCtrl->UpdateCtrl();

            m_fCopyFromBase = TRUE;

            //Update the change flag on the base palette
            CurrPalDef->fIsChanged = true;
        }
        break;
        }
    }
    else if (fSetSingleCol && CurrPalCtrl)
    {
        if (m_nPalSelAmt)
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
                            GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_RHSlider.GetPos()),
                            GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_GSSlider.GetPos()),
                            GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_BLSlider.GetPos()),
                            GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_ASlider.GetPos())
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
                            static_cast<double>(m_RHSlider.GetPos()) / 360.0f,
                            static_cast<double>(m_BLSlider.GetPos()) / 100.0f,
                            static_cast<double>(m_GSSlider.GetPos()) / 255.0f,
                            GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_ASlider.GetPos())
                        );

                        CurrPalCtrl->UpdateIndex(nICtr);
                    }
                }
            }

            CurrPalCtrl->UpdateCtrl();
            ImgDispCtrl->UpdateCtrl();

            //Update the change flag on the base palette
            CurrPalDef->fIsChanged = true;
        }
    }
}

void CPalModDlg::GetSetSingleCol()
{
    if (CurrPalCtrl)
    {
        COLORREF crSrc = CurrPalCtrl->GetBasePal()[CurrPalCtrl->GetSingleSelectIndex()];

        SetSliderCol(GetRValue(crSrc), GetGValue(crSrc), GetBValue(crSrc), GetAValue(crSrc));
        ResetSlider(FALSE);
    }
}

void CPalModDlg::UpdateMultiEdit(BOOL fForce)
{
    if (m_fCopyFromBase || fForce)
    {
        memcpy(CurrPalDef->pBasePal, CurrPalDef->pPal, CurrPalDef->uPalSz * sizeof(COLORREF));

        m_fCopyFromBase = FALSE;
    }
}

void CPalModDlg::SetSliderDescForAlpha(bool fUseAlphaNotSTB)
{
    UpdateData();

    if (fUseAlphaNotSTB)
    {
        m_EditADesc = L"A";
    }
    else
    {
        m_EditADesc = L"S";
    }

    UpdateData(FALSE);
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

    int nAVal = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_Edit_A));

    if (nSelAmt > 1)
    {
        ColorDlg = new CColorDialog(RGB(255, 255, 255), colorFlags);
    }
    else
    {
        if (m_fShowAsRGBNotHSL)
        {
            if (m_fForceShowAs32bitColor)
            {
                ColorDlg = new CColorDialog(RGB(m_Edit_RH, m_Edit_GS, m_Edit_BL), colorFlags);
            }
            else
            {
                ColorDlg = new CColorDialog(RGB(
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_RH),
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_GS),
                    GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_BL)),
                colorFlags);
            }
        }
        else
        {
            double dH, dS, dL;

            dH = (static_cast<double>(m_Edit_RH) / 360.0f);
            dS = (static_cast<double>(m_Edit_GS) / 255.0f);
            dL = (static_cast<double>(m_Edit_BL) / 100.0f);

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

            int nSelIndex = CurrPalCtrl->GetSingleSelectIndex();
            CurrPalCtrl->GetBasePal()[nSelIndex] = (crNewCol | ((COLORREF)nAVal << 24));

            CurrPalCtrl->UpdateIndex(nSelIndex);
            CurrPalCtrl->UpdateCtrl();

            ImgDispCtrl->UpdateCtrl();

            UpdateMultiEdit(TRUE);
        }
        else
        {
            uint8_t* rgSel = CurrPalCtrl->GetSelIndex();
            int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
            COLORREF* pPal = CurrPalCtrl->GetBasePal();

            for (int iPos = 0; iPos < nWorkingAmt; iPos++)
            {
                if (rgSel[iPos])
                {
                    pPal[iPos] = (crNewCol | (0x000000FF << 24));
                }

                CurrPalCtrl->UpdateIndex(iPos);
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

void CPalModDlg::OnChangeShowAs32BitColor()
{
    m_fForceShowAs32bitColor = !m_fForceShowAs32bitColor;
    // Currently only a few games have alpha setting support in the code as seen in the Game_%GAME%.cpp files

    UpdateData();

    if (m_fShowAsRGBNotHSL && GetHost()->GetCurrGame())
    {
        if (m_fForceShowAs32bitColor)
        {
            m_Edit_RH = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_RH);
            m_Edit_GS = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_GS);
            m_Edit_BL = GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(m_Edit_BL);
            m_Edit_A = GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(m_Edit_A);
        }
        else
        {
            m_Edit_RH = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(m_Edit_RH);
            m_Edit_GS = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(m_Edit_GS);
            m_Edit_BL = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(m_Edit_BL);
            m_Edit_A = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_A(m_Edit_A);
        }
    }

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_SHOW32BITRGB, m_fForceShowAs32bitColor ? MF_CHECKED : MF_UNCHECKED);

    UpdateData(FALSE);
}

void CPalModDlg::Blink()
{
    if (m_fEnabled && m_fCanBlink)
    {
        if (ImgDispCtrl->DoWeHaveImageForIndex(m_nPalImgIndex))
        {
            sPalDef* srcDef = MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[m_nCurrSelPal].nDefIndex);

            m_pTempPalCopy = new COLORREF[srcDef->uPalSz];
            memcpy(m_pTempPalCopy, srcDef->pPal, srcDef->uPalSz * sizeof(COLORREF));

            m_nBlinkCount = 2;
            m_nBlinkState = 3; //Start of blink
            m_fCanBlink = FALSE;

            m_crBlinkCol = ImgDispCtrl->GetBlinkCol() | (0xFF000000);

            ImgDispCtrl->SetBlinkPalette(m_nPalImgIndex, m_pTempPalCopy);
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
    BOOL fRedraw = FALSE;
    bool fSetTimer = false;

    uint8_t* rgSel = CurrPalCtrl->GetSelIndex();
    int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
    bool fSelectAll = (CurrPalCtrl->GetSelAmt() == 0);
    int nOffs = MainPalGroup->GetSep(
                                      MainPalGroup->GetRedir()[m_nCurrSelPal].nDefIndex,
                                      MainPalGroup->GetRedir()[m_nCurrSelPal].nSepIndex
                                     )->nStart;

    if (nWorkingAmt)
    {
        switch (m_nBlinkState)
        {
        case 3:
        {
            COLORREF* pPalette =
                MainPalGroup->GetPalDef(MainPalGroup->GetRedir()[m_nCurrSelPal].nDefIndex)->pPal;
            const BOOL fIsUsingInvertingBlink = ImgDispCtrl->GetBlinkInverts();

            for (int iPaletteIndex = 0; iPaletteIndex < nWorkingAmt; iPaletteIndex++)
            {
                if (rgSel[iPaletteIndex] || fSelectAll)
                {
                    if (fIsUsingInvertingBlink)
                    {
                        const COLORREF crBlinkColor = 0xFF000000 | (~pPalette[iPaletteIndex + nOffs]);
                        m_pTempPalCopy[iPaletteIndex + nOffs] = crBlinkColor;
                    }
                    else
                    {
                        m_pTempPalCopy[iPaletteIndex + nOffs] = m_crBlinkCol;
                    }
                }
                else
                {
                    m_pTempPalCopy[iPaletteIndex + nOffs] = pPalette[iPaletteIndex + nOffs];
                }
            }

            fSetTimer = true;
            fRedraw = TRUE;
            m_nBlinkState = 1;
            break;
        }
        case 2:
        {
            m_nBlinkState = 1;
            break;
        }
        case 1:
        {
            m_nBlinkCount--;

            if (m_nBlinkCount)
            {
                m_nBlinkState = 2;
            }
            else
            {
                m_nBlinkState = 0;
            }
            break;
        }
        }

        ImgDispCtrl->UpdateCtrl(fRedraw, (((m_nBlinkState == 1) ? (m_nPalImgIndex | 0xFF00) : FALSE)));

        if (fSetTimer)
        {
            SetTimer(TIMER_BLINK, TIMER_BLINK_ELAPSE, nullptr);
        }
    }
    else
    {
        m_nBlinkState = 0;
    }
}

void CPalModDlg::OnBnRevert()
{
    if (m_fEnabled)
    {
        ProcChange();

        GetHost()->GetCurrGame()->RevertChanges((int)m_nCurrSelPal);

        ImgDispCtrl->UpdateCtrl();

        CurrPalCtrl->UpdateIndexAll();
        CurrPalCtrl->UpdateCtrl();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();
    }
}

void CPalModDlg::RefreshSecondaryPalettesForPaletteChange()
{
    // This gets called after a palette change updates secondary palettes that are being displayed onscreen
    if (m_fEnabled)
    {
        const uint32_t nPalCount = GetHost()->GetCurrGame()->GetPalGroup()->GetPalAmt();

        if (nPalCount > 1)
        {
            // Make sure to update m_nCurrSelPath so that the UndoNodes are created for the correct palette
            for (m_nCurrSelPal = 1; m_nCurrSelPal < nPalCount; m_nCurrSelPal++)
            {
                ProcChange();

                // "Revert Changes" is refreshing from source.  That source was directly updated
                // via the PostSetPal changes, so this will update the visuals to match the new source.
                GetHost()->GetCurrGame()->RevertChanges(static_cast<int>(m_nCurrSelPal));

                m_PalHost.GetPalCtrl(m_nCurrSelPal)->UpdateIndexAll();

                m_PalHost.GetPalCtrl(m_nCurrSelPal)->UpdateCtrl();
            }

            ImgDispCtrl->UpdateCtrl();

            UpdateMultiEdit(TRUE);
            UpdateSliderSel();

            m_nCurrSelPal = 0;
        }
    }
}

void CPalModDlg::GenerateGradientForSelectedColors(ColorSystem::ColorStepFunction pGradientFunctionToUse)
{
    if (m_fEnabled)
    {
        uint16_t nSelectionAmt = CurrPalCtrl->GetSelAmt();

        if ((nSelectionAmt == 0) || (nSelectionAmt > 2)) // we need steps between the two colors
        {
            ProcChange();

            BOOL fSelectAll = (nSelectionAmt == 0);
            const uint16_t nWorkingAmount = CurrPalCtrl->GetWorkingAmt();

            // if they want to update all, we ignore the first transparent color
            nSelectionAmt = fSelectAll ? (nWorkingAmount - 1) : nSelectionAmt;

            uint8_t* rgSel = static_cast<uint8_t*>(CurrPalCtrl->GetSelIndex());
            uint8_t* pBasePal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());

            int iInitialPos = 1;

            for (; iInitialPos < nWorkingAmount; iInitialPos++)
            {
                if (rgSel[iInitialPos] || fSelectAll)
                {
                    break;
                }
            }

            int iTerminalPos = nWorkingAmount - 1;

            for (; iTerminalPos > iInitialPos; iTerminalPos--)
            {
                if (rgSel[iTerminalPos] || fSelectAll)
                {
                    break;
                }
            }

            const COLORREF colorStart = CurrPalCtrl->GetBasePal()[iInitialPos];
            const COLORREF colorFinish = CurrPalCtrl->GetBasePal()[iTerminalPos];

            for (uint16_t iPos = 1, nCurrentStep = 0; iPos < CurrPalCtrl->GetWorkingAmt(); iPos++)
            {
                if (rgSel[iPos] || fSelectAll)
                {
                    const int nPaletteIndex = iPos * 4;

                    const COLORREF colorStep = pGradientFunctionToUse(colorStart, colorFinish, nCurrentStep, nSelectionAmt - 1);
                    const double nCurrentPercent = static_cast<double>(nCurrentStep) / static_cast<double>(nSelectionAmt - 1);
                    nCurrentStep++;

                    pBasePal[nPaletteIndex] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(colorStep));
                    pBasePal[nPaletteIndex + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(colorStep));
                    pBasePal[nPaletteIndex + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(colorStep));
                    pBasePal[nPaletteIndex + 3] = static_cast<uint8_t>(round(GetAValue(colorStart) + (nCurrentPercent * (GetAValue(colorFinish) - GetAValue(colorStart)))));

                    CurrPalCtrl->UpdateIndex(iPos);
                }
            }

            ImgDispCtrl->UpdateCtrl();

            CurrPalCtrl->UpdateCtrl();

            UpdateMultiEdit(TRUE);
            UpdateSliderSel();
        }
    }
}

void CPalModDlg::OnBnClickedGradient_HSL()
{
    GenerateGradientForSelectedColors(&ColorSystem::GetGradient_HSL);
}

void CPalModDlg::OnBnClickedGradient_HSV()
{
    GenerateGradientForSelectedColors(&ColorSystem::GetGradient_HSV);
}

void CPalModDlg::OnBnClickedGradient_LAB()
{
    GenerateGradientForSelectedColors(&ColorSystem::GetGradient_LAB);
}

void CPalModDlg::OnBnClickedGradient_RGB()
{
    GenerateGradientForSelectedColors(&ColorSystem::GetGradient_RGB);
}

void CPalModDlg::OnBnClickedGradient_XYZ()
{
    GenerateGradientForSelectedColors(&ColorSystem::GetGradient_XYZ);
}

void CPalModDlg::OnBnClickedReverse()
{
    if (m_fEnabled)
    {
        uint16_t nSelectionAmt = CurrPalCtrl->GetSelAmt();

        if (nSelectionAmt != 1) // we can't flip just one color
        {
            ProcChange();

            BOOL fSelectAll = (nSelectionAmt == 0);
            const uint16_t nWorkingAmount = CurrPalCtrl->GetWorkingAmt();

            // if they want to flip all, we ignore the first transparent color
            nSelectionAmt = fSelectAll ? (nWorkingAmount - 1) : nSelectionAmt;

            uint8_t* rgSel = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetSelIndex());
            uint8_t* pCurrPal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());
            uint8_t* pFlippedPal = new uint8_t[nSelectionAmt * 4];

            // walk backwards to get the flipped ordering
            int iFlippedPos = nSelectionAmt - 1;
            for (int iCurPos = 1; iCurPos < nWorkingAmount; iCurPos++)
            {
                if (rgSel[iCurPos] || fSelectAll)
                {
                    const uint16_t nPaletteIndex = iCurPos * 4;
                    const uint16_t nFlippedIndex = iFlippedPos * 4;

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
                    const uint16_t nPaletteIndex = iCurPos * 4;
                    const uint16_t nFlippedIndex = iFlippedPos * 4;

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
    if (m_fEnabled)
    {
        ProcChange();

        uint8_t* rgSel = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetSelIndex());
        uint8_t* pCurrPal = reinterpret_cast<uint8_t*>(CurrPalCtrl->GetBasePal());
        uint16_t nPaletteIndex;
        BOOL fSelectAll = !CurrPalCtrl->GetSelAmt();

        for (int iPos = 0; iPos < CurrPalCtrl->GetWorkingAmt(); iPos++)
        {
            if (rgSel[iPos] || fSelectAll)
            {
                nPaletteIndex = iPos * 4;

                pCurrPal[nPaletteIndex]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(static_cast<uint8_t>(~pCurrPal[nPaletteIndex]));
                pCurrPal[nPaletteIndex + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(static_cast<uint8_t>(~pCurrPal[nPaletteIndex + 1]));
                pCurrPal[nPaletteIndex + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(static_cast<uint8_t>(~pCurrPal[nPaletteIndex + 2]));

                CurrPalCtrl->UpdateIndex(iPos);
            }
        }

        ImgDispCtrl->UpdateCtrl();

        //CurrPalCtrl->UpdateIndexAll();
        CurrPalCtrl->UpdateCtrl();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();
    }
}
