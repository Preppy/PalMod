#include "StdAfx.h"
#include "Game_DBZEB_DS.h"

CGame_DBZEB_DS::DBZEBLoadingKey CGame_DBZEB_DS::m_eROMToLoad = DBZEBLoadingKey::USA;

void CGame_DBZEB_DS::SetSpecialRuleForFileName(std::wstring strFileName)
{
    if (strFileName.find(L"europe") != std::wstring::npos)
    {
        m_eROMToLoad = DBZEBLoadingKey::Europe;
    }
    else
    {
        m_eROMToLoad = DBZEBLoadingKey::USA;
    }

    return;
}

sFileRule CGame_DBZEB_DS::GetRule(uint32_t nRuleId)
{
    switch (m_eROMToLoad)
    {
        case DBZEBLoadingKey::Europe:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Europe);
        case DBZEBLoadingKey::USA:
        default:
            return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_USA);
    }
}

CGame_DBZEB_DS::CGame_DBZEB_DS(uint32_t nConfirmedROMSize)
{
    m_fGameUsesAlphaValue = true;

    switch (m_eROMToLoad)
    {
        case DBZEBLoadingKey::Europe:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_Europe);
            break;
        case DBZEBLoadingKey::USA:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_USA);
            break;
    }
}
