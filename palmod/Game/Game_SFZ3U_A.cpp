#include "StdAfx.h"
#include "Game_SFZ3U_A.h"

struct sSFZ3U_A_CharacterData
{
    LPCWSTR pszCharacterName = nullptr;
    LPCWSTR pszCharacterImageName = nullptr;
    uint32_t nROMOffset = 0;
    uint32_t nImagePortraitSetIndex = 0;
    uint32_t nImageMainSpriteIndex = 0;
    bool fSpriteIsPaired = false;
};

sSFZ3U_A_CharacterData SFZ3U_A_CharacterDataArray[] =
{
    { L"Ryu",       L"Ryu",     0x5ff0000, 0xB4 },
    { L"Ken",       L"Ken",     0x60bd800, 0xAF },
    { L"Akuma",     L"Akuma",   0x61B7000, 0xA1 }, // Gouki
    { L"Charlie",   L"Charlie", 0x634b000, 0xA5 }, // Nash
    { L"Chun-Li",   L"ChunLi",  0x6428000, 0xA6, 0x0c, true }, // Chun (NOTE: Chun has a special non-X-ISM portrait, A7)
    { L"Adon",      L"Adon",    0x65d7000, 0xA0 },
    { L"Sodom",     L"Sodom",   0x66de000, 0xB7 },
    { L"Guy",       L"Guy",     0x68bd000, 0xAD },
    { L"Birdie",    L"Birdie",  0x69d4000, 0xA2 },
    { L"Rose",      L"Rose",    0x6b01000, 0xB3 },
    { L"M.Bison",   L"Bison",   0x6c3d000, 0xB0 }, // Dict
    { L"Sagat",     L"Sagat",   0x6d43800, 0xB5 },
    { L"Dan",       L"Dan",     0x6e09800, 0xA9 },
    { L"Sakura",    L"Sakura",  0x6f54000, 0xB6 },
    { L"Rolento",   L"Rolento", 0x7076800, 0xB2 },
    { L"Dhalsim",   L"Dhalsim", 0x7190000, 0xAA },

    { L"Zangief",   L"Zangief", 0x732c000, 0xB9 },
    { L"Gen",       L"Gen",     0x7451000, 0xAC },
    { L"Chun-Li (X-Ism)", L"ChunLi", 0x64eb000, 0xa6, 0x00, true },
    { L"Gen (Crane stance)", L"Gen", 0x7546800, 0xac },
    { L"Sodom (X-Ism)", L"Sodom", 0x67EC000, 0xB7 },
    { L"Balrog",    L"Balrog",  0x75fd000, 0xff },
    { L"Cammy",     L"Cammy",   0x77ee000, 0xA4 },
    { L"Evil Ryu",  L"Ryu",     0x791e000, 0xb4 },
    { L"E.Honda",   L"EHonda",  0x7a0b800, 0xAB },
    { L"Blanka",    L"Blanka",  0x7b8a800, 0xA3 },
    { L"R.Mika",    L"RMika",   0x7d0e800, 0xB1 },
    { L"Cody",      L"Cody",    0x7e78000, 0xA8 },
    { L"Vega",      L"Vega",    0x7fb4000, 0xB8, 0x00, true },
    { L"Karin",     L"Karin",   0x80eb000, 0xAE },
    { L"Juli",      L"Juli",    0x820f800, 0xff },
    { L"Juni",      L"Juni",    0x831e000, 0xff },

    { L"Guile",     L"Guile",   0x8444000, 0xff },
    { L"Fei Long",  L"FeiLong", 0x8562000, 0xff },
    { L"Dee Jay",   L"DeeJay",  0x8660000, 0xff },
    { L"T-Hawk",    L"THawk",   0x87b6800, 0xff },
    { L"Shin Akuma", L"Akuma",  0x627B000, 0xA1 },
    { L"Balrog (Finished)", L"Balrog",  0x76EC000, 0xff },
    // ... is Eagle actually present?
    //{ L"Eagle",     L"Eagle",   0x8c26b40, 0xff },
};

const LPCWSTR SFZ3U_ColorOptionNames[] =
{
    L"X-Ism Punch",
    L"X-Ism Kick",
    L"A-Ism Punch",
    L"A-Ism Kick",
    L"V-Ism Punch",
    L"V-Ism Kick"
};

const LPCWSTR SFZ3U_CharacterPaletteNames[] =
{
    L"",
    L" Extra 1",
    L" Extra 2",
    L" Super Trail Light",
    L" Super Trail Dark"
};

