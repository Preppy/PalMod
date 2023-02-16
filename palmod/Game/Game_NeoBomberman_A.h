#pragma once
#include "GameClassByDir.h"
#include "NeoBomberman_A_DEF.h"

class CGame_NeoBomberman_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"093-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Neo Bomberman (Neo-Geo)",
        NeoBomberman_A,
        IMGDAT_SECTION_NEOGEO,
        NEOBOMBERMAN_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        {},
        NeoBomberman_A_UNITS,
        ARRAYSIZE(NeoBomberman_A_UNITS),
        L"NeoBombermanE.txt",        // Extra filename
        43,                          // Count of palettes listed in the header
        0xc14ea,                     // Lowest known location used for palettes
    };

public:
    CGame_NeoBomberman_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
