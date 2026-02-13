#pragma once
#include "GameClassByDir.h"
#include "TekkenAdvance_GBA_DEF.h"

class CGame_TekkenAdvance_GBA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Tekken Advance (USA).gba", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Tekken Advance (USA GBA)", L"Tekken Advance (USA).gba", 0xc59ea73b, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Tekken Advance (USA GBA)",
        TekkenAdvance_GBA,
        IMGDAT_SECTION_DS,
        TekkenAdvance_GBA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_3_TEKGBA,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        TekkenAdvance_GBA_UNITS,
        ARRAYSIZE(TekkenAdvance_GBA_UNITS),
        L"TekkenAdvance-GBAe.txt",      // Extra filename
        33,                             // Count of palettes listed in the header
        0x751984,                       // Lowest known location used for palettes
    };

public:
    CGame_TekkenAdvance_GBA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
