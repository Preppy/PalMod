#pragma once
#include "Game_SFIII3_A.h"

enum class SFIII3_SupportedROMRevision
{
    SFIII3_10_990512,
    SFIII3_10_990608,
    SFIII3_51,
    SFIII3_4rd,
    SFIII3_3Ex,
    SFIII3_10_4rd,
    SFIII3_Unsupported,
};

class CGame_SFIII3_A_DIR : 
    public CGame_SFIII3_A
{
private:
    // Note that these values are overridden in GetRuleInternal
    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM10_DIR =
    {
        {
            { L"sfiii3-simm1.0", 0x200000 },
            { L"sfiii3-simm1.1", 0x200000 },
            { L"sfiii3-simm1.2", 0x200000 },
            { L"sfiii3-simm1.3", 0x200000 },
        },
        FileReadType::Sequential,
    };

    // Note that these values are overridden in GetRuleInternal
    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM10_4rd_DIR =
    {
        {
            { L"4rd-simm1.0", 0x200000 },
            { L"4rd-simm1.1", 0x200000 },
            { L"4rd-simm1.2", 0x200000 },
            { L"4rd-simm1.3", 0x200000 },
        },
        FileReadType::Sequential,
    };

    // Note that these values are overridden in GetRuleInternal
    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM51_DIR =
    {
        {
            { L"sfiii3-simm5.4", 0x200000 },
            { L"sfiii3-simm5.5", 0x200000 },
            { L"sfiii3-simm5.6", 0x200000 },
            { L"sfiii3-simm5.7", 0x200000 },
        },
        FileReadType::Sequential,
    };

    // Note that these values are overridden in GetRuleInternal
    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM51_4rd_DIR =
    {
        {
            { L"4rd-simm5.6", 0x200000 },
            { L"4rd-simm5.7", 0x200000 },
        },
        FileReadType::Sequential,
    };

    // Note that these values are overridden in GetRuleInternal
    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM70_DIR =
    {
        {
            { L"sfiii3ex-simm7.0", 0x200000 },
            { L"sfiii3ex-simm7.1", 0x200000 },
            { L"sfiii3ex-simm7.2", 0x200000 },
            { L"sfiii3ex-simm7.3", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM10_DIR
    {
        L"SFIII:3S (CPS3 Rerip Gill Glow/X.C.O.P.Y.)",
        SFIII3_A_DIR_10,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData_ROM10_DIR,
        {},
        SFIII3_A_10_UNITS,
        ARRAYSIZE(SFIII3_A_10_UNITS),
        L"sfiii3-10e.txt",      // Extra filename
        172,                    // Count of palettes listed in the header
        0x1C86A8,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM10_4rd_DIR
    {
        L"SFIII:4rd Strike (ROM hack, Gill Glow/X.C.O.P.Y.)",
        SFIII3_A_DIR_4rd_10,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData_ROM10_4rd_DIR,
        {},
        SFIII3_A_14_UNITS,
        ARRAYSIZE(SFIII3_A_14_UNITS),
        L"sfiii3-10e.txt",      // Extra filename
        184,                    // Count of palettes listed in the header
        0x1C86A8,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM51_DIR
    {
        L"SFIII:3S (CPS3 Arcade)",
        SFIII3_A_DIR_51,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData_ROM51_DIR,
        {},
        SFIII3_A_51_UNITS,
        ARRAYSIZE(SFIII3_A_51_UNITS),
        L"sfiii3e.txt",             // Extra filename
        SFIII_ROM50_PALETTECOUNT,   // Count of palettes listed in the header
        0x700000,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM51_4rd_DIR
    {
        // Replaces Shin Gouki with Ultra Sean, which uses 3 fewer palettes
        L"SFIII:4rd Strike (ROM hack)",
        SFIII3_A_DIR_4rd,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData_ROM51_4rd_DIR,
        {},
        SFIII3_A_4_UNITS,
        ARRAYSIZE(SFIII3_A_4_UNITS),
        L"sfiii3e.txt",                 // Extra filename
        SFIII_ROM50_PALETTECOUNT - 3,   // Count of palettes listed in the header: 3 less than 50 due to the Shin Gouki-->Ultra Sean change
        0x700000,                       // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM70_DIR
    {
        // TV's edit: removes Gill, just has character palettes but adds extra button colors
        // doesn't include the Bonus nor Stage sections
        L"SFIII:3S EX",
        SFIII3_A_DIR_EX,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE_CPS3,
        m_sFileLoadingData_ROM70_DIR,
        {},
        SFIII3EX_A_70_UNITS,
        ARRAYSIZE(SFIII3EX_A_70_UNITS),
        L"sfiii3e.txt",         // Extra filename
        1687,                   // Count of palettes listed in the header
        0x0,                    // Lowest known location used for palettes
    };

    static sFileRule GetRuleInternal(uint32_t nRuleId, SFIII3LoadingKey nSF3ModeToLoad);
    static sFileRule GetNextRuleInternal(SFIII3LoadingKey nSF3ModeToLoad);

    static SFIII3_SupportedROMRevision m_currentSFIII3ROMRevision;
    SFIII3_SupportedROMRevision GetSFIII3ROMVersion(CFile* LoadedFile);

    // The user can supply either EN or JPN files - track that here.
    bool m_fUseJPNFileNames = false;

public:
    CGame_SFIII3_A_DIR(uint32_t nConfirmedROMSize, SFIII3LoadingKey nSF3ModeToLoad = SFIII3LoadingKey::ROM51);
    ~CGame_SFIII3_A_DIR();

    const uint32_t c_nSFIII3SIMMLength = 0x200000;

    inline uint32_t GetSIMMLocationFromROMLocation(uint32_t nROMLocation);
    inline uint32_t GetLocationWithinSIMM(uint32_t nSIMMSetLocation);
    inline uint8_t GetSIMMSetForROMLocation(uint32_t nROMLocation);

    //Static functions
    static uint32_t m_uRuleCtr;

    static uint32_t GetRuleCtr() { return m_uRuleCtr; };
    static void ResetRuleCtr() { m_uRuleCtr = 0; };

    static sFileRule GetNextRule10() { return GetNextRuleInternal(SFIII3LoadingKey::ROM10); };
    static sFileRule GetNextRule4_10() { return GetNextRuleInternal(SFIII3LoadingKey::ROM10_4rd); };
    static sFileRule GetNextRule4() { return GetNextRuleInternal(SFIII3LoadingKey::ROM51_4rd); };
    static sFileRule GetNextRule51() { return GetNextRuleInternal(SFIII3LoadingKey::ROM51); };
    static sFileRule GetNextRule3Ex() { return GetNextRuleInternal(SFIII3LoadingKey::ROM70_EX); };
    static sFileRule GetRule10(uint32_t nRuleId) { return GetRuleInternal(nRuleId, SFIII3LoadingKey::ROM10); };
    static sFileRule GetRule4_10(uint32_t nRuleId) { return GetRuleInternal(nRuleId, SFIII3LoadingKey::ROM10_4rd); };
    static sFileRule GetRule4(uint32_t nRuleId) { return GetRuleInternal(nRuleId, SFIII3LoadingKey::ROM51_4rd); };
    static sFileRule GetRule51(uint32_t nRuleId) { return GetRuleInternal(nRuleId, SFIII3LoadingKey::ROM51); };
    static sFileRule GetRule3Ex(uint32_t nRuleId) { return GetRuleInternal(nRuleId, SFIII3LoadingKey::ROM70_EX); };
    static bool LoadedROMNeedsShift() { return (m_currentSFIII3ROMRevision == SFIII3_SupportedROMRevision::SFIII3_10_990512) || (m_currentSFIII3ROMRevision == SFIII3_SupportedROMRevision::SFIII3_10_4rd); };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nSIMMNumber) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nSIMMNumber) override;

    uint32_t SaveMultiplePatchFiles(CString strTargetDirectory) override;

    LPCWSTR GetGameName() override;
};
