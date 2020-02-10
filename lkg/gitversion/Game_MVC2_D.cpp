#include "StdAfx.h"
#include "Gamedef.h"
#include "Game_MVC2_D.h"

#include "MVC2_SUPP.h"



//Initialize the selection tree

CDescTree CGame_MVC2_D::MainDescTree = CGame_MVC2_D::InitDescTree();
UINT8 CGame_MVC2_D::uRuleCtr = 0;
BOOL CGame_MVC2_D::bAlphaTrans = 0;

UINT16 CGame_MVC2_D::rgExtraChrLoc[MVC2_D_NUMUNIT];


CGame_MVC2_D::CGame_MVC2_D(void)
: ppDataBuffer(NULL)
{
	
	InitDataBuffer();

	//Set color mode
	SetColMode(COLMODE_12A);

	//Set palette conversion mode
	BasePalGroup.SetMode(PALTYPE_17);

	//Set game information
	nGameFlag = MVC2_D;
	nImgGameFlag = IMG4;
	nImgUnitAmt = MVC2_D_NUMUNIT;
	nUnitAmt = MVC2_D_NUMUNIT;
	nDisplayW = 8;
	nFileAmt = MVC2_D_NUMUNIT;

	//Prepare the file list
	PrepUnitFile();

	//Set the image out display type
	DisplayType = DISP_ALT;
	pButtonLabel = const_cast<CHAR *>((CHAR *)DEF_BUTTONLABEL6ALT);

	//Set the MVC2 supp game
	CurrMVC2 = this;
	//Prepare it
	prep_supp();

	//Create the redirect buffer
	rgUnitRedir = new UINT8[nUnitAmt + 1];
	memset(rgUnitRedir, NULL, sizeof(UINT8) * nUnitAmt);

	nDefPalSz = MVC2_D_PALSZ;

	nRIndexAmt = 15;
	nGIndexAmt = 15;
	nBIndexAmt = 15;
	nAIndexAmt = 15;

	nRIndexMul = 17.0;
	nGIndexMul = 17.0;
	nBIndexMul = 17.0;
	nAIndexMul = 17.0;
}

CGame_MVC2_D::~CGame_MVC2_D(void)
{
	CurrMVC2 = NULL;
}

CDescTree * CGame_MVC2_D::GetMainTree()
{
	return &CGame_MVC2_D::MainDescTree;
}

