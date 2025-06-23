#pragma once
#include "GameClassByDir.h"
#include "SFIII1_A_DEF.h"
#include "SFIII2_A_DEF.h"
#include "SFIII3_A_DEF.h"

enum class SFIII30th_LoadingKey
{
    SFIII1_NG,
    SFIII2_SI,
    SFIII3_3S,
};

class CGame_SFIII30th_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData_SFIII1_NG =
    {
        {
            { L"bundleStreetFighterIII.mbundle", 0xe1da617 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_SFIII2_SI =
    {
        {
            { L"bundleStreetFighterIII_2ndImpact.mbundle", 0x40826c1 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_SFIII3_3S =
    {
        {
            { L"bundleStreetFighterIII_3rdStrike.mbundle", 0x1482cb61 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_SFIII_NG
    {
        L"SFIII:NG (Steam)",
        SFIII1_S,
        IMGDAT_SECTION_SF3,
        SFIII1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL6,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_SFIII1_NG,
        {},
        SFIII1_A_50_UNITS,
        ARRAYSIZE(SFIII1_A_50_UNITS),
        {},
        631,                    // Count of palettes listed in the header
        0x1d854a,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_SFIII_2I
    {
        L"SFIII:2I (Steam)",
        SFIII2_S,
        IMGDAT_SECTION_SF3,
        SFIII2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_SFIII2_SI,
        {},
        SFIII2_A_50_UNITS,
        ARRAYSIZE(SFIII2_A_50_UNITS),
        {},
        846,                    // Count of palettes listed in the header
        0x9cc168,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_SFIII_3S
    {
        L"SFIII:3S (Steam)",
        SFIII3_S,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_SFIII3_3S,
        {},
        SFIII3_A_MONO_UNITS,
        ARRAYSIZE(SFIII3_A_MONO_UNITS),
        {},
        171 + 1438,            // Count of palettes listed in the header
        0xdaea3f3,             // Lowest known location used for palettes
    };

public:
    static SFIII30th_LoadingKey m_eVersionToLoad;

    static bool IsUnitEncrypted(uint32_t nUnitId) { return (m_eVersionToLoad == SFIII30th_LoadingKey::SFIII3_3S) && (nUnitId >= ARRAYSIZE(SFIII3_A_51_UNITS)); };

    CGame_SFIII30th_S(uint32_t nConfirmedROMSize, SFIII30th_LoadingKey eGameToLoad = SFIII30th_LoadingKey::SFIII3_3S);

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId) override;

    static sFileRule GetRule_NG(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_SFIII1_NG); };
    static sFileRule GetRule_SI(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_SFIII2_SI); };
    static sFileRule GetRule_3S(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData_SFIII3_3S); };

    // MBundle packaging uses linear simms, and SFIII3S ROM10 uses encryption, so we have to account for that
    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;
};
