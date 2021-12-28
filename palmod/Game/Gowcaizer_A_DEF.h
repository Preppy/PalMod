#pragma once

// To add characters or palette lists:
// * Update the GowcaizerCharacterList array.
// * Uncomment DumpAllCharacters in InitDescTree
// * Run PalMod: the new headers will be printed to debug out
// That should be it.  Good luck.

const std::vector<UINT16> Gowcaizer_A_IMGIDS_USED =
{
    indexNEOGEOSprites_VFG_Brider,          // 0x7B
    indexNEOGEOSprites_VFG_Captain,         // 0x7C
    indexNEOGEOSprites_VFG_Fudomaru,        // 0x7D
    indexNEOGEOSprites_VFG_Gowcaizer,       // 0x7E
    indexNEOGEOSprites_VFG_Karin,           // 0x7F
    indexNEOGEOSprites_VFG_Kyosuke,         // 0x80
    indexNEOGEOSprites_VFG_Marion,          // 0x81
    indexNEOGEOSprites_VFG_Ohga,            // 0x82
    indexNEOGEOSprites_VFG_PlatonicTwins,   // 0x83
    indexNEOGEOSprites_VFG_Shaia,           // 0x84
    indexNEOGEOSprites_VFG_Shenlong,        // 0x85
    indexNEOGEOSprites_VFG_Stinger,         // 0x86
    indexNEOGEOSprites_VFG_Bonus,           // 0x87
    indexNEOGEOSprites_VFG_Stages,          // 0x88
};

// CHARACTERS

// "Gowcaizer" Isato Kaiza

const sGame_PaletteDataset Gowcaizer_A_GOWCAIZER_PALETTES_P1[] =
{
    { L"Gowcaizer P1", 0x190e62, 0x190e82, indexNEOGEOSprites_VFG_Gowcaizer, 0x00 },
    { L"Gowcaizer Intro P1", 0x196ee2, 0x196f02 },
    { L"Gowcaizer Select/Win Portrait P1", 0x191FE2, 0x1920c2 },
};

const sGame_PaletteDataset Gowcaizer_A_GOWCAIZER_PALETTES_P2[] =
{
    { L"Gowcaizer P2", 0x190e82, 0x190ea2, indexNEOGEOSprites_VFG_Gowcaizer, 0x00 },
    { L"Gowcaizer Intro P2", 0x196f02, 0x196f22 },
    { L"Gowcaizer Select/Win Portrait P2", 0x1920E2, 0x1921c2 },
};

// "Captain Atlantis" Randy Riggs

const sGame_PaletteDataset Gowcaizer_A_ATLANTIS_PALETTES_P1[] =
{
    { L"Captain Atlantis P1", 0x190ea2, 0x190ec2, indexNEOGEOSprites_VFG_Captain, 0x00 },
    { L"Captain Atlantis Select/Win Portrait P1", 0x1921E2, 0x1922e2 },
};

const sGame_PaletteDataset Gowcaizer_A_ATLANTIS_PALETTES_P2[] =
{
    { L"Captain Atlantis P2", 0x190ec2, 0x190ee2, indexNEOGEOSprites_VFG_Captain, 0x00 },
    { L"Captain Atlantis Select/Win Portrait P2", 0x1922E2, 0x1923e2 },
};

// "Karin" Son Hualing

const sGame_PaletteDataset Gowcaizer_A_KARIN_PALETTES_P1[] =
{
    { L"Karin P1", 0x190f22, 0x190f42, indexNEOGEOSprites_VFG_Karin, 0x00 },
    { L"Karin Intro P1", 0x1971e2, 0x197202 },
    { L"Karin Intro Extra 1 P1", 0x197222, 0x197242 },
    { L"Karin Intro Extra 2 P1", 0x197262, 0x197282 },
    { L"Karin Select Portrait P1", 0x199BE2, 0x199Ce2 },
    { L"Karin Win Portrait P1", 0x198DE2, 0x198EE2 },
};

const sGame_PaletteDataset Gowcaizer_A_KARIN_PALETTES_P2[] =
{
    { L"Karin P2", 0x190f42, 0x190f62, indexNEOGEOSprites_VFG_Karin, 0x00 },
    { L"Karin Intro P2", 0x197202, 0x197222 },
    { L"Karin Intro Extra 1 P2", 0x197242, 0x197262 },
    { L"Karin Intro Extra 2 P2", 0x197282, 0x1972a2 },
    { L"Karin Select Portrait P2", 0x199CE2, 0x199De2 },
    { L"Karin Win Portrait P2", 0x198eE2, 0x198fE2 },
};

// "Fudomaru" Ranpo Fudoh

const sGame_PaletteDataset Gowcaizer_A_FUDOMARU_PALETTES_P1[] =
{
    { L"Fudomaru P1", 0x190ee2, 0x190f02, indexNEOGEOSprites_VFG_Fudomaru, 0x00 },
    { L"Fudomaru Intro P1", 0x1972a2, 0x1972c2 },
    { L"Fudomaru Intro Extra P1", 0x1972e2, 0x197302 },
    { L"Fudomaru Select/Win Portrait P1", 0x1923e2, 0x1924e2 },
};

