#pragma once
#include "GameClassByDir.h"
#include "SAMSHO1_A_DEF.h"

class CGame_SAMSHO1_A : public CGameClassByDir
{
private:
    enum class SamSho1LoadingKey
    {
        NeoGeo,
        NeoStation,
    };

    static SamSho1LoadingKey m_eROMToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_NeoGeo =
    {
        {
            { L"045-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_NeoStation =
    {
        {
            { L"045-p2.rom", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_NeoGeo
    {
        L"Samurai Shodown (Neo-Geo)",
        SAMSHO1_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_NeoGeo,
        SAMSHO1_A_UNITS,
        ARRAYSIZE(SAMSHO1_A_UNITS),
        L"SamSho1E.txt",          // Extra filename
        290,                      // Count of palettes listed in the header
        0xe4a8a,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_NeoStation
    {
        L"Samurai Shodown (Neo-Geo Station)",
        SAMSHO1_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_NeoStation,
        SAMSHO1_A_UNITS,
        ARRAYSIZE(SAMSHO1_A_UNITS),
        L"SamSho1E.txt",          // Extra filename
        290,                      // Count of palettes listed in the header
        0xe4a8a,                  // Lowest known location used for palettes
    };

public:
    CGame_SAMSHO1_A(uint32_t nConfirmedROMSize);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};
