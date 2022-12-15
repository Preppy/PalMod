#include "StdAfx.h"
#include "Game_DBFCI_A.h"
#include "DBFCI_S_DEF.h"
#include "..\PalMod.h"

int CGame_DBFCI_A::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_DBFCI_A::PostSetPal : Updating left/right partner for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    int nTotalPalettesChanged = 0; // always updating left/right, but we have no onscreen entanglements in palmod to worry about

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

    if (wcscmp(m_sCoreGameData.srgLoadingData.at(nUnitId).strCharacter.c_str(), L"Rentaro") == 0)
    {
        const uint16_t nEye1Position = 11;
        const uint16_t nEye2Position = 27;
        const uint16_t nEyeLength = 3;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nEyeLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye1Position + nArrayIndex];
        }
    }

    return nTotalPalettesChanged;
}
