#pragma once

const std::vector<uint16_t> UNI2_S_IMGIDS_USED =
{
    indexFrenchBreadSprites_UNICLR_Akat,   // 0x34
    indexFrenchBreadSprites_UNICLR_Byak,   // 0x35
    indexFrenchBreadSprites_UNICLR_Carm,   // 0x36
    indexFrenchBreadSprites_UNICLR_Chao,   // 0x37
    indexFrenchBreadSprites_UNICLR_Eltn,   // 0x38
    indexFrenchBreadSprites_UNICLR_Enki,   // 0x39
    indexFrenchBreadSprites_UNICLR_Gord,   // 0x3A
    indexFrenchBreadSprites_UNICLR_Hild,   // 0x3B
    indexFrenchBreadSprites_UNICLR_Hyde,   // 0x3C
    indexFrenchBreadSprites_UNICLR_Linn,   // 0x3D
    indexFrenchBreadSprites_UNICLR_Lond,   // 0x3E
    indexFrenchBreadSprites_UNICLR_Merk,   // 0x3F
    indexFrenchBreadSprites_UNICLR_Mika,   // 0x40
    indexFrenchBreadSprites_UNICLR_Nana,   // 0x41
    indexFrenchBreadSprites_UNICLR_Orie,   // 0x42
    indexFrenchBreadSprites_UNICLR_Phon,   // 0x43
    indexFrenchBreadSprites_UNICLR_Seth,   // 0x44
    indexFrenchBreadSprites_UNICLR_Vati,   // 0x45
    indexFrenchBreadSprites_UNICLR_Wagn,   // 0x46
    indexFrenchBreadSprites_UNICLR_Wald,   // 0x47
    indexFrenchBreadSprites_UNICLR_Yuzu,   // 0x48
    indexFrenchBreadSprites_UNICLR_Bonus,  // 0x49
};

const std::vector<LPCWSTR> UNI2ButtonLabelsNormal =
{
    L"1",
    L"2",
    L"3",
    L"4",
    L"5",
    L"6",
    L"7",
    L"8",
    L"9",
    L"10",
    L"11",
    L"12",
    L"13",
    L"14",
    L"15",
    L"16",
    L"17",
    L"18",
    L"19",
    L"20",
    L"21",
    L"22",
    L"23",
    L"24",
    L"25",
    L"26",
    L"27",
    L"28",
    L"29",
    L"30",
    L"31",
    L"32",
    L"33",
    L"34",
    L"35",
    L"36",
    L"37",
    L"38",
    L"39",
    L"40",
};

const sGCBUPF_BasicNodeData UNI2PaletteNodes =
{
    // Don't change this layout: the L/R pairing is used by code in CGame_UNICLR_A::PostSetPal
    { L"Left", L"Right" }, 0x10400, UNI2ButtonLabelsNormal
};

