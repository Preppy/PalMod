#pragma once
#include "GameClassByDir.h"
#include "UMK3_DS_DEF.h"

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

    const sCoreGameData m_sCoreGameData
    {
        L"Ultimate Mortal Kombat 3 (USA DS)",
        UMK3_DS,
        IMGDAT_SECTION_DS,
        UMK3_DS_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        UMK3_DS_UNITS,
        ARRAYSIZE(UMK3_DS_UNITS),
        L"UMK3_DS_E.txt",              // Extra filename
        45,                            // Count of palettes listed in the header
        0x1b26a0,                      // Lowest known location used for palettes
    };

public:
    CGame_UMK3_DS(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
