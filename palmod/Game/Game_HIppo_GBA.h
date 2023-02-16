#pragma once
#include "GameClassByDir.h"
#include "HIppo_GBA_DEF.h"

class CGame_HIppo_GBA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Hajime no Ippo - The Fighting! (Japan).gba", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // If we need further differentiation, we can bytesniff at 0xa0
        { L"Hajime no Ippo - The Fighting! (Japan)", L"Hajime no Ippo - The Fighting! (Japan).gba", 0x63045aa, 0 },
    };


    const sCoreGameData m_sCoreGameData
    {
        L"Hajime no Ippo - The Fighting! (Japan GBA)",
        HIppo_GBA,
        IMGDAT_SECTION_OTHER,
        HIppo_GBA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesChaoticAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        HIppo_GBA_UNITS,
        ARRAYSIZE(HIppo_GBA_UNITS),
        L"HIppo-GBAe.txt",      // Extra filename
        86,                     // Count of palettes listed in the header
        0x48a1c,                // Lowest known location used for palettes
    };

public:
    CGame_HIppo_GBA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
