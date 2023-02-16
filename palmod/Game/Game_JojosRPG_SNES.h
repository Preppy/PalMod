#pragma once
#include "GameClassByDir.h"
#include "JOJOSRPG_SNES_DEF.h"

class CGame_JOJOSRPG_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"jojo no kimyou na bouken (japan).sfc", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Jojo's Bizarre Adventure (SNES)",
        JOJOSRPG_SNES,
        IMGDAT_SECTION_SNES,
        JOJOSRPG_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        JOJOSRPG_SNES_UNITS,
        ARRAYSIZE(JOJOSRPG_SNES_UNITS),
        L"JojosRPGE.txt",             // Extra filename
        37,                           // Count of palettes listed in the header
        0x817a,                       // Lowest known location used for palettes
    };

public:
    CGame_JOJOSRPG_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
