#pragma once
#include "GameClassByDir.h"
#include "VSAV2_A_DEF.h"

class CGame_VSAV2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vs2j.10", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Savior 2 (CPS2)",
        VSAV2_A,
        IMGDAT_SECTION_CPS2,
        VSAV2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VSAV,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        VSAV2_A_UNITS,
        ARRAYSIZE(VSAV2_A_UNITS),
        L"VSAV2E.txt",              // Extra filename
        3387,                       // Count of palettes listed in the header
        0x16c9a,                    // Lowest known location used for palettes
    };

public:
    CGame_VSAV2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
