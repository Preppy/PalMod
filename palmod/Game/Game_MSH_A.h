#pragma once
#include "GameClassByDir.h"
#include "MSH_A_DEF.h"

class CGame_MSH_A : public CGameClassByDir
{
private:
    enum class MSHLoadingKey
    {
        ROM05,
        ROM06,
    };

    static MSHLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM05 =
    {
        {
            { L"msh.05", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM06 =
    {
        {
            { L"msh.06b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
#ifdef MAME_NOTES
    Every 6 ROM is identical.  5 varies.
GAME(1995, msh,        0,        cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Euro 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshu,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (USA 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",  0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b", 0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshud,      msh,      dead_cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "bootleg", "Marvel Super Heroes (US 951024 Phoenix Edition) (bootleg)", MACHINE_SUPPORTS_SAVE)    ROM_LOAD16_WORD_SWAP("mshud.05",0x100000, 0x80000, CRC(3b493e84) SHA1(875e616270e839218c924e09627bcf79211ee694))
    ROM_LOAD16_WORD_SWAP("mshud.05",0x100000, 0x80000, CRC(3b493e84) SHA1(875e616270e839218c924e09627bcf79211ee694))
    ROM_LOAD16_WORD_SWAP("msh.06b", 0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshj,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Japan 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshjr1,     msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Japan 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, msha,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Asia 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshh,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Hispanic 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshb,       msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Brazil 951117)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05a",  0x100000, 0x80000, CRC(f37539e6) SHA1(770febc25ca5615b6c2023727edab3c68b15b2c4))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
GAME(1995, mshbr1,     msh,      cps2, cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Marvel Super Heroes (Brazil 951024)", MACHINE_SUPPORTS_SAVE)
    ROM_LOAD16_WORD_SWAP("msh.05",   0x100000, 0x80000, CRC(6a091b9e) SHA1(7fa54e69e1a1ca348cb08d892d55023e9a3ff4cb))
    ROM_LOAD16_WORD_SWAP("msh.06b",  0x180000, 0x80000, CRC(803e3fa4) SHA1(0acdeda65002521bf24130cbf06f9faa1dcef9e5))
#endif
        { L"MSH (CPS2 951024)", L"msh.05", 0x6a091b9e, 0 },
        { L"MSH (CPS2 951117)", L"msh.05a", 0xf37539e6, 0 },
        { L"MSH (CPS2 US 951024)", L"mshud.05", 0x3b493e84, 0 },

        { L"MSH (CPS2)", L"msh.06b",  0x803e3fa4, 0 },
    };

    const sCoreGameData m_sCoreGameData_ROM05
    {
        L"MSH (CPS2)",
        MSH_A,
        IMGDAT_SECTION_CPS2,
        MSH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM05,
        m_rgCRC32Data,
        MSH_UNITS_05,
        ARRAYSIZE(MSH_UNITS_05),
        L"MSHe.txt",        // Extra filename
        437,                // Count of palettes listed in the header
        0x60f4c,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM06
    {
        L"MSH (CPS2)",
        MSH_A,
        IMGDAT_SECTION_CPS2,
        MSH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM06,
        m_rgCRC32Data,
        MSH_UNITS_06,
        ARRAYSIZE(MSH_UNITS_06),
        L"MSH06e.txt",      // Extra filename
        72,                 // Count of palettes listed in the header
        0xa78,              // Lowest known location used for palettes
    };

public:
    CGame_MSH_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);

    int PostSetPal(uint32_t nUnitId, uint32_t nPalId);
};
