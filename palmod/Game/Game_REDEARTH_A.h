#pragma once
#include "GameClassByDir.h"
#include "REDEARTH_A_DEF.h"

enum class RedEarthLoadingKey
{
    RedEarthROM30,
    RedEarthROM31,
    RedEarthROM50,
};

// I'm using defines since these are used for both the mono and simm versions
constexpr auto REDEARTH_30_PALETTE_COUNT = 913;
constexpr auto REDEARTH_31_PALETTE_COUNT = 1597;
constexpr auto REDEARTH_50_PALETTE_COUNT = 3218;

constexpr auto REDEARTH_30_LOWEST_OFFSET = 0x734000;
constexpr auto REDEARTH_31_LOWEST_OFFSET = 0x132600;
constexpr auto REDEARTH_50_LOWEST_OFFSET = 0x260000;

class CGame_REDEARTH_A : public CGameClassByDir
{
private:
    static RedEarthLoadingKey m_eROMToLoad;

    static inline const sDirectoryLoadingData RedEarth_A_FileLoadingData_30 =
    {
        {
            { L"30", 0x800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData RedEarth_A_FileLoadingData_31 =
    {
        {
            { L"31", 0x800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData RedEarth_A_FileLoadingData_50 =
    {
        {
            { L"50", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Red Earth: Stages (CPS3 ROM 30)",      L"30", 0x074cab4d, 0 },
        { L"Red Earth: Characters (CPS3 ROM 31)",  L"31", 0x14e2cad4, 0 },
        { L"Red Earth: Coming Next (CPS3 ROM 50)", L"50", 0x2f5b44bd, 0 },
    };

    const sCoreGameData m_sCoreGameData_30
    {
        L"Red Earth: Stages (CPS3 ROM 30)",
        REDEARTH_A,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        RedEarth_A_FileLoadingData_30,
        m_rgCRC32Data,
        REDEARTH_A_UNITS_30,
        ARRAYSIZE(REDEARTH_A_UNITS_30),
        L"RedEarth30e.txt",             // Extra filename
        REDEARTH_30_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_30_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_31
    {
        L"Red Earth: Characters (CPS3 ROM 31)",
        REDEARTH_A,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        RedEarth_A_FileLoadingData_31,
        m_rgCRC32Data,
        REDEARTH_A_UNITS_31,
        ARRAYSIZE(REDEARTH_A_UNITS_31),
        L"RedEarthE.txt",               // Extra filename
        REDEARTH_31_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_31_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_50
    {
        L"Red Earth: Coming Next (CPS3 ROM 50)",
        REDEARTH_A,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        RedEarth_A_FileLoadingData_50,
        m_rgCRC32Data,
        REDEARTH_A_UNITS_50,
        ARRAYSIZE(REDEARTH_A_UNITS_50),
        L"RedEarth50e.txt",             // Extra filename
        REDEARTH_50_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_50_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

public:
    CGame_REDEARTH_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_REDEARTH_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"redearth.21D3D8A7", 0x4480040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Red Earth (Steam Red Earth 961121)", L"redearth.21D3D8A7", 0x074cab4d, 0 },
        { L"Red Earth (Steam Warzard 961121)",   L"warzard.21D3D8A7", 0x14e2cad4, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Red Earth (Steam Unknown Version)",
        REDEARTH_S,
        IMGDAT_SECTION_REDEARTH,
        REDEARTH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        REDEARTH_A_UNITS_MONO,
        ARRAYSIZE(REDEARTH_A_UNITS_MONO),
        L"RedEarthSe.txt",              // Extra filename
        REDEARTH_30_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_30_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

public:
    CGame_REDEARTH_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
