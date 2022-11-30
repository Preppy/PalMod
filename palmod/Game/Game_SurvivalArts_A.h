#pragma once
#include "GameClassByDir.h"
#include "SurvivalArts_A_DEF.h"

class CGame_SurvivalArts_A : public CGameClassByDir
{
private:
    enum class SurvivalArtsALoadingKey
    {
        USA,
        World,
    };

    static SurvivalArtsALoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_USA =
    {
        {
            { L"usa-pr-l.u4", 0x80000 },
            { L"usa-pr-h.u3", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_World =
    {
        {
            { L"prl-r6.u4", 0x80000 },
            { L"prh-r5.u3", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData_USA
    {
        L"Survival Arts (USA)",
        SurvivalArts_A,
        IMGDAT_SECTION_OTHER,
        SurvivalArts_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SurvivalArts,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        m_sFileLoadingData_USA,
        SurvivalArts_A_UNITS,
        ARRAYSIZE(SurvivalArts_A_UNITS),
        L"SurvivalArts_A_E.txt",    // Extra filename
        57,                         // Count of palettes listed in the header
        0x10f0c,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_World
    {
        L"Mortal Kombat II (Arcade rev L3.1)",
        SurvivalArts_A,
        IMGDAT_SECTION_OTHER,
        SurvivalArts_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SurvivalArts,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        m_sFileLoadingData_World,
        SurvivalArts_A_UNITS,
        ARRAYSIZE(SurvivalArts_A_UNITS),
        L"SurvivalArts_A_E.txt",    // Extra filename
        57,                         // Count of palettes listed in the header
        0x10f0c,                    // Lowest known location used for palettes
    };

public:
    CGame_SurvivalArts_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);
};
