#pragma once
#include "GameClassByDir.h"
#include "Matrimelee_A_DEF.h"

class CGame_Matrimelee_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"066-p1.p1", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Matrimelee (Neo-Geo)",
        MATRIMELEE_A,
        IMGDAT_SECTION_MATRIM,
        MATRIM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        Matrimelee_A_UNITS,
        ARRAYSIZE(Matrimelee_A_UNITS),
        L"MatrimeleeE.txt",        // Extra filename
        825,                       // Count of palettes listed in the header
        0x72ba,                    // Lowest known location used for palettes
    };

public:
    CGame_Matrimelee_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
