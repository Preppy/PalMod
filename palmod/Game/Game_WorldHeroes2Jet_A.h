#pragma once
#include "GameClassByDir.h"
#include "WorldHeroes2Jet_A_DEF.h"

class CGame_WorldHeroes2Jet_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"064-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes 2 Jet (Neo-Geo)", L"064-p1.p1", 0x385A2E86, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes 2 Jet (Neo-Geo)",
        WorldHeroes2Jet_A,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROES2JET_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroes2Jet_A_UNITS,
        ARRAYSIZE(WorldHeroes2Jet_A_UNITS),
        L"WorldHeroesJet2E.txt",    // Extra filename
        145,                        // Count of palettes listed in the header
        0x101200,                   // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroes2Jet_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_WorldHeroes2Jet_PS2 : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"064prg.bin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes 2 Jet (PS2)", L"064prg.bin", 0xE2635176 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes 2 Jet (PS2)",
        WorldHeroes2Jet_PS2,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROES2JET_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroes2Jet_A_UNITS,
        ARRAYSIZE(WorldHeroes2Jet_A_UNITS),
        L"WorldHeroes2JetE.txt",    // Extra filename
        145,                        // Count of palettes listed in the header
        0x101200,                   // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroes2Jet_PS2(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
