#pragma once
#include "GameClassByDir.h"
#include "KOF98AE2016_A_DEF.h"

class CGame_KOF98AE2016_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"242ae-p2.sp2", 0x600000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"KOF98AE2016 (Romhack)", L"242ae-p2.sp2", 0xAC1E9E79, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"KOF98AE2016 (Romhack)",
        KOF98AE2016_A,
        IMGDAT_SECTION_KOF,
        KOF98ae_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF98AE2016_A_UNITS,
        ARRAYSIZE(KOF98AE2016_A_UNITS),
        L"KOF98AE2016E.txt",        // Extra filename
        2188,                       // Count of palettes listed in the header
        0x1b97f0,                   // Lowest known location used for palettes
    };

public:
    CGame_KOF98AE2016_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
