#pragma once
#include "GameClassByDir.h"
#include "Cyberbots_A_DEF.h"

class CGame_Cyberbots_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cybe.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Cyberbots: Fullmetal Madness (CPS2)",
        CYBERBOTS_A,
        IMGDAT_SECTION_CPS2,
        Cyberbots_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        Cyberbots_A_UNITS,
        ARRAYSIZE(Cyberbots_A_UNITS),
        L"CybotsE.txt",           // Extra filename
        425,                      // Count of palettes listed in the header
        0x3fa3e,                  // Lowest known location used for palettes
    };

public:
    CGame_Cyberbots_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
