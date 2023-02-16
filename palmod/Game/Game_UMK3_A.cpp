#include "StdAfx.h"
#include "Game_UMK3_A.h"

CGame_UMK3_A::UMK3ALoadingKey CGame_UMK3_A::m_eVersionToLoad = UMK3ALoadingKey::V12Normal;

void CGame_UMK3_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, UMK3ALoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"l1.0_mortal_kombat_3_u54_ultimate.u54", UMK3ALoadingKey::V10 },
        { L"l1.1_mortal_kombat_3_u54_ultimate.u54", UMK3ALoadingKey::V11 },

        { L"l1.2_mortal_kombat_3_u54_ultimate.u54", UMK3ALoadingKey::V12Normal },
        { L"um312u54.bin", UMK3ALoadingKey::V12Alt },

        { L"u54_umk3plus.u54", UMK3ALoadingKey::V12Plus },
        { L"umk3plus_beta1.u54", UMK3ALoadingKey::V12PlusBeta },
        { L"umk3te.u54", UMK3ALoadingKey::V12TE },
        { L"umk3uc-u54.bin", UMK3ALoadingKey::V12UC },
        { L"umk3uk-u54.bin", UMK3ALoadingKey::V12UK },
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
        m_eVersionToLoad = UMK3ALoadingKey::V12Normal;
    }

    return;
}

CGame_UMK3_A::CGame_UMK3_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case UMK3ALoadingKey::V10:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V10);
        break;
    case UMK3ALoadingKey::V11:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V11);
        break;
    case UMK3ALoadingKey::V12Normal:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12Normal);
        break;
    case UMK3ALoadingKey::V12Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12Alt);
        break;
    case UMK3ALoadingKey::V12Plus:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12Plus);
        break;
    case UMK3ALoadingKey::V12PlusBeta:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12PlusBeta);
        break;
    case UMK3ALoadingKey::V12TE:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12TE);
        break;
    case UMK3ALoadingKey::V12UC:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12UC);
        break;
    case UMK3ALoadingKey::V12UK:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_V12UK);
        break;
    }
}

sFileRule CGame_UMK3_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case UMK3ALoadingKey::V10:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V10);
    case UMK3ALoadingKey::V11:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V11);
    case UMK3ALoadingKey::V12Normal:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12Normal);
    case UMK3ALoadingKey::V12Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12Alt);
    case UMK3ALoadingKey::V12Plus:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12Plus);
    case UMK3ALoadingKey::V12PlusBeta:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12PlusBeta);
    case UMK3ALoadingKey::V12TE:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12TE);
    case UMK3ALoadingKey::V12UC:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12UC);
    case UMK3ALoadingKey::V12UK:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_V12UK);
    }
}
