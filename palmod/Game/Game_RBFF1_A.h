#pragma once
#include "GameClassByDir.h"
#include "RBFF1_A_DEF.h"

class CGame_RBFF1_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData RBFF1_A_FileLoadingData =
    {
        {
            { L"095-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Real Bout Fatal Fury (Neo-Geo)",
        RBFF1_A,
        IMGDAT_SECTION_KOF,
        RBFF1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        RBFF1_A_FileLoadingData,
        RBFF1_A_UNITS,
        ARRAYSIZE(RBFF1_A_UNITS),
        L"RBFF1E.txt",             // Extra filename
        64,                        // Count of palettes listed in the header
        0xc0200,                   // Lowest known location used for palettes
    };

public:
    CGame_RBFF1_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, RBFF1_A_FileLoadingData); };
};
