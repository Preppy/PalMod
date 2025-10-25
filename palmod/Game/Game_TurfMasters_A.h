#pragma once
#include "GameClassByDir.h"
#include "TurfMasters_A_DEF.h"

class CGame_TurfMasters_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"200-p1.bin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Neo Turf Masters (Neo-Geo)", L"200-p1.p1", 0x28C83048, 0 },
        { L"Neo Turf Masters (Neo-Geo)", L"200-p1.bin", 0x28C83048, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Neo Turf Masters (Neo-Geo)",
        TURFMASTERS_A,
        IMGDAT_SECTION_NEOGEO,
        TURFMASTERS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_NEOTURFMASTERS,
        m_sFileLoadingData,
        m_rgCRC32Data,
        TurfMasters_A_UNITS,
        ARRAYSIZE(TurfMasters_A_UNITS),
        L"TurfMastersE.txt",        // Extra filename
        3,                          // Count of palettes listed in the header
        0x1ada30,                   // Lowest known location used for palettes
    };

public:
    CGame_TurfMasters_A(uint32_t nConfirmedROMSize, LPCWSTR pszFilePath);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
