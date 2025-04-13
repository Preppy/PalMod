#pragma once
#include "GameClassByDir.h"
#include "Garou_A_DEF.h"

class CGame_Garou_S : public CGame_Garou_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"p1.bin", 0x900000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Garou: MotW (Steam)", L"p1.bin", 0xeb2d1ea5, 0xc0000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Garou: MotW (Steam)",
        Garou_S,
        IMGDAT_SECTION_GAROU,
        GAROU_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO_FIVE,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Garou_A_UNITS,
        ARRAYSIZE(Garou_A_UNITS),
        L"GarouSE.txt",         // Extra filename
        1631,                  // Count of palettes listed in the header
        0xe040,                // Lowest known location used for palettes
    };

public:
    CGame_Garou_S(uint32_t nConfirmedROMSize) : CGame_Garou_A() { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_GarouP_A : public CGame_Garou_A
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"proto-253-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Garou: MotW (Neo-Geo Prototype)", L"proto_253-p1.p1", 0xc72f0c16, 0xc0000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Garou: MotW (Neo-Geo Prototype)",
        GarouP_A,
        IMGDAT_SECTION_GAROU,
        GAROU_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO_FIVE,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Garou_A_UNITS,
        ARRAYSIZE(Garou_A_UNITS),
        L"GarouPE.txt",         // Extra filename
        1631,                  // Count of palettes listed in the header
        0xe040,                // Lowest known location used for palettes
    };

public:
    CGame_GarouP_A(uint32_t nConfirmedROMSize) : CGame_Garou_A() { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
