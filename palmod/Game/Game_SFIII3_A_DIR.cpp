#include "StdAfx.h"
#include "Game_SFIII3_A_DIR.h"
#include "..\PalMod.h"

UINT16 CGame_SFIII3_A_DIR::uRuleCtr = 0;

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

CGame_SFIII3_A_DIR::CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize /* = -1 */, int nSF3ModeToLoad /* = 51 */) :
    CGame_SFIII3_A(0x800000, nSF3ModeToLoad) // Let the core game know it's safe to load Extras
{
    m_nSelectedRom = nSF3ModeToLoad;

    switch (nSF3ModeToLoad)
    {
    case SF3ROM_10:
        nGameFlag = SFIII3_A_DIR_10;
        nFileAmt = 4;
        break;
    case SF3ROM_10_4rd:
        nGameFlag = SFIII3_A_DIR_4rd_10;
        nFileAmt = 4;
        break;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        m_nSelectedRom = 51;
        __fallthrough;
    case SF3ROM_51:
        m_fAllowIPSPatching = true;
        nGameFlag = SFIII3_A_DIR_51;
        nFileAmt = 8;
        break;
    case SF3ROM_51_4rd:
        nGameFlag = SFIII3_A_DIR_4rd;
        nFileAmt = 2;
        break;
    case SF3ROM_70_EX:
        nGameFlag = SFIII3_A_DIR_EX;
        nFileAmt = 4;
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

    switch (m_nSelectedRom)
    {
        case SF3ROM_51_4rd:
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_4rd_ROM_Base, 5, ((nUnitId & 0x00FF) + 6));
            break;
        case SF3ROM_70_EX:
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_3Ex_ROM_Base, 7, (nUnitId & 0x00FF));
            break;
        default:
            OutputDebugString(L"Warning: unrecognized ROM.\n");
            __fallthrough;
        case SF3ROM_10_4rd:
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_4rd_ROM_Base, 1, (nUnitId & 0x00FF));
            break;
        case SF3ROM_10:
        case SF3ROM_51:
        {
            _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_USA_ROM_Base, UsingROMForGill() ? 1 : 5, (nUnitId & 0x00FF));

            // This is clunky: we should shift the SIMM games to handle loads themselves.
            NewFileRule.fHasAltName = TRUE;

            if (UsingROMForGill() && ((nUnitId & 0x00FF) == 0x03))
            {
                _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"%s%u.%ua", SFIII_Arcade_JPN_ROM_Base, UsingROMForGill() ? 1 : 5, (nUnitId & 0x00FF));
            }
            else
            {
                _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_JPN_ROM_Base, UsingROMForGill() ? 1 : 5, (nUnitId & 0x00FF));
            }
            break;
        }
    }

    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_SFIII3_A_DIR::GetNextRuleInternal(int nSF3ModeToLoad)
{
    m_nSelectedRom = nSF3ModeToLoad;

    const UINT16 nFilesNeeded = !UsePaletteSetFor51() ? 2 : 8;
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
    if (!UsePaletteSetFor10())
    {
        switch (m_nSelectedRom)
        {
        default:
            OutputDebugString(L"Warning: unrecognized ROM.\n");
            __fallthrough;
        case SF3ROM_51:
            return SFIII3_SupportedROMRevision::SFIII3_51;
        case SF3ROM_51_4rd:
            return SFIII3_SupportedROMRevision::SFIII3_4rd;
        case SF3ROM_70_EX:
            return SFIII3_SupportedROMRevision::SFIII3_3Ex;
        case SF3ROM_10_4rd:
            return SFIII3_SupportedROMRevision::SFIII3_10_4rd;
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
    OutputDebugString(L"\tByte sniff for this ROM: \n");
    for (UINT16 nIndex = 0; nIndex < nFileLengthToCheck; nIndex++)
    {
        strByteWatch.Format(L"0x%04x, ", prgFileStart[nIndex]);
        OutputDebugString(strByteWatch);
    }
    OutputDebugString(L"\n");

    if (detectedROMVersion == SFIII3_SupportedROMRevision::SFIII3_Unsupported)
    {
        OutputDebugString(L"\tThis is an unknown SFIII3 ROM.\n");
        CString strMessage;
        if (strMessage.LoadString(IDS_SF3_UNKNOWNROM))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONWARNING);
        }
    }

    safe_delete_array(prgFileStart);

    return detectedROMVersion;
}

