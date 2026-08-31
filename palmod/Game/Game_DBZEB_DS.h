#pragma once
#include "GameClassByDir.h"
#include "DBZEB_DS_DEF.h"

class CGame_DBZEB_DS : public CGameClassByDir
{
private:
    enum class DBZEBLoadingKey
    {
        Europe,
        USA,
    };

    static DBZEBLoadingKey m_eROMToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_USA =
    {
        {
            // Ignore file size here: there's a variety of sizes out there
            { L"Dragon Ball Z - Extreme Butoden (USA) Decrypted.3ds", static_cast<size_t>(-1) },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Europe =
    {
        {
            // Ignore file size here: there's a variety of sizes out there
            { L"Dragon Ball Z - Extreme Butoden (Europe) (En,Fr,De,Es,It) Decrypted.3ds", static_cast<size_t>(-1) },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_USA =
    {
        // ONLY PUT USA UNSHIFTED ROMS IN THIS LIST.  3DS filenames are all over the place, so we need to have these all be unshifted
        { L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS USA)", L"Dragon Ball Z - Extreme Butoden (USA) Decrypted.3ds", 0xb614c5c4, 0 },
        { L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS USA)", L"Dragon Ball Z - Extreme Butoden (USA).cci", 0x7C15E60F, 0 },
        // ONLY PUT USA UNSHIFTED ROMS IN THIS LIST.  3DS filenames are all over the place, so we need to have these all be unshifted
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_Europe =
    {
        // DON'T CHANGE THIS: we're using the single-entry logic to enforce a -0x1000 shift for all Euro ROMS
        { L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS Europe)", L"DontChangeThis", 0, -0x1000 },
        // DON'T CHANGE THIS: we're using the single-entry logic to enforce a -0x1000 shift for all Euro ROMS
    };

    const sCoreGameData m_sCoreGameData_USA
    {
        L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS USA)",
        DBZEB_DS,
        IMGDAT_SECTION_DS,
        DBZEB_3DS_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_USA,
        m_rgCRC32Data_USA,
        DBZEB_DS_UNITS,
        ARRAYSIZE(DBZEB_DS_UNITS),
        L"dbzebE.txt",               // Extra filename
        696,                         // Count of palettes listed in the header
        0xc981a0,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Europe
    {
        L"Dragon Ball Z: Extreme Butoden (Nintendo 3DS Europe)",
        DBZEB_DS,
        IMGDAT_SECTION_DS,
        DBZEB_3DS_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameUsesVariableAlpha,
        ColMode::COLMODE_RGBA8888_LE,
        m_sFileLoadingData_Europe,
        m_rgCRC32Data_Europe,
        DBZEB_DS_UNITS,
        ARRAYSIZE(DBZEB_DS_UNITS),
        L"dbzebE.txt",               // Extra filename
        696,                         // Count of palettes listed in the header
        0xc981a0,                    // Lowest known location used for palettes
    };

public:
    CGame_DBZEB_DS(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
