#include "stdafx.h"
#include "game\GameDef.h"
#include "ColorSystem.h"
#include "Game\ColorScale.h"

double LimitHLS(double a) { return ((a > 1.0) ? 1.0 : ((a < 0.0) ? 0.0 : a)); };
double SubHLS(double a) { while (a >= 1.0) { a -= 1.0; } return a; };
uint8_t LimitRGB(int Val) { return (uint8_t)((Val < 0) ? 0 : ((Val > 255) ? 255 : Val)); };

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

    uint16_t SWAP_16(uint16_t palv)
    {
        uint16_t aux = 0;
        aux |= palv << 8;
        aux |= palv >> 8;
        return aux;
    }

    uint8_t GetCbForColMode(ColMode colorMode)
    {
        switch (colorMode)
        {
        default:
            OutputDebugString(L"ERROR: Unsupported color mode: this will not work correctly.\r\n");
            __fallthrough;
        case ColMode::COLMODE_BGR333:
        case ColMode::COLMODE_RBG333:
        case ColMode::COLMODE_RGB333:

        case ColMode::COLMODE_BGR444:
        case ColMode::COLMODE_BRG444:
        case ColMode::COLMODE_RBG444:
        case ColMode::COLMODE_RGB444_BE:
        case ColMode::COLMODE_RGB444_LE:

        case ColMode::COLMODE_BGR555_LE:
        case ColMode::COLMODE_BGR555_BE:
        case ColMode::COLMODE_xBGR555_LE:
        case ColMode::COLMODE_RGB555_LE:
        case ColMode::COLMODE_RGB555_BE:
        case ColMode::COLMODE_RGB555_SHARP:

        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_BRG555_LE:
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
        case ColMode::COLMODE_RGBA8888_BE:
        case ColMode::COLMODE_RGBA8888_LE:
        case ColMode::COLMODE_BGRA8888_BE:
        case ColMode::COLMODE_BGRA8888_LE:
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
        { "RGBA8888", ColMode::COLMODE_RGBA8888_LE },           // 32bit color (uniclr. and modern computing)
        { "RGBA8888_BE", ColMode::COLMODE_RGBA8888_BE },        // 32bit color (ps3)
        { "RGB888", ColMode::COLMODE_RGB888 },                  // 24bit
        { "BGR888", ColMode::COLMODE_BGR888 },                  // 24bit
        { "RGBA8881_32", ColMode::COLMODE_RGBA8881_32STEPS },   // MBAACC: 32 bit color, except only 32 steps
        { "GRB555LE", ColMode::COLMODE_GRB555_LE },             // GRB555 little endian
        { "BGRA8888BE", ColMode::COLMODE_BGRA8888_BE },         // 32bit color (ps3)
        { "BGRA8888", ColMode::COLMODE_BGRA8888_LE },           // 32bit color (arcana blood)
        { "BGR555BE", ColMode::COLMODE_BGR555_BE },             // BGR555 big endian: Motorola 68000 games
        { "GRB888", ColMode::COLMODE_GRB888 },                  // 24bit
        // This section added to enable user exploration in dev mode: not needed directly for any games yet
        { "BGR333", ColMode::COLMODE_BGR333 },
        { "RGB333", ColMode::COLMODE_RBG333 },
        { "BGR444", ColMode::COLMODE_BGR444 },
        { "BRG444", ColMode::COLMODE_BRG444 },
        { "RGB444", ColMode::COLMODE_RBG444 },
        { "BRG888", ColMode::COLMODE_BRG888 },
        { "xBGR555LE", ColMode::COLMODE_xBGR555_LE },            // Different packing used by Asura Buster / Fuuki
        { "BRG555LE", ColMode::COLMODE_BRG555_LE },              // BRG555 little endian, used by Fists of Fury
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

    ColMode DecodeColorFlag(uint8_t uPossibleColorFlag)
    {
        ColMode colorMode = ColMode::COLMODE_RGB444_BE;

        if ((uPossibleColorFlag >= k_nASCIICharacterOffset) &&
            (uPossibleColorFlag < k_nASCIIMaxValue)) // end of printable ascii table
        {
            uint8_t nAdjustedValue = (uPossibleColorFlag - k_nASCIICharacterOffset);

            if (nAdjustedValue < (uint8_t)ColMode::COLMODE_LAST)
            {
                colorMode = (ColMode)nAdjustedValue;
            }
        }

        return colorMode;
    }

    uint8_t GetCbForColorForGameFlag(uint8_t uGameFlag, uint8_t uPossibleColorFlag)
    {
        switch (uGameFlag)
        {
        //case DBFCI_A:
        //case GGXXACR_S:
        //case GGXXACR_P:
        //case MBAACC_S:
        //case UNICLR_A:
        //    return 4;
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
        case ColMode::COLMODE_BGR555_BE:
        case ColMode::COLMODE_xBGR555_LE:
        case ColMode::COLMODE_RGB555_LE:
        case ColMode::COLMODE_RGB555_BE:
        case ColMode::COLMODE_GRB555_LE:
        case ColMode::COLMODE_BRG555_LE:
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

        case ColMode::COLMODE_RGBA8888_BE:
        case ColMode::COLMODE_RGBA8888_LE:
        case ColMode::COLMODE_BGRA8888_BE:
        case ColMode::COLMODE_BGRA8888_LE:
        case ColMode::COLMODE_BGR888:
        case ColMode::COLMODE_BRG888:
        case ColMode::COLMODE_GRB888:
        case ColMode::COLMODE_RGB888:
            return k_nRGBPlaneAmtForRGB888;
        default:
            OutputDebugString(L"ERROR: unsupported color mode in GetPlaneAmtForColor.\r\n");
            return 0;
        }
    }

    uint32_t CONV_BGR333_32(uint16_t inCol)
    {
        // xxxxRRRx GGGxBBBx, where x is 0
        // conversion code mostly by sega16
        // see also https://segaretro.org/Sega_Mega_Drive/Palettes_and_CRAM
        uint8_t* palP = (uint8_t*)&inCol;
        uint8_t r = (*palP++ & 14) * 18;
        uint8_t g = ((*palP & 240) >> 5) * 36;
        uint8_t b = (*palP & 14) * 18;

        return (0xFF << 24) | (b << 16) | (g << 8) | r;
    }

    uint16_t CONV_32_BGR333(uint32_t inCol)
    {
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (auxr + 18) / 36;
        auxg = (auxg + 18) / 36;
        auxb = (auxb + 18) / 36;

        return (auxr << 1) | (auxb << 9) | (auxg << 13);
    }

    uint32_t CONV_RBG333_32(uint16_t inCol)
    {
        // xxxxGGGx BBBxRRRx, where x is 0
        // conversion code mostly by sega16
        // see also https://segaretro.org/Sega_Mega_Drive/Palettes_and_CRAM
        uint8_t* palP = (uint8_t*)&inCol;
        uint8_t g = (*palP++ & 14) * 18;
        uint8_t b = ((*palP & 240) >> 5) * 36;
        uint8_t r = (*palP & 14) * 18;

        return (0xFF << 24) | (b << 16) | (g << 8) | r;
    }

    uint16_t CONV_32_RBG333(uint32_t inCol)
    {
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (auxr + 18) / 36;
        auxg = (auxg + 18) / 36;
        auxb = (auxb + 18) / 36;

        return (auxg << 1) | (auxr << 9) | (auxb << 13);
    }
    uint32_t CONV_RGB333_32(uint16_t inCol)
    {
        // xxxxBBBx GGGxRRRx, where x is 0
        // conversion code mostly by sega16
        // see also https://segaretro.org/Sega_Mega_Drive/Palettes_and_CRAM
        uint8_t* palP = (uint8_t*)&inCol;
        uint8_t b = (*palP++ & 14) * 18;
        uint8_t g = ((*palP & 240) >> 5) * 36;
        uint8_t r = (*palP & 14) * 18;

        return (0xFF << 24) | (b << 16) | (g << 8) | r;
    }

    uint16_t CONV_32_RGB333(uint32_t inCol)
    {
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (auxr + 18) / 36;
        auxg = (auxg + 18) / 36;
        auxb = (auxb + 18) / 36;

        // emit as GRxB
        return (auxb << 1) | (auxr << 9) | (auxg << 13);
    }

    uint32_t CONV_BGR555LE_32(uint16_t inCol)
    {
        uint32_t red = (inCol & 31) << 3;
        uint32_t green = ((inCol >> 5) & 31) << 3;
        uint32_t blue = ((inCol >> 10) & 31) << 3;
        uint32_t alpha = ((inCol >> 15) & 1) << 3;

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

    uint16_t CONV_32_BGR555LE(uint32_t inCol)
    {
        uint16_t auxa = ((inCol & 0xFF000000) >> 24);
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

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

    uint32_t CONV_BGR555BE_32(uint16_t inCol)
    {
        return CONV_BGR555LE_32(_byteswap_ushort(inCol));
    }

    uint16_t CONV_32_BGR555BE(uint32_t inCol)
    {
        return _byteswap_ushort(CONV_32_BGR555LE(inCol));
    }

    uint32_t CONV_BGR444_32(uint16_t inCol)
    {
        uint32_t auxr = (inCol & 0xF);
        uint32_t auxg = (inCol & 0xF0) >> 4;
        uint32_t auxb = (inCol & 0xF00) >> 8;
        uint32_t auxa = (inCol & 0xF000) >> 12;

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

    uint16_t CONV_32_BGR444(uint32_t inCol)
    {
        uint16_t auxa = ((inCol & 0xFF000000) >> 24);
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (uint16_t)round(auxr / 17.0);
        auxg = (uint16_t)round(auxg / 17.0);
        auxb = (uint16_t)round(auxb / 17.0);

        auxb = auxb << 8;
        auxg = auxg << 4;
        //auxr = auxr;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (uint16_t)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    uint32_t CONV_BRG444_32(uint16_t inCol)
    {
        uint32_t auxg = (inCol & 0xF);
        uint32_t auxr = (inCol & 0xF0) >> 4;
        uint32_t auxb = (inCol & 0xF00) >> 8;
        uint32_t auxa = (inCol & 0xF000) >> 12;

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

    uint16_t CONV_32_BRG444(uint32_t inCol)
    {
        uint16_t auxa = ((inCol & 0xFF000000) >> 24);
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (uint16_t)round(auxr / 17.0);
        auxg = (uint16_t)round(auxg / 17.0);
        auxb = (uint16_t)round(auxb / 17.0);

        //auxb = auxb;
        auxg = auxg << 8;
        auxr = auxr << 4;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (uint16_t)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    uint32_t CONV_RBG444_32(uint16_t inCol)
    {
        uint32_t auxg = (inCol & 0xF);
        uint32_t auxb = (inCol & 0xF0) >> 4;
        uint32_t auxr = (inCol & 0xF00) >> 8;
        uint32_t auxa = (inCol & 0xF000) >> 12;

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

    uint16_t CONV_32_RBG444(uint32_t inCol)
    {
        uint16_t auxa = ((inCol & 0xFF000000) >> 24);
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (uint16_t)round(auxr / 17.0);
        auxg = (uint16_t)round(auxg / 17.0);
        auxb = (uint16_t)round(auxb / 17.0);

        auxb = auxb << 4;
        //auxg = auxg;
        auxr = auxr << 8;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (uint16_t)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    uint32_t CONV_RGB444BE_32(uint16_t inCol)
    {
        uint32_t auxb = (inCol & 0xF);
        uint32_t auxg = (inCol & 0xF0) >> 4;
        uint32_t auxr = (inCol & 0xF00) >> 8;
        uint32_t auxa = (inCol & 0xF000) >> 12;

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

    uint16_t CONV_32_RGB444BE(uint32_t inCol)
    {
        uint16_t auxa = ((inCol & 0xFF000000) >> 24);
        uint16_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint16_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint16_t auxr = ((inCol & 0x000000FF));

        auxr = (uint16_t)round(auxr / 17.0);
        auxg = (uint16_t)round(auxg / 17.0);
        auxb = (uint16_t)round(auxb / 17.0);

        //auxb = auxb;
        auxg = auxg << 4;
        auxr = auxr << 8;

        if (CurrAlphaMode == AlphaMode::GameDoesNotUseAlpha)
        {
            auxa = 0;
        }
        else
        {
            auxa = (uint16_t)round(auxa / 17.0);
            auxa = auxa << 12;
        }

        return auxb | auxg | auxr | auxa;
    }

    uint32_t CONV_RGB444LE_32(uint16_t inCol)
    {
        return CONV_RGB444BE_32(_byteswap_ushort(inCol));
    }

    uint16_t CONV_32_RGB444LE(uint32_t inCol)
    {
        return _byteswap_ushort(CONV_32_RGB444BE(inCol));
    }

    uint32_t CONV_xBGR555LE_32(uint16_t inCol)
    {
        uint16_t swapped = SWAP_16(inCol);

        uint32_t auxr = (swapped & 0x7C00) >> 10;
        uint32_t auxg = (swapped & 0x3E0) >> 5;
        uint32_t auxb = (swapped & 0x1F);
        uint32_t auxa = 0x0;

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

    uint16_t CONV_32_xBGR555LE(uint32_t inCol)
    {
        uint16_t auxr = (inCol & 0x00FF0000) >> 16;
        uint16_t auxg = (inCol & 0x0000FF00) >> 8;
        uint16_t auxb = (inCol & 0x000000FF);

        auxb = (uint16_t)round(auxb / 8);
        auxg = (uint16_t)round(auxg / 8);
        auxr = (uint16_t)round(auxr / 8);

        //auxr = auxr; no-op
        auxg = auxg << 5;
        auxb = auxb << 10;

        return SWAP_16(auxb | auxg | auxr);
    }

    uint32_t CONV_RGB555LE_32(uint16_t inCol)
    {
        uint16_t swapped = SWAP_16(inCol);

        uint32_t auxb = (swapped & 0x7C00) >> 10;
        uint32_t auxg = (swapped & 0x3E0) >> 5;
        uint32_t auxr = (swapped & 0x1F);
        uint32_t auxa = 0x0;

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

    uint16_t CONV_32_RGB555LE(uint32_t inCol)
    {
        uint16_t auxb = (inCol & 0x00FF0000) >> 16;
        uint16_t auxg = (inCol & 0x0000FF00) >> 8;
        uint16_t auxr = (inCol & 0x000000FF);

        auxb = (uint16_t)round(auxb / 8);
        auxg = (uint16_t)round(auxg / 8);
        auxr = (uint16_t)round(auxr / 8);

        //auxr = auxr; no-op
        auxg = auxg << 5;
        auxb = auxb << 10;

        return SWAP_16(auxb | auxg | auxr);
    }

    uint32_t CONV_GRB555LE_32(uint16_t inCol)
    {
        uint16_t swapped = SWAP_16(inCol);

        uint32_t auxb = (swapped & 0x7C00) >> 10;
        uint32_t auxr = (swapped & 0x3E0) >> 5;
        uint32_t auxg = (swapped & 0x1F);
        uint32_t auxa = 0x0;

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

    uint16_t CONV_32_GRB555LE(uint32_t inCol)
    {
        uint16_t auxb = (inCol & 0x00FF0000) >> 16;
        uint16_t auxg = (inCol & 0x0000FF00) >> 8;
        uint16_t auxr = (inCol & 0x000000FF);

        auxb = (uint16_t)round(auxb / 8);
        auxg = (uint16_t)round(auxg / 8);
        auxr = (uint16_t)round(auxr / 8);

        auxr = auxr << 5;
        auxg = auxg; // no-op
        auxb = auxb << 10;

        return SWAP_16(auxb | auxg | auxr);
    }

    uint32_t CONV_BRG555LE_32(uint16_t inCol)
    {
        uint16_t swapped = SWAP_16(inCol);

        uint32_t auxg = (swapped & 0x7C00) >> 10;
        uint32_t auxr = (swapped & 0x3E0) >> 5;
        uint32_t auxb = (swapped & 0x1F);
        uint32_t auxa = 0x0;

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

    uint16_t CONV_32_BRG555LE(uint32_t inCol)
    {
        uint16_t auxb = (inCol & 0x00FF0000) >> 16;
        uint16_t auxg = (inCol & 0x0000FF00) >> 8;
        uint16_t auxr = (inCol & 0x000000FF);

        auxb = (uint16_t)round(auxb / 8);
        auxg = (uint16_t)round(auxg / 8);
        auxr = (uint16_t)round(auxr / 8);

        auxr = auxr << 5;
        auxg = auxg << 10;
        auxb = auxb; // no-op

        return SWAP_16(auxb | auxg | auxr);
    }

    uint32_t CONV_RGB555BE_32(uint16_t inCol)
    {
        uint32_t auxa = (inCol & 0x8000) >> 15;
        uint32_t auxr = (inCol & 0x7C00) >> 10;
        uint32_t auxg = (inCol & 0x3E0) >> 5;
        uint32_t auxb = (inCol & 0x1F);

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

    uint16_t CONV_32_RGB555BE(uint32_t inCol)
    {
        uint16_t auxa = (inCol & 0xFF000000) >> 24;
        uint16_t auxb = (inCol & 0x00FF0000) >> 16;
        uint16_t auxg = (inCol & 0x0000FF00) >> 8;
        uint16_t auxr = (inCol & 0x000000FF);

        auxb = (uint16_t)round(auxb / 8);
        auxg = (uint16_t)round(auxg / 8);
        auxr = (uint16_t)round(auxr / 8);

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

    uint8_t NGColorVals[] = {
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

    bool IsNEOGEOColorDark(uint8_t redIndex, uint8_t greenIndex, uint8_t blueIndex)
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

    uint8_t Convert32ToNEOGEO(uint8_t nColor)
    {
        uint8_t nColorIndex = 0;

        for (; nColorIndex < ARRAYSIZE(NGColorVals); nColorIndex++)
        {
            if (NGColorVals[nColorIndex] >= nColor)
            {
                break;
            }
        }

        return nColorIndex;
    }

    uint32_t CONV_RGB666NeoGeo_32(uint16_t nColorData)
    {
        uint8_t darkbit = (nColorData >> 0xf) & 0x01;
        uint8_t red1 = ((nColorData >> 0xe) & 0x01) * 2;
        uint8_t redm = ((nColorData >> 0x8) & 0x0f) * 4;
        uint8_t green1 = ((nColorData >> 0xd) & 0x01) * 2;
        uint8_t greenm = ((nColorData >> 0x4) & 0x0f) * 4;
        uint8_t blue1 = ((nColorData >> 0xc) & 0x01) * 2;
        uint8_t bluem = ((nColorData >> 0x0) & 0x0f) * 4;
        uint32_t auxa = 0xFF;

        uint8_t blue = NGColorVals[((blue1 + bluem) - darkbit) + 1];
        uint8_t green = NGColorVals[((green1 + greenm) - darkbit) + 1];
        uint8_t red = NGColorVals[((red1 + redm) - darkbit) + 1];

        uint32_t color = (auxa << 24) | (blue << 16) | (green << 8) | (red);

        return color;
    }

    uint16_t CONV_32_RGB666NeoGeo(uint32_t inCol)
    {
        uint8_t auxb = ((inCol & 0x00FF0000) >> 16);
        uint8_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint8_t auxr = ((inCol & 0x000000FF));

        uint8_t red = Convert32ToNEOGEO(auxr);
        uint8_t green = Convert32ToNEOGEO(auxg);
        uint8_t blue = Convert32ToNEOGEO(auxb);

        uint16_t darkbit = (IsNEOGEOColorDark(red, green, blue) ? 0x1 : 0x0) << 0xf;

        uint16_t red1 = ((red / 2) & 0x1) << 0xe;
        uint16_t redMain = ((red / 4) & 0xf) << 0x8;
        uint16_t green1 = ((green / 2) & 0x1) << 0xd;
        uint16_t greenMain = ((green / 4) & 0xf) << 0x4;
        uint16_t blue1 = ((blue / 2) & 0x1) << 0xc;
        uint16_t blueMain = ((blue / 4) & 0xf) << 0x0;

        uint16_t outColor = (red1 | redMain | green1 | greenMain | blue1 | blueMain);

        return outColor;
    }

    uint8_t SharpRGBColorVals[] = {
        0x00, 0x2e, 0x34, 0x3a, 0x40, 0x44, 0x48, 0x4e,
        0x54, 0x5a, 0x60, 0x66, 0x6c, 0x72, 0x78, 0x7e,
        0x84, 0x8a, 0x90, 0x98, 0xa0, 0xa8, 0xb0, 0xb8,
        0xc0, 0xca, 0xd4, 0xde, 0xe8, 0xf2, 0xfc, 0xff
    };

    uint8_t Convert32ToSharpRGB(uint8_t nColor)
    {
        uint8_t nColorIndex = 0;

        for (; nColorIndex < ARRAYSIZE(SharpRGBColorVals); nColorIndex++)
        {
            if (SharpRGBColorVals[nColorIndex] >= nColor)
            {
                break;
            }
        }

        return nColorIndex;
    }

    uint32_t CONV_RGB555Sharp_32(uint16_t nColorData)
    {
        // raw view
        // RRRR GGGG BBBB RGB#
        // 0xf008 is pure red
        // 0x0f04 is pure green
        // 0x00f2 pure blue
        // 0x000e <-> 2e2e2e
        uint8_t bm = (nColorData >> 0xb) & 0x1e;
        uint8_t b1 = (nColorData >> 0x3) & 0x01;
        uint8_t bluf = SharpRGBColorVals[bm + b1];

        uint8_t gm = (nColorData >> 0x7) & 0x1e;
        uint8_t g1 = (nColorData >> 0x2) & 0x01;
        uint8_t grnf = SharpRGBColorVals[gm + g1];

        uint8_t rm = (nColorData >> 0x3) & 0x1e;
        uint8_t r1 = (nColorData >> 0x1) & 0x01;
        uint8_t redf = SharpRGBColorVals[rm + r1];

        uint32_t color = (redf << 16) | (grnf << 8) | (bluf) | 0xff000000;

        return color;
    }

    uint16_t CONV_32_RGB555Sharp(uint32_t inCol)
    {
        uint8_t auxr = ((inCol & 0x00FF0000) >> 16);
        uint8_t auxg = ((inCol & 0x0000FF00) >> 8);
        uint8_t auxb = ((inCol & 0x000000FF));

        uint8_t red = Convert32ToSharpRGB(auxr);
        uint8_t green = Convert32ToSharpRGB(auxg);
        uint8_t blue = Convert32ToSharpRGB(auxb);

        uint16_t red1 = (red & 0x01) << 0x1;
        uint16_t redMain = (red & 0x1e) << 0x3;
        uint16_t green1 = (green & 0x01) << 0x2;
        uint16_t greenMain = (green & 0x1e) << 0x7;
        uint16_t blue1 = (blue & 0x01) << 0x3;
        uint16_t blueMain = (blue & 0x1e) << 0xb;

        uint16_t outColor = (red1 | redMain | green1 | greenMain | blue1 | blueMain);

        return outColor;
    }

    // 24bit color conversions

    uint32_t CONV_BGR888_32(uint32_t inCol)
    {
        uint32_t auxr = (inCol & 0x00FF0000) >> 16;
        uint32_t auxg = (inCol & 0x0000FF00) >> 8;
        uint32_t auxb = (inCol & 0x000000FF);

        return ((0xFF << 24) | RGB(auxr, auxg, auxb));
    }

    uint32_t CONV_32_BGR888(uint32_t inCol)
    {
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxb = GetBValue(inCol);

        auxb = auxb;
        auxg = auxg << 8;
        auxr = auxr << 16;

        return (auxr | auxg | auxb);
    }

    uint32_t CONV_32_BRG888(uint32_t inCol)
    {
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxb = GetBValue(inCol);

        auxb = auxb;
        auxr = auxr << 8;
        auxg = auxg << 16;

        return (auxr | auxg | auxb);
    }

    uint32_t CONV_BRG888_32(uint32_t inCol)
    {
        uint32_t auxg = (inCol & 0x00FF0000) >> 16;
        uint32_t auxr = (inCol & 0x0000FF00) >> 8;
        uint32_t auxb = (inCol & 0x000000FF);

        return ((0xFF << 24) | RGB(auxr, auxg, auxb));
    }

    uint32_t CONV_GRB888_32(uint32_t inCol)
    {
        uint32_t auxb = (inCol & 0x00FF0000) >> 16;
        uint32_t auxr = (inCol & 0x0000FF00) >> 8;
        uint32_t auxg = (inCol & 0x000000FF);

        return ((0xFF << 24) | RGB(auxr, auxg, auxb));
    }

    uint32_t CONV_32_GRB888(uint32_t inCol)
    {
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxb = GetBValue(inCol);

        auxg = auxg;
        auxr = auxr << 8;
        auxb = auxb << 16;

        return (auxr | auxg | auxb);
    }

    uint32_t CONV_RGB888_32(uint32_t inCol)
    {
        uint32_t auxb = (inCol & 0x00FF0000) >> 16;
        uint32_t auxg = (inCol & 0x0000FF00) >> 8;
        uint32_t auxr = (inCol & 0x000000FF);

        return ((0xFF << 24) | RGB(auxr, auxg, auxb));
    }

    uint32_t CONV_32_RGB888(uint32_t inCol)
    {
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxb = GetBValue(inCol);

        auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;

        return (auxb | auxg | auxr);
    }

    uint32_t CONV_RGBA8881_32(uint32_t inCol)
    {
        uint32_t auxb = GetBValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxa = GetAValue(inCol) * 0xFF;

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

    uint32_t CONV_32_RGBA8881(uint32_t inCol)
    {
        uint32_t auxa = (inCol & 0xFF000000) >> 24;
        uint32_t auxb = (inCol & 0x00FF0000) >> 16;
        uint32_t auxg = (inCol & 0x0000FF00) >> 8;
        uint32_t auxr = (inCol & 0x000000FF);

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

    uint32_t CONV_RGBA8887_32(uint32_t inCol)
    {
        uint32_t auxb = GetBValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxa = min(GetAValue(inCol) * 2, 0xFF);

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

    uint32_t CONV_32_RGBA8887(uint32_t inCol)
    {
        uint32_t auxa = (inCol & 0xFF000000) >> 24;
        uint32_t auxb = (inCol & 0x00FF0000) >> 16;
        uint32_t auxg = (inCol & 0x0000FF00) >> 8;
        uint32_t auxr = (inCol & 0x000000FF);

        if (CurrAlphaMode != AlphaMode::GameUsesVariableAlpha)
        {
            auxa = 0x80;
        }
        else
        {
            // We want half alpha
            auxa = (uint32_t)floor((auxa + 1) / 2);
        }

        //auxr = auxr;
        auxg = auxg << 8;
        auxb = auxb << 16;
        auxa = auxa << 24;

        return (auxb | auxg | auxr | auxa);
    }

    uint32_t CONV_RGBA8888LE_32(uint32_t inCol)
    {
        uint32_t auxb = GetBValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxr = GetRValue(inCol);
        uint32_t auxa = GetAValue(inCol);

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

    uint32_t CONV_32_RGBA8888LE(uint32_t inCol)
    {
        uint32_t auxa = (inCol & 0xFF000000) >> 24;
        uint32_t auxb = (inCol & 0x00FF0000) >> 16;
        uint32_t auxg = (inCol & 0x0000FF00) >> 8;
        uint32_t auxr = (inCol & 0x000000FF);

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

    uint32_t CONV_RGBA8888BE_32(uint32_t inCol)
    {
        return CONV_RGBA8888LE_32(_byteswap_ulong(inCol));
    }

    uint32_t CONV_32_RGBA8888BE(uint32_t inCol)
    {
        return _byteswap_ulong(CONV_32_RGBA8888LE(inCol));
    }

    uint32_t CONV_BGRA8888BE_32(uint32_t inCol)
    {
        return CONV_BGRA8888LE_32(_byteswap_ulong(inCol));
    }

    uint32_t CONV_32_BGRA8888BE(uint32_t inCol)
    {
        return _byteswap_ulong(CONV_32_BGRA8888LE(inCol));
    }

    uint32_t CONV_BGRA8888LE_32(uint32_t inCol)
    {
        // B<->R
        uint32_t auxb = GetRValue(inCol);
        uint32_t auxg = GetGValue(inCol);
        uint32_t auxr = GetBValue(inCol);
        uint32_t auxa = GetAValue(inCol);

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

    uint32_t CONV_32_BGRA8888LE(uint32_t inCol)
    {
        uint32_t auxa = (inCol & 0xFF000000) >> 24;
        uint32_t auxb = (inCol & 0x00FF0000) >> 16;
        uint32_t auxg = (inCol & 0x0000FF00) >> 8;
        uint32_t auxr = (inCol & 0x000000FF);

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
        uint8_t nColorIndex = 1;

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
        uint8_t nColorIndex = 1;

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

    void RGBtoHSV(const COLORREF rgb, double& h, double& s, double& v)
    {
        double r = GetRValue(rgb) / 255.0;
        double g = GetGValue(rgb) / 255.0;
        double b = GetBValue(rgb) / 255.0;

        double colorMin = min(r, min(g, b));
        double colorMax = max(r, max(g, b));

        double delta = colorMax - colorMin;
        v = colorMax;

        if (delta == 0)
        {
            h = 0;
            s = 0;
        }
        else
        {
            s = delta / colorMax;

            if (r == colorMax)
            {
                h = fmod(((g - b) / delta), 6);
            }
            else if (g == colorMax)
            {
                h = ((b - r) / delta) + 2;
            }
            else //if (b == colorMax)
            {
                h = ((r - g) / delta) + 4;
            }

            h *= 60;

            if (h < 0)
            {
                h += 360;
            }
        }

        return;
    }

    COLORREF HSVtoRGB(double H, double S, double V)
    {
        uint8_t r = 0, g = 0, b = 0;

        V *= 255;

        if (S == 0)
        {
            r = g = b = static_cast<uint8_t>(V);
        }
        else
        {
            if (H == 360) { H = 0; }
            if (H > 360) { H -= 360; }
            if (H < 0) { H += 360; }
            H /= 60;

            uint8_t i = static_cast<uint8_t>(floor(H));
            double f = (H - i);
            uint8_t p = static_cast<uint8_t>(V * (1 - S));
            uint8_t q = static_cast<uint8_t>(V * (1 - S * f));
            uint8_t t = static_cast<uint8_t>(V * (1 - S * (1 - f)));

            uint8_t Vint = static_cast<uint8_t>(V);

            switch (i) {
            case 0:
                r = Vint; g = t; b = p;
                break;
            case 1:
                r = q; g = Vint; b = p;
                break;
            case 2:
                r = p; g = Vint; b = t;
                break;
            case 3:
                r = p; g = q; b = Vint;
                break;
            case 4:
                r = t; g = p; b = Vint;
                break;
            case 5:
                r = Vint; g = p; b = q;
                break;
            }
        }

        return RGB(r, g, b);
    }

    double mapRGBColorValueToXYZPoint(uint8_t rgbColorValue)
    {
        double mappedColor = (rgbColorValue / 255.0);

        // use .0031308 for non-gamma corrected values
        if (mappedColor > 0.0031308)
        {
            mappedColor = pow(((mappedColor + 0.055) / 1.055), 2.4);
        }
        else
        {
            mappedColor /= 12.92;
        }

        return mappedColor;
    }

    void RGBtoXYZ(const COLORREF rgb, double& x, double& y, double& z)
    {
        double mappedR = mapRGBColorValueToXYZPoint(GetRValue(rgb));
        double mappedG = mapRGBColorValueToXYZPoint(GetGValue(rgb));
        double mappedB = mapRGBColorValueToXYZPoint(GetBValue(rgb));

        // Use D65 whitepoint
        x = (mappedR * 0.4124) + (mappedG * 0.3576) + (mappedB * 0.1805);
        y = (mappedR * 0.2126) + (mappedG * 0.7152) + (mappedB * 0.0722);
        z = (mappedR * 0.0193) + (mappedG * 0.1192) + (mappedB * 0.9505);
    }

    double mapXYZPointToRGBColorValue(double xyzPoint)
    {
        // use .0031308 for non-gamma corrected values
        if (abs(xyzPoint) < 0.0031308)
        {
            return max(0, 12.92 * xyzPoint);
        }
        else
        {
            return 1.055 * pow(xyzPoint, 0.41666) - 0.055;
        }
    }

    COLORREF XYZtoRGB(double x, double y, double z)
    {
        double R = max(0.0, 3.2404542 * x - 1.5371385 * y - 0.4985314 * z);
        double G = max(0.0, -0.9692660 * x + 1.8760108 * y + 0.0415560 * z);
        double B = max(0.0, 0.0556434 * x - 0.2040259 * y + 1.0572252 * z);

        double adjR = min(mapXYZPointToRGBColorValue(R) * 255.0, 255.0);
        double adjG = min(mapXYZPointToRGBColorValue(G) * 255.0, 255.0);
        double adjB = min(mapXYZPointToRGBColorValue(B) * 255.0, 255.0);

        return RGB(adjR, adjG, adjB);
    }

    const double LABEpsilon = 0.008856;
    const double LABKappa = 7.787;

    const double LABNormalizationX = 95.047;
    const double LABNormalizationY = 100.000;
    const double LABNormalizationZ = 108.883;

    double PivotFromXYZToLab(double point)
    {
        return (point > LABEpsilon) ? pow(point, 1.0 / 3.0) : (LABKappa * point) + (16.0 / 116.0);
    }

    double PivotFromLabtoXYZ(double point)
    {
        return (point > LABEpsilon) ? pow(point, 3.0) : (point - (16.0 - 116.0)) / LABKappa;
    }
    
    void RGBtoLAB(const COLORREF rgb, double& l, double& a, double& b)
    {
        double x, y, z;

        RGBtoXYZ(rgb, x, y, z);

        x *= 100.0;
        y *= 100.0;
        z *= 100.0;

        x = PivotFromXYZToLab(x / LABNormalizationX);
        y = PivotFromXYZToLab(y / LABNormalizationY);
        z = PivotFromXYZToLab(z / LABNormalizationZ);

        l = max(0, (116.0 * y) - 16);
        a = 500.0 * (x - y);
        b = 200.0 * (y - z);
    }

    COLORREF LABtoRGB(double l, double a, double b)
    {
        double x, y, z;

        y = (l + 16.0) / 116.0;
        x = y + (a / 500.0);
        z = y - (b / 200.0);

        // unpivot
        x = PivotFromLabtoXYZ(x) * LABNormalizationX;
        y = PivotFromLabtoXYZ(y) * LABNormalizationY;
        z = PivotFromLabtoXYZ(z) * LABNormalizationZ;

        x /= 100.0;
        y /= 100.0;
        z /= 100.0;

        return XYZtoRGB(x, y, z);
    }

    COLORREF GetGradient_RGB(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps)
    {
        // avoid shifting due to rounding/translation
        if (nCurrentStep == 0)
        {
            return colorStart;
        }
        else if (nCurrentStep == nTotalSteps)
        {
            return colorFinish;
        }

        const double nCurrentPercent = static_cast<double>(nCurrentStep) / static_cast<double>(nTotalSteps);

        const uint8_t red =   static_cast<uint8_t>(round(GetRValue(colorStart) + (nCurrentPercent * (GetRValue(colorFinish) - GetRValue(colorStart)))));
        const uint8_t green = static_cast<uint8_t>(round(GetGValue(colorStart) + (nCurrentPercent * (GetGValue(colorFinish) - GetGValue(colorStart)))));
        const uint8_t blue =  static_cast<uint8_t>(round(GetBValue(colorStart) + (nCurrentPercent * (GetBValue(colorFinish) - GetBValue(colorStart)))));

        return RGB(red, green, blue);
    }

    COLORREF GetGradient_HSL(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps)
    {
        // avoid shifting due to rounding/translation
        if (nCurrentStep == 0)
        {
            return colorStart;
        }
        else if (nCurrentStep == nTotalSteps)
        {
            return colorFinish;
        }

        const double nCurrentPercent = static_cast<double>(nCurrentStep) / static_cast<double>(nTotalSteps);

        double hueStart, luminanceStart, saturationStart;
        double hueFinish, luminanceFinish, saturationFinish;

        RGBtoHLS(colorStart, &hueStart, &luminanceStart, &saturationStart);
        RGBtoHLS(colorFinish, &hueFinish, &luminanceFinish, &saturationFinish);

        const double hueStep = hueStart + (nCurrentPercent * (hueFinish - hueStart));
        const double luminanceStep = luminanceStart + (nCurrentPercent * (luminanceFinish - luminanceStart));
        const double saturationStep = saturationStart + (nCurrentPercent * (saturationFinish - saturationStart));

        const COLORREF colorStep = HLStoRGB(hueStep, luminanceStep, saturationStep);

        return colorStep;
    }

    COLORREF GetGradient_HSV(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps)
    {
        // avoid shifting due to rounding/translation
        if (nCurrentStep == 0)
        {
            return colorStart;
        }
        else if (nCurrentStep == nTotalSteps)
        {
            return colorFinish;
        }

        const double nCurrentPercent = static_cast<double>(nCurrentStep) / static_cast<double>(nTotalSteps);

        double hueStart, saturationStart, valueStart;
        double hueFinish, saturationFinish, valueFinish;

        RGBtoHSV(colorStart, hueStart, saturationStart, valueStart);
        RGBtoHSV(colorFinish, hueFinish, saturationFinish, valueFinish);

        const double hueStep = hueStart + (nCurrentPercent * (hueFinish - hueStart));
        const double saturationStep = saturationStart + (nCurrentPercent * (saturationFinish - saturationStart));
        const double valueStep = valueStart + (nCurrentPercent * (valueFinish - valueStart));

        const COLORREF colorStep = HSVtoRGB(hueStep, saturationStep, valueStep);

        return colorStep;
    }

    COLORREF GetGradient_LAB(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps)
    {
        // avoid shifting due to rounding/translation
        if (nCurrentStep == 0)
        {
            return colorStart;
        }
        else if (nCurrentStep == nTotalSteps)
        {
            return colorFinish;
        }

        const double nCurrentPercent = static_cast<double>(nCurrentStep) / static_cast<double>(nTotalSteps);

        double lStart, aStart, bStart;
        double lFinish, aFinish, bFinish;

        RGBtoLAB(colorStart, lStart, aStart, bStart);
        RGBtoLAB(colorFinish, lFinish, aFinish, bFinish);

        const double lStep = lStart + (nCurrentPercent * (lFinish - lStart));
        const double aStep = aStart + (nCurrentPercent * (aFinish - aStart));
        const double bStep = bStart + (nCurrentPercent * (bFinish - bStart));

        const COLORREF colorStep = LABtoRGB(lStep, aStep, bStep);

        return colorStep;
    }

    COLORREF GetGradient_XYZ(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps)
    {
        // avoid shifting due to rounding/translation
        if (nCurrentStep == 0)
        {
            return colorStart;
        }
        else if (nCurrentStep == nTotalSteps)
        {
            return colorFinish;
        }

        const double nCurrentPercent = static_cast<double>(nCurrentStep) / static_cast<double>(nTotalSteps);

        double xStart, yStart, zStart;
        double xFinish, yFinish, zFinish;

        RGBtoXYZ(colorStart, xStart, yStart, zStart);
        RGBtoXYZ(colorFinish, xFinish, yFinish, zFinish);

        const double xStep = xStart + (nCurrentPercent * (xFinish - xStart));
        const double yStep = yStart + (nCurrentPercent * (yFinish - yStart));
        const double zStep = zStart + (nCurrentPercent * (zFinish - zStart));

        const COLORREF colorStep = XYZtoRGB(xStep, yStep, zStep);

        return colorStep;
    }
}
