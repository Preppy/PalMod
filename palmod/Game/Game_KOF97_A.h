#pragma once
#include "GameClassByDir.h"
#include "KOF97_A_DEF.h"

class CGame_KOF97_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"232-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters '97 (Neo-Geo)", L"232-p2.sp2", 0x158b23f6, 0 },
        { L"King of Fighters '97 (Neo-Geo)", L"232-p2.bin", 0x158b23f6, 0 },
        { L"King of Fighters '97 (Neo-Geo)", L"KOF97_p2.rom", 0x158b23f6, 0 },
        { L"King of Fighters '97 Plus (Neo-Geo bootleg)", L"kf97-p2p.bin", 0x5502b020, 0 },

        // larger size  kof97cn  232cn-p2.bin  King of Fighters '97 (10th Anniversary Chinese Edition, EGHT hack)
        // shifted?     kof97inv 232inv-p2.sp2 King of Fighters '97 (Invincible Plus)
        // split        kof97oro               King of Fighters '97 oroshi plus 2003

        // kof97cbt 
        { L"King of Fighters '97 - Combo Training (Hack, Ver. 2018)", L"97cbt-p2.bin", 0x91c0cfdb, 0 },
        // kof97pls
        { L"King of Fighters '97 Plus (bootleg)", L"kf97-p2p.bin", 0x5502b020, 0 },
        // kof97ps
        { L"King of Fighters '97 (Imitation Playstation final improved version 2016-10-29)", L"232-p2ps.sp2", 0x90723643, 0 },
        // kof97rc
        { L"King of Fighters '97 - Random Combo (Hack, Ver. 2010)", L"232-rc.sp2", 0x406e4a4b, 0 },
        // kof97t
        { L"King of Fighters '97 (Optimized Edition)", L"232t.p2", 0xd9e51750, 0 },
        // kof97t2020
        { L"King of Fighters '97 (Optimised Edition 2020)", L"232t2020-p2.sp2", 0x6d448462, 0 },
        // kof97xt
        { L"King of Fighters '97 - Final Battle (hack)", L"232xt-p2.bin", 0x6d4503ce, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '97 (Neo-Geo)",
        KOF97_A,
        IMGDAT_SECTION_KOF,
        KOF97_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_KOF97,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF97_A_UNITS,
        ARRAYSIZE(KOF97_A_UNITS),
        L"KOF97E.txt",      // Extra filename
        2568,               // Count of palettes listed in the header
        0x2d1ff0,           // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF97_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_KOF97AE_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"232ae-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters '97AE (Neo-Geo)", L"232ae.p2", 0x8cffe3f3, 0 },
        { L"King of Fighters '97 Anniversary Edition (Neo-Geo)", L"232ae-p2.sp2", 0x228aa8d1, 0 },
        { L"King of Fighters '97 - Anniversary Edition (Fork Build 2.1.1811) [Hack]", L"232aef-p2.sp2", 0xf00ba90d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '97 Anniversary Edition (Neo-Geo)",
        KOF97AE_A,
        IMGDAT_SECTION_KOF,
        KOF97_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_KOF97,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF97AE_A_UNITS,
        ARRAYSIZE(KOF97AE_A_UNITS),
        L"KOF97AEe.txt",      // Extra filename
        2568,                 // Count of palettes listed in the header
        0x2d1ff0,             // Lowest known location used for palettes
    };

public:
    CGame_KOF97AE_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_KOF97GM_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"p1.bin", 0x500000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters '97 Global Match (Steam)", L"p1.bin", 0x228aa8d1, 0x100000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '97 Global Match (Steam)",
        KOF97GM_S,
        IMGDAT_SECTION_KOF,
        KOF97_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_KOF97,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF97AE_A_UNITS,
        ARRAYSIZE(KOF97AE_A_UNITS),
        L"KOF97AEe.txt",      // Extra filename
        2568,                 // Count of palettes listed in the header
        0x2d1ff0,             // Lowest known location used for palettes
    };

public:
    CGame_KOF97GM_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

