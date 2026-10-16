#pragma once
#include "GameClassByDir.h"
#include "SF2WW_A_DEF.h"

class CGame_SF2WW_A : public CGameClassByDir
{
private:
    enum class SF2WWLoadingKey
    {
        ROM09_V1,
        ROM09_V2,
        ROM09_V3,
        ROM09_V4,
        ROM09_V5,
        ROM09_V6,
        ROM09_V7,

        ROM10_V1,
        ROM10_V2,
    };

    static SF2WWLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V1 =
    {
        {
            { L"sf2_28.9e", 0x20000 },
            { L"sf2_35.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V2 =
    {
        {
            { L"sf2_28a.9e", 0x20000 },
            { L"sf2_35a.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V3 =
    {
        {
            { L"sf2_28b.9e", 0x20000 },
            { L"sf2_35b.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V4 =
    {
        {
            { L"sf2e_28d.9e", 0x20000 },
            { L"sf2e_35d.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V5 =
    {
        {
            { L"sf2e_28e.9e", 0x20000 },
            { L"sf2e_35e.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V6 =
    {
        {
            { L"sf2e_28f.9e", 0x20000 },
            { L"sf2e_35f.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_09_V7 =
    {
        {
            { L"sf2e_28g.9e", 0x20000 },
            { L"sf2e_35g.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_10_V1 =
    {
        {
            { L"sf2_29.10e", 0x20000 },
            { L"sf2_36.10f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_10_V2 =
    {
        {
            { L"sf2_29b.10e", 0x20000 },
            { L"sf2_36b.10f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"SF2: World Warrior (World 910129 ROM09)", L"sf2_28.9e", 0, 0x9144 - 0xacd8 },

        { L"SF2: World Warrior (World 910204 ROM09)", L"sf2_28a.9e", 0, 0xa7b2 - 0xacd8 },
        { L"SF2: World Warrior (World 910214 ROM09)", L"sf2_28b.9e", 0, 0xacfc - 0xacd8 },
        { L"SF2: World Warrior (World 910318 ROM09)", L"sf2e_28d.9e", 0, 0xad1e - 0xacd8 },
        { L"SF2: World Warrior (World 910228 ROM09)", L"sf2e_28e.9e", 0, 0xad18 - 0xacd8 },
        { L"SF2: World Warrior (World 910411 ROM09)", L"sf2e_28f.9e", 0, 0 },
        { L"SF2: World Warrior (World 910522 ROM09)", L"sf2e_28g.9e", 0, 0 },

        { L"SF2: World Warrior (CPS1 World 910129/910204 ROM10)", L"sf2_29.10e", 0, 0 },
        { L"SF2: World Warrior (CPS1 World 910214+ ROM10)", L"sf2_29b.10e", 0, 0 },
    };

    const sCoreGameData m_sCoreGameData_09_V1
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09 Rev A)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V1,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_09_V2
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V2,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_09_V3
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V3,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_09_V4
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V4,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_09_V5
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V5,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_09_V6
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V6,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_09_V7
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09_V7,
        m_rgCRC32Data,
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                     // Count of palettes listed in the header
        0xacb8,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_10_V1
    {
        L"Street Fighter II: World Warrior (CPS1 World 910129/910204 ROM10)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_10_V1,
        m_rgCRC32Data,
        SF2WW_A_UNITS_10,
        ARRAYSIZE(SF2WW_A_UNITS_10),
        L"SF2WW10e.txt",        // Extra filename
        321,                    // Count of palettes listed in the header
        0x3be,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_10_V2
    {
        L"Street Fighter II: World Warrior (CPS1 World 910214+ ROM10)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_10_V2,
        {},
        SF2WW_A_UNITS_10,
        ARRAYSIZE(SF2WW_A_UNITS_10),
        L"SF2WW10e.txt",        // Extra filename
        321,                    // Count of palettes listed in the header
        0x3be,                  // Lowest known location used for palettes
    };

public:
    CGame_SF2WW_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_SF2WW_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"bundleStreetFighterII.mbundle", 0x7475983 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter II: World Warrior (Steam)", L"bundleStreetFighterII.mbundle", 0x7f422388, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter II: World Warrior (Steam)",
        SF2WW_S,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SF2WW_A_UNITS_MONO,
        ARRAYSIZE(SF2WW_A_UNITS_MONO),
        L"SF2WW-Se.txt",        // Extra filename
        366,                    // Count of palettes listed in the header
        0x6fee57a,              // Lowest known location used for palettes
    }; 

public:
    CGame_SF2WW_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
