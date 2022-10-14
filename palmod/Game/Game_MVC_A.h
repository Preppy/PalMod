#pragma once
#include "GameClassByDir.h"
#include "MVC_A_DEF.h"

class CGame_MVC_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mvc.06", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"MvC (CPS2)",
        MVC_A,
        IMGDAT_SECTION_CPS2,
        MVC_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        MVC_A_UNITS,
        ARRAYSIZE(MVC_A_UNITS),
        L"MvCE.txt",             // Extra filename
        1337,                    // Count of palettes listed in the header
        0x30b18,                 // Lowest known location used for palettes
    };

public:
    CGame_MVC_A(uint32_t nConfirmedROMSize, bool fUseNormalData = true) { if (fUseNormalData) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); } };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet, bool* pfNeedToValidateCRCs);

    // We use custom handling since we have a mid-ROM shift for mvcu
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;
};
