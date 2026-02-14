#pragma once
#include "GameClassByDir.h"
#include "CVS2_A_DEF.h"

class CGame_CVS2_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"SNKGD_SL.bin", 0x9800000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK 2 (NAOMI)",
        CVS2_A,
        IMGDAT_SECTION_CPS2,
        CVS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        {},
        CVS2_A_UNITS,
        ARRAYSIZE(CVS2_A_UNITS),
        L"CVS2E.txt",           // Extra filename
        2296,                   // Count of palettes listed in the header
        0x1488e80,              // Lowest known location used for palettes
    };

    void DumpAllCharacters();

    void WarnIfROMIsEncrypted(CFile* LoadedFile);

public:
    CGame_CVS2_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId = 0) override;
    
    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};

class CGame_CVS2_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"cvs2.21D3D8A7", 0x5ba8840 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Capcom vs SNK 2 (Steam)", L"cvs2.21D3D8A7", 0x5ac6d5ea, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Capcom vs SNK 2 (Steam)",
        CVS2_S,
        IMGDAT_SECTION_CPS2,
        CVS2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_CVS2,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        CVS2_S_UNITS, // Forked version of the normal arcade units to handle the offset shifts
        ARRAYSIZE(CVS2_S_UNITS),
        L"CVS2SE.txt",          // Extra filename
        2296,                   // Count of palettes listed in the header
        0xd92400,               // Lowest known location used for palettes
    };

public:
    CGame_CVS2_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
