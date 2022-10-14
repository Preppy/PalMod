#include "StdAfx.h"
#include "Game_SF2CE_A.h"

CGame_SF2CE_A::SF2CELoadingKey CGame_SF2CE_A::m_eVersionToLoad = SF2CELoadingKey::ROM21;

void CGame_SF2CE_A::SetSpecialRuleForFileName(std::wstring strFileName)
{
    const std::map<std::wstring, SF2CELoadingKey> m_rgFileNameToVersion =
    {
        // these should be all lower case
        { L"s92_21a.6f", SF2CELoadingKey::ROM21 },
        { L"s92j_21a.6f", SF2CELoadingKey::ROM21 },

        // 22 shifts consistently across revisions
        { L"s92_22a.7f", SF2CELoadingKey::ROM22 },
        { L"s92_22b.7f", SF2CELoadingKey::ROM22 },
        { L"s92_22c.7f", SF2CELoadingKey::ROM22 },

        // these use two shifts, the second shift is for boxer and P2 colors at least
        { k_SF2CE_JapanROMName_RevA, SF2CELoadingKey::ROM22 },
        { k_SF2CE_JapanROMName_RevB, SF2CELoadingKey::ROM22 },
        { k_SF2CE_JapanROMName_RevC, SF2CELoadingKey::ROM22 },

        // 23
        { L"s92e_23b.8f", SF2CELoadingKey::ROM23 }, // ce - core
        { L"s92e_23a.8f", SF2CELoadingKey::ROM23 }, // ceea

        { L"s92u_23a.8f", SF2CELoadingKey::ROM23 }, // ceua
        { L"s92u_23b.8f", SF2CELoadingKey::ROM23 }, // ceub
        { L"s92u_23c.8f", SF2CELoadingKey::ROM23 }, // ceuc

        { L"s92t_23a.8f", SF2CELoadingKey::ROM23 }, // cet
        { L"s92j_23a.8f", SF2CELoadingKey::ROM23 }, // ceja
        { L"s92j_23b.8f", SF2CELoadingKey::ROM23 }, // cejb
        { L"s92j_23c.8f", SF2CELoadingKey::ROM23 }, // cejc
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
        m_eVersionToLoad = SF2CELoadingKey::ROM21;
    }

    return;
}

CGame_SF2CE_A::CGame_SF2CE_A(uint32_t nConfirmedROMSize)
{
    switch (m_eVersionToLoad)
    {
    case SF2CELoadingKey::ROM21:
    default:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM21);
        break;
    case SF2CELoadingKey::ROM22:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM22);
        break;
    case SF2CELoadingKey::ROM23:
        InitializeGame(nConfirmedROMSize, m_sCoreGameData_ROM23);
        break;
    }
}

sFileRule CGame_SF2CE_A::GetRule(uint32_t nRuleId)
{
    switch (m_eVersionToLoad)
    {
    case SF2CELoadingKey::ROM21:
    default:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM21);
    case SF2CELoadingKey::ROM22:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM22);
    case SF2CELoadingKey::ROM23:
        return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_ROM23);
    }
}

