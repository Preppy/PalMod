#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MK2_SNES.h"

MK2LoadingKey CGame_MK2_SNES::eVersionToLoad = MK2LoadingKey::Version1dot0;

void CGame_MK2_SNES::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, MK2LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"mortal kombat ii (usa).sfc", MK2LoadingKey::Version1dot0 },
        { L"mortal_kombat_ii_usa.sfc", MK2LoadingKey::Version1dot1 },
        { L"mortal kombat ii (usa) (rev 1).sfc", MK2LoadingKey::Version1dot1 },
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
        eVersionToLoad = MK2LoadingKey::Version1dot0;
    }

    return;
}

sFileRule CGame_MK2_SNES::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (eVersionToLoad == MK2LoadingKey::Version1dot0) ? MK2_SNES_FileLoadingData_V1dot0 : MK2_SNES_FileLoadingData_V1dot1);
}

CGame_MK2_SNES::CGame_MK2_SNES(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (eVersionToLoad == MK2LoadingKey::Version1dot0) ? m_sCoreGameData_V1dot0 : m_sCoreGameData_V1dot1);
}
