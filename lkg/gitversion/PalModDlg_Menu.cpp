
#include "stdafx.h"
#include "PalModDlg.h"
#include "PalMod.h"

void CPalModDlg::OnLDMVC2DCUSA()
{
	if(VerifyMsg(VM_FILECHANGE))
	{
		CString szGet;

		if(SetLoadDir(&szGet))
		{
			LoadGameDir(MVC2_D, szGet.GetBuffer());
		}

		
	}
}


void CPalModDlg::OnLdMVC2PS2USA()
{
	if(VerifyMsg(VM_FILECHANGE))
	{
		CString szGet;

		if(SetLoadDir(&szGet))
		{
			LoadGameDir(MVC2_P, szGet.GetBuffer());
		}

		
	}
}


void CPalModDlg::OnLdsfiii3dcall()
{
	if(VerifyMsg(VM_FILECHANGE))
	{
		CString szGet;

		if(SetLoadDir(&szGet))
		{
			LoadGameDir(SFIII3_D, szGet.GetBuffer());
		}

		
	}
}



void CPalModDlg::OnBnSettings()
{
	CMenu SettMenu;
	CMenu * PopupMenu;
	POINT mousePt;
	POINT trackPt;
	CRect rBtn;
	
	GetDlgItem(IDC_BSETTINGS)->GetWindowRect(&rBtn);

	GetCursorPos(&mousePt);

	if(rBtn.PtInRect(mousePt))
	{
		trackPt.x = mousePt.x;
		trackPt.y = mousePt.y;
	}
	else
	{
		trackPt.x = rBtn.left;
		trackPt.y = rBtn.bottom;
	}


	SettMenu.LoadMenuA(IDR_COLSETT);
	PopupMenu = SettMenu.GetSubMenu(0);

	PopupMenu->CheckMenuItem(ID_SHOW32BITRGB, MF_CHECKED * bShow32);
	PopupMenu->CheckMenuItem(ID_GETCOLORONSELECT, MF_CHECKED * bGetCol);
	PopupMenu->CheckMenuItem(ID_AUTOSETCOL, MF_CHECKED * bAutoSetCol);
	
	PopupMenu->TrackPopupMenu(NULL, trackPt.x, trackPt.y, this);


}

void CPalModDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
	
	CDialog::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);
	// TODO: Add your message handler code here

	//Set the menu variables
	CMenu * m_SubFileMenu = GetMenu()->GetSubMenu(0);
	CMenu * m_SubEditMenu = GetMenu()->GetSubMenu(1);
	CMenu * m_SubSettMenu = GetMenu()->GetSubMenu(3);
	CMenu * m_SubToolMenu = GetMenu()->GetSubMenu(2);

	if(pPopupMenu == m_SubFileMenu)
	{
		pPopupMenu->EnableMenuItem(ID_FILE_PATCH, !bFileChanged);
		pPopupMenu->EnableMenuItem(ID_FILE_CLOSEFILEDIR, !(UINT32)GetHost()->GetCurrGame());
		pPopupMenu->EnableMenuItem(ID_FILE_LOADLASTUSEDDIR, !GetLastUsedDirectory(NULL, NULL, NULL, TRUE));
	}
	
	else if(pPopupMenu== m_SubEditMenu)
	{
		pPopupMenu->EnableMenuItem(ID_EDIT_UNDO, !UndoProc.GetUndoCount());
		pPopupMenu->EnableMenuItem(ID_EDIT_REDO, !UndoProc.GetRedoCount());
		
		pPopupMenu->EnableMenuItem(ID_EDIT_COPY, !m_PalHost.CurrPalAvail());
		pPopupMenu->EnableMenuItem(ID_EDIT_PASTE, !VerifyPaste());

		pPopupMenu->EnableMenuItem(ID_EDIT_SELECTALL, !m_PalHost.GetNotifyPal()->GetWorkingAmt());
		pPopupMenu->EnableMenuItem(ID_EDIT_SELECTNONE, !m_PalHost.GetNotifyPal()->GetWorkingAmt());
	}
	
	else if(pPopupMenu == m_SubToolMenu)
	{
		int i = 0, nMenuID;

		while((nMenuID = pPopupMenu->GetMenuItemID(i)) != -1)
		{
			pPopupMenu->EnableMenuItem(nMenuID, !bEnabled);

			i++;
		}
	}
	
	
}
