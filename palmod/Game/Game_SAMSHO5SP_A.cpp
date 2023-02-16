#include "StdAfx.h"
#include "Game_SAMSHO5SP_A.h"

CGame_SAMSHO5SP_A::SamSho5SpLoadingKey CGame_SAMSHO5SP_A::m_eROMToLoad = SamSho5SpLoadingKey::NeoGeo;

void CGame_SAMSHO5SP_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SamSho5SpLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"272-p1.p1", SamSho5SpLoadingKey::NeoGeo },
        { L"272-p1ca.p1", SamSho5SpLoadingKey::NeoGeo },
        { L"272-p1c.p1", SamSho5SpLoadingKey::NeoGeo },

        { L"273-p1.bin" ,SamSho5SpLoadingKey::NeoGeoLarge },

        { L"p1h.bin", SamSho5SpLoadingKey::Steam },
       
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eROMToLoad = result->second;
    }
    else
    {
        m_eROMToLoad = SamSho5SpLoadingKey::NeoGeo;
    }

    return;
}

sFileRule CGame_SAMSHO5SP_A::GetRule(uint32_t nRuleId)
{
    switch (m_eROMToLoad)
    {
    case SamSho5SpLoadingKey::NeoGeo:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_NeoGeo);
    case SamSho5SpLoadingKey::NeoGeoLarge:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_NeoGeoLarge);
    case SamSho5SpLoadingKey::Steam:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Steam);
    }
}

CGame_SAMSHO5SP_A::CGame_SAMSHO5SP_A(uint32_t nConfirmedROMSize)
{
    switch (m_eROMToLoad)
    {
    case SamSho5SpLoadingKey::NeoGeo:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_NeoGeo);
        break;
    case SamSho5SpLoadingKey::NeoGeoLarge:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_NeoGeoLarge);
        break;
    case SamSho5SpLoadingKey::Steam:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Steam);
        break;
    }
}
