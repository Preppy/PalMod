#pragma once
#include "GameClassByDir.h"
#include "MK2_SNES_DEF.h"

const sDirectoryLoadingData MK2_SNES_FileLoadingData_V1dot0 =
{
    {
        { L"mortal kombat ii (usa).sfc", 0x300000 },
    },
    FileReadType::Sequential,
    0x300000
};

const sDirectoryLoadingData MK2_SNES_FileLoadingData_V1dot1 =
{
    {
        { L"Mortal_Kombat_II_USA.sfc", 0x300000 },
    },
    FileReadType::Sequential,
    0x300000
};

enum class MK2LoadingKey
{
    Version1dot0,
    Version1dot1,
};

class CGame_MK2_SNES : public CGameClassByDir
{
private:
    static MK2LoadingKey eVersionToLoad;

    const sCoreGameData m_sCoreGameData_V1dot0
    {
        L"Mortal Kombat II (SNES) v1.0",
        MK2_SNES,
        IMGDAT_SECTION_SNES,
        MK2_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        MK2_SNES_FileLoadingData_V1dot0,
        MK2_1dot0_SNES_UNITS,
        ARRAYSIZE(MK2_1dot0_SNES_UNITS),
        L"MK2_SNES_E.txt",               // Extra filename
        51,                              // Count of palettes listed in the header
        0xe7d9f,                         // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V1dot1
    {
        L"Mortal Kombat II (SNES) v1.1",
        MK2_SNES,
        IMGDAT_SECTION_SNES,
        MK2_SNES_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        MK2_SNES_FileLoadingData_V1dot1,
        MK2_1dot1_SNES_UNITS,
        ARRAYSIZE(MK2_1dot1_SNES_UNITS),
        L"MK2_SNES_E.txt",               // Extra filename
        51,                              // Count of palettes listed in the header
        0xe7d9f,                         // Lowest known location used for palettes
    };

public:
    CGame_MK2_SNES(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);
    static sFileRule GetRule(uint32_t nRuleId);
};
