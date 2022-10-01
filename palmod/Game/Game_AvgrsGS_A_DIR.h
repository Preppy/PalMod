#pragma once
#include "GameClassByDir.h"
#include "AvgrsGS_A_DIR_DEF.h"

class CGame_AvgrsGS_A_DIR : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sf_00-0.7k", 0x80000 },
            { L"sf_01-0.7l", 0x80000 },
        },
        FileReadType::Interleaved_Read2Bytes_LE,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Avengers in Galactic Storm (Data East)",
        AvgrsGS_A,
        IMGDAT_SECTION_OTHER,
        AvgrsGS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        AvgrsGS_A_UNITS,
        ARRAYSIZE(AvgrsGS_A_UNITS),
        L"AvgrsGSE.txt",                 // Extra filename
        223,                             // Count of palettes listed in the header
        0xf2000,                         // Lowest known location used for palettes
    };

public:
    CGame_AvgrsGS_A_DIR(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
    static sFileRule GetNextRule() { return CGameClassByDir::GetNextRule(m_sFileLoadingData); };
};
