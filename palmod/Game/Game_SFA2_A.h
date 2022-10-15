#pragma once
#include "GameClassByDir.h"
#include "SFA2_A_DEF.h"
#include "SFA2_Hack_DEF.h"

class CGame_SFA2_A : public CGameClassByDir
{
private:
    enum class SFA2_SupportedROMRevision
    {
        SFA2_960229,
        SFA2_960306_or_960430, // 960306 and 960430 are identical for both 07 and 08
        SFZ2A_960805,
        SFZ2A_960826,
        SFA2_Hack_220203,
        SFA2_Unsupported,
    };

    enum class SFA2LoadingKey
    {
        ROM07_Rev1,
        ROM07_Rev2,
        ROM07_SFZ2A,
        ROM08_Rev1,
        ROM08_Rev2,
        ROM08_SFZ2A,
        ROM09_Hack,
    };

    static SFA2LoadingKey m_eVersionToLoad;
    // SFA2 gets a littly funky, so we do a little additional tracking with this
    static SFA2_SupportedROMRevision m_currentSFA2ROMRevision;
    static bool UsePaletteSetForCharacters();

    SFA2_SupportedROMRevision GetSFA2ROMVersion(CFile* LoadedFile);

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07_Rev1 =
    {
        {
            { L"sz2.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07_Rev2 =
    {
        {
            { L"sz2u.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM07_SFZ2A =
    {
        {
            { L"szaa.07", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08_Rev1 =
    {
        {
            { L"sz2.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08_Rev2 =
    {
        {
            { L"sz2u.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM08_SFZ2A =
    {
        {
            { L"szaa.08", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_ROM09_Hack =
    {
        {
            { L"sz2u.09", 0x80000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_ROM07_Rev1
    {
        L"SFA2 (CPS2 ROM07)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07_Rev1,
        SFA2_A_UNITS_07_REV1,
        ARRAYSIZE(SFA2_A_UNITS_07_REV1),
        L"SFA2e.txt",           // Extra filename
        935,                    // Count of palettes listed in the header
        0x2C000,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07_Rev2
    {
        L"SFA2 (CPS2 ROM07)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07_Rev2,
        SFA2_A_UNITS_07_REV2,
        ARRAYSIZE(SFA2_A_UNITS_07_REV2),
        L"SFA2e.txt",           // Extra filename
        1057,                   // Count of palettes listed in the header
        0x2C000,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM07_SFZ2A
    {
        L"SFA2 (CPS2 ROM07)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM07_SFZ2A,
        SFZ2A_A_UNITS_07,
        ARRAYSIZE(SFZ2A_A_UNITS_07),
        L"SFA2e.txt",           // Extra filename
        1342,                   // Count of palettes listed in the header
        0x2C000,                // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08_Rev1
    {
        L"SFA2 (CPS2 ROM08)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08_Rev1,
        SFA2_A_UNITS_08_REV1,
        ARRAYSIZE(SFA2_A_UNITS_08_REV1),
        L"SFA2-8e.txt",         // Extra filename
        271,                    // Count of palettes listed in the header
        0x125e,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08_Rev2
    {
        L"SFA2 (CPS2 ROM08)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08_Rev2,
        SFA2_A_UNITS_08_REV2,
        ARRAYSIZE(SFA2_A_UNITS_08_REV2),
        L"SFA2-8e.txt",         // Extra filename
        315,                    // Count of palettes listed in the header
        0x125e,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM08_SFZ2A
    {
        L"SFA2 (CPS2 ROM08)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM08_SFZ2A,
        SFZ2A_A_UNITS_08,
        ARRAYSIZE(SFZ2A_A_UNITS_08),
        L"SFA2-8e.txt",         // Extra filename
        345,                    // Count of palettes listed in the header
        0x125e,                 // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_ROM09_Hack
    {
        L"SFA2 Expansion Hack (CPS2)",
        SFA2_A,
        IMGDAT_SECTION_CPS2,
        SFA2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SFA2_HACK,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB444_BE,
        m_sFileLoadingData_ROM09_Hack,
        SFA2_HACK_UNITS_09,
        ARRAYSIZE(SFA2_HACK_UNITS_09),
        L"SFA2-9e.txt",         // Extra filename
        2400,                   // Count of palettes listed in the header
        0x10e,                  // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_SFA2_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    BOOL LoadFile(CFile* LoadedFile, uint32_t nUnitId);

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId);
};
