#include "StdAfx.h"
#include "Game_XMVSF_A.h"

int CGame_XMVSF_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    int nTotalPalettesChanged = 0;

    if (nUnitId != m_sCoreGameData.nUnitCount)
    {
        CString strMessage;
        strMessage.Format(L"CGame_XMVSF_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);

        if (pThisPalette && pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            nTotalPalettesChanged = ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }

    return nTotalPalettesChanged;
}
