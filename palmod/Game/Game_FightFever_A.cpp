#include "StdAfx.h"
#include "Game_FightFever_A.h"

CGame_FightFever_A::FFLoadingKey CGame_FightFever_A::m_eVersionToLoad = FFLoadingKey::Set2;

void CGame_FightFever_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, FFLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"060-p1.bin", FFLoadingKey::Set1 },
        { L"060-p1.p1", FFLoadingKey::Set2 },
        { L"060-p1.rom", FFLoadingKey::Set2 }, // Unclear if this is ever actually used
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
        m_eVersionToLoad = FFLoadingKey::Set2;
    }

    return;
}

CGame_FightFever_A::CGame_FightFever_A(uint32_t nConfirmedROMSize /*= -1*/)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == FFLoadingKey::Set1) ? m_sCoreGameData_Set1 : m_sCoreGameData_Set2);
}

sFileRule CGame_FightFever_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == FFLoadingKey::Set1) ? m_sFileLoadingData_Set1 : m_sFileLoadingData_Set2);
}

uint32_t CGame_FightFever_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fight Fever (Neo-Geo set 1)", L"060-p1.rom", 0x3032041b, 0 },
        { L"Fight Fever (Neo-Geo set 2)", L"060-p1.p1", 0x2a104b50, 0 },
        { L"Fight Fever (Neo-Geo)", L"060-p1.rom", 0x2a104b50, 0 }, // Unclear if this is ever used: contained in the ggpofba zip
    };

    if (ppKnownROMSet)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}
