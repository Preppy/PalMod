#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#include <mmiscapi.h> // RIFF .PAL support

#include "Game\GameDef.h"

constexpr auto c_strLastUsedPath = L"LastUsedPath";
constexpr auto c_strLastUsedGFlag = L"LastUsedGFlag";

void CPalModDlg::LoadGameDir(int nGameFlag, TCHAR* szLoadDir)
{
    ClearGameVar();

    CGameClass* GameGet = GetHost()->GetLoader()->LoadDir(nGameFlag, szLoadDir);

    if (GameGet)
    {
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(szLoadDir, GetHost()->GetCurrGame()->GetGameFlag());

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
    bForceImg = TRUE;

    //Init the first palette selection
    OnPalSelChange(0);

    //Enable the program
    Enable(TRUE);

    //Update the combo selection
    UpdateCombo();

    GetDlgItem(IDC_BCHECKMIX)->ShowWindow((ProgHost->GetCurrGame()->GetGameFlag() == MVC2_D) ? SW_SHOW : SW_HIDE);

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

    bPalChanged = FALSE;
}

void CPalModDlg::OnButtonClickCheckEdits()
{
    GetHost()->GetCurrGame()->ValidateMixExtraColors(&fFileChanged);
}

void CPalModDlg::OnFilePatch()
{
    // Commit current changes to memory
    if (bPalChanged)
    {
        OnBnUpdate();
    }

    GetHost()->GetLoader()->SaveGame(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());

    if (!GetHost()->GetLoader()->GetErrCt())
    {
        fFileChanged = FALSE;
    }
}

void CPalModDlg::OnSavePatchFile()
{
    // Commit current changes to memory
    if (bPalChanged)
    {
        OnBnUpdate();
    }

    // Generate an IPS file of the current changes
    GetHost()->GetLoader()->SavePatchFile(GetHost()->GetCurrGame());

    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnNMReleasedCaptureAll(NMHDR* pNMHDR, LRESULT* pResult)
{
    if (!bGetSliderUndo)
    {
        bGetSliderUndo = TRUE;
    }

    *pResult = 0;
}

void CPalModDlg::ProcChange(BOOL bReset)
{
    if (bReset)
    {
        UndoProc.Clear();

        bPalChanged = FALSE;
    }
    else
    {
        UndoProc.DeleteRedoList();
        NewUndoData();

        fFileChanged = TRUE;
        bPalChanged = TRUE;
    }
}

void CPalModDlg::OnFileExit()
{
    OnClose();
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
}

void CPalModDlg::SetColorsPerLineTo8()
{
    CRegProc::SetColorsPerLine(PAL_MAXWIDTH_8COLORSPERLINE);

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_8COLORSPERLINE, MF_BYCOMMAND | MF_CHECKED);
    pSettMenu->CheckMenuItem(ID_COLORSPERLINE_16COLORSPERLINE, MF_BYCOMMAND |MF_UNCHECKED);
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
        canChangeAlpha = canChangeFormat = GetHost()->GetCurrGame()->AllowUpdatingColorFormatForGame();

        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB444, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_12A) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_15) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_ALT, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_15ALT) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB555_GBA, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_GBA) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_COLORFORMAT_RGB666, MF_BYCOMMAND | ((currColMode == ColMode::COLMODE_NEOGEO) ? MF_CHECKED : MF_UNCHECKED));

        // There's no allowance for alpha with NEOGEO colors
        canChangeAlpha = canChangeAlpha && (currColMode != ColMode::COLMODE_NEOGEO);

        pSettMenu->CheckMenuItem(ID_ALPHASETTING_FIXED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesFixedAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_VARIABLE, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesVariableAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_UNUSED, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameDoesNotUseAlpha) ? MF_CHECKED : MF_UNCHECKED));
        pSettMenu->CheckMenuItem(ID_ALPHASETTING_CHAOTIC, MF_BYCOMMAND | ((currAlphaMode == AlphaMode::GameUsesChaoticAlpha) ? MF_CHECKED : MF_UNCHECKED));
    }

    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB444, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_ALT, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB555_GBA, canChangeFormat ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_COLORFORMAT_RGB666, canChangeFormat ? MF_ENABLED : MF_DISABLED);

    pSettMenu->EnableMenuItem(ID_ALPHASETTING_FIXED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_UNUSED, canChangeAlpha ? MF_ENABLED : MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_VARIABLE, MF_DISABLED);
    pSettMenu->EnableMenuItem(ID_ALPHASETTING_CHAOTIC, MF_DISABLED);

}

void CPalModDlg::SetAlphaModeTo(AlphaMode newAlphaMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetAlphaMode(newAlphaMode);
    }
}

