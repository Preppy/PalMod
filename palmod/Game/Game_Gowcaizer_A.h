#pragma once
#include "GameClassByDir.h"
#include "Gowcaizer_A_DEF.h"

class CGame_Gowcaizer_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"094-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Voltage Fighter Gowcaizer (Neo-Geo)", L"094-p1.p1", 0x33019545, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Voltage Fighter Gowcaizer (Neo-Geo)",
        Gowcaizer_A,
        IMGDAT_SECTION_NEOGEO,
        Gowcaizer_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Gowcaizer_A_UNITS,
        ARRAYSIZE(Gowcaizer_A_UNITS),
        L"GowcaizerE.txt",         // Extra filename
        291,                       // Count of palettes listed in the header
        0x1354c0,                  // Lowest known location used for palettes
    };

public:
    CGame_Gowcaizer_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
