#pragma once
#include "GameClassByDir.h"
#include "JCHAN_A_DEF.h"

class CGame_JCHAN_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            // These two files have stuff like the logo palettes
            //{ L"j2p1x2.u68", 0x80000 },
            //{ L"j2p1x1.u67", 0x80000 },
            // These two file are characters
            { L"j2p1x4.u70", 0x80000 },
            { L"j2p1x3.u69", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Jackie Chan in Fists of Fire (Kaneko)",
        JCHAN_A,
        IMGDAT_SECTION_OTHER,
        JCHAN_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_JCHAN,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BRG555_LE,
        m_sFileLoadingData,
        JCHAN_A_UNITS,
        ARRAYSIZE(JCHAN_A_UNITS),
        L"JChanE.txt",          // Extra filename
        36,                     // Count of palettes listed in the header
        0xc0000,                // Lowest known location used for palettes
    };

public:
    CGame_JCHAN_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
