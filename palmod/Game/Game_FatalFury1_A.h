#pragma once
#include "GameClassByDir.h"
#include "FatalFury1_A_DEF.h"

class CGame_FatalFury1_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"033-p1.p1", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury: King of Fighters (Neo-Geo)",
        FatalFury1_A,
        IMGDAT_SECTION_KOF,
        FatalFury1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        FatalFury1_A_UNITS,
        ARRAYSIZE(FatalFury1_A_UNITS),
        L"FatalFury1E.txt",             // Extra filename
        142,                            // Count of palettes listed in the header
        0x3276c,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury1_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
