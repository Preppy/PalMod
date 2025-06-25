#pragma once
#include "GameClassByDir.h"
#include "SF2WW_A_DEF.h"

class CGame_SF2WW_A : public CGameClassByDir
{
private:
    enum class SF2WWLoadingKey
    {
        ROM09,
        ROM10,
    };

    static SF2WWLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_09 =
    {
        {
            { L"sf2e_28g.9e", 0x20000 },
            { L"sf2e_35g.9f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_10 =
    {
        {
            { L"sf2_29b.10e", 0x20000 },
            { L"sf2_36b.10f", 0x20000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData_09
    {
        L"Street Fighter II: World Warrior (CPS1 ROM09)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_09,
        {},
        SF2WW_A_UNITS_09,
        ARRAYSIZE(SF2WW_A_UNITS_09),
        L"SF2WW09e.txt",        // Extra filename
        45,                      // Count of palettes listed in the header
        0xacb8,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_10
    {
        L"Street Fighter II: World Warrior (CPS1 ROM10)",
        SF2WW_A,
        IMGDAT_SECTION_SF2,
        SF2WW_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_10,
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
