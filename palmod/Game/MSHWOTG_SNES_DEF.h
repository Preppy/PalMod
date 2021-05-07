#pragma once

const UINT16 MSHWOTG_SNES_IMG_UNITS[] =
{
    indexMSHWOTGSprites_SpiderMan,      // 0x21
    indexMSHWOTGSprites_CapAmerica,     // 0x22
    indexMSHWOTGSprites_IronMan,        // 0x23
    indexMSHWOTGSprites_Hulk,           // 0x24
    indexMSHWOTGSprites_Wolverine,      // 0x25

    indexMSHWOTGSprites_AdamWarlock,    // 0x26
    indexMSHWOTGSprites_DrStrange,      // 0x27
    indexMSHWOTGSprites_DrDoom,         // 0x28
    indexMSHWOTGSprites_Magus,          // 0x29
    indexMSHWOTGSprites_Blackheart,     // 0x2A
    indexMSHWOTGSprites_Nebula,         // 0x2B
    indexMSHWOTGSprites_Thanos,         // 0x2C

    indexMSHWOTGSprites_Puck,           // 0x2D
    indexMSHWOTGSprites_Evilverine,     // 0x2E
    indexMSHWOTGSprites_EvilHulk,       // 0x2F
    indexMSHWOTGSprites_EvilIronMan,    // 0x30
    indexMSHWOTGSprites_Daredevil,      // 0x31
    indexMSHWOTGSprites_Vision,         // 0x32
    indexMSHWOTGSprites_SheHulk,        // 0x33
    indexMSHWOTGSprites_Hawkeye,        // 0x34
    indexMSHWOTGSprites_SilverSurfer,   // 0x35
    indexMSHWOTGSprites_Sasquatch,      // 0x36
    indexMSHWOTGSprites_TheThing,       // 0x37
    indexMSHWOTGSprites_Bonus,          // 0x38
};

