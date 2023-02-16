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
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
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