void CPalModDlg::SetColorFormatTo(ColMode newColMode)
{
    if (GetHost()->GetCurrGame())
    {
        GetHost()->GetCurrGame()->SetColorMode(newColMode);
    }
}

void CPalModDlg::LoadLastDir()
{
    int nLastUsedGFlag;
    BOOL bIsDir;
    TCHAR szLastDir[MAX_PATH];

    if (GetLastUsedDirectory(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &bIsDir))
    {
        if (VerifyMsg(eVerifyType::VM_FILECHANGE)) // Save current changes if needed
        {
            if ((nLastUsedGFlag > NUM_GAMES) || (nLastUsedGFlag < 0))
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
                if (bIsDir)
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

int CALLBACK OnBrowseDialog(HWND hwnd, UINT uMsg, LPARAM lParam, LPARAM lpData)
{
    switch (uMsg)
    {
    case BFFM_INITIALIZED:
    {
        TCHAR szPath[MAX_PATH];

        if (GetLastUsedDirectory(szPath, sizeof(szPath), NULL))
        {
            SendMessage(hwnd, BFFM_SETSELECTION, TRUE, (LPARAM)szPath);
        }
        break;
    }
    default:
        break;
    }

    return 0;
}

void SetLastUsedDirectory(LPCTSTR ptszPath, int nGameFlag)
{
    if (NULL != ptszPath)
    {
        HKEY hKey = NULL;

        //Set the directory / Game Flag
        if (ERROR_SUCCESS == RegCreateKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, NULL, REG_OPTION_NON_VOLATILE, KEY_WRITE | KEY_SET_VALUE, NULL, &hKey, NULL))
        {
            RegSetValueEx(hKey, c_strLastUsedPath, 0, REG_SZ, (LPBYTE)ptszPath, (DWORD)(_tcslen(ptszPath) + 1) * sizeof(TCHAR));
            RegSetValueEx(hKey, c_strLastUsedGFlag, 0, REG_DWORD, (LPBYTE)&nGameFlag, (DWORD)sizeof(int));

            RegCloseKey(hKey);
        }
    }

    return;
}

BOOL GetLastUsedDirectory(LPTSTR ptszPath, DWORD cbSize, int* nGameFlag, BOOL bCheck, BOOL* bIsDir)
{
    BOOL fFound = FALSE;
    HKEY hKey = NULL;

    if (ERROR_SUCCESS == RegOpenKeyEx(HKEY_CURRENT_USER, c_AppRegistryRoot, 0, KEY_QUERY_VALUE, &hKey))
    {
        DWORD dwRegType = REG_SZ;
        TCHAR szPath[MAX_PATH];
        DWORD cbDataSize = sizeof(szPath);

        //Get the directory
        if ((ERROR_SUCCESS == RegQueryValueEx(hKey, c_strLastUsedPath, 0, &dwRegType, (LPBYTE)szPath, &cbDataSize))
            && (REG_SZ == dwRegType))
        {
            if (bCheck)
            {
                fFound = TRUE;
            }
            else
            {
                DWORD dwAttribs = GetFileAttributes(szPath);

                if (INVALID_FILE_ATTRIBUTES != dwAttribs)
                {
                    if (bIsDir)
                    {
                        //Check to see if it's actually a file without an extension
                        *bIsDir = (dwAttribs & FILE_ATTRIBUTE_DIRECTORY);
                    }

                    // This code used to be testing for (dwAttribs & FILE_ATTRIBUTE_ARCHIVE), but I don't think we need that currently.

                    _tcscpy(ptszPath, szPath);
                    fFound = TRUE;
                }
            }
        }

        //Grab the game flag
        if (nGameFlag)
        {
            nGameFlag ? *nGameFlag = 0xFF : 0;

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

void CPalModDlg::OnActivate(UINT nState, CWnd* pWndOther, BOOL bMinimized)
{
    CDialog::OnActivate(nState, pWndOther, bMinimized);

    // TODO: Add your message handler code here
}

void CPalModDlg::OnFileOpen()
{
    CString szGameFileDef = L"";

    struct sSupportedGameList
    {
        int nInternalGameIndex;
        LPCTSTR szGameFilterString;
        int nListedGameIndex = INVALID_UNIT_VALUE;
    };

    // NOTE: If you add a multiple-ROM option below, you will also need to update
    // CGameLoad::LoadFile to pass the appropriate gameflag to that game.
    sSupportedGameList SupportedGameList[] =
    {
        { BREAKERS_A,       L"Breakers Revenge|245-p1.p1|", INVALID_UNIT_VALUE },
        { BLEACH_DS,        L"Bleach Dark Souls|3494*Europe*nds;2761*US*nds|", INVALID_UNIT_VALUE },
        { COTA_A,           L"COTA|xmn*.05*|", INVALID_UNIT_VALUE },
        { CVS2_A,           L"CVS2|SNKGD_SL.bin|", INVALID_UNIT_VALUE },
        { Garou_A,          L"Garou|kf.neo-sma|", INVALID_UNIT_VALUE },
        { Garou_S,          L"Garou for Steam|p1.bin|", INVALID_UNIT_VALUE },
        { JOJOS_A,          L"Jojos (Japan): HUDs and menus (50), Characters (51)|50;51|", INVALID_UNIT_VALUE },
        { KarnovsR_A,       L"Karnov's Revenge|066-p1.p1|", INVALID_UNIT_VALUE },
        { KOF98_A,          L"KOF98|242-p2.sp2;kof98_p2.rom|", INVALID_UNIT_VALUE },
        // normal ROM name is 265-p2.sp2, but the fightcade ROM name is 265.p2.bin
        { KOF02_A,          L"KOF02|265*p2*|", INVALID_UNIT_VALUE },
        { KOF02UM_S,        L"KOF02UM|pal_a*.bin|", INVALID_UNIT_VALUE },
        { KOF03_A,          L"KOF03 (2004 EX Ultra Plus)|2k3-p1up.bin|", INVALID_UNIT_VALUE },
        { KOFXI_A,          L"KOFXI|gdrom_KOFXI_v5_AllFighters.bin|", INVALID_UNIT_VALUE },
        { MATRIMELEE_A,     L"Matrimelee|266-p2.sp2|", INVALID_UNIT_VALUE },
        { MSH_A,            L"MSH: Characters (*.05), Portraits (*.06b)|*.05*;*.06b|", INVALID_UNIT_VALUE },
        { MSHVSF_A,         L"MSHVSF: Characters (*.06a), Portraits (*.07b)|*.06a;*.07b|", INVALID_UNIT_VALUE },
        { MVC_A,            L"MVC Arcade|mvc*.06*|", INVALID_UNIT_VALUE },
        // MarvelVsCapcom2.bin
        // Unlocked\MarvelVsCapcom2_unlocked.bin
        { MVC2_A,           L"MVC2 Arcade (MarvelVsCapcom2_unlocked.bin)|m*.dat;m*.bin|", INVALID_UNIT_VALUE },
        { NGBC_A,           L"NGBC|NeoGeoBattleColliseum.bin|", INVALID_UNIT_VALUE },
        // normal ROM name is 223-p1.p1 (and 223-p1k.p1 for Korean), FC uses 223-p1.bin
        { RBFFS_A,          L"Real Bout Fatal Fury Special|223*p1*|", INVALID_UNIT_VALUE },
        { REDEARTH_A,       L"Red Earth|31|", INVALID_UNIT_VALUE },
        { SAMSHO3_A,        L"Samurai Shodown 3|087-p5.p5|", INVALID_UNIT_VALUE},
        { SAMSHO5SP_A,      L"Samurai Shodown 5 Special|272-p1*.p1;p1*h*.bin|", INVALID_UNIT_VALUE},
        { SFA1_A,           L"SFA1|sfz.06|", INVALID_UNIT_VALUE },
        { SFA2_A,           L"SFA2: Characters (sz*.07), Bonus (sz*.08)|sz*.07*;sz*.08*|", INVALID_UNIT_VALUE },
        { SFA3_A,           L"SFA3 sz3.09c|*.09*|", INVALID_UNIT_VALUE },
        { SFIII1_A,         L"SFIII:NG Arcade|50|", INVALID_UNIT_VALUE },
        { SFIII2_A,         L"SFIII:2I Arcade|50|", INVALID_UNIT_VALUE },
        { SFIII3_A,         L"SFIII:3S Arcade (51), Gill glow (10)|10;51|", INVALID_UNIT_VALUE },
        { SF2CE_A,          L"SF2:CE: Select (21), Characters (22), Continue (23)|s92*21*6f;s92*22*7f;s92*23*8f|", INVALID_UNIT_VALUE },
        { SF2HF_A,          L"SF2:HF: Select (21), Characters (22)|s2t*21.6f;s2t*22.7f|", INVALID_UNIT_VALUE },
        { SSF2T_A,          L"SSF2T: Portraits (*.03c), Characters (*.04a), Stages (*.08)|sfx*.03*;sfx*.04a;sfx*.08|", INVALID_UNIT_VALUE },
        { SSF2T_GBA,        L"SSF2T: Revival (GBA)|Super*Street*Fighter*.gba|", INVALID_UNIT_VALUE },
        { GEMFIGHTER_A,     L"Super Gem Fighter|pcf*.07|", INVALID_UNIT_VALUE },
        { SVCPLUSA_A,       L"SVC PlusA|svc-p2pl.bin|", INVALID_UNIT_VALUE },
        { VHUNT2_A,         L"Vampire Hunter 2|vh2j.09|", INVALID_UNIT_VALUE },
        { VSAV_A,           L"Vampire Savior|vm3*.10b|", INVALID_UNIT_VALUE },
        { VSAV2_A,          L"Vampire Savior 2|vs2j.10|", INVALID_UNIT_VALUE },
        { WakuWaku7_A,      L"Waku Waku 7|225-p1.p1|", INVALID_UNIT_VALUE },
        { WINDJAMMERS_A,    L"Windjammers|065-p1.p1|", INVALID_UNIT_VALUE },
        { XMVSF_A,          L"XMVSF|xvs*.05*|", INVALID_UNIT_VALUE },
        { NEOGEO_A,         L"Unknown Game ROM|*.*|", INVALID_UNIT_VALUE },
    };

    // The following logic ensures that their last used selection is the default filter view.
    int nCurrentGameListIndex = 1; // 0 is for special data in OFN

    {
        int nLastUsedGFlag;
        TCHAR szLastDir[MAX_PATH];

        if (GetLastUsedDirectory(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, nullptr))
        {
            for (int nArrayPosition = 0; nArrayPosition < ARRAYSIZE(SupportedGameList); nArrayPosition++)
            {
                if (SupportedGameList[nArrayPosition].nInternalGameIndex == nLastUsedGFlag)
                {
                    szGameFileDef.Append(SupportedGameList[nArrayPosition].szGameFilterString);
                    SupportedGameList[nArrayPosition].nListedGameIndex = nCurrentGameListIndex++;
                    break;
                }
            }
        }
        else
        {
            // If we're here, that means that they have never used PalMod to load a game before.  Help them.
            CString strInfo;
            LPCTSTR pszParagraph1 = L"Howdy!  You appear to be new to PalMod.  Welcome!\n\n";
            LPCTSTR pszParagraph2 = L"The first step is to load the ROM for the game you care about. There are a lot of game ROMs out there: the filter in the bottom right of the Load ROM dialog that you will see next helps show the right one for your game.\n\n";

            TCHAR szGameFilter[MAX_DESCRIPTION_LENGTH];
            _tcsncpy(szGameFilter, SupportedGameList[0].szGameFilterString, ARRAYSIZE(szGameFilter));
            szGameFilter[MAX_DESCRIPTION_LENGTH - 1] = 0;
       
            LPTSTR pszPipe = _tcsstr(szGameFilter, L"|");

            if (pszPipe != nullptr)
            {
                // Truncate off the filter information
                pszPipe[0] = 0;
            }

            strInfo.Format(L"%s%sRight now this is going to be set to \'%s\' for the default game, \'%s\': you need to change that to the game you're interested in so that your ROM shows up.", pszParagraph1, pszParagraph2, szGameFilter, g_GameFriendlyName[SupportedGameList[0].nInternalGameIndex]);
            MessageBox(strInfo, GetHost()->GetAppName(), MB_ICONINFORMATION);
        }
    }

    for (int nArrayPosition = 0; nArrayPosition < ARRAYSIZE(SupportedGameList); nArrayPosition++)
    {
        if (SupportedGameList[nArrayPosition].nListedGameIndex == INVALID_UNIT_VALUE)
        {
            szGameFileDef.Append(SupportedGameList[nArrayPosition].szGameFilterString);
            SupportedGameList[nArrayPosition].nListedGameIndex = nCurrentGameListIndex++;
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
            for (const sSupportedGameList currentGame : SupportedGameList)
            {
                if (currentGame.nListedGameIndex == ofn.nFilterIndex)
                {
                    LoadGameFile(currentGame.nInternalGameIndex, (TCHAR*)ofn.lpstrFile);
                }
            }
        }
    }
}

void CPalModDlg::LoadGameFile(int nGameFlag, TCHAR* szFile)
{
    if (!VerifyMsg(eVerifyType::VM_FILECHANGE))
    {
        return;
    }

    ClearGameVar();

    CGameClass* GameGet = GetHost()->GetLoader()->LoadFile(nGameFlag, szFile);

    if (GameGet)
    {
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(szFile, GetHost()->GetCurrGame()->GetGameFlag());

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

bool CPalModDlg::LoadPaletteFromACT(LPCTSTR pszFileName)
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

        UINT8* pAct = new UINT8[nACTColorCount * 3];
        memset(pAct, 0, nACTColorCount * 3);

        ActFile.Read(pAct, nACTColorCount * 3);
        ActFile.Close();

        // Now consume those colors...
        const UINT8 nTotalPaletteCount = MainPalGroup->GetPalAmt();
        int nTotalNumberOfCurrentColors = 0;

        for (int iPalette = 0; iPalette < nTotalPaletteCount; iPalette++)
        {
            nTotalNumberOfCurrentColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
        }

        UINT16 iACTIndex = 0;
        UINT16 nCurrentPalette = 0;
        UINT16 nTotalColorsUsed = 0;
        bool fHaveLooped = false;
        int iCurrentIndexInPalette = 0;
        UINT8* pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

        UINT32 nBlackColorCount = 0;
        bool fStillStuckOnBlack = true;

        for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
        {
            pPal[(iCurrentIndexInPalette * 4)]      = MainPalGroup->ROUND_R(pAct[(iACTIndex * 3)]);
            pPal[(iCurrentIndexInPalette * 4) + 1]  = MainPalGroup->ROUND_G(pAct[(iACTIndex * 3) + 1]);
            pPal[(iCurrentIndexInPalette * 4) + 2]  = MainPalGroup->ROUND_B(pAct[(iACTIndex * 3) + 2]);

            // This code exists because Fighter Factory writes upside-down color tables.
            if (fStillStuckOnBlack &&
                (pPal[(iCurrentIndexInPalette * 4)] == 0) &&
                (pPal[(iCurrentIndexInPalette * 4) + 1] == 0) &&
                (pPal[(iCurrentIndexInPalette * 4) + 2] == 0))
            {
                nBlackColorCount++;
            }
            else
            {
                fStillStuckOnBlack = false;
            }

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
                    iCurrentIndexInPalette = 0;
                    pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                }
            }
        }

        if ((nBlackColorCount > 32) || (nBlackColorCount == nTotalNumberOfCurrentColors))
        {
            // TODO: Maybe ask the user before flipping?
            iACTIndex = nACTColorCount - 1;
            fHadToFlip = true;
            iCurrentIndexInPalette = 0;
            nCurrentPalette = 0;
            fHaveLooped = false;
            pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

            OutputDebugString(L"This appears to be a bogus SFF ACT... flipping our ACT table logic...\n");

            for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentColors; iAbsolutePaletteIndex++)
            {
                pPal[(iCurrentIndexInPalette * 4)]     = MainPalGroup->ROUND_R(pAct[(iACTIndex * 3)]);
                pPal[(iCurrentIndexInPalette * 4) + 1] = MainPalGroup->ROUND_G(pAct[(iACTIndex * 3) + 1]);
                pPal[(iCurrentIndexInPalette * 4) + 2] = MainPalGroup->ROUND_B(pAct[(iACTIndex * 3) + 2]);

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
                        break;
                    }
                    else
                    {
                        // advance to the next palette
                        nCurrentPalette++;
                        iCurrentIndexInPalette = 0;
                        pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                    }
                }
            }
        }

        ImgDispCtrl->UpdateCtrl();
        m_PalHost.UpdateAllPalCtrls();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        delete[] pAct;

        fSuccess = true;
        CString strStatus;
        if (fHadToFlip)
        {
            strStatus.Format(L"ACT appears to have a reversed color table: loaded %u colors backwards.", nTotalColorsUsed);
        }
        else
        {
            strStatus.Format(L"Loaded %u colors from %u color %s file.", nTotalColorsUsed, nACTColorCount, L"ACT");
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
        SetStatusText(CString(L"Failed loading ACT file."));
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPAL(LPCTSTR pszFileName)
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
                        UINT8* pPALFileData = new UINT8[dwDataSize];
                        if (mmioRead(hRIFFFile, (HPSTR)pPALFileData, dwDataSize) == dwDataSize)
                        {
                            // party.
                            ProcChange();

                            const UINT8 nActivePaletteCount = MainPalGroup->GetPalAmt();
                            const int nPALColorCount = (dwDataSize / 4);

                            UINT16 iPALDataIndex = 0;
                            UINT16 nCurrentPalette = 0;
                            UINT16 nTotalColorsUsed = 0;
                            bool fHaveLooped = false;
                            int iCurrentIndexInPalette = 0;
                            int nTotalNumberOfCurrentPaletteColors = 0;

                            for (UINT8 iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                            {
                                nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                            }

                            UINT8* pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                            for (int iAbsoluteColorIndex = 0; iAbsoluteColorIndex < nTotalNumberOfCurrentPaletteColors; iAbsoluteColorIndex++, nTotalColorsUsed++)
                            {
                                // copy over the RGB data, skipping the A value
                                pPal[(iCurrentIndexInPalette * 4)]     = MainPalGroup->ROUND_R(pPALFileData[(iPALDataIndex * 4)]);
                                pPal[(iCurrentIndexInPalette * 4) + 1] = MainPalGroup->ROUND_G(pPALFileData[(iPALDataIndex * 4) + 1]);
                                pPal[(iCurrentIndexInPalette * 4) + 2] = MainPalGroup->ROUND_B(pPALFileData[(iPALDataIndex * 4) + 2]);

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
                                        pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                    }
                                }
                            }

                            ImgDispCtrl->UpdateCtrl();
                            m_PalHost.UpdateAllPalCtrls();

                            UpdateMultiEdit(TRUE);
                            UpdateSliderSel();

                            fSuccess = true;
                            CString strStatus;
                            strStatus.Format(L"Loaded %u colors from %u color %s file.", nTotalColorsUsed, nPALColorCount, L"PAL");
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
        SetStatusText(CString(L"Failed loading PAL file."));
    }
    else if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(CString(L"Failed loading PAL file."));
    }

    return fSuccess;
}

