#pragma once
#include "GameClassByDir.h"
#include "VSAV_A_DEF.h"

class CGame_VSAV_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vm3.10b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // Vampire Savior: The Lord of Vampire (Euro 970519), same for US, Asia, Hispanic
        { L"Vampire Savior (CPS2 970519)", L"vm3.10b",  0xfffbb5b8, 0 },
        // Vampire Savior: The Lord of Vampire (Japan 970519)
        { L"Vampire Savior (CPS2 Japan 970519)", L"vm3j.10b", 0x434518e9, 0x00F4 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Savior (CPS2)",
        VSAV_A,
        IMGDAT_SECTION_CPS2,
        VSAV_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VSAV_A_UNITS,
        ARRAYSIZE(VSAV_A_UNITS),
        L"VSAVE.txt",               // Extra filename
        4148,                       // Count of palettes listed in the header
        0xc1aa,                     // Lowest known location used for palettes
    };

public:
    CGame_VSAV_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_VSAV_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vsavj.21D3D8A7", 0x3050040 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Vampire Savior (Steam Japan 970519)", L"vsavj.21D3D8A7",  0x73e201ef, 0x38c2de - 0xc1aa },
        { L"Vampire Savior (Steam English 970519)", L"vsavu.21D3D8A7", 0x49464aba, 0x38c1ea - 0xc1aa },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Savior (Steam)",
        VSAV_S,
        IMGDAT_SECTION_CPS2,
        VSAV_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VSAV_A_UNITS,
        ARRAYSIZE(VSAV_A_UNITS),
        L"VSAVSE.txt",               // Extra filename
        4148,                       // Count of palettes listed in the header
        0xc1aa,                     // Lowest known location used for palettes
    };

public:
    CGame_VSAV_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
