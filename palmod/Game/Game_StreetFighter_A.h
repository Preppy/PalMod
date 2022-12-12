#pragma once
#include "GameClassByDir.h"
#include "StreetFighter_A_DEF.h"

class CGame_StreetFighter_A : public CGameClassByDir
{
private:
    enum class SF1LoadingKey
    {
        USSet1,
        USSet2,
        Japan,
        USSet1Alt,
        USSet1MAME,
    };

    static SF1LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet1 =
    {
        {
            { L"sfd-19.2a", 0x10000 },
            { L"sfd-22.2c", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet2 =
    {
        {
            { L"sfs19u.1a", 0x10000 },
            { L"sfs22u.1b", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Japan =
    {
        {
            { L"sf-19.bin", 0x10000 },
            { L"sf-22.bin", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet1Alt =
    {
        {
            { L"sfd-19", 0x10000 },
            { L"sfd-22", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_USSet1MAME =
    {
        {
            { L"sfe-19", 0x10000 },
            { L"sfe-22", 0x10000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const sCoreGameData m_sCoreGameData_USSet1
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet1,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USSet2
    {
        L"Street Fighter (US, Set 2)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet2,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Japan
    {
        L"Street Fighter (Japan)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_Japan,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USSet1Alt
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet1Alt,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_USSet1MAME
    {
        L"Street Fighter (US, Set 1)",
        SF1_A,
        IMGDAT_SECTION_OTHER,
        StreetFighter_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_USSet1MAME,
        StreetFighter_A_UNITS,
        ARRAYSIZE(StreetFighter_A_UNITS),
        L"StreetFighterE.txt",      // Extra filename
        13,                         // Count of palettes listed in the header
        0x1BA66,                    // Lowest known location used for palettes
    };

public:
    CGame_StreetFighter_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId);
};
