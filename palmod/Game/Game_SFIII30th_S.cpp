#include "StdAfx.h"
#include "Game_SFIII30th_S.h"

SFIII30th_LoadingKey CGame_SFIII30th_S::m_eVersionToLoad = SFIII30th_LoadingKey::SFIII3_3S;

CGame_SFIII30th_S::CGame_SFIII30th_S(uint32_t nConfirmedROMSize, SFIII30th_LoadingKey eGameToLoad /* = SFIII30th_LoadingKey::SFIII3_3S */)
{
    m_eVersionToLoad = eGameToLoad;

    switch (m_eVersionToLoad)
    {
        case SFIII30th_LoadingKey::SFIII1_NG:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_SFIII_NG);
            break;
        case SFIII30th_LoadingKey::SFIII2_SI:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_SFIII_2I);
            break;
        case SFIII30th_LoadingKey::SFIII3_3S:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_SFIII_3S);
            break;
    }
}

void CGame_SFIII30th_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    CGameClassByDir::LoadSpecificPaletteData(nUnitId, nPalId);

    if (nUnitId != m_nExtraUnit)
    {
        switch (m_eVersionToLoad)
        {
        case SFIII30th_LoadingKey::SFIII1_NG:
            // Alex LP00 starts at 0x1e884a in the normal mbundle
            // Alex LP00 starts at 0x3d0600 in the naomi rom
            m_nCurrentPaletteROMLocation = (m_nCurrentPaletteROMLocation / 2) + 0x1e884a - 0x1E8300;
            break;
        case SFIII30th_LoadingKey::SFIII2_SI:
            // Alex LPP starts at 0x9cc4e8 in the normal mbundle
            // Alex LP00 starts at 0x398700 in the naomi rom
            m_nCurrentPaletteROMLocation = (m_nCurrentPaletteROMLocation / 2) + 0x9cc4e8 - 0x1CC380;
            break;
        case SFIII30th_LoadingKey::SFIII3_3S:
        default:
            // Alex LP00 starts at 0x11309f20 in the normal mbundle
            // Alex LP00 starts at 0x700600 in the naomi rom
            m_nCurrentPaletteROMLocation = (m_nCurrentPaletteROMLocation / 2) + 0x11109f20 - 0x380300;
            break;
        }
    }
}

BOOL CGame_SFIII30th_S::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
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

            for (uint32_t iRead = 0; iRead < m_nCurrentPaletteSizeInColors; iRead++)
            {
                uint8_t hiByte, loByte;

                LoadedFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + iRead, CFile::begin);
                LoadedFile->Read(&loByte, 1);
                // advance one simm length
                LoadedFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + iRead + 0x200000, CFile::begin);
                LoadedFile->Read(&hiByte, 1);

                m_pppDataBuffer[nUnitCtr][nPalCtr][iRead] = (hiByte << 8) | loByte;
            }
        }
    }

    // Don't run the table error check here, the math will be wrong due to the simm splits

    return TRUE;
}

BOOL CGame_SFIII30th_S::SaveFile(CFile* SaveFile, uint32_t nUnitId)
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

                for (uint32_t iWrite = 0; iWrite < m_nCurrentPaletteSizeInColors; iWrite++)
                {
                    const uint8_t hiByte = m_pppDataBuffer[nUnitCtr][nPalCtr][iWrite] >> 8;
                    const uint8_t loByte = m_pppDataBuffer[nUnitCtr][nPalCtr][iWrite] & 0x00ff;

                    SaveFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + iWrite, CFile::begin);
                    SaveFile->Write(&loByte, 1);
                    // advance one simm length
                    SaveFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + iWrite + 0x200000, CFile::begin);
                    SaveFile->Write(&hiByte, 1);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    CString strMsg;
    strMsg.Format(L"CGame_SFIII30th_S::SaveFile: Saved 0x%x palettes to disk for %u units\n", nTotalPalettesSaved, m_nUnitAmt);
    OutputDebugString(strMsg);

    return TRUE;
}
