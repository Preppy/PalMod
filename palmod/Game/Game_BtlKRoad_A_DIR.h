#pragma once
#include "GameClassByDir.h"
#include "BtlKRoad_A_DIR_DEF.h"

class CGame_BtlKRoad_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"4-u46.bin", 0x40000 },
            { L"5-u39.bin", 0x40000 },
        },
        FileReadType::Interleaved_Read2Bytes_BE,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Battle K-Road (Psikyo)",
        BtlKRoad_A,
        IMGDAT_SECTION_OTHER,
        BtlKRoad_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        BtlKRoad_A_UNITS,
        ARRAYSIZE(BtlKRoad_A_UNITS),
        L"BtlKRoadE.txt",               // Extra filename
        48,                             // Count of palettes listed in the header
        0xaed0,                         // Lowest known location used for palettes
    };

public:
    CGame_BtlKRoad_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
