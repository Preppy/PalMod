#pragma once
#include "GameClassByDir.h"
#include "KOF98_A_DEF.h"

class CGame_KOF98_A : public CGameClassByDir
{
private:
    static inline const sDirectoryLoadingData m_sFileLoadingData =
    {
        {
            { L"242-p2.sp2", 0x400000 },
        },
        FileReadType::Sequential,
    };

    const std::vector<sCRC32ValueSet> m_rgCRC32Data =
    {
        // There are three unique ROM sets, but the first two share the same palette file,
        // and the third one we don't care about.
        { L"King of Fighters '98 (Neo-Geo)", L"242-p2.sp2", 0x980aba4c, 0 },
        { L"King of Fighters '98 (Neo-Geo)", L"kof98_p2.rom", 0x980aba4c, 0 },
        { L"King of Fighters '98 (Neo-Geo Alt)", L"242-ep.ep2", 0x6e474841, 0 },
        { L"King of Fighters '98 Combo (Neo-Geo Hack)", L"242cb-p2.sp2", 0xd34a4d38, 0 },
        { L"King of Fighters '98 Easy Combo King (Neo-Geo Hack)", L"98eckvs-p2.bin", 0x5d59e3ae, 0 },
        { L"King of Fighters '98 Mix (Neo-Geo Hack)", L"242mix.p2", 0x73d3505d, 0 },
        { L"King of Fighters '98 Plus Final Edition (Neo-Geo Hack)", L"242pfe.p2", 0xdfa686e9, 0 },

#ifdef NOTES
        // These are the MAME values...
        <software name = "kof98">
            <description>The King of Fighters '98 - The Slugfest / King of Fighters '98 - Dream Match Never Ends(NGM - 2420) < / description >
                <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x200000" size = "0x400000" crc = "980aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof98k" cloneof = "kof98">
            <description>The King of Fighters '98 - The Slugfest / King of Fighters '98 - Dream Match Never Ends(Korean board, set 1) < / description >
                <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x200000" size = "0x400000" crc = "980aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof98ka" cloneof = "kof98">
            <description>The King of Fighters '98 - The Slugfest / King of Fighters '98 - Dream Match Never Ends(Korean board, set 2) < / description >
                <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x200000" size = "0x400000" crc = "980aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof98h" cloneof = "kof98">
            <description>The King of Fighters '98 - The Slugfest / King of Fighters '98 - Dream Match Never Ends(NGH - 2420) < / description >
                    <rom loadflag = "load16_word_swap" name = "242-p2.sp2" offset = "0x100000" size = "0x400000" crc = "980aba4c" sha1 = "5e735929ec6c3ca5b2efae3c7de47bcbb8ade2c5" / >  <!--TC5332205-->

        <software name = "kof98a" cloneof = "kof98">
            <description>The King of Fighters '98 - The Slugfest / King of Fighters '98 - Dream Match Never Ends(NGM - 2420, alt board) < / description >
                    <rom loadflag = "load16_word_swap" name = "242-ep2.ep2" offset = "0x400000" size = "0x200000" crc = "6e474841" sha1 = "0ce401277f9c53435ea00b930efe361c8d25a7d9" / > <!--M27C160-->
#endif
    };

    const sCoreGameData m_sCoreGameData
    {
        L"King of Fighters '98 (Neo-Geo)",
        KOF98_A,
        IMGDAT_SECTION_KOF,
        KOF98_A_IMGIDS_USED,
        { NO_SPECIAL_OPTIONS, PALWriteOutputOptions::WRITE_16 },
        eImageOutputSpriteDisplay::DISPLAY_SPRITES_LEFTTORIGHT,
        DEF_BUTTONLABEL_NEOGEO,
        AlphaMode::GameDoesNotUseAlpha,
        ColMode::COLMODE_RGB666_NEOGEO,
        m_sFileLoadingData,
        m_rgCRC32Data,
        KOF98_A_UNITS,
        ARRAYSIZE(KOF98_A_UNITS),
        L"KOF98E.txt",          // Extra filename
        2027,                   // Count of palettes listed in the header
        0x2d8210,               // Lowest known location used for palettes
    };

    void DumpPaletteHeaders();

public:
    CGame_KOF98_A(uint32_t nConfirmedROMSize) { InitializeGame(nConfirmedROMSize, m_sCoreGameData); };

    static sFileRule GetRule(uint32_t nRuleId) { return CGameClassByDir::GetRule(nRuleId, m_sFileLoadingData); };
};
