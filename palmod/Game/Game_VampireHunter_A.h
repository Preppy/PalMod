#pragma once
#include "GameClassByDir.h"
#include "VampireHunter_A_DEF.h"

class CGame_VampireHunter_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"vphj.09a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Vampire Hunter: Darkstalkers' Revenge (CPS2)",
        VampireHunter_A,
        IMGDAT_SECTION_CPS2,
        VampireHunter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_VAMPIREHUNTER,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        VampireHunter_A_UNITS,
        ARRAYSIZE(VampireHunter_A_UNITS),
        L"VampireHunterE.txt",             // Extra filename
        560,                       // Count of palettes listed in the header
        0x5d5cc,                    // Lowest known location used for palettes
    };

public:
    CGame_VampireHunter_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
