#pragma once
#include "GameClassByDir.h"
#include "WorldHeroes2_A_DEF.h"

class CGame_WorldHeroes2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"057-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes 2 (Neo-Geo ALM-006 ~ ALH-006)", L"057-p1.p1", 0x65A891D9, 0 },
        { L"World Heroes 2 (Neo-Geo ALH-006)", L"057-pg1.p1", 0xCDE9AFF5, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes 2 (Neo-Geo)",
        WorldHeroes2_A,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROES2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroes2_A_UNITS,
        ARRAYSIZE(WorldHeroes2_A_UNITS),
        L"WorldHeroes2E.txt",   // Extra filename
        89,                     // Count of palettes listed in the header
        0x101000,               // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroes2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_WorldHeroes2_PS2 : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"057prg.bin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes 2 (PS2)", L"057prg.bin", 0x8B0291FD, -0x100000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes 2 (PS2)",
        WorldHeroes2_PS2,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROES2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroes2_A_UNITS,
        ARRAYSIZE(WorldHeroes2_A_UNITS),
        L"WorldHeroes2E.txt",   // Extra filename
        89,                     // Count of palettes listed in the header
        0x101000,               // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroes2_PS2(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
