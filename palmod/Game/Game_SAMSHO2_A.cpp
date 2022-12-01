#include "StdAfx.h"
#include "Game_SAMSHO2_A.h"

uint32_t CGame_SAMSHO2_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"Samurai Shodown II (Neo-Geo)", L"063-p1.p1", 0x22368892, 0 },
        { L"Samurai Shodown II (Neo-Geo)", L"063-p1.bin", 0x22368892, 0 },
        { L"Samurai Shodown II (Special 2017, hack) ", L"063-p1-kan.p1", 0x147cc6d7, 0 },
        { L"Samurai Shodown II (Neo-Geo Optimized)", L"063-p1new.p1", 0xc7633c54, 0 },
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

void CGame_SAMSHO2_A::DumpPaletteHeaders()
{
    CString strOutput;
    const uint32_t SAMSHO_PALETTE_LENGTH = 0x40;

    LPCWSTR rgCharacters[] = {
                                L"Haohmaru",
                                L"Nakoruru",
                                L"Rimururu",
                                L"Hanzo",
                                L"Galford",
                                L"Kyoshiro",
                                L"Ukyo",
                                L"Genjuro",
                                L"Basara",
                                L"Shizumaru",
                                L"Gaira",
                                L"Amakusa",
                                L"Unused",
                                L"Zankuro",
    };

    const uint32_t k_nBasePalette = 0x01000;
    uint32_t nCurrentPalettePosition = k_nBasePalette;

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacters); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex]);

        // Status effects
        for (uint16_t nStatusIndex = 0; nStatusIndex < 64; nStatusIndex++)
        {
            CString strPaletteName;

            if ((nStatusIndex == 0) || (nStatusIndex == 16) || (nStatusIndex == 32) || (nStatusIndex == 48))
            {
                switch (nStatusIndex)
                {
                case 0:
                    strOutput.Format(L"const sGame_PaletteDataset SAMSHO2_A_%s_PALETTES_S1[] = \r\n{\r\n", szCodeDesc);
                    break;
                case 16:
                    strOutput.Format(L"const sGame_PaletteDataset SAMSHO2_A_%s_PALETTES_S2[] = \r\n{\r\n", szCodeDesc);
                    break;
                case 32:
                    strOutput.Format(L"const sGame_PaletteDataset SAMSHO2_A_%s_PALETTES_B1[] = \r\n{\r\n", szCodeDesc);
                    break;
                case 48:
                    strOutput.Format(L"const sGame_PaletteDataset SAMSHO2_A_%s_PALETTES_B2[] = \r\n{\r\n", szCodeDesc);
                    break;
                }
               
                OutputDebugString(strOutput);
            }

            uint32_t nAdjustedIndex = nStatusIndex % 16;

            bool fShouldShowMainSprite = true;

            switch (nAdjustedIndex)
            {
            case 0:
                strPaletteName = L"Main";
                break;
            case 1:
                strPaletteName = L"Rage Flash";
                break;
            case 4:
                strPaletteName = L"Shocked";
                break;
            case 5:
                strPaletteName = L"Frozen";
                break;
            case 6:
                strPaletteName = L"Burning";
                break;
            case 8:
                strPaletteName = L"Daylight";
                break;
            case 9:
                strPaletteName = L"Moonlight";
                break;
            case 13:
                strPaletteName = L"Slashes (1+2/3)";
                fShouldShowMainSprite = false;
                break;
            case 14:
                strPaletteName = L"Slashes (3/3) / Start of Portrait";
                fShouldShowMainSprite = false;
                break;
            case 15:
                strPaletteName = L"End of Portrait / Character Extra 5";
                fShouldShowMainSprite = false;
                break;
            default:
                strPaletteName.Format(L"Extra Palette %u", nAdjustedIndex);
                fShouldShowMainSprite = false;
                break;
            }

            strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x%s%s },\r\n", strPaletteName.GetString(), 
                nCurrentPalettePosition, nCurrentPalettePosition + SAMSHO_PALETTE_LENGTH,
                fShouldShowMainSprite ? L", indexSamSho5Sprites_" : L"", fShouldShowMainSprite ? rgCharacters[nCharIndex] : L"");
            OutputDebugString(strOutput);

            nCurrentPalettePosition += SAMSHO_PALETTE_LENGTH;

            if (nAdjustedIndex == 15)
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

        strOutput.Format(L"const sDescTreeNode SAMSHO2_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Slash 1\", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_%s_PALETTES_S1, ARRAYSIZE(SAMSHO2_A_%s_PALETTES_S1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Slash 2\", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_%s_PALETTES_S2, ARRAYSIZE(SAMSHO2_A_%s_PALETTES_S2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Bust 1\", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_%s_PALETTES_B1, ARRAYSIZE(SAMSHO2_A_%s_PALETTES_B1) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"    { L\"Bust 2\", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_%s_PALETTES_B2, ARRAYSIZE(SAMSHO2_A_%s_PALETTES_B2) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        strOutput.Format(L"};\r\n\r\n");
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"const sDescTreeNode SAMSHO2_A_UNITS[] = \r\n{\r\n");
    OutputDebugString(strOutput);

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(rgCharacters); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), rgCharacters[nCharIndex]);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)SAMSHO2_A_%s_COLLECTION, ARRAYSIZE(SAMSHO2_A_%s_COLLECTION) },\r\n", rgCharacters[nCharIndex], szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    strOutput.Format(L"};\r\n\r\n");
    OutputDebugString(strOutput);
}
