#pragma once
#include "GameClassByDir.h"
#include "RBFF2_A_DEF.h"

class CGame_RBFF2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"240-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Real Bout Fatal Fury 2 (Neo-Geo Set 1)", L"240-p1.p1", 0x80e41205, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Set 1)", L"240-p1.bin", 0x80e41205, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Set 2)", L"rb2_p1.rom", 0xb6969780, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo set 2)", L"240-pg1.p1", 0xb6969780, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo set 2)", L"240-pg1.bin", 0xb6969780, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Korea)", L"140-p1k.p1", 0x965edee1, 0 },
        { L"Real Bout Fatal Fury 2 (Neo-Geo Korea)", L"140-p1k.bin", 0x965edee1, 0 },

        { L"Real Bout Fatal Fury 2 (Secret Character Hack)", L"240-p1fc.p1", 0xd01854fa, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Real Bout Fatal Fury 2 (Neo-Geo)",
        RBFF2_A,
        IMGDAT_SECTION_KOF,
        RBFF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        RBFF2_A_UNITS,
        ARRAYSIZE(RBFF2_A_UNITS),
        L"RBFF2E.txt",             // Extra filename
        958,                       // Count of palettes listed in the header
        0xd0000,                   // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_RBFF2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_RBFF2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"p1.bin", 0x500000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Real Bout Fatal Fury 2 (Steam)", L"p1.bin", 0xE9381358, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Real Bout Fatal Fury 2 (Steam)",
        RBFF2_S,
        IMGDAT_SECTION_KOF,
        RBFF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        RBFF2_A_UNITS,
        ARRAYSIZE(RBFF2_A_UNITS),
        L"RBFF2SE.txt",            // Extra filename
        958,                       // Count of palettes listed in the header
        0xd0000,                   // Lowest known location used for palettes
    };

public:
    CGame_RBFF2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