CDescTree CGame_MVC2_D::InitDescTree()
{

	//Initialize extra range
	InitExtraRg();
	

	sDescTreeNode * NewDescTree = new sDescTreeNode;

	sDescTreeNode * UnitNode;
	sDescTreeNode * ButtonNode;
	sDescNode * ChildNode;

	//Create the main character tree
	NewDescTree->ChildNodes = new sDescTreeNode[MVC2_D_NUMUNIT];
	NewDescTree->uChildAmt = MVC2_D_NUMUNIT;
	//All units have tree children
	NewDescTree->uChildType = DESC_NODETYPE_TREE;

	//Go through each character
	for(int iUnitCtr = 0; iUnitCtr < MVC2_D_NUMUNIT; iUnitCtr++)
	{
		//Omni extra count
		int nNumExtra = CountExtraRg(iUnitCtr, TRUE);

		UnitNode = &((sDescTreeNode *)NewDescTree->ChildNodes)[iUnitCtr];
		//Set each description
		sprintf(UnitNode->szDesc, "%s", MVC2_D_UNITDESC[iUnitCtr]);

		//Init each character to have all 6 basic buttons + extra
		UnitNode->ChildNodes = new sDescTreeNode[BUTTON6 + (nNumExtra ? 1 : 0)];	

		//All children have button tree's
		UnitNode->uChildType = DESC_NODETYPE_TREE;
		UnitNode->uChildAmt = BUTTON6 + (nNumExtra ? 1 : 0);	

		//Set each button data
		int nButtonExtraCt = CountExtraRg(iUnitCtr, FALSE) + 1;
		BOOL bSetInfo;

		for(int iButtonCtr = 0; iButtonCtr < BUTTON6; iButtonCtr++)
		{
			int nExtraPos = 0;

			ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[iButtonCtr];

			//Set each button data
			sprintf(ButtonNode->szDesc, "%s", DEF_BUTTONLABEL6ALT[iButtonCtr]);

			//Button children have nodes
			ButtonNode->uChildType = DESC_NODETYPE_NODE;
			ButtonNode->uChildAmt = nButtonExtraCt;

			ButtonNode->ChildNodes = (sDescTreeNode *)new sDescNode[nButtonExtraCt];

			//Start of the basic extra node in the current character
			int nBasicStart = 0;

			if(rgExtraChrLoc[iUnitCtr])
			{
				nBasicStart = rgExtraChrLoc[iUnitCtr] + 1;
			}

			//Set each button's extra nodes
			for(int nButtonExtra = 0; nButtonExtra < 8; nButtonExtra++)
			{
				bSetInfo = FALSE;
				ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nExtraPos];

				if(nButtonExtra == 0)
				{
					sprintf(ChildNode->szDesc, "%s Main", DEF_BUTTONLABEL6ALT[iButtonCtr]);
					bSetInfo = TRUE;
				}
				else if(!nBasicStart || 1)//MVC2_D_EXTRADEF[nBasicStart + (nButtonExtra - 1)])
				{
					
					sprintf(ChildNode->szDesc, "%02X %s (Extra - %02X)", nExtraPos, DEF_BUTTONLABEL6ALT[iButtonCtr],
						(iButtonCtr * 8) + nExtraPos + 1);

					bSetInfo = TRUE;
					
				}

				if(bSetInfo)
				{
					ChildNode->uUnitId = iUnitCtr;
					ChildNode->uPalId = (iButtonCtr * 8) + nExtraPos;

					nExtraPos++;
				}

			}
		}

		//Set extra data
		if(nNumExtra)
		{

			ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[6]; //Extra data node
			strcpy(ButtonNode->szDesc, "Extra");
			ButtonNode->uChildAmt = nNumExtra;
			ButtonNode->uChildType = DESC_NODETYPE_NODE;

			ButtonNode->ChildNodes = (sDescTreeNode *)(new sDescTreeNode[nNumExtra]);

			if(nNumExtra == (MVC2_D_PALDATASZ[iUnitCtr] - (8 * 6 * 32)) / 32)
			{
			
				for(int nExtraCtr = 0; nExtraCtr < nNumExtra; nExtraCtr++)
				{
					ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nExtraCtr];

					sprintf(ChildNode->szDesc, "(%02X Extra)", nExtraCtr + 1);

					ChildNode->uUnitId = iUnitCtr;
					ChildNode->uPalId = (8 * 6) + nExtraCtr;
				}
			}
			else
			{
				int nStart = rgExtraChrLoc[iUnitCtr] + 1 + 7;
				int nExtraCtr = 0;
				int nRangeAmt = 0;
				int i = 0;

				UINT16 * pCurrVal = const_cast<UINT16 *>(&MVC2_D_EXTRADEF[nStart]);

				while((pCurrVal[0] & 0x0F00) != EXTRA_START)
				{
					nRangeAmt = (pCurrVal[1] + 1) - pCurrVal[0];

					for(int nRangeCtr = 0; nRangeCtr < nRangeAmt; nRangeCtr++)
					{
						ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nExtraCtr];

						sprintf(ChildNode->szDesc, "(%02X Extra)", (pCurrVal[0] + nRangeCtr));

						ChildNode->uUnitId = iUnitCtr;
						ChildNode->uPalId = (8 * 6) + (pCurrVal[0] + nRangeCtr) - 1;

						nExtraCtr++;
					}

					i += 2;

					pCurrVal = const_cast<UINT16 *>(&MVC2_D_EXTRADEF[nStart + i]);
				}
			}


		}
	}

	return CDescTree(NewDescTree);
}

