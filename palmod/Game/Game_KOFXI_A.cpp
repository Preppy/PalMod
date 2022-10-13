#include "StdAfx.h"
#include "Game_KOFXI_A.h"

struct sKOFXI_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    uint32_t baseLocation = 0;
    LPCWSTR pszImageRefName = nullptr;
};

sKOFXI_CharacterDump kofXICharacterList[] =
{
    { L"Ash",       0x1011000, L"indexKOFXISprites_Ash" }, // 0x1012800
    { L"Oswald",    0x11e2800, L"indexKOFXISprites_Oswald" }, // 0x11e4000
    { L"Shen",      0x13ab000, L"indexKOFXISprites_Shen" }, // 0x13ac800
    { L"Elizabeth", 0x1522800, L"indexKOFXISprites_Elizabeth" }, // 0x1524000
    { L"Duo Lon",   0x16bf000, L"indexKOFXISprites_Duo" }, // 0x16c0800
    { L"Benimaru",  0x1861800, L"indexKOFXISprites_Benimaru" }, // 0x1863000
    { L"Terry",     0x19b8000, L"indexKOFXISprites_Terry" }, // 0x19b9800
    { L"Kim",       0x1b58000, L"indexKOFXISprites_Kim" }, // 0x1b59800
    { L"Duck King", 0x1c8f800, L"indexKOFXISprites_DuckKing" }, // 0x1c91000
    { L"Ryo",       0x1df4000, L"indexKOFXISprites_Ryo" }, // 0x1df5800
    { L"Yuri",      0x1f5f000, L"indexKOFXISprites_Yuri" }, // 0x1f60800
    { L"King",      0x20ba800, L"indexKOFXISprites_King" }, // 0x20bc000
    { L"B. Jenet",  0x21c5800, L"indexKOFXISprites_BJenet" }, // 0x21c7000
    { L"Gato",      0x2381000, L"indexKOFXISprites_Gato" }, // 0x2382800
    { L"Tizoc/The Griffon", 0x24e1000, L"indexKOFXISprites_Tizoc" }, // 0x24e2800
    { L"Ralf",      0x2680000, L"indexKOFXISprites_Ralf" }, // 0x2681800
    { L"Clark",     0x27c1000, L"indexKOFXISprites_Clark" }, // 0x27c2800
    { L"Whip",      0x28ed000, L"indexKOFXISprites_Whip" }, // 0x28ee800
    { L"Athena",    0x2a9d800, L"indexKOFXISprites_Athena" }, // 0x2a9f000
    { L"Kensou",    0x2c52800, L"indexKOFXISprites_Kensou" }, // 0x2c54000
    { L"Momoko",    0x2dd9000, L"indexKOFXISprites_Momoko" }, // 0x2dda800
    { L"Vanessa",   0x2f98000, L"indexKOFXISprites_Vanessa" }, // 0x2f99800
    { L"Blue Mary", 0x30ef000, L"indexKOFXISprites_BlueMary" }, // 0x30f0800
    { L"Ramon",     0x3257000, L"indexKOFXISprites_Ramon" }, // 0x3258800
    { L"Malin",     0x33b3800, L"indexKOFXISprites_Malin" }, // 0x33b5000
    { L"Kasumi",    0x34e4800, L"indexKOFXISprites_Kasumi" }, // 0x34e6000
    { L"Eiji",      0x3609800, L"indexKOFXISprites_Eiji" }, // 0x360b000
    { L"K'",        0x3763800, L"indexKOFXISprites_K" }, // 0x3765000
    { L"Kula",      0x3901800, L"indexKOFXISprites_Kula" }, // 0x3903000
    { L"Maxima",    0x3ab6800, L"indexKOFXISprites_Maxima" }, // 0x3ab8000
    { L"Kyo",       0x3c57800, L"indexKOFXISprites_Kyo" }, // 0x3c59000
    { L"Iori",      0x3df6000, L"indexKOFXISprites_Iori" }, // 0x3df7800
    { L"Shingo",    0x3fc5800, L"indexKOFXISprites_Shingo" }, // 0x3fc7000
    { L"Gai",       0x40d3000, L"indexKOFXISprites_Gai" }, // 0x40d4800
    { L"Sho",       0x420f800, L"indexKOFXISprites_Sho" }, // 0x4211000
    { L"Adelheid",  0x4366800, L"indexKOFXISprites_Adelheid" }, // 0x4368000
    { L"Silber",    0x44b1000, L"indexKOFXISprites_Silber" }, // 0x44b2800
    { L"Jyazu",     0x45fa800, L"indexKOFXISprites_Jyazu" }, // 0x45fc000
    { L"Shion",     0x47cb800, L"indexKOFXISprites_Shion" }, // 0x47cd000
    { L"Magaki",    0x499a000, L"indexKOFXISprites_Magaki" }, // 0x499b600
};

