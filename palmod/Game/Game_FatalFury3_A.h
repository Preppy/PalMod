#pragma once
#include "GameClassByDir.h"
#include "FatalFury3_A_DEF.h"

const sDirectoryLoadingData FatalFury3_A_FileLoadingData =
{
    {
        { L"069-p1.bin", 0x100000 },
    },
    FileReadType::Sequential,
};

class CGame_FatalFury3_A : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury 3 (Neo-Geo)",
        FatalFury3_A,
        IMGDAT_SECTION_KOF,
        FatalFury3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        FatalFury3_A_FileLoadingData,
        FatalFury3_A_UNITS,
        ARRAYSIZE(FatalFury3_A_UNITS),
        L"FatalFury3E.txt",             // Extra filename
        208,                            // Count of palettes listed in the header
        0xd0060,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury3_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, FatalFury3_A_FileLoadingData); };
};
