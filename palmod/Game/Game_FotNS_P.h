#pragma once
#include "GameClassByDir.h"
#include "FotNS_P_DEF.h"

class CGame_FotNS_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"HK_B.bin", 0x24706800 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Hokuto no Ken (PS2)", L"hk_b.bin", 0xCAACB262, 0 },
        // rom size 0x1000000
        //{ L"Hokuto no Ken (Atomiswave)", L"ax1901m01.ic11", 0xFF5A1642, 0x3000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Hokuto no Ken (PS2)",
        FotNS_P,
        IMGDAT_SECTION_ARCSYS,
        FotNS_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_FotNS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        // atomiswave: ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FotNS_P_UNITS,
        ARRAYSIZE(FotNS_P_UNITS),
        L"HK_BE.txt",           // Extra filename
        93,                     // Count of palettes listed in the header
        0x30,                   // Lowest known location used for palettes
    };

public:
    CGame_FotNS_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
