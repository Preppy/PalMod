#pragma once
#include "GameClassByDir.h"
#include "PrimalRage_SNES_DEF.h"

class CGame_PrimalRage_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Primal Rage (USA).sfc", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Primal Rage (SNES)",
        PrimalRage_SNES,
        IMGDAT_SECTION_SNES,
        PrimalRage_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_PRIMALRAGE,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        PrimalRage_SNES_UNITS,
        ARRAYSIZE(PrimalRage_SNES_UNITS),
        L"PrimalRageE.txt",               // Extra filename
        31,                               // Count of palettes listed in the header
        0x19071,                          // Lowest known location used for palettes
    }; 

public:
    CGame_PrimalRage_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
