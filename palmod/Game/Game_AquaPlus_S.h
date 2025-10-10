#pragma once
#include "GameClassByDir.h"
#include "AquaPlus_S_DEF.h"

class CGame_AquaPlus_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"a0.arc", 0x298CA77E },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Aquapazza: Aquaplus Dream Match (Steam)",
        AquaPlus_S,
        IMGDAT_SECTION_OTHER,
        AquaPlus_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        m_sFileLoadingData,
        {},
        AquaPlus_S_UNITS,
        ARRAYSIZE(AquaPlus_S_UNITS),
        {},             // Extra filename
        549,            // Count of palettes listed in the header
        0x76D0828,      // Lowest known location used for palettes
    };

public:
    CGame_AquaPlus_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

