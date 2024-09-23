#pragma once
#include "GameClassByDir.h"
#include "VampireHunter_A_DEF.h"

class CGame_VampireHunter_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vphj.09a", 0x80000 },
        },
        FileReadType::Sequential,
    };

#ifdef MAME_NOTES
    GAME(1995, nwarr, 0, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Euro 950316)", MACHINE_SUPPORTS_SAVE)
        ROM_START(nwarr)
        ROM_LOAD16_WORD_SWAP("vphe.09b", 0x300000, 0x80000, CRC(9882561c) SHA1(cc6d4a50819cd4e6b8c39c60e7c8ce46ba0f05d8))
        GAME(1995, nwarru, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (USA 950406)", MACHINE_SUPPORTS_SAVE)
        ROM_START(nwarru)
        ROM_LOAD16_WORD_SWAP("vphu.09b", 0x300000, 0x80000, CRC(41a64205) SHA1(1f5af658b7c3fb09cab3dd10d6dc433a0605f81a))
        GAME(1995, nwarrh, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Hispanic 950403)", MACHINE_SUPPORTS_SAVE)
        ROM_START(nwarrh)
        ROM_LOAD16_WORD_SWAP("vphh.09", 0x300000, 0x80000, CRC(a2ce6d63) SHA1(52aed61d0c7a6191016f1ec4b0a4372fbf55bf49))
        GAME(1995, nwarrb, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Brazil 950403)", MACHINE_SUPPORTS_SAVE)
        ROM_START(nwarrb)
        ROM_LOAD16_WORD_SWAP("vphb.09", 0x300000, 0x80000, CRC(029e015d) SHA1(441d0ea36484cbffe783cb0a1133537c09783022))
        GAME(1995, nwarra, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Night Warriors: Darkstalkers' Revenge (Asia 950302)", MACHINE_SUPPORTS_SAVE)
        ROM_START(nwarra)
        ROM_LOAD16_WORD_SWAP("vpha.09b", 0x300000, 0x80000, CRC(7e96bd0a) SHA1(f7750209b157a405710c0797e9eb30f980db582d))

        GAME(1995, vhuntj, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950316)", MACHINE_SUPPORTS_SAVE)
        ROM_START(vhuntj)
        ROM_LOAD16_WORD_SWAP("vphj.09b", 0x300000, 0x80000, CRC(823d6d99) SHA1(17be75b2ebfbf60a2141aef67c386454d23565f2))
        GAME(1995, vhuntjr1s, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950307 stop version)", MACHINE_SUPPORTS_SAVE)
        ROM_START(vhuntjr1s)
        ROM_LOAD16_WORD_SWAP("vphj.09b", 0x300000, 0x80000, CRC(823d6d99) SHA1(17be75b2ebfbf60a2141aef67c386454d23565f2))
        GAME(1995, vhuntjr1, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950307)", MACHINE_SUPPORTS_SAVE)
        ROM_START(vhuntjr1)
        ROM_LOAD16_WORD_SWAP("vphj.09b", 0x300000, 0x80000, CRC(823d6d99) SHA1(17be75b2ebfbf60a2141aef67c386454d23565f2))
        GAME(1995, vhuntjr2, nwarr, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire Hunter: Darkstalkers' Revenge (Japan 950302)", MACHINE_SUPPORTS_SAVE)
        ROM_START(vhuntjr2)
        ROM_LOAD16_WORD_SWAP("vphj.09a", 0x300000, 0x80000, CRC(026e6f82) SHA1(4dffda5e2bcd2fbc9084782e9a79ebd2be1338e7))
#endif

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Night Warriors: Darkstalkers' Revenge (Euro 950316)", L"vphe.09b", 0x9882561c, 0x740 },
        { L"Night Warriors: Darkstalkers' Revenge (USA 950406)", L"vphu.09b", 0x41a64205, 0x676 },
        { L"Night Warriors: Darkstalkers' Revenge (Hispanic 950403)", L"vphh.09", 0xa2ce6d63, 0x6dc },
        { L"Night Warriors: Darkstalkers' Revenge (Brazil 950403)", L"vphb.09", 0x029e015d, 0x6dc },
        { L"Night Warriors: Darkstalkers' Revenge (Asia 950302)", L"vpha.09b", 0x7e96bd0a, -0x342 },

        { L"Vampire Hunter: Darkstalkers' Revenge (Japan 950302)", L"vphj.09a", 0x823d6d99, 0 },
        { L"Vampire Hunter: Darkstalkers' Revenge (Japan CPS2)", L"vphj.09b", 0x26e6f82, 0x9be },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Hunter: Darkstalkers' Revenge (CPS2)",
        VampireHunter_A,
        IMGDAT_SECTION_CPS2,
        VampireHunter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VAMPIREHUNTER,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VampireHunter_A_UNITS,
        ARRAYSIZE(VampireHunter_A_UNITS),
        L"VampireHunterE.txt",      // Extra filename
        560,                        // Count of palettes listed in the header
        0x5d5cc,                    // Lowest known location used for palettes
    };

public:
    CGame_VampireHunter_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_VampireHunter_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vhuntjr2.21D3D8A7", 0x2c50040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Vampire Hunter: Darkstalkers' Revenge (Steam Japan 950302)", L"vhuntjr2.21D3D8A7", 0xdac027e4, 0x35d74c - 0x5d70c },
        { L"Night Warriors: Darkstalkers' Revenge (Steam USA 950406)", L"nwarru.21D3D8A7", 0x7317bbfe, 0x35ddc2 - 0x5d70c },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Hunter: Darkstalkers' Revenge (Steam Unknown Version)",
        VampireHunter_S,
        IMGDAT_SECTION_CPS2,
        VampireHunter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VAMPIREHUNTER,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VampireHunter_A_UNITS,
        ARRAYSIZE(VampireHunter_A_UNITS),
        L"VampireHunterSE.txt",      // Extra filename
        560,                         // Count of palettes listed in the header
        0x5d5cc,                     // Lowest known location used for palettes
    };

public:
    CGame_VampireHunter_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