const sGame_PaletteDataset Gowcaizer_A_FUDOMARU_PALETTES_P2[] =
{
    { L"Fudomaru P2", 0x190f02, 0x190f22, indexNEOGEOSprites_VFG_Fudomaru, 0x00 },
    { L"Fudomaru Intro P2", 0x1972c2, 0x1972e2 },
    { L"Fudomaru Intro Extra P2", 0x197302, 0x197322 },
    { L"Fudomaru Select/Win Portrait P2", 0x1924E2, 0x1925e2 },
};

// "Marion" DES/CO-P IV Marionette

const sGame_PaletteDataset Gowcaizer_A_MARION_PALETTES_P1[] =
{
    { L"Marion P1", 0x1911e2, 0x191202, indexNEOGEOSprites_VFG_Marion, 0x00 },
    { L"Marion Select/Win Portrait P1", 0x19A7E2, 0x19A8e2 },
};

const sGame_PaletteDataset Gowcaizer_A_MARION_PALETTES_P2[] =
{
    { L"Marion P2", 0x191202, 0x191222, indexNEOGEOSprites_VFG_Marion, 0x00 },
    { L"Marion Select/Win Portrait P2", 0x19A8E2, 0x19A9e2 },
};

// "Shaia" Shaia Hishizaki

const sGame_PaletteDataset Gowcaizer_A_SHAIA_PALETTES_P1[] =
{
    { L"Shaia P1", 0x191162, 0x191182, indexNEOGEOSprites_VFG_Shaia, 0x00 },
    { L"Ball Boy P1", 0x1911a2, 0x1911c2, indexNEOGEOSprites_VFG_Shaia, 0x01 },
    { L"Shaia Intro P1", 0x1976e2, 0x197702 },
    { L"Shaia Select Portrait P1", 0x19A5E2, 0x19A6e2 },
    { L"Shaia Win Portrait P1", 0x19b1e2, 0x19b2c2 },
};

const sGame_PaletteDataset Gowcaizer_A_SHAIA_PALETTES_P2[] =
{
    { L"Shaia P2", 0x191182, 0x1911a2, indexNEOGEOSprites_VFG_Shaia, 0x00 },
    { L"Ball Boy P2", 0x1911c2, 0x1911e2, indexNEOGEOSprites_VFG_Shaia, 0x01 },
    { L"Shaia Intro P2", 0x197702, 0x197722 },
    { L"Shaia Select Portrait P2", 0x19A6E2, 0x19A7e2 },
    { L"Shaia Win Portrait P2", 0x19b2e2, 0x19b3c2 },
};

// "Shen Long" Goichiro Kaiza

const sGame_PaletteDataset Gowcaizer_A_SHENLONG_PALETTES_P1[] =
{
    { L"Shen Long P1", 0x190f62, 0x190f82, indexNEOGEOSprites_VFG_Shenlong, 0x00 },
    { L"Shen Long Illusion P1", 0x190fa2, 0x190fc2, indexNEOGEOSprites_VFG_Shenlong, 0x00 },
    { L"Shen Long Select/Win Portrait P1", 0x199fe2, 0x19A022 },
};

const sGame_PaletteDataset Gowcaizer_A_SHENLONG_PALETTES_P2[] =
{
    { L"Shen Long P2", 0x190f82, 0x190fa2, indexNEOGEOSprites_VFG_Shenlong, 0x00 },
    { L"Shen Long Illusion P2", 0x190fc2, 0x190fe2, indexNEOGEOSprites_VFG_Shenlong, 0x00 },
    { L"Shen Long Select/Win Portrait P2", 0x19A0E2, 0x19A122 },
};

// Kyosuke Shigure

const sGame_PaletteDataset Gowcaizer_A_KYOSUKE_PALETTES_P1[] =
{
    { L"Kyosuke Shigure P1", 0x190fe2, 0x191002, indexNEOGEOSprites_VFG_Kyosuke, 0x00 },
    { L"Kyosuke Shigure Summons P1", 0x191022, 0x191042 },
    { L"Kyosuke Select/Win Portrait P1", 0x19A1E2, 0x19A2c2 },
};

const sGame_PaletteDataset Gowcaizer_A_KYOSUKE_PALETTES_P2[] =
{
    { L"Kyosuke Shigure P2", 0x191002, 0x191022, indexNEOGEOSprites_VFG_Kyosuke, 0x00 },
    { L"Kyosuke Shigure Summons P2", 0x191042, 0x191062 },
    { L"Kyosuke Select/Win Portrait P2", 0x19A2E2, 0x19A3C2 },
};

// "HellStinger" Kash Gyustan

const sGame_PaletteDataset Gowcaizer_A_HELLSTINGER_PALETTES_P1[] =
{
    { L"HellStinger P1", 0x190de2, 0x190e02, indexNEOGEOSprites_VFG_Stinger, 0x00 },
    { L"Hellstinger Guitar P1", 0x190e22, 0x190e42 },
    { L"HellStinger Intro P1", 0x196de2, 0x196e02 },
    { L"HellStinger Intro Extra P1", 0x196e22, 0x196e42 },
    { L"HellStinger Select/Win Portrait P1", 0x191DE2, 0x191Ee2 },
};

