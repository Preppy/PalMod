#pragma once
#include "GameClassByDir.h"
#include "VirtuaFighter2_Gen_DEF.h"

class CGame_VirtuaFighter2_GEN : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mpr-19107+mpr-19108.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Virtua Fighter 2 (Genesis)", L"mpr-19107+mpr-19108.bin", 0x937380F3, 0 },
        { L"Virtua Fighter 2 (Genesis)", L"virtua fighter 2 (usa, europe).md", 0x937380F3, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Virtua Fighter 2 (Genesis)",
        VirtuaFighter2_GEN,
        IMGDAT_SECTION_OTHER,
        VirtuaFighter2_GEN_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VF2GEN,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        VirtuaFighter2_GEN_UNITS,
        ARRAYSIZE(VirtuaFighter2_GEN_UNITS),
        L"VirtuaFighter2GE.txt",        // Extra filename
        113,                            // Count of palettes listed in the header
        0xd202,                         // Lowest known location used for palettes
    };

public:
    CGame_VirtuaFighter2_GEN(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
