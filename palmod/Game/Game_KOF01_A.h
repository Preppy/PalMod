#pragma once
#include "GameClassByDir.h"
#include "KOF01_A_DEF.h"

class CGame_KOF01_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"262-p2-08-e0.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters 2001 (Neo-Geo)", L"262-p2-08-e0.sp2", 0x8e0d8329, 0 },
        { L"Crouching Tiger Hidden Dragon 2003 (Bootleg)", L"5003-p2.bin", 0xadc1c22b, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters 2001 (Neo-Geo)",
        KOF01_A,
        IMGDAT_SECTION_KOF,
        KOF01_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF01_A_UNITS,
        ARRAYSIZE(KOF01_A_UNITS),
        L"KOF01E.txt",      // Extra filename
        1472,               // Count of palettes listed in the header
        0x386722,           // Lowest known location used for palettes
    };

    static void DumpPaletteHeaders();

public:
    CGame_KOF01_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
