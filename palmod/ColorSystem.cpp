#include "stdafx.h"
#include "game\GameDef.h"
#include "ColorSystem.h"

double LimitHLS(double a) { return ((a > 1.0) ? 1.0 : ((a < 0.0) ? 0.0 : a)); };
double SubHLS(double a) { while (a >= 1.0) { a -= 1.0; } return a; };
UINT8 LimitRGB(int Val) { return (UINT8)((Val < 0) ? 0 : ((Val > 255) ? 255 : Val)); };

namespace ColorSystem
{
    AlphaMode CurrAlphaMode = AlphaMode::Unknown;

    // These are the multipliers that can be used for color formats
    // so long as they don't use color lookup tables (CLUTs)
    const double k_nRGBPlaneMulForRGB111 = 255;
    const double k_nRGBPlaneMulForRGB333 = 36.428;
    const double k_nRGBPlaneMulForRGB444 = 17.0;
    const double k_nRGBPlaneMulForRGB555 = 8.225;
    const double k_nRGBPlaneMulForRGB777 = 2;
    const double k_nRGBPlaneMulForRGB888 = 1;

    // These are the number of colors available for each color format
    const int k_nRGBPlaneAmtForRGB111 = 1;
    const int k_nRGBPlaneAmtForRGB333 = 7;
    const int k_nRGBPlaneAmtForRGB444 = 15;
    const int k_nRGBPlaneAmtForRGB555 = 31;
    // The 64 color NeoGeo color table is split bright/dark, but we only use bright
    const int k_nRGBPlaneAmtForNeoGeo = 31;
    const int k_nRGBPlaneAmtForHalfAlpha = 0x80;
    const int k_nRGBPlaneAmtForRGB888 = 255;

    UINT16 SWAP_16(UINT16 palv)
    {
        UINT16 aux = 0;
        aux |= palv << 8;
        aux |= palv >> 8;
        return aux;
    }

    UINT8 GetCbForColMode(ColMode colorMode)
    {
        switch (colorMode)
        {
        case ColMode::COLMODE_BGR333:
        case ColMode::COLMODE_RBG333:
        case ColMode::COLMODE_RGB333:

        case ColMode::COLMODE_BGR444:
        case ColMode::COLMODE_BRG444:
        case ColMode::COLMODE_RBG444:
        case ColMode::COLMODE_RGB444_BE:
        case ColMode::COLMODE_RGB444_LE:

        case ColMode::COLMODE_BGR555_LE:
        case ColMode::COLMODE_RGB555_LE:
        case ColMode::COLMODE_RGB555_BE:
        case ColMode::COLMODE_RGB555_SHARP:

        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_RGB666_NEOGEO:
            return 2;

        case ColMode::COLMODE_BGR888:
        case ColMode::COLMODE_BRG888:
        case ColMode::COLMODE_GRB888:
        case ColMode::COLMODE_RGB888:
            return 3;

        case ColMode::COLMODE_RGBA8887:
        case ColMode::COLMODE_RGBA8881:
        case ColMode::COLMODE_RGBA8881_32STEPS:
        case ColMode::COLMODE_RGBA8888:
        case ColMode::COLMODE_BGRA8888:
            return 4;
        }

        return 2;
    }

