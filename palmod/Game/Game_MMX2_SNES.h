#pragma once
#include "GameClassByDir.h"
#include "MMX2_SNES_DEF.h"

class CGame_MMX2_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"megaman x2 (usa).sfc", 0x180000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mega Man X2 (SNES)",
        MMX2_SNES,
        IMGDAT_SECTION_SNES,
        MMX2_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        MMX2_SNES_UNITS,
        ARRAYSIZE(MMX2_SNES_UNITS),
        L"MMX2E.txt",               // Extra filename
        14,                         // Count of palettes listed in the header
        0x2b160,                    // Lowest known location used for palettes
    };

public:
    CGame_MMX2_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
