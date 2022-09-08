#pragma once
#include "GameClassByUnitPerFile.h"
#include "MBAACC_S_DEF.h"

class CGame_MBAACC_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Melty Blood Actress Again Current Code (Steam)",
        MBAACC_S,
        IMGDAT_SECTION_FRENCHBREAD,
        MBAACC_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        MBAACCNormalPalettes,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8881_32STEPS,
        MBAACCCharacterData,
    };

public:
    CGame_MBAACC_S(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_MBAACC_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, MBAACCCharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(MBAACCCharacterData); };
};
