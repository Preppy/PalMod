#include "StdAfx.h"
#include "Game_SFIII3_A.h"
//#include "SFIII3_A_DEF.h"
#include "GameDef.h"


stExtraDef * CGame_SFIII3_A::SFIII3_A_EXTRA_CUSTOM = NULL;

CDescTree CGame_SFIII3_A::MainDescTree = CGame_SFIII3_A::InitDescTree();

int CGame_SFIII3_A::GetExtraCt(int nUnitId, BOOL bVisible)
{
	static int rgExtraCtDef[SFIII3_A_NUMUNIT + 1] = {-1};
	static int rgExtraCtAlt[SFIII3_A_NUMUNIT + 1] = {-1}; //Fix later

	int * rgExtraCt = bVisible ? (int *)rgExtraCtAlt : (int *)rgExtraCtDef;

	if(rgExtraCt[0] == -1)
	{
		int nDefCtr = 0;
		memset(rgExtraCt, 0, (SFIII3_A_NUMUNIT + 1) * sizeof(int));

		stExtraDef * pCurrDef = GetExtraDef(0);

		while(pCurrDef->uUnitN != 0xFF )
		{
			if(pCurrDef->bInvisible != 1 || !bVisible)
			{
				rgExtraCt[pCurrDef->uUnitN]++;
			}

			nDefCtr++;
			pCurrDef = GetExtraDef(nDefCtr);
			
		}
	}

	if(bVisible)
	{
		return rgExtraCtAlt[nUnitId];
	}
	else
	{
		return rgExtraCtDef[nUnitId];
	}
}


int CGame_SFIII3_A::GetExtraLoc(int nUnitId)
{
	static int rgExtraLoc[SFIII3_A_NUMUNIT + 1] = {-1};

	if(rgExtraLoc[0] == -1)
	{
		int nDefCtr = 0;
		int nCurrUnit = 0x80;
		memset(rgExtraLoc, 0, (SFIII3_A_NUMUNIT + 1) * sizeof(int));

		stExtraDef * pCurrDef = GetExtraDef(0);

		while(pCurrDef->uUnitN != 0xFF)
		{
			if(pCurrDef->uUnitN != nCurrUnit)
			{
				rgExtraLoc[pCurrDef->uUnitN] = nDefCtr;
				nCurrUnit = pCurrDef->uUnitN;
			}

			nDefCtr++;
			pCurrDef = GetExtraDef(nDefCtr);
		}
	}

	return rgExtraLoc[nUnitId];	
}


int CGame_SFIII3_A::GetBasicAmt(int nUnitId)
{
	switch(nUnitId)
	{
	case 0x0E:
		return 2;
	case SFIII3_A_EXTRALOC:
		return 1;
	default:
		return 7;
	}
}



CGame_SFIII3_A::CGame_SFIII3_A(void)
:
nCurrPalSz(0),
nCurrPalOffs(0)
{
	//We need the proper unit amt before we init the main buffer
	nUnitAmt = SFIII3_A_NUMUNIT + (GetExtraCt(SFIII3_A_EXTRALOC) ? 1 : 0);

	InitDataBuffer();

	//Set color mode
	SetColMode(COLMODE_15);

	//Set palette conversion mode
	BasePalGroup.SetMode(PALTYPE_8);

	//Set game information
	nGameFlag = SFIII3_A;
	nImgGameFlag = IMG5;
	nImgUnitAmt = nUnitAmt;
	
	nDisplayW = 8;
	nFileAmt = 1;

	//Prepare the file list
	//PrepUnitFile();

	//Set the image out display type
	DisplayType = DISP_DEF;
	pButtonLabel = const_cast<CHAR *>((CHAR *)DEF_BUTTONLABEL7);

	//Create the redirect buffer
	rgUnitRedir = new UINT8[nUnitAmt + 1];
	memset(rgUnitRedir, NULL, sizeof(UINT8) * nUnitAmt);

	//Create the file changed flag
	bFileChanged = new UINT8;

	nRIndexAmt = 31;
	nGIndexAmt = 31;
	nBIndexAmt = 31;
	nAIndexAmt = 0;

	nRIndexMul = 8.225;
	nGIndexMul = 8.225;
	nBIndexMul = 8.225;
	nAIndexMul = 0;
}

CGame_SFIII3_A::~CGame_SFIII3_A(void)
{ 
	//Get rid of the file changed flag
	if(bFileChanged)
	{
		delete bFileChanged;
	}
}

