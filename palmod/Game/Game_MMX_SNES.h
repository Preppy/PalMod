#pragma once
#include "GameClassByDir.h"
#include "MMX_SNES_DEF.h"

class CGame_MMX_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // We don't supply a size here because there are are a couple different ROMs that have different sizes
            { L"megaman x (usa).sfc", static_cast<size_t>(-1) },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mega Man X (SNES)",
        MMX_SNES,
        IMGDAT_SECTION_SNES,
        MMX_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        MMX_SNES_UNITS,
        ARRAYSIZE(MMX_SNES_UNITS),
        L"MMXE.txt",               // Extra filename
        89,                        // Count of palettes listed in the header
        0x2b700,                   // Lowest known location used for palettes
    };

public:
    CGame_MMX_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
