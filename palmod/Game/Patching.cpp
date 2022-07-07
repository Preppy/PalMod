#include "StdAfx.h"
#include "GameClass.h"
#include "..\PalMod.h"

bool CGameClass::UserWantsAllPalettesInPatch()
{
    CString strOptions;
    strOptions.Format(L"Do you want this to be a complete game patch of all possible palettes?  They are much larger and are usually very wasteful.  Select Yes for that, or No to just include the %u palette%s you changed in this current session.", m_vDirtyPaletteList.size(), (m_vDirtyPaletteList.size() > 1) ? L"s" : L"");

    return (MessageBox(g_appHWnd, strOptions, GetHost()->GetAppName(), MB_YESNO | MB_DEFBUTTON2) == IDYES);
}

uint32_t CGameClass::SavePatchFile(CFile* PatchFile, uint32_t nUnitId)
{
    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    uint32_t nTotalPalettesSaved = 0;
    LPCSTR szIPSOpener = "PATCH";
    PatchFile->Write(szIPSOpener, (UINT)strlen(szIPSOpener));

    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);
                uint32_t nInitialOffset = 0;

                if (nGameFlag == TMNTTF_SNES)
                {
                    // TMNTTF is evil and uses overlapping palettes.  Account for this by snipping off the lead transparency color.
                    m_nCurrentPaletteROMLocation += m_nSizeOfColorsInBytes;
                    m_nCurrentPaletteSizeInColors--;
                    nInitialOffset = 1;
                }

                // Location
                BYTE b1 = (m_nCurrentPaletteROMLocation & 0xFF0000) >> 16;
                BYTE b2 = (m_nCurrentPaletteROMLocation & 0xFF00) >> 8;
                BYTE b3 = m_nCurrentPaletteROMLocation & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);
                PatchFile->Write(&b3, 1);

                // Size
                b1 = ((m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes) & 0xFF00) >> 8;
                b2 = (m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes) & 0xFF;
                PatchFile->Write(&b1, 1);
                PatchFile->Write(&b2, 1);

                // Actual data
                if (GameIsUsing16BitColor())
                {
                    PatchFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nInitialOffset], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }
                else
                {
                    PatchFile->Write(&m_pppDataBuffer[nUnitCtr][nPalCtr][nInitialOffset], m_nCurrentPaletteSizeInColors * m_nSizeOfColorsInBytes);
                }

                nTotalPalettesSaved++;
            }
        }
    }

    LPCSTR szIPSCloser = "EOF";
    PatchFile->Write(szIPSCloser, (UINT)strlen(szIPSCloser));

#ifdef WANT_IPS_DAT_FILES
    // This code works, but I'm discussing what we want to do with it if anything.

    // Now generate DAT file...
    if (m_pCRC32SpecificData)
    {
        wchar_t szDATFilename[MAX_PATH];
        wchar_t szIPSFilename[MAX_PATH];

        wcscpy(szDATFilename, PatchFile->GetFilePath().GetString());

        wchar_t* pszDot = wcsrchr(szDATFilename, L'.');

        if (pszDot != nullptr)
        {
            pszDot[0] = 0;
        }

        pszDot = wcsrchr(szDATFilename, L'\\');

        wcscpy(szIPSFilename, pszDot + 1);

        wcscat(szDATFilename, L".dat");

        CFile DATFile;

        // In debug builds this will trigger what appears to be a bogus assert in CFile which is stating that
        // typeText is not supported.  But it is ... just appears to be a random bad assert.
        if (DATFile.Open(szDATFilename, CFile::modeWrite | CFile::modeCreate | CFile::typeText))
        {
            CStringA strOutput;
            strOutput.Format("%S    %S    CRC(%x)\r\n\r\n", GetROMFileName(), szIPSFilename, m_pCRC32SpecificData->crcValueExpected);
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("[en_US]\r\nColor Mod from %S\r\n\r\n", GetHost()->GetAppName(false).GetString());
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("Hacker: (your name here)\r\n\r\n");
            DATFile.Write(strOutput, strOutput.GetLength());

            strOutput.Format("Description: color changes for %S\r\n\r\n", GetGameName());
            DATFile.Write(strOutput, strOutput.GetLength());

            DATFile.Abort();
        }
    }
#endif

    CString strMsg;
    strMsg.Format(L"CGameClass::SavePatchFile: Saved 0x%x palettes to patching file for %u units\n", nTotalPalettesSaved, nUnitAmt);
    OutputDebugString(strMsg);

    return nTotalPalettesSaved;
}

uint32_t CGameClass::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    uint32_t nPaletteSaveCount = 0;
    uint32_t nSIMMNumber = m_nSIMMSetStartingFileNumber;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7

    // This handles ROMs as interleaved
    // There is one byte from 5.0 followed by one byte from 5.1, up until the end of those SIMMs.
    // That is then followed by one byte from 5.6 followed by one byte from 5.7, repeat until end of SIMM.
    // So we need some shenanigans to generate correct IPS files

    CFile fileIPS1;
    CFile fileIPS2;
    CFile fileIPS3;
    CFile fileIPS4;

    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    strInfo.Format(L"CGameClass::SaveMultiplePatchFiles: Preparing to save IPS patches...\n");
    OutputDebugString(strInfo);

    bool fSetOneOpened = false;
    bool fSetTwoOpened = false;

    for (uint32_t nUnitCtr = 0; nUnitCtr < nUnitAmt; nUnitCtr++)
    {
        uint32_t nPalAmt = GetPaletteCountForUnit(nUnitCtr);

        for (uint32_t nPalCtr = 0; nPalCtr < nPalAmt; nPalCtr++)
        {
            if (fUserWantsAllChanges || IsPaletteDirty(nUnitCtr, nPalCtr))
            {
                LoadSpecificPaletteData(nUnitCtr, nPalCtr);

                uint32_t nOriginalROMLocation = m_nCurrentPaletteROMLocation;

                const uint8_t nSIMMSetToUse = GetSIMMSetForROMLocation(m_nCurrentPaletteROMLocation);

                m_nCurrentPaletteROMLocation = GetSIMMLocationFromROMLocation(m_nCurrentPaletteROMLocation);
                m_nCurrentPaletteROMLocation = GetLocationWithinSIMM(m_nCurrentPaletteROMLocation);

                // Open these on a JIT basis so we only create them if needed.
                if ((nSIMMSetToUse == 0) && !fSetOneOpened)
                {
                    CString strIPSName1;
                    CString strIPSName2;

                    strIPSName1.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber);
                    strIPSName2.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 1);

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
                        strInfo.Format(L"Failure to open patch file for set containing '%s': aborting.\n", strIPSName1.GetString());
                        OutputDebugString(strInfo.GetString());
                        break;
                    }
                }
                else if ((nSIMMSetToUse == 1) && !fSetTwoOpened)
                {
                    CString strIPSName3;
                    CString strIPSName4;

                    strIPSName3.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 2);
                    strIPSName4.Format(L"%s\\%s%u.%u.ips", strTargetDirectory.GetString(), m_pszSIMMBaseFileName, m_nSIMMSetBaseNumber, nSIMMNumber + 3);

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
                        strInfo.Format(L"Failure to open patch file for set containing '%s': aborting.\n", strIPSName3.GetString());
                        OutputDebugString(strInfo.GetString());
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

    strInfo.Format(L"\tCGameClass::SaveMultiplePatchFiles: complete for 0x%x palettes\n", nPaletteSaveCount);
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
