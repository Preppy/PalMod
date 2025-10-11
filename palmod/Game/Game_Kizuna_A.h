#pragma once
#include "GameClassByDir.h"
#include "Kizuna_A_DEF.h"

class CGame_Kizuna_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"216-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Kizuna Encounter (Neo-Geo)", L"216-p1.p1", 0x75d2b3de, 0 },
        { L"Kizuna Encounter (Neo-Geo)", L"216-p1.bin", 0x75d2b3de, 0 },
    };
    
    const sCoreGameData m_sCoreGameData
    {
        L"Kizuna Encounter (Neo-Geo)",
        KIZUNA_A,
        IMGDAT_SECTION_NEOGEO,
        Kizuna_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Kizuna_A_UNITS,
        ARRAYSIZE(Kizuna_A_UNITS),
        L"KizunaE.txt",        // Extra filename
        52,                    // Count of palettes listed in the header
        0x170200,              // Lowest known location used for palettes
    };

public:
    CGame_Kizuna_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};


class CGame_Kizuna_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"p1.bin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Kizuna Encounter (Steam)", L"p1.bin", 0x4B14A16F, -0x100000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Kizuna Encounter (Steam)",
        KIZUNA_S,
        IMGDAT_SECTION_NEOGEO,
        Kizuna_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Kizuna_A_UNITS,
        ARRAYSIZE(Kizuna_A_UNITS),
        L"KizunaSE.txt",       // Extra filename
        52,                    // Count of palettes listed in the header
        0x170200,              // Lowest known location used for palettes
    };

public:
    CGame_Kizuna_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
