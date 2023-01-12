#include "stdafx.h"
#include "game\gamedef.h"
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

        switch (nGameFlag)
        {
        default:
            // No extra description: that's fine.
            break;
        case DANKUGA_A:
            pszExtraInfo = L"We need the dkg_mpr* files from dankuga.zip.";
            break;
        case LandMaker_P:
            pszExtraInfo = L"Select the \"ARC\" folder at \"DATA/ARC\" from the root of the game image.";
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

        /*
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
        }*/

        CMenu gameMenu;
        gameMenu.CreatePopupMenu();
        MENUITEMINFO mii = { 0 };

        // This code does some work to allow for dynamic submenus for Capcom, NEOGEO, and Nintendo
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

            if (((GamePlatform)nPlatform == GamePlatform::CapcomCPS12) || ((GamePlatform)nPlatform == GamePlatform::NEOGEO) || ((GamePlatform)nPlatform == GamePlatform::Nintendo))
            {
                // first pass is just the submenus
                for (const auto& sGametoFileData : g_rgGameToFileMap)
                {
                    if (sGametoFileData.publisherKey == (GamePlatform)nPlatform)
                    {
                        mii.cbSize = sizeof(MENUITEMINFO);
                        mii.fMask = MIIM_ID | MIIM_STRING;
                        mii.wID = sGametoFileData.nInternalGameIndex | k_nGameLoadROMListMask;
                        mii.dwTypeData = (LPWSTR)sGametoFileData.szGameFriendlyName;

                        if (sGametoFileData.seriesKey != (GameSeries)GameSeries::Unknown)
                        {
                            switch (sGametoFileData.seriesKey)
                            {
                            case GameSeries::MvC:
                            case GameSeries::ArtOfFighting:
                            case GameSeries::NintendoDS:
                                seriesMenu[0].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::SFA:
                            case GameSeries::FatalFury:
                            case GameSeries::NintendoGBA:
                                seriesMenu[1].InsertMenuItem(nCurrentPosition++, &mii, TRUE);
                                break;
                            case GameSeries::SF2:
                            case GameSeries::KOF:
                            case GameSeries::NintendoSNES:
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
            LPCWSTR ppszNintendoSubMenu[] = { L"DS/3DS", L"GBA", L"SNES" };

            for (const auto& sGametoFileData : g_rgGameToFileMap)
            {
                if (sGametoFileData.publisherKey == (GamePlatform)nPlatform)
                {
                    mii.cbSize = sizeof(MENUITEMINFO);
                    mii.fMask = MIIM_ID | MIIM_STRING;
                    mii.wID = sGametoFileData.nInternalGameIndex | k_nGameLoadROMListMask;
                    mii.dwTypeData = (LPWSTR)sGametoFileData.szGameFriendlyName;

                    if (((GamePlatform)nPlatform == GamePlatform::CapcomCPS12) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(seriesMenu))))
                    {
                        // This logic is used to insert our submenu mostly alphabetically
                        if ((ppszCapcomSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszCapcomSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, (UINT_PTR)seriesMenu[nMenuIndex].Detach(), ppszCapcomSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }
                    else if (((GamePlatform)nPlatform == GamePlatform::NEOGEO) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(seriesMenu))))
                    {
                        if ((ppszSNKSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszSNKSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, (UINT_PTR)seriesMenu[nMenuIndex].Detach(), ppszSNKSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }
                    else if (((GamePlatform)nPlatform == GamePlatform::Nintendo) && (nMenuIndex < min(ARRAYSIZE(seriesMenu), ARRAYSIZE(ppszNintendoSubMenu))))
                    {
                        if ((ppszNintendoSubMenu[nMenuIndex][0] <= sGametoFileData.szGameFriendlyName[0]) &&
                            (ppszNintendoSubMenu[nMenuIndex][1] <= sGametoFileData.szGameFriendlyName[1]))
                        {
                            platformMenu.AppendMenu(MF_BYPOSITION | MF_STRING | MF_POPUP, (UINT_PTR)seriesMenu[nMenuIndex].Detach(), ppszNintendoSubMenu[nMenuIndex]);
                            nMenuIndex++;
                            nCurrentPosition++;
                        }
                    }

                    if ((((GamePlatform)nPlatform == GamePlatform::CapcomCPS12) && (sGametoFileData.seriesKey == (GameSeries)GameSeries::Unknown)) ||
                        (((GamePlatform)nPlatform == GamePlatform::NEOGEO) && (sGametoFileData.seriesKey == (GameSeries)GameSeries::Unknown)) ||
                        (((GamePlatform)nPlatform == GamePlatform::Nintendo) && (sGametoFileData.seriesKey == (GameSeries)GameSeries::Unknown)) ||
                        (((GamePlatform)nPlatform != GamePlatform::CapcomCPS12) && ((GamePlatform)nPlatform != GamePlatform::NEOGEO) && ((GamePlatform)nPlatform != GamePlatform::Nintendo)))
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

            if ((GamePlatform)nPlatform == GamePlatform::DevMode)
            {
                mii.cbSize = sizeof(MENUITEMINFO);
                mii.fMask = MIIM_ID | MIIM_STRING;
                mii.wID = DEVMODE_DIR | k_nGameLoadROMListMask;
                mii.dwTypeData = (LPWSTR)L"Unknown Game Mode (Interleaved Files)";

                platformMenu.InsertMenuItem(nCurrentPosition++, &mii, TRUE);
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