void CGame_MVC2_D::InitExtraRg()
{
	int i = 0;

	//Clear the extra buffer
	memset(CGame_MVC2_D::rgExtraChrLoc, 0, sizeof(UINT16) * MVC2_D_NUMUNIT);

	while(MVC2_D_EXTRADEF[i] != EXTRA_END)
	{
		if((MVC2_D_EXTRADEF[i] & EXTRA_START) == EXTRA_START)
		{
			rgExtraChrLoc[(MVC2_D_EXTRADEF[i] & 0x00FF)] = i;
			i += 8;

		}
		else
		{
			i++;
		}
	}
}

int CGame_MVC2_D::CountExtraRg(int nUnitId, BOOL bOmniExtra)
{
	//(MVC2_D_PALDATASZ[nUnitId] - (8 * 6 * 32)) / 32;

	if(!rgExtraChrLoc[nUnitId])
	{
		return (bOmniExtra ? ((MVC2_D_PALDATASZ[nUnitId] - (8 * 6 * 32)) / 32) : 7);
	}
	else
	{
		if(bOmniExtra)
		{
			int nStart = rgExtraChrLoc[nUnitId] + 1 + 7;
			int nRetVal = 0;
			int i = 0;

			UINT16 * pCurrVal = const_cast<UINT16 *>(&MVC2_D_EXTRADEF[nStart]);

			if(pCurrVal[0] == 0x00)
			{
				return 0;
			}
			else
			{
				while((pCurrVal[0] & 0x0F00) != EXTRA_START)
				{
					nRetVal += (pCurrVal[1] + 1) - pCurrVal[0];

					i += 2;
					pCurrVal = const_cast<UINT16 *>(&MVC2_D_EXTRADEF[nStart + i]);
				}

				if(!nRetVal)
				{
					return ((MVC2_D_PALDATASZ[nUnitId] - (8 * 6 * 32)) / 32);
				}
				
				return nRetVal;
			}


		}
		else
		{
			int nStart = rgExtraChrLoc[nUnitId] + 1 ;
			int nRetVal = 0;

			for(int i = 0; i < 7; i++)
			{
				if(1)//MVC2_D_EXTRADEF[nStart + i])
				{
					nRetVal++;
				}
			}

			return nRetVal;
		}
	}
	
	return 0;
}

sFileRule CGame_MVC2_D::GetRule(int nRuleId)
{
	sFileRule NewFileRule;

	nRuleId = (nRuleId & 0xFF00) == 0xFF00 ? (nRuleId & 0x00FF) : MVC2_D_UNITSORT[nRuleId];
	sprintf_s(NewFileRule.szFileName, MAX_FILENAME, "PL%02X_DAT.BIN", nRuleId);

	NewFileRule.uUnitId = nRuleId;
	NewFileRule.uVerifyVar = MVC2_D_FILESZ[nRuleId];

	return NewFileRule;
}

sFileRule CGame_MVC2_D::GetNextRule()
{
	

	sFileRule NewFileRule = GetRule(uRuleCtr);

	uRuleCtr++;

	if(uRuleCtr >= MVC2_D_NUMUNIT)
	{
		uRuleCtr = 0xFF;
	}

	return NewFileRule;
}

void CGame_MVC2_D::InitDataBuffer()
{
	ppDataBuffer = new UINT16 * [MVC2_D_NUMUNIT];
	memset(ppDataBuffer, NULL, sizeof(UINT16 *) * MVC2_D_NUMUNIT);
}

void CGame_MVC2_D::ClearDataBuffer()
{
	if(ppDataBuffer)
	{
		for(int i = 0; i < MVC2_D_NUMUNIT; i++)
		{
			if(ppDataBuffer[i])
			{
				delete [] ppDataBuffer[i];
			}
		}

		delete [] ppDataBuffer;
	}
}

