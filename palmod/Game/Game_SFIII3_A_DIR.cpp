#include "StdAfx.h"
#include "Game_SFIII3_A_DIR.h"
#include "..\PalMod.h"

UINT16 CGame_SFIII3_A_DIR::uRuleCtr = 0;

SFIII3_SupportedROMRevision CGame_SFIII3_A_DIR::m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_Unsupported;

// sfiii3 is the USA 990512 revision
// sfii3n is Japan 990512 NOCD
// 4rd is the SF3 4rd Remix
constexpr auto SFIII_Arcade_USA_ROM_Base = _T("sfiii3-simm");
constexpr auto SFIII_Arcade_JPN_ROM_Base = _T("sfiii3n-simm");
constexpr auto SFIII_Arcade_4rd_ROM_Base = _T("4rd-simm");

CGame_SFIII3_A_DIR::CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize /* = -1 */, int nSF3ModeToLoad /* = 51 */) :
    CGame_SFIII3_A(0x800000, nSF3ModeToLoad) // Let the core game know it's safe to load Extras
{
    switch (nSF3ModeToLoad)
    {
    case 4:
        m_nSelectedRom = 4;
        nGameFlag = SFIII3_A_DIR_4;
        nFileAmt = 2;
        break;
    case 10:
        m_nSelectedRom = 10;
        nGameFlag = SFIII3_A_DIR_10;
        nFileAmt = 4;
        break;
    case 51:
    default:
        m_nSelectedRom = 51;
        nGameFlag = SFIII3_A_DIR_51;
        nFileAmt = 8;
        break;
    }

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_SFIII3_A_DIR::~CGame_SFIII3_A_DIR(void)
{
    FlushChangeTrackingArray();
}

sFileRule CGame_SFIII3_A_DIR::GetRuleInternal(UINT16 nUnitId, int nSF3ModeToLoad)
{
    sFileRule NewFileRule;

    m_nSelectedRom = nSF3ModeToLoad;

    if (m_nSelectedRom != 4)
    {
        _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("%s%u.%u"), SFIII_Arcade_USA_ROM_Base, (m_nSelectedRom == 10) ? 1 : 5, (nUnitId & 0x00FF));

        // This is clunky: we should shift the SIMM games to handle loads themselves.
        NewFileRule.fHasAltName = TRUE;
        _stprintf_s(NewFileRule.szAltFileName, MAX_FILENAME_LENGTH, _T("%s%u.%u"), SFIII_Arcade_JPN_ROM_Base, (m_nSelectedRom == 10) ? 1 : 5, (nUnitId & 0x00FF));
    }
    else
    {
        _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("%s%u.%u"), SFIII_Arcade_4rd_ROM_Base, 5, ((nUnitId & 0x00FF) + 6));
    }

    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_SFIII3_A_DIR::GetNextRuleInternal(int nSF3ModeToLoad)
{
    m_nSelectedRom = nSF3ModeToLoad;

    const UINT16 nFilesNeeded = (m_nSelectedRom != 51) ? 2 : 8;
    sFileRule NewFileRule = GetRuleInternal(uRuleCtr, m_nSelectedRom);

    uRuleCtr++;

    if (uRuleCtr >= nFilesNeeded)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_SFIII3_A_DIR::GetSIMMLocationFromROMLocation(UINT32 nROMLocation)
{
    UINT32 nSIMMLocation = 0;

    // the 10 and 51 roms are split differently
    if (UsePaletteSetForGill())
    {
        nSIMMLocation = nROMLocation / 4;
    }
    else
    {
        nSIMMLocation = nROMLocation / 2;
    }

    return nSIMMLocation;
}

inline UINT32 CGame_SFIII3_A_DIR::GetLocationWithinSIMM(UINT32 nSIMMSetLocation)
{
    UINT32 nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nSFIII3SIMMLength)
    {
        nSIMMLocation -= c_nSFIII3SIMMLength;
    }

    return nSIMMLocation;
}

