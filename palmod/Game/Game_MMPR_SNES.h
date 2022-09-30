#pragma once
#include "GameClassByDir.h"
#include "MMPR_SNES_DEF.h"

class CGame_MMPR_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Mighty Morphin Power Rangers - The Fighting Edition (USA).sfc", 0x180000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"MMPR:TFE (SNES)",
        MMPR_SNES,
        IMGDAT_SECTION_SNES,
        MMPR_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        MMPR_SNES_UNITS,
        ARRAYSIZE(MMPR_SNES_UNITS),
        L"MMPRE.txt",               // Extra filename
        21,                         // Count of palettes listed in the header
        0x141b24,                   // Lowest known location used for palettes
    };

public:
    CGame_MMPR_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
