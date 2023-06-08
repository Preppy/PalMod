#pragma once
#include "GameClassByUnitPerFile.h"
#include "CvS2_D_DEF.h"

class CGame_CVS2_D : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK 2 (Dreamcast)",
        CVS2_D,
        IMGDAT_SECTION_CPS2,
        CVS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        CVS2_D_CharacterData,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
        0x20
    };

public:
    CGame_CVS2_D(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_CVS2_D() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, CVS2_D_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(CVS2_D_CharacterData); };
};

class CGame_CVS2_P : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK 2 (PS2)",
        CVS2_P,
        IMGDAT_SECTION_CPS2,
        CVS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        CVS2_P_CharacterData,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
        0x20
    };

public:
    CGame_CVS2_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_CVS2_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, CVS2_P_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(CVS2_P_CharacterData); };
};
