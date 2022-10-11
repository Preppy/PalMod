#pragma once
#include "GameClassByDir.h"
#include "SAMSHO5_A_DEF.h"

class CGame_SAMSHO5_A : public CGameClassByDir
{
private:
    enum class SamSho5LoadingKey
    {
        NeoGeo,
        Xbox,
    };

    static SamSho5LoadingKey m_eROMToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_NeoGeo =
    {
        {
            { L"270-p1.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Xbox =
    {
        {
            { L"ssvx_p1.rom", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_NeoGeo
    {
        L"Samurai Shodown V (Neo-Geo)",
        SAMSHO5_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO5_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_NeoGeo,
        SAMSHO5_A_UNITS,
        ARRAYSIZE(SAMSHO5_A_UNITS),
        L"SAMSHO5E.txt",          // Extra filename
        1673,                      // Count of palettes listed in the header
        0xd4000,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Xbox
    {
        L"Samurai Shodown V (Xbox)",
        SAMSHO5X_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO5_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Xbox,
        SAMSHO5_A_UNITS,
        ARRAYSIZE(SAMSHO5_A_UNITS),
        L"SAMSHO5E.txt",          // Extra filename
        1673,                      // Count of palettes listed in the header
        0xd4000,                  // Lowest known location used for palettes
    };

public:
    CGame_SAMSHO5_A(uint32_t nConfirmedROMSize);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};
