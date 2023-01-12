#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#include <mmiscapi.h> // RIFF .PAL support

#include "Game\GameDef.h"

constexpr auto c_strLastUsedPath = L"LastUsedPath";
constexpr auto c_strLastUsedGFlag = L"LastUsedGFlag";

// NOTE: If you add a multiple-ROM option below, you will also need to update
// CGameLoad::LoadFile to pass the appropriate gameflag to that game.
// When you add or change the data here, please also update the Read Me with that data.
std::vector<sSupportedGameToFileMap> g_rgGameToFileMap =
{
    // 1: Game ID,      2: Popup menu text,   3: Open File filter text,    4: Game Platform [,  5: Optional sub-category]
    { LandMaker_A,      L"Land Maker (Arcade)", L"Land Maker (Arcade)|e61-*.20;mpro-3.60|", GamePlatform::OtherPlatform },
    { MAGICALDROPII_A,  L"Magical Drop II", L"Magical Drop II|221-p1*.*|", GamePlatform::NEOGEO },
    { MAGICALDROPIII_A, L"Magical Drop III", L"Magical Drop III|233-p1*.*|", GamePlatform::NEOGEO },
    { NeoBomberman_A,   L"Neo Bomberman", L"Neo Bomberman|093-p1.*|", GamePlatform::NEOGEO },
    { GEMFIGHTER_A,     L"Super Gem Fighter", L"Super Gem Fighter|pcf*.07|", GamePlatform::CapcomCPS12 },
    { WINDJAMMERS_A,    L"Windjammers", L"Windjammers|065-p1.*|", GamePlatform::NEOGEO }, // Data East on NEOGEO
    { NEOGEO_A,         L"Unknown Neo Geo Mode (Single File)", L"Unknown Game ROM|*.*|" },
};

static_assert(ARRAYSIZE(g_GameFriendlyName) == NUM_GAMES, "Increment the value check here once you've determined whether or not you want to add the new game into the above array.");

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
    strDebugInfo.Format(L"CPalModDlg::PostGameLoad : Successfully loaded files for '%s'\n", g_GameFriendlyName[ProgHost->GetCurrGame()->GetGameFlag()]);
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

    GetDlgItem(IDC_BCHECKMIX)->ShowWindow(false ? SW_SHOW : SW_HIDE);

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

