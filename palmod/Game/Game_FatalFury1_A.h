#pragma once
#include "GameClassByDir.h"
#include "FatalFury1_A_DEF.h"

class CGame_FatalFury1_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"033-p1.p1", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fatal Fury: King of Fighters (Neo-Geo)", L"033-p1.p1", 0x47ebdc2f, 0 },
        { L"Fatal Fury: King of Fighters (Neo-Geo)", L"033-p1.bin", 0x47ebdc2f, 0 },
        { L"Fatal Fury: King of Fighters (Boss Hack by Yumeji)", L"033-p1bh.p1", 0xfc051e1d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury: King of Fighters (Neo-Geo)",
        FatalFury1_A,
        IMGDAT_SECTION_KOF,
        FatalFury1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FatalFury1_A_UNITS,
        ARRAYSIZE(FatalFury1_A_UNITS),
        L"FatalFury1E.txt",             // Extra filename
        142,                            // Count of palettes listed in the header
        0x3276c,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury1_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