int CGame_MVC2_D::GetBasicOffset(int nPalId)
{
	if(nPalId >= (8 * 6))
	{
		return -1;
	}
	else
	{
		return (nPalId % 8);
	}
}

BOOL CGame_MVC2_D::LoadFile(CFile * LoadedFile, int nUnitId)
{
	if(ppDataBuffer[nUnitId])
	{
		//This should always be NULL
		return FALSE;
	}
	else
	{
		int nDataSz;
		UINT32 nStart, nEnd;

		LoadedFile->Seek(0x08, CFile::begin);

		LoadedFile->Read(&nStart, 0x04);
		LoadedFile->Read(&nEnd, 0x04);

		nDataSz = nEnd - nStart;

		if(nDataSz != MVC2_D_PALDATASZ[nUnitId])
		{
			return FALSE;
		}

		
		ppDataBuffer[nUnitId] = new UINT16[nDataSz / 2];
		
		LoadedFile->Seek(nStart, CFile::begin);

		LoadedFile->Read(ppDataBuffer[nUnitId], nDataSz);

		//Set the redirect
		rgUnitRedir[nRedirCtr] = nUnitId;

		return TRUE;
	}

	return FALSE;
}

BOOL CGame_MVC2_D::SaveFile(CFile * SaveFile, int nUnitId)
{
	if(!ppDataBuffer[nUnitId])
	{
		return FALSE;
	}
	else
	{
		UINT32 uPalPos, uPalSz;

		SaveFile->Seek(0x08, CFile::begin);
		SaveFile->Read(&uPalPos, 0x04);
		SaveFile->Read(&uPalSz, 0x04);

		uPalSz = uPalSz - uPalPos;

		if(uPalPos > SaveFile->GetLength())
		{
			return FALSE;
		}

		SaveFile->Seek(uPalPos, CFile::begin);
		SaveFile->Write(ppDataBuffer[nUnitId], uPalSz);

		return TRUE;
	}

	return FALSE;
}

COLORREF * CGame_MVC2_D::CreatePal(int nUnitId, int nPalId)
{
	//Create a new palette
	COLORREF * NewPal = new COLORREF[MVC2_D_PALSZ];

	for(int i = 0; i < MVC2_D_PALSZ; i++)
	{
		NewPal[i] = ConvPal(ppDataBuffer[nUnitId][(nPalId * 16) + i]);
	}

	return NewPal;
}

void CGame_MVC2_D::CreateDefPal(sDescNode * srcNode, int nSepId)
{
	int nUnitId = srcNode->uUnitId;
	int nPalId = srcNode->uPalId;
				

	BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), MVC2_D_PALSZ, nUnitId, nPalId);
	BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, MVC2_D_PALSZ);
}

void CGame_MVC2_D::CreateDefPal(int nUnitId, int nPalId, int nSepId)
{
	BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), MVC2_D_PALSZ, nUnitId, nPalId);
	BasePalGroup.AddSep(nSepId, "Palette", 0, MVC2_D_PALSZ);
}

BOOL CGame_MVC2_D::CreateExtraPal(int nUnitId, int nPalId, int nStart, int nInc, int nImgId, int nSepId, int nAmt)
{
	int nSpecOffs;
	//int nTargetPal;

	nStart = EXTRA_OMNI + nStart;

	if(SpecSel(&nSpecOffs, nPalId, nStart, nInc, nAmt, nExtraAmt))
	{
		//bLoadDefPal = FALSE;

		//nTargetPal = (nSpecOffs * nInc);
		//nTargetPal += ((nPalId - nStart - nTargetPal) % nAmt) + nStart;

		//ClearSetImgTicket(CreateImgTicket(nUnitId, nImgId));

		//CreateDefPal(nUnitId, nTargetPal, nSepId);


		nTargetImgId = nImgId | 0xFF00;
		nImgUnitId = nUnitId;
		
		if(nExtraAmt == 6)
		{

			SetSourcePal(0, nUnitId, nStart + (nPalId - nStart)%nAmt, 6, nInc);
		}
		else
		{
			SetSourcePal(0, nUnitId, nPalId, 1, 1);
		}

		return TRUE;
	}

	return FALSE;
}



