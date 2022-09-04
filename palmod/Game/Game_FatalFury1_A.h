#pragma once
#include "GameClassByDir.h"
#include "FatalFury1_A_DEF.h"

const sDirectoryLoadingData FatalFury1_A_FileLoadingData =
{
    {
        { L"033-p1.p1", 0x80000 },
    },
    FileReadType::Sequential,
};

class CGame_FatalFury1_A : public CGameClassByDir
{
private:
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
        FatalFury1_A_FileLoadingData,
        FatalFury1_A_UNITS,
        ARRAYSIZE(FatalFury1_A_UNITS),
        L"FatalFury1E.txt",             // Extra filename
        46,                             // Count of palettes listed in the header
        0x32d6c,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFury1_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, FatalFury1_A_FileLoadingData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;
};
