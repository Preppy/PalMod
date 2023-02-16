#pragma once
#include "GameClassByDir.h"
#include "KOTM_A_DEF.h"

class CGame_KOTM_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"016-p1.p1", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of the Monsters (Neo-Geo set 1)", L"016-p1.p1", 0x1b818731, 0 },
        { L"King of the Monsters (Neo-Geo set 2)", L"016-hp1.bin", 0xb774621e, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of the Monsters (Neo-Geo)",
        KOTM_A,
        IMGDAT_SECTION_NEOGEO,
        KOTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOTM_UNITS,
        ARRAYSIZE(KOTM_UNITS),
        L"KOTMe.txt",           // Extra filename
        49,                     // Count of palettes listed in the header
        0x20000,                // Lowest known location used for palettes
    };

public:
    CGame_KOTM_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
