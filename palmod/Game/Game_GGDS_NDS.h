#pragma once
#include "GameClassByDir.h"
#include "GGDS_NDS_DEF.h"

class CGame_GGDS_NDS : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"0590 - Guilty Gear - Dust Strikers (Japan).nds", 0x4000000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Guilty Gear: Dust Strikers (Nintendo DS)", L"0590 - Guilty Gear - Dust Strikers (Japan).nds", 0x69d60f95, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Guilty Gear: Dust Strikers (Nintendo DS)",
        GGDS_NDS,
        IMGDAT_SECTION_GUILTYGEAR,
        GGDS_DS_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_GGDS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        GGDS_NDS_UNITS,
        ARRAYSIZE(GGDS_NDS_UNITS),
        L"GGDStrikersE.txt",            // Extra filename
        312,                            // Count of palettes listed in the header
        0x1175e28,                      // Lowest known location used for palettes
    };

public:
    CGame_GGDS_NDS(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
