#pragma once
#include "GameClassByDir.h"
#include "SAMSHO3_A_DEF.h"

class CGame_SAMSHO3_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"087-p5.p5", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown III (Neo-Geo)",
        SAMSHO3_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SAMSHO3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        {},
        SAMSHO3_A_UNITS,
        ARRAYSIZE(SAMSHO3_A_UNITS),
        L"SAMSHO3E.txt",          // Extra filename
        942,                      // Count of palettes listed in the header
        0x0,                      // Lowest known location used for palettes
    };

    static void DumpPaletteHeaders();

public:
    CGame_SAMSHO3_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    // Multisprite pairing logic changes between units so handle ourselves
    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SAMSHO3_PS2 : public CGame_SAMSHO3_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"samsho3.rom", 0x300000, INVALID_UNIT_VALUE_16, true, L"u_sam3.afs", 0x2351800 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Samurai Shodown III (PS2)", L"samsho3.rom", 0xCD2F768A, 0x200000 },
        { L"Samurai Shodown III (PS2 AFS)", L"u_sam3.afs", 0x4B14970F, 0x25f800 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown III (PS2)",
        SAMSHO3_PS2,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SAMSHO3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SAMSHO3_A_UNITS,
        ARRAYSIZE(SAMSHO3_A_UNITS),
        L"SAMSHO3E.txt",          // Extra filename
        942,                      // Count of palettes listed in the header
        0x0,                      // Lowest known location used for palettes
    };

public:
    CGame_SAMSHO3_PS2(uint32_t nConfirmedROMSize) : CGame_SAMSHO3_A(nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
