#include "StdAfx.h"
#include "GameLoad.h"
#include "..\CRC32.h"

#include "GameRegistry.h"

#include "Game_MVC2_D.h" // for Team View
#include "Game_MVC2_P.h" // for Cross Copy

#include "..\resource.h"
#include "..\palmod.h"

void StrRemoveNonASCII(wchar_t* pszOutput, uint32_t ccSize, LPCWSTR pszInput, bool fForceUpperCase /* = false*/)
{
    uint32_t iStrOutputIndex = 0;

    for (uint32_t iStrIndex = 0; iStrIndex < ccSize; iStrIndex++)
    {
        if (!pszInput[iStrIndex])
        {
            break;
        }

        if (((pszInput[iStrIndex] >= '0') && (pszInput[iStrIndex] <= '9')) || // numbers
            ((pszInput[iStrIndex] >= 'A') && (pszInput[iStrIndex] <= 'Z')))   // upper case
        {
            pszOutput[iStrOutputIndex++] = pszInput[iStrIndex];
        }
        else if ((pszInput[iStrIndex] >= 'a') && (pszInput[iStrIndex] <= 'z'))
        {
            if (fForceUpperCase)
            {
                pszOutput[iStrOutputIndex++] = pszInput[iStrIndex] - 32;
            }
            else
            {
                pszOutput[iStrOutputIndex++] = pszInput[iStrIndex];
            }
        }
    }

    pszOutput[iStrOutputIndex] = 0;
}

void StruprRemoveNonASCII(wchar_t* pszOutput, uint32_t ccSize, LPCWSTR pszInput)
{
    StrRemoveNonASCII(pszOutput, ccSize, pszInput, true);
}

BOOL CGameLoad::SetGame(int nGameFlag)
{
    if (KnownGameInfo::FindRuleDataForGameID(nGameFlag, GetRule, GetNextRule, GetRuleCtr, ResetRuleCtr))
    {
        return TRUE;
    }
    else
    {
        OutputDebugString(L"CGameLoad::SetGame:: BUGBUG: New game has not been properly added yet\n");
        return FALSE;
    }
}

CGameClass* CGameLoad::CreateGame(int nGameFlag, uint32_t nConfirmedROMSize, int nExtraGameData /* = 0 */, LPCWSTR pszFilePath /* = nullptr */)
{
    // IPS uses 24-bit values, so max patchable size is 16,777,215 bytes
    CGameClass::GameSizeAllowsIPSPatching(nConfirmedROMSize < 0xffffff);

    GameConstructor pGameConstructor = nullptr;
    if (KnownGameInfo::FindConstructorForGameID(nGameFlag, pGameConstructor))
    {
        return pGameConstructor(nConfirmedROMSize, nExtraGameData, pszFilePath);
    }
    else
    {
        OutputDebugString(L"CGameLoad::CreateGame:: BUGBUG: New game has not been properly added yet.\n");
        return nullptr;
    }
}

