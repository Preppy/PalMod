#pragma once
#include "GameClassByDir.h"
#include "MK1_PS2_DEF.h"

class CGame_MK1_PS2 : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mk1.sr", 0x7f7c000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Mortal Kombat (PS2)", L"mk1.sr", 0x5420F647 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mortal Kombat (PS2)",
        MK1_PS2,
        IMGDAT_SECTION_OTHER,
        MK1_PS2_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MK1_PS2_UNITS,
        ARRAYSIZE(MK1_PS2_UNITS),
        L"MK1_PS2_E.txt",           // Extra filename
        64,                         // Count of palettes listed in the header
        0x9be1e,                    // Lowest known location used for palettes
    };

public:
    CGame_MK1_PS2(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
