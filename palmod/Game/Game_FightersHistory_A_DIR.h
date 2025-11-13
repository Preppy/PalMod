#pragma once
#include "GameClassByDir.h"
#include "FightersHistory_A_DIR_DEF.h"

class CGame_FightersHistory_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"lc00-1.1f", 0x80000 },
            { L"lc01-1.2f", 0x80000 },
        },
        FileReadType::Interleaved_Read2Bytes_LE,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fighter's History (Data East DECO32)",
        FightersHistory_A,
        IMGDAT_SECTION_OTHER,
        FightersHistory_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData,
        {},
        FightersHistory_A_UNITS,
        ARRAYSIZE(FightersHistory_A_UNITS),
        L"FightersHistoryE.txt",        // Extra filename
        81,                             // Count of palettes listed in the header
        0xb7140,                        // Lowest known location used for palettes
    };

public:
    CGame_FightersHistory_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
