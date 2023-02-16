#pragma once
#include "GameClassByDir.h"
#include "GalaxyFight_A_DEF.h"

class CGame_GalaxyFight_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"078-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Galaxy Fight: Universal Warriors (Neo-Geo)", L"078-p1.p1", 0x45906309, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Galaxy Fight: Universal Warriors (Neo-Geo)",
        GalaxyFight_A,
        IMGDAT_SECTION_NEOGEO,
        GalaxyFight_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        GalaxyFight_A_UNITS,
        ARRAYSIZE(GalaxyFight_A_UNITS),
        L"GalaxyFightE.txt",       // Extra filename
        628,                       // Count of palettes listed in the header
        0x114a9e,                  // Lowest known location used for palettes
    };

public:
    CGame_GalaxyFight_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
