#pragma once
#include "GameClassByDir.h"
#include "SFEX2P_A_DEF.h"

class CGame_SFEX2P_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"x2p-05m.3h", 0x800000 },
            { L"x2p-06m.4h", 0x800000 },
            { L"x2p-07m.5h", 0x800000 },
            { L"x2p-08m.2k", 0x800000 },
            { L"x2p-09m.3k", 0x800000 },
            { L"x2p-10m.4k", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter EX2 Plus (Europe 990611)", L"x2p-05m.3h",  0x4EE3110F, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter EX2 Plus",
        SFEX2P_A,
        IMGDAT_SECTION_CPS2,
        SFEX2P_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_3_LMH,
        AlphaMode::GameUsesSTPNotAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFEX2P_A_UNITS,
        ARRAYSIZE(SFEX2P_A_UNITS),
        L"SFEX2PE.txt",     // Extra filename
        90,                 // Count of palettes listed in the header
        0x14283e4,          // Lowest known location used for palettes
    };

public:
    CGame_SFEX2P_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
