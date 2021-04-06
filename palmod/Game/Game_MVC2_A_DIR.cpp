#include "StdAfx.h"
#include "Game_MVC2_A_DIR.h"
#include "..\palmod.h" // getappname

UINT16 CGame_MVC2_A_DIR::uRuleCtr = 0;

constexpr auto MVC2_Arcade_ROM_Base = L"mpr-230";
constexpr auto MVC2_ROMReripOffsetDelta = 0x2000000;
constexpr auto MVC2_Arcade_NumberOfSIMMs = 8;

#define MVC2_RERIP_DEBUG                 DEFAULT_GAME_DEBUG_STATE

CGame_MVC2_A_DIR::CGame_MVC2_A_DIR(UINT32 nConfirmedROMSize) :
        CGame_MVC2_A(c_nMVC2SIMMLength)
{
    OutputDebugString(L"CGame_MVC2_A_DIR::CGame_MVC2_A_DIR: Loading from SIMM directory\n");
    nGameFlag = MVC2_A_DIR;
    // We lie here because we want to look at 8 SIMM banks
    nFileAmt = MVC2_Arcade_NumberOfSIMMs;

    // Ensure our change array is using the correct length
    FlushChangeTrackingArray();
    PrepChangeTrackingArray();
}

CGame_MVC2_A_DIR::~CGame_MVC2_A_DIR(void)
{
    FlushChangeTrackingArray();
}

sFileRule CGame_MVC2_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, L"%s%u.ic%u", MVC2_Arcade_ROM_Base, (nUnitId & 0x00FF) + 51, (nUnitId & 0x00FF) + 20);
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

    strInfo.Format(L"CGame_MVC2_A_DIR::LoadFile: Preparing to load data from SIMM number %u\n", nSIMMNumber);
    OutputDebugString(strInfo);

    const UINT32 nBeginningRange =  MVC2_ROMReripOffsetDelta + (c_nMVC2SIMMLength * nSIMMNumber);
    const UINT32 nEndingRange =     MVC2_ROMReripOffsetDelta + (c_nMVC2SIMMLength * nSIMMNumber) + c_nMVC2SIMMLength;

    strInfo.Format(L"\tSIMM %u begins at 0x%06x and ends at 0x%06x\n", nSIMMNumber, nBeginningRange, nEndingRange);
    OutputDebugString(strInfo);

    OutputDebugString(L"\tLoading MVC2_A_DIR from SIMMs....\n");
    bool fShownCrossSIMMErrorOnce = false;

    // this is a little obnoxious since it's per simm - could just load all 8 and party

    for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        if (m_pppDataBuffer[nUnitCtr] == nullptr)
        {
            m_pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
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
                m_pppDataBuffer[nUnitCtr][nPalCtr] = nullptr;
                continue;
            }

            if ((m_nCurrentPaletteROMLocation >= nBeginningRange) && (m_nCurrentPaletteROMLocation <= nEndingRange))
            {
                UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
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

                m_pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSizeInColors];

                LoadedFile->Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                LoadedFile->Read(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
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
    strInfo.Format(L"CGame_MVC2_A_DIR::SaveFile: Preparing to save data for MVC2 ROM set\n");
    OutputDebugString(strInfo);

    // In the SIMM rerip, the palettes start at mpr-23051.ic20 and increment upwards.
    // Thankfully they don't interleave.

    CFile fileSIMMs[MVC2_Arcade_NumberOfSIMMs];

    // We don't necessarily want the incoming file handle, so close it
    SaveFile->Abort();

    bool fLoadedEverything = true;

    for (UINT16 nIndex = 0; nIndex < MVC2_Arcade_NumberOfSIMMs; nIndex++)
    {
        CString strSIMMNames;
        strSIMMNames.Format(L"%s\\%s%u.ic%u", GetLoadDir(), MVC2_Arcade_ROM_Base, nIndex + 51, nIndex + 20);

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
            if (nUnitCtr == indexMVC2ATeamView)
            {
                // This is a virtual group.
                continue;
            }

            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                // proc_supp doesn't mark palettes changed, so only use this check if you change that logic
                //if (IsPaletteDirty(nUnitCtr, nPalCtr))
                {
                    LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                    const UINT8 nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                    UINT32 nOriginalOffset = m_nCurrentPaletteROMLocation;
                    UINT32 nOriginalROMLocation = m_nCurrentPaletteROMLocation;
                    m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

#if MVC2_RERIP_DEBUG
                    strInfo.Format(L"\tUnit 0x%x palette 0x%x: Translating location 0x%X to 0x%X (SIMM set %u)\n", nUnitCtr, nPalCtr, nOriginalROMLocation, m_nCurrentPaletteROMLocation, nSIMMSetToUse);
                    OutputDebugString(strInfo);
#endif

                    fileSIMMs[nSIMMSetToUse].Seek(m_nCurrentPaletteROMLocation, CFile::begin);
                    fileSIMMs[nSIMMSetToUse].Write(m_pppDataBuffer[nUnitCtr][nPalCtr], m_nCurrentPaletteSizeInColors * 2);
                }
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
