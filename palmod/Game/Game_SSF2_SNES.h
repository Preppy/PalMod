#pragma once
#include "GameClassByDir.h"
#include "SSF2_SNES_DEF.h"

class CGame_SSF2_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Super Street Fighter II (USA).sfc", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Super Street Fighter II (USA) (SNES)", L"Super Street Fighter II (USA).sfc", 0xF16D5CE9, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Street Fighter II (SNES)",
        SSF2_SNES,
        IMGDAT_SECTION_SNES,
        SSF2_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SNES_SSFT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SSF2_SNES_UNITS,
        ARRAYSIZE(SSF2_SNES_UNITS),
        L"SSF2_SNESE.txt",          // Extra filename
        428,                        // Count of palettes listed in the header
        0x1500a0,                   // Lowest known location used for palettes
    };

public:
    CGame_SSF2_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
