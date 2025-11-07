#pragma once
#include "GameClassByDir.h"
#include "Daraku_A_DEF.h"

class CGame_Daraku_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"prog.u16", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Daraku Tenshi - The Fallen Angels (Psikyo SH-2)", L"prog.u16", 0x3742E990, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Daraku Tenshi (Psikyo)",
        Daraku_A,
        IMGDAT_SECTION_OTHER,
        DARAKU_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGBA8888_BE16,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Daraku_A_UNITS,
        ARRAYSIZE(Daraku_A_UNITS),
        L"DarakuE.txt",         // Extra filename
        404,                    // Count of palettes listed in the header
        0x748,                  // Lowest known location used for palettes
    };

public:
    CGame_Daraku_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
