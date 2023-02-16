#pragma once
#include "GameClassByDir.h"
#include "AOF3_A_DEF.h"

class CGame_AOF3_A : public CGameClassByDir
{
private:
    enum class AOF3LoadingKey
    {
        P1,
        P2,
    };

    static AOF3LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_P1 =
    {
        {
            { L"096-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_P2 =
    {
        {
            { L"096-p2.sp2", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Art of Fighting 3 (Neo-Geo P1)", L"096-p1.p1", 0x9edb420d, 0 },
        { L"Art of Fighting 3 (Neo-Geo P1 Korea)", L"096-p1k.p1", 0xa0780789, 0 },
        { L"Art of Fighting 3 (Neo-Geo P2)", L"096-p2.sp2", 0x4d5a2602, 0 },
        { L"Art of Fighting 3 (Neo-Geo P1)", L"096-p1.bin", 0x9edb420d, 0 },
        { L"Art of Fighting 3 (Neo-Geo P2)", L"096-p2.bin", 0x4d5a2602, 0 },
    };

    const sCoreGameData m_sCoreGameData_P1
    {
        L"Art of Fighting 3 (Neo-Geo)",
        AOF3_A,
        IMGDAT_SECTION_KOF,
        AOF3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_P1,
        m_rgCRC32Data,
        AOF3_A_P1_UNITS,
        ARRAYSIZE(AOF3_A_P1_UNITS),
        L"AOF3P1E.txt",             // Extra filename
        209,                        // Count of palettes listed in the header
        0x58000,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_P2
    {
        L"Art of Fighting 3 (Neo-Geo)",
        AOF3_A,
        IMGDAT_SECTION_KOF,
        AOF3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AOF3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_P2,
        m_rgCRC32Data,
        AOF3_A_P2_UNITS,
        ARRAYSIZE(AOF3_A_P2_UNITS),
        L"AOF3P2E.txt",             // Extra filename
        63,                         // Count of palettes listed in the header
        0x1f0000,                   // Lowest known location used for palettes
    };

public:
    CGame_AOF3_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    BOOL UpdatePalImg(int Node01 = -1, int Node02 = -1, int Node03 = -1, int Node04 = -1);

    static sFileRule GetRule(uint32_t nRuleId);
};
