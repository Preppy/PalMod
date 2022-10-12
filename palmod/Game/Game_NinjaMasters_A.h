#pragma once
#include "GameClassByDir.h"
#include "NINJAMASTERS_A_DEF.h"

class CGame_NINJAMASTERS_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"217-p2.sp2", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Ninja Master's (Neo-Geo)",
        NINJAMASTERS_A,
        IMGDAT_SECTION_NEOGEO,
        NINJAMASTERS_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        NINJAMASTERS_A_UNITS,
        ARRAYSIZE(NINJAMASTERS_A_UNITS),
        L"NINJAMASTERSE.txt",       // Extra filename
        433,                        // Count of palettes listed in the header
        0x81404,                    // Lowest known location used for palettes
    };

public:
    CGame_NINJAMASTERS_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
