#include "StdAfx.h"
#include "GameDef.h"
#include "Game_LASTBLADE_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

CGame_LASTBLADE_A::CGame_LASTBLADE_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad /*= LASTBLADE2_A */)
{
    InitializeGame(nConfirmedROMSize, (nROMToLoad == LASTBLADE_A) ? m_sCoreGameData_NeoGeo : m_sCoreGameData_Steam);
}

void CGame_LASTBLADE_A::DumpAllCharacters()
{
    struct sLASTBLADE_A_CharacterDump
    {
        LPCWSTR pszCharacterName = nullptr;
        uint32_t locationInROM = 0;
        LPCWSTR pszImageRefName = nullptr;
    };

    const sLASTBLADE_A_CharacterDump LASTBLADE_A_CharacterOffsetArray[] =
    {
        { L"Akari",     0xb5b20, L"indexLastBlade2_Akari" },
        { L"Amano",     0xbd560, L"indexLastBladeSprites_Amano", },
        { L"Juzoh",     0xB7020, L"indexLastBlade2_Juzoh" },
        { L"Kaede",     0xb0720, L"indexLastBlade2_Kaede" },
        { L"Kagami",    0xC3E60, L"indexLastBlade2_Shinnosuke" },
        { L"Lee",       0xBEA60, L"indexLastBlade2_LeeRekka" },
        { L"Moryia",    0xb1c20, L"indexLastBlade2_Moriya" },
        { L"Mukuro",    0xbc060, L"indexLastBlade2_Mukuro" },
        { L"Musashi",   0xC2960, L"indexLastBladeSprites_Musashi" },
        { L"Okina",     0xb4620, L"indexLastBladeSprites_Okina" },
        { L"Shigen",    0xC1460, L"indexLastBlade2_Shigen" },
        { L"Washizuka", 0xB8520, L"indexLastBladeSprites_Washizuka" },
        { L"Yuki",      0xb3120, L"indexLastBlade2_Yuki" },
        { L"Zantetsu",  0xBFF60, L"indexLastBlade2_Zantetsu" },
    };

    const LPCWSTR LB1_SHORTBUTTON_NAMES[] =
    {
        L"PA",
        L"PD",
        L"SA",
        L"SD"
    };

    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(LASTBLADE_A_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        uint32_t nWeaponOffset = 0x200;

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        // We don't currently know where the p2 palettes are so just show the p1 offsets
        for (uint16_t iButtonIndex = 0; iButtonIndex < 1 /* DEF_BUTTONLABEL_2.size() */; iButtonIndex++)
        {
            nCurrentCharacterOffset = LASTBLADE_A_CharacterOffsetArray[iUnitCtr].locationInROM + (0x200 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset LASTBLADE_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, LB1_SHORTBUTTON_NAMES[iButtonIndex]);
            OutputDebugString(strOutput);

            strOutput.Format(L"    { L\"Main\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            OutputDebugString(strOutput);
            strOutput.Format(L"    { L\"Weapon\", 0x%x, 0x%x, %s, 0x01 },\r\n", nCurrentCharacterOffset + nWeaponOffset, nCurrentCharacterOffset + nWeaponOffset + 0x20,
                LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
            OutputDebugString(strOutput);
            
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            const LPCWSTR pszEffectNames[] =
            {
                L"Burned",
                L"Cursed",
                L"Fandango",
                L"Frozen",
                L"Shocked",
                L"Zombie",
                L"Blink",
                L"Deflect",
            };

            for (uint16_t uCurrentMove = 0; uCurrentMove < ARRAYSIZE(pszEffectNames); uCurrentMove++)
            {
                LPCWSTR pszCurrentMoveName = pszEffectNames[uCurrentMove];

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x, %s, 0x00, &pairNext },\r\n", pszCurrentMoveName,
                    nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20, LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
                OutputDebugString(strOutput);

                strOutput.Format(L"    { L\"Weapon - %s\", 0x%x, 0x%x, %s, 0x01 },\r\n", pszCurrentMoveName,
                    nWeaponOffset + nCurrentCharacterOffset, nWeaponOffset + nCurrentCharacterOffset + 0x20, LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszImageRefName);
                OutputDebugString(strOutput);

                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            const uint32_t nExtrasStartingOffset = nCurrentCharacterOffset;

            for (uint16_t nExtraCount = 1; nExtraCount < 8; nExtraCount++)
            {
                strOutput.Format(L"    { L\"Extra %u\", 0x%x, 0x%x },\r\n", nExtraCount, nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                OutputDebugString(strOutput);

                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            nCurrentCharacterOffset = nExtrasStartingOffset;

            for (uint16_t nExtraCount = 1; nExtraCount < 8; nExtraCount++)
            {
                strOutput.Format(L"    { L\"Weapon Extras %u\", 0x%x, 0x%x },\r\n", nExtraCount, nWeaponOffset + nCurrentCharacterOffset, nWeaponOffset + nCurrentCharacterOffset + 0x20);
                OutputDebugString(strOutput);

                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    // Now create the collections...
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(LASTBLADE_A_CharacterOffsetArray); iUnitCtr++)
    {
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode LASTBLADE_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        strOutput.Format(L"    { L\"Power A\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_PA) },\r\n", szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
        //strOutput.Format(L"    { L\"Power D\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_PD, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_PD) },\r\n", szCodeDesc, szCodeDesc);
        //OutputDebugString(strOutput);
        //strOutput.Format(L"    { L\"Speed A\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_SA, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_SA) },\r\n", szCodeDesc, szCodeDesc);
        //OutputDebugString(strOutput);
        //strOutput.Format(L"    { L\"Speed D\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_PALETTES_SD, ARRAYSIZE(LASTBLADE_A_%s_PALETTES_SD) },\r\n", szCodeDesc, szCodeDesc);
        //OutputDebugString(strOutput);

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(LASTBLADE_A_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];

        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_%s_COLLECTION, ARRAYSIZE(LASTBLADE_A_%s_COLLECTION) },\r\n", LASTBLADE_A_CharacterOffsetArray[iUnitCtr].pszCharacterName, szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

sFileRule CGame_LASTBLADE_A::GetRule(uint32_t nUnitId)
{
    sFileRule NewFileRule;

    // This value is only used for directory-based games
    if (nUnitId == LASTBLADE_S)
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE_A_FileLoadingData_Steam.rgFileList.at(0).strFileName.c_str()); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = LASTBLADE_A_FileLoadingData_Steam.rgFileList.at(0).nFileSize;
    }
    else
    {
        _snwprintf_s(NewFileRule.szFileName, ARRAYSIZE(NewFileRule.szFileName), _TRUNCATE, LASTBLADE_A_FileLoadingData_NeoGeo.rgFileList.at(0).strFileName.c_str()); // Update with the primary expected ROM name here.
        NewFileRule.uVerifyVar = LASTBLADE_A_FileLoadingData_NeoGeo.rgFileList.at(0).nFileSize;
    }

    NewFileRule.uUnitId = 0;

    return NewFileRule;
}

uint32_t CGame_LASTBLADE_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static sCRC32ValueSet knownROMs[] =
    {
        { L"The Last Blade (Neo-Geo)", L"234-p1.p1", 0xe123a5a3, 0 },
        { L"The Last Blade (Steam)", L"lastblad_game_m68k", 0xe72943de, 0 },
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
