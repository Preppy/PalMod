#include "StdAfx.h"
#include "Game_UNI2_S.h"
#include "..\PalMod.h"

int CGame_UNI2_S::PostSetPal(uint32_t nUnitId, uint32_t nPalId)
{
    CString strMessage;
    strMessage.Format(L"CGame_UNI2_S::PostSetPal : Updating left/right partner for unit %u palette %u.\n", nUnitId, nPalId);
    OutputDebugString(strMessage);

    uint32_t nPartnerId = nPalId;
    const uint32_t nNodeCount = GetNodeCountForCollection(nUnitId, 0);
    int nTotalPalettesChanged = 0; // always updating left/right, but we have no onscreen entanglements in palmod to worry about

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

    // Hilda uses flipped positioning: adjust for that here.
    if (wcscmp(UNI2CharacterData.at(nUnitId).strCharacter.c_str(), L"Hilda (CharaSelect)") == 0)
    {
        const uint16_t nEye1Position = 26;
        const uint16_t nEye2Position = 42;
        const uint16_t nEyeLength = 3;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nEyeLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye1Position + nArrayIndex];
        }

        const uint16_t nDress1Position = 64;
        const uint16_t nDress2Position = 70;
        const uint16_t nDressLength = 5;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nDressLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress1Position + nArrayIndex];
        }

        const uint16_t nBelt1Position = 80;
        const uint16_t nBelt2Position = 85;
        const uint16_t nBeltLength = 4;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nBeltLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt1Position + nArrayIndex];
        }
    }

    // Hilda uses flipped positioning: adjust for that here.
    if (wcscmp(UNI2CharacterData.at(nUnitId).strCharacter.c_str(), L"Hilda") == 0)
    {
        const uint16_t nEye1Position = 26;
        const uint16_t nEye2Position = 42;
        const uint16_t nEyeLength = 3;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nEyeLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nEye1Position + nArrayIndex];
        }

        const uint16_t nDress1Position = 64;
        const uint16_t nDress2Position = 70;
        const uint16_t nDressLength = 5;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nDressLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nDress2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nDress1Position + nArrayIndex];
        }

        const uint16_t nBelt1Position = 80;
        const uint16_t nBelt2Position = 85;
        const uint16_t nBeltLength = 4;

        for (uint16_t nArrayIndex = 0; nArrayIndex < nBeltLength; nArrayIndex++)
        {
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt2Position + nArrayIndex];
            m_pppDataBuffer32[nUnitId][nPartnerId][nBelt2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nBelt1Position + nArrayIndex];
        }
    }
    
    {
        // Seth uses flipped positioning: adjust for that here.
        if (wcscmp(UNI2CharacterData.at(nUnitId).strCharacter.c_str(), L"Seth (CharaSelect)") == 0)
        {
            const uint16_t nSetEye1Position = 11;
            const uint16_t nSetEye2Position = 27;
            const uint16_t nSetEyeLength = 3;

            for (uint16_t nArrayIndex = 0; nArrayIndex < nSetEyeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye1Position + nArrayIndex];
            }

            const uint16_t nKnife1Position = 144;
            const uint16_t nKnife2Position = 160;
            const uint16_t nKnifeLength = 10;

            for (uint16_t nArrayIndex = 0; nArrayIndex < nKnifeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife1Position + nArrayIndex];
            }
        }
    }
    {
        // Seth uses flipped positioning: adjust for that here.
        if (wcscmp(UNI2CharacterData.at(nUnitId).strCharacter.c_str(), L"Seth") == 0)
        {
            const uint16_t nSetEye1Position = 11;
            const uint16_t nSetEye2Position = 27;
            const uint16_t nSetEyeLength = 3;

            for (uint16_t nArrayIndex = 0; nArrayIndex < nSetEyeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nSetEye2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nSetEye1Position + nArrayIndex];
            }

            const uint16_t nKnife1Position = 144;
            const uint16_t nKnife2Position = 160;
            const uint16_t nKnifeLength = 10;

            for (uint16_t nArrayIndex = 0; nArrayIndex < nKnifeLength; nArrayIndex++)
            {
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife1Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife2Position + nArrayIndex];
                m_pppDataBuffer32[nUnitId][nPartnerId][nKnife2Position + nArrayIndex] = m_pppDataBuffer32[nUnitId][nPalId][nKnife1Position + nArrayIndex];
            }
        }
    }

    return nTotalPalettesChanged;
}
