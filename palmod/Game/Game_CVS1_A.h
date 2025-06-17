#pragma once
#include "GameClassByDir.h"
#include "CVS1_A_DEF.h"

class CGame_CVS1_A : public CGameClassByDir
{
private:
    enum class CvS1LoadingKey
    {
        ROM,
        SIMM,
    };

    static CvS1LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM =
    {
        {
            { L"Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin", 0x7800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_SIMM =
    {
        {
            // Just need these two
            { L"mpr-23504.ic1", 0x1000000 },
            { L"mpr-23505.ic2", 0x1000000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Capcom vs SNK Millenium Fight (NAOMI)", L"Capcom_vs_SNK_Millenium_Fight_2000_Unlocked.bin", 0x20be359d, 0 },
        { L"Capcom vs SNK Millenium Fight (NAOMI re-rip)", L"mpr-23504.ic1", 0xe01a31d2, -0x800000 },
    };

    const sCoreGameData m_sCoreGameData_ROM
    {
        L"Capcom vs SNK Millenium Fight (NAOMI)",
        CVS1_A,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_ROM,
        m_rgCRC32Data,
        CVS1_A_UNITS,
        ARRAYSIZE(CVS1_A_UNITS),
        L"CVS1E.txt",           // Extra filename
        1312,                   // Count of palettes listed in the header
        0x8b6d00,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_SIMM
    {
        L"Capcom vs SNK Millenium Fight (NAOMI Rerip)",
        CVS1_A,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_SIMM,
        m_rgCRC32Data,
        CVS1_A_UNITS,
        ARRAYSIZE(CVS1_A_UNITS),
        L"CVS1E.txt",           // Extra filename
        1312,                   // Count of palettes listed in the header
        0x8b6d00,               // Lowest known location used for palettes
    };

    void DumpAllCharacters();

public:
    CGame_CVS1_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_CVS1_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cvs1.21D3D8A7", 0x45a1840 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Capcom vs. SNK Millennium Fight 2000 Pro (Steam)", L"cvs1.21D3D8A7", 0xa8813e6c, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs. SNK Millennium Fight 2000 Pro (Steam)",
        CVS1_S,
        IMGDAT_SECTION_CPS2,
        CVS1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        CVS1_S_UNITS,
        ARRAYSIZE(CVS1_S_UNITS),
        L"CVS1SE.txt",          // Extra filename
        1392,                   // Count of palettes listed in the header
        0x290c00,               // Lowest known location used for palettes
    };

    std::array<int32_t, ARRAYSIZE(CVS1_S_UNITS)> m_activeSteamShiftTable =
    {
        /* Ryu */           0x8b6d00 - 0x290c00,
        /* Ken */           0x96f6e0 - 0x349ce0,
        /* Chun-Li */       0x9f2820 - 0x3cd440,
        /* Guile */         0xa8c3c0 - 0x4676a0,
        /* Zangief */       0xb7c1e0 - 0x557920,
        /* Dhalsim */       0xc37180 - 0x612ae0,
        /* E. Honda */      0xcc16a0 - 0x69d860,
        /* Blanka */        0xda7220 - 0x7836c0,
        /* Claw */          0xe588a0 - 0x8351c0,
        /* Sagat */         0xed45c0 - 0x8b1860,
        /* Dictator */      0xf7c3e0 - 0x959920,
        /* Sakura */        0x1011c20 - 0x9ef360,
        /* Cammy */         0x1098c20 - 0xa76b00,
        /* Akuma */         0x1141920 - 0xb20040,
        /* Morrigan */      0x11f23a0 - 0xbd0d80,
        /* Evil Ryu */      0x1299180 - 0xc780e0,
        /* Kyo */           0x13e54e0 - 0xdc4660,
        /* Iori */          0x14dd0c0 - 0xebc700,
        /* Terry */         0x1591e40 - 0xf71880,
        /* Ryo */           0x164ea20 - 0x102e7a0,
        /* Mai */           0x178f940 - 0x116faa0,
        /* Kim */           0x180ff40 - 0x11f0940,
        /* Geese */         0x18d57c0 - 0x12b64a0,
        /* Yamazaki */      0x19de900 - 0x13bfc40,
        /* Raiden */        0x1ac14e0 - 0x14a2a20,
        // Note that Rugal is slightly color tweaked from vanilla CvS1
        /* Rugal */         0x1bcc3e0 - 0x15ae240,
        /* Vice */          0x1cadc20 - 0x1690360, 
        /* Benimaru */      0x1d81b40 - 0x1764a60,
        /* Yuri */          0x1e093e0 - 0x17ecba0,
        /* King */          0x1e8c3a0 - 0x1870300,
        /* Nakoruru */      0x1f3cb40 - 0x19212a0,
        /* Orochi Iori */   0x202f480 - 0x1a13f80,
        /* Boxer */         0x20bc180 - 0x1aa1000,
        /* Dan */           0,
        /* Joe */           0,
    };

public:
    CGame_CVS1_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
