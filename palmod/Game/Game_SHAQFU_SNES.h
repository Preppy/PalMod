#pragma once
#include "GameClassByDir.h"
#include "SHAQFU_SNES_DEF.h"

class CGame_SHAQFU_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Shaq Fu (USA).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Shaq Fu (SNES)",
        SHAQFU_SNES,
        IMGDAT_SECTION_SNES,
        SHAQFU_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        SHAQFU_SNES_UNITS,
        ARRAYSIZE(SHAQFU_SNES_UNITS),
        L"ShaqFu_SNES_E.txt",          // Extra filename
        34,                            // Count of palettes listed in the header
        0x13ffac,                      // Lowest known location used for palettes
    };

public:
    CGame_SHAQFU_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
