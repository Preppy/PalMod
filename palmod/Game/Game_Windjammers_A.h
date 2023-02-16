#pragma once
#include "GameClassByDir.h"
#include "Windjammers_A_DEF.h"

class CGame_Windjammers_A : public CGameClassByDir
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
        L"Windjammers (Neo-Geo)",
        WINDJAMMERS_A,
        IMGDAT_SECTION_WINDJAMMERS,
        WINDJAMMERS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        {},
        Windjammers_A_UNITS,
        ARRAYSIZE(Windjammers_A_UNITS),
        L"WindjammersE.txt",           // Extra filename
        35,                            // Count of palettes listed in the header
        0x30080,                       // Lowest known location used for palettes
    };

public:
    CGame_Windjammers_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
