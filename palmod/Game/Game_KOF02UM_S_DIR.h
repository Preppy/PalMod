#pragma once
#include "GameClassByFile.h"
#include "KOF02UM_S_DIR_DEF.h"

class CGame_KOF02UM_S_DIR : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData_888
    {
        L"King of Fighters 2002UM (Steam, RGBA8888 parts)",
        KOF02UM_S_DIR_8888,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_NOBUTTONS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        KOF02UM_S_DIR_8888_UNITS,
    };

    const sGCBF_CoreGameData m_sCoreGameData_BGR555
    {
        L"King of Fighters 2002UM (Steam, BGR555 parts)",
        KOF02UM_S_DIR_BGR555,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_NOBUTTONS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        KOF02UM_S_DIR_BGR555_UNITS,
    };

    const sGCBF_CoreGameData m_sCoreGameData_RGB555
    {
        L"King of Fighters 2002UM (Steam, RGB555 parts)",
        KOF02UM_S_DIR_RGB555,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_BUTTONLABEL_NEOGEO,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        KOF02UM_S_DIR_RGB555_UNITS,
    };

public:
    CGame_KOF02UM_S_DIR(uint32_t nConfirmedROMSize, SupportedGamesList nKOF02UMROMSetToLoad);
    ~CGame_KOF02UM_S_DIR() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetNextRule_8888();
    static sFileRule GetRule_8888(uint32_t nRuleId);
    static sFileRule GetNextRule_BGR555();
    static sFileRule GetRule_BGR555(uint32_t nRuleId);
    static sFileRule GetNextRule_RGB555();
    static sFileRule GetRule_RGB555(uint32_t nRuleId);
};