const sGame_PaletteDataset MSHWOTG_CAPTAINAMERICA_PALETTES[] =
{
    { L"Captain America", 0xFA000, 0xFA020, indexMSHWOTGSprites_CapAmerica, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_IRONMAN_PALETTES[] =
{
    { L"Iron Man", 0xFA0C0, 0xFA0E0, indexMSHWOTGSprites_IronMan, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_HULK_PALETTES[] =
{
    { L"Hulk", 0xFA120, 0xFA140, indexMSHWOTGSprites_Hulk, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_SPIDERMAN_PALETTES[] =
{
    { L"Spider-Man", 0xFA180, 0xFA1A0, indexMSHWOTGSprites_SpiderMan, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_WOLVERINE_PALETTES[] =
{
    { L"Wolverine", 0xFA060, 0xFA080, indexMSHWOTGSprites_Wolverine, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_BLACKHEART_PALETTES[] =
{
    { L"BlackHeart", 0xFA740, 0xFA760, indexMSHWOTGSprites_Blackheart, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_EHULK_PALETTES[] =
{
    { L"E. Hulk", 0xFA880, 0xFA8A0, indexMSHWOTGSprites_Hulk, 0x00 },
};

const sGame_PaletteDataset MSHWOTG_EIRONMAN_PALETTES[] =
{
    { L"E. Iron Man", 0xFA4E0, 0xFA500, indexMSHWOTGSprites_IronMan },
};

const sGame_PaletteDataset MSHWOTG_ESASQUATCH_PALETTES[] =
{
    { L"E. Sasquatch", 0xFA780, 0xFA7A0, indexMSHWOTGSprites_Sasquatch },
};

const sGame_PaletteDataset MSHWOTG_ETHING_PALETTES[] =
{
    { L"E. Thing 1", 0xFA6C0, 0xFA6E0, indexMSHWOTGSprites_TheThing },
    { L"E. Thing 2", 0xFA6E0, 0xFA700, indexMSHWOTGSprites_TheThing },
};

const sGame_PaletteDataset MSHWOTG_EWOLVERINE_PALETTES[] =
{
    { L"E. Wolverine 1", 0xFA660, 0xFA680, indexMSHWOTGSprites_Wolverine },
    { L"E. Wolverine 2", 0xFA680, 0xFA6A0, indexMSHWOTGSprites_Wolverine },
    { L"E. Wolverine 3", 0xFA6A0, 0xFA6C0, indexMSHWOTGSprites_Wolverine },
};

const sGame_PaletteDataset MSHWOTG_BONUS_INTRO_PALETTES[] =
{
    { L"Captain America Intro Portrait Part 1", 0x771EC, 0x7720C },
    { L"Captain America Intro Portrait Part 2", 0x784B8, 0x784D8 },
    { L"Iron Man Intro Portrait Part 1", 0x771AC, 0x771CC },
    { L"Iron Man Intro Portrait Part 2", 0x78478, 0x78498 },
    { L"Hulk Intro Portrait", 0x771CC, 0x771EC },
    { L"Spider-Man Intro Portrait Part 1", 0x7718C, 0x771AC },
    { L"Spider-Man Intro Portrait Part 2", 0x78458, 0x78478 },
    { L"Wolverine Intro Portrait Part 1", 0x7716C, 0x7718C },
    { L"Wolverine Intro Portrait Part 2", 0x78438, 0x78458 },
};

const sGame_PaletteDataset MSHWOTG_BONUS_CSP_PALETTES[] =
{
    { L"Spider-Man CSP", 0xF1C20, 0xF1C40 },
    { L"Captain America CSP", 0xF1C40, 0xF1C60 },
    { L"Hulk CSP", 0xF1C60, 0xF1C80 },
    { L"Iron Man CSP", 0xF1C80, 0xF1CA0 },
    { L"Wolverine CSP", 0xF1CA0, 0xF1CC0 },
    { L"CSP Nameplates", 0xF1CC0, 0xF1CE0 },
    { L"CS BG Gradient Pt.1", 0xF1BE0, 0xF1C00 },
    { L"CS BG Gradient Pt.2", 0xF1C00, 0xF1C20 },
};

const sGame_PaletteDataset MSHWOTG_BONUS_VSP_PALETTES[] =
{
    { L"Captain America VSP", 0x67055, 0x67075 },
    { L"Iron Man VSP", 0x65E98, 0x65EB8 },
    { L"Hulk VSP", 0x683A4, 0x683C4 },
    { L"Spider-Man VSP", 0x6907B, 0x6909B },
    { L"Wolverine VSP", 0x5E7D1, 0x5E7F1 },
};

const sGame_PaletteDataset MSHWOTG_BONUS_ENDING_PALETTES[] =
{
    { L"Iron Man Ending Portrait Part 1", 0x63E42, 0x63E62 },
    { L"Iron Man Ending Portrait Part 2", 0x816C4, 0x816E4 },
    { L"Hulk Ending Portrait", 0x63E22, 0x63E42 },
    { L"Spider-Man Ending Portrait Part 1", 0x63E02, 0x63E22 },
    { L"Spider-Man Ending Portrait Part 2", 0x81724, 0x81744 },
    { L"Wolverine Ending Portrait", 0x81764, 0x81784 },
};

const sGame_PaletteDataset MSHWOTG_BONUS_TITLE_PALETTES[] =
{
    { L"\"MARVEL SUPER HEROES\" chrome logo", 0xF1B60, 0xF1B80 },
    { L"\"WAR GEMS\" and Marvel Comics logo", 0xF1B80, 0xF1BA0 },
    { L"\"OF THE\"", 0xFB5A0, 0xFB5C0 },
    { L"Blue BG Gradient", 0xF1B20, 0xF1B60 },
    { L"Soul Gem Menu Cursor", 0xFB580, 0xFB5A0 },
    { L"Intro green gradient BG", 0x6A65D, 0x6A67D },
};

const sGame_PaletteDataset MSHWOTG_BONUS_ENEMY_PALETTES[] =
{
    { L"Dr. Doom", 0x6FBCC, 0x6FBEC, indexMSHWOTGSprites_DrDoom },
    { L"Doombot 1", 0xFA7E0, 0xFA800 },
    { L"Doombot 2", 0xFA800, 0xFA820 },
    { L"Doombot 3", 0xFA820, 0xFA840 },
    { L"Doombot 4", 0xFA840, 0xFA860 },
    { L"E. Daredevil 1", 0xFA460, 0xFA480, indexMSHWOTGSprites_Daredevil },
    { L"E. Daredevil 2", 0xFA420, 0xFA440, indexMSHWOTGSprites_Daredevil },
    { L"E. Hawkeye 1", 0xFA480, 0xFA4A0, indexMSHWOTGSprites_Hawkeye },
    { L"E. Hawkeye 2", 0xFA4A0, 0xFA4C0, indexMSHWOTGSprites_Hawkeye },
    { L"E. Iron Man 2", 0xFA500, 0xFA520, indexMSHWOTGSprites_IronMan },
    { L"E. Iron Man 3", 0xFA520, 0xFA540, indexMSHWOTGSprites_IronMan },
    { L"E. Puck 1", 0xFA540, 0xFA560, indexMSHWOTGSprites_Puck },
    { L"E. Puck 2", 0xFA560, 0xFA580, indexMSHWOTGSprites_Puck },
    { L"E. Puck 3", 0xFA580, 0xFA5A0, indexMSHWOTGSprites_Puck },
    { L"E. She-Hulk 1", 0xFA5A0, 0xFA5C0, indexMSHWOTGSprites_SheHulk },
    { L"E. She-Hulk 2", 0xFA5C0, 0xFA5E0, indexMSHWOTGSprites_SheHulk },
    { L"E. She-Hulk 3", 0xFA5E0, 0xFA600, indexMSHWOTGSprites_SheHulk },
    { L"E. Silver Surfer", 0xFA920, 0xFA940, indexMSHWOTGSprites_SilverSurfer, 0x00 },
    { L"E. Vision 1", 0xFA600, 0xFA620, indexMSHWOTGSprites_Vision, 0x00  },
    { L"E. Vision 2", 0xFA620, 0xFA640, indexMSHWOTGSprites_Vision, 0x00 },
    { L"E. Vision 3", 0xFA640, 0xFA660, indexMSHWOTGSprites_Vision, 0x00 },
    { L"Magus", 0xFA8A0, 0xFA8C0, indexMSHWOTGSprites_Magus, 0x00 },
    { L"Magus shadow 1", 0xFA8C0, 0xFA8E0, indexMSHWOTGSprites_Magus, 0x00 },
    { L"Magus shadow 2", 0xFA8E0, 0xFA900, indexMSHWOTGSprites_Magus, 0x00 },
    { L"Magus Portrait", 0x5F48D, 0x5F4AD },
    { L"Nebula", 0xFA7C0, 0xFA7E0, indexMSHWOTGSprites_Nebula, 0x00 },
    { L"Nebula Portrait", 0x71295, 0x712B5 },
    { L"Thanos", 0xFA760, 0xFA780, indexMSHWOTGSprites_Thanos, 0x00 },
    { L"Thanos Portrait", 0x7AA20, 0x7AA40 },
};

const sGame_PaletteDataset MSHWOTG_BONUS_MISC_PALETTES[] =
{
    { L"Mind Gem", 0x612FC, 0x6131C },
    { L"Time Gem", 0x6131C, 0x6133C },
    { L"Soul Gem", 0x6133C, 0x6135C },
    { L"Reality Gem", 0x6135C, 0x6137C },
    { L"Space Gem", 0x6137C, 0x6139C },
    { L"Power Gem", 0x6139C, 0x613BC },
    { L"Dr. Strange", 0xFB540, 0xFB560, indexMSHWOTGSprites_DrStrange, 0x00 },
};

const sDescTreeNode MSHWOTG_CAPTAINAMERICA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_CAPTAINAMERICA_PALETTES, ARRAYSIZE(MSHWOTG_CAPTAINAMERICA_PALETTES) },
};

const sDescTreeNode MSHWOTG_IRONMAN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_IRONMAN_PALETTES, ARRAYSIZE(MSHWOTG_IRONMAN_PALETTES) },
};

const sDescTreeNode MSHWOTG_HULK_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_HULK_PALETTES, ARRAYSIZE(MSHWOTG_HULK_PALETTES) },
};

const sDescTreeNode MSHWOTG_SPIDERMAN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_SPIDERMAN_PALETTES, ARRAYSIZE(MSHWOTG_SPIDERMAN_PALETTES) },
};

const sDescTreeNode MSHWOTG_WOLVERINE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_WOLVERINE_PALETTES, ARRAYSIZE(MSHWOTG_WOLVERINE_PALETTES) },
};

const sDescTreeNode MSHWOTG_BLACKHEART_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_BLACKHEART_PALETTES, ARRAYSIZE(MSHWOTG_BLACKHEART_PALETTES) },
};

