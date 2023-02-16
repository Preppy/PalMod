#pragma once
#include "GameClassByDir.h"
#include "FatalFuryS_SNES_DEF.h"

class CGame_FatalFuryS_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Fatal Fury Special (USA).sfc", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fatal Fury Special (SNES)", L"Fatal Fury Special (USA).sfc", 0, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury Special(SNES)",
        FatalFuryS_SNES,
        IMGDAT_SECTION_KOF,
        FFS_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FatalFuryS_SNES_UNITS,
        ARRAYSIZE(FatalFuryS_SNES_UNITS),
        L"FatalFurySE.txt",            // Extra filename
        30,                            // Count of palettes listed in the header
        0x13f1a0,                      // Lowest known location used for palettes
    };

public:
    CGame_FatalFuryS_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
