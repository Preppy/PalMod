#pragma once
#include "GameClassByDir.h"
#include "LASTBLADE2_A_DEF.h"

const sDirectoryLoadingData LASTBLADE2_A_FileLoadingData_NeoGeo =
{
    {
        { L"LB2_P1.ROM", 0x100000 },
    },
    FileReadType::Sequential,
};

const sDirectoryLoadingData LASTBLADE2_A_FileLoadingData_Steam =
{
    {
        { L"P1.bin", 0x500000 },
    },
    FileReadType::Sequential,
};

class CGame_LASTBLADE2_A : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData_NeoGeo
    {
        L"The Last Blade 2 (Neo-Geo)",
        LASTBLADE2_A,
        IMGDAT_SECTION_KOF,
        LASTBLADE2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_LASTBLADE2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        LASTBLADE2_A_FileLoadingData_NeoGeo,
        LASTBLADE2_A_UNITS,
        ARRAYSIZE(LASTBLADE2_A_UNITS),
        L"LastBlade2E.txt",             // Extra filename
        6095,                           // Count of palettes listed in the header
        0xa9600,                        // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Steam
    {
        L"The Last Blade 2 (Steam)",
        LASTBLADE2_S,
        IMGDAT_SECTION_KOF,
        LASTBLADE2_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_LASTBLADE2,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        LASTBLADE2_A_FileLoadingData_Steam,
        LASTBLADE2_A_UNITS,
        ARRAYSIZE(LASTBLADE2_A_UNITS),
        L"LastBlade2E.txt",             // Extra filename
        6095,                           // Count of palettes listed in the header
        0xa9600,                        // Lowest known location used for palettes
    };

public:
    CGame_LASTBLADE2_A(uint32_t nConfirmedROMSize, SupportedGamesList nROMToLoad /*= LASTBLADE2_A */);

    // There are different filenames for NeoGeo and Steam, so direct the user appropriately
    static sFileRule GetRule(uint32_t nRuleId);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;
};