SFIII3_SupportedROMRevision CGame_SFIII3_A_DIR::GetSFIII3ROMVersion(CFile* LoadedFile)
{
    if (!UsePaletteSetForGill())
    {
        if (m_nSelectedRom != 4)
        {
            return SFIII3_SupportedROMRevision::SFIII3_51;
        }
        else
        {
            return SFIII3_SupportedROMRevision::SFIII3_4rd;
        }
    }

    // The two SF3 1.x simm variants have a shift in palette locations: account for that. 
    // We use byte-sniffing to ensure we know which revision we're looking at.
    const size_t nFileLengthToCheck = 32;
    UINT16* prgFileStart = new UINT16[nFileLengthToCheck];
    SFIII3_SupportedROMRevision detectedROMVersion = SFIII3_SupportedROMRevision::SFIII3_10_990512;

    struct SFIII3_ROM_Identification_Data
    {
        SFIII3_SupportedROMRevision sRevision = SFIII3_SupportedROMRevision::SFIII3_Unsupported;
        UINT16 nBytesToMatch[32] = {};
    };

    SFIII3_ROM_Identification_Data simm10s[] =
    {
        {
            SFIII3_SupportedROMRevision::SFIII3_10_990512,
            {   0x8843, 0x71e4, 0x08a3, 0x8459,     0x9463, 0x5e8f, 0xe2a8, 0x9134,     0x2047, 0x6d70, 0x083e, 0xf00b,
                0xa3b8, 0x84c3, 0xc379, 0x5fde,     0x33e3, 0x1ca5, 0xb120, 0x8214,     0x5250, 0x5aee, 0xcec4, 0x7f4d, 
                0xb6b3, 0x0efd, 0x1f84, 0x0d40,     0x02e5, 0x96c2, 0x6350, 0x3fa6 }
        },
        {
            SFIII3_SupportedROMRevision::SFIII3_10_990608,
            {   0xb80c, 0x0dc8, 0x72a3, 0x7735,     0x56fa, 0x2110, 0xe248, 0x224b,     0x2047, 0xe310, 0xaaf7, 0xb3a7,
                0x9378, 0x6223, 0xc39c, 0xc3de,     0x5f91, 0xb0aa, 0x9aef, 0xb299,     0x2f9c, 0x8a11, 0x5f94, 0x2f42, 
                0xd67c, 0xb1b2, 0x0f84, 0x71b0,     0x027a, 0x96c2, 0x2850, 0xb064  }
        },
    };

    LoadedFile->Seek(0x5024, CFile::begin);
    LoadedFile->Read(prgFileStart, nFileLengthToCheck * 2);

    bool fFoundMatch = false;

    for (UINT16 nROMInfoIndex = 0; nROMInfoIndex < ARRAYSIZE(simm10s); nROMInfoIndex++)
    {
        fFoundMatch = true;

        for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
        {
            if (prgFileStart[nIndex] != simm10s[nROMInfoIndex].nBytesToMatch[nIndex])
            {
                fFoundMatch = false;
                break;
            }
        }

        if (fFoundMatch)
        {
            detectedROMVersion = simm10s[nROMInfoIndex].sRevision;
            break;
        }
    }

    CString strByteWatch;
    OutputDebugString(_T("\tByte sniff for this ROM: \n"));
    for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
    {
        strByteWatch.Format(_T("0x%04x, "), prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }
    OutputDebugString(_T("\n"));

    if (detectedROMVersion == SFIII3_SupportedROMRevision::SFIII3_Unsupported)
    {
        OutputDebugString(_T("\tThis is an unknown SFIII3 ROM.\n"));
        MessageBox(g_appHWnd, _T("This doesn't look like a supported SFIII3 ROM.  We'll try, but if it doesn't look right please don't use this ROM."), GetHost()->GetAppName(), MB_ICONWARNING);
    }

    safe_delete_array(prgFileStart);

    return detectedROMVersion;
}

BOOL CGame_SFIII3_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    if (UsePaletteSetFor4rd())
    {
        // the 4rd package can be an incomplete set: skip forward
        nSIMMNumber += 6;
    }

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(_T("\tCGame_SFIII3_A_DIR::SaveFile: SIMM %u is a peer SIMM: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (((UsePaletteSetForGill()) && (nSIMMNumber > 3)) ||
             ((!UsePaletteSetForGill()) && (nSIMMNumber < 4)))
    {
        // Nothing useful on those SIMMs: that's ROM 50
        strInfo.Format(_T("CGame_SFIII3_A_DIR::SaveFile: SIMM %u is for ROM 50: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    if (UsePaletteSetForGill())
    {
        m_currentSFIII3ROMRevision = GetSFIII3ROMVersion(LoadedFile);
    }
    else if (UsePaletteSetFor4rd())
    {
        m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_4rd;
    }
    else
    {
        m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_51;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    // The 10 ROMs are interleaved into 4 files - 1.0, 1.1, 1.2, 1.3.
    const UINT32 nSIMMSetAdjustment = (nSIMMNumber > 3) ? 4 : 0;
    const UINT32 nBeginningRange = 0 + (c_nSFIII3SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    const UINT32 nEndingRange = (c_nSFIII3SIMMLength * 2) + (c_nSFIII3SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));

    CFile FilePeer;
    sFileRule PeerRule = GetNextRuleInternal(m_nSelectedRom);
    CString strPeerFilename;
    strPeerFilename.Format(_T("%s\\%s"), GetLoadDir(), PeerRule.szFileName);
    bool isUsingAltName = false;

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    if (!fFileOpened)
    {
        CString strAltFileName;

        strAltFileName.Format(_T("%s\\%s"), GetLoadDir(), PeerRule.szAltFileName);
        fFileOpened = FilePeer.Open(strAltFileName, CFile::modeRead | CFile::typeBinary);
        isUsingAltName = true;
    }

    CFile fileSIMM3;
    CFile fileSIMM4;

    if (UsePaletteSetForGill())
    {
        CString str10FileName;

        str10FileName.Format(L"%s\\%s1.2", GetLoadDir(), isUsingAltName ? SFIII_Arcade_JPN_ROM_Base : SFIII_Arcade_USA_ROM_Base);
        fFileOpened = fFileOpened && fileSIMM3.Open(str10FileName, CFile::modeRead | CFile::typeBinary);
        str10FileName.Format(L"%s\\%s1.3", GetLoadDir(), isUsingAltName ? SFIII_Arcade_JPN_ROM_Base : SFIII_Arcade_USA_ROM_Base);
        fFileOpened = fFileOpened && fileSIMM4.Open(str10FileName, CFile::modeRead | CFile::typeBinary);
    }

    if (fFileOpened)
    {
        UINT32 nPaletteLoadCount = 0;
        bool fShownCrossSIMMErrorOnce = false;

        strInfo.Format(_T("CGame_SFIII3_A_DIR::LoadFile: Preparing to load data from SIMM number %u with peer %s (range 0x%x to 0x%x)\n"), nSIMMNumber, PeerRule.szFileName, nBeginningRange, nEndingRange);
        OutputDebugString(strInfo);

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], 0, sizeof(UINT16 *) * nPalAmt);
            }

            // Layout is presorted
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
                    if (m_currentSFIII3ROMRevision == SFIII3_SupportedROMRevision::SFIII3_10_990512)
                    {
                        m_nCurrentPaletteROMLocation += 0x14c;
                    }

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSize) > c_nSFIII3SIMMLength)
                    {
                        if (!fShownCrossSIMMErrorOnce)
                        {
                            fShownCrossSIMMErrorOnce = true;
                            strInfo.Format(_T("Error: An extras file is trying to write from 0x%x to 0x%x, which crosses SIMM set boundaries.  This is not supported. Please remove that."), nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSize * 2));
                            MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        fSuccess = FALSE;
                    }

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(UINT16) * m_nCurrentPaletteSize);

                    if (UsePaletteSetForGill())
                    {
                        // this rom is encrypted
                        UINT32 fourByteBlocks = m_nCurrentPaletteSize >> 1;
                        const UINT8 cbStride = 4;

                        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM3.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM4.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        nPaletteLoadCount++;
                        UINT32 nNewData = 0;

                        for (UINT16 nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                        {
                            BYTE high, low, high2, low2;

                            LoadedFile->Read(&low, 1);
                            FilePeer.Read(&low2, 1);
                            fileSIMM3.Read(&high, 1);
                            fileSIMM4.Read(&high2, 1);

                            nNewData = (low << 24) | (low2 << 16) | (high << 8) | high2;
                            nNewData ^= (cps3_mask(0x6000000 + nOriginalROMLocation + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));
                            nNewData = _byteswap_ulong(nNewData);
                            *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) = (nNewData & 0xFFFF0000) >> 16;
                            *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount)) = nNewData & 0x0000FFFF;
                        }
                    }
                    else
                    {
                        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        nPaletteLoadCount++;

                        for (UINT16 nWordsRead = 0; nWordsRead < m_nCurrentPaletteSize; nWordsRead++)
                        {
                            BYTE high, low;

                            LoadedFile->Read(&low, 1);
                            FilePeer.Read(&high, 1);

                            m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = (UINT16)((high << 8) | low);
                        }
                    }
                }
            }
        }

        strInfo.Format(_T("\tLoaded %u palettes from this SIMM pair\n"), nPaletteLoadCount);
        OutputDebugString(strInfo);

        FilePeer.Close();

        if (fileSIMM3.m_hFile != CFile::hFileNull)
        {
            fileSIMM3.Close();
        }

        if (fileSIMM4.m_hFile != CFile::hFileNull)
        {
            fileSIMM4.Close();
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    if (((nGameFlag == SFIII3_A_DIR_10) && (nSIMMNumber == 0)) ||
        ((nGameFlag == SFIII3_A_DIR_4) && (nSIMMNumber == 6)) ||
        ((nGameFlag == SFIII3_A_DIR_51) && (nSIMMNumber == 6)))
    {
        // Only run the dupe checker for the second SIMM pair
        CheckForErrorsInTables();

        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;
    }

    return fSuccess;
}

