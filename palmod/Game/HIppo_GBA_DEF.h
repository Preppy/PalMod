#pragma once

const std::vector<uint16_t> HIppo_GBA_IMGIDS_USED =
{
    indexHNISprites_Date,               // 0x61
    indexHNISprites_Hayami,             // 0x62
    indexHNISprites_Ippo,               // 0x63
    indexHNISprites_Mashiba,            // 0x64
    indexHNISprites_Miyata,             // 0x65
    indexHNISprites_Okita,              // 0x66
    indexHNISprites_Saeki,              // 0x67
    indexHNISprites_Sendo,              // 0x68
    indexHNISprites_Shigeta,            // 0x69
    indexHNISprites_Volg,               // 0x6a
    indexHNISprites_Bonus,              // 0x6b
};

const sGame_PaletteDataset HIppo_GBA_IPPO_MAIN_PALETTES[] =
{
//----CHARACTERS----
//---Ippo Makanouchi---
//--Main--
    { L"Ippo", 0x139efc, 0x139f1c, indexHNISprites_Ippo, 0x00 },
    { L"Ippo - Gloves", 0x12789c, 0x1278bc, indexHNISprites_Ippo, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_IPPO_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Ippo - VS Portrait", 0x1b7440, 0x1b7500, indexHNISprites_Ippo, 0x43 },
    { L"Ippo - HUD Portrait", 0x1b3978, 0x1b3998, indexHNISprites_Ippo, 0x40 },
    { L"Ippo - SP Portrait", 0x1b42e8, 0x1b4308, indexHNISprites_Ippo, 0x42 },
    { L"Ippo - Win Portrait", 0x1b433c, 0x1b435c, indexHNISprites_Ippo, 0x44 },
    { L"Ippo - Round Portrait", 0x1b5cdc, 0x1b5cfc, indexHNISprites_Ippo, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_ICHIRO_MAIN_PALETTES[] =
{
    //---Ichiro Miyata---
//--Main--
    { L"Miyata", 0x41b13c, 0x41b15c, indexHNISprites_Miyata, 0x00 },
    { L"Miyata - Gloves", 0x127d6c, 0x127d8c, indexHNISprites_Miyata, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_ICHIRO_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Miyata - VS Portrait", 0x46a8b4, 0x46a974, indexHNISprites_Miyata, 0x43 },
    { L"Miyata - HUD Portrait", 0x4663f8, 0x466418, indexHNISprites_Miyata, 0x40 },
    { L"Miyata - SP Portrait", 0x466dd4, 0x466df4, indexHNISprites_Miyata, 0x42 },
    { L"Miyata - Win Portrait", 0x466e28, 0x466e48, indexHNISprites_Miyata, 0x44 },
    { L"Miyata - Round Portrait", 0x4687c0, 0x4687e0, indexHNISprites_Miyata, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_ALEX_MAIN_PALETTES[] =
{
    //---Alexander Volg Zangief---
//--Main--
    { L"Volg", 0x4cdd68, 0x4cdd88, indexHNISprites_Volg, 0x00 },
    { L"Volg - Gloves", 0x127eb0, 0x127ed0, indexHNISprites_Volg, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_ALEX_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Volg - VS Portrait", 0x520238, 0x5202f8, indexHNISprites_Volg, 0x43 },
    { L"Volg - HUD Portrait", 0x51b92c, 0x51b94c, indexHNISprites_Volg, 0x40 },
    { L"Volg - SP Portrait", 0x51c2fc, 0x51c31c, indexHNISprites_Volg, 0x42 },
    { L"Volg - Win Portrait", 0x51c350, 0x51c370, indexHNISprites_Volg, 0x44 },
    { L"Volg - Round Portrait", 0x51dd90, 0x51ddb0, indexHNISprites_Volg, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_RYUCHI_MAIN_PALETTES[] =
{
    //---Ryuchi Hayami---
//--Main--
    { L"Hayami", 0x24e1e4, 0x24e204, indexHNISprites_Hayami, 0x00 },
    { L"Hayami - Gloves", 0x127a0c, 0x127a2c, indexHNISprites_Hayami, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_RYUCHI_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Hayami - VS Portrait", 0x2a32e8, 0x2a33a8, indexHNISprites_Hayami, 0x43 },
    { L"Hayami - HUD Portrait", 0x29f0e4, 0x29f104, indexHNISprites_Hayami, 0x40 },
    { L"Hayami - SP Portrait", 0x29faac, 0x29facc, indexHNISprites_Hayami, 0x42 },
    { L"Hayami - Win Portrait", 0x29fb00, 0x29fb20, indexHNISprites_Hayami, 0x44 },
    { L"Hayami - Round Portrait", 0x2a1518, 0x2a1538, indexHNISprites_Hayami, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_KEIGO_MAIN_PALETTES[] =
{
    //---Keigo Okita---
//--Main--
    { L"Okita", 0x36fde0, 0x36fe00, indexHNISprites_Okita, 0x00 },
    { L"Okita - Gloves", 0x127c1c, 0x127c3c, indexHNISprites_Okita, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_KEIGO_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Okita - VS Portrait", 0x3b9a28, 0x3b9ae8, indexHNISprites_Okita, 0x43 },
    { L"Okita - HUD Portrait", 0x3b6574, 0x3b6594, indexHNISprites_Okita, 0x40 },
    { L"Okita - SP Portrait", 0x3b6ef8, 0x3b6f18, indexHNISprites_Okita, 0x42 },
    { L"Okita - Win Portrait", 0x3b6f4c, 0x3b6f6c, indexHNISprites_Okita, 0x44 },
    { L"Okita - Round Portrait", 0x3b8448, 0x3b8468, indexHNISprites_Okita, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_EIJI_MAIN_PALETTES[] =
{
    //---Eiji Date---
//--Main--
    { L"Date", 0x30ca74, 0x30ca94, indexHNISprites_Date, 0x00 },
    { L"Date - Gloves", 0x127b7c, 0x127b9c, indexHNISprites_Date, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_EIJI_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Date - VS Portrait", 0x36635c, 0x36641c, indexHNISprites_Date, 0x43 },
    { L"Date - HUD Portrait", 0x3617c4, 0x3617e4, indexHNISprites_Date, 0x40 },
    { L"Date - SP Portrait", 0x362188, 0x3621a8, indexHNISprites_Date, 0x42 },
    { L"Date - Win Portrait", 0x3621dc, 0x3621fc, indexHNISprites_Date, 0x44 },
    { L"Date - Round Portrait", 0x363d3c, 0x363d5c, indexHNISprites_Date, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_RYO_MAIN_PALETTES[] =
{
    //---Ryo Mashiba---
//--Main--
    { L"Mashiba", 0x2ac5b8, 0x2ac5d8, indexHNISprites_Mashiba, 0x00 },
    { L"Mashiba - Gloves", 0x127ab8, 0x127ad8, indexHNISprites_Mashiba, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_RYO_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Mashiba - VS Portrait", 0x305d98, 0x305e58, indexHNISprites_Mashiba, 0x43 },
    { L"Mashiba - HUD Portrait", 0x301b3c, 0x301b5c, indexHNISprites_Mashiba, 0x40 },
    { L"Mashiba - SP Portrait", 0x30252c, 0x30254c, indexHNISprites_Mashiba, 0x42 },
    { L"Mashiba - Win Portrait", 0x302580, 0x3025a0, indexHNISprites_Mashiba, 0x44 },
    { L"Mashiba - Round Portrait", 0x303b3c, 0x303b5c, indexHNISprites_Mashiba, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_TAKUMA_MAIN_PALETTES[] =
{
    //---Takuma Saeki---
//--Main--
    { L"Saeki", 0x473524, 0x473544, indexHNISprites_Saeki, 0x00 },
    { L"Saeki - Gloves", 0x127e0c, 0x127e2c, indexHNISprites_Saeki, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_TAKUMA_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Saeki - VS Portrait", 0x4c2ecc, 0x4c2f8c, indexHNISprites_Saeki, 0x43 },
    { L"Saeki - HUD Portrait", 0x4be304, 0x4be324, indexHNISprites_Saeki, 0x40 },
    { L"Saeki - SP Portrait", 0x4becd0, 0x4becf0, indexHNISprites_Saeki, 0x42 },
    { L"Saeki - Win Portrait", 0x4bed24, 0x4bed44, indexHNISprites_Saeki, 0x44 },
    { L"Saeki - Round Portrait", 0x4c063c, 0x4c065c, indexHNISprites_Saeki, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_AKIRA_MAIN_PALETTES[] =
{
    //---Akira Shigeta---
//--Main--
    { L"Shigeta", 0x3c3108, 0x3c3128, indexHNISprites_Shigeta, 0x00 },
    { L"Shigeta - Gloves", 0x127cc4, 0x127ce4, indexHNISprites_Shigeta, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_AKIRA_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Shigeta - VS Portrait", 0x411af4, 0x411bb4, indexHNISprites_Shigeta, 0x43 },
    { L"Shigeta - HUD Portrait", 0x40d768, 0x40d788, indexHNISprites_Shigeta, 0x40 },
    { L"Shigeta - SP Portrait", 0x40e130, 0x40e150, indexHNISprites_Shigeta, 0x42 },
    { L"Shigeta - Win Portrait", 0x40e184, 0x40e1a4, indexHNISprites_Shigeta, 0x44 },
    { L"Shigeta - Round Portrait", 0x40f860, 0x40f880, indexHNISprites_Shigeta, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_TAKESHI_MAIN_PALETTES[] =
{
    //---Takeshi Sendo---
//--Main--
    { L"Sendo", 0x1bfc14, 0x1bfc34, indexHNISprites_Sendo, 0x00 },
    { L"Sendo - Gloves", 0x12794c, 0x12796c, indexHNISprites_Sendo, 0x01 },
};

const sGame_PaletteDataset HIppo_GBA_TAKESHI_PORTRAIT_PALETTES[] =
{
    //--Portraits--
    { L"Sendo - VS Portrait", 0x2460d8, 0x246198, indexHNISprites_Sendo, 0x43 },
    { L"Sendo - HUD Portrait", 0x242964, 0x242984, indexHNISprites_Sendo, 0x40 },
    { L"Sendo - SP Portrait", 0x243320, 0x243340, indexHNISprites_Sendo, 0x42 },
    { L"Sendo - Win Portrait", 0x243374, 0x243394, indexHNISprites_Sendo, 0x44 },
    { L"Sendo - Round Portrait", 0x244b4c, 0x244b6c, indexHNISprites_Sendo, 0x41 },
};

const sGame_PaletteDataset HIppo_GBA_BONUS_TITLES_PALETTES[] =
{
    //---BONUS---
//--Title Screen--
    { L"Title Screen Background", 0x48a1c, 0x48c1c },
    { L"Select Portraits", 0x80310, 0x80450, indexHNISprites_Bonus, 0x06 },
    { L"Select Icons", 0x84b50, 0x84b70, indexHNISprites_Bonus, 0x05 },
};

const sGame_PaletteDataset HIppo_GBA_BONUS_ENDINGS_PALETTES[] =
{
    //--Endings--
    { L"Endings - Story Mode 1", 0x526920, 0x526b20, indexHNISprites_Bonus, 0x02 },
    { L"Endings - Story Mode 2", 0x52aafc, 0x52acfc, indexHNISprites_Bonus, 0x03 },
    { L"Endings - Ippo", 0x1b8c0c, 0x1b8dec, indexHNISprites_Bonus, 0x00 },
    { L"Endings - Miyata", 0x46cc04, 0x46cde4, indexHNISprites_Bonus, 0x01 },
    { L"Endings - Volg", 0x522550, 0x522730 },
    { L"Endings - Hayami", 0x2a5198, 0x2a5378 },
    { L"Endings - Okita", 0x3bb430, 0x3bb610 },
    { L"Endings - Date", 0x3685d0, 0x3687b0 },
    { L"Endings - Mashiba", 0x3074a0, 0x307680 },
    { L"Endings - Saeki", 0x4c4fbc, 0x4c519c },
    { L"Endings - Shigeta", 0x4139dc, 0x413bbc },
    { L"Endings - Sendo", 0x2478c8, 0x247aa8 },
};

const sGame_PaletteDataset HIppo_GBA_BONUS_INGAME_PALETTES[] =
{
    //--In-game Extras--
    { L"Referee", 0x137fa0, 0x137fc0, indexHNISprites_Bonus, 0x04 },
};

const sDescTreeNode HIppo_GBA_IPPO_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_IPPO_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_IPPO_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_IPPO_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_IPPO_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_ICHIRO_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_ICHIRO_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_ICHIRO_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_ICHIRO_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_ICHIRO_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_ALEX_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_ALEX_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_ALEX_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_ALEX_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_ALEX_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_RYUCHI_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_RYUCHI_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_RYUCHI_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_RYUCHI_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_RYUCHI_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_KEIGO_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_KEIGO_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_KEIGO_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_KEIGO_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_KEIGO_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_EIJI_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_EIJI_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_EIJI_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_EIJI_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_EIJI_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_RYO_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_RYO_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_RYO_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_RYO_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_RYO_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_TAKUMA_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_TAKUMA_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_TAKUMA_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_TAKUMA_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_TAKUMA_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_AKIRA_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_AKIRA_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_AKIRA_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_AKIRA_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_AKIRA_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_TAKESHI_COLLECTION[] =
{
    { L"Main",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_TAKESHI_MAIN_PALETTES, ARRAYSIZE(HIppo_GBA_TAKESHI_MAIN_PALETTES) },
    { L"Portraits",   DESC_NODETYPE_TREE, (void*)HIppo_GBA_TAKESHI_PORTRAIT_PALETTES, ARRAYSIZE(HIppo_GBA_TAKESHI_PORTRAIT_PALETTES) },
};

const sDescTreeNode HIppo_GBA_BONUS_COLLECTION[] =
{
    { L"Title Screen",      DESC_NODETYPE_TREE, (void*)HIppo_GBA_BONUS_TITLES_PALETTES, ARRAYSIZE(HIppo_GBA_BONUS_TITLES_PALETTES) },
    { L"Endings",           DESC_NODETYPE_TREE, (void*)HIppo_GBA_BONUS_ENDINGS_PALETTES, ARRAYSIZE(HIppo_GBA_BONUS_ENDINGS_PALETTES) },
    { L"In-Game Extras",    DESC_NODETYPE_TREE, (void*)HIppo_GBA_BONUS_INGAME_PALETTES, ARRAYSIZE(HIppo_GBA_BONUS_INGAME_PALETTES) },
};

const sDescTreeNode HIppo_GBA_UNITS[] =
{
    { L"Ippo Makanouchi",           DESC_NODETYPE_TREE, (void*)HIppo_GBA_IPPO_COLLECTION, ARRAYSIZE(HIppo_GBA_IPPO_COLLECTION) },
    { L"Ichiro Miyata",             DESC_NODETYPE_TREE, (void*)HIppo_GBA_ICHIRO_COLLECTION, ARRAYSIZE(HIppo_GBA_ICHIRO_COLLECTION) },
    { L"Alexander Volg Zangief",    DESC_NODETYPE_TREE, (void*)HIppo_GBA_ALEX_COLLECTION, ARRAYSIZE(HIppo_GBA_ALEX_COLLECTION) },
    { L"Ryuchi Hayami",             DESC_NODETYPE_TREE, (void*)HIppo_GBA_RYUCHI_COLLECTION, ARRAYSIZE(HIppo_GBA_RYUCHI_COLLECTION) },
    { L"Keigo Okita",               DESC_NODETYPE_TREE, (void*)HIppo_GBA_KEIGO_COLLECTION, ARRAYSIZE(HIppo_GBA_KEIGO_COLLECTION) },
    { L"Eiji Date",                 DESC_NODETYPE_TREE, (void*)HIppo_GBA_EIJI_COLLECTION, ARRAYSIZE(HIppo_GBA_EIJI_COLLECTION) },
    { L"Ryo Mashiba",               DESC_NODETYPE_TREE, (void*)HIppo_GBA_RYO_COLLECTION, ARRAYSIZE(HIppo_GBA_RYO_COLLECTION) },
    { L"Takuma Saeki",              DESC_NODETYPE_TREE, (void*)HIppo_GBA_TAKUMA_COLLECTION, ARRAYSIZE(HIppo_GBA_TAKUMA_COLLECTION) },
    { L"Akira Shigeta",             DESC_NODETYPE_TREE, (void*)HIppo_GBA_AKIRA_COLLECTION, ARRAYSIZE(HIppo_GBA_AKIRA_COLLECTION) },
    { L"Takeshi Sendo",             DESC_NODETYPE_TREE, (void*)HIppo_GBA_TAKESHI_COLLECTION, ARRAYSIZE(HIppo_GBA_TAKESHI_COLLECTION) },

    { L"Bonus Palettes",             DESC_NODETYPE_TREE, (void*)HIppo_GBA_BONUS_COLLECTION, ARRAYSIZE(HIppo_GBA_BONUS_COLLECTION) },
};