    std::map<LPCSTR, ColMode> rgColorNameToFormatMap =
    {
        { "BGR555LE", ColMode::COLMODE_BGR555_LE },             // BGR555 little endian (GBA)
        { "RGB444BE", ColMode::COLMODE_RGB444_BE },             // RGB444 big endian (CPS1/2)
        { "RGB444LE", ColMode::COLMODE_RGB444_LE },             // RGB444 little endian (SF 30th steam)
        { "RGB555LE", ColMode::COLMODE_RGB555_LE },             // RGB555 little endian (CPS3)
        { "RGB555BE", ColMode::COLMODE_RGB555_BE },             // RGB555 big endian 
        { "RGB666", ColMode::COLMODE_RGB666_NEOGEO },           // RGB666 using the NeoGeo color table
        { "RGB333", ColMode::COLMODE_RGB333 },                  // RGB333 for Sega Genesis/MegaDrive
        { "RGBA8887", ColMode::COLMODE_RGBA8887 },              // 32bit color half alpha (guilty gear)
        { "RGB555Sharp", ColMode::COLMODE_RGB555_SHARP },       // RGB555 using the sharp x68000 color table
        { "RGBA8881", ColMode::COLMODE_RGBA8881 },              // 32bit color 1 bit alpha
        { "RGBA8888", ColMode::COLMODE_RGBA8888 },              // 32bit color (uniclr. and modern computing)
        { "RGB888", ColMode::COLMODE_RGB888 },                  // 24bit
        { "BGR888", ColMode::COLMODE_BGR888 },                  // 24bit
        { "RGBA8881_32", ColMode::COLMODE_RGBA8881_32STEPS },   // MBAACC: 32 bit color, except only 32 steps
        { "GRB555LE", ColMode::COLMODE_GRB555_LE },             // GRB555 little endian
        { "BGRA8888", ColMode::COLMODE_BGRA8888 },              // 32bit color (arcana blood)
        { "BGR555BE", ColMode::COLMODE_BGR555_BE },             // BGR555 big endian: Motorola 68000 games
        { "GRB888", ColMode::COLMODE_GRB888 },                  // 24bit
        // This section added to enable user exploration in dev mode: not needed directly for any games yet
        { "BGR333", ColMode::COLMODE_BGR333 },
        { "RGB333", ColMode::COLMODE_RBG333 },
        { "BGR444", ColMode::COLMODE_BGR444 },
        { "BRG444", ColMode::COLMODE_BRG444 },
        { "RGB444", ColMode::COLMODE_RBG444 },
        { "BRG888", ColMode::COLMODE_BRG888 }
    };

    bool GetColorFormatForColorFormatString(LPCSTR paszColorString, ColMode& cmColorMode)
    {
        bool fFoundMatch = false;

        for (const auto& [key, value] : rgColorNameToFormatMap)
        {
            if (_stricmp(paszColorString, key) == 0)
            {
                cmColorMode = value;
                fFoundMatch = true;
                break;
            }
        }

        return fFoundMatch;
    }

    LPCSTR GetColorFormatStringForColorFormat(ColMode cmColorMode)
    {
        for (const auto& [value, key] : rgColorNameToFormatMap)
        {
            if (cmColorMode == key)
            {
                return value;
            }
        }

        return nullptr;
    }

    std::map<LPCSTR, AlphaMode> rgAlphaNameToModeMap =
    {
        { "None", AlphaMode::GameDoesNotUseAlpha },
        { "Fixed", AlphaMode::GameUsesFixedAlpha }
        // We deliberately do not expose the Variable or Chaotic alpha types
    };

    bool GetAlphaModeForAlphaModeString(LPCSTR paszAlphaString, AlphaMode& amAlphaMode)
    {
        bool fFoundMatch = false;

        for (const auto& [key, value] : rgAlphaNameToModeMap)
        {
            if (_stricmp(paszAlphaString, key) == 0)
            {
                amAlphaMode = value;
                fFoundMatch = true;
                break;
            }
        }

        return fFoundMatch;
    }

    LPCSTR GetAlphaModeStringForAlphaMode(AlphaMode amAlphaMode)
    {
        for (const auto& [value, key] : rgAlphaNameToModeMap)
        {
            if (amAlphaMode == key)
            {
                return value;
            }
        }

        return nullptr;
    }

    ColMode DecodeColorFlag(UINT8 uPossibleColorFlag)
    {
        ColMode colorMode = ColMode::COLMODE_RGB444_BE;

        if ((uPossibleColorFlag >= k_nASCIICharacterOffset) &&
            (uPossibleColorFlag < k_nASCIIMaxValue)) // end of printable ascii table
        {
            UINT8 nAdjustedValue = (uPossibleColorFlag - k_nASCIICharacterOffset);

            if (nAdjustedValue < (UINT8)ColMode::COLMODE_LAST)
            {
                colorMode = (ColMode)nAdjustedValue;
            }
        }

        return colorMode;
    }

    UINT8 GetCbForColorForGameFlag(UINT8 uGameFlag, UINT8 uPossibleColorFlag)
    {
        switch (uGameFlag)
        {
        case DBFCI_A:
        case GGXXACR_S:
        case GGXXACR_P:
        case MBAACC_S:
        case UNICLR_A:
            return 4;
        case DUMMY_RGB888:
        case DUMMY_BGR888:
            return 3;
        default:
            if (uGameFlag == k_nRawColorStringOverflowIndicator)
            {
                ColMode colorMode = DecodeColorFlag(uPossibleColorFlag);

                return GetCbForColMode(colorMode);
            }

            return 2;
        }
    }

