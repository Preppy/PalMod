#include "stdafx.h"
#include "game\gamedef.h"
#include "PalModDlg.h"
#include "PalMod.h"

void CPalModDlg::OnLoadGameByDirectory(SupportedGamesList nGameFlag)
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        CString strGet;
        LPCWSTR pszExtraInfo = nullptr;

        switch (nGameFlag)
        {
        default:
            // No extra description: that's fine.
            break;
        case DANKUGA_A:
            pszExtraInfo = L"We need the dkg_mpr* files from dankuga.zip.";
            break;
        case DBFCI_A:
            pszExtraInfo = L"For DBFCI, please select the 'games' directory.";
            break;
        case GGXXACR_S:
            pszExtraInfo = L"For Guilty Gear (Steam), please select the \"obj\" folder under \"Resource\\pr\\ver_100\".\n\"Resource\\obj\" will not work.";
            break;
        case GGXXACR_P:
            break;
        case JOJOS_A_DIR_50:
            pszExtraInfo = L"We need the jojoba-simm5.x files from jojoba.zip.";
            break;
        case JOJOS_A_DIR_51:
            pszExtraInfo = L"We need the jojoba-simm5.x files from jojoba.zip.";
            break;
        case MBAACC_S:
            pszExtraInfo = L"For MBAACC, please select the \"data\" folder.\nIf this is your first time loading MBAACC refer to the Read Me for more details.";
            break;
        case MVC2_A_DIR:
            pszExtraInfo = L"We need the mpr-*.* files from mvcs2.zip.";
            break;
        case MVC2_D:
            pszExtraInfo = L"We need the PLxx_DAT.bin files from the root of the game image.";
            break;
        case MVC2_P:
            pszExtraInfo = L"We need the PLxxPAK.bin files from the root of the game image.\nFor the PS3 version, select the folder \"gdrom\" under \"NPUB30068\\USRDIR\".";
            break;
        case REDEARTH_A_DIR_30:
            pszExtraInfo = L"We need the redearth-simm3.x files from redearth.zip.";
            break;
        case REDEARTH_A_DIR_31:
            pszExtraInfo = L"We need the redearth-simm3.x files from redearth.zip.";
            break;
        case SFIII3_D:
            pszExtraInfo = L"We need the PLxxPL.bin files from the game image.\nFor the PS3 version, select the \"Colors\" folder under \"NPUB30301-RTM\\USRDIR\".";
            break;
        case SFIII1_A_DIR:
            pszExtraInfo = L"We need the sfiii-simm5.x files from sfiii.zip (US) or sfiiin.zip (JPN).";
            break;
        case SFIII2_A_DIR:
            pszExtraInfo = L"We need the sfiii2-simm5.x files from sfiii2.zip (US) or sfiii2n.zip (JPN).";
            break;
        case SFIII3_A_DIR_10:
            pszExtraInfo = L"For the US version we need the sfiii3-simm1.x files from sfiii3nr1.zip.\nFor the JPN version we need the sfiii3n-simm1.x files from sfiii3n.zip.\nIf you don't have sfiii3nr1.zip, the files will be in sfiii3.zip.";
            break;
        case SFIII3_A_DIR_51:
            pszExtraInfo = L"For the US version we need the sfiii3-simm5.x files from sfiii3.zip.\nFor the JPN version we need the sfiii3n-simm5.x files from sfiii3n.zip.";
            break;
        case SFIII3_A_DIR_4rd:
            pszExtraInfo = L"We need the 4rd-simm5.x files from sfiii4n.zip.";
            break;
        case SFIII3_A_DIR_4rd_10:
            pszExtraInfo = L"We need the sfiii3-simm1.x files from sfiii4n.zip.";
            break;
        case SFIII3_A_DIR_EX:
            pszExtraInfo = L"We need the sfiii3ex-simm7.x files from sfiii3ex.zip.";
            break;
        case UNICLR_A:
            break;
        }

        if (SetLoadDir(&strGet, pszExtraInfo, nGameFlag))
        {
            LoadGameDir(nGameFlag, strGet.GetBuffer());
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
        pPopupMenu->EnableMenuItem(ID_FILE_OPENEXTRAS, (GetHost()->GetCurrGame() == nullptr));
        pPopupMenu->EnableMenuItem(ID_FILE_CLOSEFILEDIR, (GetHost()->GetCurrGame() == nullptr));
        pPopupMenu->EnableMenuItem(ID_FILE_LOADLASTUSEDDIR, !GetLastUsedPath(NULL, 0, NULL, TRUE));

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

        // This code does some work to allow for dynamic submenus for Capcom and NEOGEO.
        for (int nPlatform = (int)GamePlatform::CapcomCPS12; nPlatform != (int)GamePlatform::Last; nPlatform++)
        {
            int nCurrentPosition = 0;
            CMenu platformMenu;
            CMenu seriesMenu[4];

            platformMenu.CreatePopupMenu();
            seriesMenu[0].CreatePopupMenu();
            seriesMenu[1].CreatePopupMenu();
            seriesMenu[2].CreatePopupMenu();
            seriesMenu[3].CreatePopupMenu();

            if (((GamePlatform)nPlatform == GamePlatform::CapcomCPS12) || ((GamePlatform)nPlatform == GamePlatform::NEOGEO))
            {
                // first pass is just the submenus
                for (int nGamePos = 0; nGamePos < nNumberOfLoadROMOptions; nGamePos++)
                {
                    if (pSupportedGameList[nGamePos].publisherKey == (GamePlatform)nPlatform)
                    {
                        mii.cbSize = sizeof(MENUITEMINFO);
                        mii.fMask = MIIM_ID | MIIM_STRING;
                        mii.wID = pSupportedGameList[nGamePos].nInternalGameIndex | k_nGameLoadROMListMask;
                        mii.dwTypeData = (LPWSTR)pSupportedGameList[nGamePos].szGameFriendlyName;

                        if (pSupportedGameList[nGamePos].seriesKey != (GameSeries)GameSeries::Unknown)
                        {
                            switch (pSupportedGameList[nGamePos].seriesKey)
                            {
                            case GameSeries::MvC:
                            case GameSeries::ArtOfFighting:
                                seriesMenu[0].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::SFA:
                            case GameSeries::FatalFury:
                                seriesMenu[1].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::SF2:
                            case GameSeries::KOF:
                                seriesMenu[2].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::VampireSavior:
                            case GameSeries::SamuraiShodown:
                                seriesMenu[3].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            }
                        }
                    }
                }
            }

            UINT8 nMenuIndex = 0;
            LPCWSTR ppszCapcomSubMenu[] = { L"Marvel vs Capcom", L"Street Fighter Alpha", L"Street Fighter 2", L"Vampire Savior" };
            LPCWSTR ppszSNKSubMenu[] = { L"Art of Fighting", L"Fatal Fury", L"King of Fighters", L"Samurai Shodown" };

            for (int nGamePos = 0; nGamePos < nNumberOfLoadROMOptions; nGamePos++)
            {
                if (pSupportedGameList[nGamePos].publisherKey == (GamePlatform)nPlatform)
                {
                    mii.cbSize = sizeof(MENUITEMINFO);
                    mii.fMask = MIIM_ID | MIIM_STRING;
                    mii.wID = pSupportedGameList[nGamePos].nInternalGameIndex | k_nGameLoadROMListMask;
                    mii.dwTypeData = (LPWSTR)pSupportedGameList[nGamePos].szGameFriendlyName;

                    if (((GamePlatform)nPlatform == GamePlatform::CapcomCPS12) && (nMenuIndex < ARRAYSIZE(seriesMenu)))
                    {
                        if ((ppszCapcomSubMenu[nMenuIndex][0] <= pSupportedGameList[nGamePos].szGameFriendlyName[0]) &&
                            (ppszCapcomSubMenu[nMenuIndex][1] <= pSupportedGameList[nGamePos].szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, (UINT_PTR)seriesMenu[nMenuIndex].Detach(), ppszCapcomSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }
                    else if (((GamePlatform)nPlatform == GamePlatform::NEOGEO) && (nMenuIndex < ARRAYSIZE(seriesMenu)))
                    {
                        if ((ppszSNKSubMenu[nMenuIndex][0] <= pSupportedGameList[nGamePos].szGameFriendlyName[0]) &&
                            (ppszSNKSubMenu[nMenuIndex][1] <= pSupportedGameList[nGamePos].szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, (UINT_PTR)seriesMenu[nMenuIndex].Detach(), ppszSNKSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }

                    if ((((GamePlatform)nPlatform == GamePlatform::CapcomCPS12) && (pSupportedGameList[nGamePos].seriesKey == (GameSeries)GameSeries::Unknown)) ||
                        (((GamePlatform)nPlatform == GamePlatform::NEOGEO) && (pSupportedGameList[nGamePos].seriesKey == (GameSeries)GameSeries::Unknown)) ||
                        (((GamePlatform)nPlatform != GamePlatform::CapcomCPS12) && ((GamePlatform)nPlatform != GamePlatform::NEOGEO)))
                    {
                        platformMenu.InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                    }
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
