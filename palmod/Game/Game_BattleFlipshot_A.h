#pragma once
#include "GameClassByDir.h"
#include "BattleFlipShot_A_DEF.h"

class CGame_BattleFlipShot_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"247-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Battle Flip Shot (Neo-Geo)",
        BattleFlipShot_A,
        IMGDAT_SECTION_NEOGEO,
        BattleFlipShot_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        BattleFlipShot_A_UNITS,
        ARRAYSIZE(BattleFlipShot_A_UNITS),
        L"BattleFlipShotE.txt",         // Extra filename
        125,                            // Count of palettes listed in the header
        0x2765a,                        // Lowest known location used for palettes
    };

public:
    CGame_BattleFlipShot_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
