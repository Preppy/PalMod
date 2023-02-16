#pragma once
#include "GameClassByDir.h"
#include "FatalFury3_A_DEF.h"

class CGame_FatalFury3_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"069-p1.bin", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fatal Fury 3 (Neo-Geo)", L"069-p1.p1", 0xa8bcfbbc, 0 },
        { L"Fatal Fury 3 (Neo-Geo alternate set)", L"069-p1.bin", 0x4e27bd16, 0 },
        { L"Fatal Fury 3 (Ancient Battles Resurgence 2015-03-13)", L"069-p1bh.p1", 0xb8362f59, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury 3 (Neo-Geo)",
        FatalFury3_A,
        IMGDAT_SECTION_KOF,
        FatalFury3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FatalFury3_A_UNITS,
        ARRAYSIZE(FatalFury3_A_UNITS),
        L"FatalFury3E.txt",             // Extra filename
        373,                            // Count of palettes listed in the header
        0xd0060,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury3_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
