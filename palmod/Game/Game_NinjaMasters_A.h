#pragma once
#include "GameClassByDir.h"
#include "NINJAMASTERS_A_DEF.h"

class CGame_NINJAMASTERS_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"217-p2.sp2", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Ninja Master's (Neo-Geo)", L"217-p2.sp2", 0x191fca88, 0 },
        { L"Ninja Master's (Neo-Geo)", L"217-p2.bin", 0x191fca88, 0 },
        { L"Ninja Master's (Neo-Geo)", L"ninjm_p2.rom", 0x191fca88, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ninja Master's (Neo-Geo)",
        NINJAMASTERS_A,
        IMGDAT_SECTION_NEOGEO,
        NINJAMASTERS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        NINJAMASTERS_A_UNITS,
        ARRAYSIZE(NINJAMASTERS_A_UNITS),
        L"NINJAMASTERSE.txt",       // Extra filename
        559,                        // Count of palettes listed in the header
        0x81404,                    // Lowest known location used for palettes
    };

public:
    CGame_NINJAMASTERS_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
