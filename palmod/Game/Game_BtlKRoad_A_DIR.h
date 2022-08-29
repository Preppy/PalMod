#pragma once
#include "GameClassByDir.h"
#include "BtlKRoad_A_DIR_DEF.h"

const sDirectoryLoadingData BKRFileLoadingData =
{
    {
        L"4-u46.bin",
        L"5-u39.bin",
    },
    FileReadType::Interleaved_Read2Bytes_BE,
    0x80000
};

class CGame_BtlKRoad_A_DIR : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        BtlKRoad_A,
        IMGDAT_SECTION_OTHER,
        BtlKRoad_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        BKRFileLoadingData,
        BtlKRoad_A_UNITS,
        ARRAYSIZE(BtlKRoad_A_UNITS),
        L"BtlKRoadE.txt",               // Extra filename
        48,                             // Count of palettes listed in the header
        0xaed0,                         // Lowest known location used for palettes
    };

public:
    CGame_BtlKRoad_A_DIR(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, BKRFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(BKRFileLoadingData); };
};
