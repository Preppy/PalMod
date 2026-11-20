#pragma once
#include "GameClassByDir.h"
#include "UMK3_A_DEF.h"

class CGame_UMK3_DS : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Ultimate Mortal Kombat (USA) (En,Fr,De,Es,It).nds", 0x4000000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Ultimate Mortal Kombat 3 (USA DS)", L"Ultimate Mortal Kombat (USA) (En,Fr,De,Es,It).nds", 0xAFF5CD37, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ultimate Mortal Kombat 3 (USA DS)",
        UMK3_DS,
        IMGDAT_SECTION_OTHER, // We're pulling in the Arcade sprites for this
        UMK3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE_NORMAL,
        m_sFileLoadingData,
        m_rgCRC32Data,
        UMK3_DS_UNITS,
        ARRAYSIZE(UMK3_DS_UNITS),
        L"UMK3_DS_E.txt",              // Extra filename
        386,                           // Count of palettes listed in the header
        0x11d5da,                      // Lowest known location used for palettes
    };

public:
    CGame_UMK3_DS(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
