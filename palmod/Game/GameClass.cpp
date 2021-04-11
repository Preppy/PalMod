#include "StdAfx.h"
#include "GameClass.h"
#include "..\PalMod.h"
#include "..\regproc.h"

BOOL CGameClass::bPostSetPalProc = TRUE;
BOOL CGameClass::m_fAllowTransparency = FALSE;
UINT8 CGameClass::m_nSizeOfColorsInBytes = 2;
AlphaMode CGameClass::CurrAlphaMode = AlphaMode::Unknown;

#define GAMECLASS_DBG DEFAULT_GAME_DEBUG_STATE

UINT8 GetCbForColorForGameFlag(UINT8 uGameFlag)
{
    switch (uGameFlag)
    {
    case GGXXACR_A:
    case DBFCI_A:
    case UNICLR_A:
        return 4;
    default:
        return 2;
    }
}

CGameClass::CGameClass(void)
    :
    ConvPal16(nullptr),
    ConvCol16(nullptr),
    ConvPal32(nullptr),
    ConvCol32(nullptr)
{
}

CGameClass::~CGameClass(void)
{
    ClearSetImgTicket(NULL);

    safe_delete(m_pszLoadDir);

    //Clear the redirect buffer
    safe_delete_array(rgUnitRedir);

    //Get rid of the redir index
    safe_delete_array(pIndexRedir);
}

int CGameClass::GetPlaneAmt(ColFlag Flag)
{
    if ((Flag == ColFlag::COL_RGB) ||
        ((Flag == ColFlag::COL_A) && m_fGameUsesAlphaValue))
    {
        switch (CurrColMode)
        {
        case ColMode::COLMODE_9:
            return k_nRGBPlaneAmtForRGB333;
        case ColMode::COLMODE_12A:
        case ColMode::COLMODE_12A_LE:
            return k_nRGBPlaneAmtForRGB444;
        case ColMode::COLMODE_GBA:
        case ColMode::COLMODE_15:
        case ColMode::COLMODE_15ALT:
        case ColMode::COLMODE_SHARPRGB:
            return k_nRGBPlaneAmtForRGB555;
        case ColMode::COLMODE_NEOGEO:
            return k_nRGBPlaneAmtForRGB666;
        case ColMode::COLMODE_ARGB1888:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneAmtForRGB111;
            }
            else
            {
                return k_nRGBPlaneAmtForRGB888;
            }
        case ColMode::COLMODE_ARGB7888:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneAmtForRGB777;
            }
            else
            {
                return k_nRGBPlaneAmtForRGB888;
            }
        case ColMode::COLMODE_ARGB8888:
            return k_nRGBPlaneAmtForRGB888;
        default:
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

double CGameClass::GetPlaneMul(ColFlag Flag)
{
    if ((Flag == ColFlag::COL_RGB) ||
        ((Flag == ColFlag::COL_A) && m_fGameUsesAlphaValue))
    {
        switch (CurrColMode)
        {
        case ColMode::COLMODE_9:
            return k_nRGBPlaneMulForRGB333;
        case ColMode::COLMODE_12A:
        case ColMode::COLMODE_12A_LE:
            return k_nRGBPlaneMulForRGB444;
        case ColMode::COLMODE_GBA:
        case ColMode::COLMODE_15:
        case ColMode::COLMODE_15ALT:
        case ColMode::COLMODE_SHARPRGB:
            return k_nRGBPlaneMulForRGB555;
        case ColMode::COLMODE_NEOGEO:
            return k_nRGBPlaneMulForRGB666;
        case ColMode::COLMODE_ARGB1888:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneMulForRGB111;
            }
            else
            {
                return k_nRGBPlaneMulForRGB888;
            }
        case ColMode::COLMODE_ARGB7888:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneMulForRGB777;
            }
            else
            {
                return k_nRGBPlaneMulForRGB888;
            }
        case ColMode::COLMODE_ARGB8888:
            return k_nRGBPlaneMulForRGB888;
        default:
            return 0;
        }
    }
    else
    {
        return 0;
    }
}

