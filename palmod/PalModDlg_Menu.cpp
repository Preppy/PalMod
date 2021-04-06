
#include "stdafx.h"
#include "game\gamedef.h"
#include "PalModDlg.h"
#include "PalMod.h"

void CPalModDlg::OnLoadGameByDirectory(int nGameFlag)
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        CString szGet;

        if (SetLoadDir(&szGet))
        {
            LoadGameDir(nGameFlag, szGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL bSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, bSysMenu);

    //Set the menu variables
    CMenu* m_SubFileMenu = GetMenu()->GetSubMenu(0);
    CMenu* m_SubEditMenu = GetMenu()->GetSubMenu(1);
    CMenu* m_SubToolMenu = GetMenu()->GetSubMenu(2);
    CMenu* m_SubSettMenu = GetMenu()->GetSubMenu(3);

    if (pPopupMenu == m_SubFileMenu)
    {
        pPopupMenu->EnableMenuItem(ID_FILE_PATCH, !fFileChanged);
        pPopupMenu->EnableMenuItem(ID_FILE_CLOSEFILEDIR, (GetHost()->GetCurrGame() == nullptr));
        pPopupMenu->EnableMenuItem(ID_FILE_LOADLASTUSEDDIR, !GetLastUsedDirectory(NULL, 0, NULL, TRUE));

        pPopupMenu->DeleteMenu(ID_FILE_CROSSPATCH, MF_BYCOMMAND);

        if (GetHost()->GetCurrGame() &&
            ((GetHost()->GetCurrGame()->GetGameFlag() == MVC2_D) || (GetHost()->GetCurrGame()->GetGameFlag() == MVC2_P)))
        {
            LPCWSTR pszMvC2CrossPlatform;

            if (GetHost()->GetCurrGame()->GetGameFlag() == MVC2_D)
            {
                pszMvC2CrossPlatform = L"Copy colors to PS2";
            }
            else
            {
                pszMvC2CrossPlatform = L"Copy colors to DC";
            }

            MENUITEMINFO mii = { 0 };

            mii.cbSize = sizeof(MENUITEMINFO);
            mii.fMask = MIIM_ID | MIIM_STRING;
            mii.wID = ID_FILE_CROSSPATCH;
            mii.dwTypeData = (LPWSTR)pszMvC2CrossPlatform;

            int iMenuPos = pPopupMenu->GetMenuItemCount() - 1;
            for (; iMenuPos >= 0; iMenuPos--)
            {
                if (pPopupMenu->GetMenuItemID(iMenuPos) == ID_FILE_PATCH)
                {
                    // we want it after Patch changes
                    iMenuPos++;
                    break;
                }
            }

            pPopupMenu->InsertMenuItem(iMenuPos, &mii, TRUE);
        }

        CMenu gameMenu;
        gameMenu.CreatePopupMenu();
        MENUITEMINFO mii = { 0 };

        for (int nPlatform = (int)GamePlatform::CapcomCPS12; nPlatform != (int)GamePlatform::Last; nPlatform++)
        {
            int nCurrentPosition = 0;
            CMenu platformMenu;
            platformMenu.CreatePopupMenu();

            for (int nGamePos = 0; nGamePos < nNumberOfLoadROMOptions; nGamePos++)
            {
                if (pSupportedGameList[nGamePos].publisherKey == (GamePlatform)nPlatform)
                {
                    mii.cbSize = sizeof(MENUITEMINFO);
                    mii.fMask = MIIM_ID | MIIM_STRING;
                    mii.wID = pSupportedGameList[nGamePos].nInternalGameIndex | k_nGameLoadROMListMask;
                    mii.dwTypeData = (LPWSTR)pSupportedGameList[nGamePos].szGameFriendlyName;

                    platformMenu.InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                }
            }

            LPCWSTR pszPlatformName = L"";

            switch ((GamePlatform)nPlatform)
            {
            case GamePlatform::CapcomCPS12:
                pszPlatformName = L"Capcom CPS1/2";
                break;
            case GamePlatform::CapcomCPS3:
                pszPlatformName = L"Capcom CPS3";
                break;
            case GamePlatform::SammyAtomiswave:
                pszPlatformName = L"Sammy Atomiswave";
                break;
            case GamePlatform::Sega:
                pszPlatformName = L"Sega (Other)";
                break;
            case GamePlatform::SegaNAOMI:
                pszPlatformName = L"Sega NAOMI";
                break;
            case GamePlatform::NEOGEO:
                pszPlatformName = L"Neo-Geo";
                break;
            case GamePlatform::Nintendo:
                pszPlatformName = L"Nintendo";
                break;
            case GamePlatform::Steam:
                pszPlatformName = L"Steam";
                break;
            case GamePlatform::Unknown:
                pszPlatformName = L"Developer Mode";
                break;
            default:
                pszPlatformName = L"Unsupported";
                break;
            }

            gameMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, (UINT_PTR)platformMenu.Detach(), pszPlatformName);
        }

        MENUITEMINFO miiNew = { 0 };
        miiNew.cbSize = sizeof(MENUITEMINFO);
        miiNew.fMask = MIIM_SUBMENU | MIIM_STRING;
        miiNew.hSubMenu = gameMenu.Detach();   // Detach() to keep the pop-up menu alive
        miiNew.dwTypeData = L"Load ROM by game";

        pPopupMenu->SetMenuItemInfo(ID_FILE_OPEN_BY_GAME, &miiNew, FALSE);
    }
    else if (pPopupMenu == m_SubEditMenu)
    {
        pPopupMenu->EnableMenuItem(ID_EDIT_UNDO, !UndoProc.GetUndoCount());
        pPopupMenu->EnableMenuItem(ID_EDIT_REDO, !UndoProc.GetRedoCount());

        pPopupMenu->EnableMenuItem(ID_EDIT_COPY, !m_PalHost.CurrPalAvail());
        pPopupMenu->EnableMenuItem(ID_EDIT_PASTE, !IsPasteSupported());

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

        // Right now we can generate patches collecting changes that are for single-binary game sets OR for the few that have had explicit multifile IPS support added
        const bool shouldEnable = fFileChanged && GetHost()->GetCurrGame() && GetHost()->GetCurrGame()->AllowIPSPatchGeneration();
        pPopupMenu->EnableMenuItem(ID_TOOLS_GENERATEPATCHFILE, !shouldEnable);
    }
    else if (pPopupMenu == m_SubSettMenu)
    {
        UpdateColorFormatMenu();
    }
}
