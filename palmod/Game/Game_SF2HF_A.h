#pragma once
#include "GameClassByDir.h"
#include "SF2HF_A_DEF.h"

class CGame_SF2HF_A : public CGameClassByDir
{
private:
    enum class SF2HFLoadingKey
    {
        ROM21,
        ROM22,
        ROM23,
        SF30th,
    };

    static SF2HFLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM21 =
    {
        {
            { L"s2tu_21.6f", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM22 =
    {
        {
            { L"s2tu_22.7f", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM23 =
    {
        {
            { L"s2tu_23.8f", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_SF30th =
    {
        {
            { L"bundleStreetFighterII_HF.mbundle", 0x7d191f },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter II' - Hyper Fighting (US 921209 ROM 21)", L"s2tu_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (US 921209 ROM 22)", L"s2tu_22.7f", 0xaea6e035, 0 },
        { L"Street Fighter II' - Hyper Fighting (US 921209 ROM 23)", L"s2tu_23.8f", 0x89a1fc38, 0 },

        { L"Street Fighter II' - Hyper Fighting (World 921209 ROM 21)", L"s2te_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (World 921209 ROM 22)", L"s2te_22.7f", 0xaea6e035, 0 },
        { L"Street Fighter II' - Hyper Fighting (World 921209 ROM 23)", L"s2te_23.8f", 0xaea6e035, 0 },


        { L"Street Fighter II' - Hyper Fighting (Japan 921209 ROM 21)", L"s2tj_21.6f", 0xfd200288, 0 },
        { L"Street Fighter II' - Hyper Fighting (Japan 921209 ROM 22)", L"s2tj_22.7f", 0xaea6e035, 0 },
        { L"Street Fighter II' - Hyper Fighting (Japan 921209 ROM 23)", L"s2tj_23.8f", 0xea73b4dc, 0 },

        // SF2 HF 30th anniversary collates all the roms.  The shifts are:
        // case SF2HFLoadingKey::ROM21:
        //    m_nCurrentPaletteROMLocation += 0x70009e;
        // case SF2HFLoadingKey::ROM22:
        //    m_nCurrentPaletteROMLocation += 0x68009e;
        // case SF2HFLoadingKey::ROM23:
        //    m_nCurrentPaletteROMLocation += 0x60009E;
        { L"Street Fighter II' - Hyper Fighting (30th Anniversary)", L"bundleStreetFighterII_HF.mbundle", 0x299ce4f8, 0x68009e },
    };

    const sCoreGameData m_sCoreGameData_ROM21
    {
        L"Street Fighter II' - Hyper Fighting (ROM 21)",
        SF2HF_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NORMAL_START,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM21,
        m_rgCRC32Data,
        SF2HF_A_21_UNITS,
        ARRAYSIZE(SF2HF_A_21_UNITS),
        L"SF2HF-21e.txt",        // Extra filename
        318,                     // Count of palettes listed in the header
        0x25e,                   // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM22
    {
        L"Street Fighter II' - Hyper Fighting (ROM 22)",
        SF2HF_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NORMAL_START,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM22,
        m_rgCRC32Data,
        SF2HF_A_22_UNITS,
        ARRAYSIZE(SF2HF_A_22_UNITS),
        L"SF2HF-22e.txt",        // Extra filename
        74,                      // Count of palettes listed in the header
        0x1e6a6,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM23
    {
        L"Street Fighter II' - Hyper Fighting (ROM 23)",
        SF2HF_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NORMAL_START,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM23,
        m_rgCRC32Data,
        SF2HF_A_23_UNITS,
        ARRAYSIZE(SF2HF_A_23_UNITS),
        L"SF2HF-23e.txt",        // Extra filename
        18,                      // Count of palettes listed in the header
        0x1a4e,                  // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_SF30th
    {
        L"Street Fighter II' - Hyper Fighting (30th Anniversary)",
        SF2HF_A,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NORMAL_START,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData_SF30th,
        m_rgCRC32Data,
        SF2HF_A_22_UNITS,
        ARRAYSIZE(SF2HF_A_22_UNITS),
        L"SF2HF-22e.txt",        // Extra filename
        74,                      // Count of palettes listed in the header
        0x1e6a6,                 // Lowest known location used for palettes
    };

public:
    CGame_SF2HF_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};

class CGame_SF2HF_S : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"bundleStreetFighterII_HF.mbundle", 0x7d191f },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Street Fighter II' - Hyper Fighting (30th Anniversary)", L"bundleStreetFighterII_HF.mbundle", 0x299ce4f8, 0 },
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Street Fighter II' - Hyper Fighting (30th Anniversary)",
        SF2HF_S,
        IMGDAT_SECTION_SF2,
        SF2HF_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NORMAL_START,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_LE,
        m_sFileLoadingData,
        m_rgCRC32Data,
        SF2HF_A_UNITS_MONO,
        ARRAYSIZE(SF2HF_A_UNITS_MONO),
        L"SF2HFS.txt",        // Extra filename
        409,                  // Count of palettes listed in the header
        0x601aec,             // Lowest known location used for palettes
    };

public:
    CGame_SF2HF_S(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