CGameClass* CGameLoad::LoadFile(int nGameFlag, wchar_t* pszLoadFile)
{
    CGameClass* OutGame = nullptr;

    CFile CurrFile;
    sFileRule CurrRule;

    if (!VerifyLocationIsUsable(pszLoadFile))
    {
        return nullptr;
    }

    if (!SetGame(nGameFlag))
    {
        return nullptr;
    }

    int nGameRule = 0;

    // Handle games that support multiple ROMs here
    wchar_t* pszFileNameLowercase = wcsrchr(pszLoadFile, L'\\');

    if (pszFileNameLowercase)
    {
        // Step forward to the filename
        pszFileNameLowercase++;
        _wcslwr(pszFileNameLowercase);

        KnownGameInfo::SetExtraLoadingDataForGame(nGameFlag, pszFileNameLowercase, nGameRule);
    }

    CurrRule = GetRule(nGameRule);

    GetHost()->GetPalModDlg()->SetStatusText(L"Opening file...");

    if (CurrFile.Open(pszLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ULONGLONG nGameFileLength = CurrFile.GetLength();
        bool isSafeToRunGame = (static_cast<short int>(CurrRule.uVerifyVar) == -1) || (nGameFileLength == CurrRule.uVerifyVar);

        if (!isSafeToRunGame)
        {
            if (CurrRule.fHasAltName &&
                pszFileNameLowercase &&
                (_wcsicmp(pszFileNameLowercase, CurrRule.szAltFileName) == 0) &&
                (CurrRule.uAltVerifyVar == nGameFileLength))
            {
                OutputDebugString(L"CGameLoad::LoadFile: Confirmed this file is safe to load due to an alternate acceptable file size.\n");
                isSafeToRunGame = true;
            }
        }

        if (!isSafeToRunGame) // we could hook people trying to load Venture here... file size is 4194304
        {
            CString strQuestion;

            strQuestion.Format(L"Internal warning: Game file size is 0x%x, but 0x%x is the expected size. You may just need to update the value of m_nExpectedGameROMSize for your game.\n", static_cast<int>(nGameFileLength), CurrRule.uVerifyVar);
            OutputDebugString(strQuestion);

            if ((nGameFlag == JOJOS_A) && (nGameRule == 50) && (nGameFileLength == 4194304))
            {
                (void)strQuestion.LoadString(IDS_ROMISVENTURE);
            }
            else
            {
                strQuestion.Format(IDS_ROMMISMATCH_CHECK, CurrRule.uVerifyVar, nGameFileLength);
            }

            switch (MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_YESNO | MB_ICONSTOP | MB_DEFBUTTON2))
            {
                case IDYES:
                {
                    isSafeToRunGame = true;
                    break;
                }
                default:
                {
                    break;
                }
            }
        }

        if (isSafeToRunGame)
        {
            OutGame = CreateGame(nGameFlag, static_cast<uint32_t>(nGameFileLength), nGameRule, pszLoadFile);

            if (OutGame)
            {
                OutGame->SetLoadedPathOrFile(pszLoadFile);

                uint32_t crcValue = 0;
                bool fNeedToValidateCRC = false;

                // CRC calculation is slow, so only calculate if we need it.
                if ((OutGame->GetKnownCRC32DatasetsForGame(&fNeedToValidateCRC).size() > 1) &&
                    fNeedToValidateCRC)
                {
                    // Only calculate this if desired since it's time-expensive
                    OutputDebugString(L"Calculating crc...\n");
                    crcValue = CRC32_BlockChecksum(&CurrFile, static_cast<int>(nGameFileLength));

                    CString strMsg;
                    strMsg.Format(L"\tCRC32 for %s is 0x%x\n", pszLoadFile, crcValue);
                    OutputDebugString(strMsg);
                }

                OutGame->SetSpecificValuesForCRC(&CurrFile, crcValue);

                if (OutGame->LoadFile(&CurrFile, 0))
                {
                    OutGame->SetIsDir(FALSE);
                    //nSaveLoadSucc++;
                }
                else
                {
                    safe_delete(OutGame);
                }
            }
        }
        else
        {
            OutputDebugString(L"CGameLoad::LoadFile: ERROR: ROM is the wrong size.  Rejecting loading this ROM.\n");
        }

        CurrFile.Abort();
    }
    else
    {
        if (pszFileNameLowercase)
        {
            CString strError;
            strError.Format(L"The file \"%s\" can not be opened.  Another application is probably using it.", pszFileNameLowercase);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONSTOP);
        }
    }

    strLoadSaveStr.Format(OutGame ? IDS_LOADSAVE_SUCCESS : IDS_LOADSAVE_FAILURE);

    return OutGame;
}

