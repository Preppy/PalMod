#pragma once
#include "GameClassByDir.h"
#include "UMK3_SNES_DEF.h"

class CGame_UMK3_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Ultimate Mortal Kombat 3 (USA).sfc", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ultimate Mortal Kombat 3 (USA SNES)",
        UMK3_SNES,
        IMGDAT_SECTION_SNES,
        UMK3_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        UMK3_SNES_UNITS,
        ARRAYSIZE(UMK3_SNES_UNITS),
        L"UMK3_SNES_E.txt",           // Extra filename
        70,                           // Count of palettes listed in the header
        0x7155,                       // Lowest known location used for palettes
    };

public:
    CGame_UMK3_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
