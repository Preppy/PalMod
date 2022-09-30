#pragma once
#include "GameClassByDir.h"
#include "DBZEB_DS_DEF.h"

class CGame_DBZEB_DS : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Dragon Ball Z - Extreme Butoden (USA) Decrypted.3ds", 0x18F32000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS)",
        DBZEB_DS,
        IMGDAT_SECTION_DS,
        DBZEB_3DS_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData,
        DBZEB_DS_UNITS,
        ARRAYSIZE(DBZEB_DS_UNITS),
        L"dbzebE.txt",               // Extra filename
        696,                         // Count of palettes listed in the header
        0xc981a0,                    // Lowest known location used for palettes
    };

public:
    CGame_DBZEB_DS(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
