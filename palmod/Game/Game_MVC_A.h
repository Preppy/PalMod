#pragma once
#include "GameClassByDir.h"
#include "MVC_A_DEF.h"

class CGame_MVC_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mvc.06", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Marvel Vs. Capcom: Clash of Super Heroes
        { L"MvC (CPS2 980112)", L"mvc.06",  0x4b0b6d3e, 0 },
        { L"MvC (CPS2 980123)", L"mvc.06a", 0x8528e1f5, 0 },
        { L"MvC (CPS2 980123)", L"mvcu.06", 0x2f1524bc, -0x60 },

#ifdef NOTES
    // These are the MAME values...
    ROM_START(mvscud)   // bootlet: USA 980123 Phoenix Edition (bootleg)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvsc )   // 23/01/1998 (c) 1998 (Euro)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscu )  // 23/01/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscj )  // 23/01/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START(mvsca)    // 23/01/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvsch )  // 23/01/1998 (c) 1998 (Hispanic)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))

    ROM_START( mvscb )   // 23/01/1998 (c) 1998 (Brazil)
        ROM_LOAD16_WORD_SWAP("mvc.06a", 0x180000, 0x80000, CRC(8528e1f5) SHA1(cd065c05268ab581b05676da544baf6af642acac))


    ROM_START(mvscr1) // 12/01/1998 (c) 1998 (Euro)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))
        
    ROM_START( mvscjr1 )    // 12/01/1998 (c) 1998 (Japan)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))

    ROM_START( mvscar1 )    // 12/01/1998 (c) 1998 (Asia)
        ROM_LOAD16_WORD_SWAP("mvc.06", 0x180000, 0x80000, CRC(4b0b6d3e) SHA1(375372adf0a508bb6fc6a79326b2d4171db9ca0f))


    ROM_START( mvscur1 )    // 23/01/1998 (c) 1998 (USA)
        ROM_LOAD16_WORD_SWAP("mvcu.06", 0x180000, 0x80000, CRC(2f1524bc) SHA1(b6543d40fb98eabec82787e0fd60fbc59069e72e))

    ROM_START( mvscjsing )  // 23/01/1998 (c) 1998 (Japan) - Single PCB
        ROM_REGION( CODE_SIZE, "maincpu", 0 )      /* 68000 code */
        ROM_LOAD16_BYTE( "mvc_ja.simm1", 0x000000, 0x200000, CRC(6a2ef7c2) SHA1(625530b92217375014db4694196e6ab2a4684db6) ) // == mvc_ja.simm4
        ROM_LOAD16_BYTE( "mvc_ja.simm3", 0x000001, 0x200000, CRC(699d09ad) SHA1(67f6587808f55f10f58e067512f8db3f67dda770) ) // == mvc_ja.simm6
#endif
};

    const sCoreGameData m_sCoreGameData
    {
        L"MvC (CPS2)",
        MVC_A,
        IMGDAT_SECTION_CPS2,
        MVC_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MVC_A_UNITS,
        ARRAYSIZE(MVC_A_UNITS),
        L"MvCE.txt",             // Extra filename
        1337,                    // Count of palettes listed in the header
        0x30b18,                 // Lowest known location used for palettes
    };

public:
    CGame_MVC_A(uint32_t nConfirmedROMSize, bool fUseNormalData = true) { if (fUseNormalData) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); } };

    // We use custom handling since we have a mid-ROM shift for mvcu
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_MVC_D : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"0.bin", 4930596 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Marvel Vs. Capcom: Clash of Super Heroes
        { L"MvC (Dreamcast)", L"0.bin",  0xc4acce88, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"MvC (Dreamcast)",
        MVC_D,
        IMGDAT_SECTION_CPS2,
        MVC_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MVC_A_UNITS,
        ARRAYSIZE(MVC_A_UNITS),
        L"MvCdE.txt",           // Extra filename
        1337,                   // Count of palettes listed in the header
        0x30B18,                // Lowest known location used for palettes
    };

public:
    CGame_MVC_D(uint32_t nConfirmedROMSize, bool fUseNormalData = true) { if (fUseNormalData) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); } };

    // We use custom handling since we have mid-ROM shifts
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_MVC_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mvscj.21D3D8A7", 0x3050040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Marvel Vs. Capcom: Clash of Super Heroes
        { L"MvC (Steam - Japan)", L"mvscj.21D3D8A7", 0x7c11c44f, 0x1c82e2 - 0x482a2 },
        { L"MvC (Steam - USA)", L"mvscu.21D3D8A7", 0x4e1b5fff, 0x1c82e2 - 0x482a2 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"MvC (Steam)",
        MVC_S,
        IMGDAT_SECTION_CPS2,
        MVC_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MVC_A_UNITS,
        ARRAYSIZE(MVC_A_UNITS),
        L"MvCSE.txt",                   // Extra filename
        1337,                           // Count of palettes listed in the header
        0x30B18 + 0x1c82e2 - 0x482a2,   // Lowest known location used for palettes
    };

public:
    CGame_MVC_S(uint32_t nConfirmedROMSize) { { InitializeGame(nConfirmedROMSize, m_sCoreGameData); } };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
