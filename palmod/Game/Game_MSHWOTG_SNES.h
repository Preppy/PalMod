#pragma once
#include "GameClassByDir.h"
#include "MSHWOTG_SNES_DEF.h"

class CGame_MSHWOTG_SNES : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Marvel Super Heroes in War of the Gems (USA).sfc", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Marvel Super Heroes: War of the Gems (SNES USA)",
        MSHWOTG_SNES,
        IMGDAT_SECTION_SNES,
        MSHWOTG_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        MSHWOTG_SNES_UNITS,
        ARRAYSIZE(MSHWOTG_SNES_UNITS),
        L"MSHWOTGE.txt",               // Extra filename
        86,                            // Count of palettes listed in the header
        0x5e7d1,                       // Lowest known location used for palettes
    };

public:
    CGame_MSHWOTG_SNES(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