const sGame_PaletteDataset Gowcaizer_A_HELLSTINGER_PALETTES_P2[] =
{
    { L"HellStinger P2", 0x190e02, 0x190e22, indexNEOGEOSprites_VFG_Stinger, 0x00 },
    { L"Hellstinger Guitar P2", 0x190e42, 0x190e62 },
    { L"HellStinger Intro P2", 0x196e02, 0x196e22 },
    { L"HellStinger Intro Extra P2", 0x196e42, 0x196e62 },
    { L"HellStinger Select/Win Portrait P2", 0x191EE2, 0x191Fe2 },
};

// "Brider" Kazuki Tachibana

const sGame_PaletteDataset Gowcaizer_A_BRIDER_PALETTES_P1[] =
{
    { L"Brider P1", 0x1910a2, 0x1910c2, indexNEOGEOSprites_VFG_Brider, 0x00 },
    { L"Double Brider P1", 0x191122, 0x191142, indexNEOGEOSprites_VFG_Brider, 0x00 },
    { L"Brider Intro P1", 0x1975e2, 0x197602 },
    { L"Brider Select/Win Portrait P1", 0x19A3E2, 0x19A4e2 },
};

const sGame_PaletteDataset Gowcaizer_A_BRIDER_PALETTES_P2[] =
{
    { L"Brider P2", 0x1910c2, 0x1910e2, indexNEOGEOSprites_VFG_Brider, 0x00 },
    { L"Double Brider P2", 0x191142, 0x191162, indexNEOGEOSprites_VFG_Brider, 0x00 },
    { L"Brider Intro P2", 0x197602, 0x197622 },
    { L"Brider Select/Win Portrait P2", 0x19A4E2, 0x19A5e2 },
};

// "Platonic Twins" Ryo Asahina & Suzu Asahina

const sGame_PaletteDataset Gowcaizer_A_PLATONIC_PALETTES_P1[] =
{
    { L"Platonic Twins P1", 0x191222, 0x191242, indexNEOGEOSprites_VFG_PlatonicTwins, 0x00 },
    { L"Platonic Twins Intro P1", 0x1977e2, 0x197822 },
    { L"Platonic Twins Intro Extra 1 P1", 0x197822, 0x197842 },
    { L"Platonic Twins Intro Extra 2 P1", 0x197842, 0x197862 },
    { L"Platonic Twins Select/Win Portrait P1", 0x199DE2, 0x199Ee2 },
};

const sGame_PaletteDataset Gowcaizer_A_PLATONIC_PALETTES_P2[] =
{
    { L"Platonic Twins P2", 0x191242, 0x191262, indexNEOGEOSprites_VFG_PlatonicTwins, 0x00 },
    { L"Platonic Twins Intro P2", 0x197862, 0x1978a2 },
    { L"Platonic Twins Intro Extra 1 P2", 0x1978a2, 0x1978c2 },
    { L"Platonic Twins Intro Extra 2 P2", 0x1978c2, 0x1978e2 },
    { L"Platonic Twins Select/Win Portrait P2", 0x199EE2, 0x199Fe2 },
};

// "Ohga" Shizuru Osaki

const sGame_PaletteDataset Gowcaizer_A_OHGA_PALETTES_P1[] =
{
    { L"Ohga P1", 0x191262, 0x191282, indexNEOGEOSprites_VFG_Ohga, 0x00 },
    { L"Ohga Intro P1", 0x197962, 0x197982 },
    { L"Ohga Intro Extra P1", 0x197982, 0x1979a2 },
    { L"Ohga Winpose P1", 0x1912a2, 0x1912c2 },
    { L"Ohga Select/Win Portrait P1", 0x19A9E2, 0x19AAe2 },
};

const sGame_PaletteDataset Gowcaizer_A_OHGA_PALETTES_P2[] =
{
    { L"Ohga P2", 0x191282, 0x1912a2, indexNEOGEOSprites_VFG_Ohga, 0x00 },
    { L"Ohga Intro P2", 0x1979a2, 0x1979c2 },
    { L"Ohga Intro Extra P2", 0x1979c2, 0x1979e2 },
    { L"Ohga Winpose P2", 0x1912c2, 0x1912e2 },
    { L"Ohga Select/Win Portrait P2", 0x19AAE2, 0x19ABe2 },
};


// STAGES

