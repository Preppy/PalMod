#pragma once
#include "GameClassByDir.h"
#include "FightFever_A_DEF.h"

class CGame_FightFever_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"060-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Fight Fever (Neo-Geo)",
        FightFever_A,
        IMGDAT_SECTION_NEOGEO,
        FightFever_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        FightFever_A_UNITS,
        ARRAYSIZE(FightFever_A_UNITS),
        L"FightFeverE.txt",         // Extra filename
        90,                         // Count of palettes listed in the header
        0x48240,                    // Lowest known location used for palettes
    };

public:
    CGame_FightFever_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
