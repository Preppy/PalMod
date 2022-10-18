#pragma once
#include "GameClassByUnitPerFile.h"
#include "GGXXACR_P_DEF.h"

class CGame_GGXXACR_P : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"GGXX:AC+R (PlayStation 3)",
        GGXXACR_P,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXACR_P_CharacterData,
    };
public:
    CGame_GGXXACR_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_GGXXACR_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXACR_P_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(GGXXACR_P_CharacterData); };
};
