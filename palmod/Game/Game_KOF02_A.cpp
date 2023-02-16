#include "StdAfx.h"
#include "GameDef.h"
#include "Game_KOF02_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

void CGame_KOF02_A::DumpAllCharacters()
{
    // For development purposes only...
    // Note that Chin uses 0x9 and Kensou uses 0x0 for their MAX Flash palette: the autogenerator currently doesn't account for that

    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (uint16_t iButtonIndex = 0; iButtonIndex < 4; iButtonIndex++)
        {
            nCurrentCharacterOffset = KOF02_A_CharacterOffsetArray[iUnitCtr].locationInROM + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset KOF02_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_NEOGEO[iButtonIndex]);
            OutputDebugString(strOutput);

            if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x, %s },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
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
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM1NameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM1NameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nHSDMI1ImageIndex;
                    break;
                case 2: // DM/SDM
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszDMSDMNameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszDMSDMNameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nDMSDMImageIndex;
                    break;
                case 3: // electric shock
                    nCurrentImageToUse = 0x18;
                    break;
                case 4: // MAX flash
                    nCurrentImageToUse = 0x8;
                    break;
                case 5: // HSDM2
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM2NameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM2NameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nHSDMI2ImageIndex;
                    break;
                case 6: // soul palette
                    nCurrentImageToUse = 0x18;
                    break;
                case 7: // HSDM3
                    if (KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM3NameOverride)
                    {
                        pszCurrentMoveName = KOF02_A_CharacterOffsetArray[iUnitCtr].pszHSDM3NameOverride;
                    }
                    nCurrentImageToUse = KOF02_A_CharacterOffsetArray[iUnitCtr].nHSDMI3ImageIndex;
                    break;
                default:
                    break;
                }

                strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    KOF02_A_CharacterOffsetArray[iUnitCtr].pszImageRefName, nCurrentImageToUse);

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF02_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"A\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_A, ARRAYSIZE(KOF02_A_%s_PALETTES_A) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"B\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_B, ARRAYSIZE(KOF02_A_%s_PALETTES_B) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"C\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_C, ARRAYSIZE(KOF02_A_%s_PALETTES_C) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"D\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_D, ARRAYSIZE(KOF02_A_%s_PALETTES_D) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"Win Portraits\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_WIN, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_WIN) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Lifebar Portraits\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_LIFEBAR, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_LIFEBAR) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Select Portrait\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_PALETTES_PORTRAITS_SELECT, ARRAYSIZE(KOF02_A_%s_PALETTES_PORTRAITS_SELECT) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(KOF02_A_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF02_A_%s_COLLECTION, ARRAYSIZE(KOF02_A_%s_COLLECTION) },\r\n", KOF02_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}
