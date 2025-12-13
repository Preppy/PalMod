#pragma once
#include "GameClassByDir.h"
#include "SFTM_A_DEF.h"

class CGame_SFTM_A : public CGameClassByDir
{
private:
    enum class SFTMLoadingKey
    {
        MAME110,
        MAME111,
        MAME112,
        MAME112j,
        MAME112k,
        MAME114,
        V110,
        V111,
        V112Normal,
        V112Japan,
        V114Japan,
    };

    static SFTMLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_MAME110 =
    {
        {
            { L"sfm_prom0_v1.1.prom0", 0x40000 },
            { L"sfm_prom1_v1.1.prom1", 0x40000 },
            { L"sfm_prom2_v1.1.prom2", 0x40000 },
            { L"sfm_prom3_v1.1.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_MAME111 =
    {
        {
            { L"sfm_prom0_v1.11.prom0", 0x40000 },
            { L"sfm_prom1_v1.11.prom1", 0x40000 },
            { L"sfm_prom2_v1.11.prom2", 0x40000 },
            { L"sfm_prom3_v1.11.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_MAME112 =
    {
        {
            { L"sfm_prom0_v1.12.prom0", 0x40000 },
            { L"sfm_prom1_v1.12.prom1", 0x40000 },
            { L"sfm_prom2_v1.12.prom2", 0x40000 },
            { L"sfm_prom3_v1.12.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_MAME112j =
    {
        {
            { L"sfmn_prom0_v1.12.prom0", 0x40000 },
            { L"sfmn_prom1_v1.12.prom1", 0x40000 },
            { L"sfmn_prom2_v1.12.prom2", 0x40000 },
            { L"sfmn_prom3_v1.12.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_MAME112k =
    {
        {
            { L"sfmk_prom0_v1.12.prom0", 0x40000 },
            { L"sfmk_prom1_v1.12.prom1", 0x40000 },
            { L"sfmk_prom2_v1.12.prom2", 0x40000 },
            { L"sfmk_prom3_v1.12.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_MAME114 =
    {
        {
            { L"sfmn_prom0_v1.14.prom0", 0x40000 },
            { L"sfmn_prom1_v1.14.prom1", 0x40000 },
            { L"sfmn_prom2_v1.14.prom2", 0x40000 },
            { L"sfmn_prom3_v1.14.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V110 =
    {
        {
            { L"sfm_0_v1.1.prom0", 0x40000 },
            { L"sfm_1_v1.1.prom1", 0x40000 },
            { L"sfm_2_v1.1.prom2", 0x40000 },
            { L"sfm_3_v1.1.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V111 =
    {
        {
            { L"sfm_0_v1.11.prom0", 0x40000 },
            { L"sfm_1_v1.11.prom1", 0x40000 },
            { L"sfm_2_v1.11.prom2", 0x40000 },
            { L"sfm_3_v1.11.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V112Normal =
    {
        {
            { L"sfm_0_v1.12.prom0", 0x40000 },
            { L"sfm_1_v1.12.prom1", 0x40000 },
            { L"sfm_2_v1.12.prom2", 0x40000 },
            { L"sfm_3_v1.12.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V112Japan =
    {
        {
            { L"sfmn_0_v1.12.prom0", 0x40000 },
            { L"sfmn_1_v1.12.prom1", 0x40000 },
            { L"sfmn_2_v1.12.prom2", 0x40000 },
            { L"sfmn_3_v1.12.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V114Japan =
    {
        {
            { L"sfmn_0_v1.14.prom0", 0x40000 },
            { L"sfmn_1_v1.14.prom1", 0x40000 },
            { L"sfmn_2_v1.14.prom2", 0x40000 },
            { L"sfmn_3_v1.14.prom3", 0x40000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    const sCoreGameData m_sCoreGameData_MAME110
    {
        L"Street Fighter: The Movie (v1.10, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_MAME110,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_MAME111
    {
        L"Street Fighter: The Movie (v1.11, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_MAME111,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_MAME112
    {
        L"Street Fighter: The Movie (v1.12, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_MAME112,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_MAME112k
    {
        L"Street Fighter: The Movie (v1.12K (Korea), Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_MAME112k,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_MAME112j
    {
        L"Street Fighter: The Movie (v1.12N (Japan), Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_MAME112j,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_MAME114
    {
        L"Street Fighter: The Movie (v1.14N (Japan), Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_MAME114,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V110
    {
        L"Street Fighter: The Movie (v1.10, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_V110,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V111
    {
        L"Street Fighter: The Movie (v1.11, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_V111,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V112Normal
    {
        L"Street Fighter: The Movie (v1.12, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_V112Normal,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V112Japan
    {
        L"Street Fighter: The Movie (v1.12N Japan, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_V112Japan,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V114Japan
    {
        L"Street Fighter: The Movie (v1.14N Japan, Incredible Technologies)",
        SFTM_A,
        IMGDAT_SECTION_OTHER,
        SFTM_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData_V114Japan,
        {},
        SFTM_A_UNITS,
        ARRAYSIZE(SFTM_A_UNITS),
        L"SFTME.txt",          // Extra filename
        36,                    // Count of palettes listed in the header
        0xff1c,                // Lowest known location used for palettes
    };

public:
    CGame_SFTM_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