void CGameClass::ClearSrcPal()
{
    //Values used for image out
    memset(nSrcPalUnit, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalStart, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalAmt, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
    memset(nSrcPalInc, -1, sizeof(int) * MAX_PALETTES_DISPLAYABLE);
}

// For a given palette ID (such as palette 4 in a nInc long palette set), verify if that paltte ID is an
// iteration of nStart
BOOL CGameClass::SpecSel(int* nVarSet, int nPalId, int nStart, int nInc, int nAmt, int nMax)
{
    int nOffset = nPalId - nStart;

    if ((nPalId >= nStart) && (((nOffset) % nInc) < nAmt))
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

BOOL CGameClass::SetColorMode(ColMode NewMode)
{
    return _SetColorMode(NewMode);
}

BOOL CGameClass::_SetColorMode(ColMode NewMode)
{
    if (CurrColMode != NewMode)
    {
        CString strDebugInfo;
        // See also MEDIASUBTYPE_555
        switch (NewMode)
        {
        case ColMode::COLMODE_9:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMOD_9 (RGB333)");
            break;
        case ColMode::COLMODE_GBA:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMOD_GBA (ARGB555)");
            break;
        case ColMode::COLMODE_12A:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMOD_12A (ARGB444)");
            break;
        case ColMode::COLMODE_12A_LE:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMOD_12A_LE (ARGB444)");
            break;
        case ColMode::COLMODE_15:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_15 (BGR555)");
            break;
        case ColMode::COLMODE_15ALT:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_15ALT (RGB555)");
            break;
        case ColMode::COLMODE_NEOGEO:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_NEOGEO (RGB555)");
            break;
        case ColMode::COLMODE_SHARPRGB:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_SHARPRGB (RGB555)");
            break;
        case ColMode::COLMODE_ARGB1888:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_ARGB1888");
            break;
        case ColMode::COLMODE_ARGB7888:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_ARGB7888");
            break;
        case ColMode::COLMODE_ARGB8888:
            strDebugInfo.Format(L"CGameClass::SetColorMode : Switching color mode to '%s'.\n", L"COLMODE_ARGB8888");
            break;
        default:
            strDebugInfo.Format(L"CGameClass::SetColorMode : unsupported color mode.\n");
            break;
        }
        OutputDebugString(strDebugInfo);
    }

    CurrColMode = NewMode;

    switch (NewMode)
    {
    case ColMode::COLMODE_9:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_9_32;
        ConvCol16 = &CGameClass::CONV_32_9;
        BasePalGroup.SetMode(ePalType::PALTYPE_8STEPS);
        return TRUE;
    case ColMode::COLMODE_12A:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_12A_32;
        ConvCol16 = &CGameClass::CONV_32_12A;
        BasePalGroup.SetMode(ePalType::PALTYPE_16STEPS);
        return TRUE;
    case ColMode::COLMODE_12A_LE:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_12A_32_LE;
        ConvCol16 = &CGameClass::CONV_32_12A_LE;
        BasePalGroup.SetMode(ePalType::PALTYPE_16STEPS);
        return TRUE;
    case ColMode::COLMODE_GBA:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_GBA_32;
        ConvCol16 = &CGameClass::CONV_32_GBA;
        BasePalGroup.SetMode(ePalType::PALTYPE_32STEPS);
        return TRUE;
    case ColMode::COLMODE_15:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_15_32;
        ConvCol16 = &CGameClass::CONV_32_15;
        BasePalGroup.SetMode(ePalType::PALTYPE_32STEPS);
        return TRUE;
    case ColMode::COLMODE_15ALT:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_15ALT_32;
        ConvCol16 = &CGameClass::CONV_32_15ALT;
        BasePalGroup.SetMode(ePalType::PALTYPE_32STEPS);
        return TRUE;
    case ColMode::COLMODE_SHARPRGB:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_SHARPRGB_32;
        ConvCol16 = &CGameClass::CONV_32_SHARPRGB;
        BasePalGroup.SetMode(ePalType::PALTYPE_32STEPS);
        return TRUE;
    case ColMode::COLMODE_NEOGEO:
        m_nSizeOfColorsInBytes = 2;
        ConvPal16 = &CGameClass::CONV_NEOGEO_32;
        ConvCol16 = &CGameClass::CONV_32_NEOGEO;
        // We use RGB444-equivalent stepping, but NeoGeo uses a color table that has non-linear
        // stepping.  RGB444 at least gets us pretty close to correct until such time as we want to 
        // dynamically generate the +/- step values for use by palmoddlg_color.cpp
        BasePalGroup.SetMode(ePalType::PALTYPE_NEOGEO);
        return TRUE;
    case ColMode::COLMODE_ARGB1888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CGameClass::CONV_ARGB1888_32;
        ConvCol32 = &CGameClass::CONV_32_ARGB1888;
        BasePalGroup.SetMode(ePalType::PALTYPE_256STEPS);
        return TRUE;
    case ColMode::COLMODE_ARGB7888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CGameClass::CONV_ARGB7888_32;
        ConvCol32 = &CGameClass::CONV_32_ARGB7888;
        BasePalGroup.SetMode(ePalType::PALTYPE_256STEPS);
        return TRUE;
    case ColMode::COLMODE_ARGB8888:
        m_nSizeOfColorsInBytes = 4;
        ConvPal32 = &CGameClass::CONV_ARGB8888_32;
        ConvCol32 = &CGameClass::CONV_32_ARGB8888;
        BasePalGroup.SetMode(ePalType::PALTYPE_256STEPS);
        return TRUE;
    default:
        return FALSE;
    }
}

UINT32 CGameClass::CONV_9_32(UINT16 inCol)
{
    // xxxxBBBx GGGxRRRx, where x is 0
    // conversion code mostly by sega16
    // see also https://segaretro.org/Sega_Mega_Drive/Palettes_and_CRAM
    UINT8* palP = (UINT8*)&inCol;
    UINT8 b = (*palP++ & 14) * 18;
    UINT8 g = ((*palP & 240) >> 5) * 36;
    UINT8 r = (*palP & 14) * 18;

    return (0xFF << 24) | (b << 16) | (g << 8) | r;
}

UINT16 CGameClass::CONV_32_9(UINT32 inCol)
{
    UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
    UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
    UINT16 auxr = ((inCol & 0x000000FF));

    auxr = (auxr + 18) / 36;
    auxg = (auxg + 18) / 36;
    auxb = (auxb + 18) / 36;
    
    // emit as GRxB
    return (auxb << 1) | (auxr << 9) | (auxg << 13);
}

UINT32 CGameClass::CONV_GBA_32(UINT16 inCol)
{
    UINT32 red = (inCol & 31) << 3;
    UINT32 green = ((inCol >> 5) & 31) << 3;
    UINT32 blue = ((inCol >> 10) & 31) << 3;
    UINT32 alpha = ((inCol >> 15) & 1) << 3;

    // account for rounding
    red += red / 32;
    green += green / 32;
    blue += blue / 32;

    if ((alpha == 0x8) || (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha))
    {
        alpha = 0xFF;
    }

    return ((alpha << 24) | (blue << 16) | (green << 8) | (red));
}

UINT16 CGameClass::CONV_32_GBA(UINT32 inCol)
{
    UINT16 auxa = ((inCol & 0xFF000000) >> 24);
    UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
    UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
    UINT16 auxr = ((inCol & 0x000000FF));

    if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
    {
        auxa = 0;
    }
    else
    {
        auxa = (auxa == 0xFF) ? 0x1 : 0;
    }

    return (((auxr >> 3) & 31) | (((auxg >> 3) & 31) << 5) | (((auxb >> 3) & 31) << 10)) | (auxa << 15);
}

UINT32 CGameClass::CONV_12A_32(UINT16 inCol)
{
    UINT32 auxb = (inCol & 0xF);
    UINT32 auxg = (inCol & 0xF0) >> 4;
    UINT32 auxr = (inCol & 0xF00) >> 8;
    UINT32 auxa = (inCol & 0xF000) >> 12;

    auxr *= 17;
    auxg *= 17;
    auxb *= 17;
    auxa *= 17;

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xFF;
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT16 CGameClass::CONV_32_12A(UINT32 inCol)
{
    UINT16 auxa = ((inCol & 0xFF000000) >> 24);
    UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
    UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
    UINT16 auxr = ((inCol & 0x000000FF));

    auxr = (auxr > (15 * 17)) ? (15 * 17) : auxr;
    auxg = (auxg > (15 * 17)) ? (15 * 17) : auxg;
    auxb = (auxb > (15 * 17)) ? (15 * 17) : auxb;

    auxr = (UINT16)round(auxr / 17.0);
    auxg = (UINT16)round(auxg / 17.0);
    auxb = (UINT16)round(auxb / 17.0);

    //auxb = auxb;
    auxg = auxg << 4;
    auxr = auxr << 8;

    if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
    {
        auxa = 0;
    }
    else
    {
        auxa = (auxa > (15 * 17)) ? (15 * 17) : auxa;
        auxa = (UINT16)round(auxa / 17.0);
        auxa = auxa << 12;
    }

    return auxb | auxg | auxr | auxa;
}

UINT32 CGameClass::CONV_12A_32_LE(UINT16 inCol)
{
    UINT16 uSwappedCol = _byteswap_ushort(inCol);

    return CONV_12A_32(uSwappedCol);
}

UINT16 CGameClass::CONV_32_12A_LE(UINT32 inCol)
{
    return _byteswap_ushort(CONV_32_12A(inCol));
}

UINT32 CGameClass::CONV_15_32(UINT16 inCol)
{
    UINT16 swapped = SWAP_16(inCol);

    UINT32 auxb = (swapped & 0x7C00) >> 10;
    UINT32 auxg = (swapped & 0x3E0) >> 5;
    UINT32 auxr = (swapped & 0x1F);
    UINT32 auxa = 0x0;

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xFF;
    }

    auxr = auxr << 3;
    auxg = auxg << 3;
    auxb = auxb << 3;

    // account for rounding
    auxr += auxr / 32;
    auxg += auxg / 32;
    auxb += auxb / 32;

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT16 CGameClass::CONV_32_15(UINT32 inCol)
{
    UINT16 auxb = (inCol & 0x00FF0000) >> 16;
    UINT16 auxg = (inCol & 0x0000FF00) >> 8;
    UINT16 auxr = (inCol & 0x000000FF);

    auxb = (UINT16)round(auxb / 8);
    auxg = (UINT16)round(auxg / 8);
    auxr = (UINT16)round(auxr / 8);

    //auxr = auxr; no-op
    auxg = auxg << 5;
    auxb = auxb << 10;

    return SWAP_16(auxb | auxg | auxr);
}

UINT32 CGameClass::CONV_15ALT_32(UINT16 inCol)
{
    UINT32 auxa = (inCol & 0x8000) >> 15;
    UINT32 auxr = (inCol & 0x7C00) >> 10;
    UINT32 auxg = (inCol & 0x3E0) >> 5;
    UINT32 auxb = (inCol & 0x1F);

    // alpha is 1bit encoded
    auxa = auxa ? 0xFF : 0;

    auxr = auxr << 3;
    auxg = auxg << 3;
    auxb = auxb << 3;

    // account for rounding
    auxr += auxr / 32;
    auxg += auxg / 32;
    auxb += auxb / 32;

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xFF;
    }

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

    auxb = (UINT16)round(auxb / 8);
    auxg = (UINT16)round(auxg / 8);
    auxr = (UINT16)round(auxr / 8);

    auxr = auxr << 10;
    auxg = auxg << 5;
    //auxb = auxb; no-op

    if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
    {
        auxa = 0;
    }
    else
    {
        auxa = (auxa != 0) ? 1 : 0;
        auxa = auxa << 15;
    }

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
    UINT8 darkbit =  (nColorData >> 0xf) & 0x01;
    UINT8 red1 =    ((nColorData >> 0xe) & 0x01) * 2;
    UINT8 redm =    ((nColorData >> 0x8) & 0x0f) * 4;
    UINT8 green1 =  ((nColorData >> 0xd) & 0x01) * 2;
    UINT8 greenm =  ((nColorData >> 0x4) & 0x0f) * 4;
    UINT8 blue1 =   ((nColorData >> 0xc) & 0x01) * 2;
    UINT8 bluem =   ((nColorData >> 0x0) & 0x0f) * 4;
    UINT32 auxa = 0xFF;

    UINT8 blue =  NGColorVals[((blue1 + bluem) - darkbit) + 1];
    UINT8 green = NGColorVals[((green1 + greenm) - darkbit) + 1];
    UINT8 red =   NGColorVals[((red1 + redm) - darkbit) + 1];

    UINT32 color = (auxa << 24) | (blue << 16) | (green << 8) | (red);

    //CString strColor;
    //strColor.Format(L"ROM : neogeo 0x%04x 32bit 0x%08x R 0x%02x G 0x%02x B 0x%02x\n", nColorData, color, red, green, blue);
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

    UINT16 red1 =      ((red   / 2) & 0x1) << 0xe;
    UINT16 redMain =   ((red   / 4) & 0xf) << 0x8;
    UINT16 green1 =    ((green / 2) & 0x1) << 0xd;
    UINT16 greenMain = ((green / 4) & 0xf) << 0x4;
    UINT16 blue1 =     ((blue  / 2) & 0x1) << 0xc;
    UINT16 blueMain =  ((blue  / 4) & 0xf) << 0x0;

    UINT16 outColor = (red1 | redMain | green1 | greenMain | blue1 | blueMain);

    return outColor;
}

UINT8 SharpRGBColorVals[] = {
    0x00, 0x2e, 0x34, 0x3a, 0x40, 0x44, 0x48, 0x4e,
    0x54, 0x5a, 0x60, 0x66, 0x6c, 0x72, 0x78, 0x7e,
    0x84, 0x8a, 0x90, 0x98, 0xa0, 0xa8, 0xb0, 0xb8,
    0xc0, 0xca, 0xd4, 0xde, 0xe8, 0xf2, 0xfc, 0xff
};

UINT8 Convert32ToSharpRGB(UINT8 nColor)
{
    UINT8 nColorIndex = 0;

    for (; nColorIndex < ARRAYSIZE(SharpRGBColorVals); nColorIndex++)
    {
        if (SharpRGBColorVals[nColorIndex] >= nColor)
        {
            break;
        }
    }

    return nColorIndex;
}

UINT32 CGameClass::CONV_SHARPRGB_32(UINT16 nColorData)
{
    // raw view
    // RRRR GGGG BBBB RGB#
    // 0xf008 is pure red
    // 0x0f04 is pure green
    // 0x00f2 pure blue
    // 0x000e <-> 2e2e2e
    UINT8 bm = (nColorData >> 0xb) & 0x1e;
    UINT8 b1 = (nColorData >> 0x3) & 0x01;
    UINT8 bluf = SharpRGBColorVals[bm + b1];

    UINT8 gm = (nColorData >> 0x7) & 0x1e;
    UINT8 g1 = (nColorData >> 0x2) & 0x01;
    UINT8 grnf = SharpRGBColorVals[gm + g1];

    UINT8 rm = (nColorData >> 0x3) & 0x1e;
    UINT8 r1 = (nColorData >> 0x1) & 0x01;
    UINT8 redf = SharpRGBColorVals[rm + r1];

    UINT32 color = (redf << 16) | (grnf << 8) | (bluf) | 0xff000000;

    return color;
}

UINT16 CGameClass::CONV_32_SHARPRGB(UINT32 inCol)
{
    UINT8 auxr = ((inCol & 0x00FF0000) >> 16);
    UINT8 auxg = ((inCol & 0x0000FF00) >> 8);
    UINT8 auxb = ((inCol & 0x000000FF));

    UINT8 red =   Convert32ToSharpRGB(auxr);
    UINT8 green = Convert32ToSharpRGB(auxg);
    UINT8 blue =  Convert32ToSharpRGB(auxb);

    UINT16 red1 =       (red   & 0x01) << 0x1;
    UINT16 redMain =    (red   & 0x1e) << 0x3;
    UINT16 green1 =     (green & 0x01) << 0x2;
    UINT16 greenMain =  (green & 0x1e) << 0x7;
    UINT16 blue1 =      (blue  & 0x01) << 0x3;
    UINT16 blueMain =   (blue  & 0x1e) << 0xb;

    UINT16 outColor = (red1 | redMain | green1 | greenMain | blue1 | blueMain);

    return outColor;
}

UINT16 CGameClass::SWAP_16(UINT16 palv)
{
    UINT16 aux = 0;
    aux |= palv << 8;
    aux |= palv >> 8;
    return aux;
}

UINT32 CGameClass::CONV_ARGB1888_32(UINT32 inCol)
{
    UINT32 auxb = GetBValue(inCol);
    UINT32 auxg = GetGValue(inCol);
    UINT32 auxr = GetRValue(inCol);
    UINT32 auxa = GetAValue(inCol) * 0xFF;

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xFF;
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::CONV_32_ARGB1888(UINT32 inCol)
{
    UINT32 auxa = (inCol & 0xFF000000) >> 24;
    UINT32 auxb = (inCol & 0x00FF0000) >> 16;
    UINT32 auxg = (inCol & 0x0000FF00) >> 8;
    UINT32 auxr = (inCol & 0x000000FF);

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0x01;
    }
    else
    {
        auxa = auxa ? 1 : 0;
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::CONV_ARGB7888_32(UINT32 inCol)
{
    UINT32 auxb = GetBValue(inCol);
    UINT32 auxg = GetGValue(inCol);
    UINT32 auxr = GetRValue(inCol);
    UINT32 auxa = min(GetAValue(inCol) * 2, 0xFF);

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xFF;
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::CONV_32_ARGB7888(UINT32 inCol)
{
    UINT32 auxa = (inCol & 0xFF000000) >> 24;
    UINT32 auxb = (inCol & 0x00FF0000) >> 16;
    UINT32 auxg = (inCol & 0x0000FF00) >> 8;
    UINT32 auxr = (inCol & 0x000000FF);

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0x80;
    }
    else
    {
        auxa = (UINT32)floor((auxa + 1) / 2);
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::CONV_ARGB8888_32(UINT32 inCol)
{
    UINT32 auxb = GetBValue(inCol);
    UINT32 auxg = GetGValue(inCol);
    UINT32 auxr = GetRValue(inCol);
    UINT32 auxa = min(GetAValue(inCol) * 2, 0xFF);

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xFF;
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::CONV_32_ARGB8888(UINT32 inCol)
{
    UINT32 auxa = (inCol & 0xFF000000) >> 24;
    UINT32 auxb = (inCol & 0x00FF0000) >> 16;
    UINT32 auxg = (inCol & 0x0000FF00) >> 8;
    UINT32 auxr = (inCol & 0x000000FF);

    if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
    {
        auxa = 0xff;
    }
    else
    {
        auxa = (UINT32)floor((auxa + 1) / 2);
    }

    //auxr = auxr;
    auxg = auxg << 8;
    auxb = auxb << 16;
    auxa = auxa << 24;

    return (auxb | auxg | auxr | auxa);
}

UINT32 CGameClass::GetLowestExpectedPaletteLocation()
{
    UINT32 nAdjustedLocation = m_nLowestKnownPaletteRomLocation;

    if (m_pCRC32SpecificData)
    {
        nAdjustedLocation += m_pCRC32SpecificData->nROMSpecificOffset;
    }

    return nAdjustedLocation;
}

LPCWSTR CGameClass::GetGameName()
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

LPCWSTR CGameClass::GetROMFileName()
{
    LPCWSTR pszFileName = L"unknown";

    if (m_pszLoadDir)
    {
        LPCWSTR pszPtr = wcsrchr(m_pszLoadDir, L'\\');

        if (pszPtr)
        {
            pszFileName = pszPtr + 1;
        }
    }

    return pszFileName;
}

BOOL CGameClass::SetLoadDir(LPCWSTR pszNewDir)
{
    if (!m_pszLoadDir)
    {
        m_pszLoadDir = new WCHAR[wcslen(pszNewDir) + 1];
        wcscpy(m_pszLoadDir, pszNewDir);

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
        strErr.Format(L"CGameClass::SetSourcePal:: ERROR: PalMod only supports %u palettes per display.\n", MAX_PALETTES_DISPLAYABLE);
        OutputDebugString(strErr);
        return;
    }

#if GAMECLASS_DBG
    CString strMsg;
    strMsg.Format(L"CGameClass::SetSourcePal: For unit 0x%02x setting starting palette 0x%02x, displaying %u maximum, and incrementing 0x%x per button.\n", nUnitId, nStart, nAmt, nInc);
    OutputDebugString(strMsg);

    if ((nAmt > 1) && // If this game wants to allow multisprite export
        (nStart > nInc)) // This starting point is in the second or later node: that's potentially a problem.
    {
        OutputDebugString(L"\tCGameClass::SetSourcePal: Warning: you're using multisprite export in what is hopefully an Extras node.  Be careful.\n");
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

    // Concern: you can make a change, Update to save that, make another change, then Revert.
    // Revert will revert back to the stored changed, not the base palette.  So we don't want to
    // lose the dirty bit here.
    //MarkPaletteClean(CurrPalDef->uUnitId, CurrPalDef->uPalId);
}

COLORREF* CGameClass::CreatePal(UINT16 nUnitId, UINT16 nPalId)
{
    LoadSpecificPaletteData(nUnitId, nPalId);

    COLORREF* NewPal = new COLORREF[m_nCurrentPaletteSizeInColors];

    if (createPalOptions.nStartingPosition != 0)
    {
        NewPal[0] = 0x0;
    }

    for (UINT16 i = 0; i < (m_nCurrentPaletteSizeInColors - createPalOptions.nStartingPosition); i++)
    {
        const UINT16 nCurrentPos = i + createPalOptions.nStartingPosition;

        if (GameIsUsing16BitColor())
        {
            NewPal[nCurrentPos] = ConvPal16(m_pppDataBuffer[nUnitId][nPalId][i]);
        }
        else
        {
            NewPal[nCurrentPos] = ConvPal32(m_pppDataBuffer32[nUnitId][nPalId][i]);
        }
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
        const int nPalAmt = nSrcPalAmt[0];

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
        *pNewPal = new COLORREF[nNewPalSzCpy];

        for (int nPICtr = 0; nPICtr < nNewPalSzCpy; nPICtr++)
        {
            (*pNewPal)[nPICtr] = ConvPal16(pMulRg[nPICtr]);
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
            const UINT16 nMaxSafeColorsToWrite = (UINT16)createPalOptions.eWriteOutputOptions;
            const UINT16 iFixedCounterPosition = 0; // The lead 'color' in some games is a counter, in others it's the transparency color.  Don't touch.

            while (nTotalColorsRemaining > 0)
            {
                UINT16 nCurrentColorCountToWrite = min(nMaxSafeColorsToWrite, nTotalColorsRemaining);

                for (UINT16 nPICtr = 0; nPICtr < nCurrentColorCountToWrite; nPICtr++)
                {
                    if (nPICtr == iFixedCounterPosition)
                    {
                        continue;
                    }

                    const UINT16 iCurrentArrayOffset = nPICtr + nCurrentTotalWrites;

                    if (GameIsUsing16BitColor())
                    {
                        m_pppDataBuffer[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - createPalOptions.nStartingPosition] = ConvCol16(crSrc[iCurrentArrayOffset]);
                    }
                    else
                    {
                        m_pppDataBuffer32[srcDef->uUnitId][srcDef->uPalId][iCurrentArrayOffset - createPalOptions.nStartingPosition] = ConvCol32(crSrc[iCurrentArrayOffset]);
                    }
                }

                nCurrentTotalWrites += nMaxSafeColorsToWrite;
                nTotalColorsRemaining -= nMaxSafeColorsToWrite;
            }

            MarkPaletteDirty(srcDef->uUnitId, srcDef->uPalId);
            srcDef->bChanged = FALSE;
            rgFileChanged[srcDef->uUnitId] = TRUE;

            if (bPostSetPalProc)
            {
                PostSetPal(srcDef->uUnitId, srcDef->uPalId);
            }
        }
    }
}

void CGameClass::CreateDefPal(sDescNode* srcNode, UINT16 nSepId)
{
    UINT16 nUnitId = srcNode->uUnitId;
    UINT16 nPalId = srcNode->uPalId;
    static UINT16 s_nColorsPerPage = CRegProc::GetMaxPalettePageSize();

    LoadSpecificPaletteData(nUnitId, nPalId);

    const UINT8 nTotalPagesNeeded = (UINT8)ceil((double)m_nCurrentPaletteSizeInColors / (double)s_nColorsPerPage);
    const bool fCanFitWithinCurrentPageLayout = (nTotalPagesNeeded <= MAX_PALETTE_PAGES);

    if (!fCanFitWithinCurrentPageLayout)
    {
        CString strWarning;
        strWarning.Format(L"ERROR: The UI currently only supports %u pages. \"%s\" is trying to use %u pages which will not work.\n", MAX_PALETTE_PAGES, srcNode->szDesc, nTotalPagesNeeded);
        OutputDebugString(strWarning);
    }

    BasePalGroup.AddPal(CreatePal(nUnitId, nPalId), m_nCurrentPaletteSizeInColors, nUnitId, nPalId);

    if (fCanFitWithinCurrentPageLayout && (m_nCurrentPaletteSizeInColors > s_nColorsPerPage))
    {
        CString strPageDescription;
        INT16 nColorsRemaining = m_nCurrentPaletteSizeInColors;

        for (UINT16 nCurrentPage = 0; (nCurrentPage * s_nColorsPerPage) < m_nCurrentPaletteSizeInColors; nCurrentPage++)
        {
            strPageDescription.Format(L"%s (%u/%u)", srcNode->szDesc, nCurrentPage + 1, nTotalPagesNeeded);
            BasePalGroup.AddSep(nSepId, strPageDescription, nCurrentPage * s_nColorsPerPage, min(s_nColorsPerPage, (DWORD)nColorsRemaining));
            nColorsRemaining -= s_nColorsPerPage;
        }
    }
    else
    {
        BasePalGroup.AddSep(nSepId, srcNode->szDesc, 0, m_nCurrentPaletteSizeInColors);
    }
}

void CGameClass::InitDataBuffer()
{
    if (GameIsUsing16BitColor())
    {
        m_pppDataBuffer = new UINT16 * *[nUnitAmt];
        memset(m_pppDataBuffer, 0, sizeof(UINT16**) * nUnitAmt);
    }
    else
    {
        m_pppDataBuffer32 = new UINT32 * *[nUnitAmt];
        memset(m_pppDataBuffer32, 0, sizeof(UINT32**) * nUnitAmt);
    }
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

    if (m_pppDataBuffer32)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            if (m_pppDataBuffer32[nUnitCtr])
            {
                UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

                for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
                {
                    safe_delete_array(m_pppDataBuffer32[nUnitCtr][nPalCtr]);
                }

                safe_delete_array(m_pppDataBuffer32[nUnitCtr]);
            }
        }

        safe_delete_array(m_pppDataBuffer32);
    }
}

void CGameClass::ResetFileChangeTrackingArray()
{
    safe_delete_array(rgFileChanged);
    PrepChangeTrackingArray();
}

BOOL CGameClass::WasGameFileChangedInSession()
{
    BOOL fSomethingChanged = FALSE;

    for (UINT16 nPos = 0; rgUnitRedir[nPos] != INVALID_UNIT_VALUE; nPos++)
    {
        fSomethingChanged = fSomethingChanged || rgFileChanged[rgUnitRedir[nPos]];
    }

    return fSomethingChanged;
}

void CGameClass::PrepChangeTrackingArray()
{
    if (!rgFileChanged)
    {
        const UINT16 rgCountChangableUnits = max(nUnitAmt, nFileAmt) + 1;
        rgFileChanged = new BOOL[rgCountChangableUnits];
        memset(rgFileChanged, FALSE, sizeof(BOOL) * rgCountChangableUnits);
    }
}

void CGameClass::MarkPaletteDirty(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };

    // only add unique entries
    if (std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)) == m_vDirtyPaletteList.end())
    {
        m_vDirtyPaletteList.push_back(sPaletteOfInterest);
    }
    return;
}

void CGameClass::MarkPaletteClean(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    m_vDirtyPaletteList.erase(std::remove_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest)), m_vDirtyPaletteList.end());
    return;
}

bool CGameClass::IsPaletteDirty(UINT16 nUnit, UINT16 nPaletteID)
{
    sPaletteIdentifier sPaletteOfInterest = { nUnit, nPaletteID };
    auto it = std::find_if(m_vDirtyPaletteList.begin(), m_vDirtyPaletteList.end(), DoPalettesMatch(&sPaletteOfInterest));

    return it != m_vDirtyPaletteList.end();
}

int CGameClass::_GetExtraCount(int* rgExtraCount, int nNormalUnitCount, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (rgExtraCount[0] == -1)
    {
        int nDefCtr = 0;
        // +1 for the extras
        memset(rgExtraCount, 0, (nNormalUnitCount + 1) * sizeof(int));

        stExtraDef* pCurrDef = (stExtraDef*)&ppExtraDef[0];

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (!pCurrDef->isInvisible)
            {
                rgExtraCount[pCurrDef->uUnitN]++;
            }

            nDefCtr++;
            pCurrDef = (stExtraDef*)&ppExtraDef[nDefCtr];
        }
    }

    return rgExtraCount[nUnitId];
}

