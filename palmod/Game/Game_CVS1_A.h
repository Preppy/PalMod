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

    const sCoreGameData m_sCoreGameData_ROM
    {
        L"Capcom vs SNK Millenium Fight (NAOMI)",
        CVS1_A,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_ROM,
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
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_SIMM,
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

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);
};
