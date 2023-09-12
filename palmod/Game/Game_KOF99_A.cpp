#include "StdAfx.h"
#include "Game_KOF99_A.h"

CGame_KOF99_A::KOF99LoadingKey CGame_KOF99_A::m_eVersionToLoad = KOF99LoadingKey::ROM02;

void CGame_KOF99_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, KOF99LoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"kof99ae_p2.bin", KOF99LoadingKey::ROM02 },
        { L"152-p2.bin", KOF99LoadingKey::ROM02 },
        { L"251-p2p.bin", KOF99LoadingKey::ROM02 },
        { L"251-p2p.p2", KOF99LoadingKey::ROM02 },
        { L"proto_251-p2.bin", KOF99LoadingKey::ROM02 },
        { L"proto_251-p2.p2", KOF99LoadingKey::ROM02 },
        { L"kf99eur.p2", KOF99LoadingKey::ROM02 },
        { L"kof99ae_p3.bin", KOF99LoadingKey::ROM03 },
    };

    CString strFileNameLowerCase = strFileName.c_str();
    strFileNameLowerCase.MakeLower();

    auto result = m_rgFileNameToVersion.find(strFileNameLowerCase.GetString());

    if (result != m_rgFileNameToVersion.end())
    {
        m_eVersionToLoad = result->second;
    }
    else
    {
        m_eVersionToLoad = KOF99LoadingKey::ROM02;
    }

    return;
}

CGame_KOF99_A::CGame_KOF99_A(uint32_t nConfirmedROMSize)
{
    InitializeGame(nConfirmedROMSize, (m_eVersionToLoad == KOF99LoadingKey::ROM02) ? m_sCoreGameData_ROM02 : m_sCoreGameData_ROM03);
}

sFileRule CGame_KOF99_A::GetRule(uint32_t nRuleId)
{
    return CGameClassByDir::GetRule(nRuleId, (m_eVersionToLoad == KOF99LoadingKey::ROM02) ? m_sFileLoadingData_ROM02 : m_sFileLoadingData_ROM03);
}