void CGame_MVC2_D::UpdatePalData()
{
	for(int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
	{
		sPalDef * srcDef = BasePalGroup.GetPalDef(nPalCtr);
		if(srcDef->bAvail )//&& srcDef->bChanged)
		{
			COLORREF * crSrc = srcDef->pPal;
			UINT8 uAmt = srcDef->uPalSz;

			for(int nPICtr = 0; nPICtr < uAmt; nPICtr++)
			{
				ppDataBuffer[srcDef->uUnitId][(srcDef->uPalId * 16) + nPICtr] = ConvCol(crSrc[nPICtr]);

			}

			if(bAlphaTrans)
			{
				//0 out the 1st index alpha flag
				ppDataBuffer[srcDef->uUnitId][(srcDef->uPalId * 16)] &= 0x0FFF;
			}

			srcDef->bChanged = FALSE;
			bFileChanged[srcDef->uUnitId] = TRUE;

			//Perform supplment palettes
			if(bPostSetPalProc)
			{
				PostSetPal(srcDef->uUnitId, srcDef->uPalId);
			}
		}
	}
}

void CGame_MVC2_D::FlushUnitFile()
{
	if(szUnitFile)
	{
		for(int i = 0; i < MVC2_D_NUMUNIT; i++)
		{
			if(szUnitFile[i])
			{
				delete [] szUnitFile[i];
			}
		}

		delete [] szUnitFile;


		szUnitFile = NULL;
	}

	if(bFileChanged)
	{
		delete [] bFileChanged;
		bFileChanged = NULL;
	}
}

void CGame_MVC2_D::PrepUnitFile()
{
	if(szUnitFile)
	{

		return;
	}

	
	szUnitFile = new CHAR * [MVC2_D_NUMUNIT];
	memset(szUnitFile, NULL, sizeof(CHAR *) * MVC2_D_NUMUNIT);

	bFileChanged = new UINT8[MVC2_D_NUMUNIT];
	memset(bFileChanged, NULL, sizeof(UINT8) * MVC2_D_NUMUNIT);
	
}

void CGame_MVC2_D::ResetChangeFlag(int nUnitId)
{
	bFileChanged[nUnitId] = FALSE;
}

void CGame_MVC2_D::PostSetPal(int nUnitId, int nPalId)
{
	int nBasicOffset = GetBasicOffset(nPalId);

	if(nBasicOffset == 0)
	{
		proc_supp(nUnitId, nPalId);
	}
}

void CGame_MVC2_D::ForEidrian(int nFlag, COLORREF crCol)
{
	int nPalAmt;
	switch(nFlag)
	{
	case 0:
		{
			nPalAmt = 1;
		}
		break;
	case 1:
		{
			nPalAmt = 16;
		}
		break;
	}

	for(int nUnitCtr = 0; nUnitCtr < MVC2_D_NUMUNIT; nUnitCtr++)
	{
		for(int nPalCtr = 0; nPalCtr < MVC2_D_PALDATASZ[nUnitCtr]/32; nPalCtr++)
		{
			if(ppDataBuffer[nUnitCtr])
			{
				for(int nPICtr = 0; nPICtr < nPalAmt; nPICtr++)
				{
					ppDataBuffer[nUnitCtr][nPalCtr * 16 + nPICtr]
					= 
					nFlag ? (ppDataBuffer[nUnitCtr][nPalCtr * 16 + nPICtr] & 0x0FFF) : ConvCol(crCol);
				}
				
				bFileChanged[nUnitCtr] = TRUE;
			}

			
		}

		
	}

}
void CGame_MVC2_D::SetExtraImg(int nImgId, int nUnitId, int nPalId)
{
	nTargetImgId = nImgId + 0xFF00;

	SetSourcePal(0, nUnitId, nPalId, 1, 1);
}