#pragma once
#include "Game_SFIII1_A.h"

class CGame_SFIII1_A_DIR : 
    public CGame_SFIII1_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sfiii-simm5.0", 0x200000 },
            { L"sfiii-simm5.1", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFIII:New Generation (Arcade Rerip)",
        SFIII1_A_DIR,
        IMGDAT_SECTION_SF3,
        SFIII1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL6,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData,
        {},
        SFIII1_A_50_UNITS,
        ARRAYSIZE(SFIII1_A_50_UNITS),
        L"SFIII1e.txt",             // Extra filename
        631,                        // Count of palettes listed in the header
        0x3b0000,                   // Lowest known location used for palettes
    };

public:
    CGame_SFIII1_A_DIR(uint32_t nConfirmedROMSize) : CGame_SFIII1_A(nConfirmedROMSize, false) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
