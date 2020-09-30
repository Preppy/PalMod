#include "StdAfx.h"
#include "GameLoad.h"
#include "..\CRC32.h"

#include "Game_COTA_A.h"
#include "Game_CVS2_A.h"
#include "Game_Garou_A.h"
#include "Game_Garou_S.h"
#include "Game_JOJOS_A.h"
#include "Game_JOJOS_A_DIR.h"
#include "Game_KarnovsR_A.h"
#include "Game_KOF02_A.h"
#include "Game_KOF02UM_S.h"
#include "Game_KOF98_A.h"
#include "Game_MSH_A.h"
#include "Game_MSHVSF_A.h"
#include "Game_MVC_A.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_A_DIR.h"
#include "Game_MVC2_D.h"
#include "Game_MVC2_P.h"
#include "Game_NEOGEO_A.h"
#include "Game_GEMFIGHTER_A.h"
#include "Game_RBFFS_A.h"
#include "Game_REDEARTH_A.h"
#include "Game_REDEARTH_A_DIR.h"
#include "Game_SAMSHO3_A.h"
#include "Game_SAMSHO5SP_A.h"
#include "Game_SFA1_A.h"
#include "Game_SFA2_A.h"
#include "Game_SFA3_A.h"
#include "Game_SFIII2_A.h"
#include "Game_SFIII3_A.h"
#include "Game_SFIII3_A_DIR.h"
#include "Game_SFIII3_D.h"
#include "Game_SF2HF_A.h"
#include "Game_SSF2T_A.h"
#include "Game_SVCPLUSA_A.h"
#include "Game_VHUNT2_A.h"
#include "Game_VSAV_A.h"
#include "Game_VSAV2_A.h"
#include "Game_WakuWaku7_A.h"
#include "Game_XMVSF_A.h"

#include "..\resource.h"
#include "..\palmod.h"

void StrRemoveNonASCII(TCHAR* pszOutput, size_t ccSize, LPCTSTR pszInput)
{
    size_t iStrOutputIndex = 0;

    for (size_t iStrIndex = 0; iStrIndex < ccSize; iStrIndex++)
    {
        if (!pszInput[iStrIndex])
        {
            break;
        }

        if (((pszInput[iStrIndex] >= 48) && (pszInput[iStrIndex] <= 57)) || // numbers
            ((pszInput[iStrIndex] >= 65) && (pszInput[iStrIndex] <= 90)))   // upper case
        {
            pszOutput[iStrOutputIndex++] = pszInput[iStrIndex];
        }
        else if ((pszInput[iStrIndex] >= 97) && (pszInput[iStrIndex] <= 122))
        {
            pszOutput[iStrOutputIndex++] = pszInput[iStrIndex] - 32;
        }
    }

    pszOutput[iStrOutputIndex] = 0;
}

CGameLoad::CGameLoad(void)
{
}

CGameLoad::~CGameLoad(void)
{
}

