#pragma once
#include "Game_SFIII2_A.h"

class CGame_SFIII2_A_DIR : 
    public CGame_SFIII2_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sfiii2-simm5.0", 0x200000 },
            { L"sfiii2-simm5.1", 0x200000 },
            { L"sfiii2-simm5.2", 0x200000 },
            { L"sfiii2-simm5.3", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFIII:2nd Impact (Arcade Rerip)",
        SFIII2_A_DIR,
        IMGDAT_SECTION_SF3,
        SFIII2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData,
        SFIII2_A_50_UNITS,
        ARRAYSIZE(SFIII2_A_50_UNITS),
        L"SFIII2e.txt",             // Extra filename
        846,                        // Count of palettes listed in the header
        0x398000,                   // Lowest known location used for palettes
    };

public:
    CGame_SFIII2_A_DIR(uint32_t nConfirmedROMSize) : CGame_SFIII2_A(nConfirmedROMSize, false) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
