#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to VENTURE_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<UINT16> VENTURE_A_IMGIDS_USED =
{
    indexJojos51Jotaro,
    indexJojos51Kakyo,
    indexJojos51Avdol,
    indexJojos51Pol,
    indexJojos51Joseph,
    indexJojos51Iggy,
    indexJojos51Alessi,
    indexJojos51Chaka,
    indexJojos51Devo,
    indexJojos51Midler,
    indexJojos51Dio,    // 0x0a
    indexJojos51SDio,
    indexJojos51YSeph,
    indexJojos51Hol,
    indexJojos51VIce,
    indexJojos51NewKakyo,
    indexJojos51Anubis, // 0x10
    indexJojos51Petshop,
    indexJojos51Mariah,
    indexJojos51HolBoingo,
    indexJojos51RSoul,
    indexJojos51Khan,
    indexJojos51NDoul,
    indexJojos51BIce,
    indexJojos51Death13, // 0x18

    indexJojos50HUDPortraits,

    indexVentureSprites_Kakyo,  // 0x20
    indexVentureSprites_Iggy,   // 0x21
    indexVentureSprites_YSeph,  // 0x22
};

const sGame_PaletteDataset VENTURE_A_JOTARO_P1[] =
{
    { L"Jotaro & Star Platinum P1", 0x3b0000, 0x3b0080, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker P1", 0x3b0980, 0x3b09c0, indexJojos51Jotaro, 1 },
    { L"Star Platinum Charging Flash P1", 0x3b0480, 0x3b0500, indexJojos51Jotaro, 2 },
    { L"Jotaro Burning P1 1/2 ", 0x3b0080, 0x3b0100, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning P1 2/2 ", 0x3b0100, 0x3b0180, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap P1 1/2 ", 0x3b0380, 0x3b0400, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap P1 2/2 ", 0x3b0400, 0x3b0480, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Child Mode P1", 0x3b0680, 0x3b0700, indexJojos51Jotaro, 0x0 },
    { L"Jotaro Select/Win P1", 0x3f2d80, 0x3f2e00, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Star Platinum Select/Win P1", 0x3f2e00, 0x3f2e80, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Vs/Super P1", 0x3c9800, 0x3c9880, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger P1", 0x3c8800, 0x3c8880, indexJojos51Jotaro, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_JOTARO_P2[] =
{
    { L"Jotaro & Star Platinum P2", 0x3b0c80, 0x3b0d00, indexJojos51Jotaro, indexJojos51Character_Main },
    { L"Star Breaker P2", 0x3b1600, 0x3b1640, indexJojos51Jotaro, 1 },
    { L"Star Platinum Charging Flash P2", 0x3b1100, 0x3b1180, indexJojos51Jotaro, 2 },
    { L"Jotaro Burning P2 1/2 ", 0x3b0d00, 0x3b0d80, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Burning P2 2/2", 0x3b0d80, 0x3b0e00, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap P2 1/2", 0x3b1000, 0x3b1080, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Tech/Zap P2 2/2", 0x3b1080, 0x3b1100, indexJojos51Jotaro, indexJojos51Character_BurnZap },
    { L"Jotaro Child Mode P2", 0x3b1300, 0x3b1380, indexJojos51Jotaro, 0x0 },
    { L"Jotaro Select/Win P2", 0x3f3b80, 0x3f3c00, indexJojos51Jotaro, indexJojos51Character_SelectWin1, &pairNext },
    { L"Star Platinum Select/Win P2", 0x3f3c00, 0x3f3c80, indexJojos51Jotaro, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Jotaro Vs/Super P2", 0x3c9e80, 0x3c9f00, indexJojos51Jotaro, indexJojos51Character_VsSuper },
    { L"Jotaro Challenger P2", 0x3c8e00, 0x3c8e80, indexJojos51Jotaro, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_JOTARO[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOTARO_P1, ARRAYSIZE(VENTURE_A_JOTARO_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOTARO_P2, ARRAYSIZE(VENTURE_A_JOTARO_P2) },
};

const sGame_PaletteDataset VENTURE_A_KAKYOIN_P1[] =
{
    { L"Kakyoin & Hierophant Green P1", 0x3b1900, 0x3b1980, indexVentureSprites_Kakyo, 0x00 },

    { L"Kakyoin Burning P1 1/2", 0x3b1980, 0x3b1a00, indexVentureSprites_Kakyo, 0x0 },
    { L"Kakyoin Burning P1 2/2", 0x3b1a00, 0x3b1a80, indexVentureSprites_Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap P1 1/2", 0x3b1c80, 0x3b1d00, indexVentureSprites_Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap P1 2/2", 0x3b1d00, 0x3b1d80, indexVentureSprites_Kakyo, 0x0 },
    { L"Hierophant Remote Mode P1", 0x3b1d80, 0x3b1e00 },
    { L"Hierophant Raging Demon P1", 0x3b2080, 0x3b2100 },

    { L"Kakyoin Select/Win P1", 0x3f2e80, 0x3f2F00, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hierophant Green Select/Win P1", 0x3f2F00, 0x3f2F80, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Vs/Super P1", 0x3c9880, 0x3c9900, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger P1", 0x3c8880, 0x3c8900, indexJojos51Kakyo, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_KAKYOIN_P2[] = 
{
    { L"Kakyoin & Hierophant Green P2", 0x3b2580, 0x3b2600, indexVentureSprites_Kakyo, 0x00 },

    { L"Kakyoin Burning P2 1/2", 0x3b1980 + 0xc80, 0x3b1a00 + 0xc80, indexVentureSprites_Kakyo, 0x0 },
    { L"Kakyoin Burning P2 2/2", 0x3b1a00 + 0xc80, 0x3b1a80 + 0xc80, indexVentureSprites_Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap P2 1/2", 0x3b1c80 + 0xc80, 0x3b1d00 + 0xc80, indexVentureSprites_Kakyo, 0x0 },
    { L"Kakyoin Tech/Zap P2 2/2", 0x3b1d00 + 0xc80, 0x3b1d80 + 0xc80, indexVentureSprites_Kakyo, 0x0 },
    { L"Hierophant Remote Mode P2", 0x3b1d80 + 0xc80, 0x3b1e00 + 0xc80 },
    { L"Hierophant Raging Demon P2", 0x3b2080 + 0xc80, 0x3b2100 + 0xc80 },

    { L"Kakyoin Select/Win P2", 0x3f3c80, 0x3f3d00, indexJojos51Kakyo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hierophant Green Select/Win P2", 0x3f3d00, 0x3f3d80, indexJojos51Kakyo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Kakyoin Vs/Super P2", 0x3c9f00, 0x3c9f80, indexJojos51Kakyo, indexJojos51Character_VsSuper },
    { L"Kakyoin Challenger P2", 0x3c8e80, 0x3c8f00, indexJojos51Kakyo, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_KAKYOIN[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_KAKYOIN_P1, ARRAYSIZE(VENTURE_A_KAKYOIN_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_KAKYOIN_P2, ARRAYSIZE(VENTURE_A_KAKYOIN_P2) },
};

const sGame_PaletteDataset VENTURE_A_AVDOL_P1[] = 
{
    { L"Avdol & Magician's Red P1", 0x3b3200, 0x3b3280, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire P1", 0x3b3a80, 0x3b3ac0, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol Select/Win P1", 0x3f2F80, 0x3f3000, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Magician's Red Select/Win P1", 0x3f3000, 0x3f3080, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Vs/Super P1", 0x3c9900, 0x3c9980, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger P1", 0x3c8900, 0x3c8980, indexJojos51Avdol, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_AVDOL_P2[] = 
{
    { L"Avdol & Magician's Red P2", 0x3B3E80, 0x3B3F00, indexJojos51Avdol, indexJojos51Character_Main, &pairNext },
    { L"Avdol Fire P2", 0x3b4700, 0x3b4740, indexJojos51Avdol, 1, &pairPrevious },
    { L"Avdol Select/Win P2", 0x3f3d80, 0x3f3e00, indexJojos51Avdol, indexJojos51Character_SelectWin1, &pairNext },
    { L"Magician's Red Select/Win P2", 0x3f3e00, 0x3f3e80, indexJojos51Avdol, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Avdol Vs/Super P2", 0x3c9f80, 0x3ca000, indexJojos51Avdol, indexJojos51Character_VsSuper },
    { L"Avdol Challenger P2", 0x3c8f00, 0x3c8f80, indexJojos51Avdol, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_AVDOL[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_AVDOL_P1, ARRAYSIZE(VENTURE_A_AVDOL_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_AVDOL_P2, ARRAYSIZE(VENTURE_A_AVDOL_P2) },
};

const sGame_PaletteDataset VENTURE_A_POL_P1[] =
{
    { L"Polnareff & Silver Chariot P1", 0x3B4B00, 0x3B4B80, indexJojos51Pol, 0x00 },
    { L"Polnareff Select/Win P1", 0x3f3080, 0x3f3100, indexJojos51Pol, 0x04, &pairNext },
    { L"Silver Chariot Select/Win P1", 0x3f3100, 0x3f3180, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Vs/Super P1", 0x3c9980, 0x3c9a00, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger P1", 0x3c8980, 0x3c8a00, indexJojos51Pol, 0x03 },
};

const sGame_PaletteDataset VENTURE_A_POL_P2[] =
{
    { L"Polnareff & Silver Chariot P2", 0x3B5780, 0x3B5800, indexJojos51Pol, 0x00 },
    { L"Polnareff Select/Win P2", 0x3f3e80, 0x3f3f00, indexJojos51Pol, 0x04, &pairNext },
    { L"Silver Chariot Select/Win P2", 0x3f3f00, 0x3f3f80, indexJojos51Pol, 0x05, &pairPrevious },
    { L"Polnareff Vs/Super P2", 0x3ca000, 0x3ca080, indexJojos51Pol, 0x02 },
    { L"Polnareff Challenger P2", 0x3c8f80, 0x3c9000, indexJojos51Pol, 0x03 },
};

const sDescTreeNode VENTURE_A_COL_POL[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_POL_P1, ARRAYSIZE(VENTURE_A_POL_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_POL_P2, ARRAYSIZE(VENTURE_A_POL_P2) },
};

const sGame_PaletteDataset VENTURE_A_JOSEPH_P1[] =
{
    { L"Joseph & Hermit Purple P1", 0x3B6400, 0x3B6480, indexJojos51Joseph },
    { L"Joseph Select/Win P1", 0x3f3180, 0x3f3200, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hermit Purple Select/Win P1", 0x3f3200, 0x3f3280, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Vs/Super P1", 0x3c9a00, 0x3c9a80, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger P1", 0x3c8a00, 0x3c8a80, indexJojos51Joseph, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_JOSEPH_P2[] =
{
    { L"Joseph & Hermit Purple P2", 0x3B7080, 0x3B7100, indexJojos51Joseph },
    { L"Joseph Select/Win P2", 0x3f3f80, 0x3f4000, indexJojos51Joseph, indexJojos51Character_SelectWin1, &pairNext },
    { L"Hermit Purple Select/Win P2", 0x3f4000, 0x3f4080, indexJojos51Joseph, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Joseph Vs/Super P2", 0x3ca080, 0x3ca100, indexJojos51Joseph, indexJojos51Character_VsSuper },
    { L"Joseph Challenger P2", 0x3c9000, 0x3c9080, indexJojos51Joseph, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_JOSEPH[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOSEPH_P1, ARRAYSIZE(VENTURE_A_JOSEPH_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_JOSEPH_P2, ARRAYSIZE(VENTURE_A_JOSEPH_P2) },
};

const sGame_PaletteDataset VENTURE_A_IGGY_P1[] =
{
    { L"Iggy & The Fool P1", 0x3B7D00, 0x3B7D80, indexVentureSprites_Iggy, 0x00 },
    { L"Iggy Raging Demon Trail P1 1/3", 0x3b8500, 0x3b8580 },
    { L"Iggy Raging Demon Trail P1 2/3", 0x3b8580, 0x3b8600 },
    { L"Iggy Raging Demon Trail P1 3/3", 0x3b8600, 0x3b8680 },
    { L"Iggy Burn P1 1/2", 0x3b7d80, 0x3b7e00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burn P1 2/2", 0x3b7e00, 0x3b7e80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap P1 1/2", 0x3b8080, 0x3b8100, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap P1 2/2", 0x3b8100, 0x3b8180, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy GC/Child Mode P1", 0x3b8380, 0x3b8400 },
        { L"Iggy Select/Win P1", 0x3f3280, 0x3f3300, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
        { L"The Fool Select/Win P1", 0x3f3300, 0x3f3380, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Vs/Super P1", 0x3c9a80, 0x3c9b00, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger", 0x3c8a80, 0x3c8b00, indexJojos51Iggy, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_IGGY_P2[] =
{
    { L"Iggy & The Fool P2", 0x3B8980, 0x3B8A00, indexVentureSprites_Iggy, 0x00 },
    { L"Iggy Raging Demon Trail P2 1/3", 0x3b9180, 0x3b9200 },
    { L"Iggy Raging Demon Trail P2 2/3", 0x3b9200, 0x3b9280 },
    { L"Iggy Raging Demon Trail P2 3/3", 0x3b9280, 0x3b9300 },
    { L"Iggy Burn P2 1/2", 0x3b8a00, 0x3b8a80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Burn P2 2/2", 0x3b8a80, 0x3b8b00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap P2 1/2", 0x3b8d00, 0x3b8d80, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy Tech/Zap P2 2/2", 0x3b8d80, 0x3b8e00, indexJojos51Iggy, indexJojos51Character_BurnZap },
    { L"Iggy GC/Child Mode P2", 0x3b9000, 0x3b9080 },
        { L"Iggy Select/Win P2", 0x3f4080, 0x3f4100, indexJojos51Iggy, indexJojos51Character_SelectWin1, &pairNext },
        { L"The Fool Select/Win P2", 0x3f4100, 0x3f4180, indexJojos51Iggy, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Iggy Vs/Super P2", 0x3ca100, 0x3ca180, indexJojos51Iggy, indexJojos51Character_VsSuper },
    { L"Iggy Challenger P2", 0x3c9080, 0x3c9100, indexJojos51Iggy, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_IGGY[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_IGGY_P1, ARRAYSIZE(VENTURE_A_IGGY_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_IGGY_P2, ARRAYSIZE(VENTURE_A_IGGY_P2) },
};

const sGame_PaletteDataset VENTURE_A_ALESSI_P1[] =
{
    { L"Alessi & Sethan P1", 0x3B9600, 0x3B9680, indexJojos51Alessi },
    { L"Alessi Select/Win P1", 0x3f3380, 0x3f3400, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Sethan Select/Win P1", 0x3f3400, 0x3f3480, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Vs/Super P1", 0x3c9b00, 0x3c9b80, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger P1", 0x3c8b00, 0x3c8b80, indexJojos51Alessi, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_ALESSI_P2[] =
{
    { L"Alessi & Sethan P2", 0x3BA280, 0x3BA300, indexJojos51Alessi },
    { L"Alessi Select/Win P2", 0x3f4180, 0x3f4200, indexJojos51Alessi, indexJojos51Character_SelectWin1, &pairNext },
    { L"Sethan Select/Win P2", 0x3f4200, 0x3f4280, indexJojos51Alessi, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Alessi Vs/Super P2", 0x3ca180, 0x3ca200, indexJojos51Alessi, indexJojos51Character_VsSuper },
    { L"Alessi Challenger P2", 0x3c9100, 0x3c9180, indexJojos51Alessi, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_ALESSI[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_ALESSI_P1, ARRAYSIZE(VENTURE_A_ALESSI_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_ALESSI_P2, ARRAYSIZE(VENTURE_A_ALESSI_P2) },
};

const sGame_PaletteDataset VENTURE_A_CHAKA_P1[] =
{
    { L"Chaka & Anubis P1", 0x3BAF00, 0x3BAF80, indexJojos51Chaka },
    { L"Chaka Select/Win P1", 0x3f3480, 0x3f3500, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Vs/Super P1", 0x3c9b80, 0x3c9c00, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger P1", 0x3c8b80, 0x3c8c00, indexJojos51Chaka, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_CHAKA_P2[] =
{
    { L"Chaka & Anubis P2", 0x3BBB80, 0x3BBC00, indexJojos51Chaka },
    { L"Chaka Select/Win P2", 0x3f4280, 0x3f4300, indexJojos51Chaka, indexJojos51Character_SelectWin1 },
    { L"Chaka Vs/Super P2", 0x3ca200, 0x3ca280, indexJojos51Chaka, indexJojos51Character_VsSuper },
    { L"Chaka Challenger P2", 0x3c9180, 0x3c9200, indexJojos51Chaka, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_CHAKA[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_CHAKA_P1, ARRAYSIZE(VENTURE_A_CHAKA_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_CHAKA_P2, ARRAYSIZE(VENTURE_A_CHAKA_P2) },
};

const sGame_PaletteDataset VENTURE_A_DEVO_P1[] =
{
    { L"Devo & Ebony Devil P1", 0x3bc800, 0x3bc880, indexJojos51Devo },
    { L"Devo Select/Win P1", 0x3f3500, 0x3f3580, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Ebony Devil Select/Win P1", 0x3f3580, 0x3f3600, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo Vs/Super P1", 0x3c9c00, 0x3c9c80, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger P1", 0x3c8c00, 0x3c8c80, indexJojos51Devo, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_DEVO_P2[] =
{
    { L"Devo & Ebony Devil P2", 0x3BD480, 0x3BD500, indexJojos51Devo },
    { L"Devo Select/Win P2", 0x3f4300, 0x3f4380, indexJojos51Devo, indexJojos51Character_SelectWin1, &pairNext },
    { L"Ebony Devil Select/Win P2", 0x3f4380, 0x3f4400, indexJojos51Devo, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Devo Vs/Super P2", 0x3ca280, 0x3ca300, indexJojos51Devo, indexJojos51Character_VsSuper },
    { L"Devo Challenger P2", 0x3c9200, 0x3c9280, indexJojos51Devo, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_DEVO[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_DEVO_P1, ARRAYSIZE(VENTURE_A_DEVO_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_DEVO_P2, ARRAYSIZE(VENTURE_A_DEVO_P2) },
};

const sGame_PaletteDataset VENTURE_A_MIDLER_P1[] =
{
    { L"Midler & High Priestess P1", 0x3bfa00, 0x3bfa80, indexJojos51Midler },
    { L"Midler Select/Win P1", 0x3f3700, 0x3f3780, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"High Priestess Select/Win P1", 0x3f3780, 0x3f3800, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler Vs/Super P1", 0x3c9d00, 0x3c9d80, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger P1", 0x3c8d00, 0x3c8d80, indexJojos51Midler, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_MIDLER_P2[] =
{
    { L"Midler & High Priestess P2", 0x3C0680, 0x3C0700, indexJojos51Midler },
    { L"Midler Select/Win P2", 0x3f4500, 0x3f4580, indexJojos51Midler, indexJojos51Character_SelectWin1, &pairNext },
    { L"High Priestess Select/Win P2", 0x3f4580, 0x3f4600, indexJojos51Midler, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"Midler Vs/Super P2", 0x3ca380, 0x3ca400, indexJojos51Midler, indexJojos51Character_VsSuper },
    { L"Midler Challenger P2", 0x3c9300, 0x3c9380, indexJojos51Midler, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_MIDLER[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_MIDLER_P1, ARRAYSIZE(VENTURE_A_MIDLER_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_MIDLER_P2, ARRAYSIZE(VENTURE_A_MIDLER_P2) },
};

const sGame_PaletteDataset VENTURE_A_DIO_P1[] =
{
    { L"DIO & The World P1", 0x3c1300, 0x3c1380, indexJojos51Dio },
    { L"DIO Select/Win P1", 0x3f3a00, 0x3f3a80, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"The World Select/Win P1", 0x3f3b00, 0x3f3b80, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO High Score Select/Win P1", 0x3f3a80, 0x3f3b00 },
    { L"DIO VS/Super P1", 0x3c9e00, 0x3c9e80, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger P1", 0x3c8d80, 0x3c8e00, indexJojos51Dio, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_DIO_P2[] =
{
    { L"DIO & The World P2", 0x3C1F80, 0x3C2000, indexJojos51Dio },
    { L"DIO Select/Win P2", 0x3f4780, 0x3f4800, indexJojos51Dio, indexJojos51Character_SelectWin1, &pairNext },
    { L"The World Select/Win P2", 0x3f4880, 0x3f4900, indexJojos51Dio, indexJojos51Character_SelectWin2, &pairPrevious },
    { L"DIO High Score Select/Win P2", 0x3f4800, 0x3f4880 },
    { L"DIO VS/Super P2", 0x3ca480, 0x3ca500, indexJojos51Dio, indexJojos51Character_VsSuper },
    { L"DIO Challenger P2", 0x3c9380, 0x3c9400, indexJojos51Dio, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_DIO[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_DIO_P1, ARRAYSIZE(VENTURE_A_DIO_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_DIO_P2, ARRAYSIZE(VENTURE_A_DIO_P2) },
};

const sGame_PaletteDataset VENTURE_A_SDIO_P1[] =
{
    { L"Shadow Dio P1", 0x3C4500, 0x3C4580, indexJojos51SDio },
    { L"Shadow Dio Select/Win P1", 0x3f4a00, 0x3f4a80, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow Dio Vs/Super P1", 0x3ca600, 0x3ca680, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow Dio Challenger P1", 0x3ca800, 0x3ca880, indexJojos51SDio, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_SDIO_P2[] =
{
    { L"Shadow Dio P2", 0x3c5180, 0x3c5200, indexJojos51SDio },
    { L"Shadow Dio Select/Win P2", 0x3f4a80, 0x3f4b00, indexJojos51SDio, indexJojos51Character_SelectWin1 },
    { L"Shadow Dio Vs/Super P2", 0x3ca680, 0x3ca700, indexJojos51SDio, indexJojos51Character_VsSuper },
    { L"Shadow Dio Challenger P2", 0x3ca880, 0x3ca900, indexJojos51SDio, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_SDIO[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_SDIO_P1, ARRAYSIZE(VENTURE_A_SDIO_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_SDIO_P2, ARRAYSIZE(VENTURE_A_SDIO_P2) },
};

const sGame_PaletteDataset VENTURE_A_YJOSEPH_P1[] =
{
    { L"Young Joseph P1", 0x3c5e00, 0x3c5e80, indexVentureSprites_YSeph, 0x00 },
    { L"Young Joseph Select/Win P1", 0x3f4900, 0x3f4980, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Young Joseph Vs/Super P1", 0x3ca500, 0x3ca580, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger P1", 0x3ca700, 0x3ca780, indexJojos51YSeph, indexJojos51Character_Challenger },
};

const sGame_PaletteDataset VENTURE_A_YJOSEPH_P2[] =
{
    { L"Young Joseph P2", 0x3C6A80, 0x3C6B00, indexVentureSprites_YSeph, 0x00 },
    { L"Young Joseph Select/Win P2", 0x3f4980, 0x3f4a00, indexJojos51YSeph, indexJojos51Character_SelectWin1 },
    { L"Young Joseph Vs/Super P2", 0x3ca580, 0x3ca600, indexJojos51YSeph, indexJojos51Character_VsSuper },
    { L"Young Joseph Challenger P2", 0x3ca780, 0x3ca800, indexJojos51YSeph, indexJojos51Character_Challenger },
};

const sDescTreeNode VENTURE_A_COL_YJOSEPH[] =
{
	{ L"P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_YJOSEPH_P1, ARRAYSIZE(VENTURE_A_YJOSEPH_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_YJOSEPH_P2, ARRAYSIZE(VENTURE_A_YJOSEPH_P2) },
};

const sGame_PaletteDataset VENTURE_A_BICE_P1[] =
{
    { L"Vanilla Ice & Cream P1 (Boss)", 0x3c2c00, 0x3c2c80, indexJojos51BIce },
    { L"Vanilla Ice Select/Win P1 (Boss)", 0x3f3800, 0x3f3880 },
    { L"Vanilla Ice Select/Win???? P1 (Boss)", 0x3f3880, 0x3f3900 },
    { L"Cream Select/Win P1 (Boss)", 0x3f3900, 0x3f3980, indexJojos51VIce, indexJojos51Character_SelectWin2 },
    { L"Vanilla Ice VS/Super P1 (Boss)", 0x3c9d80, 0x3c9e00, indexJojos51VIce, indexJojos51Character_VsSuper },
};

const sDescTreeNode VENTURE_A_COL_BICE[] =
{
    // Keep this descriptor: we want to avoid P1/P2 multipreview output for this mispaired character
	{ L"Vanilla Ice (Boss) P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_BICE_P1, ARRAYSIZE(VENTURE_A_BICE_P1) },
};

const sGame_PaletteDataset VENTURE_A_NDOUL_P1[] =
{
    { L"Ndoul P1 (Boss)", 0x3be100, 0x3be180, indexJojos51NDoul },
    { L"Ndoul Select/Win P1 (Boss)",    0x3f3600, 0x3f3680, indexJojos51NDoul, 0x05, &pairNext },
    { L"Geb Select/Win P1 (Boss)",      0x3f3680, 0x3f3700, indexJojos51NDoul, 0x06, &pairPrevious },
    { L"Ndoul VS/Super P1 (Boss)",      0x3c9c80, 0x3c9d00, indexJojos51NDoul, 0x03 },
    { L"Ndoul Challenger P1 (Boss)",    0x3c8c80, 0x3c8d00, indexJojos51NDoul, 0x04 },
};

const sGame_PaletteDataset VENTURE_A_NDOUL_P2[] =
{
	{ L"Ndoul P2", 0x3beD80, 0x3bee00, indexJojos51NDoul },
};

const sDescTreeNode VENTURE_A_COL_NDOUL[] =
{
    // Keep this descriptor: we want to avoid P1/P2 multipreview output for this mispaired character
	{ L"Ndoul P1", DESC_NODETYPE_TREE, (void*)VENTURE_A_NDOUL_P1, ARRAYSIZE(VENTURE_A_NDOUL_P1) },
    { L"Ndoul P2", DESC_NODETYPE_TREE, (void*)VENTURE_A_NDOUL_P2, ARRAYSIZE(VENTURE_A_NDOUL_P2) },
};

const sGame_PaletteDataset VENTURE_A_DEATH13_P1[] =
{
    { L"Death 13 (Boss)", 0x3c3880, 0x3c3900, indexJojos51Death13 },
};

const sDescTreeNode VENTURE_A_COL_DEATH13[] =
{
    // Keep this descriptor: we want to avoid P1/P2 multipreview output for this mispaired character
	{ L"Palettes", DESC_NODETYPE_TREE, (void*)VENTURE_A_DEATH13_P1, ARRAYSIZE(VENTURE_A_DEATH13_P1) },
};

const sGame_PaletteDataset VENTURE_A_BONUS[] =
{
    { L"Challenger Background (1/7) 0x3f7580", 0x3f7580, 0x3f7780 }, 
    { L"Challenger Background (2/7) 0x3f7780", 0x3f7780, 0x3f7980 }, 
    { L"Challenger Background (3/7) 0x3f7980", 0x3f7980, 0x3f7b80 }, 
    { L"Challenger Background (4/7) 0x3f7b80", 0x3f7b80, 0x3f7d80 }, 
    { L"Challenger Background (5/7) 0x3f7d80", 0x3f7d80, 0x3f7f80 }, 
    { L"Challenger Background (6/7) 0x3f7f80", 0x3f7f80, 0x3f8180 }, 
    { L"Challenger Background (7/7) 0x3f8180", 0x3f8180, 0x3f8380 }, 

    { L"Cameo (Judgement)", 0x3c7780, 0x3c7800 },
    { L"Hol Horse (Beta)", 0x3c7700, 0x3c7780 },
    { L"Enya (Beta)", 0x3c7800, 0x3c7880 },
    { L"Zombie", 0x3c7880, 0x3c7900 },
};

const sDescTreeNode VENTURE_A_COL_BONUS[] =
{
	{ L"Bonus", DESC_NODETYPE_TREE, (void*)VENTURE_A_BONUS, ARRAYSIZE(VENTURE_A_BONUS) },
};
	
const sDescTreeNode VENTURE_A_UNITS_50[] =
{
    { L"Jotaro", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_JOTARO, ARRAYSIZE(VENTURE_A_COL_JOTARO) },
    { L"Kakyoin", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_KAKYOIN, ARRAYSIZE(VENTURE_A_COL_KAKYOIN) },
    { L"Avdol", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_AVDOL, ARRAYSIZE(VENTURE_A_COL_AVDOL) },
    { L"Polnareff", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_POL, ARRAYSIZE(VENTURE_A_COL_POL) },
    { L"Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_JOSEPH, ARRAYSIZE(VENTURE_A_COL_JOSEPH) },
    { L"Iggy", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_IGGY, ARRAYSIZE(VENTURE_A_COL_IGGY) },
    { L"Alessi", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_ALESSI, ARRAYSIZE(VENTURE_A_COL_ALESSI) },
    { L"Chaka", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_CHAKA, ARRAYSIZE(VENTURE_A_COL_CHAKA) },
    { L"Devo", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_DEVO, ARRAYSIZE(VENTURE_A_COL_DEVO) },
    { L"Midler", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_MIDLER, ARRAYSIZE(VENTURE_A_COL_MIDLER) },
    { L"Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_DIO, ARRAYSIZE(VENTURE_A_COL_DIO) },
    { L"Shadow Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_SDIO, ARRAYSIZE(VENTURE_A_COL_SDIO) },
    { L"Young Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_YJOSEPH, ARRAYSIZE(VENTURE_A_COL_YJOSEPH) },
    { L"N'Doul and Geb", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_NDOUL, ARRAYSIZE(VENTURE_A_COL_NDOUL) },
    { L"Vanilla Ice (Boss)", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_BICE, ARRAYSIZE(VENTURE_A_COL_BICE) },
    { L"Death 13", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_DEATH13, ARRAYSIZE(VENTURE_A_COL_DEATH13) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)VENTURE_A_COL_BONUS, ARRAYSIZE(VENTURE_A_COL_BONUS) },
};

constexpr auto VENTURE_A_NUMUNIT_50 = ARRAYSIZE(VENTURE_A_UNITS_50);
constexpr auto VENTURE_A_EXTRALOC_50 = VENTURE_A_NUMUNIT_50;

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_JOTARO_PALETTES[] =
{
    { L"Jotaro P1 HUD", 0x640400, 0x640420, indexJojos50HUDPortraits, indexJojos51Jotaro },
    { L"Jotaro P2 HUD", 0x640420, 0x640440, indexJojos50HUDPortraits, indexJojos51Jotaro },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_KAKYOIN_PALETTES[] =
{
    { L"Kakyoin P1 HUD", 0x640440, 0x640460, indexJojos50HUDPortraits, indexJojos51Kakyo },
    { L"Kakyoin P2 HUD", 0x640460, 0x640480, indexJojos50HUDPortraits, indexJojos51Kakyo },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_DIO_PALETTES[] =
{
    { L"DIO P1 HUD", 0x640480, 0x6404a0, indexJojos50HUDPortraits, indexJojos51Dio },
    { L"DIO P2 HUD", 0x6404a0, 0x6404c0, indexJojos50HUDPortraits, indexJojos51Dio },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_CHAKA_PALETTES[] =
{
    { L"Chaka P1 HUD", 0x6404c0, 0x6404e0, indexJojos50HUDPortraits, indexJojos51Chaka },
    { L"Chaka P2 HUD", 0x6404e0, 0x640500, indexJojos50HUDPortraits, indexJojos51Chaka },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_IGGY_PALETTES[] =
{
    { L"Iggy P1 HUD", 0x640500, 0x640520, indexJojos50HUDPortraits, indexJojos51Iggy },
    { L"Iggy P2 HUD", 0x640520, 0x640540, indexJojos50HUDPortraits, indexJojos51Iggy },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_PETSHOP_PALETTES[] =
{
    { L"Petshop P1 HUD *unused", 0x640540, 0x640560 },
    { L"Petshop P2 HUD *unused", 0x640560, 0x640580 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_POLNAREFF_PALETTES[] =
{
    { L"Polnareff P1 HUD", 0x640580, 0x6405a0, indexJojos50HUDPortraits, indexJojos51Pol },
    { L"Polnareff P2 HUD", 0x6405a0, 0x6405c0, indexJojos50HUDPortraits, indexJojos51Pol },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_JOSEPH_PALETTES[] =
{
    { L"Joseph P1 HUD", 0x6405c0, 0x6405e0, indexJojos50HUDPortraits, indexJojos51Joseph },
    { L"Joseph P2 HUD", 0x6405e0, 0x640600, indexJojos50HUDPortraits, indexJojos51Joseph },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_ABDUL_PALETTES[] =
{
    { L"Avdol P1 HUD", 0x640600, 0x640620, indexJojos50HUDPortraits, indexJojos51Avdol },
    { L"Avdol P2 HUD", 0x640620, 0x640640, indexJojos50HUDPortraits, indexJojos51Avdol },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_ALESSI_PALETTES[] =
{
    { L"Alessi P1 HUD", 0x640640, 0x640660, indexJojos50HUDPortraits, indexJojos51Alessi },
    { L"Alessi P2 HUD", 0x640660, 0x640680, indexJojos50HUDPortraits, indexJojos51Alessi },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_HANGEDMAN_PALETTES[] =
{
    { L"Hanged Man P1 HUD *unused", 0x640680, 0x6406a0 },
    { L"Hanged Man P2 HUD *unused", 0x6406a0, 0x6406c0 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_DEVO_PALETTES[] =
{
    { L"Devo P1 HUD", 0x6406c0, 0x6406e0, indexJojos50HUDPortraits, indexJojos51Devo },
    { L"Devo P2 HUD", 0x6406e0, 0x640700, indexJojos50HUDPortraits, indexJojos51Devo },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_ENYABA_PALETTES[] =
{
    { L"Enyaba P1 HUD *unused", 0x640700, 0x640720 },
    { L"Enyaba P2 HUD *unused", 0x640720, 0x640740 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_BOSSICE_PALETTES[] =
{
    { L"Boss Ice P1 HUD", 0x640740, 0x640760, indexJojos50HUDPortraits, indexJojos51VIce },
    { L"Boss Ice P2 HUD", 0x640760, 0x640780, indexJojos50HUDPortraits, indexJojos51VIce },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_HOL_PALETTES[] =
{
    { L"Hol Horse P1 HUD *unused", 0x640780, 0x6407a0 },
    { L"Hol Horse P2 HUD *unused", 0x6407a0, 0x6407c0 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_TOWER_PALETTES[] =
{
    { L"Tower of Gray P1 HUD *unused", 0x6407c0, 0x6407e0 },
    { L"Tower of Gray P2 HUD *unused", 0x6407e0, 0x640800 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_DEATH_PALETTES[] =
{
    { L"Death 13 P1 HUD", 0x640800, 0x640820, indexJojos51Death13, 0x20 },
    { L"Death 13 P2 HUD", 0x640820, 0x640840, indexJojos51Death13, 0x20 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_NDOUL_PALETTES[] =
{
    { L"N'Doul P1 HUD", 0x640840, 0x640860, indexJojos50HUDPortraits, indexJojos51NDoul },
    { L"N'Doul P2 HUD", 0x640860, 0x640880, indexJojos50HUDPortraits, indexJojos51NDoul },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_JUDGEMENT_PALETTES[] =
{
    { L"Judgement P1 HUD *unused", 0x640880, 0x6408a0 },
    { L"Judgement P2 HUD *unused", 0x6408a0, 0x6408c0 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_MIDLER_PALETTES[] =
{
    { L"Midler P1 HUD", 0x6408c0, 0x6408e0, indexJojos50HUDPortraits, indexJojos51Midler },
    { L"Midler P2 HUD", 0x6408e0, 0x640900, indexJojos50HUDPortraits, indexJojos51Midler },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_MARIAH_PALETTES[] =
{
    { L"Mariah P1 HUD *unused", 0x640900, 0x640920 },
    { L"Mariah P2 HUD *unused", 0x640920, 0x640940 },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_YJOSEPH_PALETTES[] =
{
    { L"Young Joseph P1 HUD", 0x640b60, 0x640b80, indexJojos50HUDPortraits, indexJojos51YSeph },
    { L"Young Joseph P2 HUD", 0x640b80, 0x640ba0, indexJojos50HUDPortraits, indexJojos51YSeph },
};

const sGame_PaletteDataset VENTURE_A_31_HUD_PORTRAIT_SDIO_PALETTES[] =
{
    { L"Shadow DIO P1 HUD", 0x640ba0, 0x640bc0, indexJojos50HUDPortraits, indexJojos51SDio },
    { L"Shadow DIO P2 HUD", 0x640bc0, 0x640be0, indexJojos50HUDPortraits, indexJojos51SDio },
};

const sDescTreeNode VENTURE_A_31_HUD_PORTRAIT_COLLECTION[] =
{
    { L"Jotaro", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_JOTARO_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_JOTARO_PALETTES) },
    { L"Kakyoin", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_KAKYOIN_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_KAKYOIN_PALETTES) },
    { L"DIO", DESC_NODETYPE_TREE,    (void*)VENTURE_A_31_HUD_PORTRAIT_DIO_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_DIO_PALETTES) },
    { L"Chaka", DESC_NODETYPE_TREE,  (void*)VENTURE_A_31_HUD_PORTRAIT_CHAKA_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_CHAKA_PALETTES) },
    { L"Iggy", DESC_NODETYPE_TREE,   (void*)VENTURE_A_31_HUD_PORTRAIT_IGGY_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_IGGY_PALETTES) },
    { L"Petshop (Unused)", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_PETSHOP_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_PETSHOP_PALETTES) },
    { L"Polnareff", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_POLNAREFF_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_POLNAREFF_PALETTES) },
    { L"Joseph", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_JOSEPH_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_JOSEPH_PALETTES) },
    { L"Avdol", DESC_NODETYPE_TREE,  (void*)VENTURE_A_31_HUD_PORTRAIT_ABDUL_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_ABDUL_PALETTES) },
    { L"Alessi", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_ALESSI_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_ALESSI_PALETTES) },
    { L"Hanged Man (Unused)", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_HANGEDMAN_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_HANGEDMAN_PALETTES) },
    { L"Devo", DESC_NODETYPE_TREE,   (void*)VENTURE_A_31_HUD_PORTRAIT_DEVO_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_DEVO_PALETTES) },
    { L"Enyaba (Unused)", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_ENYABA_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_ENYABA_PALETTES) },
    { L"Boss Ice", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_BOSSICE_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_BOSSICE_PALETTES) },
    { L"Hol Horse (Unused)", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_HOL_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_HOL_PALETTES) },
    { L"Tower of Gray (Unused)", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_TOWER_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_TOWER_PALETTES) },
    { L"Death 13", DESC_NODETYPE_TREE,   (void*)VENTURE_A_31_HUD_PORTRAIT_DEATH_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_DEATH_PALETTES) },
    { L"N'Doul",  DESC_NODETYPE_TREE,    (void*)VENTURE_A_31_HUD_PORTRAIT_NDOUL_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_NDOUL_PALETTES) },
    { L"Judgement (Unused)",  DESC_NODETYPE_TREE,    (void*)VENTURE_A_31_HUD_PORTRAIT_JUDGEMENT_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_JUDGEMENT_PALETTES) },
    { L"Midler", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_MIDLER_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_MIDLER_PALETTES) },
    { L"Mariah (Unused)", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_MARIAH_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_MARIAH_PALETTES) },
    { L"Young Joseph", DESC_NODETYPE_TREE,(void*)VENTURE_A_31_HUD_PORTRAIT_YJOSEPH_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_YJOSEPH_PALETTES) },
    { L"Shadow Dio", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_SDIO_PALETTES, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_SDIO_PALETTES) },
};

const sDescTreeNode VENTURE_A_UNITS_31[] =
{
    { L"HUD Portraits", DESC_NODETYPE_TREE, (void*)VENTURE_A_31_HUD_PORTRAIT_COLLECTION, ARRAYSIZE(VENTURE_A_31_HUD_PORTRAIT_COLLECTION) },
};

constexpr auto VENTURE_A_NUMUNIT_31 = ARRAYSIZE(VENTURE_A_UNITS_31);
constexpr auto VENTURE_A_EXTRALOC_31 = VENTURE_A_NUMUNIT_31;
