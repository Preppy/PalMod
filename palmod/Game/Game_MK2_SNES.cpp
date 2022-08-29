#include "StdAfx.h"
#include "GameDef.h"
#include "Game_MK2_SNES.h"

CGame_MK2_SNES::MK2LoadingKey CGame_MK2_SNES::eVersionToLoad = MK2LoadingKey::Version1dot0;

void CGame_MK2_SNES::SetSpecialRuleForFileName(std::wstring strFileName)
{
    if (_wcsicmp(strFileName.c_str(), MK2_SNES_FileLoadingData_V1dot1.rgFileList.at(0).strFileName.c_str()) == 0)
    {
        eVersionToLoad = MK2LoadingKey::Version1dot1;
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