const sGame_PaletteDataset Gowcaizer_A_STAGES_Urban_PALETTES[] =
{
    { L"Urban Apocalypse 1/2", 0x192be2, 0x192de2 },
    { L"Urban Apocalypse 2/2", 0x192de2, 0x192fe2 },
    { L"Urban Apocalypse Extra 1", 0x135cc0, 0x135d00 },
    { L"Urban Apocalypse Extra 2", 0x135ec0, 0x135f40 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_BILLBOARD_PALETTES[] =
{
    { L"BillBoard Rooftops 1/2", 0x192fe2, 0x1931e2 },
    { L"BillBoard Rooftops 2/2", 0x1931e2, 0x1933e2 },
    { L"BillBoard Rooftops Extra", 0x1360c0, 0x136120 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_GREATWALL_PALETTES[] =
{
    { L"Great Wall of China 1/2", 0x1937e2, 0x1939e2 },
    { L"Great Wall of China 2/2", 0x1939e2, 0x193be2 },
    { L"Great Wall of China Extra 1", 0x1366c0, 0x1367e0 },
    { L"Great Wall of China Extra 2 Flash 1", 0x1368c0, 0x1368e0 },
    { L"Great Wall of China Extra 2 Flash 2", 0x1368e0, 0x136900 },
    { L"Great Wall of China Extra 2 Flash 3", 0x136900, 0x136920 },
    { L"Great Wall of China Extra 2 Flash 4", 0x136920, 0x136940 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_SHRINE_PALETTES[] =
{
    { L"Ninja Shrine 1/2", 0x1933e2, 0x1935e2 },
    { L"Ninja Shrine 2/2", 0x1935e2, 0x1937e2 },
    { L"Ninja Shrine Extra 1 Flash 1", 0x1362c0, 0x136340 },
    { L"Ninja Shrine Extra 1 Flash 2", 0x136340, 0x1363c0 },
    { L"Ninja Shrine Extra 1 Flash 3", 0x1363c0, 0x136440 },
    { L"Ninja Shrine Extra 1 Flash 4", 0x136440, 0x1364c0 },
    { L"Ninja Shrine Extra 2 Flash 1", 0x1364c0, 0x1364e0 },
    { L"Ninja Shrine Extra 2 Flash 2", 0x1364e0, 0x136500 },
    { L"Ninja Shrine Extra 2 Flash 3", 0x136500, 0x136520 },
    { L"Ninja Shrine Extra 2 Flash 4", 0x136520, 0x136540 },
    { L"Ninja Shrine Extra 3 Flash 1", 0x136540, 0x136560 },
    { L"Ninja Shrine Extra 3 Flash 2", 0x136560, 0x136580 },
    { L"Ninja Shrine Extra 3 Flash 3", 0x136580, 0x1365a0 },
    { L"Ninja Shrine Extra 3 Flash 4", 0x1365a0, 0x1365c0 },
    { L"Ninja Shrine Extra 4 Flash 1", 0x1365c0, 0x1365e0 },
    { L"Ninja Shrine Extra 4 Flash 2", 0x1365e0, 0x136600 },
    { L"Ninja Shrine Extra 4 Flash 3", 0x136600, 0x136620 },
    { L"Ninja Shrine Extra 4 Flash 4", 0x136620, 0x136640 },
    { L"Ninja Shrine Extra 5 Flash 1", 0x136640, 0x136660 },
    { L"Ninja Shrine Extra 5 Flash 2", 0x136660, 0x136680 },
    { L"Ninja Shrine Extra 5 Flash 3", 0x136680, 0x1366a0 },
    { L"Ninja Shrine Extra 5 Flash 4", 0x1366a0, 0x1366c0 },
    { L"Ninja Shrine Extra 6", 0x138ce0, 0x138d00 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_LAB_PALETTES[] =
{
    { L"Robot Laboratory 1/2", 0x1953e2, 0x1955e2 },
    { L"Robot Laboratory 2/2", 0x1955e2, 0x1957e2 },
    { L"Robot Laboratory Extra 1", 0x13aec0, 0x13af00 },
    { L"Robot Laboratory Extra 2 Flash 1", 0x13b0c0, 0x13b0e0 },
    { L"Robot Laboratory Extra 2 Flash 2", 0x13b0e0, 0x13b100 },
    { L"Robot Laboratory Extra 2 Flash 3", 0x13b100, 0x13b120 },
    { L"Robot Laboratory Extra 2 Flash 4", 0x13b120, 0x13b140 },
    { L"Robot Laboratory Extra 2 Flash 5", 0x13b140, 0x13b160 },
    { L"Robot Laboratory Extra 2 Flash 6", 0x13b160, 0x13b180 },
    { L"Robot Laboratory Extra 2 Flash 7", 0x13b180, 0x13b1a0 },
    { L"Robot Laboratory Extra 2 Flash 8", 0x13b1a0, 0x13b1c0 },
    { L"Robot Laboratory Extra 2 Flash 9", 0x13b1c0, 0x13b1e0 },
    { L"Robot Laboratory Extra 2 Flash 10", 0x13b1e0, 0x13b200 },
    { L"Robot Laboratory Extra 2 Flash 11", 0x13b200, 0x13b220 },
    { L"Robot Laboratory Extra 2 Flash 12", 0x13b220, 0x13b240 },
    { L"Robot Laboratory Extra 2 Flash 13", 0x13b240, 0x13b260 },
    { L"Robot Laboratory Extra 2 Flash 14", 0x13b260, 0x13b280 },
    { L"Robot Laboratory Extra 2 Flash 15", 0x13b280, 0x13b2a0 },
    { L"Robot Laboratory Extra 3 Flash 1", 0x13b2c0, 0x13b300 },
    { L"Robot Laboratory Extra 3 Flash 2", 0x13b300, 0x13b340 },
    { L"Robot Laboratory Extra 3 Flash 3", 0x13b340, 0x13b380 },
    { L"Robot Laboratory Extra 3 Flash 4", 0x13b380, 0x13b3c0 },
    { L"Robot Laboratory Extra 3 Flash 5", 0x13b3c0, 0x13b400 },
    { L"Robot Laboratory Extra 3 Flash 6", 0x13b400, 0x13b440 },
    { L"Robot Laboratory Extra 3 Flash 7", 0x13b440, 0x13b480 },
    { L"Robot Laboratory Extra 3 Flash 8", 0x13b480, 0x13b4c0 },
    { L"Robot Laboratory Extra 3 Flash 9", 0x13b4c0, 0x13b500 },
    { L"Robot Laboratory Extra 3 Flash 10", 0x13b500, 0x13b540 },
    { L"Robot Laboratory Extra 3 Flash 11", 0x13b540, 0x13b580 },
    { L"Robot Laboratory Extra 3 Flash 12", 0x13b580, 0x13b5c0 },
    { L"Robot Laboratory Extra 4 Flash 1", 0x13b6c0, 0x13b6e0 },
    { L"Robot Laboratory Extra 4 Flash 2", 0x13b6e0, 0x13b700 },
    { L"Robot Laboratory Extra 4 Flash 3", 0x13b700, 0x13b720 },
    { L"Robot Laboratory Extra 4 Flash 4", 0x13b720, 0x13b740 },
    { L"Robot Laboratory Extra 4 Flash 5", 0x13b740, 0x13b760 },
    { L"Robot Laboratory Extra 4 Flash 6", 0x13b760, 0x13b780 },
    { L"Robot Laboratory Extra 4 Flash 7", 0x13b780, 0x13b7a0 },
    { L"Robot Laboratory Extra 4 Flash 8", 0x13b7a0, 0x13b7c0 },
    { L"Robot Laboratory Extra 4 Flash 9", 0x13b7c0, 0x13b7e0 },
    { L"Robot Laboratory Extra 4 Flash 10", 0x13b7e0, 0x13b800 },
    { L"Robot Laboratory Extra 4 Flash 11", 0x13b800, 0x13b820 },
    { L"Robot Laboratory Extra 4 Flash 12", 0x13b820, 0x13b840 },
    { L"Robot Laboratory Extra 4 Flash 13", 0x13b840, 0x13b860 },
    { L"Robot Laboratory Extra 4 Flash 14", 0x13b860, 0x13b880 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_SHAIA_PALETTES[] =
{
    { L"Shaia On Stage 1/2", 0x194fe2, 0x1951e2 },
    { L"Shaia On Stage 2/2", 0x1951e2, 0x1953e2 },
    { L"Shaia On Stage Extra 1", 0x13a6c0, 0x13a6e0 },
    { L"Shaia On Stage Extra 2", 0x13a8e0, 0x13a9c0 },
    { L"Shaia On Stage Extra 2 Flash", 0x13a9c0, 0x13aaa0 },
    { L"Shaia On Stage Extra 3", 0x13aae0, 0x13abc0 },
    { L"Shaia On Stage Extra 3 Flash", 0x13abc0, 0x13aca0 },
    { L"Shaia On Stage Extra 4", 0x13ace0, 0x13adc0 },
    { L"Shaia On Stage Extra 4 Flash", 0x13adc0, 0x13aea0 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_TOKYO_PALETTES[] =
{
    { L"Downtown Tokyo 1/2", 0x193fe2, 0x1941e2 },
    { L"Downtown Tokyo 2/2", 0x1941e2, 0x1943e2 },
    { L"Downtown Tokyo Extra", 0x136cc0, 0x136d60 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_CATHEDRAL_PALETTES[] =
{
    { L"Abandoned Cathedral 1/2", 0x1947e2, 0x1949e2 },
    { L"Abandoned Cathedral 2/2", 0x1949e2, 0x194be2 },
    { L"Abandoned Cathedral Extra 1", 0x138cc0, 0x138ce0 },
    { L"Abandoned Cathedral Extra 2 Flash 1", 0x138ec0, 0x138f40 },
    { L"Abandoned Cathedral Extra 2 Flash 2", 0x138f40, 0x138fa0 },
    { L"Abandoned Cathedral Extra 2 Flash 3", 0x138fa0, 0x139000 },
    { L"Abandoned Cathedral Extra 2 Flash 4", 0x139000, 0x139060 },
    { L"Abandoned Cathedral Extra 2 Flash 5", 0x139060, 0x1390c0 },
    { L"Abandoned Cathedral Extra 2 Flash 6", 0x1390c0, 0x139120 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_ROCKNROLL_PALETTES[] =
{
    { L"Rock'N Roll Hell 1/2", 0x1927e2, 0x1929e2 },
    { L"Rock'N Roll Hell 2/2", 0x1929e2, 0x192be2 },
    { L"Rock'N Roll Hell Extra 1", 0x1354c0, 0x135520 },
    { L"Rock'N Roll Hell Extra 2 Flash 1", 0x1358c0, 0x1358e0 },
    { L"Rock'N Roll Hell Extra 2 Flash 2", 0x1358e0, 0x135900 },
    { L"Rock'N Roll Hell Extra 2 Flash 3", 0x135900, 0x135920 },
    { L"Rock'N Roll Hell Extra 2 Flash 4", 0x135920, 0x135940 },
    { L"Rock'N Roll Hell Extra 2 Flash 5", 0x135940, 0x135960 },
    { L"Rock'N Roll Hell Extra 2 Flash 6", 0x135960, 0x135980 },
    { L"Rock'N Roll Hell Extra 2 Flash 7", 0x135980, 0x1359a0 },
    { L"Rock'N Roll Hell Extra 2 Flash 8", 0x1359a0, 0x1359c0 },
    { L"Rock'N Roll Hell Extra 2 Flash 9", 0x1359c0, 0x1359e0 },
    { L"Rock'N Roll Hell Extra 2 Flash 10", 0x1359e0, 0x135a00 },
    { L"Rock'N Roll Hell Extra 2 Flash 11", 0x135a00, 0x135a20 },
    { L"Rock'N Roll Hell Extra 2 Flash 12", 0x135a20, 0x135a40 },
    { L"Rock'N Roll Hell Extra 3 Flash 1", 0x135ac0, 0x135ae0 },
    { L"Rock'N Roll Hell Extra 3 Flash 2", 0x135ae0, 0x135b00 },
    { L"Rock'N Roll Hell Extra 3 Flash 3", 0x135b00, 0x135b20 },
    { L"Rock'N Roll Hell Extra 3 Flash 4", 0x135b20, 0x135b40 },
    { L"Rock'N Roll Hell Extra 3 Flash 5", 0x135b40, 0x135b60 },
    { L"Rock'N Roll Hell Extra 3 Flash 6", 0x135b60, 0x135b80 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_HEADQUARTERS_PALETTES[] =
{
    { L"Underground Headquarters 1/2", 0x194be2, 0x194de2 },
    { L"Underground Headquarters 2/2", 0x194de2, 0x194e02 },
    { L"Underground Headquarters Extra 1", 0x1392c0, 0x139300 },
    { L"Underground Headquarters Extra 2 Flash 1", 0x1394c0, 0x1394e0 },
    { L"Underground Headquarters Extra 2 Flash 2", 0x1396c0, 0x1396e0 },
    { L"Underground Headquarters Extra 3 Flash 1", 0x1398c0, 0x139900 },
    { L"Underground Headquarters Extra 3 Flash 2", 0x139ac0, 0x139b00 },
    { L"Underground Headquarters Extra 4 Flash 1", 0x139cc0, 0x139da0 },
    { L"Underground Headquarters Extra 4 Flash 2", 0x139ec0, 0x139fa0 },
    { L"Underground Headquarters Extra 5 Flash 1", 0x13a0c0, 0x13a0e0 },
    { L"Underground Headquarters Extra 5 Flash 2", 0x13a2c0, 0x13a2e0 },
    { L"Underground Headquarters Extra 5 Flash 3", 0x13a4c0, 0x13a4e0 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_COURTYARD_PALETTES[] =
{
    { L"Belnar Academy Courtyard 1/2", 0x193be2, 0x193de2 },
    { L"Belnar Academy Courtyard 2/2", 0x193de2, 0x193fe2 },
    { L"Belnar Academy Courtyard Extra", 0x136ac0, 0x136b00 },
};

const sGame_PaletteDataset Gowcaizer_A_STAGES_POWERROOM_PALETTES[] =
{
    { L"Belnar Academy Power Room 1/2", 0x1943e2, 0x1945e2 },
    { L"Belnar Academy Power Room 2/2", 0x1945e2, 0x1947e2 },
    { L"Belnar Academy Power Room Extra 1 Flash 1", 0x138ac0, 0x138ae0 },
    { L"Belnar Academy Power Room Extra 1 Flash 2", 0x138ae0, 0x138b00 },
    { L"Belnar Academy Power Room Extra 1 Flash 3", 0x138b00, 0x138b20 },
    { L"Belnar Academy Power Room Extra 1 Flash 4", 0x138b20, 0x138b40 },
    { L"Belnar Academy Power Room Extra 2 Flash 1", 0x138b60, 0x138b80 },
    { L"Belnar Academy Power Room Extra 2 Flash 2", 0x138b80, 0x138ba0 },
    { L"Belnar Academy Power Room Extra 2 Flash 3", 0x138ba0, 0x138bc0 },
    { L"Belnar Academy Power Room Extra 2 Flash 4", 0x138bc0, 0x138be0 },
};

// BONUS

const sGame_PaletteDataset Gowcaizer_A_BONUS_Intro_PALETTES[] =
{
    { L"Intro Logo 1/3", 0x19B9E2, 0x19Bbe2 },
    { L"Intro Logo 2/3", 0x19BbE2, 0x19Bde2 },
    { L"Intro Logo 3/3", 0x19BdE2, 0x19BEC2 },
    { L"Intro Panel 1/3", 0x19BEC2, 0x19BEe2 },
    { L"Intro Panel 2/3", 0x19BF02, 0x19BF22 },
    { L"Intro Panel 3/3", 0x19BF22, 0x19BF82 },
    { L"Intro Logo Background 1", 0x19c4c2, 0x19c4e2 },
    { L"Intro Logo Background 2", 0x19c522, 0x19c542 },
    { L"Karin vs Shaia Intro", 0x19c3e2, 0x19c442 },
    { L"Captain Atlantis vs Karin Intro", 0x19c442, 0x19c482 },
    { L"Ball Boy Intro", 0x19c482, 0x19c4c2 },
    { L"HellStinger Intro", 0x19c042, 0x19c0a2 },
    { L"Gowcaizer Intro", 0x19c0a2, 0x19c102 },
    { L"HellStinger vs Gowcaizer Intro", 0x19c102, 0x19c162 },
    { L"Punch Intro Flash", 0x19bfe2, 0x19c002 },
    { L"Full Gowcaizer Intro", 0x19c1e2, 0x19c3e2 },
    { L"Title Screen Background", 0x19c182, 0x19c1a2 },
    { L"Title Screen Logo", 0x19BFA2, 0x19BFc2 },
};

const sGame_PaletteDataset Gowcaizer_A_BONUS_SelectScreen_PALETTES[] =
{
    { L"Select Screen", 0x1969e2, 0x196be2 },
    { L"Tutorial Buttons", 0x196CE2, 0x196Dc2 },
    { L"VS Background", 0x196c42, 0x196c62 },
    { L"Fight Text", 0x196be2, 0x196c02 },
    { L"Attack Copy System Movelist", 0x196c02, 0x196c22 },

    { L"Gowcaizer Portrait Faded", 0x1990e2, 0x1991c2 },
    { L"Captain Atlantis Portrait Faded", 0x1991e2, 0x1992e2 },
    { L"Karin Portrait Faded", 0x1993e2, 0x1994e2 },
    { L"Fudomaru Portrait Faded", 0x1992e2, 0x1993e2 },
    { L"Marion Portrait Faded", 0x1999e2, 0x199ae2 },
    { L"Shaia Portrait Faded", 0x1998e2, 0x1999e2 },
    { L"Shen Long Portrait Faded", 0x1994e2, 0x199522 },
    { L"Kyosuke Portrait Faded", 0x1996e2, 0x1997c2 },
    { L"HellStinger Portrait Faded", 0x198fe2, 0x1990e2 },
    { L"Brider Portrait Faded", 0x1997e2, 0x1998e2 },
};

const sGame_PaletteDataset Gowcaizer_A_BONUS_Effects_PALETTES[] =
{
    { L"Effects 01", 0x1915e2, 0x191602 },
    { L"Effects 02", 0x191602, 0x191622 },
    { L"Effects 03", 0x191622, 0x191642 },
    { L"Effects 04", 0x191642, 0x191662 },
    { L"Effects 05", 0x191662, 0x191682 },
    { L"Effects 06", 0x191682, 0x1916a2 },
    { L"Effects 07", 0x1916a2, 0x1916c2 },
    { L"Effects 08", 0x1916c2, 0x1916e2 },
    { L"Effects 09", 0x1916e2, 0x191702 },
    { L"Effects 10", 0x191702, 0x191722 },
    { L"Effects 11", 0x191722, 0x191742 },
    { L"Effects 12", 0x191742, 0x191762 },
    { L"Effects 13", 0x191762, 0x191782 },
    { L"Effects 14", 0x191782, 0x1917a2 },
    { L"Effects 15", 0x1917a2, 0x1917c2 },
    { L"Effects 16", 0x1917c2, 0x1917e2 },
};

const sDescTreeNode Gowcaizer_A_GOWCAIZER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_GOWCAIZER_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_GOWCAIZER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_GOWCAIZER_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_GOWCAIZER_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_ATLANTIS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_ATLANTIS_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_ATLANTIS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_ATLANTIS_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_ATLANTIS_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_KARIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_KARIN_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_KARIN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_KARIN_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_KARIN_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_FUDOMARU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_FUDOMARU_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_FUDOMARU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_FUDOMARU_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_FUDOMARU_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_MARION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_MARION_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_MARION_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_MARION_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_MARION_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_SHAIA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_SHAIA_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_SHAIA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_SHAIA_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_SHAIA_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_SHENLONG_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_SHENLONG_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_SHENLONG_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_SHENLONG_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_SHENLONG_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_KYOSUKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_KYOSUKE_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_KYOSUKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_KYOSUKE_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_KYOSUKE_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_HELLSTINGER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_BRIDER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BRIDER_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_BRIDER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BRIDER_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_BRIDER_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_PLATONIC_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_PLATONIC_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_PLATONIC_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_PLATONIC_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_PLATONIC_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_OHGA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_OHGA_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_OHGA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_OHGA_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_OHGA_PALETTES_P2) },
};

const sDescTreeNode Gowcaizer_A_STAGES_COLLECTION[] =
{
    { L"Urban Apocalypse", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_Urban_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_Urban_PALETTES) },
    { L"Billboard Rooftops", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_BILLBOARD_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_BILLBOARD_PALETTES) },
    { L"Great Wall of China", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_GREATWALL_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_GREATWALL_PALETTES) },
    { L"Ninja Shrine", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_SHRINE_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_SHRINE_PALETTES) },
    { L"Robot Laboratory", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_LAB_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_LAB_PALETTES) },
    { L"Shaia on Stage", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_SHAIA_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_SHAIA_PALETTES) },
    { L"Downtown Tokyo", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_TOKYO_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_TOKYO_PALETTES) },
    { L"Abandoned Cathedral", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_CATHEDRAL_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_CATHEDRAL_PALETTES) },
    { L"Rock'N Roll Hell", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_ROCKNROLL_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_ROCKNROLL_PALETTES) },
    { L"Underground Headquarters", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_HEADQUARTERS_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_HEADQUARTERS_PALETTES) },
    { L"Belnar Academy Courtyard", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_COURTYARD_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_COURTYARD_PALETTES) },
    { L"Belnar Academy Power Room", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_POWERROOM_PALETTES, ARRAYSIZE(Gowcaizer_A_STAGES_POWERROOM_PALETTES) },
};

const sDescTreeNode Gowcaizer_A_BONUS_COLLECTION[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BONUS_Intro_PALETTES, ARRAYSIZE(Gowcaizer_A_BONUS_Intro_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BONUS_SelectScreen_PALETTES, ARRAYSIZE(Gowcaizer_A_BONUS_SelectScreen_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BONUS_Effects_PALETTES, ARRAYSIZE(Gowcaizer_A_BONUS_Effects_PALETTES) },
};

const sDescTreeNode Gowcaizer_A_UNITS[] =
{

#ifdef NOsdfsdfsdf
0x00 = "Gowcaizer" Isato Kaiza
0x01 = "Captain Atlantis" Randy Riggs
0x02 = "Karin" Son Hualing
0x03 = "Fudomaru" Ranpo Fudoh
0x04 = "Marion" DES / CO - P IV Marionette
0x05 = "Shaia" Shaia Hishizaki
0x06 = "Shen Long" Goichiro Kaiza
0x07 = Kyosuke Shigure
0x08 = "HellStinger" Kash Gyustan
0x09 = "Brider" Kazuki Tachibana
0x0a = "Platonic Twins" Ryo Asahina & Suzu Asahina
0x0b = "Ohga" Shizuru Osaki
0x0c = STAGES
0x0d = BONUS
#endif

    { L"Gowcaizer", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_GOWCAIZER_COLLECTION, ARRAYSIZE(Gowcaizer_A_GOWCAIZER_COLLECTION) },
    { L"Captain Atlantis", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_ATLANTIS_COLLECTION, ARRAYSIZE(Gowcaizer_A_ATLANTIS_COLLECTION) },
    { L"Karin", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_KARIN_COLLECTION, ARRAYSIZE(Gowcaizer_A_KARIN_COLLECTION) },
    { L"Fudomaru", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_FUDOMARU_COLLECTION, ARRAYSIZE(Gowcaizer_A_FUDOMARU_COLLECTION) },
    { L"Marion", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_MARION_COLLECTION, ARRAYSIZE(Gowcaizer_A_MARION_COLLECTION) },
    { L"Shaia", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_SHAIA_COLLECTION, ARRAYSIZE(Gowcaizer_A_SHAIA_COLLECTION) },
    { L"Shen Long", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_SHENLONG_COLLECTION, ARRAYSIZE(Gowcaizer_A_SHENLONG_COLLECTION) },
    { L"Kyosuke Shigure", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_KYOSUKE_COLLECTION, ARRAYSIZE(Gowcaizer_A_KYOSUKE_COLLECTION) },
        { L"Hellstinger", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_COLLECTION, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_COLLECTION) },
    { L"Brider", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BRIDER_COLLECTION, ARRAYSIZE(Gowcaizer_A_BRIDER_COLLECTION) },
    { L"Platonic Twins", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_PLATONIC_COLLECTION, ARRAYSIZE(Gowcaizer_A_PLATONIC_COLLECTION) },
    { L"Ohga", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_OHGA_COLLECTION, ARRAYSIZE(Gowcaizer_A_OHGA_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_STAGES_COLLECTION, ARRAYSIZE(Gowcaizer_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_BONUS_COLLECTION, ARRAYSIZE(Gowcaizer_A_BONUS_COLLECTION) },
};

constexpr auto Gowcaizer_A_NUMUNIT = ARRAYSIZE(Gowcaizer_A_UNITS);

#define Gowcaizer_A_EXTRALOC Gowcaizer_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef Gowcaizer_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
