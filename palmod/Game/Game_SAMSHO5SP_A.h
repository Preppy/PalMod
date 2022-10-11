#pragma once
#include "GameClassByDir.h"
#include "SAMSHO5SP_A_DEF.h"

class CGame_SAMSHO5SP_A : public CGameClassByDir
{
private:
    enum class SamSho5SpLoadingKey
    {
        NeoGeo,
        Steam,
    };

    static SamSho5SpLoadingKey m_eROMToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_NeoGeo =
    {
        {
            { L"272-p1.p1", 0x400000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Steam =
    {
        {
            { L"p1h.bin", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_NeoGeo
    {
        L"Samurai Shodown V Special (Neo-Geo)",
        SAMSHO5SP_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO5SP_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_NeoGeo,
        SAMSHO5SP_A_UNITS,
        ARRAYSIZE(SAMSHO5SP_A_UNITS),
        L"SAMSHO5SPE.txt",        // Extra filename
        1664,                     // Count of palettes listed in the header
        0xd4000,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Steam
    {
        L"Samurai Shodown V Special (Steam)",
        SAMSHO5SP_S,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO5SP_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Steam,
        SAMSHO5SP_A_UNITS,
        ARRAYSIZE(SAMSHO5SP_A_UNITS),
        L"SAMSHO5SPE.txt",        // Extra filename
        1664,                     // Count of palettes listed in the header
        0xd4000,                  // Lowest known location used for palettes
    };

public:
    CGame_SAMSHO5SP_A(uint32_t nConfirmedROMSize);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};
