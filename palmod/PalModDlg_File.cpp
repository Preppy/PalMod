#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#include "Game\GameRegistry.h"

constexpr auto c_strLastUsedPath = L"LastUsedPath";
constexpr auto c_strLastUsedGFlag = L"LastUsedGFlag";

void CPalModDlg::LoadGameDir(SupportedGamesList nGameFlag, wchar_t* pszLoadDir)
{
    ClearGameVar();

    CGameClass* GameGet = GetHost()->GetLoader()->LoadDir(nGameFlag, pszLoadDir);

    if (GameGet)
    {
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(pszLoadDir, GetHost()->GetCurrGame()->GetGameFlag());

        //The game has loaded OK
        PostGameLoad();
    }
    else
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_GAME))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    //Since we loaded a DIR, show status of load
    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::PostGameLoad()
{
    CPalModApp* ProgHost = GetHost();

    CString strDebugInfo;
    strDebugInfo.Format(L"CPalModDlg::PostGameLoad : Successfully loaded files for '%s'\n", KnownGameInfo::GetGameNameForGameID(ProgHost->GetCurrGame()->GetGameFlag()));
    OutputDebugString(strDebugInfo);

    //Set pal, img, and img ctrl pointers
    MainPalGroup = ProgHost->GetBasePal();
    ImgDispCtrl = ProgHost->GetImgDispCtrl();

    if (ProgHost->IsImgLoaded())
    {
        ImgFile = ProgHost->GetImgFile();
    }
    else
    {
        ImgFile = NULL;
    }

    //Get color plane data
    GetPlaneData();

    //Force the image to redisplay
    m_fForceImg = TRUE;

    //Init the first palette selection
    OnPalSelChange(0);

    //Enable the program
    Enable(TRUE);

    //Update the combo selection
    UpdateCombo();

    CPreviewDlg* PreviewDlg = GetHost()->GetPreviewDlg();

    if (!PreviewDlg->IsWindowVisible())
    {
        PreviewDlg->ShowWindow(SW_SHOW);
        PreviewDlg->m_ImgDisp.UpdateCtrl();
    }

    UpdateAppTitle();
}

void CPalModDlg::OnBnUpdate()
{
    GetHost()->GetCurrGame()->UpdatePalData();

    m_fPalChanged = FALSE;
}

void CPalModDlg::OnButtonClickCheckEdits()
{
    // Commit current changes to memory if needed
    if (m_fPalChanged)
    {
        OnBnUpdate();
    }

    GetHost()->GetCurrGame()->ValidateMixExtraColors(m_fFileChanged);
}

void CPalModDlg::OnFilePatch()
{
    // Commit current changes to memory
    if (m_fPalChanged)
    {
        OnBnUpdate();
    }

    bool fSuccess = GetHost()->GetLoader()->SaveGame(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());

    if (!GetHost()->GetLoader()->GetErrCt())
    {
        m_fFileChanged = FALSE;
    }

    if (fSuccess)
    {
        static bool s_fHaveShownOnceThisSession = false;

        if (!s_fHaveShownOnceThisSession)
        {
            s_fHaveShownOnceThisSession = true;

            // Make sure they understand the basics of what just happened
            CString strInfo;
            strInfo = L"Updated. Useful notes:\n\n"
                      L"\t * Updated files will have updated CRCs : this is expected and required.\n"
                      L"\t * If your game has multiple ZIPs, your changes won't show up until you update the right ZIP.\n"
                      L"\t * Sometimes emulators screw up and desync.  If you're playing versus somebody it can help to be on the same exact edit.  This is an emulator problem.\n"
                      ;

            SHMessageBoxCheck(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_OK | MB_ICONINFORMATION, IDOK, L"{752A4A5C-4AEF-411c-9238-3AB5B55D5877}");
        }
    }
}

