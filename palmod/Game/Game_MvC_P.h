#pragma once
#include "GameClassByUnitPerFile.h"
#include "MvC_P_DEF.h"

class CGame_MVC_P : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Marvel vs Capcom (USA Playstation)",
        MVC_P,
        IMGDAT_SECTION_CPS2,
        MVC_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        MVC_P_CharacterData,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
        0x20
    };

public:
    CGame_MVC_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_MVC_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, MVC_P_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(MVC_P_CharacterData); };
};