    int GetPlaneAmtForColor(ColMode colorMode, ColFlag Flag)
    {
        switch (colorMode)
        {
        case ColMode::COLMODE_BGR333:
        case ColMode::COLMODE_RBG333:
        case ColMode::COLMODE_RGB333:
            return k_nRGBPlaneAmtForRGB333;

        case ColMode::COLMODE_BGR444:
        case ColMode::COLMODE_BRG444:
        case ColMode::COLMODE_RBG444:
        case ColMode::COLMODE_RGB444_BE:
        case ColMode::COLMODE_RGB444_LE:
            return k_nRGBPlaneAmtForRGB444;

        case ColMode::COLMODE_BGR555_LE:
        case ColMode::COLMODE_RGB555_LE:
        case ColMode::COLMODE_RGB555_BE:
        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_RGB555_SHARP:
            return k_nRGBPlaneAmtForRGB555;

        case ColMode::COLMODE_RGB666_NEOGEO:
            return k_nRGBPlaneAmtForNeoGeo;

        case ColMode::COLMODE_RGBA8881:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneAmtForRGB111;
            }
            else
            {
                return k_nRGBPlaneAmtForRGB888;
            }
        case ColMode::COLMODE_RGBA8881_32STEPS:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneAmtForRGB111;
            }
            else
            {
                return k_nRGBPlaneAmtForRGB555;
            }
        case ColMode::COLMODE_RGBA8887:
            if (Flag == ColFlag::COL_A)
            {
                return k_nRGBPlaneAmtForHalfAlpha;
            }
            else
            {
                return k_nRGBPlaneAmtForRGB888;
            }

