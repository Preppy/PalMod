#pragma once
#include "GameClassByDir.h"
#include "VampireNightWarriors_A_DEF.h"

class CGame_VampireNightWarriors_A : public CGameClassByDir
{
private:
    enum class VNWLoadingKey
    {
        ROM04,
        ROM09,
    };

    static VNWLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_4 =
    {
        {
            { L"vamj.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_9 =
    {
        {
            { L"vamj.09", 0x80000 },
        },
        FileReadType::Sequential,
    };

#ifdef MAME_INFORMATION
    GAME(1994, dstlk, 0, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Euro 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vame.04a", 0x080000, 0x80000, CRC(ae413ff2) SHA1(e9b85ac04d6d1a57368c70aa24e3ab8a8d67409f))
        ROM_LOAD16_WORD_SWAP("vame.09a", 0x300000, 0x80000, CRC(f16db74b) SHA1(7b7e31916a61e7fb35ec20849c6d22d74e169ec0))
        GAME(1994, dstlku, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (USA 940818)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamu.04b", 0x080000, 0x80000, CRC(58161453) SHA1(7b5674b8bdb7e3165e090105f6716073696d4bd0))
        ROM_LOAD16_WORD_SWAP("vamu.09b", 0x300000, 0x80000, CRC(2d1e9ae5) SHA1(1c4aced7dd0356ee445ca1e5db2c3a2ad4ee56c6))
        GAME(1994, dstlkur1, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (USA 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamu.04a", 0x080000, 0x80000, CRC(696d9b25) SHA1(743c53ac7fc27960ecc80fed3f2a3c506ee655a1))
        ROM_LOAD16_WORD_SWAP("vamu.09a", 0x300000, 0x80000, CRC(8dd55b24) SHA1(d99c2cbc4a9899a3d187201e6e730b7b8fb13d1d))
        GAME(1994, dstlka, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Asia 940705)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vama.04a", 0x080000, 0x80000, CRC(bc18e128) SHA1(53116cddb7123b573d76064640c3829fd978c67a))
        ROM_LOAD16_WORD_SWAP("vama.09a", 0x300000, 0x80000, CRC(67fa5573) SHA1(2dab32cf0d361d2c52cce5eb41b389a0e32dd192))
        GAME(1994, dstlkh, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Darkstalkers: The Night Warriors (Hispanic 940818)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamh.04c", 0x080000, 0x80000, CRC(2217e9a0) SHA1(b86ee89457d8a0cf828f1bed247f3b2c0c91b170))
        ROM_LOAD16_WORD_SWAP("vamh.09c", 0x300000, 0x80000, CRC(15187632) SHA1(81b7166334dc3c331673822c31581e0e7809b698))

        GAME(1994, vampj, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940705)", MACHINE_SUPPORTS_SAVE) // Partial update set? Only rom 04 is "B" revision
        ROM_LOAD16_WORD_SWAP("vamj.04b", 0x080000, 0x80000, CRC(4d9c43c4) SHA1(2087090306646fed959d503ee75e24996ad95b88)) /* should be "B" revision too. Both this   */
        ROM_LOAD16_WORD_SWAP("vamj.09a", 0x300000, 0x80000, CRC(fc0a4aac) SHA1(a2c79eb4dc838c238e182a4da3567ac8db3488d8))
        GAME(1994, vampja, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940705 alt)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamj.04a", 0x080000, 0x80000, CRC(fdcbdae3) SHA1(46a1251a2affbe13b200448cf77a455d840f3c9f))
        ROM_LOAD16_WORD_SWAP("vamj.09a", 0x300000, 0x80000, CRC(fc0a4aac) SHA1(a2c79eb4dc838c238e182a4da3567ac8db3488d8))
        GAME(1994, vampjr1, dstlk, cps2, cps2_2p6b, cps2_state, init_cps2, ROT0, "Capcom", "Vampire: The Night Warriors (Japan 940630)", MACHINE_SUPPORTS_SAVE)
        ROM_LOAD16_WORD_SWAP("vamj.04", 0x080000, 0x80000, CRC(5027db3d) SHA1(64bd09f2b5fd2435d8ec86f64543b640ab08f82f))
        ROM_LOAD16_WORD_SWAP("vamj.09", 0x300000, 0x80000, CRC(c119a827) SHA1(422864dda2a12621175350b8a130f970ed690719))
        ROM_START(dstlku1d) // Phoenix
        ROM_LOAD16_WORD_SWAP("vamud.04a", 0x080000, 0x80000, CRC(3b7a4939) SHA1(020f9768f4d3afb193b1d5a824674f7fb3434369))
        ROM_LOAD16_WORD_SWAP("vamud.09a", 0x300000, 0x80000, CRC(8b333a19) SHA1(5274510491433ac4a0ba3a0a120e95205d291ffe))

#endif

    static inline const std::vector<ROMRevisionLookupData> VHHackROMHeader_04 =
    {
        {
            0,
            {   0x0100, 0x8001, 0x028e, 0x6008,     0x0002, 0xa801, 0x0018, 0x0000,     0x0600, 0xc000, 0x0a90, 0x0000,
                0x0100, 0x8001, 0x028e, 0x6008,     0x0002, 0xa801, 0x0018, 0x0000,     0x0000, 0x0100, 0x0600, 0xa000,
                0x0a90, 0x0000, 0x0100, 0x8002,     0x028e, 0x6004, 0x0206, 0x3002 }
        },
    };

    static inline const std::vector<ROMRevisionLookupData> VHHackROMHeader_09 =
    {
        {
            0,
            {   0x8dd6, 0x3119, 0x8dd8, 0x2019,     0x8dea, 0x2419, 0x8d9a, 0x0019,     0x8dde, 0x0019, 0x8def, 0x0019,
                0x8e10, 0x181a, 0x0001, 0x001f,     0x0009, 0xff80, 0x0000, 0x0000,     0x0030, 0x7b56, 0x8e19, 0x1318,
                0x8df3, 0x0018, 0x8e30, 0x2318,     0x8df4, 0x1018, 0x8e00, 0x0118 }
        },
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Darkstalkers: The Night Warriors (Euro 940705)", L"vame.09a", 0xf16db74b, -0x2450 },
        { L"Darkstalkers: The Night Warriors (USA 940705)", L"vamu.09a", 0x8dd55b24, -0x24B6 },
        { L"Darkstalkers: The Night Warriors (USA 940818)", L"vamu.09b", 0x2d1e9ae5, -0x2196 },
        { L"Darkstalkers: The Night Warriors (Asia 940705)", L"vama.09a", 0x67fa5573, -0x24B6 },
        { L"Darkstalkers: The Night Warriors (Hispanic 940818)", L"vamh.09c", 0x15187632, -0x2196 },
        { L"Darkstalkers: The Night Warriors (USA 940705 Phoenix)", L"vamud.09a", 0x8b333a19, -0x24B6 },

        // we usually start at 0x1182a for demitri
        { L"Vampire: The Night Warriors (Japan 940630)", L"vamj.09", 0xc119a827, 0 },
        // They used the wrong filename for the Boss Hack version, so we will use the needed shift if and only if
        // we find a matching header.
        { L"Vampire: The Night Warriors (Japan 940705 Boss Hack)", L"vamj.09", 0xfc0a4aac, 0x68, VHHackROMHeader_09 },
        { L"Vampire: The Night Warriors (Japan 940705)", L"vamj.09a", 0xfc0a4aac, 0x68 },

        // Portrait roms
        // starts at 0x47e2a
        { L"Darkstalkers: The Night Warriors (Euro 940705 Portraits)", L"vame.04a", 0xae413ff2, 0 },
        { L"Darkstalkers: The Night Warriors (USA 940705 Portraits)", L"vamu.04a", 0x696d9b25, 0 },
        { L"Darkstalkers: The Night Warriors (USA 940818 Portraits)", L"vamu.04b", 0x58161453, 0x2de },
        { L"Darkstalkers: The Night Warriors (Asia 940705 Portraits)", L"vama.04a", 0xbc18e128, 0 },
        { L"Darkstalkers: The Night Warriors (Hispanic 940818 Portraits)", L"vamh.04c", 0x2217e9a0, 0x2de },
        { L"Darkstalkers: The Night Warriors (USA 940705 Phoenix Portraits)", L"vamud.04a", 0x3b7a4939, 0 },

        { L"Vampire: The Night Warriors (Japan 940630 Portraits)", L"vamj.04", 0x5027db3d, 0x24c4 },
        // They used the wrong filename for the Boss Hack version, so we will use the needed shift if and only if
        // we find a matching header.
        { L"Vampire: The Night Warriors (Japan 940705 Boss Hack Portraits)", L"vamj.04", 0x4d9c43c4, 0x2522, VHHackROMHeader_04 },
        { L"Vampire: The Night Warriors (Japan 940705 Portraits)", L"vamj.04a", 0x4d9c43c4, 0x2522 },
        //     ROM_LOAD16_WORD_SWAP( "vamj.04b", 0x080000, 0x80000, CRC(4d9c43c4) SHA1(2087090306646fed959d503ee75e24996ad95b88) ) /* should be "B" revision too. Both this   */
            // GAME( 1994, vampj,      dstlk,    cps2,     cps2_2p6b, cps2_state, init_cps2,     ROT0,   "Capcom", "Vampire: The Night Warriors (Japan 940705)",                                    MACHINE_SUPPORTS_SAVE ) // Partial update set? Only rom 04 is "B" revision
        { L"Vampire: The Night Warriors (Japan 940705b Portraits)", L"vamj.04b", 0x4d9c43c4, 0x2522 },
    };

    const sCoreGameData m_sCoreGameData_4
    {
        L"Vampire: The Night Warriors (CPS2)",
        VampireNightWarriors_A,
        IMGDAT_SECTION_CPS2,
        VampireNightWarriors_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_4,
        m_rgCRC32Data,
        VampireNightWarriors_A_UNITS_04,
        ARRAYSIZE(VampireNightWarriors_A_UNITS_04),
        L"VampireNightWarriors04E.txt",     // Extra filename
        61,                                 // Count of palettes listed in the header
        0x47ae8,                            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_9
    {
        L"Vampire: The Night Warriors (CPS2)",
        VampireNightWarriors_A,
        IMGDAT_SECTION_CPS2,
        VampireNightWarriors_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_9,
        m_rgCRC32Data,
        VampireNightWarriors_A_UNITS_09,
        ARRAYSIZE(VampireNightWarriors_A_UNITS_09),
        L"VampireNightWarriorsE.txt",   // Extra filename
        120,                            // Count of palettes listed in the header
        0x1182a,                        // Lowest known location used for palettes
    };

public:
    CGame_VampireNightWarriors_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_VampireNightWarriors_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vampj.21d3d8a7", 0x2050040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Vampire: The Night Warriors (Steam Japan 940705)", L"vampj.21d3d8a7", 0x620e238e, 0x3000A8 },
        { L"Darkstalkers: The Night Warriors (Steam USA 940818)", L"dstlku.21D3D8A7", 0x3abd56c8, 0x2FDEAA },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire: The Night Warriors (Unknown Version)",
        VampireNightWarriors_S,
        IMGDAT_SECTION_CPS2,
        VampireNightWarriors_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VampireNightWarriors_A_UNITS_MONO,
        ARRAYSIZE(VampireNightWarriors_A_UNITS_MONO),
        L"VampireNightWarriorsSE.txt",      // Extra filename
        181,                                // Count of palettes listed in the header
        0xca04a - 0x3000ee,                 // Lowest known location used for palettes
    };

public:
    CGame_VampireNightWarriors_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
