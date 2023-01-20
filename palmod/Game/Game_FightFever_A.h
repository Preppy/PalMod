#pragma once
#include "GameClassByDir.h"
#include "FightFever_A_DEF.h"

class CGame_FightFever_A : public CGameClassByDir
{
private:
    enum class FFLoadingKey
    {
        Set1,
        Set2,
    };

    static FFLoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_Set1 =
    {
        {
            { L"060-p1.bin", 0x80000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_Set2 =
    {
        {
            { L"060-p1.p1", 0x100000 },
        },
        FileReadType::Sequential,
    };

    const sCoreGameData m_sCoreGameData_Set1
    {
        L"Fight Fever (Neo-Geo set 1)",
        FightFever_A,
        IMGDAT_SECTION_NEOGEO,
        FightFever_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Set1,
        FightFever_A_UNITS,
        ARRAYSIZE(FightFever_A_UNITS),
        L"FightFeverE.txt",         // Extra filename
        90,                         // Count of palettes listed in the header
        0x48240,                    // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_Set2
    {
        L"Fight Fever (Neo-Geo set 2)",
        FightFever_A,
        IMGDAT_SECTION_NEOGEO,
        FightFever_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Set2,
        FightFever_A_UNITS,
        ARRAYSIZE(FightFever_A_UNITS),
        L"FightFeverE.txt",         // Extra filename
        90,                         // Count of palettes listed in the header
        0x48240,                    // Lowest known location used for palettes
    };
public:
    CGame_FightFever_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);

    uint32_t GetKnownCRC32DatasetsForGame(const sCRC32ValueSet** ppKnownROMSet = nullptr, bool* pfNeedToValidateCRCs = nullptr) override;
};
