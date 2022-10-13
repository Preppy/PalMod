#pragma once
#include "GameClassByDir.h"
#include "KOFXI_A_DEF.h"

class CGame_KOFXI_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"gdrom_KOFXI_v5_AllFighters.bin", 0xf000000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters XI (Atomiswave)",
        KOFXI_A,
        IMGDAT_SECTION_KOF,
        KOFXI_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_KOFXI,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        KOFXI_A_UNITS,
        ARRAYSIZE(KOFXI_A_UNITS),
        L"KOFXIe.txt",              // Extra filename
        7680,                       // Count of palettes listed in the header
        0x1011000,                  // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_KOFXI_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
