#pragma once
#include "GameClassByDir.h"
#include "VENTURE_A_DEF.h"

class CGame_VENTURE_A : public CGameClassByDir
{
private:
    enum class VentureLoadingKey
    {
        ROM31,
        ROM50,
    };

    static VentureLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_31 =
    {
        {
            { L"31", 0x800000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_50 =
    {
        {
            { L"50", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_31
    {
        L"Jojo's Venture (Japan, 31: HUD Portraits)",
        VENTURE_A,
        IMGDAT_SECTION_JOJOS,
        VENTURE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_31,
        {},
        VENTURE_A_UNITS_31,
        ARRAYSIZE(VENTURE_A_UNITS_31),
        L"Venture31.txt",     // Extra filename
        46,                   // Count of palettes listed in the header
        0x640400,             // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_50
    {
        L"Jojo's Venture (Japan, 50: Characters)",
        VENTURE_A,
        IMGDAT_SECTION_JOJOS,
        VENTURE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_LE,
        m_sFileLoadingData_50,
        {},
        VENTURE_A_UNITS_50,
        ARRAYSIZE(VENTURE_A_UNITS_50),
        L"Venture50.txt",   // Extra filename
        231,                // Count of palettes listed in the header
        0x3b0000,           // Lowest known location used for palettes
    };

public:
    CGame_VENTURE_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
