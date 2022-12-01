#pragma once
#include "GameClassByDir.h"
#include "SAMSHO4_A_DEF.h"

class CGame_SAMSHO4_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"sams4_p1.rom", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Samurai Shodown IV (Neo-Geo)",
        SAMSHO4_A,
        IMGDAT_SECTION_SAMSHO,
        SAMSHO4_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_SAMSHO3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        SAMSHO4_A_UNITS,
        ARRAYSIZE(SAMSHO4_A_UNITS),
        L"SAMSHO4E.txt",            // Extra filename
        596,                        // Count of palettes listed in the header
        0xc09e0,                    // Lowest known location used for palettes
    };

    static void DumpAllPalettes();

public:
    CGame_SAMSHO4_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    BOOL UpdatePalImg(int Node01, int Node02, int Node03, int Node04);

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
