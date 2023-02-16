#include "StdAfx.h"
#include "Game_StreetFighter_A.h"

CGame_StreetFighter_A::SF1LoadingKey CGame_StreetFighter_A::m_eVersionToLoad = SF1LoadingKey::USSet1;

void CGame_StreetFighter_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF1LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"sfd-19.2a", SF1LoadingKey::USSet1 },
        { L"sfs19u.1a", SF1LoadingKey::USSet2 },
        { L"sf-19.bin", SF1LoadingKey::Japan },
        { L"sfd-19", SF1LoadingKey::USSet1Alt },
        { L"sfe-19", SF1LoadingKey::USSet1MAME },
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
        m_eVersionToLoad = SF1LoadingKey::USSet1;
    }

    return;
}

CGame_StreetFighter_A::CGame_StreetFighter_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SF1LoadingKey::USSet1:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_USSet1);
        break;
    case SF1LoadingKey::USSet2:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_USSet2);
        break;
    case SF1LoadingKey::Japan:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Japan);
        break;
    case SF1LoadingKey::USSet1Alt:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_USSet1Alt);
        break;
    case SF1LoadingKey::USSet1MAME:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_USSet1MAME);
        break;
    }
}

sFileRule CGame_StreetFighter_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SF1LoadingKey::USSet1:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USSet1);
    case SF1LoadingKey::USSet2:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USSet2);
    case SF1LoadingKey::Japan:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Japan);
    case SF1LoadingKey::USSet1Alt:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USSet1Alt);
    case SF1LoadingKey::USSet1MAME:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USSet1MAME);
    }
}
