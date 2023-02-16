#include "StdAfx.h"
#include "Game_KOF96_A.h"

CGame_KOF96_A::KOF96LoadingKey CGame_KOF96_A::m_eVersionToLoad = KOF96LoadingKey::Normal;

void CGame_KOF96_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, KOF96LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"214-p2.sp2", KOF96LoadingKey::Normal },
        { L"214-p2.bin", KOF96LoadingKey::Normal },
        { L"214ae-p2.p2", KOF96LoadingKey::Hack },
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
        m_eVersionToLoad = KOF96LoadingKey::Normal;
    }

    return;
}

CGame_KOF96_A::CGame_KOF96_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == KOF96LoadingKey::Normal) ? m_sCoreGameData_Normal : m_sCoreGameData_Hack);
}

sFileRule CGame_KOF96_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == KOF96LoadingKey::Normal) ? m_sFileLoadingData_Normal : m_sFileLoadingData_Hack);
}

struct sKOF96_A_PaletteData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    bool fIsMultipart = false;
    LPCWSTR pszImageSet = nullptr;
    LPCWSTR pszPortraitImageSet = nullptr;
};

sKOF96_A_PaletteData KOF96_A_CharacterEffectPalettes[] =
{
    { L"Kyo",       0x102002, false, L"indexKOF94Sprites_Kyo",          L"indexKOF96Sprites_Kyo" },
    { L"Benimaru",  0x102402, false, L"indexKOF94Sprites_Benimaru",          L"indexKOF96Sprites_Benimaru" },
    { L"Daimon",    0x102802, false, L"indexKOF98Sprites_Daimon",          L"indexKOF96Sprites_Daimon" },
    { L"Terry",     0x102c02, false, L"indexKOF94Sprites_Terry",          L"indexKOF96Sprites_Terry" },
    { L"Andy",      0x103002, false, L"indexKOF97Sprites_Andy",          L"indexKOF96Sprites_Andy" },
    { L"Joe",       0x103402, false, L"indexKOF98Sprites_Joe",          L"indexKOF96Sprites_Joe" },
    { L"Ryo",       0x103802, false, L"indexKOF94Sprites_Ryo",          L"indexKOF96Sprites_Ryo" },
    { L"Robert",    0x103c02, false, L"indexKOF98Sprites_Robert",          L"indexKOF96Sprites_Robert" },
    { L"Yuri",      0x104002, false, L"indexKOF94Sprites_Yuri",          L"indexKOF96Sprites_Yuri" },
    { L"Leona",     0x104402, false, L"indexKOF98Sprites_Leona",          L"indexKOF96Sprites_Leona" },
    { L"Ralf",      0x104802, true, L"indexKOF94Sprites_Ralf",          L"indexKOF96Sprites_Ralf" },
    { L"Clark",     0x104c02, true, L"indexKOF94Sprites_Clark",          L"indexKOF96Sprites_Clark" },
    { L"Athena",    0x105002, false, L"indexKOF96Sprites_Athena",          L"indexKOF96Sprites_Athena" },
    { L"Kensou",    0x105402, false, L"indexKOF94Sprites_Kensou",          L"indexKOF96Sprites_Kensou" },
    { L"Chin",      0x105802, false, L"indexKOF94Sprites_Chin",          L"indexKOF96Sprites_Chin" },
    { L"Kasumi",    0x105c02, false, L"indexKOF96Sprites_Kasumi",          L"indexKOF96Sprites_Kasumi" },
    { L"Mai",       0x106002, false, L"indexKOF94Sprites_Mai",          L"indexKOF96Sprites_Mai" },
    { L"King",      0x106402, false, L"indexKOF96Sprites_King",          L"indexKOF96Sprites_King" },
    { L"Kim",       0x106802, false, L"indexKOF98Sprites_Kim",          L"indexKOF96Sprites_Kim" },
    { L"Chang",     0x106c02, true, L"indexKOF98Sprites_Chang",          L"indexKOF96Sprites_Chang" },
    { L"Choi",      0x107002, false, L"indexKOF98Sprites_Choi",          L"indexKOF96Sprites_Choi" },
    { L"Iori",      0x107402, false, L"indexKOF98Sprites_Iori",          L"indexKOF96Sprites_Iori" },
    { L"Mature",    0x107802, false, L"indexKOF98Sprites_Mature",          L"indexKOF96Sprites_Mature" },
    { L"Vice",      0x107c02, false, L"indexKOF98Sprites_Vice",          L"indexKOF96Sprites_Vice" },
    { L"Geese",     0x108002, false, L"indexKOF02Sprites_Geese",          L"indexKOF96Sprites_Geese" },
    { L"Krauser",   0x108402, false, L"indexKOF96Sprites_Krauser",          L"indexKOF96Sprites_Krauser" },
    { L"Mr. Big",   0x108802, false, L"indexKOF96Sprites_MrBig",          L"indexKOF96Sprites_MrBig" },
    { L"Chizuru",   0x108c02, false, L"indexKOF98Sprites_Chizuru",          L"indexKOF96Sprites_Chizuru" },
    { L"Goenitz",   0x109002, false, L"indexKOF02Sprites_Goenitz",          L"indexKOF96Sprites_Goenitz" },
};

