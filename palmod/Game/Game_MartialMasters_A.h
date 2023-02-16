#pragma once
#include "GameClassByDir.h"
#include "MartialMasters_A_DEF.h"

class CGame_MartialMasters_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"v104_32m.u9", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Martial Masters (PGM)", L"v104_32m.u9", 0xcfd9dff4, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Martial Masters (PGM)",
        MartialMasters_A,
        IMGDAT_SECTION_PGM,
        MartialMasters_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MartialMasters_A_UNITS,
        ARRAYSIZE(MartialMasters_A_UNITS),
        L"MartialMastersE.txt",     // Extra filename
        323,                        // Count of palettes listed in the header
        0xa9600,                    // Lowest known location used for palettes
    };

public:
    CGame_MartialMasters_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
