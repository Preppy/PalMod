#pragma once
#include "GameClassByDir.h"
#include "COTA_A_DEF.h"

class CGame_COTA_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"xmn.05a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"X-Men: Children of the Atom (CPS2)",
        COTA_A,
        IMGDAT_SECTION_CPS2,
        COTA_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        COTA_A_UNITS,
        ARRAYSIZE(COTA_A_UNITS),
        L"CotAe.txt",           // Extra filename
        479,                    // Count of palettes listed in the header
        0x2600e,                // Lowest known location used for palettes
    };

public:
    CGame_COTA_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
