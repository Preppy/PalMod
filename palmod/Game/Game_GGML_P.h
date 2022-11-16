#pragma once
#include "GameClassByUnitPerFile.h"
#include "GGML_P_DEF.h"

class CGame_GGML_P : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Guilty Gear: The Missing Link (PS1)",
        GGML_P,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        GGML_P_CharacterData,
        PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet,
        0x20, // Core Palette Sizes, we want 16 colours instead of the full table
    };

public:
    CGame_GGML_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_GGML_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    // Needed for portrait palette weirdness

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGML_P_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(GGML_P_CharacterData); };
};
