#pragma once
#include "GameClassByDir.h"
#include "MSHVSF_A_DEF.h"

class CGame_MSHVSF_A : public CGameClassByDir
{
private:
    enum class MSHVSFLoadingKey
    {
        ROM06,
        ROM07,
    };

    static MSHVSFLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM06 =
    {
        {
            { L"mvs.06a", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07 =
    {
        {
            { L"mvs.07b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM06
    {
        L"MSHVSF (CPS2)",
        MSHVSF_A,
        IMGDAT_SECTION_CPS2,
        MSHVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM06,
        MSHVSF_A_UNITS_6A,
        ARRAYSIZE(MSHVSF_A_UNITS_6A),
        L"mshvsf-6ae.txt",      // Extra filename
        1099,                   // Count of palettes listed in the header
        0x56EF2,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07
    {
        L"MSHVSF (CPS2)",
        MSHVSF_A,
        IMGDAT_SECTION_CPS2,
        MSHVSF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07,
        MSHVSF_A_UNITS_7B,
        ARRAYSIZE(MSHVSF_A_UNITS_7B),
        L"mshvsf-7be.txt",      // Extra filename
        228,                    // Count of palettes listed in the header
        0,                      // Lowest known location used for palettes
    };

public:
    CGame_MSHVSF_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId);

    void PostSetPal(uint32_t nUnitId, uint32_t nPalId);
};
