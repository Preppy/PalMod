#include "StdAfx.h"
#include "GameLoad.h"
#include "..\CRC32.h"

#include "Game_DanKuGa_A.h"
#include "Game_DevMode_DIR.h"
#include "Game_LandMaker_A.h"
#include "Game_LandMaker_P.h"
#include "Game_MAGICALDROPII_A.h"
#include "Game_MAGICALDROPIII_A.h"
#include "Game_NeoBomberman_A.h"
#include "Game_NEOGEO_A.h"
#include "Game_GEMFIGHTER_A.h"
#include "Game_SPF2T_A.h"
#include "Game_Windjammers_A.h"

#include "..\resource.h"
#include "..\palmod.h"

// Once gamedef.h is updated, you need to update this and in palmoddlg_file.cpp
static_assert(ARRAYSIZE(g_GameFriendlyName) == NUM_GAMES, "Increment this value check after you add in the new header above and the relevent game loading functions below.");

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

CGameLoad::CGameLoad()
{
}

CGameLoad::~CGameLoad()
{
}

BOOL CGameLoad::SetGame(int nGameFlag)
{
    switch (nGameFlag)
    {
    case DANKUGA_A:
    {
        GetRuleCtr = &CGame_DanKuGa_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_DanKuGa_A_DIR::ResetRuleCtr;
        GetRule = &CGame_DanKuGa_A_DIR::GetRule;
        GetNextRule = &CGame_DanKuGa_A_DIR::GetNextRule;

        return TRUE;
    }
    case DEVMODE_DIR:
    {
        GetRule = &CGame_DevMode_DIR::GetRule;
        return TRUE;
    }
    case GEMFIGHTER_A:
    {
        GetRule = &CGame_GEMFIGHTER_A::GetRule;
        return TRUE;
    }
    case LandMaker_A:
    {
        GetRule = &CGame_LandMaker_A::GetRule;

        return TRUE;
    }
    case LandMaker_P:
    {
        GetRuleCtr = &CGame_LandMaker_P::GetRuleCtr;
        ResetRuleCtr = &CGame_LandMaker_P::ResetRuleCtr;
        GetRule = &CGame_LandMaker_P::GetRule;
        GetNextRule = &CGame_LandMaker_P::GetNextRule;
        
        return TRUE;
    }
    case MAGICALDROPII_A:
    {
        GetRule = &CGame_MAGICALDROPII_A::GetRule;
        return TRUE;
    }
    case MAGICALDROPIII_A:
    {
        GetRule = &CGame_MAGICALDROPIII_A::GetRule;
        return TRUE;
    }
    case NeoBomberman_A:
    {
        GetRule = &CGame_NeoBomberman_A::GetRule;
        return TRUE;
    }
    case NEOGEO_A:
    {
        GetRule = &CGame_NEOGEO_A::GetRule;
        return TRUE;
    }
    case SPF2T_A:
    {
        GetRule = &CGame_SPF2T_A::GetRule;
        return TRUE;
    }
    case WINDJAMMERS_A:
    {
        GetRule = &CGame_Windjammers_A::GetRule;
        return TRUE;
    }

    default:
        OutputDebugString(L"CGameLoad::SetGame:: BUGBUG: New game has not been properly added yet\n");
        return FALSE;
        break;
    }

    return FALSE;
}

