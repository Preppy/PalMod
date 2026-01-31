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

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Real Bout Fatal Fury Special (Neo-Geo)", L"223-p1.p1", 0xf84a2d1d, 0 },
        { L"Real Bout Fatal Fury Special (Neo-Geo Korea)", L"223-p1k.p1", 0xb78c8391, 0 },

        { L"Real Bout Fatal Fury Special (Boss Hack)", L"223-p1bs.p1", 0xabf2a6e7, 0 },
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
        m_sFileLoadingData,
        m_rgCRC32Data,
        RBFFS_A_UNITS,
        ARRAYSIZE(RBFFS_A_UNITS),
        L"RBFFSE.txt",             // Extra filename
        904,                       // Count of palettes listed in the header
        0xd2000,                   // Lowest known location used for palettes
    };

    void DumpPaletteHeaders();

public:
    CGame_RBFFS_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
