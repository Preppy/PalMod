#include "StdAfx.h"
#include "GameClass.h"
#include "..\PalMod.h"

BOOL CGameClass::bPostSetPalProc = TRUE;
BOOL CGameClass::m_fAllowTransparency = FALSE;

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
    case ColFlag::COL_RGB:
        return nRGBIndexAmt;
    case ColFlag::COL_A:
        return nAIndexAmt;
    }

    return 0;
}

double CGameClass::GetPlaneMul(ColFlag Flag)
{
    switch (Flag)
    {
    case ColFlag::COL_RGB:
        return nRGBIndexMul;
    case ColFlag::COL_A:
        return nAIndexMul;
    }

    return 0;
}

void CGameClass::ClearSrcPal()
{
    //Values used for image out
    memset(nSrcPalUnit, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalStart, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalAmt, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalInc, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
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
        case ColMode::COLMODE_12A:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMOD_12A (ARGB444)"));
            break;
        case ColMode::COLMODE_15:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMODE_15 (BGR555)"));
            break;
        case ColMode::COLMODE_15ALT:
            strDebugInfo.Format(_T("CGameClass::SetColMode : Switching color mode to '%s'. \n"), _T("COLMODE_15ALT (RGB555)"));
            break;
        case ColMode::COLMODE_NEOGEO:
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
    case ColMode::COLMODE_12A:
        ConvPal = &CGameClass::CONV_12A_32;
        ConvCol = &CGameClass::CONV_32_12A;
        return TRUE;
    case ColMode::COLMODE_15:
        ConvPal = &CGameClass::CONV_15_32;
        ConvCol = &CGameClass::CONV_32_15;
        return TRUE;
    case ColMode::COLMODE_15ALT:
        ConvPal = &CGameClass::CONV_15ALT_32;
        ConvCol = &CGameClass::CONV_32_15ALT;
        return TRUE;
    case ColMode::COLMODE_NEOGEO:
        ConvPal = &CGameClass::CONV_NEOGEO_32;
        ConvCol = &CGameClass::CONV_32_NEOGEO;
        return TRUE;
    default:
        return FALSE;
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
    UINT32 auxa = (inCol & 0x8000) >> 15;
    UINT32 auxr = (inCol & 0x7C00) >> 10;
    UINT32 auxg = (inCol & 0x3E0) >> 5;
    UINT32 auxb = (inCol & 0x1F);

    auxa = auxa << 3;
    auxr = auxr << 3;
    auxg = auxg << 3;
    auxb = auxb << 3;

    //auxr = auxr; no-op
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT16 CGameClass::CONV_32_15ALT(UINT32 inCol)
{
    UINT16 auxa = (inCol & 0xFF000000) >> 24;
    UINT16 auxb = (inCol & 0x00FF0000) >> 16;
    UINT16 auxg = (inCol & 0x0000FF00) >> 8;
    UINT16 auxr = (inCol & 0x000000FF);

    auxa = (UINT16)round(auxa / 8);
    auxb = (UINT16)round(auxb / 8);
    auxg = (UINT16)round(auxg / 8);
    auxr = (UINT16)round(auxr / 8);

    auxa = auxa << 15;
    auxr = auxr << 10;
    auxg = auxg << 5;
    //auxb = auxb; no-op

    return auxb | auxg | auxr | auxa;
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

    UINT16 red1 =      ((red / 2) & 0x1) << 0xe;
    UINT16 redMain =   ((red / 4) & 0xf) << 0x8;
    UINT16 green1 =    ((green / 2) & 0x1) << 0xd;
    UINT16 greenMain = ((green / 4) & 0xf) << 0x4;
    UINT16 blue1 =     ((blue / 2) & 0x1) << 0xc;
    UINT16 blueMain =  ((blue / 4) & 0xf) << 0x0;

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

LPCTSTR CGameClass::GetGameName()
{
    if (m_pCRC32SpecificData)
    {
        return m_pCRC32SpecificData->szFriendlyName;
    }
    else
    {
        return g_GameFriendlyName[nGameFlag];
    }
}

LPCTSTR CGameClass::GetROMFileName()
{
    LPCTSTR pszFileName = _T("unknown");

    if (szDir)
    {
        LPCTSTR pszPtr = _tcsrchr(szDir, _T('\\'));

        if (pszPtr)
        {
            pszFileName = pszPtr + 1;
        }
    }

    return pszFileName;
}

BOOL CGameClass::SetLoadDir(LPCTSTR szNewDir)
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
    if (nIndex >= MAX_PALETTES_DISPLAYABLE)
    {
        CString strErr;
        strErr.Format(_T("CGameClass::SetSourcePal:: ERROR: PalMod only supports %u palettes per display.\n"), MAX_PALETTES_DISPLAYABLE);
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

    MarkPaletteClean(CurrPalDef->uUnitId, CurrPalDef->uPalId);
}

COLORREF* CGameClass::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSize];

    for (UINT16 i = 0; i < (m_nCurrentPaletteSize - createPalOptions.nStartingPosition); i++)
    {
        const UINT16 nCurrentPos = i + createPalOptions.nStartingPosition;

        NewPal[nCurrentPos] = ConvPal(m_pppDataBuffer[nUnitId][nPalId][i]);

        if (nCurrentPos != 0)
        {
            // First color is the transparency color: we want to leave that alone
            NewPal[nCurrentPos] |= createPalOptions.crForcedColorValues;
        }
    }

    if (createPalOptions.crForcedFirstColorValue != 0)
    {
        NewPal[0] = createPalOptions.crForcedFirstColorValue;
    }

    return NewPal;
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

        while ((nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PALETTES_DISPLAYABLE))
        {
            iIndex++;
        }

        pppReturnPal = new COLORREF * *[iIndex];

        //Pass 2
        iIndex = 0; 
        while ((nSrcPalStart[iIndex] != -1) && (iIndex < MAX_PALETTES_DISPLAYABLE))
        {
            pppReturnPal[iIndex] = new COLORREF * [nPalAmt];

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
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

void CGameClass::UpdatePalData()
{
    for (UINT16 nPalCtr = 0; nPalCtr < MAX_PALETTES_DISPLAYABLE; nPalCtr++)
    {
        sPalDef* srcDef = BasePalGroup.GetPalDef(nPalCtr);

        if (srcDef->bAvail)
        {
            COLORREF* crSrc = srcDef->pPal;

            INT16 nTotalColorsRemaining = srcDef->uPalSz;
            UINT16 nCurrentTotalWrites = 0;
            // Every 16 colors there is another counter WORD (color length) to preserve.
            const UINT16 nMaxSafeColorsToWrite = 16;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' is a counter and needs to be preserved.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (UINT16 nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;
                    if (m_fGameUsesAlphaValue)
                    {
                        // Right now this is just MVC2.  We only allow editing this if the Allow Transparency option is on,
                        // but we always want to reflect the actual alpha present.
                        m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset] = ConvCol(crSrc[iCurrentArrayOffset]);
                    }
                    else
                    {
                        m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset] = ((ConvCol(crSrc[iCurrentArrayOffset]) & 0x0FFF)) | 0xF000;
                    }
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[0] = TRUE;

            if (bPostSetPalProc)
            {
                PostSetPal(srcDef->uUnitId, srcDef->uPalId);
            }
        }
    }
}

void CGameClass::InitDataBuffer()
{
    m_pppDataBuffer = new UINT16 * *[nUnitAmt];
    memset(m_pppDataBuffer, NULL, sizeof(UINT16**) * nUnitAmt);
}

void CGameClass::ClearDataBuffer()
{
    if (m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer);
    }
}

