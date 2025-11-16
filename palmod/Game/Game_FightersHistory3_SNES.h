#pragma once
#include "GameClassByDir.h"
#include "FightersHistory3_SNES_DEF.h"

class CGame_FightersHistory3_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Fighter's History - Mizoguchi Kikiippatsu!! (Japan).sfc", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fighter's History - Mizoguchi Kikiippatsu!! (Japan)", L"Fighter's History - Mizoguchi Kikiippatsu!! (Japan).sfc", 0x65BB5DC4, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fighter's History - Mizoguchi Kikiippatsu!! (Japan)",
        FightersHistory3_SNES,
        IMGDAT_SECTION_SNES,
        FightersHistory3_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_FH3SNES,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FightersHistory3_SNES_UNITS,
        ARRAYSIZE(FightersHistory3_SNES_UNITS),
        L"FightersHistory3SE.txt",      // Extra filename
        192,                            // Count of palettes listed in the header
        0x80200,                        // Lowest known location used for palettes
    };

public:
    CGame_FightersHistory3_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
