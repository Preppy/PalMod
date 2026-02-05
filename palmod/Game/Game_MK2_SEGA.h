#pragma once
#include "GameClassByDir.h"
#include "MK2_SEGA_DEF.h"

class CGame_MK2_SEGA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mortal kombat ii (world).md", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Mortal Kombat II (Sega Mega Drive v1.1)", L"mortal kombat ii (world).md", 0xA9E013D8, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mortal Kombat II (Mega Drive)",
        MK2_SEGA,
        IMGDAT_SECTION_SEGA,
        MK2_SEGA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MK2_SEGA_UNITS,
        ARRAYSIZE(MK2_SEGA_UNITS),
        L"MK2_SEGA_E.txt",          // Extra filename
        122,                        // Count of palettes listed in the header
        0x70000,                    // Lowest known location used for palettes
    };

public:
    CGame_MK2_SEGA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
