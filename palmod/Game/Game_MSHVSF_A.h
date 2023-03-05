#pragma once
#include "GameClassByDir.h"
#include "MSHVSF_A_DEF.h"

class CGame_MSHVSF_A : public CGameClassByDir
{
private:
    enum class MSHVSFLoadingKey
    {
        ROM06,
        ROM07,
    };

    static MSHVSFLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM06 =
    {
        {
            { L"mvs.06a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07 =
    {
        {
            { L"mvs.07b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
#ifdef MAME_NOTES
        roms 6 and 7 are always identical
GAME(1997, mshvsf,     0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Euro 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (USA 970827)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (USA 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970707)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970702)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfj2,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Japan 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfh,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Hispanic 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfa,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Asia 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfa1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Asia 970620)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a", 0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b", 0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfb,    mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Brazil 970827)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfb1,   mshvsf,   cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes Vs. Street Fighter (Brazil 970625)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",  0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",  0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
GAME(1997, mshvsfu1d,  mshvsf,   dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Marvel Super Heroes Vs. Street Fighter (USA 970625 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("mvs.06a",    0x180000, 0x80000, CRC(959f3030) SHA1(fbbaa915324815246738f3426232e623f039ce26))
    ROM_LOAD16_WORD_SWAP("mvs.07b",    0x200000, 0x80000, CRC(7f915bdb) SHA1(683da09c5ba55e31b59aa95a8e13c45dc574ab3c))
#endif
        { L"MSHvSF (CPS2, Characters)", L"mvs.06a", 0x959f3030, 0 },
        { L"MSHvSF (CPS2, Portraits)", L"mvs.07b", 0x7f915bdb, 0 },
};

    const sCoreGameData m_sCoreGameData_ROM06
    {
        L"MSHVSF (CPS2)",
        MSHVSF_A,
        IMGDAT_SECTION_CPS2,
        MSHVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM06,
        m_rgCRC32Data,
        MSHVSF_A_UNITS_6A,
        ARRAYSIZE(MSHVSF_A_UNITS_6A),
        L"mshvsf-6ae.txt",      // Extra filename
        1099,                   // Count of palettes listed in the header
        0x56EF2,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07
    {
        L"MSHVSF (CPS2)",
        MSHVSF_A,
        IMGDAT_SECTION_CPS2,
        MSHVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07,
        m_rgCRC32Data,
        MSHVSF_A_UNITS_7B,
        ARRAYSIZE(MSHVSF_A_UNITS_7B),
        L"mshvsf-7be.txt",      // Extra filename
        228,                    // Count of palettes listed in the header
        0,                      // Lowest known location used for palettes
    };

public:
    CGame_MSHVSF_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId);
};
