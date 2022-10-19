#pragma once
#include "GameClassByUnitPerFile.h"
#include "P4AU_NESICA_DEF.h"

class CGame_P4AU_NESICA : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Persona 4 Arena Ultimax 2.0 (NESICA)",
        P4AU_NESICA,
        IMGDAT_SECTION_ARCSYS,
        P4AU_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        PersonaCharacterData_NESICA,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
    };
public:
    CGame_P4AU_NESICA(uint32_t nConfirmedROMSize) { m_fGameUsesAlphaValue = true; InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_P4AU_NESICA() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, PersonaCharacterData_NESICA); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(PersonaCharacterData_NESICA); };
};
