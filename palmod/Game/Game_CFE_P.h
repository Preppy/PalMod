#pragma once
#include "GameClassByDir.h"
#include "CFE_P_DEF.h"

class CGame_CFE_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"SLUS_209.50", 0x22a330 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom Fighting Evolution (PS2)",
        CFE_P,
        IMGDAT_SECTION_CPS2,
        CFE_P_IMG_UNITS,
        {
            NO_SPECIAL_OPTIONS,
            PALWriteOutputOptions::WRITE_MAX
        },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        CFE_P_UNITS,
        ARRAYSIZE(CFE_P_UNITS),
        L"CFEe.txt",                
        112,
        0x1e4e10,
    };

public:
    CGame_CFE_P(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