struct sKOF99AE_A_PaletteData
{
    LPCWSTR pszCharacterName;
    uint32_t nROMOffset = 0;
    uint32_t nIgnored = 0; // I don't want to reparse the data I got, so just ignoring this
    LPCWSTR pszImageSet = nullptr;
    bool fIsMultipart = false;
    bool fUseUniqueExtraImages = false;
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterPalettes[] =
{
    { L"K'",                0x2d97f0, 0x2d99f0, L"indexKOF99Sprites_K" },
    { L"Maxima",            0x2d9bf0, 0x2d9df0, L"indexKOF99Sprites_Maxima" },
    { L"Benimaru",          0x2d9ff0, 0x2da1f0, L"indexKOF99Sprites_Benimaru", false, true },
    { L"Shingo",            0x2da3f0, 0x2da5f0, L"indexKOF99Sprites_Shingo", false, true },
    { L"Terry",             0x2da7f0, 0x2da9f0, L"indexKOF99Sprites_Terry" },
    { L"Andy",              0x2dabf0, 0x2dadf0, L"indexKOF99Sprites_Andy" },
    { L"Joe",               0x2daff0, 0x2db1f0, L"indexKOF99Sprites_Joe", false, true },
    { L"Mai",               0x2db3f0, 0x2db5f0, L"indexKOF99Sprites_Mai" },
    { L"Ryo",               0x2db7f0, 0x2db9f0, L"indexKOF99Sprites_Ryo" },
    { L"Robert",            0x2dbbf0, 0x2dbdf0, L"indexKOF99Sprites_Robert" },
    { L"Yuri",              0x2dbff0, 0x2dc1f0, L"indexKOF99Sprites_Yuri" },
    { L"Takuma",            0x2dc3f0, 0x2dc5f0, L"indexKOF99Sprites_Takuma" },
    { L"Leona",             0x2dc7f0, 0x2dc9f0, L"indexKOF99Sprites_Leona" },
    { L"Ralf",              0x2dcbf0, 0x2dcdf0, L"indexKOF99Sprites_Ralf" },
    { L"Clark",             0x2dcff0, 0x2dd1f0, L"indexKOF99Sprites_Clark" },
    { L"Whip",              0x2dd3f0, 0x2dd5f0, L"indexKOF99Sprites_Whip" },
    { L"Athena",            0x2dd7f0, 0x2dd9f0, L"indexKOF99Sprites_Athena" },
    { L"Kensou",            0x2ddbf0, 0x2dddf0, L"indexKOF99Sprites_Kensou", false, true },
    { L"Chin",              0x2ddff0, 0x2de1f0, L"indexKOF99Sprites_Chin", false, true },
    { L"Bao",               0x2de3f0, 0x2de5f0, L"indexKOF99Sprites_Bao" },
    { L"King",              0x2de7f0, 0x2de9f0, L"indexKOF99Sprites_King", false, true },
    { L"Blue Mary",         0x2debf0, 0x2dedf0, L"indexKOF99Sprites_BlueMary", false, true },
    { L"Kasumi",            0x2deff0, 0x2df1f0, L"indexKOF99Sprites_Kasumi", false, true },
    { L"Xiangfei",          0x2df3f0, 0x2df5f0, L"indexKOF99Sprites_Xiangfei", false, true },
    { L"Kim",               0x2df7f0, 0x2df9f0, L"indexKOF99Sprites_Kim" },
    { L"Chang",             0x2dfbf0, 0x2dfdf0, L"indexKOF99Sprites_Chang", true },
    { L"Choi",              0x2dfff0, 0x2e01f0, L"indexKOF99Sprites_Choi" },
    { L"Jhun",              0x2e03f0, 0x2e05f0, L"indexKOF99Sprites_Jhun", true },
    { L"Kyo",               0x2e07f0, 0x2e09f0, L"indexKOF99Sprites_Kyo", false, true },
    { L"Kyo-1",             0x2e0bf0, 0x2e0df0, L"indexKOF99Sprites_Kyo1", false, true },
    { L"Iori",              0x2e0ff0, 0x2e11f0, L"indexKOF99Sprites_Iori" },
    { L"Jacket Krizalid",   0x2e13f0, 0x2e15f0, L"indexKOF99Sprites_JacketKrizalid", true },
    { L"Boss Krizalid",     0x2e17f0, 0x2e19f0, L"indexKOF99Sprites_BossKrizalid", false, true },
    { L"Kyo-2",             0x2fb1f0, 0x2fb3f0, L"indexKOF99Sprites_Kyo2", false, true },
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterWinPortraits[] =
{
    { L"K' Win Portrait", 0x2e5df0, 0x2e5f70 },
    { L"Maxima Win Portrait", 0x2e60f0, 0x2e6270 },
    { L"Benimaru Win Portrait", 0x2e63f0, 0x2e6570 },
    { L"Shingo Win Portrait", 0x2e66f0, 0x2e6870 },
    { L"Terry Win Portrait", 0x2e69f0, 0x2e6b70 },
    { L"Andy Win Portrait", 0x2e6cf0, 0x2e6e70 },
    { L"Joe Win Portrait", 0x2e6ff0, 0x2e7170 },
    { L"Mai Win Portrait", 0x2e72f0, 0x2e7470 },
    { L"Ryo Win Portrait", 0x2e75f0, 0x2e7770 },
    { L"Robert Win Portrait", 0x2e78f0, 0x2e7a70 },
    { L"Yuri Win Portrait", 0x2e7bf0, 0x2e7d70 },
    { L"Takuma Win Portrait", 0x2e7ef0, 0x2e8070 },
    { L"Leona Win Portrait", 0x2e81f0, 0x2e8370 },
    { L"Ralf Win Portrait", 0x2e84f0, 0x2e8670 },
    { L"Clark Win Portrait", 0x2e87f0, 0x2e8970 },
    { L"Whip Win Portrait", 0x2e8af0, 0x2e8c70 },
    { L"Athena Win Portrait", 0x2e8df0, 0x2e8f70 },
    { L"Kensou Win Portrait", 0x2e90f0, 0x2e9270 },
    { L"Chin Win Portrait", 0x2e93f0, 0x2e9570 },
    { L"Bao Win Portrait", 0x2e96f0, 0x2e9870 },
    { L"King Win Portrait", 0x2e99f0, 0x2e9b70 },
    { L"Blue Mary Win Portrait", 0x2e9cf0, 0x2e9e70 },
    { L"Kasumi Win Portrait", 0x2e9ff0, 0x2ea170 },
    { L"Xiangfei Win Portrait", 0x2ea2f0, 0x2ea470 },
    { L"Kim Win Portrait", 0x2ea5f0, 0x2ea770 },
    { L"Chang Win Portrait", 0x2ea8f0, 0x2eaa70 },
    { L"Choi Win Portrait", 0x2eabf0, 0x2ead70 },
    { L"Jhun Win Portrait", 0x2eaef0, 0x2eb070 },
    { L"Kyo Win Portrait", 0x2eb1f0, 0x2eb370 },
    { L"Kyo-1 Win Portrait", 0x2eb4f0, 0x2eb670 },
    { L"Iori Win Portrait", 0x2eb7f0, 0x2eb970 },
    { L"Jacket Krizalid Win Portrait", 0x2ebaf0, 0x2ebc70 },
    { L"Boss Krizalid Win Portrait", 0x2ebdf0, 0x2ebf70 },
    { L"Kyo-2 Win Portrait", 0x2fb7f0, 0x2fb870 },
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterStrikerPortraits[] =
{
    { L"K' Striker Portrait", 0x2f9bf0, 0x2f9c10 },
    { L"Maxima Striker Portrait", 0x2f9c30, 0x2f9c50 },
    { L"Benimaru Striker Portrait", 0x2f9c70, 0x2f9c90 },
    { L"Shingo Striker Portrait", 0x2f9cb0, 0x2f9cd0 },
    { L"Terry Striker Portrait", 0x2f9cf0, 0x2f9d10 },
    { L"Andy Striker Portrait", 0x2f9d30, 0x2f9d50 },
    { L"Joe Striker Portrait", 0x2f9d70, 0x2f9d90 },
    { L"Mai Striker Portrait", 0x2f9db0, 0x2f9dd0 },
    { L"Ryo Striker Portrait", 0x2f9df0, 0x2f9e10 },
    { L"Robert Striker Portrait", 0x2f9e30, 0x2f9e50 },
    { L"Yuri Striker Portrait", 0x2f9e70, 0x2f9e90 },
    { L"Takuma Striker Portrait", 0x2f9eb0, 0x2f9ed0 },
    { L"Leona Striker Portrait", 0x2f9ef0, 0x2f9f10 },
    { L"Ralf Striker Portrait", 0x2f9f30, 0x2f9f50 },
    { L"Clark Striker Portrait", 0x2f9f70, 0x2f9f90 },
    { L"Whip Striker Portrait", 0x2f9fb0, 0x2f9fd0 },
    { L"Athena Striker Portrait", 0x2f9ff0, 0x2fa010 },
    { L"Kensou Striker Portrait", 0x2fa030, 0x2fa050 },
    { L"Chin Striker Portrait", 0x2fa070, 0x2fa090 },
    { L"Bao Striker Portrait", 0x2fa0b0, 0x2fa0d0 },
    { L"King Striker Portrait", 0x2fa0f0, 0x2fa110 },
    { L"Blue Mary Striker Portrait", 0x2fa130, 0x2fa150 },
    { L"Kasumi Striker Portrait", 0x2fa170, 0x2fa190 },
    { L"Xiangfei Striker Portrait", 0x2fa1b0, 0x2fa1d0 },
    { L"Kim Striker Portrait", 0x2fa1f0, 0x2fa210 },
    { L"Chang Striker Portrait", 0x2fa230, 0x2fa250 },
    { L"Choi Striker Portrait", 0x2fa270, 0x2fa290 },
    { L"Jhun Striker Portrait", 0x2fa2b0, 0x2fa2d0 },
    { L"Kyo Striker Portrait", 0x2fa2f0, 0x2fa310 },
    { L"Kyo-1 Striker Portrait", 0x2fa330, 0x2fa350 },
    { L"Iori Striker Portrait", 0x2fa370, 0x2fa390 },
    { L"Jacket Krizalid Striker Portrait", 0x2fa3b0, 0x2fa3d0 },
    { L"Boss Krizalid Striker Portrait", 0x2fa3f0, 0x2fa410 },
    { L"Kyo-2 Striker Portrait", 0x2fbaf0, 0x2fbb10 },
};

sKOF99AE_A_PaletteData KOF99AE_A_CharacterEffectPalettes[] =
{
    { L"K' Extras", 0x2e1bf0, 0x2e1cf0 },
    { L"Maxima Extras", 0x2e1df0, 0x2e1ef0 },
    { L"Benimaru Extras", 0x2e1ff0, 0x2e20f0 },
    { nullptr }, // empty: Shingo
    { L"Terry Extras", 0x2e23f0, 0x2e24f0 },
    { L"Andy Extras", 0x2e25f0, 0x2e26f0 },
    { L"Joe Extras", 0x2e27f0, 0x2e28f0 },
    { L"Mai Extras", 0x2e29f0, 0x2e2af0 },
    { L"Ryo Extras", 0x2e2bf0, 0x2e2cf0 },
    { L"Robert Extras", 0x2e2df0, 0x2e2ef0 },
    { L"Yuri Extras", 0x2e2ff0, 0x2e30f0 },
    { L"Takuma Extras", 0x2e31f0, 0x2e32f0 },
    { L"Leona Extras", 0x2e33f0, 0x2e34f0 },
    { nullptr }, // empty: Ralf
    { nullptr }, // empty: Clark
    { L"Whip Extras", 0x2e39f0, 0x2e3af0 },
    { L"Athena Extras", 0x2e3bf0, 0x2e3cf0 },
    { L"Kensou Extras", 0x2e3df0, 0x2e3ef0 },
    { L"Chin Extras", 0x2e3ff0, 0x2e40f0 },
    { L"Bao Extras", 0x2e41f0, 0x2e42f0 },
    { L"King Extras", 0x2e43f0, 0x2e44f0 },
    { L"Blue Mary Extras", 0x2e45f0, 0x2e46f0 },
    { L"Kasumi Extras", 0x2e47f0, 0x2e48f0 },
    { L"Xiangfei Extras", 0x2e49f0, 0x2e4af0 },
    { nullptr }, // empty: Kim
    { L"Chang Extras", 0x2e4df0, 0x2e4ef0 },
    { L"Choi Extras", 0x2e4ff0, 0x2e50f0 },
    { L"Jhun Extras", 0x2e51f0, 0x2e52f0 },
    { L"Kyo Extras", 0x2e53f0, 0x2e54f0 },
    { L"Kyo-1 Extras", 0x2e55f0, 0x2e56f0 },
    { L"Iori Extras", 0x2e57f0, 0x2e58f0 },
    { L"Jacket Krizalid Extras", 0x2e59f0, 0x2e5af0 },
    { L"Boss Krizalid Extras", 0x2e5bf0, 0x2e5cf0 },
    { L"Kyo-2 Extras", 0x2fb5f0, 0x2fb6f0 },
};

void CGame_KOF99_A::DumpPaletteHeaders(int nHeaderSetToDump)
{
    CString strOutput;
    uint16_t nColorOptionsPerCharacter = 2;
    constexpr uint32_t KOF99AE_PALETTE_LENGTH = 0x20;
    const uint16_t nCountStatusEffects = 16;
    std::vector<LPCWSTR> ppszButtonLabels;

    if (nHeaderSetToDump == 2)
    {
        nColorOptionsPerCharacter = 2;
        ppszButtonLabels = DEF_BUTTONLABEL_2_AB;
    }
    else
    {
        nColorOptionsPerCharacter = 4;
        ppszButtonLabels = DEF_BUTTONLABEL_KOF99AE_P3;
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF99AE_A_CharacterPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName);

        for (uint16_t nCharColorIndex = 0; nCharColorIndex < nColorOptionsPerCharacter; nCharColorIndex++)
        {
            const uint16_t nPaletteIterationForColor = nCharColorIndex % 2;
            int nShiftForP3FirstColorSet = 0;
            
            if ((nHeaderSetToDump == 3) && (nCharColorIndex < 2))
            {
                // C and D are 0x100000 before AC and BD in 3
                nShiftForP3FirstColorSet  = -0x100000;
            }

            strOutput.Format(L"const sGame_PaletteDataset KOF99AE_A_%s_%s_PALETTES[] = \r\n{\r\n", szCodeDesc, ppszButtonLabels[nCharColorIndex]);
            OutputDebugString(strOutput);

            struct s99AEPaletteData
            {
                LPCWSTR pszMoveName;
                int nPaletteIndex = -1;
                bool fIsPairable = false;
                int nPairedPaletteIndex = 0;
            };

            const s99AEPaletteData rgKOF99AEPaletteNames[] =
            {
                { L"Main",                  0, true, 0 },
                { L"Extra 1",               0, true, 1 },
                { L"Extra 2",               0, false },
                { L"Electric Palette",      0, true, 0 },
                { L"Extra 3",               0, true, 1 },
                { L"Counter Mode Flash",    0, true, 0 },
                { L"Counter Extra 1",       0, true, 1 },
                { L"Counter Extra 2",       0, false },
                { L"Armor Mode Flash",      0, true, 0 },
                { L"Armor Mode Extra 1",    0, true, 1 },
                { L"Armor Mode Extra 2",    0, false },
                { L"Super Trail Palette",   0, true, 0 },
                { L"Extra 4",               0, true, 1 },
                { L"Extra 5",               0, false },
                { L"Lifebar Portrait",      0x32, false },
                { L"Character Portrait",    0x31, false },
            };

            for (uint16_t nPaletteIndex = 0; nPaletteIndex < ARRAYSIZE(rgKOF99AEPaletteNames); nPaletteIndex++)
            {
                uint32_t nCurrentOffset = KOF99AE_A_CharacterPalettes[nCharIndex].nROMOffset + (nPaletteIndex * KOF99AE_PALETTE_LENGTH) + (nPaletteIterationForColor * 0x200) + nShiftForP3FirstColorSet;

                strOutput.Format(L"    { L\"%s\", 0x%x, 0x%x", rgKOF99AEPaletteNames[nPaletteIndex].pszMoveName, nCurrentOffset, nCurrentOffset + KOF99AE_PALETTE_LENGTH );
                OutputDebugString(strOutput);

                if (KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet && (rgKOF99AEPaletteNames[nPaletteIndex].nPaletteIndex != -1))
                {
                    if (KOF99AE_A_CharacterPalettes[nCharIndex].fIsMultipart && rgKOF99AEPaletteNames[nPaletteIndex].fIsPairable)
                    {
                        strOutput.Format(L", %s, 0x%02x%s", KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet, rgKOF99AEPaletteNames[nPaletteIndex].nPairedPaletteIndex,
                                                            (rgKOF99AEPaletteNames[nPaletteIndex].nPairedPaletteIndex == 0) ? L", &pairNext" : L"");
                    }
                    else
                    {
                        if (((nPaletteIndex == 1) || (nPaletteIndex == 2)) && KOF99AE_A_CharacterPalettes[nCharIndex].fUseUniqueExtraImages)
                        {
                            strOutput.Format(L", %s, 0x%02x", KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet, nPaletteIndex);
                        }
                        else
                        {
                            // normal output
                            strOutput.Format(L", %s, 0x%02x", KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet, rgKOF99AEPaletteNames[nPaletteIndex].nPaletteIndex);
                        }
                    }
                    OutputDebugString(strOutput);
                }                

                OutputDebugString(L" },\r\n");
            }

            strOutput.Format(L"    { L\"Striker Portrait\", 0x%x, 0x%x, %s, 0x33 },\r\n", KOF99AE_A_CharacterStrikerPortraits[nCharIndex].nROMOffset + (KOF99AE_PALETTE_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                                KOF99AE_A_CharacterStrikerPortraits[nCharIndex].nROMOffset + KOF99AE_PALETTE_LENGTH + (KOF99AE_PALETTE_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                                KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet);
            OutputDebugString(strOutput);

            const uint32_t KOF99AE_PORTRAIT_LENGTH = 0x180;
            strOutput.Format(L"    { L\"Win Portrait\", 0x%x, 0x%x, %s, 0x30 },\r\n", KOF99AE_A_CharacterWinPortraits[nCharIndex].nROMOffset + (KOF99AE_PORTRAIT_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                            KOF99AE_A_CharacterWinPortraits[nCharIndex].nROMOffset + KOF99AE_PORTRAIT_LENGTH + (KOF99AE_PORTRAIT_LENGTH * nPaletteIterationForColor) + nShiftForP3FirstColorSet,
                                                                            KOF99AE_A_CharacterPalettes[nCharIndex].pszImageSet);
            OutputDebugString(strOutput);

            OutputDebugString(L"};\r\n\r\n");
        }

        if ((nHeaderSetToDump == 3) &&  // Core Effects are only in 2.  There's an unused copy in 3
            (KOF99AE_A_CharacterEffectPalettes[nCharIndex].pszCharacterName != nullptr))
        {
            strOutput.Format(L"const sGame_PaletteDataset KOF99AE_A_%s_EFFECT_PALETTES[] = \r\n{\r\n", szCodeDesc);
            OutputDebugString(strOutput);

            for (uint16_t nPaletteIndex = 0; nPaletteIndex < 8; nPaletteIndex++)
            {
                uint32_t nCurrentOffset = KOF99AE_A_CharacterEffectPalettes[nCharIndex].nROMOffset + (nPaletteIndex * KOF99AE_PALETTE_LENGTH);

                strOutput.Format(L"    { L\"Effect %u\", 0x%x, 0x%x },\r\n", nPaletteIndex, nCurrentOffset, nCurrentOffset + KOF99AE_PALETTE_LENGTH);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }

    for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF99AE_A_CharacterPalettes); nCharIndex++)
    {
        wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
        StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName);

        strOutput.Format(L"const sDescTreeNode KOF99AE_A_P%u_%s_COLLECTION[] = \r\n{\r\n", nHeaderSetToDump, szCodeDesc);
        OutputDebugString(strOutput);

        for (uint16_t nColorIndex = 0; nColorIndex < nColorOptionsPerCharacter; nColorIndex++)
        {
            wchar_t szColorOptionCodeDesc[MAX_DESCRIPTION_LENGTH];
            StruprRemoveNonASCII(szColorOptionCodeDesc, ARRAYSIZE(szColorOptionCodeDesc), ppszButtonLabels[nColorIndex]);

            strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF99AE_A_%s_%s_PALETTES, ARRAYSIZE(KOF99AE_A_%s_%s_PALETTES) },\r\n", ppszButtonLabels[nColorIndex], szCodeDesc, szColorOptionCodeDesc, szCodeDesc, szColorOptionCodeDesc);
            OutputDebugString(strOutput);
        }

        if ((nHeaderSetToDump == 2) &&  // Effects are only in 2: there's an unused copy in 3
            (KOF99AE_A_CharacterEffectPalettes[nCharIndex].pszCharacterName != nullptr))
        {
            strOutput.Format(L"    { L\"Effects\", DESC_NODETYPE_TREE, (void*)KOF99AE_A_%s_EFFECT_PALETTES, ARRAYSIZE(KOF99AE_A_%s_EFFECT_PALETTES) },\r\n", szCodeDesc, szCodeDesc);
            OutputDebugString(strOutput);
        }
        
        OutputDebugString(L"};\r\n\r\n");
    }

    if (nHeaderSetToDump == 3) // only output on 3 since effects for now
    {
        for (int iPass = 2; iPass < 4; iPass++)
        {
            strOutput.Format(L"const sDescTreeNode KOF99AE_A_P%u_UNITS[] = \r\n{\r\n", iPass);
            OutputDebugString(strOutput);

            for (uint16_t nCharIndex = 0; nCharIndex < ARRAYSIZE(KOF99AE_A_CharacterPalettes); nCharIndex++)
            {
                wchar_t szCodeDesc[MAX_DESCRIPTION_LENGTH];
                StruprRemoveNonASCII(szCodeDesc, ARRAYSIZE(szCodeDesc), KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName);

                strOutput.Format(L"    { L\"%s\", DESC_NODETYPE_TREE, (void*)KOF99AE_A_P%u_%s_COLLECTION, ARRAYSIZE(KOF99AE_A_P%u_%s_COLLECTION) },\r\n", KOF99AE_A_CharacterPalettes[nCharIndex].pszCharacterName, iPass, szCodeDesc, iPass, szCodeDesc);
                OutputDebugString(strOutput);
            }

            OutputDebugString(L"};\r\n\r\n");
        }
    }
}