void CPalModDlg::OnFileCrossPatch_DCPS2()
{
    // Do *not* clear the dirty flag if set: this isn't saving to the original game files!
    GetHost()->GetLoader()->CrosscopyGame_DCPS2(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnFileCrossPatch_Steam()
{
    // Do *not* clear the dirty flag if set: this isn't saving to the original game files!
    GetHost()->GetLoader()->CrosscopyGame_Steam(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnSavePatchFile()
{
    // Commit current changes to memory
    if (m_fPalChanged)
    {
        OnBnUpdate();
    }

    // Generate an IPS file of the current changes
    if (GetHost()->GetCurrGame()->GetIsDir())
    {
        CString strTargetDirectory;

        if (SetLoadDir(&strTargetDirectory))
        {
            GetHost()->GetLoader()->SaveMultiplePatchFiles(GetHost()->GetCurrGame(), strTargetDirectory);
        }
    }
    else
    {
        GetHost()->GetLoader()->SavePatchFile(GetHost()->GetCurrGame());
    }

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnNMReleasedCaptureAll(NMHDR* pNMHDR, LRESULT* pResult)
{
    if (m_fCurrentlyBundlingSliderActions)
    {
        // mouse is now up, indicating they are done with a set of modifications
        m_fCurrentlyBundlingSliderActions = false;
    }

    *pResult = 0;
}

// Adds to Undo/Redo list, marks palette and file as dirty
void CPalModDlg::ProcChange(BOOL fReset /* = FALSE */)
{
    if (fReset)
    {
        UndoProc.Clear();

        m_fPalChanged = FALSE;
    }
    else
    {
        UndoProc.DeleteRedoList();
        NewUndoData();

        m_fFileChanged = TRUE;
        m_fPalChanged = TRUE;
    }
}

void CPalModDlg::OnFileExit()
{
    OnClose();
}

void CPalModDlg::OnFileOpenExtrasFile()
{
    if (GetHost()->GetCurrGame() && GetHost()->GetCurrGame()->GameAllowsExtraFile())
    {
        GetHost()->GetCurrGame()->OpenExtraFile();
    }
}

void CPalModDlg::OnFileCloseFileDir()
{
    if (VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        CloseFileDir();
    }
}

void CPalModDlg::OnBnShowPrev()
{
    CPreviewDlg* PreviewDlg = GetHost()->GetPreviewDlg();
    if (!PreviewDlg->IsWindowVisible())
    {
        PreviewDlg->ShowWindow(SW_SHOW);

        PreviewDlg->m_ImgDisp.UpdateCtrl();
    }
    else
    {
        PreviewDlg->ShowWindow(SW_HIDE);
    }
}

void CPalModDlg::SetColorsPerLineTo8()
{
    CRegProc::SetColorsPerLine(PAL_MAXWIDTH_8COLORSPERLINE);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | MF_CHECKED);
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND | MF_UNCHECKED);
}

void CPalModDlg::SetColorsPerLineTo16()
{
    CRegProc::SetColorsPerLine(PAL_MAXWIDTH_16COLORSPERLINE);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | MF_UNCHECKED);
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND | MF_CHECKED);
}

void CPalModDlg::UpdateColorFormatMenu()
{
    bool canChangeFormat = false;
    bool canChangeAlpha = false;
    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    if (GetHost()->GetCurrGame())
    {
        ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
        AlphaMode currAlphaMode = GetHost()->GetCurrGame()->GetAlphaMode();
        PALWriteOutputOptions currWriteMode = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
        canChangeAlpha = canChangeFormat = GetHost()->GetCurrGame()->AllowUpdatingColorFormatForGame();

        static_assert(static_cast<ColMode>(28) == ColMode::COLMODE_LAST, "New color formats need checking/unchecking in the menus here.");
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR333, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR333) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RBG333, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RBG333) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB333_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB333) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR444) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BRG444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BRG444) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RBG444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RBG444) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB444_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB444_LE) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_xBGR555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_xBGR555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR555_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR555_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_SHARPRGB, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB555_SHARP) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BRG555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BRG555_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_GRB555_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_GRB555_LE) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB666, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB666_NEOGEO) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGR888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGR888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BRG888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BRG888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_GRB888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_GRB888) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB888, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGB888) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8881, 
            MF_BYCOMMAND | (((currColMode == ColMode::COLMODE_RGBA8881) || (currColMode == ColMode::COLMODE_RGBA8881_32STEPS))? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8887, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGBA8887) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8888_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGBA8888_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGBA8888_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_RGBA8888_LE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGRA8888_BE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGRA8888_BE) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_BGRA8888_LE, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_BGRA8888_LE) ? MF_CHECKED : MF_UNCHECKED));

        // There's no allowance for alpha with NEOGEO colors, nor with 24-bit color
        canChangeAlpha = canChangeAlpha && ColorSystem::CouldColorModeHaveAlpha(currColMode);

        pSettMenu->CheckMenuItem(ID_ALPHASETTING_FIXED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesFixedAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_VARIABLE, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesVariableAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_UNUSED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameDoesNotUseAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_CHAOTIC, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesChaoticAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_STP, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesSTPNotAlpha) ? MF_CHECKED : MF_UNCHECKED));

        pSettMenu->CheckMenuItem(ID_TRANSPSETTING_16, MF_BYCOMMAND | ((currWriteMode == PALWriteOutputOptions::WRITE_16) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_TRANSPSETTING_256, MF_BYCOMMAND | ((currWriteMode == PALWriteOutputOptions::WRITE_MAX) ? MF_CHECKED : MF_UNCHECKED));

        // jump through some minor hoops to get the bitness popup menus checked appropriately...
        const int nMenuOptions = pSettMenu->GetMenuItemCount();

        for (int nCurrentMenu = 0; nCurrentMenu < nMenuOptions; nCurrentMenu++)
        {
            CString strMenuText;

            pSettMenu->GetMenuString(nCurrentMenu, strMenuText, MF_BYPOSITION);

            if (strMenuText == L"Color Format")
            {
                CMenu* pColorFormatMenu = pSettMenu->GetSubMenu(nCurrentMenu); //3 = settings menu

                const int nCFMenuOptions = pColorFormatMenu->GetMenuItemCount();
                uint8_t cbColorSize = ColorSystem::GetCbForColMode(currColMode);

                for (int nCFMItem = 0; nCFMItem < nCFMenuOptions; nCFMItem++)
                {
                    pColorFormatMenu->GetMenuString(nCFMItem, strMenuText, MF_BYPOSITION);
                    if (strMenuText == L"16-bit color")
                    {
                        pColorFormatMenu->CheckMenuItem(nCFMItem, MF_BYPOSITION | ((cbColorSize == 2) ? MF_CHECKED : MF_UNCHECKED));
                    }
                    else if (strMenuText == L"24-bit color")
                    {
                        pColorFormatMenu->CheckMenuItem(nCFMItem, MF_BYPOSITION | ((cbColorSize == 3) ? MF_CHECKED : MF_UNCHECKED));
                    }
                    else if (strMenuText == L"32-bit color")
                    {
                        pColorFormatMenu->CheckMenuItem(nCFMItem, MF_BYPOSITION | ((cbColorSize == 4) ? MF_CHECKED : MF_UNCHECKED));
                    }
                }
                break;
            }
        }
    }

    static_assert(static_cast<ColMode>(28) == ColMode::COLMODE_LAST, "New color formats need enabling/disabling in the menus here.");
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR333, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RBG333, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB333_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BRG444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RBG444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR555_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BRG555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_GRB555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_xBGR555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_SHARPRGB, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB666, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGR888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BRG888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_GRB888, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB888, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8881, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8887, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8888_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGBA8888_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGRA8888_BE, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_BGRA8888_LE, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_ALPHASETTING_FIXED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_UNUSED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_VARIABLE, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_STP, MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_CHAOTIC, MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_TRANSPSETTING_16, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_TRANSPSETTING_256, canChangeFormat ? MF_ENABLED : MF_DISABLED);
}