BOOL CGameLoad::SetGame(int nGameFlag)
{
    switch (nGameFlag)
    {
    case COTA_A:
    {
        GetRule = &CGame_COTA_A::GetRule;
        return TRUE;
    }
    case CVS2_A:
    {
        GetRule = &CGame_CVS2_A::GetRule;
        return TRUE;
    }
    case Garou_A:
    {
        GetRule = &CGame_Garou_A::GetRule;
        return TRUE;
    }
    case Garou_S:
    {
        GetRule = &CGame_Garou_S::GetRule;
        return TRUE;
    }
    case GEMFIGHTER_A:
    {
        GetRule = &CGame_GEMFIGHTER_A::GetRule;
        return TRUE;
    }
    case JOJOS_A:
    {
        GetRule = &CGame_JOJOS_A::GetRule;
        return TRUE;
    }
    case JOJOS_A_DIR_50:
    case JOJOS_A_DIR_51:
    {
        GetRuleCtr = &CGame_JOJOS_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_JOJOS_A_DIR::ResetRuleCtr;
        GetRule = &CGame_JOJOS_A_DIR::GetRule;
        GetNextRule = &CGame_JOJOS_A_DIR::GetNextRule;

        return TRUE;
    }
    case KarnovsR_A:
    {
        GetRule = &CGame_KarnovsR_A::GetRule;
        return TRUE;
    }
    case KOF98_A:
    {
        GetRule = &CGame_KOF98_A::GetRule;
        return TRUE;
    }
    case KOF02_A:
    {
        GetRule = &CGame_KOF02_A::GetRule;
        return TRUE;
    }
    case KOF02UM_S:
    {
        GetRule = &CGame_KOF02UM_S::GetRule;
        return TRUE;
    }
    case MSH_A:
    {
        GetRule = &CGame_MSH_A::GetRule;
        return TRUE;
    }
    case MSHVSF_A:
    {
        GetRule = &CGame_MSHVSF_A::GetRule;
        return TRUE;
    }
    case MVC_A:
    {
        GetRule = &CGame_MVC_A::GetRule;
        return TRUE;
    }
    case MVC2_A:
    {
        GetRule = &CGame_MVC2_A::GetRule;
        return TRUE;
    }
    case MVC2_A_DIR:
    {
        GetRuleCtr = &CGame_MVC2_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_A_DIR::ResetRuleCtr;
        GetRule = &CGame_MVC2_A_DIR::GetRule;
        GetNextRule = &CGame_MVC2_A_DIR::GetNextRule;

        return TRUE;
    }
    case MVC2_D:
    {
        GetRuleCtr = &CGame_MVC2_D::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_D::ResetRuleCtr;
        GetRule = &CGame_MVC2_D::GetRule;
        GetNextRule = &CGame_MVC2_D::GetNextRule;

        return TRUE;
    }
    case MVC2_P:
    {
        GetRuleCtr = &CGame_MVC2_P::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_P::ResetRuleCtr;
        GetRule = &CGame_MVC2_P::GetRule;
        GetNextRule = &CGame_MVC2_P::GetNextRule;

        return TRUE;
    }
    case NEOGEO_A:
    {
        GetRule = &CGame_NEOGEO_A::GetRule;
        return TRUE;
    }
    case RBFFS_A:
    {
        GetRule = &CGame_RBFFS_A::GetRule;
        return TRUE;
    }
    case REDEARTH_A:
    {
        GetRule = &CGame_REDEARTH_A::GetRule;
        return TRUE;
    }
    case REDEARTH_A_DIR:
    {
        GetRuleCtr = &CGame_RedEarth_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_RedEarth_A_DIR::ResetRuleCtr;
        GetRule = &CGame_RedEarth_A_DIR::GetRule;
        GetNextRule = &CGame_RedEarth_A_DIR::GetNextRule;

        return TRUE;
    }
    case SAMSHO3_A:
    {
        GetRule = &CGame_SAMSHO3_A::GetRule;
        return TRUE;
    }
    case SAMSHO5SP_A:
    {
        GetRule = &CGame_SAMSHO5SP_A::GetRule;
        return TRUE;
    }
    case SFIII2_A:
    {
        GetRule = &CGame_SFIII2_A::GetRule;
        return TRUE;
    }
    break;
    case SFIII3_A:
    {
        GetRule = &CGame_SFIII3_A::GetRule;
        return TRUE;
    }
    break;
    case SFIII3_A_DIR:
    {
        GetRuleCtr = &CGame_SFIII3_A_DIR::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_A_DIR::ResetRuleCtr;
        GetRule = &CGame_SFIII3_A_DIR::GetRule;
        GetNextRule = &CGame_SFIII3_A_DIR::GetNextRule;

        return TRUE;
    }
    break;    
    case SFIII3_D:
    {
        GetRuleCtr = &CGame_SFIII3_D::GetRuleCtr;
        ResetRuleCtr = &CGame_SFIII3_D::ResetRuleCtr;
        GetRule = &CGame_SFIII3_D::GetRule;
        GetNextRule = &CGame_SFIII3_D::GetNextRule;

        return TRUE;
    }
    break;
    case SF2HF_A:
    {
        GetRule = &CGame_SF2HF_A::GetRule;
        return TRUE;
    }
    case SFA1_A:
    {
        GetRule = &CGame_SFA1_A::GetRule;
        return TRUE;
    }
    case SFA2_A:
    {
        GetRule = &CGame_SFA2_A::GetRule;
        return TRUE;
    }
    case SFA3_A:
    {
        GetRule = &CGame_SFA3_A::GetRule;
        return TRUE;
    }
    case SVCPLUSA_A:
    {
        GetRule = &CGame_SVCPLUSA_A::GetRule;
        return TRUE;
    }
    case VHUNT2_A:
    {
        GetRule = &CGame_VHUNT2_A::GetRule;
        return TRUE;
    }
    case VSAV_A:
    {
        GetRule = &CGame_VSAV_A::GetRule;
        return TRUE;
    }
    case VSAV2_A:
    {
        GetRule = &CGame_VSAV2_A::GetRule;
        return TRUE;
    }
    case WakuWaku7_A:
    {
        GetRule = &CGame_WakuWaku7_A::GetRule;
        return TRUE;
    }
    case XMVSF_A:
    {
        GetRule = &CGame_XMVSF_A::GetRule;
        return TRUE;
    }

    default:
        OutputDebugString(_T("CGameLoad::SetGame:: BUGBUG: New game has not been properly added yet\n"));
        return FALSE;
        break;
    }

    return FALSE;
}

