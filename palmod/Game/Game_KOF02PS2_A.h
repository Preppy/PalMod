#pragma once
#include "GameClassByDir.h"
#include "KOF02PS2_A_DEF.h"

class CGame_KOF02PS2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"265ps2-p2.bin", 0x500000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters 2002PS2 (Neo-Geo hack)",
        KOF02PS2_A,
        IMGDAT_SECTION_KOF,
        KOF02PS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KOF02PS2_A_UNITS,
        ARRAYSIZE(KOF02PS2_A_UNITS),
        L"KOF02PS2E.txt",       // Extra filename
        2195,                   // Count of palettes listed in the header
        0x388c00,               // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_KOF02PS2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
