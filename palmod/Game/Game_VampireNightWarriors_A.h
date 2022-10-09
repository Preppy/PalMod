#pragma once
#include "GameClassByDir.h"
#include "VampireNightWarriors_A_DEF.h"

class CGame_VampireNightWarriors_A : public CGameClassByDir
{
private:
    enum class VNWLoadingKey
    {
        ROM04,
        ROM09,
    };

    static VNWLoadingKey eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_4 =
    {
        {
            { L"vamj.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_9 =
    {
        {
            { L"vamj.09", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_4
    {
        L"Vampire: The Night Warriors (CPS2)",
        VampireNightWarriors_A,
        IMGDAT_SECTION_CPS2,
        VampireNightWarriors_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_4,
        VampireNightWarriors_A_UNITS_04,
        ARRAYSIZE(VampireNightWarriors_A_UNITS_04),
        L"VampireNightWarriors04E.txt",     // Extra filename
        61,                                 // Count of palettes listed in the header
        0x47ae8,                            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_9
    {
        L"Vampire: The Night Warriors (CPS2)",
        VampireNightWarriors_A,
        IMGDAT_SECTION_CPS2,
        VampireNightWarriors_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_9,
        VampireNightWarriors_A_UNITS_09,
        ARRAYSIZE(VampireNightWarriors_A_UNITS_09),
        L"VampireNightWarriorsE.txt",   // Extra filename
        120,                            // Count of palettes listed in the header
        0x1182a,                        // Lowest known location used for palettes
    };

public:
    CGame_VampireNightWarriors_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);
};