CGameClass* CGameLoad::LoadDir(int nGameFlag, wchar_t* pszLoadDir)
{
    CGameClass* OutGame = NULL;
    sFileRule CurrRule;

    CFile CurrFile;
    CString strCurrFile;
    bool fShownFileError = false;

    //Track load save count
    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    if (!VerifyLocationIsUsable(pszLoadDir))
    {
        OutputDebugString(L"CGameLoad::LoadDir: location isn't usable: failing load.\r\n");
        return nullptr;
    }

    if (!SetGame(nGameFlag))
    {
        OutputDebugString(L"CGameLoad::LoadDir: game could not be loaded: failing load.\r\n");
        return nullptr;
    }

    if (ResetRuleCtr == nullptr)
    {
        // This isn't a directory-based game: something is wrong
        OutputDebugString(L"CGameLoad::LoadDir: game load configuration error: failing load.\r\n");
        return nullptr;
    }

    ResetRuleCtr();

    uint32_t nCurrRuleCtr = GetRuleCtr();

    GetHost()->GetPalModDlg()->SetStatusText(L"Opening files...");

    while (nCurrRuleCtr != INVALID_UNIT_VALUE)
    {
        nSaveLoadCount++;

        CurrRule = GetNextRule();

        strCurrFile.Format(L"%s\\%s", pszLoadDir, CurrRule.szFileName);

        BOOL fFileOpened = CurrFile.Open(strCurrFile, CFile::modeRead | CFile::typeBinary);

        if (!fFileOpened && CurrRule.fHasAltName)
        {
            CString strAltFileName;

            OutputDebugString(L"Loading game via alternate filenames...\n");

            strAltFileName.Format(L"%s\\%s", pszLoadDir, CurrRule.szAltFileName);

            fFileOpened = CurrFile.Open(strAltFileName, CFile::modeRead | CFile::typeBinary);
        }

        if (fFileOpened)
        {
            bool fActualFileSizeIsSafe = false;
            ULONGLONG nGameFileLength = CurrFile.GetLength();
            uint32_t nConfirmedVerifyVar = CurrRule.uVerifyVar;
            
            if (((short int)CurrRule.uVerifyVar == -1) ||
                ((CurrRule.uVerifyVar == nGameFileLength)))
            {
                fActualFileSizeIsSafe = true;
            }
            else if (CurrRule.fHasAltName && (CurrRule.uAltVerifyVar == nGameFileLength))
            {
                fActualFileSizeIsSafe = true;
                nConfirmedVerifyVar = CurrRule.uAltVerifyVar;
            }

            if (!fActualFileSizeIsSafe)
            {
                CString strError;
                strError.Format(L"The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n\nShould we try to load this file anyways?", strCurrFile.GetString(), CurrRule.uVerifyVar, static_cast<int>(CurrFile.GetLength()));
                fActualFileSizeIsSafe = (MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_YESNO | MB_ICONERROR) == IDYES);
                strError.Format(L"WARNING: The file \"%s\" was found but is not the expected size.  We expect the file to be 0x%x bytes, but this file is 0x%x bytes.\n", strCurrFile.GetString(), CurrRule.uVerifyVar, static_cast<int>(CurrFile.GetLength()));
                OutputDebugString(strError);
            }

            if (fActualFileSizeIsSafe)
            {
                if (!OutGame)
                {
                    OutGame = CreateGame(nGameFlag, nConfirmedVerifyVar);

                    if (OutGame)
                    {
                        OutGame->SetIsDir();
                        OutGame->SetLoadedPathOrFile(pszLoadDir);
                    }
                }

                if (OutGame && OutGame->LoadFile(&CurrFile, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;
                }
                else
                {
                    nSaveLoadErr++;
                }
            }
            else
            {
                nSaveLoadErr++;
            }

            CurrFile.Abort();
        }
        else
        {
            if ((nGameFlag == SFIII3_D) && (nCurrRuleCtr == 0x21))
            {
                OutputDebugString(L"CGameLoad::LoadDir : Gouki doesn't exist for SF3-DC: skipping.\n");
                nSaveLoadSucc++;
            }
            else if (OutGame && 
                   (((nGameFlag == MVC2_D) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                    ((nGameFlag == MVC2_D_16) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                    ((nGameFlag == MVC2_P) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION))))
            {
                OutputDebugString(L"CGameLoad::LoadDir : Team View for MvC2. Ignoring file open.\n");
                if (OutGame->LoadFile(nullptr, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;
                }
            }
            else
            {
                CString strError;
                strError.Format(L"Could not find required file:\n    %s\n at the specified location:\n    %s\nPlease make sure the path is correct.", CurrRule.szFileName, pszLoadDir);

                if ((nGameFlag == MVC2_D) || (nGameFlag == MVC2_D_16) || (nGameFlag == MVC2_P))
                {
                    strError.Append(L"\n\nPlease note that PalMod can not read game CD ISOs.  You need to mount those and extract the files out before PalMod can use them.");
                }

                OutputDebugString(strError);
                OutputDebugString(L"\n");

                if (!fShownFileError)
                {
                    fShownFileError = true;
                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
                }

                nSaveLoadErr++;
            }
        }

        nCurrRuleCtr = GetRuleCtr();
    }

    CString strErrorText = L"";
    if (nSaveLoadErr)
    {
        strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
    }
    
    strLoadSaveStr.Format((nSaveLoadCount == 1) ? IDS_LOADGAME_SINGLE : IDS_LOADGAME_MULTI, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());

    // Perhaps we could be less strict here, but -- we also will crash elsewhere if we don't have the full PL set.
    return (nSaveLoadErr == 0) ? OutGame : nullptr;
}

bool CGameLoad::IsLocationOnReadOnlyDrive(LPCWSTR pszLocation, LPWSTR pszDrivePath /*= nullptr*/, uint32_t ccPathSize /*= 0*/)
{
    bool fIsMediaReadOnly = false;
    wchar_t szPath[MAX_PATH];

    // strip the directory down to actual path since that's what GetVolumeInformation requires
    wcsncpy_s(szPath, pszLocation, ARRAYSIZE(szPath));
    szPath[ARRAYSIZE(szPath) - 1] = '\0';

    wchar_t* pszSlash = wcsstr(szPath, L"\\");

    if (pszSlash != nullptr)
    {
        pszSlash[1] = 0;
    }

    DWORD dwFlags = 0;
    if (GetVolumeInformation(szPath, nullptr, 0, nullptr, 0, &dwFlags, nullptr, 0))
    {
        fIsMediaReadOnly = (dwFlags & FILE_READ_ONLY_VOLUME);
    }

    if (pszDrivePath)
    {
        wcsncpy(pszDrivePath, szPath, ccPathSize);
    }

    return fIsMediaReadOnly;
}

bool CGameLoad::VerifyLocationIsUsable(LPCWSTR pszLocation)
{
    bool fLocationIsOKToUse = !IsLocationOnReadOnlyDrive(pszLocation);

    if (!fLocationIsOKToUse)
    {
        CString strQuestion;

        if (strQuestion.LoadStringW(IDS_ERROR_NOTWRITABLE_DRIVE))
        {
            int nUserAnswer = SHMessageBoxCheck(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OKCANCEL | MB_ICONWARNING,
                                                  IDOK, L"{B31487B9-3B3B-441e-BC98-7C83714C0AEB}");

            fLocationIsOKToUse = (nUserAnswer != IDCANCEL);
        }

    }

    return fLocationIsOKToUse;
}

bool CGameLoad::SaveGame(CGameClass* CurrGame)
{
    CFile FileSave;
    bool fSuccess = true;

    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    SetGame(CurrGame->GetGameFlag());

    uint32_t nFileAmt = CurrGame->GetFileAmt();
    CString strErrorFile;

    if (CurrGame->GetIsDir())
    {
        LPCWSTR pszLoadDir = CurrGame->GetLoadedDirPathOnly();
        std::vector<bool> rgFileIsChanged = CurrGame->GetFileChangeTrackingArray();
        BOOL fWasGameChangedInSession = CurrGame->WasGameFileChangedInSession();
        BOOL fGameMapsUnitsToFiles = CurrGame->GetGameMapsUnitsToFiles();

        for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
        {
            if (fGameMapsUnitsToFiles ? rgFileIsChanged.at(nFileCtr) : fWasGameChangedInSession)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                bool fIsMvC2TeamView = ((CurrGame->GetGameFlag() == MVC2_D) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                                       ((CurrGame->GetGameFlag() == MVC2_D_16) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION)) ||
                                       ((CurrGame->GetGameFlag() == MVC2_P) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION));

                if (!fIsMvC2TeamView)
                {
                    CString szLoad;
                    sFileRule CurrRule = GetRule(nFileCtr | RULE_COUNTER_MASK);

                    szLoad.Format(L"%s\\%s", pszLoadDir, CurrRule.szFileName);

                    CFileException pError;
                    BOOL fFileOpened = FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary, &pError);

                    if (!fFileOpened && CurrRule.fHasAltName)
                    {
                        CString strAltFileName;

                        OutputDebugString(L"Saving game via alternate filenames...\n");

                        strAltFileName.Format(L"%s\\%s", pszLoadDir, CurrRule.szAltFileName);

                        fFileOpened = FileSave.Open(strAltFileName, CFile::modeReadWrite | CFile::typeBinary, &pError);
                    }

                    if (fFileOpened)
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            nSaveLoadSucc++;

                            if (fGameMapsUnitsToFiles)
                            {
                                // Mark as clean so we don't save it out until it gets dirtied again.
                                rgFileIsChanged.at(nFileCtr) = false;
                            }

                        }
                        else
                        {
                            strErrorFile = szLoad;
                            nSaveLoadErr++;
                        }

                        if (FileSave.m_hFile != CFile::hFileNull)
                        {
                            FileSave.Abort();
                        }
                    }
                    else
                    {
                        wchar_t szError[MAX_PATH];
                        pError.GetErrorMessage(szError, MAX_PATH);
                        MessageBox(g_appHWnd, szError, GetHost()->GetAppName(), MB_ICONERROR);

                        strErrorFile = szLoad;
                        nSaveLoadErr++;
                    }
                }
                else
                {
                    // Ignore the virtual team view
                    // Mark as clean so we don't save it out until it gets dirtied again.
                    rgFileIsChanged.at(nFileCtr) = false;
                    nSaveLoadSucc++;
                }
            }
        }
    }
    else
    {
        LPCWSTR pszLoadFile = CurrGame->GetLoadedDirOrFile();

        if (CurrGame->WasGameFileChangedInSession())
        {
            CFileException pError;

            nSaveLoadCount = 1;

            if (FileSave.Open(pszLoadFile, CFile::modeReadWrite | CFile::typeBinary, &pError))
            {
                if (CurrGame->SaveFile(&FileSave, 0))
                {
                    nSaveLoadSucc++;
                }

                FileSave.Abort();
            }
            else
            {
                wchar_t szError[MAX_PATH];
                pError.GetErrorMessage(szError, MAX_PATH);
                MessageBox(g_appHWnd, szError, GetHost()->GetAppName(), MB_ICONERROR);

                strErrorFile = pszLoadFile;
                nSaveLoadErr = 1;
            }
        }
    }

    if (!strErrorFile.IsEmpty())
    {
        CString strError;
        UINT uErrorString;

        fSuccess = false;

        if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
        {
            uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            strError.Format(uErrorString, strErrorFile);
        }
        else
        {
            LPCWSTR pszLoadDir = CurrGame->GetLoadedDirOrFile();

            wchar_t szPath[MAX_PATH];
            if (IsLocationOnReadOnlyDrive(pszLoadDir, szPath, ARRAYSIZE(szPath)))
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_CDI;
                strError.Format(uErrorString, szPath);
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
                strError.Format(uErrorString, strErrorFile.GetString());
            }
        }

        MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
    }

    if (nSaveLoadCount > 0)
    {
        if (nSaveLoadCount == 1)
        {
            if (nSaveLoadErr)
            {
                strLoadSaveStr = L"Game patching failed.";
                fSuccess = false;
            }
            else
            {
                strLoadSaveStr = L"Game patched successfully.";
            }
        }
        else
        {
            CString strErrorText = L"";
            if (nSaveLoadErr)
            {
                strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
                fSuccess = false;
            }

            strLoadSaveStr.Format((nSaveLoadCount == 1) ? IDS_PATCHGAME_SINGLE : IDS_PATCHGAME_MULTI, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }

        if (nSaveLoadErr == 0)
        {
            CurrGame->ResetFileChangeTrackingArray();
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_PATCH_EMPTY))
        {
            strLoadSaveStr = L"error loading string";
        }
    }

    return fSuccess;
}

