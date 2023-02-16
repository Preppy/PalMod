#pragma once
#include "GameClassByDir.h"
#include "LASTBLADE_A_DEF.h"

class CGame_LASTBLADE_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData LASTBLADE_A_FileLoadingData_NeoGeo =
    {
        {
            { L"234-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData LASTBLADE_A_FileLoadingData_Steam =
    {
        {
            { L"lastblad_game_m68k", 0x500000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"The Last Blade (Neo-Geo)", L"234-p1.p1", 0xe123a5a3, 0 },
        { L"The Last Blade (Steam)", L"lastblad_game_m68k", 0xe72943de, 0 },
    };

    const sCoreGameData m_sCoreGameData_NeoGeo
    {
        L"The Last Blade (Neo-Geo)",
        LASTBLADE_A,
        IMGDAT_SECTION_KOF,
        LASTBLADE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_LASTBLADE1,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        LASTBLADE_A_FileLoadingData_NeoGeo,
        m_rgCRC32Data,
        LASTBLADE_A_UNITS,
        ARRAYSIZE(LASTBLADE_A_UNITS),
        L"LastBladeE.txt",             // Extra filename
        1394,                          // Count of palettes listed in the header
        0xaac00,                       // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Steam
    {
        L"The Last Blade (Steam)",
        LASTBLADE_S,
        IMGDAT_SECTION_KOF,
        LASTBLADE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_LASTBLADE1,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        LASTBLADE_A_FileLoadingData_Steam,
        m_rgCRC32Data,
        LASTBLADE_A_UNITS,
        ARRAYSIZE(LASTBLADE_A_UNITS),
        L"LastBladeE.txt",             // Extra filename
        1394,                          // Count of palettes listed in the header
        0xaac00,                       // Lowest known location used for palettes
    };

    static void DumpAllCharacters();

public:
    CGame_LASTBLADE_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad /*= LASTBLADE2_A */);

    // There are different filenames for NeoGeo and Steam, but we've just been using the NeoGeo info here
    static sFileRule GetRule(uint32_t nRuleId);
};
