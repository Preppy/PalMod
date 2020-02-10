#include "StdAfx.h"
#include "GameClass.h"

BOOL CGameClass::bPostSetPalProc = TRUE;


CGameClass::CGameClass(void)
	:
	ConvPal(NULL),
	ConvCol(NULL),
	CurrImgTicket(NULL),
	szDir(NULL),
	szUnitFile(NULL),
	bFileChanged(NULL),
	bIsDir(FALSE),
	nFileAmt(0),
	rgUnitRedir(0),
	nRedirCtr(0),
	nImgUnitAmt(0),
	bUsesHybrid(FALSE),
	pIndexRedir(NULL),
	nHybridSz(0),
	nDefPalSz(0)
{
}

CGameClass::~CGameClass(void)
{
	ClearSetImgTicket(NULL);

	//Clear the redirect buffer
	rgUnitRedir ? delete [] rgUnitRedir : NULL;

	//Get rid of the redir index

	if(pIndexRedir)
	{
		delete [] pIndexRedir;
	}
}

int CGameClass::GetPlaneAmt(ColFlag Flag)
{
	switch(Flag)
	{
	case COL_R:
		return nRIndexAmt;
		break;
	case COL_G:
		return nGIndexAmt;
		break;
	case COL_B:
		return nBIndexAmt;
		break;
	case COL_A:
		return nAIndexAmt;
		break;
	}

	return 0;
}

double CGameClass::GetPlaneMul(ColFlag Flag)
{
	switch(Flag)
	{
	case COL_R:
		return nRIndexMul;
		break;
	case COL_G:
		return nGIndexMul;
		break;
	case COL_B:
		return nBIndexMul;
		break;
	case COL_A:
		return nAIndexMul;
		break;

	}

	return 0;
}

void CGameClass::ClearSrcPal()
{
	//Values used for image out
	memset(nSrcPalUnit, -1, sizeof(int) * MAX_PAL);
	memset(nSrcPalStart, -1, sizeof(int) * MAX_PAL);
	memset(nSrcPalAmt, -1, sizeof(int) * MAX_PAL);
	memset(nSrcPalInc, -1, sizeof(int) * MAX_PAL);
}
BOOL CGameClass::SpecSel(int * nVarSet, int nPalId, int nStart, int nInc, int nAmt, int nMax)
{
	int nOffset = nPalId - nStart;

	if(nPalId >= nStart && (nOffset)%nInc < nAmt)
	{
		*nVarSet = ((nOffset)/nInc);

		if(*nVarSet >= nMax)
		{
			return FALSE;
		}
	}
	else
	{
		return FALSE;
	}

	return TRUE;
}

sImgTicket * CGameClass::CreateImgTicket(int nUnitId, int nImgId, sImgTicket * NextTicket, int nXOffs, int nYOffs)
{
	if(nImgId == -1)
	{
		return NULL;
	}

	sImgTicket * NewTicket = new sImgTicket;

	NewTicket->nUnitId = nUnitId;
	NewTicket->nImgId = nImgId;
	NewTicket->nXOffs = nXOffs;
	NewTicket->nYOffs = nYOffs;
	NewTicket->NextTicket = NextTicket;

	return NewTicket;
}

void CGameClass::ClearSetImgTicket(sImgTicket * NewImgTicket)
{
	sImgTicket * DelTicket = CurrImgTicket;
	sImgTicket * NextTicket;

	while(DelTicket != NULL)
	{
		NextTicket = DelTicket->NextTicket;
		delete DelTicket;
		DelTicket = NextTicket;
	}

	CurrImgTicket = NewImgTicket;
	
}

BOOL CGameClass::SetColMode(ColMode NewMode)
{
	CurrColMode = NewMode;

	switch(NewMode)
	{
	case COLMODE_12A:
		ConvPal = &CGameClass::CONV_12A_32;
		ConvCol = &CGameClass::CONV_32_12A;
		return TRUE;
		break;
	case COLMODE_15:
		ConvPal = &CGameClass::CONV_15_32;
		ConvCol = &CGameClass::CONV_32_15;
		return TRUE;
		break;
	case COLMODE_15ALT:
		ConvPal = &CGameClass::CONV_15ALT_32;
		ConvCol = &CGameClass::CONV_32_15ALT;
		return TRUE;
		break;
	default:
		return FALSE;
		break;
	}
}

