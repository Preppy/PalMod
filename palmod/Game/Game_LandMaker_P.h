#pragma once
#include "GameClassByDir.h"
#include "LandMaker_P_DEF.h"

class CGame_LandMaker_P : public CGameClassPerUnitPerFile
{
private:
    // enum class LandMakerPLoadingKey
    // {
    //     LandMakerP_JPN,
    //     LandMakerP_USA,
    //     LandMakerP_PAL,
    // };
    // static inline const sDirectoryLoadingData LandMaker_P_FileLoadingDataJPN =
    // {
    //     {
    //         { L"Land Maker (Japan).bin", 573205920 },
    //     },
    //     FileReadType::Sequential,
    // };
    // static inline const sDirectoryLoadingData LandMaker_P_FileLoadingDataUSA =
    // {
    //     {
    //         { L"Builder's Block (USA).bin", 589397088 },
    //     },
    //     FileReadType::Sequential,
    // };
    // static inline const sDirectoryLoadingData LandMaker_P_FileLoadingDataPAL =
    // {
    //     {
    //         { L"Landmaker-PSX-PAL.bin", 0x20529990 },
    //     },
    //     FileReadType::Sequential,
    // };

    // const sCoreGameData m_sCoreGameDataJPN
    // {
    //     L"Land Maker (Japan) (PS1)",
    //     LandMaker_P,
    //     IMGDAT_SECTION_TAITO,
    //     LandMaker_P_IMGIDS_USED,
    //     { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
    //     eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
    //     DEF_NOBUTTONS,
    //     AlphaMode::GameDoesNotUseAlpha,
    //     ColMode::COLMODE_RGB555_BE,
    //     LandMaker_P_FileLoadingDataJPN,
    //     LandMaker_P_UNITS,
    //     ARRAYSIZE(LandMaker_P_UNITS),
    //     L"LandMakerPSXE.txt",            // Extra filename
    //     176,                    // Count of palettes listed in the header
    //     0x1B46AC + 0x1B90,      // Lowest known location used for palettes
    // };
    // const sCoreGameData m_sCoreGameDataUSA
    // {
    //     L"Builder's Block (USA) (PS1)",
    //     LandMaker_P,
    //     IMGDAT_SECTION_TAITO,
    //     LandMaker_P_IMGIDS_USED,
    //     { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
    //     eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
    //     DEF_NOBUTTONS,
    //     AlphaMode::GameDoesNotUseAlpha,
    //     ColMode::COLMODE_RGB555_BE,
    //     LandMaker_P_FileLoadingDataUSA,
    //     LandMaker_P_UNITS,
    //     ARRAYSIZE(LandMaker_P_UNITS),
    //     L"LandMakerPSXE.txt",            // Extra filename
    //     176,                    // Count of palettes listed in the header
    //     0x1B46AC,               // Lowest known location used for palettes
    // };
    // const sCoreGameData m_sCoreGameDataPAL
    // {
    //     L"Landmaker (Europe) (PS1)",
    //     LandMaker_P,
    //     IMGDAT_SECTION_TAITO,
    //     LandMaker_P_IMGIDS_USED,
    //     { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
    //     eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
    //     DEF_NOBUTTONS,
    //     AlphaMode::GameDoesNotUseAlpha,
    //     ColMode::COLMODE_RGB555_BE,
    //     LandMaker_P_FileLoadingDataPAL,
    //     LandMaker_P_UNITS,
    //     ARRAYSIZE(LandMaker_P_UNITS),
    //     L"LandMakerPSXE.txt",            // Extra filename
    //     176,                    // Count of palettes listed in the header
    //     0x1B46AC - 0x1260,      // Lowest known location used for palettes
    // };

    const sGCPUPF_CoreGameData m_sCoreGameData
    {
        L"Landmaker (PS1)",
        LandMaker_P,
        IMGDAT_SECTION_TAITO,
        LandMaker_P_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        LandMaker_P_CharacterData,
        PaletteArrangementStyle::OneButtonLabelEntryPerEachNode,
        0x40,
    };

    
public:
    CGame_LandMaker_P(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };
    ~CGame_LandMaker_P() { ClearDataBuffer(); FlushChangeTrackingArray(); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassPerUnitPerFile::GetRule(nRuleId, LandMaker_P_CharacterData);
    };
    static sFileRule GetNextRule() { return CGameClassPerUnitPerFile::GetNextRule(LandMaker_P_CharacterData); };

    // CGame_LandMaker_P(uint32_t nConfirmedROMSize);

    // static void SetSpecialRuleForFileName(std::wstring strFileName);

    // void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);
    
    // static sFileRule GetRule(uint32_t nRuleId);
};
