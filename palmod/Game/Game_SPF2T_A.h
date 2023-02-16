#pragma once
#include "GameClassByDir.h"
#include "SPF2T_A_DEF.h"

class CGame_SPF2T_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"pzf.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Super Puzzle Fighter II Turbo (CPS2)", L"pzf.04", 0xb80649e2, 0 },
        { L"Super Puzzle Fighter II Turbo (CPS2)", L"pzf.04a", 0xb80649e2, 0 },

        { L"Super Puzzle Fighter II Turbo (Color Blind Hack, v1.1)", L"pzfcb.04", 0xb80649e2, 0 },
        { L"Super Puzzle Fighter 2 X' Balance Patch (Hack)", L"pzfxp.04", 0xb80649e2, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Puzzle Fighter II Turbo (CPS2)",
        SPF2T_A,
        IMGDAT_SECTION_CPS2,
        SPF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SPF2T_A_UNITS,
        ARRAYSIZE(SPF2T_A_UNITS),
        L"SPF2TE.txt",            // Extra filename
        304,                      // Count of palettes listed in the header
        0x1fffe,                  // Lowest known location used for palettes
    };

public:
    CGame_SPF2T_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