void CGameLoad::CrosscopyGame_DCPS2(CGameClass* CurrGame)
{
    CString strTargetDirectory;

    if (GetHost()->GetPalModDlg()->SetLoadDir(&strTargetDirectory))
    {
        CFile FileSave;

        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        SetGame(CurrGame->GetGameFlag());

        const uint32_t nFileAmt = CurrGame->GetFileAmt();
        CString strErrorFile;
        const bool fIsDreamcast = CurrGame->GetGameFlag() == MVC2_D;

        if (CurrGame->GetIsDir()) // just a sanity check
        {
            for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
            {
                nSaveLoadCount++;

                // Ignore the virtualized team view
                if (nFileCtr != MVC2_D_TEAMVIEW_LOCATION)
                {
                    CString szLoad;
                    sFileRule CurrRule = fIsDreamcast ? CGame_MVC2_P::GetRule(nFileCtr | RULE_COUNTER_MASK) : CGame_MVC2_D::GetRule(nFileCtr | RULE_COUNTER_MASK);

                    szLoad.Format(L"%s\\%s", strTargetDirectory.GetString(), CurrRule.szFileName);

                    if (FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary))
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            nSaveLoadSucc++;
                        }
                        else
                        {
                            strErrorFile = szLoad;
                            nSaveLoadErr++;
                        }

                        if (FileSave.m_hFile != CFile::hFileNull)
                        {
                            FileSave.Abort();
                        }
                    }
                    else
                    {
                        strErrorFile = szLoad;
                        nSaveLoadErr++;
                    }
                }
                else
                {
                    // Ignore the virtual team view
                    nSaveLoadSucc++;
                }
            }
        }

        if (!strErrorFile.IsEmpty())
        {
            CString strError;
            UINT uErrorString;
            if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
            {
                uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
            }

            strError.Format(uErrorString, strErrorFile);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
        }

        CString strErrorText = L"";
        if (nSaveLoadErr)
        {
            strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
        }

        if (nSaveLoadCount == 1)
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_SINGLE_SUCCESS, strErrorText.GetString());
        }
        else
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_MULTI_SUCCESS, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR))
        {
            strLoadSaveStr = L"<resource loading failure>";
        }
    }
}

