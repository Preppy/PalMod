#include "StdAfx.h"
#include "Game_XMVSF_A.h"
#include "GameDef.h"


CDescTree CGame_XMVSF_A::MainDescTree = CGame_XMVSF_A::InitDescTree();


CGame_XMVSF_A::CGame_XMVSF_A(void)
:
nCurrPalSz(0),
nCurrPalOffs(0)
{
	//We need the proper unit amt before we init the main buffer
	nUnitAmt = XMVSF_A_NUMUNIT;

	InitDataBuffer();

	//Set color mode
	SetColMode(COLMODE_12A);

	//Set palette conversion mode
	BasePalGroup.SetMode(PALTYPE_17);

	//Set game information
	nGameFlag = XMVSF_A;
	nImgGameFlag = IMG4;
	nImgUnitAmt = nUnitAmt;
	
	nDisplayW = 8;
	nFileAmt = 1;

	//Prepare the file list
	//PrepUnitFile();

	//Set the image out display type
	DisplayType = DISP_DEF;
	pButtonLabel = const_cast<CHAR *>((CHAR *)DEF_DESCPRISEC);

	//Create the redirect buffer
	rgUnitRedir = new UINT8[nUnitAmt + 1];
	memset(rgUnitRedir, NULL, sizeof(UINT8) * nUnitAmt);

	//Create the file changed flag
	bFileChanged = new UINT8;

	nRIndexAmt = 15;
	nGIndexAmt = 15;
	nBIndexAmt = 15;
	nAIndexAmt = 0;

	nRIndexMul = 17.0f;
	nGIndexMul = 17.0f;
	nBIndexMul = 17.0f;
	nAIndexMul = 0.0f;
}

CGame_XMVSF_A::~CGame_XMVSF_A(void)
{ 
	//Get rid of the file changed flag
	if(bFileChanged)
	{
		delete bFileChanged;
	}
}

CDescTree * CGame_XMVSF_A::GetMainTree()
{
	return &CGame_XMVSF_A::MainDescTree;
}

CDescTree CGame_XMVSF_A::InitDescTree()
{
	

	sDescTreeNode * NewDescTree = new sDescTreeNode;

	sDescTreeNode * UnitNode;
	sDescTreeNode * ButtonNode;
	sDescNode * ChildNode;

	//Create the main character tree
	NewDescTree->ChildNodes = new sDescTreeNode[XMVSF_A_NUMUNIT];
	NewDescTree->uChildAmt = XMVSF_A_NUMUNIT;
	//All units have tree children
	NewDescTree->uChildType = DESC_NODETYPE_TREE;

	//Go through each character
	for(int iUnitCtr = 0; iUnitCtr < XMVSF_A_NUMUNIT; iUnitCtr++)
	{

		UnitNode = &((sDescTreeNode *)NewDescTree->ChildNodes)[iUnitCtr];
		//Set each description
		sprintf(UnitNode->szDesc, "%s", XMVSF_A_UNITDESC[iUnitCtr]);

		//XMVSF uses only 2 colors, but sorted in an unknown order. Adding in 1 category
		UnitNode->ChildNodes = new sDescTreeNode[1];	

		//All children have button tree's
		UnitNode->uChildType = DESC_NODETYPE_TREE;
		UnitNode->uChildAmt = 1;

		int nCurrChildAmt = GetPalCt(iUnitCtr);

		for(int iButtonCtr = 0; iButtonCtr < 1; iButtonCtr++)
		{

			 // 1 for each button for now

			ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[iButtonCtr];

			//Set each button data
			sprintf(ButtonNode->szDesc, "Palettes");

			//Button children have nodes
			ButtonNode->uChildType = DESC_NODETYPE_NODE;
			ButtonNode->uChildAmt = nCurrChildAmt;

			ButtonNode->ChildNodes = (sDescTreeNode *)new sDescNode[nCurrChildAmt];

			//Set each button's node
			///////////////////////////////////////////////////////////////////////

			for(int nChildCtr = 0; nChildCtr < nCurrChildAmt; nChildCtr++)
			{
				ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[nChildCtr]; 

				if(!(nChildCtr >= nCurrChildAmt - 1))
				{

					sprintf(ChildNode->szDesc, "Palette (%02X)", nChildCtr);

				}
				else
				{
					sprintf(ChildNode->szDesc, "Portrait (%02X)", nChildCtr - nCurrChildAmt + 1);
				}

				ChildNode->uUnitId = iUnitCtr;
				ChildNode->uPalId = (iButtonCtr * nCurrChildAmt) + nChildCtr;
			}

		}
	}

	return CDescTree(NewDescTree);
}

sFileRule CGame_XMVSF_A::GetRule(int nUnitId)
{	
	sFileRule NewFileRule;

	sprintf_s(NewFileRule.szFileName, MAX_FILENAME, "xvs.05a");

	NewFileRule.uUnitId = 0;
	NewFileRule.uVerifyVar = 0x80000;

	return NewFileRule;
}

int CGame_XMVSF_A::GetBasicAmt(int nUnitId)
{
	return 2; // 2 for now
}

