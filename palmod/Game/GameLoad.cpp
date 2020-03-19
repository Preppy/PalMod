#include "StdAfx.h"
#include "GameLoad.h"

#include "Game_MVC2_D.h"
#include "Game_MVC2_P.h"
#include "Game_SFIII3_A.h"
#include "Game_SSF2T_A.h"
#include "Game_SFA3_A.h"
#include "Game_XMVSF_A.h"
#include "Game_MVC_A.h"
#include "Game_SFIII3_D.h"
#include "Game_JOJOS_A.h"

#include "..\resource.h"
#include "..\palmod.h"

CGameLoad::CGameLoad(void)
{
}

CGameLoad::~CGameLoad(void)
{
    // Clean up static allocations.
    safe_delete_array(CGame_MVC_A::MVC_A_EXTRA_CUSTOM);
    safe_delete_array(CGame_SFIII3_A::SFIII3_A_EXTRA_CUSTOM);
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_50);
    safe_delete_array(CGame_JOJOS_A::JOJOS_A_EXTRA_CUSTOM_51);
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
    case JOJOS_A:
    {
        GetRule = &CGame_JOJOS_A::GetRule;
        return TRUE;
    }
    break;

    default:
        return FALSE;
        break;
    }

    return FALSE;
}

CGameClass* CGameLoad::CreateGame(int nGameFlag, int nExtraGameData)
{
    switch (nGameFlag)
    {
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
        return new CGame_SSF2T_A;
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
    default:
        return NULL;
        break;
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

    CurrRule = GetRule(nGameRule);

    if (CurrFile.Open(szLoadFile, CFile::modeRead | CFile::typeBinary))
    {
        if (((short int)CurrRule.uVerifyVar == -1) || (CurrFile.GetLength() == CurrRule.uVerifyVar))
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
    bool isAnythingReadOnly = false;
    CString strROFile;

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
                        nSaveLoadErr++;
                    }

                    FileSave.Abort();
                }
                else
                {
                    isAnythingReadOnly = true;
                    OutputDebugString("CGameLoad::SaveGame : Destination is read-only.\n");
                    strROFile = szLoad;
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
                isAnythingReadOnly = true;
                strROFile = szDir;
                OutputDebugString("CGameLoad::SaveGame : Destination is read-only.\n");
                nSaveLoadErr = 1;
            }
        }
    }

    if (isAnythingReadOnly)
    {
        CString strError;
        strError.Format(IDS_ERROR_NOTWRITABLE_FORMAT, strROFile);
        MessageBox(g_appHWnd, strError, GetAppName(), MB_ICONERROR);
    }

    szLoadSaveStr.Format("%d of %d files patched successfully (%d error%s)", nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? "" : "s");
}
