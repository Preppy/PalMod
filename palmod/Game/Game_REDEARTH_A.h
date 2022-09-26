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
constexpr auto REDEARTH_30_PALETTE_COUNT = 645;
constexpr auto REDEARTH_31_PALETTE_COUNT = 1297;
constexpr auto REDEARTH_50_PALETTE_COUNT = 4;

constexpr auto REDEARTH_30_LOWEST_OFFSET = 0x42b080;
constexpr auto REDEARTH_31_LOWEST_OFFSET = 0x132600;
constexpr auto REDEARTH_50_LOWEST_OFFSET = 0x358000;

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
        REDEARTH_A_UNITS_50,
        ARRAYSIZE(REDEARTH_A_UNITS_50),
        L"RedEarth50e.txt",             // Extra filename
        REDEARTH_50_PALETTE_COUNT,      // Count of palettes listed in the header
        REDEARTH_50_LOWEST_OFFSET,      // Lowest known location used for palettes
    };

public:
    CGame_REDEARTH_A(uint32_t nConfirmedROMSize);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};
