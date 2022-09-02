#pragma once
#include "GameClassByDir.h"
#include "FatalFuryS_A_DEF.h"

const sDirectoryLoadingData FatalFuryS_A_FileLoadingData =
{
    {
        { L"058-p1.p1", 0x100000 },
    },
    FileReadType::Sequential,
};

class CGame_FatalFuryS_A : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury S (Neo-Geo)",
        FatalFuryS_A,
        IMGDAT_SECTION_KOF,
        FFS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        FatalFuryS_A_FileLoadingData,
        FatalFuryS_A_UNITS,
        ARRAYSIZE(FatalFuryS_A_UNITS),
        L"FatalFurySAE.txt",             // Extra filename
        147,                            // Count of palettes listed in the header
        0x40000,                        // Lowest known location used for palettes
    };

public:
    CGame_FatalFuryS_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, FatalFuryS_A_FileLoadingData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;
};
