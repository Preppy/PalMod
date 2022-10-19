#pragma once
#include "GameClassByUnitPerFile.h"
#include "P4AU_STEAM_DEF.h"

class CGame_P4AU_STEAM : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Persona 4 Arena Ultimax (Steam)",
        P4AU_STEAM,
        IMGDAT_SECTION_ARCSYS,
        P4AU_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGRA8888_LE,
        PersonaCharacterData_Steam,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
    };
public:
    CGame_P4AU_STEAM(uint32_t nConfirmedROMSize) { m_fGameUsesAlphaValue = true; InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_P4AU_STEAM() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, PersonaCharacterData_Steam); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(PersonaCharacterData_Steam); };
};
