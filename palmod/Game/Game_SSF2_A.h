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
        { L"SSF2 (CPS2 World 930911 03 Portraits)", L"ssfe-03b", 0xaf654792 },
        { L"SSF2 (CPS2 USA 930911 03 Portraits)", L"ssfu.03a", 0x72F29C33 },
        { L"SSF2:TB (CPS2 World 931119 03 Portraits)", L"ssfe.03tc", 0x496A8409, 0x2eeec - 0x2e370 },
        { L"SSF2:TB (CPS2 World 930911 03 Portraits)", L"ssfe.3t", 0x1E018E34, 0x2ee14 - 0x2e370 },
        { L"SSF2:TB (CPS2 Japan 930911 03 Portraits)", L"ssfj.3t", 0x980D4450, 0x2ee14 - 0x2e370 },
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_04 =
    {
        { L"SSF2 (CPS2 World 930911 04 Characters)", L"ssfe.04", 0xb082aa67 },
        { L"SSF2 (CPS2 USA 930911 04 Characters)", L"ssfu.04a", 0x935CEA44 },
        { L"SSF2:TB (CPS2 World 931119 04 Characters)", L"ssfe.04tc", 0x4B45C18B, 0x1487e - 0x13d0c },
        { L"SSF2:TB (CPS2 World 930911 04 Characters)", L"ssfe.4t", 0xAC92EFAF, 0x147b0 - 0x13d0c },
        { L"SSF2:TB (CPS2 Japan 930911 04 Characters)", L"ssfj.4t", 0xB4DC1906, 0x147b0 - 0x13d0c },
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_07 =
    {
        { L"SSF2 (CPS2 World 930911 07 Stages)", L"ssfe.07", 0x2409001d },
        { L"SSF2 (CPS2 USA 930911 07 Stages)", L"ssfu.07", 0xE6066077 },
        { L"SSF2:TB (CPS2 World 931119 07 Stages)", L"ssfe.07tc", 0x2C9F4782 },
        { L"SSF2:TB (CPS2 World 930911 07 Stages)", L"ssfe.7t", 0x2C9F4782 },
        { L"SSF2:TB (CPS2 Japan 930911 07 Stages)", L"ssfj.7t", 0x1F239515 },
    };

    const sCoreGameData m_sCoreGameData_ROM03
    {
        L"SSF2 (CPS2 03 Portraits)",
        SSF2_A,
        IMGDAT_SECTION_SF2,
        SSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SSF2_08,
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
        DEF_BUTTONLABEL_SSF2_08,
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
        L"SSF2 (CPS2 07 Stages)",
        SSF2_A,
        IMGDAT_SECTION_SF2,
        SSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SSF2_08,
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

class CGame_SSF2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"bundleSuperStreetFighterII.mbundle", 0x1077a89b },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Super Street Fighter II (Steam)", L"bundleSuperStreetFighterII.mbundle", 0xb39c0b73, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Street Fighter II (Steam)",
        SSF2_S,
        IMGDAT_SECTION_SF2,
        SSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SSF2_08,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SSF2_A_UNITS_MONO,
        ARRAYSIZE(SSF2_A_UNITS_MONO),
        L"SSF2-Se.txt",         // Extra filename
        661,                    // Count of palettes listed in the header
        0x925f5d7,              // Lowest known location used for palettes
    };

public:
    CGame_SSF2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
