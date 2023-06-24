#pragma once

#include <map>

#define GetAValue(rgb)      (LOBYTE((rgb)>>24))

double LimitHLS(double a);
double SubHLS(double a);
uint8_t LimitRGB(int Val);

enum class AlphaMode
{
    GameDoesNotUseAlpha,    // No alpha value data present in colors
    GameUsesFixedAlpha,     // Alpha value is set and immutable
    Unknown,
    GameUsesVariableAlpha,  // Modifiable, as in the case of MvC2.
    GameUsesChaoticAlpha,   // Yes, this is odd.  ST-GBA appears to not have alpha consistently set.
    GameUsesSTPNotAlpha,    // PS1-specific: Semi-Transparent Pixel
};

enum class ColMode
{
    // If you add new color modes that users would want to use, you need to update CGame_NEOGEO_A::SetAlphaAndColorModeInternal
    // as well as rgColorNameToFormatMap
    // Don't change the order of this list: we emit copy strings that rely upon the ordering
    COLMODE_BGR555_LE,      // BGR555 little endian (GBA)
    COLMODE_RGB444_BE,      // RGB444 big endian (CPS1/2)
    COLMODE_RGB444_LE,      // RGB444 little endian (SF 30th steam)
    COLMODE_RGB555_LE,      // RGB555 little endian (CPS3)
    COLMODE_RGB555_BE,      // RGB555 big endian 
    COLMODE_RGB666_NEOGEO,  // RGB666 using the NeoGeo color table
    COLMODE_RGB333,         // RGB333 for Sega Genesis/MegaDrive
    COLMODE_RGBA8887,       // 32bit color half alpha (guilty gear)
    COLMODE_RGB555_SHARP,   // RGB555 using the sharp x68000 color table
    COLMODE_RGBA8881,       // 32bit color 1 bit alpha
    COLMODE_RGBA8888_LE,    // 32bit color (uniclr. and modern computing)
    COLMODE_RGB888,         // 24bit
    COLMODE_BGR888,         // 24bit
    COLMODE_RGBA8881_32STEPS, // MBAACC: 32 bit color, except only 32 steps
    COLMODE_GRB555_LE,      // GRB555 little endian
    COLMODE_BGRA8888_LE,    // 32bit color (arcana blood)
    COLMODE_BGR555_BE,      // BGR555 big endian: Motorola 68000 games
    COLMODE_GRB888,         // 24bit

    // This section added to enable user exploration in dev mode: not needed directly for any games yet
    COLMODE_BGR333,         
    COLMODE_RBG333,
    COLMODE_BGR444,
    COLMODE_BRG444,
    COLMODE_RBG444,
    COLMODE_BRG888,

    COLMODE_xBGR555_LE,     // Different packing used by Asura Buster / Fuuki

    COLMODE_RGBA8888_BE,    // 32bit color
    COLMODE_BGRA8888_BE,    // 32bit color (ps3)

    COLMODE_BRG555_LE,      // used by Fists of Fury

    COLMODE_LAST,
};

enum class ColFlag
{
    COL_RGB,
    COL_A,
};

namespace ColorSystem
{
    ColMode DecodeColorFlag(uint8_t uPossibleColorFlag);
    uint8_t GetCbForColMode(ColMode colorMode);
    uint8_t GetCbForColorForGameFlag(uint8_t uGameFlag, uint8_t uPossibleColorFlag);
    int GetPlaneAmtForColor(ColMode colorMode, ColFlag colorFlag);

    // 16-bit
    uint16_t CONV_32_BGR333(uint32_t inCol);
    uint32_t CONV_BGR333_32(uint16_t inCol);
    uint16_t CONV_32_RBG333(uint32_t inCol);
    uint32_t CONV_RBG333_32(uint16_t inCol);
    uint16_t CONV_32_RGB333(uint32_t inCol);
    uint32_t CONV_RGB333_32(uint16_t inCol);

    uint16_t CONV_32_BGR444(uint32_t inCol);
    uint32_t CONV_BGR444_32(uint16_t inCol);
    uint16_t CONV_32_BRG444(uint32_t inCol);
    uint32_t CONV_BRG444_32(uint16_t inCol);
    uint16_t CONV_32_RBG444(uint32_t inCol);
    uint32_t CONV_RBG444_32(uint16_t inCol);
    uint16_t CONV_32_RGB444BE(uint32_t inCol);
    uint32_t CONV_RGB444BE_32(uint16_t inCol);
    uint16_t CONV_32_RGB444LE(uint32_t inCol);
    uint32_t CONV_RGB444LE_32(uint16_t inCol);

    uint16_t CONV_32_BGR555LE(uint32_t inCol);
    uint32_t CONV_BGR555LE_32(uint16_t inCol);
    uint16_t CONV_32_BGR555BE(uint32_t inCol);
    uint32_t CONV_BGR555BE_32(uint16_t inCol);
    uint16_t CONV_32_xBGR555LE(uint32_t inCol);
    uint32_t CONV_xBGR555LE_32(uint16_t inCol);
    uint16_t CONV_32_RGB555LE(uint32_t inCol);
    uint32_t CONV_RGB555LE_32(uint16_t inCol);
    uint16_t CONV_32_RGB555BE(uint32_t inCol);
    uint32_t CONV_RGB555BE_32(uint16_t inCol);
    uint16_t CONV_32_GRB555LE(uint32_t inCol);
    uint32_t CONV_GRB555LE_32(uint16_t inCol);
    uint16_t CONV_32_BRG555LE(uint32_t inCol);
    uint32_t CONV_BRG555LE_32(uint16_t inCol);

