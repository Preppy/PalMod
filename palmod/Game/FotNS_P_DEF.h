#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to FotNS_P_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> FotNS_P_IMGIDS_USED =
{
    indexHnKSprites_Jagi,                   // 0x3C
    indexHnKSprites_Juda,                   // 0x3D
    indexHnKSprites_Kenshiro,               // 0x3E
    indexHnKSprites_Mamiya,                 // 0x3F
    indexHnKSprites_MrHeart,                // 0x40
    indexHnKSprites_Raoh,                   // 0x41
    indexHnKSprites_Rei,                    // 0x42
    indexHnKSprites_Shin,                   // 0x43
    indexHnKSprites_Thouther,               // 0x44
    indexHnKSprites_Toki,                   // 0x45
    indexHnKSprites_Bonus,                  // 0x46
    indexHnKSprites_Stages,                 // 0x47
};

const sGame_PaletteDataset FotNS_P_KENSHIRO_PALETTES_P[] =
{
    { L"Kenshiro P", 0x30, 0x70, indexHnKSprites_Kenshiro, 0x00 },
};

const sGame_PaletteDataset FotNS_P_KENSHIRO_PALETTES_HP[] =
{
    { L"Kenshiro HP", 0x7c, 0xbc, indexHnKSprites_Kenshiro, 0x00 },
};

const sGame_PaletteDataset FotNS_P_KENSHIRO_PALETTES_K[] =
{
    { L"Kenshiro K", 0xc8, 0x108, indexHnKSprites_Kenshiro, 0x00 },
};

const sGame_PaletteDataset FotNS_P_KENSHIRO_PALETTES_HK[] =
{
    { L"Kenshiro HK", 0x114, 0x154, indexHnKSprites_Kenshiro, 0x00 },
};

