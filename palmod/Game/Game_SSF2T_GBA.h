#pragma once
#include "GameClassByDir.h"
#include "SSF2T_GBA_DEF.h"

class CGame_SSF2T_GBA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"s92_22b.7f", 0x800000 },
        },
        FileReadType::Sequential,
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
        SSF2T_GBA_UNITS,
        ARRAYSIZE(SSF2T_GBA_UNITS),
        L"SSF2T-GBAe.txt",         // Extra filename
        162,                       // Count of palettes listed in the header
        0x7f28e4,                  // Lowest known location used for palettes
    };

public:
    CGame_SSF2T_GBA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