void CPalModDlg::OnFileCrossPatch()
{
    // Do *not* clear the dirty flag if set: this isn't saving to the original game files!
    GetHost()->GetLoader()->CrosscopyGame(GetHost()->GetCurrGame());

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
    if (!m_fGetSliderUndo)
    {
        m_fGetSliderUndo = TRUE;
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
    bool canVaryAlphaSetting = false;
    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    if (GetHost()->GetCurrGame())
    {
        ColMode currColMode = GetHost()->GetCurrGame()->GetColorMode();
        AlphaMode currAlphaMode = GetHost()->GetCurrGame()->GetAlphaMode();
        PALWriteOutputOptions currWriteMode = GetHost()->GetCurrGame()->GetMaximumWritePerEachTransparency();
        canChangeAlpha = canChangeFormat = GetHost()->GetCurrGame()->AllowUpdatingColorFormatForGame();

        static_assert((ColMode)28 == ColMode::COLMODE_LAST, "New color formats need checking/unchecking in the menus here.");
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
        canChangeAlpha = canChangeAlpha && (currColMode != ColMode::COLMODE_RGB666_NEOGEO) && (ColorSystem::GetCbForColMode(currColMode) != 3);
        canVaryAlphaSetting = canChangeAlpha && (GetHost()->GetCurrGame()->GameIsUsing32BitColor());

        pSettMenu->CheckMenuItem(ID_ALPHASETTING_FIXED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesFixedAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_VARIABLE, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesVariableAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_UNUSED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameDoesNotUseAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_CHAOTIC, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesChaoticAlpha) ? MF_CHECKED : MF_UNCHECKED));

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

    static_assert((ColMode)28 == ColMode::COLMODE_LAST, "New color formats need enabling/disabling in the menus here.");
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
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_VARIABLE, canVaryAlphaSetting ? MF_ENABLED : MF_DISABLED);
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
            RegSetValueEx(hKey, strPerGameString, 0, REG_SZ, (LPBYTE)pszPath, (DWORD)(wcslen(pszPath) + 1) * sizeof(wchar_t));
            RegSetValueEx(hKey, c_strLastUsedPath, 0, REG_SZ, (LPBYTE)pszPath, (DWORD)(wcslen(pszPath) + 1) * sizeof(wchar_t));
            RegSetValueEx(hKey, c_strLastUsedGFlag, 0, REG_DWORD, (LPBYTE)&nGameFlag, (DWORD)sizeof(int));

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

            if ((ERROR_SUCCESS == RegQueryValueEx(hKey, strPerGameString, 0, &dwRegType, (LPBYTE)szPath, &cbDataSize))
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

            if ((ERROR_SUCCESS == RegQueryValueEx(hKey, c_strLastUsedGFlag, 0, &dwRegType, (LPBYTE)nGameFlag, &cbDataSize)))
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
            wcsncpy(szGameFilter, g_rgGameToFileMap[0].szGameFilterString, ARRAYSIZE(szGameFilter));
            szGameFilter[MAX_DESCRIPTION_LENGTH - 1] = 0;

            LPTSTR pszPipe = wcsstr(szGameFilter, L"|");

            if (pszPipe != nullptr)
            {
                // Truncate off the filter information
                pszPipe[0] = 0;
            }

            strInfo.Format(L"%s%sRight now this is going to be set to \'%s\' for the default game, \'%s\': you need to change that to the game you're interested in so that your ROM shows up.", pszParagraph1, pszParagraph2, szGameFilter, g_GameFriendlyName[g_rgGameToFileMap[0].nInternalGameIndex]);
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

    // Add all the games, and make sure we know how to map index to game code
    for (int nArrayPosition = 0; nArrayPosition < static_cast<int>(g_rgGameToFileMap.size()); nArrayPosition++)
    {
        szGameFileDef.Append(g_rgGameToFileMap[nArrayPosition].szGameFilterString);
        g_rgGameToFileMap[nArrayPosition].nListedGameIndex = nArrayPosition;

        if (g_rgGameToFileMap[nArrayPosition].nInternalGameIndex == nDefaultGameFilter)
        {
            // user nFilterIndex starts at 1
            dwLastUsedGameIndex = g_rgGameToFileMap[nArrayPosition].nListedGameIndex + 1;
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
            for (const sSupportedGameToFileMap& currentGame : g_rgGameToFileMap)
            {
                // user nFilterIndex starts at 1
                if ((currentGame.nListedGameIndex + 1) == ofn.nFilterIndex)
                {
                    LoadGameFile((SupportedGamesList)currentGame.nInternalGameIndex, (wchar_t*)ofn.lpstrFile);
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

bool CPalModDlg::LoadPaletteFromACT(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;
    CFile ActFile;
    if (ActFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        int nFileSz = (int)ActFile.GetLength();
        int nACTColorCount = 256; // An ACT by default has 256 (768 bytes / 3 bytes per color) colors.
        bool fHadToFlip = false;

        // Read data from the ACT...
        if (nFileSz == 772) // The documentation states that 768b ACT files do not include color count, but 772b files do.
        {
            WORD wColorCount;
            ActFile.Seek(768, CFile::begin);
            ActFile.Read(&wColorCount, 2);
            // 772b ACT files store their color count big endian: fix.
            nACTColorCount = _byteswap_ushort(wColorCount);
            ActFile.Seek(0, CFile::begin);

            // The last four bytes are reserved: don't use them for color copies.
            nFileSz = 768;
        }

        if (nACTColorCount == 0)
        {
            // Default to everything
            nACTColorCount = 256;
        }

        uint8_t* pAct = new uint8_t[nACTColorCount * 3];
        memset(pAct, 0, nACTColorCount * 3);

        ActFile.Read(pAct, nACTColorCount * 3);
        ActFile.Close();

        // Now consume those colors...
        const uint8_t nTotalPaletteCount = MainPalGroup->GetPalAmt();
        int nTotalNumberOfCurrentColors = 0;

        for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
        {
            nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
        }

        uint16_t iACTIndex = 0;
        uint16_t nCurrentPalette = 0;
        uint16_t nTotalColorsUsed = 0;
        bool fHaveLooped = false;
        int iCurrentIndexInPalette = 0;
        uint8_t* pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

        uint16_t nBlackColorCount = 0;

        // This code exists because Fighter Factory writes upside-down color tables.
        for (iACTIndex = 0; iACTIndex < nACTColorCount; iACTIndex++)
        {
            if ((pAct[(iACTIndex * 3)] == 0) &&
                (pAct[(iACTIndex * 3) + 1] == 0) &&
                (pAct[(iACTIndex * 3) + 2] == 0))
            {
                nBlackColorCount++;
            }
            else
            {
                break;
            }
        }

        const bool fShouldProcessTopdown = !fReadUpsideDown && (nBlackColorCount < 32) && (nBlackColorCount < nTotalNumberOfCurrentColors);

        bool fHaveMultiplePalettes = (nTotalPaletteCount != 1);
        bool* rgfACTHasColorsForThisPalette = new bool[nTotalPaletteCount];
        memset(rgfACTHasColorsForThisPalette, false, sizeof(bool) * nTotalPaletteCount);

        if (fHaveMultiplePalettes)
        {
            // we have multiple palettes: ensure that we only use useful data from the ACT
            int nOffsetThisPass = 0;
            for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
            {
                const uint16_t nColorsNeededForThisPalette = MainPalGroup->GetPalDef(iPalette)->uPalSz;
                for (iACTIndex = nOffsetThisPass; (iACTIndex < nACTColorCount) && ((iACTIndex - nOffsetThisPass) < nColorsNeededForThisPalette); iACTIndex++)
                {
                    int iIndexToUse= fShouldProcessTopdown ? iACTIndex : (nACTColorCount - iACTIndex);
                    if ((pAct[(iIndexToUse * 3)] != 0) ||
                        (pAct[(iIndexToUse * 3) + 1] != 0) ||
                        (pAct[(iIndexToUse * 3) + 2] != 0))
                    {
                        if (nColorsNeededForThisPalette <= (nACTColorCount - nOffsetThisPass))
                        {
                            // Only allow usage if we fully cover the secondary palette: ignore incomplete palette coverage
                            rgfACTHasColorsForThisPalette[iPalette] = true;
                        }
                        break;
                    }
                }

                nOffsetThisPass += nColorsNeededForThisPalette;
            }
        }

        if (fShouldProcessTopdown)
        {
            iACTIndex = 0;

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3)]);
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 1]);
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 2]);

                if (++iACTIndex >= nACTColorCount)
                {
                    // If the palette is larger than our ACT, loop it.
                    iACTIndex = 0;
                    fHaveLooped = true;
                }

                iCurrentIndexInPalette++;
                if (((nCurrentPalette + 1) < nTotalPaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                {
                    if (fHaveLooped)
                    {
                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                        nTotalColorsUsed++;
                        break;
                    }
                    else
                    {
                        // advance to the next palette
                        nCurrentPalette++;

                        if (rgfACTHasColorsForThisPalette[nCurrentPalette])
                        {
                            iCurrentIndexInPalette = 0;
                            pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                        }
                        else
                        {
                            nTotalColorsUsed++;
                            break;
                        }
                    }
                }
            }
        }
        else
        {
            // TODO: Maybe ask the user before flipping?
            iACTIndex = nACTColorCount - 1;
            fHadToFlip = true;
            iCurrentIndexInPalette = 0;
            nCurrentPalette = 0;
            fHaveLooped = false;
            pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

            OutputDebugString(L"This appears to be a bogus SFF ACT... flipping our ACT table logic...\n");

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3)]);
                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 1]);
                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pAct[(iACTIndex * 3) + 2]);

                // This code exists because Fighter Factory writes upside-down color tables.
                if (--iACTIndex >= nACTColorCount)
                {
                    // If the palette is larger than our ACT, loop it.
                    iACTIndex = nTotalNumberOfCurrentColors;
                    fHaveLooped = true;
                }

                iCurrentIndexInPalette++;
                if (((nCurrentPalette + 1) < nTotalPaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                {
                    if (fHaveLooped)
                    {
                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                        nTotalColorsUsed++;
                        break;
                    }
                    else
                    {
                        if (iACTIndex >= nBlackColorCount)
                        {
                            // advance to the next palette
                            nCurrentPalette++;

                            if (rgfACTHasColorsForThisPalette[nCurrentPalette])
                            {
                                iCurrentIndexInPalette = 0;
                                pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                            }
                            else
                            {
                                nTotalColorsUsed++;
                                break;
                            }
                        }
                        else
                        {
                            // The next palette chunk is all black: don't stomp on a further palette with reversed black/empty colors
                            nTotalColorsUsed++;
                            break;
                        }
                    }
                }               
            }
        }

        safe_delete_array(rgfACTHasColorsForThisPalette);

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        delete[] pAct;

        fSuccess = true;
        CString strStatus;
        if (fHadToFlip)
        {
            strStatus.Format(IDS_ACT_REVERSEDLOAD, nTotalColorsUsed);
        }
        else
        {
            strStatus.Format(IDS_ACT_LOADED, nTotalColorsUsed, nACTColorCount);
        }

        SetStatusText(strStatus);
    }

    if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_ACT_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPAL(LPCWSTR pszFileName)
{
    bool fSuccess = false;
    bool fFoundPALChunk = false;

    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_READ);

    if (hRIFFFile)
    {
        MMCKINFO mmckinfoParent;

        memset(&mmckinfoParent, 0, sizeof(mmckinfoParent));

        MMRESULT mmRes = mmioDescend(hRIFFFile, &mmckinfoParent, nullptr, MMIO_FINDCHUNK);
        if (mmRes == MMSYSERR_NOERROR)
        {
            // found some palette data.
            FOURCC fourCCPal = mmioFOURCC('P', 'A', 'L', ' ');

            if (mmckinfoParent.fccType == fourCCPal)
            {
                MMCKINFO mmckinfoSubchunk;
                memset(&mmckinfoSubchunk, 0, sizeof(mmckinfoSubchunk));

                fFoundPALChunk = true;

                mmckinfoSubchunk.ckid = mmioFOURCC('d', 'a', 't', 'a');

                if (mmioDescend(hRIFFFile, &mmckinfoSubchunk, &mmckinfoParent, MMIO_FINDCHUNK) == MMSYSERR_NOERROR)
                {
                    DWORD dwDataSize;
                    dwDataSize = mmckinfoSubchunk.cksize;

                    if ((dwDataSize > 0))
                    {
                        uint8_t* pPALFileData = new uint8_t[dwDataSize];
                        if (mmioRead(hRIFFFile, (HPSTR)pPALFileData, dwDataSize) == dwDataSize)
                        {
                            // party.
                            ProcChange();

                            const uint8_t nActivePaletteCount = MainPalGroup->GetPalAmt();
                            const int nPALColorCount = (dwDataSize / 4);

                            uint16_t iPALDataIndex = 0;
                            uint16_t nCurrentPalette = 0;
                            uint16_t nTotalColorsUsed = 0;
                            bool fHaveLooped = false;
                            int iCurrentIndexInPalette = 0;
                            int nTotalNumberOfCurrentPaletteColors = 0;

                            for (uint8_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                            {
                                nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                            }

                            uint8_t* pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                            for (int iAbsoluteColorIndex = 0; iAbsoluteColorIndex < nTotalNumberOfCurrentPaletteColors; iAbsoluteColorIndex++, nTotalColorsUsed++)
                            {
                                // copy over the RGB data, skipping the A value
                                pPal[(iCurrentIndexInPalette * 4)] =     GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pPALFileData[(iPALDataIndex * 4)]);
                                pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pPALFileData[(iPALDataIndex * 4) + 1]);
                                pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(pPALFileData[(iPALDataIndex * 4) + 2]);

                                if (++iPALDataIndex >= nPALColorCount)
                                {
                                    // If the palette is larger than our PAL, loop it.
                                    iPALDataIndex = 0;
                                    fHaveLooped = true;
                                }

                                iCurrentIndexInPalette++;
                                if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                                {
                                    if (fHaveLooped)
                                    {
                                        // Applying a looping palette to a secondary palette will be generally illogical, so don't
                                        nTotalColorsUsed++;
                                        break;
                                    }
                                    else
                                    {
                                        // advance to the next palette
                                        nCurrentPalette++;
                                        iCurrentIndexInPalette = 0;
                                        pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                    }
                                }
                            }

                            ImgDispCtrl->UpdateCtrl();
                            m_PalHost.UpdateAllPalCtrls();

                            UpdateMultiEdit(TRUE);
                            UpdateSliderSel();

                            fSuccess = true;
                            CString strStatus;
                            strStatus.Format(IDS_PAL_LOADED, nTotalColorsUsed, nPALColorCount);
                            SetStatusText(strStatus);
                        }

                        safe_delete_array(pPALFileData);
                    }
                }
            }
        }

        mmioClose(hRIFFFile, 0);
    }

    if (!fFoundPALChunk)
    {
        MessageBox(L"Error: This is not a Microsoft PAL RIFF file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PAL_LOADFAILURE);
    }
    else if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(IDS_PAL_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPNG(LPCWSTR pszFileName, bool fReadUpsideDown)
{
    bool fSuccess = false;
    bool fFoundPaletteData = false;
    CFile PNGFile;
    if (PNGFile.Open(pszFileName, CFile::modeRead | CFile::typeBinary))
    {
        ProcChange();

        char aszSignature[8];

        const ULONGLONG nTotalFileSize = PNGFile.GetLength();
        ULONGLONG nFileSizeRemaining = nTotalFileSize;

        PNGFile.Read(aszSignature, 8);
        nFileSizeRemaining -= 8;

        // Verify PNG signature
        if ((aszSignature[0] == (char)0x89) &&
            (aszSignature[1] == (char)0x50) &&
            (aszSignature[2] == (char)0x4E) &&
            (aszSignature[3] == (char)0x47) &&
            (aszSignature[4] == (char)0x0D) &&
            (aszSignature[5] == (char)0x0A) &&
            (aszSignature[6] == (char)0x1A) &&
            (aszSignature[7] == (char)0x0A))
        {
            CString strInfo;
            bool fHadToFlip = false;

            OutputDebugString(L"this is a png.... reading chunks now...\n");

#define READFROMFILEANDDECREMENT(buffer, cbchunk) { if (cbchunk > nFileSizeRemaining) {break;} PNGFile.Read(buffer, cbchunk); nFileSizeRemaining -= cbchunk; }

            while (nFileSizeRemaining > 0)
            {
                uint32_t chunkLength;
                READFROMFILEANDDECREMENT(&chunkLength, sizeof(chunkLength));
                chunkLength = _byteswap_ulong(chunkLength);
                char chunkType[5];
                READFROMFILEANDDECREMENT(chunkType, sizeof(chunkType) - 1);
                chunkType[sizeof(chunkType) - 1] = 0;

                strInfo.Format(L"Chunk: %4S, size 0x%x\n", chunkType, chunkLength);
                OutputDebugString(strInfo);

                char crcBuffer[4];

                if (strcmp(chunkType, "IHDR") == 0)
                {
                    // 13 bytes for the header
                    uint32_t imageWidth, imageHeight;
                    READFROMFILEANDDECREMENT(&imageWidth, 4);
                    READFROMFILEANDDECREMENT(&imageHeight, 4);

                    imageWidth = _byteswap_ulong(imageWidth);
                    imageHeight = _byteswap_ulong(imageHeight);

                    char IHDRBuffer[5];
                    READFROMFILEANDDECREMENT(IHDRBuffer, sizeof(IHDRBuffer));
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    uint32_t bitDepth = IHDRBuffer[0];
                    char colorType = IHDRBuffer[1];

                    if ((colorType == 0) || (colorType == 4)) // grayscale options
                    {
                        // PLTE entry cannot appear for this type
                        OutputDebugString(L"pngreader: grayscale: PLTE cannot be present.\n");
                        break;
                    }
                    else if (colorType == 3) // indexed color
                    {
                        OutputDebugString(L"pngreader: indexed: PLTE must be present.\n");
                    }
                    else // 2 - truecolor and 6 - truecolor with alpha
                    {
                        OutputDebugString(L"pngreader: truecolor: PLTE may be present.\n");
                    }
                }
                else if (strcmp(chunkType, "PLTE") == 0)
                {
                    fFoundPaletteData = true;
                    uint8_t* paszPaletteData = new uint8_t[chunkLength];

                    READFROMFILEANDDECREMENT(paszPaletteData, chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(L"pngreader: processing PLTE header...\n");

                    const uint8_t nActivePaletteCount = MainPalGroup->GetPalAmt();
                    const int nPNGColorCount = (chunkLength / 3);

                    strInfo.Format(L"\tpngreader: processing %u colors...\n", nPNGColorCount);
                    OutputDebugString(strInfo);

                    uint32_t nTotalNumberOfCurrentPaletteColors = 0;

                    for (uint16_t iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                    {
                        nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                    }

                    uint16_t iPNGIndex = 0;
                    uint16_t nCurrentPalette = 0;
                    uint16_t nTotalColorsUsed = 0;
                    uint32_t nBlackColorCount = 0;
                    bool fHaveLooped = false;
                    int iCurrentIndexInPalette = 0;
                    uint8_t* pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                    // This code exists because Fighter Factory writes upside-down color tables.
                    for (iPNGIndex = 0; iPNGIndex < nPNGColorCount; iPNGIndex++)
                    {
                        if ((paszPaletteData[(iPNGIndex * 3)] == 0) &&
                            (paszPaletteData[(iPNGIndex * 3) + 1] == 0) &&
                            (paszPaletteData[(iPNGIndex * 3) + 2] == 0))
                        {
                            nBlackColorCount++;
                        }
                        else
                        {
                            break;
                        }
                    }

                    const bool fShouldProcessTopdown = !fReadUpsideDown && (nBlackColorCount < 32) && (nBlackColorCount < nTotalNumberOfCurrentPaletteColors);

                    bool fHaveMultiplePalettes = (nActivePaletteCount != 1);
                    bool* rgfPNGHasColorsForThisPalette = new bool[nActivePaletteCount];
                    memset(rgfPNGHasColorsForThisPalette, false, sizeof(bool) * nActivePaletteCount);

                    if (fHaveMultiplePalettes)
                    {
                        int nOffsetThisPass = 0;
                        for (int iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                        {
                            for (iPNGIndex = nOffsetThisPass; (iPNGIndex < nTotalNumberOfCurrentPaletteColors) && ((iPNGIndex - nOffsetThisPass) < MainPalGroup->GetPalDef(iPalette)->uPalSz) && (iPNGIndex < nPNGColorCount); iPNGIndex++)
                            {
                                int iIndexToUse = fShouldProcessTopdown ? iPNGIndex : (nPNGColorCount - iPNGIndex);
                                if ((paszPaletteData[(iIndexToUse * 3)] != 0) ||
                                    (paszPaletteData[(iIndexToUse * 3) + 1] != 0) ||
                                    (paszPaletteData[(iIndexToUse * 3) + 2] != 0))
                                {
                                    rgfPNGHasColorsForThisPalette[iPalette] = true;
                                    break;
                                }
                            }

                            nOffsetThisPass += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                        }
                    }

                    if (fShouldProcessTopdown)
                    {
                        iPNGIndex = 0;

                        for (uint32_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3)]);
                            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 1]);
                            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 2]);

                            if (++iPNGIndex >= nPNGColorCount)
                            {
                                // If the palette is larger than our PNG, loop it.
                                iPNGIndex = 0;
                                fHaveLooped = true;
                            }

                            iCurrentIndexInPalette++;
                            if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                            {
                                if (fHaveLooped)
                                {
                                    // Applying a looping palette to a secondary palette will be generally illogical, so don't
                                    nTotalColorsUsed++;
                                    break;
                                }
                                else
                                {
                                    // advance to the next palette
                                    nCurrentPalette++;

                                    if (rgfPNGHasColorsForThisPalette[nCurrentPalette])
                                    {
                                        iCurrentIndexInPalette = 0;
                                        pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                    }
                                    else
                                    {
                                        nTotalColorsUsed++;
                                        break;
                                    }
                                }
                            }
                        }
                    }
                    else
                    {
                        // TODO: Maybe ask the user before flipping?
                        iPNGIndex = nPNGColorCount - 1;
                        fHadToFlip = true;
                        iCurrentIndexInPalette = 0;
                        nCurrentPalette = 0;
                        fHaveLooped = false;
                        pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                        OutputDebugString(L"This appears to be a bogus SFF PNG... flipping our PNG table logic...\n");

                        for (uint32_t iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)] =     GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3)]);
                            pPal[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 1]);
                            pPal[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(paszPaletteData[(iPNGIndex * 3) + 2]);

                            // This code exists because Fighter Factory writes upside-down color tables.
                            if (--iPNGIndex >= nPNGColorCount)
                            {
                                // If the palette is larger than our PNG, loop it.
                                fHaveLooped = true;
                                iPNGIndex = nTotalNumberOfCurrentPaletteColors;
                            }

                            iCurrentIndexInPalette++;
                            if (((nCurrentPalette + 1) < nActivePaletteCount) && (iCurrentIndexInPalette == MainPalGroup->GetPalDef(nCurrentPalette)->uPalSz))
                            {
                                if (fHaveLooped)
                                {
                                    // Applying a looping palette to a secondary palette will be generally illogical, so don't
                                    nTotalColorsUsed++;
                                    break;
                                }
                                else
                                {
                                    if (iPNGIndex >= nBlackColorCount)
                                    {
                                        // advance to the next palette
                                        nCurrentPalette++;

                                        if (rgfPNGHasColorsForThisPalette[nCurrentPalette])
                                        {
                                            iCurrentIndexInPalette = 0;
                                            pPal = (uint8_t*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                        }
                                        else
                                        {
                                            nTotalColorsUsed++;
                                            break;
                                        }
                                    }
                                    else
                                    {
                                        // The next palette chunk is all black: don't stomp on a further palette with reversed black/empty colors
                                        nTotalColorsUsed++;
                                        break;
                                    }
                                }
                            }
                        }
                    }

                    safe_delete_array(rgfPNGHasColorsForThisPalette);

                    ImgDispCtrl->UpdateCtrl();
                    m_PalHost.UpdateAllPalCtrls();

                    UpdateMultiEdit(TRUE);
                    UpdateSliderSel();

                    if (fHadToFlip)
                    {
                        strInfo.Format(IDS_PNG_REVERSEDLOAD, nTotalColorsUsed);
                    }
                    else
                    {
                        strInfo.Format(IDS_PNG_LOADED, nTotalColorsUsed, nPNGColorCount);
                    }
                    SetStatusText(strInfo);

                    fSuccess = true;

                    safe_delete_array(paszPaletteData);
                    break;
                }
                else if (strcmp(chunkType, "IDAT") == 0)
                {
                    // PLTE data if present must be present before the IDAT chunks
                    OutputDebugString(L"pngreader: IDAT section hit: PLTE cannot be present from here on out.\n");
                    break;
                }
                else
                {
                    // This is a chunk we don't care about: just walk past.
                    char* paszNope = new char[chunkLength];

                    READFROMFILEANDDECREMENT(paszNope, chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    safe_delete_array(paszNope);
                }
            }

            OutputDebugString(L"pngreader: done!\n");
        }

        PNGFile.Close();
    }

    if (!fFoundPaletteData)
    {
        CString strMessage;
        strMessage = L"Error: This PNG file is not using indexed color and cannot be used.  Only type 3 (indexed color) PNGs contain the palette information PalMod needs.\n";
        strMessage.Append(L"\nYou might want to ask the person who made this to provide you an indexed color PNG or the ACT.\n");
        strMessage.Append(L"Failing that, open up the PNG in a picture viewer.  While PalMod is the foreground application, select a color in PalMod. ");
        strMessage.Append(L"Then hover your mouse over the \"new\" color in your image, and press CTRL+SHIFT+V to copy that color to PalMod.  Repeat until you're done.");
        MessageBox(strMessage, GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PNGLOAD_NOTABLE);
    }
    else if (!fSuccess)
    {
        MessageBox(L"Error: This is not a valid PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(IDS_PNG_LOADFAILURE);
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPS3SF3OETXT(LPCWSTR pszFileName)
{
    CString strMsg;
    bool fSuccess = false;
    CStdioFile SF3DLCFile;

    if (SF3DLCFile.Open(pszFileName, CFile::modeRead))
    {
        bool fAbleToReadFile = false;

        CString strCharacterName;
        fAbleToReadFile = SF3DLCFile.ReadString(strCharacterName);
        CString strDLCName;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCName);
        CString strDLCLoc;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCLoc);
        CString strDLCLocDesc;
        fAbleToReadFile = fAbleToReadFile && SF3DLCFile.ReadString(strDLCLocDesc);

        if (fAbleToReadFile)
        {
            CString strCurrentColors;
            CGameClass* CurrGame = GetHost()->GetCurrGame();

            // Only import the full set if we're on the core colors
            sPalDef* spdPalInfo = MainPalGroup->GetPalDef(0);

            int nActivePaletteId = spdPalInfo->uPalId;
            int nPaletteDistance = CurrGame->GetCurrentPaletteIncrement();

            if ((nActivePaletteId != 0) && (nPaletteDistance != 0))
            {
                // Convert from absolute index to step-based index
                nActivePaletteId /= nPaletteDistance;
            }

            int nHowManyColorsToImport = CurrGame->GetImgOutPalAmt();
            uint32_t nUnitId = spdPalInfo->uUnitId;

            int iKeyPosition = strCharacterName.Find('=');
            strCharacterName.Delete(0, iKeyPosition + 1);
            OutputDebugString(strCharacterName);
            OutputDebugString(L"\n");
            iKeyPosition = strDLCName.Find('=');
            OutputDebugString(strDLCName.Mid(iKeyPosition + 1));
            OutputDebugString(L"\n");

            // localize
            CString strMsg;
            strMsg.Format(L"This file appears to contain seven palettes for '%s'.\n\nDo you wish to apply %s to the current character?", strCharacterName.GetString(), (nActivePaletteId == 0) ? L"these" : L"the current color");

            if (MessageBox(strMsg, GetHost()->GetAppName(), MB_YESNO) == IDYES)
            {
                ProcChange();

                for (int iPaletteId = 0; iPaletteId < nHowManyColorsToImport; iPaletteId++)
                {
                    if (SF3DLCFile.ReadString(strCurrentColors))
                    {
                        if ((nActivePaletteId != 0) && (nActivePaletteId != iPaletteId))
                        {
                            // Only copy the current color
                            continue;
                        }

                        const uint32_t nDLCColorCount = 64;
                        COLORREF* pDLCColors = new COLORREF[nDLCColorCount];
                        memset(pDLCColors, 0, nDLCColorCount * sizeof(COLORREF));

                        // OK, now parse the actual colors.
                        iKeyPosition = strCurrentColors.Find('=');
                        CString strColorList = strCurrentColors.Mid(iKeyPosition + 1);
                        OutputDebugString(strCurrentColors.Left(iKeyPosition));
                        OutputDebugString(L"\n");
                        for (uint32_t iPosition = 0; iPosition < nDLCColorCount; iPosition++)
                        {
                            // The final pass won't have a trailing ',', so just use the raw string at that point
                            const int iEndPosition = strColorList.Find(',');
                            CString strThisColor = (iEndPosition != -1) ? strColorList.Left(iEndPosition) : strColorList;

                            uint32_t nThisColor = _wtol(strThisColor);
                            uint8_t alpha = (nThisColor & 0xFF000000) >> 24;
                            uint8_t red = (nThisColor & 0xFF0000) >> 16;
                            uint8_t green = (nThisColor & 0xFF00) >> 8;
                            uint8_t blue = (nThisColor & 0xFF);

                            pDLCColors[iPosition] = RGB(red, green, blue) | (alpha << 24);

                            //strMsg.Format(L"Converted color %u :: %s to rgb 0x%x\n", iPosition, strThisColor.GetString(), pDLCColors[iPosition]);
                            //OutputDebugString(strMsg.GetString());

                            strColorList.Delete(0, iEndPosition + 1);
                        }

                        // Now consume those colors...
                        if (spdPalInfo->uPalId == (iPaletteId * nPaletteDistance))
                        {
                            // This is the active palette: use the palgroup logic so we get easy live updates
                            uint8_t* pVisiblePalette = (uint8_t*)MainPalGroup->GetPalDef(0)->pPal;

                            for (int iCurrentIndexInPalette = 0; iCurrentIndexInPalette < nDLCColorCount; iCurrentIndexInPalette++)
                            {
                                pVisiblePalette[(iCurrentIndexInPalette * 4)]     = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(pDLCColors[iCurrentIndexInPalette]));
                                pVisiblePalette[(iCurrentIndexInPalette * 4) + 1] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(pDLCColors[iCurrentIndexInPalette]));
                                pVisiblePalette[(iCurrentIndexInPalette * 4) + 2] = GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(pDLCColors[iCurrentIndexInPalette]));
                            }
                        }
                        else
                        {
                            // These are the inactive palettes: we need to directly update these
                            CurrGame->WritePal(nUnitId, (iPaletteId * nPaletteDistance), pDLCColors, nDLCColorCount);
                            CurrGame->MarkPaletteDirty(nUnitId, (iPaletteId * nPaletteDistance));
                        }

                        delete[] pDLCColors;
                    }
                }

                ImgDispCtrl->UpdateCtrl();
                m_PalHost.UpdateAllPalCtrls();

                UpdateMultiEdit(TRUE);
                UpdateSliderSel();

                fSuccess = true;

                // localize
                CString strStatus;
                strStatus.Format(L"Imported %u %s palettes.", nHowManyColorsToImport, strCharacterName.GetString());
                SetStatusText(strStatus);
            }
        }

        if (!fSuccess)
        {
            // localize
            SetStatusText(L"Palettes were not imported.");
        }
    }

    return fSuccess;
}

