#pragma once
#include "GameClassByDir.h"
#include "SSF2T_A_DEF.h"

class CGame_SSF2T_A : public CGameClassByDir
{
private:
    enum class SSF2TLoadingKey
    {
        ROM03,
        ROM03nl,
        ROM04,
        ROM08,
        ROM09nl,
    };

    static SSF2TLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM03 =
    {
        {
            { L"sfxe.03c", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM04 =
    {
        {
            { L"sfxe.04a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08 =
    {
        {
            { L"sfxe.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM09 =
    {
        {
            { L"sfnl.09", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
#ifdef MAME_NOTES
      we care about 03 and 04
GAME(1994, ssf2t,      0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (World 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxe.03c", 0x000000, 0x80000, CRC(2fa1f396) SHA1(2aa58309811f34901554b84396556630a22ce9bc))
    ROM_LOAD16_WORD_SWAP("sfxe.04a", 0x080000, 0x80000, CRC(d0bc29c6) SHA1(d9f89bcd79cba26db2100a00dd7bd8ee6ecb75f3))
    ROM_LOAD16_WORD_SWAP("sfxe.08",  0x280000, 0x80000, CRC(74c24062) SHA1(f3eca09e0544c6aa46b0c4bead2246ab1e9a97d9))
GAME(1994, ssf2ta,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (Asia 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxa.03c", 0x000000, 0x80000, CRC(04b9ff34) SHA1(69feb2c9c03634e6f964dae310d7b72b4c76140d))
    ROM_LOAD16_WORD_SWAP("sfxa.04a", 0x080000, 0x80000, CRC(16ea5f7a) SHA1(08404c6a79b9a36eceb06e0d3e1d747a21fac186))
    ROM_LOAD16_WORD_SWAP("sfxa.08",  0x280000, 0x80000, CRC(39be596c) SHA1(f7ab80e64cbb703535dd39b875273eefa57df489))
GAME(1994, ssf2th,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (Hispanic 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxh.03c", 0x000000, 0x80000, CRC(fbe80dfe) SHA1(b9c5f0a0f6ae7839e348c870ac87b16dbb665bd9))
    ROM_LOAD16_WORD_SWAP("sfxh.04a", 0x080000, 0x80000, CRC(ef9dd4b1) SHA1(3c5d76e6ae7db91f9287f341c32e3b7a75e256f6))
    ROM_LOAD16_WORD_SWAP("sfxh.08",  0x280000, 0x80000, CRC(c15f0424) SHA1(de9f7075f02653c4edef0e6f4a1210a9b2711d28))
GAME(1994, ssf2tu,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (USA 940323)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxu.03e", 0x000000, 0x80000, CRC(d6ff689e) SHA1(bea1a8aafbbbe9cb0895561a57dead1579361a8e))
    ROM_LOAD16_WORD_SWAP("sfxu.04a", 0x080000, 0x80000, CRC(532b5ffd) SHA1(769a8a9d4e04e291ce7427b89e537bba2258ca82))
    ROM_LOAD16_WORD_SWAP("sfxu.08",  0x280000, 0x80000, CRC(b3c71810) SHA1(b51515f4f4aee5bbbfc8b79372d0bc6e0c140912))
GAME(1994, ssf2tur1,   ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II Turbo (USA 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxu.03c", 0x000000, 0x80000, CRC(86e4a335) SHA1(04db3fd519973aeb7b32be62871e0fb4605946eb))
    ROM_LOAD16_WORD_SWAP("sfxu.04a", 0x080000, 0x80000, CRC(532b5ffd) SHA1(769a8a9d4e04e291ce7427b89e537bba2258ca82))
    ROM_LOAD16_WORD_SWAP("sfxu.08",  0x280000, 0x80000, CRC(b3c71810) SHA1(b51515f4f4aee5bbbfc8b79372d0bc6e0c140912))

GAME(1994, ssf2xj,     ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II X: Grand Master Challenge (Japan 940311)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxj.03d", 0x000000, 0x80000, CRC(50b52b37) SHA1(dc0330fcbffbc0077faa20d34a28d6a49b04639e))
    ROM_LOAD16_WORD_SWAP("sfxj.04a", 0x080000, 0x80000, CRC(af7767b4) SHA1(61e7364408bf07c01634913c112b6245acce48ab))
    ROM_LOAD16_WORD_SWAP("sfxj.08",  0x280000, 0x80000, CRC(2de76f10) SHA1(8cbe96dfeaa41306caa2819b82272ce3b0b9f926))
GAME(1994, ssf2xjr1,   ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II X: Grand Master Challenge (Japan 940223)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxj.03c", 0x000000, 0x80000, CRC(a7417b79) SHA1(189c3ed546bb2844e9fa9fe7e9aacef728bc8939))
    ROM_LOAD16_WORD_SWAP("sfxj.04a", 0x080000, 0x80000, CRC(af7767b4) SHA1(61e7364408bf07c01634913c112b6245acce48ab))
    ROM_LOAD16_WORD_SWAP("sfxj.08",  0x280000, 0x80000, CRC(2de76f10) SHA1(8cbe96dfeaa41306caa2819b82272ce3b0b9f926))
GAME(1994, ssf2xjr1r,  ssf2t,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Super Street Fighter II X: Grand Master Challenge (Japan 940223 rent version)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxo.03c", 0x000000, 0x80000, CRC(2ba33dc6) SHA1(ab31046c1604eae30e55eb0e03804c98765d578e))
    ROM_LOAD16_WORD_SWAP("sfxo.04a", 0x080000, 0x80000, CRC(ba663dd7) SHA1(46baf0a48e4fd807098aa48e34625964b279a223))
    ROM_LOAD16_WORD_SWAP("sfxo.08",  0x280000, 0x80000, CRC(b60f4b58) SHA1(1db3876daef85713a22dbc42f76a26a47fa26079))

GAME(1994, ssf2tad,    ssf2t,    dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Super Street Fighter II Turbo (Asia 940223 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("sfxad.03c", 0x000000, 0x80000, CRC(e3c92ece) SHA1(8b0d6f632f51719c3e13add5d27701578b6ce0d6))
    ROM_LOAD16_WORD_SWAP("sfxad.04a", 0x080000, 0x80000, CRC(9bf3bb2e) SHA1(4bdc6fa585cc67d3b6695f390c95c518cba2bea6))
    ROM_LOAD16_WORD_SWAP("sfxad.08",  0x280000, 0x80000, CRC(d399c36c) SHA1(b4c4217843e5c3ef00ab04d58ca9368d2d734065))

#endif
        { L"SSF2T (CPS2 World 940223 03)", L"sfxe.03c", 0x2fa1f396, 0 },
        { L"SSF2T (CPS2 World 940223 04)", L"sfxe.04a", 0xd0bc29c6, 0 },
        { L"SSF2T (CPS2 World 940223 08)", L"sfxe.08", 0x74c24062, 0 },
        { L"SSF2T (CPS2 Asia 940223 03)", L"sfxa.03c", 0x04b9ff34, 0 },
        { L"SSF2T (CPS2 Asia 940223 04)", L"sfxa.04a", 0x16ea5f7a, 0 },
        { L"SSF2T (CPS2 Asia 940223 08)", L"sfxa.08", 0x39be596c, 0 },
        { L"SSF2T (CPS2 Hispanic 940223 03)", L"sfxh.03c", 0xfbe80dfe, 0 },
        { L"SSF2T (CPS2 Hispanic 940223 04)", L"sfxh.04a", 0xef9dd4b1, 0 },
        { L"SSF2T (CPS2 Hispanic 940223 08)", L"sfxh.08", 0xc15f0424, 0 },
        { L"SSF2T (CPS2 USA 940223 03)", L"sfxu.03e", 0xd6ff689e, 0 },
        { L"SSF2T (CPS2 USA 940223 03)", L"sfxu.03c", 0x86e4a335, 0 },
        { L"SSF2T (CPS2 USA 940223 04)", L"sfxu.04a", 0x532b5ffd, 0 },
        { L"SSF2T (CPS2 USA 940223 08)", L"sfxu.08", 0xb3c71810, 0 },

        { L"SSF2X:GMC (CPS2 Japan 03)", L"sfxj.03c", 0xa7417b79, 0 },
        { L"SSF2X:GMC (CPS2 Japan 04)", L"sfxj.04a", 0xaf7767b4, 0 },
        { L"SSF2X:GMC (CPS2 Japan 08)", L"sfxj.08", 0x2de76f10, 0 },

        { L"SSF2T (CPS2 Asia 940223 bootleg 03)", L"sfxad.03c", 0xe3c92ece, 0 },
        { L"SSF2T (CPS2 Asia 940223 bootleg 04)", L"sfxad.04a", 0x9bf3bb2e, 0 },
        { L"SSF2T (CPS2 Asia 940223 bootleg 08)", L"sfxad.08", 0xd399c36c, 0 },

        { L"SSF2T (New Legacy Hack 03: Portraits)", L"sfnl.03", 0x4beda7d5, 0 },
        { L"SSF2T (New Legacy Hack 04: Characters)", L"sfnl.04", 0xd0bc29c6, 0 },
        { L"SSF2T (New Legacy Hack 09: Extended Colors)", L"sfnl.09", 0x6b2068bc, 0 },
    };

    const sCoreGameData m_sCoreGameData_ROM03
    {
        L"SSF2T (CPS2 03 Portraits)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM03,
        m_rgCRC32Data,
        SSF2T_A_UNITS_3C,
        ARRAYSIZE(SSF2T_A_UNITS_3C),
        L"ssf2t-3ce.txt",       // Extra filename
        323,                    // Count of palettes listed in the header
        0xf1da,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM03nl
    {
        L"SSF2T (New Legacy Hack 03 Portraits)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM03,
        m_rgCRC32Data,
        SSF2T_A_UNITS_03_NL,
        ARRAYSIZE(SSF2T_A_UNITS_03_NL),
        L"ssf2t-3NLe.txt",      // Extra filename
        163,                    // Count of palettes listed in the header
        0xf1da,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM04
    {
        L"SSF2T (CPS2 04 Characters)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM04,
        m_rgCRC32Data,
        SSF2T_A_UNITS_4A,
        ARRAYSIZE(SSF2T_A_UNITS_4A),
        L"ssf2t-4ae.txt",       // Extra filename
        769,                    // Count of palettes listed in the header
        0x3FB00,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08
    {
        L"SSF2T (CPS2 08 Stages)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08,
        m_rgCRC32Data,
        SSF2T_A_UNITS_8,
        ARRAYSIZE(SSF2T_A_UNITS_8),
        L"ssf2t-8e.txt",        // Extra filename
        170,                    // Count of palettes listed in the header
        0x603be,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM09nl
    {
        L"SSF2T (New Legacy 09)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_STNL20,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM09,
        m_rgCRC32Data,
        SSF2T_A_UNITS_09_NL,
        ARRAYSIZE(SSF2T_A_UNITS_09_NL),
        L"ssf2t-9NLe.txt",      // Extra filename
        1880,                   // Count of palettes listed in the header
        0x66ffe,                // Lowest known location used for palettes
    };

public:
    CGame_SSF2T_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_SSF2T_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"bundleSuperStreetFighterIITurbo.mbundle", 0x116f1dd3 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        {  L"SSF2T (Steam)", L"bundleSuperStreetFighterIITurbo.mbundle", 0xbfed9077, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SSF2T (Steam)",
        SSF2T_S,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SSF2T_A_UNITS_MONO,
        ARRAYSIZE(SSF2T_A_UNITS_MONO),
        L"ssf2tSe.txt",         // Extra filename
        1262,                   // Count of palettes listed in the header
        0x110bee3b,             // Lowest known location used for palettes
    };

public:
    CGame_SSF2T_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
