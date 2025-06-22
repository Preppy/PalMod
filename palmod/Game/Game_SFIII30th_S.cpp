#include "StdAfx.h"
#include "Game_SFIII30th_S.h"

SFIII30th_LoadingKey CGame_SFIII30th_S::m_eVersionToLoad = SFIII30th_LoadingKey::SFIII3_3S_51;

extern uint32_t cps3_mask(uint32_t address, uint32_t key1, uint32_t key2);
const auto SF30thCollection_ROM10_StartingOffset = 0xda78249;

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
        case SFIII30th_LoadingKey::SFIII3_3S_10:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_SFIII_3S_10);
            break;
        case SFIII30th_LoadingKey::SFIII3_3S_51:
        default:
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_SFIII_3S_51);
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
        case SFIII30th_LoadingKey::SFIII3_3S_10:
            // 10 starts at 0xda78249 in the bundle
            m_nCurrentPaletteROMLocation = (m_nCurrentPaletteROMLocation / 4) + SF30thCollection_ROM10_StartingOffset;
            break;
        case SFIII30th_LoadingKey::SFIII3_3S_51:
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

            if (IsROMEncrypted())
            {
                const uint32_t nLocationAsUsedForMath = (m_nCurrentPaletteROMLocation - SF30thCollection_ROM10_StartingOffset) * 4;
                const uint32_t fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                const uint8_t cbStride = 4;

                for (uint32_t nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                {
                    uint8_t hiByte1, loByte1, hiByte2, loByte2;

                    // this rom is encrypted and is stored sequentially as four simms
                    LoadedFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount, CFile::begin);
                    LoadedFile->Read(&loByte1, 1);
                    LoadedFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount + 0x200000, CFile::begin);
                    LoadedFile->Read(&hiByte1, 1);
                    LoadedFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount + 0x400000, CFile::begin);
                    LoadedFile->Read(&loByte2, 1);
                    LoadedFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount + 0x600000, CFile::begin);
                    LoadedFile->Read(&hiByte2, 1);

                    uint32_t nNewData = (hiByte2 << 24) | (loByte2 << 16) | (hiByte1 << 8) | loByte1;

                    nNewData = _byteswap_ulong(nNewData);
                    nNewData ^= (cps3_mask(0x6000000 + nLocationAsUsedForMath + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                    nNewData = _byteswap_ulong(nNewData);
                    *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) = (nNewData & 0xFFFF0000) >> 16;
                    *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount)) = nNewData & 0x0000FFFF;

#ifdef Default_Gill_Palette
                        00 00 7F BC 7F 59 7F 16 7A B3 72 71 66 2E 55 CC 51 AB 49 8A 45 48 3D 27 65 B0 5D 8E 55 8D 55 8D
                        4B 0E 67 BF 4A FF 3A 3E 2D DD 31 BB 31 7A 2D 37 29 13 24 F1 24 AF 14 4B 45 56 3D 34 35 12 35 12
                        00 00 03 DE 03 5E 0A 9E 0A 1E 09 9A 01 14 00 90 00 00 00 00 7B DE 7B DE 73 9C 63 18 5A D6 4A 52
                        39 CE 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00 00
#endif
                }
            }
            else
            {
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
    }

    // Don't run the table error check here, the math will be wrong due to the simm splits
#ifdef DoNotUseThisItDoesntWork
    CheckForErrorsInTables();
#endif

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

                if (IsROMEncrypted())
                {
                    const uint32_t nLocationAsUsedForMath = (m_nCurrentPaletteROMLocation - SF30thCollection_ROM10_StartingOffset) * 4;
                    const uint32_t fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                    const uint8_t cbStride = 4;

                    SaveFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    uint32_t nDataToWrite = 0;

                    for (uint16_t nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                    {
                        nDataToWrite = *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount));
                        nDataToWrite |= (*(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) << 16);
                        nDataToWrite = _byteswap_ulong(nDataToWrite);
                        nDataToWrite ^= (cps3_mask(0x6000000 + nLocationAsUsedForMath + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                        nDataToWrite = _byteswap_ulong(nDataToWrite);

                        const uint8_t hiByte2 = nDataToWrite >> 24;
                        const uint8_t loByte2 = (nDataToWrite >> 16) & 0xFF;
                        const uint8_t hiByte1 = (nDataToWrite >> 8) & 0xFF;
                        const uint8_t loByte1 = nDataToWrite & 0xFF;

                        // this rom is encrypted and is stored sequentially as four simms
                        SaveFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount, CFile::begin);
                        SaveFile->Write(&loByte1, 1);
                        SaveFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount + 0x200000, CFile::begin);
                        SaveFile->Write(&hiByte1, 1);
                        SaveFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount + 0x400000, CFile::begin);
                        SaveFile->Write(&loByte2, 1);
                        SaveFile->Seek(static_cast<LONGLONG>(m_nCurrentPaletteROMLocation) + nBlockCount + 0x600000, CFile::begin);
                        SaveFile->Write(&hiByte2, 1);
                    }
                }
                else
                {
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
