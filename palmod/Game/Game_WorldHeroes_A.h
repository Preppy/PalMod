#pragma once
#include "GameClassByDir.h"
#include "WorldHeroes_A_DEF.h"

class CGame_WorldHeroes_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"053-epr.p1", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes (Neo-Geo ALM-005)", L"053-epr.p1", 0xD42E1E9A, 0 },
        { L"World Heroes (Neo-Geo ALH-005)", L"053-p1.p1", 0x95B574CB, 0 },
        { L"World Heroes (Neo-Geo Set 3)", L"053-p1_a.p1", 0xED29FDE2, 0 },        
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes (Neo-Geo)",
        WorldHeroes_A,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROES_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroes_A_UNITS,
        ARRAYSIZE(WorldHeroes_A_UNITS),
        L"WorldHeroesE.txt",    // Extra filename
        39,                     // Count of palettes listed in the header
        0x1100,                 // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroes_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};


class CGame_WorldHeroes_PS2 : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"053prg.bin", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes (PS2)", L"053prg.bin", 0x8B0291FD },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes (PS2)",
        WorldHeroes_PS2,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROES_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroes_A_UNITS,
        ARRAYSIZE(WorldHeroes_A_UNITS),
        L"WorldHeroesE.txt",    // Extra filename
        39,                     // Count of palettes listed in the header
        0x1100,                 // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroes_PS2(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
