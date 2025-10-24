#include "StdAfx.h"
#include "Game_TurfMasters_A.h"

CGame_TurfMasters_A::CGame_TurfMasters_A(uint32_t nConfirmedROMSize, LPCWSTR pszFilePath)
{
    ColorSystem::PopulateRGB666DynamicCLUT(const_cast<LPWSTR>(pszFilePath), 0x1ba030);

    InitializeGame(nConfirmedROMSize, m_sCoreGameData); 
}
