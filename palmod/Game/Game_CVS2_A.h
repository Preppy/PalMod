#pragma once
#include "GameClassByDir.h"
#include "CVS2_A_DEF.h"

class CGame_CVS2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"SNKGD_SL.bin", 0x9800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK 2 (NAOMI)",
        CVS2_A,
        IMGDAT_SECTION_CPS2,
        CVS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        CVS2_A_UNITS,
        ARRAYSIZE(CVS2_A_UNITS),
        L"CVS2E.txt",           // Extra filename
        2296,                   // Count of palettes listed in the header
        0x1488e80,              // Lowest known location used for palettes
    };

    void DumpAllCharacters();

    void WarnIfROMIsEncrypted(CFile* LoadedFile);

public:
    CGame_CVS2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    
    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_CVS2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cvs2.21D3D8A7", 0x5ba8840 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Capcom vs SNK 2 (Steam)", L"cvs2.21D3D8A7", 0x5ac6d5ea, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK 2 (Steam)",
        CVS2_S,
        IMGDAT_SECTION_CPS2,
        CVS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        CVS2_A_UNITS,
        ARRAYSIZE(CVS2_A_UNITS),
        L"CVS2SE.txt",          // Extra filename
        2296,                   // Count of palettes listed in the header
        0xd92400,               // Lowest known location used for palettes
    };

    std::array<int32_t, ARRAYSIZE(CVS2_A_UNITS)> m_activeSteamShiftTable =
    {
        /* Akuma */             0x20759c0 - 0x1a327a0,
        /* Athena */            0x36e48a0 - 0x31fbe40,
        /* Balrog */            0x31d3320 - 0x2c9ffc0,
        /* Benimaru */          0x2e38300 - 0x28be340,
        /* Blanka */            0x1b32560 - 0x1497aa0,
        /* Cammy */             0x1f6fc60 - 0x191dd00,
        /* Chang and Choi */    0x38111a0 - 0x3335b40,
        /* Chun-Li */           0x166f140 - 0xf90680,
        /* Dan */               0x328c960 - 0x2d64080,
        /* Dhalsim */           0x19aef60 - 0x12fb9a0,
        /* E.Honda */           0x1a33500 - 0x138e7e0,
        /* Eagle */             0x342f920 - 0x2f1c540,
        /* Geese */             0x28e8ee0 - 0x231b080,
        /* Guile */             0x1777de0 - 0x10a76e0,
        /* Haohmaru */          0x3c4ed80 - 0x37a5a00,
        /* Hibiki */            0x3b16dc0 - 0x3663160,
        /* Iori */              0x248f660 - 0x1e82f20,
        /* Joe */               0x3344620 - 0x2e25f00,
        /* Ken */               0x1553500 - 0xe690c0,
        /* Kim */               0x27d80a0 - 0x21fd600,
        /* King */              0x2f76140 - 0x2a1aaa0,
        /* Kyo */               0x23a5180 - 0x1d8abc0,
        /* Kyosuke */           0x36134a0 - 0x311cd40,
        /* M.Bison */           0x1d71a60 - 0x1705d80,
        /* Mai */               0x2741ce0 - 0x215a960,
        /* Maki */              0x34f71a0 - 0x2ff0ac0,
        /* Morrigan */          0x21ad920 - 0x1b791a0,
        /* Nakoruru */          0x3069680 - 0x2b1c780,
        /* Raiden */            0x2af5a20 - 0x2545f20,
        /* Rock Howard */       0x3a34ea0 - 0x35737a0,
        /* Rolento */           0x40d69a0 - 0x3c670c0,
        /* Rugal */             0x2c28660 - 0x2687e80,
        /* Ryo */               0x265c5c0 - 0x2067ca0,
        /* Ryu */               0x1488e80 - 0xd92400,
        /* Sagat */             0x1c9b720 - 0x1622800,
        /* Sakura */            0x1e961a0 - 0x1836180,
        /* Terry Bogard */      0x257a360 - 0x1f7b740,
        /* Todoh */             0x38fc140 - 0x342e1e0,
        /* Vega */              0x1bfe160 - 0x1572640,
        /* Vice */              0x2d18200 - 0x2787de0,
        /* Yamazaki */          0x29fcd40 - 0x243c8a0,
        /* Yun */               0x3d52a20 - 0x38b3ee0,
        /* Yuri */              0x2edf8e0 - 0x2976820,
        /* Zangief */           0x1880800 - 0x11bc460,

        /* Evil Ryu */          0x22a4800 - 0x1c7e120,
        /* Orochi Iori */       0x314b5a0 - 0x2c0a960,
        /* God Rugal */         0x3fab320 - 0x3b292e0,
        /* Shin Akuma */        0x3e75a80 - 0x39e42a0,
    };

public:
    CGame_CVS2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
