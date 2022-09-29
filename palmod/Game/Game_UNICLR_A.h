#pragma once
#include "GameClassByUnitPerFile.h"
#include "UNICLR_S_DEF.h"

class CGame_UNICLR_A : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Under Night In-Birth Exe:Late[cl-r] (Steam)",
        UNICLR_A,
        IMGDAT_SECTION_FRENCHBREAD,
        UNICLR_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        UNICLRCharacterData,
    };

public:
    CGame_UNICLR_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_UNICLR_A() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, UNICLRCharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(UNICLRCharacterData); };
};
