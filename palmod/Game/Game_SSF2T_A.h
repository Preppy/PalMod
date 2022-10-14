#pragma once
#include "GameClassByDir.h"
#include "SSF2T_A_DEF.h"

class CGame_SSF2T_A : public CGameClassByDir
{
private:
    enum class SSF2TLoadingKey
    {
        ROM03,
        ROM04,
        ROM08,
    };

    static SSF2TLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM03 =
    {
        {
            { L"sfxe.03c", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM04 =
    {
        {
            { L"sfxe.04a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08 =
    {
        {
            { L"sfxe.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM03
    {
        L"SSF2T (CPS2 03 Portraits)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM03,
        SSF2T_A_UNITS_3C,
        ARRAYSIZE(SSF2T_A_UNITS_3C),
        L"ssf2t-3ce.txt",       // Extra filename
        323,                    // Count of palettes listed in the header
        0xf1da,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM04
    {
        L"SSF2T (CPS2 04 Characters)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ST10,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM04,
        SSF2T_A_UNITS_4A,
        ARRAYSIZE(SSF2T_A_UNITS_4A),
        L"ssf2t-4ae.txt",       // Extra filename
        705,                    // Count of palettes listed in the header
        0x3FB00,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08
    {
        L"SSF2T (CPS2 08 Stages)",
        SSF2T_A,
        IMGDAT_SECTION_SF2,
        SSF2T_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08,
        SSF2T_A_UNITS_8,
        ARRAYSIZE(SSF2T_A_UNITS_8),
        L"ssf2t-8e.txt",        // Extra filename
        72,                     // Count of palettes listed in the header
        0x603be,                // Lowest known location used for palettes
    };

public:
    CGame_SSF2T_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);
};
