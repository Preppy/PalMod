#pragma once
#include "GameClassByDir.h"
#include "BASARA_P_DEF.h"

class CGame_BASARA_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"BSR.bin", 0x1b206800 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Sengoku BASARA X (PS2)",
        BASARA_P,
        IMGDAT_SECTION_ARCSYS,
        BASARA_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_BASARA,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        BASARA_P_UNITS,
        ARRAYSIZE(BASARA_P_UNITS),
        L"BSRE.txt",            // Extra filename
        176,                    // Count of palettes listed in the header
        0x30,                   // Lowest known location used for palettes
    };

public:
    CGame_BASARA_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