const sDescTreeNode MSHWOTG_EHULK_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_EHULK_PALETTES, ARRAYSIZE(MSHWOTG_EHULK_PALETTES) },
};

const sDescTreeNode MSHWOTG_EIRONMAN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_EIRONMAN_PALETTES, ARRAYSIZE(MSHWOTG_EIRONMAN_PALETTES) },
};

const sDescTreeNode MSHWOTG_ESASQUATCH_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_ESASQUATCH_PALETTES, ARRAYSIZE(MSHWOTG_ESASQUATCH_PALETTES) },
};

const sDescTreeNode MSHWOTG_ETHING_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_ETHING_PALETTES, ARRAYSIZE(MSHWOTG_ETHING_PALETTES) },
};

const sDescTreeNode MSHWOTG_EWOLVERINE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MSHWOTG_EWOLVERINE_PALETTES, ARRAYSIZE(MSHWOTG_EWOLVERINE_PALETTES) },
};

const sDescTreeNode MSHWOTG_BONUS_COLLECTION[] =
{
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_INTRO_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_INTRO_PALETTES) },
    { L"Character Select Portraits", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_CSP_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_CSP_PALETTES) },
    { L"Victory Screen Portraits", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_VSP_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_VSP_PALETTES) },
    { L"Ending Portraits", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_ENDING_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_ENDING_PALETTES) },
    { L"Title Screen", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_TITLE_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_TITLE_PALETTES) },
    { L"Enemies", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_ENEMY_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_ENEMY_PALETTES) },
    { L"Misc", DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_MISC_PALETTES, ARRAYSIZE(MSHWOTG_BONUS_MISC_PALETTES) },
};

