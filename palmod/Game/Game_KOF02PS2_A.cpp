#include "StdAfx.h"
#include "Game_KOF02PS2_A.h"

void CGame_KOF02PS2_A::DumpAllCharacters()
{
    //Go through each character: win portraits

    // exclude the new five since they're not fully implemented...
    constexpr auto KOF02_OG_CHARACTERCOUNT = ARRAYSIZE(KOF02PS2_A_CharacterOffsetArray) - 5;
    for (uint16_t iCharacterIndex = 0; iCharacterIndex < KOF02_OG_CHARACTERCOUNT; iCharacterIndex++)
    {
        constexpr auto WINPORTRAIT_BASE_OFFSET = 0x3bae00;
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName);

        strOutput.Format(L"const sGame_PaletteDataset KOF02PS2_A_%s_PALETTES_PORTRAITS_WIN[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
        {
            nCurrentCharacterOffset = WINPORTRAIT_BASE_OFFSET + (0x100 * iCharacterIndex) + (0x40 * iButtonIndex);

            strOutput.Format(L"    { L\"%s %s Win Portrait\", 0x%x, 0x%x, %s, 0x54 },\r\n", KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                nCurrentCharacterOffset, nCurrentCharacterOffset + 0x40,
                KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszPortraitImageRefName);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    // lifebar portraits
    for (uint16_t iCharacterIndex = 0; iCharacterIndex < ARRAYSIZE(KOF02PS2_A_CharacterOffsetArray); iCharacterIndex++)
    {
        constexpr auto LIFEBARPORTRAIT_BASE_OFFSET = 0x3b9560;
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName);

        strOutput.Format(L"const sGame_PaletteDataset KOF02PS2_A_%s_PALETTES_PORTRAITS_LIFEBAR[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
        {
            nCurrentCharacterOffset = LIFEBARPORTRAIT_BASE_OFFSET + (0x20 * iCharacterIndex) + (0x20 * ARRAYSIZE(KOF02PS2_A_CharacterOffsetArray) * iButtonIndex);

            strOutput.Format(L"    { L\"%s %s Lifebar Portrait\", 0x%x, 0x%x, %s, 0x52 },\r\n", KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszPortraitImageRefName);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

#ifdef DontAutoGenerateTheseTheImageOffsetsAreHandTweaked
    // select portraits: original characters only
    for (uint16_t iCharacterIndex = 0; iCharacterIndex < KOF02_OG_CHARACTERCOUNT; iCharacterIndex++)
    {
        constexpr auto SELECTPORTRAIT_BASE_OFFSET = 0x3b8300;
        constexpr auto SELECTPORTRAIT_LENGTH = 0x40;
        uint32_t nCurrentCharacterOffset = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName);

        strOutput.Format(L"const sGame_PaletteDataset KOF02PS2_A_%s_PALETTES_PORTRAITS_SELECT[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        nCurrentCharacterOffset = SELECTPORTRAIT_BASE_OFFSET + (SELECTPORTRAIT_LENGTH * iCharacterIndex);

        strOutput.Format(L"    { L\"%s Select Portrait\", 0x%x, 0x%x, indexKOF02Sprites_Extras, %s },\r\n", KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName,
            nCurrentCharacterOffset, nCurrentCharacterOffset + SELECTPORTRAIT_LENGTH,
            KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszPortraitImageRefName);
        OutputDebugString(strOutput);

        OutputDebugString(L"};\r\n\r\n");
    }
#endif

    //Go through each character: core palettes
    for (uint16_t iCharacterIndex = 0; iCharacterIndex < ARRAYSIZE(KOF02PS2_A_CharacterOffsetArray); iCharacterIndex++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName);

        for (uint16_t iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
        {
            nCurrentCharacterOffset = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].locationInROM + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset KOF02PS2_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_NEOGEO[iButtonIndex]);
            OutputDebugString(strOutput);

            if (KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x, %s },\r\n", KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%x, 0x%x },\r\n", KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszMoveNames[] =
            {
                L"Hidden Super Desperation Move 1",
                L"Desperation Move / Super Desperation Move",
                L"Electric Shock Effect",
                L"MAX Flash",
                L"Hidden Super Desperation Move 2",
                L"Soul Palette",
                L"Hidden Super Desperation Move 3",
            };

            for (uint16_t iCurrentExtra = 1; iCurrentExtra < 8; iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = pszMoveNames[iCurrentExtra - 1];
                uint32_t nCurrentImageToUse = 0;

                switch (iCurrentExtra)
                {
                case 1: // HSDM1
                    if (KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszHSDM1NameOverride)
                    {
                        pszCurrentMoveName = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszHSDM1NameOverride;
                    }
                    nCurrentImageToUse = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].nHSDMI1ImageIndex;
                    break;
                case 2: // DM/SDM
                    if (KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszDMSDMNameOverride)
                    {
                        pszCurrentMoveName = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszDMSDMNameOverride;
                    }
                    nCurrentImageToUse = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].nDMSDMImageIndex;
                    break;
                case 3: // electric shock
                    nCurrentImageToUse = 0x18;
                    break;
                case 4: // MAX flash
                    nCurrentImageToUse = 0x8;
                    break;
                case 5: // HSDM2
                    if (KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszHSDM2NameOverride)
                    {
                        pszCurrentMoveName = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszHSDM2NameOverride;
                    }
                    nCurrentImageToUse = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].nHSDMI2ImageIndex;
                    break;
                case 6: // soul palette
                    nCurrentImageToUse = 0x18;
                    break;
                case 7: // HSDM3
                    if (KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszHSDM3NameOverride)
                    {
                        pszCurrentMoveName = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszHSDM3NameOverride;
                    }
                    nCurrentImageToUse = KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].nHSDMI3ImageIndex;
                    break;
                default:
                    break;
                }

                strOutput.Format(L"    { L\"%s - %s\", 0x%x, 0x%x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszImageRefName, nCurrentImageToUse);

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (uint16_t iCharacterIndex = 0; iCharacterIndex < ARRAYSIZE(KOF02PS2_A_CharacterOffsetArray); iCharacterIndex++)
    {
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF02PS2_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"A\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_A, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_A) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"B\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_B, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_B) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"C\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_C, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_C) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"D\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_D, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_D) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"Win Portraits\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_PORTRAITS_WIN) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Lifebar Portraits\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_PORTRAITS_LIFEBAR) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Select Portrait\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02PS2_A_%s_PALETTES_PORTRAITS_SELECT) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        OutputDebugString(L"};\r\n\r\n");
    }

    OutputDebugString(L"const sDescTreeNode KOF02PS2_A_UNITS[] =\r\n{\r\n");

    for (uint16_t iCharacterIndex = 0; iCharacterIndex < ARRAYSIZE(KOF02PS2_A_CharacterOffsetArray); iCharacterIndex++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF02PS2_A_%s_COLLECTION, ARRAYSIZE(KOF02PS2_A_%s_COLLECTION) },\r\n", KOF02PS2_A_CharacterOffsetArray[iCharacterIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"};\r\n\r\n");
}
