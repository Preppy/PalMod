#pragma once
#include "GameClassByDir.h"
#include "DBZHD_SNES_DEF.h"

class CGame_DBZHD_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"dragon ball z - hyper dimension (japan).sfc", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"DBZ: Hyper Dimension (SNES)",
        DBZHD_SNES,
        IMGDAT_SECTION_SNES,
        DBZHD_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        DBZHD_SNES_UNITS,
        ARRAYSIZE(DBZHD_SNES_UNITS),
        L"DBZHDE.txt",               // Extra filename
        230,                         // Count of palettes listed in the header
        0x18000,                     // Lowest known location used for palettes
    };

public:
    CGame_DBZHD_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
