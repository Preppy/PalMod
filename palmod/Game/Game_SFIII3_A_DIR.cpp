#include "StdAfx.h"
#include "Game_SFIII3_A_DIR.h"

UINT16 CGame_SFIII3_A_DIR::uRuleCtr = 0;

constexpr auto SFIII_Arcade_ROM_Base = _T("sfiii3-simm5.");

CGame_SFIII3_A_DIR::CGame_SFIII3_A_DIR(UINT32 nConfirmedROMSize) :
    CGame_SFIII3_A(0x800000) // Let the core game know it's safe to load Extras
{
    nGameFlag = SFIII3_A_DIR;
    nFileAmt = 8;

    // switch to directory mode
    safe_delete(rgFileChanged);
    rgFileChanged = new UINT16[nFileAmt];
    memset(rgFileChanged, NULL, sizeof(UINT16) * nFileAmt);
}

CGame_SFIII3_A_DIR::~CGame_SFIII3_A_DIR(void)
{
    safe_delete_array(rgFileChanged);
}

sFileRule CGame_SFIII3_A_DIR::GetRule(UINT16 nUnitId)
{
    sFileRule NewFileRule;

    _stprintf_s(NewFileRule.szFileName, MAX_FILENAME_LENGTH, _T("%s%u"), SFIII_Arcade_ROM_Base, (nUnitId & 0x00FF));
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

BOOL CGame_SFIII3_A_DIR::LoadFile(CFile* LoadedFile, UINT16 nROMNumber)
{
    if (nROMNumber < 6)
    {
        // Nothing useful on those ROMs
        return TRUE;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // SO to read the SIMMs we need to perform shenanigans.
    UINT32 nBeginningRange = 0 + (c_nSFIII3RomLength * (nROMNumber - 4));
    UINT32 nEndingRange = (c_nSFIII3RomLength * 2) + (c_nSFIII3RomLength * (nROMNumber - 4));

    CString strInfo;

    CFile FilePeer;
    sFileRule PeerRule = GetNextRule();
    CString strPeerFilename;
    strPeerFilename.Format(_T("%s\\%s"), GetLoadDir(), PeerRule.szFileName);

    if (FilePeer.Open(strPeerFilename, CFile::modeRead | CFile::typeBinary))
    {
        OutputDebugString(_T("Loading SFIII3_A_DIR from SIMMs....\n"));

        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            if (pppDataBuffer[nUnitCtr] == nullptr)
            {
                pppDataBuffer[nUnitCtr] = new UINT16 * [nPalAmt];
                memset(pppDataBuffer[nUnitCtr], NULL, sizeof(UINT16 *) * nPalAmt);
            }

            rgUnitRedir[nUnitCtr] = SFIII3_A_UNITSORT[nUnitCtr];

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((nCurrPalOffs >= nBeginningRange) && (nCurrPalOffs <= nEndingRange))
                {
                    nCurrPalOffs = (nCurrPalOffs / 2) - c_nSFIII3RomLength;
                    pppDataBuffer[nUnitCtr][nPalCtr] = new UINT16[m_nCurrentPaletteSize];
                    memset(pppDataBuffer[nUnitCtr][nPalCtr], NULL, sizeof(UINT16) * m_nCurrentPaletteSize);

                    LoadedFile->Seek(nCurrPalOffs, CFile::begin);
                    FilePeer.Seek(nCurrPalOffs, CFile::begin);

                    for (int nWordsRead = 0; nWordsRead < m_nCurrentPaletteSize; nWordsRead++)
                    {
                        BYTE high, low;
                        
                        LoadedFile->Read(&low, 1);
                        FilePeer.Read(&high, 1);

                        pppDataBuffer[nUnitCtr][nPalCtr][nWordsRead] = (UINT16)((high << 8) | low);
                    }
                }
            }
        }

        FilePeer.Close();
    }

    rgUnitRedir[nUnitAmt] = INVALID_UNIT_VALUE;

    // We're done with our "files" but gameload has a loose mapping between files and unit count.  
    // We can handle that mapping by simply setting the "file" count to the unit count.
    nRedirCtr = nUnitAmt - 1;

    return TRUE;
}

BOOL CGame_SFIII3_A_DIR::SaveFile(CFile* SaveFile, UINT16 nROMNumber)
{
    if (nROMNumber < 6)
    {
        // Nothing useful on those ROMs
        return TRUE;
    }

    // OK, so the old 51 ROM in the SIMM redump is interleaved.
    // There is one byte from  5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // SO to read the SIMMs we need to perform shenanigans.
    UINT32 nBeginningRange = 0 + (c_nSFIII3RomLength * (nROMNumber - 4));
    UINT32 nEndingRange = (c_nSFIII3RomLength * 2) + (c_nSFIII3RomLength * (nROMNumber - 4));

    CFile FilePeer;
    CString strPeerFilename;
    strPeerFilename.Format(_T("%s\\%s%u"), GetLoadDir(), SFIII_Arcade_ROM_Base, nROMNumber + 1);

    if (FilePeer.Open(strPeerFilename, CFile::modeWrite | CFile::typeBinary))
    {
        for (UINT16 nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
        {
            UINT16 nPalAmt = GetPaletteCountForUnit(nUnitCtr);

            for (UINT16 nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                if ((nCurrPalOffs >= nBeginningRange) && (nCurrPalOffs <= nEndingRange))
                {
                    UINT32 nOriginalOffset = nCurrPalOffs;
                    nCurrPalOffs = (nCurrPalOffs / 2) - c_nSFIII3RomLength;

                    SaveFile->Seek(nCurrPalOffs, CFile::begin);
                    FilePeer.Seek(nCurrPalOffs, CFile::begin);

                    for (int nWordsWritten = 0; nWordsWritten < m_nCurrentPaletteSize; nWordsWritten++)
                    {
                        // This would be obnoxiously slow: avoid seek to begin
                        BYTE high = (pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF00) >> 8;
                        BYTE low = pppDataBuffer[nUnitCtr][nPalCtr][nWordsWritten] & 0xFF;

                        SaveFile->Write(&low, 1);
                        FilePeer.Write(&high, 1);
                    }
                }
            }
        }

        FilePeer.Close();
    }

    return TRUE;
}
