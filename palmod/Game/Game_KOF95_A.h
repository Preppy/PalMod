#pragma once
#include "GameClassByDir.h"
#include "KOF95_A_DEF.h"

class CGame_KOF95_A : public CGameClassByDir
{
private:
    enum class KOF95LoadingKey
    {
        Normal,
        Hack,
        Split,
    };

    static KOF95LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_Normal =
    {
        {
            { L"084-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Hack =
    {
        {
            { L"084-p2sp.p2", 0x100000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Split =
    {
        {
            { L"084-epr.ep4", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"King of Fighters '95 (Neo-Geo)", L"084-p1.p1", 0x2c4b4cbf, 0 },
        { L"King of Fighters '95 (Neo-Geo)", L"084-p1.bin", 0x2cba2716, 0 },
        { L"King of Fighters '95 (Neo-Geo MVS/AES)", L"084-pg1.p1", 0x5E54CF95, 0 },
        { L"King of Fighters '95 (Special 2017 Hack, Neo-Geo)", L"084-p2sp.p2", 0x5cb1af9e, 0 },

        { L"King of Fighters '95 (Neo-Geo MVS split)", L"084-epr.ep4", 0x19D3FBEE, 0x59000 - 0xd9000 },
    };
    
    const sCoreGameData m_sCoreGameData_Normal
    {
        L"King of Fighters '95 (Neo-Geo)",
        KOF95_A,
        IMGDAT_SECTION_KOF,
        KOF95_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Normal,
        m_rgCRC32Data,
        KOF95_A_UNITS,
        ARRAYSIZE(KOF95_A_UNITS),
        L"KOF95E.txt",      // Extra filename
        547,                // Count of palettes listed in the header
        0xd7020,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Hack
    {
        L"King of Fighters '95 (Special 2017 Hack, Neo-Geo)",
        KOF95_A,
        IMGDAT_SECTION_KOF,
        KOF95_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Normal,
        m_rgCRC32Data,
        KOF95_A_UNITS,
        ARRAYSIZE(KOF95_A_UNITS),
        L"KOF95E.txt",      // Extra filename
        547,                // Count of palettes listed in the header
        0xd7020,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Split
    {
        L"King of Fighters '95 (Neo-Geo)",
        KOF95_A,
        IMGDAT_SECTION_KOF,
        KOF95_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Split,
        m_rgCRC32Data,
        KOF95_A_UNITS,
        ARRAYSIZE(KOF95_A_UNITS),
        L"KOF95E.txt",      // Extra filename
        547,                // Count of palettes listed in the header
        0xd7020,            // Lowest known location used for palettes
    };


    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF95_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
