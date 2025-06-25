#include "stdafx.h"
#include "Game\GameRegistry.h"
#include "PalModDlg.h"
#include "PalMod.h"
#include "game\game_devmode_dir.h"

void CPalModDlg::OnLoadGameByUnknownFileSet()
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        wchar_t szFirstFile[MAX_PATH];

        if (CGame_DevMode_DIR::UserCreatesRules(szFirstFile))
        {
            LoadGameFile(DEVMODE_DIR, szFirstFile);
        }
    }
}

void CPalModDlg::OnLoadGameByDirectory(SupportedGamesList nGameFlag)
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        CString strGet;
        LPCWSTR pszExtraInfo = nullptr;

        static_assert(NUM_GAMES == 243, "Increment after deciding whether to add game directory loading hints.");

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
        case DaemonBride_NL:
        case DaemonBrideAG_NL:
            pszExtraInfo = L"Select the main game folder that contains the 'Flashrom' folder.";
            break;
        case DANKUGA_A:
            pszExtraInfo = L"We need the dkg_mpr* files from dankuga.zip.";
            break;
        case DBFCI_A:
            pszExtraInfo = L"For DBFCI, please select the 'games' directory.";
            break;
        case GGML_P:
            pszExtraInfo = L"Select the 'Chara' folder in the root of the game image.";
            break;
        case GGXXACP_Wii:
            pszExtraInfo = L"Guilty Gear (Wii): After extracting the ISO, load the \"SDATA\" folder.";
            break; 
        case GGXXACR_S:
        case GGXXACR_S_EXCHAR:
        case GGXXACR_S_EXTRAS:
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
        case MVC2_S_DIR:
            pszExtraInfo = L"We need the PLxx_DAT.bin files in the \'mvsc2.21D3D8A7\' folder that Paxtez's extraction tool created.";
            break;
        case CVS2_P:
            pszExtraInfo = L"We need the PLxxPAK.bin files inside the AFS02.AFS AFS archive in the PS2 folder of the game image.";
            break;
        case CVS2_D:
            pszExtraInfo = L"We need the PLxxPAK.bin files from the root of the game image.";
            break;
        case MSHVSF_P:
        case MVC_P:
            pszExtraInfo = L"We need the PLxx_xx.A0 files from the DAT folder of the game image.";
            break;
        case MVC2_P:
            pszExtraInfo = L"We need the PLxxPAK.bin files from the root of the game image.\nFor the PS3 version, select the folder \"gdrom\" under \"NPUB30068\\USRDIR\".";
            break;
        case MWARR_A:
            pszExtraInfo = L"We need the prg_ev and prg_od files from mwarr.zip.";
            break;
        case P4AU_FightClub:
            pszExtraInfo = L"Select the \"data\" folder.";
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
            pszExtraInfo = L"US version uses sfiii3-simm1.x files from sfiii3nr1.zip.\nJPN version uses sfiii3n-simm1.x files from sfiii3n.zip.\nIf you don't have sfiii3nr1.zip, the files will be in sfiii3.zip.";
            break;
        case SFIII3_A_DIR_51:
            pszExtraInfo = L"US version uses sfiii3-simm5.x files from sfiii3.zip.\nJPN version uses sfiii3n-simm5.x files from sfiii3n.zip.";
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
        case XMVSF_P:
            pszExtraInfo = L"We need the PLxx_10.BIN files from the P\\P0 folder of the game image.";
            break;
        case VENTURE_A_DIR_31:
            pszExtraInfo = L"We need the jojo-simm3.x files from jojos.zip.";
            break;
        case VENTURE_A_DIR_50:
            pszExtraInfo = L"We need the jojo-simm5.x files from jojos.zip.";
            break;
        }

        if (HaveUserPickADirectory(&strGet, pszExtraInfo, nGameFlag))
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
    const bool fIsGameAvailable = (GetHost()->GetCurrGame() != nullptr);

    if (pPopupMenu == m_SubFileMenu)
    {
        pPopupMenu->EnableMenuItem(ID_FILE_PATCH, !m_fFileChanged);
        pPopupMenu->EnableMenuItem(ID_FILE_OPENEXTRAS, !fIsGameAvailable || !GetHost()->GetCurrGame()->GameAllowsExtraFile());
        pPopupMenu->EnableMenuItem(ID_FILE_CLOSEFILEDIR, !fIsGameAvailable);
        pPopupMenu->EnableMenuItem(ID_FILE_LOADLASTUSEDDIR, !GetLastUsedPath(NULL, 0, NULL, TRUE));

        pPopupMenu->DeleteMenu(ID_FILE_CROSSPATCH_DCPS2, MF_BYCOMMAND);
        pPopupMenu->DeleteMenu(ID_FILE_CROSSPATCH_STEAM, MF_BYCOMMAND);

        if (fIsGameAvailable)
        {
            const SupportedGamesList eCurGame = GetHost()->GetCurrGame()->GetGameFlag();

            if ((eCurGame == MVC2_D) || (eCurGame == MVC2_P) || (eCurGame == MVC2_S) || (eCurGame == MVC2_S_DIR))
            {
                int iMenuPos = pPopupMenu->GetMenuItemCount() - 1;
                for (; iMenuPos >= 0; iMenuPos--)
                {
                    if (pPopupMenu->GetMenuItemID(iMenuPos) == ID_FILE_PATCH)
                    {
                        // we want our additions after "Patch changes"
                        iMenuPos++;

                        LPCWSTR pszMvC2CrossPlatform_DCPS2;

                        if (eCurGame == MVC2_D)
                        {
                            pszMvC2CrossPlatform_DCPS2 = L"Copy colors to PS2";
                        }
                        else // if ((eCurGame == MVC2_P) || (eCurGame == MVC2_S) || (eCurGame == MVC2_S_DIR))
                        {
                            pszMvC2CrossPlatform_DCPS2 = L"Copy colors to DC";
                        }

                        MENUITEMINFO mii = { 0 };

                        mii.cbSize = sizeof(MENUITEMINFO);
                        mii.fMask = MIIM_ID | MIIM_STRING;
                        mii.wID = ID_FILE_CROSSPATCH_DCPS2;
                        mii.dwTypeData = const_cast<LPWSTR>(pszMvC2CrossPlatform_DCPS2);

                        pPopupMenu->InsertMenuItem(iMenuPos, &mii, TRUE);

                        if ((eCurGame == MVC2_D) ||
                            (eCurGame == MVC2_S))
                        {
                            iMenuPos++;

                            LPCWSTR pszMvC2CrossPlatform_Steam = L"Copy colors to Steam";

                            MENUITEMINFO mii = { 0 };

                            mii.cbSize = sizeof(MENUITEMINFO);
                            mii.fMask = MIIM_ID | MIIM_STRING;
                            mii.wID = ID_FILE_CROSSPATCH_STEAM;
                            mii.dwTypeData = const_cast<LPWSTR>(pszMvC2CrossPlatform_Steam);

                            pPopupMenu->InsertMenuItem(iMenuPos, &mii, TRUE);
                        }

                        break;
                    }
                }
            }
        }

        CMenu gameMenu;
        gameMenu.CreatePopupMenu();

        std::vector<sSupportedGameToFileMap> rgGameToFileMap = KnownGameInfo::GetGameToFileMap();

        // This code does some work to allow for dynamic submenus for Capcom, NEOGEO, and Nintendo
        for (int nPlatform = static_cast<int>(GamePlatform::CapcomCPS12); nPlatform != static_cast<int>(GamePlatform::Last); nPlatform++)
        {
            int nCurrentPosition = 0;
            CMenu platformMenu;
            CMenu seriesMenu[4];

            platformMenu.CreatePopupMenu();
            seriesMenu[0].CreatePopupMenu();
            seriesMenu[1].CreatePopupMenu();
            seriesMenu[2].CreatePopupMenu();
            seriesMenu[3].CreatePopupMenu();

            if ((static_cast<GamePlatform>(nPlatform) == GamePlatform::CapcomCPS12) ||
                (static_cast<GamePlatform>(nPlatform) == GamePlatform::NEOGEO) ||
                (static_cast<GamePlatform>(nPlatform) == GamePlatform::Nintendo) ||
                (static_cast<GamePlatform>(nPlatform) == GamePlatform::Steam))
            {
                // first pass is just the submenus
                for (const auto& sGametoFileData : rgGameToFileMap)
                {
                    if (sGametoFileData.publisherKey == static_cast<GamePlatform>(nPlatform))
                    {
                        MENUITEMINFO mii = { 0 };

                        mii.cbSize = sizeof(MENUITEMINFO);
                        mii.fMask = MIIM_ID | MIIM_STRING;
                        mii.wID = sGametoFileData.nInternalGameIndex | k_nGameLoadROMListMask;
                        mii.dwTypeData = const_cast<LPWSTR>(sGametoFileData.szGameFriendlyName);

                        if (sGametoFileData.seriesKey != GameSeries::Unknown)
                        {
                            switch (sGametoFileData.seriesKey)
                            {
                            case GameSeries::CapcomFightCollection:
                            case GameSeries::MvCNormal:
                            case GameSeries::ArtOfFighting:
                            case GameSeries::NintendoDS:
                                seriesMenu[0].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::CapcomFightCollection2:
                            case GameSeries::SFA:
                            case GameSeries::FatalFury:
                            case GameSeries::NintendoGBA:
                                seriesMenu[1].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::MvCSteam:
                            case GameSeries::SF2:
                            case GameSeries::KOF:
                            case GameSeries::NintendoSNES:
                                seriesMenu[2].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::SF30th:
                            case GameSeries::SamuraiShodown:
                            case GameSeries::VampireSavior:
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
            LPCWSTR ppszNintendoSubMenu[] = { L"DS/3DS", L"GBA", L"SNES" };
            LPCWSTR ppszSteamSubMenu[] = { L"Capcom Fighting Collection",  L"Capcom Fighting Collection 2", L"Marvel vs Capcom", L"Street Fighter 30th Anniversary" };

            for (const auto& sGametoFileData : rgGameToFileMap)
            {
                if (sGametoFileData.publisherKey == static_cast<GamePlatform>(nPlatform))
                {
                    MENUITEMINFO mii = { 0 };

                    mii.cbSize = sizeof(MENUITEMINFO);
                    mii.fMask = MIIM_ID | MIIM_STRING;
                    mii.wID = sGametoFileData.nInternalGameIndex | k_nGameLoadROMListMask;
                    mii.dwTypeData = const_cast<LPWSTR>(sGametoFileData.szGameFriendlyName);

                    if ((static_cast<GamePlatform>(nPlatform) == GamePlatform::CapcomCPS12) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(seriesMenu))))
                    {
                        // This logic is used to insert our submenu mostly alphabetically
                        if ((ppszCapcomSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszCapcomSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, reinterpret_cast<UINT_PTR>(seriesMenu[nMenuIndex].Detach()), ppszCapcomSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }
                    else if ((static_cast<GamePlatform>(nPlatform) == GamePlatform::NEOGEO) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(seriesMenu))))
                    {
                        if ((ppszSNKSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszSNKSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, reinterpret_cast<UINT_PTR>(seriesMenu[nMenuIndex].Detach()), ppszSNKSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }
                    else if ((static_cast<GamePlatform>(nPlatform) == GamePlatform::Nintendo) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(ppszNintendoSubMenu))))
                    {
                        if ((ppszNintendoSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszNintendoSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, reinterpret_cast<UINT_PTR>(seriesMenu[nMenuIndex].Detach()), ppszNintendoSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }
                    else if ((static_cast<GamePlatform>(nPlatform) == GamePlatform::Steam) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(ppszSteamSubMenu))))
                    {
                        if ((ppszSteamSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszSteamSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, reinterpret_cast<UINT_PTR>(seriesMenu[nMenuIndex].Detach()), ppszSteamSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }

                    if (((static_cast<GamePlatform>(nPlatform) == GamePlatform::CapcomCPS12) && (sGametoFileData.seriesKey == GameSeries::Unknown)) ||
                        ((static_cast<GamePlatform>(nPlatform) == GamePlatform::NEOGEO) && (sGametoFileData.seriesKey == GameSeries::Unknown)) ||
                        ((static_cast<GamePlatform>(nPlatform) == GamePlatform::Nintendo) && (sGametoFileData.seriesKey == GameSeries::Unknown)) ||
                        ((static_cast<GamePlatform>(nPlatform) == GamePlatform::Steam) && (sGametoFileData.seriesKey == GameSeries::Unknown)) ||
                            ((static_cast<GamePlatform>(nPlatform) != GamePlatform::CapcomCPS12) &&
                             (static_cast<GamePlatform>(nPlatform) != GamePlatform::NEOGEO) &&
                             (static_cast<GamePlatform>(nPlatform) != GamePlatform::Nintendo) &&
                             (static_cast<GamePlatform>(nPlatform) != GamePlatform::Steam)))
                    {
                        platformMenu.InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                    }
                }
            }

            LPCWSTR pszPlatformName = L"";

            switch (static_cast<GamePlatform>(nPlatform))
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

            if (static_cast<GamePlatform>(nPlatform) == GamePlatform::DevMode)
            {
                MENUITEMINFO mii = { 0 };

                mii.cbSize = sizeof(MENUITEMINFO);
                mii.fMask = MIIM_ID | MIIM_STRING;
                mii.wID = DEVMODE_DIR | k_nGameLoadROMListMask;
                mii.dwTypeData = const_cast<LPWSTR>(L"Unknown Game Mode (Interleaved Files)");

                platformMenu.InsertMenuItem(nCurrentPosition++, &mii, TRUE);
            }

            gameMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, reinterpret_cast<UINT_PTR>(platformMenu.Detach()), pszPlatformName);
        }

        MENUITEMINFO miiNew = { 0 };
        miiNew.cbSize = sizeof(MENUITEMINFO);
        miiNew.fMask = MIIM_SUBMENU | MIIM_STRING;
        miiNew.hSubMenu = gameMenu.Detach();   // Detach() to keep the pop-up menu alive
        miiNew.dwTypeData = const_cast<LPWSTR>(L"Load ROM by game");

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
        pPopupMenu->EnableMenuItem(ID_EDIT_SNIFFPASTEWALK, !IsPasteSupported() || !fIsGameAvailable);

        pPopupMenu->EnableMenuItem(ID_EDIT_SELECTALL, !m_PalHost.GetNotifyPal()->GetWorkingAmt() || !fIsGameAvailable);
        pPopupMenu->EnableMenuItem(ID_EDIT_SELECTNONE, !m_PalHost.GetNotifyPal()->GetWorkingAmt() || !fIsGameAvailable);
    }
    else if (pPopupMenu == m_SubToolMenu)
    {
        // Enable everything... but then double-check since some games have no previews available at this time.
        int iPos = 0;
        const int iMenuEntries = pPopupMenu->GetMenuItemCount();

        while (iPos < iMenuEntries)
        {
            const int nMenuID = pPopupMenu->GetMenuItemID(iPos);
            if (nMenuID != -1) // -1 is the return for invalid entries or submenus such as the Gradient submenu
            {
                pPopupMenu->EnableMenuItem(nMenuID, m_fEnabled ? MF_ENABLED : MF_GRAYED);
            }
            iPos++;
        }

        pPopupMenu->DeleteMenu(ID_TOOLS_CHECKMVC2MIX, MF_BYCOMMAND);

        // Add in the old crusty "Check My Edits" option for Dreamcast MvC2 only
        if (fIsGameAvailable && (GetHost()->GetCurrGame()->GetGameFlag() == MVC2_D))
        {
            LPCWSTR pszMvC2MixCheck = L"Check MvC2-DC Edits Made By PalMod 1.2x";

            MENUITEMINFO mii = { 0 };

            mii.cbSize = sizeof(MENUITEMINFO);
            mii.fMask = MIIM_ID | MIIM_STRING;
            mii.wID = ID_TOOLS_CHECKMVC2MIX;
            mii.dwTypeData = const_cast<LPWSTR>(pszMvC2MixCheck);

            int iMenuPos = pPopupMenu->GetMenuItemCount() - 1;
            for (; iMenuPos >= 0; iMenuPos--)
            {
                if (pPopupMenu->GetMenuItemID(iMenuPos) == ID_TOOLS_GENERATEPATCHFILE)
                {
                    // we want it after "Generate Patch File"
                    iMenuPos++;
                    break;
                }
            }

            pPopupMenu->InsertMenuItem(iMenuPos, &mii, TRUE);
        }

        // Right now we can generate patches collecting changes that are for single-binary game sets OR for the few that have had explicit multifile IPS support added
        const bool shouldEnable = m_fFileChanged && GetHost()->GetCurrGame() && GetHost()->GetCurrGame()->AllowIPSPatchGeneration();
        pPopupMenu->EnableMenuItem(ID_TOOLS_GENERATEPATCHFILE, shouldEnable ? MF_ENABLED : MF_GRAYED);
    }
    else if (pPopupMenu == m_SubSettMenu)
    {
        UpdateColorFormatMenu();
    }
}
