#include "StdAfx.h"
#include "Game_REDEARTH_A.h"

RedEarthLoadingKey CGame_REDEARTH_A::m_eROMToLoad = RedEarthLoadingKey::RedEarthROM31;

void CGame_REDEARTH_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, RedEarthLoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"30", RedEarthLoadingKey::RedEarthROM30 },
        { L"31", RedEarthLoadingKey::RedEarthROM31 },
        { L"50", RedEarthLoadingKey::RedEarthROM50 },
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
        m_eROMToLoad = RedEarthLoadingKey::RedEarthROM31;
    }

    return;
}

sFileRule CGame_REDEARTH_A::GetRule(uint32_t nRuleId)
{
    switch (m_eROMToLoad)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        return CGameClassByDir::GetRule(nRuleId, RedEarth_A_FileLoadingData_30);
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        return CGameClassByDir::GetRule(nRuleId, RedEarth_A_FileLoadingData_31);
    case RedEarthLoadingKey::RedEarthROM50:
        return CGameClassByDir::GetRule(nRuleId, RedEarth_A_FileLoadingData_50);
    }
}

CGame_REDEARTH_A::CGame_REDEARTH_A(uint32_t nConfirmedROMSize)
{
    switch (m_eROMToLoad)
    {
    case RedEarthLoadingKey::RedEarthROM30:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_30);
        break;
    case RedEarthLoadingKey::RedEarthROM31:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_31);
        break;
    case RedEarthLoadingKey::RedEarthROM50:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_50);
        break;
    }
}

void CGame_REDEARTH_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nExtraUnit)
    {
        if (nUnitId < ARRAYSIZE(REDEARTH_A_UNITS_31))
        {
            // ROM31: starts at 0x2880040 in steam
            // naomi LP Leo is at 0x2c88040
            m_nCurrentPaletteROMLocation = m_nCurrentPaletteROMLocation + 0x2880040;
        }
        else if (nUnitId < (ARRAYSIZE(REDEARTH_A_UNITS_31) + ARRAYSIZE(REDEARTH_A_UNITS_30)))
        {
            // ROM30: start 0x2080040
            // Leo Vs Text starts in naomi at 0x7eb000
            // Leo Vs Text starts in steam at 0x286b040
            m_nCurrentPaletteROMLocation = m_nCurrentPaletteROMLocation + 0x2080040;
        }
        else // REDEARTH_A_UNITS_50
        {
            // ROM50: starts at 0x4080040
            // Coming Next? starts at 0x358000 for naomi
            // Coming Next? starts at 0x43d8040 for steam
            m_nCurrentPaletteROMLocation = m_nCurrentPaletteROMLocation + 0x4080040;
        }
    }
}

BOOL CGame_REDEARTH_S::LoadFile(CFile* LoadedFile, uint32_t /* nUnitId */)
{
    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];

        // Layout is presorted
        m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

            // RedEarth is simply linear, happily
            LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

            for (uint32_t iRead = 0; iRead < m_nCurrentPaletteSizeInColors; iRead++)
            {
                uint16_t nByteSwap;

                LoadedFile->Read(&nByteSwap, 2);
                nByteSwap = _byteswap_ushort(nByteSwap);
                m_pppDataBuffer[nUnitCtr][nPalCtr][iRead] = nByteSwap;
            }
        }
    }

    CheckForErrorsInTables();

    return TRUE;
}

BOOL CGame_REDEARTH_S::SaveFile(CFile* SaveFile, uint32_t /* nUnitId */)
{
    uint32_t nTotalPalettesSaved = 0;

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                // RedEarth is simply linear, happily
                SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                for (uint32_t iWrite = 0; iWrite < m_nCurrentPaletteSizeInColors; iWrite++)
                {
                    const uint16_t nByteSwap = _byteswap_ushort(m_pppDataBuffer[nUnitCtr][nPalCtr][iWrite]);

                    SaveFile->Write(&nByteSwap, 2);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_REDEARTH_S::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, m_nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}