BOOL CGame_SFIII3_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber)
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

    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
        m_currentSFIII3ROMRevision = GetSFIII3ROMVersion(LoadedFile);
        break;
    case SF3ROM_10_4rd:
        m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_10_4rd;
        break;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
        m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_51;
        break;
    case SF3ROM_51_4rd:
        m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_4rd;
        break;
    case SF3ROM_70_EX:
        m_currentSFIII3ROMRevision = SFIII3_SupportedROMRevision::SFIII3_3Ex;
        break;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    // The 10 ROMs are interleaved into 4 files - 1.0, 1.1, 1.2, 1.3 and read at once
    const UINT32 nSIMMSetAdjustment = (nSIMMNumber > 3) ? 4 : 0;
    const UINT32 nBeginningRange = 0 + (c_nSFIII3SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    UINT32 nEndingRange;

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
    sFileRule PeerRule = GetNextRuleInternal(m_nSelectedRom);
    CString strPeerFilename;
    strPeerFilename.Format(L"%s\\%s", GetLoadDir(), PeerRule.szFileName);
    m_fUseJPNFileNames = false;

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    if (!fFileOpened)
    {
        CString strAltFileName;

        strAltFileName.Format(L"%s\\%s", GetLoadDir(), PeerRule.szAltFileName);
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
            str12FileName.Format(L"%s\\%s1.2", GetLoadDir(), SFIII_Arcade_JPN_ROM_Base);
            // 1.3 has a different filename for sfiii3n
            str13FileName.Format(L"%s\\%s1.3a", GetLoadDir(), SFIII_Arcade_JPN_ROM_Base);
        }
        else
        {
            str12FileName.Format(L"%s\\%s1.2", GetLoadDir(), SFIII_Arcade_USA_ROM_Base);
            str13FileName.Format(L"%s\\%s1.3", GetLoadDir(), SFIII_Arcade_USA_ROM_Base);
        }

        fFileOpened = fFileOpened && fileSIMM3.Open(str12FileName, CFile::modeRead | CFile::typeBinary);
        fFileOpened = fFileOpened && fileSIMM4.Open(str13FileName, CFile::modeRead | CFile::typeBinary);
    }
    else if (UsePaletteSetFor10_4rd())
    {
        // We need all four files for Gill
        CString str10FileName;

        str10FileName.Format(L"%s\\%s1.2", GetLoadDir(), SFIII_Arcade_4rd_ROM_Base);
        fFileOpened = fFileOpened && fileSIMM3.Open(str10FileName, CFile::modeRead | CFile::typeBinary);
        str10FileName.Format(L"%s\\%s1.3", GetLoadDir(), SFIII_Arcade_4rd_ROM_Base);
        fFileOpened = fFileOpened && fileSIMM4.Open(str10FileName, CFile::modeRead | CFile::typeBinary);
    }

    if (fFileOpened)
    {
        UINT32 nPaletteLoadCount = 0;
        bool fShownCrossSIMMErrorOnce = false;

        strInfo.Format(L"CGame_SFIII3_A_DIR::LoadFile: Preparing to load data from SIMM number %u with peer %s (range 0x%x to 0x%x)\n", nSIMMNumber, PeerRule.szFileName, nBeginningRange, nEndingRange);
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
                    if (LoadedROMNeedsShift())
                    {
                        m_nCurrentPaletteROMLocation += 0x14c;
                    }

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
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

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(UINT16) * m_nCurrentPaletteSizeInColors);

                    if (IsROMEncrypted())
                    {
                        // this rom is encrypted
                        UINT32 fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
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

                        for (UINT16 nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
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

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    if (((nGameFlag == SFIII3_A_DIR_10) && (nSIMMNumber == 0)) ||
        ((nGameFlag == SFIII3_A_DIR_4rd_10) && (nSIMMNumber == 0)) ||
        ((nGameFlag == SFIII3_A_DIR_4rd) && (nSIMMNumber == 6)) ||
        ((nGameFlag == SFIII3_A_DIR_EX) && (nSIMMNumber == 0)) ||
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

    if (UsePaletteSetFor51_4rd())
    {
        // 4rd Strike is just 5.6 and 5.7, so skip to the second half
        nSIMMNumber += 4;
    }

    UINT32 nSIMMSetAdjustment = 0;

    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
    case SF3ROM_10_4rd:
    case SF3ROM_70_EX:
        // We want the first four files
        break;
    default:
        OutputDebugString(L"Warning: unrecognized ROM.\n");
        __fallthrough;
    case SF3ROM_51:
    case SF3ROM_51_4rd:        // We want the last four files
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
    UINT16 nSIMMSetBaseNumber;
    LPCWSTR pszSpecial3rdExtension = L"";

    switch (nGameFlag)
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

    strSIMMName1.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber);
    strSIMMName2.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 1);
    strSIMMName3.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 2);
    strSIMMName4.Format(L"%s\\%s%u.%u%s", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 3, pszSpecial3rdExtension);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((UsePaletteSetFor51_4rd() || (fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary))) &&
        (UsePaletteSetFor51_4rd() || (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary))) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary)))
    {
        strInfo.Format(L"CGame_SFIII3_A_DIR::SaveFile: Preparing to save data starting with SIMM %u\n", nSIMMNumber);
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

                    if (LoadedROMNeedsShift())
                    {
                        m_nCurrentPaletteROMLocation += 0x14c;
                    }

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if (IsROMEncrypted())
                    {
                        UINT32 fourByteBlocks = m_nCurrentPaletteSizeInColors >> 1;
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

                        // write length will be number of *bytes* in the sequence across 2 files
                        UINT16 nCurrentWriteLength = (m_nCurrentPaletteSizeInColors / m_nSizeOfColorsInBytes) * 2;

                        BYTE* pbWrite1 = new BYTE[nCurrentWriteLength];
                        BYTE* pbWrite2 = new BYTE[nCurrentWriteLength];

                        if (pbWrite1 && pbWrite2)
                        {
                            for (UINT16 nWordsWritten = 0; nWordsWritten < nCurrentWriteLength; nWordsWritten++)
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
            return L"SFIII:3S Gill Glow (990512 Arcade Rerip Japan)";
        case SFIII3_SupportedROMRevision::SFIII3_10_990608:
            return L"SFIII:3S Gill Glow (990608 Arcade Rerip Japan)";
        default:
        case SFIII3_SupportedROMRevision::SFIII3_Unsupported:
            OutputDebugString(L"Warning: unknown ROM\n");
            __fallthrough;
        case SFIII3_SupportedROMRevision::SFIII3_51:
            return L"SFIII:3S (Arcade Rerip Japan)";
        case SFIII3_SupportedROMRevision::SFIII3_4rd:
            return L"SFIII:4rd (3S Hack Japan)";
        case SFIII3_SupportedROMRevision::SFIII3_3Ex:
            return L"SFIII:3S Ex (Japan)";
        case SFIII3_SupportedROMRevision::SFIII3_10_4rd:
            return L"SFIII:4rd Gill Glow (Arcade Rerip Japan)";
        };
    }
    else
    {
        switch (m_currentSFIII3ROMRevision)
        {
        case SFIII3_SupportedROMRevision::SFIII3_10_990512:
            return L"SFIII:3S Gill Glow (990512 Arcade Rerip)";
        case SFIII3_SupportedROMRevision::SFIII3_10_990608:
            return L"SFIII:3S Gill Glow (990608 Arcade Rerip)";
        default:
        case SFIII3_SupportedROMRevision::SFIII3_Unsupported:
            OutputDebugString(L"Warning: unknown ROM\n");
            __fallthrough;
        case SFIII3_SupportedROMRevision::SFIII3_51:
            return L"SFIII:3S (Arcade Rerip)";
        case SFIII3_SupportedROMRevision::SFIII3_4rd:
            return L"SFIII:4rd (3S Hack)";
        case SFIII3_SupportedROMRevision::SFIII3_3Ex:
            return L"SFIII:3S Ex";
        case SFIII3_SupportedROMRevision::SFIII3_10_4rd:
            return L"SFIII:4rd Gill Glow (Arcade Rerip)";
        };
    }
}

