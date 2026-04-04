#pragma once
#include "GameClassByFile.h"
#include "KOF02UM_S_DIR_DEF.h"

class CGame_KOF02UM_PS2_DIR : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData_888
    {
        L"King of Fighters 2002UM (PS2, RGBA8887 parts)",
        KOF02UM_PS2_DIR_8887,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_NOBUTTONS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        KOF02UM_PS2_DIR_8887_UNITS,
    };

    const sGCBF_CoreGameData m_sCoreGameData_888_Tougeki
    {
        L"King of Fighters 2002UM (PS2 Tougeki Version, RGBA8887 parts)",
        KOF02UM_PS2_DIR_8887_TOUGEKI,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_NOBUTTONS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        KOF02UM_PS2_DIR_8887_UNITS_TOUGEKI,
    };

    const sGCBF_CoreGameData m_sCoreGameData_BGR555
    {
        L"King of Fighters 2002UM (PS2, BGR555 parts)",
        KOF02UM_PS2_DIR_BGR555,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_NOBUTTONS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        KOF02UM_PS2_DIR_BGR555_UNITS,
    };

    const sGCBF_CoreGameData m_sCoreGameData_RGB555
    {
        L"King of Fighters 2002UM (PS2, RGB555 parts)",
        KOF02UM_PS2_DIR_RGB555,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_BUTTONLABEL_NEOGEO,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        KOF02UM_PS2_DIR_RGB555_UNITS,
    };

    // this should be moved to its own class perhaps but i am tired
    const sGCBF_CoreGameData m_sCoreGameData_RGB555_NG
    {
        L"King of Fighters 2002 (PS2)",
        KOF02_PS2_DIR_RGB555,
        IMGDAT_SECTION_KOF,
        KOF02_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_BUTTONLABEL_NEOGEO,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        KOF02_PS2_DIR_RGB555_UNITS,
    };

public:
    CGame_KOF02UM_PS2_DIR(uint32_t nConfirmedROMSize, SupportedGamesList nKOF02UMROMSetToLoad);
    ~CGame_KOF02UM_PS2_DIR() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetNextRule_8887();
    static sFileRule GetRule_8887(uint32_t nRuleId);
    static sFileRule GetNextRule_8887_Tougeki();
    static sFileRule GetRule_8887_Tougeki(uint32_t nRuleId);
    static sFileRule GetNextRule_BGR555();
    static sFileRule GetRule_BGR555(uint32_t nRuleId);
    static sFileRule GetNextRule_RGB555();
    static sFileRule GetRule_RGB555(uint32_t nRuleId);
    static sFileRule GetNextRule_RGB555_NG();
    static sFileRule GetRule_RGB555_NG(uint32_t nRuleId);
};

class CGame_KOF02UM_S_DIR : public CGameClassByFile
{
private:
    const sGCBF_CoreGameData m_sCoreGameData_888
    {
        L"King of Fighters 2002UM (Steam, RGBA8887 parts)",
        KOF02UM_S_DIR_8887,
        IMGDAT_SECTION_KOF,
        KOF02UM_S_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        DEF_NOBUTTONS,
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGBA8887,
        KOF02UM_S_DIR_8887_UNITS,
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

    static sFileRule GetNextRule_8887();
    static sFileRule GetRule_8887(uint32_t nRuleId);
    static sFileRule GetNextRule_BGR555();
    static sFileRule GetRule_BGR555(uint32_t nRuleId);
    static sFileRule GetNextRule_RGB555();
    static sFileRule GetRule_RGB555(uint32_t nRuleId);
};
