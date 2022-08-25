#include "StdAfx.h"
#include "Game_VENTURE_A_DIR.h"
#include "..\palmod.h"

uint32_t CGame_VENTURE_A_DIR::uRuleCtr = 0;

LPCWSTR CGame_VENTURE_A_DIR::VENTURE_Arcade_ROM_Base_31 = L"jojo-simm3.";
LPCWSTR CGame_VENTURE_A_DIR::VENTURE_Arcade_ROM_Base_50 = L"jojo-simm5.";

#define VENTURE_RERIP_DEBUG                 DEFAULT_GAME_DEBUG_STATE

CGame_VENTURE_A_DIR::CGame_VENTURE_A_DIR(uint32_t nConfirmedROMSize, int nVentureModeToLoad) :
        CGame_VENTURE_A((nVentureModeToLoad == 31) ? m_nExpectedGameROMSize_31 : m_nExpectedGameROMSize_50, nVentureModeToLoad)   // Let Venture know that it's safe to load extras.
{
    OutputDebugString(L"CGame_VENTURE_A_DIR::CGame_VENTURE_A_DIR: Loading from SIMM directory\n");

    nGameFlag = (nVentureModeToLoad == 50) ? VENTURE_A_DIR_50 : VENTURE_A_DIR_31;
    nFileAmt = (nVentureModeToLoad == 50) ? c_nCountSIMMsUsed_50 : c_nCountSIMMsUsed_31;
    
    // not implemented
    m_fAllowIPSPatching = false;

    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_VENTURE_A_DIR::~CGame_VENTURE_A_DIR()
{
    FlushChangeTrackingArray();
}

sFileRule CGame_VENTURE_A_DIR::GetRule_31(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u", VENTURE_Arcade_ROM_Base_31, ((nUnitId + 4) & RULE_COUNTER_DEMASK));
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_VENTURE_A_DIR::GetNextRule_31()
{
    sFileRule NewFileRule = GetRule_31(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= c_nCountSIMMsUsed_31)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

sFileRule CGame_VENTURE_A_DIR::GetRule_50(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u", VENTURE_Arcade_ROM_Base_50, (nUnitId & RULE_COUNTER_DEMASK));
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_VENTURE_A_DIR::GetNextRule_50()
{
    sFileRule NewFileRule = GetRule_50(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= c_nCountSIMMsUsed_50)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

LPCWSTR CGame_VENTURE_A_DIR::GetGameName()
{
    if (UsePaletteSetFor50())
    {
        return L"Jojo's Venture (Japan CPS3, 5.x: Characters)";
    }
    else
    {
        return L"Jojo's Venture (Japan CPS3, 3.x: HUD Portraits)";
    }
}

inline uint32_t CGame_VENTURE_A_DIR::GetSIMMLocationFromROMLocation(uint32_t nROMLocation)
{
    uint32_t nSIMMLocation = 0;

    nSIMMLocation = nROMLocation / m_nSizeOfColorsInBytes;
    return nSIMMLocation;
}

inline uint32_t CGame_VENTURE_A_DIR::GetLocationWithinSIMM(uint32_t nSIMMSetLocation)
{
    uint32_t nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nVentureSIMMLength)
    {
        nSIMMLocation -= c_nVentureSIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGame_VENTURE_A_DIR::LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber)
{
    // This code loads one SIMM pair at a time.
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_VENTURE_A_DIR::LoadFile: Preparing to load data from SIMM number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    if ((nSIMMNumber % 2) == 1)
    {
        OutputDebugString(L"\tThis is a peer SIMM: skipping.\n");
        return TRUE;
    }
    else if (((nGameFlag == VENTURE_A_DIR_50) && (nSIMMNumber >= c_nCountSIMMsUsed_50)) ||
            ((nGameFlag == VENTURE_A_DIR_31) && (nSIMMNumber >= c_nCountSIMMsUsed_31)))
    {
        OutputDebugString(L"\tThis SIMM set is not used for the current Venture mode\n");
        return TRUE;
    }

    // OK, so the 50 ROM in the SIMM redump is interleaved.name 
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // So to read the SIMMs we need to perform shenanigans.
    const uint32_t nSIMMSetAdjustment =  0;
    const uint32_t nBeginningRange = 0 + (c_nVentureSIMMLength * (nSIMMNumber - nSIMMSetAdjustment));
    const uint32_t nEndingRange = (c_nVentureSIMMLength * 2) + (c_nVentureSIMMLength * (nSIMMNumber - nSIMMSetAdjustment));

    strInfo.Format(L"\tThe SIMM %zu set begins at 0x%06x and ends at 0x%06x\n", nSIMMNumber, nBeginningRange, nEndingRange);
    OutputDebugString(strInfo);

    CFile FilePeer;
    sFileRule PeerRule = (nGameFlag == VENTURE_A_DIR_50) ? GetNextRule_50() : GetNextRule_31();
    CString strPeerFilename;
    strPeerFilename.Format(L"%s\\%s", GetLoadedDirPathOnly(), PeerRule.szFileName);

    if (FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary))
    {
        OutputDebugString(L"\tLoading VENTURE_A_DIR from SIMMs....\n");
        bool fShownCrossSIMMErrorOnce = false;

        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (m_pppDataBuffer[nUnitCtr] == nullptr)
            {
                m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];
                memset(m_pppDataBuffer[nUnitCtr], NULL, sizeof(uint16_t*) * nPalAmt);
            }

            // These are already sorted, no need to redirect
            rgUnitRedir[nUnitCtr] = nUnitCtr;

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
                {
                    uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if VENTURE_RERIP_DEBUG
                    strInfo.Format(L"\t\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X\n", nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation);
                    OutputDebugString(strInfo);
#endif

                    if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSizeInColors) > c_nVentureSIMMLength)
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
                    memset(m_pppDataBuffer[nUnitCtr][nPalCtr], NULL, sizeof(uint16_t) * m_nCurrentPaletteSizeInColors);

                    LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    FilePeer.Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                    for (uint16_t nWordsRead = 0; nWordsRead < m_nCurrentPaletteSizeInColors; nWordsRead++)
                    {
                        BYTE high, low;
                        
                        LoadedFile->Read(&low, 1);
                        FilePeer.Read(&high, 1);

                        m_pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = (uint16_t)((high << 8) | low);
                    }
                }
            }
        }

        FilePeer.Close();
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    if (((nGameFlag == VENTURE_A_DIR_50) && (nSIMMNumber == 0)) || // 50 just uses 5.0 and 5.1
        ((nGameFlag == VENTURE_A_DIR_31) && (nSIMMNumber == (c_nCountSIMMsUsed_31 / 2))))
    {
        // Only run the dupe checker for the second SIMM pair
        CheckForErrorsInTables();

        // We're done with our "files" but gameload has a loose mapping between files and unit count.  
        // We can handle that mapping by simply setting the "file" count to the unit count.
        nRedirCtr = nUnitAmt - 1;
    }

    return fSuccess;
}

