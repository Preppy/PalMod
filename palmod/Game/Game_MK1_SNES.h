#pragma once
#include "GameClassByDir.h"
#include "MK1_SNES_DEF.h"

class CGame_MK1_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Mortal Kombat (USA).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mortal Kombat (SNES)",
        MK1_SNES,
        IMGDAT_SECTION_SNES,
        MK1_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        MK1_SNES_UNITS,
        ARRAYSIZE(MK1_SNES_UNITS),
        L"MK1_SNES_E.txt",            // Extra filename
        54,                           // Count of palettes listed in the header
        0x1c16,                       // Lowest known location used for palettes
    };

public:
    CGame_MK1_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
