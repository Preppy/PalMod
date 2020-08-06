#include "StdAfx.h"
#include "Game_MVC2_A_DIR.h"
#include "..\palmod.h" // getappname

UINT16 CGame_MVC2_A_DIR::uRuleCtr = 0;

constexpr auto MVC2_Arcade_ROM_Base = _T("mpr-230");
constexpr auto MVC2_ROMReripOffsetDelta = 0x2000000;
constexpr auto MVC2_Arcade_NumberOfSIMMs = 8;

#define MVC2_RERIP_DEBUG                 DEFAULT_GAME_DEBUG_STATE

CGame_MVC2_A_DIR::CGame_MVC2_A_DIR(UINT32 nConfirmedROMSize) :
        CGame_MVC2_A(c_nMVC2SIMMLength)
{
    OutputDebugString(_T("CGame_MVC2_A_DIR::CGame_MVC2_A_DIR: Loading from SIMM directory\n"));
    nGameFlag = MVC2_A_DIR;
    // We lie here because we want to look at 8 SIMMs.
    nFileAmt = MVC2_Arcade_NumberOfSIMMs;

    // switch to directory mode
    safe_delete(rgFileChanged);
    rgFileChanged = new UINT16[nUnitAmt + 1];
    memset(rgFileChanged, NULL, sizeof(UINT16) * nUnitAmt);
}

CGame_MVC2_A_DIR::~CGame_MVC2_A_DIR(void)
{
    safe_delete_array(rgFileChanged);
}

sFileRule CGame_MVC2_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("%s%u.ic%u"), MVC2_Arcade_ROM_Base, (nUnitId & 0x00FF) + 51, (nUnitId & 0x00FF) + 20);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    return NewFileRule;
}

sFileRule CGame_MVC2_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(uRuleCtr);

    uRuleCtr++;

    if (uRuleCtr >= MVC2_Arcade_NumberOfSIMMs)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline UINT32 CGame_MVC2_A_DIR::GetLocationWithinSIMM(UINT32 nSIMMSetLocation)
{
    UINT32 nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nMVC2SIMMLength)
    {
        nSIMMLocation -= c_nMVC2SIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGame_MVC2_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(_T("CGame_MVC2_A_DIR::LoadFile: Preparing to load data from SIMM number %u\n"), nSIMMNumber);
    OutputDebugString(strInfo);

    const UINT32 nBeginningRange =  MVC2_ROMReripOffsetDelta + (c_nMVC2SIMMLength * nSIMMNumber);
    const UINT32 nEndingRange =     MVC2_ROMReripOffsetDelta + (c_nMVC2SIMMLength * nSIMMNumber) + c_nMVC2SIMMLength;

    strInfo.Format(_T("\tSIMM %u begins at 0x%06x and ends at 0x%06x\n"), nSIMMNumber, nBeginningRange, nEndingRange);
    OutputDebugString(strInfo);

    OutputDebugString(_T("\tLoading MVC2_A_DIR from SIMMs....\n"));
    bool fShownCrossSIMMErrorOnce = false;

    // this is a little obnoxious since it's per simm - could just load all 8 and party

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        if (pppDataBuffer[nUnitCtr] == nullptr)
        {
            pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
        }

        // Use a sorted layout
        rgUnitRedir[nUnitCtr] = MVC2_A_UNITSORT[nUnitCtr];

        for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                // We just need to be indexed in the rgUnitRedir
                pppDataBuffer[nUnitCtr][nPalCtr] = nullptr;
                continue;
            }

            if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
            {
                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if MVC2_RERIP_DEBUG
                strInfo.Format(_T("\t\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X\n"), nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation);
                OutputDebugString(strInfo);
#endif

                if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSize) > c_nMVC2SIMMLength)
                {
                    if (!fShownCrossSIMMErrorOnce)
                    {
                        fShownCrossSIMMErrorOnce = true;
                        strInfo.Format(_T("Error: An extras file is trying to write from 0x%x to 0x%x, which crosses SIMM boundaries.  This is not supported. Please remove that."), nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSize * 2));
                        MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                    }

                    fSuccess = FALSE;
                }

                pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            }
        }
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    // We're done with our "files" but gameload has a loose mapping between files and unit count.  
    // We can handle that mapping by simply setting the "file" count to the unit count.
    if (nSIMMNumber == (MVC2_Arcade_NumberOfSIMMs - 1))
    {
        CheckForErrorsInTables();
        nRedirCtr = nUnitAmt - 1;
    }

    return fSuccess;
}

inline UINT8 CGame_MVC2_A_DIR::GetSIMMSetForROMLocation(UINT32 nROMLocation)
{
    return (UINT8)(floor((nROMLocation - MVC2_ROMReripOffsetDelta) / c_nMVC2SIMMLength));
}

BOOL CGame_MVC2_A_DIR::SaveFile(CFile* SaveFile, UINT16 nSaveUnit)
{
    CString strInfo;
    strInfo.Format(_T("CGame_MVC2_A_DIR::SaveFile: Preparing to save data for MVC2 ROM set\n"));
    OutputDebugString(strInfo);

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // SO to read the SIMMs we need to perform shenanigans.

    CFile fileSIMMs[MVC2_Arcade_NumberOfSIMMs];

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    bool fLoadedEverything = true;

    for (UINT16 nIndex = 0; nIndex < MVC2_Arcade_NumberOfSIMMs; nIndex++)
    {
        CString strSIMMNames;
        strSIMMNames.Format(_T("%s%u.ic%u"), GetLoadDir(), MVC2_Arcade_ROM_Base, nIndex + 51, nIndex + 20);

        if (!fileSIMMs[nIndex].Open(strSIMMNames, CFile::modeWrite | CFile::typeBinary))
        {
            fLoadedEverything = false;
            break;
        }
    }

    if (fLoadedEverything)
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);
                
                UINT32 nOriginalOffset = m_nCurrentPaletteROMLocation;
                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if MVC2_RERIP_DEBUG
                strInfo.Format(_T("\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X (SIMM set %u)\n"), nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation, nSIMMSetToUse);
                OutputDebugString(strInfo);
#endif

                fileSIMMs[nSIMMSetToUse].Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                SaveFile->Write(pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSize * 2);
            }
        }
    }

    for (UINT16 nIndex = 0; nIndex < MVC2_Arcade_NumberOfSIMMs; nIndex++)
    {
        if (fileSIMMs[nIndex].m_hFile != CFile::hFileNull)
        {
            fileSIMMs[nIndex].Close();
        }
    }

    return TRUE;
}