#pragma once
#include "GameClassByDir.h"
#include "AsuraBuster_A_DIR_DEF.h"

class CGame_AsuraBuster_A_DIR : public CGameClassByDir
{
private:
    enum class ABLoadingKey
    {
        AB_JapanR,
        AB_Japan1,
        AB_Japan2,
        AB_USA,
    };

    static ABLoadingKey m_eVersionToLoad;

    // various shifts in this as well, so we don't expose it
    static inline const sDirectoryLoadingData m_sFileLoadingData_JapanR = { { { L"24-31.pgm3", 0x80000 }, { L"0-7.pgm0", 0x80000 }, { L"8-15.pgm1", 0x80000 }, { L"16-23.pgm2", 0x80000 }, },
                                                                            FileReadType::Interleaved_4FileSets, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan1 = { { { L"pgm3.u1", 0x80000 }, { L"pgm2.u2", 0x80000 }, { L"pgm1.u3", 0x80000 }, { L"pgm0.u4", 0x80000 }, },
                                                                            FileReadType::Interleaved_4FileSets, };
    // Japan set has this shift for the core palettes but then portraits and then stages have further shifts so we don't expose it
    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan2 = { { { L"pgm3_583a.u1", 0x80000 }, { L"pgm2_0ff4.u2", 0x80000 }, { L"pgm1_bac7.u3", 0x80000 }, { L"pgm0_193a.u4", 0x80000 }, },
                                                                            FileReadType::Interleaved_4FileSets, };
    static inline const sDirectoryLoadingData m_sFileLoadingData_USA =    { { { L"uspgm3.u1", 0x80000 }, { L"uspgm2.u2", 0x80000 }, { L"uspgm1.u3", 0x80000 }, { L"uspgm0.u4", 0x80000 }, },
                                                                            FileReadType::Interleaved_4FileSets, };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // 0x24d39 in 24-41.pgm3
        { L"IMPERFECT Asura Buster - Eternals Warriors (Fuuki, ARCADIA review build)",  L"24-31.pgm3",      0, (0x24d39 - 0x24d24) * 4 },
        // 0x24d24
        { L"Asura Buster - Eternals Warriors (Fuuki, Japan, set 1)",                    L"pgm3.u1",         0, 0 },
        // 0x24d73
        { L"IMPERFECT Asura Buster - Eternals Warriors (Fuuki, Japan, set 2)",          L"pgm3_583a.u1",    0, (0x24d73 - 0x24d24) * 4 },
        // 0x261ad BUT it's in uspgm1.u3
        { L"IMPERFECT Asura Buster - Eternals Warriors (Fuuki, USA)",                   L"uspgm3.u1",       0, 0x986B6 - 0x93490 },
    };

    const sCoreGameData m_sCoreGameData_JapanR
    {
        L"Asura Buster - Eternal Warriors (Fuuki, ARCADIA review build)",
        AsuraBuster_A,
        IMGDAT_SECTION_OTHER,
        AsuraBuster_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ASURABUSTER,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_xBGR555_LE,
        m_sFileLoadingData_JapanR,
        m_rgCRC32Data,
        AsuraBuster_A_UNITS,
        ARRAYSIZE(AsuraBuster_A_UNITS),
        L"AsuraBusterE.txt",             // Extra filename
        1029,                            // Count of palettes listed in the header
        0x4c230,                         // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Japan1
    {
        L"Asura Buster - Eternal Warriors (Fuuki, Japan, set 1)",
        AsuraBuster_A,
        IMGDAT_SECTION_OTHER,
        AsuraBuster_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ASURABUSTER,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_xBGR555_LE,
        m_sFileLoadingData_Japan1,
        m_rgCRC32Data,
        AsuraBuster_A_UNITS,
        ARRAYSIZE(AsuraBuster_A_UNITS),
        L"AsuraBusterE.txt",             // Extra filename
        1029,                            // Count of palettes listed in the header
        0x4c230,                         // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Japan2
    {
        L"Asura Buster - Eternal Warriors (Fuuki, Japan, set 2)",
        AsuraBuster_A,
        IMGDAT_SECTION_OTHER,
        AsuraBuster_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ASURABUSTER,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_xBGR555_LE,
        m_sFileLoadingData_Japan2,
        m_rgCRC32Data,
        AsuraBuster_A_UNITS,
        ARRAYSIZE(AsuraBuster_A_UNITS),
        L"AsuraBusterE.txt",             // Extra filename
        1029,                            // Count of palettes listed in the header
        0x4c230,                         // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USA
    {
        L"Asura Buster - Eternal Warriors, (Fuuki USA)",
        AsuraBuster_A,
        IMGDAT_SECTION_OTHER,
        AsuraBuster_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ASURABUSTER,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_xBGR555_LE,
        m_sFileLoadingData_USA,
        m_rgCRC32Data,
        AsuraBuster_A_UNITS,
        ARRAYSIZE(AsuraBuster_A_UNITS),
        L"AsuraBusterE.txt",             // Extra filename
        1029,                            // Count of palettes listed in the header
        0x4c230,                         // Lowest known location used for palettes
    };

public:
    CGame_AsuraBuster_A_DIR(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
