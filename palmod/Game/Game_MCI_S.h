#pragma once
#include "MCI_S_DEF.h"

class CGame_MCI_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"MARVEL Cosmic Invasion (Steam)",
        MCI_S,
        IMGDAT_SECTION_OTHER,
        MCI_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        MCI_S_CharacterData,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
    };

public:
    CGame_MCI_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_MCI_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, MCI_S_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(MCI_S_CharacterData); };
};
