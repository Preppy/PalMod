#pragma once
#include "GameClassByDir.h"
#include "BREAKERS_A_DEF.h"

class CGame_BREAKERS_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"245-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Breakers Revenge (Neo-Geo)", L"245-p1.p1", 0xc828876d, 0 },
        { L"Breakers Revenge (Neo-Geo)", L"245-p1.bin", 0xc828876d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Breakers Revenge (Neo-Geo)",
        BREAKERS_A,
        IMGDAT_SECTION_BREAKREV,
        BREAKERS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        BREAKERS_A_UNITS,
        ARRAYSIZE(BREAKERS_A_UNITS),
        L"BreakersRevE.txt",            // Extra filename
        415,                            // Count of palettes listed in the header
        0x135e2a,                       // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_BREAKERS_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_BREAKERS_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"245-m68k.swbin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Breakers Revenge (Breakers Collection for Steam)", L"245-m68k.swbin", 0xc828876d, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Breakers Revenge (Breakers Collection for Steam)",
        BREAKERS_S,
        IMGDAT_SECTION_BREAKREV,
        BREAKERS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        BREAKERS_A_UNITS,
        ARRAYSIZE(BREAKERS_A_UNITS),
        L"BreakersRevE.txt",            // Extra filename
        415,                            // Count of palettes listed in the header
        0x135e2a,                       // Lowest known location used for palettes
    };

public:
    CGame_BREAKERS_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
