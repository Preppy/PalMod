#pragma once
#include "GameClassByDir.h"
#include "TattooAsns_A_DEF.h"

class CGame_TattooAsns_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"pp44.cpu", 0x80000 },
            { L"pp45.cpu", 0x80000 },
        },
        FileReadType::Interleaved_Read2Bytes_LE,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Tattoo Assassins (DECO32)",
        TattooAsns_A,
        IMGDAT_SECTION_OTHER,
        TattooAsns_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_TattooAsns,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR888,
        m_sFileLoadingData,
        {},
        TattooAsns_A_UNITS,
        ARRAYSIZE(TattooAsns_A_UNITS),
        L"TattooAsns_A_E.txt",      // Extra filename
        71,                         // Count of palettes listed in the header
        0x2b81c,                    // Lowest known location used for palettes
    };


public:
    CGame_TattooAsns_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
