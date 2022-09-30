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
        KI_SNES_UNITS,
        ARRAYSIZE(KI_SNES_UNITS),
        L"KIE.txt",               // Extra filename
        226,                      // Count of palettes listed in the header
        0x1949,                   // Lowest known location used for palettes
    };

public:
    CGame_KI_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
