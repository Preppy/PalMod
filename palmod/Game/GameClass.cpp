#include "StdAfx.h"
#include "GameClass.h"

BOOL CGameClass::bPostSetPalProc = TRUE;

#define GAMECLASS_DBG 0

CGameClass::CGameClass(void)
    :
    ConvPal(NULL),
    ConvCol(NULL)
{
}

CGameClass::~CGameClass(void)
{
    ClearSetImgTicket(NULL);

    safe_delete(szDir);

    //Clear the redirect buffer
    safe_delete_array(rgUnitRedir);

    //Get rid of the redir index
    safe_delete_array(pIndexRedir);
}

int CGameClass::GetPlaneAmt(ColFlag Flag)
{
    switch (Flag)
    {
    case COL_RGB:
        return nRGBIndexAmt;
    case COL_A:
        return nAIndexAmt;
    }

    return 0;
}

double CGameClass::GetPlaneMul(ColFlag Flag)
{
    switch (Flag)
    {
    case COL_RGB:
        return nRGBIndexMul;
    case COL_A:
        return nAIndexMul;
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

BOOL CGameClass::SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt, int nMax)
{
    int nOffset = nPalId - nStart;

    if ((nPalId >= nStart) && ((nOffset) % nInc < nAmt))
    {
        *nVarSet = ((nOffset) / nInc);

        if (*nVarSet >= nMax)
        {
            return FALSE;
        }
    }
    else
    {
        return FALSE;
    }

    // This is unreachable but removing it breaks joined image displays. ?
    return TRUE;
}

sImgTicket* CGameClass::CreateImgTicket(UINT16 nUnitId, int nImgId, sImgTicket* NextTicket, int nXOffs, int nYOffs)
{
    if (nImgId == INVALID_UNIT_VALUE)
    {
        return NULL;
    }

    sImgTicket* NewTicket = new sImgTicket;

    NewTicket->nUnitId = nUnitId;
    NewTicket->nImgId = nImgId;
    NewTicket->nXOffs = nXOffs;
    NewTicket->nYOffs = nYOffs;
    NewTicket->NextTicket = NextTicket;

    return NewTicket;
}

void CGameClass::ClearSetImgTicket(sImgTicket* NewImgTicket)
{
    sImgTicket* DelTicket = CurrImgTicket;
    sImgTicket* NextTicket;

    while (DelTicket != NULL)
    {
        NextTicket = DelTicket->NextTicket;
        delete DelTicket;
        DelTicket = NextTicket;
    }

    CurrImgTicket = NewImgTicket;
}

BOOL CGameClass::SetColMode(ColMode NewMode)
{
    if (CurrColMode != NewMode)
    {
        CString strDebugInfo;
        // See also MEDIASUBTYPE_555
        switch (NewMode)
        {
        case COLMODE_12A:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMOD_12A (ARGB444)"));
            break;
        case COLMODE_15:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMODE_15 (BGR555)"));
            break;
        case COLMODE_15ALT:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMODE_15ALT (RGB555)"));
            break;
        case COLMODE_NEOGEO:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMODE_NEOGEO (RGB666)"));
            break;
        default:
            strDebugInfo.Format(_T("CGameClass::SetColMode : unsupported color mode."));
            break;
        }
        OutputDebugString(strDebugInfo);
    }

    CurrColMode = NewMode;

    switch (NewMode)
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
    case COLMODE_NEOGEO:
        ConvPal = &CGameClass::CONV_NEOGEO_32;
        ConvCol = &CGameClass::CONV_32_NEOGEO;
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

    auxa = (auxa > (15 * 17)) ? (15 * 17) : auxa;
    auxr = (auxr > (15 * 17)) ? (15 * 17) : auxr;
    auxg = (auxg > (15 * 17)) ? (15 * 17) : auxg;
    auxb = (auxb > (15 * 17)) ? (15 * 17) : auxb;

    auxr = (UINT16)round(auxr / 17.0);
    auxg = (UINT16)round(auxg / 17.0);
    auxb = (UINT16)round(auxb / 17.0);
    auxa = (UINT16)round(auxa / 17.0);

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

    return (auxb | auxg | auxr | auxa);
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

    auxr += auxr / 32;
    auxg += auxg / 32;
    auxb += auxb / 32;

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

    auxb = (UINT16)round(auxb / 8);
    auxg = (UINT16)round(auxg / 8);
    auxr = (UINT16)round(auxr / 8);

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

    auxr += auxr / 32;
    auxg += auxg / 32;
    auxb += auxb / 32;

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

    auxb = (UINT16)round(auxb / 8);
    auxg = (UINT16)round(auxg / 8);
    auxr = (UINT16)round(auxr / 8);

    auxr = auxr << (10);
    auxg = auxg << (5);
    //auxb = auxb;

    return auxb | auxg | auxr;
}

UINT8 NGColorVals[] = {
//--Dark,Bright
    0x00,0x00,    //--00
    0x08,0x08,    //--01
    0x0e,0x0e,    //--02
    0x15,0x16,    //--03
    0x1e,0x1e,    //--04
    0x26,0x26,    //--05
    0x2c,0x2c,    //--06
    0x33,0x34,    //--07
    0x40,0x41,    //--08
    0x47,0x49,    //--09
    0x4d,0x4f,    //--0a
    0x55,0x56,    //--0b
    0x5e,0x5f,    //--0c
    0x65,0x67,    //--0d
    0x6b,0x6d,    //--0e
    0x73,0x75,    //--0f
    0x88,0x8a,    //--10
    0x90,0x92,    //--11
    0x96,0x98,    //--12
    0x9e,0xa0,    //--13
    0xa6,0xa9,    //--14
    0xae,0xb0,    //--15
    0xb4,0xb6,    //--16
    0xbc,0xbe,    //--17
    0xc8,0xcb,    //--18
    0xd0,0xd3,    //--19
    0xd6,0xd9,    //--1a
    0xdd,0xe1,    //--1b
    0xe6,0xe9,    //--1c
    0xee,0xf1,    //--1d
    0xf4,0xf7,    //--1e
    0xfb,0xff     //--1f
};

bool IsNEOGEOColorDark(UINT8 redIndex, UINT8 greenIndex, UINT8 blueIndex)
{
    bool isRedEven = (redIndex / 2) == 0;
    bool isGreenEven = (greenIndex / 2) == 0;
    bool isBlueEven = (blueIndex / 2) == 0;

    if (isRedEven && isGreenEven && isBlueEven)
    {
        // the color tables are sometimes duplicated between dark/bright: default to presuming bright
        isRedEven = (NGColorVals[redIndex] != NGColorVals[redIndex + 1]);
        isGreenEven = (NGColorVals[greenIndex] != NGColorVals[greenIndex + 1]);
        isBlueEven = (NGColorVals[blueIndex] != NGColorVals[blueIndex + 1]);
    }

    return isRedEven && isGreenEven && isBlueEven;
}

UINT8 Convert32ToNEOGEO(UINT8 nColor)
{
    UINT8 nColorIndex = 0;

    for (; nColorIndex < ARRAYSIZE(NGColorVals); nColorIndex++)
    {
        if (NGColorVals[nColorIndex] >= nColor)
        {
            break;
        }
    }

    return nColorIndex;
}

UINT32 CGameClass::CONV_NEOGEO_32(UINT16 nColorData)
{
    UINT8 dk =  (nColorData >> 0xf) & 0x01;
    UINT8 r1 = ((nColorData >> 0xe) & 0x01) * 2;
    UINT8 g1 = ((nColorData >> 0xd) & 0x01) * 2;
    UINT8 b1 = ((nColorData >> 0xc) & 0x01) * 2;
    UINT8 rm = ((nColorData >> 0x8) & 0x0f) * 4;
    UINT8 gm = ((nColorData >> 0x4) & 0x0f) * 4;
    UINT8 bm = ((nColorData >> 0x0) & 0x0f) * 4;

    UINT8 blue =  NGColorVals[((r1 + rm) - dk) + 1];
    UINT8 green = NGColorVals[((g1 + gm) - dk) + 1];
    UINT8 red =   NGColorVals[((b1 + bm) - dk) + 1];

    UINT32 color = (red * 0x10000) + (green * 0x100) + (blue) + 0xff000000;

    //CString strColor;
    //strColor.Format(_T("ROM : neogeo 0x%04x 32bit 0x%08x R 0x%02x G 0x%02x B 0x%02x\n"), nColorData, color, red, green, blue);
    //OutputDebugString(strColor);

    return color;
}

UINT16 CGameClass::CONV_32_NEOGEO(UINT32 inCol)
{
    UINT8 auxb = ((inCol & 0x00FF0000) >> 16);
    UINT8 auxg = ((inCol & 0x0000FF00) >> 8);
    UINT8 auxr = ((inCol & 0x000000FF));

    UINT8 red =   Convert32ToNEOGEO(auxr);
    UINT8 green = Convert32ToNEOGEO(auxg);
    UINT8 blue =  Convert32ToNEOGEO(auxb);

    UINT16 darkbit = (IsNEOGEOColorDark(red, green, blue) ? 0x1 : 0x0) << 0xf;

    UINT16 red1 =      ((UINT8)round(red / 2.0) & 0x1) << 0xe;
    UINT16 redMain =   ((UINT8)round(red / 4.0) & 0xf) << 0x8;
    UINT16 green1 =    ((UINT8)round(green / 2.0) & 0x1) << 0xd;
    UINT16 greenMain = ((UINT8)round(green / 4.0) & 0xf) << 0x4;
    UINT16 blue1 =     ((UINT8)round(blue / 2.0) & 0x1) << 0xc;
    UINT16 blueMain =  ((UINT8)round(blue / 4.0) & 0xf) << 0x0;

    UINT16 outColor = (red1 | redMain | green1 | greenMain | blue1 | blueMain);
    //CString strColor;
    //strColor.Format(_T("BACK: neogeo 0x%04x 32bit 0x%08x R 0x%02x G 0x%02x B 0x%02x\n"), outColor, inCol, red, green, blue);
    //OutputDebugString(strColor);

    return outColor;
}

UINT16 CGameClass::SWAP_16(UINT16 palv)
{
    UINT16 aux = 0;
    aux |= palv << 8;
    aux |= palv >> 8;
    return aux;
}

BOOL CGameClass::SetLoadDir(TCHAR* szNewDir)
{
    if (!szDir)
    {
        szDir = new TCHAR[_tcslen(szNewDir) + 1];
        _tcscpy(szDir, szNewDir);

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

void CGameClass::SetSourcePal(int nIndex, UINT16 nUnitId, int nStart, int nAmt, int nInc)
{
    if (nIndex >= MAX_PAL)
    {
        CString strErr;
        strErr.Format(_T("CGameClass::SetSourcePal:: ERROR: PalMod only supports %u palettes per display.\n"), MAX_PAL);
        OutputDebugString(strErr);
        return;
    }

#if GAMECLASS_DBG
    CString strMsg;
    strMsg.Format(_T("CGameClass::SetSourcePal: For unit 0x%02x setting starting palette 0x%02x, displaying %u maximum, and incrementing 0x%x per button.\n"), nUnitId, nStart, nAmt, nInc);
    OutputDebugString(strMsg);

    if ((nAmt > 1) && // If this game wants to allow multisprite export
        (nStart > nInc)) // This starting point is in the second or later node: that's potentially a problem.
    {
        OutputDebugString(_T("\tCGameClass::SetSourcePal: Warning: you're using multisprite export in what is hopefully an Extras node.  Be careful.\n"));
    }
#endif

    nSrcPalUnit[nIndex] = nUnitId;
    nSrcPalStart[nIndex] = nStart;
    nSrcPalAmt[nIndex] = nAmt;
    nSrcPalInc[nIndex] = nInc;
}

void CGameClass::Revert(int nPalId)
{
    sPalRedir* RedirIndex = &BasePalGroup.GetRedir()[nPalId];

    sPalDef* CurrPalDef = BasePalGroup.GetPalDef(RedirIndex->nDefIndex);
    sPalSep* CurrPalSep = CurrPalDef->SepList[RedirIndex->nSepIndex];

    COLORREF* pTempPal = CreatePal(CurrPalDef->uUnitId, CurrPalDef->uPalId);

    int nStart = CurrPalSep->nStart;
    int nAmt = CurrPalSep->nAmt;

    for (int i = nStart; i < nStart + nAmt; i++)
    {
        CurrPalDef->pPal[i] = pTempPal[i];
        //CurrPalDef->pBasePal[i] = pTempPal[i];
    }

    delete[] pTempPal;
}

COLORREF*** CGameClass::CreateImgOutPal()
{
    COLORREF*** pppReturnPal;

    if (nSrcPalStart[0] == -1)
    {
        return NULL;
    }
    else
    {
        int iIndex = 0;
        int nPalAmt = nSrcPalAmt[0];

        while ((nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PAL))
        {
            iIndex++;
        }

        pppReturnPal = new COLORREF * *[iIndex];

        //Pass 2
        iIndex = 0; 
        while ((nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PAL))
        {
            pppReturnPal[iIndex] = new COLORREF * [nPalAmt];

            for (int nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                pppReturnPal[iIndex][nPalCtr] = CreatePal(nSrcPalUnit[iIndex], nSrcPalStart[iIndex] + (nPalCtr * nSrcPalInc[iIndex]));
            }

            iIndex++;
        }
    }

    return pppReturnPal;
}

BOOL CGameClass::CreateHybridPal(int nIndexAmt, int nPalSz, UINT16* pData, int nExclusion, COLORREF** pNewPal, int* nNewPalSz)
{
    UINT32* pMulRg = new UINT32[nIndexAmt];
    int nNewPalSzCpy = 0;

    memset(pMulRg, 0xFF, nIndexAmt * sizeof(UINT32));

    for (int nPICtr = 0; nPICtr < nIndexAmt; nPICtr++)
    {
        if ((nPalSz - (nPICtr / nPalSz) * nPalSz) == nExclusion)
        {
            nPICtr++;
        }

        if (nPICtr < nIndexAmt)
        {
            int nMulCtr = 0;

            while (pMulRg[nMulCtr] != 0xFFFFFFFF)
            {
                if (pMulRg[nMulCtr] == pData[nPICtr])
                {
                    break;
                }

                nMulCtr++;
            }

            if (nMulCtr == nNewPalSzCpy)
            {
                pMulRg[nNewPalSzCpy] = pData[nPICtr];
                nNewPalSzCpy++;
            }
        }
    }

    if (nNewPalSzCpy)
    {
        //Delete the previous data
        safe_delete_array(pIndexRedir);

        //Create the redirect
        pIndexRedir = new UINT16[nIndexAmt];

        for (int nPICtr = 0; nPICtr < nIndexAmt; nPICtr++)
        {
            if ((nPalSz - (nPICtr / nPalSz) * nPalSz) == nExclusion)
            {
                pIndexRedir[nPICtr] = 0;
            }
            else
            {
                for (int nMulCtr = 0; nMulCtr < nNewPalSzCpy; nMulCtr++)
                {
                    if (pMulRg[nMulCtr] == pData[nPICtr])
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

        for (int nPICtr = 0; nPICtr < nNewPalSzCpy; nPICtr++)
        {
            (*pNewPal)[nPICtr] = ConvPal(pMulRg[nPICtr]) | uAlpha;
        }

        *nNewPalSz = nNewPalSzCpy;

        return TRUE;
    }
    else
    {
        safe_delete_array(pMulRg);

        return FALSE;
    }
}
