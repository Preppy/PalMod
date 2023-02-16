#include "StdAfx.h"
#include "Game_KOF98_A.h"

struct sKOF98_A_PaletteData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    LPCWSTR pszImageSet = L"indexKOF98Sprites_Kyo";
    bool rgIsEffectUsed[11];
};

sKOF98_A_PaletteData KOF98_A_CharacterEffectPalettes[] =
{
    // These effects use a random number of palettes per character.  The rgIsEffectUsed array keeps track of this for us.
    // Note that the Orochi characters share the same effects as the normal character.
    //                                                                            1  2  3  4  5  6  7  8  9  a  b
    { L"Kyo",        0x2ee7f0 + (0x200 *  0), L"indexKOF98Sprites_Kyo",        { 1, 1, 1, 0, 1, 1, 1, 0, 0, 0, 0 } },
    { L"Benimaru",   0x2ee7f0 + (0x200 *  1), L"indexKOF98Sprites_Benimaru",   { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Daimon",     0x2ee7f0 + (0x200 *  2), L"indexKOF98Sprites_Daimon",     { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Terry",      0x2ee7f0 + (0x200 *  3), L"indexKOF98Sprites_Terry",      { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 } },
    { L"Andy",       0x2ee7f0 + (0x200 *  4), L"indexKOF98Sprites_Andy",       { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 0 } },
    { L"Joe",        0x2ee7f0 + (0x200 *  5), L"indexKOF98Sprites_Joe",        { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 } },
    { L"Ryo",        0x2ee7f0 + (0x200 *  6), L"indexKOF98Sprites_Ryo",        { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 } },
    { L"Robert",     0x2ee7f0 + (0x200 *  7), L"indexKOF98Sprites_Robert",     { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 } },
    { L"Yuri",       0x2ee7f0 + (0x200 *  8), L"indexKOF98Sprites_Yuri",       { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 } },
    { L"Leona",      0x2ee7f0 + (0x200 *  9), L"indexKOF98Sprites_Leona",      { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 } },
    { L"Ralf",       0x2ee7f0 + (0x200 * 10), L"indexKOF98Sprites_Ralf",       { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Clark",      0x2ee7f0 + (0x200 * 11), L"indexKOF98Sprites_Clark",      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Athena",     0x2ee7f0 + (0x200 * 12), L"indexKOF98Sprites_Athena",     { 1, 1, 1, 1, 1, 1, 1, 1, 1, 0, 0 } },
    { L"Kensou",     0x2ee7f0 + (0x200 * 13), L"indexKOF98Sprites_Kensou",     { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Chin",       0x2ee7f0 + (0x200 * 14), L"indexKOF98Sprites_Chin",       { 1, 0, 1, 1, 1, 1, 0, 0, 0, 0, 0 } },
    { L"Chizuru",    0x2ee7f0 + (0x200 * 15), L"indexKOF98Sprites_Chizuru",    { 1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Mai",        0x2ee7f0 + (0x200 * 16), L"indexKOF98Sprites_Mai",        { 1, 1, 1, 1, 1, 1, 1, 0, 0, 1, 0 } },
    { L"King",       0x2ee7f0 + (0x200 * 17), L"indexKOF98Sprites_King",       { 1, 1, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Kim",        0x2ee7f0 + (0x200 * 18), L"indexKOF98Sprites_Kim",        { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Chang",      0x2ee7f0 + (0x200 * 19), L"indexKOF98Sprites_Chang",      { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Choi",       0x2ee7f0 + (0x200 * 20), L"indexKOF98Sprites_Choi",       { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Yashiro",    0x2ee7f0 + (0x200 * 21), L"indexKOF98Sprites_Yashiro",    { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 } },
    { L"Shermie",    0x2ee7f0 + (0x200 * 22), L"indexKOF98Sprites_Shermie",    { 1, 1, 1, 1, 1, 1, 1, 1, 0, 0, 1 } },
    { L"Chris",      0x2ee7f0 + (0x200 * 23), L"indexKOF98Sprites_Chris",      { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } },
    { L"Yamazaki",   0x2ee7f0 + (0x200 * 24), L"indexKOF98Sprites_Yamazaki",   { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Blue Mary",  0x2ee7f0 + (0x200 * 25), L"indexKOF98Sprites_BlueMary",   { 1, 1, 1, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Billy",      0x2ee7f0 + (0x200 * 26), L"indexKOF98Sprites_Billy",      { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 1 } },
    { L"Iori",       0x2ee7f0 + (0x200 * 27), L"indexKOF98Sprites_Iori",       { 1, 1, 0, 1, 1, 0, 0, 0, 0, 0, 0 } },
    { L"Mature",     0x2ee7f0 + (0x200 * 28), L"indexKOF98Sprites_Mature",     { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 } },
    { L"Vice",       0x2ee7f0 + (0x200 * 29), L"indexKOF98Sprites_Vice",       { 1, 1, 1, 1, 0, 0, 0, 0, 0, 0, 1 } },
    { L"Heidern",    0x2ee7f0 + (0x200 * 30), L"indexKOF98Sprites_Heidern",    { 1, 1, 1, 1, 1, 1, 1, 1, 1, 1, 1 } },
    { L"Takuma",     0x2ee7f0 + (0x200 * 31), L"indexKOF98Sprites_Takuma",     { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 } },
    { L"Saisyu",     0x2ee7f0 + (0x200 * 32), L"indexKOF98Sprites_Saisyu",     { 1, 1, 1, 0, 1, 1, 1, 1, 0, 0, 0 } },
    { L"Heavy D!",   0x2ee7f0 + (0x200 * 33), L"indexKOF98Sprites_HeavyD",     { 1, 1, 1, 1, 1, 1, 1, 0, 0, 0, 0 } },
    { L"Lucky",      0x2ee7f0 + (0x200 * 34), L"indexKOF98Sprites_Lucky",      { 1, 1, 1, 1, 1, 0, 0, 0, 0, 0, 0 } },
    { L"Brian",      0x2ee7f0 + (0x200 * 35), L"indexKOF98Sprites_Brian",      { 1, 1, 1, 1, 1, 1, 0, 0, 0, 0, 0 } },
    { L"Rugal",      0x2ee7f0 + (0x200 * 36), L"indexKOF98Sprites_Rugal",      { 1, 1, 1, 1, 0, 1, 0, 1, 0, 1, 0 } },
    { L"Shingo",     0x2ee7f0 + (0x200 * 37), L"indexKOF98Sprites_Shingo",     { 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0 } },
    { L"Omega Rugal", 0x2ee7f0 + (0x200* 38), L"indexKOF98Sprites_OmegaRugal", { 1, 1, 0, 1, 0, 0, 0, 1, 1, 0, 1 } },
    //                                                                            1  2  3  4  5  6  7  8  9  a  b
};

void CGame_KOF98_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint16_t nColorOptionsPerCharacter = 4;
    constexpr uint32_t KOF98_PALETTE_LENGTH = 0x20;
    const uint16_t nCountStatusEffects = 16;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF98_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF98_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sGame_PaletteDataset KOF98_A_%s_EFFECT_PALETTES[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        // Status effects
        for (uint16_t nStatusIndex = 0; nStatusIndex < nCountStatusEffects; nStatusIndex++)
        {
            uint32_t nCurrentOffset = KOF98_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nStatusIndex * KOF98_PALETTE_LENGTH);
            switch (nStatusIndex)
            {
            default:
                if (KOF98_A_CharacterEffectPalettes[nCharIndex].rgIsEffectUsed[nStatusIndex])
                {
                    strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nStatusIndex, nCurrentOffset, nCurrentOffset + KOF98_PALETTE_LENGTH);
                        OutputDebugString(strOutput);
                }
                break;
            case 11:
                strOutput.Format(L"    { L\"Zap Effect 1\", 0x%x, 0x%x, %s },\r\n", nCurrentOffset, nCurrentOffset + KOF98_PALETTE_LENGTH,
                    KOF98_A_CharacterEffectPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
                break;
            case 12:
                strOutput.Format(L"    { L\"Zap Effect 2\", 0x%x, 0x%x, %s },\r\n", nCurrentOffset, nCurrentOffset + KOF98_PALETTE_LENGTH,
                    KOF98_A_CharacterEffectPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
                break;
            case 13:
                strOutput.Format(L"    { L\"Super Trail 1\", 0x%x, 0x%x, %s },\r\n", nCurrentOffset, nCurrentOffset + KOF98_PALETTE_LENGTH,
                    KOF98_A_CharacterEffectPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
                break;
            case 14:
                strOutput.Format(L"    { L\"Super Trail 2\", 0x%x, 0x%x, %s },\r\n", nCurrentOffset, nCurrentOffset + KOF98_PALETTE_LENGTH,
                    KOF98_A_CharacterEffectPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
                break;
            case 15:
                strOutput.Format(L"    { L\"Super Trail 3\", 0x%x, 0x%x, %s },\r\n", nCurrentOffset, nCurrentOffset + KOF98_PALETTE_LENGTH,
                    KOF98_A_CharacterEffectPalettes[nCharIndex].pszImageSet);
                OutputDebugString(strOutput);
                break;
            };
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF98_A_CharacterEffectPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF98_A_CharacterEffectPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF98_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), DEF_BUTTONLABEL_NEOGEO[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF98_A_%s_%s_PALETTES, ARRAYSIZE(KOF98_A_%s_%s_PALETTES) },\r\n", DEF_BUTTONLABEL_NEOGEO[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF98_A_%s_EFFECT_PALETTES, ARRAYSIZE(KOF98_A_%s_EFFECT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        OutputDebugString(L"};\r\n\r\n");
    }
}
