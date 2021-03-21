#include "StdAfx.h"
#include "PalGroup.h"
#include "ColorScale.h"
#include "ShellSort.h"
#include "math.h"

CPalGroup::CPalGroup(void)
{
    InitPal();
}

CPalGroup::~CPalGroup(void)
{
    FlushPalAll();
}

void CPalGroup::InitPal()
{
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        rgPalettes[i].pPal = nullptr;
        rgPalettes[i].pBasePal = nullptr;
        rgPalettes[i].uSepAmt = 0;

        rgPalettes[i].pSortTable = nullptr;
        rgPalettes[i].uSortIndexStart = 0;
    }

    //Clear the redirect buffer
    memset(rgRedir, NULL, sizeof(sPalRedir) * MAX_PALETTES_DISPLAYABLE * MAX_SEPARATORS);
}

void CPalGroup::FlushPalAll()
{
    for (int i = 0; i < MAX_PALETTES_DISPLAYABLE; i++)
    {
        FlushPal(i);

        nCurrPalAmt = 0;
    }

    //Clear the redirect buffer
    memset(rgRedir, NULL, sizeof(sPalRedir) * MAX_PALETTES_DISPLAYABLE * MAX_SEPARATORS);
    nRedirCtr = 0;
}

BOOL CPalGroup::FlushPal(int nIndex)
{
    if (nIndex > MAX_PALETTES_DISPLAYABLE)
    {
        return FALSE;
    }

    safe_delete_array(rgPalettes[nIndex].pPal);
    safe_delete_array(rgPalettes[nIndex].pBasePal);
    safe_delete_array(rgPalettes[nIndex].pSortTable);

    for (int i = 0; i < rgPalettes[nIndex].uSepAmt; i++)
    {
        safe_delete(rgPalettes[nIndex].SepList[i]);
    }

    memset(&rgPalettes[nIndex], NULL, sizeof(sPalDef));

    return TRUE;
}

BOOL CPalGroup::SetMode(ePalType NewPalMode)
{
    PalMode = NewPalMode;

    switch (PalMode)
    {
    case ePalType::PALTYPE_32STEPS:
        ROUND = ROUND_R = ROUND_G = ROUND_B = &CPalGroup::ROUND_8;
        return TRUE;
        break;
    case ePalType::PALTYPE_16STEPS:
        ROUND = ROUND_R = ROUND_G = ROUND_B = &CPalGroup::ROUND_17;
        return TRUE;
        break;
    case ePalType::PALTYPE_8STEPS:
        ROUND = ROUND_R = ROUND_G = ROUND_B = &CPalGroup::ROUND_32;
        return TRUE;
        break;
    case ePalType::PALTYPE_256STEPS:
        ROUND = ROUND_R = ROUND_G = ROUND_B = &CPalGroup::ROUND_1;
        return TRUE;
        break;
    default:
        return FALSE;
        break;
    }
}