void CPalModDlg::SetAlphaModeTo(AlphaMode newAlphaMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetAlphaMode(newAlphaMode);
        // Reset for new settings as needed
        PostGameLoad();
    }
}

void CPalModDlg::SetColorFormatTo(ColMode newColMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetColorMode(newColMode);
        // Reset for new settings as needed
        PostGameLoad();
    }
}

void CPalModDlg::SetMaximumWritePerEachTransparency(PALWriteOutputOptions eUpdatedOption)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetMaximumWritePerEachTransparency(eUpdatedOption);
    }
}

void CPalModDlg::LoadLastDir()
{
    SupportedGamesList nLastUsedGFlag = NUM_GAMES;
    BOOL fIsDir;
    wchar_t szLastDir[MAX_PATH];

    if (GetLastUsedPath(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &fIsDir))
    {
        if (VerifyMsg(eVerifyType::VM_FILECHANGE)) // Save current changes if needed
        {
            if ((nLastUsedGFlag >= NUM_GAMES) || (nLastUsedGFlag < 0))
            {
                CString strError;
                if (strError.LoadString(IDS_ERROR_PARAMETERS))
                {
                    MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
                }
                return;
            }
            else
            {
                if (fIsDir)
                {
                    LoadGameDir(nLastUsedGFlag, szLastDir);
                }
                else
                {
                    LoadGameFile(nLastUsedGFlag, szLastDir);
                }
            }
        }
    }
    else
    {
        // No previous game information: give them the normal prompts.
        OnFileOpen();
    }
}

