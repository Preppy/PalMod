
#include "stdafx.h"
#include "PalModDlg.h"
#include "PalMod.h"

void CPalModDlg::OnLDMVC2DCUSA()
{
    if (VerifyMsg(VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(MVC2_D, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnLdMVC2PS2USA()
{
    if (VerifyMsg(VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(MVC2_P, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnLdsfiii3dcall()
{
    if (VerifyMsg(VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(SFIII3_D, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnLDSFIII3ArcadeAll()
{
    if (VerifyMsg(VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(SFIII3_A_DIR, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnLDJOJOS50()
{
    if (VerifyMsg(VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(JOJOS_A_DIR_50, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnLDJOJOS51()
{
    if (VerifyMsg(VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(JOJOS_A_DIR_51, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);
    // TODO: Add your message handler code here

    //Set the menu variables
    CMenu* m_SubFileMenu = GetMenu()->GetSubMenu(0);
    CMenu* m_SubEditMenu = GetMenu()->GetSubMenu(1);
    CMenu* m_SubSettMenu = GetMenu()->GetSubMenu(3);
    CMenu* m_SubToolMenu = GetMenu()->GetSubMenu(2);

    if (pPopupMenu == m_SubFileMenu)
    {
        pPopupMenu->EnableMenuItem(ID_FILE_PATCH, !fFileChanged);
        pPopupMenu->EnableMenuItem(ID_FILE_CLOSEFILEDIR, !(UINT32)GetHost()->GetCurrGame());
        pPopupMenu->EnableMenuItem(ID_FILE_LOADLASTUSEDDIR, !GetLastUsedDirectory(NULL, NULL, NULL, TRUE));
    }
    else if (pPopupMenu == m_SubEditMenu)
    {
        pPopupMenu->EnableMenuItem(ID_EDIT_UNDO, !UndoProc.GetUndoCount());
        pPopupMenu->EnableMenuItem(ID_EDIT_REDO, !UndoProc.GetRedoCount());

        pPopupMenu->EnableMenuItem(ID_EDIT_COPY, !m_PalHost.CurrPalAvail());
        pPopupMenu->EnableMenuItem(ID_EDIT_PASTE, !VerifyPaste());

        pPopupMenu->EnableMenuItem(ID_EDIT_SELECTALL, !m_PalHost.GetNotifyPal()->GetWorkingAmt());
        pPopupMenu->EnableMenuItem(ID_EDIT_SELECTNONE, !m_PalHost.GetNotifyPal()->GetWorkingAmt());
    }
    else if (pPopupMenu == m_SubToolMenu)
    {
        // Enable everything... but then double-check since some games have no previews available at this time.
        int i = 0, nMenuID;

        while ((nMenuID = pPopupMenu->GetMenuItemID(i)) != -1)
        {
            pPopupMenu->EnableMenuItem(nMenuID, !bEnabled);

            i++;
        }
    }
}
