#pragma once
#include "GameClassByUnitPerFile.h"
#include "MBTL_S_DEF.h"

class CGame_MBTL_A : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Melty Blood: Type Lumina (Steam)",
        MBTL_A,
        IMGDAT_SECTION_FRENCHBREAD,
        MBTL_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8888,
        MBTLCharacterData,
    };

public:
    CGame_MBTL_A(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_MBTL_A() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, MBTLCharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(MBTLCharacterData); };
};