UINT16 CGameClass::CONV_32_12A(UINT32 inCol)
{
	UINT16 auxr = 0, auxg = 0, auxb = 0, auxa = 0;

	//UINT16 swapped = SWAP_16(inCol);

    auxa = ((inCol & 0xFF000000) >> 24);	
	auxb = ((inCol & 0x00FF0000) >> 16);
    auxg = ((inCol & 0x0000FF00) >> 8);
    auxr = ((inCol & 0x000000FF));

	auxa = (auxa > 15*17 ? auxa = 15*17 : auxa);
	auxr = (auxr > 15*17 ? auxr = 15*17 : auxr);
	auxg = (auxg > 15*17 ? auxg = 15*17 : auxg);
	auxb = (auxb > 15*17 ? auxb = 15*17 : auxb);



	auxr /= 17; 
	auxg /= 17;
	auxb /= 17;
	auxa /= 17;

	//auxb = auxb;
	auxg = auxg << (4);
	auxr = auxr << (8);
	auxa = auxa << (12);

	return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::CONV_12A_32(UINT16 inCol)
{
	UINT32 auxr = 0, auxg = 0, auxb = 0, auxa = 0;
	
	auxb = (inCol & 0xF);
    auxg = (inCol & 0xF0) >> 4;
    auxr = (inCol & 0xF00) >> 8;
	auxa = (inCol & 0xF000) >> 12;

	auxr *= 17;
	auxg *= 17;
	auxb *= 17;
	auxa *= 17;

	//auxr = auxr;
	auxg = auxg << 8;
	auxb = auxb << 16;
	auxa = auxa << 24;

	return (auxb | auxg | auxr | auxa );
}

UINT32 CGameClass::CONV_15_32(UINT16 inCol)
{
	UINT32 auxr = 0, auxg = 0, auxb = 0;

	UINT16 swapped = SWAP_16(inCol);
	
	auxb = (swapped & 0x7C00) >> 10;
    auxg = (swapped & 0x3E0) >> 5;
    auxr = (swapped & 0x1F);

	auxr = auxr << (3);
	auxg = auxg << (3);
	auxb = auxb << (3);

	auxr += auxr/32;
	auxg += auxg/32;
	auxb += auxb/32;

	//auxr = auxr;
	auxg = auxg << 8;
	auxb = auxb << 16;

	return (auxb | auxg | auxr | 0xFF000000);
}

UINT16 CGameClass::CONV_32_15(UINT32 inCol)
{
	UINT16 auxr = 0, auxg = 0, auxb = 0;
	
	auxb = (inCol & 0x00FF0000) >> (16);
    auxg = (inCol & 0x0000FF00) >> (8);
    auxr = (inCol & 0x000000FF);

	auxb/=8;
	auxg/=8;
	auxr/=8;

	//auxr = auxr;
	auxg = auxg << (5);
	auxb = auxb << (10);

	return SWAP_16(auxb | auxg | auxr);
}

UINT32 CGameClass::CONV_15ALT_32(UINT16 inCol)
{
	UINT32 auxr = 0, auxg = 0, auxb = 0;

	UINT16 swapped = inCol;//SWAP_16(inCol);
	
	auxr = (swapped & 0x7C00) >> 10;
    auxg = (swapped & 0x3E0) >> 5;
    auxb = (swapped & 0x1F);

	auxr = auxr << (3);
	auxg = auxg << (3);
	auxb = auxb << (3);

	auxr += auxr/32;
	auxg += auxg/32;
	auxb += auxb/32;

	//auxr = auxr;
	auxg = auxg << 8;
	auxb = auxb << 16;

	return (auxb | auxg | auxr | 0xFF000000);
}

UINT16 CGameClass::CONV_32_15ALT(UINT32 inCol)
{
	UINT16 auxr = 0, auxg = 0, auxb = 0;
	
	auxb = (inCol & 0x00FF0000) >> (16);
    auxg = (inCol & 0x0000FF00) >> (8);
    auxr = (inCol & 0x000000FF);

	auxb/=8;
	auxg/=8;
	auxr/=8;

	auxr = auxr << (10);
	auxg = auxg << (5);
	//auxb = auxb;

	return auxb | auxg | auxr;
}

UINT16 CGameClass::SWAP_16(UINT16 palv)
{
       UINT16 aux = 0; 
       aux |= palv << 8;
       aux |= palv >> 8;
       return aux;
}

BOOL CGameClass::SetLoadDir(CHAR * szNewDir)
{
	if(!szDir)
	{
		szDir = new CHAR[strlen(szNewDir)+1];
		strcpy(szDir, szNewDir);
		
		return TRUE;
	}
	else
	{
		return FALSE;
	}
};

void CGameClass::SetSourcePal(int nIndex, int nUnitId, int nStart, int nAmt, int nInc)
{
	if(nIndex >= 4)
	{
		return;
	}

	nSrcPalUnit[nIndex] = nUnitId;
	nSrcPalStart[nIndex] = nStart;
	nSrcPalAmt[nIndex] = nAmt;
	nSrcPalInc[nIndex] = nInc;
}

void CGameClass::Revert(int nPalId)
{
	sPalRedir * RedirIndex = &BasePalGroup.GetRedir()[nPalId];

	sPalDef * CurrPalDef = BasePalGroup.GetPalDef(RedirIndex->nDefIndex);
	sPalSep * CurrPalSep = CurrPalDef->SepList[RedirIndex->nSepIndex];

	COLORREF * pTempPal = CreatePal(CurrPalDef->uUnitId, CurrPalDef->uPalId);

	int nStart = CurrPalSep->nStart;
	int nAmt = CurrPalSep->nAmt;

	for(int i = nStart; i < nStart + nAmt; i++)
	{
		CurrPalDef->pPal[i] = pTempPal[i];
		//CurrPalDef->pBasePal[i] = pTempPal[i];
	}

	delete [] pTempPal;
}

/*

void CGameClass::Invert(int nPalId)
{
	sPalRedir * RedirIndex = &BasePalGroup.GetRedir()[nPalId];

	sPalDef * CurrPalDef = BasePalGroup.GetPalDef(RedirIndex->nDefIndex);
	sPalSep * CurrPalSep = CurrPalDef->SepList[RedirIndex->nSepIndex];

	COLORREF * pTempPal = CreatePal(CurrPalDef->uUnitId, CurrPalDef->uPalId);

	int nStart = CurrPalSep->nStart;
	int nAmt = CurrPalSep->nAmt;

	COLORREF crPalVal;

	for(int i = nStart; i < nStart + nAmt; i++)
	{
		crPalVal = (0x00FFFFFF & ~pTempPal[i]) | (pTempPal[i] & 0xFF000000);

		CurrPalDef->pPal[i] = crPalVal;
		CurrPalDef->pBasePal[i] = crPalVal;
	}

	delete [] pTempPal;
}

*/

COLORREF *** CGameClass::CreateImgOutPal()
{
	COLORREF *** pppReturnPal;

	if(nSrcPalStart[0] == -1)
	{
		return NULL;
	}
	else
	{
		int i = 0;
		int nPalAmt = nSrcPalAmt[0];

		while(nSrcPalStart[i] != -1 && i < 4)
		{
			i++;
		}

		pppReturnPal = new COLORREF **[i];

		//Pass 2
		i = 0;
		while(nSrcPalStart[i] != -1 && i < 4)
		{
			pppReturnPal[i] = new COLORREF *[nPalAmt];

			for(int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
			{
				pppReturnPal[i][nPalCtr] = CreatePal(nSrcPalUnit[i], nSrcPalStart[i] + (nPalCtr * nSrcPalInc[i]));
			}

			i++;
		}
	}

	return pppReturnPal;
}

BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16 * pData, int nExclusion, COLORREF ** pNewPal, int * nNewPalSz)
{

	UINT32 * pMulRg = new UINT32[nIndexAmt];
	int nNewPalSzCpy = 0;


	memset(pMulRg, 0xFF, nIndexAmt * sizeof(UINT32));

	for(int nPICtr = 0; nPICtr < nIndexAmt; nPICtr++)
	{
		if(nPalSz - (nPICtr/nPalSz)*nPalSz == nExclusion)
		{
			nPICtr++;
		}
		
		if(nPICtr < nIndexAmt)
		{
			int nMulCtr = 0;

			while(pMulRg[nMulCtr] != 0xFFFFFFFF)
			{
				if(pMulRg[nMulCtr] == pData[nPICtr])
				{
					break;
				}

				nMulCtr++;
			}

			if(nMulCtr == nNewPalSzCpy)
			{
				pMulRg[nNewPalSzCpy] = pData[nPICtr];
				nNewPalSzCpy++;
			}
		}
	}

	if(nNewPalSzCpy)
	{
		//Delete the previous data

		if(pIndexRedir)
		{
			delete [] pIndexRedir;
		}
		
		//Create the redirect

		pIndexRedir = new UINT16[nIndexAmt];

		for(int nPICtr = 0; nPICtr < nIndexAmt; nPICtr++)
		{
			if(nPalSz - (nPICtr/nPalSz)*nPalSz == nExclusion)
			{
				pIndexRedir[nPICtr] = 0;
			}
			else
			{
				for(int nMulCtr = 0; nMulCtr < nNewPalSzCpy; nMulCtr++)
				{
					if(pMulRg[nMulCtr] == pData[nPICtr])
					{
						pIndexRedir[nPICtr] = nMulCtr;
						break;
					}
				}
			}
		}

		//Create the palette

		UINT32 uAlpha = nAIndexAmt ? 0 : 0xFF000000;

		*pNewPal = new COLORREF[nNewPalSzCpy];

		for(int nPICtr = 0; nPICtr < nNewPalSzCpy; nPICtr++)
		{
			(*pNewPal)[nPICtr] = ConvPal(pMulRg[nPICtr]) | uAlpha;
		}

		*nNewPalSz = nNewPalSzCpy;

		return TRUE;
	}
	else
	{
		delete [] pMulRg;

		return FALSE;
	}

		
	return FALSE;
}
