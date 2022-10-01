#pragma once
#include "GameClassByDir.h"
#include "JusticeLeagueTF_SNES_DEF.h"

class CGame_JusticeLeagueTF_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"justice league task force (usa).sfc", 0x280000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Justice League Task Force (USA SNES)",
        JusticeLeagueTF_SNES,
        IMGDAT_SECTION_SNES,
        JusticeLeagueTF_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        JusticeLeagueTF_SNES_UNITS,
        ARRAYSIZE(JusticeLeagueTF_SNES_UNITS),
        L"JusticeLeagueTFE.txt",        // Extra filename
        82,                             // Count of palettes listed in the header
        0x1a92a,                        // Lowest known location used for palettes
    };

public:
    CGame_JusticeLeagueTF_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
