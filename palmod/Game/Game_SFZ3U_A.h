#pragma once
#include "GameClassByDir.h"
#include "SFZ3U_A_DEF.h"

class CGame_SFZ3U_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // also street_fighter_zero_3_upper.dat
            { L"StreetFighterZero3Upper.bin", 0xac00000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter Zero 3 Upper (NAOMI)",
        SFZ3U_A,
        IMGDAT_SECTION_CPS2,
        SFZ3U_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        SFZ3U_A_UNITS,
        ARRAYSIZE(SFZ3U_A_UNITS),
        L"SFZ3UE.txt",             // Extra filename
        1140,                      // Count of palettes listed in the header
        0x5ff0000,                 // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_SFZ3U_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