    // Lookup tables
    uint16_t CONV_32_RGB666NeoGeo(uint32_t inCol);
    uint32_t CONV_RGB666NeoGeo_32(uint16_t inCol);
    uint16_t CONV_32_RGB555Sharp(uint32_t inCol);
    uint32_t CONV_RGB555Sharp_32(uint16_t inCol);

    // 24-bit
    uint32_t CONV_32_BGR888(uint32_t inCol);
    uint32_t CONV_BGR888_32(uint32_t inCol);
    uint32_t CONV_32_BRG888(uint32_t inCol);
    uint32_t CONV_BRG888_32(uint32_t inCol);
    uint32_t CONV_32_GRB888(uint32_t inCol);
    uint32_t CONV_GRB888_32(uint32_t inCol);
    uint32_t CONV_32_RGB888(uint32_t inCol);
    uint32_t CONV_RGB888_32(uint32_t inCol);

    // 32-bit
    uint32_t CONV_32_RGBA8881(uint32_t inCol);
    uint32_t CONV_RGBA8881_32(uint32_t inCol);
    uint32_t CONV_32_RGBA8887(uint32_t inCol);
    uint32_t CONV_RGBA8887_32(uint32_t inCol);
    uint32_t CONV_32_RGBA8888LE(uint32_t inCol);
    uint32_t CONV_RGBA8888LE_32(uint32_t inCol);
    uint32_t CONV_32_RGBA8888BE(uint32_t inCol);
    uint32_t CONV_RGBA8888BE_32(uint32_t inCol);
    uint32_t CONV_32_BGRA8888BE(uint32_t inCol);
    uint32_t CONV_BGRA8888BE_32(uint32_t inCol);
    uint32_t CONV_32_BGRA8888LE(uint32_t inCol);
    uint32_t CONV_BGRA8888LE_32(uint32_t inCol);

    int GetColorStepFor8BitValue_1Step(int nColorValue);
    int Get8BitValueForColorStep_1Step(int nColorStep);
    int GetColorStepFor8BitValue_8Steps(int nColorValue);
    int Get8BitValueForColorStep_8Steps(int nColorStep);
    int GetColorStepFor8BitValue_16Steps(int nColorValue);
    int Get8BitValueForColorStep_16Steps(int nColorStep);
    int GetColorStepFor8BitValue_32Steps(int nColorValue);
    int Get8BitValueForColorStep_32Steps(int nColorStep);
    int GetColorStepFor8BitValue_32Steps_SharpCLUT(int nColorValue);
    int Get8BitValueForColorStep_32Steps_SharpCLUT(int nColorStep);
    int GetColorStepFor8BitValue_NeoGeoCLUT(int nColorValue);
    int Get8BitValueForColorStep_NeoGeoCLUT(int nColorStep);
    int GetColorStepFor8BitValue_HalfAlpha(int nColorValue);
    int Get8BitValueForColorStep_HalfAlpha(int nColorStep);
    int GetColorStepFor8BitValue_256Steps(int nColorValue);
    int Get8BitValueForColorStep_256Steps(int nColorStep);

    int GetNearestLegalColorValue_RGB111(int nColorValue);
    int GetNearestLegalColorValue_RGB333(int nColorValue);
    int GetNearestLegalColorValue_RGB444(int nColorValue);
    int GetNearestLegalColorValue_RGB555(int nColorValue);
    int GetNearestLegalColorValue_SharpCLUT(int nColorValue);
    int GetNearestLegalColorValue_NeoGeoCLUT(int nColorValue);
    int GetNearestLegalColorValue_ARGB7888(int nColorValue);
    int GetNearestLegalColorValue_RGB888(int nColorValue);

    int ValidateColorStep_RGB333(int nColorStep);
    int ValidateColorStep_RGB444(int nColorStep);
    int ValidateColorStep_RGB555(int nColorStep);
    int ValidateColorStep_RGB888(int nColorStep);

    AlphaMode GetAlphaMode();
    void SetAlphaMode(AlphaMode NewMode);
    inline bool IsAlphaModeMutable(AlphaMode am) { return (am == AlphaMode::GameUsesVariableAlpha); };
    uint8_t GetAlphaValueForBlendType(BlendMode bm, uint8_t nPreBlendAlpha, uint8_t rVal, uint8_t gVal, uint8_t bVal);

    bool GetColorFormatForColorFormatString(LPCSTR paszColorString, ColMode& cmColorMode);

    bool GetAlphaModeForAlphaModeString(LPCSTR paszColorString, AlphaMode& amAlphaMode);
    LPCSTR GetColorFormatStringForColorFormat(ColMode cmColorMode);
    LPCSTR GetAlphaModeStringForAlphaMode(AlphaMode amAlphaMode);

    using ColorStepFunction = COLORREF(*)(COLORREF, COLORREF, uint16_t, uint16_t);

    void     RGBtoHSV(const COLORREF rgb, double& h, double& s, double& v);
    COLORREF HSVtoRGB(const double H, const double S, const double V);

    void     RGBtoXYZ(const COLORREF rgb, double& x, double& y, double& z);
    COLORREF XYZtoRGB(const double x, const double y, const double z);

    void     RGBtoLAB(const COLORREF rgb, double& l, double& a, double& b);
    COLORREF LABtoRGB(const double l, const double a, const double b);

    COLORREF GetGradient_RGB(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps);
    COLORREF GetGradient_HSL(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps);
    COLORREF GetGradient_HSV(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps);
    COLORREF GetGradient_LAB(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps);
    COLORREF GetGradient_XYZ(COLORREF colorStart, COLORREF colorFinish, uint16_t nCurrentStep, uint16_t nTotalSteps);
};
