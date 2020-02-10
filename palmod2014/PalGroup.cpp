#include "StdAfx.h"
#include "PalGroup.h"
#include "ColorScale.h"
#include "ShellSort.h"
#include "math.h"

CPalGroup::CPalGroup(void)
	:nCurrPalAmt(0),
	 nRedirCtr(0),
	PalMode(PALTYPE_8)
{
	InitPal();
}

CPalGroup::~CPalGroup(void)
{
	FlushPalAll();
}

void CPalGroup::InitPal()
{
	for(int i = 0; i < MAX_PAL; i++)
	{
		rgPalettes[i].pPal = NULL;
		rgPalettes[i].pBasePal = NULL;
		rgPalettes[i].uSepAmt = 0;

		rgPalettes[i].pSortTable = NULL;
		rgPalettes[i].uSortIndexStart = 0;
	}

	//Clear the redirect buffer
	memset(rgRedir, NULL, sizeof(sPalRedir) * MAX_PAL * MAX_SEP);
}

void CPalGroup::FlushPalAll()
{

	for(int i = 0; i < MAX_PAL; i++)
	{
		FlushPal(i);

		nCurrPalAmt = 0;
	}

	//Clear the redirect buffer
	memset(rgRedir, NULL, sizeof(sPalRedir) * MAX_PAL * MAX_SEP);
	nRedirCtr = 0;
}

BOOL CPalGroup::FlushPal(int nIndex)
{
	if(nIndex > MAX_PAL)
	{
		return FALSE;
	}

	if(rgPalettes[nIndex].pPal)
	{
		delete [] rgPalettes[nIndex].pPal;
		//rgPalettes[nIndex].pPal = NULL;
	}

	if(rgPalettes[nIndex].pBasePal)
	{
		delete [] rgPalettes[nIndex].pBasePal;
		//rgPalettes[nIndex].pBasePal = NULL;
	}

	if(rgPalettes[nIndex].pSortTable)
	{
		delete [] rgPalettes[nIndex].pSortTable;
		rgPalettes[nIndex].pSortTable = NULL;
	}

	for(int i = 0; i < rgPalettes[nIndex].uSepAmt; i++)
	{
		delete rgPalettes[nIndex].SepList[i];
		
		
	}

	
	
	memset(&rgPalettes[nIndex], NULL, sizeof(sPalDef));
	
	

	return TRUE;
}

BOOL CPalGroup::SetMode(ePalType NewPalMode)
{
	PalMode = NewPalMode;

	switch(PalMode)
	{
	case PALTYPE_8:
		ROUND = ROUND_R = ROUND_G = ROUND_B = &CPalGroup::ROUND_8;
		return TRUE;
		break;
	case PALTYPE_17:
		ROUND = ROUND_R = ROUND_G = ROUND_B = &CPalGroup::ROUND_17;
		return TRUE;
		break;
	default:
		return FALSE;
		break;
	}

	return FALSE;
}

BOOL CPalGroup::AddPal(COLORREF * pPal, UINT16 uPalSz, UINT8 uUnitId, UINT16 uPalId)
{

	if(nCurrPalAmt >= MAX_PAL || !pPal || !uPalSz)
	{
		return FALSE;
	}

	sPalDef * CurrPal = &rgPalettes[nCurrPalAmt];

	//Init the basics of the palette
	CurrPal->pPal = pPal;
	CurrPal->uPalSz = uPalSz;
	CurrPal->uUnitId = uUnitId;
	CurrPal->uPalId = uPalId;

	CurrPal->uSepAmt = 0;
	CurrPal->bAvail = TRUE;
	CurrPal->bChanged = FALSE;

	CurrPal->pSortTable = NULL;
	CurrPal->uSortIndexStart = 0;

	//Make a copy of the palette
	CurrPal->pBasePal = new COLORREF[uPalSz];
	memcpy(CurrPal->pBasePal, CurrPal->pPal, sizeof(COLORREF) * uPalSz);

	nCurrPalAmt++;

	return TRUE;
}

void CPalGroup::SetRGBA(COLORREF * crTarget, UINT8 rVal, UINT8 gVal, UINT8 bVal, UINT8 aVal)
{
	*crTarget = RGB(ROUND_R(rVal), ROUND_G(gVal), ROUND_B(bVal));
	*crTarget |= (COLORREF)aVal << 24;
}

