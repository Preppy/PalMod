#pragma once
#include "GameClassByDir.h"
#include "BSSMSJR_SNES_DEF.h"

class CGame_BSSMSJR_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Bishoujo Senshi Sailor Moon S - Jougai Rantou! Shuyaku Soudatsusen (Japan).sfc", 0x280000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Bishojo Senshi Sailor Moon S - JR (SNES)",
        BSSMSJR_SNES,
        IMGDAT_SECTION_SNES,
        BSSMSJR_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        BSSMSJR_SNES_UNITS,
        ARRAYSIZE(BSSMSJR_SNES_UNITS),
        L"BSSMSJRE.txt",               // Extra filename
        18,                            // Count of palettes listed in the header
        0x20057e,                      // Lowest known location used for palettes
    };

public:
    CGame_BSSMSJR_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
