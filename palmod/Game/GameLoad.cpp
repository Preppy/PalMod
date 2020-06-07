#include "StdAfx.h"
#include "GameLoad.h"

#include "Game_COTA_A.h"
#include "Game_MVC2_A.h"
#include "Game_MVC2_D.h"
#include "Game_MVC2_P.h"
#include "Game_SFIII3_A.h"
#include "Game_SSF2T_A.h"
#include "Game_SFA3_A.h"
#include "Game_XMVSF_A.h"
#include "Game_MVC_A.h"
#include "Game_SFIII3_D.h"
#include "Game_JOJOS_A.h"
#include "Game_MSH_A.h"
#include "Game_MSHVSF_A.h"
#include "Game_Garou_A.h"
#include "Game_NEOGEO_A.h"

#include "..\resource.h"
#include "..\palmod.h"

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
    case NEOGEO_A:
    {
        GetRule = &CGame_NEOGEO_A::GetRule;
        return TRUE;
    }
    default:
        OutputDebugString("CGameLoad::SetGame:: BUGBUG: New game has not been properly added yet\n");
        return FALSE;
        break;
    }

    return FALSE;
}

CGameClass* CGameLoad::CreateGame(int nGameFlag, int nExtraGameData)
{
    switch (nGameFlag)
    {
    case MVC2_A:
    {
        return new CGame_MVC2_A;
    }
    break;
    case MVC2_D:
    {
        return new CGame_MVC2_D;
    }
    break;
    case MVC2_P:
    {
        return new CGame_MVC2_P;
    }
    break;
    case SFIII3_A:
    {
        return new CGame_SFIII3_A;
    }
    break;
    case SFIII3_D:
    {
        return new CGame_SFIII3_D;
    }
    break;
    case SSF2T_A:
    {
        return new CGame_SSF2T_A(nExtraGameData);
    }
    case SFA3_A:
    {
        return new CGame_SFA3_A;
    }
    case XMVSF_A:
    {
        return new CGame_XMVSF_A;
    }
    case MVC_A:
    {
        return new CGame_MVC_A;
    }
    case JOJOS_A:
    {
        return new CGame_JOJOS_A(nExtraGameData);
    }
    case MSH_A:
    {
        return new CGame_MSH_A(nExtraGameData);
    }
    case MSHVSF_A:
    {
        return new CGame_MSHVSF_A(nExtraGameData);
    }
    case COTA_A:
    {
        return new CGame_COTA_A();
    }
    case Garou_A:
    {
        return new CGame_Garou_A();
    }
    case NEOGEO_A:
    {
        return new CGame_NEOGEO_A();
    }
    default:
        OutputDebugString("CGameLoad::CreateGame:: BUGBUG: New game has not been properly added yet.\n");
        return NULL;
    }
}

CGameClass* CGameLoad::LoadFile(int nGameFlag, CHAR* szLoadFile)
{
    CGameClass* OutGame = NULL;

    CFile CurrFile;
    sFileRule CurrRule;

    if (!SetGame(nGameFlag))
    {
        return NULL;
    }

    int nGameRule = 0;

    if (nGameFlag == JOJOS_A)
    {
        CHAR* pszFileName = strrchr(szLoadFile, '\\') ;

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            nGameRule = ((strcmp(pszFileName, "50") == 0) ? 50 : 51);
        }
    }
    else if (nGameFlag == SSF2T_A)
    {
        CHAR* pszFileName = strrchr(szLoadFile, '\\');

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _strlwr(pszFileName);
            nGameRule = ((strstr(pszFileName, ".03c") != nullptr) ? 3 : 4);
        }
    }
    else if (nGameFlag == MSHVSF_A)
    {
        CHAR* pszFileName = strrchr(szLoadFile, '\\');

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _strlwr(pszFileName);
            nGameRule = ((strstr(pszFileName, ".06a") != nullptr) ? 6 : 7);
        }
    }
    else if (nGameFlag == MSH_A)
    {
        CHAR* pszFileName = strrchr(szLoadFile, '\\');

        if (pszFileName)
        {
            // Step forward to the filename
            pszFileName++;
            _strlwr(pszFileName);
            nGameRule = ((strstr(pszFileName, ".05") != nullptr) ? 5 : 6);
        }
    }

    CurrRule = GetRule(nGameRule);

    if (CurrFile.Open(szLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        bool isSafeToRunGame = ((short int)CurrRule.uVerifyVar == -1) || (CurrFile.GetLength() == CurrRule.uVerifyVar);

        if (!isSafeToRunGame)
        {
            CString strQuestion;
            strQuestion.LoadString(IDS_ROMMISMATCH_CHECK);

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
            OutGame = CreateGame(nGameFlag, nGameRule);
            OutGame->SetLoadDir(szLoadFile);

            if (OutGame->LoadFile(&CurrFile, 0))
            {
                OutGame->SetIsDir(FALSE);
                OutGame->SetLoadDir(szLoadFile);
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
            OutputDebugString("CGameLoad::LoadFile: ERROR: ROM is the wrong size.  Rejecting loading this ROM.\n");
        }

        CurrFile.Abort();
    }

    if (OutGame)
    {
        //Set it to the end of the redirect list
        //OutGame->rgUnitRedir[OutGame->nRedirCtr] = INVALID_UNIT_VALUE;
    }

    int nOut = OutGame ? 1 : 0;

    szLoadSaveStr.Format("%d of %d files loaded successfully (%d error%s)", nOut, 1, !nOut, nOut == 0 ? "" : "s");

    return OutGame;
}

CGameClass* CGameLoad::LoadDir(int nGameFlag, CHAR* szLoadDir)
{
    CGameClass* OutGame = NULL;
    sFileRule CurrRule;

    CFile CurrFile;
    CString szCurrFile;

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

        szCurrFile.Format("%s\\%s", szLoadDir, CurrRule.szFileName);

        if (CurrFile.Open(szCurrFile, CFile::modeRead | CFile::typeBinary))
        {
            if ((short int)CurrRule.uVerifyVar == -1 || CurrFile.GetLength() == CurrRule.uVerifyVar)
            {
                if (!OutGame)
                {
                    OutGame = CreateGame(nGameFlag);

                    OutGame->SetLoadDir(szLoadDir);
                    OutGame->SetIsDir();
                }

                if (OutGame->LoadFile(&CurrFile, CurrRule.uUnitId))
                {
                    nSaveLoadSucc++;

                    //Increase the sort counter
                    OutGame->nRedirCtr++;
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
            if ((nGameFlag == SFIII3_D) && (nCurrRuleCtr == 0xE))
            {
                OutputDebugString("CGameLoad::LoadDir : Gouki doesn't exist for SF3-DC: skipping.\n");
                nSaveLoadSucc++;
            }
            else
            {
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

    szLoadSaveStr.Format("%d of %d files loaded successfully (%d error%s)", nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? "" : "s");

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
    CHAR* szDir = CurrGame->GetLoadDir();
    UINT16* rgUnitRedir = CurrGame->rgUnitRedir;
    CString strErrorFile;

    if (CurrGame->GetIsDir())
    {
        for (int nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
        {
            if (rgChanged[nFileCtr])
            {
                nSaveLoadCount++;

                CString szLoad;

                szLoad.Format("%s\\%s", szDir, GetRule(nFileCtr + 0xFF00).szFileName);

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

                    FileSave.Abort();
                }
                else
                {
                    strErrorFile = szLoad;
                    nSaveLoadErr++;
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

    szLoadSaveStr.Format("%d of %d files patched successfully (%d error%s)", nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? "" : "s");
}
