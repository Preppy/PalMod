#include "StdAfx.h"
#include "Game_RBFFS_A.h"

void CGame_RBFFS_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint32_t RBFFS_PALETTE_LENGTH = 0x20;

    LPCWSTR rgCharacters[] = {
                                L"Terry",
                                L"Andy",
                                L"Joe",
                                L"Mai",
                                L"Franco",
                                L"Hon Fu",
                                L"Bob",
                                L"Blue Mary",
                                L"Sokaku",
                                L"Geese",
                                L"Yamazaki",
                                L"Chonrei",
                                L"Chonshu",
                                L"Duck King",
                                L"Kim",
                                L"Billy",
                                L"Cheng",
                                L"Tung",
                                L"Laurence",
                                L"Krauser"
    };

    const uint32_t k_nBasePalette = 0xd2000;
    uint32_t nCurrentPalettePosition = k_nBasePalette;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacters); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex]);

        // Status effects
        for (uint16_t nStatusIndex = 0; nStatusIndex < 32; nStatusIndex++)
        {
            CString strPaletteName;

            if ((nStatusIndex == 0) || (nStatusIndex == 16))
            {
                strOutput.Format(L"const sGame_PaletteDataset RBFFS_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, (nStatusIndex < 10) ? L"P1" : L"P2");
                OutputDebugString(strOutput);
            }

            uint32_t nAdjustedIndex = (nStatusIndex > 15) ? (nStatusIndex - 16) : nStatusIndex;

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
                strPaletteName = L"Blue Burn Palette";
                break;
            case 14:
                strPaletteName = L"Electricity Palette";
                break;
            default:
                strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                break;
            }

            strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x },\r\n", strPaletteName.GetString(), nCurrentPalettePosition, nCurrentPalettePosition + RBFFS_PALETTE_LENGTH);
            OutputDebugString(strOutput);
            nCurrentPalettePosition += RBFFS_PALETTE_LENGTH;

            if ((nStatusIndex == 15) || (nStatusIndex == 31))
            {
                strOutput.Format(L"};\r\n\r\n");
                OutputDebugString(strOutput);
            }
        }
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacters); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex]);

        strOutput.Format(L"const sDescTreeNode RBFFS_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P1\", DESC_NODETYPE_TREE, (void*)RBFFS_A_%s_PALETTES_P1, ARRAYSIZE(RBFFS_A_%s_PALETTES_P1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"P2\", DESC_NODETYPE_TREE, (void*)RBFFS_A_%s_PALETTES_P2, ARRAYSIZE(RBFFS_A_%s_PALETTES_P2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Lifebar Portraits\", DESC_NODETYPE_TREE, (void*)RBFFS_A_%s_PALETTES_LIFEBAR, ARRAYSIZE(RBFFS_A_%s_PALETTES_LIFEBAR) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode RBFFS_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacters); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex]);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)RBFFS_A_%s_COLLECTION, ARRAYSIZE(RBFFS_A_%s_COLLECTION) },\r\n", rgCharacters[nCharIndex], szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}
