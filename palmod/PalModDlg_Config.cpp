#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#include "Game\gameclass.h"
#include "RegProc.h"

void CPalModDlg::LoadSettings()
{
    CRegProc RegSett(REG_MAIN);

    //Get main program data
    bGetCol    = RegSett.main_bGetColor;
    CGameClass::AllowTransparency(RegSett.main_fAllowAlphaChanges);
    bShow32    = RegSett.main_bShow32;
    CGameClass::bPostSetPalProc = RegSett.main_bProcSupp;
    bAutoSetCol = RegSett.main_bAutoSetCol;

    RECT window_rect;
    window_rect = RegSett.main_szpos;
    if (window_rect.top != c_badWindowPosValue)
    {
        // Do we want this?  I kind of like it.  At the same time it makes having multiple copies open at once a PITA.
        // Might be more interesting to just force PREV to a known offset.
        MoveWindow(&window_rect);
    }
}

void CPalModDlg::SaveSettings()
{
    CRegProc RegSett;

    RegSett.main_bGetColor      = bGetCol;
    RegSett.main_fAllowAlphaChanges = CGameClass::AllowTransparency();
    RegSett.main_bShow32        = bShow32;
    RegSett.main_bProcSupp      = CGameClass::bPostSetPalProc;
    RegSett.main_bAutoSetCol    = bAutoSetCol;

    RECT window_rect;

    GetWindowRect(&window_rect);
    RegSett.main_szpos = window_rect;

    RegSett.SaveReg(REG_MAIN);
}
