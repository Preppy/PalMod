#include "StdAfx.h"
#include "Game_RedEarth_A_DIR.h"
#include "..\palmod.h"

UINT16 CGame_RedEarth_A_DIR::uRuleCtr = 0;

constexpr auto RedEarth_Arcade_ROM_Base = _T("redearth-simm3.");

#define RedEarth_RERIP_DEBUG                 DEFAULT_GAME_DEBUG_STATE

CGame_RedEarth_A_DIR::CGame_RedEarth_A_DIR(UINT32 nConfirmedROMSize) :
        CGame_REDEARTH_A(0x800000)   // Let RedEarth know that it's safe to load extras.
{
    OutputDebugString(_T("CGame_RedEarth_A_DIR::CGame_RedEarth_A_DIR: Loading from SIMM directory\n"));
    // We lie here because we want to look at all 8 SIMM banks
    nFileAmt = 8;
    nGameFlag = REDEARTH_A_DIR;

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_RedEarth_A_DIR::~CGame_RedEarth_A_DIR()
{
    FlushChangeTrackingArray();
}

sFileRule CGame_RedEarth_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _sntprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, _T("%s%u"), RedEarth_Arcade_ROM_Base, (nUnitId & 0x00FF));
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_RedEarth_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= 8)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_RedEarth_A_DIR::GetSIMMLocationFromROMLocation(UINT32 nROMLocation)
{
    UINT32 nSIMMLocation = 0;

    nSIMMLocation = nROMLocation / 2;
    return nSIMMLocation;
}

inline UINT32 CGame_RedEarth_A_DIR::GetLocationWithinSIMM(UINT32 nSIMMSetLocation)
{
    UINT32 nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nRedEarthSIMMLength)
    {
        nSIMMLocation -= c_nRedEarthSIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGame_RedEarth_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(_T("CGame_RedEarth_A_DIR::LoadFile: Preparing to load data from SIMM number %u\n"), nSIMMNumber);
    OutputDebugString(strInfo);

    if ((nSIMMNumber % 2) == 1)
    {
        OutputDebugString(_T("\tThis is a peer SIMM: skipping.\n"));
        return TRUE;
    }
    else if (nSIMMNumber < 4)
    {
        OutputDebugString(_T("\tThis SIMM set is not used for the current RedEarth mode\n"));
        return TRUE;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // SO to read the SIMMs we need to perform shenanigans.
    const UINT32 nSIMMSetAdjustment = (nSIMMNumber > 3) ? 4 : 0;
    const UINT32 nBeginningRange = 0 + (c_nRedEarthSIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    const UINT32 nEndingRange = (c_nRedEarthSIMMLength * 2) + (c_nRedEarthSIMMLength * (nSIMMNumber - nSIMMSetAdjustment));

    strInfo.Format(_T("\tThe SIMM %u set begins at 0x%06x and ends at 0x%06x\n"), nSIMMNumber, nBeginningRange, nEndingRange);
    OutputDebugString(strInfo);

    CFile FilePeer;
    sFileRule PeerRule = GetNextRule();
    CString strPeerFilename;
    strPeerFilename.Format(_T("%s\\%s"), GetLoadDir(), PeerRule.szFileName);

    if (FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary))
    {
        OutputDebugString(_T("\tLoading RedEarth_A_DIR from SIMMs....\n"));
        bool fShownCrossSIMMErrorOnce = false;

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], NULL, sizeof(UINT16*) * nPalAmt);
            }

            // These are already sorted, no need to redirect
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if RedEarth_RERIP_DEBUG
                    strInfo.Format(_T("\t\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X\n"), nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation);
                    OutputDebugString(strInfo);
#endif

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSize) > c_nRedEarthSIMMLength)
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
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], NULL, sizeof(UINT16) * m_nCurrentPaletteSize);

                    LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

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

inline UINT8 CGame_RedEarth_A_DIR::GetSIMMSetForROMLocation(UINT32 nROMLocation)
{
    return (nROMLocation > (2 * c_nRedEarthSIMMLength)) ? 1 : 0;
}

BOOL CGame_RedEarth_A_DIR::SaveFile(CFile* SaveFile, UINT16 nSaveUnit)
{
    CString strInfo;
    strInfo.Format(_T("CGame_RedEarth_A_DIR::SaveFile: Preparing to save data for RedEarth ROM setu\n"));
    OutputDebugString(strInfo);

    // OK, so the old 31 ROM in the SIMM redump is interleaved.
    // There is one byte from  3.0 followed by one byte from 3.1, up until the end of those SIMMs.
    // That is then followed by one byte from 3.6 followed by one byte from 3.7, repeat until end of SIMM.
    // SO to read the SIMMs we need to perform shenanigans.

    const UINT32 nSIMMSetAdjustment = 4;

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    strSIMMName1.Format(_T("%s\\%s%u"), GetLoadDir(), RedEarth_Arcade_ROM_Base, nSIMMSetAdjustment + 0);
    strSIMMName2.Format(_T("%s\\%s%u"), GetLoadDir(), RedEarth_Arcade_ROM_Base, nSIMMSetAdjustment + 1);
    strSIMMName3.Format(_T("%s\\%s%u"), GetLoadDir(), RedEarth_Arcade_ROM_Base, nSIMMSetAdjustment + 2);
    strSIMMName4.Format(_T("%s\\%s%u"), GetLoadDir(), RedEarth_Arcade_ROM_Base, nSIMMSetAdjustment + 3);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary)))
    {
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

#if RedEarth_RERIP_DEBUG
                    strInfo.Format(_T("\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X (SIMM set %u)\n"), nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation, nSIMMSetToUse);
                    OutputDebugString(strInfo);
#endif

                    CFile* pSIMM1 = (nSIMMSetToUse == 0) ? &fileSIMM1 : &fileSIMM3;
                    CFile* pSIMM2 = (nSIMMSetToUse == 0) ? &fileSIMM2 : &fileSIMM4;

                    pSIMM1->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    pSIMM2->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

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
