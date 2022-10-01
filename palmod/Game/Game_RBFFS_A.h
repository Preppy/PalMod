#pragma once
#include "GameClassByDir.h"
#include "RBFFS_A_DEF.h"

class CGame_RBFFS_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"223-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Real Bout Fatal Fury Special (Neo-Geo)",
        RBFFS_A,
        IMGDAT_SECTION_KOF,
        RBFFS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData ,
        RBFFS_A_UNITS,
        ARRAYSIZE(RBFFS_A_UNITS),
        L"RBFFSE.txt",             // Extra filename
        808,                       // Count of palettes listed in the header
        0xd2000,                   // Lowest known location used for palettes
    };

    void DumpPaletteHeaders();

public:
    CGame_RBFFS_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