int CALLBACK CPalModDlg::OnBrowseDialog(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData)
{
    switch (uMsg)
    {
    case BFFM_INITIALIZED:
    {
        wchar_t szPath[MAX_PATH];
        BOOL fIsDir = FALSE;
        SupportedGamesList nDefaultGameFlag = (SupportedGamesList)lpData;

        if (GetLastUsedPath(szPath, sizeof(szPath), &nDefaultGameFlag, FALSE, &fIsDir))
        {
            if (!fIsDir)
            {
                // We're pointing at a file, so switch over to the path
                LPWSTR pszSlash = wcsrchr(szPath, L'\\');

                if (pszSlash)
                {
                    pszSlash[0] = 0;
                }
            }

            ::SendMessage(hwnd, BFFM_SETSELECTION, TRUE, (LPARAM)szPath);
        }
        break;
    }
    default:
        break;
    }

    return 0;
}

void CPalModDlg::SetLastUsedDirectory(LPCWSTR pszPath, SupportedGamesList nGameFlag)
{
    if (pszPath != nullptr)
    {
        HKEY hKey = nullptr;

        //Set the directory / Game Flag
        if (ERROR_SUCCESS == RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, nullptr, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_SET_VALUE, NULL, &hKey, NULL))
        {
            CString strPerGameString;

            strPerGameString.Format(L"%s_%u", c_strLastUsedPath, nGameFlag);
            RegSetValueEx(hKey, strPerGameString, 0, REG_SZ, reinterpret_cast<const BYTE *>(pszPath), static_cast<DWORD>(wcslen(pszPath) + 1) * sizeof(wchar_t));
            RegSetValueEx(hKey, c_strLastUsedPath, 0, REG_SZ, reinterpret_cast<const BYTE *>(pszPath), static_cast<DWORD>(wcslen(pszPath) + 1) * sizeof(wchar_t));
            RegSetValueEx(hKey, c_strLastUsedGFlag, 0, REG_DWORD, reinterpret_cast<LPBYTE>(&nGameFlag), static_cast<DWORD>(sizeof(int)));

            RegCloseKey(hKey);
        }
    }

    return;
}

BOOL CPalModDlg::GetLastUsedPath(LPWSTR pszPath, DWORD cbSize, SupportedGamesList* nGameFlag, BOOL fCheckOnly, BOOL* pfIsDir)
{
    BOOL fFound = FALSE;
    HKEY hKey = nullptr;

    if (ERROR_SUCCESS == RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey))
    {
        DWORD dwRegType = REG_SZ;
        wchar_t szPath[MAX_PATH] = {};
        DWORD cbDataSize = sizeof(szPath);

        //Get the directory: tune to the last usage of the current game if desired and possible
        for (int nPass = 0; (nPass < 2) && !fFound; nPass++)
        {
            cbDataSize = sizeof(szPath);

            CString strPerGameString;

            if (nPass == 0)
            {
                if ((nGameFlag) && (*nGameFlag != NUM_GAMES))
                {
                    strPerGameString.Format(L"%s_%u", c_strLastUsedPath, *nGameFlag);
                }
                else
                {
                    continue;
                }
            }
            else
            {
                strPerGameString = c_strLastUsedPath;
            }

            if ((ERROR_SUCCESS == RegQueryValueEx(hKey, strPerGameString, 0, &dwRegType, reinterpret_cast<LPBYTE>(szPath), &cbDataSize))
                && (REG_SZ == dwRegType))
            {
                if (fCheckOnly)
                {
                    fFound = TRUE;
                }
                else
                {
                    GetHost()->GetPalModDlg()->SetStatusText(L"Checking file...");
                    DWORD dwAttribs = GetFileAttributes(szPath);

                    if (INVALID_FILE_ATTRIBUTES != dwAttribs)
                    {
                        if (pfIsDir)
                        {
                            //Check to see if it's actually a file without an extension
                            *pfIsDir = (dwAttribs & FILE_ATTRIBUTE_DIRECTORY);
                        }

                        // This code used to be testing for (dwAttribs & FILE_ATTRIBUTE_ARCHIVE), but I don't think we need that currently.
                        wcscpy(pszPath, szPath);
                        fFound = TRUE;
                    }

                    // Reset now that we're loaded
                    GetHost()->GetPalModDlg()->SetStatusText(L"");
                }
            }
        }

        //Grab the game flag
        if (nGameFlag)
        {
            *nGameFlag = NUM_GAMES;

            dwRegType = REG_DWORD;
            cbDataSize = sizeof(int);

            if ((ERROR_SUCCESS == RegQueryValueEx(hKey, c_strLastUsedGFlag, 0, &dwRegType, reinterpret_cast<LPBYTE>(nGameFlag), &cbDataSize)))
            {
                //fFound = TRUE;
            }
        }

        RegCloseKey(hKey);
    }

    return(fFound);
}