int CGame_XMVSF_A::GetPalCt(int nUnitId)
{
	return ((XMVSF_A_UNITLOC[nUnitId + 1] - XMVSF_A_UNITLOC[nUnitId]) / 0x20) + 1; //1 = Portrait 
}

void CGame_XMVSF_A::InitDataBuffer()
{
	pppDataBuffer = new UINT16 **[nUnitAmt];
	memset(pppDataBuffer, NULL, sizeof(UINT16 **) * nUnitAmt);
}

void CGame_XMVSF_A::ClearDataBuffer()
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

void CGame_XMVSF_A::GetPalOffsSz(int nUnitId, int nPalId)
{
	//0x5A0 = Primary Portrait Start
	
	if(GetLocalAmt(nUnitId) <= nPalId )
	{
		nCurrPalOffs = (0xA0 * nUnitId) + 0x1BDFC;
		nCurrPalSz = 0xA0 / 2;
	}
	else
	{
		nCurrPalOffs = XMVSF_A_UNITLOC[nUnitId] + (nPalId * 0x20);
		nCurrPalSz = 16;
	}
}

BOOL CGame_XMVSF_A::LoadFile(CFile * LoadedFile, int nUnitId)
{
	int nPalAmt;

	for(int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
	{
		nPalAmt = GetPalCt(nUnitCtr);

		pppDataBuffer[nUnitCtr] = new UINT16 *[nPalAmt];

		rgUnitRedir[nUnitCtr] = nUnitCtr; //Fix later for unit sort

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

BOOL CGame_XMVSF_A::SaveFile(CFile * SaveFile, int nUnitId)
{
	

	for(int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
	{
		
		int nPalAmt = GetPalCt(nUnitId);

		for(int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
		{
			GetPalOffsSz(nUnitCtr, nPalCtr);
			
			SaveFile->Seek(nCurrPalOffs, CFile::begin);
			
			SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz*2);
			
		}
	}

	return TRUE;
}

void CGame_XMVSF_A::CreateDefPal(sDescNode * srcNode, int nSepId)
{
	int nUnitId = srcNode->uUnitId;
	int nPalId = srcNode->uPalId;

	GetPalOffsSz(nUnitId, nPalId);

	COLORREF * pNewPal = CreatePal(nUnitId, nPalId);

	if(bUsesHybrid)
	{
		nCurrPalSz = nHybridSz;
	}

	BasePalGroup.AddPal(pNewPal, nCurrPalSz, nUnitId, nPalId);
	BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);

	if(bUsesHybrid)
	{
		BasePalGroup.SortPal(BasePalGroup.GetAddIndex(), 1, SORT_HUE);
	}
}


BOOL CGame_XMVSF_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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

	//Change the image id if we need to
	nTargetImgId = 0;
	int nImgUnitId = XMVSF_A_IMGREDIR[uUnitId];

	int nSrcStart = 0;
	int nSrcAmt = GetBasicAmt(uUnitId);

	//Get rid of any palettes if there are any
	BasePalGroup.FlushPalAll();	
	
	//Create the default palette
	ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

	CreateDefPal(NodeGet, 0);

	SetSourcePal(0, uUnitId, nSrcStart, nSrcAmt, 1);
	

	return TRUE;
}

COLORREF * CGame_XMVSF_A::CreatePal(int nUnitId, int nPalId)
{
	GetPalOffsSz(nUnitId, nPalId);
	
	COLORREF * NewPal = NULL;

	if(GetLocalAmt(nUnitId) <= nPalId)
	{
		bUsesHybrid = TRUE;
		
		//16 = Size of portrait image
		//15 = Unused index

		CreateHybridPal(nCurrPalSz, 16, pppDataBuffer[nUnitId][nPalId], 15, &NewPal, &nHybridSz);	
	}
	else
	{


		bUsesHybrid = FALSE;

		NewPal = new COLORREF[nCurrPalSz];
		
		for(int i = 1; i < nCurrPalSz; i++)
		{
			NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i - 1]) | 0xFF000000;
		}

		NewPal[0] = 0xFF000000;

	}

	return NewPal;
}

void CGame_XMVSF_A::UpdatePalData()
{

	for(int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
	{
		sPalDef * srcDef = BasePalGroup.GetPalDef(nPalCtr);

		if(srcDef->bAvail )
		{
			

			int nIndexStart = 1;

			COLORREF * crSrc;
			UINT8 uAmt = srcDef->uPalSz;

			if(bUsesHybrid)
			{
				crSrc = srcDef->pPal;
				crSrc = BasePalGroup.GetUnsortedPal(nPalCtr);

				GetPalOffsSz(srcDef->uUnitId, srcDef->uPalId);

				for(int nPICtr = 0; nPICtr < nCurrPalSz; nPICtr++)
				{
					
					if(pIndexRedir[nPICtr])
					{
						pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = (ConvCol(crSrc[pIndexRedir[nPICtr]]) & 0x0FFF);
					}
					

				}

				delete [] crSrc;
			}
			else
			{
				crSrc = srcDef->pPal;

				for(int nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
				{
					pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr - 1] = (ConvCol(crSrc[nPICtr]) & 0x0FFF);

				}
			}

			srcDef->bChanged = FALSE;
			bFileChanged[0] = TRUE;
		}
	}
}