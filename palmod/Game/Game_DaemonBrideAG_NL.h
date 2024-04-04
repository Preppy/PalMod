#pragma once
#include "GameClassByFile.h"
#include "DaemonBrideAG_NL_DEF.h"

class CGame_DaemonBrideAG_NL : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData
    {
        L"Daemon Bride: Additional Gain (NESICAxLive)",
        DaemonBrideAG_NL,
        IMGDAT_SECTION_OTHER,
        DaemonBrideAG_NL_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_BUTTONLABEL_NEOGEO,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGB555_BE,
        DAEMONBRIDEAG_NL_UNITS,
    };

public:
    CGame_DaemonBrideAG_NL(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_DaemonBrideAG_NL() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByFile::GetRule(nRuleId, DAEMONBRIDEAG_NL_UNITS); };
    static sFileRule GetNextRule() { return CGameClassByFile::GetNextRule(DAEMONBRIDEAG_NL_UNITS); };
};
