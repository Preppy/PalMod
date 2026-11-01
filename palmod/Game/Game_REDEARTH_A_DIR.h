#pragma once
#include "Game_RedEarth_A.h"

class CGame_RedEarth_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"redearth-simm3.4", 0x200000 },
            { L"redearth-simm3.5", 0x200000 },
            { L"redearth-simm3.6", 0x200000 },
            { L"redearth-simm3.7", 0x200000 },

            { L"redearth-simm3.0", 0x200000 },
            { L"redearth-simm3.1", 0x200000 },
            { L"redearth-simm3.2", 0x200000 },
            { L"redearth-simm3.3", 0x200000 },

            { L"redearth-simm5.0", 0x200000 },
            { L"redearth-simm5.1", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Red Earth (CPS3 Rerip)",
        REDEARTH_A_DIR,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData,
        {},
        REDEARTH_A_UNITS_MONO_DIR,
        ARRAYSIZE(REDEARTH_A_UNITS_MONO_DIR),
        L"RedEarthSIMMe.txt",   // Extra filename
        5728,                   // Count of palettes listed in the header
        0x132600,               // Lowest known location used for palettes
    };

public:
    CGame_RedEarth_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
