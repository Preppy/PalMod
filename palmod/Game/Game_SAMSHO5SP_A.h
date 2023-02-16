#pragma once
#include "GameClassByDir.h"
#include "SAMSHO5SP_A_DEF.h"

class CGame_SAMSHO5SP_A : public CGameClassByDir
{
private:
    enum class SamSho5SpLoadingKey
    {
        NeoGeo,
        NeoGeoLarge,
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

    static inline const sDirectoryLoadingData m_sFileLoadingData_NeoGeoLarge =
    {
        {
            { L"273-p1.bin", 0x800000 },
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

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1.p1", 0xfb7a6bba, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1ca.p1", 0xc30a08dd, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1c.p1", 0x9291794d, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1.bin", 0xfb7a6bba, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1ca.bin", 0xc30a08dd, 0 },
        { L"Samurai Shodown V Special (Neo-Geo)", L"272-p1c.bin", 0x9291794d, 0 },

        { L"Samurai Shodown V Special (Steam)", L"p1h.bin", 0x2dbd32dc, 0 },

        { L"Samurai Shodown V Perfect / Samurai Spirits Zero Perfect [Hack]", L"273-p1.bin", 0xe3d18d3a, 0 },
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
        m_rgCRC32Data,
        SAMSHO5SP_A_UNITS,
        ARRAYSIZE(SAMSHO5SP_A_UNITS),
        L"SAMSHO5SPE.txt",        // Extra filename
        1664,                     // Count of palettes listed in the header
        0xd4000,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_NeoGeoLarge
    {
        L"Samurai Shodown V Perfect / Samurai Spirits Zero Perfect [Hack]",
        SAMSHO5SP_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO5SP_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_NeoGeoLarge,
        m_rgCRC32Data,
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
        m_rgCRC32Data,
        SAMSHO5SP_A_UNITS,
        ARRAYSIZE(SAMSHO5SP_A_UNITS),
        L"SAMSHO5SPE.txt",        // Extra filename
        1664,                     // Count of palettes listed in the header
        0xd4000,                  // Lowest known location used for palettes
    };

public:
    CGame_SAMSHO5SP_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};