int CGameClass::_GetExtraLocation(int* rgExtraLocations, int nNormalUnitCount, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (rgExtraLocations[0] == -1)
    {
        int nDefCtr = 0;
        int nCurrUnit = UNIT_START_VALUE;
        memset(rgExtraLocations, 0, (nNormalUnitCount + 1) * sizeof(int));

        stExtraDef* pCurrDef = (stExtraDef*)&ppExtraDef[0];

        while (pCurrDef->uUnitN != INVALID_UNIT_VALUE)
        {
            if (pCurrDef->uUnitN != nCurrUnit)
            {
                rgExtraLocations[pCurrDef->uUnitN] = nDefCtr;
                nCurrUnit = pCurrDef->uUnitN;
            }

            nDefCtr++;
            pCurrDef = (stExtraDef*)&ppExtraDef[nDefCtr];
        }
    }

    return rgExtraLocations[nUnitId];
}

UINT16 CGameClass::_GetCollectionCountForUnit(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        return pGameUnits[nUnitId].uChildAmt;
    }
}

UINT16 CGameClass::_GetPaletteCountForUnit(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        UINT16 nCompleteCount = 0;
        UINT16 nCollectionCount = pGameUnits[nUnitId].uChildAmt;
        const sDescTreeNode* pCurrentCollection = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

        for (UINT16 nCollectionIndex = 0; nCollectionIndex < nCollectionCount; nCollectionIndex++)
        {
            nCompleteCount += pCurrentCollection[nCollectionIndex].uChildAmt;
        }

#if GAMECLASS_DBG
        CString strMsg;
        strMsg.Format(L"CGameClass::_GetPaletteCountForUnit: %u for unit %u which has %u collections.\n", nCompleteCount, nUnitId, nCollectionCount);
        OutputDebugString(strMsg);
#endif

        return nCompleteCount;
    }
}

