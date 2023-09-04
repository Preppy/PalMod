#include "StdAfx.h"
#include "Game_KOF94_A.h"

struct sKOF94_A_PaletteData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    bool fIsMultipart = false;
    LPCWSTR pszImageSet = nullptr;
};

sKOF94_A_PaletteData KOF94_A_CharacterEffectPalettes[] =
{
    { L"Heidern", 0x176000 /* to 0x1761c0 */, false, L"indexKOF94Sprites_Heidern" },
    { L"Ralf", 0x176380 /* to 0x176540 */, true, L"indexKOF94Sprites_Ralf" },
    { L"Clark", 0x176700 /* to 0x1768c0 */, true, L"indexKOF94Sprites_Clark" },
    { L"Athena", 0x176a80 /* to 0x176c40 */, false, L"indexKOF94Sprites_Athena" },
    { L"Kensou", 0x176e00 /* to 0x176fc0 */, false, L"indexKOF95Sprites_Kensou" },
    { L"Chin", 0x177180 /* to 0x177340 */, false, L"indexKOF94Sprites_Chin" },
    { L"Kyo", 0x177500 /* to 0x1776c0 */, false, L"indexKOF95Sprites_Kyo" },
    { L"Benimaru", 0x177880 /* to 0x177a40 */, false, L"indexKOF94Sprites_Benimaru" },
    { L"Daimon", 0x177c00 /* to 0x177dc0 */, false, L"indexKOF94Sprites_Daimon" },
    { L"Heavy D!", 0x177f80 /* to 0x178140 */, false, L"indexKOF94Sprites_HeavyD" },
    { L"Lucky", 0x178300 /* to 0x1784c0 */, true, L"indexKOF94Sprites_Lucky" },
    { L"Brian", 0x178680 /* to 0x178840 */, false, L"indexKOF94Sprites_Brian" },
    { L"Kim", 0x178a00 /* to 0x178bc0 */, false, L"indexKOF94Sprites_Kim" },
    { L"Chang", 0x178d80 /* to 0x178f40 */, true, L"indexKOF94Sprites_Chang" },
    { L"Choi", 0x179100 /* to 0x1792c0 */, false, L"indexKOF94Sprites_Choi" },
    { L"Terry", 0x179480 /* to 0x179640 */, false, L"indexKOF94Sprites_Terry" },
    { L"Andy", 0x179800 /* to 0x1799c0 */, false, L"indexKOF95Sprites_Andy" },
    { L"Joe", 0x179b80 /* to 0x179d40 */, false, L"indexKOF94Sprites_Joe" },
    { L"Ryo", 0x179f00 /* to 0x17a0c0 */, false, L"indexKOF94Sprites_Ryo" },
    { L"Robert", 0x17a280 /* to 0x17a440 */, false, L"indexKOF94Sprites_Robert" },
    { L"Takuma", 0x17a600 /* to 0x17a7c0 */, false, L"indexKOF94Sprites_Takuma" },
    { L"Yuri", 0x17a980 /* to 0x17ab40 */, false, L"indexKOF94Sprites_Yuri" },
    { L"Mai", 0x17ad00 /* to 0x17aec0 */, false, L"indexKOF94Sprites_Mai" },
    { L"King", 0x17b080 /* to 0x17b240 */, false, L"indexKOF94Sprites_King" },
    { L"Rugal", 0x17b400 /* to 0x17b5c0 */, true, L"indexKOF94Sprites_Rugal" },
};

void CGame_KOF94_A::DumpPaletteHeaders()
{
    CString strOutput;
    constexpr uint32_t KOF94_PALETTE_LENGTH = 0x20;
    const uint16_t nCountStatusEffects = 14;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF94_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF94_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        for (uint16_t nCharacterColor = 0; nCharacterColor < 2; nCharacterColor++)
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF94_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, (nCharacterColor == 0) ? L"MAIN" : L"ALT");
            OutputDebugString(strOutput);

            for (uint16_t nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
            {
                uint32_t nCurrentOffset = KOF94_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF94_PALETTE_LENGTH) + (nCharacterColor * 0x1c0);
                uint32_t nTerminalOffset = nCurrentOffset + KOF94_PALETTE_LENGTH;
                LPCWSTR pszCurrentEffectName = nullptr;
                int nCurrentImageIndex = 0;
                bool fIsPairable = false;

                switch (nStatusIndex)
                {
                case 0:
                    pszCurrentEffectName = KOF94_A_CharacterEffectPalettes[nCharIndex].pszCharacterName;
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 1:
                    pszCurrentEffectName = L"Extra 1";
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 2:
                    pszCurrentEffectName = L"Electric Palette";
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 3:
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Electric Palette Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 2";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 4:
                    // This is 4x length
                    pszCurrentEffectName = L"Win Portrait";
                    nTerminalOffset += (3 * KOF94_PALETTE_LENGTH);
                    nCurrentImageIndex = 0x30;
                    break;
                case 5:
                case 6:
                case 7:
                    continue;
                case 8:
                    pszCurrentEffectName = L"Lifebar Portrait";
                    nCurrentImageIndex = 0x40;
                    break;
                case 9:
                    pszCurrentEffectName = L"Lifebar Portrait Defeated/Grayed";
                    nCurrentImageIndex = 0x40;
                    break;
                case 10:
                    pszCurrentEffectName = L"Darker Palette";
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                case 11:
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"Darker Palette Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 3";
                        nCurrentImageIndex = -1;
                    }
                    break;
                case 12:
                    pszCurrentEffectName = L"MAX Flash";
                    fIsPairable = KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart;
                    break;
                default:
                    DebugBreak();
                    __fallthrough;
                case 13:
                    if (KOF94_A_CharacterEffectPalettes[nCharIndex].fIsMultipart)
                    {
                        pszCurrentEffectName = L"MAX Flash Extra";
                        nCurrentImageIndex = 1;
                    }
                    else
                    {
                        pszCurrentEffectName = L"Extra 4";
                        nCurrentImageIndex = -1;
                    }
                    break;
                };

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", pszCurrentEffectName, nCurrentOffset, nTerminalOffset);
                OutputDebugString(strOutput);

                if (KOF94_A_CharacterEffectPalettes[nCharIndex].pszImageSet && (nCurrentImageIndex != -1))
                {
                    strOutput.Format(L", %s, 0x%02x", KOF94_A_CharacterEffectPalettes[nCharIndex].pszImageSet, nCurrentImageIndex);
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

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF94_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF94_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF94_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < 2; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_2_NEOGEO[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF94_A_%s_%s_PALETTES, ARRAYSIZE(KOF94_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_2_NEOGEO[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }
}
