#pragma once
#include "GameClassByDir.h"
#include "VSAV2_A_DEF.h"

class CGame_VSAV2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vs2j.10", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Vampire Savior 2 (Japan 970913)", L"vs2j.10", 0xeb490213, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Savior 2 (CPS2)",
        VSAV2_A,
        IMGDAT_SECTION_CPS2,
        VSAV2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VSAV2_A_UNITS,
        ARRAYSIZE(VSAV2_A_UNITS),
        L"VSAV2E.txt",              // Extra filename
        5135,                       // Count of palettes listed in the header
        0x16c9a,                    // Lowest known location used for palettes
    };

public:
    CGame_VSAV2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_VSAV2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vsav2.21D3D8A7", 0x3050040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Vampire Savior 2 (Steam Japan 970913)", L"vsav2.21D3D8A7", 0x82a9f513, 0x396cda - 0x16c9a },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Savior 2 (Steam)",
        VSAV2_S,
        IMGDAT_SECTION_CPS2,
        VSAV2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VSAV2_A_UNITS,
        ARRAYSIZE(VSAV2_A_UNITS),
        L"VSAV2SE.txt",             // Extra filename
        5135,                       // Count of palettes listed in the header
        0x16c9a,                    // Lowest known location used for palettes
    };

public:
    CGame_VSAV2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
