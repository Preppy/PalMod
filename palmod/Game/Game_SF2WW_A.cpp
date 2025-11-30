#include "StdAfx.h"
#include "Game_SF2WW_A.h"

CGame_SF2WW_A::SF2WWLoadingKey CGame_SF2WW_A::m_eVersionToLoad = SF2WWLoadingKey::ROM10;

void CGame_SF2WW_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF2WWLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"sf2e_28g.9e", SF2WWLoadingKey::ROM09 },
        { L"sf2_29b.10e", SF2WWLoadingKey::ROM10 },
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
        m_eVersionToLoad = SF2WWLoadingKey::ROM09;
    }

    return;
}

CGame_SF2WW_A::CGame_SF2WW_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
        case SF2WWLoadingKey::ROM09:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_09);
            break;
        case SF2WWLoadingKey::ROM10:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_10);
            break;
    }
}

sFileRule CGame_SF2WW_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        case SF2WWLoadingKey::ROM09:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_09);
        case SF2WWLoadingKey::ROM10:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_10);
    }
}
