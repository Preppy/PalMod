#pragma once
#include "GameClassByDir.h"
#include "SF2CE_A_DEF.h"

class CGame_SF2CE_A : public CGameClassByDir
{
private:
    enum class SF2CELoadingKey
    {
        ROM21,
        ROM22,
        ROM23,
    };

    static SF2CELoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM21 =
    {
        {
            { L"s92_21a.6f", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM22 =
    {
        {
            { L"s92_22a.7f", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM23 =
    {
        {
            { L"s92e_23b.8f", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM21
    {
        L"Street Fighter II' - Champion Edition (ROM 21 - Portraits)",
        SF2CE_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM21,
        SF2CE_A_21_UNITS,
        ARRAYSIZE(SF2CE_A_21_UNITS),
        L"SF2CE-21e.txt",        // Extra filename
        36,                   // Count of palettes listed in the header
        0x93fe,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM22
    {
        L"Street Fighter II' - Champion Edition (ROM 22 - Characters)",
        SF2CE_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM22,
        SF2CE_A_22_UNITS,
        ARRAYSIZE(SF2CE_A_22_UNITS),
        L"SF2CE-22e.txt",         // Extra filename
        35,                         // Count of palettes listed in the header
        0x16834,                          // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM23
    {
        L"Street Fighter II' - Champion Edition (ROM 23 - Continue Portraits)",
        SF2CE_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM23,
        SF2CE_A_23_UNITS,
        ARRAYSIZE(SF2CE_A_23_UNITS),
        L"SF2CE-23e.txt",        // Extra filename
        17,                          // Count of palettes listed in the header
        0x01dff8,                          // Lowest known location used for palettes
    };

    static constexpr auto k_SF2CE_JapanROMName_RevA = L"s92j_22a.7f";
    static constexpr auto k_SF2CE_JapanROMName_RevB = L"s92j_22b.7f";
    static constexpr auto k_SF2CE_JapanROMName_RevC = L"s92j_22c.7f";

public:
    CGame_SF2CE_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId);
};