UINT16 CGameClass::_GetNodeCountForCollection(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nCollectionId, stExtraDef* ppExtraDef)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);
    }
    else
    {
        const sDescTreeNode* pCollectionNode = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

        return pCollectionNode[nCollectionId].uChildAmt;
    }
}

LPCWSTR CGameClass::_GetDescriptionForCollection(const sDescTreeNode* pGameUnits, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nCollectionId)
{
    if (nUnitId == nExtraUnitLocation)
    {
        return L"Extra Palettes";
    }
    else
    {
        const sDescTreeNode* pCollection = (const sDescTreeNode*)pGameUnits[nUnitId].ChildNodes;
        return pCollection[nCollectionId].szDesc;
    }
}

const sGame_PaletteDataset* CGameClass::_GetPaletteSet(const sDescTreeNode* pGameUnits, UINT16 nUnitId, UINT16 nCollectionId)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCurrentSet = (const sDescTreeNode*)pGameUnits[nUnitId].ChildNodes;
    return ((sGame_PaletteDataset*)(pCurrentSet[nCollectionId].ChildNodes));
}

const sGame_PaletteDataset* CGameClass::_GetSpecificPalette(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nPaletteId, stExtraDef* ppExtraDef)
{
    // Don't use this for Extra palettes.
    UINT16 nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteToUse = nullptr;
    int nDistanceFromZero = nPaletteId;
    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToUse = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        UINT16 nNodeCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, nCollectionIndex, ppExtraDef);

        if (nDistanceFromZero < nNodeCount)
        {
            paletteToUse = &paletteSetToUse[nDistanceFromZero];
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return paletteToUse;
}

