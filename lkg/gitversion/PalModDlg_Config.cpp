#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"

#include "Game\Game_MVC2_D.h"
#include "RegProc.h"


void CPalModDlg::LoadSettings()
{
	CRegProc RegSett(REG_MAIN);

	//Get main program data
	bGetCol	= RegSett.main_bGetColor;
	CGame_MVC2_D::bAlphaTrans = RegSett.main_bAlphaTrans;
	bShow32	= RegSett.main_bShow32;
	CGameClass::bPostSetPalProc	= RegSett.main_bProcSupp;
	bAutoSetCol = RegSett.bAutoSetCol;
}

void CPalModDlg::SaveSettings()
{
	
	CRegProc RegSett;

	RegSett.main_bGetColor		= bGetCol;
	RegSett.main_bAlphaTrans	= CGame_MVC2_D::bAlphaTrans;
	RegSett.main_bShow32		= bShow32;
	RegSett.main_bProcSupp		= CGameClass::bPostSetPalProc;;
	RegSett.bAutoSetCol = bAutoSetCol;

	RegSett.SaveReg(REG_MAIN);
	
}