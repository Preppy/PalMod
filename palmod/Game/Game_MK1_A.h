#pragma once
#include "GameClassByDir.h"
#include "MK1_A_DEF.h"

class CGame_MK1_A : public CGameClassByDir
{
private:
    enum class MK1ALoadingKey
    {
        Base,
        V30Alt,
        V50Alt,
    };

    static MK1ALoadingKey m_eVersionToLoad;

    // The palette data for MK1 is shared across all known game revisions.
    // For hardware, MK uses the Midway Y Unit (Versions until 4.0) and
    // Midway T Unit (Versions 4.0-5.0)
    // 
    // Revision details: https://tcrf.net/Mortal_Kombat_%28Arcade%29#Revision_Differences
    // 
    // The checked revisions, and other file names that would differentiate them are:
    // NiftyKombo666Hack
    //      kombo-u89.u89
    //      mortall_kombo_rom_u105-j4.u105.bin
    // NiftyKomboHack
    //      nifty.105
    //      nifty.89
    // PrototypeRev4-07-14-92
    //      mkprot4.105
    //      mkprot4.89
    // PrototypeRev8-07-21-92
    //      mkprot8.105
    //      mkprot8.89
    // PrototypeRev9-07-28-92
    //      mkprot9.105
    //      mkprot9.89
    // Rev1.0-08-09-92
    //      mkg-u105.la1
    //      mkg-u89.la1
    // Rev2.0-08-18-02
    //      mkg-u105.la2
    //      mkg-u89.la2
    // Rev3.0-08-31-92
    //      <different file names>
    // Rev4.0-TUnit-02-11-93
    //      mkr4ug12.bin
    //      mkr4uj12.bin
    // Rev5.0TUnit
    //      sl1_mortal_kombat_u12_sound_rom.u12
    //      sl1_mortal_kombat_u13_sound_rom.u13
    //      sl1_mortal_kombat_u3_sound_rom.u3
    // Fightcade's alternate Rev5.0TUnit zip:
    //      <different base filenames>
    // Turbo3.1-09-09-93Hack
    //      kombo-rom-u105.bin
    //      kombo-rom-u89.bin
    // TurboNinjaTUnit-03-19-93Hack
    //      kombo-rom-ug-12.bin
    //      kombo-rom-uj-12.bin

    static inline const sDirectoryLoadingData m_sFileLoadingData_Base =
    {
        {
            { L"mkt-uj12.bin", 0x80000 },
            { L"mkt-ug12.bin", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V30YAlt =
    {
        {
            // We do not know where the colors for this version are stored:
            // this version is not currently supported and as such is not 
            // exposed in the File Open dialog.
            { L"mkg-u111.rom", 0x80000 },
            { L"mkg-u112.rom", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets ,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_V50TAlt =
    {
        {
            { L"l5_mortal_kombat_t-unit_uj12_game_rom.uj12", 0x80000 },
            { L"l5_mortal_kombat_t-unit_ug12_game_rom.ug12", 0x80000 },
        },
        FileReadType::Interleaved_2FileSets,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        { L"Mortal Kombat (Midway Arcade)", L"mkt-uj12.bin", 0xf4990bf2, 0 },
        { L"Mortal Kombat (rev 3.0 Y-Unit 08/31/92)", L"mkg-u111.rom", 0, 0 },
        { L"Mortal Kombat (rev 5.0 T-Unit 03/19/93)", L"l5_mortal_kombat_t-unit_uj12_game_rom.uj12", 0xf4990bf2, 0 },
    };

    const sCoreGameData m_sCoreGameData_Base
    {
        L"Mortal Kombat (Midway Arcade)",
        MK1_A,
        IMGDAT_SECTION_OTHER,
        MK1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_Base,
        m_rgCRC32Data,
        MK1_A_UNITS,
        ARRAYSIZE(MK1_A_UNITS),
        L"MK1_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x907ce,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_V30YAlt
    {
        L"Mortal Kombat (rev 3.0 Y-Unit 08/31/92)",
        MK1_A,
        IMGDAT_SECTION_OTHER,
        MK1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V30YAlt,
        m_rgCRC32Data,
        MK1_A_UNITS,
        ARRAYSIZE(MK1_A_UNITS),
        L"MK1_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x907ce,                    // Lowest known location used for palettes
    }; 
    
    const sCoreGameData m_sCoreGameData_V50TAlt
    {
        L"Mortal Kombat (rev 5.0 T-Unit 03/19/93)",
        MK1_A,
        IMGDAT_SECTION_OTHER,
        MK1_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB555_BE,
        m_sFileLoadingData_V50TAlt,
        m_rgCRC32Data,
        MK1_A_UNITS,
        ARRAYSIZE(MK1_A_UNITS),
        L"MK1_A_E.txt",             // Extra filename
        31,                         // Count of palettes listed in the header
        0x907ce,                    // Lowest known location used for palettes
    };

public:
    CGame_MK1_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
