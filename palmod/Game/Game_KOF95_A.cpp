#include "StdAfx.h"
#include "Game_KOF95_A.h"

CGame_KOF95_A::KOF95LoadingKey CGame_KOF95_A::m_eVersionToLoad = KOF95LoadingKey::Normal;

void CGame_KOF95_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, KOF95LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"084-p1.p1", KOF95LoadingKey::Normal },
        { L"084-p1.bin", KOF95LoadingKey::Normal },
        { L"084-p2sp.p2", KOF95LoadingKey::Hack },
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
        m_eVersionToLoad = KOF95LoadingKey::Normal;
    }

    return;
}

CGame_KOF95_A::CGame_KOF95_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == KOF95LoadingKey::Normal) ? m_sCoreGameData_Normal : m_sCoreGameData_Hack);
}

sFileRule CGame_KOF95_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == KOF95LoadingKey::Normal) ? m_sFileLoadingData_Normal : m_sFileLoadingData_Hack);
}

struct sKOF95_A_PaletteData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    bool fIsMultipart = false;
    LPCWSTR pszImageSet = nullptr;
    LPCWSTR pszPortraitImageSet = nullptr;
};

sKOF95_A_PaletteData KOF95_A_CharacterEffectPalettes[] =
{
    { L"Heidern",   0xd9000, false, L"indexKOF94Sprites_Heidern",       L"indexKOF95Sprites_Heidern" },
    { L"Ralf",      0xd9400, true,  L"indexKOF94Sprites_Ralf",          L"indexKOF95Sprites_Ralf" },
    { L"Clark",     0xd9800, true,  L"indexKOF94Sprites_Clark",         L"indexKOF95Sprites_Clark" },
    { L"Athena",    0xd9c00, false, L"indexKOF95Sprites_Athena",        L"indexKOF95Sprites_Athena" },
    { L"Kensou",    0xda000, false, L"indexKOF94Sprites_Kensou",        L"indexKOF95Sprites_Kensou" },
    { L"Chin",      0xda400, false, L"indexKOF94Sprites_Chin",          L"indexKOF95Sprites_Chin" },
    { L"Kyo",       0xda800, false, L"indexKOF94Sprites_Kyo",           L"indexKOF95Sprites_Kyo" },
    { L"Benimaru",  0xdac00, false, L"indexKOF95Sprites_Benimaru",      L"indexKOF95Sprites_Benimaru" },
    { L"Daimon",    0xdb000, false, L"indexKOF94Sprites_Daimon",        L"indexKOF95Sprites_Daimon" },
    { L"Iori",      0xdb400, false, L"indexKOF95Sprites_Iori",          L"indexKOF95Sprites_Iori" },
    { L"Eiji",      0xdb800, true,  L"indexKOF95Sprites_Eiji",          L"indexKOF95Sprites_Eiji" },
    { L"Billy",     0xdbc00, false, L"indexKOF95Sprites_Billy",         L"indexKOF95Sprites_Billy" },
    { L"Kim",       0xdc000, false, L"indexKOF94Sprites_Kim",           L"indexKOF95Sprites_Kim" },
    { L"Chang",     0xdc400, true,  L"indexKOF95Sprites_Chang",         L"indexKOF95Sprites_Chang" },
    { L"Choi",      0xdc800, false, L"indexKOF95Sprites_Chin",          L"indexKOF95Sprites_Chin" },
    { L"Terry",     0xdcc00, false, L"indexKOF95Sprites_Terry",         L"indexKOF95Sprites_Terry" },
    { L"Andy",      0xdd000, false, L"indexKOF94Sprites_Andy",          L"indexKOF95Sprites_Andy" },
    { L"Joe",       0xdd400, false, L"indexKOF95Sprites_Joe",           L"indexKOF95Sprites_Joe" },
    { L"Ryo",       0xdd800, false, L"indexKOF94Sprites_Ryo",           L"indexKOF95Sprites_Ryo" },
    { L"Robert",    0xddc00, false, L"indexKOF94Sprites_Robert",        L"indexKOF95Sprites_Robert" },
    { L"Takuma",    0xde000, false, L"indexKOF94Sprites_Takuma",        L"indexKOF95Sprites_Takuma" },
    { L"Yuri",      0xde400, false, L"indexKOF94Sprites_Yuri",          L"indexKOF95Sprites_Yuri" },
    { L"Mai",       0xde800, false, L"indexKOF94Sprites_Mai",           L"indexKOF95Sprites_Mai" },
    { L"King",      0xdec00, false, L"indexKOF94Sprites_King",          L"indexKOF95Sprites_King" },
    { L"Saisyu",    0xdf000, false, L"indexKOF95Sprites_Saisyu",        L"indexKOF95Sprites_Saisyu" },
    { L"Omega Rugal", 0xdf400, false, L"indexKOF95Sprites_OmegaRugal",  L"indexKOF95Sprites_OmegaRugal" },
};

