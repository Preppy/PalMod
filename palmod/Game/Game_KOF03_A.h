#pragma once
#include "GameClassByDir.h"
#include "KOF03_A_DEF.h"

class CGame_KOF03_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"2k3-p1up.bin", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters 2003: 2004 EX Ultra Plus",
        KOF03_A,
        IMGDAT_SECTION_KOF,
        KOF03_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        {},
        KOF03_A_UNITS,
        ARRAYSIZE(KOF03_A_UNITS),
        L"KOF03E.txt",          // Extra filename
        1928,                   // Count of palettes listed in the header
        0x2000,                 // Lowest known location used for palettes
    };

    static void DumpGameHeaders();

public:
    CGame_KOF03_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