void CPalModDlg::OnImportPalette()
{
    // This handles palette import via the Tools menu: CPalDropTarget::OnDrop is the drag/drop version
    if (m_fEnabled)
    {
        static LPCWSTR rgszBBCFOpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*.gpl;*.hpl;*.cfpl|"
                                                L"ACT Palette|*.act|"
                                                L"Indexed PNG|*.png|"
                                                L"Microsoft PAL|*.pal|"
                                                L"Upside-down ACT Palette|*.act|"
                                                L"Upside-down Indexed PNG|*.png|"
                                                L"GIMP palette file|*.gpl|"
                                                L"HipPalette|*.hpl|"
                                                L"BBCF palette set|*.cfpl|"
                                                L"|" };

        static LPCWSTR rgszSF3OpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*txt.dat;*.gpl;*.hpl|"
                                               L"ACT Palette|*.act|"
                                               L"Indexed PNG|*.png|"
                                               L"Microsoft PAL|*.pal|"
                                               L"Upside-down ACT Palette|*.act|"
                                               L"Upside-down Indexed PNG|*.png|"
                                               L"PS3 SF3::OE color file|*.txt.dat"
                                               L"GIMP palette file|*.gpl|"
                                               L"HipPalette|*.hpl|"
                                               L"|" };

        static LPCWSTR rgszOpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal;*.gpl;*.hpl|"
                                            L"ACT Palette|*.act|"
                                            L"Indexed PNG|*.png|"
                                            L"Microsoft PAL|*.pal|"
                                            L"Upside-down ACT Palette|*.act|"
                                            L"Upside-down Indexed PNG|*.png|"
                                            L"GIMP palette file|*.gpl|"
                                            L"HipPalette|*.hpl|"
                                            L"|" };

        LPCWSTR pszFilterInUse = nullptr;

        // historically used for SFIII and blazblue custom filters
        switch (GetHost()->GetCurrGame()->GetGameFlag())
        {
        default:
            pszFilterInUse = *rgszOpenFilter;
            break;
        }

        CFileDialog PaletteLoad(TRUE, NULL, NULL, NULL, pszFilterInUse);

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
            else if (_wcsicmp(szExtension, L".cfpl") == 0)
            {
                LoadPaletteFromCFPL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".gpl") == 0)
            {
                LoadPaletteFromGPL(strFileName);
            }
            else if (_wcsicmp(szExtension, L".hpl") == 0)
            {
                LoadPaletteFromHPAL(strFileName);
            }
            else
            {
                LoadPaletteFromACT(strFileName, (PaletteLoad.GetOFN().nFilterIndex > 3));
            }
        }
    }
}

