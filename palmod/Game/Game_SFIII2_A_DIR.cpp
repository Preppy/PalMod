#include "StdAfx.h"
#include "Game_SFIII2_A_DIR.h"
#include "..\PalMod.h"

UINT16 CGame_SFIII2_A_DIR::uRuleCtr = 0;

constexpr auto SFIII_Arcade_USA_ROM_Base = L"SFIII2-simm";

CGame_SFIII2_A_DIR::CGame_SFIII2_A_DIR(UINT32 nConfirmedROMSize /* = -1 */) :
    CGame_SFIII2_A(0x800000) // Let the core game know it's safe to load Extras
{
    nGameFlag = SFIII2_A_DIR;

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_SFIII2_A_DIR::~CGame_SFIII2_A_DIR(void)
{
    FlushChangeTrackingArray();
}

sFileRule CGame_SFIII2_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _sntprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.%u", SFIII_Arcade_USA_ROM_Base, 5, (nUnitId & 0x00FF));
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_SFIII2_A_DIR::GetNextRule()
{
    const UINT16 nFilesNeeded = 4;
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= nFilesNeeded)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_SFIII2_A_DIR::GetSIMMLocationFromROMLocation(UINT32 nROMLocation)
{
    UINT32 nSIMMLocation = nROMLocation / 2;

    return nSIMMLocation;
}

inline UINT32 CGame_SFIII2_A_DIR::GetLocationWithinSIMM(UINT32 nSIMMSetLocation)
{
    UINT32 nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nSFIII2SIMMLength)
    {
        nSIMMLocation -= c_nSFIII2SIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGame_SFIII2_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(L"\tCGame_SFIII2_A_DIR::LoadFile: SIMM %u is a peer SIMM: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber > 4)
    {
        // Nothing useful on those SIMMs: that's ROM 51
        strInfo.Format(L"CGame_SFIII2_A_DIR::LoadFile: SIMM %u is for ROM 51: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }

    // OK, so the old 50 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So to read the SIMMs we need to perform shenanigans.
    const UINT32 nSIMMSetAdjustment = (nSIMMNumber > 3) ? 4 : 0;
    const UINT32 nBeginningRange = 0 + (c_nSFIII2SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    UINT32 nEndingRange;

    nEndingRange = (c_nSFIII2SIMMLength * 2) + (c_nSFIII2SIMMLength * (nSIMMNumber - nSIMMSetAdjustment));

    CFile FilePeer;
    sFileRule PeerRule = GetNextRule();
    CString strPeerFilename;
    strPeerFilename.Format(L"%s\\%s", GetLoadDir(), PeerRule.szFileName);

    BOOL fFileOpened = FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary);

    CFile fileSIMM3;
    CFile fileSIMM4;

    if (fFileOpened)
    {
        UINT32 nPaletteLoadCount = 0;
        bool fShownCrossSIMMErrorOnce = false;

        strInfo.Format(L"CGame_SFIII2_A_DIR::LoadFile: Preparing to load data from SIMM number %u with peer %s (range 0x%x to 0x%x)\n", nSIMMNumber, PeerRule.szFileName, nBeginningRange, nEndingRange);
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
                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSizeInColors) > c_nSFIII2SIMMLength)
                    {
                        if (!fShownCrossSIMMErrorOnce)
                        {
                            fShownCrossSIMMErrorOnce = true;
                            strInfo.Format(L"Error: An extras file is trying to write from 0x%x to 0x%x, which crosses SIMM set boundaries.  This is not supported. Please remove that.", nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes));
                            MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                        }

                        fSuccess = FALSE;
                    }

                    m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], 0, sizeof(UINT16) * m_nCurrentPaletteSizeInColors);

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

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    if ((nGameFlag == SFIII2_A_DIR) && (nSIMMNumber == 2)) // 5.0, 5.1, 5.2, 5.3, done
    {
        // Only run the dupe checker for the second SIMM pair
        CheckForErrorsInTables();

        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;
    }

    return fSuccess;
}

inline UINT8 CGame_SFIII2_A_DIR::GetSIMMSetForROMLocation(UINT32 nROMLocation)
{
    return (nROMLocation > (2 * c_nSFIII2SIMMLength)) ? 1 : 0;
}

BOOL CGame_SFIII2_A_DIR::SaveFile(CFile* SaveFile, UINT16 nSIMMNumber)
{
    CString strInfo;
    UINT32 nSIMMSetAdjustment = 0;

    if ((nSIMMNumber % 2) == 1)
    {
        strInfo.Format(L"\tCGame_SFIII2_A_DIR::SaveFile: SIMM %u is a peer SIMM: skipping.\n", nSIMMNumber);
        OutputDebugString(strInfo);
        return TRUE;
    }
    else if (nSIMMNumber > nSIMMSetAdjustment)
    {
        strInfo.Format(L"CGame_SFIII2_A_DIR::SaveFile: SIMM %u is already saved.\n", nSIMMNumber);
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

    LPCWSTR pszBaseFormatString = SFIII_Arcade_USA_ROM_Base;
    UINT16 nSIMMSetBaseNumber = 5;;

    strSIMMName1.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber);
    strSIMMName2.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 1);
    strSIMMName3.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 2);
    strSIMMName4.Format(L"%s\\%s%u.%u", GetLoadDir(), pszBaseFormatString, nSIMMSetBaseNumber, nSIMMNumber + 3);

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
        (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary)))
    {
        strInfo.Format(L"CGame_SFIII2_A_DIR::SaveFile: Preparing to save data starting with SIMM %u\n", nSIMMNumber);
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

                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

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

        strInfo.Format(L"\tCGame_SFIII2_A_DIR::SaveFile: Saved %u palettes\n", nPaletteSaveCount);
        OutputDebugString(strInfo);
    }
    else
    {
        OutputDebugString(L"CGame_SFIII2_A_DIR::SaveFile: Failed to open full SIMM set: skipping save.\n");
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

LPCWSTR CGame_SFIII2_A_DIR::GetGameName()
{
    return L"SFIII:2nd Impact (Arcade Rerip)";
}

UINT32 CGame_SFIII2_A_DIR::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    UINT32 nPaletteSaveCount = 0;
    UINT16 nSIMMNumber = 0;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7

    // OK, so the old 50 ROM in the SIMM redump is interleaved.
    // There is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So we need some shenanigans to generate correct IPS files

    CFile fileIPS1;
    CFile fileIPS2;
    CFile fileIPS3;
    CFile fileIPS4;

    LPCWSTR pszBaseFormatString = SFIII_Arcade_USA_ROM_Base;
    UINT16 nSIMMSetBaseNumber = 5;

    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    strInfo.Format(L"CGame_SFIII2_A_DIR::SaveMultiplePatchFiles: Preparing to save IPS patches...\n");
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

    strInfo.Format(L"\tCGame_SFIII2_A_DIR::SaveMultiplePatchFiles: complete for 0x%x palettes\n", nPaletteSaveCount);
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
