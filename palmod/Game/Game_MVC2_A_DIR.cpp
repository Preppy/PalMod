#include "StdAfx.h"
#include "Game_MVC2_A_DIR.h"
#include "..\palmod.h" // getappname

uint32_t CGame_MVC2_A_DIR::m_uRuleCtr = 0;

constexpr auto MVC2_Arcade_ROM_Base = L"mpr-230";
constexpr auto MVC2_ROMReripOffsetDelta = 0x2000000;
constexpr auto MVC2_Arcade_NumberOfSIMMs = 8;

#define MVC2_RERIP_DEBUG                 DEFAULT_GAME_DEBUG_STATE

CGame_MVC2_A_DIR::CGame_MVC2_A_DIR(uint32_t nConfirmedROMSize) :
        CGame_MVC2_A(c_nMVC2SIMMLength, MVC2_A_DIR)
{
    OutputDebugString(L"CGame_MVC2_A_DIR::CGame_MVC2_A_DIR: Loading from SIMM directory\n");
    m_nGameFlag = MVC2_A_DIR;
    // We lie here because we want to look at 8 SIMM banks
    m_nFileAmt = MVC2_Arcade_NumberOfSIMMs;

    // Ensure our change array is using the correct length
    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_MVC2_A_DIR::~CGame_MVC2_A_DIR()
{
    FlushChangeTrackingArray();
}

sFileRule CGame_MVC2_A_DIR::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.ic%u", MVC2_Arcade_ROM_Base, (nUnitId & RULE_COUNTER_DEMASK) + 51, (nUnitId & RULE_COUNTER_DEMASK) + 20);
    NewFileRule.uUnitId = nUnitId;
    NewFileRule.uVerifyVar = (short int)-1;

    // There was an update to the ROM set used by Flycast: this handles the variant filenames.
    NewFileRule.fHasAltName = TRUE;
    _snwprintf_s(NewFileRule.szAltFileName, ARRAYSIZE(NewFileRule.szAltFileName), _TRUNCATE, L"%s%u.ic%us", MVC2_Arcade_ROM_Base, (nUnitId & RULE_COUNTER_DEMASK) + 51, (nUnitId & RULE_COUNTER_DEMASK) + 20);

    return NewFileRule;
}

sFileRule CGame_MVC2_A_DIR::GetNextRule()
{
    sFileRule NewFileRule = GetRule(m_uRuleCtr);

    m_uRuleCtr++;

    if (m_uRuleCtr >= MVC2_Arcade_NumberOfSIMMs)
    {
        m_uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

inline uint32_t CGame_MVC2_A_DIR::GetLocationWithinSIMM(uint32_t nSIMMSetLocation)
{
    uint32_t nSIMMLocation = nSIMMSetLocation;

    while (nSIMMLocation > c_nMVC2SIMMLength)
    {
        nSIMMLocation -= c_nMVC2SIMMLength;
    }

    return nSIMMLocation;
}

BOOL CGame_MVC2_A_DIR::LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber)
{
    BOOL fSuccess = TRUE;
    CString strInfo;

    strInfo.Format(L"CGame_MVC2_A_DIR::LoadFile: Preparing to load data from SIMM number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    const uint32_t nBeginningRange =  MVC2_ROMReripOffsetDelta + (c_nMVC2SIMMLength * nSIMMNumber);
    const uint32_t nEndingRange =     MVC2_ROMReripOffsetDelta + (c_nMVC2SIMMLength * nSIMMNumber) + c_nMVC2SIMMLength;

    strInfo.Format(L"\tSIMM %u begins at 0x%06x and ends at 0x%06x\n", nSIMMNumber, nBeginningRange, nEndingRange);
    OutputDebugString(strInfo);

    OutputDebugString(L"\tLoading MVC2_A_DIR from SIMMs....\n");
    bool fShownCrossSIMMErrorOnce = false;

    // this is a little obnoxious since it's per simm - could just load all 8 and party

    for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        if (m_pppDataBuffer[nUnitCtr] == nullptr)
        {
            m_pppDataBuffer[nUnitCtr] = new uint16_t * [nPalAmt];
        }

        // Use a sorted layout
        m_rgUnitRedir.at(nUnitCtr) = MVC2_A_UNITSORT[nUnitCtr];

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            LoadSpecificPaletteData(nUnitCtr, nPalCtr);

            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                // We just need to be indexed in the rgUnitRedir
                m_pppDataBuffer[nUnitCtr][nPalCtr] = nullptr;
                continue;
            }

            if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
            {
                uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if MVC2_RERIP_DEBUG
                strInfo.Format(L"\t\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X\n", nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation);
                OutputDebugString(strInfo);
#endif

                if ((m_nCurrentPaletteROMLocation + m_nCurrentPaletteSizeInColors) > c_nMVC2SIMMLength)
                {
                    if (!fShownCrossSIMMErrorOnce)
                    {
                        fShownCrossSIMMErrorOnce = true;
                        strInfo.Format(IDS_EXTRAS_SIMMBOUNDARY, nOriginalROMLocation, nOriginalROMLocation + (m_nCurrentPaletteSizeInColors * 2));
                        MessageBox(g_appHWnd, strInfo, GetHost()->GetAppName(), MB_ICONERROR);
                    }

                    fSuccess = FALSE;
                }

                m_pppDataBuffer[nUnitCtr][nPalCtr] = new uint16_t[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
            }
        }
    }

    if (nSIMMNumber == (MVC2_Arcade_NumberOfSIMMs - 1))
    {
        CheckForErrorsInTables();
    }

    return fSuccess;
}

