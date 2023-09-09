#pragma once
#include "GameClassByDir.h"
#include "KOF03_A_DEF.h"

class CGame_KOF03_A : public CGameClassByDir
{
private:
    enum class KOF03LoadingKey
    {
        Bootleg,
        Ultra,
    };

    static KOF03LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_boot =
    {
        {
            { L"2k3-p1.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Ultra =
    {
        {
            { L"2k3-p1up.bin", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters 2003: 2004 EX Ultra Plus", L"2k3-p1up.bin", 0x87294c01, 0 },
        { L"King of Fighters 2003 (bootleg 1)", L"2k3-p1.bin", 0x92ed6ee3, 0 },
    };

    const sCoreGameData m_sCoreGameData_boot
    {
        L"King of Fighters 2003 (bootleg 1)",
        KOF03_A,
        IMGDAT_SECTION_KOF,
        KOF03_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_boot,
        m_rgCRC32Data,
        KOF03_A_UNITS,
        ARRAYSIZE(KOF03_A_UNITS),
        L"KOF03E.txt",          // Extra filename
        1932,                   // Count of palettes listed in the header
        0x2000,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Ultra
    {
        L"King of Fighters 2003: 2004 EX Ultra Plus",
        KOF03_A,
        IMGDAT_SECTION_KOF,
        KOF03_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Ultra,
        m_rgCRC32Data,
        KOF03_A_UNITS,
        ARRAYSIZE(KOF03_A_UNITS),
        L"KOF03E.txt",          // Extra filename
        1932,                   // Count of palettes listed in the header
        0x2000,                 // Lowest known location used for palettes
    };

    static void DumpGameHeaders();

public:
    CGame_KOF03_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
