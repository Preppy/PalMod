#pragma once
#include "GameClassByDir.h"
#include "WakuWaku7_A_DEF.h"

class CGame_WakuWaku7_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"225-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Waku Waku 7 variants...
        { L"Waku Waku 7 (Neo-Geo)", L"225-p1.p1", 0xb14da766, 0 },
        { L"Waku Waku 7 (Neo-Geo Boss Hack)", L"225-p1bh.p1", 0x0b7a3776, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Waku Waku 7 (Neo-Geo)",
        WakuWaku7_A,
        IMGDAT_SECTION_WAKUWAKU7,
        WAKUWAKU7_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_WAKUWAKU7_FIVE,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WakuWaku7_A_UNITS,
        ARRAYSIZE(WakuWaku7_A_UNITS),
        L"WakuWaku7E.txt",             // Extra filename
        549,                           // Count of palettes listed in the header
        0xc8d8,                        // Lowest known location used for palettes
    };

public:
    CGame_WakuWaku7_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    // Waku uses a custom UpdatePalImg because the paired palette count varies between 4 and 5
    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_WakuWaku7_PS2 : public CGame_WakuWaku7_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"wakuwak7.rom", 0x300000, INVALID_UNIT_VALUE_16, true, L"wakuwak7.afs", 0x1c13800 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Waku Waku 7 (PS2)", L"wakuwak7.rom", 0x23A680A8, 0 },
        { L"Waku Waku 7 (PS2 AFS)", L"wakuwak7.afs", 0x990BBAA6, 0x5b800 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Waku Waku 7 (PS2)",
        WakuWaku7_PS2,
        IMGDAT_SECTION_WAKUWAKU7,
        WAKUWAKU7_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_WAKUWAKU7_FIVE,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        WakuWaku7_A_UNITS,
        ARRAYSIZE(WakuWaku7_A_UNITS),
        L"WakuWaku7E.txt",             // Extra filename
        549,                           // Count of palettes listed in the header
        0xc8d8,                        // Lowest known location used for palettes
    };

public:
    CGame_WakuWaku7_PS2(uint32_t nConfirmedROMSize) : CGame_WakuWaku7_A(nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
