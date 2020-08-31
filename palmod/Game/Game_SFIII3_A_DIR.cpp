#include "StdAfx.h"
#include "Game_SFIII3_A_DIR.h"
#include "..\PalMod.h"

UINT16 CGame_SFIII3_A_DIR::uRuleCtr = 0;

// sfiii3 is the USA 990512 revision
// sfii3n is Japan 990512 NOCD
constexpr auto SFIII_Arcade_USA_ROM_Base = _T("sfiii3-simm5.");
constexpr auto SFIII_Arcade_JPN_ROM_Base = _T("sfiii3n-simm5.");

CGame_SFIII3_A_DIR::CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize) :
    CGame_SFIII3_A(0x800000) // Let the core game know it's safe to load Extras
{
    nGameFlag = SFIII3_A_DIR;
    nFileAmt = 8; // 8 banks per SIMM

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_SFIII3_A_DIR::~CGame_SFIII3_A_DIR(void)
{
    FlushChangeTrackingArray();
}

sFileRule CGame_SFIII3_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("%s%u"), SFIII_Arcade_USA_ROM_Base, (nUnitId & 0x00FF));

    // This is clunky: we should shift the SIMM games to handle loads themselves.
    NewFileRule.fHasAltName = TRUE;
    _stprintf_s(NewFileRule.szAltFileName, MAX_FILENAME_LENGTH, _T("%s%u"), SFIII_Arcade_JPN_ROM_Base, (nUnitId & 0x00FF));

    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_SFIII3_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= 8)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_SFIII3_A_DIR::GetSIMMLocationFromROMLocation(UINT32 nROMLocation)
{
    UINT32 nSIMMLocation = 0;

    nSIMMLocation = nROMLocation / 2;
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

BOOL CGame_SFIII3_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(_T("\tCGame_SFIII3_A_DIR::SaveFile: SIMM %u is a peer SIMM: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber < c_nFirstUsedSIMMOfSet)
    {
        // Nothing useful on those SIMMs: that's ROM 50
        strInfo.Format(_T("CGame_SFIII3_A_DIR::SaveFile: SIMM %u is for ROM 50: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    const UINT32 nBeginningRange = 0 + (c_nSFIII3SIMMLength * (nSIMMNumber - c_nFirstUsedSIMMOfSet));
    const UINT32 nEndingRange = (c_nSFIII3SIMMLength * 2) + (c_nSFIII3SIMMLength * (nSIMMNumber - c_nFirstUsedSIMMOfSet));

    CFile FilePeer;
    sFileRule PeerRule = GetNextRule();
    CString strPeerFilename;
    strPeerFilename.Format(_T("%s\\%s"), GetLoadDir(), PeerRule.szFileName);

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    if (!fFileOpened)
    {
        CString strAltFileName;

        strAltFileName.Format(_T("%s\\%s"), GetLoadDir(), PeerRule.szAltFileName);
        fFileOpened = FilePeer.Open(strAltFileName, CFile::modeRead | CFile::typeBinary);
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

            rgUnitRedir[nUnitCtr] = SFIII3_A_UNITSORT[nUnitCtr];

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
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

        strInfo.Format(_T("\tLoaded %u palettes from this SIMM pair\n"), nPaletteLoadCount);
        OutputDebugString(strInfo);

        FilePeer.Close();
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    if (nSIMMNumber == 6)
    {
        // Only run the dupe checker for the second SIMM pair
        CheckForErrorsInTables();

        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        if (nSIMMNumber == 6)
        {
            nRedirCtr = nUnitAmt - 1;
        }
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

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(_T("\tCGame_SFIII3_A_DIR::SaveFile: SIMM %u is a peer SIMM: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber < c_nFirstUsedSIMMOfSet)
    {
        // Nothing useful on those SIMMs: that's ROM 50
        strInfo.Format(_T("CGame_SFIII3_A_DIR::SaveFile: SIMM %u is for ROM 50: skipping.\n"), nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber > c_nFirstUsedSIMMOfSet)
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

    LPCTSTR pszBaseFormatString = SFIII_Arcade_USA_ROM_Base;
    strSIMMName1.Format(_T("%s\\%s%u"), GetLoadDir(), pszBaseFormatString, nSIMMNumber);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    BOOL fSIMM1Opened = fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary);

    if (!fSIMM1Opened)
    {
        pszBaseFormatString = SFIII_Arcade_JPN_ROM_Base;
        strSIMMName1.Format(_T("%s\\%s%u"), GetLoadDir(), pszBaseFormatString, nSIMMNumber);
        fSIMM1Opened = fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary);
    }

    strSIMMName2.Format(_T("%s\\%s%u"), GetLoadDir(), pszBaseFormatString, nSIMMNumber + 1);
    strSIMMName3.Format(_T("%s\\%s%u"), GetLoadDir(), pszBaseFormatString, nSIMMNumber + 2);
    strSIMMName4.Format(_T("%s\\%s%u"), GetLoadDir(), pszBaseFormatString, nSIMMNumber + 3);

    if (fSIMM1Opened &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
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

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    UINT32 nOriginalOffset = m_nCurrentPaletteROMLocation;
                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

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