CGameClass* CGameLoad::CreateGame(int nGameFlag, UINT32 nConfirmedROMSize, int nExtraGameData)
{
    switch (nGameFlag)
    {
    case COTA_A:
    {
        return new CGame_COTA_A(nConfirmedROMSize);
    }
    case CVS2_A:
    {
        return new CGame_CVS2_A(nConfirmedROMSize);
    }
    case Garou_A:
    {
        return new CGame_Garou_A(nConfirmedROMSize);
    }
    case Garou_S:
    {
        return new CGame_Garou_S(nConfirmedROMSize);
    }
    case GEMFIGHTER_A:
    {
        return new CGame_GEMFIGHTER_A(nConfirmedROMSize);
    }
    case JOJOS_A:
    {
        return new CGame_JOJOS_A(nConfirmedROMSize, nExtraGameData);
    }
    case JOJOS_A_DIR_50:
    {
        return new CGame_JOJOS_A_DIR(-1, 50);
    }
    case JOJOS_A_DIR_51:
    {
        return new CGame_JOJOS_A_DIR(-1, 51);
    }
    case KarnovsR_A:
    {
        return new CGame_KarnovsR_A(nConfirmedROMSize);
    }
    case KOF98_A:
    {
        return new CGame_KOF98_A(nConfirmedROMSize);
    }
    case KOF02_A:
    {
        return new CGame_KOF02_A(nConfirmedROMSize);
    }
    case KOF02UM_S:
    {
        return new CGame_KOF02UM_S(nConfirmedROMSize);
    }
    case MSH_A:
    {
        return new CGame_MSH_A(nConfirmedROMSize, nExtraGameData);
    }
    case MSHVSF_A:
    {
        return new CGame_MSHVSF_A(nConfirmedROMSize, nExtraGameData);
    }
    case MVC_A:
    {
        return new CGame_MVC_A(nConfirmedROMSize);
    }
    case MVC2_A:
    {
        return new CGame_MVC2_A(nConfirmedROMSize);
    }
    case MVC2_A_DIR:
    {
        return new CGame_MVC2_A_DIR(nConfirmedROMSize);
    }
    case MVC2_D:
    {
        return new CGame_MVC2_D;
    }
    case MVC2_P:
    {
        return new CGame_MVC2_P;
    }
    case NEOGEO_A:
    {
        return new CGame_NEOGEO_A(nConfirmedROMSize);
    }
    case RBFFS_A:
    {
        return new CGame_RBFFS_A(nConfirmedROMSize);
    }
    case REDEARTH_A:
    {
        return new CGame_REDEARTH_A(nConfirmedROMSize);
    }
    case REDEARTH_A_DIR:
    {
        return new CGame_RedEarth_A_DIR(-1);
    }
    case SAMSHO3_A:
    {
        return new CGame_SAMSHO3_A(nConfirmedROMSize);
    }
    case SAMSHO5SP_A:
    {
        return new CGame_SAMSHO5SP_A(nConfirmedROMSize);
    }
    case SFIII2_A:
    {
        return new CGame_SFIII2_A(nConfirmedROMSize);
    }
    case SFIII3_A:
    {
        return new CGame_SFIII3_A(nConfirmedROMSize, nExtraGameData);
    }
    case SFIII3_A_DIR:
    {
        return new CGame_SFIII3_A_DIR();
    }
    case SFIII3_D:
    {
        return new CGame_SFIII3_D;
    }
    case SFA1_A:
    {
        return new CGame_SFA1_A(nConfirmedROMSize);
    }
    case SFA2_A:
    {
        return new CGame_SFA2_A(nConfirmedROMSize, nExtraGameData);
    }
    case SFA3_A:
    {
        return new CGame_SFA3_A(nConfirmedROMSize);
    }
    case SF2HF_A:
    {
        return new CGame_SF2HF_A(nConfirmedROMSize, nExtraGameData);
    }
    case SSF2T_A:
    {
        return new CGame_SSF2T_A(nConfirmedROMSize, nExtraGameData);
    }
    case SVCPLUSA_A:
    {
        return new CGame_SVCPLUSA_A(nConfirmedROMSize);
    }
    case VHUNT2_A:
    {
        return new CGame_VHUNT2_A(nConfirmedROMSize);
    }
    case VSAV_A:
    {
        return new CGame_VSAV_A(nConfirmedROMSize);
    }
    case VSAV2_A:
    {
        return new CGame_VSAV2_A(nConfirmedROMSize);
    }
    case WakuWaku7_A:
    {
        return new CGame_WakuWaku7_A(nConfirmedROMSize);
    }
    case XMVSF_A:
    {
        return new CGame_XMVSF_A(nConfirmedROMSize);
    }
    default:
        OutputDebugString(_T("CGameLoad::CreateGame:: BUGBUG: New game has not been properly added yet.\n"));
        return NULL;
    }
}

