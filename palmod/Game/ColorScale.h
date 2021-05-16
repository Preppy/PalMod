///////////////////////////// ColorScale.h ////////////////////////////////////

#pragma once
#ifndef _COLOR_SCALE
#define _COLOR_SCALE

typedef unsigned long COLORREF;    // 0 to 0xFFFFFF and 0xFFFFFFFF for transparencies

// Create a 0xAABBGGRR from separate 8 bits colors - error checking
#define MakeRGBA(r,g,b,a) (((a)&0xFF)<<24 | ((b)&0xFF)<<16 | ((g)&0xFF)<<8 | ((r)&0xFF))

COLORREF ColorScaleRGB(const COLORREF Col1, const COLORREF Col2, const double Ratio);
COLORREF ColorScaleHSL(const COLORREF Col1, const COLORREF Col2, const double Ratio);

void     RGBtoHLS(const COLORREF rgb, double *H, double *L, double *S );
COLORREF HLStoRGB(const double H, const double L, const double S );


static double _HTemp, _LTemp, _STemp;
#define DARKER(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, Max(0,_LTemp-.1), _STemp))
#define DARKEST(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, Max(0,_LTemp-.2), _STemp))
#define LIGHTER(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, Min(1,_LTemp+.1), _STemp))
#define LIGHTEST(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, Min(1,_LTemp+.2), _STemp))


#define MORE_SATURATED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, _LTemp, Max(0,_STemp+.1)))
#define MOST_SATURATED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, _LTemp, Max(0,_STemp+.2)))
#define LESS_SATURATED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, _LTemp, Max(0,_STemp-.1)))
#define LEAST_SATURATED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(_HTemp, _LTemp, Max(0,_STemp-.2)))


#define MORE_HUED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(Max(0,_HTemp+.1), _LTemp, _STemp))
#define MOST_HUED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(Max(0,_HTemp+.2), _LTemp, _STemp))
#define LESS_HUED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(Max(0,_HTemp-.1), _LTemp, _STemp))
#define LEAST_HUED(c)    (RGBtoHLS((c), &_HTemp, &_LTemp, &_STemp),\
                     HLStoRGB(Max(0,_HTemp-.2), _LTemp, _STemp))

#endif
