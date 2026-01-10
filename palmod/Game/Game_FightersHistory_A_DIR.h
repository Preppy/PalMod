#pragma once
#include "GameClassByDir.h"
#include "FightersHistory_A_DIR_DEF.h"

class CGame_FightersHistory_A_DIR : public CGameClassByDir
{
private:
    enum class FHLoadingKey
    {
        FH_US4209,
        FH_World4309,
        FH_US4206,
        FH_US4205,
        FH_Japan4107,
        FH_World4307,
        FH_World4305,
        FH_US4203,
        FH_Japan4105,
        FH_Japan4104,
    };

    static FHLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_US4209 =    { { { L"lj00-3.1f", 0x80000 }, { L"lj01-3.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_World4309 = { { { L"lc00-1.1f", 0x80000 }, { L"lc01-1.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_US4206 =    { { { L"le00-1.1f", 0x80000 }, { L"le01-1.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_US4205 =    { { { L"le00.1f", 0x80000 },   { L"le01.2f", 0x80000 }, },   FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan4107 = { { { L"lb00.1f", 0x80000 },   { L"lb01.2f", 0x80000 }, },   FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_World4307 = { { { L"kx00-3.1f", 0x80000 }, { L"kx01-3.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_World4305 = { { { L"kx00-2.1f", 0x80000 }, { L"kx01-2.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_US4203 =    { { { L"kz00-1.1f", 0x80000 }, { L"kz01-1.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan4105 = { { { L"kw00-3.1f", 0x80000 }, { L"kw01-3.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan4104 = { { { L"kw00-2.1f", 0x80000 }, { L"kw01-2.2f", 0x80000 }, }, FileReadType::Interleaved_Read2Bytes_LE, };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        /* MAME known game versions data 
        // DE-0396-0 PCB sets (Z80 for sound)
        GAME( 1993, fghthistu,  fghthist, fghthistu, fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (US ver 42-09, DE-0396-0 PCB)",    MACHINE_SUPPORTS_SAVE )
        // DE-0395-1 PCB sets (HuC6280 for sound)
        GAME( 1993, fghthist,   0,        fghthsta,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (World ver 43-09, DE-0395-1 PCB)", MACHINE_SUPPORTS_SAVE )
        GAME( 1993, fghthistua, fghthist, fghthsta,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (US ver 42-06, DE-0395-1 PCB)",    MACHINE_SUPPORTS_SAVE )
        GAME( 1993, fghthistub, fghthist, fghthsta,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (US ver 42-05, DE-0395-1 PCB)",    MACHINE_SUPPORTS_SAVE )
        GAME( 1993, fghthistj,  fghthist, fghthsta,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (Japan ver 41-07, DE-0395-1 PCB)", MACHINE_SUPPORTS_SAVE )
        // DE-0380-2 PCB sets (HuC6280 for sound)
        GAME( 1993, fghthista,  fghthist, fghthist,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (World ver 43-07, DE-0380-2 PCB)", MACHINE_SUPPORTS_SAVE )
        GAME( 1993, fghthistb,  fghthist, fghthist,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (World ver 43-05, DE-0380-2 PCB)", MACHINE_SUPPORTS_SAVE )
        GAME( 1993, fghthistuc, fghthist, fghthist,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (US ver 42-03, DE-0380-2 PCB)",    MACHINE_SUPPORTS_SAVE )
        GAME( 1993, fghthistja, fghthist, fghthist,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (Japan ver 41-05, DE-0380-2 PCB)", MACHINE_SUPPORTS_SAVE )
        // DE-0380-1 PCB sets (HuC6280 for sound)
        GAME( 1993, fghthistjb, fghthist, fghthist,  fghthist, fghthist_state, init_fghthist,  ROT0, "Data East Corporation", "Fighter's History (Japan ver 41-04, DE-0380-1 PCB)", MACHINE_SUPPORTS_SAVE )
        */

        // no crcs here: we don't want to generate IPSs
        { L"Fighter's History (US ver 42-09, DE-0396-0 PCB)",    L"lj00-3.1f" },
        
        { L"Fighter's History (World ver 43-09, DE-0395-1 PCB)", L"lc00-1.1f" },
        { L"Fighter's History (US ver 42-06, DE-0395-1 PCB)",    L"le00-1.1f" },
        { L"Fighter's History (US ver 42-05, DE-0395-1 PCB)",    L"le00.1f" },
        { L"Fighter's History (Japan ver 41-07, DE-0395-1 PCB)", L"lb00.1f" },
        
        { L"Fighter's History (World ver 43-07, DE-0380-2 PCB)", L"kx00-3.1f" },
        { L"Fighter's History (World ver 43-05, DE-0380-2 PCB)", L"kx00-2.1f" },
        { L"Fighter's History (US ver 42-03, DE-0380-2 PCB)",    L"kz00-1.1f" },
        { L"Fighter's History (Japan ver 41-05, DE-0380-2 PCB)", L"kw00-3.1f" },
        
        { L"Fighter's History (Japan ver 41-04, DE-0380-1 PCB)", L"kw00-2.1f" },
    };

    sCoreGameData m_sCoreGameData_US4209
    {
        L"Fighter's History US4209 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_US4209,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_World4309
    {
        L"Fighter's History World4309 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_World4309,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_US4206
    {
        L"Fighter's History US4206 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_US4206,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_US4205
    {
        L"Fighter's History US4205 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_US4205,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_Japan4107
    {
        L"Fighter's History Japan4107 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_Japan4107,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_World4307
    {
        L"Fighter's History World4307 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_World4307,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_World4305
    {
        L"Fighter's History World4305 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_World4305,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_US4203
    {
        L"Fighter's History US4203 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_US4203,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_Japan4105
    {
        L"Fighter's History Japan4105 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_Japan4105,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

    sCoreGameData m_sCoreGameData_Japan4104
    {
        L"Fighter's History Japan4104 (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_KARNOVSR,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_Japan4104,
        m_rgCRC32Data,
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

public:
    CGame_FightersHistory_A_DIR(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
