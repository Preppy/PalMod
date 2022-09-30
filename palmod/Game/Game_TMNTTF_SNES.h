#pragma once
#include "GameClassByDir.h"
#include "TMNTTF_SNES_DEF.h"

class CGame_TMNTTF_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sns-ky-0.u1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"TMNT: Tournament Fighters (SNES)",
        TMNTTF_SNES,
        IMGDAT_SECTION_SNES,
        TMNTTF_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        TMNTTF_SNES_UNITS,
        ARRAYSIZE(TMNTTF_SNES_UNITS),
        L"TMNTTFE.txt",               // Extra filename
        211,                          // Count of palettes listed in the header
        0x8000,                       // Lowest known location used for palettes
    };

public:
    CGame_TMNTTF_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
