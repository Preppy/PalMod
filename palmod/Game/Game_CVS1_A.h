#pragma once
#include "GameClassByDir.h"
#include "CVS1_A_DEF.h"

class CGame_CVS1_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin", 0x7800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK Millenium Fight (NAOMI)",
        CVS1_A,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        CVS1_A_UNITS,
        ARRAYSIZE(CVS1_A_UNITS),
        L"CVS1E.txt",           // Extra filename
        1312,                   // Count of palettes listed in the header
        0x8b6d00,               // Lowest known location used for palettes
    };

public:
    CGame_CVS1_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void DumpAllCharacters();

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
