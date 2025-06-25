#pragma once
#include "GameClassByDir.h"
#include "SSF2_A_DEF.h"

class CGame_SSF2_A : public CGameClassByDir
{
private:
    enum class SSF2LoadingKey
    {
        ROM03,
        ROM04,
        ROM07,
    };

    static SSF2LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM03 =
    {
        {
            { L"ssfe-03b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM04 =
    {
        {
            { L"ssfe.04b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07 =
    {
        {
            { L"ssfe.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_03 =
    {
        { L"SSF2 (CPS2 03 Portraits)", L"ssfe-03b", 0xaf654792 },
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_04 =
    {
        { L"SSF2 (CPS2 04 Characters)", L"ssfe.04b", 0xb082aa67 },
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_07 =
    {
        { L"SSF2 (CPS2 07 Stages)", L"ssfe.07", 0x2409001d },
    };

    const sCoreGameData m_sCoreGameData_ROM03
    {
        L"SSF2 (CPS2 03 Portraits)",
        SSF2_A,
        IMGDAT_SECTION_SF2,
        SSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM03,
        m_rgCRC32Data_03,
        SSF2_A_UNITS_03,
        ARRAYSIZE(SSF2_A_UNITS_03),
        L"SSF2-3e.txt",     // Extra filename
        257,                // Count of palettes listed in the header
        0x2e370,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM04
    {
        L"SSF2 (CPS2 04 Characters)",
        SSF2_A,
        IMGDAT_SECTION_SF2,
        SSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM04,
        m_rgCRC32Data_04,
        SSF2_A_UNITS_04,
        ARRAYSIZE(SSF2_A_UNITS_04),
        L"SSF2-4e.txt",     // Extra filename
        200,                // Count of palettes listed in the header
        0x13d0c,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07
    {
        L"SSF2 (CPS2 08 Stages)",
        SSF2_A,
        IMGDAT_SECTION_SF2,
        SSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07,
        m_rgCRC32Data_07,
        SSF2_A_UNITS_07,
        ARRAYSIZE(SSF2_A_UNITS_07),
        L"SSF2-7e.txt",     // Extra filename
        204,                // Count of palettes listed in the header
        0x3be,              // Lowest known location used for palettes
    };

public:
    CGame_SSF2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

