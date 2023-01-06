#pragma once

#include "GameClassByUnitPerFile.h"
#include "GGXXACP_Wii_DEF.h"

class CGame_GGXXACP_Wii : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"GGXX:AC+ (Wii, ID:R3NEXS)",
        GGXXACP_Wii,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXACP_Wii_CharacterData,
    };

public:
    CGame_GGXXACP_Wii(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_GGXXACP_Wii() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXACP_Wii_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(GGXXACP_Wii_CharacterData); };
};
