#include "StdAfx.h"
#include "Game_BREAKERS_A.h"

struct sBreakers_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    uint32_t baseLocation = 0;
    LPCWSTR pszImageRefName = nullptr;
};

sBreakers_CharacterDump breakersCharacterList[] =
{
    { L"Ash", 0x1011000 }, // 0x1012800
    { L"Oswald", 0x11e2800 }, // 0x11e4000
    { L"Shen", 0x13ab000 }, // 0x13ac800
    { L"Elizabeth", 0x1522800 }, // 0x1524000
    { L"Duo Lon", 0x16bf000 }, // 0x16c0800
    { L"Benimaru", 0x1861800 }, // 0x1863000
    { L"Terry", 0x19b8000 }, // 0x19b9800
    { L"Kim", 0x1b58000 }, // 0x1b59800
    { L"Duck King", 0x1c8f800 }, // 0x1c91000
    { L"Ryo", 0x1df4000, L"indexKOF02UMSprites_Ryo" }, // 0x1df5800
    { L"Yuri", 0x1f5f000 }, // 0x1f60800
    { L"King", 0x20ba800, L"indexKOF02UMSprites_King" }, // 0x20bc000
    { L"B. Jenet", 0x21c5800 }, // 0x21c7000
    { L"Gato", 0x2381000 }, // 0x2382800
    { L"Tizoc/The Griffon", 0x24e1000 }, // 0x24e2800
    { L"Ralf", 0x2680000 }, // 0x2681800
    { L"Clark", 0x27c1000 }, // 0x27c2800
    { L"Whip", 0x28ed000 }, // 0x28ee800
    { L"Athena", 0x2a9d800 }, // 0x2a9f000
    { L"Kensou", 0x2c52800 }, // 0x2c54000
    { L"Momoko", 0x2dd9000 }, // 0x2dda800
    { L"Vanessa", 0x2f98000, L"indexKOF02UMSprites_Vanessa" }, // 0x2f99800
    { L"Blue Mary", 0x30ef000 }, // 0x30f0800
    { L"Ramon", 0x3257000, L"indexKOF02UMSprites_Ramon" }, // 0x3258800
    { L"Malin", 0x33b3800 }, // 0x33b5000
    { L"Kasumi", 0x34e4800 }, // 0x34e6000
    { L"Eiji", 0x3609800 }, // 0x360b000
    { L"K'", 0x3763800, L"indexKOF02UMSprites_K" }, // 0x3765000
    { L"Kula", 0x3901800, L"indexKOF02UMSprites_Kula" }, // 0x3903000
    { L"Maxima", 0x3ab6800, L"indexKOF02UMSprites_Maxima" }, // 0x3ab8000
    { L"Kyo", 0x3c57800 }, // 0x3c59000
    { L"Iori", 0x3df6000, L"indexKOF02UMSprites_Iori" }, // 0x3df7800
    { L"Shingo", 0x3fc5800, L"indexKOF02UMSprites_Shingo" }, // 0x3fc7000
    { L"Gai", 0x40d3000 }, // 0x40d4800
    { L"Sho", 0x420f800 }, // 0x4211000
    { L"Adelheid", 0x4366800 }, // 0x4368000
    { L"Silber", 0x44b1000 }, // 0x44b2800
    { L"Jyazu", 0x45fa800 }, // 0x45fc000
    { L"Shion", 0x47cb800 }, // 0x47cd000
    { L"Magaki", 0x499a000 }, // 0x499b600
};

void CGame_BREAKERS_A::DumpAllCharacters()
{
    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(breakersCharacterList); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), breakersCharacterList[iUnitCtr].pszCharacterName);

        for (uint16_t iButtonIndex = 0; iButtonIndex < DEF_BUTTONLABEL_NEOGEO.size(); iButtonIndex++)
        {
            nCurrentCharacterOffset = breakersCharacterList[iUnitCtr].baseLocation + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset BREAKERS_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_NEOGEO[iButtonIndex]);
            OutputDebugString(strOutput);

            if (breakersCharacterList[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x, %s },\r\n", breakersCharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    breakersCharacterList[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x },\r\n", breakersCharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_NEOGEO[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszMoveNames[] =
            {
                L"Super Trail",
                L"Pure Black",
                L"Pure White"
                L"Fire",
                L"Fire Cycled",
                L"Elec1",
                L"Elec2",
                L"Poisoned 1",
                L"Poisoned 2",
                L"Blue Gradient",
                L"Orange Gradient",
                L"Elbow Dash / Aura Flicker",
                L"Aura Flicker / Poison 1",
                L"Anubis Palette",
                L"Teleport Palette",
                L"Drop Palette",
                L"Poison 2", 
            };

            for (uint16_t iCurrentExtra = 0; iCurrentExtra < ARRAYSIZE(pszMoveNames); iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = pszMoveNames[iCurrentExtra];
                uint32_t nCurrentImageToUse = 0;

                if (breakersCharacterList[iUnitCtr].pszImageRefName)
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        breakersCharacterList[iUnitCtr].pszImageRefName, nCurrentImageToUse);
                }
                else
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x },\r\n", DEF_BUTTONLABEL_NEOGEO[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(breakersCharacterList); iUnitCtr++)
    {
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), breakersCharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode BREAKERS_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nButtonNameIndex = 0; nButtonNameIndex < DEF_BUTTONLABEL_NEOGEO.size(); nButtonNameIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)BREAKERS_A_%s_PALETTES_%s, ARRAYSIZE(BREAKERS_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL_NEOGEO[nButtonNameIndex], szCodeDesc, DEF_BUTTONLABEL_NEOGEO[nButtonNameIndex],
                                                                                                                                            szCodeDesc, DEF_BUTTONLABEL_NEOGEO[nButtonNameIndex] );
            OutputDebugString(strOutput);
        }
        
        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(breakersCharacterList); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), breakersCharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)BREAKERS_A_%s_COLLECTION, ARRAYSIZE(BREAKERS_A_%s_COLLECTION) },\r\n", breakersCharacterList[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

uint32_t CGame_BREAKERS_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Breakers Revenge (Neo-Geo)", L"245-p1.p1", 0xc828876d, 0 },
        { L"Breakers Revenge (Neo-Geo)", L"245-p1.bin", 0xc828876d, 0 },
    };

    if (ppKnownROMSet)
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

uint32_t CGame_BREAKERS_S::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        { L"Breakers Revenge (Breakers Collection for Steam)", L"245-m68k.swbin", 0xc828876d, 0 },
    };

    if (ppKnownROMSet)
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
