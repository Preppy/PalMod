#pragma once
#include "Game_RedEarth_A.h"

class CGame_RedEarth_A_DIR : public CGameClassByDir
{
private:
    static RedEarthLoadingKey m_eROMToLoad;

    static inline const sDirectoryLoadingData RedEarth_A_FileLoadingData_3dot0 =
    {
        {
            { L"redearth-simm3.0", 0x200000 },
            { L"redearth-simm3.1", 0x200000 },
            { L"redearth-simm3.2", 0x200000 },
            { L"redearth-simm3.3", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData RedEarth_A_FileLoadingData_3dot1 =
    {
        {
            { L"redearth-simm3.4", 0x200000 },
            { L"redearth-simm3.5", 0x200000 },
            { L"redearth-simm3.6", 0x200000 },
            { L"redearth-simm3.7", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData RedEarth_A_FileLoadingData_5dot0 =
    {
        {
            { L"redearth-simm5.0", 0x200000 },
            { L"redearth-simm5.1", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData_3dot0
    {
        L"Red Earth: Stages (CPS3 3.x Rerip)",
        REDEARTH_A_DIR_30,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        RedEarth_A_FileLoadingData_3dot0,
        REDEARTH_A_UNITS_30,
        ARRAYSIZE(REDEARTH_A_UNITS_30),
        L"RedEarth30e.txt",             // Extra filename
        REDEARTH_30_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_30_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_3dot1
    {
        L"Red Earth: Characters (CPS3 3.x Rerip)",
        REDEARTH_A_DIR_31,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        RedEarth_A_FileLoadingData_3dot1,
        REDEARTH_A_UNITS_31,
        ARRAYSIZE(REDEARTH_A_UNITS_31),
        L"RedEarthE.txt",               // Extra filename
        REDEARTH_31_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_31_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_5dot0
    {
        L"Red Earth: Next (CPS3 5.x Rerip)",
        REDEARTH_A_DIR_50,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        RedEarth_A_FileLoadingData_5dot0,
        REDEARTH_A_UNITS_50,
        ARRAYSIZE(REDEARTH_A_UNITS_50),
        L"RedEarth50e.txt",             // Extra filename
        REDEARTH_50_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_50_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

public:
    CGame_RedEarth_A_DIR(uint32_t nConfirmedROMSize, RedEarthLoadingKey nRedEarthModeToLoad);

    static sFileRule GetNextRule_30() { return GetNextRuleInternal(RedEarthLoadingKey::RedEarthROM30); };
    static sFileRule GetRule_30(uint32_t nRuleId) { return GetRuleInternal(RedEarthLoadingKey::RedEarthROM30, nRuleId); };
    static sFileRule GetNextRule_31() { return GetNextRuleInternal(RedEarthLoadingKey::RedEarthROM31); };
    static sFileRule GetRule_31(uint32_t nRuleId) { return GetRuleInternal(RedEarthLoadingKey::RedEarthROM31, nRuleId); };
    static sFileRule GetNextRule_50() { return GetNextRuleInternal(RedEarthLoadingKey::RedEarthROM50); };
    static sFileRule GetRule_50(uint32_t nRuleId) { return GetRuleInternal(RedEarthLoadingKey::RedEarthROM50, nRuleId); };

    static sFileRule GetNextRuleInternal(RedEarthLoadingKey nGameMode);
    static sFileRule GetRuleInternal(RedEarthLoadingKey nGameMode, uint32_t nRuleId);

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRuleInternal(m_eROMToLoad); };
};
