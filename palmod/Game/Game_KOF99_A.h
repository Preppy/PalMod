#pragma once
#include "GameClassByDir.h"
#include "KOF99_A_DEF.h"

class CGame_KOF99_A : public CGameClassByDir
{
private:
    enum class KOF99LoadingKey
    {
        Base,
        AE02,
        AE03,
    };

    static KOF99LoadingKey m_eVersionToLoad;

    static inline const sDirectoryLoadingData m_sFileLoadingData_Base =
    {
        {
            { L"152-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_AE02 =
    {
        {
            { L"kof99ae_p2.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    static inline const sDirectoryLoadingData m_sFileLoadingData_AE03 =
    {
        {
            { L"kof99ae_p3.bin", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_Base =
    {
        // 152-p2.bin can "'99ND" (Millennium Battle (decrypted C)) or "The King of Fighters '99: Millennium Battle (Korean)" crc 0x274ef47a
        { L"KOF '99 various (Neo-Geo)", L"152-p2.bin", 0, 0 },
        { L"The King of Fighters '99: Millennium Battle (Neo-Geo Korea)", L"152-p2.sp2", 0x274ef47a, 0 },
        { L"The King of Fighters '99: Millennium Battle (Neo-Geo prototype)", L"251-p2p.bin", 0x739742ad, 0 },
        { L"The King of Fighters '99: Millennium Battle (Neo-Geo prototype)", L"251-p2p.p2", 0x739742ad, 0 },
        { L"The King of Fighters '99: Millennium Battle (Neo-Geo prototype)", L"proto_251-p2.bin", 0x739742ad, 0 },
        { L"The King of Fighters '99: Millennium Battle (Neo-Geo prototype)", L"proto_251-p2.p2", 0x739742ad, 0 },
        { L"KOF '99 Evolution Ultra Remix (Neo-Geo Hack)", L"kf99eur.p2", 0xaec93904, 0 },
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data_AE =
    {
        { L"KOF '99AE ROM P2 (Neo-Geo)", L"kof99ae_p2.bin", 0xf3f47f41, 0 },
        { L"KOF '99AE ROM P3 (Neo-Geo)", L"kof99ae_p3.bin", 0xbc85cf02, 0 },
    };

    const sCoreGameData m_sCoreGameData_Base
    {
        L"KOF '99 variants (Neo-Geo)",
        KOF99_A,
        IMGDAT_SECTION_KOF,
        KOF99AE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_Base,
        m_rgCRC32Data_Base,
        KOF99AE_A_P2_UNITS,
        ARRAYSIZE(KOF99AE_A_P2_UNITS),
        L"KOF99e.txt",          // Extra filename
        1468,                   // Count of palettes listed in the header
        0x2d97f0,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_AE02
    {
        L"KOF '99AE ROM P2 (Neo-Geo)",
        KOF99AE_A,
        IMGDAT_SECTION_KOF,
        KOF99AE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_AB,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_AE02,
        m_rgCRC32Data_AE,
        KOF99AE_A_P2_UNITS,
        ARRAYSIZE(KOF99AE_A_P2_UNITS),
        L"KOF99AEp2E.txt",      // Extra filename
        1470,                   // Count of palettes listed in the header
        0x2d97f0,               // Lowest known location used for palettes
    };

    const sCoreGameData m_sCoreGameData_AE03
    {
        L"KOF '99AE ROM P3 (Neo-Geo)",
        KOF99AE_A,
        IMGDAT_SECTION_KOF,
        KOF99AE_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_KOF99AE_P3,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData_AE03,
        m_rgCRC32Data_AE,
        KOF99AE_A_P3_UNITS,
        ARRAYSIZE(KOF99AE_A_P3_UNITS),
        L"KOF99AEp3E.txt",      // Extra filename
        2448,                   // Count of palettes listed in the header
        0x1d97f0,               // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders(int nHeaderSetToDump);

public:
    CGame_KOF99_A(uint32_t nConfirmedROMSize);

    static void SetSpecialRuleForFileName(std::wstring strFileName);

    static sFileRule GetRule(uint32_t nRuleId);
};
