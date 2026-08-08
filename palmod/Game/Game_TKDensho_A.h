#pragma once
#include "GameClassByDir.h"
#include "TKDensho_A_DEF.h"

class CGame_TKDenshou_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"aeprge-2.pal", 0x80000 },
            { L"aeprgo-2.pau", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Touki Denshou Angel Eyes (Tecmo Arcade)",
        TKDenshou_A,
        IMGDAT_SECTION_OTHER,
        TKDENSHOU_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_TKDENSHOU_5,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BRG555_LE,
        m_sFileLoadingData,
        {},
        TKDENSHOU_A_UNITS,
        ARRAYSIZE(TKDENSHOU_A_UNITS),
        L"TKDenshouE.txt",        // Extra filename
        115,                      // Count of palettes listed in the header
        0xc9400,                  // Lowest known location used for palettes
    };

public:
    CGame_TKDenshou_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    
    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
