#pragma once
#include "GameClassByUnitPerFile.h"
#include "GGXXACR_S_DEF.h"

class CGame_GGXXACR_S : public CGameClassPerUnitPerFile
{
private:
    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"GGXX:AC+R (Steam)",
        GGXXACR_S,
        IMGDAT_SECTION_GUILTYGEAR,
        GGXX_ACR_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8887,
        GGXXACR_S_CharacterData,
    };

    bool IsGGXXACRFileEncrypted(CFile* LoadedFile);
    bool m_fIsFileSetEncrypted = false;

public:
    CGame_GGXXACR_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_GGXXACR_S() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitNumber) override;

    // Needed for portrait palette weirdness
    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, GGXXACR_S_CharacterData); };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(GGXXACR_S_CharacterData); };
};
