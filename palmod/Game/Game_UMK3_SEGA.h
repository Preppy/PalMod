#pragma once
#include "GameClassByDir.h"
#include "UMK3_SEGA_DEF.h"

class CGame_UMK3_SEGA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"ultimate mortal kombat 3 (usa).bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // this PAL shift is correct for most but incorrect for Bonus Fonts which appears to be 0xf0.  
        // but just not exposing this for now as it's imperfect
        { L"Ultimate Mortal Kombat 3 (Mega Drive PAL)", L"pal_ultimate_mk3.bin", 0xECFB5CB4, 0, 0x10c },
        { L"Ultimate Mortal Kombat 3 (Mega Drive USA)", L"ultimate mortal kombat 3 (usa).bin", 0x7290770D, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ultimate Mortal Kombat 3 (Mega Drive)",
        UMK3_SEGA,
        IMGDAT_SECTION_SNES,
        UMK3_SEGA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        UMK3_SEGA_UNITS,
        ARRAYSIZE(UMK3_SEGA_UNITS),
        L"UMK3_SEGA_E.txt",           // Extra filename
        253,                          // Count of palettes listed in the header
        0x66756,                      // Lowest known location used for palettes
    };

public:
    CGame_UMK3_SEGA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