void CPalModDlg::OnSetFocus(CWnd* pOldWnd)
{
    CDialog::OnSetFocus(pOldWnd);

    // TODO: Add your message handler code here
}

void CPalModDlg::OnActivate(UINT nState, CWnd* pWndOther, BOOL fMinimized)
{
    CDialog::OnActivate(nState, pWndOther, fMinimized);

    // TODO: Add your message handler code here
}

void CPalModDlg::OnFileOpenInternal(UINT nDefaultGameFilter /* = NUM_GAMES */)
{
    CString szGameFileDef = L"";

    nDefaultGameFilter = nDefaultGameFilter & 0xffff; // eliminate the applied mask (k_nGameLoadROMListMask, 0xf0000) that we use to avoid existing menu items

    // The following logic ensures that their last used selection is the default filter view.
    SupportedGamesList nLastUsedGFlag = (SupportedGamesList)nDefaultGameFilter;

    // Special allowance so that the user can see both file loading modes in the Load by ROM menu
    if (nDefaultGameFilter == DEVMODE_DIR)
    {
        return OnLoadGameByUnknownFileSet();
    }

    wchar_t szLastDir[MAX_PATH];
    BOOL fIsDir = FALSE;
    bool fHaveLastUsedPath = GetLastUsedPath(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &fIsDir);

    if (nLastUsedGFlag == NUM_GAMES)
    {
        if (!fHaveLastUsedPath)
        {
            // If we're here, that means that they have never used PalMod to load a game before.  Help them.
            CString strInfo;
            LPCWSTR pszParagraph1 = L"Howdy!  You appear to be new to PalMod.  Welcome!\n\n";
            LPCWSTR pszParagraph2 = L"The first step is to load the ROM for the game you care about. There are a lot of game ROMs out there: the filter in the bottom right of the Load ROM dialog that you will see next helps show the right one for your game.\n\n";

            wchar_t szGameFilter[MAX_DESCRIPTION_LENGTH];
            wcsncpy(szGameFilter, KnownGameInfo::GetGameToFileMap().at(0).szGameFilterString, ARRAYSIZE(szGameFilter));
            szGameFilter[MAX_DESCRIPTION_LENGTH - 1] = 0;

            LPTSTR pszPipe = wcsstr(szGameFilter, L"|");

            if (pszPipe != nullptr)
            {
                // Truncate off the filter information
                pszPipe[0] = 0;
            }

            strInfo.Format(L"%s%sRight now this is going to be set to \'%s\' for the default game, \'%s\': you need to change that to the game you're interested in so that your ROM shows up.", pszParagraph1, pszParagraph2, szGameFilter, KnownGameInfo::GetGameNameForGameID(KnownGameInfo::GetGameToFileMap().at(0).nInternalGameIndex));
            MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }
    else
    {
        // If there wasn't a specfic filter requested, use the last used game flag
        if (nDefaultGameFilter == NUM_GAMES)
        {
            nDefaultGameFilter = nLastUsedGFlag;
        }
    }

    DWORD dwLastUsedGameIndex = 0;

    std::vector<sSupportedGameToFileMap> rgGameToFileMap = KnownGameInfo::GetGameToFileMap();

    // Add all the games, and make sure we know how to map index to game code
    for (int nArrayPosition = 0; nArrayPosition < static_cast<int>(rgGameToFileMap.size()); nArrayPosition++)
    {
        szGameFileDef.Append(rgGameToFileMap.at(nArrayPosition).szGameFilterString);
        rgGameToFileMap.at(nArrayPosition).nListedGameIndex = nArrayPosition;

        if (rgGameToFileMap.at(nArrayPosition).nInternalGameIndex == nDefaultGameFilter)
        {
            // user nFilterIndex starts at 1
            dwLastUsedGameIndex = rgGameToFileMap.at(nArrayPosition).nListedGameIndex + 1;
        }
    }

    szGameFileDef.Append(L"|"); //End

    CFileDialog OpenDialog(
        TRUE,
        NULL,
        NULL,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY,
        szGameFileDef
    );

    OPENFILENAME &pOFN = OpenDialog.GetOFN();

    pOFN.nFilterIndex = dwLastUsedGameIndex;

    if (fHaveLastUsedPath)
    {
        if (!fIsDir)
        {
            // We're pointing at a file, so switch over to the path
            LPWSTR pszSlash = wcsrchr(szLastDir, L'\\');

            if (pszSlash)
            {
                pszSlash[0] = 0;
            }
        }

        pOFN.lpstrInitialDir = szLastDir;
    }

    if (OpenDialog.DoModal() == IDOK)
    {
        bool fSafeToContinue = true;
        OPENFILENAME ofn = OpenDialog.GetOFN();

        if (ofn.nFileExtension != 0)
        {
            if ((_wcsicmp(ofn.lpstrFile + ofn.nFileExtension, L"rar") == 0) ||
                (_wcsicmp(ofn.lpstrFile + ofn.nFileExtension, L"zip") == 0))
            {
                CString strInfo = L"PalMod cannot use RAR or ZIP compressed files.  You must first extract out the files from those archives.  Then point PalMod to the files inside.\n\nAre you sure you wish to continue?";
                if (MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONWARNING | MB_YESNO | MB_DEFBUTTON2) != IDYES)
                {
                    fSafeToContinue = false;
                }
            }
        }

        if (fSafeToContinue)
        {
            for (const sSupportedGameToFileMap& currentGame : rgGameToFileMap)
            {
                // user nFilterIndex starts at 1
                if ((currentGame.nListedGameIndex + 1) == ofn.nFilterIndex)
                {
                    LoadGameFile(static_cast<SupportedGamesList>(currentGame.nInternalGameIndex), static_cast<wchar_t*>(ofn.lpstrFile));
                    break;
                }
            }
        }
    }
}

