#pragma once
#include "GameClassByUnitPerFile.h"
#include "GGXXR_S_DEF.h"

class CGame_GGXXR_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"GGXX #Reload (Steam)",
        GGXXR_S,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXR_S_CharacterData,
    };

public:
    CGame_GGXXR_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_GGXXR_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXR_S_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(GGXXR_S_CharacterData); };
};
