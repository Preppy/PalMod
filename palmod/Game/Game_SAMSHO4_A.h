#pragma once
#include "GameClassByDir.h"
#include "SAMSHO4_A_DEF.h"

class CGame_SAMSHO4_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sams4_p1.rom", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Samurai Shodown IV (Neo-Geo)", L"222-p1.p1", 0x1a5cb56d, 0 },
        { L"Samurai Shodown IV (Neo-Geo)", L"222_p1.p1", 0x1a5cb56d, 0 },
        { L"Samurai Shodown IV (Neo-Geo Korea)", L"222-p1k.p1", 0x06e0a25d, 0 },
        { L"Samurai Shodown IV (Neo-Geo) ", L"sams4_p1.rom", 0x1a5cb56d, 0 },
        { L"Samurai Shodown IV (Special 2017, hack) ", L"222-p1sp.p1", 0x6e98579a, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown IV (Neo-Geo)",
        SAMSHO4_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO4_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SAMSHO3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SAMSHO4_A_UNITS,
        ARRAYSIZE(SAMSHO4_A_UNITS),
        L"SAMSHO4E.txt",            // Extra filename
        760,                        // Count of palettes listed in the header
        0xc0000,                    // Lowest known location used for palettes
    };

    static void DumpAllPalettes();

public:
    CGame_SAMSHO4_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    // SamSho multisprite export logic varies, so handle by hand
    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SAMSHO4_PS2 : public CGame_SAMSHO4_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"samsho4.rom", 0x500000, INVALID_UNIT_VALUE_16, true, L"u_sam4.afs", 0x2bd2000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Samurai Shodown IV (PS2)", L"samsho4.rom", 0x4B3989F3, 0 },
        { L"Samurai Shodown IV (PS2 AFS)", L"u_sam4.afs", 0xEF78FDDF, 0x61800 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown IV (PS2)",
        SAMSHO4_PS2,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO4_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SAMSHO3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SAMSHO4_A_UNITS,
        ARRAYSIZE(SAMSHO4_A_UNITS),
        L"SAMSHO4E.txt",            // Extra filename
        760,                        // Count of palettes listed in the header
        0xc0000,                    // Lowest known location used for palettes
    };

public:
    CGame_SAMSHO4_PS2(uint32_t nConfirmedROMSize) : CGame_SAMSHO4_A(nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