UINT32 CGame_SFIII3_A_DIR::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    UINT32 nPaletteSaveCount = 0;
    UINT16 nSIMMNumber = 0;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7
    // Adjust up to the 5.4 set for 3S/4rd Strike
    switch (m_nSelectedRom)
    {
    case SF3ROM_10:
    case SF3ROM_10_4rd:
    case SF3ROM_70_EX:
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
    UINT16 nSIMMSetBaseNumber;

    switch (nGameFlag)
    {
    case SFIII3_A_DIR_4rd_10:
        pszBaseFormatString = SFIII_Arcade_4rd_ROM_Base;
        nSIMMSetBaseNumber = 1;
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

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if (LoadedROMNeedsShift())
                {
                    m_nCurrentPaletteROMLocation += 0x14c;
                }

                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

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
                        fileIPS1.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                        fileIPS2.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
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
                        fileIPS3.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
                        fileIPS4.Write(szIPSOpener, (UINT)strlen(szIPSOpener));
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
                        for (UINT16 nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSizeInColors; nWordsWritten++)
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
        fileIPS1.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS1.Close();
    }

    if (fileIPS2.m_hFile != CFile::hFileNull)
    {
        fileIPS2.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS2.Close();
    }

    if (fileIPS3.m_hFile != CFile::hFileNull)
    {
        fileIPS3.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS3.Close();
    }

    if (fileIPS4.m_hFile != CFile::hFileNull)
    {
        fileIPS4.Write(szIPSCloser, (UINT)strlen(szIPSCloser));
        fileIPS4.Close();
    }

    return nPaletteSaveCount;
}
