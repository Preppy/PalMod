#include "StdAfx.h"
#include "Game_SF2HF_A.h"

CGame_SF2HF_A::SF2HFLoadingKey CGame_SF2HF_A::m_eVersionToLoad = SF2HFLoadingKey::ROM21;

void CGame_SF2HF_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF2HFLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"s2tu_21.6f", SF2HFLoadingKey::ROM21 },
        { L"s2tu_22.7f", SF2HFLoadingKey::ROM22 },
        { L"s2tu_23.8f", SF2HFLoadingKey::ROM23 },

        { L"s2te_21.6f", SF2HFLoadingKey::ROM21 },
        { L"s2te_22.7f", SF2HFLoadingKey::ROM22 },
        { L"s2te_23.8f", SF2HFLoadingKey::ROM23 },


        { L"s2tj_21.6f", SF2HFLoadingKey::ROM21 },
        { L"s2tj_22.7f", SF2HFLoadingKey::ROM22 },
        { L"s2tj_23.8f", SF2HFLoadingKey::ROM23 },

        { L"bundlestreetfighterii_hf.mbundle", SF2HFLoadingKey::SF30th },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = SF2HFLoadingKey::ROM21;
    }

    return;
}

CGame_SF2HF_A::CGame_SF2HF_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SF2HFLoadingKey::ROM21:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM21);
        break;
    case SF2HFLoadingKey::ROM22:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM22);
        break;
    case SF2HFLoadingKey::ROM23:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM23);
        break;
    case SF2HFLoadingKey::SF30th:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_SF30th);
        break;
    }
}

sFileRule CGame_SF2HF_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SF2HFLoadingKey::ROM21:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM21);
    case SF2HFLoadingKey::ROM22:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM22);
    case SF2HFLoadingKey::ROM23:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM23);
    case SF2HFLoadingKey::SF30th:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_SF30th);
    }
}
