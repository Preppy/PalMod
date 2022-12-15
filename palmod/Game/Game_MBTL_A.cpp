#include "StdAfx.h"
#include "Game_MBTL_A.h"
#include "MBTL_S_DEF.h"
#include "..\PalMod.h"

int CGame_MBTL_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_MBTL_A::PostSetPal : Updating left/right partner for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    int nTotalPalettesChanged = 0; // always updating left/right, but we have no onscreen entanglements in palmod to worry about

    // MBTL post-processing presumes two paired nodes

    uint32_t nPartnerId = nPalId;
    const uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, 0);

    // Flip to the left/right partner
    if (nPalId >= nNodeCount)
    {
        nPartnerId -= nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Left partner palette as well.");
    }
    else
    {
        nPartnerId += nNodeCount;
        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated Right partner palette as well.");
    }

    LoadSpecificPaletteData(nUnitId, nPalId);
    MarkPaletteDirty(nUnitId, nPartnerId);

    for (uint16_t nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
    {
        m_pppDataBuffer32[nUnitId][nPartnerId][nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nArrayIndex];
    }

    // Red Arcueid uses flipped glove positioning: adjust for that here.
    if (wcscmp(m_sCoreGameData.srgLoadingData.at(nUnitId).strCharacter.c_str(), L"Red Arcueid") == 0)
    {
        const uint16_t nGlove1Position = 96;
        const uint16_t nGlove2Position = 103;
        const uint16_t nGloveLength = 6;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nGloveLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nGlove1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nGlove2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nGlove2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nGlove1Position + nArrayIndex];
        }
    }

    return nTotalPalettesChanged;
}
