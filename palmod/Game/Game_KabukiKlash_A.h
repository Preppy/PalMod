#pragma once
#include "GameClassByDir.h"
#include "KabukiKlash_A_DEF.h"

class CGame_KabukiKlash_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"092-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Kabuki Klash: Far East of Eden (Neo-Geo)",
        KabukiKlash_A,
        IMGDAT_SECTION_KOF,
        KabukiKlash_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KabukiKlash_A_UNITS,
        ARRAYSIZE(KabukiKlash_A_UNITS),
        L"KabukiKlashE.txt",             // Extra filename
        604,                             // Count of palettes listed in the header
        0x1f5bc0,                        // Lowest known location used for palettes
    };

public:
    CGame_KabukiKlash_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
