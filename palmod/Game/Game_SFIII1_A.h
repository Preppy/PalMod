#pragma once
#include "GameClassByDir.h"
#include "SFIII1_A_DEF.h"

class CGame_SFIII1_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"50", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFIII:NG (CPS3 Arcade)",
        SFIII1_A,
        IMGDAT_SECTION_SF3,
        SFIII1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL6,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData,
        {},
        SFIII1_A_50_UNITS,
        ARRAYSIZE(SFIII1_A_50_UNITS),
        L"SFIII1e.txt",             // Extra filename
        631,                        // Count of palettes listed in the header
        0x3b0000,                   // Lowest known location used for palettes
    };

public:
    CGame_SFIII1_A(uint32_t nConfirmedROMSize, bool fUseNormalData = true) { if (fUseNormalData) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); } };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
