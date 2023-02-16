#pragma once
#include "GameClassByDir.h"
#include "Garou_A_DEF.h"

class CGame_Garou_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"kf.neo-sma", 0x40000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Garou: MotW (Neo-Geo)", L"kf.neo-sma", 0x98bc93dc, 0 },
        { L"Garou: MotW (Steam)", L"p1.bin", 0xeb2d1ea5, 0xc0000 },
        { L"Garou: MotW (Neo-Geo, FC1)", L"253-sma.bin", 0x98bc93dc, 0 }, // just the older filename here
        { L"Garou: MotW (Neo-Geo Prototype)", L"proto_253-p1.p1", 0xc72f0c16, 0xc0000 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Garou: MotW (Neo-Geo)",
        Garou_A,
        IMGDAT_SECTION_GAROU,
        GAROU_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO_FIVE,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        Garou_A_UNITS,
        ARRAYSIZE(Garou_A_UNITS),
        L"GarouE.txt",         // Extra filename
        1631,                  // Count of palettes listed in the header
        0xe040,                // Lowest known location used for palettes
    };

public:
    CGame_Garou_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    CGame_Garou_A() {};

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
