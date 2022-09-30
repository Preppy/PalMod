#pragma once
#include "GameClassByDir.h"
#include "RANMACRH_SNES_DEF.h"

class CGame_RANMACRH_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Ranma Nibunnoichi - Chougi Ranbu Hen (J).sfc", 0x280000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ranma Nibunnoichi: Chougi Ranbu Hen (SNES)",
        RANMACRH_SNES,
        IMGDAT_SECTION_SNES,
        RANMACRH_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4P,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        RANMACRH_SNES_UNITS,
        ARRAYSIZE(RANMACRH_SNES_UNITS),
        L"RanmaCRHE.txt",               // Extra filename
        52,                             // Count of palettes listed in the header
        0x62be2,                        // Lowest known location used for palettes
    };

public:
    CGame_RANMACRH_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
