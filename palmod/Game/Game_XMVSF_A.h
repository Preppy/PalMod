#pragma once
#include "GameClassByDir.h"
#include "XMVSF_A_DEF.h"

class CGame_XMVSF_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"xvs.05a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"XMvSF (CPS2)",
        XMVSF_A,
        IMGDAT_SECTION_CPS2,
        XMVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        XMVSF_A_UNITS,
        ARRAYSIZE(XMVSF_A_UNITS),
        L"XMVSFe.txt",               // Extra filename
        874,                               // Count of palettes listed in the header
        0x606c,                          // Lowest known location used for palettes
    };

public:
    CGame_XMVSF_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;
};
