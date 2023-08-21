#pragma once
#include "GameClassByDir.h"
#include "MK1_A_DEF.h"

class CGame_MK1_A : public CGameClassByDir
{
private:
    enum class MK1ALoadingKey
    {
        V50Normal,
        V50Alt,
    };

    static MK1ALoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_V50T =
    {
        {
            { L"l5_mortal_kombat_t-unit_uj12_game_rom.uj12", 0x80000 },
            { L"l5_mortal_kombat_t-unit_ug12_game_rom.ug12", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V50TAlt =
    {
        {
            { L"mkt-uj12.bin", 0x80000 },
            { L"mkt-ug12.bin", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Mortal Kombat (rev 5.0 T-Unit 03/19/93)", L"l5_mortal_kombat_t-unit_uj12_game_rom.uj12", 0xf4990bf2, 0 },
        { L"Mortal Kombat (rev 5.0 T-Unit 03/19/93)", L"mkt-uj12.bin", 0xf4990bf2, 0 },
    };

    const sCoreGameData m_sCoreGameData_V50T
    {
        L"Mortal Kombat (rev 5.0 T-Unit 03/19/93)",
        MK1_A,
        IMGDAT_SECTION_OTHER,
        MK1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V50T,
        m_rgCRC32Data,
        MK1_A_UNITS,
        ARRAYSIZE(MK1_A_UNITS),
        L"MK1_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x907ce,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V50TAlt
    {
        L"Mortal Kombat (rev 5.0 T-Unit 03/19/93)",
        MK1_A,
        IMGDAT_SECTION_OTHER,
        MK1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V50TAlt,
        m_rgCRC32Data,
        MK1_A_UNITS,
        ARRAYSIZE(MK1_A_UNITS),
        L"MK1_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x907ce,                    // Lowest known location used for palettes
    };

public:
    CGame_MK1_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
