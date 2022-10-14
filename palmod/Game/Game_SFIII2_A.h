#pragma once
#include "GameClassByDir.h"
#include "SFIII2_A_DEF.h"

class CGame_SFIII2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"50", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFIII:2I (CPS3 Arcade)",
        SFIII2_A,
        IMGDAT_SECTION_SF3,
        SFIII2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData,
        SFIII2_A_50_UNITS,
        ARRAYSIZE(SFIII2_A_50_UNITS),
        L"SFIII2e.txt",             // Extra filename
        846,                        // Count of palettes listed in the header
        0x398000,                   // Lowest known location used for palettes
    };

public:
    CGame_SFIII2_A(uint32_t nConfirmedROMSize, bool fUseNormalData = true) { if (fUseNormalData) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); }  };

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;
};

