#pragma once
#include "GameClassByDir.h"
#include "KOF00N_A_DEF.h"

class CGame_KOF00N_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"257-pg2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters 2000n (Neo-Geo)",
        KOF00N_A,
        IMGDAT_SECTION_KOF,
        KOF00N_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        {},
        KOF00N_A_UNITS,
        ARRAYSIZE(KOF00N_A_UNITS),
        L"KOF00nE.txt",     // Extra filename
        1160,               // Count of palettes listed in the header
        0xc97f0,            // Lowest known location used for palettes
    };

public:
    CGame_KOF00N_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
