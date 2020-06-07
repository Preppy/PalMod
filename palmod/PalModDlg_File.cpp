#include "stdafx.h"
#include "PalMod.h"
#include "PalModDlg.h"
#include "RegProc.h"

#include "Game\GameDef.h"

constexpr auto c_strLastUsedPath = _T("LastUsedPath");
constexpr auto c_strLastUsedGFlag = _T("LastUsedGFlag");

void CPalModDlg::LoadGameDir(int nGameFlag, CHAR* szLoadDir)
{
    CGameClass* GameGet = GetHost()->GetLoader()->LoadDir(nGameFlag, szLoadDir);

    if (GameGet)
    {
        ClearGameVar();
        GetHost()->SetGameClass(GameGet);

        //Set the last used location
        SetLastUsedDirectory(szLoadDir, GetHost()->GetCurrGame()->GetGameFlag());

        //The game has loaded OK
        PostGameLoad();
    }
    else
    {
        CString strError;
        strError.LoadString(IDS_ERROR_LOADING_GAME);
        MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
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
    strDebugInfo.Format("CPalModDlg::PostGameLoad : Successfully loaded files for '%s'\n", g_GameFriendlyName[ProgHost->GetCurrGame()->GetGameFlag()]);
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
    if (VerifyMsg(VM_FILECHANGE))
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
        if (VerifyMsg(VM_FILECHANGE))
        {
            if (nLastUsedGFlag > NUM_GAMES || nLastUsedGFlag < 0)
            {
                CString strError;
                strError.LoadString(IDS_ERROR_PARAMETERS);
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
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

                    strcpy(ptszPath, szPath);
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
    CString szGameFileDef = "";

    struct sSupportedGameList
    {
        int nInternalGameIndex;
        LPCSTR szGameFilterString;
        int nListedGameIndex;
    };

    // NOTE: If you add a multiple-ROM option below, you will also need to update
    // CGameLoad::LoadFile to pass the appropriate gameflag to that game.
    sSupportedGameList SupportedGameList[] =
    {
        { COTA_A, "COTA xmn.05a|*.05a|", INVALID_UNIT_VALUE },
        { Garou_A, "Garou|kf.neo-sma|", INVALID_UNIT_VALUE },
        { JOJOS_A, "Jojos: HUDs and menus (*.50), Characters (*.51)|50;51|", INVALID_UNIT_VALUE },
        { MSH_A, "MSH: Characters (*.05), Portraits (*.06b)|*.05;*.06b|", INVALID_UNIT_VALUE },
        { MSHVSF_A, "MSHVSF: Characters (*.06a), Portraits (*.07b)|*.06a;*.07b|", INVALID_UNIT_VALUE },
        { MVC_A, "MVC mvc.06|*.06|", INVALID_UNIT_VALUE },
        { MVC2_A, "MVC2 Arcade|*.dat;*.bin|", INVALID_UNIT_VALUE },
        { SFIII3_A, "SFIII3 51 Rom|51|", INVALID_UNIT_VALUE },
        { SSF2T_A, "SSF2T: Portraits (*.03c), Characters (*.04a)|*.03c;*.04a|", INVALID_UNIT_VALUE },
        { SFA3_A, "SFA3 sz3.09c|*.09c|", INVALID_UNIT_VALUE },
        { XMVSF_A, "XMVSF xvs.05a|*.05a|", INVALID_UNIT_VALUE },
        { NEOGEO_A, "Unknown NEO•GEO|*.*|", INVALID_UNIT_VALUE },
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
    }

    for (int nArrayPosition = 0; nArrayPosition < ARRAYSIZE(SupportedGameList); nArrayPosition++)
    {
        if (SupportedGameList[nArrayPosition].nListedGameIndex == INVALID_UNIT_VALUE)
        {
            szGameFileDef.Append(SupportedGameList[nArrayPosition].szGameFilterString);
            SupportedGameList[nArrayPosition].nListedGameIndex = nCurrentGameListIndex++;
        }
    }

    szGameFileDef.Append("|"); //End

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

        for (sSupportedGameList currentGame : SupportedGameList)
        {
            if (currentGame.nListedGameIndex == ofn.nFilterIndex)
            {
                LoadGameFile(currentGame.nInternalGameIndex, (CHAR*)ofn.lpstrFile);
            }
        }
    }
}

void CPalModDlg::LoadGameFile(int nGameFlag, CHAR* szFile)
{
    if (!VerifyMsg(VM_FILECHANGE))
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
        strError.LoadString(IDS_ERROR_LOADING_GAME);
        MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
    }

    //Since we loaded a DIR, show status of load
    SetStatusText(GetHost()->GetLoader()->GetLoadSaveStr());
}

void CPalModDlg::OnBnBlink()
{
    Blink();
}

void CPalModDlg::OnLoadAct()
{
    if (bEnabled)
    {
        CFileDialog ActLoad(TRUE, NULL, NULL, NULL, "ACT Palette (*.ACT)| *.ACT||");

        if (ActLoad.DoModal() == IDOK)
        {
            CFile ActFile;

            if (ActFile.Open(ActLoad.GetOFN().lpstrFile, CFile::modeRead | CFile::typeBinary))
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

                // This is commented out because it doesn't work.  
                // Doing this on load involves updating the non-current page.  But that's only done
                // on a temporary basis: when the user changes pages, the updates get discarded.
                for (UINT8 nCurrentPage = 0; nCurrentPage < nPalettePageCount; nCurrentPage++)
                {
                    CJunk* pPalCtrlCurrentPage = m_PalHost.GetPalCtrl(nCurrentPage);

                    if (pPalCtrlCurrentPage)
                    {
                        const int nCurrentPageWorkingAmt = pPalCtrlCurrentPage->GetWorkingAmt();

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

                delete[] pAct;

                SetStatusText(CString("ACT file Loaded succesfully!"));

                if (nPalettePageCount > 1)
                {
                    if (CRegProc::GetColorsPerLine() == PAL_MAXWIDTH_8COLORSPERLINE)
                    {
                        MessageBox("Heads-up: you are loading an ACT for a multipage palette.  PalMod can only use the ACT to update the colors that are currently being displayed.\n\nYou may want to switch to 16 color per line mode in the Settings menu: that will display the maximum 256 colors at once.", GetHost()->GetAppName(), MB_ICONERROR);
                    }
                }
            }
            else
            {
                CString strError;
                strError.LoadString(IDS_ERROR_LOADING_ACT_FILE);
                MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
            }
        }
    }
}

void CPalModDlg::OnSaveAct()
{
    CFileDialog ActSave(FALSE, ".act", NULL, 4 | 2, "ACT Palette (*.ACT)| *.act|| All Files (*.*)| *.*||");

    if (ActSave.DoModal() == IDOK)
    {
        CFile ActFile;

        CString szFile = ActSave.GetOFN().lpstrFile;

        if (ActFile.Open(ActSave.GetOFN().lpstrFile, CFile::modeCreate | CFile::modeWrite | CFile::typeBinary))
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

            SetStatusText(CString("ACT file saved succesfully!"));
        }
        else
        {
            CString strError;
            strError.LoadString(IDS_ERROR_SAVING_ACT_FILE);
            MessageBox(strError, GetHost()->GetAppName(), MB_ICONERROR);
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
