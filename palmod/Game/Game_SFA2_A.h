#pragma once
#include "GameClassByDir.h"
#include "SFA2_A_DEF.h"
#include "SFA2_Hack_DEF.h"

class CGame_SFA2_A : public CGameClassByDir
{
private:
    enum class SFA2_SupportedROMRevision
    {
        SFA2_960229,
        SFA2_960306_or_960430, // 960306 and 960430 are identical for both 07 and 08
        SFZ2A_960805,
        SFZ2A_960826,
        SFA2_Hack_220203,
        SFA2_Unsupported,
    };

    enum class SFA2LoadingKey
    {
        ROM07_Rev1,
        ROM07_Rev2,
        ROM07_SFZ2A,
        ROM08_Rev1,
        ROM08_Rev2,
        ROM08_SFZ2A,
        ROM09_Hack,
    };

    static SFA2LoadingKey m_eVersionToLoad;
    // SFA2 gets a littly funky, so we do a little additional tracking with this
    static SFA2_SupportedROMRevision m_currentSFA2ROMRevision;
    static bool UsePaletteSetForCharacters();

    SFA2_SupportedROMRevision GetSFA2ROMVersion(CFile* LoadedFile);

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07_Rev1 =
    {
        {
            { L"sz2.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07_Rev2 =
    {
        {
            { L"sz2u.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07_SFZ2A =
    {
        {
            { L"szaa.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08_Rev1 =
    {
        {
            { L"sz2.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08_Rev2 =
    {
        {
            { L"sz2u.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08_SFZ2A =
    {
        {
            { L"szaa.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM09_Hack =
    {
        {
            { L"sz2u.09", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Street Fighter Alpha 2 variants...
        // Since the character list changes between revisions, the offsets do as well. 
        // The offset logic is handled in LoadSpecificPaletteData
        { L"SFA2 Rev 1 (CPS2 ROM07)", L"sz2.07", 0x8e184246, 0 },
        { L"SFA2 Rev 1 (CPS2 ROM08)", L"sz2.08", 0x0fe8585d, 0 },

        { L"SFA2 Rev 2 (CPS2 USA ROM07)", L"sz2u.07", 0x5de01cc5, 0 },
        { L"SFA2 Rev 2 (CPS2 USA ROM08)", L"sz2u.08", 0xbea11d56, 0 },

        { L"SFA2 960227 (CPS2 Asia ROM07)", L"sz2a.07", 0x0aed2494, 0 },
        { L"SFA2 960227 (CPS2 Asia ROM07a)", L"sz2j.07a", 0xd910b2a2, 0 },

        { L"SFZ2A 960826 (CPS2 Asia ROM07)", L"szaa.07", 0x5de01cc5, 0 },
        { L"SFZ2A 960826 (CPS2 Asia ROM08)", L"szaa.08", 0xbea11d56, 0 },

        { L"SFZA2 960813 (CPS2 B/H ROM07)", L"sza.07", 0xe9430762, 0 },
        { L"SFZA2 960813 (CPS2 B/H ROM08)", L"sza.08", 0xb65711a9, 0 },

        { L"SFZA2 960805 (CPS2 Japan ROM07a)", L"szaj.07a", 0x975dcb3e, 0 },
        { L"SFZA2 960805 (CPS2 Japan ROM08a)", L"szaj.08a", 0xdc73f2d7, 0 },

        { L"SFZ2 960304 (CPS2 Brazil ROM07)", L"sz2b.07", 0x947e8ac6, 0 },
        { L"SFZ2 960531 (CPS2 Brazil ROM07a)", L"sz2b.07a", 0x7d19d5ec, 0 },
        { L"SFZ2 (CPS2 Brazil ROM08)", L"sz2b.08", 0x92b66e01, 0 },

        { L"SFZ2 960430 (CPS2 Hispanic ROM07)", L"sz2h.07", 0x947e8ac6, 0 },
        { L"SFZ2 960430 (CPS2 Hispanic ROM08)", L"sz2h.08", 0x92b66e01, 0 },

        { L"SFZ2 960430 (CPS2 Japan ROM07b)", L"sz2j.07b", 0x6352f038, 0 },
        { L"SFZ2 960430 (CPS2 Japan ROM08b)", L"sz2j.08b", 0x92b66e01, 0 },

        { L"SFA2 Expansion Hack (CPS2)", L"sz2u.09", 0x35cce97b, 0 },
    
#ifdef NOTES
    // These are the MAME values...
        sfa2                            // 06/03/1996 (c) 1996 (Euro)
            ROM_LOAD16_WORD_SWAP("sz2.07", 0x200000, 0x80000, CRC(8e184246) SHA1(c51f6480cfa1dcec6c4713fd38c7a27338c3fa65))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))

        sfz2n                           // 29/02/1996 (c) 1996 (Oceania)
            ROM_LOAD16_WORD_SWAP("sz2.07", 0x200000, 0x80000, CRC(8e184246) SHA1(c51f6480cfa1dcec6c4713fd38c7a27338c3fa65))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))


        sfa2u                           // 30/04/1996 (c) 1996 (USA)
            ROM_LOAD16_WORD_SWAP("sz2u.07", 0x200000, 0x80000, CRC(5de01cc5) SHA1(b19bfe970b217c96e782860fc3ae3fcb976ed30d))
            ROM_LOAD16_WORD_SWAP("sz2u.08", 0x280000, 0x80000, CRC(bea11d56) SHA1(a1d475066d36de7cc5d931671ccdcd89737bc7ee))

        sfa2ur1                         // 06/03/1996 (c) 1996 (USA)
            ROM_LOAD16_WORD_SWAP("sz2u.07", 0x200000, 0x80000, CRC(5de01cc5) SHA1(b19bfe970b217c96e782860fc3ae3fcb976ed30d))
            ROM_LOAD16_WORD_SWAP("sz2u.08", 0x280000, 0x80000, CRC(bea11d56) SHA1(a1d475066d36de7cc5d931671ccdcd89737bc7ee))


        sfz2a                           // 27/02/1996 (c) 1996 (Asia)
        sfz2ad                          //
            ROM_LOAD16_WORD_SWAP("sz2a.07a", 0x200000, 0x80000, CRC(0aed2494) SHA1(7beb1a394f17cd78a27128292b626aae28754ca2))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))


        sfz2al                          // 26/08/1996 (c) 1996 (Asia)
        sfz2ald                         //
            ROM_LOAD16_WORD_SWAP("szaa.07", 0x200000, 0x80000, CRC(5feb8b20) SHA1(13c79c9b72c3abf0a0b75d507d91ece71e460c06))
            ROM_LOAD16_WORD_SWAP("szaa.08", 0x280000, 0x80000, CRC(6eb6d412) SHA1(c858fec9c1dfea70dfcca629c1c24306f8ae6d81))


        sfz2alb                         // 13/08/1996 (c) 1996 (Brazil)
            ROM_LOAD16_WORD_SWAP("sza.07", 0x200000, 0x80000, CRC(e9430762) SHA1(923aea8db5f9b59212ec6dbc35be0808ea015140))
            ROM_LOAD16_WORD_SWAP("sza.08", 0x280000, 0x80000, CRC(b65711a9) SHA1(3918f44e1bb189e2a115625b35f477eb91a65f04))

        sfz2alh                         // 13/08/1996 (c) 1996 (Hispanic)
            ROM_LOAD16_WORD_SWAP("sza.07", 0x200000, 0x80000, CRC(e9430762) SHA1(923aea8db5f9b59212ec6dbc35be0808ea015140))
            ROM_LOAD16_WORD_SWAP("sza.08", 0x280000, 0x80000, CRC(b65711a9) SHA1(3918f44e1bb189e2a115625b35f477eb91a65f04))


        sfz2alj                         // 05/08/1996 (c) 1996 (Japan)
            ROM_LOAD16_WORD_SWAP("szaj.07a", 0x200000, 0x80000, CRC(975dcb3e) SHA1(a2ca8e5a768e49cce9e2137ec0dcba9337ed2ad5))
            ROM_LOAD16_WORD_SWAP("szaj.08a", 0x280000, 0x80000, CRC(dc73f2d7) SHA1(09fa10e7d1ff5f0dac87a6cf3d66730e3ab9ad25))

        sfz2b                           // 31/05/1996 (c) 1996 (Brazil)
            ROM_LOAD16_WORD_SWAP("sz2b.07a", 0x200000, 0x80000, CRC(7d19d5ec) SHA1(ab88dfcb2029499578837b8f97fbf55412c8f756))
            ROM_LOAD16_WORD_SWAP("sz2b.08", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872))

        sfz2br1                         // 04/03/1996 (c) 1996 (Brazil)
            ROM_LOAD16_WORD_SWAP("sz2b.07", 0x200000, 0x80000, CRC(947e8ac6) SHA1(da82be7cba9cd557da3ee35be9194130a959d5cb))
            ROM_LOAD16_WORD_SWAP("sz2b.08", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872))
        sfz2h                           // 04/03/1996 (c) 1996 (Hispanic)
            ROM_LOAD16_WORD_SWAP("sz2h.07", 0x200000, 0x80000, CRC(947e8ac6) SHA1(da82be7cba9cd557da3ee35be9194130a959d5cb)) /* These two are the same as the Brazil set */
            ROM_LOAD16_WORD_SWAP("sz2h.08", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872)) /* These two are the same as the Brazil set */

        sfz2j                           // 30/04/1996 (c) 1996 (Japan)
        sfz2jd                          //
            ROM_LOAD16_WORD_SWAP("sz2j.07b", 0x200000, 0x80000, CRC(6352f038) SHA1(720a9865ecd0b34315c59ee88d137b4afcdd91cb))
            ROM_LOAD16_WORD_SWAP("sz2j.08b", 0x280000, 0x80000, CRC(92b66e01) SHA1(f09cb38aa49b22a9c98219fb2ad8a66b11fa5872))

        sfz2jr1                         // 27/02/1996 (c) 1996 (Japan)
            ROM_LOAD16_WORD_SWAP("sz2j.07a", 0x200000, 0x80000, CRC(d910b2a2) SHA1(aa201660caa9cef993c147a1077c9e7767b34a78))
            ROM_LOAD16_WORD_SWAP("sz2.08", 0x280000, 0x80000, CRC(0fe8585d) SHA1(0cd5369a5aa90c98d8dc1ff3342cd4d990631cff))

#endif
    };

    const sCoreGameData m_sCoreGameData_ROM07_Rev1
    {
        L"SFA2 (CPS2 ROM07)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07_Rev1,
        m_rgCRC32Data,
        SFA2_A_UNITS_07_REV1,
        ARRAYSIZE(SFA2_A_UNITS_07_REV1),
        L"SFA2e.txt",           // Extra filename
        935,                    // Count of palettes listed in the header
        0x2C000,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07_Rev2
    {
        L"SFA2 (CPS2 ROM07)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07_Rev2,
        m_rgCRC32Data,
        SFA2_A_UNITS_07_REV2,
        ARRAYSIZE(SFA2_A_UNITS_07_REV2),
        L"SFA2e.txt",           // Extra filename
        1057,                   // Count of palettes listed in the header
        0x2C000,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07_SFZ2A
    {
        L"SFA2 (CPS2 ROM07)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07_SFZ2A,
        m_rgCRC32Data,
        SFZ2A_A_UNITS_07,
        ARRAYSIZE(SFZ2A_A_UNITS_07),
        L"SFA2e.txt",           // Extra filename
        1342,                   // Count of palettes listed in the header
        0x2C000,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08_Rev1
    {
        L"SFA2 (CPS2 ROM08)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08_Rev1,
        m_rgCRC32Data,
        SFA2_A_UNITS_08_REV1,
        ARRAYSIZE(SFA2_A_UNITS_08_REV1),
        L"SFA2-8e.txt",         // Extra filename
        271,                    // Count of palettes listed in the header
        0x125e,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08_Rev2
    {
        L"SFA2 (CPS2 ROM08)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08_Rev2,
        m_rgCRC32Data,
        SFA2_A_UNITS_08_REV2,
        ARRAYSIZE(SFA2_A_UNITS_08_REV2),
        L"SFA2-8e.txt",         // Extra filename
        315,                    // Count of palettes listed in the header
        0x125e,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08_SFZ2A
    {
        L"SFA2 (CPS2 ROM08)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08_SFZ2A,
        m_rgCRC32Data,
        SFZ2A_A_UNITS_08,
        ARRAYSIZE(SFZ2A_A_UNITS_08),
        L"SFA2-8e.txt",         // Extra filename
        345,                    // Count of palettes listed in the header
        0x125e,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM09_Hack
    {
        L"SFA2 Expansion Hack (CPS2)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2_HACK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM09_Hack,
        m_rgCRC32Data,
        SFA2_HACK_UNITS_09,
        ARRAYSIZE(SFA2_HACK_UNITS_09),
        L"SFA2-9e.txt",         // Extra filename
        2400,                   // Count of palettes listed in the header
        0x10e,                  // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_SFA2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId);

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId);
};
