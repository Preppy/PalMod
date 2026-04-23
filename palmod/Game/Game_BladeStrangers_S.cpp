#include "StdAfx.h"
#include "Game_BladeStrangers_S.h"
#include "BladeStrangers_S_DEF.h"
#include "..\PalMod.h"

int CGame_BladeStrangers_S::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_BladeStrangers_S::PostSetPal : Updating normal/CharaSelect for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    int nTotalPalettesChanged = 0; // always updating normal/CharaSelect, but we have no onscreen entanglements in palmod to worry about

    if (wcsstr(m_sCoreGameData.srgLoadingData.at(nUnitId).strCharacter.c_str(), L"Emiko"))
    {
        std::array<uint32_t, 2> rgnPartnerUnitIds;
        // Emiko is three paired:
            // Emiko
            // Emiko (Clean-up...
            // Emike (CharaSelect)

        if (wcscmp(m_sCoreGameData.srgLoadingData.at(nUnitId).strCharacter.c_str(), L"Emiko") == 0)
        {
            rgnPartnerUnitIds = { nUnitId + 1, nUnitId + 2 };
        }
        else if (wcsstr(m_sCoreGameData.srgLoadingData.at(nUnitId).strCharacter.c_str(), L"CharaSelect"))
        {
            rgnPartnerUnitIds = { nUnitId - 2, nUnitId - 1 };
        }
        else
        {
            rgnPartnerUnitIds = { nUnitId - 1, nUnitId + 1 };
        }

        GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated 2 partner palettes as well.");

        for (auto& peerUnit : rgnPartnerUnitIds)
        {
            LoadSpecificPaletteData(nUnitId, nPalId);
            MarkPaletteDirty(peerUnit, nPalId);

            for (uint16_t nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
            {
                m_pppDataBuffer32[peerUnit][nPalId][nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nArrayIndex];
            }
        }
    }
    else
    {
        uint32_t nPartnerUnitId = nUnitId;

        if (wcsstr(m_sCoreGameData.srgLoadingData.at(nUnitId).strCharacter.c_str(), L"CharaSelect"))
        {
            nPartnerUnitId--;
            GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated normal palette as well.");
        }
        else
        {
            nPartnerUnitId++;
            GetHost()->GetPalModDlg()->SetStatusText(L"Updated: updated CharaSelect palette as well.");
        }

        LoadSpecificPaletteData(nUnitId, nPalId);
        MarkPaletteDirty(nPartnerUnitId, nPalId);

        for (uint16_t nArrayIndex = 0; nArrayIndex < m_nCurrentPaletteSizeInColors; nArrayIndex++)
        {
            m_pppDataBuffer32[nPartnerUnitId][nPalId][nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nArrayIndex];
        }
    }

    return nTotalPalettesChanged;
}
