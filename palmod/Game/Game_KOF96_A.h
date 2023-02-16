#pragma once
#include "GameClassByDir.h"
#include "KOF96_A_DEF.h"

class CGame_KOF96_A : public CGameClassByDir
{
private:
    enum class KOF96LoadingKey
    {
        Normal,
        Hack,
    };

    static KOF96LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_Normal =
    {
        {
            { L"214-p2.sp2", 0x200000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Hack =
    {
        {
            { L"214ae-p2.p2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters '96 (Neo-Geo)", L"214-p2.sp2", 0x002ccb73, 0},
        { L"King of Fighters '96 (Neo-Geo)", L"214-p2.bin", 0x002ccb73, 0 },
        { L"King of Fighters '96 (The Anniversary Edition 2.0 Hack, Neo-Geo)", L"214ae-p2.p2", 0x2638be07, 0},
    };

    const sCoreGameData m_sCoreGameData_Normal
    {
        L"King of Fighters '96 (Neo-Geo)",
        KOF96_A,
        IMGDAT_SECTION_KOF,
        KOF96_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Normal,
        m_rgCRC32Data,
        KOF96_A_UNITS,
        ARRAYSIZE(KOF96_A_UNITS),
        L"KOF96E.txt",      // Extra filename
        1038,               // Count of palettes listed in the header
        0x100002,           // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Hack
    {
        L"King of Fighters '96 (The Anniversary Edition 2.0 Hack, Neo-Geo)",
        KOF96_A,
        IMGDAT_SECTION_KOF,
        KOF96_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Normal,
        m_rgCRC32Data,
        KOF96_A_UNITS,
        ARRAYSIZE(KOF96_A_UNITS),
        L"KOF96E.txt",      // Extra filename
        1038,               // Count of palettes listed in the header
        0x100002,           // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF96_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
