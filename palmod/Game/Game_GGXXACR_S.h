#pragma once
#include "GameClassByUnitPerFile.h"
#include "GGXXACR_S_DEF.h"

class CGame_GGXXACR_S : public CGameClassPerUnitPerFile
{
private:
    sGCPUPF_CoreGameData m_sCoreGameData_Characters
    {
        L"GGXX:AC+R (Steam, Characters)",
        GGXXACR_S,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXACR_S_CharacterData,
    };

    sGCPUPF_CoreGameData m_sCoreGameData_EXChar
    {
        L"GGXX:AC+R (Steam, EX Characters)",
        GGXXACR_S_EXCHAR,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXACR_S_EXCharData,
    };

    sGCPUPF_CoreGameData m_sCoreGameData_Extras
    {
        L"GGXX:AC+R (Steam, Effects/HUD/Menus)",
        GGXXACR_S_EXTRAS,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXACR_S_ExtrasData,
    };

    bool IsGGXXACRFileEncrypted(CFile* LoadedFile);
    bool IsGGXXACRFileModified(CFile* LoadedFile);
    bool m_fFileIsUsable = true;

public:
    CGame_GGXXACR_S(uint32_t nConfirmedROMSize, SupportedGamesList nGGXXACRSetToLoad);
    ~CGame_GGXXACR_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitNumber) override;

    // Needed for portrait palette weirdness
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule_Characters(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXACR_S_CharacterData); };
    static sFileRule GetNextRule_Characters() { return CGameClassPerUnitPerFile::GetNextRule(GGXXACR_S_CharacterData); };
    
    static sFileRule GetRule_EXChar(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXACR_S_EXCharData); };
    static sFileRule GetNextRule_EXChar() { return CGameClassPerUnitPerFile::GetNextRule(GGXXACR_S_EXCharData); };

    static sFileRule GetRule_Extras(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXACR_S_ExtrasData); };
    static sFileRule GetNextRule_Extras() { return CGameClassPerUnitPerFile::GetNextRule(GGXXACR_S_ExtrasData); };
};
