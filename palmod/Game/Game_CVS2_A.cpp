#include "StdAfx.h"
#include "GameDef.h"
#include "Game_CVS2_A.h"
#include "..\PalMod.h"
#include "..\RegProc.h"

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
