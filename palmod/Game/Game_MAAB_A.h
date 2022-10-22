#pragma once
#include "GameClassByUnitPerFile.h"
#include "MAAB_A_DEF.h"

class CGame_MAAB_A : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Million Arthur Arcana Blood (Steam)",
        MAAB_A,
        IMGDAT_SECTION_ARCANA,
        MAAB_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        MAAB_A_CharacterData,
    };

public:
    CGame_MAAB_A(uint32_t nConfirmedROMSize) { m_fGameUsesAlphaValue = true; InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_MAAB_A() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, MAAB_A_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(MAAB_A_CharacterData); };
};