const sGame_PaletteDataset FotNS_P_KENSHIRO_PALETTES_S[] =
{
    { L"Kenshiro S", 0x160, 0x1a0, indexHnKSprites_Kenshiro, 0x00 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_P[] =
{
    { L"Raoh P", 0x5ae038, 0x5ae078, indexHnKSprites_Raoh, 0x00 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_HP[] =
{
    { L"Raoh HP", 0x5ae084, 0x5ae0c4, indexHnKSprites_Raoh, 0x00 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_K[] =
{
    { L"Raoh K", 0x5ae0d0, 0x5ae110, indexHnKSprites_Raoh, 0x00 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_HK[] =
{
    { L"Raoh HK", 0x5ae11c, 0x5ae15c, indexHnKSprites_Raoh, 0x00 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_S[] =
{
    { L"Raoh S", 0x5ae168, 0x5ae1a8, indexHnKSprites_Raoh, 0x00 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_EXTRAS[] =
{
    { L"Raoh Extra 1", 0x5ae1b4, 0x5ae1f4 },
    { L"Raoh Extra 2", 0x5ae200, 0x5ae240 },
};

const sGame_PaletteDataset FotNS_P_TOKI_PALETTES_P[] =
{
    { L"Toki P", 0xd2a030, 0xd2a070, indexHnKSprites_Toki, 0x00 },
};

const sGame_PaletteDataset FotNS_P_TOKI_PALETTES_HP[] =
{
    { L"Toki HP", 0xd2a07c, 0xd2a0bc, indexHnKSprites_Toki, 0x00 },
};

const sGame_PaletteDataset FotNS_P_TOKI_PALETTES_K[] =
{
    { L"Toki K", 0xd2a0c8, 0xd2a108, indexHnKSprites_Toki, 0x00 },
};

const sGame_PaletteDataset FotNS_P_TOKI_PALETTES_HK[] =
{
    { L"Toki HK", 0xd2a114, 0xd2a154, indexHnKSprites_Toki, 0x00 },
};

const sGame_PaletteDataset FotNS_P_TOKI_PALETTES_S[] =
{
    { L"Toki S", 0xd2a160, 0xd2a1a0, indexHnKSprites_Toki, 0x00 },
};

const sGame_PaletteDataset FotNS_P_JAGI_PALETTES_P[] =
{
    { L"Jagi P", 0x11e3030, 0x11e3070, indexHnKSprites_Jagi, 0x00 },
};

const sGame_PaletteDataset FotNS_P_JAGI_PALETTES_HP[] =
{
    { L"Jagi HP", 0x11e307c, 0x11e30bc, indexHnKSprites_Jagi, 0x00 },
};

const sGame_PaletteDataset FotNS_P_JAGI_PALETTES_K[] =
{
    { L"Jagi K", 0x11e30c8, 0x11e3108, indexHnKSprites_Jagi, 0x00 },
};

const sGame_PaletteDataset FotNS_P_JAGI_PALETTES_HK[] =
{
    { L"Jagi HK", 0x11e3114, 0x11e3154, indexHnKSprites_Jagi, 0x00 },
};

const sGame_PaletteDataset FotNS_P_JAGI_PALETTES_S[] =
{
    { L"Jagi S", 0x11e3160, 0x11e31a0, indexHnKSprites_Jagi, 0x00 },
};

const sGame_PaletteDataset FotNS_P_SHIN_PALETTES_P[] =
{
    { L"Shin P", 0x17ea830, 0x17ea870, indexHnKSprites_Shin, 0x00 },
};

const sGame_PaletteDataset FotNS_P_SHIN_PALETTES_HP[] =
{
    { L"Shin HP", 0x17ea87c, 0x17ea8bc, indexHnKSprites_Shin, 0x00 },
};

const sGame_PaletteDataset FotNS_P_SHIN_PALETTES_K[] =
{
    { L"Shin K", 0x17ea8c8, 0x17ea908, indexHnKSprites_Shin, 0x00 },
};

const sGame_PaletteDataset FotNS_P_SHIN_PALETTES_HK[] =
{
    { L"Shin HK", 0x17ea914, 0x17ea954, indexHnKSprites_Shin, 0x00 },
};

const sGame_PaletteDataset FotNS_P_SHIN_PALETTES_S[] =
{
    { L"Shin S", 0x17ea960, 0x17ea9a0, indexHnKSprites_Shin, 0x00 },
};

const sGame_PaletteDataset FotNS_P_REI_PALETTES_P[] =
{
    { L"Rei P", 0x1d51830, 0x1d51870, indexHnKSprites_Rei, 0x00 },
};

const sGame_PaletteDataset FotNS_P_REI_PALETTES_HP[] =
{
    { L"Rei HP", 0x1d5187c, 0x1d518bc, indexHnKSprites_Rei, 0x00 },
};

const sGame_PaletteDataset FotNS_P_REI_PALETTES_K[] =
{
    { L"Rei K", 0x1d518c8, 0x1d51908, indexHnKSprites_Rei, 0x00 },
};

const sGame_PaletteDataset FotNS_P_REI_PALETTES_HK[] =
{
    { L"Rei HK", 0x1d51914, 0x1d51954, indexHnKSprites_Rei, 0x00 },
};

const sGame_PaletteDataset FotNS_P_REI_PALETTES_S[] =
{
    { L"Rei S", 0x1d51960, 0x1d519a0, indexHnKSprites_Rei, 0x00 },
};

const sGame_PaletteDataset FotNS_P_JUDA_PALETTES_P[] =
{
    { L"Juda P", 0x2233030, 0x2233070, indexHnKSprites_Juda, 0x00 },
    { L"Komaku P", 0x2786830, 0x2786850, indexHnKSprites_Juda, 0x02 },
    { L"Dagar P", 0x27b3030, 0x27b3050, indexHnKSprites_Juda, 0x01 },
};

const sGame_PaletteDataset FotNS_P_JUDA_PALETTES_HP[] =
{
    { L"Juda HP", 0x223307c, 0x22330bc, indexHnKSprites_Juda, 0x00 },
    { L"Komaku HP", 0x278685c, 0x278687c, indexHnKSprites_Juda, 0x02 },
    { L"Dagar HP", 0x27b305c, 0x27b307c, indexHnKSprites_Juda, 0x01 },
};

const sGame_PaletteDataset FotNS_P_JUDA_PALETTES_K[] =
{
    { L"Juda K", 0x22330c8, 0x2233108, indexHnKSprites_Juda, 0x00 },
    { L"Komaku K", 0x2786888, 0x27868a8, indexHnKSprites_Juda, 0x02 },
    { L"Dagar K", 0x27b3088, 0x27b30a8, indexHnKSprites_Juda, 0x01 },
};

const sGame_PaletteDataset FotNS_P_JUDA_PALETTES_HK[] =
{
    { L"Juda HK", 0x2233114, 0x2233154, indexHnKSprites_Juda, 0x00 },
    { L"Komaku HK", 0x27868b4, 0x27868d4, indexHnKSprites_Juda, 0x02 },
    { L"Dagar HK", 0x27b30b4, 0x27b30d4, indexHnKSprites_Juda, 0x01 },
};

const sGame_PaletteDataset FotNS_P_JUDA_PALETTES_S[] =
{
    { L"Juda S", 0x2233160, 0x22331a0, indexHnKSprites_Juda, 0x00 },
    { L"Komaku S", 0x27868e0, 0x2786900, indexHnKSprites_Juda, 0x02 },
    { L"Dagar S", 0x27b30e0, 0x27b3100, indexHnKSprites_Juda, 0x01 },
};

const sGame_PaletteDataset FotNS_P_THOUTHER_PALETTES_P[] =
{
    { L"Thouther P", 0x2804830, 0x2804870, indexHnKSprites_Thouther, 0x00 },
};

const sGame_PaletteDataset FotNS_P_THOUTHER_PALETTES_HP[] =
{
    { L"Thouther HP", 0x280487c, 0x28048bc, indexHnKSprites_Thouther, 0x00 },
};

const sGame_PaletteDataset FotNS_P_THOUTHER_PALETTES_K[] =
{
    { L"Thouther K", 0x28048c8, 0x2804908, indexHnKSprites_Thouther, 0x00 },
};

const sGame_PaletteDataset FotNS_P_THOUTHER_PALETTES_HK[] =
{
    { L"Thouther HK", 0x2804914, 0x2804954, indexHnKSprites_Thouther, 0x00 },
};

const sGame_PaletteDataset FotNS_P_THOUTHER_PALETTES_S[] =
{
    { L"Thouther S", 0x2804960, 0x28049a0, indexHnKSprites_Thouther, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MRHEART_PALETTES_P[] =
{
    { L"Mr. Heart P", 0x2cf9830, 0x2cf9870, indexHnKSprites_MrHeart, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MRHEART_PALETTES_HP[] =
{
    { L"Mr. Heart HP", 0x2cf987c, 0x2cf98bc, indexHnKSprites_MrHeart, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MRHEART_PALETTES_K[] =
{
    { L"Mr. Heart K", 0x2cf98c8, 0x2cf9908, indexHnKSprites_MrHeart, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MRHEART_PALETTES_HK[] =
{
    { L"Mr. Heart HK", 0x2cf9914, 0x2cf9954, indexHnKSprites_MrHeart, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MRHEART_PALETTES_S[] =
{
    { L"Mr. Heart S", 0x2cf9960, 0x2cf99a0, indexHnKSprites_MrHeart, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MAMIYA_PALETTES_P[] =
{
    { L"Mamiya P", 0x337e030, 0x337e070, indexHnKSprites_Mamiya, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MAMIYA_PALETTES_HP[] =
{
    { L"Mamiya HP", 0x337e07c, 0x337e0bc, indexHnKSprites_Mamiya, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MAMIYA_PALETTES_K[] =
{
    { L"Mamiya K", 0x337e0c8, 0x337e108, indexHnKSprites_Mamiya, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MAMIYA_PALETTES_HK[] =
{
    { L"Mamiya HK", 0x337e114, 0x337e154, indexHnKSprites_Mamiya, 0x00 },
};

const sGame_PaletteDataset FotNS_P_MAMIYA_PALETTES_S[] =
{
    { L"Mamiya S", 0x337e160, 0x337e1a0, indexHnKSprites_Mamiya, 0x00 },
};

const sGame_PaletteDataset FotNS_P_KENSHIRO_PALETTES_EFFECTS[] =
{
    { L"Tenha no Kamae Flash", 0x39a850, 0x39a890, indexHnKSprites_Kenshiro, 0x00 },
    { L"Tenha no Kamae HUD Icon", 0x426820, 0x426840 },
    { L"Win Stuff: Lynn", 0x45a820, 0x45a840 },
    { L"Win Stuff: Bat", 0x463820, 0x463840 },
};

const sGame_PaletteDataset FotNS_P_RAOH_PALETTES_EFFECTS[] =
{
    { L"Musou Insatsu Flash", 0xa44050, 0xa44090, indexHnKSprites_Raoh, 0x00 },
    { L"Hokuto Donryuu Kohou Flash 1", 0xa4c050, 0xa4c090 },
    { L"Hokuto Donryuu Kohou Flash 2", 0xa51050, 0xa51090 },
    { L"Hokuto Mettenha Flash", 0xa9d850, 0xa9d890 },
    { L"Hokuto Donryuu Kohou HUD Icon", 0xace020, 0xace040 },
    { L"Win Extra", 0xb03820, 0xb03840 },
};

const sGame_PaletteDataset FotNS_P_TOKI_PALETTES_EFFECTS[] =
{
    { L"Counter Move Flash", 0x108b850, 0x108b890, indexHnKSprites_Toki, 0x00 },
    { L"Hikou Sekkatsukou HID Icon", 0x10e3020, 0x10e3040 },
};

const sGame_PaletteDataset FotNS_P_JAGI_PALETTES_EFFECTS[] =
{
    { L"Fufu, Kono Toki wo Matteianoda!", 0x164f850, 0x164f870 },
};

const sGame_PaletteDataset FotNS_P_SHIN_PALETTES_EFFECTS[] =
{
    { L"Blood Effects", 0x1b27820, 0x1b27840 },
    { L"Intro Women", 0x1c25020, 0x1c25040 },
    { L"Shin Win Pose: Yuria", 0x1c32820, 0x1c32860 },
};

const sGame_PaletteDataset FotNS_P_REI_PALETTES_EFFECTS[] =
{
    { L"Nanto Kakuyokujinzan/Kubuenriza", 0x20b9820, 0x20b9840 },
};

const sGame_PaletteDataset FotNS_P_JUDA_PALETTES_EFFECTS[] =
{
    { L"Kesshou Shi Effect", 0x25d8850, 0x25d8890, indexHnKSprites_Juda, 0x00 },
};

const sGame_PaletteDataset FotNS_P_THOUTHER_PALETTES_EFFECTS[] =
{
    { L"Houou Koutou Kaiten Meter", 0x2bb3020, 0x2bb3040 },
    { L"Intro Stuff", 0x2beb820, 0x2beb860 },
};

const sGame_PaletteDataset FotNS_P_MRHEART_PALETTES_EFFECTS[] =
{
    { L"Club", 0x31c7820, 0x31c7840 },
    { L"It Really Hurts!! Effect", 0x31e3820, 0x31e3860, indexHnKSprites_MrHeart, 0x00 },
    { L"Activation! HUD", 0x3232020, 0x3232040 },
};

const sGame_PaletteDataset FotNS_P_MAMIYA_PALETTES_EFFECTS[] =
{
    { L"Spike and Bowgun HUD", 0x368f820, 0x368f840 },
};

const sDescTreeNode FotNS_P_KENSHIRO_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_PALETTES_P, ARRAYSIZE(FotNS_P_KENSHIRO_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_PALETTES_HP, ARRAYSIZE(FotNS_P_KENSHIRO_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_PALETTES_K, ARRAYSIZE(FotNS_P_KENSHIRO_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_PALETTES_HK, ARRAYSIZE(FotNS_P_KENSHIRO_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_PALETTES_S, ARRAYSIZE(FotNS_P_KENSHIRO_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_KENSHIRO_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_RAOH_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_P, ARRAYSIZE(FotNS_P_RAOH_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_HP, ARRAYSIZE(FotNS_P_RAOH_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_K, ARRAYSIZE(FotNS_P_RAOH_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_HK, ARRAYSIZE(FotNS_P_RAOH_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_S, ARRAYSIZE(FotNS_P_RAOH_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_RAOH_PALETTES_EFFECTS) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_PALETTES_EXTRAS, ARRAYSIZE(FotNS_P_RAOH_PALETTES_EXTRAS) },
};

const sDescTreeNode FotNS_P_TOKI_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_PALETTES_P, ARRAYSIZE(FotNS_P_TOKI_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_PALETTES_HP, ARRAYSIZE(FotNS_P_TOKI_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_PALETTES_K, ARRAYSIZE(FotNS_P_TOKI_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_PALETTES_HK, ARRAYSIZE(FotNS_P_TOKI_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_PALETTES_S, ARRAYSIZE(FotNS_P_TOKI_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_TOKI_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_JAGI_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_PALETTES_P, ARRAYSIZE(FotNS_P_JAGI_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_PALETTES_HP, ARRAYSIZE(FotNS_P_JAGI_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_PALETTES_K, ARRAYSIZE(FotNS_P_JAGI_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_PALETTES_HK, ARRAYSIZE(FotNS_P_JAGI_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_PALETTES_S, ARRAYSIZE(FotNS_P_JAGI_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_JAGI_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_SHIN_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_PALETTES_P, ARRAYSIZE(FotNS_P_SHIN_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_PALETTES_HP, ARRAYSIZE(FotNS_P_SHIN_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_PALETTES_K, ARRAYSIZE(FotNS_P_SHIN_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_PALETTES_HK, ARRAYSIZE(FotNS_P_SHIN_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_PALETTES_S, ARRAYSIZE(FotNS_P_SHIN_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_SHIN_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_REI_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_PALETTES_P, ARRAYSIZE(FotNS_P_REI_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_PALETTES_HP, ARRAYSIZE(FotNS_P_REI_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_PALETTES_K, ARRAYSIZE(FotNS_P_REI_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_PALETTES_HK, ARRAYSIZE(FotNS_P_REI_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_PALETTES_S, ARRAYSIZE(FotNS_P_REI_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_REI_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_JUDA_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_PALETTES_P, ARRAYSIZE(FotNS_P_JUDA_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_PALETTES_HP, ARRAYSIZE(FotNS_P_JUDA_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_PALETTES_K, ARRAYSIZE(FotNS_P_JUDA_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_PALETTES_HK, ARRAYSIZE(FotNS_P_JUDA_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_PALETTES_S, ARRAYSIZE(FotNS_P_JUDA_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_JUDA_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_THOUTHER_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_PALETTES_P, ARRAYSIZE(FotNS_P_THOUTHER_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_PALETTES_HP, ARRAYSIZE(FotNS_P_THOUTHER_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_PALETTES_K, ARRAYSIZE(FotNS_P_THOUTHER_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_PALETTES_HK, ARRAYSIZE(FotNS_P_THOUTHER_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_PALETTES_S, ARRAYSIZE(FotNS_P_THOUTHER_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_THOUTHER_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_MRHEART_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_PALETTES_P, ARRAYSIZE(FotNS_P_MRHEART_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_PALETTES_HP, ARRAYSIZE(FotNS_P_MRHEART_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_PALETTES_K, ARRAYSIZE(FotNS_P_MRHEART_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_PALETTES_HK, ARRAYSIZE(FotNS_P_MRHEART_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_PALETTES_S, ARRAYSIZE(FotNS_P_MRHEART_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_MRHEART_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_MAMIYA_COLLECTION[] =
{
    { L"P", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_PALETTES_P, ARRAYSIZE(FotNS_P_MAMIYA_PALETTES_P) },
    { L"HP", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_PALETTES_HP, ARRAYSIZE(FotNS_P_MAMIYA_PALETTES_HP) },
    { L"K", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_PALETTES_K, ARRAYSIZE(FotNS_P_MAMIYA_PALETTES_K) },
    { L"HK", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_PALETTES_HK, ARRAYSIZE(FotNS_P_MAMIYA_PALETTES_HK) },
    { L"S", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_PALETTES_S, ARRAYSIZE(FotNS_P_MAMIYA_PALETTES_S) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_PALETTES_EFFECTS, ARRAYSIZE(FotNS_P_MAMIYA_PALETTES_EFFECTS) },
};

const sDescTreeNode FotNS_P_UNITS[] =
{
    { L"Kenshiro", DESC_NODETYPE_TREE, (void*)FotNS_P_KENSHIRO_COLLECTION, ARRAYSIZE(FotNS_P_KENSHIRO_COLLECTION) },
    { L"Raoh", DESC_NODETYPE_TREE, (void*)FotNS_P_RAOH_COLLECTION, ARRAYSIZE(FotNS_P_RAOH_COLLECTION) },
    { L"Toki", DESC_NODETYPE_TREE, (void*)FotNS_P_TOKI_COLLECTION, ARRAYSIZE(FotNS_P_TOKI_COLLECTION) },
    { L"Jagi", DESC_NODETYPE_TREE, (void*)FotNS_P_JAGI_COLLECTION, ARRAYSIZE(FotNS_P_JAGI_COLLECTION) },
    { L"Shin", DESC_NODETYPE_TREE, (void*)FotNS_P_SHIN_COLLECTION, ARRAYSIZE(FotNS_P_SHIN_COLLECTION) },
    { L"Rei", DESC_NODETYPE_TREE, (void*)FotNS_P_REI_COLLECTION, ARRAYSIZE(FotNS_P_REI_COLLECTION) },
    { L"Juda", DESC_NODETYPE_TREE, (void*)FotNS_P_JUDA_COLLECTION, ARRAYSIZE(FotNS_P_JUDA_COLLECTION) },
    { L"Thouther", DESC_NODETYPE_TREE, (void*)FotNS_P_THOUTHER_COLLECTION, ARRAYSIZE(FotNS_P_THOUTHER_COLLECTION) },
    { L"Mr. Heart", DESC_NODETYPE_TREE, (void*)FotNS_P_MRHEART_COLLECTION, ARRAYSIZE(FotNS_P_MRHEART_COLLECTION) },
    { L"Mamiya", DESC_NODETYPE_TREE, (void*)FotNS_P_MAMIYA_COLLECTION, ARRAYSIZE(FotNS_P_MAMIYA_COLLECTION) },
};
