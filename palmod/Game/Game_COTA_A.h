#pragma once
#include "GameClassByDir.h"
#include "COTA_A_DEF.h"

class CGame_COTA_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"xmn.05a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"X-Men: Children of the Atom (Asia/Japan 9412--)", L"xmn.05", 0xc3ed62a2, -0x1AB8 },
        { L"X-Men: Children of the Atom (Japan Rent 940812)", L"xmno.05a", 0x0303d672, -0x35F4 },
        { L"X-Men: Children of the Atom (950105)", L"xmn.05a", 0xac0d7759, 0 },
        { L"X-Men: Children of the Atom (950331)", L"xmne.05b", 0x87b0ed0f, 0 },
        { L"X-Men: Children of the Atom (Hispanic 950331)", L"xmnh.05b", 0x87b0ed0f, 0 },

#ifdef NOTES
        // These are the MAME values...
        xmcotar1    05/01/1995 (c) 1994 (Euro)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotau     05/01/1995 (c) 1994 (USA)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotahr1   05/01/1995 (c) 1994 (Hispanic)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotaj     05/01/1995 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))
        xmcotaa     05/01/1995 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05a",  0x100000, 0x80000, CRC(ac0d7759) SHA1(650d4474b13f16af7910a0f721fcda2ddb2414fd))

        xmcotaj1    22/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaj2    19/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaj3    17/12/1994 (c) 1994 (Japan)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaar1   19/12/1994 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))
        xmcotaar2   17/12/1994 (c) 1994 (Asia)
            ROM_LOAD16_WORD_SWAP("xmn.05",   0x100000, 0x80000, CRC(c3ed62a2) SHA1(4e3317d7ca981e33318822103a16e59f4ce20deb))

        xmcotajr    08/12/1994 (c) 1994 (Japan Rent)
            ROM_LOAD16_WORD_SWAP("xmno.05a", 0x100000, 0x80000, CRC(0303d672) SHA1(4816b5ac6a9bf78665112d54a8f3569d590721b2))


        xmcota      31/03/1995 (c) 1994 (Euro)
            ROM_LOAD16_WORD_SWAP("xmne.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
        xmcotah     31/03/1995 (c) 1994 (Hispanic)
            ROM_LOAD16_WORD_SWAP("xmnh.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
        xmcotab     31/03/1995 (c) 1995 (Brazil)
            ROM_LOAD16_WORD_SWAP("xmne.05b", 0x100000, 0x80000, CRC(87b0ed0f) SHA1(f4d78fdd9fcf864e909d9a2bb351b49a5f8ec7a0))
#endif
    };

    const sCoreGameData m_sCoreGameData
    {
        L"X-Men: Children of the Atom (CPS2)",
        COTA_A,
        IMGDAT_SECTION_CPS2,
        COTA_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        COTA_A_UNITS,
        ARRAYSIZE(COTA_A_UNITS),
        L"CotAe.txt",           // Extra filename
        479,                    // Count of palettes listed in the header
        0x2600e,                // Lowest known location used for palettes
    };

public:
    CGame_COTA_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_COTA_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"xmcotaj.21D3D8A7", 0x2C50040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"X-Men: Children of the Atom (Steam - Japan)", L"xmcotaj.21D3D8A7", 0x51144b70, 0x12687c - 0x2683c },
        { L"X-Men: Children of the Atom (Steam - USA)", L"xmcotau.21D3D8A7", 0x1c94ded1, 0x12687c - 0x2683c },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"X-Men: Children of the Atom (Steam)",
        COTA_A,
        IMGDAT_SECTION_CPS2,
        COTA_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        COTA_A_UNITS,
        ARRAYSIZE(COTA_A_UNITS),
        L"CotASe.txt",                  // Extra filename
        479,                            // Count of palettes listed in the header
        0x2600e + 0x12687c - 0x2683c,   // Lowest known location used for palettes
    };

public:
    CGame_COTA_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
