#pragma once
#include "GameClassByDir.h"
#include "RANMAHB_SNES_DEF.h"

class CGame_RANMAHB_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"ranma 1-2 - hard battle (usa).sfc", 0x180000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ranma Nibunnoichi: Hard Battle (SNES)",
        RANMAHB_SNES,
        IMGDAT_SECTION_SNES,
        RANMAHB_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        RANMAHB_SNES_UNITS,
        ARRAYSIZE(RANMAHB_SNES_UNITS),
        L"RanmaHBE.txt",               // Extra filename
        24,                            // Count of palettes listed in the header
        0x181e1,                       // Lowest known location used for palettes
    };

public:
    CGame_RANMAHB_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
