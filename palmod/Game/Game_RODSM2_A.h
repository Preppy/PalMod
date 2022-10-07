#pragma once
#include "GameClassByDir.h"
#include "RODSM2_A_DEF.h"

class CGame_RODSM2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"smbe.05b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ring of Destruction: Slam Masters 2 (CPS2)",
        RODSM2_A,
        IMGDAT_SECTION_CPS2,
        RODSM2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        RODSM2_A_UNITS,
        ARRAYSIZE(RODSM2_A_UNITS),
        L"SlamMasters2E.txt",           // Extra filename
        202,                            // Count of palettes listed in the header
        0x7ce08,                        // Lowest known location used for palettes
    };

public:
    CGame_RODSM2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