void CGameLoad::CrosscopyGame_Steam(CGameClass* CurrGame)
{
    CString strQuestion = L"This copy will copy the *saved* data from your Dreamcast files to the Steam version of the ROM.\n\n"
                          L"If you have not already saved/patched your data so that it can be copied, please Cancel now and Patch.\n\n"
                          L"Press OK when you are ready.  You will then select your Steam ROM and the palettes will be copied over.";

    if (MessageBox(g_appHWnd, strQuestion, GetHost()->GetAppName(), MB_OKCANCEL | MB_DEFBUTTON2) == IDCANCEL)
    {
        strLoadSaveStr = L"Remember to patch so the files are ready.";
        return;
    }

    CFileDialog OpenDialog(
        TRUE,
        nullptr,
        nullptr,
        OFN_FILEMUSTEXIST | OFN_HIDEREADONLY,
        L"MvC2 For Steam|mvsc2.21D3D8A7|"
    );

    OPENFILENAME& pOFN = OpenDialog.GetOFN();

    if (OpenDialog.DoModal() == IDOK)
    {
        OPENFILENAME ofn = OpenDialog.GetOFN();
        CFile TargetFile;

        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        const uint32_t nFileAmt = CurrGame->GetFileAmt();
        CString strErrorFile;

        if (CurrGame->GetIsDir()) // just a sanity check
        {
            struct sDCToSteamMapEntry
            {
                const std::wstring strFileName;
                const uint32_t nDreamcastOffset;
                const uint32_t nSteamOffset;
                const uint32_t nPaletteLength;
            };

            const std::vector<sDCToSteamMapEntry> rgPortMap =
            {
                { L"PL00_DAT.BIN", 0x0006E440, 0x082CC60, 0x00000720 }, // Ryu
                { L"PL01_DAT.BIN", 0x000c7180, 0x09049A0, 0x00000D40 }, // Zangief
                { L"PL02_DAT.BIN", 0x00082200, 0x0997A20, 0x00000720 }, // Guile
                { L"PL03_DAT.BIN", 0x000b4b00, 0x0A5D320, 0x00001780 }, // Morrigan
                { L"PL04_DAT.BIN", 0x00108b40, 0x0B77B60, 0x00000A00 }, // Anakaris
                { L"PL05_DAT.BIN", 0x000c7600, 0x0C4FE20, 0x00000720 }, // Strider Hiryu
                { L"PL06_DAT.BIN", 0x000d6760, 0x0D36F80, 0x00001280 }, // Cyclops
                { L"PL07_DAT.BIN", 0x000ea500, 0x0E32D20, 0x00000840 }, // Wolverine
                { L"PL08_DAT.BIN", 0x000f1120, 0x0F34940, 0x00000740 }, // Psylocke
                { L"PL09_DAT.BIN", 0x00da9c0, 0x10201E0, 0x00000F40 }, // Iceman
                { L"PL0A_DAT.BIN", 0x00d5c60, 0x1107480, 0x00000A40 }, // Rogue
                { L"PL0B_DAT.BIN", 0x00dd880, 0x11F58A0, 0x00000960 }, // Captain America
                { L"PL0C_DAT.BIN", 0x00c9ca0, 0x12D44C0, 0x00001300 }, // Spider-Man
                { L"PL0D_DAT.BIN", 0x00109760, 0x13EEF80, 0x00000740 }, // Hulk
                { L"PL0E_DAT.BIN", 0x00113600, 0x1512E20, 0x00000720 }, // Venom
                { L"PL0F_DAT.BIN", 0x00102220, 0x1625A40, 0x00001C00 }, // Dr.Doom
                { L"PL10_DAT.BIN", 0x00105fa0, 0x173D7C0, 0x000008A0 }, // Tron Bonne
                { L"PL11_DAT.BIN", 0x000cb320, 0x1819B40, 0x00000760 }, // Jill
                { L"PL12_DAT.BIN", 0x000ecea0, 0x19176C0, 0x000008E0 }, // Hayato
                { L"PL13_DAT.BIN", 0x000f8ce0, 0x1A20D00, 0x00000960 }, // Ruby Heart
                { L"PL14_DAT.BIN", 0x001090a0, 0x1B3A8C0, 0x00000B00 }, // SonSon
                { L"PL15_DAT.BIN", 0x001085c0, 0x1C53DE0, 0x00000760 }, // Amingo
                { L"PL16_DAT.BIN", 0x00e4600, 0x1D48E20, 0x00000720 }, // Marrow
                { L"PL17_DAT.BIN", 0x00fba00, 0x1E55220, 0x00000720 }, // Cable
                { L"PL18_DAT.BIN", 0x00db7e0, 0x1F41800, 0x00000720 }, // Abyss(Form 1)
                { L"PL19_DAT.BIN", 0x0007cd60, 0x1FCED80, 0x00000720 }, // Abyss(Form 2)
                { L"PL1A_DAT.BIN", 0x00c9580, 0x20A8DA0, 0x00004840 }, // Abyss(Form 3)
                { L"PL1B_DAT.BIN", 0x006fd00, 0x2129520, 0x00004840 }, // Chun-Li
                { L"PL1C_DAT.BIN", 0x00082900, 0x21BC920, 0x00000720 }, // Megaman
                { L"PL1D_DAT.BIN", 0x0005f5c0, 0x2230DE0, 0x00000960 }, // Roll
                { L"PL1E_DAT.BIN", 0x00074d80, 0x22BA5A0, 0x00000720 }, // Akuma
                { L"PL1F_DAT.BIN", 0x00109a80, 0x23D4AA0, 0x00000720 }, // B.B.Hood
                { L"PL20_DAT.BIN", 0x001168e0, 0x24FC100, 0x00000A40 }, // Felicia
                { L"PL21_DAT.BIN", 0x0005c980, 0x25691A0, 0x00000720 }, // Charlie
                { L"PL22_DAT.BIN", 0x00b6360, 0x2630380, 0x00000DC0 }, // Sakura
                { L"PL23_DAT.BIN", 0x003db40, 0x267EB60, 0x00000AC0 }, // Dan
                { L"PL24_DAT.BIN", 0x008f3c0, 0x271EBE0, 0x00000880 }, // Cammy
                { L"PL25_DAT.BIN", 0x00a5f00, 0x27D5F20, 0x00000720 }, // Dhalsim
                { L"PL26_DAT.BIN", 0x0074080, 0x285B0A0, 0x00000AC0 }, // M.Bison
                { L"PL27_DAT.BIN", 0x0075ac0, 0x28E1AE0, 0x00000E80 }, // Ken
                { L"PL28_DAT.BIN", 0x00d8f20, 0x29CB740, 0x00000B40 }, // Gambit
                { L"PL29_DAT.BIN", 0x011c040, 0x2AF8860, 0x00000720 }, // Juggernaut
                { L"PL2A_DAT.BIN", 0x00fd8c0, 0x2C070E0, 0x00000740 }, // Storm
                { L"PL2B_DAT.BIN", 0x00f09c0, 0x2D089E0, 0x00002C00 }, // Sabretooth
                { L"PL2C_DAT.BIN", 0x00106760, 0x2E1FF80, 0x00000720 }, // Magneto
                { L"PL2D_DAT.BIN", 0x00d7d40, 0x2F08560, 0x00000D00 }, // Shuma-Gorath
                { L"PL2E_DAT.BIN", 0x00ed980, 0x30091A0, 0x00000A20 }, // War Machine
                { L"PL2F_DAT.BIN", 0x010aea0, 0x3124EC0, 0x00002040 }, // Silver Samurai
                { L"PL30_DAT.BIN", 0x00ebb40, 0x3223B60, 0x00001F00 }, // Omega Red
                { L"PL31_DAT.BIN", 0x00104c60, 0x3339480, 0x00000760 }, // Spiral
                { L"PL32_DAT.BIN", 0x00119aa0, 0x34652C0, 0x00000940 }, // Colossus
                { L"PL33_DAT.BIN", 0x00f0b80, 0x35683A0, 0x00000E00 }, // Iron Man
                { L"PL34_DAT.BIN", 0x00115820, 0x368E840, 0x00000A20 }, // Sentinel
                { L"PL35_DAT.BIN", 0x001166c0, 0x37B5EE0, 0x000016E0 }, // Blackheart
                { L"PL36_DAT.BIN", 0x00ddc60, 0x38A4C80, 0x00000920 }, // Thanos
                { L"PL37_DAT.BIN", 0x00d3c40, 0x3989460, 0x00000840 }, // Jin
                { L"PL38_DAT.BIN", 0x00de380, 0x3A793A0, 0x00000B80 }, // Captain Commando
                { L"PL39_DAT.BIN", 0x00eeae0, 0x3B78B00, 0x00000720 }, // Wolverine(Bone Claw)
                { L"PL3A_DAT.BIN", 0x00055300, 0x3BDEB20, 0x00000740 }, // Servbot
            };

            if (TargetFile.Open(ofn.lpstrFile, CFile::modeWrite | CFile::typeBinary))
            {
                if (TargetFile.GetLength() != 112635968)
                {
                    MessageBox(g_appHWnd, L"Error: This is not the expected Steam ROM.  You will need an updated version of PalMod for this.", GetHost()->GetAppName(), MB_OK | MB_ICONSTOP);
                    strLoadSaveStr = L"Invalid file specified.";
                    return;
                }

                for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
                {
                    nSaveLoadCount++;

                    // Ignore the virtualized team view
                    if (nFileCtr != MVC2_D_TEAMVIEW_LOCATION)
                    {
                        sFileRule CurrRule = CGame_MVC2_D::GetRule(nFileCtr | RULE_COUNTER_MASK);
                        CString strSourceFile;

                        strSourceFile.Format(L"%s\\%s", CurrGame->GetLoadedDirPathOnly(), CurrRule.szFileName);

                        for (uint32_t nTargetUnit = 0; nTargetUnit < rgPortMap.size(); nTargetUnit++)
                        {
                            if (_wcsicmp(rgPortMap[nTargetUnit].strFileName.c_str(), CurrRule.szFileName) == 0)
                            {
                                CFile SourceFile;

                                if (SourceFile.Open(strSourceFile, CFile::modeRead | CFile::typeBinary))
                                {
                                    BYTE* pByte = new BYTE[rgPortMap[nTargetUnit].nPaletteLength];

                                    SourceFile.Seek(rgPortMap[nTargetUnit].nDreamcastOffset, CFile::begin);
                                    SourceFile.Read(pByte, rgPortMap[nTargetUnit].nPaletteLength);

                                    SourceFile.Abort();

                                    TargetFile.Seek(rgPortMap[nTargetUnit].nSteamOffset, CFile::begin);
                                    TargetFile.Write(pByte, rgPortMap[nTargetUnit].nPaletteLength);

                                    safe_delete_array(pByte);

                                    nSaveLoadSucc++;
                                }
                                else
                                {
                                    strErrorFile = strSourceFile;
                                    nSaveLoadErr++;
                                }
                                break;
                            }
                        }
                    }
                    else
                    {
                        // Ignore the virtual team view
                        nSaveLoadSucc++;
                    }
                }
            }
            else
            {
                strErrorFile = ofn.lpstrFile;
                nSaveLoadErr++;
            }

            if (TargetFile.m_hFile != CFile::hFileNull)
            {
                TargetFile.Abort();
            }
        }

        if (!strErrorFile.IsEmpty())
        {
            CString strError;
            UINT uErrorString;
            if ((GetFileAttributes(strErrorFile)) == INVALID_FILE_ATTRIBUTES)
            {
                uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
            }
            else
            {
                uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
            }

            strError.Format(uErrorString, strErrorFile);
            MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
        }

        CString strErrorText = L"";
        if (nSaveLoadErr)
        {
            strErrorText.Format((nSaveLoadErr == 1) ? IDS_LOADERROR_SINGLE : IDS_LOADERROR_MULTI, nSaveLoadErr);
        }

        if (nSaveLoadCount == 1)
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_SINGLE_SUCCESS, strErrorText.GetString());
        }
        else
        {
            strLoadSaveStr.Format(IDS_CROSSCOPY_MULTI_SUCCESS, nSaveLoadSucc, nSaveLoadCount, strErrorText.GetString());
        }
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_CROSSCOPY_NODIR))
        {
            strLoadSaveStr = L"<resource loading failure>";
        }
    }
}

