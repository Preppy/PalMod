#include "StdAfx.h"
#include "Game_FightersHistory_A_DIR.h"

CGame_FightersHistory_A_DIR::FHLoadingKey CGame_FightersHistory_A_DIR::m_eVersionToLoad = FHLoadingKey::FH_World4309;

void CGame_FightersHistory_A_DIR::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, FHLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"lj00-3.1f", FHLoadingKey::FH_US4209 },
        { L"lc00-1.1f", FHLoadingKey::FH_World4309 },
        { L"le00-1.1f", FHLoadingKey::FH_US4206 },
        { L"le00.1f",   FHLoadingKey::FH_US4205 },
        { L"lb00.1f",   FHLoadingKey::FH_Japan4107 },
        { L"kx00-3.1f", FHLoadingKey::FH_World4307 },
        { L"kx00-2.1f", FHLoadingKey::FH_World4305 },
        { L"kz00-1.1f", FHLoadingKey::FH_US4203 },
        { L"kw00-3.1f", FHLoadingKey::FH_Japan4105 },
        { L"kw00-2.1f", FHLoadingKey::FH_Japan4104 },
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
        m_eVersionToLoad = FHLoadingKey::FH_World4309;
    }

    return;
}

CGame_FightersHistory_A_DIR::CGame_FightersHistory_A_DIR(uint32_t nConfirmedROMSize /*= -1*/)
{
    switch (m_eVersionToLoad)
    {
        case FHLoadingKey::FH_US4209:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_US4209);
            break;
        case FHLoadingKey::FH_World4309:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_World4309);
            break;
        case FHLoadingKey::FH_US4206:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_US4206);
            break;
        case FHLoadingKey::FH_US4205:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_US4205);
            break;
        case FHLoadingKey::FH_Japan4107:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Japan4107);
            break;
        case FHLoadingKey::FH_World4307:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_World4307);
            break;
        case FHLoadingKey::FH_World4305:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_World4305);
            break;
        case FHLoadingKey::FH_US4203:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_US4203);
            break;
        case FHLoadingKey::FH_Japan4105:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Japan4105);
            break;
        case FHLoadingKey::FH_Japan4104:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Japan4104);
            break;
    };
}

sFileRule CGame_FightersHistory_A_DIR::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
        case FHLoadingKey::FH_US4209:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_US4209);
        case FHLoadingKey::FH_World4309:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_World4309);
        case FHLoadingKey::FH_US4206:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_US4206);
        case FHLoadingKey::FH_US4205:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_US4205);
        case FHLoadingKey::FH_Japan4107:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Japan4107);
        case FHLoadingKey::FH_World4307:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_World4307);
        case FHLoadingKey::FH_World4305:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_World4305);
        case FHLoadingKey::FH_US4203:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_US4203);
        case FHLoadingKey::FH_Japan4105:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Japan4105);
        case FHLoadingKey::FH_Japan4104:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Japan4104);
    };
}
