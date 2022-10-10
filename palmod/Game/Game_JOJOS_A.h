#pragma once
#include "GameClassByDir.h"
#include "JOJOS_A_DEF.h"

enum class JojosLoadingKey
{
    JOJOS_A_50_ROMKEY,
    JOJOS_A_51_ROMKEY,
    JOJOS_US_A_51_ROMKEY,
    JOJOS_A_50_ROMKEY_RERIP,
    JOJOS_A_51_ROMKEY_RERIP,
    JOJOS_US_A_51_ROMKEY_RERIP,
};

class CGame_JOJOS_A : public CGameClassByDir
{
public:
    static JojosLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_50 =
    {
        {
            { L"50", 0x800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_51 =
    {
        {
            { L"51", 0x800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_50Rerip =
    {
        {
            { L"jojoba-simm5.0", 0x200000 },
            { L"jojoba-simm5.1", 0x200000 },
            { L"jojoba-simm5.2", 0x200000 },
            { L"jojoba-simm5.3", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_51Rerip =
    {
        {
            { L"jojoba-simm5.4", 0x200000 },
            { L"jojoba-simm5.5", 0x200000 },
            { L"jojoba-simm5.6", 0x200000 },
            { L"jojoba-simm5.7", 0x200000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData_50
    {
        L"Jojo's 50 (CPS3, Japan)",
        JOJOS_A,
        IMGDAT_SECTION_JOJOS,
        JOJOS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_50,
        JOJOS_UNITS_50,
        ARRAYSIZE(JOJOS_UNITS_50),
        L"jojos50e.txt",     // Extra filename
        476,                 // Count of palettes listed in the header
        0x7c0000,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_51
    {
        L"Jojo's 51 (CPS3, Japan, Regulation: Off)",
        JOJOS_A,
        IMGDAT_SECTION_JOJOS,
        JOJOS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_JOJOS_5,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_51,
        JOJOS_UNITS_51,
        ARRAYSIZE(JOJOS_UNITS_51),
        L"jojos51e.txt",    // Extra filename
        1997,               // Count of palettes listed in the header
        0x2d0000,           // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_51RegOn
    {
        L"Jojo's 51 (CPS3, USA, Regulation: On)",
        JOJOS_US_A,
        IMGDAT_SECTION_JOJOS,
        JOJOS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_JOJOS_5,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_51,
        JOJOS_UNITS_51,
        ARRAYSIZE(JOJOS_UNITS_51),
        L"jojos51e.txt",    // Extra filename
        1997,               // Count of palettes listed in the header
        0x2d0000,           // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_50Rerip
    {
        L"Jojo's 50 (CPS3 Japanese Arcade Rerip)",
        JOJOS_A_DIR_50,
        IMGDAT_SECTION_JOJOS,
        JOJOS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_50Rerip,
        JOJOS_UNITS_50,
        ARRAYSIZE(JOJOS_UNITS_50),
        L"jojos50e.txt",     // Extra filename
        476,                 // Count of palettes listed in the header
        0x7c0000,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_51Rerip
    {
        L"Jojo's 51 (CPS3 Japanese Arcade Rerip)",
        JOJOS_A_DIR_51,
        IMGDAT_SECTION_JOJOS,
        JOJOS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_JOJOS_5,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_51Rerip,
        JOJOS_UNITS_51,
        ARRAYSIZE(JOJOS_UNITS_51),
        L"jojos51e.txt",    // Extra filename
        1997,               // Count of palettes listed in the header
        0x2d0000,           // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_51RegOnRerip
    {
        L"Jojo's 51 (CPS3 US Arcade Rerip)",
        JOJOS_US_A_DIR_51,
        IMGDAT_SECTION_JOJOS,
        JOJOS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_JOJOS_5,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_51Rerip,
        JOJOS_UNITS_51,
        ARRAYSIZE(JOJOS_UNITS_51),
        L"jojos51e.txt",    // Extra filename
        1997,               // Count of palettes listed in the header
        0x2d0000,           // Lowest known location used for palettes
    };

    CGame_JOJOS_A(uint32_t nConfirmedROMSize, JojosLoadingKey nJojosModeToLoad = JojosLoadingKey::JOJOS_A_51_ROMKEY);

    bool CanEnableMultispriteExport(uint32_t nUnitId, uint32_t nPalId);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static bool UseDataFor50() { return (m_eVersionToLoad == JojosLoadingKey::JOJOS_A_50_ROMKEY) || (m_eVersionToLoad == JojosLoadingKey::JOJOS_A_50_ROMKEY_RERIP); };

    static sFileRule GetRule(uint32_t nRuleId);
};
