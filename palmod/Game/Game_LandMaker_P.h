#pragma once
#include "GameClassByDir.h"
#include "LandMaker_P_DEF.h"

class CGame_LandMaker_P : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Land Maker (PS1)",
        LandMaker_P,
        IMGDAT_SECTION_TAITO,
        LandMaker_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        LandMaker_P_CharacterData,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
        0x40,
    };

    
public:
    CGame_LandMaker_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_LandMaker_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, LandMaker_P_CharacterData);
    };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(LandMaker_P_CharacterData); };

};
