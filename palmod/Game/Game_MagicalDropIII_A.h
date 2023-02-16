#pragma once
#include "GameClassByDir.h"
#include "MAGICALDROPIII_A_DEF.h"

class CGame_MAGICALDROPIII_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"233-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Magical Drop III (Neo-Geo)", L"233-p1.p1", 0x931e17fa, 0 },
        { L"Magical Drop III Boss Hack (Neo-Geo)", L"233-p1bh.p1", 0x80bfe2a9, 0 },
        { L"Magical Drop III Tournament Edition Hack (Neo-Geo)", L"233-p1te.p1", 0xe2068d05, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Magical Drop III (Neo-Geo)",
        MAGICALDROPIII_A,
        IMGDAT_SECTION_NEOGEO,
        MAGICALDROPIII_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MAGICALDROPIII_A_UNITS,
        ARRAYSIZE(MAGICALDROPIII_A_UNITS),
        L"MagicalDropIIIE.txt",         // Extra filename
        192,                            // Count of palettes listed in the header
        0x680c0,                        // Lowest known location used for palettes
    };

public:
    CGame_MAGICALDROPIII_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