void CGame_SFZ3U_A::DumpAllCharacters()
{
    CString strOutput;

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFZ3U_A_CharacterDataArray); nIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName);

        for (uint16_t nColorIndex = 0; nColorIndex < ARRAYSIZE(SFZ3U_ColorOptionNames); nColorIndex++)
        {
            wchar_t szIsmDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szIsmDesc, ARRAYSIZE(szIsmDesc), SFZ3U_ColorOptionNames[nColorIndex]);

            const uint16_t nPortraitsPerCharacter = 6;
            strOutput.Format(L"const sGame_PaletteDataset SFZ3U_A_%s_PALETTES_%s[] = \r\n{\r\n", szCodeDesc, szIsmDesc);
            OutputDebugString(strOutput);

            for (uint16_t nPaletteIndex = 0; nPaletteIndex < ARRAYSIZE(SFZ3U_CharacterPaletteNames); nPaletteIndex++)
            {
                const uint32_t PALETTE_LENGTH = 0x20;
                CString strColorName;
                strColorName.Format(L"%s%s", SFZ3U_ColorOptionNames[nColorIndex], SFZ3U_CharacterPaletteNames[nPaletteIndex]);
                uint16_t nPaletteSpriteIndex;

                switch (nPaletteIndex)
                {
                default:
                    nPaletteSpriteIndex = SFZ3U_A_CharacterDataArray[nIndex].nImageMainSpriteIndex;
                    break;
                case 1:
                    nPaletteSpriteIndex = 1;
                    break;
                case 2:
                    nPaletteSpriteIndex = 2;
                    break;
                }

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, indexCPS2Sprites_%s, 0x%02x%s },\r\n", strColorName.GetString(), 
                    static_cast<int>(SFZ3U_A_CharacterDataArray[nIndex].nROMOffset + (PALETTE_LENGTH * nPaletteIndex) + (nColorIndex * ARRAYSIZE(SFZ3U_CharacterPaletteNames) * PALETTE_LENGTH)),
                    static_cast<int>(SFZ3U_A_CharacterDataArray[nIndex].nROMOffset + (PALETTE_LENGTH * (nPaletteIndex + 1)) + (nColorIndex * ARRAYSIZE(SFZ3U_CharacterPaletteNames) * PALETTE_LENGTH)),
                    SFZ3U_A_CharacterDataArray[nIndex].pszCharacterImageName, nPaletteSpriteIndex, SFZ3U_A_CharacterDataArray[nIndex].fSpriteIsPaired ? L", &pairNext" : L"");
                OutputDebugString(strOutput);
            }
            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFZ3U_A_CharacterDataArray); nIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode SFZ3U_A_%s_COLLECTION[] = \r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < ARRAYSIZE(SFZ3U_ColorOptionNames); nColorIndex++)
        {
            wchar_t szIsmDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szIsmDesc, ARRAYSIZE(szIsmDesc), SFZ3U_ColorOptionNames[nColorIndex]);

            strOutput.Format(L"    {  L\"%s\", DESC_NODETYPE_TREE, (void*)SFZ3U_A_%s_PALETTES_%s, ARRAYSIZE(SFZ3U_A_%s_PALETTES_%s) },\r\n", SFZ3U_ColorOptionNames[nColorIndex], szCodeDesc, szIsmDesc, szCodeDesc, szIsmDesc);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    OutputDebugString(L"const sDescTreeNode SFZ3U_A_UNITS[] =\r\n    {\r\n");

    for (uint16_t nIndex = 0; nIndex < ARRAYSIZE(SFZ3U_A_CharacterDataArray); nIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName);

        strOutput.Format(L"    {  L\"%s\", DESC_NODETYPE_TREE, (void*)SFZ3U_A_%s_COLLECTION, ARRAYSIZE(SFZ3U_A_%s_COLLECTION) },\r\n", SFZ3U_A_CharacterDataArray[nIndex].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }

    OutputDebugString(L"};\r\n\r\n");
}

void CGame_SFZ3U_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            m_nCurrentPaletteROMLocation -= m_activeNAOMIShiftTable.at(nUnitId);
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef& currDef = m_prgCurrentExtrasLoaded.at(GetExtraLocForUnit(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = currDef.uOffset;
        m_nCurrentPaletteSizeInColors = (currDef.cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = currDef.szDesc;
    }
}

void CGame_SFZ3U_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            m_nCurrentPaletteROMLocation -= m_activeSteamShiftTable.at(nUnitId);
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef& currDef = m_prgCurrentExtrasLoaded.at(GetExtraLocForUnit(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = currDef.uOffset;
        m_nCurrentPaletteSizeInColors = (currDef.cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = currDef.szDesc;
    }
}

void CGame_SFZ3M_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            m_nCurrentPaletteROMLocation -= m_activeSteamShiftTable.at(nUnitId);
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
    else
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef& currDef = m_prgCurrentExtrasLoaded.at(GetExtraLocForUnit(nUnitId) + nPalId);

        m_nCurrentPaletteROMLocation = currDef.uOffset;
        m_nCurrentPaletteSizeInColors = (currDef.cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = currDef.szDesc;
    }
}

void CGame_SFA3MAX_PSP_DIR::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        if (paletteData)
        {
            cbPaletteSizeOnDisc = static_cast<int>(max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset)));

            m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;
            m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
            m_pszCurrentPaletteName = paletteData->szPaletteName;

            m_nCurrentPaletteROMLocation -= m_activePSPShiftTable.at(nUnitId);
        }
        else
        {
            // A bogus palette was requested: this is unrecoverable.
            DebugBreak();
        }
    }
}
