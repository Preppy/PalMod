#pragma once
#include "GameClassByUnitPerFile.h"
#include "RRMBTL_S_DEF.h"

class CGame_RRMBTL_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"ReallyReal's MBTL Expansion Pack (Steam)",
        RRMBTL_S,
        IMGDAT_SECTION_FRENCHBREAD,
        RRMBTL_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        RRMBTLCharacterData,
    };

public:
    CGame_RRMBTL_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_RRMBTL_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    int PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, RRMBTLCharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(RRMBTLCharacterData); };
};