CDescTree * CGame_SFIII3_A::GetMainTree()
{
	return &CGame_SFIII3_A::MainDescTree;
}

CDescTree CGame_SFIII3_A::InitDescTree()
{
#ifdef SFIII3_A_USEEXTRAFILE

	//Load extra file if we're using it
	LoadExtraFile();

#endif

	int nUnitCt = SFIII3_A_NUMUNIT + (GetExtraCt(SFIII3_A_EXTRALOC) ? 1 : 0);

	sDescTreeNode * NewDescTree = new sDescTreeNode;

	sDescTreeNode * UnitNode;
	sDescTreeNode * ButtonNode;
	sDescNode * ChildNode;

	//Create the main character tree
	NewDescTree->ChildNodes = new sDescTreeNode[nUnitCt];
	NewDescTree->uChildAmt = nUnitCt;
	//All units have tree children
	NewDescTree->uChildType = DESC_NODETYPE_TREE;

	//Go through each character
	for(int iUnitCtr = 0; iUnitCtr < nUnitCt; iUnitCtr++)
	{

		//Use this for the bottom
		int nSuppAmt = 0;

		int nExtraCt = GetExtraCt(iUnitCtr, TRUE);
		BOOL bUseExtra = (GetExtraLoc(iUnitCtr) ? 1 : 0);

		int nButtonAmt = GetBasicAmt(iUnitCtr);
		int nMainChildAmt = nButtonAmt + 1 + bUseExtra;

		//int nChildAmt = (iUnitCtr == 0x0E ? 2 : BUTTON7) + 7 + 2 + 8;
		UnitNode = &((sDescTreeNode *)NewDescTree->ChildNodes)[iUnitCtr];

		if(iUnitCtr < SFIII3_A_EXTRALOC)
		{
			//Set each description
			sprintf(UnitNode->szDesc, "%s", SFIII3_A_UNITDESC[iUnitCtr]);

			//Init each character to have all 7 basic buttons (or 2 for ShinGouki) + portrait + ex + extra
			UnitNode->ChildNodes = new sDescTreeNode[nMainChildAmt];
			//All children have button tree's
			UnitNode->uChildType = DESC_NODETYPE_TREE;
			UnitNode->uChildAmt = nMainChildAmt;

			//Set each button data
			for(int iButtonCtr = 0; iButtonCtr < nButtonAmt; iButtonCtr++)
			{
				ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[iButtonCtr];

				//Set each button data
				sprintf(ButtonNode->szDesc, "%s", DEF_BUTTONLABEL7[iButtonCtr]);

				//Button children have nodes
				ButtonNode->uChildType = DESC_NODETYPE_NODE;
				ButtonNode->uChildAmt = 2; //Extra / Portrait

				ButtonNode->ChildNodes = (sDescTreeNode *)new sDescNode[2];

				//Set each button's extra nodes
				for(int nBasicCtr = 0; nBasicCtr < 2; nBasicCtr++)
				{
					
					ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nBasicCtr];

					if(nBasicCtr == 0)
					{
						sprintf(ChildNode->szDesc, "%s Main", DEF_BUTTONLABEL7[iButtonCtr]);
					}
					else //It's 1
					{
						sprintf(ChildNode->szDesc, "%s Portrait", DEF_BUTTONLABEL7[iButtonCtr]);	
					}

					ChildNode->uUnitId = iUnitCtr;
					ChildNode->uPalId = nBasicCtr ? (nButtonAmt + iButtonCtr) : iButtonCtr; 

				}
			}

			//Set up support nodes
			nSuppAmt = 2 + 8;

			ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[nButtonAmt]; //Support node
			sprintf(ButtonNode->szDesc, "Support");

			ButtonNode->ChildNodes = new sDescTreeNode[nSuppAmt];

			ButtonNode->uChildType = DESC_NODETYPE_NODE;
			ButtonNode->uChildAmt = nSuppAmt; //EX + Extra

			for(int nExtraCtr = 0; nExtraCtr < nSuppAmt; nExtraCtr++)
			{
				ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nExtraCtr];

				if(nExtraCtr < 2)
				{
					sprintf(ChildNode->szDesc, "EX Attack (%d)", nExtraCtr + 1);
				}
				else if(nExtraCtr < nSuppAmt)
				{
					sprintf(ChildNode->szDesc, "????");
				}

				ChildNode->uUnitId = iUnitCtr;
				ChildNode->uPalId = (nButtonAmt*2) + nExtraCtr;


			}
		}
		else
		{
			//Set each description
			sprintf(UnitNode->szDesc, "Extra Palettes");

			//Init each character to have all 7 basic buttons (or 2 for ShinGouki) + portrait + ex + extra
			UnitNode->ChildNodes = new sDescTreeNode[1]; //Only 1 for now, "Extra"
			//All children have button tree's
			UnitNode->uChildType = DESC_NODETYPE_TREE;
			UnitNode->uChildAmt = 1; //Only 1 for now, "Extra"
		}

		//Set up extra nodes

		if(bUseExtra)
		{
			int nExtraPos = GetExtraLoc(iUnitCtr);
			int nCurrExtra = 0;nExtraPos;

			stExtraDef * pCurrDef;

			ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[SFIII3_A_EXTRALOC > iUnitCtr ? (nMainChildAmt - 1) : 0]; //Extra node
			sprintf(ButtonNode->szDesc, "Extra");

			ButtonNode->ChildNodes = new sDescTreeNode[nExtraCt];

			ButtonNode->uChildType = DESC_NODETYPE_NODE;
			ButtonNode->uChildAmt = nExtraCt; //EX + Extra

			for(int nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
			{
				
				ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nExtraCtr];

				pCurrDef = GetExtraDef(nExtraPos + nCurrExtra);
				
				while(pCurrDef->bInvisible == 1) 
				{
					nCurrExtra++;
					
					pCurrDef = GetExtraDef(nExtraPos + nCurrExtra);
				}

				sprintf(ChildNode->szDesc, pCurrDef->szDesc);

				ChildNode->uUnitId = iUnitCtr;
				ChildNode->uPalId = (((SFIII3_A_EXTRALOC > iUnitCtr ? 1 : 0)*nButtonAmt*2) + nSuppAmt) + nCurrExtra;

				nCurrExtra++;


			}
		}


	}

	return NewDescTree;
}