const sDescTreeNode MSHWOTG_SNES_UNITS[] =
{
    { L"Captain America",  DESC_NODETYPE_TREE, (void*)MSHWOTG_CAPTAINAMERICA_COLLECTION,   ARRAYSIZE(MSHWOTG_CAPTAINAMERICA_COLLECTION) },
    { L"Iron Man",  DESC_NODETYPE_TREE, (void*)MSHWOTG_IRONMAN_COLLECTION,   ARRAYSIZE(MSHWOTG_IRONMAN_COLLECTION) },
    { L"Hulk",  DESC_NODETYPE_TREE, (void*)MSHWOTG_HULK_COLLECTION,   ARRAYSIZE(MSHWOTG_HULK_COLLECTION) },
    { L"Spider-Man",  DESC_NODETYPE_TREE, (void*)MSHWOTG_SPIDERMAN_COLLECTION,   ARRAYSIZE(MSHWOTG_SPIDERMAN_COLLECTION) },
    { L"Wolverine",  DESC_NODETYPE_TREE, (void*)MSHWOTG_WOLVERINE_COLLECTION,   ARRAYSIZE(MSHWOTG_WOLVERINE_COLLECTION) },
    { L"Blackheart",  DESC_NODETYPE_TREE, (void*)MSHWOTG_BLACKHEART_COLLECTION,   ARRAYSIZE(MSHWOTG_BLACKHEART_COLLECTION) },
    { L"Evil Hulk",  DESC_NODETYPE_TREE, (void*)MSHWOTG_EHULK_COLLECTION,   ARRAYSIZE(MSHWOTG_EHULK_COLLECTION) },
    { L"Evil Iron Man",  DESC_NODETYPE_TREE, (void*)MSHWOTG_EIRONMAN_COLLECTION,   ARRAYSIZE(MSHWOTG_EIRONMAN_COLLECTION) },
    { L"Evil Sasquatch",  DESC_NODETYPE_TREE, (void*)MSHWOTG_ESASQUATCH_COLLECTION,   ARRAYSIZE(MSHWOTG_ESASQUATCH_COLLECTION) },
    { L"Evil Thing",  DESC_NODETYPE_TREE, (void*)MSHWOTG_ETHING_COLLECTION,   ARRAYSIZE(MSHWOTG_ETHING_COLLECTION) },
    { L"Evil Wolverine",  DESC_NODETYPE_TREE, (void*)MSHWOTG_EWOLVERINE_COLLECTION,   ARRAYSIZE(MSHWOTG_EWOLVERINE_COLLECTION) },
    { L"Bonus Palettes",  DESC_NODETYPE_TREE, (void*)MSHWOTG_BONUS_COLLECTION,   ARRAYSIZE(MSHWOTG_BONUS_COLLECTION) },
};

constexpr auto MSHWOTG_SNES_NUMUNIT = ARRAYSIZE(MSHWOTG_SNES_UNITS);

#define MSHWOTG_SNES_EXTRALOC MSHWOTG_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MSHWOTG_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
