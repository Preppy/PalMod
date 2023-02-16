#pragma once
#include "GameClassByDir.h"
#include "AODK_A_DEF.h"

class CGame_AODK_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"074-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Aggressors of Dark Kombat (Neo-Geo)", L"074-p1.p1", 0x62369553, 0 },
        { L"Aggressors of Dark Kombat (Neo-Geo)", L"074-p1.bin", 0x62369553, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Aggressors of Dark Kombat (Neo-Geo)",
        AODK_A,
        IMGDAT_SECTION_NEOGEO,
        AODK_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        AODK_A_UNITS,
        ARRAYSIZE(AODK_A_UNITS),
        L"AoDKE.txt",           // Extra filename
        99,                     // Count of palettes listed in the header
        0x101000,               // Lowest known location used for palettes
    };

public:
    CGame_AODK_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
