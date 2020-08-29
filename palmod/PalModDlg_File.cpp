#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"
#include <mmiscapi.h> // RIFF .PAL support

#include "Game\GameDef.h"

constexpr auto c_strLastUsedPath = _T("LastUsedPath");
constexpr auto c_strLastUsedGFlag = _T("LastUsedGFlag");

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

    //Get the game's palette display width
    nPalWMax = ProgHost->GetCurrGame()->GetPalDisplayW();

    CString strDebugInfo;
    strDebugInfo.Format(_T("CPalModDlg::PostGameLoad : Successfully loaded files for '%s'\n"), g_GameFriendlyName[ProgHost->GetCurrGame()->GetGameFlag()]);
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

void CPalModDlg::OnGetCol()
{
    bGetCol = !bGetCol;

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_GETCOLORONSELECT, MF_BYCOMMAND | (bGetCol ? MF_CHECKED : MF_UNCHECKED));

    //Enable/Disable get color button
    GetDlgItem(IDC_BNEWCOL)->EnableWindow(bGetCol && !bAutoSetCol);
}

void CPalModDlg::OnAutoSetCol()
{
    bAutoSetCol = !bAutoSetCol;

    CMenu* pSettMenu = GetMenu()->GetSubMenu(3); //3 = settings menu

    pSettMenu->CheckMenuItem(ID_AUTOSETCOL, MF_BYCOMMAND | (bAutoSetCol ? MF_CHECKED : MF_UNCHECKED));

    UpdateSliderSel();
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

void CPalModDlg::LoadLastDir()
{
    int nLastUsedGFlag;
    BOOL bIsDir;
    TCHAR szLastDir[MAX_PATH];

    if (GetLastUsedDirectory(szLastDir, sizeof(szLastDir), &nLastUsedGFlag, FALSE, &bIsDir))
    {
        if (VerifyMsg(eVerifyType::VM_FILECHANGE))
        {
            if (nLastUsedGFlag > NUM_GAMES || nLastUsedGFlag < 0)
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
        SetStatusText(CString("Could not load previous file or directory"));
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
    CString szGameFileDef = _T("");

    struct sSupportedGameList
    {
        int nInternalGameIndex;
        LPCTSTR szGameFilterString;
        int nListedGameIndex;
    };

    // NOTE: If you add a multiple-ROM option below, you will also need to update
    // CGameLoad::LoadFile to pass the appropriate gameflag to that game.
    sSupportedGameList SupportedGameList[] =
    {
        { COTA_A, _T("COTA xmn.05a|*.05a|"), INVALID_UNIT_VALUE },
        { CVS2_A, _T("CVS2 (SNKGD_SL.bin)|*.bin|"), INVALID_UNIT_VALUE },
        { Garou_A, _T("Garou|kf.neo-sma|"), INVALID_UNIT_VALUE },
        { Garou_S, _T("Garou for Steam (p1.bin)|p1.bin|"), INVALID_UNIT_VALUE },
        { JOJOS_A, _T("Jojos (Japan): HUDs and menus (*.50), Characters (*.51)|50;51|"), INVALID_UNIT_VALUE },
        { KarnovsR_A, _T("Karnov's Revenge|066-p1.p1|"), INVALID_UNIT_VALUE },
        { KOF98_A, _T("KOF98|242-p2.sp2;kof98_p2.rom|"), INVALID_UNIT_VALUE },
        // normal ROM name is 265-p2.sp2, but the fightcade ROM name is 265.p2.bin
        { KOF02_A, _T("KOF02 (265-p2.sp2 or 265-p2.bin)|265*p2*|"), INVALID_UNIT_VALUE },
        { KOF02UM_S, _T("KOF02UM (pal_a.bin)|*.bin|"), INVALID_UNIT_VALUE },
        { MSH_A, _T("MSH: Characters (*.05), Portraits (*.06b)|*.05;*.06b|"), INVALID_UNIT_VALUE },
        { MSHVSF_A, _T("MSHVSF: Characters (*.06a), Portraits (*.07b)|*.06a;*.07b|"), INVALID_UNIT_VALUE },
        { MVC_A, _T("MVC Euro 980112 (mvc.06), Euro 980123 (mvc.06a)|*.06*|"), INVALID_UNIT_VALUE },
        { MVC2_A, _T("MVC2 Arcade (MarvelVsCapcom2_unlocked.bin)|*.dat;*.bin|"), INVALID_UNIT_VALUE },
        { REDEARTH_A, _T("Red Earth|31|"), INVALID_UNIT_VALUE },
        { SAMSHO5SP_A, _T("Samurai Shodown 5 Special|272-p1*.p1;p1*.bin|"), INVALID_UNIT_VALUE},
        { SFIII3_A, _T("SFIII3 Arcade|51|"), INVALID_UNIT_VALUE },
        { SFA2_A, _T("SFA2: Characters (sz*.07), Bonus (sz*.08)|*.07;*.08|"), INVALID_UNIT_VALUE },
        { SFA3_A, _T("SFA3 sz3.09c|*.09c|"), INVALID_UNIT_VALUE },
        { SSF2T_A, _T("SSF2T: Portraits (*.03c), Characters (*.04a)|*.03c;*.04a|"), INVALID_UNIT_VALUE },
        { GEMFIGHTER_A, _T("Super Gem Fighter|pcf*.07|"), INVALID_UNIT_VALUE },
        { SVCPLUSA_A, _T("SVC PlusA|svc-p2pl.bin|"), INVALID_UNIT_VALUE },
        { XMVSF_A, _T("XMVSF xvs.05a|*.05a|"), INVALID_UNIT_VALUE },
        { NEOGEO_A, _T("Unknown NEO•GEO|*.*|"), INVALID_UNIT_VALUE },
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
            LPCTSTR pszParagraph1 = _T("Howdy!  You appear to be new to PalMod.  Welcome!\n\n");
            LPCTSTR pszParagraph2 = _T("The first step is to load the ROM for the game you care about. There are a lot of game ROMs out there: the filter in the bottom right of the Load ROM dialog helps show the right one for your game.\n\n");

            TCHAR szGameFilter[MAX_DESCRIPTION_LENGTH];
            _tcsncpy(szGameFilter, SupportedGameList[0].szGameFilterString, ARRAYSIZE(szGameFilter));
            szGameFilter[MAX_DESCRIPTION_LENGTH - 1] = 0;
       
            LPTSTR pszPipe = _tcsstr(szGameFilter, _T("|"));

            if (pszPipe != nullptr)
            {
                // Truncate off the filter information
                pszPipe[0] = 0;
            }

            strInfo.Format(_T("%s%sRight now this is going to be set to \'%s\' for the default game, \'%s\': you probably want to change that to the game you're interested in so that your ROM shows up."), pszParagraph1, pszParagraph2, szGameFilter, g_GameFriendlyName[SupportedGameList[0].nInternalGameIndex]);
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

    szGameFileDef.Append(_T("|")); //End

    CFileDialog OpenDialog(
        TRUE,
        NULL,
        NULL,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY,
        szGameFileDef
    );

    if (OpenDialog.DoModal() == IDOK)
    {
        OPENFILENAME ofn = OpenDialog.GetOFN();

        for (const sSupportedGameList currentGame : SupportedGameList)
        {
            if (currentGame.nListedGameIndex == ofn.nFilterIndex)
            {
                LoadGameFile(currentGame.nInternalGameIndex, (TCHAR*)ofn.lpstrFile);
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

    CGameClass* GameGet = GetHost()->GetLoader()->LoadFile(nGameFlag, szFile);//szGet.GetBuffer());

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

        UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
        int nFileSz = (int)ActFile.GetLength();
        int nACTColorCount = 256; // An ACT by default has 256 (768 bytes / 3 bytes per color) colors.

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

        UINT8 nPalettePageCount = m_PalHost.GetCurrentPageCount();
        UINT16 iACTIndex = 0;
        int nCurrentPageWorkingAmt = 0;

        // This doesn't work as it could.
        // Doing this on load involves updating the non-current page.  But that's only done
        // on a temporary basis: when the user changes pages, the updates get discarded.
        for (UINT8 nCurrentPage = 0; nCurrentPage < nPalettePageCount; nCurrentPage++)
        {
            CJunk* pPalCtrlCurrentPage = m_PalHost.GetPalCtrl(nCurrentPage);

            if (pPalCtrlCurrentPage)
            {
                nCurrentPageWorkingAmt = pPalCtrlCurrentPage->GetWorkingAmt();

                for (int iActivePageIndex = 0; iActivePageIndex < nCurrentPageWorkingAmt; iActivePageIndex++)
                {
                    pPal[iActivePageIndex * 4] = MainPalGroup->ROUND_R(pAct[iACTIndex * 3]);
                    pPal[iActivePageIndex * 4 + 1] = MainPalGroup->ROUND_G(pAct[iACTIndex * 3 + 1]);
                    pPal[iActivePageIndex * 4 + 2] = MainPalGroup->ROUND_B(pAct[iACTIndex * 3 + 2]);
                    pPalCtrlCurrentPage->UpdateIndex(iActivePageIndex);

                    if (++iACTIndex >= nACTColorCount)
                    {
                        // If the palette is larger than our ACT, loop it.
                        iACTIndex = 0;
                    }
                }
            }
        }

        ImgDispCtrl->UpdateCtrl();
        CurrPalCtrl->UpdateCtrl();

        UpdateMultiEdit(TRUE);
        UpdateSliderSel();

        delete[] pAct;

        fSuccess = true;
        CString strStatus;
        strStatus.Format(_T("Loaded %u colors from %u color %s file."), nCurrentPageWorkingAmt, nACTColorCount, _T("ACT"));
        SetStatusText(strStatus);

        if (nPalettePageCount > 1)
        {
            if (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE)
            {
                MessageBox(_T("Heads-up: you are loading an ACT for a multipage palette.  PalMod can only use the ACT to update the colors that are currently being displayed.\n\nYou may want to switch to 16 color per line mode in the Settings menu: that will display the maximum 256 colors at once."), GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }

    if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(CString(_T("Failed loading ACT file.")));
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

                            UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
                            int nPALColorCount = (dwDataSize / 4);

                            UINT8 nPalettePageCount = m_PalHost.GetCurrentPageCount();
                            UINT16 iPALDataIndex = 0;
                            int nCurrentPageWorkingAmt = 0;

                            // This doesn't work as it could.
                            // Doing this on load involves updating the non-current page.  But that's only done
                            // on a temporary basis: when the user changes pages, the updates get discarded.
                            // It might be wise to save the other pages when we load palettes.
                            for (UINT8 nCurrentPage = 0; nCurrentPage < nPalettePageCount; nCurrentPage++)
                            {
                                CJunk* pPalCtrlCurrentPage = m_PalHost.GetPalCtrl(nCurrentPage);

                                if (pPalCtrlCurrentPage)
                                {
                                    nCurrentPageWorkingAmt = pPalCtrlCurrentPage->GetWorkingAmt();

                                    for (int iActivePageIndex = 0; iActivePageIndex < nCurrentPageWorkingAmt; iActivePageIndex++)
                                    {
                                        // copy over the RGB data, skipping the A value
                                        pPal[iActivePageIndex * 4] =     MainPalGroup->ROUND_R(pPALFileData[iPALDataIndex * 4]);
                                        pPal[iActivePageIndex * 4 + 1] = MainPalGroup->ROUND_G(pPALFileData[iPALDataIndex * 4 + 1]);
                                        pPal[iActivePageIndex * 4 + 2] = MainPalGroup->ROUND_B(pPALFileData[iPALDataIndex * 4 + 2]);
                                        pPalCtrlCurrentPage->UpdateIndex(iActivePageIndex);

                                        if (++iPALDataIndex >= nPALColorCount)
                                        {
                                            // If the palette is larger than our ACT, loop it.
                                            iPALDataIndex = 0;
                                        }
                                    }
                                }
                            }

                            ImgDispCtrl->UpdateCtrl();
                            CurrPalCtrl->UpdateCtrl();

                            UpdateMultiEdit(TRUE);
                            UpdateSliderSel();

                            fSuccess = true;
                            CString strStatus;
                            strStatus.Format(_T("Loaded %u colors from %u color %s file."), nCurrentPageWorkingAmt, nPALColorCount - 1, _T("PAL"));
                            SetStatusText(strStatus);

                            if (nPalettePageCount > 1)
                            {
                                if (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE)
                                {
                                    MessageBox(_T("Heads-up: you are loading a PAL for a multipage palette.  PalMod can only use the PAL to update the colors that are currently being displayed.\n\nYou may want to switch to 16 color per line mode in the Settings menu: that will display the maximum 256 colors at once."), GetHost()->GetAppName(), MB_ICONERROR);
                                }
                            }
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
        MessageBox(_T("Error: This is not a Microsoft PAL RIFF file."), GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(CString(_T("Failed loading PAL file.")));
    }
    else if (!fSuccess)
    {
        CString strError;
        if (strError.LoadString(IDS_ERROR_LOADING_PALETTE_FILE))
        {
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
        }
        SetStatusText(CString(_T("Failed loading PAL file.")));
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
            int nPNGColorCount = 0;
            bool fHadToFlip = false;

            OutputDebugString(_T("this is a png.... reading chunks now...\n"));

#define READFROMFILEANDDECREMENT(buffer, cbchunk) { if (cbchunk > nFileSizeRemaining) {break;} PNGFile.Read(buffer, cbchunk); nFileSizeRemaining -= cbchunk; }

            while (nFileSizeRemaining > 0)
            {
                UINT32 chunkLength;
                READFROMFILEANDDECREMENT(&chunkLength, sizeof(chunkLength));
                chunkLength = _byteswap_ulong(chunkLength);
                char chunkType[5];
                READFROMFILEANDDECREMENT(chunkType, sizeof(chunkType) - 1);
                chunkType[sizeof(chunkType) - 1] = 0;

                strInfo.Format(_T("Chunk: %4S, size 0x%x\n"), chunkType, chunkLength);
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
                        OutputDebugString(_T("pngreader: grayscale: PLTE cannot be present.\n"));
                        break;
                    }
                    else if (colorType == 3) // indexed color
                    {
                        OutputDebugString(_T("pngreader: indexed: PLTE must be present.\n"));
                    }
                    else // 2 - truecolor and 6 - truecolor with alpha
                    {
                        OutputDebugString(_T("pngreader: truecolor: PLTE may be present.\n"));
                    }
                }
                else if (strcmp(chunkType, "PLTE") == 0)
                {
                    fFoundPaletteData = true;
                    char* paszPaletteData = new char[chunkLength];

                    READFROMFILEANDDECREMENT(paszPaletteData, chunkLength);
                    READFROMFILEANDDECREMENT(crcBuffer, sizeof(crcBuffer));

                    OutputDebugString(_T("pngreader: processing PLTE header...\n"));

                    UINT8* pPal = (UINT8*)CurrPalCtrl->GetBasePal();
                    nPNGColorCount = (chunkLength / 3);

                    strInfo.Format(_T("\tpngreader: processing %u colors...\n"), nPNGColorCount);
                    OutputDebugString(strInfo);

                    // We can only update the active page: ignore further pages.
                    CJunk* pPalCtrlCurrentPage = m_PalHost.GetPalCtrl(0);

                    if (pPalCtrlCurrentPage)
                    {
                        const int nCurrentPageWorkingAmt = pPalCtrlCurrentPage->GetWorkingAmt();
                        UINT16 iPNGIndex = 0;

                        UINT32 nBlackColorCount = 0;
                        bool fStillStuckOnBlack = true;
                        for (int iActivePageIndex = 0; iActivePageIndex < nCurrentPageWorkingAmt; iActivePageIndex++)
                        {
                            pPal[iActivePageIndex * 4] = MainPalGroup->ROUND_R(paszPaletteData[iPNGIndex * 3]);
                            pPal[iActivePageIndex * 4 + 1] = MainPalGroup->ROUND_G(paszPaletteData[(iPNGIndex * 3) + 1]);
                            pPal[iActivePageIndex * 4 + 2] = MainPalGroup->ROUND_B(paszPaletteData[(iPNGIndex * 3) + 2]);
                            pPalCtrlCurrentPage->UpdateIndex(iActivePageIndex);

                            // This code exists because Fighter Factory writes upside-down color tables.
                            if (fStillStuckOnBlack &&
                                (pPal[iActivePageIndex * 4] == 0) &&
                                (pPal[(iActivePageIndex * 4) + 1] == 0) &&
                                (pPal[(iActivePageIndex * 4) + 2] == 0))
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
                            }
                        }

                        if ((nBlackColorCount > 32) || (nBlackColorCount == nCurrentPageWorkingAmt))
                        {
                            // TODO: Maybe ask the use before flipping?
                            UINT16 iPNGIndex = nPNGColorCount - 1;
                            fHadToFlip = true;

                            OutputDebugString(_T("This appears to be a bogus SFF PNG... flipping our PNG table logic...\n"));

                            for (int iActivePageIndex = 0; iActivePageIndex < nCurrentPageWorkingAmt; iActivePageIndex++)
                            {
                                pPal[iActivePageIndex * 4] = MainPalGroup->ROUND_R(paszPaletteData[iPNGIndex * 3]);
                                pPal[iActivePageIndex * 4 + 1] = MainPalGroup->ROUND_G(paszPaletteData[(iPNGIndex * 3) + 1]);
                                pPal[iActivePageIndex * 4 + 2] = MainPalGroup->ROUND_B(paszPaletteData[(iPNGIndex * 3) + 2]);
                                pPalCtrlCurrentPage->UpdateIndex(iActivePageIndex);

                                // This code exists because Fighter Factory writes upside-down color tables.
                                if (--iPNGIndex >= nPNGColorCount)
                                {
                                    // If the palette is larger than our PNG, loop it.
                                    iPNGIndex = nCurrentPageWorkingAmt;
                                }
                            }
                        }

                        ImgDispCtrl->UpdateCtrl();
                        CurrPalCtrl->UpdateCtrl();

                        UpdateMultiEdit(TRUE);
                        UpdateSliderSel();

                        if (fHadToFlip)
                        {
                            strInfo.Format(_T("PNG appears to have a reversed color table: loaded %u colors backwards."), min(nCurrentPageWorkingAmt, nPNGColorCount));
                        }
                        else
                        {
                            strInfo.Format(_T("Loaded %u colors from the %u color indexed %s file."), nCurrentPageWorkingAmt, nPNGColorCount, _T("PNG"));
                        }
                        SetStatusText(strInfo);

                        fSuccess = true;

                        UINT8 nPalettePageCount = m_PalHost.GetCurrentPageCount();
                        if (nPalettePageCount > 1)
                        {
                            if (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE)
                            {
                                MessageBox(_T("Heads-up: you are loading a PNG for a multipage palette.  PalMod can only use the PNG to update the colors that are currently being displayed.\n\nYou may want to switch to 16 color per line mode in the Settings menu: that will display the maximum 256 colors at once."), GetHost()->GetAppName(), MB_ICONERROR);
                            }
                        }
                    }

                    safe_delete_array(paszPaletteData);
                    break;
                }
                else if (strcmp(chunkType, "IDAT") == 0)
                {
                    // PLTE data if present must be present before the IDAT chunks
                    OutputDebugString(_T("pngreader: IDAT section hit: PLTE cannot be present from here on out.\n"));
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

            OutputDebugString(_T("pngreader: done!\n"));
        }

        PNGFile.Close();
    }

    if (!fFoundPaletteData)
    {
        MessageBox(_T("Error: This PNG file is not using indexed color.  PalMod cannot use it."), GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(CString(_T("Failed loading PNG file.")));
    }
    else if (!fSuccess)
    {
        MessageBox(_T("Error: This is not a valid PNG file."), GetHost()->GetAppName(), MB_ICONERROR);
        SetStatusText(CString(_T("Failed loading PNG file.")));
    }

    return fSuccess;
}

void CPalModDlg::OnImportPalette()
{
    if (bEnabled)
    {
        static LPCTSTR szOpenFilter[] = { _T("Supported Palette Files|*.act;*.png;*.pal|")
                                          _T("ACT Palette|*.act|")
                                          _T("Indexed PNG|*.png|")
                                          _T("Microsoft PAL|*.pal|")
                                          _T("|") };

        CFileDialog PaletteLoad(TRUE, NULL, NULL, NULL, *szOpenFilter);

        if (PaletteLoad.DoModal() == IDOK)
        {
            CString strFileName = PaletteLoad.GetOFN().lpstrFile;
            bool fSuccess = false;

            TCHAR szExtension[_MAX_EXT];
            _tsplitpath(strFileName, nullptr, nullptr, nullptr, szExtension);

            if (_tcsicmp(szExtension, _T(".png")) == 0)
            {
                LoadPaletteFromPNG(strFileName);
            }
            else if (_tcsicmp(szExtension, _T(".pal")) == 0)
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

void CPalModDlg::OnExportPalette()
{
    static LPCTSTR szSaveFilter[] = { _T("ACT Palette|*.act|")
                                      _T("GIMP Palette File|*.gpl|")
                                      _T("|") };

    CFileDialog ActSave(FALSE, _T(".act"), nullptr, OFN_HIDEREADONLY | OFN_OVERWRITEPROMPT, *szSaveFilter);

    if (ActSave.DoModal() == IDOK)
    {
        CFile ActFile;

        CString szFile = ActSave.GetOFN().lpstrFile;

        TCHAR szExtension[_MAX_EXT];
        _tsplitpath(szFile, nullptr, nullptr, nullptr, szExtension);

        if (_tcsicmp(szExtension, _T(".gpl")) == 0)
        {
            // Save to GPL file.
            if (ActFile.Open(ActSave.GetOFN().lpstrFile, CFile::modeCreate | CFile::modeWrite | CFile::typeText))
            {
                char szBuffer[MAX_PATH];

                // Write the header...
                strcpy(szBuffer, "GIMP Palette\n");
                ActFile.Write(szBuffer, strlen(szBuffer));
                sprintf(szBuffer, "Name: %S\n", m_PalHost.GetPalName(0));
                ActFile.Write(szBuffer, strlen(szBuffer));
                strcpy(szBuffer, "Columns: 0\n");
                ActFile.Write(szBuffer, strlen(szBuffer));
                strcpy(szBuffer, "# Created by PalMod\n");
                ActFile.Write(szBuffer, strlen(szBuffer));

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
                    ActFile.Write(szBuffer, strlen(szBuffer));
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
                            ActFile.Write(szBuffer, strlen(szBuffer));
                            nTotalColorsUsed++;
                        }
                    }
                }

                ActFile.Close();

                SetStatusText(CString("GPL file saved successfully!"));
            }
        }
        else if (ActFile.Open(ActSave.GetOFN().lpstrFile, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
        {
            // We are writing this file in accordance with the spec as found here--
            //   https://www.adobe.com/devnet-apps/photoshop/fileformatashtml/#50577411_pgfId-1070626
            // In theory we should be able to just write a 768 byte file, but there appears to be a bug in PhotoShop's
            // ACT import wherein they mangle the parse for 768b files.  Thus we are forcibly using 772b here.

            int nActSz = 256 * 3;
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

                    for (int nActivePageIndex = 0; nActivePageIndex < nNextPageWorkingAmt; nActivePageIndex++)
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

            SetStatusText(CString("ACT file saved successfully!"));
        }
        else
        {
            CString strError;
            if (strError.LoadString(IDS_ERROR_SAVING_ACT_FILE))
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
