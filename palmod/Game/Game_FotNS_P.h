#pragma once
#include "GameClassByDir.h"
#include "FotNS_P_DEF.h"

class CGame_FotNS_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"HK_B.bin", 0x24706800 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Hokuto no Ken (PS2)", L"hk_b.bin", 0xCAACB262, 0 },
        // rom size 0x1000000
        //{ L"Hokuto no Ken (Atomiswave)", L"ax1901m01.ic11", 0xFF5A1642, 0x3000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Hokuto no Ken (PS2)",
        FotNS_P,
        IMGDAT_SECTION_ARCSYS,
        FotNS_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_FotNS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        // atomiswave: ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FotNS_P_UNITS,
        ARRAYSIZE(FotNS_P_UNITS),
        L"HK_BE.txt",           // Extra filename
        93,                     // Count of palettes listed in the header
        0x30,                   // Lowest known location used for palettes
    };

public:
    CGame_FotNS_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_FotNS_AW : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // This is the old decrypted rip
            { L"FOTNS_Naomi2_Fixed.bin", 0x8000000 },
            // New rip, unsupported
            // A description of the encryption used by Atomiswave can be found here
            //   https://github.com/mamedev/mame/blob/master/src/mame/sega/awboard.cpp
            //{ L"ax1901m01.ic11", 0x1000000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // This is the old decrypted rip
        { L"Hokuto no Ken (Atomiswave, Old Rip)", L"FOTNS_Naomi2_Fixed.bin", 0xE5E99F6B },
        // New rip, unsupported
        //{ L"Hokuto no Ken (Atomiswave)", L"ax1901m01.ic11", 0xFF5A1642, 0x3000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Hokuto no Ken (Atomiswave)",
        FotNS_AW,
        IMGDAT_SECTION_ARCSYS,
        FotNS_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_FotNS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FotNS_AW_UNITS,
        ARRAYSIZE(FotNS_AW_UNITS),
        L"HK_BE_AW.txt",         // Extra filename
        90,                     // Count of palettes listed in the header
        0x1003030,              // Lowest known location used for palettes
    };

public:
    CGame_FotNS_AW(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
