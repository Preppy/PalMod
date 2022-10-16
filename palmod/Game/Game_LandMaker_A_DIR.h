#pragma once
#include "GameClassByDir.h"
#include "LandMaker_A_DEF.h"

class CGame_LandMaker_A_DIR : public CGameClassByDir
{
private:
        enum class LandMakerLoadingKey
        {
                LandMaker201,
                LandMaker202,
        };

        static LandMakerLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData LandMaker_A_FileLoadingData_202 =
    {
        {
            { L"e61-19.20", 0x80000 },
            { L"e61-18.19", 0x80000 },
            { L"e61-17.18", 0x80000 },
            { L"e61-16.17", 0x80000 },
        },
        FileReadType::Interleaved_4FileSets,
    };
        static inline const sDirectoryLoadingData LandMaker_A_FileLoadingData_201 =
    {
        {
            { L"e61-13.20", 0x80000 },
            { L"e61-12.19", 0x80000 },
            { L"e61-11.18", 0x80000 },
            { L"e61-10.17", 0x80000 },
        },
        FileReadType::Interleaved_4FileSets,
    };

    const sCoreGameData m_sCoreGameData_202
    {
        L"Land Maker 2.02O (Taito F3 System Arcade)",
        LandMaker_A,
        IMGDAT_SECTION_TAITO,
        LandMaker_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_BE,
        LandMaker_A_FileLoadingData_202,
        LandMaker_A_202O_UNITS,
        ARRAYSIZE(LandMaker_A_202O_UNITS),
        L"LandMakere.txt",        // Extra filename
        246,                      // Count of palettes listed in the header
        0x15BFC,                  // Lowest known location used for palettes
    };
    const sCoreGameData m_sCoreGameData_201
    {
        L"Land Maker 2.01J (Taito F3 System Arcade)",
        LandMaker_A,
        IMGDAT_SECTION_TAITO,
        LandMaker_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_MAX },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_NOBUTTONS,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGRA8888_BE,
        LandMaker_A_FileLoadingData_201,
        LandMaker_A_202O_UNITS,
        ARRAYSIZE(LandMaker_A_202O_UNITS),
        L"LandMakerJe.txt",       // Extra filename
        246,                      // Count of palettes listed in the header
        0x15BFC,                  // Lowest known location used for palettes
    };


public:
    CGame_LandMaker_A_DIR(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    void LoadSpecificPaletteData(uint32_t nUnitId, uint32_t nPalId);

    static sFileRule GetRule(uint32_t nRuleId);
    static sFileRule GetNextRule();
};
