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
        GGML_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        // PS1 alpha value is a transparency bit, with valid settings being 0 / 1.
        // That affects how the colors are blended during special transparency effects.
        AlphaMode::GameUsesSTPNotAlpha,
        ColMode::COLMODE_BGR555_LE,
        GGML_P_CharacterData,
        PaletteArrangementStyle::EachBasicNodeContainsAFullButtonLabelSet,
        0x20, // Core Palette Sizes, we want 16 colours instead of the full table
        BlendMode::PS1SemiTransparencyOff,
    };

public:
    CGame_GGML_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_GGML_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGML_P_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(GGML_P_CharacterData); };
};
