#include "StdAfx.h"
#include "Game_SFIII3_A_DIR.h"
#include "..\PalMod.h"

uint32_t CGame_SFIII3_A_DIR::m_uRuleCtr = 0;

SFIII3_SupportedROMRevision CGame_SFIII3_A_DIR::m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_Unsupported;

// sfiii3 is the USA 990512 revision
// sfii3n is Japan 990512 NOCD
// 4rd is the SF3 4rd Remix
// 3S EX is a palette expansion of 3S
constexpr auto SFIII_Arcade_USA_ROM_Base = L"sfiii3-simm";
constexpr auto SFIII_Arcade_JPN_ROM_Base = L"sfiii3n-simm";
// There's also a "sfiii3(__990608)-simm1" base for the 1.x roms in at least one package
constexpr auto SFIII_Arcade_4rd_ROM_Base = L"4rd-simm";
constexpr auto SFIII_Arcade_3Ex_ROM_Base = L"sfiii3ex-simm";

CGame_SFIII3_A_DIR::CGame_SFIII3_A_DIR(uint32_t nConfirmedROMSize, SFIII3LoadingKey nSF3ModeToLoad /* = SFIII3LoadingKey::ROM51 */) :
    CGame_SFIII3_A(nConfirmedROMSize, false)
{
    m_eVersionToLoad = nSF3ModeToLoad;

    switch (nSF3ModeToLoad)
    {
        case SFIII3LoadingKey::ROM10:
            m_nFileAmt = 4;
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM10_DIR);
            break;
        case SFIII3LoadingKey::ROM10_4rd:
            m_nFileAmt = 4;
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM10_4rd_DIR);
            break;
        case SFIII3LoadingKey::ROM51:
        default:
            // TODO: enable if we ever want to test this
            //m_fAllowIPSPatching = true;
            //m_nSIMMLength = 0x200000;
            m_nFileAmt = 8;
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM51_DIR);
            break;
        case SFIII3LoadingKey::ROM51_4rd:
            m_nFileAmt = 2;
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM51_4rd_DIR);
            break;
        case SFIII3LoadingKey::ROM70_EX:
            m_nFileAmt = 4;
            InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM70_DIR);
            break;
    }

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_SFIII3_A_DIR::~CGame_SFIII3_A_DIR()
{
    FlushChangeTrackingArray();
}

sFileRule CGame_SFIII3_A_DIR::GetRuleInternal(uint32_t nUnitId, SFIII3LoadingKey nSF3ModeToLoad)
{
    sFileRule NewFileRule;

    m_eVersionToLoad = nSF3ModeToLoad;

    switch (m_eVersionToLoad)
    {
        case SFIII3LoadingKey::ROM51_4rd:
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_4rd_ROM_Base, 5, ((nUnitId & RULE_COUNTER_DEMASK) + 6));
            break;
        case SFIII3LoadingKey::ROM70_EX:
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_3Ex_ROM_Base, 7, (nUnitId & RULE_COUNTER_DEMASK));
            break;
        default:
            OutputDebugString(L"Warning: unrecognized ROM.\n");
            __fallthrough;
        case SFIII3LoadingKey::ROM10_4rd:
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_4rd_ROM_Base, 1, (nUnitId & RULE_COUNTER_DEMASK));
            break;
        case SFIII3LoadingKey::ROM10:
        case SFIII3LoadingKey::ROM51:
        {
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_USA_ROM_Base, UsingROMForGill() ? 1 : 5, (nUnitId & RULE_COUNTER_DEMASK));

            // This is clunky: we should shift the SIMM games to handle loads themselves.
            NewFileRule.fHasAltName = TRUE;

            if (UsingROMForGill() && ((nUnitId & RULE_COUNTER_DEMASK) == 0x03))
            {
                _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"%s%u.%ua", SFIII_Arcade_JPN_ROM_Base, UsingROMForGill() ? 1 : 5, (nUnitId & RULE_COUNTER_DEMASK));
            }
            else
            {
                _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_JPN_ROM_Base, UsingROMForGill() ? 1 : 5, (nUnitId & RULE_COUNTER_DEMASK));
            }
            break;
        }
    }

    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_SFIII3_A_DIR::GetNextRuleInternal(SFIII3LoadingKey nSF3ModeToLoad)
{
    m_eVersionToLoad = nSF3ModeToLoad;

    const uint16_t nFilesNeeded = !UsePaletteSetFor51() ? 2 : 8;
    sFileRule NewFileRule = GetRuleInternal(m_uRuleCtr, m_eVersionToLoad);

    m_uRuleCtr++;

    if (m_uRuleCtr >= nFilesNeeded)
    {
        m_uRuleCtr = INVALID_UNIT_VALUE_16;
    }

    return NewFileRule;
}

