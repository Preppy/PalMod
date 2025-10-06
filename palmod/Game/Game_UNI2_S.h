#pragma once
#include "GameClassByUnitPerFile.h"
#include "UNI2_S_DEF.h"

class CGame_UNI2_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"UNDER NIGHT IN-BIRTH II Sys:Celes (Steam)",
        UNI2_S,
        IMGDAT_SECTION_FRENCHBREAD,
        UNI2_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        UNI2CharacterData,
    };

public:
    CGame_UNI2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_UNI2_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    int PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, UNI2CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(UNI2CharacterData); };
};
