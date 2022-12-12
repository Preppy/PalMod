#pragma once

const std::vector<uint16_t> BtlKRoad_A_IMGIDS_USED =
{
    indexBKRoadSprites_Boxing,              // 0x8c
    indexBKRoadSprites_CommandoSambo,       // 0x8d
    indexBKRoadSprites_Jujutsu,             // 0x8e
    indexBKRoadSprites_Karate,              // 0x8f
    indexBKRoadSprites_MixedMartialArts,    // 0x90
    indexBKRoadSprites_MrBear,              // 0x91
    indexBKRoadSprites_MuayThai,            // 0x92
    indexBKRoadSprites_Sumo,                // 0x93
    indexBKRoadSprites_Bonus,               // 0x94
};

const sGame_PaletteDataset BtlKRoad_A_KARATE_Palettes_A[] =
{
    { L"Anthony", 0xb5f0, 0xb610, indexBKRoadSprites_Karate, 0x00 },
    { L"Anthony Portrait", 0xaed0, 0xaef0, indexBKRoadSprites_Karate, 0x01 },
    { L"Anthony Select Portrait", 0xaef0, 0xaf10, indexBKRoadSprites_Karate, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_KARATE_Palettes_B[] =
{
    { L"Masamichi", 0xb610, 0xb630, indexBKRoadSprites_Karate, 0x80 },
    { L"Masamichi Portrait", 0xaf10, 0xaf30, indexBKRoadSprites_Karate, 0x81 },
    { L"Masamichi Select Portrait", 0xaf30, 0xaf50, indexBKRoadSprites_Karate, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_MMA_Palettes_A[] =
{
    { L"Cyborg D-9F", 0xb630, 0xb650, indexBKRoadSprites_MixedMartialArts, 0x00 },
    { L"Cyborg D-9F Portrait", 0xb050, 0xb070, indexBKRoadSprites_MixedMartialArts, 0x01 },
    { L"Cyborg D-9F Select Portrait", 0xb070, 0xb090, indexBKRoadSprites_MixedMartialArts, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_MMA_Palettes_B[] =
{
    { L"Cyborg T-8P", 0xb650, 0xb670, indexBKRoadSprites_MixedMartialArts, 0x80 },
    { L"Cyborg T-8P Portrait", 0xb090, 0xb0b0, indexBKRoadSprites_MixedMartialArts, 0x81 },
    { L"Cyborg T-8P Select Portrait", 0xb0b0, 0xb0d0, indexBKRoadSprites_MixedMartialArts, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_BOXING_Palettes_A[] =
{
    { L"Rick", 0xb670, 0xb690, indexBKRoadSprites_Boxing, 0x80 },
    { L"Rick Portrait", 0xaf50, 0xaf70, indexBKRoadSprites_Boxing, 0x81 },
    { L"Rick Select Portrait", 0xaf70, 0xaf90, indexBKRoadSprites_Boxing, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_BOXING_Palettes_B[] =
{
    { L"Jeff", 0xb690, 0xb6b0, indexBKRoadSprites_Boxing, 0x00 },
    { L"Jeff Portrait", 0xaf90, 0xafb0, indexBKRoadSprites_Boxing, 0x01 },
    { L"Jeff Select Portrait", 0xafb0, 0xafd0, indexBKRoadSprites_Boxing, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_MUAYTHAI_Palettes_A[] =
{
    { L"Shinsaku", 0xb6b0, 0xb6d0, indexBKRoadSprites_MuayThai, 0x80 },
    { L"Shinsaku Portrait", 0xafd0, 0xaff0, indexBKRoadSprites_MuayThai, 0x81 },
    { L"Shinsaku Select Portrait", 0xaff0, 0xb010, indexBKRoadSprites_MuayThai, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_MUAYTHAI_Palettes_B[] =
{
    { L"John", 0xb6d0, 0xb6f0, indexBKRoadSprites_MuayThai, 0x00 },
    { L"John Portrait", 0xb010, 0xb030, indexBKRoadSprites_MuayThai, 0x01 },
    { L"John Select Portrait", 0xb030, 0xb050, indexBKRoadSprites_MuayThai, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_SUMO_Palettes_A[] =
{
    { L"Mitsuji", 0xb6f0, 0xb710, indexBKRoadSprites_Sumo, 0x80 },
    { L"Mitsuji Portrait", 0xb0d0, 0xb0f0, indexBKRoadSprites_Sumo, 0x81 },
    { L"Mitsuji Select Portrait", 0xb0f0, 0xb110, indexBKRoadSprites_Sumo, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_SUMO_Palettes_B[] =
{
    { L"Harimaoh", 0xb710, 0xb730, indexBKRoadSprites_Sumo, 0x00 },
    { L"Harimaoh Portrait", 0xb110, 0xb130, indexBKRoadSprites_Sumo, 0x01 },
    { L"Harimaoh Select Portrait", 0xb130, 0xb150, indexBKRoadSprites_Sumo, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_COMMANDO_Palettes_A[] =
{
    { L"Wolf", 0xb730, 0xb750, indexBKRoadSprites_CommandoSambo, 0x80 },
    { L"Wolf Portrait", 0xb150, 0xb170, indexBKRoadSprites_CommandoSambo, 0x81 },
    { L"Wolf SelectPortrait", 0xb170, 0xb190, indexBKRoadSprites_CommandoSambo, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_COMMANDO_Palettes_B[] =
{
    { L"Dan", 0xb750, 0xb770, indexBKRoadSprites_CommandoSambo, 0x00 },
    { L"Dan Portrait", 0xb190, 0xb1b0, indexBKRoadSprites_CommandoSambo, 0x01 },
    { L"Dan Select Portrait", 0xb1b0, 0xb1d0, indexBKRoadSprites_CommandoSambo, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_JUJUTSU_Palettes_A[] =
{
    { L"Tyssa", 0xb770, 0xb790, indexBKRoadSprites_Jujutsu, 0x00 },
    { L"Tyssa Portrait", 0xb250, 0xb270, indexBKRoadSprites_Jujutsu, 0x01 },
    { L"Tyssa Select Portrait", 0xb270, 0xb290, indexBKRoadSprites_Jujutsu, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_JUJUTSU_Palettes_B[] =
{
    { L"Yuki", 0xb790, 0xb7b0, indexBKRoadSprites_Jujutsu, 0x80 },
    { L"Yuki Portrait", 0xb290, 0xb2b0, indexBKRoadSprites_Jujutsu, 0x81 },
    { L"Yuki SelectPortrait", 0xb2b0, 0xb2d0, indexBKRoadSprites_Jujutsu, 0x82 },
};

const sGame_PaletteDataset BtlKRoad_A_MRBEAR_Palettes_A[] =
{
    { L"Mr. Bear", 0xb7b0, 0xb7d0, indexBKRoadSprites_MrBear, 0x00 },
    { L"Mr. Bear Portrait", 0xb1d0, 0xb1f0, indexBKRoadSprites_MrBear, 0x01 },
    { L"Mr. Bear Select Portrait", 0xb1f0, 0xb210, indexBKRoadSprites_MrBear, 0x02 },
};

const sGame_PaletteDataset BtlKRoad_A_MRBEAR_Palettes_B[] =
{
    { L"Golden Mr. Bear", 0xb7d0, 0xb7f0, indexBKRoadSprites_MrBear, 0x00 },
    { L"Golden Mr. Bear Portrait", 0xb210, 0xb230, indexBKRoadSprites_MrBear, 0x01 },
    { L"Golden Mr. Bear Select Portrait", 0xb230, 0xb250, indexBKRoadSprites_MrBear, 0x02 },
};

const sDescTreeNode BtlKRoad_A_KARATE_COLLECTION[] =
{
    { L"Anthony Hawk", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_KARATE_Palettes_A, ARRAYSIZE(BtlKRoad_A_KARATE_Palettes_A) },
    { L"Masamichi Ohymama", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_KARATE_Palettes_B, ARRAYSIZE(BtlKRoad_A_KARATE_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_BOXING_COLLECTION[] =
{
    { L"Rick Simpson", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_BOXING_Palettes_A, ARRAYSIZE(BtlKRoad_A_BOXING_Palettes_A) },
    { L"Jeff Howard", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_BOXING_Palettes_B, ARRAYSIZE(BtlKRoad_A_BOXING_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_MUAYTHAI_COLLECTION[] =
{
    { L"Shinsaku Maekawa", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MUAYTHAI_Palettes_A, ARRAYSIZE(BtlKRoad_A_MUAYTHAI_Palettes_A) },
    { L"John Anderson", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MUAYTHAI_Palettes_B, ARRAYSIZE(BtlKRoad_A_MUAYTHAI_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_COMMANDO_COLLECTION[] =
{
    { L"Wolf", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_COMMANDO_Palettes_A, ARRAYSIZE(BtlKRoad_A_COMMANDO_Palettes_A) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_COMMANDO_Palettes_B, ARRAYSIZE(BtlKRoad_A_COMMANDO_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_MMA_COLLECTION[] =
{
    { L"Cyborg D-9F", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MMA_Palettes_A, ARRAYSIZE(BtlKRoad_A_MMA_Palettes_A) },
    { L"Cyborg T-8P", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MMA_Palettes_B, ARRAYSIZE(BtlKRoad_A_MMA_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_SUMO_COLLECTION[] =
{
    { L"Mitsuji Tanimachi", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_SUMO_Palettes_A, ARRAYSIZE(BtlKRoad_A_SUMO_Palettes_A) },
    { L"Harimaoh", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_SUMO_Palettes_B, ARRAYSIZE(BtlKRoad_A_SUMO_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_JUJUTSU_COLLECTION[] =
{
    { L"Tyssa Willing", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_JUJUTSU_Palettes_A, ARRAYSIZE(BtlKRoad_A_JUJUTSU_Palettes_A) },
    { L"Yuki Fujiwara", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_JUJUTSU_Palettes_B, ARRAYSIZE(BtlKRoad_A_JUJUTSU_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_MRBEAR_COLLECTION[] =
{
    { L"Mr. Bear", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MRBEAR_Palettes_A, ARRAYSIZE(BtlKRoad_A_MRBEAR_Palettes_A) },
    { L"Golden Mr. Bear", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MRBEAR_Palettes_B, ARRAYSIZE(BtlKRoad_A_MRBEAR_Palettes_B) },
};

const sDescTreeNode BtlKRoad_A_UNITS[] =
{
    { L"Karate", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_KARATE_COLLECTION, ARRAYSIZE(BtlKRoad_A_KARATE_COLLECTION) },
    { L"Boxing", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_BOXING_COLLECTION, ARRAYSIZE(BtlKRoad_A_BOXING_COLLECTION) },
    { L"Muay Thai", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MUAYTHAI_COLLECTION, ARRAYSIZE(BtlKRoad_A_MUAYTHAI_COLLECTION) },
    { L"Commando Sambo", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_COMMANDO_COLLECTION, ARRAYSIZE(BtlKRoad_A_COMMANDO_COLLECTION) },
    { L"Mixed Martial Arts", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MMA_COLLECTION, ARRAYSIZE(BtlKRoad_A_MMA_COLLECTION) },
    { L"Sumo", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_SUMO_COLLECTION, ARRAYSIZE(BtlKRoad_A_SUMO_COLLECTION) },
    { L"Jujutsu", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_JUJUTSU_COLLECTION, ARRAYSIZE(BtlKRoad_A_JUJUTSU_COLLECTION) },
    { L"Mr. Bear", DESC_NODETYPE_TREE, (void*)BtlKRoad_A_MRBEAR_COLLECTION, ARRAYSIZE(BtlKRoad_A_MRBEAR_COLLECTION) },
};