void CPalGroup::SetHLSA(COLORREF * crTarget, double dH, double dL, double dS, UINT8 aVal)
{
	*crTarget = HLStoRGB(LimitHLS(dH), LimitHLS(dL), LimitHLS(dS));
	*crTarget = RGB(ROUND_R(GetRValue(*crTarget)),ROUND_G(GetGValue(*crTarget)),ROUND_B(GetBValue(*crTarget)));
	*crTarget |= (UINT32)aVal << 24;
}

void CPalGroup::SetAddHLSA(COLORREF crSrc, COLORREF * crTarget, double fpAddH, double fpAddL, double fpAddS, int uAddA)
{

	double modH, modL, modS;

	RGBtoHLS(crSrc, &modH, &modL, &modS);

	*crTarget = HLStoRGB(
		SubHLS(modH + fpAddH), 
		LimitHLS(modL + fpAddL), 
		LimitHLS(modS + fpAddS)
		 );

	*crTarget = RGB(ROUND_R(GetRValue(*crTarget)), ROUND_G(GetGValue(*crTarget)), ROUND_B(GetBValue(*crTarget)));
	*crTarget |= (UINT32)ROUND(LimitRGB(GetAValue(crSrc) + uAddA)) << 24;
}

void CPalGroup::SetAddRGBA(COLORREF crSrc, COLORREF * crTarget, int uAddR, int uAddG, int uAddB, int uAddA)
{
	*crTarget = RGB(
		ROUND_R(LimitRGB(GetRValue(crSrc) + uAddR)),
		ROUND_G(LimitRGB(GetGValue(crSrc) + uAddG)),
		ROUND_B(LimitRGB(GetBValue(crSrc) + uAddB))
		);

	*crTarget = RGB(ROUND_R(GetRValue(*crTarget)), ROUND_G(GetGValue(*crTarget)), ROUND_B(GetBValue(*crTarget)));
	*crTarget |= (UINT32)ROUND(LimitRGB(GetAValue(crSrc) + uAddA)) << 24;
}

BOOL CPalGroup::AddSep(int nIndex, CHAR * szDesc, int nStart, int nAmt)
{

	if(rgPalettes[nIndex].uSepAmt >= MAX_SEP || nStart + nAmt > rgPalettes[nIndex].uPalSz)
	{
		return FALSE;

	}

	
	sPalSep * NewSep = new sPalSep;

	sprintf(NewSep->szDesc, szDesc);
	NewSep->nStart = nStart;
	NewSep->nAmt = nAmt;

	rgPalettes[nIndex].SepList[rgPalettes[nIndex].uSepAmt] = NewSep;
	

	//Set a redir node
	rgRedir[nRedirCtr].nDefIndex = nIndex;
	rgRedir[nRedirCtr].nSepIndex = rgPalettes[nIndex].uSepAmt;
	nRedirCtr++;

	rgPalettes[nIndex].uSepAmt++;

	return TRUE;
}

