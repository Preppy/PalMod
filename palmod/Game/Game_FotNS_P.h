#pragma once
#include "GameClassByDir.h"
#include "FotNS_P_DEF.h"

class CGame_FotNS_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"HK_B.bin", 0x24706800 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Hokuto no Ken (PS2)",
        FotNS_P,
        IMGDAT_SECTION_ARCSYS,
        FotNS_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_FotNS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        FotNS_P_UNITS,
        ARRAYSIZE(FotNS_P_UNITS),
        L"HK_BE.txt",           // Extra filename
        88,                     // Count of palettes listed in the header
        0x30,                   // Lowest known location used for palettes
    };

public:
    CGame_FotNS_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
