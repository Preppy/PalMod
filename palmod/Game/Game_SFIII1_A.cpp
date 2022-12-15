#include "StdAfx.h"
#include "Game_SFIII1_A.h"

int CGame_SFIII1_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    int nTotalPalettesChanged = 0;

    if (m_nExtraUnit != nUnitId)
    {
        CString strMessage;
        strMessage.Format(L"CGame_SFIII1_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);
        if (pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            nTotalPalettesChanged = ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }

    // We don't have any palettes entangled onscreen, so return 0 in order to avoid refreshing the onscreen stage palettes that have not been modified. 
    // The associated updated palettes are companion Dimmed stage elements that aren't being shown.
    return 0;
}
