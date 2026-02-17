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
        PSelENU,
        PSelSPN,
        RankENU,
        RankSPN,
        ContENU,
        ContJPN,
        ContPBR,
        ContSPN,
        OrderSelect,
        OrderSelectSPN,
        Victory_ArcadeMode_Team,
        Victory_ArcadeMode_Loss,
        Victory_ArcadeMode_Single,
        Victory_VSMode_Team,
        Victory_VSMode_Single,
        WinQuotes_ENU_Win,
        WinQuotes_ENU_Loss,
        WinQuotes_JPN_Win,
        WinQuotes_JPN_Loss,
        WinQuotes_BRS_Win,
        WinQuotes_BRS_Loss,
        WinQuotes_SPN_Win,
        WinQuotes_SPN_Loss,
        WinQuotes_UNK1_Loss,
        WinQuotes_UNK2_Win,
        WinQuotes_UNK2_Loss,
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

    static inline const sDirectoryLoadingData m_sFileLoadingData_PSelENU =
    {
        {
            { L"psel.bin-n", 0x56f024 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_PSelSPN =
    {
        {
            { L"psels.bin-n", 0x56f024 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_RankENU =
    {
        {
            // This is the demo version, vs the 0x15bb6a Menu version
            { L"rank.bin", 0xbbd26 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_RankSPN =
    {
        {
            // This is the demo version, vs the 0x15bb6a Menu version
            { L"ranks.bin", 0xbbd26 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ContENU =
    {
        {
            { L"conte.bin", 0x131244 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ContJPN =
    {
        {
            { L"cont.bin-n", 0x13121C },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ContPBR =
    {
        {
            { L"contb.bin", 0x131244 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ContSPN =
    {
        {
            { L"conts.bin", 0x131244 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_OrderSelect =
    {
        {
            { L"osel.bin-n", 0x28cbb8 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_OrderSelectSPN =
    {
        {
            { L"osels.bin-n", 0x28cbb8 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Victory_ArcadeMode_Team =
    {
        {
            { L"vic0_00.bin-n", 0x479bae },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Victory_ArcadeMode_Loss =
    {
        {
            { L"vic1_00.bin-n", 0x4784c6 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Victory_ArcadeMode_Single =
    {
        {
            { L"vic3_00.bin-n", 0x478fe2 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Victory_VSMode_Team =
    {
        {
            { L"vic2_00.bin-n", 0x4790ea },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Victory_VSMode_Single =
    {
        {
            { L"vic4_00.bin-n", 0x47851a },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_ENU_Win =
    {
        {
            { L"messe_r.dat", 38766 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_ENU_Loss =
    {
        {
            { L"messe.dat", 38766 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_JPN_Win =
    {
        {
            { L"mess_r.dat-n", 167770 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_UNK1_Loss =
    {
        {
            { L"mess.dat", 167770 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_JPN_Loss =
    {
        {
            { L"mess.dat-n", 167770 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_BRS_Win =
    {
        {
            { L"messb_r.dat", 39920 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_BRS_Loss =
    {
        {
            { L"messb.dat", 39920 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_SPN_Win =
    {
        {
            { L"messs_r.dat", 40360 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_SPN_Loss =
    {
        {
            { L"messs.dat", 40388 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_UNK2_Win =
    {
        {
            { L"mess_c_r.dat", 194478 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_WinQuotes_UNK2_Loss =
    {
        {
            { L"mess_c.dat", 194478 },
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
        {},
        KOF02UM_S_UNITS_MAIN,
        ARRAYSIZE(KOF02UM_S_UNITS_MAIN),
        L"KOF02UME.txt",        // Extra filename
        2815,                   // Count of palettes listed in the header
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
        {},
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
        {},
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
        {},
        KOF02UM_S_UNITS_CLEAR,
        ARRAYSIZE(KOF02UM_S_UNITS_CLEAR),
        L"KOF02UMClearE.txt",       // Extra filename
        4,                          // Count of palettes listed in the header
        0x80,                       // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_PSelENU
    {
        L"King of Fighters 2002UM (Steam, Select (ENG, JPN, PT-BR))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_PSelENU,
        {},
        KOF02UM_S_UNITS_PSEL_ENU,
        ARRAYSIZE(KOF02UM_S_UNITS_PSEL_ENU),
        L"KOF02UMPSelE.txt",       // Extra filename
        87,                        // Count of palettes listed in the header
        0x1c0,                     // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_PSelSPN
    {
        L"King of Fighters 2002UM (Steam, Select (Spanish))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_PSelSPN,
        {},
        KOF02UM_S_UNITS_PSEL_SPN,
        ARRAYSIZE(KOF02UM_S_UNITS_PSEL_SPN),
        L"KOF02UMPSelE.txt",       // Extra filename
        87,                        // Count of palettes listed in the header
        0x1c0,                     // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_RankENU
    {
        L"King of Fighters 2002UM (Steam, Rankings (ENG, JPN, PT-BR))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_RankENU,
        {},
        KOF02UM_S_UNITS_RANK_ENU,
        ARRAYSIZE(KOF02UM_S_UNITS_RANK_ENU),
        L"KOF02UMRankE.txt",      // Extra filename
        11,                       // Count of palettes listed in the header
        0x80,                     // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_RankSPN
    {
        L"King of Fighters 2002UM (Steam, Rankings (Spanish))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_RankSPN,
        {},
        KOF02UM_S_UNITS_RANK_SPN,
        ARRAYSIZE(KOF02UM_S_UNITS_RANK_SPN),
        L"KOF02UMRankE.txt",      // Extra filename
        11,                       // Count of palettes listed in the header
        0x80,                     // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ContENU
    {
        L"King of Fighters 2002UM (Steam, Continue (ENG))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_ContENU,
        {},
        KOF02UM_S_UNITS_CONT_ENU,
        ARRAYSIZE(KOF02UM_S_UNITS_CONT_ENU),
        L"KOF02UMContE.txt",    // Extra filename
        17,                     // Count of palettes listed in the header
        0xc0,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ContSPN
    {
        L"King of Fighters 2002UM (Steam, Continue (SPN))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_ContSPN,
        {},
        KOF02UM_S_UNITS_CONT_SPN,
        ARRAYSIZE(KOF02UM_S_UNITS_CONT_SPN),
        L"KOF02UMContE.txt",    // Extra filename
        17,                     // Count of palettes listed in the header
        0xc0,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ContJPN
    {
        L"King of Fighters 2002UM (Steam, Continue (JPN))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_ContJPN,
        {},
        KOF02UM_S_UNITS_CONT_JPN,
        ARRAYSIZE(KOF02UM_S_UNITS_CONT_JPN),
        L"KOF02UMContE.txt",    // Extra filename
        17,                     // Count of palettes listed in the header
        0xc0,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ContPBR
    {
        L"King of Fighters 2002UM (Steam, Continue (PT-BR))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_ContPBR,
        {},
        KOF02UM_S_UNITS_CONT_PBR,
        ARRAYSIZE(KOF02UM_S_UNITS_CONT_PBR),
        L"KOF02UMContE.txt",    // Extra filename
        17,                     // Count of palettes listed in the header
        0xc0,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_OrderSelect
    {
        L"King of Fighters 2002UM (Steam, Order Select (ENG, JPN, PT-BR))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_OrderSelect,
        {},
        KOF02UM_S_UNITS_ORDER_ENU,
        ARRAYSIZE(KOF02UM_S_UNITS_ORDER_ENU),
        L"KOF02UMOrderE.txt",   // Extra filename
        38,                     // Count of palettes listed in the header
        0x100,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_OrderSelectSPN
    {
        L"King of Fighters 2002UM (Steam, Order Select (Spanish))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_OrderSelectSPN,
        {},
        KOF02UM_S_UNITS_ORDER_SPN,
        ARRAYSIZE(KOF02UM_S_UNITS_ORDER_SPN),
        L"KOF02UMOrderE.txt",   // Extra filename
        38,                     // Count of palettes listed in the header
        0x100,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Victory_ArcadeMode_Team
    {
        L"King of Fighters 2002UM (Steam, Arcade Mode (Team))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Victory_ArcadeMode_Team,
        {},
        KOF02UM_S_UNITS_VICTORY,
        ARRAYSIZE(KOF02UM_S_UNITS_VICTORY),
        L"KOF02UMVicE.txt",     // Extra filename
        59,                     // Count of palettes listed in the header
        0x200,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Victory_ArcadeMode_Loss
    {
        L"King of Fighters 2002UM (Steam, Arcade Mode (Loss))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Victory_ArcadeMode_Loss,
        {},
        KOF02UM_S_UNITS_VICTORY,
        ARRAYSIZE(KOF02UM_S_UNITS_VICTORY),
        L"KOF02UMVicE.txt",     // Extra filename
        59,                     // Count of palettes listed in the header
        0x200,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Victory_ArcadeMode_Single
    {
        L"King of Fighters 2002UM (Steam, Arcade Mode (Single))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Victory_ArcadeMode_Single,
        {},
        KOF02UM_S_UNITS_VICTORY,
        ARRAYSIZE(KOF02UM_S_UNITS_VICTORY),
        L"KOF02UMVicE.txt",     // Extra filename
        59,                     // Count of palettes listed in the header
        0x200,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Victory_VSMode_Team
    {
        L"King of Fighters 2002UM (Steam, VS Mode (Team))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Victory_VSMode_Team,
        {},
        KOF02UM_S_UNITS_VICTORY,
        ARRAYSIZE(KOF02UM_S_UNITS_VICTORY),
        L"KOF02UMVicE.txt",     // Extra filename
        59,                     // Count of palettes listed in the header
        0x200,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Victory_VSMode_Single
    {
        L"King of Fighters 2002UM (Steam, VS Mode (Single))",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_Victory_VSMode_Single,
        {},
        KOF02UM_S_UNITS_VICTORY,
        ARRAYSIZE(KOF02UM_S_UNITS_VICTORY),
        L"KOF02UMVicE.txt",     // Extra filename
        59,                     // Count of palettes listed in the header
        0x200,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_ENU_Win
    {
        L"King of Fighters 2002UM (Steam, Win Quotes English Win)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_ENU_Win,
        {},
        KOF02UM_S_UNITS_WINQUOTES_EN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_EN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_ENU_Loss
    {
        L"King of Fighters 2002UM (Steam, Win Quotes English Loss)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_ENU_Loss,
        {},
        KOF02UM_S_UNITS_WINQUOTES_EN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_EN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_JPN_Win
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Japan Win)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_JPN_Win,
        {},
        KOF02UM_S_UNITS_WINQUOTES_JPN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_JPN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_JPN_Loss
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Japan Loss)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_JPN_Loss,
        {},
        KOF02UM_S_UNITS_WINQUOTES_JPN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_JPN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_BRS_Win
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Portugese-Brazil Win)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_BRS_Win,
        {},
        KOF02UM_S_UNITS_WINQUOTES_BRS,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_BRS),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_BRS_Loss
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Portugese-Brazil Loss)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_BRS_Loss,
        {},
        KOF02UM_S_UNITS_WINQUOTES_BRS,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_BRS),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_SPN_Win
    {
        L"King of Fighters 2002UM (Steam, Win Quotes SPN Win)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_SPN_Win,
        {},
        KOF02UM_S_UNITS_WINQUOTES_ES,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_ES),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_SPN_Loss
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Spanish Loss)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_SPN_Loss,
        {},
        KOF02UM_S_UNITS_WINQUOTES_ES,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_ES),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_UNK1_Loss
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Unknown1 Loss)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_UNK1_Loss,
        {},
        KOF02UM_S_UNITS_WINQUOTES_EN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_EN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_UNK2_Win
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Unknown2 Win)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_UNK2_Win,
        {},
        KOF02UM_S_UNITS_WINQUOTES_EN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_EN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_WinQuotes_UNK2_Loss
    {
        L"King of Fighters 2002UM (Steam, Win Quotes Unknown2 Loss)",
        KOF02UM_S,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        m_sFileLoadingData_WinQuotes_UNK2_Loss,
        {},
        KOF02UM_S_UNITS_WINQUOTES_EN,
        ARRAYSIZE(KOF02UM_S_UNITS_WINQUOTES_EN),
        L"KOF02UMWinQE.txt",    // Extra filename
        1,                      // Count of palettes listed in the header
        0x10,                   // Lowest known location used for palettes
    };

public:
    CGame_KOF02UM_S(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId);
};