inline uint8_t CGame_MVC2_A_DIR::GetSIMMSetForROMLocation(uint32_t nROMLocation)
{
    return static_cast<uint8_t>(floor((nROMLocation - MVC2_ROMReripOffsetDelta) / c_nMVC2SIMMLength));
}

BOOL CGame_MVC2_A_DIR::SaveFile(CFile* SaveFile, uint32_t nSaveUnit)
{
    if (nSaveUnit != 0)
    {
        OutputDebugString(L"CGame_MVC2_A_DIR::SaveFile: All data is written in pass 0: skipping this pass\n");
        return TRUE;
    }
    
    OutputDebugString(L"CGame_MVC2_A_DIR::SaveFile: Preparing to save data for MVC2 ROM set\n");

    // In the SIMM rerip, the palettes start at mpr-23051.ic20 and increment upwards.
    // Thankfully they don't interleave.

    CFile fileSIMMs[MVC2_Arcade_NumberOfSIMMs];

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    BOOL fLoadedEverything = TRUE;

    for (uint16_t nIndex = 0; nIndex < MVC2_Arcade_NumberOfSIMMs; nIndex++)
    {
        CString strSIMMNames;
        strSIMMNames.Format(L"%s\\%s%u.ic%u", GetLoadedDirPathOnly(), MVC2_Arcade_ROM_Base, nIndex + 51, nIndex + 20);

        if (!fileSIMMs[nIndex].Open(strSIMMNames, CFile::modeWrite | CFile::typeBinary))
        {
            // There's an updated ZIP using alt filenames for *some* of the files
            strSIMMNames.Format(L"%s\\%s%u.ic%us", GetLoadedDirPathOnly(), MVC2_Arcade_ROM_Base, nIndex + 51, nIndex + 20);

            if (!fileSIMMs[nIndex].Open(strSIMMNames, CFile::modeWrite | CFile::typeBinary))
            {
                fLoadedEverything = FALSE;
                OutputDebugString(L"\tFile is missing: aborting.\n");
                break;
            }
        }
    }

    if (fLoadedEverything)
    {
        for (uint32_t nUnitCtr = 0; nUnitCtr < m_nUnitAmt; nUnitCtr++)
        {
            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                OutputDebugString(L"\tskipping the virtual Team View unit\n");
                continue;
            }

            uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                // proc_supp doesn't mark palettes changed, so only use this check if you change that logic
                //if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    const uint8_t nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    uint32_t nOriginalOffset = m_nCurrentPaletteROMLocation;
                    uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if MVC2_RERIP_DEBUG
                    strInfo.Format(L"\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X (SIMM set %u)\n", nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation, nSIMMSetToUse);
                    OutputDebugString(strInfo);
#endif

                    fileSIMMs[nSIMMSetToUse].Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    fileSIMMs[nSIMMSetToUse].Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                }
            }

            CString strOutput;
            strOutput.Format(L"\tSaved %3u palettes for unit 0x%02x\n", nPalAmt, nUnitCtr);
            OutputDebugString(strOutput.GetString());
        }
    }

    for (uint16_t nIndex = 0; nIndex < MVC2_Arcade_NumberOfSIMMs; nIndex++)
    {
        if (fileSIMMs[nIndex].m_hFile != CFile::hFileNull)
        {
            fileSIMMs[nIndex].Close();
        }
    }

    OutputDebugString(L"\tSave complete!\n");

    return fLoadedEverything;
}
