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

class CGame_SPF2T_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"spf2tu.21D3D8A7", 0x1850040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Super Puzzle Fighter II Turbo (Steam English 960620)", L"spf2tu.21D3D8A7", 0xa5a1ef7e, 0xa013e- 0x200fe },
        { L"Super Puzzle Fighter II X (Steam Japan 960531)", L"spf2xj.21D3D8A7", 0x84c2feb3, 0xa013e - 0x200fe },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Puzzle Fighter II Turbo (Steam Unknown Version)",
        SPF2T_S,
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
        L"SPF2TSE.txt",           // Extra filename
        304,                      // Count of palettes listed in the header
        0x1fffe,                  // Lowest known location used for palettes
    };

public:
    CGame_SPF2T_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
