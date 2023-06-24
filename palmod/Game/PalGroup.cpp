#include "StdAfx.h"
#include "ColorSystem.h"
#include "PalGroup.h"
#include "ColorScale.h"
#include "PalMod.h"
#include "math.h"

CPalGroup::CPalGroup()
{
    InitPal();
}

CPalGroup::~CPalGroup()
{
    FlushPalAll();
}

void CPalGroup::InitPal()
{
    for (uint32_t iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        rgPalettes[iPalette].pPal = nullptr;
        rgPalettes[iPalette].pBasePal = nullptr;
        rgPalettes[iPalette].uSepAmt = 0;
    }

    //Clear the redirect buffer
    memset(rgRedir, NULL, sizeof(sPalRedir) * MAX_PALETTES_DISPLAYABLE * MAX_SEPARATORS);
}

void CPalGroup::FlushPalAll()
{
    for (uint32_t iPalette = 0; iPalette < MAX_PALETTES_DISPLAYABLE; iPalette++)
    {
        FlushPal(iPalette);

        m_nCurrPalAmt = 0;
    }

    //Clear the redirect buffer
    memset(rgRedir, NULL, sizeof(sPalRedir) * MAX_PALETTES_DISPLAYABLE * MAX_SEPARATORS);
    nRedirCtr = 0;
}

BOOL CPalGroup::FlushPal(uint32_t nIndex)
{
    if (nIndex < MAX_PALETTES_DISPLAYABLE)
    {
        safe_delete_array(rgPalettes[nIndex].pPal);
        safe_delete_array(rgPalettes[nIndex].pBasePal);

        for (uint32_t iPos = 0; iPos < rgPalettes[nIndex].uSepAmt; iPos++)
        {
            safe_delete(rgPalettes[nIndex].SepList[iPos]);
        }

        memset(&rgPalettes[nIndex], NULL, sizeof(sPalDef));

        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

BOOL CPalGroup::AddSep(uint32_t nIndex, LPCWSTR szDesc, uint32_t nStart, uint32_t nAmt)
{
    // Separators enable us to have multiple groups of palettes within a palette display.
    if ((rgPalettes[nIndex].uSepAmt >= MAX_SEPARATORS) || ((nStart + nAmt) > rgPalettes[nIndex].uPalSz))
    {
        CString strWarning;
        strWarning.Format(L"WARNING: Trying to use too many separators for \"%s\": %u requested, %u allowed. Disallowing this.\n", szDesc, rgPalettes[nIndex].uSepAmt, MAX_SEPARATORS);
        OutputDebugString(strWarning);
        return FALSE;
    }

    sPalSep* NewSep = new sPalSep;

    _snwprintf(NewSep->szDesc, ARRAYSIZE(NewSep->szDesc), szDesc);
    NewSep->szDesc[ARRAYSIZE(NewSep->szDesc) - 1] = 0;

    NewSep->nStart = nStart;
    NewSep->nAmt = nAmt;

    rgPalettes[nIndex].SepList[rgPalettes[nIndex].uSepAmt] = NewSep;

    //Set a redir node
    rgRedir[nRedirCtr].nDefIndex = nIndex;
    rgRedir[nRedirCtr].nSepIndex = rgPalettes[nIndex].uSepAmt;
    nRedirCtr++;

    rgPalettes[nIndex].uSepAmt++;

    return TRUE;
}

BOOL CPalGroup::AddPal(COLORREF* pPal, uint16_t uPalSz, uint32_t uUnitId, uint32_t uPalId)
{
    if ((m_nCurrPalAmt >= MAX_PALETTES_DISPLAYABLE) || !pPal || !uPalSz)
    {
        OutputDebugString(L"CPalGroup::AddPal: bogus argument supplied\n");
        return FALSE;
    }

    sPalDef* CurrPal = &rgPalettes[m_nCurrPalAmt];

    //Init the basics of the palette
    CurrPal->pPal = pPal;
    CurrPal->uPalSz = uPalSz;
    CurrPal->uUnitId = uUnitId;
    CurrPal->uPalId = uPalId;

    CurrPal->uSepAmt = 0;
    CurrPal->fPalAvailable = true;
    CurrPal->fIsChanged = false;

    //Make a copy of the palette
    CurrPal->pBasePal = new COLORREF[uPalSz];
    memcpy(CurrPal->pBasePal, CurrPal->pPal, sizeof(COLORREF) * uPalSz);

    m_nCurrPalAmt++;

    return TRUE;
}

void CPalGroup::SetRGBA(COLORREF* crTarget, uint8_t rVal, uint8_t gVal, uint8_t bVal, uint8_t aVal)
{
    *crTarget = RGB(GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(rVal),
                    GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(gVal),
                    GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(bVal));
    *crTarget |= (COLORREF)aVal << 24;
}

void CPalGroup::SetHLSA(COLORREF* crTarget, double dH, double dL, double dS, uint8_t aVal)
{
    *crTarget = HLStoRGB(LimitHLS(dH), LimitHLS(dL), LimitHLS(dS));
    *crTarget = RGB(GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(*crTarget)),
                    GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(*crTarget)),
                    GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(*crTarget)));
    *crTarget |= static_cast<uint32_t>(aVal) << 24;
}

void CPalGroup::SetAddHLSA(COLORREF crSrc, COLORREF* crTarget, double fpAddH, double fpAddL, double fpAddS, int uAddA)
{
    double modH, modL, modS;

    RGBtoHLS(crSrc, &modH, &modL, &modS);

    *crTarget = HLStoRGB(
        SubHLS(modH + fpAddH),
        LimitHLS(modL + fpAddL),
        LimitHLS(modS + fpAddS)
    );

    *crTarget = RGB(GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetRValue(*crTarget)),
                    GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetGValue(*crTarget)),
                    GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_RGB(GetBValue(*crTarget)));
    
    *crTarget |= static_cast<uint32_t>(GetHost()->GetCurrGame()->GetNearestLegal8BitColorValue_A(LimitRGB(GetAValue(crSrc) + uAddA))) << 24;
}

void CPalGroup::AddColorStepsToColorValue(COLORREF crSrc, COLORREF* crTarget, int uStepsR, int uStepsG, int uStepsB, int uStepsA)
{
    int redSteps = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(GetRValue(crSrc)) + uStepsR;
    int greenSteps = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(GetGValue(crSrc)) + uStepsG;
    int blueSteps = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_RGB(GetBValue(crSrc)) + uStepsB;
    int alphaSteps = GetHost()->GetCurrGame()->GetColorStepFor8BitValue_A(GetAValue(crSrc)) + uStepsA;

    redSteps = GetHost()->GetCurrGame()->ValidateColorStep(redSteps);
    greenSteps = GetHost()->GetCurrGame()->ValidateColorStep(greenSteps);
    blueSteps = GetHost()->GetCurrGame()->ValidateColorStep(blueSteps);
    alphaSteps = GetHost()->GetCurrGame()->ValidateColorStep(alphaSteps);

    *crTarget = RGB(
        GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(redSteps),
        GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(greenSteps),
        GetHost()->GetCurrGame()->Get8BitValueForColorStep_RGB(blueSteps)
    );

    *crTarget |= GetHost()->GetCurrGame()->Get8BitValueForColorStep_A(alphaSteps) << 24;
}

int LimitVal(int nVal, int nHI, int nLO)
{
    return ((nVal > nHI) ? nHI : ((nVal < nLO) ? nLO : nVal));
}
