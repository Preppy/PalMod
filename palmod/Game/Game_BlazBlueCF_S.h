#pragma once
#include "GameClassByUnitPerFile.h"
#include "BlazBlueCF_S_DEF.h"

class CGame_BlazBlueCF_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"BlazBlue Central Fiction (Steam)",
        BlazBlueCF_S,
        IMGDAT_SECTION_ARCSYS,
        BlazBlueCF_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_BGRA8888,
        BlazBlueCF_S_CharacterData,
        PaletteArrangementStyle::OnePaletteSetEntryPerEachNode,
    };

public:
    CGame_BlazBlueCF_S(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_BlazBlueCF_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, BlazBlueCF_S_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(BlazBlueCF_S_CharacterData); };
};
