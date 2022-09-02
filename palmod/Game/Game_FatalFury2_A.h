#pragma once
#include "GameClassByDir.h"
#include "FatalFury2_A_DEF.h"

const sDirectoryLoadingData FatalFury2_A_FileLoadingData =
{
    {
        { L"047-p1.bin", 0x80000 },
    },
    FileReadType::Sequential,
};

class CGame_FatalFury2_A : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury 2 (Neo-Geo)",
        FatalFury2_A,
        IMGDAT_SECTION_KOF,
        FatalFury2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        FatalFury2_A_FileLoadingData,
        FatalFury2_A_UNITS,
        ARRAYSIZE(FatalFury2_A_UNITS),
        L"FatalFury2E.txt",             // Extra filename
        115,                            // Count of palettes listed in the header
        0x38000,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury2_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, FatalFury2_A_FileLoadingData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;
};
