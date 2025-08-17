#pragma once
#include "GameClassByDir.h"
#include "WorldHeroesPerfect_A_DEF.h"

class CGame_WorldHeroesPerfect_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"090-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"World Heroes Perfect (Neo-Geo)", L"090-p1.p1", 0xafaa4702, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"World Heroes Perfect (Neo-Geo)",
        WorldHeroesPerfect_A,
        IMGDAT_SECTION_NEOGEO,
        WORLDHEROESPERFECT_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WorldHeroesPerfect_A_UNITS,
        ARRAYSIZE(WorldHeroesPerfect_A_UNITS),
        L"WorldHeroesPerfectE.txt",     // Extra filename
        152,                            // Count of palettes listed in the header
        0x101000,                       // Lowest known location used for palettes
    };

public:
    CGame_WorldHeroesPerfect_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