void CGameLoad::SavePatchFile(CGameClass* CurrGame)
{
    SetGame(CurrGame->GetGameFlag());
    uint32_t nNumberOfChangesSaved = 0;
    
    if (!CurrGame->GetIsDir())
    {
        if (CurrGame->WasGameFileChangedInSession())
        {
            static LPCWSTR szPatchFilter[] = { L"IPS Patch File|*.ips|"
                                               L"|" };

            LPCWSTR pszLoadedFile = CurrGame->GetLoadedDirOrFile();
            LPCWSTR pszFileName = wcsrchr(pszLoadedFile, L'\\');
            pszFileName = (pszFileName) ? (pszFileName + 1) : L"unknown";
            CString strSuggestedFileName = pszFileName;
            strSuggestedFileName += L".ips";

            CFileDialog PatchFileLoad(FALSE, L"ips", strSuggestedFileName.GetString(), OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY, *szPatchFilter);

            if (PatchFileLoad.DoModal() == IDOK)
            {
                CString strFileName = PatchFileLoad.GetOFN().lpstrFile;
                CFile PatchFile;
                nSaveLoadCount = 1;

                if (PatchFile.Open(strFileName, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                {
                    nNumberOfChangesSaved = CurrGame->SavePatchFile(&PatchFile, 0);
                    PatchFile.Abort();
                }
                else
                {
                    CString strError;
                    UINT uErrorString;
                    if ((GetFileAttributes(strFileName)) == INVALID_FILE_ATTRIBUTES)
                    {
                        uErrorString = IDS_ERROR_FILENOTFOUND_FORMAT;
                    }
                    else
                    {
                        uErrorString = IDS_ERROR_NOTWRITABLE_FORMAT;
                    }

                    strError.Format(uErrorString, strFileName);
                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
                }
            }
        }
    }

    if (nNumberOfChangesSaved > 0)
    {
        strLoadSaveStr.Format((nNumberOfChangesSaved == 1) ? IDS_IPS_SINGLE : IDS_IPS_MULTI, nNumberOfChangesSaved);
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_IPS_EMPTY))
        {
            strLoadSaveStr = L"error loading string";
        }
    }
}

void CGameLoad::SaveMultiplePatchFiles(CGameClass* CurrGame, CString strTargetDirectory)
{
    SetGame(CurrGame->GetGameFlag());
    uint32_t nNumberOfChangesSaved = 0;
    BOOL fGameWasChanged = CurrGame->WasGameFileChangedInSession();

    if (fGameWasChanged && CurrGame->GetIsDir())
    {
        nNumberOfChangesSaved = CurrGame->SaveMultiplePatchFiles(strTargetDirectory);
    }

    if (nNumberOfChangesSaved > 0)
    {
        strLoadSaveStr.Format((nNumberOfChangesSaved == 1) ? IDS_IPS_SINGLE : IDS_IPS_MULTI, nNumberOfChangesSaved);
    }
    else
    {
        if (!strLoadSaveStr.LoadString(IDS_IPS_EMPTY))
        {
            strLoadSaveStr = L"error loading string";
        }
    }
}