void CPalModDlg::LoadGameFile(SupportedGamesList nGameFlag, wchar_t* pszFile)
{
    if (!VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        return;
    }

    ClearGameVar();

    CGameClass* GameGet = GetHost()->GetLoader()->LoadFile(nGameFlag, pszFile);

    if (GameGet)
    {
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(pszFile, GetHost()->GetCurrGame()->GetGameFlag());

        //The game has loaded OK
        PostGameLoad();
    }
    else
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_GAME))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
    }

    //Since we loaded a DIR, show status of load
    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnBnBlink()
{
    Blink();
}

void CPalModDlg::OnImportPalette()
{
    // This handles palette import via the Tools menu: CPalDropTarget::OnDrop is the drag/drop version
    if (m_fEnabled)
    {
        static LPCWSTR rgszBBCFOpenFilter[] = { L"Supported Palette Files|*.act;*.bmp;*.gif;*.png;*.pal;*.gpl;*.hpl;*.cfpl|"
                                                L"ACT Palette|*.act|"
                                                L"Indexed PNG|*.png|"
                                                L"Microsoft PAL|*.pal|"
                                                L"Upside-down ACT Palette|*.act|"
                                                L"Upside-down Indexed PNG|*.png|"
                                                L"Indexed BMP|*.bmp|"
                                                L"GIF|*.gif|"
                                                L"GIMP palette file|*.gpl|"
                                                L"HipPalette|*.hpl|"
                                                L"BBCF palette set|*.cfpl|"
                                                L"BBTAG palette set|*.impl|"
                                                L"|" };

        static LPCWSTR rgszSF3OpenFilter[] = { L"Supported Palette Files|*.act;*.bmp;*.gif;*.png;*.pal;*txt.dat;*.gpl;*.hpl|"
                                               L"ACT Palette|*.act|"
                                               L"Indexed PNG|*.png|"
                                               L"Microsoft PAL|*.pal|"
                                               L"Upside-down ACT Palette|*.act|"
                                               L"Upside-down Indexed PNG|*.png|"
                                               L"Indexed BMP|*.bmp|"
                                               L"GIF|*.gif|"
                                               L"PS3 SF3::OE color file|*.txt.dat|"
                                               L"GIMP palette file|*.gpl|"
                                               L"HipPalette|*.hpl|"
                                               L"|" };

        static LPCWSTR rgszOpenFilter[] = { L"Supported Palette Files|*.act;*.bmp;*.gif;*.png;*.pal;*.gpl;*.hpl|"
                                            L"ACT Palette|*.act|"
                                            L"Indexed PNG|*.png|"
                                            L"Microsoft PAL|*.pal|"
                                            L"Upside-down ACT Palette|*.act|"
                                            L"Upside-down Indexed PNG|*.png|"
                                            L"Indexed BMP|*.bmp|"
                                            L"GIF|*.gif|"
                                            L"GIMP palette file|*.gpl|"
                                            L"HipPalette|*.hpl|"
                                            L"|" };

        LPCWSTR pszFilterInUse = nullptr;

        switch (GetHost()->GetCurrGame()->GetGameFlag())
        {
            case SFIII3_A:
            case SFIII3_D:
            case SFIII3_A_DIR_51:
            case SFIII2_A:
            case SFIII1_A:
            case SFIII3_A_DIR_10:
            case SFIII3_A_DIR_4rd:
            case SFIII3_A_DIR_EX:
            case SFIII3_A_DIR_4rd_10:
            case SFIII1_A_DIR:
            case SFIII2_A_DIR:
                pszFilterInUse = *rgszSF3OpenFilter;
                break;
            case BlazBlueCF_S:
                pszFilterInUse = *rgszBBCFOpenFilter;
                break;
            default:
                pszFilterInUse = *rgszOpenFilter;
                break;
        }

        CFileDialog PaletteLoad(TRUE, NULL, NULL, OFN_FILEMUSTEXIST | OFN_PATHMUSTEXIST, pszFilterInUse);

        if (PaletteLoad.DoModal() == IDOK)
        {
            CString strFileName = PaletteLoad.GetOFN().lpstrFile;
            bool fSuccess = false;

            wchar_t szExtension[_MAX_EXT];
            _wsplitpath(strFileName, nullptr, nullptr, nullptr, szExtension);

            if (_wcsicmp(szExtension, L".png") == 0)
            {
                LoadPaletteFromPNG(strFileName, (PaletteLoad.GetOFN().nFilterIndex > 3));
            }
            else if (_wcsicmp(szExtension, L".pal") == 0)
            {
                LoadPaletteFromPAL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".dat") == 0)
            {
                LoadPaletteFromPS3SF3OETXT(strFileName);
            }
            else if (_wcsicmp(szExtension, L".bmp") == 0)
            {
                LoadPaletteFromBMP(strFileName);
            }
            else if (_wcsicmp(szExtension, L".cfpl") == 0)
            {
                LoadPaletteFromCFPL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".gif") == 0)
            {
                LoadPaletteFromGIF(strFileName);
            }
            else if (_wcsicmp(szExtension, L".gpl") == 0)
            {
                LoadPaletteFromGPL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".hpl") == 0)
            {
                LoadPaletteFromHPAL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".impl") == 0)
            {
                LoadPaletteFromIMPL(strFileName);
            }
            else if ((_wcsicmp(szExtension, L".url") == 0) ||
                     (_wcsicmp(szExtension, L".lnk") == 0))
            {
                MessageBox(L"You are attempting to open a shortcut to a file, not the actual file."
                           L"  This won't work.  You will need to download the actual file instead and use that with PalMod.",
                           GetHost()->GetAppName(), MB_ICONERROR);
            }
            else
            {
                LoadPaletteFromACT(strFileName, (PaletteLoad.GetOFN().nFilterIndex > 3));
            }
        }
    }
}

