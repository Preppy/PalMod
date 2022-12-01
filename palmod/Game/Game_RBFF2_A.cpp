#include "StdAfx.h"
#include "Game_RBFF2_A.h"

uint32_t CGame_RBFF2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Real Bout Fatal Fury 2 (Neo-Geo Set 1)", L"240-p1.p1", 0x80e41205, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Set 1)", L"240-p1.bin", 0x80e41205, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Set 2)", L"rb2_p1.rom", 0xb6969780, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo set 2)", L"240-pg1.p1", 0xb6969780, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo set 2)", L"240-pg1.bin", 0xb6969780, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Korea)", L"140-p1k.p1", 0x965edee1, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Korea)", L"140-p1k.bin", 0x965edee1, 0 },

        { L"Real Bout Fatal Fury 2 (Secret Character Hack)", L"240-p1fc.p1", 0xd01854fa, 0 },
    };

    if (ppKnownROMSet != nullptr)
    {
        *ppKnownROMSet = knownROMs;
    }

    if (pfNeedToValidateCRCs)
    {
        // Each filename is associated with a single CRC
        *pfNeedToValidateCRCs = false;
    }

    return ARRAYSIZE(knownROMs);
}

void CGame_RBFF2_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint32_t RBFF2_PALETTE_LENGTH = 0x20;
    const uint32_t RBFF2_PALETTE_COUNT = 16;

    struct rbff2CharacterData
    {
        LPCWSTR pszCharacterName = nullptr;
        LPCWSTR pszImageName = nullptr;
        bool fShowImage[RBFF2_PALETTE_COUNT] = { false };
    };

    rbff2CharacterData rgCharacterData[] =
    {   //                                               base   bg     2      3     4       5      6      7     8      9       10    11   burn   13    elec  15
        { L"Terry",     L"indexRBFF2Sprites_Terry",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Andy",      L"indexRBFFSSprites_Andy",    { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Joe",       L"indexRBFF2Sprites_Joe",     { true, true, false, false, false, false, true, false, false, true, false, true, true, true, true, true } },
        { L"Mai",       L"indexRBFFSSprites_Mai",     { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Geese",     L"indexRBFFSSprites_Geese",   { true, true, false, false, false, false, true, false, false, false, false, true, true, true, true, true } },
        { L"Sokaku",    L"indexRBFFSSprites_Sokaku",  { true, true, false, false, false, true, false, false, false, false, false, true, true, true, true, true } },
        { L"Bob",       L"indexRBFFSSprites_Bob",     { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Hon Fu",    L"indexRBFFSSprites_Hon",     { true, true, true, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Blue Mary", L"indexRBFFSSprites_BlueMary", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Franco",    L"indexRBFFSSprites_Franco",  { true, true, false, true, false, false, true, true, false, false, false, true, true, true, true, true } },
        { L"Yamazaki",  L"indexRBFFSSprites_Yamazaki", { true, true, false, false, false, true, true, false, false, false, false, true, true, true, true, true } },
        { L"Chonrei",   L"indexRBFFSSprites_Chonrei", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Chonshu",   L"indexRBFFSSprites_Chonshu", { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Duck King", L"indexRBFFSSprites_DuckKing", { true, true, false, false, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Kim",       L"indexRBFFSSprites_Kim",     { true, true, false, true, false, true, true, false, false, false, false, true, true, true, true, true } },
        { L"Billy",     L"indexRBFFSSprites_Billy",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Cheng",     L"indexRBFFSSprites_Cheng",   { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Tung",      L"indexRBFFSSprites_Tung",    { true, true, false, true, true, false, false, false, false, false, false, true, true, true, true, true } },
        { L"Laurence",  L"indexRBFFSSprites_Laurence", { true, true, false, false, false, false, true, false, false, false, false, true, true, true, true, true } },
        { L"Krauser",   L"indexRBFFSSprites_Krauser", { true, true, false, false, false, false, false, true, false, false, false, true, true, true, true, true } },
        { L"Rick",      L"indexRBFF2Sprites_Rick",    { true, true, false, false, false, false, false, false, false, false, false, true, true, true, true, true } },
        { L"XiangFei",  L"indexRBFF2Sprites_Xiangfei", { true, true, false, false, true, true, false, false, false, false, false, true, true, true, true, true } },
        { L"Alfred",    L"indexRBFF2Sprites_Alfred",  { true, true, false, false, false, true, false, false, false, false, false, true, true, true, true, true } },
        //                                               base   bg     2      3     4       5      6      7     8      9       10    11   burn   13    elec  15
    };

    const uint32_t k_nBasePalette = 0xd0000;
    uint32_t nCurrentPalettePosition = k_nBasePalette;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        // Status effects
        for (uint16_t nStatusIndex = 0; nStatusIndex < 32; nStatusIndex++)
        {
            CString strPaletteName;

            if ((nStatusIndex % RBFF2_PALETTE_COUNT) == 0)
            {
                strOutput.Format(L"const sGame_PaletteDataset RBFF2_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, (nStatusIndex < 10) ? L"P1" : L"P2");
                OutputDebugString(strOutput);
            }

            uint32_t nAdjustedIndex = (nStatusIndex > (RBFF2_PALETTE_COUNT - 1)) ? (nStatusIndex - RBFF2_PALETTE_COUNT) : nStatusIndex;

            switch (nAdjustedIndex)
            {
            case 0:
                strPaletteName = L"Main Palette";
                break;
            case 1:
                strPaletteName = L"Background Palette";
                break;
            case 12:
                strPaletteName = L"Burn Palette";
                break;
            case 13:
                strPaletteName = L"Purple Burn Palette";
                break;
            case 14:
                strPaletteName = L"Electricity Palette";
                break;
            case 15:
                strPaletteName = L"Break Shot/Background Palette 2";
                break;
            default:
                strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                break;
            }

            if (rgCharacterData[nCharIndex].fShowImage[nAdjustedIndex])
            {
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s },\r\n", strPaletteName.GetString(), nCurrentPalettePosition,
                                                                                            nCurrentPalettePosition + RBFF2_PALETTE_LENGTH, rgCharacterData[nCharIndex].pszImageName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", strPaletteName.GetString(), nCurrentPalettePosition, nCurrentPalettePosition + RBFF2_PALETTE_LENGTH );
            }
            OutputDebugString(strOutput);
            nCurrentPalettePosition += RBFF2_PALETTE_LENGTH;

            if (((nStatusIndex + 1) % RBFF2_PALETTE_COUNT) == 0)
            {
                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput);
            }
        }
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode RBFF2_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P1\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PALETTES_P1, ARRAYSIZE(RBFF2_A_%s_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PALETTES_P2, ARRAYSIZE(RBFF2_A_%s_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"P1 Portraits\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PORTRAIT_PALETTES_P1, ARRAYSIZE(RBFF2_A_%s_PORTRAIT_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2 Portraits\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_PORTRAIT_PALETTES_P2, ARRAYSIZE(RBFF2_A_%s_PORTRAIT_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode RBFF2_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacterData); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacterData[nCharIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)RBFF2_A_%s_COLLECTION, ARRAYSIZE(RBFF2_A_%s_COLLECTION) },\r\n", rgCharacterData[nCharIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"    { L\"Bonus\", DESC_NODETYPE_TREE, (void*)RBFF2_A_BONUS_COLLECTION, ARRAYSIZE(RBFF2_A_BONUS_COLLECTION) },\r\n");
    OutputDebugString(strOutput);

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}