UINT16 CGameClass::_GetNodeSizeFromPaletteId(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nPaletteId, stExtraDef* ppExtraDef)
{
    // Don't use this for Extra palettes.
    UINT16 nNodeSize = 0;
    UINT16 nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        UINT16 nNodeCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, nCollectionIndex, ppExtraDef);

        if (nDistanceFromZero < nNodeCount)
        {
            nNodeSize = nNodeCount;
            break;
        }

        nDistanceFromZero -= nNodeCount;
    }

    return nNodeSize;
}

const sDescTreeNode* CGameClass::_GetNodeFromPaletteId(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, UINT16 nUnitId, UINT16 nPaletteId, stExtraDef* ppExtraDef, bool fReturnBasicNodesOnly)
{
    // Don't use this for Extra palettes.
    const sDescTreeNode* pCollectionNode = nullptr;
    UINT16 nTotalCollections = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, nUnitId, ppExtraDef);
    const sGame_PaletteDataset* paletteSetToUse = nullptr;
    int nDistanceFromZero = nPaletteId;

    for (UINT16 nCollectionIndex = 0; nCollectionIndex < nTotalCollections; nCollectionIndex++)
    {
        const sGame_PaletteDataset* paletteSetToCheck = _GetPaletteSet(pGameUnits, nUnitId, nCollectionIndex);
        UINT16 nNodeCount;

        if (nUnitId == nExtraUnitLocation)
        {
            nNodeCount = _GetExtraCount(rgExtraCount, nNormalUnitCount, nUnitId, ppExtraDef);

            if (nDistanceFromZero < nNodeCount)
            {
                pCollectionNode = nullptr;
                break;
            }
        }
        else
        {
            const sDescTreeNode* pCollectionNodeToCheck = (const sDescTreeNode*)(pGameUnits[nUnitId].ChildNodes);

            nNodeCount = pCollectionNodeToCheck[nCollectionIndex].uChildAmt;

            if (nDistanceFromZero < nNodeCount)
            {
                // We know it's within this group.  Now: is it basic?
                if (!fReturnBasicNodesOnly || (nCollectionIndex < m_nNumberOfColorOptions))
                {
                    pCollectionNode = &(pCollectionNodeToCheck[nCollectionIndex]);
                }
                else
                {
                    pCollectionNode = nullptr;
                }

                break;
            }
        }

        nDistanceFromZero -= nNodeCount;
    }

    return pCollectionNode;
}

UINT32 CGameClass::_InitDescTree(sDescTreeNode* pNewDescTree, const sDescTreeNode* pGameUnits, UINT16 nTotalUnitCount, UINT16 nExtraUnitLocation, UINT16 nTotalNormalUnitCount,
                                 int* rgExtraCount, int* rgExtraLocations, stExtraDef* ppExtraDef)
{
    CString strMsg;
    UINT32 nTotalPaletteCount = 0;

    //Go through each character
    for (UINT16 iUnitCtr = 0; iUnitCtr < nTotalUnitCount; iUnitCtr++)
    {
        sDescTreeNode* UnitNode = nullptr;
        sDescTreeNode* CollectionNode = nullptr;
        sDescNode* ChildNode = nullptr;

        UINT16 nExtraCt = _GetExtraCount(rgExtraCount, nTotalNormalUnitCount, iUnitCtr, ppExtraDef);
        BOOL bUseExtra = _GetExtraLocation(rgExtraLocations, nTotalNormalUnitCount, iUnitCtr, ppExtraDef) != 0;

        UINT16 nUnitChildCount = _GetCollectionCountForUnit(pGameUnits, rgExtraCount, nTotalNormalUnitCount, nExtraUnitLocation, iUnitCtr, ppExtraDef);

        UnitNode = &((sDescTreeNode*)pNewDescTree->ChildNodes)[iUnitCtr];

        if (iUnitCtr != nExtraUnitLocation)
        {
            //Set each description
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"%s", pGameUnits[iUnitCtr].szDesc);
            UnitNode->ChildNodes = new sDescTreeNode[nUnitChildCount];
            //All children have collection trees
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = nUnitChildCount;

#if GAMECLASS_DBG
            strMsg.Format(L"Unit: \"%s\", %u of %u (%s), %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nTotalUnitCount, bUseExtra ? L"with extras" : L"no extras", nUnitChildCount);
            OutputDebugString(strMsg);
#endif

            UINT16 nTotalPalettesUsedInUnit = 0;

            //Set data for each child group ("collection")
            for (UINT16 iCollectionCtr = 0; iCollectionCtr < nUnitChildCount; iCollectionCtr++)
            {
                CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[iCollectionCtr];

                //Set each collection data

                // Default label, since these aren't associated to collections
                _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, _GetDescriptionForCollection(pGameUnits, nExtraUnitLocation, iUnitCtr, iCollectionCtr));
                //Collection children have nodes
                UINT16 nListedChildrenCount = _GetNodeCountForCollection(pGameUnits, rgExtraCount, nTotalNormalUnitCount, nExtraUnitLocation, iUnitCtr, iCollectionCtr, ppExtraDef);
                CollectionNode->uChildType = DESC_NODETYPE_NODE;
                CollectionNode->uChildAmt = nListedChildrenCount;
                CollectionNode->ChildNodes = (sDescTreeNode*)new sDescNode[nListedChildrenCount];

#if GAMECLASS_DBG
                strMsg.Format(L"\tCollection: \"%s\", %u of %u, %u children\n", CollectionNode->szDesc, iCollectionCtr + 1, nUnitChildCount, nListedChildrenCount);
                OutputDebugString(strMsg);
#endif

                const sGame_PaletteDataset* paletteSetToUse = _GetPaletteSet(pGameUnits, iUnitCtr, iCollectionCtr);

                //Set each collection's extra nodes: convert the sGame_PaletteDataset to sDescTreeNodes
                for (UINT16 nNodeIndex = 0; nNodeIndex < nListedChildrenCount; nNodeIndex++)
                {
                    ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nNodeIndex];

                    _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, L"%s", paletteSetToUse[nNodeIndex].szPaletteName);

                    ChildNode->uUnitId = iUnitCtr; // but this doesn't work in the new layout does it...?
                    ChildNode->uPalId = nTotalPalettesUsedInUnit++;
                    nTotalPaletteCount++;

#if GAMECLASS_DBG
                    strMsg.Format(L"\t\tPalette: \"%s\", %u of %u", ChildNode->szDesc, nNodeIndex + 1, nListedChildrenCount);
                    OutputDebugString(strMsg);
                    strMsg.Format(L", 0x%x to 0x%x (%u colors),", paletteSetToUse[nNodeIndex].nPaletteOffset, paletteSetToUse[nNodeIndex].nPaletteOffsetEnd, (paletteSetToUse[nNodeIndex].nPaletteOffsetEnd - paletteSetToUse[nNodeIndex].nPaletteOffset) / 2);
                    OutputDebugString(strMsg);

                    if (paletteSetToUse[nNodeIndex].indexImgToUse != INVALID_UNIT_VALUE)
                    {
                        strMsg.Format(L" image unit 0x%02x image index 0x%02x.\n", paletteSetToUse[nNodeIndex].indexImgToUse, paletteSetToUse[nNodeIndex].indexOffsetToUse);
                    }
                    else
                    {
                        strMsg.Format(L" no image available.\n");
                    }
                    OutputDebugString(strMsg);
#endif
                }
            }
        }
        else
        {
            // This handles data loaded from the Extra extension file, which are treated
            // each as their own separate node with one collection with everything under that.
            _snwprintf_s(UnitNode->szDesc, ARRAYSIZE(UnitNode->szDesc), _TRUNCATE, L"Extra Palettes");
            UnitNode->ChildNodes = new sDescTreeNode[1];
            UnitNode->uChildType = DESC_NODETYPE_TREE;
            UnitNode->uChildAmt = 1;

#if GAMECLASS_DBG
            strMsg.Format(L"Unit (Extras): %s, %u of %u, %u total children\n", UnitNode->szDesc, iUnitCtr + 1, nTotalUnitCount, nUnitChildCount);
            OutputDebugString(strMsg);
#endif
        }

        //Set up extra nodes
        if (bUseExtra)
        {
            int nExtraPos = _GetExtraLocation(rgExtraLocations, nTotalNormalUnitCount, iUnitCtr, ppExtraDef);
            int nCurrExtra = 0;

            CollectionNode = &((sDescTreeNode*)UnitNode->ChildNodes)[(nExtraUnitLocation > iUnitCtr) ? (nUnitChildCount - 1) : 0]; // Extra node
            _snwprintf_s(CollectionNode->szDesc, ARRAYSIZE(CollectionNode->szDesc), _TRUNCATE, L"Extra");

            CollectionNode->ChildNodes = new sDescTreeNode[nExtraCt];

            CollectionNode->uChildType = DESC_NODETYPE_NODE;
            CollectionNode->uChildAmt = nExtraCt;

#if GAMECLASS_DBG
            strMsg.Format(L"\tCollection: %s, %u of %u, %u children\n", CollectionNode->szDesc, 1, nUnitChildCount, nExtraCt);
            OutputDebugString(strMsg);
#endif

            for (UINT16 nExtraCtr = 0; nExtraCtr < nExtraCt; nExtraCtr++)
            {
                ChildNode = &((sDescNode*)CollectionNode->ChildNodes)[nExtraCtr];

                stExtraDef* pCurrDef = (stExtraDef*)&ppExtraDef[nExtraPos + nCurrExtra];

                while (pCurrDef->isInvisible)
                {
                    nCurrExtra++;

                    pCurrDef = (stExtraDef*)&ppExtraDef[nExtraPos + nCurrExtra];
                }

                _snwprintf_s(ChildNode->szDesc, ARRAYSIZE(ChildNode->szDesc), _TRUNCATE, pCurrDef->szDesc);

                ChildNode->uUnitId = iUnitCtr;
                ChildNode->uPalId = (((nExtraUnitLocation > iUnitCtr) ? 1 : 0) * nUnitChildCount * 2) + nCurrExtra;

#if GAMECLASS_DBG
                strMsg.Format(L"\t\tPalette: %s, %u of %u\n", ChildNode->szDesc, nExtraCtr + 1, nExtraCt);
                OutputDebugString(strMsg);
#endif

                nCurrExtra++;
                nTotalPaletteCount++;
            }
        }
    }

    return nTotalPaletteCount;
}

