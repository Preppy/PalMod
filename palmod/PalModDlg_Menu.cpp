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
        case AquaPlus_NL:
            pszExtraInfo = L"Select the main \"Aquapazza: Aquaplus Dream Match\" folder containing the flashrom folder.";
            break;
        case AquaPlus_P:
            pszExtraInfo = L"Select the main \"Aquapazza: Aquaplus Dream Match\" folder containing the USRDIR folder.";
            break;
        case BlazBlueCF_S:
            pszExtraInfo = L"Please select the BlazBlue folder: we use the files under 'data' there.";
            break;
        case DANKUGA_A:
            pszExtraInfo = L"We need the dkg_mpr* files from dankuga.zip.";
            break;
        case DBFCI_A:
            pszExtraInfo = L"For DBFCI, please select the 'games' directory.";
            break;
        case GGXXACR_S:
            pszExtraInfo = L"Guilty Gear (Steam): Select the 'Guilty Gear XX Accent Core Plus R' folder under your steam library.";
            break;
        case GGXXACR_P:
            break; 
        case GGXXR_S:
            break;
        case JOJOS_A_DIR_50:
            pszExtraInfo = L"We need the jojoba-simm5.x files from jojoba.zip.";
            break;
        case JOJOS_A_DIR_51:
        case JOJOS_US_A_DIR_51:
            pszExtraInfo = L"We need the jojoba-simm5.x files from jojoba.zip.";
            break;
        case KOF02UM_S_DIR_8888:
        case KOF02UM_S_DIR_BGR555:
        case KOF02UM_S_DIR_RGB555:
            pszExtraInfo = L"Please select the \"Data\" folder under \"The King of Fighters 2002 Unlimited Match\".";
            break;
        case MAAB_A:
            pszExtraInfo = L"For MAAB, please select the \"flashrom\" folder.\nThe folder is normally located in steamapps\\common\\Million Arthur Arcana Blood.";
            break;
        case MBAACC_S:
            pszExtraInfo = L"For MBAACC, please select the \"data\" folder.\nIf this is your first time loading MBAACC refer to the Read Me for more details.";
            break;
        case MBTL_A:
            pszExtraInfo = L"For MBTL, please select the \"MELTY BLOOD TYPE LUMINA\" folder.\nThe folder is usually in steamapps\\common. If you didn't come from the guide refer to the Read Me for more details.";
           break;
        case NBHID_NL:
        case NBHID_P:
            pszExtraInfo = L"Select the main \"Nitroplus Blasterz Heroines Infinite Duel\" folder.";
            break;
        case NBHID_S:
            pszExtraInfo = L"Select the main \"Nitroplus Blasterz Heroines Infinite Duel\" folder in your steamapps\\common directory.";
            break;
        case MVC2_A_DIR:
            pszExtraInfo = L"We need the mpr-*.* files from mvcs2.zip.";
            break;
        case MVC2_D:
        case MVC2_D_16:
            pszExtraInfo = L"We need the PLxx_DAT.bin files from the root of the game image.";
            break;
        case MVC2_P:
            pszExtraInfo = L"We need the PLxxPAK.bin files from the root of the game image.\nFor the PS3 version, select the folder \"gdrom\" under \"NPUB30068\\USRDIR\".";
            break;
        case MWARR_A:
            pszExtraInfo = L"We need the prg_ev and prg_od files from mwarr.zip.";
            break;
        case P4AU_NESICA:
            pszExtraInfo = L"Select the \"data\" folder.";
            break;
        case P4AU_STEAM:
            pszExtraInfo = L"Select the \"asset\" folder.";
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
            pszExtraInfo = L"The US version uses the sfiii3-simm1.x files from sfiii3nr1.zip.\nThe JPN version uses the sfiii3n-simm1.x files from sfiii3n.zip.\nIf you don't have sfiii3nr1.zip, the files will be in sfiii3.zip.";
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
            pszExtraInfo = L"For UNICLR, please select the \"UNDER NIGHT In-Birth Exe Late[st]\" folder.\nThe folder is normally located in steamapps\\common.";
            break;
        case VENTURE_A_DIR_31:
            pszExtraInfo = L"We need the jojo-simm3.x files from jojos.zip.";
            break;
        case VENTURE_A_DIR_50:
            pszExtraInfo = L"We need the jojo-simm5.x files from jojos.zip.";
            break;
        }

        if (SetLoadDir(&strGet, pszExtraInfo, nGameFlag))
        {
            LoadGameDir(nGameFlag, strGet.GetBuffer());
        }
    }
}

