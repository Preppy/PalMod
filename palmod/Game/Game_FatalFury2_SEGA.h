#pragma once
#include "GameClassByDir.h"
#include "FatalFury2_SEGA_DEF.h"

class CGame_FatalFury2_SEGA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"fatal fury 2 (usa, kor).bin", 0x300000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Fatal Fury 2 (Mega Drive)", L"fatal fury 2 (usa, kor).bin", 0x1B1754CB, 0 },
        { L"Fatal Fury 2 (Mega Drive)", L"Fatal_Fury_2_USA_Korea_En.md", 0x1B1754CB, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fatal Fury 2 (Mega Drive)",
        FatalFury2_SEGA,
        IMGDAT_SECTION_SEGA,
        FatalFury2_SEGA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_FF2_SEGA,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        FatalFury2_SEGA_UNITS,
        ARRAYSIZE(FatalFury2_SEGA_UNITS),
        L"FF2_SEGA_E.txt",          // Extra filename
        159,                        // Count of palettes listed in the header
        0x31a0,                     // Lowest known location used for palettes
    };

public:
    CGame_FatalFury2_SEGA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
