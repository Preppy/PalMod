#include "StdAfx.h"
#include "Game_SSF2_A.h"

CGame_SSF2_A::SSF2LoadingKey CGame_SSF2_A::m_eVersionToLoad = SSF2LoadingKey::ROM03;

#include <iostream>

void DumpPortHeaders()
{
    struct ColorData
    {
        std::wstring PrintName;
        std::wstring HeaderName;
    };

    const std::vector<ColorData> strColorNames = {
      { L"Jab", L"JAB" },
      { L"Strong", L"STRONG" },
      { L"Fierce", L"FIERCE" },
      { L"Short", L"SHORT" },
      { L"Forward", L"FORWARD" },
      { L"Roundhouse", L"ROUNDHOUSE" },
      { L"Start", L"START" },
      { L"Hold", L"HOLD" },
    };

    struct NameData
    {
        std::wstring PrintName;
        std::wstring CodeName;
        std::wstring HeaderName;
        uint16_t nCountExtras;
        std::wstring NameExtra1;
        std::wstring NameExtra2;
        std::wstring NameExtra3;
        std::wstring NameExtra4;
        std::wstring NameExtra5;
        std::wstring NameExtra6;
        std::wstring NameExtra7;
    };

    const std::vector<NameData> strCharacters = {
        { L"Ryu",       L"Ryu",     L"RYU",     2, L"", L"Hadoken" },
        { L"E. Honda",  L"EHonda",  L"EHONDA",  0 },
        { L"Blanka",    L"Blanka",  L"BLANKA",  0 },
        { L"Guile",     L"Guile",   L"GUILE",   2, L"", L"Sonic Boom" },
        { L"Ken",       L"Ken",     L"KEN",     2, L"", L"Hadoken" },
        { L"Chun-Li",   L"ChunLi",  L"CHUNLI",  2, L"", L"Kikouken" },
        { L"Zangief",   L"Zangief", L"ZANGIEF", 0 },
        { L"Dhalsim",   L"Dhalsim", L"DHALSIM", 0 },
        { L"M. Bison",  L"Bison",   L"MBISON",  7, L"Cape", L"", L"Psycho Crusher 1", L"Psycho Crusher 2", L"Psycho Attacks" },
        { L"Sagat",     L"Sagat",   L"SAGAT",   2, L"", L"Tiger Shot" },
        { L"Balrog",    L"Balrog",  L"BALROG",  0 },
        { L"Vega",      L"Vega",    L"VEGA",    0 },
        { L"Cammy",     L"Cammy",   L"CAMMY",   0 },
        { L"T-Hawk",    L"THawk",   L"THAWK",   0 },
        { L"Fei Long",  L"FeiLong", L"FEILONG", 0 },
        { L"Dee Jay",   L"DeeJay",  L"DEEJAY",  2, L"", L"Air Slasher" },
    };

    // 0x13d0c ryu 04 start
    const auto c_03CharacterStart = 0x13d0c;
    const auto port03start = 0x2e370;
    const auto c_dwPalSize = 0x20;
    const auto c_dwPortraitPalSize = 0x80;

    auto dwCurCharacterPos = c_03CharacterStart;

    std::wcout << std::hex;

    // sagat 0x1562c - main - x - tiger shot 

    for (auto& character : strCharacters)
    {
        for (auto& colorname : strColorNames)
        {
            CString strOutput;

            strOutput.Format(L"const sGame_PaletteDataset SSF2_A_%s_PALETTES_%s[]=\r\n{\r\n", character.HeaderName.c_str(), colorname.HeaderName.c_str());
            OutputDebugString(strOutput.GetString());

            if (character.CodeName == strCharacters.at(8).CodeName) // BISON
            {
                strOutput.Format(L"    { L\"Main Color\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00, &pairNext3 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Cape\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x01 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Psycho Crusher\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x03 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Psycho Attacks\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x02, &pairPrevious3 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                dwCurCharacterPos += c_dwPalSize;
                dwCurCharacterPos += c_dwPalSize;
                dwCurCharacterPos += c_dwPalSize;

                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput.GetString());
            }
            else
            {
                strOutput.Format(L"    { L\"Main Color\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                if (character.nCountExtras)
                {
                    strOutput.Format(L"    // Unused { L\"Extra 00\", 0x%x, 0x%x },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize);
                    dwCurCharacterPos += c_dwPalSize;
                    OutputDebugString(strOutput.GetString());

                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x01 },\r\n", character.NameExtra2.c_str(), dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                    dwCurCharacterPos += c_dwPalSize;
                    OutputDebugString(strOutput.GetString());
                }

                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput.GetString());
            }

            // Random shift
            dwCurCharacterPos += 2;
        }

        // shift after each character
        dwCurCharacterPos += 0x10;
    }

#ifdef want_portraits
    auto dwCurPortraitPos = port03start;

    for (auto& character : strCharacters)
    {
        for (auto& colorname : strColorNames)
        {
            CString strOutput;

            strOutput.Format(L"const sGame_PaletteDataset SSF2_A_%s_PORTRAITS_%s[]=\r\n{\r\n", character.HeaderName.c_str(), colorname.HeaderName.c_str());
            OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"%s Portrait - %s 1/2\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x10, &pairNext },\r\n", character.PrintName.c_str(), colorname.PrintName.c_str(), dwCurPortraitPos, dwCurPortraitPos + c_dwPortraitPalSize, character.CodeName.c_str());
                OutputDebugString(strOutput.GetString());

                const auto magicoffset = 0x30 + 0x32370 - 0x2e370;// c_dwPalSize* colorname.* character;
                strOutput.Format(L"    { L\"%s Portrait - %s 2/2\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x11 },\r\n", character.PrintName.c_str(), colorname.PrintName.c_str(), dwCurPortraitPos + magicoffset, dwCurPortraitPos + magicoffset + c_dwPortraitPalSize, character.CodeName.c_str());
                OutputDebugString(strOutput.GetString());

            strOutput = L"};\r\n\r\n";
            OutputDebugString(strOutput.GetString());
            dwCurPortraitPos += c_dwPortraitPalSize;
        }
    }
#endif
}

void CGame_SSF2_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SSF2LoadingKey> m_rgFileNameToVersion =
    {
        { L"ssfe-03b", SSF2LoadingKey::ROM03 },
        { L"ssfe.04", SSF2LoadingKey::ROM04 },
        { L"ssfe.07", SSF2LoadingKey::ROM07 },

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
        m_eVersionToLoad = SSF2LoadingKey::ROM03;
    }

    return;
}

CGame_SSF2_A::CGame_SSF2_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SSF2LoadingKey::ROM03:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM03);
        break;
    case SSF2LoadingKey::ROM04:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM04);
        break;
    case SSF2LoadingKey::ROM07:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM07);
        break;
    }
}

sFileRule CGame_SSF2_A::GetRule(uint32_t nRuleId)
{
    // This was used to generate the shifted SSF2 headers.
    // Probably never needed again, but hey you never know.
    //DumpPortHeaders();

    switch (m_eVersionToLoad)
    {
    case SSF2LoadingKey::ROM03:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM03);
    case SSF2LoadingKey::ROM04:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM04);
    case SSF2LoadingKey::ROM07:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM07);
    }
}
