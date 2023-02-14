#pragma once
#include "GameClassByDir.h"
#include "TekkenAdvance_GBA_DEF.h"

class CGame_TekkenAdvance_GBA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Hajime no Ippo - The Fighting! (Japan).gba", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Tekken Advance (USA GBA)",
        TekkenAdvance_GBA,
        IMGDAT_SECTION_OTHER,
        TekkenAdvance_GBA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesChaoticAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        TekkenAdvance_GBA_UNITS,
        ARRAYSIZE(TekkenAdvance_GBA_UNITS),
        L"TekkenAdvance-GBAe.txt",      // Extra filename
        33,                             // Count of palettes listed in the header
        0x751984,                       // Lowest known location used for palettes
    };

public:
    CGame_TekkenAdvance_GBA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
