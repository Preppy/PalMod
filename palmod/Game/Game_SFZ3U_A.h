#pragma once
#include "GameClassByDir.h"
#include "GameClassByFile.h"
#include "SFZ3U_A_DEF.h"

class CGame_SFZ3U_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // also street_fighter_zero_3_upper.dat
            { L"StreetFighterZero3Upper.bin", 0xac00000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter Zero 3 Upper (NAOMI)",
        SFZ3U_A,
        IMGDAT_SECTION_CPS2,
        SFZ3U_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        SFZ3U_A_UNITS,
        ARRAYSIZE(SFZ3U_A_UNITS),
        L"SFZ3UE.txt",             // Extra filename
        2272,                      // Count of palettes listed in the header
        0x3319a80,                 // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_SFZ3U_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SFZ3U_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"z3u.21D3D8A7", 0x7f4a840 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter Zero 3 Upper (Steam)", L"z3u.21D3D8A7", 0x867c6e9d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter Zero 3 Upper (Steam)",
        SFZ3U_S,
        IMGDAT_SECTION_CPS2,
        SFZ3U_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFZ3U_S_UNITS,
        ARRAYSIZE(SFZ3U_S_UNITS),
        L"SFZ3USE.txt",            // Extra filename
        2272,                      // Count of palettes listed in the header
        0x197180,                  // Lowest known location used for palettes
    };

public:
    CGame_SFZ3U_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SFZ3M_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"z3uu.21D3D8A7", 0x86e5040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter Zero 3 Max (Steam)", L"z3u.21D3D8A7", 0x805b1f4d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter Zero 3 Max (Steam)",
        SFZ3M_S,
        IMGDAT_SECTION_CPS2,
        SFZ3M_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SFZ3M_S_UNITS,
        ARRAYSIZE(SFZ3M_S_UNITS),
        L"SFZ3MSE.txt",            // Extra filename
        // NOTE: MAX07 has a different set of palettes than UPPER07
        2224 + 930,                // Count of palettes listed in the header
        0x84a180,                  // Lowest known location used for palettes
    };

public:
    CGame_SFZ3M_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_SFA3MAX_PSP_DIR : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData
    {
        L"Street Fighter Alpha 3 MAX (PSP)",
        SFA3MAX_PSP_D,
        IMGDAT_SECTION_CPS2,
        SFZ3M_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        DEF_BUTTONLABEL_ISMS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        SFA3MAX_PSP_UNITS,
    };

public:
    CGame_SFA3MAX_PSP_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_SFA3MAX_PSP_DIR() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByFile::GetRule(nRuleId, SFA3MAX_PSP_UNITS); };
    static sFileRule GetNextRule() { return CGameClassByFile::GetNextRule(SFA3MAX_PSP_UNITS); };
};
