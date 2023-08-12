#pragma once
#include "GameClassByFile.h"
#include "XMVSF_P_DEF.h"

class CGame_XMVSF_P : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData
    {
        L"XMvSF (PSX)",
        XMVSF_P,
        IMGDAT_SECTION_CPS2,
        XMVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        DEF_BUTTONLABEL_4_VS_HOME,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        XMVSF_P_UNITS,
    };

public:
    CGame_XMVSF_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_XMVSF_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByFile::GetRule(nRuleId, XMVSF_P_UNITS); };
    static sFileRule GetNextRule() { return CGameClassByFile::GetNextRule(XMVSF_P_UNITS); };
};
