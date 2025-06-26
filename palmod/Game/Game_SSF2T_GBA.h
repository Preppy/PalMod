#pragma once
#include "GameClassByDir.h"
#include "SSF2T_GBA_DEF.h"

class CGame_SSF2T_GBA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"Super Street Fighter II Turbo - Revival (USA).gba", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // If we need further differentiation, we can bytesniff at 0xa0
        { L"SSF2T - Revival (USA GBA)", L"Super Street Fighter II Turbo - Revival (USA).gba", 0x63045aa, 0 },
        { L"SSF2X - Revival (Japan)", L"Super Street Fighter II X - Revival (Japan).gba", 0x7a2c0d61, 0x1690 },
        { L"SSF2T - Revival (Euro GBA)", L"Super_Street_Fighter_II_Turbo_-_Revival_Europe.gba", 0x461b4590, -0x418 },
        { L"SSF2T - Revival (Euro GBA)", L"Super Street Fighter II Turbo - Revival (Europe).gba", 0x461b4590, -0x418 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SSF2T - Revival (USA GBA)",
        SSF2T_GBA,
        IMGDAT_SECTION_SF2,
        SSF2T_GBA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_GBA,
        AlphaMode::GameUsesChaoticAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SSF2T_GBA_UNITS,
        ARRAYSIZE(SSF2T_GBA_UNITS),
        L"SSF2T-GBAe.txt",         // Extra filename
        431,                       // Count of palettes listed in the header
        0x4aa3f8,                  // Lowest known location used for palettes
    };

public:
    CGame_SSF2T_GBA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
