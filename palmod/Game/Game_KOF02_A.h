#pragma once
#include "GameClassByDir.h"
#include "KOF02_A_DEF.h"

class CGame_KOF02_A : public CGameClassByDir
{
private:
    static void DumpAllCharacters();

    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"265-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters 2002 (Neo-Geo)", L"265-p2.sp2", 0x327266b8, 0 },
        { L"King of Fighters 2002 Remix Ultra 3.5 (Neo-Geo Hack)", L"kf2k2ru35-p2.bin", 0x75185760, 0x300000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters 2002 (Neo-Geo)",
        KOF02_A,
        IMGDAT_SECTION_KOF,
        KOF02_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF02_A_UNITS,
        ARRAYSIZE(KOF02_A_UNITS),
        L"KOF02E.txt",              // Extra filename
        2195,                       // Count of palettes listed in the header
        0x1b4e0,                    // Lowest known location used for palettes
    };

public:
    CGame_KOF02_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