bool CPalModDlg::LoadPaletteFromPNG(LPCTSTR pszFileName)
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
                UINT32 chunkLength;
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
                    UINT32 imageWidth, imageHeight;
                    READFROMFILEANDDECREMENT(&imageWidth, 4);
                    READFROMFILEANDDECREMENT(&imageHeight, 4);

                    imageWidth = _byteswap_ulong(imageWidth);
                    imageHeight = _byteswap_ulong(imageHeight);

                    char IHDRBuffer[5];
                    READFROMFILEANDDECREMENT(IHDRBuffer, sizeof(IHDRBuffer));
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    UINT32 bitDepth = IHDRBuffer[0];
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
                    char* paszPaletteData = new char[chunkLength];

                    READFROMFILEANDDECREMENT(paszPaletteData, chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(L"pngreader: processing PLTE header...\n");

                    const UINT8 nActivePaletteCount = MainPalGroup->GetPalAmt();
                    const int nPNGColorCount = (chunkLength / 3);

                    strInfo.Format(L"\tpngreader: processing %u colors...\n", nPNGColorCount);
                    OutputDebugString(strInfo);

                    int nTotalNumberOfCurrentPaletteColors = 0;

                    for (int iPalette = 0; iPalette < nActivePaletteCount; iPalette++)
                    {
                        nTotalNumberOfCurrentPaletteColors += MainPalGroup->GetPalDef(iPalette)->uPalSz;
                    }

                    UINT16 iPNGIndex = 0;
                    UINT16 nCurrentPalette = 0;
                    UINT16 nTotalColorsUsed = 0;
                    UINT32 nBlackColorCount = 0;
                    bool fStillStuckOnBlack = true;
                    bool fHaveLooped = false;
                    int iCurrentIndexInPalette = 0;
                    UINT8* pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;

                    for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++, nTotalColorsUsed++)
                    {
                        pPal[(iCurrentIndexInPalette * 4)]     = MainPalGroup->ROUND_R(paszPaletteData[(iPNGIndex * 3)]);
                        pPal[(iCurrentIndexInPalette * 4) + 1] = MainPalGroup->ROUND_G(paszPaletteData[(iPNGIndex * 3) + 1]);
                        pPal[(iCurrentIndexInPalette * 4) + 2] = MainPalGroup->ROUND_B(paszPaletteData[(iPNGIndex * 3) + 2]);
                           
                        // This code exists because Fighter Factory writes upside-down color tables.
                        if (fStillStuckOnBlack &&
                            (pPal[iCurrentIndexInPalette * 4] == 0) &&
                            (pPal[(iCurrentIndexInPalette * 4) + 1] == 0) &&
                            (pPal[(iCurrentIndexInPalette * 4) + 2] == 0))
                        {
                            nBlackColorCount++;
                        }
                        else
                        {
                            fStillStuckOnBlack = false;
                        }

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
                                iCurrentIndexInPalette = 0;
                                pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                            }
                        }
                    }

                    if ((nBlackColorCount > 32) || (nBlackColorCount == nTotalNumberOfCurrentPaletteColors))
                    {
                        // TODO: Maybe ask the user before flipping?
                        iPNGIndex = nPNGColorCount - 1;
                        fHadToFlip = true;

                        OutputDebugString(L"This appears to be a bogus SFF PNG... flipping our PNG table logic...\n");

                        iCurrentIndexInPalette = 0;
                        nCurrentPalette = 0;
                        fHaveLooped = false;
                        pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                        for (int iAbsolutePaletteIndex = 0; iAbsolutePaletteIndex < nTotalNumberOfCurrentPaletteColors; iAbsolutePaletteIndex++)
                        {
                            pPal[(iCurrentIndexInPalette * 4)] = MainPalGroup->ROUND_R(paszPaletteData[(iPNGIndex * 3)]);
                            pPal[(iCurrentIndexInPalette * 4) + 1] = MainPalGroup->ROUND_G(paszPaletteData[(iPNGIndex * 3) + 1]);
                            pPal[(iCurrentIndexInPalette * 4) + 2] = MainPalGroup->ROUND_B(paszPaletteData[(iPNGIndex * 3) + 2]);

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
                                    break;
                                }
                                else
                                {
                                    // advance to the next palette
                                    nCurrentPalette++;
                                    iCurrentIndexInPalette = 0;
                                    pPal = (UINT8*)MainPalGroup->GetPalDef(nCurrentPalette)->pPal;
                                }
                            }
                        }
                    }

                    ImgDispCtrl->UpdateCtrl();
                    m_PalHost.UpdateAllPalCtrls();

                    UpdateMultiEdit(TRUE);
                    UpdateSliderSel();

                    if (fHadToFlip)
                    {
                        strInfo.Format(L"PNG appears to have a reversed color table: loaded %u colors backwards.", nTotalColorsUsed);
                    }
                    else
                    {
                        strInfo.Format(L"Loaded %u colors from the %u color indexed %s file.", nTotalColorsUsed, nPNGColorCount, L"PNG");
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
        MessageBox(L"Error: This PNG file is not using indexed color.  PalMod cannot use it.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(CString(L"Failed loading PNG file."));
    }
    else if (!fSuccess)
    {
        MessageBox(L"Error: This is not a valid PNG file.", GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(CString(L"Failed loading PNG file."));
    }

    return fSuccess;
}

void CPalModDlg::OnImportPalette()
{
    if (bEnabled)
    {
        static LPCTSTR szOpenFilter[] = { L"Supported Palette Files|*.act;*.png;*.pal|"
                                          L"ACT Palette|*.act|"
                                          L"Indexed PNG|*.png|"
                                          L"Microsoft PAL|*.pal|"
                                          L"|" };

        CFileDialog PaletteLoad(TRUE, NULL, NULL, NULL, *szOpenFilter);

        if (PaletteLoad.DoModal() == IDOK)
        {
            CString strFileName = PaletteLoad.GetOFN().lpstrFile;
            bool fSuccess = false;

            TCHAR szExtension[_MAX_EXT];
            _tsplitpath(strFileName, nullptr, nullptr, nullptr, szExtension);

            if (_tcsicmp(szExtension, L".png") == 0)
            {
                LoadPaletteFromPNG(strFileName);
            }
            else if (_tcsicmp(szExtension, L".pal") == 0)
            {
                LoadPaletteFromPAL(strFileName);
            }
            else
            {
                LoadPaletteFromACT(strFileName);
            }
        }
    }
}

bool CPalModDlg::SavePaletteToACT(LPCTSTR pszFileName)
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
        int nActSz = k_nMaxColorsAllowed * 3;
        UINT8* pAct = new UINT8[nActSz];
        memset(pAct, 0, nActSz);

        UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        UINT8 nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        int nTotalColorsUsed = 0;
        for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
        {
            pAct[nTotalColorsUsed * 3] = pPal[nTotalColorsUsed * 4];
            pAct[nTotalColorsUsed * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
            pAct[nTotalColorsUsed * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
        }

        for (UINT8 nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlNextPage)
            {
                const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                for (int nActivePageIndex = 0; (nTotalColorsUsed < k_nMaxColorsAllowed) && (nActivePageIndex < nNextPageWorkingAmt); nActivePageIndex++)
                {
                    pAct[nTotalColorsUsed * 3] = pPal[nTotalColorsUsed * 4];
                    pAct[nTotalColorsUsed * 3 + 1] = pPal[nTotalColorsUsed * 4 + 1];
                    pAct[nTotalColorsUsed * 3 + 2] = pPal[nTotalColorsUsed * 4 + 2];
                    nTotalColorsUsed++;
                }
            }
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

    SetStatusText(CString(fSuccess ? "ACT file saved successfully." : "Error saving ACT file."));
    return fSuccess;
}

bool CPalModDlg::SavePaletteToGPL(LPCTSTR pszFileName)
{
    bool fSuccess = false;
    CFile GPLFile;

    // Save to GPL file.
    // In debug builds this will trigger what appears to be a bogus assert in CFile which is stating that
    // typeText is not supported.  But it is ... just appears to be a random bad assert.
    if (GPLFile.Open(pszFileName, CFile::modeCreate | CFile::modeWrite | CFile::typeText))
    {
        char szBuffer[MAX_PATH];

        // Write the header...
        strcpy(szBuffer, "GIMP Palette\n");
        GPLFile.Write(szBuffer, strlen(szBuffer));
        sprintf(szBuffer, "Name: %S\n", m_PalHost.GetPalName(0));
        GPLFile.Write(szBuffer, strlen(szBuffer));
        strcpy(szBuffer, "Columns: 0\n");
        GPLFile.Write(szBuffer, strlen(szBuffer));
        strcpy(szBuffer, "# Created by PalMod\n");
        GPLFile.Write(szBuffer, strlen(szBuffer));

        // Write out the colors...
        UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
        int nWorkingAmt = CurrPalCtrl->GetWorkingAmt();
        UINT8 nPalettePageCount;

        if (CurrPalCtrl->GetSelAmt() == 0) // they want everything
        {
            nPalettePageCount = m_PalHost.GetCurrentPageCount();
        }
        else
        {
            nPalettePageCount = 1;
        }

        // Skip the first color for GIMP's usage
        int nTotalColorsUsed = 1;
        for (; nTotalColorsUsed < nWorkingAmt; nTotalColorsUsed++)
        {
            sprintf(szBuffer, "%3u %3u %3u\n", pPal[nTotalColorsUsed * 4], pPal[nTotalColorsUsed * 4 + 1], pPal[nTotalColorsUsed * 4 + 2]);
            GPLFile.Write(szBuffer, strlen(szBuffer));
        }

        for (UINT8 nCurrentPage = 1; nCurrentPage < nPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlNextPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlNextPage)
            {
                const int nNextPageWorkingAmt = pPalCtrlNextPage->GetWorkingAmt();

                for (int nActivePageIndex = 0; nActivePageIndex < nNextPageWorkingAmt; nActivePageIndex++)
                {
                    sprintf(szBuffer, "%3u %3u %3u\n", pPal[nTotalColorsUsed * 4], pPal[nTotalColorsUsed * 4 + 1], pPal[nTotalColorsUsed * 4 + 2]);
                    GPLFile.Write(szBuffer, strlen(szBuffer));
                    nTotalColorsUsed++;
                }
            }
        }

        GPLFile.Close();
        fSuccess = true;
    }

    SetStatusText(CString(fSuccess ? L"GPL file saved successfully." : L"Error saving GPL file."));
    return fSuccess;
}

bool CPalModDlg::SavePaletteToPAL(LPCTSTR pszFileName)
{
    bool fSuccess = false;

    // Microsoft RIFF PAL file.  Used by the UNIST workflow supposedly
    HMMIO hRIFFFile = mmioOpen((LPTSTR)pszFileName, nullptr, MMIO_WRITE | MMIO_CREATE);

    if (hRIFFFile)
    {
        MMCKINFO mmckInfo;
        mmckInfo.fccType = mmioFOURCC('P', 'A', 'L', ' ');
        mmckInfo.cksize = 0;
        mmckInfo.dwFlags = MMIO_DIRTY;

        if (mmioCreateChunk(hRIFFFile, &mmckInfo, MMIO_CREATERIFF) == MMSYSERR_NOERROR)
        {
            MMCKINFO mmckInfoData;
            memset(&mmckInfoData, 0, sizeof(mmckInfoData));

            // Write out the current palette
            UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
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

    SetStatusText(CString(fSuccess ? "RIFF PAL file saved successfully." : "Error saving RIFF PAL file."));
    return fSuccess;
}

void CPalModDlg::OnExportPalette()
{
    static LPCTSTR szSaveFilter[] = { L"ACT Palette|*.act|"
                                      L"GIMP Palette File|*.gpl|"
                                      L"Microsoft PAL|*.pal|"
                                      L"|" };

    CFileDialog ActSave(FALSE, L"act", nullptr, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, *szSaveFilter);

    if (ActSave.DoModal() == IDOK)
    {
        CFile ActFile;

        CString szFile = ActSave.GetOFN().lpstrFile;

        TCHAR szExtension[_MAX_EXT];
        _tsplitpath(szFile, nullptr, nullptr, nullptr, szExtension);
        bool fSuccess = false;

        if (_tcsicmp(szExtension, L".gpl") == 0)
        {
            fSuccess = SavePaletteToGPL(ActSave.GetOFN().lpstrFile);
        }
        else if (_tcsicmp(szExtension, L".pal") == 0)
        {
            fSuccess = SavePaletteToPAL(ActSave.GetOFN().lpstrFile);
        }
        else
        {
            fSuccess = SavePaletteToACT(ActSave.GetOFN().lpstrFile);
        }
        
        if (!fSuccess)
        {
            CString strError;
            if (strError.LoadString(IDS_ERROR_SAVING_PALETTE_FILE))
            {
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }
}

void CPalModDlg::OnGetMinMaxInfo(MINMAXINFO* lpMMI)
{
    // TODO: Add your message handler code here and/or call default

    if (bCanMinMax)
    {
        //lpMMI->ptMinTrackSize = r
    }

    CDialog::OnGetMinMaxInfo(lpMMI);
}