void CPalModDlg::OnInitMenuPopup(CMenu* pPopupMenu, UINT nIndex, BOOL fSysMenu)
{
    CDialog::OnInitMenuPopup(pPopupMenu, nIndex, fSysMenu);

    //Set the menu variables
    CMenu* m_SubFileMenu = GetMenu()->GetSubMenu(0);
    CMenu* m_SubEditMenu = GetMenu()->GetSubMenu(1);
    CMenu* m_SubToolMenu = GetMenu()->GetSubMenu(2);
    CMenu* m_SubSettMenu = GetMenu()->GetSubMenu(3);
    bool fIsGameAvailable = (GetHost()->GetCurrGame() != nullptr);

    if (pPopupMenu == m_SubFileMenu)
    {
        pPopupMenu->EnableMenuItem(ID_FILE_PATCH, !m_fFileChanged);
        pPopupMenu->EnableMenuItem(ID_FILE_OPENEXTRAS, !fIsGameAvailable || !GetHost()->GetCurrGame()->GameAllowsExtraFile());
        pPopupMenu->EnableMenuItem(ID_FILE_CLOSEFILEDIR, !fIsGameAvailable);
        pPopupMenu->EnableMenuItem(ID_FILE_LOADLASTUSEDDIR, !GetLastUsedPath(NULL, 0, NULL, TRUE));

        pPopupMenu->DeleteMenu(ID_FILE_CROSSPATCH, MF_BYCOMMAND);

        if (fIsGameAvailable &&
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

            uint8_t nMenuIndex = 0;
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
            case GamePlatform::OtherPlatform:
                pszPlatformName = L"Other";
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
            case GamePlatform::PGM:
                pszPlatformName = L"PolyGame Master";
                break;
            case GamePlatform::PS2:
                pszPlatformName = L"Playstation 2";
                break;
            case GamePlatform::Steam:
                pszPlatformName = L"Steam";
                break;
            case GamePlatform::DevMode:
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
        miiNew.dwTypeData = (LPWSTR)L"Load ROM by game";

        pPopupMenu->SetMenuItemInfo(ID_FILE_OPEN_BY_GAME, &miiNew, FALSE);
    }
    else if (pPopupMenu == m_SubEditMenu)
    {
        pPopupMenu->EnableMenuItem(ID_EDIT_UNDO, !UndoProc.GetUndoCount() || !fIsGameAvailable);
        pPopupMenu->EnableMenuItem(ID_EDIT_REDO, !UndoProc.GetRedoCount() || !fIsGameAvailable);

        pPopupMenu->EnableMenuItem(ID_EDIT_COPY, !m_PalHost.CurrPalAvail());
        pPopupMenu->EnableMenuItem(ID_EDIT_PASTE, !IsPasteSupported() || !fIsGameAvailable);

        // ID_EDIT_SNIFFCOPY is ok to always be available
        pPopupMenu->EnableMenuItem(ID_EDIT_SNIFFPASTE, !IsPasteSupported() || !fIsGameAvailable);

        pPopupMenu->EnableMenuItem(ID_EDIT_SELECTALL, !m_PalHost.GetNotifyPal()->GetWorkingAmt() || !fIsGameAvailable);
        pPopupMenu->EnableMenuItem(ID_EDIT_SELECTNONE, !m_PalHost.GetNotifyPal()->GetWorkingAmt() || !fIsGameAvailable);
    }
    else if (pPopupMenu == m_SubToolMenu)
    {
        // Enable everything... but then double-check since some games have no previews available at this time.
        int i = 0, nMenuID;

        while ((nMenuID = pPopupMenu->GetMenuItemID(i)) != -1)
        {
            pPopupMenu->EnableMenuItem(nMenuID, !m_fEnabled);

            i++;
        }

        // Right now we can generate patches collecting changes that are for single-binary game sets OR for the few that have had explicit multifile IPS support added
        const bool shouldEnable = m_fFileChanged && GetHost()->GetCurrGame() && GetHost()->GetCurrGame()->AllowIPSPatchGeneration();
        pPopupMenu->EnableMenuItem(ID_TOOLS_GENERATEPATCHFILE, !shouldEnable);
    }
    else if (pPopupMenu == m_SubSettMenu)
    {
        UpdateColorFormatMenu();
    }
}
