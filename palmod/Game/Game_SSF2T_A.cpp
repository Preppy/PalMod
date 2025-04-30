#include "StdAfx.h"
#include "Game_SSF2T_A.h"

CGame_SSF2T_A::SSF2TLoadingKey CGame_SSF2T_A::m_eVersionToLoad = SSF2TLoadingKey::ROM03;

#include <iostream>

void DumpHeaders()
{
    const std::vector<std::wstring> strColorNames = {
      { L"11" },
      { L"12" },
      { L"13" },
      { L"14" },
      { L"15" },
      { L"16" },
      { L"17" },
      { L"18" },
      { L"19" },
      { L"20" },
      { L"21" },
      { L"22" },
      { L"23" },
      { L"24" },
      { L"25" },
      { L"26" },
      { L"27" },
      { L"28" },
      { L"29" },
      { L"30" },
    };

    struct NameData
    {
        std::wstring PrintName;
        std::wstring CodeName;
        std::wstring Extra00Name;
    };

    const std::vector<NameData> strCharacters = {
        { L"Ryu", L"Ryu" },
        { L"E. Honda", L"EHonda" },
        { L"Blanka", L"Blanka" },
        { L"Guile", L"Guile", L"Sonic Boom" },
        { L"Ken", L"Ken" },
        { L"Chun-Li", L"ChunLi", L"Kikouken" },
        { L"Zangief", L"Zangief", L"Banishing Fist" },
        { L"Dhalsim", L"Dhalsim" },
        { L"M. Bison", L"Bison", L"Cape" },
        { L"Sagat", L"Sagat", L"Tiger Shot" },
        { L"Balrog", L"Balrog" },
        { L"Vega", L"Vega" },
        { L"Cammy", L"Cammy" },
        { L"T-Hawk", L"THawk" },
        { L"Fei Long", L"FeiLong" },
        { L"Dee Jay", L"DeeJay", L"Air Slasher" },
        { L"Gouki", L"Gouki", L"Unknown" },
    };

    const auto c_dwCharacterStart = 0x071f4a;
    const auto c_dwPalSize = 0x20;

    auto dwCurCharacterPos = c_dwCharacterStart;

    std::wcout << std::hex;

    for (auto &character : strCharacters)
    {
        for (auto &colorname : strColorNames)
        {
            CString strOutput;

            strOutput.Format(L"const sGame_PaletteDataset SSF2T_A_%s_09NL_%s[]=\r\n{\r\n", character.CodeName.c_str(), colorname.c_str());
            OutputDebugString(strOutput.GetString());

            if (character.CodeName == strCharacters.at(8).CodeName)
            {
                strOutput.Format(L"    { L\"Main Color\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00, &pairNext2 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x01 },\r\n", character.Extra00Name.c_str(), dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Psycho Attacks\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x02, &pairPrevious2 },\r\n", dwCurCharacterPos + c_dwPalSize + c_dwPalSize, dwCurCharacterPos + c_dwPalSize + c_dwPalSize + c_dwPalSize, character.CodeName.c_str());
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Psycho Crusher\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x03 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                dwCurCharacterPos += c_dwPalSize;
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());


                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput.GetString());
            }
            else
            {
                strOutput.Format(L"    { L\"Main Color\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                if (character.Extra00Name.length()) // GUILE, CHUN, GIEF, BISON, SAGAT, DEEJAY
                {
                    strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x01 },\r\n", character.Extra00Name.c_str(), dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                }
                else
                {
                    strOutput.Format(L"    // Unused { L\"Extra 00\", 0x%x, 0x%x },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize);
                }
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Super Trail 1\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Super Trail 2\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"    { L\"Super Trail 3\", 0x%x, 0x%x, indexSF2Sprites_%s, 0x00 },\r\n", dwCurCharacterPos, dwCurCharacterPos + c_dwPalSize, character.CodeName.c_str());
                dwCurCharacterPos += c_dwPalSize;
                OutputDebugString(strOutput.GetString());

                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput.GetString());
            }

            dwCurCharacterPos += 2;
        }

        dwCurCharacterPos += (0x72c3a - 0x72bf0) - 0x22;

        if (character.CodeName == strCharacters.at(15).CodeName)
        {
            // special shift to gouki
            // Note that Gouki is actually palettes 1-30 in this file, not 11-30.
            // As such I massaged it by hand at the end.
            dwCurCharacterPos += 0x14;
        }
    }

    for (auto& character : strCharacters)
    {
        CString strOutput;

        strOutput.Format(L"const sGame_PaletteDataset SSF2T_A_%s_09NL_PORTRAITS[]=\r\n{\r\n\r\n};\r\n\r\n", character.CodeName.c_str());
        OutputDebugString(strOutput.GetString());
    }

    for (auto& character : strCharacters)
    {
        CString strOutput;

        strOutput.Format(L"const sDescTreeNode SSF2T_A_%s_09NL_COLLECTION[]=\r\n{\r\n", character.CodeName.c_str());
        OutputDebugString(strOutput.GetString());

        for (auto& colorname : strColorNames)
        {
            CString strOutput;

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SSF2T_A_%s_09NL_%s, ARRAYSIZE(SSF2T_A_%s_09NL_%s) },\r\n", colorname.c_str(), character.CodeName.c_str(), colorname.c_str(), character.CodeName.c_str(), colorname.c_str());
            OutputDebugString(strOutput.GetString());
        }

        strOutput.Format(L"    { L\"Portraits\", DESC_NODETYPE_TREE, (void*)SSF2T_A_%s_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_%s_09NL_PORTRAITS) },\r\n", character.CodeName.c_str(), character.CodeName.c_str());
        OutputDebugString(strOutput.GetString());

        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput.GetString());
    }

    for (auto& character : strCharacters)
    {
        CString strOutput;

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SSF2T_A_%s_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_%s_09NL_COLLECTION) },\r\n", character.PrintName.c_str(), character.CodeName.c_str(), character.CodeName.c_str());
        OutputDebugString(strOutput.GetString());
    }
}

