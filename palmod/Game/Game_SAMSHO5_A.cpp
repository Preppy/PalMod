#include "StdAfx.h"
#include "Game_SAMSHO5_A.h"

CGame_SAMSHO5_A::SamSho5LoadingKey CGame_SAMSHO5_A::m_eROMToLoad = SamSho5LoadingKey::NeoGeo;

void CGame_SAMSHO5_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SamSho5LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"270-p1.bin", SamSho5LoadingKey::NeoGeo },
        { L"270-p1.p1", SamSho5LoadingKey::NeoGeo },
        { L"p1.bin", SamSho5LoadingKey::NeoGeo },
        { L"270-p1c.p1", SamSho5LoadingKey::NeoGeo },
        { L"ssvx_p1.rom", SamSho5LoadingKey::Xbox },
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
        m_eROMToLoad = SamSho5LoadingKey::NeoGeo;
    }

    return;
}

sFileRule CGame_SAMSHO5_A::GetRule(uint32_t nRuleId)
{
    switch (m_eROMToLoad)
    {
    case SamSho5LoadingKey::NeoGeo:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_NeoGeo);
    case SamSho5LoadingKey::Xbox:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_Xbox);
    }
}

CGame_SAMSHO5_A::CGame_SAMSHO5_A(uint32_t nConfirmedROMSize)
{
    switch (m_eROMToLoad)
    {
    case SamSho5LoadingKey::NeoGeo:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_NeoGeo);
        break;
    case SamSho5LoadingKey::Xbox:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_Xbox);
        break;
    }
}
