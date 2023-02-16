#pragma once
#include "GameClassByDir.h"
#include "CFTE_SNES_DEF.h"

class CGame_CFTE_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Clay Fighter - Tournament Edition (USA).sfc", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Clay Fighter: TE", L"Clay Fighter - Tournament Edition (USA).sfc", 0xb360f7af, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Clay Fighter: TE (SNES)",
        CFTE_SNES,
        IMGDAT_SECTION_SNES,
        CFTE_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        CFTE_SNES_UNITS,
        ARRAYSIZE(CFTE_SNES_UNITS),
        L"CFTEe.txt",               // Extra filename
        56,                         // Count of palettes listed in the header
        0x10000,                    // Lowest known location used for palettes
    };

public:
    CGame_CFTE_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
