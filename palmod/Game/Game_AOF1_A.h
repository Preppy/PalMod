#pragma once
#include "GameClassByDir.h"
#include "AOF1_A_DEF.h"

class CGame_AOF1_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"044-p1.p1", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Art of Fighting 1 (Neo-Geo)", L"044-p1.p1", 0xca9f7a6d, 0 },
        { L"Art of Fighting 1 (Neo-Geo)", L"044-p1.bin", 0xca9f7a6d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Art of Fighting 1 (Neo-Geo)",
        AOF1_A,
        IMGDAT_SECTION_KOF,
        AOF1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        AOF1_A_UNITS,
        ARRAYSIZE(AOF1_A_UNITS),
        L"AOF1E.txt",             // Extra filename
        106,                            // Count of palettes listed in the header
        0x43020,                        // Lowest known location used for palettes
    };

public:
    CGame_AOF1_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
