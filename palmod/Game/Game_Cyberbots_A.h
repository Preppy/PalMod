#pragma once
#include "GameClassByDir.h"
#include "Cyberbots_A_DEF.h"

class CGame_Cyberbots_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cybe.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
#ifdef MAME_NOTES

ROM_START(cybots)
GAME(1995, cybots,     0,        cps2, cybots,    cps2_state, init_cps2,     ROT0,   "Capcom", "Cyberbots: Fullmetal Madness (Euro 950424)",                                    MACHINE_SUPPORTS_SAVE)
    ROM_REGION(CODE_SIZE, "maincpu", 0) // 68000 code
    ROM_LOAD16_WORD_SWAP("cybe.03", 0x000000, 0x80000, CRC(234381cd) SHA1(6202a2a318feda525e16fd7b31c03af9ccc5d964))
    ROM_LOAD16_WORD_SWAP("cybe.04", 0x080000, 0x80000, CRC(80691061) SHA1(4f3ef24fc76d3a5b369aa6192ad390d9c3c9b0e8))

ROM_START(cybotsu)
GAME(1995, cybotsu,    cybots,   cps2, cybots,    cps2_state, init_cps2,     ROT0,   "Capcom", "Cyberbots: Fullmetal Madness (USA 950424)",                                     MACHINE_SUPPORTS_SAVE)
    ROM_REGION(CODE_SIZE, "maincpu", 0) // 68000 code
    ROM_LOAD16_WORD_SWAP("cybu.03", 0x000000, 0x80000, CRC(db4da8f4) SHA1(de9f3f261003f4f70ae32114a15e498387c23f6d))
    ROM_LOAD16_WORD_SWAP("cybu.04", 0x080000, 0x80000, CRC(1eec68ac) SHA1(b2b9379c84b121048cb83a8c48756b48cdbc3ea1))

ROM_START(cybotsj)
GAME(1995, cybotsj,    cybots,   cps2, cybots,    cps2_state, init_cps2,     ROT0,   "Capcom", "Cyberbots: Fullmetal Madness (Japan 950420)",                                   MACHINE_SUPPORTS_SAVE)
    ROM_REGION(CODE_SIZE, "maincpu", 0) // 68000 code
    ROM_LOAD16_WORD_SWAP("cybj.03", 0x000000, 0x80000, CRC(6096eada) SHA1(ea3fa2e6229d90cc3f69c59f447b6b373d64d2aa))
    ROM_LOAD16_WORD_SWAP("cybj.04", 0x080000, 0x80000, CRC(7b0ffaa9) SHA1(595c3e679ea02282bf8a5aa6c7c09e5c30e839c7))
#endif
        { L"Cyberbots: Fullmetal Madness (Euro 950424)", L"cybe.04", 0x80691061, 0 },
        { L"Cyberbots: Fullmetal Madness (Japan 950420)", L"cybj.04", 0xb0ffaa9, -0x14 },
        { L"Cyberbots: Fullmetal Madness (USA 950424)", L"cybu.04", 0xeec68ac, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Cyberbots: Fullmetal Madness (CPS2)",
        CYBERBOTS_A,
        IMGDAT_SECTION_CPS2,
        Cyberbots_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Cyberbots_A_UNITS,
        ARRAYSIZE(Cyberbots_A_UNITS),
        L"CybotsE.txt",           // Extra filename
        425,                      // Count of palettes listed in the header
        0x3fa3e,                  // Lowest known location used for palettes
    };

public:
    CGame_Cyberbots_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