CGameClass* CGameLoad::CreateGame(int nGameFlag, uint32_t nConfirmedROMSize, int nExtraGameData /* = 0 */, LPCWSTR pszFilePath /* = nullptr */)
{
    // IPS uses 24-bit values, so max patchable size is 16,777,215 bytes
    CGameClass::GameSizeAllowsIPSPatching(nConfirmedROMSize < 0xffffff);

    switch (nGameFlag)
    {
    case DANKUGA_A:
    {
        return new CGame_DanKuGa_A_DIR(-1);
    }
    case DEVMODE_DIR:
    {
        return new CGame_DevMode_DIR(nConfirmedROMSize);
    }
    case GEMFIGHTER_A:
    {
        return new CGame_GEMFIGHTER_A(nConfirmedROMSize);
    }
    case LandMaker_A:
    {
        return new CGame_LandMaker_A(nConfirmedROMSize);
    }
    case LandMaker_P:
    {
        return new CGame_LandMaker_P(nConfirmedROMSize);
    }
    case MAGICALDROPII_A:
    {
        return new CGame_MAGICALDROPII_A(nConfirmedROMSize);
    }
    case MAGICALDROPIII_A:
    {
        return new CGame_MAGICALDROPIII_A(nConfirmedROMSize);
    }
    case NeoBomberman_A:
    {
        return new CGame_NeoBomberman_A(nConfirmedROMSize);
    }
    case NEOGEO_A:
    {
        return new CGame_NEOGEO_A(nConfirmedROMSize, pszFilePath);
    }
    case SPF2T_A:
    {
        return new CGame_SPF2T_A(nConfirmedROMSize);
    }
    case WINDJAMMERS_A:
    {
        return new CGame_Windjammers_A(nConfirmedROMSize);
    }

    default:
        OutputDebugString(L"CGameLoad::CreateGame:: BUGBUG: New game has not been properly added yet.\n");
        return NULL;
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

        switch (nGameFlag)
        {
        case LandMaker_A:
            CGame_LandMaker_A::SetSpecialRuleForFileName(pszFileNameLowercase);
            break;
        default:
            break;
        }
    }

    CurrRule = GetRule(nGameRule);

    GetHost()->GetPalModDlg()->SetStatusText(L"Opening file...");

    if (CurrFile.Open(pszLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ULONGLONG nGameFileLength = CurrFile.GetLength();
        bool isSafeToRunGame = ((short int)CurrRule.uVerifyVar == -1) || (nGameFileLength == CurrRule.uVerifyVar);

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

            strQuestion.Format(L"Internal warning: Game file size is 0x%x, but 0x%x is the expected size. You may just need to update the value of m_nExpectedGameROMSize for your game.\n", (int)nGameFileLength, CurrRule.uVerifyVar);
            OutputDebugString(strQuestion);

            strQuestion.Format(IDS_ROMMISMATCH_CHECK, CurrRule.uVerifyVar, nGameFileLength);

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
            OutGame = CreateGame(nGameFlag, (uint32_t)nGameFileLength, nGameRule, pszLoadFile);

            if (OutGame)
            {
                OutGame->SetLoadedPathOrFile(pszLoadFile);

                uint32_t crcValue = 0;
                bool fNeedToValidateCRC = false;

                // CRC calculation is slow, so only calculate if we need it.
                if ((OutGame->GetKnownCRC32DatasetsForGame(nullptr, &fNeedToValidateCRC) > 1) &&
                    fNeedToValidateCRC)
                {
                    // Only calculate this if desired since it's time-expensive
                    OutputDebugString(L"Calculating crc...\n");
                    crcValue = CRC32_BlockChecksum(&CurrFile, (int)nGameFileLength);

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
                strError.Format(L"The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n\nShould we try to load this file anyways?", strCurrFile.GetString(), CurrRule.uVerifyVar, (int)CurrFile.GetLength());
                fActualFileSizeIsSafe = (MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_YESNO | MB_ICONERROR) == IDYES);
                strError.Format(L"WARNING: The file \"%s\" was found but is not the expected size.  We expect the file to be %u bytes, but this file is %u bytes.\n", strCurrFile.GetString(), CurrRule.uVerifyVar, (int)CurrFile.GetLength());
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
            BOOL skip = false; // legacy char file version check
            if (skip) {
                OutputDebugString(L"CGameLoad::LoadDir : Gouki doesn't exist for SF3-DC: skipping.\n");
                nSaveLoadSucc++;
            } else {
                CString strError;
                strError.Format(L"Could not find required file:\n    %s\n at the specified location:\n    %s\nPlease make sure the path is correct.", CurrRule.szFileName, pszLoadDir);

                if (false) // historically a MvC check
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
                bool fIsMvC2TeamView = false;

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

void CGameLoad::CrosscopyGame(CGameClass* CurrGame)
{
    CString strTargetDirectory;

    if (GetHost()->GetPalModDlg()->SetLoadDir(&strTargetDirectory))
    {
        CFile FileSave;

        nSaveLoadCount = 0;
        nSaveLoadSucc = 0;
        nSaveLoadErr = 0;

        SetGame(CurrGame->GetGameFlag());

        uint32_t nFileAmt = CurrGame->GetFileAmt();
        CString strErrorFile;
        const bool fIsDreamcast = false; // legacy MvC check

        if (CurrGame->GetIsDir())
        {
            for (uint32_t nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
            {
                nSaveLoadCount++;

                nSaveLoadSucc++;
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