        case ColMode::COLMODE_RGBA8888:
        case ColMode::COLMODE_BGRA8888:
        case ColMode::COLMODE_BGR888:
        case ColMode::COLMODE_BRG888:
        case ColMode::COLMODE_GRB888:
        case ColMode::COLMODE_RGB888:
            return k_nRGBPlaneAmtForRGB888;
        default:
            return 0;
        }
    }

    UINT32 CONV_BGR333_32(UINT16 inCol)
    {
        // xxxxRRRx GGGxBBBx, where x is 0
        // conversion code mostly by sega16
        // see also https://segaretro.org/Sega_Mega_Drive/Palettes_and_CRAM
        UINT8* palP = (UINT8*)&inCol;
        UINT8 r = (*palP++ & 14) * 18;
        UINT8 g = ((*palP & 240) >> 5) * 36;
        UINT8 b = (*palP & 14) * 18;

        return (0xFF << 24) | (b << 16) | (g << 8) | r;
    }

    UINT16 CONV_32_BGR333(UINT32 inCol)
    {
        UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT16 auxr = ((inCol & 0x000000FF));

        auxr = (auxr + 18) / 36;
        auxg = (auxg + 18) / 36;
        auxb = (auxb + 18) / 36;

        return (auxr << 1) | (auxb << 9) | (auxg << 13);
    }

    UINT32 CONV_RBG333_32(UINT16 inCol)
    {
        // xxxxGGGx BBBxRRRx, where x is 0
        // conversion code mostly by sega16
        // see also https://segaretro.org/Sega_Mega_Drive/Palettes_and_CRAM
        UINT8* palP = (UINT8*)&inCol;
        UINT8 g = (*palP++ & 14) * 18;
        UINT8 b = ((*palP & 240) >> 5) * 36;
        UINT8 r = (*palP & 14) * 18;

        return (0xFF << 24) | (b << 16) | (g << 8) | r;
    }

    UINT16 CONV_32_RBG333(UINT32 inCol)
    {
        UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT16 auxr = ((inCol & 0x000000FF));

        auxr = (auxr + 18) / 36;
        auxg = (auxg + 18) / 36;
        auxb = (auxb + 18) / 36;

        return (auxg << 1) | (auxr << 9) | (auxb << 13);
    }
    UINT32 CONV_RGB333_32(UINT16 inCol)
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

    UINT16 CONV_32_RGB333(UINT32 inCol)
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

    UINT32 CONV_BGR555LE_32(UINT16 inCol)
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

    UINT16 CONV_32_BGR555LE(UINT32 inCol)
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


    UINT32 CONV_BGR555BE_32(UINT16 inCol)
    {
        UINT16 uSwappedCol = _byteswap_ushort(inCol);

        return CONV_BGR555LE_32(uSwappedCol);
    }

    UINT16 CONV_32_BGR555BE(UINT32 inCol)
    {
        return _byteswap_ushort(CONV_32_BGR555LE(inCol));
    }

    UINT32 CONV_BGR444_32(UINT16 inCol)
    {
        UINT32 auxr = (inCol & 0xF);
        UINT32 auxg = (inCol & 0xF0) >> 4;
        UINT32 auxb = (inCol & 0xF00) >> 8;
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

    UINT16 CONV_32_BGR444(UINT32 inCol)
    {
        UINT16 auxa = ((inCol & 0xFF000000) >> 24);
        UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT16 auxr = ((inCol & 0x000000FF));

        auxr = (UINT16)round(auxr / 17.0);
        auxg = (UINT16)round(auxg / 17.0);
        auxb = (UINT16)round(auxb / 17.0);

        auxb = auxb << 8;
        auxg = auxg << 4;
        //auxr = auxr;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (UINT16)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    UINT32 CONV_BRG444_32(UINT16 inCol)
    {
        UINT32 auxg = (inCol & 0xF);
        UINT32 auxr = (inCol & 0xF0) >> 4;
        UINT32 auxb = (inCol & 0xF00) >> 8;
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

    UINT16 CONV_32_BRG444(UINT32 inCol)
    {
        UINT16 auxa = ((inCol & 0xFF000000) >> 24);
        UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT16 auxr = ((inCol & 0x000000FF));

        auxr = (UINT16)round(auxr / 17.0);
        auxg = (UINT16)round(auxg / 17.0);
        auxb = (UINT16)round(auxb / 17.0);

        //auxb = auxb;
        auxg = auxg << 8;
        auxr = auxr << 4;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (UINT16)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    UINT32 CONV_RBG444_32(UINT16 inCol)
    {
        UINT32 auxg = (inCol & 0xF);
        UINT32 auxb = (inCol & 0xF0) >> 4;
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

    UINT16 CONV_32_RBG444(UINT32 inCol)
    {
        UINT16 auxa = ((inCol & 0xFF000000) >> 24);
        UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT16 auxr = ((inCol & 0x000000FF));

        auxr = (UINT16)round(auxr / 17.0);
        auxg = (UINT16)round(auxg / 17.0);
        auxb = (UINT16)round(auxb / 17.0);

        auxb = auxb << 4;
        //auxg = auxg;
        auxr = auxr << 8;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (UINT16)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    UINT32 CONV_RGB444BE_32(UINT16 inCol)
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

    UINT16 CONV_32_RGB444BE(UINT32 inCol)
    {
        UINT16 auxa = ((inCol & 0xFF000000) >> 24);
        UINT16 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT16 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT16 auxr = ((inCol & 0x000000FF));

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
            auxa = (UINT16)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    UINT32 CONV_RGB444LE_32(UINT16 inCol)
    {
        UINT16 uSwappedCol = _byteswap_ushort(inCol);

        return CONV_RGB444BE_32(uSwappedCol);
    }

    UINT16 CONV_32_RGB444LE(UINT32 inCol)
    {
        return _byteswap_ushort(CONV_32_RGB444BE(inCol));
    }

    UINT32 CONV_RGB555LE_32(UINT16 inCol)
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

    UINT16 CONV_32_RGB555LE(UINT32 inCol)
    {
        UINT16 auxb = (inCol & 0x00FF0000) >> 16;
        UINT16 auxg = (inCol & 0x0000FF00) >> 8;
        UINT16 auxr = (inCol & 0x000000FF);

        auxb = (UINT16)round(auxb / 8.0);
        auxg = (UINT16)round(auxg / 8.0);
        auxr = (UINT16)round(auxr / 8.0);

        //auxr = auxr; no-op
        auxg = auxg << 5;
        auxb = auxb << 10;

        return SWAP_16(auxb | auxg | auxr);
    }

    UINT32 CONV_GRB555LE_32(UINT16 inCol)
    {
        UINT16 swapped = SWAP_16(inCol);

        UINT32 auxb = (swapped & 0x7C00) >> 10;
        UINT32 auxr = (swapped & 0x3E0) >> 5;
        UINT32 auxg = (swapped & 0x1F);
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

    UINT16 CONV_32_GRB555LE(UINT32 inCol)
    {
        UINT16 auxb = (inCol & 0x00FF0000) >> 16;
        UINT16 auxg = (inCol & 0x0000FF00) >> 8;
        UINT16 auxr = (inCol & 0x000000FF);

        auxb = (UINT16)round(auxb / 8.0);
        auxg = (UINT16)round(auxg / 8.0);
        auxr = (UINT16)round(auxr / 8.0);

        auxr = auxr << 5;
        auxg = auxg; // no-op
        auxb = auxb << 10;

        return SWAP_16(auxb | auxg | auxr);
    }

    UINT32 CONV_RGB555BE_32(UINT16 inCol)
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

    UINT16 CONV_32_RGB555BE(UINT32 inCol)
    {
        UINT16 auxa = (inCol & 0xFF000000) >> 24;
        UINT16 auxb = (inCol & 0x00FF0000) >> 16;
        UINT16 auxg = (inCol & 0x0000FF00) >> 8;
        UINT16 auxr = (inCol & 0x000000FF);

        auxb = (UINT16)round(auxb / 8.0);
        auxg = (UINT16)round(auxg / 8.0);
        auxr = (UINT16)round(auxr / 8.0);

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

    UINT32 CONV_RGB666NeoGeo_32(UINT16 nColorData)
    {
        UINT8 darkbit = (nColorData >> 0xf) & 0x01;
        UINT8 red1 = ((nColorData >> 0xe) & 0x01) * 2;
        UINT8 redm = ((nColorData >> 0x8) & 0x0f) * 4;
        UINT8 green1 = ((nColorData >> 0xd) & 0x01) * 2;
        UINT8 greenm = ((nColorData >> 0x4) & 0x0f) * 4;
        UINT8 blue1 = ((nColorData >> 0xc) & 0x01) * 2;
        UINT8 bluem = ((nColorData >> 0x0) & 0x0f) * 4;
        UINT32 auxa = 0xFF;

        UINT8 blue = NGColorVals[((blue1 + bluem) - darkbit) + 1];
        UINT8 green = NGColorVals[((green1 + greenm) - darkbit) + 1];
        UINT8 red = NGColorVals[((red1 + redm) - darkbit) + 1];

        UINT32 color = (auxa << 24) | (blue << 16) | (green << 8) | (red);

        return color;
    }

    UINT16 CONV_32_RGB666NeoGeo(UINT32 inCol)
    {
        UINT8 auxb = ((inCol & 0x00FF0000) >> 16);
        UINT8 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT8 auxr = ((inCol & 0x000000FF));

        UINT8 red = Convert32ToNEOGEO(auxr);
        UINT8 green = Convert32ToNEOGEO(auxg);
        UINT8 blue = Convert32ToNEOGEO(auxb);

        UINT16 darkbit = (IsNEOGEOColorDark(red, green, blue) ? 0x1 : 0x0) << 0xf;

        UINT16 red1 = ((red / 2) & 0x1) << 0xe;
        UINT16 redMain = ((red / 4) & 0xf) << 0x8;
        UINT16 green1 = ((green / 2) & 0x1) << 0xd;
        UINT16 greenMain = ((green / 4) & 0xf) << 0x4;
        UINT16 blue1 = ((blue / 2) & 0x1) << 0xc;
        UINT16 blueMain = ((blue / 4) & 0xf) << 0x0;

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

    UINT32 CONV_RGB555Sharp_32(UINT16 nColorData)
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

    UINT16 CONV_32_RGB555Sharp(UINT32 inCol)
    {
        UINT8 auxr = ((inCol & 0x00FF0000) >> 16);
        UINT8 auxg = ((inCol & 0x0000FF00) >> 8);
        UINT8 auxb = ((inCol & 0x000000FF));

        UINT8 red = Convert32ToSharpRGB(auxr);
        UINT8 green = Convert32ToSharpRGB(auxg);
        UINT8 blue = Convert32ToSharpRGB(auxb);

        UINT16 red1 = (red & 0x01) << 0x1;
        UINT16 redMain = (red & 0x1e) << 0x3;
        UINT16 green1 = (green & 0x01) << 0x2;
        UINT16 greenMain = (green & 0x1e) << 0x7;
        UINT16 blue1 = (blue & 0x01) << 0x3;
        UINT16 blueMain = (blue & 0x1e) << 0xb;

        UINT16 outColor = (red1 | redMain | green1 | greenMain | blue1 | blueMain);

        return outColor;
    }

    UINT32 CONV_BGR888_32(UINT32 inCol)
    {
        UINT32 auxr = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxb = (inCol & 0x000000FF);
        UINT32 auxa = 0xFF;

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_32_BGR888(UINT32 inCol)
    {
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);

        auxr = auxr << 16;
        auxg = auxg << 8;
        auxb = auxb;

        return (auxr | auxg | auxb);
    }

    UINT32 CONV_32_BRG888(UINT32 inCol)
    {
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);

        auxg = auxg << 16;
        auxr = auxr << 8;
        auxb = auxb;

        return (auxr | auxg | auxb);
    }

    UINT32 CONV_BRG888_32(UINT32 inCol)
    {
        UINT32 auxg = (inCol & 0x00FF0000) >> 16;
        UINT32 auxr = (inCol & 0x0000FF00) >> 8;
        UINT32 auxb = (inCol & 0x000000FF);
        UINT32 auxa = 0xFF;

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_GRB888_32(UINT32 inCol)
    {
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxr = (inCol & 0x0000FF00) >> 8;
        UINT32 auxg = (inCol & 0x000000FF);
        UINT32 auxa = 0xFF;

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_32_GRB888(UINT32 inCol)
    {
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);

        auxg = auxg;
        auxr = auxr << 8;
        auxb = auxb << 16;

        return (auxr | auxg | auxb);
    }

    UINT32 CONV_RGB888_32(UINT32 inCol)
    {
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);
        UINT32 auxa = 0xFF;

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_32_RGB888(UINT32 inCol)
    {
        UINT32 auxa = 0xFF;
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;

        return (auxb | auxg | auxr);
    }

    UINT32 CONV_RGBA8881_32(UINT32 inCol)
    {
        UINT32 auxb = GetBValue(inCol);
        UINT32 auxg = GetGValue(inCol);
        UINT32 auxr = GetRValue(inCol);
        UINT32 auxa = GetAValue(inCol) * 0xFF;

        if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
        {
            auxa = 0xFF;
        }

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_32_RGBA8881(UINT32 inCol)
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

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_RGBA8887_32(UINT32 inCol)
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

    UINT32 CONV_32_RGBA8887(UINT32 inCol)
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
            // We want half alpha
            auxa = (UINT32)floor((auxa + 1) / 2.0);
        }

        //auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_RGBA8888_32(UINT32 inCol)
    {
        UINT32 auxb = GetBValue(inCol);
        UINT32 auxg = GetGValue(inCol);
        UINT32 auxr = GetRValue(inCol);
        UINT32 auxa = GetAValue(inCol);

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

    UINT32 CONV_32_RGBA8888(UINT32 inCol)
    {
        UINT32 auxa = (inCol & 0xFF000000) >> 24;
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);

        if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
        {
            auxa = 0xff;
        }

        //auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    UINT32 CONV_BGRA8888_32(UINT32 inCol)
    {
        // B<->R
        UINT32 auxb = GetRValue(inCol);
        UINT32 auxg = GetGValue(inCol);
        UINT32 auxr = GetBValue(inCol);
        UINT32 auxa = GetAValue(inCol);

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

    UINT32 CONV_32_BGRA8888(UINT32 inCol)
    {
        UINT32 auxa = (inCol & 0xFF000000) >> 24;
        UINT32 auxb = (inCol & 0x00FF0000) >> 16;
        UINT32 auxg = (inCol & 0x0000FF00) >> 8;
        UINT32 auxr = (inCol & 0x000000FF);

        if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
        {
            auxa = 0xff;
        }

        //auxb = auxb;
        auxg = auxg << 8;
        auxr = auxr << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    int ROUND_1(int rVal)
    {
        return rVal;
    };

    int ROUND_8(int rVal)
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

    int ROUND_17(int rVal)
    {
        int outVal = (int)min(0xff, (round(rVal / 17.0)) * 17);

        return outVal;
    }

    int ROUND_32(int rVal)
    {
        int outVal = (int)min(0xff, (round(rVal / 32.0)) * 32);

        return outVal;
    }

    int GetColorStepFor8BitValue_1Step(int nColorValue)
    {
        return (nColorValue / 255);
    }

    int Get8BitValueForColorStep_1Step(int nColorStep)
    {
        return (nColorStep * 255);
    }

    int GetColorStepFor8BitValue_8Steps(int nColorValue)
    {
        int nStep = (int)round(nColorValue / k_nRGBPlaneMulForRGB333);

        return nStep;
    }

    int Get8BitValueForColorStep_8Steps(int nColorStep)
    {
        nColorStep = min(nColorStep, k_nRGBPlaneAmtForRGB333);
        nColorStep = max(nColorStep, -k_nRGBPlaneAmtForRGB333);

        // establish about where we should be
        int nColorValue = ROUND_32((int)round(k_nRGBPlaneMulForRGB333 * (double)nColorStep));

        return nColorValue;
    }

    int GetColorStepFor8BitValue_16Steps(int nColorValue)
    {
        int nStep = (int)round(nColorValue / k_nRGBPlaneMulForRGB444);

        return nStep;
    }

    int Get8BitValueForColorStep_16Steps(int nColorStep)
    {
        nColorStep = min(nColorStep, k_nRGBPlaneAmtForRGB444);
        nColorStep = max(nColorStep, -k_nRGBPlaneAmtForRGB444);

        // establish about where we should be
        int nColorValue = ROUND_17((int)round(k_nRGBPlaneMulForRGB444 * (double)nColorStep));

        return nColorValue;
    }

    int GetColorStepFor8BitValue_32Steps(int nColorValue)
    {
        int nStep = (int)round(nColorValue / k_nRGBPlaneMulForRGB555);

        return nStep;
    }

    int Get8BitValueForColorStep_32Steps(int nColorStep)
    {
        nColorStep = min(nColorStep, k_nRGBPlaneAmtForRGB555);
        nColorStep = max(nColorStep, -k_nRGBPlaneAmtForRGB555);

        // establish about where we should be
        int nColorValue = ROUND_8((int)round(k_nRGBPlaneMulForRGB555 * (double)nColorStep));

        return nColorValue;
    }

    int GetColorStepFor8BitValue_32Steps_SharpCLUT(int nColorValue)
    {
        bool fIsNegative = (nColorValue < 0);
        int nStep = Convert32ToSharpRGB(abs(nColorValue));

        return nStep * (fIsNegative ? -1 : 1);
    }

    int Get8BitValueForColorStep_32Steps_SharpCLUT(int nColorStep)
    {
        bool fIsNegative = (nColorStep < 0);

        nColorStep = min(abs(nColorStep), k_nRGBPlaneAmtForRGB555);

        return SharpRGBColorVals[nColorStep] * (fIsNegative ? -1 : 1);
    }

    int GetColorStepFor8BitValue_NeoGeoCLUT(int nColorValue)
    {
        bool fIsNegative = (nColorValue < 0);
        UINT8 nColorIndex = 1;

        for (; nColorIndex < ARRAYSIZE(NGColorVals); nColorIndex += 2)
        {
            if (NGColorVals[nColorIndex] >= abs(nColorValue))
            {
                break;
            }
        }

        nColorIndex = min(nColorIndex, ARRAYSIZE(NGColorVals));
        nColorIndex = (nColorIndex / 2);

        return nColorIndex * (fIsNegative ? -1 : 1);
    }

    int Get8BitValueForColorStep_NeoGeoCLUT(int nColorStep)
    {
        bool fIsNegative = (nColorStep < 0);

        // We step by 2 in the NeoGeo color table
        int nAdjustedColorStep = (abs(nColorStep) + 1) * 2;
        nAdjustedColorStep = min(nAdjustedColorStep, ARRAYSIZE(NGColorVals));
        nAdjustedColorStep = max(0, nAdjustedColorStep - 1);

        // the neogeo color table is 32 dark 32 bright colors interleaved
        // we only ever use brights, so it's just N*2
        int nColorValue = NGColorVals[nAdjustedColorStep];

        return nColorValue * (fIsNegative ? -1 : 1);
    }

    int GetColorStepFor8BitValue_HalfAlpha(int nColorValue)
    {
        // 0...0x80
        int nAdjustmentValue = (nColorValue < 0) ? -1 : 1;
    
        if ((nColorValue % 2) == 1)
        {
            nColorValue += nAdjustmentValue;
        }

        int nColorStep = nColorValue  / 2;

        return nColorStep;
    }

    int Get8BitValueForColorStep_HalfAlpha(int nColorStep)
    {
        int nAdjustmentValue = (nColorStep < 0) ? 1 : -1;
        int nColorValue = nColorStep * 2;

        if (nColorStep)
        {
            nColorValue += nAdjustmentValue;
        }

        return nColorValue;
    }

    int GetColorStepFor8BitValue_256Steps(int nColorValue)
    {
        return nColorValue; 
    };

    int Get8BitValueForColorStep_256Steps(int nColorStep)
    {
        return nColorStep;
    };

    int GetNearestLegalColorValue_RGB111(int nColorValue)
    {
        return (nColorValue ? 255 : 0);
    }

    int GetNearestLegalColorValue_RGB333(int nColorValue)
    {
        return ROUND_32(nColorValue);
    }

    int GetNearestLegalColorValue_RGB444(int nColorValue)
    {
        return ROUND_17(nColorValue);
    }

    int GetNearestLegalColorValue_RGB555(int nColorValue)
    {
        return ROUND_8(nColorValue);
    }

    int GetNearestLegalColorValue_SharpCLUT(int nColorValue)
    {
        bool fIsNegative = (nColorValue < 0);
        int nConvertedVal = Convert32ToSharpRGB(abs(nColorValue));

        nConvertedVal = Get8BitValueForColorStep_32Steps_SharpCLUT(nConvertedVal);

        return nConvertedVal * (fIsNegative ? -1 : 1);
    }

    int GetNearestLegalColorValue_NeoGeoCLUT(int nColorValue)
    {
        bool fIsNegative = (nColorValue < 0);
        UINT8 nColorIndex = 1;

        for (; nColorIndex < ARRAYSIZE(NGColorVals); nColorIndex += 2)
        {
            if (NGColorVals[nColorIndex] >= abs(nColorValue))
            {
                break;
            }
        }

        int nConvertedVal = NGColorVals[nColorIndex];
        return nConvertedVal * (fIsNegative ? -1 : 1);
    }
    
    int GetNearestLegalColorValue_ARGB7888(int nColorValue)
    {
        int nAdjustmentValue = (nColorValue < 0) ? -1 : 1;

        if ((nColorValue % 2) == 1)
        {
            nColorValue += nAdjustmentValue;

            if (abs(nColorValue) > 255)
            {
                nColorValue = min(nColorValue, 255);
                nColorValue = max(nColorValue, -255);
            }
        }

        return nColorValue;
    }

    int ValidateColorStep_RGB333(int nColorStep)
    {
        nColorStep = max(0, nColorStep);
        return min(nColorStep, k_nRGBPlaneAmtForRGB333);
    }

    int ValidateColorStep_RGB444(int nColorStep)
    {
        nColorStep = max(0, nColorStep);
        return min(nColorStep, k_nRGBPlaneAmtForRGB444);
    }

    int ValidateColorStep_RGB555(int nColorStep)
    {
        nColorStep = max(0, nColorStep);
        return min(nColorStep, k_nRGBPlaneAmtForRGB555);
    }

    int ValidateColorStep_RGB888(int nColorStep)
    {
        nColorStep = max(0, nColorStep);
        return min(nColorStep, k_nRGBPlaneAmtForRGB888);
    }

    int GetNearestLegalColorValue_RGB888(int nColorValue)
    {
        return nColorValue;
    };

    AlphaMode GetAlphaMode()
    {
        return CurrAlphaMode;
    };

    void SetAlphaMode(AlphaMode NewMode)
    {
        CurrAlphaMode = NewMode;
    };
}