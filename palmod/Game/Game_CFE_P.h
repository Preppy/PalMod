#pragma once
#include "GameClassByDir.h"
#include "CFE_P_DEF.h"

class CGame_CFE_P : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"SLUS_209.50", 0x22a330 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom Fighting Evolution (PS2)",
        CFE_P,
        IMGDAT_SECTION_CPS2,
        CFE_P_IMG_UNITS,
        {
            NO_SPECIAL_OPTIONS,
            PALWriteOutputOptions::WRITE_MAX
        },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        CFE_P_UNITS,
        ARRAYSIZE(CFE_P_UNITS),
        L"CFEe.txt",                
        112,
        0x1e4e10,
    };

public:
    CGame_CFE_P(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

// Originally CFE was for Namco System 246, then ported to PS2 and Xbox
// Namco System 246 was the arcade version of PS2
class CGame_CFJ_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cfj.21D3D8A7", 0x77b8840 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom Fighting Jam (Steam)",
        CFJ_S,
        IMGDAT_SECTION_CPS2,
        CFE_P_IMG_UNITS,
        {
            NO_SPECIAL_OPTIONS,
            PALWriteOutputOptions::WRITE_MAX
        },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_BGR555_LE,
        m_sFileLoadingData,
        {},
        CFJ_S_UNITS,
        ARRAYSIZE(CFJ_S_UNITS),
        L"CFJe.txt",
        112,
        0x1e4e10,
    };

public:
    CGame_CFJ_S(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
