#pragma once
#include "GameClassByDir.h"
#include "KOF94_A_DEF.h"

class CGame_KOF94_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"055-p1.p1", 0x200000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // There are three unique ROM sets, but the first two share the same palette file,
        // and the third one we don't care about.
        { L"KOF '94 (Neo-Geo)", L"055-p1.p1", 0xf10a2042, 0 },
        { L"KOF '94 (Neo-Geo)", L"055-p1.bin", 0xf10a2042, 0 },
        { L"KOF '94 (Neo-Geo)", L"242-p2.sp2", 0x940aba4c, 0 },
        { L"KOF '94 (Neo-Geo)", L"kof94_p2.rom", 0x940aba4c, 0 },
        { L"KOF '94 (Neo-Geo Alt)", L"242-ep.ep2", 0x6e474841, 0 },

#ifdef NOTES
        // These are the MAME values...
        <software name = "kof94">
            <description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends(NGM - 2420) < / description >
                <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x200000" size = "0x400000" crc = "940aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof94k" cloneof = "kof94">
            <description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends(Korean board, set 1) < / description >
                <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x200000" size = "0x400000" crc = "940aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof94ka" cloneof = "kof94">
            <description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends(Korean board, set 2) < / description >
                <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x200000" size = "0x400000" crc = "940aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof94h" cloneof = "kof94">
            <description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends(NGH - 2420) < / description >
                    <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x100000" size = "0x400000" crc = "940aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof94a" cloneof = "kof94">
            <description>The King of Fighters '94 - The Slugfest / King of Fighters '94 - Dream Match Never Ends(NGM - 2420, alt board) < / description >
                    <rom loadflag = "load16_word_swap" name = "242-ep2.ep2" offset = "0x400000" size = "0x200000" crc = "6e474841" sha1 = "0ce401277f9c53435ea00b930efe361c8d25a7d9" / > <!--M27C160-->
#endif
    };

    const sCoreGameData m_sCoreGameData
    {
        L"KOF '94 (Neo-Geo)",
        KOF94_A,
        IMGDAT_SECTION_KOF,
        KOF94_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_2_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF94_A_UNITS,
        ARRAYSIZE(KOF94_A_UNITS),
        L"KOF94E.txt",      // Extra filename
        589,                // Count of palettes listed in the header
        0x16fe00,           // Lowest known location used for palettes
    };

    // Developer-only mode to regenerate the header file quickly.
    static void DumpPaletteHeaders();

public:
    CGame_KOF94_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
