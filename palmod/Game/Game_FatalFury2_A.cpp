#include "StdAfx.h"
#include "Game_FatalFury2_A.h"

CGame_FatalFury2_A::FF2LoadingKey CGame_FatalFury2_A::eVersionToLoad = FF2LoadingKey::Normal;

void CGame_FatalFury2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, FF2LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"047-p1.bin", FF2LoadingKey::Normal },
        { L"047-p1.p1", FF2LoadingKey::Jumbo },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        eVersionToLoad = result->second;
    }
    else
    {
        eVersionToLoad = FF2LoadingKey::Normal;
    }

    return;
}

CGame_FatalFury2_A::CGame_FatalFury2_A(uint32_t nConfirmedROMSize /*= -1*/)
{
    InitializeGame(nConfirmedROMSize, (eVersionToLoad == FF2LoadingKey::Normal) ? m_sCoreGameData_Normal : m_sCoreGameData_Alt);
}

sFileRule CGame_FatalFury2_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (eVersionToLoad == FF2LoadingKey::Normal) ? FatalFury2_A_FileLoadingData_Normal : FatalFury2_A_FileLoadingData_Alt);
}

uint32_t CGame_FatalFury2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.bin", 0xbe40ea92, 0 },
        { L"Fatal Fury 2 (Neo-Geo)", L"047-p1.p1", 0xecfdbb69, 0 },
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
