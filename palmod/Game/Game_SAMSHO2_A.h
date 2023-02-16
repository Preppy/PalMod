#pragma once
#include "GameClassByDir.h"
#include "SAMSHO2_A_DEF.h"

class CGame_SAMSHO2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"063-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Samurai Shodown II (Neo-Geo)", L"063-p1.p1", 0x22368892, 0 },
        { L"Samurai Shodown II (Neo-Geo)", L"063-p1.bin", 0x22368892, 0 },
        { L"Samurai Shodown II (Special 2017, hack) ", L"063-p1-kan.p1", 0x147cc6d7, 0 },
        { L"Samurai Shodown II (Neo-Geo Optimized)", L"063-p1new.p1", 0xc7633c54, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown II (Neo-Geo)",
        SAMSHO2_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SAMSHO2_A_UNITS,
        ARRAYSIZE(SAMSHO2_A_UNITS),
        L"SamSho2E.txt",          // Extra filename
        390,                      // Count of palettes listed in the header
        0x14400,                  // Lowest known location used for palettes
    };

    static void DumpPaletteHeaders();

public:
    CGame_SAMSHO2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
