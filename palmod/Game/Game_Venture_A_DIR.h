#pragma once
#include "GameClassByDir.h"
#include "VENTURE_A_DEF.h"

enum class VentureDirLoadingKey
{
    ROM31,
    ROM50,
};

class CGame_VENTURE_A_DIR : public CGameClassByDir
{
private:
    static VentureDirLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_31 =
    {
        {
            { L"jojo-simm3.4", 0x200000 },
            { L"jojo-simm3.5", 0x200000 },
            { L"jojo-simm3.6", 0x200000 },
            { L"jojo-simm3.7", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_50 =
    {
        {
            { L"jojo-simm5.0", 0x200000 },
            { L"jojo-simm5.1", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData_31
    {
        L"Jojo's Venture (Japan CPS3, 3.x: HUD Portraits)",
        VENTURE_A_DIR_31,
        IMGDAT_SECTION_JOJOS,
        VENTURE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_31,
        {},
        VENTURE_A_UNITS_31,
        ARRAYSIZE(VENTURE_A_UNITS_31),
        L"Venture31.txt",     // Extra filename
        46,                   // Count of palettes listed in the header
        0x640400,             // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_50
    {
        L"Jojo's Venture (Japan CPS3, 5.x: Characters)",
        VENTURE_A_DIR_50,
        IMGDAT_SECTION_JOJOS,
        VENTURE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_50,
        {},
        VENTURE_A_UNITS_50,
        ARRAYSIZE(VENTURE_A_UNITS_50),
        L"Venture50.txt",   // Extra filename
        193,                // Count of palettes listed in the header
        0x3b0000,           // Lowest known location used for palettes
    };

public:
    CGame_VENTURE_A_DIR(uint32_t nConfirmedROMSize, VentureDirLoadingKey nVentureModeToLoad);

    static sFileRule GetNextRule_31() { return GetNextRuleInternal(VentureDirLoadingKey::ROM31); };
    static sFileRule GetRule_31(uint32_t nRuleId) { return GetRuleInternal(VentureDirLoadingKey::ROM31, nRuleId); };
    static sFileRule GetNextRule_50() { return GetNextRuleInternal(VentureDirLoadingKey::ROM50); };
    static sFileRule GetRule_50(uint32_t nRuleId) { return GetRuleInternal(VentureDirLoadingKey::ROM50, nRuleId); };

    static sFileRule GetNextRuleInternal(VentureDirLoadingKey nGameMode);
    static sFileRule GetRuleInternal(VentureDirLoadingKey nGameMode, uint32_t nRuleId);

    sFileRule GetNextRuleForSIMMGame() override { return GetNextRuleInternal(m_eVersionToLoad); };
};
