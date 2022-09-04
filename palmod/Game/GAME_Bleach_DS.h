#pragma once
#include "GameClassByDir.h"
#include "Bleach_DS_DEF.h"

const sDirectoryLoadingData Bleach_DS_FileLoadingData =
{
    {
        { L"047-p1.bin", 0x8000000 },
    },
    FileReadType::Sequential,
};

class CGame_BLEACH_DS : public CGameClassByDir
{
private:
    const sCoreGameData m_sCoreGameData
    {
        L"Bleach DS (Europe - Nintendo DS)",
        BLEACH_DS,
        IMGDAT_SECTION_DS,
        BLEACH_DS_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_BLEACH,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_BGR555_LE,
        Bleach_DS_FileLoadingData,
        BLEACH_DS_UNITS,
        ARRAYSIZE(BLEACH_DS_UNITS),
        L"BleachDSE.txt",               // Extra filename
        988,                            // Count of palettes listed in the header
        0x1fd2fa0,                      // Lowest known location used for palettes
    };

public:
    CGame_BLEACH_DS(uint32_t nConfirmedROMSize = -1) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, Bleach_DS_FileLoadingData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* fNeedToValidateCRCs = nullptr) override;
};