BOOL CPalGroup::AddSep(int nIndex, LPCWSTR szDesc, int nStart, int nAmt)
{
    // Separators enable us to have multiple groups of palettes within a palette display.
    if ((rgPalettes[nIndex].uSepAmt >= MAX_SEPARATORS) || ((nStart + nAmt) > rgPalettes[nIndex].uPalSz))
    {
        CString strWarning;
        strWarning.Format(L"WARNING: Trying to use too many separators for \"%s\": %u requested, %u allowed. Disallowing this.\n", szDesc, rgPalettes[nIndex].uSepAmt, MAX_SEPARATORS);
        OutputDebugString(strWarning);
        return FALSE;
    }

    sPalSep* NewSep = new sPalSep;

    _snwprintf(NewSep->szDesc, ARRAYSIZE(NewSep->szDesc), szDesc);
    NewSep->szDesc[ARRAYSIZE(NewSep->szDesc) - 1] = 0;

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

BOOL CPalGroup::AddPal(COLORREF* pPal, UINT16 uPalSz, UINT16 uUnitId, UINT16 uPalId)
{
    if ((nCurrPalAmt >= MAX_PALETTES_DISPLAYABLE) || !pPal || !uPalSz)
    {
        OutputDebugString(L"CPalGroup::AddPal: bogus argument supplied\n");
        return FALSE;
    }

    sPalDef* CurrPal = &rgPalettes[nCurrPalAmt];

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

void CPalGroup::SetRGBA(COLORREF* crTarget, UINT8 rVal, UINT8 gVal, UINT8 bVal, UINT8 aVal)
{
    *crTarget = RGB(ROUND_R(rVal), ROUND_G(gVal), ROUND_B(bVal));
    *crTarget |= (COLORREF)aVal << 24;
}

void CPalGroup::SetHLSA(COLORREF* crTarget, double dH, double dL, double dS, UINT8 aVal)
{
    *crTarget = HLStoRGB(LimitHLS(dH), LimitHLS(dL), LimitHLS(dS));
    *crTarget = RGB(ROUND_R(GetRValue(*crTarget)), ROUND_G(GetGValue(*crTarget)), ROUND_B(GetBValue(*crTarget)));
    *crTarget |= (UINT32)aVal << 24;
}

void CPalGroup::SetAddHLSA(COLORREF crSrc, COLORREF* crTarget, double fpAddH, double fpAddL, double fpAddS, int uAddA)
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

void CPalGroup::SetAddRGBA(COLORREF crSrc, COLORREF* crTarget, int uAddR, int uAddG, int uAddB, int uAddA)
{
    *crTarget = RGB(
        ROUND_R(LimitRGB(GetRValue(crSrc) + uAddR)),
        ROUND_G(LimitRGB(GetGValue(crSrc) + uAddG)),
        ROUND_B(LimitRGB(GetBValue(crSrc) + uAddB))
    );

    *crTarget = RGB(ROUND_R(GetRValue(*crTarget)), ROUND_G(GetGValue(*crTarget)), ROUND_B(GetBValue(*crTarget)));
    *crTarget |= (UINT32)ROUND(LimitRGB(GetAValue(crSrc) + uAddA)) << 24;
}

void CPalGroup::SortPal(int nIndex, int nStartIndex, int nSortFlag)
{
    if (!rgPalettes[nIndex].bAvail)
    {
        return; //Most likely wont happen
    }

    double* pHSLArray;
    int nPalSz = rgPalettes[nIndex].uPalSz;

    safe_delete_array(rgPalettes[nIndex].pSortTable);

    pHSLArray = new double[nPalSz * 3];
    rgPalettes[nIndex].pSortTable = new UINT16[nPalSz];

    for (int i = 0; i < nPalSz; i++)
    {
        rgPalettes[nIndex].pSortTable[i] = (UINT16)i;

        RGBtoHLS(rgPalettes[nIndex].pPal[i], &pHSLArray[i], &pHSLArray[i + nPalSz], &pHSLArray[i + (nPalSz * 2)]);

        //pHSLArray[i] = (double)(rgPalettes[nIndex].pPal[i] & 0x00FFFFFF);
    }

    //Go through array again
    for (int i = 0; i < nPalSz; i++)
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

        //if (i && pHSLArray[i -1] == pHSLArray[i])
        //{
        //    pHSLArray[i] += pHSLArray[i + nPalSz];
        //}

        COLORREF crCol = rgPalettes[nIndex].pPal[i];
        double nR = (double)GetRValue(rgPalettes[nIndex].pPal[i]) / 255.0,
               nG = (double)GetGValue(rgPalettes[nIndex].pPal[i]) / 255.0,
               nB = (double)GetBValue(rgPalettes[nIndex].pPal[i]) / 255.0;

        double fpX, fpY, fpZ;

        ccRGBtoXYZ(nR, nG, nB, &fpX, &fpY, &fpZ);

        //pHSLArray[i] /= sqrt(sq(fpX) + sq(fpY) + sq(fpZ));
        pHSLArray[i] /= sqrt(sq(nR - 0) + sq(nG - 0) + sq(nB - 0));

        //pHSLArray[i] /= 
        //    pHSLArray[i + nPalSz] + ((pHSLArray[i + (nPalSz * 2)]) / 0.5) + sqrt(sq(nR - 0) + sq(nG - 0) + sq(nB- 0)) + fpX*4;

        pHSLArray[i] += fpPage;
    }

    //for (int i = 0; i < nPalSz; i++)
    //{
    //    COLORREF crCol = rgPalettes[nIndex].pPal[i];
    //    double nR = (double)GetRValue(rgPalettes[nIndex].pPal[i]), 
    //        nG = (double)GetGValue(rgPalettes[nIndex].pPal[i]), 
    //        nB = (double)GetBValue(rgPalettes[nIndex].pPal[i]);
    //
    //    pHSLArray[i] /= 
    //        sqrt(sq(nR*0.3 - 0) + sq(nG*0.6 - 0) + sq(nB*0.1 - 0));
    //    
    //}
    //Sort again

    if ((nSortFlag & SORT_HUE) == SORT_HUE)
    {
        for (int i = 0; i < 10; i++)
        {
            ShellSort(
                &pHSLArray[nStartIndex],
                &pHSLArray[nStartIndex + nPalSz],
                &pHSLArray[nStartIndex + (nPalSz * 2)],
                (int*)&(rgPalettes[nIndex].pPal)[nStartIndex],
                (UINT16*)&(rgPalettes[nIndex].pSortTable)[nStartIndex],
                nPalSz - nStartIndex
            );
        }
    }

    delete[] pHSLArray;
}

COLORREF* CPalGroup::GetUnsortedPal(int nIndex)
{
    if (rgPalettes[nIndex].pSortTable)
    {
        int nPalSz = rgPalettes[nIndex].uPalSz;

        COLORREF* pNewPal = new COLORREF[nPalSz];

        for (int i = 0; i < nPalSz; i++)
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

    if (rVal - (((rVal / 8) * 8) + (rVal / 32)) >= 4)
    {
        j = 1;
    }
    else
    {
        j = 0;
    }

    rVal = ((rVal / 8) + j) * 8;

    return rVal + (rVal / 32);
}

UINT8 CPalGroup::ROUND_17(UINT8 rVal)
{
    UINT8 outVal = (UINT8)min(0xff, (round(rVal / 17.0)) * 17);

    return outVal;
}

UINT8 CPalGroup::ROUND_32(UINT8 rVal)
{
    UINT8 outVal = (UINT8)min(0xff, (round(rVal / 32.0)) * 32);

    return outVal;
}

extern int LimitVal(int nVal, int nHI, int nLO)
{
    return ((nVal > nHI) ? nHI : ((nVal < nLO) ? nLO : nVal));
}
