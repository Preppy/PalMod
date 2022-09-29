#pragma once
#include "GameClassByUnitPerFile.h"
#include "AquaPlus_P_DEF.h"

class CGame_AquaPlus_P : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Aquapazza: Aquaplus Dream Match (PS3)",
        AquaPlus_P,
        IMGDAT_SECTION_OTHER,
        AquaPlus_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_BGRA8888_BE,
        AquaPlusCharacterData_P,
    };

public:
    CGame_AquaPlus_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_AquaPlus_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, AquaPlusCharacterData_P); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(AquaPlusCharacterData_P); };
};

class CGame_AquaPlus_NL : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Aquapazza: Aquaplus Dream Match (NESICAxLive)",
        AquaPlus_NL,
        IMGDAT_SECTION_OTHER,
        AquaPlus_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        AquaPlusCharacterData_NL,
    };

public:
    CGame_AquaPlus_NL(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_AquaPlus_NL() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, AquaPlusCharacterData_NL); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(AquaPlusCharacterData_NL); };
};

