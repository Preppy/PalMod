#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#include "Game\gameclass.h"
#include "RegProc.h"

void CPalModDlg::LoadSettings()
{
    CRegProc RegSett(REG_MAIN);

    //Get main program data
    CGameClass::AllowTransparency(RegSett.main_fAllowAlphaChanges);
    m_fForceShowAs32bitColor = RegSett.main_bShow32;
    CGameClass::bPostSetPalProc = RegSett.main_bProcSupp;
    m_fShowExtraCopyData = RegSett.main_bExtraCopyData;

    RECT previous_window_rect;

    GetWindowRect(&previous_window_rect);

    const LONG lPreviousDialogWidth = previous_window_rect.right - previous_window_rect.left;

    RECT window_rect;
    window_rect = RegSett.main_szpos;
    if (window_rect.top != c_badWindowPosValue)
    {
        // Do we want this?  I kind of like it.  At the same time it makes having multiple copies open at once a PITA.
        // Might be more interesting to just force PREV to a known offset.

        const LONG lNewDialogWidth = window_rect.right - window_rect.left;

        if (lPreviousDialogWidth == lNewDialogWidth)
        {
            MoveWindow(&window_rect);
        }
    }
}

void CPalModDlg::SaveSettings()
{
    CRegProc RegSett;

    RegSett.main_fAllowAlphaChanges = CGameClass::AllowTransparency();
    RegSett.main_bShow32        = m_fForceShowAs32bitColor;
    RegSett.main_bProcSupp      = CGameClass::bPostSetPalProc;
    RegSett.main_bExtraCopyData = m_fShowExtraCopyData;

    RECT window_rect;

    GetWindowRect(&window_rect);
    RegSett.main_szpos = window_rect;

    RegSett.SaveReg(REG_MAIN);
}