uint32_t CGame_SF2CE_A::GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs)
{
    static const sCRC32ValueSet knownROMs[] =
    {
        // 21 is the same across all versions
        { L"Street Fighter II' - Champion Edition", L"s92_21a.6f", 0x925a7877, 0 },
        { L"Street Fighter II' - Champion Edition (Japan 920308)", L"s92j_21a.6f", 0x925a7877, 0 },

        // 22 shifts consistently across revisions
        { L"Street Fighter II' - Champion Edition (920313)", L"s92_22a.7f", 0x99f1cca4, -0xc },
        { L"Street Fighter II' - Champion Edition (920513)", L"s92_22b.7f", 0x2bbe15ed, 0 },
        { L"Street Fighter II' - Champion Edition (920803)", L"s92_22c.7f", 0x5fd8630b, 0x8 },

        // these use two shifts, the second shift is for boxer and P2 colors at least
        { L"Street Fighter II' - Champion Edition (Japan 920313)", k_SF2CE_JapanROMName_RevA, 0xc4f64bcd, 0x1BDE },
        { L"Street Fighter II' - Champion Edition (Japan 920513)", k_SF2CE_JapanROMName_RevB, 0x2fbb3bfe, 0x1BF0 },
        { L"Street Fighter II' - Champion Edition (Japan 920803)", k_SF2CE_JapanROMName_RevC, 0x8c0b2ed6, 0x1BF8 },

        // 23
        { L"Street Fighter II' - Champion Edition (World 920313)", L"s92e_23b.8f", 0x0aaa1a3a, 0 }, // ce - core
        { L"Street Fighter II' - Champion Edition (World 920513)", L"s92e_23a.8f", 0x3f846b74, 0 }, // ceea

        { L"Street Fighter II' - Champion Edition (USA 920313)", L"s92u_23a.8f", 0xac44415b, 0 }, // ceua
        { L"Street Fighter II' - Champion Edition (USA 920513)", L"s92u_23b.8f", 0x996a3015, 0 }, // ceub
        { L"Street Fighter II' - Champion Edition (USA 920803)", L"s92u_23c.8f", 0x0a8b6aa2, 0 }, // ceuc

        { L"Street Fighter II' - Champion Edition (Taiwan 920313)", L"s92t_23a.8f", 0xd7c28ade, 0 }, // cet
        { L"Street Fighter II' - Champion Edition (Japan 920322)", L"s92j_23a.8f", 0x4f42bb5a, 0xA14 }, // ceja
        { L"Street Fighter II' - Champion Edition (Japan 920513)", L"s92j_23b.8f", 0x140876c5, 0xA14 }, // cejb
        { L"Street Fighter II' - Champion Edition (Japan 920803)", L"s92j_23c.8f", 0xf0120635, 0xA14 }, // cejc
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

#ifdef MAME_INFO
        ROM_START(sf2ce)    // 13/05/1992 (c) 1992 (World)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92e_23b.8f", 0x000000, 0x80000, CRC(0aaa1a3a) SHA1(774a2b52f7c1876c0e10d8d57a0850ad2d016cf6))
        ROM_LOAD16_WORD_SWAP("s92_22b.7f", 0x080000, 0x80000, CRC(2bbe15ed) SHA1(a8e2edef62fa99c5ef701b28bfb6bc42f3af183d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceea)  // 13/03/1992 (c) 1992 (World)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92e_23a.8f", 0x000000, 0x80000, CRC(3f846b74) SHA1(c8d7a01b626771870123f1663a01a81f9c8fe582))
        ROM_LOAD16_WORD_SWAP("s92_22a.7f", 0x080000, 0x80000, CRC(99f1cca4) SHA1(64111eba81d743fc3fd51d7a89cd0b2eefcc900d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceua) // 13/03/1992 (c) 1992 (USA)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92u_23a.8f", 0x000000, 0x80000, CRC(ac44415b) SHA1(218f8b1886eb72b8547127042b5ae47600e18944))
        ROM_LOAD16_WORD_SWAP("s92_22a.7f", 0x080000, 0x80000, CRC(99f1cca4) SHA1(64111eba81d743fc3fd51d7a89cd0b2eefcc900d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceub) // 13/05/1992 (c) 1992 (USA)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92u_23b.8f", 0x000000, 0x80000, CRC(996a3015) SHA1(fdf45da54b1c14478a60f2b86e37ffe32a98b135))
        ROM_LOAD16_WORD_SWAP("s92_22b.7f", 0x080000, 0x80000, CRC(2bbe15ed) SHA1(a8e2edef62fa99c5ef701b28bfb6bc42f3af183d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceuc) // 03/08/1992 (c) 1992 (USA)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92u_23c.8f", 0x000000, 0x80000, CRC(0a8b6aa2) SHA1(a19871271172119e1cf1ff47700bb1917b08514b))
        ROM_LOAD16_WORD_SWAP("s92_22c.7f", 0x080000, 0x80000, CRC(5fd8630b) SHA1(f0ef9c5ab91a4b421fb4b1747eef99c964c15de3))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2cet) // 13/03/1992 (c) 1992 (Taiwan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92t_23a.8f", 0x000000, 0x80000, CRC(d7c28ade) SHA1(4fe8201d8861f9ea9c62fd97b7396bc180a9f3ce))
        ROM_LOAD16_WORD_SWAP("s92_22a.7f", 0x080000, 0x80000, CRC(99f1cca4) SHA1(64111eba81d743fc3fd51d7a89cd0b2eefcc900d))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2ceja) // 22/03/1992 (c) 1992 (Japan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92j_23a.8f", 0x000000, 0x80000, CRC(4f42bb5a) SHA1(59d0587c554e06ea45d4092ea4299ff086509d4b))
        ROM_LOAD16_WORD_SWAP("s92j_22a.7f", 0x080000, 0x80000, CRC(c4f64bcd) SHA1(262c0419bf727da80c2ac52b877a19276d9aac3c))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))

        ROM_START(sf2cejb) // 13/05/1992 (c) 1992 (Japan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92j_23b.8f", 0x000000, 0x80000, CRC(140876c5) SHA1(304630e6d8bae9f8d29090e05f7e013c7dafe9cc))
        ROM_LOAD16_WORD_SWAP("s92j_22b.7f", 0x080000, 0x80000, CRC(2fbb3bfe) SHA1(e364564a12022730c2c0d0e8fd435e2c30ef9410))
        ROM_LOAD16_WORD_SWAP("s92_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))  // could be s92j_21a.6f

        ROM_START(sf2cejc) // 03/08/1992 (c) 1992 (Japan)
        ROM_REGION(CODE_SIZE, "maincpu", 0)      /* 68000 code */
        ROM_LOAD16_WORD_SWAP("s92j_23c.8f", 0x000000, 0x80000, CRC(f0120635) SHA1(5e4a9a4b0f65c6139e76ee4ffa02b9db245b1858))
        ROM_LOAD16_WORD_SWAP("s92j_22c.7f", 0x080000, 0x80000, CRC(8c0b2ed6) SHA1(408db039b4dad72b41458723575ed5352b71e10b))
        ROM_LOAD16_WORD_SWAP("s92j_21a.6f", 0x100000, 0x80000, CRC(925a7877) SHA1(1960dca35f0ca6f2b399a9fccfbc0132ac6425d1))  // == s92_21a.6f
#endif

    return ARRAYSIZE(knownROMs);
}

void CGame_SF2CE_A::LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId)
{
    if (nUnitId != m_nExtraUnit)
    {
        int cbPaletteSizeOnDisc = 0;
        const sGame_PaletteDataset* paletteData = GetSpecificPalette(nUnitId, nPalId);

        cbPaletteSizeOnDisc = (int)max(0, (paletteData->nPaletteOffsetEnd - paletteData->nPaletteOffset));

        m_nCurrentPaletteROMLocation = paletteData->nPaletteOffset;

        m_nCurrentPaletteSizeInColors = cbPaletteSizeOnDisc / m_nSizeOfColorsInBytes;
        m_pszCurrentPaletteName = paletteData->szPaletteName;

        // Adjust for ROM-specific variant locations
        if (m_pCRC32SpecificData)
        {
            // There's a different shift in Japanese 22 ROMs above this location.
            bool isLocationLow = (m_nCurrentPaletteROMLocation < 0x19000);
            if (isLocationLow && (wcscmp(m_pCRC32SpecificData->szROMFileName, k_SF2CE_JapanROMName_RevA) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b3c;
            }
            else if (isLocationLow && (wcscmp(m_pCRC32SpecificData->szROMFileName, k_SF2CE_JapanROMName_RevB) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b4e;
            }
            else if (isLocationLow && (wcscmp(m_pCRC32SpecificData->szROMFileName, k_SF2CE_JapanROMName_RevC) == 0))
            {
                m_nCurrentPaletteROMLocation += 0x1b56;
            }
            else
            {
                m_nCurrentPaletteROMLocation += m_pCRC32SpecificData->nROMSpecificOffset;
            }
        }
    }
    else // SF2CE_A_EXTRALOC
    {
        // This is where we handle all the palettes added in via Extra.
        stExtraDef* pCurrDef = &m_prgCurrentExtrasLoaded[GetExtraLoc(nUnitId) + nPalId];

        m_nCurrentPaletteROMLocation = pCurrDef->uOffset;
        m_nCurrentPaletteSizeInColors = (pCurrDef->cbPaletteSize / m_nSizeOfColorsInBytes);
        m_pszCurrentPaletteName = pCurrDef->szDesc;
    }
}