inline uint32_t CGame_SFIII3_A_DIR::GetSIMMLocationFromROMLocation(uint32_t nROMLocation)
{
    uint32_t nSIMMLocation = 0;

    // the 10 and 51 roms are split differently
    if (UsingROMForGill())
    {
        nSIMMLocation = nROMLocation / 4;
    }
    else
    {
        nSIMMLocation = nROMLocation / 2;
    }

    return nSIMMLocation;
}

inline uint32_t CGame_SFIII3_A_DIR::GetLocationWithinSIMM(uint32_t nSIMMSetLocation)
{
    uint32_t nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nSFIII3SIMMLength)
    {
        nSIMMLocation -= c_nSFIII3SIMMLength;
    }

    return nSIMMLocation;
}

SFIII3_SupportedROMRevision CGame_SFIII3_A_DIR::GetSFIII3ROMVersion(CFile* LoadedFile)
{
    if (!UsePaletteSetFor10())
    {
        switch (m_eVersionToLoad)
        {
            default:
                OutputDebugString(L"Warning: unrecognized ROM.\n");
                __fallthrough;
            case SFIII3LoadingKey::ROM51:
                return SFIII3_SupportedROMRevision::SFIII3_51;
            case SFIII3LoadingKey::ROM51_4rd:
                return SFIII3_SupportedROMRevision::SFIII3_4rd;
            case SFIII3LoadingKey::ROM70_EX:
                return SFIII3_SupportedROMRevision::SFIII3_3Ex;
            case SFIII3LoadingKey::ROM10_4rd:
                return SFIII3_SupportedROMRevision::SFIII3_10_4rd;
        }
    }

    // The two SF3 1.x simm variants have a shift in palette locations: account for that. 
    // We use byte-sniffing to ensure we know which revision we're looking at.
    const uint32_t nFileLengthToCheck = 32;
    uint16_t* prgFileStart = new uint16_t[nFileLengthToCheck];
    SFIII3_SupportedROMRevision detectedROMVersion = SFIII3_SupportedROMRevision::SFIII3_10_990512;

    struct SFIII3_ROM_Identification_Data
    {
        SFIII3_SupportedROMRevision sRevision = SFIII3_SupportedROMRevision::SFIII3_Unsupported;
        uint16_t nBytesToMatch[32] = {};
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

    for (uint16_t nROMInfoIndex = 0; nROMInfoIndex < ARRAYSIZE(simm10s); nROMInfoIndex++)
    {
        fFoundMatch = true;

        for (uint16_t nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
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
    OutputDebugString(L"\tByte sniff for this ROM: \n");
    for (uint16_t nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
    {
        strByteWatch.Format(L"0x%04x, ", prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }
    OutputDebugString(L"\n");

    if (detectedROMVersion == SFIII3_SupportedROMRevision::SFIII3_Unsupported)
    {
        OutputDebugString(L"\tThis is an unknown SFIII3 ROM.\n");
        CString strMessage;
        if (strMessage.LoadString(IDS_ERROR_UNKNOWNROM))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONWARNING);
        }
    }

    safe_delete_array(prgFileStart);

    return detectedROMVersion;
}

BOOL CGame_SFIII3_A_DIR::LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    if (UsePaletteSetFor51_4rd())
    {
        // the 4rd package can be an incomplete set: skip forward
        nSIMMNumber += 6;
    }

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(L"\tCGame_SFIII3_A_DIR::LoadFile: SIMM %u is a peer SIMM: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (UsingROMForGill() || UsePaletteSetFor3Ex())
    {
        if (nSIMMNumber > 3)
        {
            strInfo.Format(L"CGame_SFIII3_A_DIR::LoadFile: SIMM %u is not used for this set: skipping.\n", nSIMMNumber);
            OutputDebugString(strInfo);
            return TRUE;
        }
    }
    else if ((!UsingROMForGill()) && (nSIMMNumber < 4))
    {
        // Nothing useful on those SIMMs: that's ROM 50
        strInfo.Format(L"CGame_SFIII3_A_DIR::LoadFile: SIMM %u is for ROM 50: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    switch (m_eVersionToLoad)
    {
        case SFIII3LoadingKey::ROM10:
            // we need to make sure which subversion we're loading
            m_currentSFIII3ROMRevision = GetSFIII3ROMVersion(LoadedFile);
            break;
        case SFIII3LoadingKey::ROM10_4rd:
            m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_10_4rd;
            break;
        default:
            OutputDebugString(L"Warning: unrecognized ROM.\n");
            __fallthrough;
        case SFIII3LoadingKey::ROM51:
            m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_51;
            break;
        case SFIII3LoadingKey::ROM51_4rd:
            m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_4rd;
            break;
        case SFIII3LoadingKey::ROM70_EX:
            m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_3Ex;
            break;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    // The 10 ROMs are interleaved into 4 files - 1.0, 1.1, 1.2, 1.3 and read at once
    const uint32_t nSIMMSetAdjustment = (nSIMMNumber > 3) ? 4 : 0;
    const uint32_t nBeginningRange = 0 + (c_nSFIII3SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    uint32_t nEndingRange;

    if (UsingROMForGill() || UsePaletteSetFor3Ex())
    {
        // handle as a full set
        nEndingRange = (c_nSFIII3SIMMLength * 2) + (c_nSFIII3SIMMLength * (4 - nSIMMSetAdjustment));
    }
    else
    {
        nEndingRange = (c_nSFIII3SIMMLength * 2) + (c_nSFIII3SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    }

    CFile FilePeer;
    sFileRule PeerRule = GetNextRuleInternal(m_eVersionToLoad);
    CString strPeerFilename;
    strPeerFilename.Format(L"%s\\%s", GetLoadedDirPathOnly(), PeerRule.szFileName);
    m_fUseJPNFileNames = false;

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    if (!fFileOpened)
    {
        CString strAltFileName;

        strAltFileName.Format(L"%s\\%s", GetLoadedDirPathOnly(), PeerRule.szAltFileName);
        fFileOpened = FilePeer.Open(strAltFileName, CFile::modeRead | CFile::typeBinary);
        m_fUseJPNFileNames = true;
    }

    CFile fileSIMM3;
    CFile fileSIMM4;

    if (UsePaletteSetFor10())
    {
        // We need all four files for Gill
        CString str12FileName;
        CString str13FileName;

        if (m_fUseJPNFileNames)
        {
            str12FileName.Format(L"%s\\%s1.2", GetLoadedDirPathOnly(), SFIII_Arcade_JPN_ROM_Base);
            // 1.3 has a different filename for sfiii3n
            str13FileName.Format(L"%s\\%s1.3a", GetLoadedDirPathOnly(), SFIII_Arcade_JPN_ROM_Base);
        }
        else
        {
            str12FileName.Format(L"%s\\%s1.2", GetLoadedDirPathOnly(), SFIII_Arcade_USA_ROM_Base);
            str13FileName.Format(L"%s\\%s1.3", GetLoadedDirPathOnly(), SFIII_Arcade_USA_ROM_Base);
        }

        fFileOpened = fFileOpened && fileSIMM3.Open(str12FileName, CFile::modeRead | CFile::typeBinary);
        fFileOpened = fFileOpened && fileSIMM4.Open(str13FileName, CFile::modeRead | CFile::typeBinary);
    }
    else if (UsePaletteSetFor10_4rd())
    {
        // We need all four files for Gill
        CString str10FileName;

        str10FileName.Format(L"%s\\%s1.2", GetLoadedDirPathOnly(), SFIII_Arcade_4rd_ROM_Base);
        fFileOpened = fFileOpened && fileSIMM3.Open(str10FileName, CFile::modeRead | CFile::typeBinary);
        str10FileName.Format(L"%s\\%s1.3", GetLoadedDirPathOnly(), SFIII_Arcade_4rd_ROM_Base);
        fFileOpened = fFileOpened && fileSIMM4.Open(str10FileName, CFile::modeRead | CFile::typeBinary);
    }

    if (fFileOpened)
    {
        uint32_t nPaletteLoadCount = 0;
        bool fShownCrossSIMMErrorOnce = false;

        strInfo.Format(L"CGame_SFIII3_A_DIR::LoadFile: Preparing to load data from SIMM number %u with peer %s (range 0x%x to 0x%x)\n", nSIMMNumber, PeerRule.szFileName, nBeginningRange, nEndingRange);
        OutputDebugString(strInfo);

        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], 0, sizeof(uint16_t *) * nPalAmt);
            }

            // Layout is presorted
            m_rgUnitRedir.at(nUnitCtr) = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
                    if (LoadedROMNeedsShift())
                    {
                        m_nCurrentPaletteROMLocation += 0x14c;
                    }

                    const uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSizeInColors) > c_nSFIII3SIMMLength)
                    {
                        if (!fShownCrossSIMMErrorOnce)
                        {
                            fShownCrossSIMMErrorOnce = true;
                            strInfo.Format(IDS_EXTRAS_SIMMBOUNDARY, nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes));
                            MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        fSuccess = FALSE;
                    }

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                    if (IsROMEncrypted())
                    {
                        // this rom is encrypted
                        const uint32_t fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                        const uint8_t cbStride = 4;

                        LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM3.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM4.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        nPaletteLoadCount++;
                        uint32_t nNewData = 0;

                        for (uint16_t nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
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

                        for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                        {
                            BYTE high, low;

                            LoadedFile->Read(&low, 1);
                            FilePeer.Read(&high, 1);

                            m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = static_cast<uint16_t>((high << 8) | low);
                        }
                    }
                }
            }
        }

        strInfo.Format(L"\tLoaded %u palettes from this SIMM pair\n", nPaletteLoadCount);
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
    else
    {
        fSuccess = FALSE;
    }

    if (((m_nGameFlag == SFIII3_A_DIR_10) && (nSIMMNumber == 0)) ||
        ((m_nGameFlag == SFIII3_A_DIR_4rd_10) && (nSIMMNumber == 0)) ||
        ((m_nGameFlag == SFIII3_A_DIR_4rd) && (nSIMMNumber == 6)) ||
        ((m_nGameFlag == SFIII3_A_DIR_EX) && (nSIMMNumber == 0)) ||
        ((m_nGameFlag == SFIII3_A_DIR_51) && (nSIMMNumber == 6)))
    {
        // Only run the dupe checker for the second SIMM pair
        CheckForErrorsInTables();
    }

    return fSuccess;
}

inline uint8_t CGame_SFIII3_A_DIR::GetSIMMSetForROMLocation(uint32_t nROMLocation)
{
    return (nROMLocation > (2 * c_nSFIII3SIMMLength)) ? 1 : 0;
}

BOOL CGame_SFIII3_A_DIR::SaveFile(CFile* SaveFile, uint32_t nSIMMNumber)
{
    CString strInfo;

    if (UsePaletteSetFor51() || UsePaletteSetFor51_4rd())
    {
        // 3rd Strike 51 starts at 5.4, so jump there
        // 4rd Strike is just 5.6 and 5.7, so skip to the second half too
        nSIMMNumber += 4;
    }

    uint32_t nSIMMSetAdjustment = 0;

    switch (m_eVersionToLoad)
    {
        case SFIII3LoadingKey::ROM10:
        case SFIII3LoadingKey::ROM10_4rd:
        case SFIII3LoadingKey::ROM70_EX:
            // We want the first four files
            break;
        default:
            OutputDebugString(L"Warning: unrecognized ROM.\n");
            __fallthrough;
        case SFIII3LoadingKey::ROM51:
        case SFIII3LoadingKey::ROM51_4rd:        // We want the last four files
            nSIMMSetAdjustment += 4;
            break;
    }

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(L"\tCGame_SFIII3_A_DIR::SaveFile: SIMM %u is a peer SIMM: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber < nSIMMSetAdjustment)
    {
        // Nothing useful on those SIMMs: that's ROM 50
        // or - 4rd strike ZIPs may be incomplete, so step ahead
        strInfo.Format(L"CGame_SFIII3_A_DIR::SaveFile: SIMM %u is for ROM 50: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber > nSIMMSetAdjustment)
    {
        strInfo.Format(L"CGame_SFIII3_A_DIR::SaveFile: SIMM %u is already saved.\n", nSIMMNumber);
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

    LPCWSTR pszBaseFormatString;
    uint16_t nSIMMSetBaseNumber;
    LPCWSTR pszSpecial3rdExtension = L"";

    switch (m_nGameFlag)
    {
        case SFIII3_A_DIR_4rd_10:
            pszBaseFormatString = SFIII_Arcade_4rd_ROM_Base;
            nSIMMSetBaseNumber = 1;
            break;
        case SFIII3_A_DIR_4rd:
            pszBaseFormatString = SFIII_Arcade_4rd_ROM_Base;
            nSIMMSetBaseNumber = 5; // the 4rd Strikes characters roms are solely 5.6 and 5.7
            break;
        case SFIII3_A_DIR_EX:
            pszBaseFormatString = SFIII_Arcade_3Ex_ROM_Base;
            nSIMMSetBaseNumber = 7;
            break;
        case SFIII3_A_DIR_10:
            pszBaseFormatString = m_fUseJPNFileNames ? SFIII_Arcade_JPN_ROM_Base : SFIII_Arcade_USA_ROM_Base;
            pszSpecial3rdExtension = m_fUseJPNFileNames ? L"a" : L"";
            nSIMMSetBaseNumber = 1;
            break;
        default:
        case SFIII3_A_DIR_51:
            pszBaseFormatString = m_fUseJPNFileNames ? SFIII_Arcade_JPN_ROM_Base : SFIII_Arcade_USA_ROM_Base;
            nSIMMSetBaseNumber = 5;
            break;
    }

    strSIMMName1.Format(L"%s\\%s%u.%u", GetLoadedDirPathOnly(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber);
    strSIMMName2.Format(L"%s\\%s%u.%u", GetLoadedDirPathOnly(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 1);
    strSIMMName3.Format(L"%s\\%s%u.%u", GetLoadedDirPathOnly(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 2);
    strSIMMName4.Format(L"%s\\%s%u.%u%s", GetLoadedDirPathOnly(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 3, pszSpecial3rdExtension);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((UsePaletteSetFor51_4rd() || (fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary))) &&
        (UsePaletteSetFor51_4rd() || (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary))) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary)))
    {
        strInfo.Format(L"CGame_SFIII3_A_DIR::SaveFile: Preparing to save data starting with SIMM %u\n", nSIMMNumber);
        OutputDebugString(strInfo);
        uint32_t nPaletteSaveCount = 0;

        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    if (LoadedROMNeedsShift())
                    {
                        m_nCurrentPaletteROMLocation += 0x14c;
                    }

                    const uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                    const uint8_t nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if (IsROMEncrypted())
                    {
                        const uint32_t fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
                        const uint8_t cbStride = 4;

                        fileSIMM1.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM2.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM3.Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                        fileSIMM4.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                        nPaletteSaveCount++;
                        uint32_t nDataToWrite = 0;

                        for (uint16_t nBlockCount = 0; nBlockCount < fourByteBlocks; nBlockCount++)
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

                        // write length will be number of *bytes* in the sequence across 2 files
                        const uint16_t nCurrentWriteLength = (m_nCurrentPaletteSizeInColors / m_nSizeOfColorsInBytes) * 2;

                        BYTE* pbWrite1 = new BYTE[nCurrentWriteLength];
                        BYTE* pbWrite2 = new BYTE[nCurrentWriteLength];

                        if (pbWrite1 && pbWrite2)
                        {
                            for (uint16_t nWordsWritten = 0; nWordsWritten < nCurrentWriteLength; nWordsWritten++)
                            {
                                pbWrite1[nWordsWritten] = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;
                                pbWrite2[nWordsWritten] = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                            }

                            pSIMM1->Write(pbWrite1, nCurrentWriteLength);
                            pSIMM2->Write(pbWrite2, nCurrentWriteLength);
                        }

                        safe_delete_array(pbWrite1);
                        safe_delete_array(pbWrite2);
                    }
                }
            }
        }

        strInfo.Format(L"\tCGame_SFIII3_A_DIR::SaveFile: Saved %u palettes\n", nPaletteSaveCount);
        OutputDebugString(strInfo);
    }
    else
    {
        OutputDebugString(L"CGame_SFIII3_A_DIR::SaveFile: Failed to open full SIMM set: skipping save.\n");
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

LPCWSTR CGame_SFIII3_A_DIR::GetGameName()
{
    if (m_fUseJPNFileNames)
    {
        switch (m_currentSFIII3ROMRevision)
        {
            case SFIII3_SupportedROMRevision::SFIII3_10_990512:
                return L"SFIII:3S Gill Glow (CPS3 990512 Rerip Japan)";
            case SFIII3_SupportedROMRevision::SFIII3_10_990608:
                return L"SFIII:3S Gill Glow (CPS3 990608 Rerip Japan)";
            default:
            case SFIII3_SupportedROMRevision::SFIII3_Unsupported:
                OutputDebugString(L"Warning: unknown ROM\n");
                __fallthrough;
            case SFIII3_SupportedROMRevision::SFIII3_51:
                return L"SFIII:3S (CPS3 Rerip Japan)";
            case SFIII3_SupportedROMRevision::SFIII3_4rd:
                return L"SFIII:4rd (CPS3 3S Hack Japan)";
            case SFIII3_SupportedROMRevision::SFIII3_3Ex:
                return L"SFIII:3S Ex (CPS3 Japan)";
            case SFIII3_SupportedROMRevision::SFIII3_10_4rd:
                return L"SFIII:4rd Gill Glow (CPS3 Rerip Japan)";
        }
    }
    else
    {
        switch (m_currentSFIII3ROMRevision)
        {
            case SFIII3_SupportedROMRevision::SFIII3_10_990512:
                return L"SFIII:3S Gill Glow (CPS3 990512 Rerip)";
            case SFIII3_SupportedROMRevision::SFIII3_10_990608:
                return L"SFIII:3S Gill Glow (CPS3 990608 Rerip)";
            default:
            case SFIII3_SupportedROMRevision::SFIII3_Unsupported:
                OutputDebugString(L"Warning: unknown ROM\n");
                __fallthrough;
            case SFIII3_SupportedROMRevision::SFIII3_51:
                return L"SFIII:3S (CPS3 Rerip)";
            case SFIII3_SupportedROMRevision::SFIII3_4rd:
                return L"SFIII:4rd (CPS3 3S Hack)";
            case SFIII3_SupportedROMRevision::SFIII3_3Ex:
                return L"SFIII:3S Ex";
            case SFIII3_SupportedROMRevision::SFIII3_10_4rd:
                return L"SFIII:4rd Gill Glow (CPS3 Rerip)";
        }
    }
}

uint32_t CGame_SFIII3_A_DIR::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    uint32_t nPaletteSaveCount = 0;
    uint32_t nSIMMNumber = 0;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7
    // Adjust up to the 5.4 set for 3S/4rd Strike
    switch (m_eVersionToLoad)
    {
        case SFIII3LoadingKey::ROM10:
        case SFIII3LoadingKey::ROM10_4rd:
        case SFIII3LoadingKey::ROM70_EX:
            // We want the first four files
            break;
        default:
            // for 51, we want the last four
            nSIMMNumber = 4;
            break;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So we need some shenanigans to generate correct IPS files

    CFile fileIPS1;
    CFile fileIPS2;
    CFile fileIPS3;
    CFile fileIPS4;

    LPCWSTR pszBaseFormatString;
    uint16_t nSIMMSetBaseNumber;

    switch (m_nGameFlag)
    {
        case SFIII3_A_DIR_4rd_10:
            pszBaseFormatString = SFIII_Arcade_4rd_ROM_Base;
            nSIMMSetBaseNumber = 1;
            break;
        case SFIII3_A_DIR_4rd:
            pszBaseFormatString = SFIII_Arcade_4rd_ROM_Base;
            nSIMMSetBaseNumber = 5; // the 4rd Strikes characters roms are solely 5.6 and 5.7
            break;
        case SFIII3_A_DIR_EX:
            pszBaseFormatString = SFIII_Arcade_3Ex_ROM_Base;
            nSIMMSetBaseNumber = 7;
            break;
        case SFIII3_A_DIR_10:
            pszBaseFormatString = m_fUseJPNFileNames ? SFIII_Arcade_JPN_ROM_Base : SFIII_Arcade_USA_ROM_Base;
            nSIMMSetBaseNumber = 1;
            break;
        default:
        case SFIII3_A_DIR_51:
            pszBaseFormatString = m_fUseJPNFileNames ? SFIII_Arcade_JPN_ROM_Base : SFIII_Arcade_USA_ROM_Base;
            nSIMMSetBaseNumber = 5;
            break;
    }

    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    strInfo.Format(L"CGame_SFIII3_A_DIR::SaveMultiplePatchFiles: Preparing to save IPS patches...\n");
    OutputDebugString(strInfo);

    bool fSetOneOpened = false;
    bool fSetTwoOpened = false;

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        const uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (LoadedROMNeedsShift())
                {
                    m_nCurrentPaletteROMLocation += 0x14c;
                }

                const uint8_t nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                // Open these on a JIT basis so we only create them if needed.
                if ((nSIMMSetToUse == 0) && !fSetOneOpened)
                {
                    CString strIPSName1;
                    CString strIPSName2;

                    strIPSName1.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber);
                    strIPSName2.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 1);

                    if (fileIPS1.Open(strIPSName1, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary) &&
                        fileIPS2.Open(strIPSName2, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                    {
                        fSetOneOpened = true;
                        // Write the headers...
                        LPCSTR szIPSOpener = "PATCH";
                        fileIPS1.Write(szIPSOpener, static_cast<UINT>(strlen(szIPSOpener)));
                        fileIPS2.Write(szIPSOpener, static_cast<UINT>(strlen(szIPSOpener)));
                    }
                    else
                    {
                        break;
                    }
                }
                else if ((nSIMMSetToUse == 1) && !fSetTwoOpened)
                {
                    CString strIPSName3;
                    CString strIPSName4;

                    strIPSName3.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 2);
                    strIPSName4.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 3);

                    if (fileIPS3.Open(strIPSName3, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary) &&
                        fileIPS4.Open(strIPSName4, CFile::modeWrite | CFile::modeCreate | CFile::typeBinary))
                    {
                        fSetTwoOpened = true;
                        // Write the headers...
                        LPCSTR szIPSOpener = "PATCH";
                        fileIPS3.Write(szIPSOpener, static_cast<UINT>(strlen(szIPSOpener)));
                        fileIPS4.Write(szIPSOpener, static_cast<UINT>(strlen(szIPSOpener)));
                    }
                    else
                    {
                        break;
                    }
                }

                if (IsROMEncrypted())
                {
                    // E_NOTIMPL at this time
                }
                else
                {
                    nPaletteSaveCount++;

                    CFile* pIPS1 = (nSIMMSetToUse == 0) ? &fileIPS1 : &fileIPS3;
                    CFile* pIPS2 = (nSIMMSetToUse == 0) ? &fileIPS2 : &fileIPS4;

                    // Location
                    BYTE b1 = (m_nCurrentPaletteROMLocation & 0xFF0000) >> 16;
                    BYTE b2 = (m_nCurrentPaletteROMLocation & 0xFF00) >> 8;
                    BYTE b3 = m_nCurrentPaletteROMLocation & 0xFF;
                    pIPS1->Write(&b1, 1);
                    pIPS1->Write(&b2, 1);
                    pIPS1->Write(&b3, 1);

                    pIPS2->Write(&b1, 1);
                    pIPS2->Write(&b2, 1);
                    pIPS2->Write(&b3, 1);

                    // Size
                    b1 = ((m_nCurrentPaletteSizeInColors) & 0xFF00) >> 8;
                    b2 = (m_nCurrentPaletteSizeInColors) & 0xFF;
                    pIPS1->Write(&b1, 1);
                    pIPS1->Write(&b2, 1);

                    pIPS2->Write(&b1, 1);
                    pIPS2->Write(&b2, 1);

                    BYTE* pbWrite1 = nullptr, * pbWrite2 = nullptr;

                    pbWrite1 = new BYTE[m_nCurrentPaletteSizeInColors];
                    pbWrite2 = new BYTE[m_nCurrentPaletteSizeInColors];

                    if (pbWrite1 && pbWrite2)
                    {
                        for (uint16_t nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSizeInColors; nWordsWritten++)
                        {
                            pbWrite1[nWordsWritten] = m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;
                            pbWrite2[nWordsWritten] = (m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                        }

                        pIPS1->Write(pbWrite1, m_nCurrentPaletteSizeInColors);
                        pIPS2->Write(pbWrite2, m_nCurrentPaletteSizeInColors);
                    }

                    safe_delete_array(pbWrite1);
                    safe_delete_array(pbWrite2);
                }
            }
        }
    }

    strInfo.Format(L"\tCGame_SFIII3_A_DIR::SaveMultiplePatchFiles: complete for 0x%x palettes\n", nPaletteSaveCount);
    OutputDebugString(strInfo);

    LPCSTR szIPSCloser = "EOF";
    if (fileIPS1.m_hFile != CFile::hFileNull)
    {
        fileIPS1.Write(szIPSCloser, static_cast<UINT>(strlen(szIPSCloser)));
        fileIPS1.Close();
    }

    if (fileIPS2.m_hFile != CFile::hFileNull)
    {
        fileIPS2.Write(szIPSCloser, static_cast<UINT>(strlen(szIPSCloser)));
        fileIPS2.Close();
    }

    if (fileIPS3.m_hFile != CFile::hFileNull)
    {
        fileIPS3.Write(szIPSCloser, static_cast<UINT>(strlen(szIPSCloser)));
        fileIPS3.Close();
    }

    if (fileIPS4.m_hFile != CFile::hFileNull)
    {
        fileIPS4.Write(szIPSCloser, static_cast<UINT>(strlen(szIPSCloser)));
        fileIPS4.Close();
    }

    return nPaletteSaveCount;
}
