#pragma once
#include "GameClassByDir.h"
#include "MSH_A_DEF.h"

class CGame_MSH_A : public CGameClassByDir
{
private:
    enum class MSHLoadingKey
    {
        ROM05,
        ROM06,
    };

    static MSHLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM05 =
    {
        {
            { L"msh.05", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM06 =
    {
        {
            { L"msh.06b", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM05
    {
        L"MSH (CPS2)",
        MSH_A,
        IMGDAT_SECTION_CPS2,
        MSH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM05,
        MSH_UNITS_05,
        ARRAYSIZE(MSH_UNITS_05),
        L"MSHe.txt",        // Extra filename
        437,                // Count of palettes listed in the header
        0x60f4c,            // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM06
    {
        L"MSH (CPS2)",
        MSH_A,
        IMGDAT_SECTION_CPS2,
        MSH_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM06,
        MSH_UNITS_06,
        ARRAYSIZE(MSH_UNITS_06),
        L"MSH06e.txt",      // Extra filename
        72,                 // Count of palettes listed in the header
        0xa78,              // Lowest known location used for palettes
    };

public:
    CGame_MSH_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);

    int PostSetPal(uint32_t nUnitId, uint32_t nPalId);
};
