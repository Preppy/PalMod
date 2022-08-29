#pragma once
#include "GameClassByDir.h"
#include "MK2_SNES_DEF.h"

const sDirectoryLoadingData MK2_SNES_FileLoadingData =
{
    {
        { L"mortal kombat ii (usa).sfc", 0x300000 },
    },
    FileReadType::Sequential,
    0x300000
};

class CGame_MK2_SNES : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        MK2_SNES,
        IMGDAT_SECTION_SNES,
        MK2_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        MK2_SNES_FileLoadingData,
        MK2_SNES_UNITS,
        ARRAYSIZE(MK2_SNES_UNITS),
        L"MK2_SNES_E.txt",               // Extra filename
        51,                             // Count of palettes listed in the header
        0xe7d9f,                         // Lowest known location used for palettes
    }; 

public:
    CGame_MK2_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, MK2_SNES_FileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(MK2_SNES_FileLoadingData); };
};