const std::vector<sGCBUPF_BasicFileData> UNI2CharacterData =
{
    { L"___English\\data\\_csel\\chr014.pal",    L"Akatsuki (CharaSelect)",          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Akat },
	{ L"data\\chr014\\chr014.pal",               L"Akatsuki",                        133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Akat },
    { L"___English\\data\\_csel\\chr013.pal",    L"Byakuya (CharaSelect)",           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Byak },
	{ L"data\\chr013\\chr013.pal",               L"Byakuya",                         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Byak },
    { L"___English\\data\\_csel\\chr003.pal",    L"Carmine (CharaSelect)",           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Carm },
	{ L"data\\chr003\\chr003.pal",               L"Carmine",                         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Carm },
    { L"___English\\data\\_csel\\chr015.pal",    L"Chaos (CharaSelect)",             133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Chao },
	{ L"data\\chr015\\chr015.pal",               L"Chaos",                           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Chao },
    { L"___English\\data\\_csel\\chr011.pal",    L"Eltnum (CharaSelect)",            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Eltn },
    { L"data\\chr011\\chr011.pal",               L"Eltnum",                          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Eltn },
	{ L"___English\\data\\_csel\\chr017.pal",    L"Enkidu (CharaSelect)",            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Enki },
    { L"data\\chr017\\chr017.pal",               L"Enkidu",                          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Enki },
	{ L"___English\\data\\_csel\\chr005.pal",    L"Gordeau (CharaSelect)",           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Gord },
    { L"data\\chr005\\chr005.pal",               L"Gordeau",                         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Gord },
	{ L"___English\\data\\_csel\\chr010.pal",    L"Hilda (CharaSelect)",             133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Hild },
    { L"data\\chr010\\chr010.pal",               L"Hilda",                           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Hild },
	{ L"___English\\data\\_csel\\chr000.pal",    L"Hyde (CharaSelect)",              133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Hyde },
	{ L"data\\chr000\\chr000.pal",               L"Hyde",                            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Hyde },
	{ L"___English\\data\\_csel\\chr026.pal",    L"Izumi (CharaSelect)",             133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
    { L"data\\chr026\\chr026.pal",               L"Izumi",                           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
	{ L"___English\\data\\_csel\\chr022.pal",    L"Kaguya (CharaSelect)",            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
    { L"data\\chr022\\chr022.pal",               L"Kaguya",                          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
	{ L"___English\\data\\_csel\\chr023.pal",    L"Kuon (CharaSelect)",              133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
    { L"data\\chr023\\chr023.pal",               L"Kuon",                            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
    { L"___English\\data\\_csel\\chr001.pal",    L"Linne (CharaSelect)",             133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Linn },
    { L"data\\chr001\\chr001.pal",               L"Linne",                           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Linn },
    { L"___English\\data\\_csel\\chr018.pal",    L"Londrekia (CharaSelect)",         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Lond },
    { L"data\\chr018\\chr018.pal",               L"Londrekia",                       133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Lond },
	{ L"___English\\data\\_csel\\chr006.pal",    L"Merkava (CharaSelect)",           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Merk },
    { L"data\\chr006\\chr006.pal",               L"Merkava",                         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Merk },
	{ L"___English\\data\\_csel\\chr021.pal",    L"Mika (CharaSelect)",              133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Mika },
    { L"data\\chr021\\chr021.pal",               L"Mika",                            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Mika },
	{ L"___English\\data\\_csel\\chr012.pal",    L"Nanase (CharaSelect)",            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Nana },
	{ L"data\\chr012\\chr012.pal",               L"Nanase",                          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Nana },
	{ L"___English\\data\\_csel\\chr025.pal",    L"Ogre (CharaSelect)",              133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
    { L"data\\chr025\\chr025.pal",               L"Ogre",                            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
	{ L"___English\\data\\_csel\\chr004.pal",    L"Orie (CharaSelect)",              133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Orie },
    { L"data\\chr004\\chr004.pal",               L"Orie",                            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Orie },
	{ L"___English\\data\\_csel\\chr024.pal",    L"Phonon (CharaSelect)",            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Phon },
    { L"data\\chr024\\chr024.pal",               L"Phonon",                          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Phon },
	{ L"___English\\data\\_csel\\chr008.pal",    L"Seth (CharaSelect)",              133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Seth },
	{ L"data\\chr008\\chr008.pal",               L"Seth",                            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Seth },
	{ L"___English\\data\\_csel\\chr019.pal",    L"Tsurugi (CharaSelect)",           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
	{ L"data\\chr019\\chr019.pal",               L"Tsurugi",                         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
	{ L"___English\\data\\_csel\\chr020.pal",    L"Uzuki (CharaSelect)",             133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
    { L"data\\chr020\\chr020.pal",               L"Uzuki",                           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10, },
	{ L"___English\\data\\_csel\\chr007.pal",    L"Vatista (CharaSelect)",           133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Vati },
    { L"data\\chr007\\chr007.pal",               L"Vatista",                         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Vati },
	{ L"___English\\data\\_csel\\chr016.pal",    L"Wagner (CharaSelect)",            133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Wagn },
    { L"data\\chr016\\chr016.pal",               L"Wagner",                          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Wagn },
	{ L"___English\\data\\_csel\\chr002.pal",    L"Waldstein (CharaSelect)",         133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Wald },
    { L"data\\chr002\\chr002.pal",               L"Waldstein",                       133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Wald },
	{ L"___English\\data\\_csel\\chr009.pal",    L"Yuzuriha (CharaSelect)",          133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Yuzu },
	{ L"data\\chr009\\chr009.pal",               L"Yuzuriha",                        133136,    UNI2PaletteNodes,    GCBUPF_UseButtonLabelsAsPaletteSet,  0x10,  indexFrenchBreadSprites_UNICLR_Yuzu },
};
