#pragma once
#include "GameClassByDir.h"
#include "MAGICALDROPII_A_DEF.h"

class CGame_MAGICALDROPII_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"221-p1.p1", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Magical Drop II (Neo-Geo)", L"221-p1.p1", 0x7be82353, 0 },
        { L"Magical Drop II (Neo-Geo)", L"221-p1.bin", 0x7be82353, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Magical Drop II (Neo-Geo)",
        MAGICALDROPII_A,
        IMGDAT_SECTION_NEOGEO,
        MAGICALDROPII_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MAGICALDROPII_A_UNITS,
        ARRAYSIZE(MAGICALDROPII_A_UNITS),
        L"MagicalDropIIE.txt",          // Extra filename
        43,                             // Count of palettes listed in the header
        0x30200,                        // Lowest known location used for palettes
    };

public:
    CGame_MAGICALDROPII_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
