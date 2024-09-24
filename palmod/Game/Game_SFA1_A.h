#pragma once
#include "GameClassByDir.h"
#include "SFA1_A_DEF.h"

class CGame_SFA1_Core : public CGameClassByDir
{
public:
    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);
};

class CGame_SFA1_A : public CGame_SFA1_Core
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sfz.06", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // All versions of SFA1/SFZ1 use the same exact palette rom
        { L"SFA1 (CPS2)", L"sfz.06", 0x806e8f38, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFA1 (CPS2)",
        SFA1_A,
        IMGDAT_SECTION_CPS2,
        SFA1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFA1_A_UNITS,
        ARRAYSIZE(SFA1_A_UNITS),
        L"SFA1e.txt",           // Extra filename
        245,                    // Count of palettes listed in the header
        0x6795e,                // Lowest known location used for palettes
    };

    static void DumpHeaderPalettes();

public:
    CGame_SFA1_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SFA1_S : public CGame_SFA1_Core
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"bundleStreetFighterAlpha.mbundle", 0xc66550e },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // All versions of SFA1/SFZ1 use the same exact palette rom
        { L"SFA1 (Steam)", L"bundleStreetFighterAlpha.mbundle", 0xcf2234a2, 0x56617cf - 0x6835e },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFA1 (Steam)",
        SFA1_S,
        IMGDAT_SECTION_CPS2,
        SFA1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFA1_A_UNITS,
        ARRAYSIZE(SFA1_A_UNITS),
        L"SFA1Se.txt",             // Extra filename
        245,                       // Count of palettes listed in the header
        0x6795e,                   // Lowest known location used for palettes
    };

public:
    CGame_SFA1_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
