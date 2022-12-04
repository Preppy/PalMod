#pragma once
#include "GameClassByDir.h"
#include "KOF98_A_DEF.h"

class CGame_KOF98_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"242-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '98 (Neo-Geo)",
        KOF98_A,
        IMGDAT_SECTION_KOF,
        KOF98_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KOF98_A_UNITS,
        ARRAYSIZE(KOF98_A_UNITS),
        L"KOF98E.txt",          // Extra filename
        2024,                   // Count of palettes listed in the header
        0x2d8210,               // Lowest known location used for palettes
    };

    void DumpPaletteHeaders();

public:
    CGame_KOF98_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
