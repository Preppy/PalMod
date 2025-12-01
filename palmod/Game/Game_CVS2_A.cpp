#include "StdAfx.h"
#include "GameDef.h"
#include "Game_CVS2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

struct sCVS2_ExtraPair
{
    LPCWSTR pszExtraName = nullptr;
    uint8_t nImgIndex = 0;
};

struct sCVS2_CharacterDump
{
    LPCWSTR pszCharacterName = nullptr;
    uint32_t romOffset = 0;
    LPCWSTR pszImageRefName = nullptr;

    sCVS2_ExtraPair sExtra1;
    sCVS2_ExtraPair sExtra2;
    sCVS2_ExtraPair sExtra3;
    sCVS2_ExtraPair sExtra4;
    sCVS2_ExtraPair sExtra5;
};

const sCVS2_CharacterDump CVS2_CharacterOffsetArray[] =
{
    // This is sorted in ROM layout order
    { L"Ryu",        0x1488e80, L"indexCVS2Sprites_Ryu" },
    { L"Ken",        0x1553500, L"indexCVS2Sprites_Ken" },
    { L"Chun-Li",    0x166f140, L"indexCVS2Sprites_ChunLi" },
    { L"Guile",      0x1777de0, L"indexCVS2Sprites_Guile" },
    { L"Zangief",    0x1880800, L"indexCVS2Sprites_Zangief" },
    { L"Dhalsim",    0x19aef60, L"indexCVS2Sprites_Dhalsim" },
    { L"E.Honda",    0x1a33500, L"indexCVS2Sprites_EHonda" },
    { L"Blanka",     0x1b32560, L"indexCVS2Sprites_Blanka" },
    { L"Vega",       0x1bfe160, L"indexCVS2Sprites_Vega" },
    { L"Sagat",      0x1c9b720, L"indexCVS2Sprites_Sagat" },
    { L"M.Bison",    0x1d71a60, L"indexCVS2Sprites_MBison" },
    { L"Sakura",     0x1e961A0, L"indexCVS2Sprites_Sakura" },
    { L"Cammy",      0x1f6fc60, L"indexCVS2Sprites_Cammy" },
    { L"Akuma",      0x20759C0, L"indexCVS2Sprites_Akuma", { L"Purple Fireball", 1 }, { L"Red Fireball", 2 }, { L"Dictator Smoke", 3 }, { L"Power Up", 4 } },
    { L"Morrigan",   0x21AD920, L"indexCVS2Sprites_Morrigan" },
    { L"Evil Ryu",   0x22a4800, L"indexCVS2Sprites_EvilRyu" },
    { L"Kyo",        0x23a5180, L"indexCVS2Sprites_Kyo" },
    { L"Iori",       0x248f660, L"indexCVS2Sprites_Iori" },
    { L"Terry Bogard", 0x257a360, L"indexCVS2Sprites_Terry" },
    { L"Ryo",        0x265c5c0, L"indexCVS2Sprites_Ryo" },
    { L"Mai",        0x2741ce0, L"indexCVS2Sprites_Mai" },
    { L"Kim",        0x27d80a0, L"indexCVS2Sprites_Kim" },
    { L"Geese",      0x28e8ee0, L"indexCVS2Sprites_Geese" },
    { L"Yamazaki",   0x29fcd40, L"indexCVS2Sprites_RyujiYamazaki" },
    { L"Raiden",     0x2af5a20, L"indexCVS2Sprites_Raiden" },
    { L"Rugal",      0x2c28660, L"indexCVS2Sprites_Rugal" },
    { L"Vice",       0x2d18200, L"indexCVS2Sprites_Vice" },
    { L"Benimaru",   0x2e38300, L"indexCVS2Sprites_Benimaru" },
    { L"Yuri",       0x2edf8e0, L"indexCVS2Sprites_Yuri" },
    { L"King",       0x2f76140, L"indexCVS2Sprites_King" },
    { L"Nakoruru",   0x3069680, L"indexCVS2Sprites_Nakoruru", { L"Slashes", 1 },  { L"Birdie", 2 },  { L"Fireball", 3 },  { L"Energy Attacks", 4 },  { L"Falling", 5 }, },
    { L"Orochi Iori", 0x314b5a0, L"indexCVS2Sprites_OrochiIori" },
    { L"Balrog",     0x31d3320, L"indexCVS2Sprites_Balrog" },
    { L"Dan",        0x328c960, L"indexCVS2Sprites_Dan" },
    { L"Joe",        0x3344620, L"indexCVS2Sprites_Joe" },
    { L"Eagle",      0x342f920, L"indexCVS2Sprites_Eagle" },
    { L"Maki",       0x34f71a0, L"indexCVS2Sprites_Maki" },
    { L"Kyosuke",    0x36134a0, L"indexCVS2Sprites_Kyosuke" },
    { L"Athena",     0x36e48a0, L"indexCVS2Sprites_Athena", { L"Pink Energy", 1 }, { L"School Outfit 1", 2 }, { L"Blue Energy", 3 }, { L"School Outfit 2", 4 } },
    { L"Chang and Choi", 0x38111a0, L"indexCVS2Sprites_Chang" },
    { L"Todoh",      0x38fc140, L"indexCVS2Sprites_RyuhakuTodoh" },
    { L"Rock Howard", 0x3a34ea0, L"indexCVS2Sprites_Rock" },
    { L"Hibiki",     0x3b16dc0, L"indexCVS2Sprites_Hibiki" },
    { L"Haohmaru",   0x3c4ed80, L"indexCVS2Sprites_Haohmaru" },
    { L"Yun",        0x3d52a20, L"indexCVS2Sprites_Yun" },
    { L"Shin Akuma", 0x3e75a80, L"indexCVS2Sprites_ShinAkuma", { L"Purple Fireball", 1 }, { L"Red Fireball", 2 }, { L"Dictator Smoke", 3 }, { L"Power Up", 4 } },
    { L"God Rugal",  0x3fab320, L"indexCVS2Sprites_GodRugal" },
    { L"Rolento",    0x40d69a0, L"indexCVS2Sprites_Rolento" },
};

