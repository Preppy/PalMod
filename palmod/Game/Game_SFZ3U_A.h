#pragma once
#include "GameClassByDir.h"
#include "SFZ3U_A_DEF.h"

class CGame_SFZ3U_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // also street_fighter_zero_3_upper.dat
            { L"StreetFighterZero3Upper.bin", 0xac00000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter Zero 3 Upper (NAOMI)",
        SFZ3U_A,
        IMGDAT_SECTION_CPS2,
        SFZ3U_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        SFZ3U_A_UNITS,
        ARRAYSIZE(SFZ3U_A_UNITS),
        L"SFZ3UE.txt",             // Extra filename
        1140,                      // Count of palettes listed in the header
        0x5ff0000,                 // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_SFZ3U_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SFZ3U_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"z3u.21D3D8A7", 0x7f4a840 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter Zero 3 Upper (Steam)", L"z3u.21D3D8A7",  0x867c6e9d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter Zero 3 Upper (Steam)",
        SFZ3U_S,
        IMGDAT_SECTION_CPS2,
        SFZ3U_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFZ3U_A_UNITS,
        ARRAYSIZE(SFZ3U_A_UNITS),
        L"SFZ3USE.txt",            // Extra filename
        1140,                      // Count of palettes listed in the header
        0x5ff0000,                 // Lowest known location used for palettes
    };

    std::array<int32_t, ARRAYSIZE(SFZ3U_A_UNITS)> m_activeSteamShiftTable =
    {
        /* Ryu */                   0x5ff0000 - 0x1a0840,
        /* Ken */                   0x60bd800 - 0x1a0900,
        /* Akuma */                 0x61b7000 - 0x1a09c0,
        /* Charlie */               0x634b000 - 0x1a0a80,
        /* Chun-Li */               0x6428000 - 0x1a0b40,
        /* Adon */                  0x65d7000 - 0x1a0c00,
        /* Sodom */                 0x66de000 - 0x1a0cc0,
        /* Guy */                   0x68bd000 - 0x1a0d80,
        /* Birdie */                0x69d4000 - 0x1a0e40,

        /* Rose */                  0x6b01000 - 0x1a0f00,
        /* M.Bison */               0x6c3d000 - 0x1a0fc0,
        /* Sagat */                 0x6d43800 - 0x1a1080,
        /* Dan */                   0x6e09800 - 0x1a1140,
        /* Sakura */                0x6f54000 - 0x1a1200,
        /* Rolento */               0x7076800 - 0x1a12c0,
        /* Dhalsim */               0x7190000 - 0x1a1380,
        /* Zangief */               0x732c000 - 0x1a1440,
        /* Gen */                   0x7451000 - 0x1a1500,
            /* Chun-Li (X-Ism) */       0x64eb000 - 0x1a15c0,
        /* Gen (Crane stance) */    0x7546800 - 0x1a1680,
            /* Sodom (X-Ism) */         0x67ec000 - 0x1a1740,
        /* Balrog */                0x75fd000 - 0x1a1800,
        /* Cammy */                 0x77ee000 - 0x1a18c0,
        /* Evil Ryu */              0x791e000 - 0x1a1980,
        /* E.Honda */               0x7a0b800 - 0x1a1a40,
        /* Blanka */                0x7b8a800 - 0x1a1b00,
        /* R.Mika */                0x7d0e800 - 0x1a1bc0,
        /* Cody */                  0x7e78000 - 0x1a1c80,
        /* Vega */                  0x7fb4000 - 0x1a1d40,
        /* Karin */                 0x80eb000 - 0x1a1e00,
        /* Juli */                  0x820f800 - 0x1a1ec0,
        /* Juni */                  0x831e000 - 0x1a1f80,
        /* Guile */                 0x8444000 - 0x1a2040,
        /* Fei Long */              0x8562000 - 0x1a2100,
        /* Dee Jay */               0x8660000 - 0x1a21c0,
        /* T-Hawk */                0x87b6800 - 0x1a2280,
            /* Shin Akuma */            0x627b000 - 0x1a2340,
            /* Balrog (Finished) */     0x76ec000 - 0x1a2400,
    };

public:
    CGame_SFZ3U_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
