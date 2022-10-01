#pragma once
#include "GameClassByDir.h"
#include "FatalFuryS_SNES_DEF.h"

class CGame_FatalFuryS_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Fatal Fury Special (USA).sfc", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury Special(SNES)",
        FatalFuryS_SNES,
        IMGDAT_SECTION_KOF,
        FFS_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        FatalFuryS_SNES_UNITS,
        ARRAYSIZE(FatalFuryS_SNES_UNITS),
        L"FatalFurySE.txt",            // Extra filename
        30,                            // Count of palettes listed in the header
        0x13f1a0,                      // Lowest known location used for palettes
    };

public:
    CGame_FatalFuryS_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
