#pragma once
#include "GameClassByDir.h"
#include "VHUNT2_A_DEF.h"

class CGame_VHUNT2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vh2j.09", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // We use a significant shift here as we're reusing palette locations from another VS game
        { L"Vampire Hunter 2 (Japan 970929)", L"vh2j.09", 0x11730952, 0x5FFD4 }, //0x4714 }, // bbhood
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Hunter 2 (CPS2)",
        VHUNT2_A,
        IMGDAT_SECTION_CPS2,
        VHUNT2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VHUNT2_A_UNITS,
        ARRAYSIZE(VHUNT2_A_UNITS),
        L"VHUNT2e.txt",            // Extra filename
        808,                       // Count of palettes listed in the header
        0x16c9a,                   // Lowest known location used for palettes
    };

public:
    CGame_VHUNT2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_VHUNT2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vhunt2.21D3D8A", 0x3050040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Vampire Hunter 2 (Steam Japan 970929)", L"vhunt2.21D3D8A", 0x9d9653f9, 0x360014 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Hunter 2 (Steam)",
        VHUNT2_S,
        IMGDAT_SECTION_CPS2,
        VHUNT2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VHUNT2_A_UNITS,
        ARRAYSIZE(VHUNT2_A_UNITS),
        L"VHUNT2Se.txt",           // Extra filename
        808,                       // Count of palettes listed in the header
        0x16c9a,                   // Lowest known location used for palettes
    };

public:
    CGame_VHUNT2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