void CPalGroup::SortPal(int nIndex, int nStartIndex, int nSortFlag)
{

	if(!rgPalettes[nIndex].bAvail)
	{
		return; //Most likeley wont happen
	}

	double * pHSLArray;
	int nPalSz = rgPalettes[nIndex].uPalSz;
	
	if(rgPalettes[nIndex].pSortTable)
	{
		delete [] rgPalettes[nIndex].pSortTable;
	}

	pHSLArray = new double[nPalSz * 3];
	rgPalettes[nIndex].pSortTable = new UINT16[nPalSz];

	for(int i = 0; i < nPalSz; i++)
	{
		rgPalettes[nIndex].pSortTable[i] = (UINT16)i;

		RGBtoHLS(rgPalettes[nIndex].pPal[i], &pHSLArray[i], &pHSLArray[i + nPalSz], &pHSLArray[i + (nPalSz*2)]);
		
		//pHSLArray[i] = (double)(rgPalettes[nIndex].pPal[i] & 0x00FFFFFF);
	}

	//Go through array again
	for(int i = 0; i < nPalSz; i++)
	{		
		//pHSLArray[i] = pHSLArray[i] * pHSLArray[i + nPalSz] / pHSLArray[i + (nPalSz*2)];

		double fpPage;
		double fpPageSz = 20.0f;
		double fpPageAmt;
		
		pHSLArray[i] *= 360.0f;

		fpPageAmt = (double)((int)(pHSLArray[i] / fpPageSz));

		//pHSLArray[i] = fpPageSz * fpPageAmt;
		pHSLArray[i] += fpPageSz;//

		fpPage = 4096.0 * fpPageAmt;

		//pHSLArray[i] /=  fabs((pHSLArray[i + nPalSz * 2])-(pHSLArray[i + nPalSz]));
		
		//pHSLArray[i] /=  pHSLArray[i + nPalSz] + ((pHSLArray[i + (nPalSz * 2)]) / 3.0);
		//pHSLArray[i] /= (double)(rgPalettes[nIndex].pPal[i] & 0x00FFFFFF);

		//if(i && pHSLArray[i -1] == pHSLArray[i])
		//{
		//	pHSLArray[i] += pHSLArray[i + nPalSz];
		//}

		
		COLORREF crCol = rgPalettes[nIndex].pPal[i];
		double nR = (double)GetRValue(rgPalettes[nIndex].pPal[i])/255.0, 
			nG = (double)GetGValue(rgPalettes[nIndex].pPal[i])/255.0, 
			nB = (double)GetBValue(rgPalettes[nIndex].pPal[i])/255.0;

		double fpX, fpY, fpZ;

		ccRGBtoXYZ(nR, nG, nB, &fpX, &fpY, &fpZ);

		//pHSLArray[i] /= sqrt(sq(fpX) + sq(fpY) + sq(fpZ));
		pHSLArray[i] /= sqrt(sq(nR - 0) + sq(nG - 0) + sq(nB- 0));
	
		//pHSLArray[i] /= 
		//	pHSLArray[i + nPalSz] + ((pHSLArray[i + (nPalSz * 2)]) / 0.5) + sqrt(sq(nR - 0) + sq(nG - 0) + sq(nB- 0)) + fpX*4;
		
	

		pHSLArray[i] += fpPage;
	}
	
	/*
    */
	

	//for(int i = 0; i < nPalSz; i++)
	//{
	//	COLORREF crCol = rgPalettes[nIndex].pPal[i];
	//	double nR = (double)GetRValue(rgPalettes[nIndex].pPal[i]), 
	//		nG = (double)GetGValue(rgPalettes[nIndex].pPal[i]), 
	//		nB = (double)GetBValue(rgPalettes[nIndex].pPal[i]);
	//
	//	pHSLArray[i] /= 
	//		sqrt(sq(nR*0.3 - 0) + sq(nG*0.6 - 0) + sq(nB*0.1 - 0));
	//	
	//}
	//Sort again

	if((nSortFlag & SORT_HUE) == SORT_HUE)
	{
		for(int i = 0; i < 10; i++)
		{
			ShellSort(
				&pHSLArray[nStartIndex], 
				
				&pHSLArray[nStartIndex + nPalSz],
				&pHSLArray[nStartIndex + (nPalSz * 2)],
				(int *)&(rgPalettes[nIndex].pPal)[nStartIndex], 
				(UINT16 *)&(rgPalettes[nIndex].pSortTable)[nStartIndex], 
				nPalSz-nStartIndex
				);
		}
	}

	delete [] pHSLArray;
	
	
}

COLORREF * CPalGroup::GetUnsortedPal(int nIndex)
{
	if(rgPalettes[nIndex].pSortTable)
	{
		int nPalSz = rgPalettes[nIndex].uPalSz;

		COLORREF * pNewPal = new COLORREF[nPalSz];

		for(int i = 0; i < nPalSz; i++)
		{
			pNewPal[i] = rgPalettes[nIndex].pPal[rgPalettes[nIndex].pSortTable[i]];
		}


		return pNewPal;
	}
	else
	{
		return rgPalettes[nIndex].pPal;
	}
}

UINT8 CPalGroup::ROUND_8(UINT8 rVal)
{
	int j;

	if(rVal - (((rVal/8)*8)+(rVal/32)) >= 4)
		j = 1;
	else
		j = 0;

	rVal = ((rVal/8) + j)*8;

    return rVal+(rVal/32);
    
}

UINT8 CPalGroup::ROUND_17(UINT8 rVal)
{
	int j;

	if(rVal - ((rVal/17)*17) >= 17/2)
		j = 1;
	else
		j = 0;

    return ((rVal/17) + j)*17;
}

extern int LimitVal(int nVal, int nHI, int nLO)
{
	return (nVal > nHI ? nHI : (nVal < nLO ? nLO : nVal));	
}