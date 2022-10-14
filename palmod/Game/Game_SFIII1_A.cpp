#include "StdAfx.h"
#include "Game_SFIII1_A.h"

void CGame_SFIII1_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    if (m_nExtraUnit != nUnitId)
    {
        CString strMessage;
        strMessage.Format(L"CGame_SFIII1_A::PostSetPal : Checking additional change requirements for unit %u palette %u.\n", nUnitId, nPalId);
        OutputDebugString(strMessage);

        const sGame_PaletteDataset* pThisPalette = GetSpecificPalette(nUnitId, nPalId);
        if (pThisPalette->pExtraProcessing && pThisPalette->pExtraProcessing->pProcessingSteps.size())
        {
            OutputDebugString(L"\tThis palette is linked to additional palettes: updating those as well now.\n");
            ProcessAdditionalPaletteChangesRequired(nUnitId, nPalId, pThisPalette->pExtraProcessing->pProcessingSteps);
        }
        else
        {
            OutputDebugString(L"\tNo further processing needed.\n");
        }
    }
}
