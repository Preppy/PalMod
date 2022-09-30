#pragma once
#include "GameClassByDir.h"
#include "SVG_SNES_DEF.h"

class CGame_SVG_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Super Variable Geo (J).sfc", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Variable Geo (SNES)",
        SVG_SNES,
        IMGDAT_SECTION_SNES,
        SVG_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        SVG_SNES_UNITS,
        ARRAYSIZE(SVG_SNES_UNITS),
        L"SVGE.txt",               // Extra filename
        45,                        // Count of palettes listed in the header
        0xb870,                    // Lowest known location used for palettes
    };

public:
    CGame_SVG_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
