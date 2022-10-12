#pragma once
#include "GameClassByDir.h"
#include "NGBC_A_DEF.h"

class CGame_NGBC_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"NeoGeoBattleColliseum.bin", 0xf000000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"NGBC (Atomiswave)",
        NGBC_A,
        IMGDAT_SECTION_KOF,
        NGBC_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_KOFXI,
        AlphaMode::GameUsesFixedAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData,
        NGBC_A_UNITS,
        ARRAYSIZE(NGBC_A_UNITS),
        L"NGBCe.txt",        // Extra filename
        3840,                // Count of palettes listed in the header
        0x1013000,           // Lowest known location used for palettes
    };

    void DumpAllCharacters();

public:
    CGame_NGBC_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
