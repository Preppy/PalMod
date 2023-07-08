#include "StdAfx.h"
#include "Game_CVS1_A.h"

CGame_CVS1_A::CvS1LoadingKey CGame_CVS1_A::m_eVersionToLoad = CvS1LoadingKey::ROM;

void CGame_CVS1_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, CvS1LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"capcom_vs_snk_millenium_fight_2000_unlocked.bin", CvS1LoadingKey::ROM },
        { L"capcom_vs_snk_millenium_fight_2000.bin", CvS1LoadingKey::ROM },
        { L"mpr-23504.ic1", CvS1LoadingKey::SIMM },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = CvS1LoadingKey::ROM;
    }

    return;
}

CGame_CVS1_A::CGame_CVS1_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == CvS1LoadingKey::ROM) ? m_sCoreGameData_ROM : m_sCoreGameData_SIMM);
}

sFileRule CGame_CVS1_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == CvS1LoadingKey::ROM) ? m_sFileLoadingData_ROM : m_sFileLoadingData_SIMM);
}

void CGame_CVS1_A::DumpAllCharacters()
{
    // Quick function/prototype that shows you the basic logic for exporting out a new palette for each character color
    // Update as you need
    struct sGame_PaletteExport
    {
        const std::wstring wstrPaletteName = L"uninit";
        const uint32_t nPaletteOffset = 0;
        const uint32_t nPaletteSectiontEnd = 0;
        const std::wstring wstrRest = L"";
    };

    const std::vector<sGame_PaletteExport> rgCvS1BaseCharacterInformation =
    {
        { L"Ryu", 0x8b6d00, 0x8b7200, L"indexCVS2Sprites_Ryu" },
        { L"Ken", 0x96f6e0, 0x96fbe0, L"indexCVS2Sprites_Ken" },
        { L"Chun-Li", 0x9f2820, 0x9f2d20, L"" },
        { L"Guile", 0xa8c3c0, 0xa8c8c0, L"indexCVS2Sprites_Guile" },
        { L"Zangief", 0xb7c1e0, 0xb7c6e0, L"indexCVS2Sprites_Zangief" },
        { L"Dhalsim", 0xc37180, 0xc37680, L"indexCVS2Sprites_Dhalsim" },
        { L"E. Honda", 0xcc16a0, 0xcc1ba0, L"indexCVS2Sprites_EHonda" },
        { L"Blanka", 0xda7220, 0xda7720, L"indexCVS2Sprites_Blanka" },
        { L"Claw", 0xe588a0, 0xe58da0, L"indexCVS2Sprites_Vega" },
        { L"Sagat", 0xed45c0, 0xed4ac0, L"indexCVS2Sprites_Sagat" },
        { L"Dictator", 0xf7c3e0, 0xf7c8e0, L"indexCVS2Sprites_MBison" },
        { L"Sakura", 0x1011c20, 0x1012120, L"indexCVS2Sprites_Sakura" },
        { L"Cammy", 0x1098c20, 0x1099120, L"indexCVS2Sprites_Cammy" },
        { L"Akuma", 0x1141920, 0x1141e20, L"indexCVS2Sprites_Akuma" },
        { L"Morrigan", 0x11f23a0, 0x11f28a0, L"indexCVS2Sprites_Morrigan" },
        { L"Evil Ryu", 0x1299180, 0x1299680, L"indexCVS2Sprites_Ryu" },
        { L"Kyo", 0x13e54e0, 0x13e59e0, L"indexCVS2Sprites_Kyo" },
        { L"Iori", 0x14dd0c0, 0x14dd5c0, L"indexCVS2Sprites_Iori" },
        { L"Terry", 0x1591e40, 0x1592340, L"indexCVS2Sprites_Terry" },
        { L"Ryo", 0x164ea20, 0x164ef20, L"indexCVS2Sprites_Ryo" },
        { L"Mai", 0x178f940, 0x178fe40, L"indexCVS2Sprites_Mai" },
        { L"Kim", 0x180ff40, 0x1810440, L"indexCVS2Sprites_Kim" },
        { L"Geese", 0x18d57c0, 0x18d5cc0, L"indexCVS2Sprites_Geese" },
        { L"Yamazaki", 0x19de900, 0x19dee00, L"indexCVS2Sprites_RyujiYamazaki" },
        { L"Raiden", 0x1ac14e0, 0x1ac19e0, L"indexCVS2Sprites_Raiden" },
        { L"Rugal", 0x1bcc3e0, 0x1bcc8e0, L"indexCVS2Sprites_Rugal" },
        { L"Vice", 0x1cadc20, 0x1cae120, L"indexCVS2Sprites_Vice" },
        { L"Benimaru", 0x1d81b40, 0x1d82040, L"indexCVS2Sprites_Benimaru" },
        { L"Yuri", 0x1e093e0, 0x1e098e0, L"indexCVS2Sprites_Yuri" },
        { L"King", 0x1e8c3a0, 0x1e8c8a0, L"indexCVS2Sprites_King" },
        { L"Nakoruru", 0x1f3cb40, 0x1f3d040, L"indexCVS2Sprites_Nakoruru" },
        { L"Orochi Iori", 0x202f480, 0x202f980, L"indexCVS2Sprites_OrochiIori" },
        { L"Boxer", 0x20bc180, 0x20bc680, L"indexCVS2Sprites_Balrog" },
    };

    const std::vector<std::wstring> rgPossibleColors =
    {
        L"LP",
        L"MP",
        L"HP",
        L"LK",
        L"MK",
        L"HK",
        L"3P",
        L"3K"
    };

    const std::vector<std::wstring> rgPaletteListColors =
    {
        L"",
        L" Extra 1",
        L" Extra 2",
        L" Extra 3",
        L" Extra 4",
    };

    const size_t nOffsetDeltaBetweenColors = 0x20 * rgPaletteListColors.size();
    CString strOutput;
    CString strCurrName;

    for (size_t iCurrChar = 0; iCurrChar < rgCvS1BaseCharacterInformation.size(); iCurrChar++)
    {
        for (size_t iCurrColor = 0; iCurrColor < rgPossibleColors.size(); iCurrColor++)
        {
            const size_t nTotalDelta = iCurrColor * nOffsetDeltaBetweenColors;
            size_t nStartingPosition = rgCvS1BaseCharacterInformation.at(iCurrChar).nPaletteOffset + nTotalDelta;
            size_t nEndingPosition = nStartingPosition + 0x20;

            wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str());

            strCurrName.Format(L"const sGame_PaletteDataset CVS1_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, rgPossibleColors.at(iCurrColor).c_str());
            OutputDebugString(strCurrName.GetString());

            for (size_t iCurrPalette = 0; iCurrPalette < rgPaletteListColors.size(); iCurrPalette++)
            {
                strCurrName.Format(L"%s %s%s", rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str(),
                                           rgPossibleColors.at(iCurrColor).c_str(),
                                           rgPaletteListColors.at(iCurrPalette).c_str());

                if (rgCvS1BaseCharacterInformation.at(iCurrChar).wstrRest.size())
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", strCurrName.GetString(),
                                                                            static_cast<int>(nStartingPosition),
                                                                            static_cast<int>(nEndingPosition),
                                                                            rgCvS1BaseCharacterInformation.at(iCurrChar).wstrRest.c_str(),
                                                                            static_cast<int>(iCurrPalette));
                }
                else
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", strCurrName.GetString(),
                        static_cast<int>(nStartingPosition),
                        static_cast<int>(nEndingPosition));
                }

                OutputDebugString(strOutput);

                nStartingPosition += 0x20;
                nEndingPosition += 0x20;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now print collections
    for (size_t iCurrChar = 0; iCurrChar < rgCvS1BaseCharacterInformation.size(); iCurrChar++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str());

        strCurrName.Format(L"const sDescTreeNode CVS1_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strCurrName.GetString());

        for (size_t iCurrColor = 0; iCurrColor < rgPossibleColors.size(); iCurrColor++)
        {
            strCurrName.Format(L"CVS1_A_%s_PALETTES_%s", szCodeDesc, rgPossibleColors.at(iCurrColor).c_str());
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s, ARRAYSIZE(%s) },\r\n", rgPossibleColors.at(iCurrColor).c_str(), strCurrName.GetString(), strCurrName.GetString());
            OutputDebugString(strOutput.GetString());
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    // Now print units
    OutputDebugString(L"const sDescTreeNode CVS1_A_UNITS[] =\r\n{\r\n");

    for (size_t iCurrChar = 0; iCurrChar < rgCvS1BaseCharacterInformation.size(); iCurrChar++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str());

        strCurrName.Format(L"CVS1_A_%s_COLLECTION", szCodeDesc);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)%s, ARRAYSIZE(%s) },\r\n", rgCvS1BaseCharacterInformation.at(iCurrChar).wstrPaletteName.c_str(),
                                        strCurrName.GetString(),
                                        strCurrName.GetString());
        OutputDebugString(strOutput.GetString());
    }

    OutputDebugString(L"};\r\n\r\n");
}