void CGame_KOF95_A::DumpPaletteHeaders()
{
    CString strOutput;
    constexpr uint32_t KOF95_PALETTE_LENGTH = 0x20;
    const uint16_t nCountStatusEffects = 16;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF95_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF95_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        for (uint16_t nCharacterColor = 0; nCharacterColor < 2; nCharacterColor++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF95_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, (nCharacterColor == 0) ? L"MAIN" : L"ALT");
            OutputDebugString(strOutput);

            for (uint16_t nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                uint32_t nCurrentOffset = KOF95_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF95_PALETTE_LENGTH) + (nCharacterColor * 0x200);
                uint32_t nTerminalOffset = nCurrentOffset + KOF95_PALETTE_LENGTH;
                LPCWSTR pszCurrentEffectName = nullptr;
                LPCWSTR pszCurrentImageSet = KOF95_A_CharacterEffectPalettes[nCharIndex].pszImageSet;
                int nCurrentImageIndex = 0;
                bool fIsPairable = false;

                switch (nStatusIndex)
                {
                case 0:
                    pszCurrentEffectName = KOF95_A_CharacterEffectPalettes[nCharIndex].pszCharacterName;
                    fIsPairable = KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 1:
                    pszCurrentEffectName = L"Extra 1";
                    if (KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 2:
                    pszCurrentEffectName = L"MAX Flash";
                    fIsPairable = KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 3:
                    if (KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"MAX Flash Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 2";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 4:
                    pszCurrentEffectName = L"Electric Palette?";
                    fIsPairable = KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 5:
                    if (KOF95_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Electric Palette? Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 4";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 6:
                    pszCurrentEffectName = L"Win Portrait";
                    nTerminalOffset += (7 * KOF95_PALETTE_LENGTH);
                    pszCurrentImageSet = KOF95_A_CharacterEffectPalettes[nCharIndex].pszPortraitImageSet;
                    nCurrentImageIndex = 0x41;
                    break;
                case 7:
                case 8:
                case 9:
                case 10:
                case 11:
                case 12:
                case 13:
                    // These are part of the win portrait
                    continue;
                case 14:
                    pszCurrentEffectName = L"Lifebar Portrait";
                    pszCurrentImageSet = KOF95_A_CharacterEffectPalettes[nCharIndex].pszPortraitImageSet;
                    nCurrentImageIndex = 0x40;
                    break;
                case 15:
                    pszCurrentEffectName = L"Lifebar Portrait Defeated/Grayed";
                    pszCurrentImageSet = KOF95_A_CharacterEffectPalettes[nCharIndex].pszPortraitImageSet;
                    nCurrentImageIndex = 0x40;
                    break;
                default:
                    DebugBreak();
                };

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", pszCurrentEffectName, nCurrentOffset, nTerminalOffset);
                OutputDebugString(strOutput);

                if (pszCurrentImageSet && (nCurrentImageIndex != -1))
                {
                    strOutput.Format(L", %s, 0x%02x", pszCurrentImageSet, nCurrentImageIndex);
                    
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
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF95_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF95_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF95_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < 2; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_NEOGEO[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF95_A_%s_%s_PALETTES, ARRAYSIZE(KOF95_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_NEOGEO[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }
}