void CGameClass::PrepChangeTrackingArray()
{
    if (!rgFileChanged)
    {
        const UINT16 rgCountChangableUnits = max(nUnitAmt, nFileAmt) + 1;
        rgFileChanged = new UINT16[rgCountChangableUnits];
        memset(rgFileChanged, NULL, sizeof(UINT16) * rgCountChangableUnits);
    }
}

void CGameClass::MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    m_vDirtyPaletteList.push_back(sPaletteOfInterest);
    return;
}

void CGameClass::MarkPaletteClean(UINT16 nUnit, UINT16 nPaletteID)
{
    struct DoPalettesMatch
    {
        sPaletteIdentifier* pPalToCheck;
        DoPalettesMatch(sPaletteIdentifier* pPalToCheck) : pPalToCheck(pPalToCheck) {}
        bool operator () (const sPaletteIdentifier& m) const
        {
            return (m.nUnit == pPalToCheck->nUnit) && (m.nPaletteId == pPalToCheck->nPaletteId);
        }
    };

    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    m_vDirtyPaletteList.erase(std::remove_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)), m_vDirtyPaletteList.end());
    return;
}

bool CGameClass::IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID)
{
    struct DoPalettesMatch
    {
        sPaletteIdentifier* pPalToCheck;
        DoPalettesMatch(sPaletteIdentifier* pPalToCheck) : pPalToCheck(pPalToCheck) {}
        bool operator () (const sPaletteIdentifier& m) const
        {
            return (m.nUnit == pPalToCheck->nUnit) && (m.nPaletteId == pPalToCheck->nPaletteId);
        }
    };

    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    auto it = std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest));

    return it != m_vDirtyPaletteList.end();
}