void CGame_CVS2_A::DumpAllCharacters()
{
    //Go through each character
    for (uint16_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(CVS2_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        const uint32_t k_nCharacterColorCount = static_cast<uint32_t>(DEF_BUTTONLABEL_CVS2.size());
        CString strOutput;

        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName);

        for (uint32_t iButtonIndex = 0; iButtonIndex < k_nCharacterColorCount; iButtonIndex++)
        {
            nCurrentCharacterOffset = CVS2_CharacterOffsetArray[iUnitCtr].romOffset + (0xc0 * iButtonIndex);

            strOutput.Format(L"const sGame_PaletteDataset CVS2_A_%s_PALETTES_%s[] =\r\n{\r\n", szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex]);
            OutputDebugString(strOutput);

            strOutput.Format(L"    { L\"Main Sprite\", 0x%07x, 0x%07x, %s },\r\n", 
                nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                CVS2_CharacterOffsetArray[iUnitCtr].pszImageRefName);

            OutputDebugString(strOutput);
            nCurrentCharacterOffset += 0x20;
            nPaletteCount++;

            for (uint16_t iCurrentExtra = 1; iCurrentExtra < 6; iCurrentExtra++)
            {
                const sCVS2_ExtraPair* extraPairInfo = nullptr;

                switch (iCurrentExtra)
                {
                    case 1:
                        extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra1);
                        break;
                    case 2:
                        extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra2);
                        break;
                    case 3:
                        extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra3);
                        break;
                    case 4:
                        extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra4);
                        break;
                    case 5:
                        extraPairInfo = &(CVS2_CharacterOffsetArray[iUnitCtr].sExtra5);
                        break;
                }

                if (extraPairInfo && extraPairInfo->pszExtraName)
                {
                    strOutput.Format(L"    { L\"%s\", 0x%07x, 0x%07x, %s, %u },\r\n", 
                        extraPairInfo->pszExtraName, 
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20,
                        CVS2_CharacterOffsetArray[iUnitCtr].pszImageRefName, extraPairInfo->nImgIndex);
                }
                else
                {
                    strOutput.Format(L"    { L\"Extra %u\", 0x%07x, 0x%07x },\r\n", iCurrentExtra,
                        nCurrentCharacterOffset, nCurrentCharacterOffset + 0x20);
                }

                OutputDebugString(strOutput);
                nCurrentCharacterOffset += 0x20;
                nPaletteCount++;
            }

            OutputDebugString(L"};\r\n\r\n");
        }

        // Now create the collection...
        strOutput.Format(L"const sDescTreeNode CVS2_A_%s_COLLECTION[] =\r\n{\r\n", szCodeDesc);
        OutputDebugString(strOutput);

        for (uint32_t iButtonIndex = 0; iButtonIndex < k_nCharacterColorCount; iButtonIndex++)
        {
            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)CVS2_A_%s_PALETTES_%s, ARRAYSIZE(CVS2_A_%s_PALETTES_%s) },\r\n",
                DEF_BUTTONLABEL_CVS2[iButtonIndex],
                szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex],
                szCodeDesc, DEF_BUTTONLABEL_CVS2[iButtonIndex]);
            OutputDebugString(strOutput);
        }

        OutputDebugString(L"};\r\n\r\n");
    }

    for (uint32_t iUnitCtr = 0; iUnitCtr < ARRAYSIZE(CVS2_CharacterOffsetArray); iUnitCtr++)
    {
        uint32_t nCurrentCharacterOffset = 0;
        uint16_t nPaletteCount = 0;
        CString strOutput;

        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName);


        strOutput.Format(L"    { \"%s\", DESC_NODETYPE_TREE, (void*)CVS2_A_%s_COLLECTION, ARRAYSIZE(CVS2_A_%s_COLLECTION) },\r\n", CVS2_CharacterOffsetArray[iUnitCtr].pszCharacterName,
                                        szCodeDesc, szCodeDesc);
        OutputDebugString(strOutput);
    }
}

