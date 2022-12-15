#pragma once
#include "GameClassByDir.h"
#include "SFIII3_A_DEF.h"

uint32_t cps3_mask(uint32_t address, uint32_t key1, uint32_t key2);

enum class SFIII3LoadingKey
{
    ROM10,
    ROM10_4rd,
    ROM51,
    ROM51_4rd,
    ROM70_EX,
};

class CGame_SFIII3_A : public CGameClassByDir
{
public:
    // Init before usage in CoreGameData
    const uint32_t SFIII_ROM50_PALETTECOUNT = 1438;

private:
    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM10 =
    {
        {
            { L"10", 0x800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM51 =
    {
        {
            { L"51", 0x800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM10
    {
        L"SFIII:3S (CPS3 Gill Glow/X.C.O.P.Y.)",
        SFIII3_A,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_ROM10,
        SFIII3_A_10_UNITS,
        ARRAYSIZE(SFIII3_A_10_UNITS),
        L"sfiii3-10e.txt",      // Extra filename
        171,                    // Count of palettes listed in the header
        0x1C86A8,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM51
    {
        L"SFIII:3S (CPS3 Arcade)",
        SFIII3_A,
        IMGDAT_SECTION_SF3,
        SFIII3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL7_SF3,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_ROM51,
        SFIII3_A_51_UNITS,
        ARRAYSIZE(SFIII3_A_51_UNITS),
        L"sfiii3e.txt",             // Extra filename
        SFIII_ROM50_PALETTECOUNT,   // Count of palettes listed in the header
        0x700000,                   // Lowest known location used for palettes
    };

public:
    static SFIII3LoadingKey m_eVersionToLoad;

    static bool IsROMEncrypted() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM10) || (m_eVersionToLoad == SFIII3LoadingKey::ROM10_4rd); };
    static bool UsePaletteSetFor10() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM10); }
    static bool UsePaletteSetFor10_4rd() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM10) || (m_eVersionToLoad == SFIII3LoadingKey::ROM10_4rd); }
    static bool UsePaletteSetFor51() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM51); }
    static bool UsePaletteSetFor51_4rd() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM51_4rd); }
    static bool UsePaletteSetFor3Ex() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM70_EX); }
    static bool UsingROMForGill() { return (m_eVersionToLoad == SFIII3LoadingKey::ROM10) || (m_eVersionToLoad == SFIII3LoadingKey::ROM10_4rd); };

    CGame_SFIII3_A(uint32_t nConfirmedROMSize, bool fShouldLoadNormalData = true);

    static sFileRule GetRule(uint32_t nRuleId);
        
    static void SetSpecialRuleForFileName(std::wstring strFileName);

    // We potentially need to handle the CPS3 SF3 encryption
    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId) override;
    BOOL SaveFile(CFile* SaveFile, uint32_t nUnitId) override;

    // Special-casing for Gill, Shin Gouki, Ultra Sean, Oro
    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    int PostSetPal(uint32_t nUnitId, uint32_t nPalId) override;
};
