#pragma once
#include "GameClassByUnitPerFile.h"
#include "NBHID_S_DEF.h"

class CGame_NBHID_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Nitroplus Blasterz: Heroines Infinite Duel (Steam)",
        NBHID_S,
        IMGDAT_SECTION_OTHER,
        NBHID_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_BGRA8888,
        NBHIDCharacterData,
    };

public:
    CGame_NBHID_S(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_NBHID_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, NBHIDCharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(NBHIDCharacterData); };
};
