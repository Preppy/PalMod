#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#include "Game\Game_MVC2_D.h"

void CPalModDlg::OnBnClickedBEidrian2()
{
    UpdateData();

    if (bRGB)
    {
        ((CGame_MVC2_D*)GetHost()->GetCurrGame())->ForEidrian(0,
            RGB(
            (int)round(m_RHSlider.GetPos() * nRMul),
                (int)round(m_GSSlider.GetPos() * nGMul),
                (int)round(m_BLSlider.GetPos() * nBMul)) | (UINT32)((m_ASlider.GetPos() * 17) << 24));
    }

    UpdateData(FALSE);
}

void CPalModDlg::OnBnClickedBEidrian1()
{
    ((CGame_MVC2_D*)GetHost()->GetCurrGame())->ForEidrian(1);
}
