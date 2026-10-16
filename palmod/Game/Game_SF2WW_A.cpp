#include "StdAfx.h"
#include "Game_SF2WW_A.h"

CGame_SF2WW_A::SF2WWLoadingKey CGame_SF2WW_A::m_eVersionToLoad = SF2WWLoadingKey::ROM10_V2;

void CGame_SF2WW_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF2WWLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"sf2_28.9e", SF2WWLoadingKey::ROM09_V1 },
        { L"sf2_28a.9e", SF2WWLoadingKey::ROM09_V2},
        { L"sf2_28b.9e", SF2WWLoadingKey::ROM09_V3 },
        { L"sf2e_28d.9e", SF2WWLoadingKey::ROM09_V4 },
        { L"sf2e_28e.9e", SF2WWLoadingKey::ROM09_V5 },
        { L"sf2e_28f.9e", SF2WWLoadingKey::ROM09_V6 }, // works
        { L"sf2e_28g.9e", SF2WWLoadingKey::ROM09_V7 },

        { L"sf2_29.10e", SF2WWLoadingKey::ROM10_V1 },
        { L"sf2_29b.10e", SF2WWLoadingKey::ROM10_V2 },
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
        m_eVersionToLoad = SF2WWLoadingKey::ROM10_V2;
    }

    return;
}

CGame_SF2WW_A::CGame_SF2WW_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
        default:
        case SF2WWLoadingKey::ROM09_V1:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V1);
            break;
        case SF2WWLoadingKey::ROM09_V2:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V2);
            break;
        case SF2WWLoadingKey::ROM09_V3:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V3);
            break;
        case SF2WWLoadingKey::ROM09_V4:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V4);
            break;
        case SF2WWLoadingKey::ROM09_V5:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V5);
            break;
        case SF2WWLoadingKey::ROM09_V6:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V6);
            break;
        case SF2WWLoadingKey::ROM09_V7:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09_V7);
            break;

        case SF2WWLoadingKey::ROM10_V1:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_10_V1);
            break;
        case SF2WWLoadingKey::ROM10_V2:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_10_V2);
            break;
    }
}

sFileRule CGame_SF2WW_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        default:
        case SF2WWLoadingKey::ROM09_V1:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V1);
        case SF2WWLoadingKey::ROM09_V2:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V2);
        case SF2WWLoadingKey::ROM09_V3:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V3);
        case SF2WWLoadingKey::ROM09_V4:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V4);
        case SF2WWLoadingKey::ROM09_V5:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V5);
        case SF2WWLoadingKey::ROM09_V6:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V6);
        case SF2WWLoadingKey::ROM09_V7:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09_V7);

        case SF2WWLoadingKey::ROM10_V1:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_10_V1);
        case SF2WWLoadingKey::ROM10_V2:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_10_V2);
    }
}
