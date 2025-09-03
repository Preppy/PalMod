#pragma once
#include "GameClassByDir.h"
#include "BnK_P_DEF.h"

class CGame_BnK_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"SLPM_662.78", 0x35e630 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Shin Gouketsuji Ichizoku: Bonnou no Kaihou (PS2)",
        BnK_P,
        IMGDAT_SECTION_MATRIM,
        BnK_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        BnK_P_UNITS,
        ARRAYSIZE(BnK_P_UNITS),
        L"BnKE.txt",        // Extra filename
        1716,               // Count of palettes listed in the header
        0x25d3ac,           // Lowest known location used for palettes
    };

public:
    CGame_BnK_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
