#pragma once
#include "GameClassByDir.h"
#include "KarnovsR_A_DEF.h"

class CGame_KarnovsR_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"066-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Karnov's Revenge / Fighter's History Dynamite (Neo-Geo)",
        KarnovsR_A,
        IMGDAT_SECTION_KARNOVSR,
        KARNOVSR_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        {},
        KarnovsR_A_UNITS,
        ARRAYSIZE(KarnovsR_A_UNITS),
        L"KarnovsE.txt",        // Extra filename
        72,                     // Count of palettes listed in the header
        0x65420,                // Lowest known location used for palettes
    };

public:
    CGame_KarnovsR_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
