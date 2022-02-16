#pragma once
#include "Default.h"
#include "PalTool.h"

#define sq(x) ((double)x*x)

struct sPalRedir
{
    int nDefIndex;
    int nSepIndex;
};

struct sPalSep
{
    WCHAR szDesc[MAX_DESCRIPTION_LENGTH];
    uint32_t nStart;
    uint32_t nAmt;
};

struct sPalDef
{
    COLORREF* pPal = nullptr;
    COLORREF* pBasePal = nullptr;
    UINT16 uPalSz = 0;

    uint32_t uUnitId = 0;
    uint32_t uCollectionId = 0;
    uint32_t uPalId = 0;

    sPalSep* SepList[MAX_SEPARATORS] = {};
    UINT16 uSepAmt = 0;

    BOOL fIsChanged = FALSE;
    BOOL fPalAvailable = FALSE;
};

enum ePalType
{
    PALTYPE_32STEPS,
    PALTYPE_16STEPS,
    PALTYPE_8STEPS,
    PALTYPE_256STEPS,
    // NeoGeo is a special snowflake: see comments for k_nRGBPlaneAmtForRGB666 in ColorSystem.cpp
    PALTYPE_NEOGEO,
};

class CPalGroup
{
private:
    sPalDef rgPalettes[MAX_PALETTES_DISPLAYABLE];
    sPalRedir rgRedir[MAX_PALETTES_DISPLAYABLE * MAX_SEPARATORS];
    uint32_t nRedirCtr = 0;
    uint32_t m_nCurrPalAmt = 0;

    void InitPal();

    BOOL FlushPal(uint32_t nIndex);

public:
    CPalGroup(void);
    ~CPalGroup(void);

    uint32_t GetAddIndex() { return m_nCurrPalAmt - 1; };

    uint32_t GetPalAmt() { return m_nCurrPalAmt; };

    BOOL AddPal(COLORREF* pPal, UINT16 uPalSz, uint32_t uUnitId, uint32_t uPalId);
    BOOL AddSep(uint32_t nIndex, LPCWSTR szDesc, uint32_t nStart, uint32_t nAmt);

    void SetRGBA(COLORREF* crTarget, UINT8 rVal, UINT8 gVal, UINT8 bVal, UINT8 aVal = 0);
    void SetHLSA(COLORREF* crTarget, double dH, double dL, double dS, UINT8 aVal);

    void SetAddHLSA(COLORREF crSrc, COLORREF* crTarget, double fpAddH, double fpAddL, double fpAddS, int uAddA);
    void AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA);

    sPalDef* GetPalDef(uint32_t nIndex) { return &rgPalettes[nIndex]; };
    sPalSep* GetSep(uint32_t nPal, uint32_t nSep) { return rgPalettes[nPal].SepList[nSep]; };
    sPalRedir* GetRedir() { return rgRedir; };

    void FlushPalAll();
};

extern int LimitVal(int nVal, int nHI, int nLO);
