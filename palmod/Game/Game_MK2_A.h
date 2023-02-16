#pragma once
#include "GameClassByDir.h"
#include "MK2_A_DEF.h"

class CGame_MK2_A : public CGameClassByDir
{
private:
    enum class MK2ALoadingKey
    {
        V31Normal,
        V31Alt,
        V31Ult,
    };

    static MK2ALoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_V31Normal =
    {
        {
            { L"l3.1_mortal_kombat_ii_game_rom_uj12.uj12", 0x80000 },
            { L"l3.1_mortal_kombat_ii_game_rom_ug12.ug12", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V31Alt =
    {
        {
            { L"uj12.l31", 0x80000 },
            { L"ug12.l31", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V31Ult =
    {
        {
            { L"mk2ute.uj12", 0x80000 },
            { L"mk2ute.ug12", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Mortal Kombat II (Arcade rev L3.1)", L"l3.1_mortal_kombat_ii_game_rom_uj12.uj12", 0xcf100a75, 0 },
        { L"Mortal Kombat II (Arcade rev L3.1)", L"uj12.l31", 0xcf100a75, 0 },
        { L"Mortal Kombat II Ultimate Tournament Edition (hack)", L"mk2ute.uj12", 0x82c0ef47, 0 },
    };

    const sCoreGameData m_sCoreGameData_V31Normal
    {
        L"Mortal Kombat II (Arcade rev L3.1)",
        MK2_A,
        IMGDAT_SECTION_OTHER,
        MK2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V31Normal,
        m_rgCRC32Data,
        MK2_A_UNITS,
        ARRAYSIZE(MK2_A_UNITS),
        L"MK2_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x210e2,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V31Alt
    {
        L"Mortal Kombat II (Arcade rev L3.1)",
        MK2_A,
        IMGDAT_SECTION_OTHER,
        MK2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V31Alt,
        m_rgCRC32Data,
        MK2_A_UNITS,
        ARRAYSIZE(MK2_A_UNITS),
        L"MK2_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x210e2,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V31Ult
    {
        L"Mortal Kombat II Ultimate Tournament Edition (hack)",
        MK2_A,
        IMGDAT_SECTION_OTHER,
        MK2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V31Ult,
        m_rgCRC32Data,
        MK2_A_UNITS,
        ARRAYSIZE(MK2_A_UNITS),
        L"MK2_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x210e2,                    // Lowest known location used for palettes
    };

public:
    CGame_MK2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
