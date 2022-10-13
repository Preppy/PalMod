#pragma once
#include "GameClassByDir.h"
#include "KOF02UM_S_DEF.h"

class CGame_KOF02UM_S : public CGameClassByDir
{
private:
    enum class KOF02UMLoadingKey
    {
        Main,
        Bar,
        Clear,
        Max2,
        PSel,
        Rank,
        Conte,
    };

    static KOF02UMLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_Main =
    {
        {
            { L"pal_a.bin", 0x606e0 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Bar =
    {
        {
            { L"bar.bin", 0x2200 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Clear =
    {
        {
            { L"clear.bin", 0x218ce },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Max2BG =
    {
        {
            { L"MAX2BG.bin", 0x9800 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_PSel =
    {
        {
            { L"psel.bin-n", 0x56f024 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Rank =
    {
        {
            // This is the demo version, vs the 0x15bb6a Menu version
            { L"rank.bin", 0xbbd26 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Conte =
    {
        {
            { L"conte.bin", 0x131244 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_Main
    {
        L"King of Fighters 2002UM (Steam)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_Main,
        KOF02UM_S_UNITS_MAIN,
        ARRAYSIZE(KOF02UM_S_UNITS_MAIN),
        L"KOF02UME.txt",        // Extra filename
        2749,                   // Count of palettes listed in the header
        0x2a0,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Bar
    {
        L"King of Fighters 2002UM (Steam, Bar)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData_Bar,
        KOF02UM_S_UNITS_BAR,
        ARRAYSIZE(KOF02UM_S_UNITS_BAR),
        L"KOF02UMBarE.txt",         // Extra filename
        10,                         // Count of palettes listed in the header
        0,                          // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Max2BG
    {
        L"King of Fighters 2002UM (Steam, MAX2 Backgrounds)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData_Max2BG,
        KOF02UM_S_UNITS_MAX2,
        ARRAYSIZE(KOF02UM_S_UNITS_MAX2),
        L"KOF02UMMax2E.txt",        // Extra filename
        2,                          // Count of palettes listed in the header
        0,                          // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Clear
    {
        L"King of Fighters 2002UM (Steam, Clear)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Clear,
        KOF02UM_S_UNITS_CLEAR,
        ARRAYSIZE(KOF02UM_S_UNITS_CLEAR),
        L"KOF02UMClearE.txt",       // Extra filename
        3,                          // Count of palettes listed in the header
        0x80,                       // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_PSel
    {
        L"King of Fighters 2002UM (Steam, Select)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_PSel,
        KOF02UM_S_UNITS_PSEL,
        ARRAYSIZE(KOF02UM_S_UNITS_PSEL),
        L"KOF02UMPSelE.txt",       // Extra filename
        10,                        // Count of palettes listed in the header
        0x1c0,                     // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Rank
    {
        L"King of Fighters 2002UM (Steam, Rank)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Rank,
        KOF02UM_S_UNITS_RANK,
        ARRAYSIZE(KOF02UM_S_UNITS_RANK),
        L"KOF02UMRankE.txt",      // Extra filename
        9,                        // Count of palettes listed in the header
        0x80,                     // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Conte
    {
        L"King of Fighters 2002UM (Steam, Continue)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Conte,
        KOF02UM_S_UNITS_CONTE,
        ARRAYSIZE(KOF02UM_S_UNITS_CONTE),
        L"KOF02UMContE.txt",    // Extra filename
        6,                      // Count of palettes listed in the header
        0xc0,                   // Lowest known location used for palettes
    };

public:
    CGame_KOF02UM_S(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId);
};
