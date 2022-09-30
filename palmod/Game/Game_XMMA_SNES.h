#pragma once
#include "GameClassByDir.h"
#include "XMMA_SNES_DEF.h"

class CGame_XMMA_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"X-Men - Mutant Apocalypse (USA).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"X-Men: Mutant Apocalypse (SNES)",
        XMMA_SNES,
        IMGDAT_SECTION_SNES,
        XMMA_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        XMMA_SNES_UNITS,
        ARRAYSIZE(XMMA_SNES_UNITS),
        L"XMMAE.txt",               // Extra filename
        65,                         // Count of palettes listed in the header
        0xa860,                     // Lowest known location used for palettes
    };

public:
    CGame_XMMA_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
