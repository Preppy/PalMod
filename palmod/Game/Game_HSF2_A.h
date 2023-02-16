#pragma once
#include "GameClassByDir.h"
#include "HSF2_A_DEF.h"

class CGame_HSF2_A : public CGameClassByDir
{
private:
    enum class HSF2LoadingKey
    {
        ROM03,
        ROM04,
    };

    static HSF2LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_03 =
    {
        {
            { L"hs2u.03", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_04 =
    {
        {
            { L"hs2u.04", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"HSF2 (CPS2 Portraits)", L"hs2u.03", 0xb308151e, 0 },
        { L"HSF2 (CPS2 Characters)", L"hs2u.04", 0x327aa49c, 0 },
    };

    const sCoreGameData m_sCoreGameData_03
    {
        L"HSF2 (CPS2 Portraits)",
        HSF2_A,
        IMGDAT_SECTION_SF2,
        HSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_03,
        m_rgCRC32Data,
        HSF2_A_UNITS_03,
        ARRAYSIZE(HSF2_A_UNITS_03),
        L"HSF2-03e.txt",     // Extra filename
        385,                 // Count of palettes listed in the header
        0x2ce98,             // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_04
    {
        L"HSF2 (CPS2 Characters)",
        HSF2_A,
        IMGDAT_SECTION_SF2,
        HSF2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_04,
        m_rgCRC32Data,
        HSF2_A_UNITS_04,
        ARRAYSIZE(HSF2_A_UNITS_04),
        L"HSF2-04e.txt",   // Extra filename
        654,               // Count of palettes listed in the header
        0x43f9e,           // Lowest known location used for palettes
    };

public:
    CGame_HSF2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
