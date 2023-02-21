#include "StdAfx.h"
#include "Game_JOJOS_A_DIR.h"

constexpr auto JOJOS_Arcade_ROM_Base = L"jojoba-simm5.";

CGame_JOJOS_A_DIR::CGame_JOJOS_A_DIR(uint32_t nConfirmedROMSize, JojosLoadingKey nJojosModeToLoad) :
        CGame_JOJOS_A(nConfirmedROMSize, nJojosModeToLoad)
{
    m_fAllowIPSPatching = true;
}

sFileRule CGame_JOJOS_A_DIR::GetRuleInternal(uint32_t nUnitId, JojosLoadingKey nVersionToLoad)
{
    sFileRule NewFileRule;
    uint16_t nAdjustedSIMMFileNumber = (nUnitId & RULE_COUNTER_DEMASK);

    switch (nVersionToLoad)
    {
    case JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP:
        wcsncpy(NewFileRule.szFileName, m_sFileLoadingData_50Rerip.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = static_cast<uint32_t>(m_sFileLoadingData_50Rerip.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize);
        break;
    case JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP:
    default:
        wcsncpy(NewFileRule.szFileName, m_sFileLoadingData_51Rerip.rgFileList.at(nAdjustedSIMMFileNumber).strFileName.c_str(), ARRAYSIZE(NewFileRule.szFileName));
        NewFileRule.uVerifyVar = static_cast<uint32_t>(m_sFileLoadingData_51Rerip.rgFileList.at(nAdjustedSIMMFileNumber).nFileSize);
        break;
    }

    NewFileRule.uUnitId = nUnitId;

    return NewFileRule;
}

sFileRule CGame_JOJOS_A_DIR::GetNextRuleInternal(JojosLoadingKey nVersionToLoad)
{
    sFileRule NewFileRule = GetRuleInternal(uRuleCtr, nVersionToLoad);
    uint16_t nMaxRuleNumber;

    uRuleCtr++;

    switch (nVersionToLoad)
    {
    case JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP:
        nMaxRuleNumber = static_cast<uint16_t>(m_sFileLoadingData_50Rerip.rgFileList.size());
        break;
    case JojosLoadingKey::JOJOS_A_51_ROMKEY_RERIP:
    default:
        nMaxRuleNumber = static_cast<uint16_t>(m_sFileLoadingData_51Rerip.rgFileList.size());
        break;
    }

    if (uRuleCtr >= nMaxRuleNumber)
    {
        uRuleCtr = INVALID_UNIT_VALUE;
    }

    return NewFileRule;
}

uint32_t CGame_JOJOS_A_DIR::SaveMultiplePatchFiles(CString strTargetDirectory)
{
    CString strInfo;
    uint32_t nPaletteSaveCount = 0;
    uint32_t nSIMMNumber = 0;

    // 50 maps to 5.0-5.3
    // 51 maps to 5.4-5.7
    switch (m_eVersionToLoad)
    {
    case JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP:
        // We want the first four files
        break;
    case JojosLoadingKey::JOJOS_US_A_51_ROMKEY_RERIP:
    default:
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

    LPCWSTR pszBaseFormatString = JOJOS_Arcade_ROM_Base;
    const uint16_t nSIMMSetBaseNumber = 5; // jojos just wants 50/51

    const bool fUserWantsAllChanges = UserWantsAllPalettesInPatch();

    strInfo.Format(L"CGame_JOJOS_A_DIR::SaveMultiplePatchFiles: Preparing to save IPS patches...\n");
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

                    strIPSName1.Format(L"%s\\%s%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMNumber);
                    strIPSName2.Format(L"%s\\%s%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMNumber + 1);

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

                    strIPSName3.Format(L"%s\\%s%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMNumber + 2);
                    strIPSName4.Format(L"%s\\%s%u.ips", strTargetDirectory.GetString(), pszBaseFormatString, nSIMMNumber + 3);

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

    strInfo.Format(L"\tCGame_JOJOS_A_DIR::SaveMultiplePatchFiles: complete for 0x%x palettes\n", nPaletteSaveCount);
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
