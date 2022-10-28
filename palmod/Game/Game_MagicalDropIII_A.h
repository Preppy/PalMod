#pragma once
#include "GameClassByDir.h"
#include "MAGICALDROPIII_A_DEF.h"

class CGame_MAGICALDROPIII_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"233-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData
    {
        L"Magical Drop III (Neo-Geo)",
        MAGICALDROPIII_A,
        IMGDAT_SECTION_NEOGEO,
        MAGICALDROPIII_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        MAGICALDROPIII_A_UNITS,
        ARRAYSIZE(MAGICALDROPIII_A_UNITS),
        L"MagicalDropIIIE.txt",         // Extra filename
        191,                            // Count of palettes listed in the header
        0x680c0,                        // Lowest known location used for palettes
    };

public:
    CGame_MAGICALDROPIII_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
