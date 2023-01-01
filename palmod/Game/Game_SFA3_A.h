#pragma once
#include "GameClassByDir.h"
#include "SFA3_A_DEF.h"

class CGame_SFA3_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sz3.09c", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"SFA3 (CPS2)",
        SFA3_A,
        IMGDAT_SECTION_CPS2,
        SFA3_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_ISMS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData,
        SFA3_A_UNITS,
        ARRAYSIZE(SFA3_A_UNITS),
        L"SFA3e.txt",              // Extra filename
        2875,                      // Count of palettes listed in the header
        0x2C000,                   // Lowest known location used for palettes
    };

    static void DumpHeaderPalettes();

public:
    CGame_SFA3_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
