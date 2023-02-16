#pragma once
#include "GameClassByDir.h"
#include "GUNDAM_SNES_DEF.h"

class CGame_GUNDAM_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Shin Kidou Senki Gundam W - Endless Duel (Japan).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Gundam Wing: Endless Duel (SNES)", L"Shin Kidou Senki Gundam W - Endless Duel (Japan).sfc", 0xc0aecdca, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Gundam Wing: Endless Duel (SNES)",
        GUNDAM_SNES,
        IMGDAT_SECTION_SNES,
        GUNDAM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        GUNDAM_SNES_UNITS,
        ARRAYSIZE(GUNDAM_SNES_UNITS),
        L"GUNDAME.txt",               // Extra filename
        104,                          // Count of palettes listed in the header
        0x0ac320,                     // Lowest known location used for palettes
    };

public:
    CGame_GUNDAM_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