BOOL CGameClass::_UpdatePalImg(const sDescTreeNode* pGameUnits, int* rgExtraCount, int nNormalUnitCount, UINT16 nExtraUnitLocation, stExtraDef* ppExtraDef, int Node01, int Node02, int Node03, int Node04)
{
    //Reset palette sources
    ClearSrcPal();

    if (Node01 == -1)
    {
        return FALSE;
    }

    sDescNode* NodeGet = GetMainTree()->GetDescNode(Node01, Node02, Node03, Node04);

    if (NodeGet == nullptr)
    {
        return FALSE;
    }

    // Default values for multisprite image display for Export
    UINT16 nSrcStart = NodeGet->uPalId;
    UINT16 nSrcAmt = 1;
    UINT16 nNodeIncrement = 1;

    //Get rid of any palettes if there are any
    BasePalGroup.FlushPalAll();

    // Make sure to reset the image id
    nTargetImgId = 0;
    UINT16 nImgUnitId = INVALID_UNIT_VALUE;

    bool fShouldUseAlternateLoadLogic = false;

    // Only load images for internal units, since we don't currently have a methodology for associating
    // external loads to internal sprites.
    if (NodeGet->uUnitId != nExtraUnitLocation)
    {
        const sGame_PaletteDataset* paletteDataSet = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef);

        if (paletteDataSet)
        {
            nImgUnitId = paletteDataSet->indexImgToUse;
            nTargetImgId = paletteDataSet->indexOffsetToUse;

            const sDescTreeNode* pCurrentNode = _GetNodeFromPaletteId(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef, true);

            if (pCurrentNode) // For Basic nodes, we can allow multisprite view in the Export dialog
            {
                bool fIsCorePalette = false;

                for (UINT16 nOptionsToTest = 0; nOptionsToTest < m_nNumberOfColorOptions; nOptionsToTest++)
                {
                    if (wcscmp(pCurrentNode->szDesc, pButtonLabelSet[nOptionsToTest]) == 0)
                    {
                        fIsCorePalette = true;
                        break;
                    }
                }

                if (fIsCorePalette)
                {
                    nSrcAmt = m_nNumberOfColorOptions;
                    nNodeIncrement = pCurrentNode->uChildAmt;

                    while (nSrcStart >= nNodeIncrement)
                    {
                        // The starting point is the absolute first palette for the sprite in question which is found in P1
                        nSrcStart -= nNodeIncrement;
                    }
                }
            }

            if (paletteDataSet->pPalettePairingInfo)
            {
                if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == -1)
                {
                    const UINT16 nStageCount = _GetNodeSizeFromPaletteId(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId, ppExtraDef);

                    fShouldUseAlternateLoadLogic = true;
                    sImgTicket* pImgArray = nullptr;

                    for (INT16 nStageIndex = 0; nStageIndex < nStageCount; nStageIndex++)
                    {
                        // The palettes get added forward, but the image tickets need to be generated in reverse order
                        const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + (nStageCount - 1 - nStageIndex), ppExtraDef);
                        if (paletteDataSetToJoin)
                        {
                            pImgArray = CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, pImgArray);

                            //Set each palette
                            sDescNode* JoinedNode = GetMainTree()->GetDescNode(Node01, Node02, Node03 + nStageIndex, -1);
                            CreateDefPal(JoinedNode, nStageIndex);
                            SetSourcePal(nStageIndex, NodeGet->uUnitId, nSrcStart + nStageIndex, nSrcAmt, nNodeIncrement);
                        }
                    }

                    ClearSetImgTicket(pImgArray);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 3)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1, ppExtraDef);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2, ppExtraDef);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse)
                            ))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                }
                else if (paletteDataSet->pPalettePairingInfo->nPalettesToJoin == 4)
                {
                    const INT8 nPeerPaletteDistance1 = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;
                    const INT8 nPeerPaletteDistance2 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo2ndPartner;
                    const INT8 nPeerPaletteDistance3 = paletteDataSet->pPalettePairingInfo->nOverallNodeIncrementTo3rdPartner;
                    const sGame_PaletteDataset* paletteDataSetToJoin1 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance1, ppExtraDef);
                    const sGame_PaletteDataset* paletteDataSetToJoin2 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance2, ppExtraDef);
                    const sGame_PaletteDataset* paletteDataSetToJoin3 = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance3, ppExtraDef);
                    fShouldUseAlternateLoadLogic = true;

                    ClearSetImgTicket(
                        CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                            CreateImgTicket(paletteDataSetToJoin1->indexImgToUse, paletteDataSetToJoin1->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin2->indexImgToUse, paletteDataSetToJoin2->indexOffsetToUse,
                                    CreateImgTicket(paletteDataSetToJoin3->indexImgToUse, paletteDataSetToJoin3->indexOffsetToUse)
                            )))
                    );

                    //Set each palette
                    sDescNode* JoinedNode[] = {
                        GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance1, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance2, -1),
                        GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance3, -1)
                    };

                    //Set each palette
                    CreateDefPal(JoinedNode[0], 0);
                    CreateDefPal(JoinedNode[1], 1);
                    CreateDefPal(JoinedNode[2], 2);
                    CreateDefPal(JoinedNode[3], 3);

                    SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                    SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance1, nSrcAmt, nNodeIncrement);
                    SetSourcePal(2, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance2, nSrcAmt, nNodeIncrement);
                    SetSourcePal(3, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance3, nSrcAmt, nNodeIncrement);
                }
                else
                {
                    int nXOffs = paletteDataSet->pPalettePairingInfo->nXOffs;
                    int nYOffs = paletteDataSet->pPalettePairingInfo->nYOffs;
                    INT8 nPeerPaletteDistance = paletteDataSet->pPalettePairingInfo->nNodeIncrementToPartner;

                    const sGame_PaletteDataset* paletteDataSetToJoin = _GetSpecificPalette(pGameUnits, rgExtraCount, nNormalUnitCount, nExtraUnitLocation, NodeGet->uUnitId, NodeGet->uPalId + nPeerPaletteDistance, ppExtraDef);

                    if (paletteDataSetToJoin)
                    {
                        fShouldUseAlternateLoadLogic = true;

                        ClearSetImgTicket(
                            CreateImgTicket(paletteDataSet->indexImgToUse, paletteDataSet->indexOffsetToUse,
                                CreateImgTicket(paletteDataSetToJoin->indexImgToUse, paletteDataSetToJoin->indexOffsetToUse, nullptr, nXOffs, nYOffs)
                            )
                        );

                        //Set each palette
                        sDescNode* JoinedNode[2] = {
                            GetMainTree()->GetDescNode(Node01, Node02, Node03, -1),
                            GetMainTree()->GetDescNode(Node01, Node02, Node03 + nPeerPaletteDistance, -1)
                        };

                        //Set each palette
                        CreateDefPal(JoinedNode[0], 0);
                        CreateDefPal(JoinedNode[1], 1);

                        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
                        SetSourcePal(1, NodeGet->uUnitId, nSrcStart + nPeerPaletteDistance, nSrcAmt, nNodeIncrement);
                    }
                }
            }
        }
    }

    if (!fShouldUseAlternateLoadLogic)
    {
        //Create the default palette
        ClearSetImgTicket(CreateImgTicket(nImgUnitId, nTargetImgId));

        CreateDefPal(NodeGet, 0);

        SetSourcePal(0, NodeGet->uUnitId, nSrcStart, nSrcAmt, nNodeIncrement);
    }

    return TRUE;
}

