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
            strDebugInfo.Format("CGameClass::SetColMode : Switching color mode to '%s'. \n", "COLMOD_12A (ARGB444)");
            break;
        case COLMODE_15:
            strDebugInfo.Format("CGameClass::SetColMode : Switching color mode to '%s'. \n", "COLMODE_15 (BGR555)");
            break;
        case COLMODE_15ALT:
            strDebugInfo.Format("CGameClass::SetColMode : Switching color mode to '%s'. \n", "COLMODE_15ALT (RGB555)");
            break;
        case COLMODE_NEOGEO:
            strDebugInfo.Format("CGameClass::SetColMode : Switching color mode to '%s'. \n", "COLMODE_NEOGEO (RGB666)");
            break;
        default:
            strDebugInfo.Format("CGameClass::SetColMode : unsupported color mode.");
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

    auxa = (auxa > 15 * 17 ? auxa = 15 * 17 : auxa);
    auxr = (auxr > 15 * 17 ? auxr = 15 * 17 : auxr);
    auxg = (auxg > 15 * 17 ? auxg = 15 * 17 : auxg);
    auxb = (auxb > 15 * 17 ? auxb = 15 * 17 : auxb);

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

    auxb /= 8;
    auxg /= 8;
    auxr /= 8;

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

    auxb /= 8;
    auxg /= 8;
    auxr /= 8;

    auxr = auxr << (10);
    auxg = auxg << (5);
    //auxb = auxb;

    return auxb | auxg | auxr;
}

UINT32 CGameClass::CONV_NEOGEO_32(UINT16 inCol)
{
    OutputDebugString("NEOGEO color handling needs to be fixed.\n");
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

UINT16 CGameClass::CONV_32_NEOGEO(UINT32 inCol)
{
    OutputDebugString("NEOGEO color handling needs to be fixed.\n");
    UINT16 auxr = 0, auxg = 0, auxb = 0;

    auxb = (inCol & 0x00FF0000) >> (16);
    auxg = (inCol & 0x0000FF00) >> (8);
    auxr = (inCol & 0x000000FF);

    auxb /= 8;
    auxg /= 8;
    auxr /= 8;

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

BOOL CGameClass::SetLoadDir(CHAR* szNewDir)
{
    if (!szDir)
    {
        szDir = new CHAR[strlen(szNewDir) + 1];
        strcpy(szDir, szNewDir);

        return TRUE;
    }
    else
    {
        return FALSE;
    }
};

void CGameClass::SetSourcePal(int nIndex, UINT16 nUnitId, int nStart, int nAmt, int nInc)
{
    if (nIndex >= 4)
    {
        OutputDebugString(" CGameClass::SetSourcePal:: ERROR: PalMod only supports four palettes per display.\n");
        return;
    }

#if GAMECLASS_DBG
    CString strMsg;
    strMsg.Format("CGameClass::SetSourcePal: For unit 0x%02x setting starting palette 0x%02x, displaying %u maximum, and incrementing 0x%x per button.\n", nUnitId, nStart, nAmt, nInc);
    OutputDebugString(strMsg);

    if ((nAmt > 1) && // If this game wants to allow multisprite export
        (nStart > nInc)) // This starting point is in the second or later node: that's potentially a problem.
    {
        OutputDebugString("\tCGameClass::SetSourcePal: Warning: you're using multisprite export in what is hopefully an Extras node.  Be careful.\n");
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

        while ((nSrcPalStart[iIndex] != -1) && (iIndex < 4))
        {
            iIndex++;
        }

        pppReturnPal = new COLORREF * *[iIndex];

        //Pass 2
        iIndex = 0; 
        while ((nSrcPalStart[iIndex] != -1) && (iIndex < 4))
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
