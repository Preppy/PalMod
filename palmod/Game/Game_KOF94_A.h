#pragma once
#include "GameClassByDir.h"
#include "KOF94_A_DEF.h"

class CGame_KOF94_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"055-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"KOF '94 (Neo-Geo)",
        KOF94_A,
        IMGDAT_SECTION_KOF,
        KOF94_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KOF94_A_UNITS,
        ARRAYSIZE(KOF94_A_UNITS),
        L"KOF94E.txt",      // Extra filename
        589,                // Count of palettes listed in the header
        0x16fe00,           // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF94_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;
    
    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