CGameClass* CGameLoad::LoadFile(int nGameFlag, TCHAR* szLoadFile)
{
    CGameClass* OutGame = NULL;

    CFile CurrFile;
    sFileRule CurrRule;

    if (!SetGame(nGameFlag))
    {
        return NULL;
    }

    int nGameRule = 0;

    // Handle games that support multiple ROMs here
    switch (nGameFlag)
    {
    case JOJOS_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            nGameRule = ((_tcscmp(pszFileName, _T("50")) == 0) ? 50 : 51);
        }
        break;
    }
    case MSHVSF_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _tcslwr(pszFileName);
            nGameRule = ((_tcsstr(pszFileName, _T(".06a")) != nullptr) ? 6 : 7);
        }
        break;
    }
    case MSH_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _tcslwr(pszFileName);
            nGameRule = ((_tcsstr(pszFileName, _T(".05")) != nullptr) ? 5 : 6);
        }
        break;
    }
    case SFA2_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _tcslwr(pszFileName);
            nGameRule = ((_tcsstr(pszFileName, _T(".08")) != nullptr) ? 8 : 7);
        }
        break;
    }
    case SFIII3_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _tcslwr(pszFileName);
            nGameRule = ((_tcsstr(pszFileName, _T("10")) != nullptr) ? 10 : 51);
        }
        break;
    }
    case SF2HF_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _tcslwr(pszFileName);
            nGameRule = ((_tcsstr(pszFileName, _T(".6f")) != nullptr) ? 21 : 22);
        }
        break;
    }
    case SSF2T_A:
        {
            TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

            if (pszFileName)
            {
                // Step forward to the filename
                pszFileName++;
                _tcslwr(pszFileName);
                nGameRule = ((_tcsstr(pszFileName, _T(".03")) != nullptr) ? 3 : 4);
            }
            break;
        }
        default:
            break;
    };

    CurrRule = GetRule(nGameRule);

    if (CurrFile.Open(szLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        ULONGLONG nGameFileLength = CurrFile.GetLength();
        bool isSafeToRunGame = ((short int)CurrRule.uVerifyVar == -1) || (nGameFileLength == CurrRule.uVerifyVar);

        if (!isSafeToRunGame)
        {
            if ((nGameFlag == SAMSHO5SP_A) && (nGameFileLength == 0x800000))
            {
                // Samurai Shodown has a second ROM variant, but we only use the first half here, and things align.
                isSafeToRunGame = true;
            }
        }

        if (!isSafeToRunGame) // we could hook people trying to load Venture here... file size is 4194304
        {
            CString strQuestion;
            UINT nStringID;

            strQuestion.Format(_T("Internal warning: Game file size is 0x%x, but 0x%x is the expected size.\n"), (int)nGameFileLength, CurrRule.uVerifyVar);
            OutputDebugString(strQuestion);

            if ((nGameFlag == JOJOS_A) && (nGameRule == 50) && (nGameFileLength == 4194304))
            {
                nStringID = IDS_ROMISVENTURE;
            }
            else
            {
                nStringID = IDS_ROMMISMATCH_CHECK;
            }

            if (strQuestion.LoadString(nStringID))
            {
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
        }

        if (isSafeToRunGame)
        {
            OutGame = CreateGame(nGameFlag, (UINT32)nGameFileLength, nGameRule);
            OutGame->SetLoadDir(szLoadFile);

            UINT32 crcValue = 0;
            bool fNeedToValidateCRC = false;

            // CRC calculation is slow, so only calculate if we need it.
            if ((OutGame->GetKnownCRC32DatasetsForGame(nullptr, &fNeedToValidateCRC) > 1) &&
                fNeedToValidateCRC)
            {
                // Only calculate this if desired since it's time-expensive
                OutputDebugString(_T("Calculating crc...\n"));
                crcValue = CRC32_BlockChecksum(&CurrFile, (int)nGameFileLength);

                CString strMsg;
                strMsg.Format(_T("\tCRC32 for %s is 0x%x\n"), szLoadFile, crcValue);
                OutputDebugString(strMsg);
            }

            OutGame->SetSpecificValuesForCRC(crcValue);

            if (OutGame->LoadFile(&CurrFile, 0))
            {
                OutGame->SetIsDir(FALSE);
                //nSaveLoadSucc++;

                //Increase the sort counter
                //OutGame->nRedirCtr++;
            }
            else
            {
                safe_delete(OutGame);
            }
        }
        else
        {
            OutputDebugString(_T("CGameLoad::LoadFile: ERROR: ROM is the wrong size.  Rejecting loading this ROM.\n"));
        }

        CurrFile.Abort();
    }

    if (OutGame)
    {
        //Set it to the end of the redirect list
        //OutGame->rgUnitRedir[OutGame->nRedirCtr] = INVALID_UNIT_VALUE;
    }

    int nOut = OutGame ? 1 : 0;

    szLoadSaveStr.Format(_T("%d of %d files loaded successfully (%d error%s)"), nOut, 1, !nOut, nOut == 0 ? _T("") : _T("s"));

    return OutGame;
}

CGameClass* CGameLoad::LoadDir(int nGameFlag, TCHAR* szLoadDir)
{
    CGameClass* OutGame = NULL;
    sFileRule CurrRule;

    CFile CurrFile;
    CString szCurrFile;
    bool fShownFileError = false;

    //Track load save count
    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    if (!SetGame(nGameFlag))
    {
        return NULL;
    }

    ResetRuleCtr();

    int nCurrRuleCtr = GetRuleCtr();

    while (nCurrRuleCtr != INVALID_UNIT_VALUE)
    {
        nSaveLoadCount++;

        CurrRule = GetNextRule();

        szCurrFile.Format(_T("%s\\%s"), szLoadDir, CurrRule.szFileName);

        BOOL fFileOpened = CurrFile.Open(szCurrFile, CFile::modeRead | CFile::typeBinary);

        if (!fFileOpened && CurrRule.fHasAltName)
        {
            CString strAltFileName;

            OutputDebugString(_T("Loading game via alternate filenames...\n"));

            strAltFileName.Format(_T("%s\\%s"), szLoadDir, CurrRule.szAltFileName);
            fFileOpened = CurrFile.Open(strAltFileName, CFile::modeRead | CFile::typeBinary);
        }

        if (fFileOpened)
        {
            if (((short int)CurrRule.uVerifyVar == -1) || (CurrFile.GetLength() == CurrRule.uVerifyVar))
            {
                if (!OutGame)
                {
                    OutGame = CreateGame(nGameFlag, -1);

                    if (OutGame)
                    {
                        OutGame->SetLoadDir(szLoadDir);
                        OutGame->SetIsDir();
                    }
                }

                if (OutGame && OutGame->LoadFile(&CurrFile, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;

                    //Increase the sort counter
                    OutGame->nRedirCtr++;
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
                OutputDebugString(_T("CGameLoad::LoadDir : Gouki doesn't exist for SF3-DC: skipping.\n"));
                nSaveLoadSucc++;
            }
            else if (OutGame && (nGameFlag == MVC2_D) && (nCurrRuleCtr == MVC2_D_TEAMVIEW_LOCATION))
            {
                OutputDebugString(_T("CGameLoad::LoadDir : Team View for MvC2. Ignoring file open.\n"));
                if (OutGame->LoadFile(nullptr, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;

                    //Increase the sort counter
                    OutGame->nRedirCtr++;
                }
            }
            else
            {
                if (!fShownFileError)
                {
                    fShownFileError = true;
                    CString strError;
                    strError.Format(_T("Could not find file \"%s\" needed for this game."), szCurrFile.GetString());
                    MessageBox(g_appHWnd, strError, GetHost()->GetAppName(), MB_ICONERROR);
                }

                nSaveLoadErr++;
            }
        }

        nCurrRuleCtr = GetRuleCtr();
    }

    if (OutGame)
    {
        //Set it to the end of the redirect list
        OutGame->rgUnitRedir[OutGame->nRedirCtr] = INVALID_UNIT_VALUE;
    }

    szLoadSaveStr.Format(_T("%d of %d files loaded successfully (%d error%s)"), nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? _T("") : _T("s"));

    // Perhaps we could be less strict here, but -- we also will crash elsewhere if we don't have the full PL set.
    return (nSaveLoadErr == 0) ? OutGame : nullptr;
}

void CGameLoad::SaveGame(CGameClass* CurrGame)
{
    CFile FileSave;

    nSaveLoadCount = 0;
    nSaveLoadSucc = 0;
    nSaveLoadErr = 0;

    SetGame(CurrGame->GetGameFlag());

    UINT16 nFileAmt = CurrGame->GetFileAmt();
    UINT16* rgFileIsChanged = CurrGame->GetChangeTrackingArray();
    LPCTSTR pszLoadDir = CurrGame->GetLoadDir();
    UINT16* rgUnitRedir = CurrGame->rgUnitRedir;
    CString strErrorFile;

    if (CurrGame->GetIsDir())
    {
        for (UINT16 nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
        {
            if ((rgFileIsChanged[nFileCtr]) || (CurrGame->GetGameFlag() == SFIII3_A_DIR))
            {
                nSaveLoadCount++;

                if (!((CurrGame->GetGameFlag() == MVC2_D) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION))) // ignore the virtual team view
                {
                    CString szLoad;
                    sFileRule CurrRule = GetRule(nFileCtr | 0xFF00);

                    szLoad.Format(_T("%s\\%s"), pszLoadDir, CurrRule.szFileName);

                    BOOL fFileOpened = FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary);

                    if (!fFileOpened && CurrRule.fHasAltName)
                    {
                        CString strAltFileName;

                        OutputDebugString(_T("Saving game via alternate filenames...\n"));

                        strAltFileName.Format(_T("%s\\%s"), pszLoadDir, CurrRule.szAltFileName);

                        fFileOpened = FileSave.Open(strAltFileName, CFile::modeReadWrite | CFile::typeBinary);
                    }

                    if (fFileOpened)
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            // Mark as clean so we don't save it out until it gets dirtied again.
                            rgFileIsChanged[nFileCtr] = FALSE;
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
                    // Mark as clean so we don't save it out until it gets dirtied again.
                    rgFileIsChanged[nFileCtr] = FALSE;
                    nSaveLoadSucc++;
                }
            }
        }
    }
    else
    {
        if (rgFileIsChanged[0])
        {
            nSaveLoadCount = 1;

            if (FileSave.Open(pszLoadDir, CFile::modeReadWrite | CFile::typeBinary))
            {
                if (CurrGame->SaveFile(&FileSave, 0))
                {
                    rgFileIsChanged[0] = FALSE;
                    nSaveLoadSucc++;
                }

                FileSave.Abort();
            }
            else
            {
                strErrorFile = pszLoadDir;
                nSaveLoadErr = 1;
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

    if (nSaveLoadCount > 0)
    {
        szLoadSaveStr.Format(_T("%d of %d files patched successfully (%d error%s)"), nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? _T("") : _T("s"));
    }
    else
    {
        szLoadSaveStr = _T("No changes detected: nothing to patch.");
    }
}

void CGameLoad::SavePatchFile(CGameClass* CurrGame)
{
    SetGame(CurrGame->GetGameFlag());
    UINT32 nNumberOfChangesSaved = 0;
    UINT16* rgFileIsChanged = CurrGame->GetChangeTrackingArray();

    if (rgFileIsChanged[0] && !CurrGame->GetIsDir())
    {
        static LPCTSTR szPatchFilter[] = { _T("IPS Patch File|*.ips|")
                                          _T("|") };

        LPCTSTR pszLoadedFile = CurrGame->GetLoadDir();
        LPCTSTR pszFileName = _tcsrchr(pszLoadedFile, _T('\\'));
        pszFileName = (pszFileName) ? (pszFileName + 1) : _T("unknown");
        CString strSuggestedFileName = pszFileName;
        strSuggestedFileName += _T(".ips");        

        CFileDialog PatchFileLoad(FALSE, _T("ips"), strSuggestedFileName.GetString(), OFN_OVERWRITEPROMPT | OFN_HIDEREADONLY, *szPatchFilter);

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

    if (nNumberOfChangesSaved > 0)
    {
        szLoadSaveStr.Format(_T("%u change%s saved to patch file."), nNumberOfChangesSaved, nNumberOfChangesSaved == 1 ? _T("") : _T("s"));
    }
    else
    {
        szLoadSaveStr = _T("No changes detected: nothing to put in patch file.");
    }
}
