#pragma once
#include "GameClassByDir.h"
#include "KOF97_A_DEF.h"

class CGame_KOF97_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"232-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '97 (Neo-Geo)",
        KOF97_A,
        IMGDAT_SECTION_KOF,
        KOF97_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_KOF97,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KOF97_A_UNITS,
        ARRAYSIZE(KOF97_A_UNITS),
        L"KOF97E.txt",      // Extra filename
        2568,               // Count of palettes listed in the header
        0x2d1ff0,           // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF97_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_KOF97AE_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"232ae-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '97 Anniversary Edition (Neo-Geo)",
        KOF97AE_A,
        IMGDAT_SECTION_KOF,
        KOF97_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_KOF97,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KOF97AE_A_UNITS,
        ARRAYSIZE(KOF97AE_A_UNITS),
        L"KOF97AEe.txt",      // Extra filename
        2568,                 // Count of palettes listed in the header
        0x2d1ff0,             // Lowest known location used for palettes
    };

public:
    CGame_KOF97AE_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_KOF97GM_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"p1.bin", 0x500000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '97 Global Match (Steam)",
        KOF97GM_S,
        IMGDAT_SECTION_KOF,
        KOF97_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_4_KOF97,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        KOF97AE_A_UNITS,
        ARRAYSIZE(KOF97AE_A_UNITS),
        L"KOF97AEe.txt",      // Extra filename
        2568,                 // Count of palettes listed in the header
        0x2d1ff0,             // Lowest known location used for palettes
    };

public:
    CGame_KOF97GM_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

