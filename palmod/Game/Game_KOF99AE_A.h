#pragma once
#include "GameClassByDir.h"
#include "KOF99AE_A_DEF.h"

class CGame_KOF99AE_A : public CGameClassByDir
{
private:
    enum class KOF99AELoadingKey
    {
        ROM02,
        ROM03,
    };

    static KOF99AELoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM02 =
    {
        {
            { L"kof99ae_p2.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM03 =
    {
        {
            { L"kof99ae_p3.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM02
    {
        L"KOF '99AE ROM P2 (Neo-Geo)",
        KOF99AE_A,
        IMGDAT_SECTION_KOF,
        KOF99AE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_ROM02,
        KOF99AE_A_P2_UNITS,
        ARRAYSIZE(KOF99AE_A_P2_UNITS),
        L"KOF99AEp2E.txt",         // Extra filename
        1468,                   // Count of palettes listed in the header
        0x2d97f0,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM03
    {
        L"KOF '99AE ROM P3 (Neo-Geo)",
        KOF99AE_A,
        IMGDAT_SECTION_KOF,
        KOF99AE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_KOF99AE_P3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_ROM03,
        KOF99AE_A_P3_UNITS,
        ARRAYSIZE(KOF99AE_A_P3_UNITS),
        L"KOF99AEp3E.txt",         // Extra filename
        2448,                   // Count of palettes listed in the header
        0x1d97f0,               // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders(int nHeaderSetToDump);

public:
    CGame_KOF99AE_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);
};
