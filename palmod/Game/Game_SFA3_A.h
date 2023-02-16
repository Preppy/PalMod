#pragma once
#include "GameClassByDir.h"
#include "SFA3_A_DEF.h"

class CGame_SFA3_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sz3.09c", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Street Fighter Alpha 3 variants...
        { L"SFA3 980904 (CPS2)", L"sz3.09c", 0xb29e5199, 0 },
        { L"SFA3 (CPS2)", L"sz3.09", 0xc5589553, -0x28 },
        { L"SFZ3 980726 (CPS2 Japan)", L"sz3.09a", 0x2180892, -0x28 },

        // We are aligned to the character sprites here, but not the portraits/stages.
        // Accordingly, we don't actually expose this in the file picker UI.
        { L"SFA3 980616 (Prototype: Stages and Portraits aren't supported)", L"sz3-usam_09.8d", 0x822fc451, 0x2ff9a },

#ifdef NOTES
        // These are the MAME values...
        ROM_START(sfa3) // 04/09/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfa3u)    // 04/09/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfz3j)    // 04/09/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfz3a)    // 04/09/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))

        ROM_START(sfa3h)    // 04/09/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("sz3.09c", 0x300000, 0x80000, CRC(b29e5199) SHA1(c6c215eb5aa37f678a9cafcbd8620969fb5ca12f))


        ROM_START(sfa3ur1)  // 29/06/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfz3jr2)  // 29/06/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfz3ar1)  // 01/07/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfa3hr1)  // 29/06/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))

        ROM_START(sfa3b)    // 29/06/1998 (c) 1998 (Brazil)
        ROM_LOAD16_WORD_SWAP("sz3.09", 0x300000, 0x80000, CRC(c5589553) SHA1(cda1fdc2ab2f390a2358defd9923a2796093926d))


        ROM_START(sfa3us)   // 16/06/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("sz3-usam_09.8d", 0x300000, 0x80000, CRC(822fc451) SHA1(49ec9e3f33d6023b59b350a79fe2299f6ac90251))


        ROM_START(sfz3jr1)   // 27/07/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("sz3.09a", 0x300000, 0x80000, CRC(2180892c) SHA1(65a44c612b1c6dd527b306c262caa5040897ce7b))
#endif
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFA3 (CPS2)",
        SFA3_A,
        IMGDAT_SECTION_CPS2,
        SFA3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFA3_A_UNITS,
        ARRAYSIZE(SFA3_A_UNITS),
        L"SFA3e.txt",              // Extra filename
        2875,                      // Count of palettes listed in the header
        0x2C000,                   // Lowest known location used for palettes
    };

    static void DumpHeaderPalettes();

public:
    CGame_SFA3_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
