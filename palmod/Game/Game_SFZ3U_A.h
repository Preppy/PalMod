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
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        SFZ3U_A_UNITS,
        ARRAYSIZE(SFZ3U_A_UNITS),
        L"SFZ3UE.txt",             // Extra filename
        2224,                      // Count of palettes listed in the header
        0x3319a80,                 // Lowest known location used for palettes
    };

    std::array<int32_t, ARRAYSIZE(SFZ3U_A_UNITS)> m_activeNAOMIShiftTable =
    {
        /* Ryu */                   0,
        /* Ken */                   0,
        /* Akuma */                 0,
        /* Charlie */               0,
        /* Chun-Li */               0,
        /* Adon */                  0,
        /* Sodom */                 0,
        /* Guy */                   0,
        /* Birdie */                0,

        /* Rose */                  0,
        /* M.Bison */               0,
        /* Sagat */                 0,
        /* Dan */                   0,
        /* Sakura */                0,
        /* Rolento */               0,
        /* Dhalsim */               0,
        /* Zangief */               0,
        /* Gen */                   0,
        /* Chun-Li (X-Ism) */       0,
        /* Gen (Crane stance) */    0,
        /* Sodom (X-Ism) */         0,
        /* Balrog */                0,
        /* Cammy */                 0,
        /* Evil Ryu */              0,
        /* E.Honda */               0,
        /* Blanka */                0,
        /* R.Mika */                0,
        /* Cody */                  0,
        /* Vega */                  0,
        /* Karin */                 0,
        /* Juli */                  0,
        /* Juni */                  0,
        /* Guile */                 0,
        /* Fei Long */              0,
        /* Dee Jay */               0,
        /* T-Hawk */                0,
        /* Shin Akuma */            0,
        /* Balrog (Finished) */     0,
        /* select portraits */      -0x8A847C0,
        /* intro portraits */       0x1901040,
        /* charsel palettes */      0x1a0860 - 0x8c25020,
        /* win portraits */         0x1901040,
        0,
    };

    static void DumpAllCharacters();

public:
    CGame_SFZ3U_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

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
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFZ3U_S_UNITS,
        ARRAYSIZE(SFZ3U_S_UNITS),
        L"SFZ3USE.txt",            // Extra filename
        2224,                      // Count of palettes listed in the header
        0x197180,                  // Lowest known location used for palettes
    };

    std::array<int32_t, ARRAYSIZE(SFZ3U_S_UNITS)> m_activeSteamShiftTable =
    {
        /* Ryu */                   0x5ff0000 - 0x76f840,
        /* Ken */                   0x60bd800 - 0x81c040,
        /* Akuma */                 0x61b7000 - 0x8f4840,
        /* Charlie */               0x634b000 - 0x9a3840,
        /* Chun-Li */               0x6428000 - 0xa5b840,
        /* Adon */                  0x65d7000 - 0xb26840,
        /* Sodom */                 0x66de000 - 0xc0c840,
        /* Guy */                   0x68bd000 - 0xcbc840,
        /* Birdie */                0x69d4000 - 0xdae840,

        /* Rose */                  0x6b01000 - 0xeb6840,
        /* M.Bison */               0x6c3d000 - 0xfd1840,
        /* Sagat */                 0x6d43800 - 0x10b3040,
        /* Dan */                   0x6e09800 - 0x1154040,
        /* Sakura */                0x6f54000 - 0x1279840,
        /* Rolento */               0x7076800 - 0x1377040,
        /* Dhalsim */               0x7190000 - 0x146b840,
        /* Zangief */               0x732c000 - 0x15e6840,
        /* Gen */                   0x7451000 - 0x16ea840,
            /* Chun-Li (X-Ism) */       0x64eb000 - 0x17a3040,
        /* Gen (Crane stance) */    0x7546800 - 0x18a3040,
            /* Sodom (X-Ism) */         0x67ec000 - 0x19a7040,
        /* Balrog */                0x75fd000 - 0x1a46840,
        /* Cammy */                 0x77ee000 - 0x1b23840,
        /* Evil Ryu */              0x791e000 - 0x1c32840,
        /* E.Honda */               0x7a0b800 - 0x1cff040,
        /* Blanka */                0x7b8a800 - 0x1e59040,
        /* R.Mika */                0x7d0e800 - 0x1fae040,
        /* Cody */                  0x7e78000 - 0x20f6840,
        /* Vega */                  0x7fb4000 - 0x2211840,
        /* Karin */                 0x80eb000 - 0x231d040,
        /* Juli */                  0x820f800 - 0x2420840,
        /* Juni */                  0x831e000 - 0x250e040,
        /* Guile */                 0x8444000 - 0x2613040,
        /* Fei Long */              0x8562000 - 0x270c040,
        /* Dee Jay */               0x8660000 - 0x27e5040,
        /* T-Hawk */                0x87b6800 - 0x291a840,
            /* Shin Akuma */        0x627b000 - 0x29f1040,
            /* Balrog (Finished) */ 0x76ec000 - 0x2acd840,
            /* select portraits */  0,
            /* charsel palettes */  0,
            /* intro portraits */   0,
            /* win portraits */     0,
            /* bonus */             0x8c1b940 - 0x197180,
    };

public:
    CGame_SFZ3U_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
