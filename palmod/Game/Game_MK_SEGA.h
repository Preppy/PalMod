#pragma once
#include "GameClassByDir.h"
#include "MK_SEGA_DEF.h"

class CGame_MK1_SEGA : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"mortal kombat (world) (v1.1).bin", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Mortal Kombat (Sega Genesis v1.1)", L"mortal kombat (world) (v1.1).bin", 0x33F19AB6, 0 },
        { L"Mortal Kombat (Sega Genesis v1.1)", L"mortal kombat (world) (v1.1).gen", 0x33F19AB6, 0 },
        { L"Mortal Kombat (Sega Mega Drive v1.1)", L"mortal kombat (world) (v1.1).md", 0x33F19AB6, 0 },
        { L"Mortal Kombat (Sega Mega Drive v1.0)", L"mortal kombat (world).md", 0x1AA3A207, 0 },
        { L"Mortal Kombat (Sega Mega Drive v1.0)", L"mortal kombat.smd", 0x5172F663, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Mortal Kombat (Mega Drive)",
        MK1_SEGA,
        IMGDAT_SECTION_SEGA,
        MK1_SEGA_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB333,
        m_sFileLoadingData,
        m_rgCRC32Data,
        MK1_SEGA_UNITS,
        ARRAYSIZE(MK1_SEGA_UNITS),
        L"MK1_SEGA_E.txt",          // Extra filename
        67,                         // Count of palettes listed in the header
        0x1a2fa,                    // Lowest known location used for palettes
    };

public:
    CGame_MK1_SEGA(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