void CGame_CVS2_A::WarnIfROMIsEncrypted(CFile* LoadedFile)
{
    enum class CVS2_KnownROMTypes
    {
        CVS2_GDL_Decrypted,
        CVS2_GDL_Encrypted,
        CVS2_Unsupported,
    };

    // Make sure we're looking at a decrypted version of the ROM: warn if not.
    uint16_t detectedROMVersion = static_cast<uint16_t>(CVS2_KnownROMTypes::CVS2_Unsupported);

    const std::vector<ROMRevisionLookupData> CVS2ROMs =
    {
        {
            static_cast<uint16_t>(CVS2_KnownROMTypes::CVS2_GDL_Encrypted),
            {   0x53e3, 0x5063, 0x9d03, 0x154b }
        },
        {
            static_cast<uint16_t>(CVS2_KnownROMTypes::CVS2_GDL_Decrypted),
            {   0x414e, 0x4d4f, 0x2049, 0x2020 }
        },
    };

    if (FindROMVersionFromByteSniff(LoadedFile, CVS2ROMs, detectedROMVersion))
    {
        CVS2_KnownROMTypes currentCVS2ROMType = static_cast<CVS2_KnownROMTypes>(detectedROMVersion);

        if (currentCVS2ROMType == CVS2_KnownROMTypes::CVS2_GDL_Encrypted)
        {
            CString strWarning;
            if (strWarning.LoadString(IDS_ERROR_ENCRYPTED))
            {
                MessageBox(g_appHWnd, strWarning, GetHost()->GetAppName(), MB_ICONSTOP);
            }
        }
    }
    else
    {
        OutputDebugString(L"\tThis is an unknown CvS2 ROM.\n");

        CString strMessage;
        if (strMessage.LoadString(IDS_ERROR_UNKNOWNROM))
        {
            MessageBox(g_appHWnd, strMessage.GetString(), GetHost()->GetAppName(), MB_ICONWARNING);
        }
    }

    return;
}

BOOL CGame_CVS2_A::LoadFile(CFile* LoadedFile, uint32_t nUnitId)
{
    WarnIfROMIsEncrypted(LoadedFile);

    return CGameClassByDir::LoadFile(LoadedFile, nUnitId);
}

void CGame_CVS2_S::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
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
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}