const std::vector<LPCWSTR >DEF_BUTTONLABEL_KOFXI_FOR_UI =
{
    L"A", L"B", L"C", L"D", L"E + A", L"E + B", L"E + C", L"E + D", L"Start + A", L"Start + B", L"Start + C", L"Start + D"
};

void CGame_KOFXI_A::DumpAllCharacters()
{
    const LPCWSTR DEF_BUTTONLABEL_KOFXI_FOR_CODE[] =
    {
        L"A", L"B", L"C", L"D", L"EA", L"EB", L"EC", L"ED", L"SA", L"SB", L"SC", L"SD"
    };

    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(kofXICharacterList); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), kofXICharacterList[iUnitCtr].pszCharacterName);

        for (uint16_t iButtonIndex = 0; iButtonIndex < DEF_BUTTONLABEL_KOFXI.size(); iButtonIndex++)
        {
            nCurrentCharacterOffset = kofXICharacterList[iUnitCtr].baseLocation + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset KOFXI_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_KOFXI_FOR_CODE[iButtonIndex]);
            OutputDebugString(strOutput);

            if (kofXICharacterList[iUnitCtr].pszImageRefName)
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x, %s },\r\n", kofXICharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_KOFXI_FOR_CODE[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                    kofXICharacterList[iUnitCtr].pszImageRefName);
            }
            else
            {
                strOutput.Format(L"    { L\"%s %s\", 0x%07x, 0x%07x },\r\n", kofXICharacterList[iUnitCtr].pszCharacterName, DEF_BUTTONLABEL_KOFXI_FOR_CODE[iButtonIndex],
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
            }

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            struct MoveWithImage
            {
                LPCWSTR pszMoveName = L"";
                uint32_t nCurrentImageToUse = 0x00;
            };

            const MoveWithImage rgMoveInfo[] =
            {
                { L"Super Stuff 1", 0x20 },
                { L"Electric Palette", 0x41 },
                { L"Darker Palette", 0x40 },
                { L"Super Stuff 2", 0x21 },
                { L"Character Extra 1", 0x30 },
                { L"Character Extra 2", 0x31 },
                { L"Character Extra 3", 0x32 },
                { L"Extra Move 1", 0x10 },
                { L"Extra Move 2", 0x11 },
                { L"Extra Move 3", 0x12 },
                { L"Extra Move 4", 0x13 },
                { L"Extra Move 5", 0x14 },
                { L"Extra Move 6", 0x15 },
                { L"Extra Move 7", 0x16 },
                { L"Extra Move 8", 0x17 },
            };

            for (uint16_t iCurrentExtra = 0; iCurrentExtra < ARRAYSIZE(rgMoveInfo); iCurrentExtra++)
            {
                LPCWSTR pszCurrentMoveName = rgMoveInfo[iCurrentExtra].pszMoveName;
                uint32_t nCurrentImageToUse = rgMoveInfo[iCurrentExtra].nCurrentImageToUse;

                if (kofXICharacterList[iUnitCtr].pszImageRefName)
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x, %s, 0x%02x },\r\n", DEF_BUTTONLABEL_KOFXI[iButtonIndex], pszCurrentMoveName,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        kofXICharacterList[iUnitCtr].pszImageRefName, nCurrentImageToUse);
                }
                else
                {
                    strOutput.Format(L"    { L\"%s - %s\", 0x%07x, 0x%07x },\r\n", DEF_BUTTONLABEL_KOFXI[iButtonIndex], pszCurrentMoveName,
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
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(kofXICharacterList); iUnitCtr++)
    {
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), kofXICharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOFXI_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nButtonNameIndex = 0; nButtonNameIndex < DEF_BUTTONLABEL_KOFXI_FOR_UI.size(); nButtonNameIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOFXI_A_%s_PALETTES_%s, ARRAYSIZE(KOFXI_A_%s_PALETTES_%s) },\r\n", DEF_BUTTONLABEL_KOFXI_FOR_UI[nButtonNameIndex], szCodeDesc, DEF_BUTTONLABEL_KOFXI_FOR_CODE[nButtonNameIndex],
                                                                                                                                            szCodeDesc, DEF_BUTTONLABEL_KOFXI_FOR_CODE[nButtonNameIndex] );
            OutputDebugString(strOutput);
        }
        
        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(kofXICharacterList); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), kofXICharacterList[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOFXI_A_%s_COLLECTION, ARRAYSIZE(KOFXI_A_%s_COLLECTION) },\r\n", kofXICharacterList[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

