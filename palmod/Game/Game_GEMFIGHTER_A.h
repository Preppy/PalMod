#pragma once
#include "GameClassByDir.h"
#include "GEMFIGHTER_A_DEF.h"

class CGame_GEMFIGHTER_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"pcf.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // sgemf    Super Gem Fighter: Mini Mix (US 970904)
        // sgemfa   Super Gem Fighter: Mini Mix (Asia 970904)
        // pfghtj   Pocket Fighter (Japan 970904)
        // sgemfh   Super Gem Fighter: Mini Mix (Hispanic 970904)
        { L"Super Gem Fighter: Mini Mix (USA 970904)", L"pcf.07",  0x5ac6d5ea, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Super Gem Fighter: Mini Mix (USA 970904)",
        GEMFIGHTER_A,
        IMGDAT_SECTION_CPS2,
        GEMFIGHTER_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_GEMFIGHTER,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        GEMFIGHTER_A_UNITS,
        ARRAYSIZE(GEMFIGHTER_A_UNITS),
        L"GemFighterE.txt",        // Extra filename
        302,                       // Count of palettes listed in the header
        0x99e6,                    // Lowest known location used for palettes
    };

public:
    CGame_GEMFIGHTER_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