BOOL CGameClass::SaveFile(CFile* SaveFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    bool fShownOnce = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (!fShownOnce && (m_nCurrentPaletteROMLocation < m_nLowestKnownPaletteRomLocation)) // This magic number is the lowest known ROM location.
                {
                    CString strMsg;
                    strMsg.Format(_T("Warning: Unit %u palette %u is trying to write to ROM location 0x%06x which is lower than we usually write to."), nUnitCtr, nPalCtr, m_nCurrentPaletteROMLocation);
                    MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                    fShownOnce = true;
                }

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(_T("CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

UINT32 CGameClass::SavePatchFile(CFile* PatchFile, UINT16 nUnitId)
{
    UINT32 nTotalPalettesSaved = 0;
    LPCSTR szIPSOpener = "PATCH";
    PatchFile->Write(szIPSOpener, strlen(szIPSOpener));

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                // Location
                BYTE b1 = (m_nCurrentPaletteROMLocation & 0xFF0000) >> 16;
                BYTE b2 = (m_nCurrentPaletteROMLocation & 0xFF00) >> 8;
                BYTE b3 = m_nCurrentPaletteROMLocation & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);
                PatchFile->Write(&b3, 1);

                // Size
                b1 = ((m_nCurrentPaletteSize * 2) & 0xFF00) >> 8;
                b2 = (m_nCurrentPaletteSize * 2) & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);

                // Actual data
                PatchFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);

                nTotalPalettesSaved++;
            }
        }
    }

    LPCSTR szIPSCloser = "EOF";
    PatchFile->Write(szIPSCloser, strlen(szIPSCloser));

#ifdef WANT_IPS_DAT_FILES
    // This code works, but I'm discussing what we want to do with it if anything.

    // Now generate DAT file...
    if (m_pCRC32SpecificData)
    {
        TCHAR szDATFilename[MAX_PATH];
        TCHAR szIPSFilename[MAX_PATH];

        _tcscpy(szDATFilename, PatchFile->GetFilePath().GetString());
        
        TCHAR* pszDot = _tcsrchr(szDATFilename, _T('.'));

        if (pszDot != nullptr)
        {
            pszDot[0] = 0;
        }

        pszDot = _tcsrchr(szDATFilename, _T('\\'));

        _tcscpy(szIPSFilename, pszDot + 1);

        _tcscat(szDATFilename, _T(".dat"));

        CFile DATFile;

        // In debug builds this will trigger what appears to be a bogus assert in CFile which is stating that
        // typeText is not supported.  But it is ... just appears to be a random bad assert.
        if (DATFile.Open(szDATFilename, CFile::modeWrite | CFile::modeCreate | CFile::typeText))
        {
            CStringA strOutput;
            strOutput.Format("%S    %S    CRC(%x)\r\n\r\n", GetROMFileName(), szIPSFilename, m_pCRC32SpecificData->crcValueExpected);
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("[en_US]\r\nColor Mod from %S\r\n\r\n", GetHost()->GetAppName(false).GetString());
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("Hacker: (your name here)\r\n\r\n");
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("Description: color changes for %S\r\n\r\n", GetGameName());
            DATFile.Write(strOutput, strOutput.GetLength());

            DATFile.Abort();
        }
    }
#endif

    CString strMsg;
    strMsg.Format(_T("CGameClass::SavePatchFile: Saved 0x%x palettes to patching file for %u units\n"), nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return nTotalPalettesSaved;
}

void CGameClass::SetSpecificValuesForCRC(UINT32 nCRCForFile)
{
    m_nConfirmedCRCValue = nCRCForFile;

    const sCRC32ValueSet* ppCRC32ValueSets = nullptr;
    const UINT32 nCRCValueSetCount = GetKnownCRC32DatasetsForGame(&ppCRC32ValueSets);

    if (nCRCValueSetCount == 1)
    {
        m_pCRC32SpecificData = &ppCRC32ValueSets[0];
    }
    else if (nCRCValueSetCount > 1)
    {
        for (UINT16 nIndex = 0; nIndex < nCRCValueSetCount; nIndex++)
        {
            if (ppCRC32ValueSets[nIndex].crcValueExpected == m_nConfirmedCRCValue)
            {
                m_pCRC32SpecificData = &ppCRC32ValueSets[nIndex];

                // We have a matching CRC, but some games use different filenames for the same ROM
                // If we have an exact match, use current data.  Otherwise, continue and see if we find better.
                if (_tcsicmp(ppCRC32ValueSets[nIndex].szROMFileName, GetROMFileName()) == 0)
                {
                    break;
                }
            }
            else if (_tcsicmp(ppCRC32ValueSets[nIndex].szROMFileName, GetROMFileName()) == 0)
            {
                // We've got a matching name: it's possible that we're dealing with a modified ROM.
                // Set this as a fallback option.
                m_pCRC32SpecificData = &ppCRC32ValueSets[nIndex];
            }
        }
    }
}
