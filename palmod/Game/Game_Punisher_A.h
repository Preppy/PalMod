#pragma once
#include "GameClassByDir.h"
#include "Punisher_A_DEF.h"

class CGame_Punisher_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"pse_29.10f", 0x20000 },
            { L"pse_25.10e", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"The Punisher (CPS Dash)",
        PUNISHER_A,
        IMGDAT_SECTION_CPS2,
        Punisher_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        {},
        Punisher_A_UNITS,
        ARRAYSIZE(Punisher_A_UNITS),
        L"PunisherE.txt",            // Extra filename
        1,                           // Count of palettes listed in the header
        0x3ef88,                     // Lowest known location used for palettes
    };

public:
    CGame_Punisher_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};

class CGame_Punisher_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"punisherj.21d3d8a7", 0xa50040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"The Punisher (Steam Japan)", L"punisherj.21d3d8a7", 0xa1277df5, 0xc0040 },
        { L"The Punisher (Steam USA)", L"punisheru.21d3d8a7", 0x6b3c35c7, 0xc0040 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"The Punisher (Steam)",
        PUNISHER_S,
        IMGDAT_SECTION_CPS2,
        Punisher_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Punisher_A_UNITS,
        ARRAYSIZE(Punisher_A_UNITS),
        L"PunisherSE.txt",          // Extra filename
        1,                          // Count of palettes listed in the header
        0xfefc8,                    // Lowest known location used for palettes
    };

public:
    CGame_Punisher_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