inline UINT8 CGame_SFIII3_A_DIR::GetSIMMSetForROMLocation(UINT32 nROMLocation)
{
    return (nROMLocation > (2 * c_nSFIII3SIMMLength)) ? 1 : 0;
}

BOOL CGame_SFIII3_A_DIR::SaveFile(CFile* SaveFile, UINT16 nSIMMNumber)
{
    CString strInfo;

    if (UsePaletteSetFor4rd())
    {
        nSIMMNumber += 4;
    }

    UINT32 nSIMMSetAdjustment = 0 + ((m_nSelectedRom != 10) ? 4 : 0);

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(_T("\tCGame_SFIII3_A_DIR::SaveFile: SIMM %u is a peer SIMM: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber < nSIMMSetAdjustment)
    {
        // Nothing useful on those SIMMs: that's ROM 50
        // or - 4rd strike ZIPs may be incomplete, so step ahead
        strInfo.Format(_T("CGame_SFIII3_A_DIR::SaveFile: SIMM %u is for ROM 50: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber > nSIMMSetAdjustment)
    {
        strInfo.Format(_T("CGame_SFIII3_A_DIR::SaveFile: SIMM %u is already saved.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    LPCTSTR pszBaseFormatString = (nGameFlag == SFIII3_A_DIR_4) ? SFIII_Arcade_4rd_ROM_Base : SFIII_Arcade_USA_ROM_Base;
    const UINT16 nSIMMSetBaseNumber = (m_nSelectedRom == 10) ? 1 : 5;
    strSIMMName1.Format(_T("%s\\%s%u.%u"), GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    BOOL fSIMM1Opened = fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary);

    if (!fSIMM1Opened && !UsePaletteSetFor4rd())
    {
        pszBaseFormatString = SFIII_Arcade_JPN_ROM_Base;
        strSIMMName1.Format(_T("%s\\%s%u.%u"), GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber);
        fSIMM1Opened = fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary);
    }

    strSIMMName2.Format(_T("%s\\%s%u.%u"), GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 1);
    strSIMMName3.Format(_T("%s\\%s%u.%u"), GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 2);
    strSIMMName4.Format(_T("%s\\%s%u.%u"), GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 3);

    if ((UsePaletteSetFor4rd() || fSIMM1Opened) &&
        (UsePaletteSetFor4rd() || (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary))) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary)))
    {
        strInfo.Format(_T("CGame_SFIII3_A_DIR::SaveFile: Preparing to save data starting with SIMM %u\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        UINT32 nPaletteSaveCount = 0;

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    if (m_currentSFIII3ROMRevision == SFIII3_SupportedROMRevision::SFIII3_10_990512)
                    {
                        m_nCurrentPaletteROMLocation += 0x14c;
                    }

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if (UsePaletteSetForGill())
                    {
                        UINT32 fourByteBlocks = m_nCurrentPaletteSize >> 1;
                        const UINT8 cbStride = 4;

                        fileSIMM1.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM2.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM3.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM4.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                        nPaletteSaveCount++;
                        UINT32 nDataToWrite = 0;

                        for (UINT16 nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
                        {
                            nDataToWrite = *(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount));
                            nDataToWrite |= (*(m_pppDataBuffer[nUnitCtr][nPalCtr] + (2 * nBlockCount) + 1) << 16);
                            nDataToWrite = _byteswap_ulong(nDataToWrite);
                            nDataToWrite ^= (cps3_mask(0x6000000 + nOriginalROMLocation + (nBlockCount * cbStride), 0xA55432B4, 0x0C129981));

                            BYTE low1  = (nDataToWrite >> 24) & 0xFF;
                            BYTE low2  = (nDataToWrite >> 16) & 0xFF;
                            BYTE high1 = (nDataToWrite >>  8) & 0xFF;
                            BYTE high2 = (nDataToWrite      ) & 0xFF;

                            fileSIMM1.Write(&low1, 1);
                            fileSIMM2.Write(&low2, 1);
                            fileSIMM3.Write(&high1, 1);
                            fileSIMM4.Write(&high2, 1);
                        }
                    }
                    else
                    {
                        CFile* pSIMM1 = (nSIMMSetToUse == 0) ? &fileSIMM1 : &fileSIMM3;
                        CFile* pSIMM2 = (nSIMMSetToUse == 0) ? &fileSIMM2 : &fileSIMM4;

                        pSIMM1->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        pSIMM2->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        nPaletteSaveCount++;

                        for (UINT16 nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSize; nWordsWritten++)
                        {
                            BYTE high = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                            BYTE low = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;

                            pSIMM1->Write(&low, 1);
                            pSIMM2->Write(&high, 1);
                        }
                    }
                }
            }
        }

        strInfo.Format(_T("\tCGame_SFIII3_A_DIR::SaveFile: Saved %u palettes\n"), nPaletteSaveCount);
        OutputDebugString(strInfo);
    }
    else
    {
        OutputDebugString(_T("CGame_SFIII3_A_DIR::SaveFile: Failed to open full SIMM set: skipping save.\n"));
    }

    if (fileSIMM1.m_hFile != CFile::hFileNull)
    {
        fileSIMM1.Close();
    }

    if (fileSIMM2.m_hFile != CFile::hFileNull)
    {
        fileSIMM2.Close();
    }

    if (fileSIMM3.m_hFile != CFile::hFileNull)
    {
        fileSIMM3.Close();
    }

    if (fileSIMM4.m_hFile != CFile::hFileNull)
    {
        fileSIMM4.Close();
    }

    return TRUE;
}

LPCTSTR CGame_SFIII3_A_DIR::GetGameName()
{
    switch (m_currentSFIII3ROMRevision)
    {
    case SFIII3_SupportedROMRevision::SFIII3_10_990512:
        return L"SFIII:3S Gill Glow (990512 Arcade Rerip)";
    case SFIII3_SupportedROMRevision::SFIII3_10_990608:
        return L"SFIII:3S Gill Glow (990608 Arcade Rerip)";
    case SFIII3_SupportedROMRevision::SFIII3_51:
        return L"SFIII:3S (Arcade Rerip)";
    case SFIII3_SupportedROMRevision::SFIII3_4rd:
        return L"SFIII:4rd (3S Hack)";
    default:
    case SFIII3_SupportedROMRevision::SFIII3_Unsupported:
        return L"SFIII:3S Gill Glow (Arcade Rerip)";
    };
}