void CPalModDlg::OnExportPalette()
{
    static LPCWSTR rgszSaveFilter[] = { L"ACT Palette|*.act|"
                                        L"GIMP Palette File|*.gpl|"
                                        L"Microsoft PAL|*.pal|"
                                        L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                        L"HipPalette|*.hpl|"
                                        L"|" };

    static LPCWSTR rgszBBCFSaveFilter[] = { L"HipPalette|*.hpl|"
                                            L"BlazBlue Central Fiction Palette Set|*.cfpl|"
                                            L"ACT Palette|*.act|"
                                            L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                            L"GIMP Palette File|*.gpl|"
                                            L"Microsoft PAL|*.pal|"
                                            L"|" };

    static LPCWSTR rgszBBCFAndBBTAGSaveFilter[] = { L"HipPalette|*.hpl|"
                                            L"BlazBlue Central Fiction Palette Set|*.cfpl|"
                                            L"ACT Palette|*.act|"
                                            L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                            L"BlazBlue Cross Tag Battle Palette Set|*.impl|"
                                            L"GIMP Palette File|*.gpl|"
                                            L"Microsoft PAL|*.pal|"
                                            L"|" };

    LPCWSTR pszDefaultExt = L"act";
    LPCWSTR pszFilterToUse = *rgszSaveFilter;
    bool fUseBBCFLogic = (GetHost()->GetCurrGame() && GetHost()->GetCurrGame()->GetGameFlag() == BlazBlueCF_S);

    if (fUseBBCFLogic)
    {
        pszDefaultExt = L"hpl";

        if (CurrentBBCFCharacterIsInBBTAG())
        {
            pszFilterToUse = *rgszBBCFAndBBTAGSaveFilter;
        }
        else
        {
            pszFilterToUse = *rgszBBCFSaveFilter;
        }
    }

    CFileDialog ActSave(FALSE, pszDefaultExt, nullptr, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, pszFilterToUse);

    OPENFILENAME& pOFN = ActSave.GetOFN();

    pOFN.nFilterIndex = CRegProc::GetOFNIndexForPaletteExport(fUseBBCFLogic);

    if (ActSave.DoModal() == IDOK)
    {
        CFile ActFile;

        CString szFile = ActSave.GetOFN().lpstrFile;

        wchar_t szExtension[_MAX_EXT];
        _tsplitpath(szFile, nullptr, nullptr, nullptr, szExtension);
        bool fShouldShowGenericError = false;

        if (_wcsicmp(szExtension, L".gpl") == 0)
        {
            SavePaletteToGPL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (fUseBBCFLogic && (_wcsicmp(szExtension, L".cfpl") == 0)) // only allow cfpl for BBCF
        {
            SavePaletteToCFPL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (_wcsicmp(szExtension, L".hpl") == 0)
        {
            SavePaletteToHPAL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (fUseBBCFLogic && (_wcsicmp(szExtension, L".impl") == 0)) // only allow impl for BBCF
        {
            SavePaletteToIMPL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else if (_wcsicmp(szExtension, L".pal") == 0)
        {
            SavePaletteToPAL(ActSave.GetOFN().lpstrFile, fShouldShowGenericError);
        }
        else
        {
            if (ActSave.GetOFN().nFilterIndex == 4) // This is in reference to our array's sort order above
            {
                SavePaletteToACT(ActSave.GetOFN().lpstrFile, false, fShouldShowGenericError);
            }
            else
            {
                SavePaletteToACT(ActSave.GetOFN().lpstrFile, true, fShouldShowGenericError);
            }
        }

        if (fShouldShowGenericError)
        {
            CString strError;
            if (strError.LoadString(IDS_ERROR_SAVING_PALETTE_FILE))
            {
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
        
         CRegProc::StoreOFNIndexForPaletteExport(fUseBBCFLogic, pOFN.nFilterIndex);
    }
}

void CPalModDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    // TODO: Add your message handler code here and/or call default

    if (m_fCanMinMax)
    {
        //lpMMI->ptMinTrackSize = r
    }

    CDialog::OnGetMinMaxInfo(lpMMI);
}
