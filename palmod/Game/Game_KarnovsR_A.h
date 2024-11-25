#pragma once
#include "GameClassByDir.h"
#include "KarnovsR_A_DEF.h"

class CGame_KarnovsR_A : public CGameClassByDir
{
private:
    enum class KarnovLoadingKey
    {
        Arcade,
        Revolution,
    };

    static KarnovLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_Arcade =
    {
        {
            { L"066-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_Arcade
    {
        L"Karnov's Revenge / Fighter's History Dynamite (Neo-Geo)",
        KarnovsR_A,
        IMGDAT_SECTION_KARNOVSR,
        KARNOVSR_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_PK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Arcade,
        {},
        KarnovsR_A_UNITS_ARCADE,
        ARRAYSIZE(KarnovsR_A_UNITS_ARCADE),
        L"KarnovsE.txt",        // Extra filename
        72,                     // Count of palettes listed in the header
        0x65420,                // Lowest known location used for palettes
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Revolution =
    {
        {
            { L"066-p1kre.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_Revolution
    {
        L"Karnov's Revenge Revolution",
        KarnovsR_A,
        IMGDAT_SECTION_KARNOVSR,
        KARNOVSR_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL8_Karnovs,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Revolution,
        {},
        KarnovsR_A_UNITS_REVOLUTION,
        ARRAYSIZE(KarnovsR_A_UNITS_REVOLUTION),
        L"KarnovsE.txt",        // Extra filename
        152,                    // Count of palettes listed in the header
        0x71000,                // Lowest known location used for palettes
    };

public:
    CGame_KarnovsR_A(uint32_t nConfirmedROMSize);

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
