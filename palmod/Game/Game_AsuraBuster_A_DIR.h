#pragma once
#include "GameClassByDir.h"
#include "AsuraBuster_A_DIR_DEF.h"

const sDirectoryLoadingData AsuraBusterFileLoadingData =
{
    {
        { L"pgm3.u1", 0x80000 },
        { L"pgm2.u2", 0x80000 },
        { L"pgm1.u3", 0x80000 },
        { L"pgm0.u4", 0x80000 },
    },
    FileReadType::Interleaved,
    0x200000
};

class CGame_AsuraBuster_A_DIR : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        L"Asura Buster - Eternal Warriors (Fuuki)",
        AsuraBuster_A,
        IMGDAT_SECTION_OTHER,
        AsuraBuster_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ASURABUSTER,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_xBGR555_LE,
        AsuraBusterFileLoadingData,
        AsuraBuster_A_UNITS,
        ARRAYSIZE(AsuraBuster_A_UNITS),
        L"AsuraBusterE.txt",             // Extra filename
        412,                             // Count of palettes listed in the header
        0x4c350,                         // Lowest known location used for palettes
    };

public:
    CGame_AsuraBuster_A_DIR(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, AsuraBusterFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(AsuraBusterFileLoadingData); };
};
