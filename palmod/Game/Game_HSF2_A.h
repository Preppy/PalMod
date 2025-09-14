#pragma once
#include "GameClassByDir.h"
#include "HSF2_A_DEF.h"

class CGame_HSF2_A : public CGameClassByDir
{
private:
    enum class HSF2LoadingKey
    {
        ROM03,
        ROM04,
        ROM10,
    };

    static HSF2LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_03 =
    {
        {
            { L"hs2u.03", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_04 =
    {
        {
            { L"hs2u.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_10 =
    {
        {
            { L"hs2.10", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"HSF2 (CPS2 USA 03: Portraits)", L"hs2u.03", 0xb308151e, 0 },
        { L"HSF2 (CPS2 USA 04: Characters)", L"hs2u.04", 0x327aa49c, 0 },
        { L"HSF2 (CPS2 USA 10: Stages)", L"hs2.10", 0x20D0F9E4, 0 },

        { L"HSF2 (CPS2 Japan 03: Portraits)", L"hs2j.03", 0x6EFE661F, 0 },
        { L"HSF2 (CPS2 Japan 03: Portraits)", L"hs2j.03c", 0x6EFE661F, 0 },
        { L"HSF2 (CPS2 Japan 04: Characters)", L"hs2j.04", 0x93F2500A, 0 },
        { L"HSF2 (CPS2 Japan 04: Characters)", L"hs2j.04b", 0x93F2500A, 0 },
        { L"HSF2 (CPS2 Japan 10: Stages)", L"hs2j.10", 0x20D0F9E4, 0 },
    };

    const sCoreGameData m_sCoreGameData_03
    {
        L"HSF2 (CPS2 Portraits)",
        HSF2_A,
        IMGDAT_SECTION_SF2,
        HSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_03,
        m_rgCRC32Data,
        HSF2_A_UNITS_03,
        ARRAYSIZE(HSF2_A_UNITS_03),
        L"HSF2-03e.txt",     // Extra filename
        386,                 // Count of palettes listed in the header
        0xcb5e,             // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_04
    {
        L"HSF2 (CPS2 Characters)",
        HSF2_A,
        IMGDAT_SECTION_SF2,
        HSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_04,
        m_rgCRC32Data,
        HSF2_A_UNITS_04,
        ARRAYSIZE(HSF2_A_UNITS_04),
        L"HSF2-04e.txt",   // Extra filename
        677,               // Count of palettes listed in the header
        0x43f9e,           // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_10
    {
        L"HSF2 (CPS2 Stages)",
        HSF2_A,
        IMGDAT_SECTION_SF2,
        HSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_10,
        m_rgCRC32Data,
        HSF2_A_UNITS_10,
        ARRAYSIZE(HSF2_A_UNITS_10),
        L"HSF2-10e.txt",    // Extra filename
        37,                 // Count of palettes listed in the header
        0x43a0,             // Lowest known location used for palettes
    };

public:
    CGame_HSF2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_HSF2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"hsf2j.21D3D8A7", 0x3050040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"HSF2 (Steam Japan 040202)", L"hsf2j.21D3D8A7", 0xd004fecd, 0 },
        { L"HSF2 (Steam English 040202)", L"hsf2.21D3D8A7", 0x2fa9413d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"HSF2 (Steam)",
        HSF2_S,
        IMGDAT_SECTION_SF2,
        HSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        HSF2_A_UNITS_MONO,
        ARRAYSIZE(HSF2_A_UNITS_MONO),
        L"HSF2S.txt",   // Extra filename
        // The Steam version is just a flat aggregate of the individual 3 HSF2 roms at this point
        386 + 677 + 37, // Count of palettes listed in the header
        0xcb5e,         // Lowest known location used for palettes
    };

public:
    CGame_HSF2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