inline UINT8 CGameClass::GetSIMMSetForROMLocation(UINT32 nROMLocation)
{
    return (nROMLocation > (m_nNumberOfSIMMsPerSet * m_nSIMMLength)) ? 1 : 0;
}

inline UINT32 CGameClass::GetSIMMLocationFromROMLocation(UINT32 nROMLocation)
{
    UINT32 nSIMMLocation = nROMLocation / m_nNumberOfSIMMsPerSet;

    return nSIMMLocation;
}

inline UINT32 CGameClass::GetLocationWithinSIMM(UINT32 nSIMMSetLocation)
{
    UINT32 nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > m_nSIMMLength)
    {
        nSIMMLocation -= m_nSIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGameClass::LoadFile(CFile* LoadedFile, UINT16 nUnitId)
{
    if (GameIsUsing16BitColor() && m_pppDataBuffer)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];

            // Anything using the base implementation is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            // For Unknown Game mode, show the Extra Palettes first if they exist since they're
            // the only reason you would use Unknown Game mode
            if ((nGameFlag == NEOGEO_A) && (nUnitAmt != 1))
            {
                rgUnitRedir[nUnitCtr] = (nUnitCtr == 0) ? 1 : 0;
            }

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
        }
    }
    else if (!GameIsUsing16BitColor() && m_pppDataBuffer32)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            m_pppDataBuffer32[nUnitCtr] = new UINT32 * [nPalAmt];

            // Anything using the base implementation is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                m_pppDataBuffer32[nUnitCtr][nPalCtr] = new UINT32[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer32[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
            }
        }
    }
    else
    {
        CString strMessage;
        if (strMessage.LoadString(IDS_COLOR_WRONGSIZE))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONERROR);
        }
        return FALSE;
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    CheckForErrorsInTables();

    return TRUE;
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

                if (!fShownOnce && (m_nCurrentPaletteROMLocation < GetLowestExpectedPaletteLocation())) // This magic number is the lowest known ROM location.
                {
                    CString strMsg;
                    strMsg.Format(IDS_SAVE_LOWWRITE, nUnitCtr, nPalCtr, m_nCurrentPaletteROMLocation);
                    MessageBox(g_appHWnd, strMsg, GetHost()->GetAppName(), MB_ICONERROR);
                    fShownOnce = true;
                }

                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                if (GameIsUsing16BitColor())
                {
                    SaveFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                else
                {
                    SaveFile->Write(m_pppDataBuffer32[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGameClass::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}

bool CGameClass::UserWantsAllPalettesInPatch()
{
    CString strOptions;
    strOptions.Format(L"Do you want this to be a complete game patch of all possible palettes?  They are much larger and are usually very wasteful.  Select Yes for that, or No to just include the %u palette%s you changed in this current session.", m_vDirtyPaletteList.size(), (m_vDirtyPaletteList.size() > 1) ? L"s" : L"");

    return (MessageBox(g_appHWnd, strOptions, GetHost()->GetAppName(), MB_YESNO | MB_DEFBUTTON2) == IDYES);
}

UINT32 CGameClass::SavePatchFile(CFile* PatchFile, UINT16 nUnitId)
{
    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    UINT32 nTotalPalettesSaved = 0;
    LPCSTR szIPSOpener = "PATCH";
    PatchFile->Write(szIPSOpener, (UINT)strlen(szIPSOpener));

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
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
                b1 = ((m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes) & 0xFF00) >> 8;
                b2 = (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes) & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);

                // Actual data
                if (GameIsUsing16BitColor())
                {
                    PatchFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                else
                {
                    PatchFile->Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    LPCSTR szIPSCloser = "EOF";
    PatchFile->Write(szIPSCloser, (UINT)strlen(szIPSCloser));

#ifdef WANT_IPS_DAT_FILES
    // This code works, but I'm discussing what we want to do with it if anything.

    // Now generate DAT file...
    if (m_pCRC32SpecificData)
    {
        WCHAR szDATFilename[MAX_PATH];
        WCHAR szIPSFilename[MAX_PATH];

        wcscpy(szDATFilename, PatchFile->GetFilePath().GetString());
        
        WCHAR* pszDot = wcsrchr(szDATFilename, L'.');

        if (pszDot != nullptr)
        {
            pszDot[0] = 0;
        }

        pszDot = wcsrchr(szDATFilename, L'\\');

        wcscpy(szIPSFilename, pszDot + 1);

        wcscat(szDATFilename, L".dat");

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
    strMsg.Format(L"CGameClass::SavePatchFile: Saved 0x%x palettes to patching file for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return nTotalPalettesSaved;
}

BOOL CGameClass::LoadFileForSIMMGame(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    CString strInfo;
    UINT8 nAdjustedSIMMFileNumber = nSIMMNumber + m_nSIMMSetStartingFileNumber;
    BOOL fSuccess = TRUE;

    if ((nAdjustedSIMMFileNumber % m_nNumberOfSIMMsPerSet) != 0)
    {
        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: SIMM %u.%u is a peer SIMM: skipping.\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nAdjustedSIMMFileNumber > (m_nSIMMSetStartingFileNumber + m_nTotalNumberOfSIMMFilesNeeded))
    {
        // Nothing useful on those SIMMs
        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: SIMM %u.%u is unused: skipping.\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // This code handles ROMs as being interleaved
    // For example, one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    const UINT32 nBeginningRange = 0 + (m_nSIMMLength * (nAdjustedSIMMFileNumber - m_nSIMMSetStartingFileNumber));
    UINT32 nEndingRange = (m_nSIMMLength * m_nNumberOfSIMMsPerSet) + (m_nSIMMLength * (nAdjustedSIMMFileNumber - m_nSIMMSetStartingFileNumber));

    CFile FilePeer;
    sFileRule PeerRule = GetNextRuleForSIMMGame();
    CString strPeerFilename;
    strPeerFilename.Format(L"%s\\%s", GetLoadDir(), PeerRule.szFileName);

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    if (fFileOpened)
    {
        UINT32 nPaletteLoadCount = 0;
        bool fShownCrossSIMMErrorOnce = false;

        strInfo.Format(L"CGameClass::LoadFileForSIMMGame: Preparing to load data from SIMM number %u.%u with peer %s (range 0x%x to 0x%x)\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber,
                            PeerRule.szFileName, nBeginningRange, nEndingRange);
        OutputDebugString(strInfo);

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], 0, sizeof(UINT16*) * nPalAmt);
            }

            // Layout is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSizeInColors) > m_nSIMMLength)
                    {
                        if (!fShownCrossSIMMErrorOnce)
                        {
                            fShownCrossSIMMErrorOnce = true;
                            strInfo.Format(IDS_EXTRAS_SIMMBOUNDARY,
                                            nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes));
                            MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        fSuccess = FALSE;
                    }

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(UINT16) * m_nCurrentPaletteSizeInColors);

                    LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    nPaletteLoadCount++;

                    for (UINT16 nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                    {
                        BYTE high, low;

                        LoadedFile->Read(&low, 1);
                        FilePeer.Read(&high, 1);

                        m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = (UINT16)((high << 8) | low);
                    }
                }
            }
        }

        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: Loaded %u palettes from this SIMM pairing of %u.%u\n", nPaletteLoadCount, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);

        FilePeer.Close();
    }
    else
    {
        strInfo.Format(L"\tCGameClass::LoadFileForSIMMGame: Failed to load file for SIMM %u.%u.\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        fSuccess = FALSE;
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;
    
    // We can do our cleanup checks when finished, which is at either file 0, 2, 4, etc
    if (nAdjustedSIMMFileNumber == (m_nSIMMSetStartingFileNumber + (m_nTotalNumberOfSIMMFilesNeeded - m_nNumberOfSIMMsPerSet)))
    {
        CheckForErrorsInTables();

        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;

        OutputDebugString(L"CGameClass::LoadFileForSIMMGame: Loading the SIMM set is complete.\n");
    }

    return fSuccess;
}

BOOL CGameClass::SaveFileForSIMMGame(CFile* SaveFile, UINT16 nSIMMNumber)
{
    CString strInfo;
    UINT8 nAdjustedSIMMFileNumber = nSIMMNumber + m_nSIMMSetStartingFileNumber;

    strInfo.Format(L"CGameClass::SaveFileForSIMMGame: Preparing to save data for game unit number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    // We only save out once to avoid looping
    if (nAdjustedSIMMFileNumber != m_nSIMMSetStartingFileNumber)
    {
        strInfo.Format(L"\tCGameClass::SaveFileForSIMMGame: SIMM %u.%u is already saved.\n", m_nSIMMSetBaseNumber, nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if ((nSIMMNumber % m_nNumberOfSIMMsPerSet) != 0)
    {
        strInfo.Format(L"\tCGameClass::SaveFileForSIMMGame: SIMM %u.%u is a peer SIMM: skipping.\n", m_nSIMMSetBaseNumber, nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // This code handles ROMs as interleaved
    // For example, there is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    strSIMMName1.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
    strSIMMName2.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber + 1);

    if (m_nTotalNumberOfSIMMFilesNeeded == 4)
    {
        strSIMMName3.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber + 2);
        strSIMMName4.Format(L"%s\\%s%u.%u", GetLoadDir(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber + 3);
    }

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
        ((m_nTotalNumberOfSIMMFilesNeeded != 4) || (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary))) &&
        ((m_nTotalNumberOfSIMMFilesNeeded != 4) || (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary))))
    {
        strInfo.Format(L"CGameClass::SaveFileForSIMMGame: Preparing to save data starting with SIMM %u.%u\n", m_nSIMMSetBaseNumber, nAdjustedSIMMFileNumber);
        OutputDebugString(strInfo);
        UINT32 nPaletteSaveCount = 0;

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    CFile* pSIMM1 = (nSIMMSetToUse == 0) ? &fileSIMM1 : &fileSIMM3;
                    CFile* pSIMM2 = (nSIMMSetToUse == 0) ? &fileSIMM2 : &fileSIMM4;

                    pSIMM1->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    pSIMM2->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    nPaletteSaveCount++;

                    // write length will be number of *bytes* in the sequence across 2 files
                    // We use a temp array to minimize the number of write calls we make
                    UINT16 nCurrentWriteLength = (m_nCurrentPaletteSizeInColors / m_nSizeOfColorsInBytes) * 2;

                    BYTE* pbWrite1 = new BYTE[nCurrentWriteLength];
                    BYTE* pbWrite2 = new BYTE[nCurrentWriteLength];

                    if (pbWrite1 && pbWrite2)
                    {
                        for (UINT16 nWordsWritten = 0; nWordsWritten < nCurrentWriteLength; nWordsWritten++)
                        {
                            pbWrite1[nWordsWritten] = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;
                            pbWrite2[nWordsWritten] = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                        }

                        pSIMM1->Write(pbWrite1, nCurrentWriteLength);
                        pSIMM2->Write(pbWrite2, nCurrentWriteLength);
                    }

                    safe_delete_array(pbWrite1);
                    safe_delete_array(pbWrite2);
                }
            }
        }

        strInfo.Format(L"\tCGameClass::SaveFileForSIMMGame: Saved %u palettes\n", nPaletteSaveCount);
        OutputDebugString(strInfo);
    }
    else
    {
        OutputDebugString(L"CGameClass::SaveFileForSIMMGame: Failed to open full SIMM set: skipping save.\n");
    }

    if (fileSIMM1.m_hFile != CFile::hFileNull)
    {
        fileSIMM1.Close();
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull)
    {
        fileSIMM2.Close();
    }

    if (fileSIMM3.m_hFile != CFile::hFileNull)
    {
        fileSIMM3.Close();
    }

    if (fileSIMM4.m_hFile != CFile::hFileNull)
    {
        fileSIMM4.Close();
    }

    return TRUE;
}

UINT32 CGameClass::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    UINT32 nPaletteSaveCount = 0;
    UINT16 nSIMMNumber = m_nSIMMSetStartingFileNumber;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7

    // This handles ROMs as interleaved
    // There is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So we need some shenanigans to generate correct IPS files

    CFile fileIPS1;
    CFile fileIPS2;
    CFile fileIPS3;
    CFile fileIPS4;

    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    strInfo.Format(L"CGameClass::SaveMultiplePatchFiles: Preparing to save IPS patches...\n");
    OutputDebugString(strInfo);

    bool fSetOneOpened = false;
    bool fSetTwoOpened = false;

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                // Open these on a JIT basis so we only create them if needed.
                if ((nSIMMSetToUse == 0) && !fSetOneOpened)
                {
                    CString strIPSName1;
                    CString strIPSName2;

                    strIPSName1.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber);
                    strIPSName2.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 1);

                    if (fileIPS1.Open(strIPSName1, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary) &&
                        fileIPS2.Open(strIPSName2, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                    {
                        fSetOneOpened = true;
                        // Write the headers...
                        LPCSTR szIPSOpener = "PATCH";
                        fileIPS1.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                        fileIPS2.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                    }
                    else
                    {
                        strInfo.Format(L"Failure to open patch file for set containing '%s': aborting.\n", strIPSName1.GetString());
                        OutputDebugString(strInfo.GetString());
                        break;
                    }
                }
                else if ((nSIMMSetToUse == 1) && !fSetTwoOpened)
                {
                    CString strIPSName3;
                    CString strIPSName4;

                    strIPSName3.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 2);
                    strIPSName4.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 3);

                    if (fileIPS3.Open(strIPSName3, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary) &&
                        fileIPS4.Open(strIPSName4, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                    {
                        fSetTwoOpened = true;
                        // Write the headers...
                        LPCSTR szIPSOpener = "PATCH";
                        fileIPS3.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                        fileIPS4.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                    }
                    else
                    {
                        strInfo.Format(L"Failure to open patch file for set containing '%s': aborting.\n", strIPSName3.GetString());
                        OutputDebugString(strInfo.GetString());
                        break;
                    }
                }

                nPaletteSaveCount++;

                CFile* pIPS1 = (nSIMMSetToUse == 0) ? &fileIPS1 : &fileIPS3;
                CFile* pIPS2 = (nSIMMSetToUse == 0) ? &fileIPS2 : &fileIPS4;

                // Location
                BYTE b1 = (m_nCurrentPaletteROMLocation & 0xFF0000) >> 16;
                BYTE b2 = (m_nCurrentPaletteROMLocation & 0xFF00) >> 8;
                BYTE b3 = m_nCurrentPaletteROMLocation & 0xFF;
                pIPS1->Write(&b1, 1);
                pIPS1->Write(&b2, 1);
                pIPS1->Write(&b3, 1);

                pIPS2->Write(&b1, 1);
                pIPS2->Write(&b2, 1);
                pIPS2->Write(&b3, 1);

                // Size
                b1 = ((m_nCurrentPaletteSizeInColors) & 0xFF00) >> 8;
                b2 = (m_nCurrentPaletteSizeInColors) & 0xFF;
                pIPS1->Write(&b1, 1);
                pIPS1->Write(&b2, 1);

                pIPS2->Write(&b1, 1);
                pIPS2->Write(&b2, 1);

                BYTE* pbWrite1 = nullptr, * pbWrite2 = nullptr;

                pbWrite1 = new BYTE[m_nCurrentPaletteSizeInColors];
                pbWrite2 = new BYTE[m_nCurrentPaletteSizeInColors];

                if (pbWrite1 && pbWrite2)
                {
                    for (UINT16 nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSizeInColors; nWordsWritten++)
                    {
                        pbWrite1[nWordsWritten] = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;
                        pbWrite2[nWordsWritten] = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                    }

                    pIPS1->Write(pbWrite1, m_nCurrentPaletteSizeInColors);
                    pIPS2->Write(pbWrite2, m_nCurrentPaletteSizeInColors);
                }

                safe_delete_array(pbWrite1);
                safe_delete_array(pbWrite2);
            }
        }
    }

    strInfo.Format(L"\tCGameClass::SaveMultiplePatchFiles: complete for 0x%x palettes\n", nPaletteSaveCount);
    OutputDebugString(strInfo);

    LPCSTR szIPSCloser = "EOF";
    if (fileIPS1.m_hFile != CFile::hFileNull)
    {
        fileIPS1.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS1.Close();
    }

    if (fileIPS2.m_hFile != CFile::hFileNull)
    {
        fileIPS2.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS2.Close();
    }

    if (fileIPS3.m_hFile != CFile::hFileNull)
    {
        fileIPS3.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS3.Close();
    }

    if (fileIPS4.m_hFile != CFile::hFileNull)
    {
        fileIPS4.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS4.Close();
    }

    return nPaletteSaveCount;
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
                if (_wcsicmp(ppCRC32ValueSets[nIndex].szROMFileName, GetROMFileName()) == 0)
                {
                    break;
                }
            }
            else if (_wcsicmp(ppCRC32ValueSets[nIndex].szROMFileName, GetROMFileName()) == 0)
            {
                // We've got a matching name: it's possible that we're dealing with a modified ROM.
                // Set this as a fallback option.
                m_pCRC32SpecificData = &ppCRC32ValueSets[nIndex];
            }
        }
    }
}
