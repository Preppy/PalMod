#pragma once
#include "Default.h"
#include "PalTool.h"

#define GetAValue(rgb)      (LOBYTE((rgb)>>24))
#define sq(x) ((double)x*x)

struct sPalRedir
{
    int nDefIndex;
    int nSepIndex;
};

struct sPalSep
{
    WCHAR szDesc[MAX_DESCRIPTION_LENGTH];
    int nStart;
    int nAmt;
};

struct sPalDef
{
    COLORREF* pPal = nullptr;
    COLORREF* pBasePal = nullptr;
    UINT16 uPalSz = 0;

    UINT16 uUnitId = 0;
    UINT16 uCollectionId = 0;
    UINT16 uPalId = 0;

    sPalSep* SepList[MAX_SEPARATORS] = {};
    UINT16 uSepAmt = 0;

    BOOL bChanged = FALSE;
    BOOL bAvail = FALSE;
};

enum ePalType
{
    PALTYPE_32STEPS,
    PALTYPE_16STEPS,
    PALTYPE_8STEPS,
    PALTYPE_256STEPS,
    // NeoGeo is a special snowflake: see comments for k_nRGBPlaneAmtForRGB666 in GameClass.h
    PALTYPE_NEOGEO,
};

class CPalGroup
{
private:
    sPalDef rgPalettes[MAX_PALETTES_DISPLAYABLE];
    sPalRedir rgRedir[MAX_PALETTES_DISPLAYABLE * MAX_SEPARATORS];
    int nRedirCtr = 0;
    int nCurrPalAmt = 0;

    ePalType PalMode = ePalType::PALTYPE_32STEPS;

    void InitPal();

    BOOL FlushPal(int nIndex);

public:
    CPalGroup(void);
    ~CPalGroup(void);

    UINT8(*ROUND)(UINT8 rVal);
    UINT8(*ROUND_R)(UINT8 rVal);
    UINT8(*ROUND_G)(UINT8 rVal);
    UINT8(*ROUND_B)(UINT8 rVal);

    static UINT8 ROUND_1(UINT8 rVal) { return rVal; };
    static UINT8 ROUND_8(UINT8 rVal);
    static UINT8 ROUND_17(UINT8 rVal);
    static UINT8 ROUND_32(UINT8 rVal);

    int GetAddIndex() { return nCurrPalAmt - 1; };

    double LimitHLS(double a) { return (a > 1.0 ? 1.0 : (a < 0.0 ? 0.0 : a)); };
    double SubHLS(double a) { while (a >= 1.0)a -= 1.0; return a; };
    UINT8 LimitRGB(int Val) { return (UINT8)(Val < 0 ? 0 : (Val > 255 ? 255 : Val)); };

    BOOL SetMode(ePalType NewPalMode);
    int GetPalAmt() { return nCurrPalAmt; };

    BOOL AddPal(COLORREF* pPal, UINT16 uPalSz, UINT16 uUnitId, UINT16 uPalId);
    BOOL AddSep(int nIndex, LPCWSTR szDesc, int nStart, int nAmt);

    void SetRGBA(COLORREF* crTarget, UINT8 rVal, UINT8 gVal, UINT8 bVal, UINT8 aVal = 0);
    void SetHLSA(COLORREF* crTarget, double dH, double dL, double dS, UINT8 aVal);

    void SetAddHLSA(COLORREF crSrc, COLORREF* crTarget, double fpAddH, double fpAddL, double fpAddS, int uAddA);
    void SetAddRGBA(COLORREF crSrc, COLORREF* crTarget, int uAddR, int uAddG, int uAddB, int uAddA);

    sPalDef* GetPalDef(int nIndex) { return &rgPalettes[nIndex]; };
    sPalSep* GetSep(int nPal, int nSep) { return rgPalettes[nPal].SepList[nSep]; };
    sPalRedir* GetRedir() { return rgRedir; };

    void FlushPalAll();
};

extern int LimitVal(int nVal, int nHI, int nLO);
