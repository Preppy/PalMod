#pragma once
#include "GameClassByDir.h"
#include "TOPF2005_SEGA_DEF.h"

class CGame_TOPF2005_SEGA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"top fighter 2005 (unl).bin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Top Fighter 2005 (Mega Drive)", L"top fighter 2005 (unl).bin", 0x174DEFE6, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Top Fighter 2005 (Mega Drive)",
        TOPF2005_SEGA,
        IMGDAT_SECTION_SEGA,
        TOPF2005_SEGA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        TOPF2005_UNITS,
        ARRAYSIZE(TOPF2005_UNITS),
        L"TOPF2005e.txt",        // Extra filename
        32,                      // Count of palettes listed in the header
        0x24798,                 // Lowest known location used for palettes
    };

public:
    CGame_TOPF2005_SEGA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
