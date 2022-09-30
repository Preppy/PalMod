#pragma once
#include "GameClassByDir.h"
#include "MMX3_SNES_DEF.h"

class CGame_MMX3_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"megaman x3 (usa).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mega Man X3 (SNES)",
        MMX3_SNES,
        IMGDAT_SECTION_SNES,
        MMX3_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        MMX3_SNES_UNITS,
        ARRAYSIZE(MMX3_SNES_UNITS),
        L"MMX3E.txt",               // Extra filename
        17,                         // Count of palettes listed in the header
        0x62400,                    // Lowest known location used for palettes
    };

public:
    CGame_MMX3_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