void CGame_SSF2T_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    // Debug only: leaving in case we need to regenerate
    //DumpHeaders();

    const std::map<std::wstring, SSF2TLoadingKey> m_rgFileNameToVersion =
    {
        { L"sfnl.03", SSF2TLoadingKey::ROM03nl },
        { L"sfnl.04", SSF2TLoadingKey::ROM04 },
        { L"sfnl.08", SSF2TLoadingKey::ROM08 },
        { L"sfnl.09", SSF2TLoadingKey::ROM09nl },
        { L"sfxe.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxe.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxe.08", SSF2TLoadingKey::ROM08 },
        { L"sfxa.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxa.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxa.08", SSF2TLoadingKey::ROM08 },
        { L"sfxh.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxh.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxh.08", SSF2TLoadingKey::ROM08 },
        { L"sfxu.03e", SSF2TLoadingKey::ROM03 },
        { L"sfxu.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxu.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxu.08", SSF2TLoadingKey::ROM08 },
        { L"sfxj.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxj.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxj.08", SSF2TLoadingKey::ROM08 },
        { L"sfxad.03c", SSF2TLoadingKey::ROM03 },
        { L"sfxad.04a", SSF2TLoadingKey::ROM04 },
        { L"sfxad.08", SSF2TLoadingKey::ROM08 },
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
        m_eVersionToLoad = SSF2TLoadingKey::ROM03;
    }

    return;
}

CGame_SSF2T_A::CGame_SSF2T_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SSF2TLoadingKey::ROM03:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM03);
        break;
    case SSF2TLoadingKey::ROM03nl:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM03nl);
        break;
    case SSF2TLoadingKey::ROM04:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM04);
        break;
    case SSF2TLoadingKey::ROM08:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM08);
        break;
    case SSF2TLoadingKey::ROM09nl:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM09nl);
        break;
    }
}

sFileRule CGame_SSF2T_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SSF2TLoadingKey::ROM03:
    case SSF2TLoadingKey::ROM03nl:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM03);
    case SSF2TLoadingKey::ROM04:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM04);
    case SSF2TLoadingKey::ROM08:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM08);
    case SSF2TLoadingKey::ROM09nl:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM09);
    }
}
