#include "StdAfx.h"
#include "Game_SSF2T_A.h"
#include "GameDef.h"


CDescTree CGame_SSF2T_A::MainDescTree = CGame_SSF2T_A::InitDescTree();


CGame_SSF2T_A::CGame_SSF2T_A(void)
:
nCurrPalSz(0),
nCurrPalOffs(0)
{
	//We need the proper unit amt before we init the main buffer
	nUnitAmt = SSF2T_A_NUMUNIT;

	InitDataBuffer();

	//Set color mode
	SetColMode(COLMODE_12A);

	//Set palette conversion mode
	BasePalGroup.SetMode(PALTYPE_17);

	//Set game information
	nGameFlag = SSF2T_A;
	nImgGameFlag = IMG4;
	nImgUnitAmt = nUnitAmt;
	
	nDisplayW = 8;
	nFileAmt = 1;

	//Prepare the file list
	//PrepUnitFile();

	//Set the image out display type
	DisplayType = DISP_DEF;
	pButtonLabel = const_cast<CHAR *>((CHAR *)DEF_BUTTONLABEL6);

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

CGame_SSF2T_A::~CGame_SSF2T_A(void)
{ 
	//Get rid of the file changed flag
	if(bFileChanged)
	{
		delete bFileChanged;
	}
}

CDescTree * CGame_SSF2T_A::GetMainTree()
{
	return &CGame_SSF2T_A::MainDescTree;
}

CDescTree CGame_SSF2T_A::InitDescTree()
{
	

	sDescTreeNode * NewDescTree = new sDescTreeNode;

	sDescTreeNode * UnitNode;
	sDescTreeNode * ButtonNode;
	sDescNode * ChildNode;

	//Create the main character tree
	NewDescTree->ChildNodes = new sDescTreeNode[SSF2T_A_NUMUNIT];
	NewDescTree->uChildAmt = SSF2T_A_NUMUNIT;
	//All units have tree children
	NewDescTree->uChildType = DESC_NODETYPE_TREE;

	//Go through each character
	for(int iUnitCtr = 0; iUnitCtr < SSF2T_A_NUMUNIT; iUnitCtr++)
	{

		UnitNode = &((sDescTreeNode *)NewDescTree->ChildNodes)[iUnitCtr];
		//Set each description
		sprintf(UnitNode->szDesc, "%s", SSF2T_A_UNITDESC[iUnitCtr]);

		//Init each character to have all 6 basic buttons + extra
		UnitNode->ChildNodes = new sDescTreeNode[10];	

		//All children have button tree's
		UnitNode->uChildType = DESC_NODETYPE_TREE;
		UnitNode->uChildAmt = 10;	

		for(int iButtonCtr = 0; iButtonCtr < 10; iButtonCtr++)
		{

			int nCurrChildAmt = 1; // 1 for each button for now

			ButtonNode = &((sDescTreeNode *)UnitNode->ChildNodes)[iButtonCtr];

			//Set each button data
			sprintf(ButtonNode->szDesc, "Color %d", iButtonCtr);

			//Button children have nodes
			ButtonNode->uChildType = DESC_NODETYPE_NODE;
			ButtonNode->uChildAmt = nCurrChildAmt;

			ButtonNode->ChildNodes = (sDescTreeNode *)new sDescNode[nCurrChildAmt];

			//Set each button's node
			///////////////////////////////////////////////////////////////////////

			ChildNode = &((sDescNode *)ButtonNode->ChildNodes)[0]; //We only have 1

			sprintf(ChildNode->szDesc, "Color %d", iButtonCtr);

			ChildNode->uUnitId = iUnitCtr;
			ChildNode->uPalId = iButtonCtr;

		}
	}

	return CDescTree(NewDescTree);
}

sFileRule CGame_SSF2T_A::GetRule(int nUnitId)
{	
	sFileRule NewFileRule;

	sprintf_s(NewFileRule.szFileName, MAX_FILENAME, "sfxe.04a");

	NewFileRule.uUnitId = 0;
	NewFileRule.uVerifyVar = 0x80000;

	return NewFileRule;
}

int CGame_SSF2T_A::GetBasicAmt(int nUnitId)
{
	if(nUnitId == SSF2T_A_NUMUNIT - 1)
	{
		return 2;
	}
	else
	{
		return 10;
	}

	return 10;
}

void CGame_SSF2T_A::InitDataBuffer()
{
	pppDataBuffer = new UINT16 **[nUnitAmt];
	memset(pppDataBuffer, NULL, sizeof(UINT16 **) * nUnitAmt);
}

void CGame_SSF2T_A::ClearDataBuffer()
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

void CGame_SSF2T_A::GetPalOffsSz(int nUnitId, int nPalId)
{
	nCurrPalOffs = 0x3FB2C + (0x66C * nUnitId) + (nPalId * (nUnitId == 2 ? 0xA0 : 0xA2)) - (nUnitId > 2 ? 0x10 : 0);
	nCurrPalSz = 16;
}

BOOL CGame_SSF2T_A::LoadFile(CFile * LoadedFile, int nUnitId)
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

int CGame_SSF2T_A::GetPalCt(int nUnitId)
{
	return 10;// 6 palettes in a unit
}
BOOL CGame_SSF2T_A::SaveFile(CFile * SaveFile, int nUnitId)
{
	

	for(int nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
	{
		int nPalAmt = GetPalCt(nUnitCtr);

		for(int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
		{
			GetPalOffsSz(nUnitCtr, nPalCtr);
			
			SaveFile->Seek(nCurrPalOffs, CFile::begin);
			
			SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], nCurrPalSz*2);
			
		}
	}

	return TRUE;
}

void CGame_SSF2T_A::CreateDefPal(sDescNode * srcNode, int nSepId)
{
	int nUnitId = srcNode->uUnitId;
	int nPalId = srcNode->uPalId;

	GetPalOffsSz(nUnitId, nPalId);

	BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), nCurrPalSz, nUnitId, nPalId);
	BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, nCurrPalSz);
}


BOOL CGame_SSF2T_A::UpdatePalImg(int Node01, int Node02, int Node03, int Node04)
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
	int nImgUnitId = uUnitId + SSF2T_A_IMGOFFSET;

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

COLORREF * CGame_SSF2T_A::CreatePal(int nUnitId, int nPalId)
{
	GetPalOffsSz(nUnitId, nPalId);

	COLORREF * NewPal = new COLORREF[nCurrPalSz];

	for(int i = 1; i < nCurrPalSz; i++)
	{
		NewPal[i] = ConvPal(pppDataBuffer[nUnitId][nPalId][i]) | 0xFF000000;
	}

	NewPal[0] = 0xFF000000;

	return NewPal;
}

void CGame_SSF2T_A::UpdatePalData()
{

	for(int nPalCtr = 0; nPalCtr < MAX_PAL; nPalCtr++)
	{
		sPalDef * srcDef = BasePalGroup.GetPalDef(nPalCtr);

		if(srcDef->bAvail )
		{
			int nIndexStart = 0;

			COLORREF * crSrc = srcDef->pPal;
			UINT8 uAmt = srcDef->uPalSz;

			if(srcDef->uPalId < GetBasicAmt(srcDef->uUnitId))
			{
				nIndexStart = 1;
			}

			for(int nPICtr = nIndexStart; nPICtr < uAmt; nPICtr++)
			{
				pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][nPICtr] = (ConvCol(crSrc[nPICtr]) & 0x0FFF);

			}

			srcDef->bChanged = FALSE;
			bFileChanged[0] = TRUE;
		}
	}
}