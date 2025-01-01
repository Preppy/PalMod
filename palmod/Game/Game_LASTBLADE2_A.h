#pragma once
#include "GameClassByDir.h"
#include "LASTBLADE2_A_DEF.h"

class CGame_LASTBLADE2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData LASTBLADE2_A_FileLoadingData_NeoGeo =
    {
        {
            { L"LB2_P1.ROM", 0x100000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData LASTBLADE2_A_FileLoadingData_Steam =
    {
        {
            { L"P1.bin", 0x500000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"The Last Blade 2 (Neo-Geo)", L"LB2_P1.ROM", 0xaf1e6554, 0 },
        { L"The Last Blade 2 (Steam)", L"P1.bin", 0x839893c2, 0 },
    };

    const sCoreGameData m_sCoreGameData_NeoGeo
    {
        L"The Last Blade 2 (Neo-Geo)",
        LASTBLADE2_A,
        IMGDAT_SECTION_KOF,
        LASTBLADE2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_LASTBLADE2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        LASTBLADE2_A_FileLoadingData_NeoGeo,
        m_rgCRC32Data,
        LASTBLADE2_A_UNITS,
        ARRAYSIZE(LASTBLADE2_A_UNITS),
        L"LastBlade2E.txt",             // Extra filename
        6095,                           // Count of palettes listed in the header
        0xa9600,                        // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Steam
    {
        L"The Last Blade 2 (Steam)",
        LASTBLADE2_S,
        IMGDAT_SECTION_KOF,
        LASTBLADE2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_LASTBLADE2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        LASTBLADE2_A_FileLoadingData_Steam,
        m_rgCRC32Data,
        LASTBLADE2_A_UNITS,
        ARRAYSIZE(LASTBLADE2_A_UNITS),
        L"LastBlade2E.txt",             // Extra filename
        6095,                           // Count of palettes listed in the header
        0xa9600,                        // Lowest known location used for palettes
    };

public:
    CGame_LASTBLADE2_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad /*= LASTBLADE2_A */);

    // There are different filenames for NeoGeo and Steam, so direct the user appropriately
    static sFileRule GetRule(SupportedGamesList nGameId, uint32_t nRuleId);
    static sFileRule GetRule_A(uint32_t nRuleId) { return GetRule(LASTBLADE2_A, nRuleId); };
    static sFileRule GetRule_S(uint32_t nRuleId) { return GetRule(LASTBLADE2_S, nRuleId); };
};
