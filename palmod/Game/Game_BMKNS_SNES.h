#pragma once
#include "GameClassByDir.h"
#include "BMKNS_SNES_DEF.h"

class CGame_BMKNS_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"battle master - kyuukyoku no senshi-tachi (japan).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Battle Master: KnS (SNES)", L"battle master - kyuukyoku no senshi-tachi (japan).sfc", 0xdbf76bfd, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Battle Master: KnS (SNES)",
        BMKNS_SNES,
        IMGDAT_SECTION_SNES,
        BMKNS_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_BMKNS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        BMKNS_SNES_UNITS,
        ARRAYSIZE(BMKNS_SNES_UNITS),
        L"BMKNSE.txt",               // Extra filename
        74,                          // Count of palettes listed in the header
        0x1c092,                     // Lowest known location used for palettes
    };

public:
    CGame_BMKNS_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
