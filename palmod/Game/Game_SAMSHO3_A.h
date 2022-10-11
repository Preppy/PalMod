#pragma once
#include "GameClassByDir.h"
#include "SAMSHO3_A_DEF.h"

class CGame_SAMSHO3_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"087-p5.p5", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown III (Neo-Geo)",
        SAMSHO3_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SAMSHO3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        SAMSHO3_A_UNITS,
        ARRAYSIZE(SAMSHO3_A_UNITS),
        L"SAMSHO3E.txt",          // Extra filename
        898,                      // Count of palettes listed in the header
        0x360,                    // Lowest known location used for palettes
    };

    static void DumpPaletteHeaders();

public:
    CGame_SAMSHO3_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
