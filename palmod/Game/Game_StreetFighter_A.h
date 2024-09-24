#pragma once
#include "GameClassByDir.h"
#include "StreetFighter_A_DEF.h"

class CGame_StreetFighter_A : public CGameClassByDir
{
private:
    enum class SF1LoadingKey
    {
        USSet1,
        USSet2,
        Japan,
        USSet1Alt,
        USSet1MAME,
    };

    static SF1LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet1 =
    {
        {
            { L"sfd-19.2a", 0x10000 },
            { L"sfd-22.2c", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet2 =
    {
        {
            { L"sfs19u.1a", 0x10000 },
            { L"sfs22u.1b", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan =
    {
        {
            { L"sf-19.bin", 0x10000 },
            { L"sf-22.bin", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet1Alt =
    {
        {
            { L"sfd-19", 0x10000 },
            { L"sfd-22", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet1MAME =
    {
        {
            { L"sfe-19", 0x10000 },
            { L"sfe-22", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

#ifdef MAME_INFO
    ROM_START(sf)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("sfd-19.2a", 0x00000, 0x10000, CRC(faaf6255) SHA1(f6d0186c6109780839576c141fc6b557c170c182))
        ROM_LOAD16_BYTE("sfd-22.2c", 0x00001, 0x10000, CRC(e1fe3519) SHA1(5c59343a8acaaa4f36636d8e28a4ca7854110dad))
        ROM_LOAD16_BYTE("sfd-20.3a", 0x20000, 0x10000, CRC(44b915bd) SHA1(85772fb89712f97bb0489a7e43f8b1a5037c8081))
        ROM_LOAD16_BYTE("sfd-23.3c", 0x20001, 0x10000, CRC(79c43ff8) SHA1(450fb75b6f36e08788d7a806122e4e1b0a87746c))
        ROM_LOAD16_BYTE("sfd-21.4a", 0x40000, 0x10000, CRC(e8db799b) SHA1(8443ba6a9b9ad29d5985d434658e685fd46d8f1e))
        ROM_LOAD16_BYTE("sfd-24.4c", 0x40001, 0x10000, CRC(466a3440) SHA1(689823763bfdbc12ac11ff176acfd22f352e2658))

        ROM_START(sfua)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("sfs19u.1a", 0x00000, 0x10000, CRC(c8e41c49) SHA1(01f023864a662fa451901b8689341b00a36973c1))
        ROM_LOAD16_BYTE("sfs22u.1b", 0x00001, 0x10000, CRC(667e9309) SHA1(3d895874cf86470e4f2041d21e751fac3170b4c5))
        ROM_LOAD16_BYTE("sfs20u.2a", 0x20000, 0x10000, CRC(303065bf) SHA1(152bb707cd71a8614f6d17cf9a145c8a8184ded7))
        ROM_LOAD16_BYTE("sfs23u.2b", 0x20001, 0x10000, CRC(de6927a3) SHA1(862a62b71fbd2049f05968a238b97344d3b7404e))
        ROM_LOAD16_BYTE("sfs21u.3a", 0x40000, 0x10000, CRC(004a418b) SHA1(1048afe2e0dbc22969d79a031394f3c8ab4c8901))
        ROM_LOAD16_BYTE("sfs24u.3b", 0x40001, 0x10000, CRC(2b4545ff) SHA1(19bdae7947d13b861ace25b96e46f199ee9a6eb2))

        ROM_START(sfj)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("sf-19.2a", 0x00000, 0x10000, CRC(116027d7) SHA1(6bcb117ee415aff4d8ea962d4eff4088ca94c251))
        ROM_LOAD16_BYTE("sf-22.2c", 0x00001, 0x10000, CRC(d3cbd09e) SHA1(7274c603100132102de09e10d2129cfeb6c06369))
        ROM_LOAD16_BYTE("sf-20.3a", 0x20000, 0x10000, CRC(fe07e83f) SHA1(252dd592c31e594103ac1eabd734d10748655701))
        ROM_LOAD16_BYTE("sf-23.3c", 0x20001, 0x10000, CRC(1e435d33) SHA1(2022a4368aa63cb036e77cb5739810030db469ff))
        ROM_LOAD16_BYTE("sf-21.4a", 0x40000, 0x10000, CRC(e086bc4c) SHA1(782134978ff0a7133768d9cc8050bc3b5016580b))
        ROM_LOAD16_BYTE("sf-24.4c", 0x40001, 0x10000, CRC(13a6696b) SHA1(c01f9b700928e427bc9914c61beeaa6bcbde4546))

        ROM_START(sfjbl) // main PCB is marked '17-51-1' on component side
        ROM_REGION(0x60000, "maincpu", 0) // only range 0x3c200-0x3c23f has minor differences from the original, to skip the disclaimer screen
        ROM_LOAD16_BYTE("a-34.34.4a", 0x00000, 0x10000, CRC(116027d7) SHA1(6bcb117ee415aff4d8ea962d4eff4088ca94c251))
        ROM_LOAD16_BYTE("a-37.37.4c", 0x00001, 0x10000, CRC(d3cbd09e) SHA1(7274c603100132102de09e10d2129cfeb6c06369))
        ROM_LOAD16_BYTE("a-35.35.5a", 0x20000, 0x10000, CRC(5c31ea04) SHA1(6ae07c668ad97356b1b7163dbca9518e37dba42a))
        ROM_LOAD16_BYTE("a-38.38.5c", 0x20001, 0x10000, CRC(908d9e98) SHA1(bd2acd424864a79fb225ae5fa5bcbe3b9fdfe3a6))
        ROM_LOAD16_BYTE("a-36.36.6a", 0x40000, 0x08000, CRC(5ea75033) SHA1(c79d5eac8787a326546ae4d2506a8f8bcd72611f))
        ROM_LOAD16_BYTE("a-39.39.6c", 0x40001, 0x08000, CRC(4d0606cb) SHA1(27042925b94cd827d800f658062a914d7425c407))
        // original has 0xff filled ROM at 0x50000-0x5ffff

        ROM_START(sfan)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("sfe-19.2a", 0x00000, 0x10000, CRC(8346c3ca) SHA1(404e26d210e453ef0f03b092d70c770106eed1d1))
        ROM_LOAD16_BYTE("sfe-22.2c", 0x00001, 0x10000, CRC(3a4bfaa8) SHA1(6a6fc8d967838eca7d2973de987bb350c25628d5))
        ROM_LOAD16_BYTE("sfe-20.3a", 0x20000, 0x10000, CRC(b40e67ee) SHA1(394987dc4c306351b1657d10528ecb665700c4db))
        ROM_LOAD16_BYTE("sfe-23.3c", 0x20001, 0x10000, CRC(477c3d5b) SHA1(6443334b3546550e5d97cf4057b279ec7b3cd758))
        ROM_LOAD16_BYTE("sfe-21.4a", 0x40000, 0x10000, CRC(2547192b) SHA1(aaf07c613a6c42ec1dc82ffa86d00044b4ea27fc))
        ROM_LOAD16_BYTE("sfe-24.4c", 0x40001, 0x10000, CRC(79680f4e) SHA1(df596fa5b49a336fe462c2be7b454e695f5382db))

        ROM_START(sfjan)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("sf_n_19a.2a.27c512", 0x000000, 0x010000, CRC(8346c3ca) SHA1(404e26d210e453ef0f03b092d70c770106eed1d1))
        ROM_LOAD16_BYTE("sf_n_22a.2c.27c512", 0x000001, 0x010000, CRC(3a4bfaa8) SHA1(6a6fc8d967838eca7d2973de987bb350c25628d5))
        ROM_LOAD16_BYTE("sf_n_20a.3a.27c512", 0x020000, 0x010000, CRC(7e00b1dd) SHA1(cae5e7e3ee8876d7a67f4afe4e5ddb75b90d1ded))
        ROM_LOAD16_BYTE("sf_n_23a.3c.27c512", 0x020001, 0x010000, CRC(1cf3c108) SHA1(b94eac4fb2dc2a1ba2ae4079299a546fe471913e))
        ROM_LOAD16_BYTE("sf_n_21a.4a.27c512", 0x040000, 0x010000, CRC(2547192b) SHA1(aaf07c613a6c42ec1dc82ffa86d00044b4ea27fc))
        ROM_LOAD16_BYTE("sf_n_24a.4c.27c512", 0x040001, 0x010000, CRC(79680f4e) SHA1(df596fa5b49a336fe462c2be7b454e695f5382db))

        ROM_START(sfw)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("sfs19e.2a", 0x00000, 0x10000, CRC(56eabd3a) SHA1(fe6edb15e12af2d1c39c4f0224444509b940aba3))
        ROM_LOAD16_BYTE("sfs22e.2c", 0x00001, 0x10000, CRC(34541285) SHA1(f8c673e5ee7647b64ada284c4d0ee6cb0f48fd92))
        ROM_LOAD16_BYTE("sfs20e.3a", 0x20000, 0x10000, CRC(ea8d3a70) SHA1(bdc90569573f0877b839008fe671411c93bc47d8))
        ROM_LOAD16_BYTE("sfs23e.3c", 0x20001, 0x10000, CRC(21e7d1c7) SHA1(c8fd36ef62ee8be6a5a0532f5a18d6a784b6abf8))
        ROM_LOAD16_BYTE("sfs21e.4a", 0x40000, 0x10000, CRC(e0d3f410) SHA1(442841df8c29a43ad8322b2f91c615f98ded3950))
        ROM_LOAD16_BYTE("sfs24e.4c", 0x40001, 0x10000, CRC(bcd20105) SHA1(ce0383e839c7c08534dfbe885f709c727352c3f0))

        ROM_START(sfp)
        ROM_REGION(0x60000, "maincpu", 0)
        ROM_LOAD16_BYTE("prg8.2a", 0x00000, 0x20000, CRC(d48d06a3) SHA1(d899771c66c1e7a5caa11f67a1122adb6f0f4d28))
        ROM_LOAD16_BYTE("prg0.2c", 0x00001, 0x20000, CRC(e8606c1a) SHA1(be94203cba733e337993e6f386ff5ce1e76d8913))

        GAME(1987, sf, 0, sfus, sfus, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (US, set 1)", MACHINE_SUPPORTS_SAVE) // Shows Capcom copyright
        GAME(1987, sfua, sf, sfjp, sfjp, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (US, set 2) (protected)", MACHINE_SUPPORTS_SAVE) // Shows Capcom USA copyright
        GAME(1987, sfj, sf, sfjp, sfjp, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (Japan) (protected)", MACHINE_SUPPORTS_SAVE)
        GAME(1987, sfjan, sf, sfan, sfan, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (Japan, pneumatic buttons)", MACHINE_SUPPORTS_SAVE)
        GAME(1987, sfjbl, sf, sfjp, sfjp, sf_state, empty_init, ROT0, "bootleg", "Street Fighter (Japan, bootleg)", MACHINE_SUPPORTS_SAVE)
        GAME(1987, sfan, sf, sfan, sfan, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (World, pneumatic buttons)", MACHINE_SUPPORTS_SAVE)
        GAME(1987, sfp, sf, sfp, sfan, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (prototype)", MACHINE_SUPPORTS_SAVE)
        GAME(1987, sfw, sf, sfjp, sfjp, sf_state, empty_init, ROT0, "Capcom", "Street Fighter (World) (protected)", MACHINE_SUPPORTS_SAVE)  // Shows Capcom copyright
#endif

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter (US, Set 1)", L"sfd-19.2a", 0xfaaf6255, 0 },
        { L"Street Fighter (US, Set 1)", L"sfd-19", 0xfaaf6255, 0 },
        { L"Street Fighter (US, Set 1, Hacked)", L"sfe-19", 0x8346c3ca, -0x438 },
        { L"Street Fighter (US, Set 2)", L"sfs19u.1a", 0xc8e41c49, -0x960 },
        { L"Street Fighter (Japan)", L"sf-19.bin", 0x116027d7, -0x960 },
    };

    const sCoreGameData m_sCoreGameData_USSet1
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet1,
        m_rgCRC32Data,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USSet2
    {
        L"Street Fighter (US, Set 2)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet2,
        m_rgCRC32Data,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Japan
    {
        L"Street Fighter (Japan)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_Japan,
        m_rgCRC32Data,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USSet1Alt
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet1Alt,
        m_rgCRC32Data,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USSet1MAME
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet1MAME,
        m_rgCRC32Data,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

public:
    CGame_StreetFighter_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_StreetFighter_S : public CGameClassByDir
{
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"bundleStreetFighter.mbundle", 0x5e5eb50 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter (Steam)", L"bundleStreetFighter.mbundle", 0xa3b4810d, 0x2c72999 - 0x1ba66 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter (Steam)",
        SF1_S,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterSE.txt",      // Extra filename
        13,                          // Count of palettes listed in the header
        0x1BA66,                     // Lowest known location used for palettes
    };

public:
    CGame_StreetFighter_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
