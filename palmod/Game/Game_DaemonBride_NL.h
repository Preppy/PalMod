#pragma once
#include "GameClassByFile.h"
#include "DaemonBride_NL_DEF.h"

class CGame_DaemonBride_NL : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData
    {
        L"Daemon Bride (NESICAxLive)",
        DaemonBride_NL,
        IMGDAT_SECTION_OTHER,
        DaemonBride_NL_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_BUTTONLABEL_NEOGEO,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGB555_BE,
        DAEMONBRIDE_NL_UNITS,
    };

public:
    CGame_DaemonBride_NL(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_DaemonBride_NL() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByFile::GetRule(nRuleId, DAEMONBRIDE_NL_UNITS); };
    static sFileRule GetNextRule() { return CGameClassByFile::GetNextRule(DAEMONBRIDE_NL_UNITS); };
};
