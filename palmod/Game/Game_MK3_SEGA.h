#pragma once
#include "GameClassByDir.h"
#include "MK3_SEGA_DEF.h"

class CGame_MK3_SEGA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mortal kombat 3 (usa).bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // This *almost* but not quite works (bonus has a further shift) so not exposing this at this time
        { L"Mortal Kombat 3 (Mega Drive PAL)", L"mortal_kombat_3_pal.bin", 0xAF6DE3E8, 0 },
        { L"Mortal Kombat 3 (Mega Drive PAL)", L"mortal_kombat_3_pal.gen", 0xAF6DE3E8, 0 },
        { L"Mortal Kombat 3 (Mega Drive PAL)", L"mortal_kombat_3_pal.md", 0xAF6DE3E8, 0 },
        { L"Mortal Kombat 3 (Mega Drive USA)", L"mortal kombat 3 (usa).bin", 0xDD638AF6, 0 },
        { L"Mortal Kombat 3 (Mega Drive USA)", L"mortal kombat 3 (usa).gen", 0xDD638AF6, 0 },
        { L"Mortal Kombat 3 (Mega Drive USA)", L"mortal kombat 3 (usa).md", 0xDD638AF6, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mortal Kombat 3 (Mega Drive)",
        MK3_SEGA,
        IMGDAT_SECTION_SEGA,
        MK3_SEGA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MK3_SEGA_UNITS,
        ARRAYSIZE(MK3_SEGA_UNITS),
        L"MK3_SEGA_E.txt",            // Extra filename
        181,                          // Count of palettes listed in the header
        0x4f374,                      // Lowest known location used for palettes
    };

public:
    CGame_MK3_SEGA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
