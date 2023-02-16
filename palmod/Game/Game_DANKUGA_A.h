#pragma once
#include "GameClassByDir.h"
#include "DANKUGA_A_DEF.h"

class CGame_DanKuGa_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"dkg_mpr2.19", 0x80000 },
            { L"dkg_mpr3.20", 0x80000 },
            { L"dkg_mpr0.17", 0x80000 },
            { L"dkg_mpr1.18", 0x80000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Dan-Ku-Ga (Taito F3 System Arcade)",
        DANKUGA_A,
        IMGDAT_SECTION_TAITO,
        DANKUGA_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_DANKUGA,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_SHARP,
        m_sFileLoadingData,
        {},
        DANKUGA_A_UNITS,
        ARRAYSIZE(DANKUGA_A_UNITS),
        L"DANKUGAe.txt",          // Extra filename
        151,                      // Count of palettes listed in the header
        0x2d538,                  // Lowest known location used for palettes
    };

public:
    CGame_DanKuGa_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    
    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
