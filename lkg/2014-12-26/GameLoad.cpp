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

CGameLoad::CGameLoad(void)
:szLoadSaveStr(_T("")),
nSaveLoadCount(0),
nSaveLoadSucc(0),
nSaveLoadErr(0)
{
}

CGameLoad::~CGameLoad(void)
{
}

BOOL CGameLoad::SetGame(int nGameFlag)
{
	switch(nGameFlag)
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
	default:
		return FALSE;
		break;
	}
	
	return FALSE;


}

CGameClass * CGameLoad::CreateGame(int nGameFlag)
{
	switch(nGameFlag)
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
	default:
		return NULL;
		break;
	}

	return NULL;
}

CGameClass * CGameLoad::LoadFile(int nGameFlag, CHAR * szLoadFile)
{
	CGameClass * OutGame = NULL;

	CFile CurrFile;
	sFileRule CurrRule;

	if(!SetGame(nGameFlag))
	{
		return NULL;
	}
	
	CurrRule = GetRule(0);
	
		
	if(CurrFile.Open(szLoadFile, CFile::modeRead | CFile::typeBinary))
	{
		if((short int)CurrRule.uVerifyVar == -1 || CurrFile.GetLength() == CurrRule.uVerifyVar)
		{
			
			OutGame = CreateGame(nGameFlag);
			OutGame->SetLoadDir(szLoadFile);
			

			if(OutGame->LoadFile(&CurrFile, 0))
			{

				OutGame->SetIsDir(FALSE);
				OutGame->SetLoadDir(szLoadFile);
				//nSaveLoadSucc++;

				//Increase the sort counter
				//OutGame->nRedirCtr++;
			}
			else
			{
				delete OutGame;
				OutGame = NULL;
			}
		}

		CurrFile.Abort();
	}

	if(OutGame)
	{
		//Set it to the end of the redirect list
		//OutGame->rgUnitRedir[OutGame->nRedirCtr] = 0xFF;
	}

	int nOut = OutGame ? 1 : 0;

	szLoadSaveStr.Format("%d of %d files loaded successfully (%d error%s)", nOut, 1, !nOut, nOut == 0 ? "" : "s" );

	return OutGame;
}

CGameClass * CGameLoad::LoadDir(int nGameFlag, CHAR * szLoadDir)
{
	CGameClass * OutGame = NULL;
	sFileRule CurrRule;
	int nCurrRuleCtr;

	CFile CurrFile;
	CString szCurrFile;

	//Track load save count
	nSaveLoadCount = 0;
	nSaveLoadSucc = 0;
	nSaveLoadErr = 0;

	if(!SetGame(nGameFlag))
	{
		return NULL;
	}


	ResetRuleCtr();
	
	nCurrRuleCtr = GetRuleCtr();

	while(nCurrRuleCtr != 0xFF)
	{
		nSaveLoadCount++;

		CurrRule = GetNextRule();

		szCurrFile.Format("%s\\%s", szLoadDir, CurrRule.szFileName);

		
		if(CurrFile.Open(szCurrFile, CFile::modeRead | CFile::typeBinary))
		{
			if((short int)CurrRule.uVerifyVar == -1 || CurrFile.GetLength() == CurrRule.uVerifyVar)
			{
				if(!OutGame)
				{
					OutGame = CreateGame(nGameFlag);

					OutGame->SetLoadDir(szLoadDir);
					OutGame->SetIsDir();
				}

				if(OutGame->LoadFile(&CurrFile, CurrRule.uUnitId))
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
			nSaveLoadErr++;
		}

		nCurrRuleCtr = GetRuleCtr();
	}

	if(OutGame)
	{
		//Set it to the end of the redirect list
		OutGame->rgUnitRedir[OutGame->nRedirCtr] = 0xFF;
	}

	szLoadSaveStr.Format("%d of %d files loaded successfully (%d error%s)", nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? "" : "s" );

	return OutGame;

}


void CGameLoad::SaveGame(CGameClass * CurrGame)
{
	CFile FileSave;

	nSaveLoadCount = 0;
	nSaveLoadSucc = 0;
	nSaveLoadErr = 0;

	SetGame(CurrGame->GetGameFlag());

	int nFileAmt = CurrGame->GetFileAmt();
	UINT8 * rgChanged = CurrGame->GetChangeRg();
	CHAR * szDir = CurrGame->GetLoadDir();
	UINT8 * rgUnitRedir = CurrGame->rgUnitRedir;

	switch(CurrGame->GetIsDir())
	{
	case TRUE:
		{



			for(int nFileCtr = 0; nFileCtr < nFileAmt; nFileCtr++)
			{
				if(rgChanged[nFileCtr])
				{
					nSaveLoadCount++;

					CString szLoad;

					szLoad.Format("%s\\%s", szDir, GetRule(nFileCtr + 0xFF00).szFileName);

					if(FileSave.Open(szLoad, CFile::modeReadWrite | CFile::typeBinary))
					{
						if(CurrGame->SaveFile(&FileSave, nFileCtr))
						{
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
						nSaveLoadErr++;
					}
				}
			}
			break;

		}
	case FALSE:
		{
			if(rgChanged[0])
			{
				nSaveLoadCount = 1;

				if(FileSave.Open(szDir, CFile::modeReadWrite | CFile::typeBinary))
				{
					if(CurrGame->SaveFile(&FileSave, 0))
					{
						rgChanged[0] = FALSE;

						nSaveLoadSucc++;
					}

					FileSave.Abort();
				}
				else
				{
					nSaveLoadErr = 1;
				}
			}
			break;
		}
	}

	szLoadSaveStr.Format("%d of %d files patched successfully (%d error%s)", nSaveLoadSucc, nSaveLoadCount, nSaveLoadErr, nSaveLoadErr == 1 ? "" : "s" );
}