#pragma once
#include "GameClassByDir.h"
#include "StreetFighter_A_DEF.h"

class CGame_StreetFighter_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sfd-19.2a", 0x10000 },
            { L"sfd-22.2c", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_CPS2,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        1,                          // Count of palettes listed in the header
        0x1ba68,                    // Lowest known location used for palettes
    };

public:
    CGame_StreetFighter_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