sFileRule CGame_SFIII3_A::GetRule(int nUnitId)
{	
	sFileRule NewFileRule;

	sprintf_s(NewFileRule.szFileName, MAX_FILENAME, "51");

	NewFileRule.uUnitId = 0;
	NewFileRule.uVerifyVar = 0x800000;

	return NewFileRule;
}

int CGame_SFIII3_A::GetPalCt(int nUnitId)
{
	if(nUnitId == SFIII3_A_EXTRALOC)
	{
		return GetExtraCt(nUnitId);
	}
	else
	{
		return (GetBasicAmt(nUnitId)*2) + (2 + 8) + GetExtraCt(nUnitId);
	}
}

void CGame_SFIII3_A::InitDataBuffer()
{
	pppDataBuffer = new UINT16 **[nUnitAmt];
	memset(pppDataBuffer, NULL, sizeof(UINT16 **) * nUnitAmt);
}

void CGame_SFIII3_A::ClearDataBuffer()
{
	if(pppDataBuffer)
	{
		for(int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
		{
			
			if(pppDataBuffer[nUnitCtr])
			{
				int nPalAmt = GetPalCt(nUnitCtr);


				for(int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
				{
					if(pppDataBuffer[nUnitCtr][nPalCtr])
					{
						delete [] pppDataBuffer[nUnitCtr][nPalCtr];
					}
				}

				delete [] pppDataBuffer[nUnitCtr];
			}
			
		}

		delete [] pppDataBuffer;
	}
}

void CGame_SFIII3_A::GetPalOffsSz(int nUnitId, int nPalId)
{
	int nBasicPos = GetBasicAmt(nUnitId);
	int nPortPos = nBasicPos*2;
	int nExPos = 2 + nPortPos;
	int nExtraPos = 8 + nExPos;

	int nOffset, nPalSz;

	//nPortPos = nBasicPos + 7;

	BOOL bUseExtra = FALSE;

	if(nUnitId == SFIII3_A_EXTRALOC)
	{
		nExtraPos = 0;
		bUseExtra = TRUE;
	}
	else if(nPalId >= nExtraPos)
	{
		bUseExtra = TRUE;
	}

	if(!bUseExtra)
	{
		if(nPalId >= 0 && nPalId < nBasicPos) //Basic palettes
		{
			nOffset = (nUnitId * 0x80 * 7) + (nPalId * 0x80) + 0x700600;

			if(nUnitId > 0x0E)
				nOffset -= (5 * 0x80);

			nPalSz = 0x80;
		}
		else if(nPalId < nPortPos) //Portraits
		{
			nOffset = (nUnitId * (0x20 * 7) + ((nPalId - nBasicPos) * 0x20)) + 0x763BE0;
			nPalSz = 0x20;
		}
		else if(nPalId < nExPos)
		{
			int nOffStart = (nPalId - nPortPos ? 0x76AE00 : 0x764E00);

			nOffset = nOffStart + (nUnitId * 0x80) ;
			nPalSz = 0x80;
		}
		
		else if(nPalId < nExtraPos) //Extra Palettes
		{
			nOffset = 0x765C00 + (nUnitId * 0x400) + ((nPalId - nExPos) * 0x80);
			nPalSz = 0x80;
		}
	}
	else//Extra Palette
	{
		stExtraDef * pCurrDef = GetExtraDef(GetExtraLoc(nUnitId) + (nPalId - nExtraPos));

		nOffset = pCurrDef->uOffset;
		nPalSz= pCurrDef->uPalSz;
	}

	nCurrPalOffs = nOffset;
	nCurrPalSz = nPalSz/2;
}

BOOL CGame_SFIII3_A::LoadFile(CFile * LoadedFile, int nUnitId)
{
	int nPalAmt;

	for(int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
	{
		nPalAmt = GetPalCt(nUnitCtr); //Fix later for extras

		pppDataBuffer[nUnitCtr] = new UINT16 *[nPalAmt];

		rgUnitRedir[nUnitCtr] = SFIII3_A_UNITSORT[nUnitCtr];

		for(int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
		{
			GetPalOffsSz(nUnitCtr, nPalCtr);

			pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16 [nCurrPalSz];
			
			LoadedFile->Seek(nCurrPalOffs, CFile::begin);
			
			LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz*2);
			
		}
	}

	rgUnitRedir[nUnitAmt] = 0xFF;

	return TRUE;
}

BOOL CGame_SFIII3_A::SaveFile(CFile * SaveFile, int nUnitId)
{
	int nPalAmt;

	for(int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
	{
		nPalAmt = GetPalCt(nUnitCtr);

		for(int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
		{
			GetPalOffsSz(nUnitCtr, nPalCtr);
			
			SaveFile->Seek(nCurrPalOffs, CFile::begin);
			
			SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz*2);
			
		}
	}

	return TRUE;
}

void CGame_SFIII3_A::CreateDefPal(sDescNode * srcNode, int nSepId)
{
	int nUnitId = srcNode->uUnitId;
	int nPalId = srcNode->uPalId;

	GetPalOffsSz(nUnitId, nPalId);

	BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
	BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
}

BOOL CGame_SFIII3_A::CreateExtraPal(int nUnitId, int nPalId)
{
	int nExtra = nPalId - nNormalPalAmt;
	
	

	if(nExtra >= 0)
	{
		switch(nUnitId)
		{
		case 0x08: //Oro
			{
				switch(nExtra)
				{
				case 0: //Tengu Stone (1)
					{
						GetPalOffsSz(nUnitId, nPalId);

						BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
						
						BasePalGroup.AddSep(0, "Concrete", 0, 16);
						//BasePalGroup.AddSep(0, "", 16, 16); 
						BasePalGroup.AddSep(0, "Dinosaur / Stone", 32, 16);
						BasePalGroup.AddSep(0, "Rocket", 48, 16);

						GetPalOffsSz(nUnitId, nPalId + 1);

						BasePalGroup.AddPal(CreatePal(nUnitId, nPalId + 1), nCurrPalSz, nUnitId, nPalId + 1);
						
						BasePalGroup.AddSep(1, "Brick", 0, 16);

						ClearSetImgTicket(
							CreateImgTicket(nUnitId, 2,
								CreateImgTicket(nUnitId, 3, NULL, -2, 129)
							)
						);

						SetSourcePal(0, nUnitId, nPalId, 1, 1);
						SetSourcePal(1, nUnitId, nPalId + 1, 1, 1);

						return TRUE;
					}
				}
				break;
			}
		case 0x0C: //Urien
			{
				switch(nExtra)
				{
				case 0:
					{
						GetPalOffsSz(nUnitId, nPalId);

						BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
						BasePalGroup.AddSep(0, "Morph", 0, 64);

						GetPalOffsSz(nUnitId, nPalId + 1);

						BasePalGroup.AddPal(CreatePal(nUnitId, nPalId + 1), nCurrPalSz, nUnitId, nPalId + 1);
						BasePalGroup.AddSep(1, "Suit", 0, 64);

						ClearSetImgTicket(
							CreateImgTicket(nUnitId, 2,
								CreateImgTicket(nUnitId, 3, NULL, 0, 0)
							)
						);

						SetSourcePal(0, nUnitId, nPalId, 1, 1);
						SetSourcePal(1, nUnitId, nPalId + 1, 1, 1);

						return TRUE;

					}
					break;

				}
				
				break;
			}
		default:
			{
				nTargetImgId = nExtra + 2;
				return FALSE;
				
			}
			break;
		}
	}

	return FALSE;
}

BOOL CGame_SFIII3_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
{
	//Reset palette sources
	ClearSrcPal();

	if(Node01 == -1)
	{
		return FALSE;
	}

	UINT8 uUnitId;
	UINT16 uPalId;

	

	sDescNode * NodeGet = MainDescTree.GetDescNode(Node01, Node02, Node03, Node04);

	if(NodeGet == NULL)
	{
		return FALSE;
	}

	uUnitId = NodeGet->uUnitId;
	uPalId = NodeGet->uPalId;

	int nBasicAmt = GetBasicAmt(uUnitId);

	//Change the image id if we need to
	nTargetImgId = 0;
	int nImgUnitId = uUnitId;
	BOOL bCreateBasicPal = TRUE;

	int nSrcStart = 0;
	int nSrcAmt = nBasicAmt;

	//Get rid of any palettes if there are any
	BasePalGroup.FlushPalAll();

	switch(uUnitId)
	{
	case 0x0E: //Shin Gouki
		{
			nImgUnitId = 0x0D;
		}
		break;
	}

	//Select the image
	nNormalPalAmt = ((GetBasicAmt(uUnitId)*2)+10);

	if(SFIII3_A_EXTRALOC > uUnitId)
	{
		if(uPalId >= nBasicAmt && uPalId < nBasicAmt * 2)
		{
			nTargetImgId = 0x01; //Portrait Image
			nSrcStart = nBasicAmt;
		}
		else if(uPalId >= nBasicAmt*2 && uPalId < nNormalPalAmt)
		{
			nSrcStart = uPalId;
			nSrcAmt = 1;
		}
		else if(uPalId >= nNormalPalAmt)
		{
			bCreateBasicPal = !(CreateExtraPal(uUnitId, uPalId));

			if(bCreateBasicPal)
			{
				nSrcStart = uPalId;
				nSrcAmt = 1;
			}
		}
	
	}
	else
	{
	}

	
	
	if(bCreateBasicPal)
	{
		//Create the default palette
		ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

		CreateDefPal(NodeGet, 0);

		SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);
	}

	return TRUE;
}

int CGame_SFIII3_A::GetBasicImgId(int nUnitId, int nPalId)
{
	int nBasicAmt = GetBasicAmt(nUnitId);
	if(nPalId > nBasicAmt)
	{
		if(nPalId > (7 + nBasicAmt))
		{
			return 0;
		}
		else
		{
			return 1;
		}
	}
	else
	{
		return 0;
	}
}

COLORREF * CGame_SFIII3_A::CreatePal(int nUnitId, int nPalId)
{
	GetPalOffsSz(nUnitId, nPalId);
	//We get this from create def pal

	COLORREF * NewPal = new COLORREF[nCurrPalSz];

	for(int i = 0; i < nCurrPalSz; i++)
	{
		NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
	}

	return NewPal;
}

void CGame_SFIII3_A::UpdatePalData()
{
	for(int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
	{
		sPalDef * srcDef = BasePalGroup.GetPalDef(nPalCtr);
		if(srcDef->bAvail )
		{
			int nIndexStart = 0;

			COLORREF * crSrc = srcDef->pPal;
			UINT8 uAmt = srcDef->uPalSz;
			int nBasicAmt = GetBasicAmt(srcDef->uUnitId);

			if(srcDef->uPalId >= nBasicAmt && srcDef->uPalId  < nBasicAmt*2 && srcDef->uUnitId != SFIII3_A_EXTRALOC)//Portrait
			{
				nIndexStart = 3; //Skip surrounding portrait indexes
			}

			for(int nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
			{
				pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = ConvCol(crSrc[nPICtr]);

			}
			srcDef->bChanged = FALSE;
			bFileChanged[0] = TRUE;
		}
	}
}