inline uint8_t CGame_VENTURE_A_DIR::GetSIMMSetForROMLocation(uint32_t nROMLocation)
{
    return (nROMLocation > (2 * c_nVentureSIMMLength)) ? 1 : 0;
}

BOOL CGame_VENTURE_A_DIR::SaveFile(CFile* SaveFile, uint32_t nSaveUnit)
{
    CString strInfo;
    strInfo.Format(L"CGame_VENTURE_A_DIR::SaveFile: Preparing to save data for Venture ROM set %zu\n", m_nVentureMode);
    OutputDebugString(strInfo);

    // OK, so the old 50 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // So to read the SIMMs we need to perform shenanigans.

    const uint32_t nSIMMSetAdjustment = (m_nVentureMode == 50) ? 0 : 4;

    CFile fileSIMM1;
    CString strSIMMName1;
    CFile fileSIMM2;
    CString strSIMMName2;
    CFile fileSIMM3;
    CString strSIMMName3;
    CFile fileSIMM4;
    CString strSIMMName4;

    BOOL fFileLoadSuccess = FALSE;

    // We want our own file handles, so close the existing lock
    SaveFile->Abort();

    if (UsePaletteSetFor50())
    {
        strSIMMName1.Format(L"%s\\%s%u", GetLoadedDirPathOnly(), VENTURE_Arcade_ROM_Base_50, nSIMMSetAdjustment + 0);
        strSIMMName2.Format(L"%s\\%s%u", GetLoadedDirPathOnly(), VENTURE_Arcade_ROM_Base_50, nSIMMSetAdjustment + 1);

        if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
            (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)))
        {
            fFileLoadSuccess = TRUE;
        }
    }
    else
    {
        strSIMMName1.Format(L"%s\\%s%u", GetLoadedDirPathOnly(), VENTURE_Arcade_ROM_Base_31, nSIMMSetAdjustment + 0);
        strSIMMName2.Format(L"%s\\%s%u", GetLoadedDirPathOnly(), VENTURE_Arcade_ROM_Base_31, nSIMMSetAdjustment + 1);
        strSIMMName3.Format(L"%s\\%s%u", GetLoadedDirPathOnly(), VENTURE_Arcade_ROM_Base_31, nSIMMSetAdjustment + 2);
        strSIMMName4.Format(L"%s\\%s%u", GetLoadedDirPathOnly(), VENTURE_Arcade_ROM_Base_31, nSIMMSetAdjustment + 3);

        if ((fileSIMM1.Open(strSIMMName1, CFile::modeWrite | CFile::typeBinary)) &&
            (fileSIMM2.Open(strSIMMName2, CFile::modeWrite | CFile::typeBinary)) &&
            (fileSIMM3.Open(strSIMMName3, CFile::modeWrite | CFile::typeBinary)) &&
            (fileSIMM4.Open(strSIMMName4, CFile::modeWrite | CFile::typeBinary)))
        {
            fFileLoadSuccess = TRUE;
        }
    }

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    if (fFileLoadSuccess)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    const uint8_t nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

#if VENTURE_RERIP_DEBUG
                    uint32_t nOriginalOffset = m_nCurrentPaletteROMLocation;
                    uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    strInfo.Format(L"\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X (SIMM set %u)\n", nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation, nSIMMSetToUse);
                    OutputDebugString(strInfo);
#endif

                    m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                    CFile* pSIMM1 = (nSIMMSetToUse == 0) ? &fileSIMM1 : &fileSIMM3;
                    CFile* pSIMM2 = (nSIMMSetToUse == 0) ? &fileSIMM2 : &fileSIMM4;

                    pSIMM1->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    pSIMM2->Seek(m_nCurrentPaletteROMLocation, CFile::begin);

                    // write length will be number of *bytes* in the sequence across 2 files
                    uint16_t nCurrentWriteLength = (m_nCurrentPaletteSizeInColors / m_nSizeOfColorsInBytes) * 2;

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

    OutputDebugString(L"\tSave complete!\n");
    return fFileLoadSuccess;
}