void CGame_KOF96_A::DumpPaletteHeaders()
{
    CString strOutput;
    constexpr uint32_t KOF96_PALETTE_LENGTH = 0x20;
    const uint16_t nCountPalettesPerCharacterColor = 18;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF96_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF96_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        for (uint16_t nCharacterColor = 0; nCharacterColor < DEF_BUTTONLABEL_2_AOF3.size(); nCharacterColor++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF96_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, (nCharacterColor == 0) ? L"A" : L"D");
            OutputDebugString(strOutput);

            for (uint16_t nStatusIndex = 0; nStatusIndex < nCountPalettesPerCharacterColor; nStatusIndex++)
            {
                uint32_t nCurrentOffset = KOF96_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF96_PALETTE_LENGTH) + (nCharacterColor * 0x200);
                uint32_t nTerminalOffset = nCurrentOffset + KOF96_PALETTE_LENGTH;
                LPCWSTR pszCurrentEffectName = nullptr;
                int nCurrentImageIndex = 0;
                bool fIsPairable = false;

                LPCWSTR pszImageSetToUse = KOF96_A_CharacterEffectPalettes[nCharIndex].pszImageSet;

                switch (nStatusIndex)
                {
                case 0:
                    pszCurrentEffectName = KOF96_A_CharacterEffectPalettes[nCharIndex].pszCharacterName;
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 1:
                    pszCurrentEffectName = L"Extra 1";
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 2:
                    pszCurrentEffectName = L"Super Trail 1";
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 3:
                    pszCurrentEffectName = L"Super Trail 2";
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 4:
                    pszCurrentEffectName = L"MAX Mode";
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 5:
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"MAX Mode Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 1";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 6:
                    pszCurrentEffectName = L"Electric Palette?";
                    fIsPairable = KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;

                    //pszCurrentEffectName = L"Win Portrait?";
                    //nTerminalOffset += (2 * KOF96_PALETTE_LENGTH);
                    //nCurrentImageIndex = -1;
                    break;
                case 7:
                    if (KOF96_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Electric Palette Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 3";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 8:
                    pszCurrentEffectName = L"Extra 4";
                    continue;
                case 9:
                    pszCurrentEffectName = L"Extra 5";
                    nCurrentImageIndex = -1;
                    break;
                case 10:
                    pszCurrentEffectName = L"Extra 6";
                    nCurrentImageIndex = -1;
                    break;
                case 11:
                    pszCurrentEffectName = L"Extra 7";
                    nCurrentImageIndex = -1;
                    break;
                case 12:
                    pszCurrentEffectName = L"Extra 8";
                    nCurrentImageIndex = -1;
                    break;
                case 13:
                    pszCurrentEffectName = L"Game Over Palette";
                    break;
                case 14:
                    pszCurrentEffectName = L"Extra 9";
                    nCurrentImageIndex = -1;
                    break;
                case 15:
                    pszCurrentEffectName = L"Lifebar Portrait";
                    nCurrentImageIndex = 0x20;
                    break;
                case 16:
                {
                    //KoF 96 Win Portraits
                    //0x109402
                    //0x10ce02
                    constexpr auto WIN_PORTRAIT_LENGTH = 0x100;
                    constexpr auto WIN_PORTRAIT_START = 0x109402;

                    pszCurrentEffectName = L"Win Portrait";
                    pszImageSetToUse = KOF96_A_CharacterEffectPalettes[nCharIndex].pszPortraitImageSet;
                    nCurrentImageIndex = 0x40;
                    nCurrentOffset = WIN_PORTRAIT_START + (((nCharIndex * static_cast<uint32_t>(DEF_BUTTONLABEL_2_AOF3.size())) + nCharacterColor) * WIN_PORTRAIT_LENGTH);
                    nTerminalOffset = nCurrentOffset + WIN_PORTRAIT_LENGTH;
                    break;
                }
                case 17:
                {
                    //KoF96 Character Select Portraits
                    //0x113a02
                    //0x1144c2
                    constexpr auto CHARACTER_SELECT_LENGTH = 0x20;
                    constexpr auto CHARACTER_SELECT_SECTION_LENGTH = 0x3a0;
                    constexpr auto CHARACTER_SELECT_START = 0x113a02;
                    // p2       113DA2
                    // greyed  114142
                    pszCurrentEffectName = L"Character Select";
                    pszImageSetToUse = KOF96_A_CharacterEffectPalettes[nCharIndex].pszPortraitImageSet;
                    nCurrentImageIndex = 0x41;
                    nCurrentOffset = CHARACTER_SELECT_START + ((nCharIndex * CHARACTER_SELECT_LENGTH) + (nCharacterColor * CHARACTER_SELECT_SECTION_LENGTH));
                    nTerminalOffset = nCurrentOffset + CHARACTER_SELECT_LENGTH;
                    break;
                }
                default:
                    DebugBreak();
                };

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", pszCurrentEffectName, nCurrentOffset, nTerminalOffset);
                OutputDebugString(strOutput);

                if (KOF96_A_CharacterEffectPalettes[nCharIndex].pszImageSet && (nCurrentImageIndex != -1))
                {
                    strOutput.Format(L", %s, 0x%02x", pszImageSetToUse, nCurrentImageIndex); 
                    OutputDebugString(strOutput);

                    if (fIsPairable)
                    {
                        OutputDebugString(L", &pairNext");
                    }
                }

                OutputDebugString(L" },\r\n");
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        {
            strOutput.Format(L"const sGame_PaletteDataset KOF96_A_%s_SHARED_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            //KoF96 Character Select Portraits
            //0x113a02
            //0x1144c2
            constexpr auto CHARACTER_SELECT_LENGTH = 0x20;
            constexpr auto CHARACTER_SELECT_SECTION_LENGTH = 0x3a0;
            constexpr auto CHARACTER_SELECT_START = 0x113a02;
            uint32_t nCurrentOffset = CHARACTER_SELECT_START + ((nCharIndex * CHARACTER_SELECT_LENGTH) + (2 * CHARACTER_SELECT_SECTION_LENGTH));
            uint32_t nTerminalOffset = nCurrentOffset + CHARACTER_SELECT_LENGTH;

            strOutput.Format(L"    { L\"Defeated/Grayed\", 0x%x, 0x%x, %s, 0x41", nCurrentOffset, nTerminalOffset, KOF96_A_CharacterEffectPalettes[nCharIndex].pszPortraitImageSet);
            OutputDebugString(strOutput);

            OutputDebugString(L" },\r\n");

            OutputDebugString(L"};\r\n\r\n");
        }

    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF96_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF96_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF96_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < DEF_BUTTONLABEL_2_AOF3.size(); nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_AOF3[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF96_A_%s_%s_PALETTES, ARRAYSIZE(KOF96_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_AOF3[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        strOutput.Format(L"    { L\"Shared\", DESC_NODETYPE_TREE, (void*)KOF96_A_%s_SHARED_PALETTES, ARRAYSIZE(KOF96_A_%s_SHARED_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);


        OutputDebugString(L"};\r\n\r\n");
    }
}
