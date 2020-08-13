#include "StdAfx.h"
#include "..\StdAfx.h"
#include "GameLoad.h"

#include "Game_COTA_A.h"
#include "Game_CVS2_A.h"
#include "Game_Garou_A.h"
#include "Game_Garou_S.h"
#include "Game_JOJOS_A.h"
#include "Game_JOJOS_A_DIR.h"
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
#include "Game_SAMSHO5SP_A.h"
#include "Game_SFA2_A.h"
#include "Game_SFA3_A.h"
#include "Game_SFIII3_A.h"
#include "Game_SFIII3_A_DIR.h"
#include "Game_SFIII3_D.h"
#include "Game_SSF2T_A.h"
#include "Game_SVCPLUSA_A.h"
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
    case MVC2_D:
    {
        GetRuleCtr = &CGame_MVC2_D::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_D::ResetRuleCtr;
        GetRule = &CGame_MVC2_D::GetRule;
        GetNextRule = &CGame_MVC2_D::GetNextRule;

        return TRUE;
    }
    break;
    case MVC2_P:
    {
        GetRuleCtr = &CGame_MVC2_P::GetRuleCtr;
        ResetRuleCtr = &CGame_MVC2_P::ResetRuleCtr;
        GetRule = &CGame_MVC2_P::GetRule;
        GetNextRule = &CGame_MVC2_P::GetNextRule;

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
    case SSF2T_A:
    {
        GetRule = &CGame_SSF2T_A::GetRule;
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
    case XMVSF_A:
    {
        GetRule = &CGame_XMVSF_A::GetRule;
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
    break;

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
    case COTA_A:
    {
        GetRule = &CGame_COTA_A::GetRule;
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
    case NEOGEO_A:
    {
        GetRule = &CGame_NEOGEO_A::GetRule;
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
    case CVS2_A:
    {
        GetRule = &CGame_CVS2_A::GetRule;
        return TRUE;
    }
    case SVCPLUSA_A:
    {
        GetRule = &CGame_SVCPLUSA_A::GetRule;
        return TRUE;
    }
    case SAMSHO5SP_A:
    {
        GetRule = &CGame_SAMSHO5SP_A::GetRule;
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
    break;
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
    case SAMSHO5SP_A:
    {
        return new CGame_SAMSHO5SP_A(nConfirmedROMSize);
    }
    case SFIII3_A:
    {
        return new CGame_SFIII3_A(nConfirmedROMSize);
    }
    case SFIII3_A_DIR:
    {
        return new CGame_SFIII3_A_DIR();
    }
    case SFIII3_D:
    {
        return new CGame_SFIII3_D;
    }
    case SFA2_A:
    {
        return new CGame_SFA2_A(nConfirmedROMSize, nExtraGameData);
    }
    case SFA3_A:
    {
        return new CGame_SFA3_A(nConfirmedROMSize);
    }
    case SSF2T_A:
    {
        return new CGame_SSF2T_A(nConfirmedROMSize, nExtraGameData);
    }
    case SVCPLUSA_A:
    {
        return new CGame_SVCPLUSA_A(nConfirmedROMSize);
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
    case SAMSHO5SP_A:
    {
        TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _tcslwr(pszFileName);
            nGameRule = ((_tcsstr(pszFileName, _T("272-p1")) != nullptr) ? 0 : 1);
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
    case SSF2T_A:
        {
            TCHAR* pszFileName = _tcsrchr(szLoadFile, _T('\\'));

            if (pszFileName)
            {
                // Step forward to the filename
                pszFileName++;
                _tcslwr(pszFileName);
                nGameRule = ((_tcsstr(pszFileName, _T(".03c")) != nullptr) ? 3 : 4);
            }
            break;
        }
        default:
            break;
    };

    CurrRule = GetRule(nGameRule);

    if (CurrFile.Open(szLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        bool isSafeToRunGame = ((short int)CurrRule.uVerifyVar == -1) || (CurrFile.GetLength() == CurrRule.uVerifyVar);

        if (!isSafeToRunGame) // we could hook people trying to load Venture here... file size is 4194304
        {
            CString strQuestion;

            if ((nGameFlag == JOJOS_A) && (nGameRule == 50) && (CurrFile.GetLength() == 4194304))
            {
                strQuestion.LoadString(IDS_ROMISVENTURE);
            }
            else
            {
                strQuestion.LoadString(IDS_ROMMISMATCH_CHECK);
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
            OutGame = CreateGame(nGameFlag, (UINT32)CurrFile.GetLength(), nGameRule);
            OutGame->SetLoadDir(szLoadFile);

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

        if (CurrFile.Open(szCurrFile, CFile::modeRead | CFile::typeBinary))
        {
            if ((short int)CurrRule.uVerifyVar == -1 || CurrFile.GetLength() == CurrRule.uVerifyVar)
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
                    strError.Format(_T("Could not find file \"%s\" needed for this game."), szCurrFile);
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

    int nFileAmt = CurrGame->GetFileAmt();
    UINT16* rgChanged = CurrGame->GetChangeRg();
    TCHAR* szDir = CurrGame->GetLoadDir();
    UINT16* rgUnitRedir = CurrGame->rgUnitRedir;
    CString strErrorFile;

    if (CurrGame->GetIsDir())
    {
        for (int nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
        {
            if ((rgChanged[nFileCtr]) || (CurrGame->GetGameFlag() == SFIII3_A_DIR))
            {
                nSaveLoadCount++;

                if (!((CurrGame->GetGameFlag() == MVC2_D) && (nFileCtr == MVC2_D_TEAMVIEW_LOCATION))) // ignore the virtual team view
                {
                    CString szLoad;

                    szLoad.Format(_T("%s\\%s"), szDir, GetRule(nFileCtr + 0xFF00).szFileName);

                    if (FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary))
                    {
                        if (CurrGame->SaveFile(&FileSave, nFileCtr))
                        {
                            // Mark as clean so we don't save it out until it gets dirtied again.
                            rgChanged[nFileCtr] = FALSE;
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
                    rgChanged[nFileCtr] = FALSE;
                    nSaveLoadSucc++;
                }
            }
        }
    }
    else
    {
        if (rgChanged[0])
        {
            nSaveLoadCount = 1;

            if (FileSave.Open(szDir, CFile::modeReadWrite | CFile::typeBinary))
            {
                if (CurrGame->SaveFile(&FileSave, 0))
                {
                    rgChanged[0] = FALSE;
                    nSaveLoadSucc++;
                }

                FileSave.Abort();
            }
            else
            {
                strErrorFile = szDir;
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
