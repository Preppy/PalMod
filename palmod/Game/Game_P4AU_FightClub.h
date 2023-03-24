#pragma once
#include "GameClassByUnitPerFile.h"
#include "P4AU_FightClub_DEF.h"

class CGame_P4AU_FightClub : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Persona Fight Club Modpack",
        P4AU_FightClub,
        IMGDAT_SECTION_ARCSYS,
        P4AU_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        PersonaCharacterData_FightClub,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
    };

public:
    CGame_P4AU_FightClub(uint32_t nConfirmedROMSize) { m_fGameUsesAlphaValue = true; InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_P4AU_FightClub() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, PersonaCharacterData_FightClub); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(PersonaCharacterData_FightClub); };
};
