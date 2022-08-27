#pragma once

const std::vector<uint16_t> BtlKRoad_A_IMGIDS_USED =
{
};

const sGame_PaletteDataset BtlKRoad_A_KARATE_Palettes_A[] =
{
    { L"Anthony", 0xb5f0, 0xb610 },
    { L"Anthony Portrait", 0xaed0, 0xaef0 },
    { L"Anthony Select Portrait", 0xaef0, 0xaf10 },
};

const sGame_PaletteDataset BtlKRoad_A_KARATE_Palettes_B[] =
{
    { L"Masamichi", 0xb610, 0xb630 },
    { L"Masamichi Portrait", 0xaf10, 0xaf30 },
    { L"Masamichi Select Portrait", 0xaf30, 0xaf50 },
};

const sGame_PaletteDataset BtlKRoad_A_MMA_Palettes_A[] =
{
    { L"Cyborg D-9F", 0xb630, 0xb650 },
    { L"Cyborg D-9F Portrait", 0xb050, 0xb070 },
    { L"Cyborg D-9F Select Portrait", 0xb070, 0xb090 },
};

const sGame_PaletteDataset BtlKRoad_A_MMA_Palettes_B[] =
{
    { L"Cyborg T-8P", 0xb650, 0xb670 },
    { L"Cyborg T-8P Portrait", 0xb090, 0xb0b0 },
    { L"Cyborg T-8P Select Portrait", 0xb0b0, 0xb0d0 },
};

const sGame_PaletteDataset BtlKRoad_A_BOXING_Palettes_A[] =
{
    { L"Rick", 0xb670, 0xb690 },
    { L"Rick Portrait", 0xaf50, 0xaf70 },
    { L"Rick Select Portrait", 0xaf70, 0xaf90 },
};

const sGame_PaletteDataset BtlKRoad_A_BOXING_Palettes_B[] =
{
    { L"Jeff", 0xb690, 0xb6b0 },
    { L"Jeff Portrait", 0xaf90, 0xafb0 },
    { L"Jeff Select Portrait", 0xafb0, 0xafd0 },
};

const sGame_PaletteDataset BtlKRoad_A_MUAYTHAI_Palettes_A[] =
{
    { L"Shinsaku", 0xb6b0, 0xb6d0 },
    { L"Shinsaku Portrait", 0xafd0, 0xaff0 },
    { L"Shinsaku Select Portrait", 0xaff0, 0xb010 },
};

const sGame_PaletteDataset BtlKRoad_A_MUAYTHAI_Palettes_B[] =
{
    { L"John", 0xb6d0, 0xb6f0 },
    { L"John Portrait", 0xb010, 0xb030 },
    { L"John Select Portrait", 0xb030, 0xb050 },
};

const sGame_PaletteDataset BtlKRoad_A_SUMO_Palettes_A[] =
{
    { L"Mitsuji", 0xb6f0, 0xb710 },
    { L"Mitsuji Portrait", 0xb0d0, 0xb0f0 },
    { L"Mitsuji Select Portrait", 0xb0f0, 0xb110 },
};

const sGame_PaletteDataset BtlKRoad_A_SUMO_Palettes_B[] =
{
    { L"Harimaoh", 0xb710, 0xb730 },
    { L"Harimaoh Portrait", 0xb110, 0xb130 },
    { L"Harimaoh Select Portrait", 0xb130, 0xb150 },
};

const sGame_PaletteDataset BtlKRoad_A_COMMANDO_Palettes_A[] =
{
    { L"Wolf", 0xb730, 0xb750 },
    { L"Wolf Portrait", 0xb150, 0xb170 },
    { L"Wolf SelectPortrait", 0xb170, 0xb190 },
};

const sGame_PaletteDataset BtlKRoad_A_COMMANDO_Palettes_B[] =
{
    { L"Dan", 0xb750, 0xb770 },
    { L"Dan Portrait", 0xb190, 0xb1b0 },
    { L"Dan Select Portrait", 0xb1b0, 0xb1d0 },
};

const sGame_PaletteDataset BtlKRoad_A_JUJUTSU_Palettes_A[] =
{
    { L"Tyssa", 0xb770, 0xb790 },
    { L"Tyssa Portrait", 0xb250, 0xb270 },
    { L"Tyssa Select Portrait", 0xb270, 0xb290 },
};

const sGame_PaletteDataset BtlKRoad_A_JUJUTSU_Palettes_B[] =
{
    { L"Yuki", 0xb790, 0xb7b0 },
    { L"Yuki Portrait", 0xb290, 0xb2b0 },
    { L"Yuki SelectPortrait", 0xb2b0, 0xb2d0 },
};

const sGame_PaletteDataset BtlKRoad_A_MRBEAR_Palettes_A[] =
{
    { L"Mr. Bear", 0xb7b0, 0xb7d0 },
    { L"Mr. Bear Portrait", 0xb1d0, 0xb1f0 },
    { L"Mr. Bear Select Portrait", 0xb1f0, 0xb210 },
};

const sGame_PaletteDataset BtlKRoad_A_MRBEAR_Palettes_B[] =
{
    { L"Golden Mr. Bear", 0xb7d0, 0xb7f0 },
    { L"Golden Mr. Bear Portrait", 0xb210, 0xb230 },
    { L"Golden Mr. Bear Select Portrait", 0xb230, 0xb250 },
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
