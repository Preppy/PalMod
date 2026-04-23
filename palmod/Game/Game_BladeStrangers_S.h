#pragma once
#include "GameClassByUnitPerFile.h"
#include "BladeStrangers_S_DEF.h"

class CGame_BladeStrangers_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Blade Strangers (Steam)",
        BladeStrangers_S,
        IMGDAT_SECTION_OTHER,
        BladeStrangers_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        BladeStrangers_S_CharacterData,
    };

public:
    CGame_BladeStrangers_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_BladeStrangers_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, BladeStrangers_S_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(BladeStrangers_S_CharacterData); };
};
