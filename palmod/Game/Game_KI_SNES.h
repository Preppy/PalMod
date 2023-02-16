#pragma once
#include "GameClassByDir.h"
#include "KI_SNES_DEF.h"

class CGame_KI_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Killer Instinct (USA) (Rev 1).sfc", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Killer Instinct (SNES Rev 1)", L"Killer Instinct (USA) (Rev 1).sfc", 0x09e9a04e, 0 },
        { L"Killer Instinct (SNES Rev 2)", L"Killer Instinct (USA).sfc", 0x252c1da7, 0x8 },
        { L"Killer Instinct (SNES Rev 2)", L"sns-akle-0.u1", 0x252c1da7, 0x8 },
        { L"Killer Instinct (SNES Rev 1)", L"Killer Instinct (USA) (Rev 1).smc", 0x09e9a04e, 0 },
        { L"Killer Instinct (SNES Rev 2)", L"Killer Instinct (USA).smc", 0x252c1da7, 0x8 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Killer Instinct (SNES)",
        KI_SNES,
        IMGDAT_SECTION_SNES,
        KI_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KI_SNES_UNITS,
        ARRAYSIZE(KI_SNES_UNITS),
        L"KIE.txt",               // Extra filename
        226,                      // Count of palettes listed in the header
        0x1949,                   // Lowest known location used for palettes
    };

public:
    CGame_KI_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
