#pragma once
#include "GameClassByDir.h"
#include "CVS1_A_DEF.h"

class CGame_CVS1_A : public CGameClassByDir
{
private:
    enum class CvS1LoadingKey
    {
        ROM,
        SIMM,
    };

    static CvS1LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM =
    {
        {
            { L"Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin", 0x7800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_SIMM =
    {
        {
            // Just need these two
            { L"mpr-23504.ic1", 0x1000000 },
            { L"mpr-23505.ic2", 0x1000000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Capcom vs SNK Millenium Fight (NAOMI)", L"Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin", 0x20be359d, 0 },
        { L"Capcom vs SNK Millenium Fight (NAOMI re-rip)", L"mpr-23504.ic1", 0xe01a31d2, -0x800000 },
    };

    const sCoreGameData m_sCoreGameData_ROM
    {
        L"Capcom vs SNK Millenium Fight (NAOMI)",
        CVS1_A,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_ROM,
        m_rgCRC32Data,
        CVS1_A_UNITS,
        ARRAYSIZE(CVS1_A_UNITS),
        L"CVS1E.txt",           // Extra filename
        1312,                   // Count of palettes listed in the header
        0x8b6d00,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_SIMM
    {
        L"Capcom vs SNK Millenium Fight (NAOMI Rerip)",
        CVS1_A,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_SIMM,
        m_rgCRC32Data,
        CVS1_A_UNITS,
        ARRAYSIZE(CVS1_A_UNITS),
        L"CVS1E.txt",           // Extra filename
        1312,                   // Count of palettes listed in the header
        0x8b6d00,               // Lowest known location used for palettes
    };

    void DumpAllCharacters();

public:
    CGame_CVS1_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_CVS1_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cvs1.21D3D8A7", 0x45a1840 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Capcom vs. SNK Millennium Fight 2000 Pro (Steam)", L"cvs1.21D3D8A7", 0xa8813e6c, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs. SNK Millennium Fight 2000 Pro (Steam)",
        CVS1_S,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        CVS1_S_UNITS,
        ARRAYSIZE(CVS1_S_UNITS),
        L"CVS1SE.txt",          // Extra filename
        1392,                   // Count of palettes listed in the header
        0x290c00,               // Lowest known location used for palettes
    };

public:
    CGame_CVS1_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
