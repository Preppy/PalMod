#pragma once
#include "GameClassByDir.h"
#include "XMVSF_A_DEF.h"

class CGame_XMVSF_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"xvs.05a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
#ifdef MAME_NOTES
    we want the 05 rom
GAME(1996, xmvsf,      0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfr1,    xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Euro 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfur2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (USA 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfj,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfjr3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Japan 960909)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05",   0x100000, 0x80000, CRC(030e0e1e) SHA1(164e3023bb1965768448e1bf6c45ff9e0ac964c7))
GAME(1996, xmvsfa,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar1,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar2,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960919)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfar3,   xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Asia 960910)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfh,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Hispanic 961004)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfb,     xmvsf,    cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "X-Men Vs. Street Fighter (Brazil 961023)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",  0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
GAME(1996, xmvsfu1d,   xmvsf,    dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "X-Men Vs. Street Fighter (USA 961004 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("xvs.05a",   0x100000, 0x80000, CRC(7db6025d) SHA1(2d74f48f83f45359bfaca28ab686625766af12ee))
#endif
        { L"XMvSF (CPS2)", L"xvs.05a", 0x7db6025d, 0 },
        { L"XMvSF (960909 Japan CPS2)", L"xvs.05", 0x030e0e1e, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"XMvSF (CPS2)",
        XMVSF_A,
        IMGDAT_SECTION_CPS2,
        XMVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        XMVSF_A_UNITS,
        ARRAYSIZE(XMVSF_A_UNITS),
        L"XMVSFe.txt",               // Extra filename
        876,                         // Count of palettes listed in the header
        0x606c,                      // Lowest known location used for palettes
    };

public:
    CGame_XMVSF_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_XMVSF_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            {
                L"xmvsfj.21D3D8A7", 0x2C50040, // ARC form
                INVALID_UNIT_VALUE, true,
                L"f000.bin", 0x800000  // extracted-from-AFS form
            },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"XMvSF (Steam - 961023 Japan)", L"xmvsfj.21D3D8A7", 0xc73915b3, 0x1158da - 0x1589a },
        { L"XMvSF (Steam - 961023 USA)", L"xmvsfu.21D3D8A7", 0x81fbcf3f, 0x1158da - 0x1589a },
        
        { L"XMvSF (Steam - 961004 Japan)", L"xmvsfjr1.21D3D8A7", 0x1f4d060c,  0x1158da - 0x1589a },
        { L"XMvSF (Steam - 961004 USA)", L"xmvsfur1.21D3D8A7", 0x0a6baa6f,  0x1158da - 0x1589a },
        
        { L"XMvSF (Steam - 960910 Japan)", L"xmvsfjr2.21D3D8A7", 0x060063e1,  0x1158da - 0x1589a },
        { L"XMvSF (Steam - 960910 USA)", L"xmvsfur2.21D3D8A7", 0x4307c97c,  0x1158da - 0x1589a },

        { L"XMvSF (Steam - Any)", L"f000.bin", 0, 0x1158da - 0x1589a - 0x40 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"XMvSF (Steam)",
        XMVSF_S,
        IMGDAT_SECTION_CPS2,
        XMVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        XMVSF_A_UNITS,
        ARRAYSIZE(XMVSF_A_UNITS),
        L"XMVSFSe.txt",             // Extra filename
        876,                        // Count of palettes listed in the header
        0x606c,                     // Lowest known location used for palettes
    };

public:
    CGame_XMVSF_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
