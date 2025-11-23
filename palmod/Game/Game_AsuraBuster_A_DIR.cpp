#include "StdAfx.h"
#include "Game_AsuraBuster_A_DIR.h"
#include "PalMod.h"

CGame_AsuraBuster_A_DIR::ABLoadingKey CGame_AsuraBuster_A_DIR::m_eVersionToLoad = ABLoadingKey::AB_Japan1;

void CGame_AsuraBuster_A_DIR::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, ABLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"24-31.pgm3", ABLoadingKey::AB_JapanR },
        { L"pgm3.u1", ABLoadingKey::AB_Japan1 },
        { L"pgm3_583a.u1", ABLoadingKey::AB_Japan2 },
        { L"uspgm3.u1", ABLoadingKey::AB_USA },
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
        m_eVersionToLoad = ABLoadingKey::AB_Japan1;
    }

    return;
}

CGame_AsuraBuster_A_DIR::CGame_AsuraBuster_A_DIR(uint32_t nConfirmedROMSize /*= -1*/)
{
    bool fImperfect = false;

    switch (m_eVersionToLoad)
    {
        case ABLoadingKey::AB_JapanR:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_JapanR);
            fImperfect = true;
            break;
        case ABLoadingKey::AB_Japan1:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Japan1);
            break;
        case ABLoadingKey::AB_Japan2:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Japan2);
            fImperfect = true;
            break;
        case ABLoadingKey::AB_USA:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_USA);
            fImperfect = true;
            break;
    };

    if (fImperfect)
    {
        MessageBox(g_appHWnd, L"Palettes are not fully mapped out for this variant.  Don't use Portrait, Stage, or Bonus palettes.  The core characters should be fine.", GetHost()->GetAppName(), MB_ICONWARNING);
    }
}

sFileRule CGame_AsuraBuster_A_DIR::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        case ABLoadingKey::AB_JapanR:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_JapanR);
        case ABLoadingKey::AB_Japan1:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Japan1);
        case ABLoadingKey::AB_Japan2:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Japan2);
        case ABLoadingKey::AB_USA:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USA);
    };
}