void CPalModDlg::SavePaletteToACT(LPCWSTR pszFileName, bool fRightsideUp, bool& fShouldShowGenericError)
{
    CFile ActFile;
    bool fSuccess = false;

    if (ActFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
    {
        // We are writing this file in accordance with the spec as found here--
        //   https://www.adobe.com/devnet-apps/photoshop/fileformatashtml/#50577411_pgfId-1070626
        // In theory we should be able to just write a 768 byte file, but there appears to be a bug in PhotoShop's
        // ACT import wherein they mangle the parse for 768b files.  Thus we are forcibly using 772b here.

        const int k_nMaxColorsAllowed = 256;
        const int nActSz = k_nMaxColorsAllowed * 3;
        uint8_t* pAct = new uint8_t[nActSz];
        memset(pAct, 0, nActSz);

        uint8_t* pPal = (uint8_t*)CurrPalCtrl->GetBasePal();
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        uint8_t nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        int nTotalColorsUsed = 0;

        if (fRightsideUp)
        {
            for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
            {
                pAct[nTotalColorsUsed * 3] = pPal[nTotalColorsUsed * 4];
                pAct[nTotalColorsUsed * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                pAct[nTotalColorsUsed * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
            }

            for (uint8_t nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
            {
                CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

                if (pPalCtrlNextPage)
                {
                    const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                    for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) &&
                                                   (nActivePageIndex < nNextPageWorkingAmt) &&
                                                   (nTotalColorsUsed < nWorkingAmt);
                        nActivePageIndex++)
                    {
                        pAct[nTotalColorsUsed * 3] = pPal[nTotalColorsUsed * 4];
                        pAct[nTotalColorsUsed * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                        pAct[nTotalColorsUsed * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
                        nTotalColorsUsed++;
                    }
                }
            }
        }
        else //upside-down for fighter factory 3
        {
            int nWriteLocation = k_nMaxColorsAllowed - 1;
            for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
            {
                pAct[(nWriteLocation - nTotalColorsUsed) * 3] = pPal[nTotalColorsUsed * 4];
                pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
            }

            for (uint8_t nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
            {
                CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

                if (pPalCtrlNextPage)
                {
                    const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                    for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) &&
                                                   (nActivePageIndex < nNextPageWorkingAmt) &&
                                                   (nTotalColorsUsed < nWorkingAmt);
                        nActivePageIndex++)
                    {
                        pAct[(nWriteLocation - nTotalColorsUsed) * 3] = pPal[nTotalColorsUsed * 4];
                        pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                        pAct[(nWriteLocation - nTotalColorsUsed) * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
                        nTotalColorsUsed++;
                    }
                }
            }

            // max this since we started the write at the end
            nTotalColorsUsed = k_nMaxColorsAllowed;
        }

        ActFile.Write(pAct, nActSz);

        // Add 4 bytes per the 772b file syntax...
        // First two here is the number of useful colors in the file.
        // Second two here is be the index to use for the transparency color.  This is 0 in all the games we care about.

        // Please note that Photoshop is expecting this big endian, so we byteswap to ensure correct orientation.
        WORD transparencyColorIndex = 0;
        WORD colorCount = _byteswap_ushort(nTotalColorsUsed);
        ActFile.Write(&colorCount, 2);
        ActFile.Write(&transparencyColorIndex, 2);

        ActFile.Close();

        delete[] pAct;
        fSuccess = true;
    }

    SetStatusText(fSuccess ? IDS_ACTSAVE_SUCCESS : IDS_ACTSAVE_FAILURE);

    fShouldShowGenericError = !fSuccess;
}

void CPalModDlg::SavePaletteToPAL(LPCWSTR pszFileName, bool& fShouldShowGenericError)
{
    bool fSuccess = false;

    // Microsoft RIFF PAL file.  Used by the UNIST workflow supposedly
    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_WRITE | MMIO_CREATE);

    if (hRIFFFile)
    {
        MMCKINFO mmckInfo = {};
        mmckInfo.fccType = mmioFOURCC('P', 'A', 'L', ' ');
        mmckInfo.cksize = 0;
        mmckInfo.dwFlags = MMIO_DIRTY;

        if (mmioCreateChunk(hRIFFFile, &mmckInfo, MMIO_CREATERIFF) == MMSYSERR_NOERROR)
        {
            MMCKINFO mmckInfoData;
            memset(&mmckInfoData, 0, sizeof(mmckInfoData));

            // Write out the current palette
            uint8_t* pPal = (uint8_t*)CurrPalCtrl->GetBasePal();
            int nColorCount = CurrPalCtrl->GetWorkingAmt();

            mmckInfoData.ckid = mmioFOURCC('d', 'a', 't', 'a');
            mmckInfoData.cksize = 0;
            mmckInfoData.dwFlags = MMIO_DIRTY;

            if (mmioCreateChunk(hRIFFFile, &mmckInfoData, 0) == MMSYSERR_NOERROR)
            {
                const int nBytesToWrite = nColorCount * 4;
                fSuccess = (mmioWrite(hRIFFFile, (const char*)pPal, nBytesToWrite) == nBytesToWrite);
                mmioAscend(hRIFFFile, &mmckInfoData, 0);
            }

            mmioAscend(hRIFFFile, &mmckInfo, 0);
        }

        mmioClose(hRIFFFile, 0);
    }

    SetStatusText(fSuccess ? IDS_PALSAVE_SUCCESS : IDS_PALSAVE_FAILURE);
    
    fShouldShowGenericError = !fSuccess;
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
                                            L"Central Fiction Palette Set|*.cfpl|"
                                            L"ACT Palette|*.act|"
                                            L"Upside-down ACT Palette|*.act|" // This is at position four: that is important below!
                                            L"GIMP Palette File|*.gpl|"
                                            L"Microsoft PAL|*.pal|"
                                            L"|" };

    LPCWSTR pszDefaultExt = L"act";
    LPCWSTR pszFilterToUse = *rgszSaveFilter;
    bool fUseBBCFLogic = false; // historical leftovers

    if (fUseBBCFLogic)
    {
        pszDefaultExt = L"hpl";
        pszFilterToUse = *rgszBBCFSaveFilter;
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
