#pragma once

const UINT16 SAMSHO5_A_IMGIDS_USED[] =
{
    indexSamSho5Sprites_Amakusa,
    indexSamSho5Sprites_Basara,
    indexSamSho5Sprites_Charlotte,
    indexSamSho5Sprites_Enja,
    indexSamSho5Sprites_Gaira,
    indexSamSho5Sprites_Galford,
    indexSamSho5Sprites_Gaoh,
    indexSamSho5Sprites_Genjuro,
    indexSamSho5Sprites_Hanzo,
    indexSamSho5Sprites_Haohmaru,
    indexSamSho5Sprites_Jubei,
    indexSamSho5Sprites_Kazuki,
    indexSamSho5Sprites_Kusaregedo,
    indexSamSho5Sprites_Kyoshiro,
    indexSamSho5Sprites_Mina,
    indexSamSho5Sprites_Mizuki,
    indexSamSho5Sprites_Nakoruru,
    indexSamSho5Sprites_Rasetsumaru,
    indexSamSho5Sprites_Rera,
    indexSamSho5Sprites_Rimururu,
    indexSamSho5Sprites_Shizumaru,
    indexSamSho5Sprites_Sogetsu,
    indexSamSho5Sprites_Suija,
    indexSamSho5Sprites_TamTam,
    indexSamSho5Sprites_Ukyo,
    indexSamSho5Sprites_Yoshitora,
    indexSamSho5Sprites_Yunfei,
    indexSamSho5Sprites_Portrait,
    indexSamSho5Sprites_Bonus,
    indexSamSho5Sprites_Stages,

    indexSS5_Basara,        // 0x31
    indexSS5_Charlotte,     // 0x32
    indexSS5_Enja,          // 0x33
    indexSS5_Gaira,         // 0x34
    indexSS5_Galford,       // 0x35
    indexSS5_Gaoh,          // 0x36
    indexSS5_Genjuro,       // 0x37
    indexSS5_Hanzo,         // 0x38
    indexSS5_Haohmaru,      // 0x39
    indexSS5_Jubei,         // 0x3A
    indexSS5_Kazuki,        // 0x3B
    indexSS5_Kusaregedo,    // 0x3C
    indexSS5_Kyoshiro,      // 0x3D
    indexSS5_Mina,          // 0x3E
    indexSS5_Nakoruru,      // 0x3F
    indexSS5_Rasetsumaru,   // 0x40
    indexSS5_Rera,          // 0x41
    indexSS5_Rimururu,      // 0x42
    indexSS5_Sankuro,       // 0x43
    indexSS5_Shizumaru,     // 0x44
    indexSS5_Sogetsu,       // 0x45
    indexSS5_Suija,         // 0x46
    indexSS5_TamTam,        // 0x47
    indexSS5_Ukyo,          // 0x48
    indexSS5_Yoshitora,     // 0x49
    indexSS5_Yumeji,        // 0x4A
    indexSS5_Yunfei,        // 0x4B
    indexSS5_Bonus,         // 0x4c
    indexSS5_Stages,        // 0x4d
};

const sGame_PaletteDataset SAMSHO5_A_Basara_PALETTES_A[] =
{
    //--A--
    { L"Basara A", 0xdd000, 0xdd040, indexSamSho5Sprites_Basara },
    { L"Basara A Rage", 0xdd040, 0xdd080, indexSamSho5Sprites_Basara },
    { L"Basara A Burned", 0xdd0c0, 0xdd100, indexSamSho5Sprites_Basara },
    { L"Basara A Zapped", 0xdd100, 0xdd140, indexSamSho5Sprites_Basara },
    { L"Basara A Freezed", 0xdd140, 0xdd180, indexSamSho5Sprites_Basara },
    { L"Basara A KI", 0xdd180, 0xdd1c0, indexSamSho5Sprites_Basara },
    { L"Basara A Issen Trail", 0xdd200, 0xdd240, indexSamSho5Sprites_Basara },
    { L"Basara A SON", 0xdd240, 0xdd280, indexSamSho5Sprites_Basara },
    { L"Basara A Shadow Powers", 0xdd300, 0xdd340, indexSamSho5Sprites_Basara },
    { L"Basara A Bat", 0xdd280, 0xdd2a0 },
    { L"Basara A Kagabari", 0xdd2a0, 0xdd2c0 },
    { L"Basara A Soul of Noe Effect", 0xdd1c0, 0xdd1e0 },
    { L"Basara A Slash Effect", 0xdd340, 0xdd360 },
};

const sGame_PaletteDataset SAMSHO5_A_Basara_PALETTES_B[] =
{
    // --B--
    { L"Basara B", 0xdd400, 0xdd440, indexSamSho5Sprites_Basara },
    { L"Basara B Rage", 0xdd440, 0xdd480, indexSamSho5Sprites_Basara },
    { L"Basara B Burned", 0xdd4c0, 0xdd500, indexSamSho5Sprites_Basara },
    { L"Basara B Zapped", 0xdd500, 0xdd540, indexSamSho5Sprites_Basara },
    { L"Basara B Freezed", 0xdd540, 0xdd580, indexSamSho5Sprites_Basara },
    { L"Basara B KI", 0xdd580, 0xdd5c0, indexSamSho5Sprites_Basara },
    { L"Basara B Issen Trail", 0xdd600, 0xdd640, indexSamSho5Sprites_Basara },
    { L"Basara B SON", 0xdd640, 0xdd680, indexSamSho5Sprites_Basara },
    { L"Basara B Shadow Powers", 0xdd700, 0xdd740, indexSamSho5Sprites_Basara },
    { L"Basara B Bat", 0xdd680, 0xdd6a0 },
    { L"Basara B Kagabari", 0xdd6a0, 0xdd6c0 },
    { L"Basara B Soul of Noe Effect", 0xdd5c0, 0xdd5e0 },
    { L"Basara B Slash Effect", 0xdd740, 0xdd760 },
};

const sGame_PaletteDataset SAMSHO5_A_Basara_PALETTES_C[] =
{
    // --C--
    { L"Basara C", 0xdd800, 0xdd840, indexSamSho5Sprites_Basara },
    { L"Basara C Rage", 0xdd840, 0xdd880, indexSamSho5Sprites_Basara },
    { L"Basara C Burned", 0xdd8c0, 0xdd900, indexSamSho5Sprites_Basara },
    { L"Basara C Zapped", 0xdd900, 0xdd940, indexSamSho5Sprites_Basara },
    { L"Basara C Freezed", 0xdd940, 0xdd980, indexSamSho5Sprites_Basara },
    { L"Basara C KI", 0xdd980, 0xdd9c0, indexSamSho5Sprites_Basara },
    { L"Basara C Issen Trail", 0xdda00, 0xdda40, indexSamSho5Sprites_Basara },
    { L"Basara C SON", 0xdda40, 0xdda80, indexSamSho5Sprites_Basara },
    { L"Basara C Shadow Powers", 0xddb00, 0xddb40, indexSamSho5Sprites_Basara },
    { L"Basara C Bat", 0xdda80, 0xddaa0 },
    { L"Basara C Kagabari", 0xddaa0, 0xddac0 },
    { L"Basara C Soul of Noe Effect", 0xdd9c0, 0xdd9e0 },
    { L"Basara C Slash Effect", 0xddb40, 0xddb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Basara_PALETTES_D[] =
{
    // --D--
    { L"Basara D", 0xddc00, 0xddc40, indexSamSho5Sprites_Basara },
    { L"Basara D Rage", 0xddc40, 0xddc80, indexSamSho5Sprites_Basara },
    { L"Basara D Burned", 0xddcc0, 0xddd00, indexSamSho5Sprites_Basara },
    { L"Basara D Zapped", 0xddd00, 0xddd40, indexSamSho5Sprites_Basara },
    { L"Basara D Freezed", 0xddd40, 0xddd80, indexSamSho5Sprites_Basara },
    { L"Basara D KI", 0xddd80, 0xdddc0, indexSamSho5Sprites_Basara },
    { L"Basara D Issen Trail", 0xdde00, 0xdde40, indexSamSho5Sprites_Basara },
    { L"Basara D SON", 0xdde40, 0xdde80, indexSamSho5Sprites_Basara },
    { L"Basara D Shadow Powers", 0xddf00, 0xddf40, indexSamSho5Sprites_Basara },
    { L"Basara D Bat", 0xdde80, 0xddea0 },
    { L"Basara D Kagabari", 0xddea0, 0xddec0 },
    { L"Basara D Soul of Noe Effect", 0xdddc0, 0xddde0 },
    { L"Basara D Slash Effect", 0xddf40, 0xddf60 },
};

const sGame_PaletteDataset SAMSHO5_A_Charlotte_PALETTES_A[] =
{
    //--A--
    { L"Charlotte A", 0xe3000, 0xe3040, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A Rage", 0xe3040, 0xe3080, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A Burned", 0xe30c0, 0xe3100, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A Zapped", 0xe3100, 0xe3140, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A Freezed", 0xe3140, 0xe3180, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A KI", 0xe3180, 0xe31c0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A Issen Trail", 0xe3200, 0xe3240, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A SON", 0xe3240, 0xe3280, indexSamSho5Sprites_Charlotte },
    { L"Charlotte A Rose", 0xe32e0, 0xe3300 },
    { L"Charlotte A Crystal Rose 1", 0xe3080, 0xe30a0 },
    { L"Charlotte A Crystal Rose 2", 0xe30a0, 0xe30c0 },
    { L"Charlotte A Super Slash Effect 1", 0xe3280, 0xe32a0 },
    { L"Charlotte A Super Slash Effect 2", 0xe32a0, 0xe32c0 },
    { L"Charlotte A Slash Effect 1", 0xe3340, 0xe3360 },
    { L"Charlotte A Slash Effect 2", 0xe3360, 0xe3380 },
};

const sGame_PaletteDataset SAMSHO5_A_Charlotte_PALETTES_B[] =
{
    // --B--
    { L"Charlotte B", 0xe3400, 0xe3440, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B Rage", 0xe3440, 0xe3480, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B Burned", 0xe34c0, 0xe3500, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B Zapped", 0xe3500, 0xe3540, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B Freezed", 0xe3540, 0xe3580, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B KI", 0xe3580, 0xe35c0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B Issen Trail", 0xe3600, 0xe3640, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B SON", 0xe3640, 0xe3680, indexSamSho5Sprites_Charlotte },
    { L"Charlotte B Rose", 0xe36e0, 0xe3700 },
    { L"Charlotte B Crystal Rose 1", 0xe3480, 0xe34a0 },
    { L"Charlotte B Crystal Rose 2", 0xe34a0, 0xe34c0 },
    { L"Charlotte B Super Slash Effect 1", 0xe3680, 0xe36a0 },
    { L"Charlotte B Super Slash Effect 2", 0xe36a0, 0xe36c0 },
    { L"Charlotte B Slash Effect 1", 0xe3740, 0xe3760 },
    { L"Charlotte B Slash Effect 2", 0xe3760, 0xe3780 },
};

const sGame_PaletteDataset SAMSHO5_A_Charlotte_PALETTES_C[] =
{
    // --C--
    { L"Charlotte C", 0xe3800, 0xe3840, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C Rage", 0xe3840, 0xe3880, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C Burned", 0xe38c0, 0xe3900, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C Zapped", 0xe3900, 0xe3940, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C Freezed", 0xe3940, 0xe3980, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C KI", 0xe3980, 0xe39c0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C Issen Trail", 0xe3a00, 0xe3a40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C SON", 0xe3a40, 0xe3a80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte C Rose", 0xe3ae0, 0xe3b00 },
    { L"Charlotte C Crystal Rose 1", 0xe3880, 0xe38a0 },
    { L"Charlotte C Crystal Rose 2", 0xe38a0, 0xe38c0 },
    { L"Charlotte C Super Slash Effect 1", 0xe3a80, 0xe3aa0 },
    { L"Charlotte C Super Slash Effect 2", 0xe3aa0, 0xe3ac0 },
    { L"Charlotte C Slash Effect 1", 0xe3b40, 0xe3b60 },
    { L"Charlotte C Slash Effect 2", 0xe3b60, 0xe3b80 },
};

const sGame_PaletteDataset SAMSHO5_A_Charlotte_PALETTES_D[] =
{
    // --D--
    { L"Charlotte D", 0xe3c00, 0xe3c40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D Rage", 0xe3c40, 0xe3c80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D Burned", 0xe3cc0, 0xe3d00, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D Zapped", 0xe3d00, 0xe3d40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D Freezed", 0xe3d40, 0xe3d80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D KI", 0xe3d80, 0xe3dc0, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D Issen Trail", 0xe3e00, 0xe3e40, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D SON", 0xe3e40, 0xe3e80, indexSamSho5Sprites_Charlotte },
    { L"Charlotte D Rose", 0xe3ee0, 0xe3f00 },
    { L"Charlotte D Crystal Rose 1", 0xe3c80, 0xe3ca0 },
    { L"Charlotte D Crystal Rose 2", 0xe3ca0, 0xe3cc0 },
    { L"Charlotte D Super Slash Effect 1", 0xe3e80, 0xe3ea0 },
    { L"Charlotte D Super Slash Effect 2", 0xe3ea0, 0xe3ec0 },
    { L"Charlotte D Slash Effect 1", 0xe3f40, 0xe3f60 },
    { L"Charlotte D Slash Effect 2", 0xe3f60, 0xe3f80 },
};

const sGame_PaletteDataset SAMSHO5_A_Enja_PALETTES_A[] =
{
    //--A--
    { L"Enja A", 0xe9000, 0xe9040, indexSamSho5Sprites_Enja },
    { L"Enja A Rage", 0xe9040, 0xe9080, indexSamSho5Sprites_Enja },
    { L"Enja A Burned", 0xe90c0, 0xe9100, indexSamSho5Sprites_Enja },
    { L"Enja A Zapped", 0xe9100, 0xe9140, indexSamSho5Sprites_Enja },
    { L"Enja A Freezed", 0xe9140, 0xe9180, indexSamSho5Sprites_Enja },
    { L"Enja A KI", 0xe9180, 0xe91c0, indexSamSho5Sprites_Enja },
    { L"Enja A Issen Trail", 0xe9200, 0xe9240, indexSamSho5Sprites_Enja },
    { L"Enja A SON", 0xe9240, 0xe9280, indexSamSho5Sprites_Enja },
    { L"Enja A Fire Pal 1", 0xe9320, 0xe9340 },
    { L"Enja A Fire Pal 2", 0xe9300, 0xe9320 },
    { L"Enja A Fire Effect 1", 0xe9340, 0xe9360 },
    { L"Enja A Fire Effect 2", 0xe9380, 0xe93a0 },
    { L"Enja A Flaming Destruction Pal", 0xe93e0, 0xe9400 },
};

const sGame_PaletteDataset SAMSHO5_A_Enja_PALETTES_B[] =
{
    // --B--
    { L"Enja B", 0xe9400, 0xe9440, indexSamSho5Sprites_Enja },
    { L"Enja B Rage", 0xe9440, 0xe9480, indexSamSho5Sprites_Enja },
    { L"Enja B Burned", 0xe94c0, 0xe9500, indexSamSho5Sprites_Enja },
    { L"Enja B Zapped", 0xe9500, 0xe9540, indexSamSho5Sprites_Enja },
    { L"Enja B Freezed", 0xe9540, 0xe9580, indexSamSho5Sprites_Enja },
    { L"Enja B KI", 0xe9580, 0xe95c0, indexSamSho5Sprites_Enja },
    { L"Enja B Issen Trail", 0xe9600, 0xe9640, indexSamSho5Sprites_Enja },
    { L"Enja B SON", 0xe9640, 0xe9680, indexSamSho5Sprites_Enja },
    { L"Enja B Fire Pal 1", 0xe9720, 0xe9740 },
    { L"Enja B Fire Pal 2", 0xe9700, 0xe9720 },
    { L"Enja B Fire Effect 1", 0xe9740, 0xe9760 },
    { L"Enja B Fire Effect 2", 0xe9780, 0xe97a0 },
    { L"Enja B Flaming Destruction Pal", 0xe97e0, 0xe9800 },
};

const sGame_PaletteDataset SAMSHO5_A_Enja_PALETTES_C[] =
{
    // --C--
    { L"Enja C", 0xe9800, 0xe9840, indexSamSho5Sprites_Enja },
    { L"Enja C Rage", 0xe9840, 0xe9880, indexSamSho5Sprites_Enja },
    { L"Enja C Burned", 0xe98c0, 0xe9900, indexSamSho5Sprites_Enja },
    { L"Enja C Zapped", 0xe9900, 0xe9940, indexSamSho5Sprites_Enja },
    { L"Enja C Freezed", 0xe9940, 0xe9980, indexSamSho5Sprites_Enja },
    { L"Enja C KI", 0xe9980, 0xe99c0, indexSamSho5Sprites_Enja },
    { L"Enja C Issen Trail", 0xe9a00, 0xe9a40, indexSamSho5Sprites_Enja },
    { L"Enja C SON", 0xe9a40, 0xe9a80, indexSamSho5Sprites_Enja },
    { L"Enja C Fire Pal 1", 0xe9b20, 0xe9b40 },
    { L"Enja C Fire Pal 2", 0xe9b00, 0xe9b20 },
    { L"Enja C Fire Effect 1", 0xe9b40, 0xe9b60 },
    { L"Enja C Fire Effect 2", 0xe9b80, 0xe9ba0 },
    { L"Enja C Flaming Destruction Pal", 0xe9be0, 0xe9c00 },
};

const sGame_PaletteDataset SAMSHO5_A_Enja_PALETTES_D[] =
{
    // --D--
    { L"Enja D", 0xe9c00, 0xe9c40, indexSamSho5Sprites_Enja },
    { L"Enja D Rage", 0xe9c40, 0xe9c80, indexSamSho5Sprites_Enja },
    { L"Enja D Burned", 0xe9cc0, 0xe9d00, indexSamSho5Sprites_Enja },
    { L"Enja D Zapped", 0xe9d00, 0xe9d40, indexSamSho5Sprites_Enja },
    { L"Enja D Freezed", 0xe9d40, 0xe9d80, indexSamSho5Sprites_Enja },
    { L"Enja D KI", 0xe9d80, 0xe9dc0, indexSamSho5Sprites_Enja },
    { L"Enja D Issen Trail", 0xe9e00, 0xe9e40, indexSamSho5Sprites_Enja },
    { L"Enja D SON", 0xe9e40, 0xe9e80, indexSamSho5Sprites_Enja },
    { L"Enja D Fire Pal 1", 0xe9f20, 0xe9f40 },
    { L"Enja D Fire Pal 2", 0xe9f00, 0xe9f20 },
    { L"Enja D Fire Effect 1", 0xe9f40, 0xe9f60 },
    { L"Enja D Fire Effect 2", 0xe9f80, 0xe9fa0 },
    { L"Enja D Flaming Destruction Pal", 0xe9fe0, 0xea000 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaira_PALETTES_A[] =
{
    //--A--
    { L"Gaira A", 0xdf000, 0xdf040, indexSamSho5Sprites_Gaira },
    { L"Gaira A Rage", 0xdf040, 0xdf080, indexSamSho5Sprites_Gaira },
    { L"Gaira A Burned", 0xdf0c0, 0xdf100, indexSamSho5Sprites_Gaira },
    { L"Gaira A Zapped", 0xdf100, 0xdf140, indexSamSho5Sprites_Gaira },
    { L"Gaira A Freezed", 0xdf140, 0xdf180, indexSamSho5Sprites_Gaira },
    { L"Gaira A KI", 0xdf180, 0xdf1c0, indexSamSho5Sprites_Gaira },
    { L"Gaira A Issen Trail", 0xdf200, 0xdf240, indexSamSho5Sprites_Gaira },
    { L"Gaira A SON", 0xdf240, 0xdf280, indexSamSho5Sprites_Gaira },
    { L"Gaira A Weapon Flash", 0xdf1c0, 0xdf1e0 },
    { L"Gaira A Win Pose Extra", 0xdf2e0, 0xdf300 },
    { L"Gaira A Exploding Euthanasia 1", 0xdf280, 0xdf2a0 },
    { L"Gaira A Exploding Euthanasia 2", 0xdf2c0, 0xdf2e0 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaira_PALETTES_B[] =
{
    // --B--
    { L"Gaira B", 0xdf400, 0xdf440, indexSamSho5Sprites_Gaira },
    { L"Gaira B Rage", 0xdf440, 0xdf480, indexSamSho5Sprites_Gaira },
    { L"Gaira B Burned", 0xdf4c0, 0xdf500, indexSamSho5Sprites_Gaira },
    { L"Gaira B Zapped", 0xdf500, 0xdf540, indexSamSho5Sprites_Gaira },
    { L"Gaira B Freezed", 0xdf540, 0xdf580, indexSamSho5Sprites_Gaira },
    { L"Gaira B KI", 0xdf580, 0xdf5c0, indexSamSho5Sprites_Gaira },
    { L"Gaira B Issen Trail", 0xdf600, 0xdf640, indexSamSho5Sprites_Gaira },
    { L"Gaira B SON", 0xdf640, 0xdf680, indexSamSho5Sprites_Gaira },
    { L"Gaira B Weapon Flash", 0xdf5c0, 0xdf5e0 },
    { L"Gaira B Win Pose Extra", 0xdf6e0, 0xdf700 },
    { L"Gaira B Exploding Euthanasia 1", 0xdf680, 0xdf6a0 },
    { L"Gaira B Exploding Euthanasia 2", 0xdf6c0, 0xdf6e0 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaira_PALETTES_C[] =
{
    // --C--
    { L"Gaira C", 0xdf800, 0xdf840, indexSamSho5Sprites_Gaira },
    { L"Gaira C Rage", 0xdf840, 0xdf880, indexSamSho5Sprites_Gaira },
    { L"Gaira C Burned", 0xdf8c0, 0xdf900, indexSamSho5Sprites_Gaira },
    { L"Gaira C Zapped", 0xdf900, 0xdf940, indexSamSho5Sprites_Gaira },
    { L"Gaira C Freezed", 0xdf940, 0xdf980, indexSamSho5Sprites_Gaira },
    { L"Gaira C KI", 0xdf980, 0xdf9c0, indexSamSho5Sprites_Gaira },
    { L"Gaira C Issen Trail", 0xdfa00, 0xdfa40, indexSamSho5Sprites_Gaira },
    { L"Gaira C SON", 0xdfa40, 0xdfa80, indexSamSho5Sprites_Gaira },
    { L"Gaira C Weapon Flash", 0xdf9c0, 0xdf9e0 },
    { L"Gaira C Win Pose Extra", 0xdfae0, 0xdfb00 },
    { L"Gaira C Exploding Euthanasia 1", 0xdfa80, 0xdfaa0 },
    { L"Gaira C Exploding Euthanasia 2", 0xdfac0, 0xdfae0 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaira_PALETTES_D[] =
{
    // --D--
    { L"Gaira D", 0xdfc00, 0xdfc40, indexSamSho5Sprites_Gaira },
    { L"Gaira D Rage", 0xdfc40, 0xdfc80, indexSamSho5Sprites_Gaira },
    { L"Gaira D Burned", 0xdfcc0, 0xdfd00, indexSamSho5Sprites_Gaira },
    { L"Gaira D Zapped", 0xdfd00, 0xdfd40, indexSamSho5Sprites_Gaira },
    { L"Gaira D Freezed", 0xdfd40, 0xdfd80, indexSamSho5Sprites_Gaira },
    { L"Gaira D KI", 0xdfd80, 0xdfdc0, indexSamSho5Sprites_Gaira },
    { L"Gaira D Issen Trail", 0xdfe00, 0xdfe40, indexSamSho5Sprites_Gaira },
    { L"Gaira D SON", 0xdfe40, 0xdfe80, indexSamSho5Sprites_Gaira },
    { L"Gaira D Weapon Flash", 0xdfdc0, 0xdfde0 },
    { L"Gaira D Win Pose Extra", 0xdfee0, 0xdff00 },
    { L"Gaira D Exploding Euthanasia 1", 0xdfe80, 0xdfea0 },
    { L"Gaira D Exploding Euthanasia 2", 0xdfec0, 0xdfee0 },
};

const sGame_PaletteDataset SAMSHO5_A_Galford_PALETTES_A[] =
{
    { L"Galford A", 0xd9000, 0xd9040, indexSamSho5Sprites_Galford, 0, &pairNext8 },
    { L"Galford A Rage", 0xd9040, 0xd9080, indexSamSho5Sprites_Galford, 0, &pairNext7 },
    { L"Galford A Burned", 0xd90c0, 0xd9100, indexSamSho5Sprites_Galford, 0, &pairNext6 },
    { L"Galford A Zapped", 0xd9100, 0xd9140, indexSamSho5Sprites_Galford, 0, &pairNext5 },
    { L"Galford A Freezed", 0xd9140, 0xd9180, indexSamSho5Sprites_Galford, 0, &pairNext4 },
    { L"Galford A KI", 0xd9180, 0xd91c0, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford A Issen Trail", 0xd9200, 0xd9240, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford A SON", 0xd9240, 0xd9280, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy A", 0xd9280, 0xd92a0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford A Plasma Sword", 0xd92a0, 0xd92c0 },
    { L"Galford A Plasma Effect 1", 0xd92c0, 0xd92e0 },
    { L"Galford A Plasma Effect 2", 0xd92e0, 0xd9300 },
    { L"Galford A Smoke", 0xd9320, 0xd9340 },
    { L"Galford A Trunk", 0xd9360, 0xd9380 },
    { L"Galford A Slash Effect", 0xd9340, 0xd9360 },
};

const sGame_PaletteDataset SAMSHO5_A_Galford_PALETTES_B[] =
{
    // --B--
    { L"Galford B", 0xd9400, 0xd9440, indexSamSho5Sprites_Galford, 0, &pairNext8 },
    { L"Galford B Rage", 0xd9440, 0xd9480, indexSamSho5Sprites_Galford, 0, &pairNext7 },
    { L"Galford B Burned", 0xd94c0, 0xd9500, indexSamSho5Sprites_Galford, 0, &pairNext6 },
    { L"Galford B Zapped", 0xd9500, 0xd9540, indexSamSho5Sprites_Galford, 0, &pairNext5 },
    { L"Galford B Freezed", 0xd9540, 0xd9580, indexSamSho5Sprites_Galford, 0, &pairNext4 },
    { L"Galford B KI", 0xd9580, 0xd95c0, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford B Issen Trail", 0xd9600, 0xd9640, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford B SON", 0xd9640, 0xd9680, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy B", 0xd9680, 0xd96a0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford B Plasma Sword", 0xd96a0, 0xd96c0 },
    { L"Galford B Plasma Effect 1", 0xd96c0, 0xd96e0 },
    { L"Galford B Plasma Effect 2", 0xd96e0, 0xd9700 },
    { L"Galford B Smoke", 0xd9720, 0xd9740 },
    { L"Galford B Trunk", 0xd9760, 0xd9780 },
    { L"Galford B Slash Effect", 0xd9740, 0xd9760 },
};

const sGame_PaletteDataset SAMSHO5_A_Galford_PALETTES_C[] =
{
    // --C--
    { L"Galford C", 0xd9800, 0xd9840, indexSamSho5Sprites_Galford, 0, &pairNext8 },
    { L"Galford C Rage", 0xd9840, 0xd9880, indexSamSho5Sprites_Galford, 0, &pairNext7 },
    { L"Galford C Burned", 0xd98c0, 0xd9900, indexSamSho5Sprites_Galford, 0, &pairNext6 },
    { L"Galford C Zapped", 0xd9900, 0xd9940, indexSamSho5Sprites_Galford, 0, &pairNext5 },
    { L"Galford C Freezed", 0xd9940, 0xd9980, indexSamSho5Sprites_Galford, 0, &pairNext4 },
    { L"Galford C KI", 0xd9980, 0xd99c0, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford C Issen Trail", 0xd9a00, 0xd9a40, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford C SON", 0xd9a40, 0xd9a80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy C", 0xd9a80, 0xd9aa0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford C Plasma Sword", 0xd9aa0, 0xd9ac0 },
    { L"Galford C Plasma Effect 1", 0xd9ac0, 0xd9ae0 },
    { L"Galford C Plasma Effect 2", 0xd9ae0, 0xd9b00 },
    { L"Galford C Smoke", 0xd9b20, 0xd9b40 },
    { L"Galford C Trunk", 0xd9b60, 0xd9b80 },
    { L"Galford C Slash Effect", 0xd9b40, 0xd9b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Galford_PALETTES_D[] =
{
    // --D--
    { L"Galford D", 0xd9c00, 0xd9c40, indexSamSho5Sprites_Galford, 0, &pairNext8 },
    { L"Galford D Rage", 0xd9c40, 0xd9c80, indexSamSho5Sprites_Galford, 0, &pairNext7 },
    { L"Galford D Burned", 0xd9cc0, 0xd9d00, indexSamSho5Sprites_Galford, 0, &pairNext6 },
    { L"Galford D Zapped", 0xd9d00, 0xd9d40, indexSamSho5Sprites_Galford, 0, &pairNext5 },
    { L"Galford D Freezed", 0xd9d40, 0xd9d80, indexSamSho5Sprites_Galford, 0, &pairNext4 },
    { L"Galford D KI", 0xd9d80, 0xd9dc0, indexSamSho5Sprites_Galford, 0, &pairNext3 },
    { L"Galford D Issen Trail", 0xd9e00, 0xd9e40, indexSamSho5Sprites_Galford, 0, &pairNext2 },
    { L"Galford D SON", 0xd9e40, 0xd9e80, indexSamSho5Sprites_Galford, 0, &pairNext },
    { L"Poppy D", 0xd9e80, 0xd9ea0, indexSamSho5Sprites_Galford, 1 },
    { L"Galford D Plasma Sword", 0xd9ea0, 0xd9ec0 },
    { L"Galford D Plasma Effect 1", 0xd9ec0, 0xd9ee0 },
    { L"Galford D Plasma Effect 2", 0xd9ee0, 0xd9f00 },
    { L"Galford D Smoke", 0xd9f20, 0xd9f40 },
    { L"Galford D Trunk", 0xd9f60, 0xd9f80 },
    { L"Galford D Slash Effect", 0xd9f40, 0xd9f60 },
};
const sGame_PaletteDataset SAMSHO5_A_Gaoh_PALETTES_A[] =
{
    //--A--
    { L"Gaoh A", 0xef000, 0xef040, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A Rage", 0xef040, 0xef080, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A Burned", 0xef0c0, 0xef100, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A Zapped", 0xef100, 0xef140, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A Freezed", 0xef140, 0xef180, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A KI", 0xef180, 0xef1c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A Issen Trail", 0xef200, 0xef240, indexSamSho5Sprites_Gaoh },
    { L"Gaoh A SON", 0xef240, 0xef280, indexSamSho5Sprites_Gaoh },
    { L"Ankiou A", 0xef080, 0xef0c0 },
    { L"Ankiou A Naraku Boe", 0xef1c0, 0xef200 },
    { L"Ankiou A SON", 0xef2c0, 0xef300 },
    { L"Gaoh A Special Slash/Naraku Boe Effect", 0xef320, 0xef340 },
    { L"Gaoh A Slash Effect", 0xef300, 0xef320 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaoh_PALETTES_B[] =
{
    // --B--
    { L"Gaoh B", 0xef400, 0xef440, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B Rage", 0xef440, 0xef480, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B Burned", 0xef4c0, 0xef500, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B Zapped", 0xef500, 0xef540, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B Freezed", 0xef540, 0xef580, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B KI", 0xef580, 0xef5c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B Issen Trail", 0xef600, 0xef640, indexSamSho5Sprites_Gaoh },
    { L"Gaoh B SON", 0xef640, 0xef680, indexSamSho5Sprites_Gaoh },
    { L"Ankiou B", 0xef480, 0xef4c0 },
    { L"Ankiou B Naraku Boe", 0xef5c0, 0xef600 },
    { L"Ankiou B SON", 0xef6c0, 0xef700 },
    { L"Gaoh B Special Slash/Naraku Boe Effect", 0xef720, 0xef740 },
    { L"Gaoh B Slash Effect", 0xef700, 0xef720 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaoh_PALETTES_C[] =
{
    // --C--
    { L"Gaoh C", 0xef800, 0xef840, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C Rage", 0xef840, 0xef880, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C Burned", 0xef8c0, 0xef900, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C Zapped", 0xef900, 0xef940, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C Freezed", 0xef940, 0xef980, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C KI", 0xef980, 0xef9c0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C Issen Trail", 0xefa00, 0xefa40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh C SON", 0xefa40, 0xefa80, indexSamSho5Sprites_Gaoh },
    { L"Ankiou C", 0xef880, 0xef8c0 },
    { L"Ankiou C Naraku Boe", 0xef9c0, 0xefa00 },
    { L"Ankiou C SON", 0xefac0, 0xefb00 },
    { L"Gaoh C Special Slash/Naraku Boe Effect", 0xefb20, 0xefb40 },
    { L"Gaoh C Slash Effect", 0xefb00, 0xefb20 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaoh_PALETTES_D[] =
{
    // --D--
    { L"Gaoh D", 0xefc00, 0xefc40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D Rage", 0xefc40, 0xefc80, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D Burned", 0xefcc0, 0xefd00, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D Zapped", 0xefd00, 0xefd40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D Freezed", 0xefd40, 0xefd80, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D KI", 0xefd80, 0xefdc0, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D Issen Trail", 0xefe00, 0xefe40, indexSamSho5Sprites_Gaoh },
    { L"Gaoh D SON", 0xefe40, 0xefe80, indexSamSho5Sprites_Gaoh },
    { L"Ankiou D", 0xefc80, 0xefcc0 },
    { L"Ankiou D Naraku Boe", 0xefdc0, 0xefe00 },
    { L"Ankiou D SON", 0xefec0, 0xeff00 },
    { L"Gaoh D Special Slash/Naraku Boe Effect", 0xeff20, 0xeff40 },
    { L"Gaoh D Slash Effect", 0xeff00, 0xeff20 },
};

const sGame_PaletteDataset SAMSHO5_A_Genjuro_PALETTES_A[] =
{
    //--A--
    { L"Genjuro A", 0xdc000, 0xdc040, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A Rage", 0xdc040, 0xdc080, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A Burned", 0xdc0c0, 0xdc100, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A Zapped", 0xdc100, 0xdc140, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A Freezed", 0xdc140, 0xdc180, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A KI", 0xdc180, 0xdc1c0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A Issen Trail", 0xdc200, 0xdc240, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A SON", 0xdc240, 0xdc280, indexSamSho5Sprites_Genjuro },
    { L"Genjuro A Special Slash/Bowl", 0xdc2a0, 0xdc2c0 },
    { L"Genjuro A Darkest Card", 0xdc0a0, 0xdc0c0 },
    { L"Genjuro A Colored Card", 0xdc1c0, 0xdc1e0 },
    { L"Genjuro A Darker Card", 0xdc1e0, 0xdc200 },
    { L"Genjuro A White & Blue Card", 0xdc3e0, 0xdc400 },
    { L"Genjuro A Oukazan 1", 0xdc280, 0xdc2a0 },
    { L"Genjuro A Oukazan 2", 0xdc2c0, 0xdc2e0 },
    { L"Genjuro A Slash Effect", 0xdc340, 0xdc360 },
};

const sGame_PaletteDataset SAMSHO5_A_Genjuro_PALETTES_B[] =
{
    // --B--
    { L"Genjuro B", 0xdc400, 0xdc440, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B Rage", 0xdc440, 0xdc480, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B Burned", 0xdc4c0, 0xdc500, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B Zapped", 0xdc500, 0xdc540, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B Freezed", 0xdc540, 0xdc580, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B KI", 0xdc580, 0xdc5c0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B Issen Trail", 0xdc600, 0xdc640, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B SON", 0xdc640, 0xdc680, indexSamSho5Sprites_Genjuro },
    { L"Genjuro B Special Slash/Bowl", 0xdc6a0, 0xdc6c0 },
    { L"Genjuro B Darkest Card", 0xdc4a0, 0xdc4c0 },
    { L"Genjuro B Colored Card", 0xdc5c0, 0xdc5e0 },
    { L"Genjuro B Darker Card", 0xdc5e0, 0xdc600 },
    { L"Genjuro B White & Blue Card", 0xdc7e0, 0xdc800 },
    { L"Genjuro B Oukazan 1", 0xdc680, 0xdc6a0 },
    { L"Genjuro B Oukazan 2", 0xdc6c0, 0xdc6e0 },
    { L"Genjuro B Slash Effect", 0xdc740, 0xdc760 },
};

const sGame_PaletteDataset SAMSHO5_A_Genjuro_PALETTES_C[] =
{
    // --C--
    { L"Genjuro C", 0xdc800, 0xdc840, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C Rage", 0xdc840, 0xdc880, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C Burned", 0xdc8c0, 0xdc900, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C Zapped", 0xdc900, 0xdc940, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C Freezed", 0xdc940, 0xdc980, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C KI", 0xdc980, 0xdc9c0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C Issen Trail", 0xdca00, 0xdca40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C SON", 0xdca40, 0xdca80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro C Special Slash/Bowl", 0xdcaa0, 0xdcac0 },
    { L"Genjuro C Darkest Card", 0xdc8a0, 0xdc8c0 },
    { L"Genjuro C Colored Card", 0xdc9c0, 0xdc9e0 },
    { L"Genjuro C Darker Card", 0xdc9e0, 0xdca00 },
    { L"Genjuro C White & Blue Card", 0xdcbe0, 0xdcc00 },
    { L"Genjuro C Oukazan 1", 0xdca80, 0xdcaa0 },
    { L"Genjuro C Oukazan 2", 0xdcac0, 0xdcae0 },
    { L"Genjuro C Slash Effect", 0xdcb40, 0xdcb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Genjuro_PALETTES_D[] =
{
    // --D--
    { L"Genjuro D", 0xdcc00, 0xdcc40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D Rage", 0xdcc40, 0xdcc80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D Burned", 0xdccc0, 0xdcd00, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D Zapped", 0xdcd00, 0xdcd40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D Freezed", 0xdcd40, 0xdcd80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D KI", 0xdcd80, 0xdcdc0, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D Issen Trail", 0xdce00, 0xdce40, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D SON", 0xdce40, 0xdce80, indexSamSho5Sprites_Genjuro },
    { L"Genjuro D Special Slash/Bowl", 0xdcea0, 0xdcec0 },
    { L"Genjuro D Darkest Card", 0xdcca0, 0xdccc0 },
    { L"Genjuro D Colored Card", 0xdcdc0, 0xdcde0 },
    { L"Genjuro D Darker Card", 0xdcde0, 0xdce00 },
    { L"Genjuro D White & Blue Card", 0xdcfe0, 0xdd000 },
    { L"Genjuro D Oukazan 1", 0xdce80, 0xdcea0 },
    { L"Genjuro D Oukazan 2", 0xdcec0, 0xdcee0 },
    { L"Genjuro D Slash Effect", 0xdcf40, 0xdcf60 },
};

const sGame_PaletteDataset SAMSHO5_A_Hanzo_PALETTES_A[] =
{
    //--A--
    { L"Hanzo A", 0xd8000, 0xd8040, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A Rage", 0xd8040, 0xd8080, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A Burned", 0xd80c0, 0xd8100, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A Zapped", 0xd8100, 0xd8140, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A Freezed", 0xd8140, 0xd8180, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A KI", 0xd8180, 0xd81c0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A Issen Trail", 0xd8200, 0xd8240, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A SON", 0xd8240, 0xd8280, indexSamSho5Sprites_Hanzo },
    { L"Hanzo A Fire Effects", 0xd8280, 0xd82a0 },
    { L"Hanzo A X-Ray/Smoke/Windsplitter", 0xd8320, 0xd8340 },
    { L"Hanzo A X-Ray Sparks", 0xd82a0, 0xd82c0 },
    { L"Hanzo A Trunk", 0xd8360, 0xd8380 },
    { L"Hanzo A Slash Effect", 0xd8340, 0xd8360 },
};

const sGame_PaletteDataset SAMSHO5_A_Hanzo_PALETTES_B[] =
{
    // --B--
    { L"Hanzo B", 0xd8400, 0xd8440, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B Rage", 0xd8440, 0xd8480, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B Burned", 0xd84c0, 0xd8500, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B Zapped", 0xd8500, 0xd8540, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B Freezed", 0xd8540, 0xd8580, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B KI", 0xd8580, 0xd85c0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B Issen Trail", 0xd8600, 0xd8640, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B SON", 0xd8640, 0xd8680, indexSamSho5Sprites_Hanzo },
    { L"Hanzo B Fire Effects", 0xd8680, 0xd86a0 },
    { L"Hanzo B X-Ray/Smoke/Windsplitter", 0xd8720, 0xd8740 },
    { L"Hanzo B X-Ray Sparks", 0xd86a0, 0xd86c0 },
    { L"Hanzo B Trunk", 0xd8760, 0xd8780 },
    { L"Hanzo B Slash Effect", 0xd8740, 0xd8760 },
};

const sGame_PaletteDataset SAMSHO5_A_Hanzo_PALETTES_C[] =
{
    // --C--
    { L"Hanzo C", 0xd8800, 0xd8840, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C Rage", 0xd8840, 0xd8880, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C Burned", 0xd88c0, 0xd8900, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C Zapped", 0xd8900, 0xd8940, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C Freezed", 0xd8940, 0xd8980, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C KI", 0xd8980, 0xd89c0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C Issen Trail", 0xd8a00, 0xd8a40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C SON", 0xd8a40, 0xd8a80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo C Fire Effects", 0xd8a80, 0xd8aa0 },
    { L"Hanzo C X-Ray/Smoke/Windsplitter", 0xd8b20, 0xd8b40 },
    { L"Hanzo C X-Ray Sparks", 0xd8aa0, 0xd8ac0 },
    { L"Hanzo C Trunk", 0xd8b60, 0xd8b80 },
    { L"Hanzo C Slash Effect", 0xd8b40, 0xd8b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Hanzo_PALETTES_D[] =
{
    // --D--
    { L"Hanzo D", 0xd8c00, 0xd8c40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D Rage", 0xd8c40, 0xd8c80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D Burned", 0xd8cc0, 0xd8d00, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D Zapped", 0xd8d00, 0xd8d40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D Freezed", 0xd8d40, 0xd8d80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D KI", 0xd8d80, 0xd8dc0, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D Issen Trail", 0xd8e00, 0xd8e40, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D SON", 0xd8e40, 0xd8e80, indexSamSho5Sprites_Hanzo },
    { L"Hanzo D Fire Effects", 0xd8e80, 0xd8ea0 },
    { L"Hanzo D X-Ray/Smoke/Windsplitter", 0xd8f20, 0xd8f40 },
    { L"Hanzo D X-Ray Sparks", 0xd8ea0, 0xd8ec0 },
    { L"Hanzo D Trunk", 0xd8f60, 0xd8f80 },
    { L"Hanzo D Slash Effect", 0xd8f40, 0xd8f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Haohmaru_PALETTES_A[] =
{
    //--A--
    { L"Haohmaru A", 0xd5000, 0xd5040, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Rage", 0xd5040, 0xd5080, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Burned", 0xd50c0, 0xd5100, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Zapped", 0xd5100, 0xd5140, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Freezed", 0xd5140, 0xd5180, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A KI", 0xd5180, 0xd51c0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Issen Trail", 0xd5200, 0xd5240, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A SON", 0xd5240, 0xd5280, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Kogetsuzan Trail", 0xd52c0, 0xd5300, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru A Senpuuretsuzan", 0xd51c0, 0xd51e0 },
    { L"Haohmaru A Kogetsuzan/Resshinzan", 0xd51e0, 0xd5200 },
    { L"Haohmaru A Slash Effect", 0xd5340, 0xd5360 },
};

const sGame_PaletteDataset SAMSHO5_A_Haohmaru_PALETTES_B[] =
{
    // --B--
    { L"Haohmaru B", 0xd5400, 0xd5440, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Rage", 0xd5440, 0xd5480, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Burned", 0xd54c0, 0xd5500, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Zapped", 0xd5500, 0xd5540, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Freezed", 0xd5540, 0xd5580, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B KI", 0xd5580, 0xd55c0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Issen Trail", 0xd5600, 0xd5640, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B SON", 0xd5640, 0xd5680, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Kogetsuzan Trail", 0xd56c0, 0xd5700, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru B Senpuuretsuzan", 0xd55c0, 0xd55e0 },
    { L"Haohmaru B Kogetsuzan/Resshinzan", 0xd55e0, 0xd5600 },
    { L"Haohmaru B Slash Effect", 0xd5740, 0xd5760 },
};

const sGame_PaletteDataset SAMSHO5_A_Haohmaru_PALETTES_C[] =
{
    // --C--
    { L"Haohmaru C", 0xd5800, 0xd5840, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Rage", 0xd5840, 0xd5880, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Burned", 0xd58c0, 0xd5900, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Zapped", 0xd5900, 0xd5940, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Freezed", 0xd5940, 0xd5980, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C KI", 0xd5980, 0xd59c0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Issen Trail", 0xd5a00, 0xd5a40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C SON", 0xd5a40, 0xd5a80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Kogetsuzan Trail", 0xd5ac0, 0xd5b00, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru C Senpuuretsuzan", 0xd59c0, 0xd59e0 },
    { L"Haohmaru C Kogetsuzan/Resshinzan", 0xd59e0, 0xd5a00 },
    { L"Haohmaru C Slash Effect", 0xd5b40, 0xd5b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Haohmaru_PALETTES_D[] =
{
    // --D--
    { L"Haohmaru D", 0xd5c00, 0xd5c40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Rage", 0xd5c40, 0xd5c80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Burned", 0xd5cc0, 0xd5d00, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Zapped", 0xd5d00, 0xd5d40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Freezed", 0xd5d40, 0xd5d80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D KI", 0xd5d80, 0xd5dc0, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Issen Trail", 0xd5e00, 0xd5e40, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D SON", 0xd5e40, 0xd5e80, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Kogetsuzan Trail", 0xd5ec0, 0xd5f00, indexSamSho5Sprites_Haohmaru },
    { L"Haohmaru D Senpuuretsuzan", 0xd5dc0, 0xd5de0 },
    { L"Haohmaru D Kogetsuzan/Resshinzan", 0xd5de0, 0xd5e00 },
    { L"Haohmaru D Slash Effect", 0xd5f40, 0xd5f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Jubei_PALETTES_A[] =
{
    //--A--
    { L"Jubei A", 0xe1000, 0xe1040, indexSamSho5Sprites_Jubei },
    { L"Jubei A Rage", 0xe1040, 0xe1080, indexSamSho5Sprites_Jubei },
    { L"Jubei A Burned", 0xe10c0, 0xe1100, indexSamSho5Sprites_Jubei },
    { L"Jubei A Zapped", 0xe1100, 0xe1140, indexSamSho5Sprites_Jubei },
    { L"Jubei A Freezed", 0xe1140, 0xe1180, indexSamSho5Sprites_Jubei },
    { L"Jubei A KI", 0xe1180, 0xe11c0, indexSamSho5Sprites_Jubei },
    { L"Jubei A Issen Trail", 0xe1200, 0xe1240, indexSamSho5Sprites_Jubei },
    { L"Jubei A SON", 0xe1240, 0xe1280, indexSamSho5Sprites_Jubei },
    { L"Jubei A Special Slash Effect 1", 0xe1280, 0xe12a0 },
    { L"Jubei A Special Slash Effect 2", 0xe12a0, 0xe12c0 },
    { L"Jubei A Bird/Slash Effect", 0xe1340, 0xe1360 },
};

const sGame_PaletteDataset SAMSHO5_A_Jubei_PALETTES_B[] =
{
    // --B--
    { L"Jubei B", 0xe1400, 0xe1440, indexSamSho5Sprites_Jubei },
    { L"Jubei B Rage", 0xe1440, 0xe1480, indexSamSho5Sprites_Jubei },
    { L"Jubei B Burned", 0xe14c0, 0xe1500, indexSamSho5Sprites_Jubei },
    { L"Jubei B Zapped", 0xe1500, 0xe1540, indexSamSho5Sprites_Jubei },
    { L"Jubei B Freezed", 0xe1540, 0xe1580, indexSamSho5Sprites_Jubei },
    { L"Jubei B KI", 0xe1580, 0xe15c0, indexSamSho5Sprites_Jubei },
    { L"Jubei B Issen Trail", 0xe1600, 0xe1640, indexSamSho5Sprites_Jubei },
    { L"Jubei B SON", 0xe1640, 0xe1680, indexSamSho5Sprites_Jubei },
    { L"Jubei B Special Slash Effect 1", 0xe1680, 0xe16a0 },
    { L"Jubei B Special Slash Effect 2", 0xe16a0, 0xe16c0 },
    { L"Jubei B Bird/Slash Effect", 0xe1740, 0xe1760 },
};

const sGame_PaletteDataset SAMSHO5_A_Jubei_PALETTES_C[] =
{
    // --C--
    { L"Jubei C", 0xe1800, 0xe1840, indexSamSho5Sprites_Jubei },
    { L"Jubei C Rage", 0xe1840, 0xe1880, indexSamSho5Sprites_Jubei },
    { L"Jubei C Burned", 0xe18c0, 0xe1900, indexSamSho5Sprites_Jubei },
    { L"Jubei C Zapped", 0xe1900, 0xe1940, indexSamSho5Sprites_Jubei },
    { L"Jubei C Freezed", 0xe1940, 0xe1980, indexSamSho5Sprites_Jubei },
    { L"Jubei C KI", 0xe1980, 0xe19c0, indexSamSho5Sprites_Jubei },
    { L"Jubei C Issen Trail", 0xe1a00, 0xe1a40, indexSamSho5Sprites_Jubei },
    { L"Jubei C SON", 0xe1a40, 0xe1a80, indexSamSho5Sprites_Jubei },
    { L"Jubei C Special Slash Effect 1", 0xe1a80, 0xe1aa0 },
    { L"Jubei C Special Slash Effect 2", 0xe1aa0, 0xe1ac0 },
    { L"Jubei C Bird/Slash Effect", 0xe1b40, 0xe1b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Jubei_PALETTES_D[] =
{
    // --D--
    { L"Jubei D", 0xe1c00, 0xe1c40, indexSamSho5Sprites_Jubei },
    { L"Jubei D Rage", 0xe1c40, 0xe1c80, indexSamSho5Sprites_Jubei },
    { L"Jubei D Burned", 0xe1cc0, 0xe1d00, indexSamSho5Sprites_Jubei },
    { L"Jubei D Zapped", 0xe1d00, 0xe1d40, indexSamSho5Sprites_Jubei },
    { L"Jubei D Freezed", 0xe1d40, 0xe1d80, indexSamSho5Sprites_Jubei },
    { L"Jubei D KI", 0xe1d80, 0xe1dc0, indexSamSho5Sprites_Jubei },
    { L"Jubei D Issen Trail", 0xe1e00, 0xe1e40, indexSamSho5Sprites_Jubei },
    { L"Jubei D SON", 0xe1e40, 0xe1e80, indexSamSho5Sprites_Jubei },
    { L"Jubei D Special Slash Effect 1", 0xe1e80, 0xe1ea0 },
    { L"Jubei D Special Slash Effect 2", 0xe1ea0, 0xe1ec0 },
    { L"Jubei D Bird/Slash Effect", 0xe1f40, 0xe1f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Kazuki_PALETTES_A[] =
{
    //--A--
    { L"Kazuki A", 0xe5000, 0xe5040, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A Rage", 0xe5040, 0xe5080, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A Burned", 0xe50c0, 0xe5100, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A Zapped", 0xe5100, 0xe5140, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A Freezed", 0xe5140, 0xe5180, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A KI", 0xe5180, 0xe51c0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A Issen Trail", 0xe5200, 0xe5240, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A SON", 0xe5240, 0xe5280, indexSamSho5Sprites_Kazuki },
    { L"Kazuki A Fire Pal 1", 0xe5300, 0xe5320 },
    { L"Kazuki A Fire Pal 2", 0xe5320, 0xe5340 },
    { L"Kazuki A Fire Pal 3", 0xe53e0, 0xe5400 },
    { L"Kazuki A Fire Weapon", 0xe5360, 0xe5380 },
    { L"Kazuki A Fire/Slash Effect", 0xe5340, 0xe5360 },
};

const sGame_PaletteDataset SAMSHO5_A_Kazuki_PALETTES_B[] =
{
    // --B--
    { L"Kazuki B", 0xe5400, 0xe5440, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B Rage", 0xe5440, 0xe5480, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B Burned", 0xe54c0, 0xe5500, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B Zapped", 0xe5500, 0xe5540, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B Freezed", 0xe5540, 0xe5580, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B KI", 0xe5580, 0xe55c0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B Issen Trail", 0xe5600, 0xe5640, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B SON", 0xe5640, 0xe5680, indexSamSho5Sprites_Kazuki },
    { L"Kazuki B Fire Pal 1", 0xe5700, 0xe5720 },
    { L"Kazuki B Fire Pal 2", 0xe5720, 0xe5740 },
    { L"Kazuki B Fire Pal 3", 0xe57e0, 0xe5800 },
    { L"Kazuki B Fire Weapon", 0xe5760, 0xe5780 },
    { L"Kazuki B Fire/Slash Effect", 0xe5740, 0xe5760 },
};

const sGame_PaletteDataset SAMSHO5_A_Kazuki_PALETTES_C[] =
{
    // --C--
    { L"Kazuki C", 0xe5800, 0xe5840, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C Rage", 0xe5840, 0xe5880, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C Burned", 0xe58c0, 0xe5900, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C Zapped", 0xe5900, 0xe5940, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C Freezed", 0xe5940, 0xe5980, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C KI", 0xe5980, 0xe59c0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C Issen Trail", 0xe5a00, 0xe5a40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C SON", 0xe5a40, 0xe5a80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki C Fire Pal 1", 0xe5b00, 0xe5b20 },
    { L"Kazuki C Fire Pal 2", 0xe5b20, 0xe5b40 },
    { L"Kazuki C Fire Pal 3", 0xe5be0, 0xe5c00 },
    { L"Kazuki C Fire Weapon", 0xe5b60, 0xe5b80 },
    { L"Kazuki C Fire/Slash Effect", 0xe5b40, 0xe5b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Kazuki_PALETTES_D[] =
{
    // --D--
    { L"Kazuki D", 0xe5c00, 0xe5c40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D Rage", 0xe5c40, 0xe5c80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D Burned", 0xe5cc0, 0xe5d00, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D Zapped", 0xe5d00, 0xe5d40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D Freezed", 0xe5d40, 0xe5d80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D KI", 0xe5d80, 0xe5dc0, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D Issen Trail", 0xe5e00, 0xe5e40, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D SON", 0xe5e40, 0xe5e80, indexSamSho5Sprites_Kazuki },
    { L"Kazuki D Fire Pal 1", 0xe5f00, 0xe5f20 },
    { L"Kazuki D Fire Pal 2", 0xe5f20, 0xe5f40 },
    { L"Kazuki D Fire Pal 3", 0xe5fe0, 0xe6000 },
    { L"Kazuki D Fire Weapon", 0xe5f60, 0xe5f80 },
    { L"Kazuki D Fire/Slash Effect", 0xe5f40, 0xe5f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Kusaregedo_PALETTES_A[] =
{
    //--A--
    { L"Kusaregedo A", 0xee000, 0xee040, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A Rage", 0xee040, 0xee080, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A Burned", 0xee0c0, 0xee100, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A Zapped", 0xee100, 0xee140, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A Freezed", 0xee140, 0xee180, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A KI", 0xee180, 0xee1c0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A Issen Trail", 0xee200, 0xee240, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A SON", 0xee240, 0xee280, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo A Gastrorrhea", 0xee080, 0xee0a0 },
    { L"Kusaregedo A Special Slash Effect", 0xee2c0, 0xee2e0 },
    { L"Kusaregedo A Slash Effect", 0xee340, 0xee360 },
};

const sGame_PaletteDataset SAMSHO5_A_Kusaregedo_PALETTES_B[] =
{
    // --B--
    { L"Kusaregedo B", 0xee400, 0xee440, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B Rage", 0xee440, 0xee480, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B Burned", 0xee4c0, 0xee500, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B Zapped", 0xee500, 0xee540, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B Freezed", 0xee540, 0xee580, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B KI", 0xee580, 0xee5c0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B Issen Trail", 0xee600, 0xee640, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B SON", 0xee640, 0xee680, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo B Gastrorrhea", 0xee480, 0xee4a0 },
    { L"Kusaregedo B Special Slash Effect", 0xee6c0, 0xee6e0 },
    { L"Kusaregedo B Slash Effect", 0xee740, 0xee760 },
};

const sGame_PaletteDataset SAMSHO5_A_Kusaregedo_PALETTES_C[] =
{
    // --C--
    { L"Kusaregedo C", 0xee800, 0xee840, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C Rage", 0xee840, 0xee880, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C Burned", 0xee8c0, 0xee900, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C Zapped", 0xee900, 0xee940, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C Freezed", 0xee940, 0xee980, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C KI", 0xee980, 0xee9c0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C Issen Trail", 0xeea00, 0xeea40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C SON", 0xeea40, 0xeea80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo C Gastrorrhea", 0xee880, 0xee8a0 },
    { L"Kusaregedo C Special Slash Effect", 0xeeac0, 0xeeae0 },
    { L"Kusaregedo C Slash Effect", 0xeeb40, 0xeeb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Kusaregedo_PALETTES_D[] =
{
    // --D--
    { L"Kusaregedo D", 0xeec00, 0xeec40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D Rage", 0xeec40, 0xeec80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D Burned", 0xeecc0, 0xeed00, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D Zapped", 0xeed00, 0xeed40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D Freezed", 0xeed40, 0xeed80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D KI", 0xeed80, 0xeedc0, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D Issen Trail", 0xeee00, 0xeee40, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D SON", 0xeee40, 0xeee80, indexSamSho5Sprites_Kusaregedo },
    { L"Kusaregedo D Gastrorrhea", 0xeec80, 0xeeca0 },
    { L"Kusaregedo D Special Slash Effect", 0xeeec0, 0xeeee0 },
    { L"Kusaregedo D Slash Effect", 0xeef40, 0xeef60 },
};

const sGame_PaletteDataset SAMSHO5_A_Kyoshiro_PALETTES_A[] =
{
    //--A--
    { L"Kyoshiro A", 0xda000, 0xda040, indexSamSho5Sprites_Kyoshiro, 0, &pairNext9 },
    { L"Kyoshiro A Rage", 0xda040, 0xda080, indexSamSho5Sprites_Kyoshiro, 0, &pairNext8 },
    { L"Kyoshiro A Burned", 0xda0c0, 0xda100, indexSamSho5Sprites_Kyoshiro, 0, &pairNext7 },
    { L"Kyoshiro A Zapped", 0xda100, 0xda140, indexSamSho5Sprites_Kyoshiro, 0, &pairNext6 },
    { L"Kyoshiro A Freezed", 0xda140, 0xda180, indexSamSho5Sprites_Kyoshiro, 0, &pairNext5 },
    { L"Kyoshiro A KI", 0xda180, 0xda1c0, indexSamSho5Sprites_Kyoshiro, 0, &pairNext4 },
    { L"Kyoshiro A Issen Trail", 0xda200, 0xda240, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro A SON", 0xda240, 0xda280, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro A Tsunami Crunch", 0xda1c0, 0xda1e0 },
    { L"Kyoshiro A Toad", 0xda280, 0xda2a0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro A Toad Dust", 0xda1e0, 0xda200 },
    { L"Kyoshiro A Fire Effect", 0xda2a0, 0xda2c0 },
    { L"Kyoshiro A Slash Effect", 0xda340, 0xda360 },
};

const sGame_PaletteDataset SAMSHO5_A_Kyoshiro_PALETTES_B[] =
{
    // --B--
    { L"Kyoshiro B", 0xda400, 0xda440, indexSamSho5Sprites_Kyoshiro, 0, &pairNext9 },
    { L"Kyoshiro B Rage", 0xda440, 0xda480, indexSamSho5Sprites_Kyoshiro, 0, &pairNext8 },
    { L"Kyoshiro B Burned", 0xda4c0, 0xda500, indexSamSho5Sprites_Kyoshiro, 0, &pairNext7 },
    { L"Kyoshiro B Zapped", 0xda500, 0xda540, indexSamSho5Sprites_Kyoshiro, 0, &pairNext6 },
    { L"Kyoshiro B Freezed", 0xda540, 0xda580, indexSamSho5Sprites_Kyoshiro, 0, &pairNext5 },
    { L"Kyoshiro B KI", 0xda580, 0xda5c0, indexSamSho5Sprites_Kyoshiro, 0, &pairNext4 },
    { L"Kyoshiro B Issen Trail", 0xda600, 0xda640, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro B SON", 0xda640, 0xda680, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro B Tsunami Crunch", 0xda5c0, 0xda5e0 },
    { L"Kyoshiro B Toad", 0xda680, 0xda6a0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro B Toad Dust", 0xda5e0, 0xda600 },
    { L"Kyoshiro B Fire Effect", 0xda6a0, 0xda6c0 },
    { L"Kyoshiro B Slash Effect", 0xda740, 0xda760 },
};

const sGame_PaletteDataset SAMSHO5_A_Kyoshiro_PALETTES_C[] =
{
    // --C--
    { L"Kyoshiro C", 0xda800, 0xda840, indexSamSho5Sprites_Kyoshiro, 0, &pairNext9 },
    { L"Kyoshiro C Rage", 0xda840, 0xda880, indexSamSho5Sprites_Kyoshiro, 0, &pairNext8 },
    { L"Kyoshiro C Burned", 0xda8c0, 0xda900, indexSamSho5Sprites_Kyoshiro, 0, &pairNext7 },
    { L"Kyoshiro C Zapped", 0xda900, 0xda940, indexSamSho5Sprites_Kyoshiro, 0, &pairNext6 },
    { L"Kyoshiro C Freezed", 0xda940, 0xda980, indexSamSho5Sprites_Kyoshiro, 0, &pairNext5 },
    { L"Kyoshiro C KI", 0xda980, 0xda9c0, indexSamSho5Sprites_Kyoshiro, 0, &pairNext4 },
    { L"Kyoshiro C Issen Trail", 0xdaa00, 0xdaa40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro C SON", 0xdaa40, 0xdaa80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro C Tsunami Crunch", 0xda9c0, 0xda9e0 },
    { L"Kyoshiro C Toad", 0xdaa80, 0xdaaa0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro C Toad Dust", 0xda9e0, 0xdaa00 },
    { L"Kyoshiro C Fire Effect", 0xdaaa0, 0xdaac0 },
    { L"Kyoshiro C Slash Effect", 0xdab40, 0xdab60 },
};

const sGame_PaletteDataset SAMSHO5_A_Kyoshiro_PALETTES_D[] =
{
    // --D--
    { L"Kyoshiro D", 0xdac00, 0xdac40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext9 },
    { L"Kyoshiro D Rage", 0xdac40, 0xdac80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext8 },
    { L"Kyoshiro D Burned", 0xdacc0, 0xdad00, indexSamSho5Sprites_Kyoshiro, 0, &pairNext7 },
    { L"Kyoshiro D Zapped", 0xdad00, 0xdad40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext6 },
    { L"Kyoshiro D Freezed", 0xdad40, 0xdad80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext5 },
    { L"Kyoshiro D KI", 0xdad80, 0xdadc0, indexSamSho5Sprites_Kyoshiro, 0, &pairNext4 },
    { L"Kyoshiro D Issen Trail", 0xdae00, 0xdae40, indexSamSho5Sprites_Kyoshiro, 0, &pairNext3 },
    { L"Kyoshiro D SON", 0xdae40, 0xdae80, indexSamSho5Sprites_Kyoshiro, 0, &pairNext2 },
    { L"Kyoshiro D Tsunami Crunch", 0xdadc0, 0xdade0 },
    { L"Kyoshiro D Toad", 0xdae80, 0xdaea0, indexSamSho5Sprites_Kyoshiro, 1 },
    { L"Kyoshiro D Toad Dust", 0xdade0, 0xdae00 },
    { L"Kyoshiro D Fire Effect", 0xdaea0, 0xdaec0 },
    { L"Kyoshiro D Slash Effect", 0xdaf40, 0xdaf60 },
};

const sGame_PaletteDataset SAMSHO5_A_Mina_PALETTES_A[] =
{
    //--A--
    { L"Mina A", 0xed000, 0xed040, indexSamSho5Sprites_Mina, 0, &pairNext9 },
    { L"Mina A Rage", 0xed040, 0xed080, indexSamSho5Sprites_Mina, 0, &pairNext8 },
    { L"Mina A Burned", 0xed0c0, 0xed100, indexSamSho5Sprites_Mina, 0, &pairNext7 },
    { L"Mina A Zapped", 0xed100, 0xed140, indexSamSho5Sprites_Mina, 0, &pairNext6 },
    { L"Mina A Freezed", 0xed140, 0xed180, indexSamSho5Sprites_Mina, 0, &pairNext5 },
    { L"Mina A KI", 0xed180, 0xed1c0, indexSamSho5Sprites_Mina, 0, &pairNext4 },
    { L"Mina A Issen Trail", 0xed200, 0xed240, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina A SON", 0xed240, 0xed280, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina A Intro Cloth", 0xed320, 0xed340 },
    { L"Chanpuru A", 0xed280, 0xed2a0, indexSamSho5Sprites_Mina, 1 },
    { L"Chanpuru A Surprised/Crying", 0xed2c0, 0xed2e0 },
    { L"Chanpuru A Leaf", 0xed380, 0xed3a0 },
    { L"Mina A Special Arrow Effect", 0xed360, 0xed380 },
    { L"Mina A Arrow Effect", 0xed340, 0xed360 },
};

const sGame_PaletteDataset SAMSHO5_A_Mina_PALETTES_B[] =
{
    // --B--
    { L"Mina B", 0xed400, 0xed440, indexSamSho5Sprites_Mina, 0, &pairNext9 },
    { L"Mina B Rage", 0xed440, 0xed480, indexSamSho5Sprites_Mina, 0, &pairNext8 },
    { L"Mina B Burned", 0xed4c0, 0xed500, indexSamSho5Sprites_Mina, 0, &pairNext7 },
    { L"Mina B Zapped", 0xed500, 0xed540, indexSamSho5Sprites_Mina, 0, &pairNext6 },
    { L"Mina B Freezed", 0xed540, 0xed580, indexSamSho5Sprites_Mina, 0, &pairNext5 },
    { L"Mina B KI", 0xed580, 0xed5c0, indexSamSho5Sprites_Mina, 0, &pairNext4 },
    { L"Mina B Issen Trail", 0xed600, 0xed640, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina B SON", 0xed640, 0xed680, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina B Intro Cloth", 0xed720, 0xed740 },
    { L"Chanpuru B", 0xed680, 0xed6a0, indexSamSho5Sprites_Mina, 1 },
    { L"Chanpuru B Surprised/Crying", 0xed6c0, 0xed6e0 },
    { L"Chanpuru B Leaf", 0xed780, 0xed7a0 },
    { L"Mina B Special Arrow Effect", 0xed760, 0xed780 },
    { L"Mina B Arrow Effect", 0xed740, 0xed760 },
};

const sGame_PaletteDataset SAMSHO5_A_Mina_PALETTES_C[] =
{
    // --C--
    { L"Mina C", 0xed800, 0xed840, indexSamSho5Sprites_Mina, 0, &pairNext9 },
    { L"Mina C Rage", 0xed840, 0xed880, indexSamSho5Sprites_Mina, 0, &pairNext8 },
    { L"Mina C Burned", 0xed8c0, 0xed900, indexSamSho5Sprites_Mina, 0, &pairNext7 },
    { L"Mina C Zapped", 0xed900, 0xed940, indexSamSho5Sprites_Mina, 0, &pairNext6 },
    { L"Mina C Freezed", 0xed940, 0xed980, indexSamSho5Sprites_Mina, 0, &pairNext5 },
    { L"Mina C KI", 0xed980, 0xed9c0, indexSamSho5Sprites_Mina, 0, &pairNext4 },
    { L"Mina C Issen Trail", 0xeda00, 0xeda40, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina C SON", 0xeda40, 0xeda80, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina C Intro Cloth", 0xedb20, 0xedb40 },
    { L"Chanpuru C", 0xeda80, 0xedaa0, indexSamSho5Sprites_Mina, 1 },
    { L"Chanpuru C Surprised/Crying", 0xedac0, 0xedae0 },
    { L"Chanpuru C Leaf", 0xedb80, 0xedba0 },
    { L"Mina C Special Arrow Effect", 0xedb60, 0xedb80 },
    { L"Mina C Arrow Effect", 0xedb40, 0xedb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Mina_PALETTES_D[] =
{
    // --D--
    { L"Mina D", 0xedc00, 0xedc40, indexSamSho5Sprites_Mina, 0, &pairNext9 },
    { L"Mina D Rage", 0xedc40, 0xedc80, indexSamSho5Sprites_Mina, 0, &pairNext8 },
    { L"Mina D Burned", 0xedcc0, 0xedd00, indexSamSho5Sprites_Mina, 0, &pairNext7 },
    { L"Mina D Zapped", 0xedd00, 0xedd40, indexSamSho5Sprites_Mina, 0, &pairNext6 },
    { L"Mina D Freezed", 0xedd40, 0xedd80, indexSamSho5Sprites_Mina, 0, &pairNext5 },
    { L"Mina D KI", 0xedd80, 0xeddc0, indexSamSho5Sprites_Mina, 0, &pairNext4 },
    { L"Mina D Issen Trail", 0xede00, 0xede40, indexSamSho5Sprites_Mina, 0, &pairNext3 },
    { L"Mina D SON", 0xede40, 0xede80, indexSamSho5Sprites_Mina, 0, &pairNext2 },
    { L"Mina D Intro Cloth", 0xedf20, 0xedf40 },
    { L"Chanpuru D", 0xede80, 0xedea0, indexSamSho5Sprites_Mina, 1 },
    { L"Chanpuru D Surprised/Crying", 0xedec0, 0xedee0 },
    { L"Chanpuru D Leaf", 0xedf80, 0xedfa0 },
    { L"Mina D Special Arrow Effect", 0xedf60, 0xedf80 },
    { L"Mina D Arrow Effect", 0xedf40, 0xedf60 },
};

const sGame_PaletteDataset SAMSHO5_A_Nakoruru_PALETTES_A[] =
{
    //--A--
    { L"Nakoruru A", 0xd6000, 0xd6040, indexSamSho5Sprites_Nakoruru, 0, &pairNext9 },
    { L"Nakoruru A Rage", 0xd6040, 0xd6080, indexSamSho5Sprites_Nakoruru, 0, &pairNext8 },
    { L"Nakoruru A Burned", 0xd60c0, 0xd6100, indexSamSho5Sprites_Nakoruru, 0, &pairNext7 },
    { L"Nakoruru A Zapped", 0xd6100, 0xd6140, indexSamSho5Sprites_Nakoruru, 0, &pairNext6 },
    { L"Nakoruru A Freezed", 0xd6140, 0xd6180, indexSamSho5Sprites_Nakoruru, 0, &pairNext5 },
    { L"Nakoruru A KI", 0xd6180, 0xd61c0, indexSamSho5Sprites_Nakoruru, 0, &pairNext4 },
    { L"Nakoruru A Issen Trail", 0xd6200, 0xd6240, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru A SON", 0xd6240, 0xd6280, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru A Nubuke Kamui Trail", 0xd6080, 0xd60c0, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha A", 0xd6280, 0xd62a0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru A KI/Slash Effect", 0xd6340, 0xd6360 },
    { L"Nakoruru A Elely Kamui Rimse", 0xd6360, 0xd6380 },
};

const sGame_PaletteDataset SAMSHO5_A_Nakoruru_PALETTES_B[] =
{
    // --B--
    { L"Nakoruru B", 0xd6400, 0xd6440, indexSamSho5Sprites_Nakoruru, 0, &pairNext9 },
    { L"Nakoruru B Rage", 0xd6440, 0xd6480, indexSamSho5Sprites_Nakoruru, 0, &pairNext8 },
    { L"Nakoruru B Burned", 0xd64c0, 0xd6500, indexSamSho5Sprites_Nakoruru, 0, &pairNext7 },
    { L"Nakoruru B Zapped", 0xd6500, 0xd6540, indexSamSho5Sprites_Nakoruru, 0, &pairNext6 },
    { L"Nakoruru B Freezed", 0xd6540, 0xd6580, indexSamSho5Sprites_Nakoruru, 0, &pairNext5 },
    { L"Nakoruru B KI", 0xd6580, 0xd65c0, indexSamSho5Sprites_Nakoruru, 0, &pairNext4 },
    { L"Nakoruru B Issen Trail", 0xd6600, 0xd6640, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru B SON", 0xd6640, 0xd6680, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru B Nubuke Kamui Trail", 0xd6480, 0xd64c0, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha B", 0xd6680, 0xd66a0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru B KI/Slash Effect", 0xd6740, 0xd6760 },
    { L"Nakoruru B Elely Kamui Rimse", 0xd6760, 0xd6780 },
};

const sGame_PaletteDataset SAMSHO5_A_Nakoruru_PALETTES_C[] =
{
    // --C--
    { L"Nakoruru C", 0xd6800, 0xd6840, indexSamSho5Sprites_Nakoruru, 0, &pairNext9 },
    { L"Nakoruru C Rage", 0xd6840, 0xd6880, indexSamSho5Sprites_Nakoruru, 0, &pairNext8 },
    { L"Nakoruru C Burned", 0xd68c0, 0xd6900, indexSamSho5Sprites_Nakoruru, 0, &pairNext7 },
    { L"Nakoruru C Zapped", 0xd6900, 0xd6940, indexSamSho5Sprites_Nakoruru, 0, &pairNext6 },
    { L"Nakoruru C Freezed", 0xd6940, 0xd6980, indexSamSho5Sprites_Nakoruru, 0, &pairNext5 },
    { L"Nakoruru C KI", 0xd6980, 0xd69c0, indexSamSho5Sprites_Nakoruru, 0, &pairNext4 },
    { L"Nakoruru C Issen Trail", 0xd6a00, 0xd6a40, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru C SON", 0xd6a40, 0xd6a80, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru C Nubuke Kamui Trail", 0xd6880, 0xd68c0, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha C", 0xd6a80, 0xd6aa0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru C KI/Slash Effect", 0xd6b40, 0xd6b60 },
    { L"Nakoruru C Elely Kamui Rimse", 0xd6b60, 0xd6b80 },
};

const sGame_PaletteDataset SAMSHO5_A_Nakoruru_PALETTES_D[] =
{
    // --D--
    { L"Nakoruru D", 0xd6c00, 0xd6c40, indexSamSho5Sprites_Nakoruru, 0, &pairNext9 },
    { L"Nakoruru D Rage", 0xd6c40, 0xd6c80, indexSamSho5Sprites_Nakoruru, 0, &pairNext8 },
    { L"Nakoruru D Burned", 0xd6cc0, 0xd6d00, indexSamSho5Sprites_Nakoruru, 0, &pairNext7 },
    { L"Nakoruru D Zapped", 0xd6d00, 0xd6d40, indexSamSho5Sprites_Nakoruru, 0, &pairNext6 },
    { L"Nakoruru D Freezed", 0xd6d40, 0xd6d80, indexSamSho5Sprites_Nakoruru, 0, &pairNext5 },
    { L"Nakoruru D KI", 0xd6d80, 0xd6dc0, indexSamSho5Sprites_Nakoruru, 0, &pairNext4 },
    { L"Nakoruru D Issen Trail", 0xd6e00, 0xd6e40, indexSamSho5Sprites_Nakoruru, 0, &pairNext3 },
    { L"Nakoruru D SON", 0xd6e40, 0xd6e80, indexSamSho5Sprites_Nakoruru, 0, &pairNext2 },
    { L"Nakoruru D Nubuke Kamui Trail", 0xd6c80, 0xd6cc0, indexSamSho5Sprites_Nakoruru, 0, &pairNext },
    { L"Mamahaha D", 0xd6e80, 0xd6ea0, indexSamSho5Sprites_Nakoruru, 1 },
    { L"Nakoruru D KI/Slash Effect", 0xd6f40, 0xd6f60 },
    { L"Nakoruru D Elely Kamui Rimse", 0xd6f60, 0xd6f80 },
};

const sGame_PaletteDataset SAMSHO5_A_Rasetsumaru_PALETTES_A[] =
{
    //--A--
    { L"Rasetsumaru A", 0xe7000, 0xe7040, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A Rage", 0xe7040, 0xe7080, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A Burned", 0xe70c0, 0xe7100, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A Zapped", 0xe7100, 0xe7140, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A Freezed", 0xe7140, 0xe7180, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A KI", 0xe7180, 0xe71c0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A Issen Trail", 0xe7200, 0xe7240, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A SON", 0xe7240, 0xe7280, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru A Kogetsuzan Trail", 0xe72c0, 0xe7300 },
    { L"Rasetsumaru A Senpuuretsuzan", 0xe71c0, 0xe71e0 },
    { L"Rasetsumaru A Kogetsuzan/Resshinzan", 0xe71e0, 0xe7200 },
    { L"Rasetsumaru A Hakai Tekina", 0xe7080, 0xe70a0 },
    { L"Rasetsumaru A Slash Effect", 0xe7340, 0xe7360 },
};

const sGame_PaletteDataset SAMSHO5_A_Rasetsumaru_PALETTES_B[] =
{
    // --B--
    { L"Rasetsumaru B", 0xe7400, 0xe7440, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B Rage", 0xe7440, 0xe7480, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B Burned", 0xe74c0, 0xe7500, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B Zapped", 0xe7500, 0xe7540, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B Freezed", 0xe7540, 0xe7580, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B KI", 0xe7580, 0xe75c0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B Issen Trail", 0xe7600, 0xe7640, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B SON", 0xe7640, 0xe7680, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru B Kogetsuzan Trail", 0xe76c0, 0xe7700 },
    { L"Rasetsumaru B Senpuuretsuzan", 0xe75c0, 0xe75e0 },
    { L"Rasetsumaru B Kogetsuzan/Resshinzan", 0xe75e0, 0xe7600 },
    { L"Rasetsumaru B Hakai Tekina", 0xe7480, 0xe74a0 },
    { L"Rasetsumaru B Slash Effect", 0xe7740, 0xe7760 },
};

const sGame_PaletteDataset SAMSHO5_A_Rasetsumaru_PALETTES_C[] =
{
    // --C--
    { L"Rasetsumaru C", 0xe7800, 0xe7840, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C Rage", 0xe7840, 0xe7880, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C Burned", 0xe78c0, 0xe7900, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C Zapped", 0xe7900, 0xe7940, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C Freezed", 0xe7940, 0xe7980, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C KI", 0xe7980, 0xe79c0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C Issen Trail", 0xe7a00, 0xe7a40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C SON", 0xe7a40, 0xe7a80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru C Kogetsuzan Trail", 0xe7ac0, 0xe7b00 },
    { L"Rasetsumaru C Senpuuretsuzan", 0xe79c0, 0xe79e0 },
    { L"Rasetsumaru C Kogetsuzan/Resshinzan", 0xe79e0, 0xe7a00 },
    { L"Rasetsumaru C Hakai Tekina", 0xe7880, 0xe78a0 },
    { L"Rasetsumaru C Slash Effect", 0xe7b40, 0xe7b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Rasetsumaru_PALETTES_D[] =
{
    // --D--
    { L"Rasetsumaru D", 0xe7c00, 0xe7c40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D Rage", 0xe7c40, 0xe7c80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D Burned", 0xe7cc0, 0xe7d00, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D Zapped", 0xe7d00, 0xe7d40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D Freezed", 0xe7d40, 0xe7d80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D KI", 0xe7d80, 0xe7dc0, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D Issen Trail", 0xe7e00, 0xe7e40, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D SON", 0xe7e40, 0xe7e80, indexSamSho5Sprites_Rasetsumaru },
    { L"Rasetsumaru D Kogetsuzan Trail", 0xe7ec0, 0xe7f00 },
    { L"Rasetsumaru D Senpuuretsuzan", 0xe7dc0, 0xe7de0 },
    { L"Rasetsumaru D Kogetsuzan/Resshinzan", 0xe7de0, 0xe7e00 },
    { L"Rasetsumaru D Hakai Tekina", 0xe7c80, 0xe7ca0 },
    { L"Rasetsumaru D Slash Effect", 0xe7f40, 0xe7f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Rera_PALETTES_A[] =
{
    //--A--
    { L"Rera A", 0xe8000, 0xe8040, indexSamSho5Sprites_Rera, 0, &pairNext9 },
    { L"Rera A Rage", 0xe8040, 0xe8080, indexSamSho5Sprites_Rera, 0, &pairNext8 },
    { L"Rera A Burned", 0xe80c0, 0xe8100, indexSamSho5Sprites_Rera, 0, &pairNext7 },
    { L"Rera A Zapped", 0xe8100, 0xe8140, indexSamSho5Sprites_Rera, 0, &pairNext6 },
    { L"Rera A Freezed", 0xe8140, 0xe8180, indexSamSho5Sprites_Rera, 0, &pairNext5 },
    { L"Rera A KI", 0xe8180, 0xe81c0, indexSamSho5Sprites_Rera, 0, &pairNext4 },
    { L"Rera A Issen Trail", 0xe8200, 0xe8240, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera A SON", 0xe8240, 0xe8280, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera A Nubuke Kamui Trail", 0xe8080, 0xe80c0, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru A", 0xe82a0, 0xe82c0, indexSamSho5Sprites_Rera, 1 },
    { L"Rera A KI/Slash Effect", 0xe8340, 0xe8360 },
    { L"Rera A Imeru Shikite", 0xe8360, 0xe8380 },
};

const sGame_PaletteDataset SAMSHO5_A_Rera_PALETTES_B[] =
{
    // --B--
    { L"Rera B", 0xe8400, 0xe8440, indexSamSho5Sprites_Rera, 0, &pairNext9 },
    { L"Rera B Rage", 0xe8440, 0xe8480, indexSamSho5Sprites_Rera, 0, &pairNext8 },
    { L"Rera B Burned", 0xe84c0, 0xe8500, indexSamSho5Sprites_Rera, 0, &pairNext7 },
    { L"Rera B Zapped", 0xe8500, 0xe8540, indexSamSho5Sprites_Rera, 0, &pairNext6 },
    { L"Rera B Freezed", 0xe8540, 0xe8580, indexSamSho5Sprites_Rera, 0, &pairNext5 },
    { L"Rera B KI", 0xe8580, 0xe85c0, indexSamSho5Sprites_Rera, 0, &pairNext4 },
    { L"Rera B Issen Trail", 0xe8600, 0xe8640, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera B SON", 0xe8640, 0xe8680, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera B Nubuke Kamui Trail", 0xe8480, 0xe84c0, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru B", 0xe86a0, 0xe86c0, indexSamSho5Sprites_Rera, 1 },
    { L"Rera B KI/Slash Effect", 0xe8740, 0xe8760 },
    { L"Rera B Imeru Shikite", 0xe8760, 0xe8780 },
};

const sGame_PaletteDataset SAMSHO5_A_Rera_PALETTES_C[] =
{
    // --C--
    { L"Rera C", 0xe8800, 0xe8840, indexSamSho5Sprites_Rera, 0, &pairNext9 },
    { L"Rera C Rage", 0xe8840, 0xe8880, indexSamSho5Sprites_Rera, 0, &pairNext8 },
    { L"Rera C Burned", 0xe88c0, 0xe8900, indexSamSho5Sprites_Rera, 0, &pairNext7 },
    { L"Rera C Zapped", 0xe8900, 0xe8940, indexSamSho5Sprites_Rera, 0, &pairNext6 },
    { L"Rera C Freezed", 0xe8940, 0xe8980, indexSamSho5Sprites_Rera, 0, &pairNext5 },
    { L"Rera C KI", 0xe8980, 0xe89c0, indexSamSho5Sprites_Rera, 0, &pairNext4 },
    { L"Rera C Issen Trail", 0xe8a00, 0xe8a40, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera C SON", 0xe8a40, 0xe8a80, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera C Nubuke Kamui Trail", 0xe8880, 0xe88c0, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru C", 0xe8aa0, 0xe8ac0, indexSamSho5Sprites_Rera, 1 },
    { L"Rera C KI/Slash Effect", 0xe8b40, 0xe8b60 },
    { L"Rera C Imeru Shikite", 0xe8b60, 0xe8b80 },
};

const sGame_PaletteDataset SAMSHO5_A_Rera_PALETTES_D[] =
{
    // --D--
    { L"Rera D", 0xe8c00, 0xe8c40, indexSamSho5Sprites_Rera, 0, &pairNext9 },
    { L"Rera D Rage", 0xe8c40, 0xe8c80, indexSamSho5Sprites_Rera, 0, &pairNext8 },
    { L"Rera D Burned", 0xe8cc0, 0xe8d00, indexSamSho5Sprites_Rera, 0, &pairNext7 },
    { L"Rera D Zapped", 0xe8d00, 0xe8d40, indexSamSho5Sprites_Rera, 0, &pairNext6 },
    { L"Rera D Freezed", 0xe8d40, 0xe8d80, indexSamSho5Sprites_Rera, 0, &pairNext5 },
    { L"Rera D KI", 0xe8d80, 0xe8dc0, indexSamSho5Sprites_Rera, 0, &pairNext4 },
    { L"Rera D Issen Trail", 0xe8e00, 0xe8e40, indexSamSho5Sprites_Rera, 0, &pairNext3 },
    { L"Rera D SON", 0xe8e40, 0xe8e80, indexSamSho5Sprites_Rera, 0, &pairNext2 },
    { L"Rera D Nubuke Kamui Trail", 0xe8c80, 0xe8cc0, indexSamSho5Sprites_Rera, 0, &pairNext },
    { L"Shikuru D", 0xe8ea0, 0xe8ec0, indexSamSho5Sprites_Rera, 1 },
    { L"Rera D KI/Slash Effect", 0xe8f40, 0xe8f60 },
    { L"Rera D Imeru Shikite", 0xe8f60, 0xe8f80 },
};

const sGame_PaletteDataset SAMSHO5_A_Rimururu_PALETTES_A[] =
{
    //--A--
    { L"Rimururu A", 0xd7000, 0xd7040, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A Rage", 0xd7040, 0xd7080, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A Burned", 0xd70c0, 0xd7100, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A Zapped", 0xd7100, 0xd7140, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A Freezed", 0xd7140, 0xd7180, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A KI", 0xd7180, 0xd71c0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A Issen Trail", 0xd7200, 0xd7240, indexSamSho5Sprites_Rimururu },
    { L"Rimururu A SON", 0xd7240, 0xd7280, indexSamSho5Sprites_Rimururu },
    { L"Konru A", 0xd72c0, 0xd72e0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu A Slash Effect", 0xd7340, 0xd7360 },
};

const sGame_PaletteDataset SAMSHO5_A_Rimururu_PALETTES_B[] =
{
    // --B--
    { L"Rimururu B", 0xd7400, 0xd7440, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B Rage", 0xd7440, 0xd7480, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B Burned", 0xd74c0, 0xd7500, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B Zapped", 0xd7500, 0xd7540, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B Freezed", 0xd7540, 0xd7580, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B KI", 0xd7580, 0xd75c0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B Issen Trail", 0xd7600, 0xd7640, indexSamSho5Sprites_Rimururu },
    { L"Rimururu B SON", 0xd7640, 0xd7680, indexSamSho5Sprites_Rimururu },
    { L"Konru B", 0xd76c0, 0xd76e0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu B Slash Effect", 0xd7740, 0xd7760 },
};

const sGame_PaletteDataset SAMSHO5_A_Rimururu_PALETTES_C[] =
{
    // --C--
    { L"Rimururu C", 0xd7800, 0xd7840, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C Rage", 0xd7840, 0xd7880, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C Burned", 0xd78c0, 0xd7900, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C Zapped", 0xd7900, 0xd7940, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C Freezed", 0xd7940, 0xd7980, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C KI", 0xd7980, 0xd79c0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C Issen Trail", 0xd7a00, 0xd7a40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu C SON", 0xd7a40, 0xd7a80, indexSamSho5Sprites_Rimururu },
    { L"Konru C", 0xd7ac0, 0xd7ae0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu C Slash Effect", 0xd7b40, 0xd7b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Rimururu_PALETTES_D[] =
{
    // --D--
    { L"Rimururu D", 0xd7c00, 0xd7c40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D Rage", 0xd7c40, 0xd7c80, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D Burned", 0xd7cc0, 0xd7d00, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D Zapped", 0xd7d00, 0xd7d40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D Freezed", 0xd7d40, 0xd7d80, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D KI", 0xd7d80, 0xd7dc0, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D Issen Trail", 0xd7e00, 0xd7e40, indexSamSho5Sprites_Rimururu },
    { L"Rimururu D SON", 0xd7e40, 0xd7e80, indexSamSho5Sprites_Rimururu },
    { L"Konru D", 0xd7ec0, 0xd7ee0, indexSamSho5Sprites_Rimururu, 0x01 },
    { L"Rimururu D Slash Effect", 0xd7f40, 0xd7f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Shizumaru_PALETTES_A[] =
{
    //--A--
    { L"Shizumaru A", 0xde000, 0xde040, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A Rage", 0xde040, 0xde080, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A Burned", 0xde0c0, 0xde100, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A Zapped", 0xde100, 0xde140, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A Freezed", 0xde140, 0xde180, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A KI", 0xde180, 0xde1c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A Issen Trail", 0xde200, 0xde240, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A SON", 0xde240, 0xde280, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru A Hurricane Slash", 0xde380, 0xde3a0 },
    { L"Shizumaru A Dust", 0xde300, 0xde320 },
    { L"Shizumaru A Heavy Slash", 0xde2c0, 0xde2e0 },
    { L"Shizumaru A Slash Effect", 0xde340, 0xde360 },
};

const sGame_PaletteDataset SAMSHO5_A_Shizumaru_PALETTES_B[] =
{
    // --B--
    { L"Shizumaru B", 0xde400, 0xde440, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B Rage", 0xde440, 0xde480, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B Burned", 0xde4c0, 0xde500, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B Zapped", 0xde500, 0xde540, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B Freezed", 0xde540, 0xde580, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B KI", 0xde580, 0xde5c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B Issen Trail", 0xde600, 0xde640, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B SON", 0xde640, 0xde680, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru B Hurricane Slash", 0xde780, 0xde7a0 },
    { L"Shizumaru B Dust", 0xde700, 0xde720 },
    { L"Shizumaru B Heavy Slash", 0xde6c0, 0xde6e0 },
    { L"Shizumaru B Slash Effect", 0xde740, 0xde760 },
};

const sGame_PaletteDataset SAMSHO5_A_Shizumaru_PALETTES_C[] =
{
    // --C--
    { L"Shizumaru C", 0xde800, 0xde840, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C Rage", 0xde840, 0xde880, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C Burned", 0xde8c0, 0xde900, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C Zapped", 0xde900, 0xde940, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C Freezed", 0xde940, 0xde980, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C KI", 0xde980, 0xde9c0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C Issen Trail", 0xdea00, 0xdea40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C SON", 0xdea40, 0xdea80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru C Hurricane Slash", 0xdeb80, 0xdeba0 },
    { L"Shizumaru C Dust", 0xdeb00, 0xdeb20 },
    { L"Shizumaru C Heavy Slash", 0xdeac0, 0xdeae0 },
    { L"Shizumaru C Slash Effect", 0xdeb40, 0xdeb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Shizumaru_PALETTES_D[] =
{
    // --D--
    { L"Shizumaru D", 0xdec00, 0xdec40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D Rage", 0xdec40, 0xdec80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D Burned", 0xdecc0, 0xded00, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D Zapped", 0xded00, 0xded40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D Freezed", 0xded40, 0xded80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D KI", 0xded80, 0xdedc0, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D Issen Trail", 0xdee00, 0xdee40, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D SON", 0xdee40, 0xdee80, indexSamSho5Sprites_Shizumaru },
    { L"Shizumaru D Hurricane Slash", 0xdef80, 0xdefa0 },
    { L"Shizumaru D Dust", 0xdef00, 0xdef20 },
    { L"Shizumaru D Heavy Slash", 0xdeec0, 0xdeee0 },
    { L"Shizumaru D Slash Effect", 0xdef40, 0xdef60 },
};

const sGame_PaletteDataset SAMSHO5_A_Sogetsu_PALETTES_A[] =
{
    //--A--
    { L"Sogetsu A", 0xe6000, 0xe6040, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A Rage", 0xe6040, 0xe6080, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A Burned", 0xe60c0, 0xe6100, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A Zapped", 0xe6100, 0xe6140, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A Freezed", 0xe6140, 0xe6180, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A KI", 0xe6180, 0xe61c0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A Issen Trail", 0xe6200, 0xe6240, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A SON", 0xe6240, 0xe6280, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu A Intro/Water Pal 1", 0xe6080, 0xe60a0 },
    { L"Sogetsu A Intro/Water Pal 2", 0xe60a0, 0xe60c0 },
    { L"Sogetsu A Water/Slash Effect", 0xe6340, 0xe6360 },
};

const sGame_PaletteDataset SAMSHO5_A_Sogetsu_PALETTES_B[] =
{
    // --B--
    { L"Sogetsu B", 0xe6400, 0xe6440, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B Rage", 0xe6440, 0xe6480, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B Burned", 0xe64c0, 0xe6500, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B Zapped", 0xe6500, 0xe6540, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B Freezed", 0xe6540, 0xe6580, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B KI", 0xe6580, 0xe65c0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B Issen Trail", 0xe6600, 0xe6640, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B SON", 0xe6640, 0xe6680, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu B Intro/Water Pal 1", 0xe6480, 0xe64a0 },
    { L"Sogetsu B Intro/Water Pal 2", 0xe64a0, 0xe64c0 },
    { L"Sogetsu B Water/Slash Effect", 0xe6740, 0xe6760 },
};

const sGame_PaletteDataset SAMSHO5_A_Sogetsu_PALETTES_C[] =
{
    // --C--
    { L"Sogetsu C", 0xe6800, 0xe6840, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C Rage", 0xe6840, 0xe6880, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C Burned", 0xe68c0, 0xe6900, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C Zapped", 0xe6900, 0xe6940, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C Freezed", 0xe6940, 0xe6980, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C KI", 0xe6980, 0xe69c0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C Issen Trail", 0xe6a00, 0xe6a40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C SON", 0xe6a40, 0xe6a80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu C Intro/Water Pal 1", 0xe6880, 0xe68a0 },
    { L"Sogetsu C Intro/Water Pal 2", 0xe68a0, 0xe68c0 },
    { L"Sogetsu C Water/Slash Effect", 0xe6b40, 0xe6b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Sogetsu_PALETTES_D[] =
{
    // --D--
    { L"Sogetsu D", 0xe6c00, 0xe6c40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D Rage", 0xe6c40, 0xe6c80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D Burned", 0xe6cc0, 0xe6d00, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D Zapped", 0xe6d00, 0xe6d40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D Freezed", 0xe6d40, 0xe6d80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D KI", 0xe6d80, 0xe6dc0, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D Issen Trail", 0xe6e00, 0xe6e40, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D SON", 0xe6e40, 0xe6e80, indexSamSho5Sprites_Sogetsu },
    { L"Sogetsu D Intro/Water Pal 1", 0xe6c80, 0xe6ca0 },
    { L"Sogetsu D Intro/Water Pal 2", 0xe6ca0, 0xe6cc0 },
    { L"Sogetsu D Water/Slash Effect", 0xe6f40, 0xe6f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Suija_PALETTES_A[] =
{
    //--A--
    { L"Suija A", 0xea000, 0xea040, indexSamSho5Sprites_Suija },
    { L"Suija A Rage", 0xea040, 0xea080, indexSamSho5Sprites_Suija },
    { L"Suija A Burned", 0xea0c0, 0xea100, indexSamSho5Sprites_Suija },
    { L"Suija A Zapped", 0xea100, 0xea140, indexSamSho5Sprites_Suija },
    { L"Suija A Freezed", 0xea140, 0xea180, indexSamSho5Sprites_Suija },
    { L"Suija A KI", 0xea180, 0xea1c0, indexSamSho5Sprites_Suija },
    { L"Suija A Issen Trail", 0xea200, 0xea240, indexSamSho5Sprites_Suija },
    { L"Suija A SON", 0xea240, 0xea280, indexSamSho5Sprites_Suija },
    { L"Suija A Water Pal", 0xea360, 0xea380 },
    { L"Suija A Water Effect 1", 0xea1c0, 0xea1e0 },
    { L"Suija A Water Effect 2", 0xea1e0, 0xea200 },
    { L"Suija A Water Effect 3", 0xea300, 0xea320 },
    { L"Suija A Water Effect 4", 0xea320, 0xea340 },
    { L"Suija A Water Effect 5", 0xea340, 0xea360 },
    { L"Suija A Water Effect 6", 0xea380, 0xea3a0 },
};

const sGame_PaletteDataset SAMSHO5_A_Suija_PALETTES_B[] =
{
    // --B--
    { L"Suija B", 0xea400, 0xea440, indexSamSho5Sprites_Suija },
    { L"Suija B Rage", 0xea440, 0xea480, indexSamSho5Sprites_Suija },
    { L"Suija B Burned", 0xea4c0, 0xea500, indexSamSho5Sprites_Suija },
    { L"Suija B Zapped", 0xea500, 0xea540, indexSamSho5Sprites_Suija },
    { L"Suija B Freezed", 0xea540, 0xea580, indexSamSho5Sprites_Suija },
    { L"Suija B KI", 0xea580, 0xea5c0, indexSamSho5Sprites_Suija },
    { L"Suija B Issen Trail", 0xea600, 0xea640, indexSamSho5Sprites_Suija },
    { L"Suija B SON", 0xea640, 0xea680, indexSamSho5Sprites_Suija },
    { L"Suija B Water Pal", 0xea760, 0xea780 },
    { L"Suija B Water Effect 1", 0xea5c0, 0xea5e0 },
    { L"Suija B Water Effect 2", 0xea5e0, 0xea600 },
    { L"Suija B Water Effect 3", 0xea700, 0xea720 },
    { L"Suija B Water Effect 4", 0xea720, 0xea740 },
    { L"Suija B Water Effect 5", 0xea740, 0xea760 },
    { L"Suija B Water Effect 6", 0xea780, 0xea7a0 },
};

const sGame_PaletteDataset SAMSHO5_A_Suija_PALETTES_C[] =
{
    // --C--
    { L"Suija C", 0xea800, 0xea840, indexSamSho5Sprites_Suija },
    { L"Suija C Rage", 0xea840, 0xea880, indexSamSho5Sprites_Suija },
    { L"Suija C Burned", 0xea8c0, 0xea900, indexSamSho5Sprites_Suija },
    { L"Suija C Zapped", 0xea900, 0xea940, indexSamSho5Sprites_Suija },
    { L"Suija C Freezed", 0xea940, 0xea980, indexSamSho5Sprites_Suija },
    { L"Suija C KI", 0xea980, 0xea9c0, indexSamSho5Sprites_Suija },
    { L"Suija C Issen Trail", 0xeaa00, 0xeaa40, indexSamSho5Sprites_Suija },
    { L"Suija C SON", 0xeaa40, 0xeaa80, indexSamSho5Sprites_Suija },
    { L"Suija C Water Pal", 0xeab60, 0xeab80 },
    { L"Suija C Water Effect 1", 0xea9c0, 0xea9e0 },
    { L"Suija C Water Effect 2", 0xea9e0, 0xeaa00 },
    { L"Suija C Water Effect 3", 0xeab00, 0xeab20 },
    { L"Suija C Water Effect 4", 0xeab20, 0xeab40 },
    { L"Suija C Water Effect 5", 0xeab40, 0xeab60 },
    { L"Suija C Water Effect 6", 0xeab80, 0xeaba0 },
};

const sGame_PaletteDataset SAMSHO5_A_Suija_PALETTES_D[] =
{
    // --D--
    { L"Suija D", 0xeac00, 0xeac40, indexSamSho5Sprites_Suija },
    { L"Suija D Rage", 0xeac40, 0xeac80, indexSamSho5Sprites_Suija },
    { L"Suija D Burned", 0xeacc0, 0xead00, indexSamSho5Sprites_Suija },
    { L"Suija D Zapped", 0xead00, 0xead40, indexSamSho5Sprites_Suija },
    { L"Suija D Freezed", 0xead40, 0xead80, indexSamSho5Sprites_Suija },
    { L"Suija D KI", 0xead80, 0xeadc0, indexSamSho5Sprites_Suija },
    { L"Suija D Issen Trail", 0xeae00, 0xeae40, indexSamSho5Sprites_Suija },
    { L"Suija D SON", 0xeae40, 0xeae80, indexSamSho5Sprites_Suija },
    { L"Suija D Water Pal", 0xeaf60, 0xeaf80 },
    { L"Suija D Water Effect 1", 0xeadc0, 0xeade0 },
    { L"Suija D Water Effect 2", 0xeade0, 0xeae00 },
    { L"Suija D Water Effect 3", 0xeaf00, 0xeaf20 },
    { L"Suija D Water Effect 4", 0xeaf20, 0xeaf40 },
    { L"Suija D Water Effect 5", 0xeaf40, 0xeaf60 },
    { L"Suija D Water Effect 6", 0xeaf80, 0xeafa0 },
};

const sGame_PaletteDataset SAMSHO5_A_TamTam_PALETTES_A[] =
{
    //--A--
    { L"Tam Tam A", 0xe4000, 0xe4040, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A Rage", 0xe4040, 0xe4080, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A Burned", 0xe40c0, 0xe4100, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A Zapped", 0xe4100, 0xe4140, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A Freezed", 0xe4140, 0xe4180, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A KI", 0xe4180, 0xe41c0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A Issen Trail", 0xe4200, 0xe4240, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A SON", 0xe4240, 0xe4280, indexSamSho5Sprites_TamTam },
    { L"Tam Tam A Magnus Dios Zahl", 0xe4280, 0xe42a0 },
    { L"Tam Tam A Magnus Dios Zahl Followers", 0xe42a0, 0xe42c0 },
    { L"Tam Tam A Ahaooh Gaboora 1", 0xe42c0, 0xe42e0 },
    { L"Tam Tam A Ahaooh Gaboora 2", 0xe42e0, 0xe4300 },
    { L"Tam Tam A Ahaooh Gaboora 3", 0xe4360, 0xe4380 },
    { L"Tam Tam A Ahaooh Gaboora 4", 0xe4380, 0xe43a0 },
    { L"Tam Tam A Slash Effect", 0xe4340, 0xe4360 },
};

const sGame_PaletteDataset SAMSHO5_A_TamTam_PALETTES_B[] =
{
    // --B--
    { L"Tam Tam B", 0xe4400, 0xe4440, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B Rage", 0xe4440, 0xe4480, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B Burned", 0xe44c0, 0xe4500, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B Zapped", 0xe4500, 0xe4540, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B Freezed", 0xe4540, 0xe4580, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B KI", 0xe4580, 0xe45c0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B Issen Trail", 0xe4600, 0xe4640, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B SON", 0xe4640, 0xe4680, indexSamSho5Sprites_TamTam },
    { L"Tam Tam B Magnus Dios Zahl", 0xe4680, 0xe46a0 },
    { L"Tam Tam B Magnus Dios Zahl Followers", 0xe46a0, 0xe46c0 },
    { L"Tam Tam B Ahaooh Gaboora 1", 0xe46c0, 0xe46e0 },
    { L"Tam Tam B Ahaooh Gaboora 2", 0xe46e0, 0xe4700 },
    { L"Tam Tam B Ahaooh Gaboora 3", 0xe4760, 0xe4780 },
    { L"Tam Tam B Ahaooh Gaboora 4", 0xe4780, 0xe47a0 },
    { L"Tam Tam B Slash Effect", 0xe4740, 0xe4760 },
};

const sGame_PaletteDataset SAMSHO5_A_TamTam_PALETTES_C[] =
{
    // --C--
    { L"Tam Tam C", 0xe4800, 0xe4840, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C Rage", 0xe4840, 0xe4880, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C Burned", 0xe48c0, 0xe4900, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C Zapped", 0xe4900, 0xe4940, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C Freezed", 0xe4940, 0xe4980, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C KI", 0xe4980, 0xe49c0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C Issen Trail", 0xe4a00, 0xe4a40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C SON", 0xe4a40, 0xe4a80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam C Magnus Dios Zahl", 0xe4a80, 0xe4aa0 },
    { L"Tam Tam C Magnus Dios Zahl Followers", 0xe4aa0, 0xe4ac0 },
    { L"Tam Tam C Ahaooh Gaboora 1", 0xe4ac0, 0xe4ae0 },
    { L"Tam Tam C Ahaooh Gaboora 2", 0xe4ae0, 0xe4b00 },
    { L"Tam Tam C Ahaooh Gaboora 3", 0xe4b60, 0xe4b80 },
    { L"Tam Tam C Ahaooh Gaboora 4", 0xe4b80, 0xe4ba0 },
    { L"Tam Tam C Slash Effect", 0xe4b40, 0xe4b60 },
};

const sGame_PaletteDataset SAMSHO5_A_TamTam_PALETTES_D[] =
{
    // --D--
    { L"Tam Tam D", 0xe4c00, 0xe4c40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D Rage", 0xe4c40, 0xe4c80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D Burned", 0xe4cc0, 0xe4d00, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D Zapped", 0xe4d00, 0xe4d40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D Freezed", 0xe4d40, 0xe4d80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D KI", 0xe4d80, 0xe4dc0, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D Issen Trail", 0xe4e00, 0xe4e40, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D SON", 0xe4e40, 0xe4e80, indexSamSho5Sprites_TamTam },
    { L"Tam Tam D Magnus Dios Zahl", 0xe4e80, 0xe4ea0 },
    { L"Tam Tam D Magnus Dios Zahl Followers", 0xe4ea0, 0xe4ec0 },
    { L"Tam Tam D Ahaooh Gaboora 1", 0xe4ec0, 0xe4ee0 },
    { L"Tam Tam D Ahaooh Gaboora 2", 0xe4ee0, 0xe4f00 },
    { L"Tam Tam D Ahaooh Gaboora 3", 0xe4f60, 0xe4f80 },
    { L"Tam Tam D Ahaooh Gaboora 4", 0xe4f80, 0xe4fa0 },
    { L"Tam Tam D Slash Effect", 0xe4f40, 0xe4f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Ukyo_PALETTES_A[] =
{
    //--A--
    { L"Ukyo A", 0xdb000, 0xdb040, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A Rage", 0xdb040, 0xdb080, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A Burned", 0xdb0c0, 0xdb100, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A Zapped", 0xdb100, 0xdb140, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A Freezed", 0xdb140, 0xdb180, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A KI", 0xdb180, 0xdb1c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A Issen Trail", 0xdb200, 0xdb240, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A SON", 0xdb240, 0xdb280, indexSamSho5Sprites_Ukyo },
    { L"Ukyo A Tsubame Gaeshi Trail", 0xdb0a0, 0xdb0c0 },
    { L"Ukyo A Tsubame Gaeshi Flame", 0xdb1c0, 0xdb1e0 },
    { L"Ukyo A Special Slash Effect", 0xdb280, 0xdb2a0 },
    { L"Ukyo A Slash Effect", 0xdb340, 0xdb360 },
};

const sGame_PaletteDataset SAMSHO5_A_Ukyo_PALETTES_B[] =
{
    // --B--
    { L"Ukyo B", 0xdb400, 0xdb440, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B Rage", 0xdb440, 0xdb480, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B Burned", 0xdb4c0, 0xdb500, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B Zapped", 0xdb500, 0xdb540, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B Freezed", 0xdb540, 0xdb580, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B KI", 0xdb580, 0xdb5c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B Issen Trail", 0xdb600, 0xdb640, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B SON", 0xdb640, 0xdb680, indexSamSho5Sprites_Ukyo },
    { L"Ukyo B Tsubame Gaeshi Trail", 0xdb4a0, 0xdb4c0 },
    { L"Ukyo B Tsubame Gaeshi Flame", 0xdb5c0, 0xdb5e0 },
    { L"Ukyo B Special Slash Effect", 0xdb680, 0xdb6a0 },
    { L"Ukyo B Slash Effect", 0xdb740, 0xdb760 },
};

const sGame_PaletteDataset SAMSHO5_A_Ukyo_PALETTES_C[] =
{
    // --C--
    { L"Ukyo C", 0xdb800, 0xdb840, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C Rage", 0xdb840, 0xdb880, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C Burned", 0xdb8c0, 0xdb900, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C Zapped", 0xdb900, 0xdb940, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C Freezed", 0xdb940, 0xdb980, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C KI", 0xdb980, 0xdb9c0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C Issen Trail", 0xdba00, 0xdba40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C SON", 0xdba40, 0xdba80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo C Tsubame Gaeshi Trail", 0xdb8a0, 0xdb8c0 },
    { L"Ukyo C Tsubame Gaeshi Flame", 0xdb9c0, 0xdb9e0 },
    { L"Ukyo C Special Slash Effect", 0xdba80, 0xdbaa0 },
    { L"Ukyo C Slash Effect", 0xdbb40, 0xdbb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Ukyo_PALETTES_D[] =
{
    // --D--
    { L"Ukyo D", 0xdbc00, 0xdbc40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D Rage", 0xdbc40, 0xdbc80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D Burned", 0xdbcc0, 0xdbd00, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D Zapped", 0xdbd00, 0xdbd40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D Freezed", 0xdbd40, 0xdbd80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D KI", 0xdbd80, 0xdbdc0, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D Issen Trail", 0xdbe00, 0xdbe40, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D SON", 0xdbe40, 0xdbe80, indexSamSho5Sprites_Ukyo },
    { L"Ukyo D Tsubame Gaeshi Trail", 0xdbca0, 0xdbcc0 },
    { L"Ukyo D Tsubame Gaeshi Flame", 0xdbdc0, 0xdbde0 },
    { L"Ukyo D Special Slash Effect", 0xdbe80, 0xdbea0 },
    { L"Ukyo D Slash Effect", 0xdbf40, 0xdbf60 },
};

const sGame_PaletteDataset SAMSHO5_A_Yoshitora_PALETTES_A[] =
{
    //--A--
    { L"Yoshitora A", 0xeb000, 0xeb040, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A Rage", 0xeb040, 0xeb080, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A Burned", 0xeb0c0, 0xeb100, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A Zapped", 0xeb100, 0xeb140, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A Freezed", 0xeb140, 0xeb180, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A KI", 0xeb180, 0xeb1c0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A Issen Trail", 0xeb200, 0xeb240, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A SON", 0xeb240, 0xeb280, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora A Followers Body", 0xeb360, 0xeb380 },
    { L"Yoshitora A Followers Cloth 1", 0xeb280, 0xeb290 },
    { L"Yoshitora A Followers Cloth 2", 0xeb340, 0xeb360 },
    { L"Yoshitora A 1st Sword Slash Effect", 0xeb290, 0xeb2a0 },
    { L"Yoshitora A 1st Sword Effect", 0xeb2a0, 0xeb2b0 },
    { L"Yoshitora A 1st Sword Effect Changing", 0xeb2b0, 0xeb2c0 },
    { L"Yoshitora A 2nd Sword Slash Effect", 0xeb300, 0xeb310 },
    { L"Yoshitora A 3rd Sword Slash Effect", 0xeb320, 0xeb330 },
    { L"Yoshitora A 4th Sword Slash Effect", 0xeb2c0, 0xeb2e0 },
    { L"Yoshitora A 4th Sword Effect", 0xeb2e0, 0xeb2f0 },
    { L"Yoshitora A 4th Sword Effect Changing", 0xeb2f0, 0xeb300 },
    { L"Yoshitora A 5th Sword Slash Effect", 0xeb1c0, 0xeb1e0 },
    { L"Yoshitora A 6th Sword Blood Effect", 0xeb380, 0xeb390 },
    { L"Yoshitora A 6th Sword Slash Effect", 0xeb390, 0xeb3a0 },
    { L"Yoshitora A 7th Sword Slash Effect", 0xeb330, 0xeb340 },
    { L"Yoshitora A Hollyhock", 0xeb1e0, 0xeb200 },
    { L"Yoshitora A Normal Slash Effect", 0xeb310, 0xeb320 },
};

const sGame_PaletteDataset SAMSHO5_A_Yoshitora_PALETTES_B[] =
{
    // --B--
    { L"Yoshitora B", 0xeb400, 0xeb440, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B Rage", 0xeb440, 0xeb480, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B Burned", 0xeb4c0, 0xeb500, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B Zapped", 0xeb500, 0xeb540, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B Freezed", 0xeb540, 0xeb580, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B KI", 0xeb580, 0xeb5c0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B Issen Trail", 0xeb600, 0xeb640, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B SON", 0xeb640, 0xeb680, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora B Followers Body", 0xeb760, 0xeb780 },
    { L"Yoshitora B Followers Cloth 1", 0xeb680, 0xeb690 },
    { L"Yoshitora B Followers Cloth 2", 0xeb740, 0xeb760 },
    { L"Yoshitora B 1st Sword Slash Effect", 0xeb690, 0xeb6a0 },
    { L"Yoshitora B 1st Sword Effect", 0xeb6a0, 0xeb6b0 },
    { L"Yoshitora B 1st Sword Effect Changing", 0xeb6b0, 0xeb6c0 },
    { L"Yoshitora B 2nd Sword Slash Effect", 0xeb700, 0xeb710 },
    { L"Yoshitora B 3rd Sword Slash Effect", 0xeb720, 0xeb730 },
    { L"Yoshitora B 4th Sword Slash Effect", 0xeb6c0, 0xeb6e0 },
    { L"Yoshitora B 4th Sword Effect", 0xeb6e0, 0xeb6f0 },
    { L"Yoshitora B 4th Sword Effect Changing", 0xeb6f0, 0xeb700 },
    { L"Yoshitora B 5th Sword Slash Effect", 0xeb5c0, 0xeb5e0 },
    { L"Yoshitora B 6th Sword Blood Effect", 0xeb780, 0xeb790 },
    { L"Yoshitora B 6th Sword Slash Effect", 0xeb790, 0xeb7a0 },
    { L"Yoshitora B 7th Sword Slash Effect", 0xeb730, 0xeb740 },
    { L"Yoshitora B Hollyhock", 0xeb5e0, 0xeb600 },
    { L"Yoshitora B Normal Slash Effect", 0xeb710, 0xeb720 },
};

const sGame_PaletteDataset SAMSHO5_A_Yoshitora_PALETTES_C[] =
{
    // --C--
    { L"Yoshitora C", 0xeb800, 0xeb840, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C Rage", 0xeb840, 0xeb880, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C Burned", 0xeb8c0, 0xeb900, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C Zapped", 0xeb900, 0xeb940, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C Freezed", 0xeb940, 0xeb980, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C KI", 0xeb980, 0xeb9c0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C Issen Trail", 0xeba00, 0xeba40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C SON", 0xeba40, 0xeba80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora C Followers Body", 0xebb60, 0xebb80 },
    { L"Yoshitora C Followers Cloth 1", 0xeba80, 0xeba90 },
    { L"Yoshitora C Followers Cloth 2", 0xebb40, 0xebb60 },
    { L"Yoshitora C 1st Sword Slash Effect", 0xeba90, 0xebaa0 },
    { L"Yoshitora C 1st Sword Effect", 0xebaa0, 0xebab0 },
    { L"Yoshitora C 1st Sword Effect Changing", 0xebab0, 0xebac0 },
    { L"Yoshitora C 2nd Sword Slash Effect", 0xebb00, 0xebb10 },
    { L"Yoshitora C 3rd Sword Slash Effect", 0xebb20, 0xebb30 },
    { L"Yoshitora C 4th Sword Slash Effect", 0xebac0, 0xebae0 },
    { L"Yoshitora C 4th Sword Effect", 0xebae0, 0xebaf0 },
    { L"Yoshitora C 4th Sword Effect Changing", 0xebaf0, 0xebb00 },
    { L"Yoshitora C 5th Sword Slash Effect", 0xeb9c0, 0xeb9e0 },
    { L"Yoshitora C 6th Sword Blood Effect", 0xebb80, 0xebb90 },
    { L"Yoshitora C 6th Sword Slash Effect", 0xebb90, 0xebba0 },
    { L"Yoshitora C 7th Sword Slash Effect", 0xebb30, 0xebb40 },
    { L"Yoshitora C Hollyhock", 0xeb9e0, 0xeba00 },
    { L"Yoshitora C Normal Slash Effect", 0xebb10, 0xebb20 },
};

const sGame_PaletteDataset SAMSHO5_A_Yoshitora_PALETTES_D[] =
{
    // --D--
    { L"Yoshitora D", 0xebc00, 0xebc40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D Rage", 0xebc40, 0xebc80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D Burned", 0xebcc0, 0xebd00, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D Zapped", 0xebd00, 0xebd40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D Freezed", 0xebd40, 0xebd80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D KI", 0xebd80, 0xebdc0, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D Issen Trail", 0xebe00, 0xebe40, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D SON", 0xebe40, 0xebe80, indexSamSho5Sprites_Yoshitora },
    { L"Yoshitora D Followers Body", 0xebf60, 0xebf80 },
    { L"Yoshitora D Followers Cloth 1", 0xebe80, 0xebe90 },
    { L"Yoshitora D Followers Cloth 2", 0xebf40, 0xebf60 },
    { L"Yoshitora D 1st Sword Slash Effect", 0xebe90, 0xebea0 },
    { L"Yoshitora D 1st Sword Effect", 0xebea0, 0xebeb0 },
    { L"Yoshitora D 1st Sword Effect Changing", 0xebeb0, 0xebec0 },
    { L"Yoshitora D 2nd Sword Slash Effect", 0xebf00, 0xebf10 },
    { L"Yoshitora D 3rd Sword Slash Effect", 0xebf20, 0xebf30 },
    { L"Yoshitora D 4th Sword Slash Effect", 0xebec0, 0xebee0 },
    { L"Yoshitora D 4th Sword Effect", 0xebee0, 0xebef0 },
    { L"Yoshitora D 4th Sword Effect Changing", 0xebef0, 0xebf00 },
    { L"Yoshitora D 5th Sword Slash Effect", 0xebdc0, 0xebde0 },
    { L"Yoshitora D 6th Sword Blood Effect", 0xebf80, 0xebf90 },
    { L"Yoshitora D 6th Sword Slash Effect", 0xebf90, 0xebfa0 },
    { L"Yoshitora D 7th Sword Slash Effect", 0xebf30, 0xebf40 },
    { L"Yoshitora D Hollyhock", 0xebde0, 0xebe00 },
    { L"Yoshitora D Normal Slash Effect", 0xebf10, 0xebf20 },
};

const sGame_PaletteDataset SAMSHO5_A_Yunfei_PALETTES_A[] =
{
    //--A--
    { L"Yunfei A", 0xec000, 0xec040, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A Rage", 0xec040, 0xec080, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A Burned", 0xec0c0, 0xec100, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A Zapped", 0xec100, 0xec140, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A Freezed", 0xec140, 0xec180, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A KI", 0xec180, 0xec1c0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A Issen Trail", 0xec200, 0xec240, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A SON", 0xec240, 0xec280, indexSamSho5Sprites_Yunfei },
    { L"Yunfei A Heavenly Cloud Charge 1", 0xec2a0, 0xec2c0 },
    { L"Yunfei A Heavenly Cloud Charge 2", 0xec2c0, 0xec2e0 },
    { L"Yunfei A Heavenly Cloud Charge 3", 0xec380, 0xec3a0 },
    { L"Yunfei A Silken Seal of Heavenly Wails", 0xec320, 0xec340 },
    { L"Yunfei A Special Slash Effect", 0xec360, 0xec380 },
    { L"Yunfei A Slash Effect", 0xec340, 0xec360 },
};

const sGame_PaletteDataset SAMSHO5_A_Yunfei_PALETTES_B[] =
{
    // --B--
    { L"Yunfei B", 0xec400, 0xec440, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B Rage", 0xec440, 0xec480, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B Burned", 0xec4c0, 0xec500, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B Zapped", 0xec500, 0xec540, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B Freezed", 0xec540, 0xec580, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B KI", 0xec580, 0xec5c0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B Issen Trail", 0xec600, 0xec640, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B SON", 0xec640, 0xec680, indexSamSho5Sprites_Yunfei },
    { L"Yunfei B Heavenly Cloud Charge 1", 0xec6a0, 0xec6c0 },
    { L"Yunfei B Heavenly Cloud Charge 2", 0xec6c0, 0xec6e0 },
    { L"Yunfei B Heavenly Cloud Charge 3", 0xec780, 0xec7a0 },
    { L"Yunfei B Silken Seal of Heavenly Wails", 0xec720, 0xec740 },
    { L"Yunfei B Special Slash Effect", 0xec760, 0xec780 },
    { L"Yunfei B Slash Effect", 0xec740, 0xec760 },
};

const sGame_PaletteDataset SAMSHO5_A_Yunfei_PALETTES_C[] =
{
    // --C--
    { L"Yunfei C", 0xec800, 0xec840, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C Rage", 0xec840, 0xec880, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C Burned", 0xec8c0, 0xec900, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C Zapped", 0xec900, 0xec940, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C Freezed", 0xec940, 0xec980, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C KI", 0xec980, 0xec9c0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C Issen Trail", 0xeca00, 0xeca40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C SON", 0xeca40, 0xeca80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei C Heavenly Cloud Charge 1", 0xecaa0, 0xecac0 },
    { L"Yunfei C Heavenly Cloud Charge 2", 0xecac0, 0xecae0 },
    { L"Yunfei C Heavenly Cloud Charge 3", 0xecb80, 0xecba0 },
    { L"Yunfei C Silken Seal of Heavenly Wails", 0xecb20, 0xecb40 },
    { L"Yunfei C Special Slash Effect", 0xecb60, 0xecb80 },
    { L"Yunfei C Slash Effect", 0xecb40, 0xecb60 },
};

const sGame_PaletteDataset SAMSHO5_A_Yunfei_PALETTES_D[] =
{
    // --D--
    { L"Yunfei D", 0xecc00, 0xecc40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D Rage", 0xecc40, 0xecc80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D Burned", 0xeccc0, 0xecd00, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D Zapped", 0xecd00, 0xecd40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D Freezed", 0xecd40, 0xecd80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D KI", 0xecd80, 0xecdc0, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D Issen Trail", 0xece00, 0xece40, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D SON", 0xece40, 0xece80, indexSamSho5Sprites_Yunfei },
    { L"Yunfei D Heavenly Cloud Charge 1", 0xecea0, 0xecec0 },
    { L"Yunfei D Heavenly Cloud Charge 2", 0xecec0, 0xecee0 },
    { L"Yunfei D Heavenly Cloud Charge 3", 0xecf80, 0xecfa0 },
    { L"Yunfei D Silken Seal of Heavenly Wails", 0xecf20, 0xecf40 },
    { L"Yunfei D Special Slash Effect", 0xecf60, 0xecf80 },
    { L"Yunfei D Slash Effect", 0xecf40, 0xecf60 },
};

const sGame_PaletteDataset SAMSHO5_A_Yumeji_PALETTES_A[] =
{
    //--A--
    { L"Yumeji A", 0xe0000, 0xe0040, indexSS5_Yumeji, 0x00, &pairNext8 },
    { L"Yumeji A Rage", 0xe0040, 0xe0080, indexSS5_Yumeji, 0x00, &pairNext7 },
    { L"Yumeji A Burned", 0xe00c0, 0xe0100, indexSS5_Yumeji, 0x00, &pairNext6 },
    { L"Yumeji A Zapped", 0xe0100, 0xe0140, indexSS5_Yumeji, 0x00, &pairNext5 },
    { L"Yumeji A Freezed", 0xe0140, 0xe0180, indexSS5_Yumeji, 0x00, &pairNext4 },
    { L"Yumeji A KI", 0xe0180, 0xe01c0, indexSS5_Yumeji, 0x00, &pairNext3 },
    { L"Yumeji A Issen Trail", 0xe0200, 0xe0240, indexSS5_Yumeji, 0x00, &pairNext2 },
    { L"Yumeji A SON", 0xe0240, 0xe0280, indexSS5_Yumeji, 0x00, &pairNext },
    { L"Yumeji A Tomato", 0xe03e0, 0xe0400, indexSS5_Yumeji, 0x01 },
    { L"Yumeji A Transformation", 0xe00a0, 0xe00c0 },
    { L"Yumeji A Transformation Weapons", 0xe0080, 0xe00a0 },
    { L"Yumeji A Haohmaru", 0xe01c0, 0xe01e0, indexSS5_Yumeji, 0x003 },
    { L"Yumeji A Genjuro", 0xe01e0, 0xe0200 },
    { L"Yumeji A Hanzo", 0xe0280, 0xe02a0 },
    { L"Yumeji A Jubei", 0xe02a0, 0xe02c0 },
    { L"Yumeji A Nakoruru", 0xe02c0, 0xe02e0 },
    { L"Yumeji A Rimururu", 0xe02e0, 0xe0300 },
    { L"Yumeji A Ukyo", 0xe0300, 0xe0320 },
    { L"Yumeji A Charlotte", 0xe0320, 0xe0340 },
    { L"Yumeji A Kyoshiro", 0xe0360, 0xe0380 },
    { L"Yumeji A Yoshitora", 0xe0380, 0xe03a0 },
    { L"Yumeji A Slash Effect", 0xe0340, 0xe0360 },
};

const sGame_PaletteDataset SAMSHO5_A_Yumeji_PALETTES_B[] =
{
    // --B--
    { L"Yumeji B", 0xe0400, 0xe0440, indexSS5_Yumeji, 0x00, &pairNext8 },
    { L"Yumeji B Rage", 0xe0440, 0xe0480, indexSS5_Yumeji, 0x00, &pairNext7 },
    { L"Yumeji B Burned", 0xe04c0, 0xe0500, indexSS5_Yumeji, 0x00, &pairNext6 },
    { L"Yumeji B Zapped", 0xe0500, 0xe0540, indexSS5_Yumeji, 0x00, &pairNext5 },
    { L"Yumeji B Freezed", 0xe0540, 0xe0580, indexSS5_Yumeji, 0x00, &pairNext4 },
    { L"Yumeji B KI", 0xe0580, 0xe05c0, indexSS5_Yumeji, 0x00, &pairNext3 },
    { L"Yumeji B Issen Trail", 0xe0600, 0xe0640, indexSS5_Yumeji, 0x00, &pairNext2 },
    { L"Yumeji B SON", 0xe0640, 0xe0680, indexSS5_Yumeji, 0x00, &pairNext },
    { L"Yumeji B Tomato", 0xe07e0, 0xe0800, indexSS5_Yumeji, 0x01 },
    { L"Yumeji B Slash Effect", 0xe0740, 0xe0760 },
    { L"Yumeji B Transformation", 0xe04a0, 0xe04c0 },
    { L"Yumeji B Transformation Weapons", 0xe0480, 0xe04a0 },
    { L"Yumeji B Haohmaru", 0xe05c0, 0xe05e0, indexSS5_Yumeji, 0x03 },
    { L"Yumeji B Genjuro", 0xe05e0, 0xe0600 },
    { L"Yumeji B Hanzo", 0xe0680, 0xe06a0 },
    { L"Yumeji B Jubei", 0xe06a0, 0xe06c0 },
    { L"Yumeji B Nakoruru", 0xe06c0, 0xe06e0 },
    { L"Yumeji B Rimururu", 0xe06e0, 0xe0700 },
    { L"Yumeji B Ukyo", 0xe0700, 0xe0720 },
    { L"Yumeji B Charlotte", 0xe0720, 0xe0740 },
    { L"Yumeji B Kyoshiro", 0xe0760, 0xe0780 },
    { L"Yumeji B Yoshitora", 0xe0780, 0xe07a0 },
};

const sGame_PaletteDataset SAMSHO5_A_Yumeji_PALETTES_C[] =
{
    // --C--
    { L"Yumeji C", 0xe0800, 0xe0840, indexSS5_Yumeji, 0x00, &pairNext8 },
    { L"Yumeji C Rage", 0xe0840, 0xe0880, indexSS5_Yumeji, 0x00, &pairNext7 },
    { L"Yumeji C Burned", 0xe08c0, 0xe0900, indexSS5_Yumeji, 0x00, &pairNext6 },
    { L"Yumeji C Zapped", 0xe0900, 0xe0940, indexSS5_Yumeji, 0x00, &pairNext5 },
    { L"Yumeji C Freezed", 0xe0940, 0xe0980, indexSS5_Yumeji, 0x00, &pairNext4 },
    { L"Yumeji C KI", 0xe0980, 0xe09c0, indexSS5_Yumeji, 0x00, &pairNext3 },
    { L"Yumeji C Issen Trail", 0xe0a00, 0xe0a40, indexSS5_Yumeji, 0x00, &pairNext2 },
    { L"Yumeji C SON", 0xe0a40, 0xe0a80, indexSS5_Yumeji, 0x00, &pairNext },
    { L"Yumeji C Tomato", 0xe0be0, 0xe0c00, indexSS5_Yumeji, 0x01 },
    { L"Yumeji C Transformation", 0xe08a0, 0xe08c0 },
    { L"Yumeji C Transformation Weapons", 0xe0880, 0xe08a0 },
    { L"Yumeji C Haohmaru", 0xe09c0, 0xe09e0, indexSS5_Yumeji, 0x03 },
    { L"Yumeji C Genjuro", 0xe09e0, 0xe0a00 },
    { L"Yumeji C Hanzo", 0xe0a80, 0xe0aa0 },
    { L"Yumeji C Jubei", 0xe0aa0, 0xe0ac0 },
    { L"Yumeji C Nakoruru", 0xe0ac0, 0xe0ae0 },
    { L"Yumeji C Rimururu", 0xe0ae0, 0xe0b00 },
    { L"Yumeji C Ukyo", 0xe0b00, 0xe0b20 },
    { L"Yumeji C Charlotte", 0xe0b20, 0xe0b40 },
    { L"Yumeji C Kyoshiro", 0xe0b60, 0xe0b80 },
    { L"Yumeji C Yoshitora", 0xe0b80, 0xe0ba0 },
    { L"Yumeji C Slash Effect", 0xe0b40, 0xe0b60 },
};

const sGame_PaletteDataset SAMSHO5_A_Yumeji_PALETTES_D[] =
{
    // --D--
    { L"Yumeji D", 0xe0c00, 0xe0c40, indexSS5_Yumeji, 0x00, &pairNext8 },
    { L"Yumeji D Rage", 0xe0c40, 0xe0c80, indexSS5_Yumeji, 0x00, &pairNext7 },
    { L"Yumeji D Burned", 0xe0cc0, 0xe0d00, indexSS5_Yumeji, 0x00, &pairNext6 },
    { L"Yumeji D Zapped", 0xe0d00, 0xe0d40, indexSS5_Yumeji, 0x00, &pairNext5 },
    { L"Yumeji D Freezed", 0xe0d40, 0xe0d80, indexSS5_Yumeji, 0x00, &pairNext4 },
    { L"Yumeji D KI", 0xe0d80, 0xe0dc0, indexSS5_Yumeji, 0x00, &pairNext3 },
    { L"Yumeji D Issen Trail", 0xe0e00, 0xe0e40, indexSS5_Yumeji, 0x00, &pairNext2 },
    { L"Yumeji D SON", 0xe0e40, 0xe0e80, indexSS5_Yumeji, 0x00, &pairNext },
    { L"Yumeji D Tomato", 0xe0fe0, 0xe1000, indexSS5_Yumeji, 0x01 },
    { L"Yumeji D Transformation", 0xe0ca0, 0xe0cc0 },
    { L"Yumeji D Transformation Weapons", 0xe0c80, 0xe0ca0 },
    { L"Yumeji D Haohmaru", 0xe0dc0, 0xe0de0, indexSS5_Yumeji, 0x03 },
    { L"Yumeji D Genjuro", 0xe0de0, 0xe0e00 },
    { L"Yumeji D Hanzo", 0xe0e80, 0xe0ea0 },
    { L"Yumeji D Jubei", 0xe0ea0, 0xe0ec0 },
    { L"Yumeji D Nakoruru", 0xe0ec0, 0xe0ee0 },
    { L"Yumeji D Rimururu", 0xe0ee0, 0xe0f00 },
    { L"Yumeji D Ukyo", 0xe0f00, 0xe0f20 },
    { L"Yumeji D Charlotte", 0xe0f20, 0xe0f40 },
    { L"Yumeji D Kyoshiro", 0xe0f60, 0xe0f80 },
    { L"Yumeji D Yoshitora", 0xe0f80, 0xe0fa0 },
    { L"Yumeji D Slash Effect", 0xe0f40, 0xe0f60 },
};

const sGame_PaletteDataset SAMSHO5_A_Sankuro_PALETTES_A[] =
{
    //--A--
    { L"Sankuro A", 0xe2000, 0xe2040, indexSS5_Sankuro },
    { L"Sankuro A Rage", 0xe2040, 0xe2080, indexSS5_Sankuro },
    { L"Sankuro A Burned", 0xe20c0, 0xe2100, indexSS5_Sankuro },
    { L"Sankuro A Zapped", 0xe2100, 0xe2140, indexSS5_Sankuro },
    { L"Sankuro A Freezed", 0xe2140, 0xe2180, indexSS5_Sankuro },
    { L"Sankuro A KI", 0xe2180, 0xe21c0, indexSS5_Sankuro },
    { L"Sankuro A Issen Trail", 0xe2200, 0xe2240, indexSS5_Sankuro },
    { L"Sankuro A SON", 0xe2240, 0xe2280, indexSS5_Sankuro },
    { L"Sankuro A Haijiki", 0xe2280, 0xe22a0 },
    { L"Sankuro A Haijiki Dust", 0xe22a0, 0xe22c0 },
    { L"Sankuro A Goshichi", 0xe22c0, 0xe22e0 },
    { L"Sankuro A Ippachi", 0xe22e0, 0xe2300 },
    { L"Sankuro A Fuyo", 0xe2300, 0xe2320 },
};

const sGame_PaletteDataset SAMSHO5_A_Sankuro_PALETTES_B[] =
{
    // --B--
    { L"Sankuro B", 0xe2400, 0xe2440, indexSS5_Sankuro },
    { L"Sankuro B Rage", 0xe2440, 0xe2480, indexSS5_Sankuro },
    { L"Sankuro B Burned", 0xe24c0, 0xe2500, indexSS5_Sankuro },
    { L"Sankuro B Zapped", 0xe2500, 0xe2540, indexSS5_Sankuro },
    { L"Sankuro B Freezed", 0xe2540, 0xe2580, indexSS5_Sankuro },
    { L"Sankuro B KI", 0xe2580, 0xe25c0, indexSS5_Sankuro },
    { L"Sankuro B Issen Trail", 0xe2600, 0xe2640, indexSS5_Sankuro },
    { L"Sankuro B SON", 0xe2640, 0xe2680, indexSS5_Sankuro },
    { L"Sankuro B Haijiki", 0xe2680, 0xe26a0 },
    { L"Sankuro B Haijiki Dust", 0xe26a0, 0xe26c0 },
    { L"Sankuro B Goshichi", 0xe26c0, 0xe26e0 },
    { L"Sankuro B Ippachi", 0xe26e0, 0xe2700 },
    { L"Sankuro B Fuyo", 0xe2700, 0xe2720 },
};

const sGame_PaletteDataset SAMSHO5_A_Sankuro_PALETTES_C[] =
{
    // --C--
    { L"Sankuro C", 0xe2800, 0xe2840, indexSS5_Sankuro },
    { L"Sankuro C Rage", 0xe2840, 0xe2880, indexSS5_Sankuro },
    { L"Sankuro C Burned", 0xe28c0, 0xe2900, indexSS5_Sankuro },
    { L"Sankuro C Zapped", 0xe2900, 0xe2940, indexSS5_Sankuro },
    { L"Sankuro C Freezed", 0xe2940, 0xe2980, indexSS5_Sankuro },
    { L"Sankuro C KI", 0xe2980, 0xe29c0, indexSS5_Sankuro },
    { L"Sankuro C Issen Trail", 0xe2a00, 0xe2a40, indexSS5_Sankuro },
    { L"Sankuro C SON", 0xe2a40, 0xe2a80, indexSS5_Sankuro },
    { L"Sankuro C Haijiki", 0xe2a80, 0xe2aa0 },
    { L"Sankuro C Haijiki Dust", 0xe2aa0, 0xe2ac0 },
    { L"Sankuro C Goshichi", 0xe2ac0, 0xe2ae0 },
    { L"Sankuro C Ippachi", 0xe2ae0, 0xe2b00 },
    { L"Sankuro C Fuyo", 0xe2b00, 0xe2b20 },
};

const sGame_PaletteDataset SAMSHO5_A_Sankuro_PALETTES_D[] =
{
    // --D--
    { L"Sankuro D", 0xe2c00, 0xe2c40, indexSS5_Sankuro },
    { L"Sankuro D Rage", 0xe2c40, 0xe2c80, indexSS5_Sankuro },
    { L"Sankuro D Burned", 0xe2cc0, 0xe2d00, indexSS5_Sankuro },
    { L"Sankuro D Zapped", 0xe2d00, 0xe2d40, indexSS5_Sankuro },
    { L"Sankuro D Freezed", 0xe2d40, 0xe2d80, indexSS5_Sankuro },
    { L"Sankuro D KI", 0xe2d80, 0xe2dc0, indexSS5_Sankuro },
    { L"Sankuro D Issen Trail", 0xe2e00, 0xe2e40, indexSS5_Sankuro },
    { L"Sankuro D SON", 0xe2e40, 0xe2e80, indexSS5_Sankuro },
    { L"Sankuro D Haijiki", 0xe2e80, 0xe2ea0 },
    { L"Sankuro D Haijiki Dust", 0xe2ea0, 0xe2ec0 },
    { L"Sankuro D Goshichi", 0xe2ec0, 0xe2ee0 },
    { L"Sankuro D Ippachi", 0xe2ee0, 0xe2f00 },
    { L"Sankuro D Fuyo", 0xe2f00, 0xe2f20 },
};

const sGame_PaletteDataset SAMSHO5_A_Basara_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Basara A Portrait", 0xdd3a0, 0xdd3e0, indexSS5_Basara, 0x40 },
    { L"Basara B Portrait", 0xdd7a0, 0xdd7e0, indexSS5_Basara, 0x40 },
    { L"Basara C Portrait", 0xddba0, 0xddbe0, indexSS5_Basara, 0x40 },
    { L"Basara D Portrait", 0xddfa0, 0xddfe0, indexSS5_Basara, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Charlotte_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Charlotte A Portrait", 0xe33a0, 0xe33e0, indexSS5_Charlotte, 0x40 },
    { L"Charlotte B Portrait", 0xe37a0, 0xe37e0, indexSS5_Charlotte, 0x40 },
    { L"Charlotte C Portrait", 0xe3ba0, 0xe3be0, indexSS5_Charlotte, 0x40 },
    { L"Charlotte D Portrait", 0xe3fa0, 0xe3fe0, indexSS5_Charlotte, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Enja_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Enja A Portrait", 0xe93a0, 0xe93e0, indexSS5_Enja, 0x40 },
    { L"Enja B Portrait", 0xe97a0, 0xe97e0, indexSS5_Enja, 0x40 },
    { L"Enja C Portrait", 0xe9ba0, 0xe9be0, indexSS5_Enja, 0x40 },
    { L"Enja D Portrait", 0xe9fa0, 0xe9fe0, indexSS5_Enja, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Gaira_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Gaira A Portrait", 0xdf3a0, 0xdf3e0, indexSS5_Gaira, 0x40 },
    { L"Gaira B Portrait", 0xdf7a0, 0xdf7e0, indexSS5_Gaira, 0x40 },
    { L"Gaira C Portrait", 0xdfba0, 0xdfbe0, indexSS5_Gaira, 0x40 },
    { L"Gaira D Portrait", 0xdffa0, 0xdffe0, indexSS5_Gaira, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Galford_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Galford A Portrait", 0xd93a0, 0xd93e0, indexSS5_Galford, 0x40 },
    { L"Poppy A Portrait", 0xd93e0, 0xd9400, indexSS5_Galford, 0x3f },
    { L"Galford B Portrait", 0xd97a0, 0xd97e0, indexSS5_Galford, 0x40 },
    { L"Poppy B Portrait", 0xd97e0, 0xd9800, indexSS5_Galford, 0x3f },
    { L"Galford C Portrait", 0xd9ba0, 0xd9be0, indexSS5_Galford, 0x40 },
    { L"Poppy C Portrait", 0xd9be0, 0xd9c00, indexSS5_Galford, 0x3f },
    { L"Galford D Portrait", 0xd9fa0, 0xd9fe0, indexSS5_Galford, 0x40 },
    { L"Poppy D Portrait", 0xd9fe0, 0xda000, indexSS5_Galford, 0x3f },
};

const sGame_PaletteDataset SAMSHO5_A_Gaoh_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Gaoh A Portrait", 0xef3a0, 0xef3e0, indexSS5_Gaoh, 0x40 },
    { L"Gaoh B Portrait", 0xef7a0, 0xef7e0, indexSS5_Gaoh, 0x40 },
    { L"Gaoh C Portrait", 0xefba0, 0xefbe0, indexSS5_Gaoh, 0x40 },
    { L"Gaoh D Portrait", 0xeffa0, 0xeffe0, indexSS5_Gaoh, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Genjuro_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Genjuro A Portrait", 0xdc3a0, 0xdc3e0, indexSS5_Genjuro, 0x40 },
    { L"Genjuro B Portrait", 0xdc7a0, 0xdc7e0, indexSS5_Genjuro, 0x40 },
    { L"Genjuro C Portrait", 0xdcba0, 0xdcbe0, indexSS5_Genjuro, 0x40 },
    { L"Genjuro D Portrait", 0xdcfa0, 0xdcfe0, indexSS5_Genjuro, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Hanzo_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Hanzo A Portrait", 0xd83a0, 0xd83e0, indexSS5_Hanzo, 0x40 },
    { L"Hanzo B Portrait", 0xd87a0, 0xd87e0, indexSS5_Hanzo, 0x40 },
    { L"Hanzo C Portrait", 0xd8ba0, 0xd8be0, indexSS5_Hanzo, 0x40 },
    { L"Hanzo D Portrait", 0xd8fa0, 0xd8fe0, indexSS5_Hanzo, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Haohmaru_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Haohmaru A Portrait", 0xd53a0, 0xd53e0, indexSS5_Haohmaru, 0x40 },
    { L"Haohmaru B Portrait", 0xd57a0, 0xd57e0, indexSS5_Haohmaru, 0x40 },
    { L"Haohmaru C Portrait", 0xd5ba0, 0xd5be0, indexSS5_Haohmaru, 0x40 },
    { L"Haohmaru D Portrait", 0xd5fa0, 0xd5fe0, indexSS5_Haohmaru, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Jubei_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Jubei A Portrait", 0xe13a0, 0xe13e0, indexSS5_Jubei, 0x40 },
    { L"Jubei B Portrait", 0xe17a0, 0xe17e0, indexSS5_Jubei, 0x40 },
    { L"Jubei C Portrait", 0xe1ba0, 0xe1be0, indexSS5_Jubei, 0x40 },
    { L"Jubei D Portrait", 0xe1fa0, 0xe1fe0, indexSS5_Jubei, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Kazuki_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Kazuki A Portrait", 0xe53a0, 0xe53e0, indexSS5_Kazuki, 0x40 },
    { L"Kazuki B Portrait", 0xe57a0, 0xe57e0, indexSS5_Kazuki, 0x40 },
    { L"Kazuki C Portrait", 0xe5ba0, 0xe5be0, indexSS5_Kazuki, 0x40 },
    { L"Kazuki D Portrait", 0xe5fa0, 0xe5fe0, indexSS5_Kazuki, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Kusaregedo_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Kusaregedo A Portrait", 0xee3a0, 0xee3e0, indexSS5_Kusaregedo, 0x40 },
    { L"Kusaregedo B Portrait", 0xee7a0, 0xee7e0, indexSS5_Kusaregedo, 0x40 },
    { L"Kusaregedo C Portrait", 0xeeba0, 0xeebe0, indexSS5_Kusaregedo, 0x40 },
    { L"Kusaregedo D Portrait", 0xeefa0, 0xeefe0, indexSS5_Kusaregedo, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Kyoshiro_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Kyoshiro A Portrait", 0xda3a0, 0xda3e0, indexSS5_Kyoshiro, 0x40 },
    { L"Kyoshiro B Portrait", 0xda7a0, 0xda7e0, indexSS5_Kyoshiro, 0x40 },
    { L"Kyoshiro C Portrait", 0xdaba0, 0xdabe0, indexSS5_Kyoshiro, 0x40 },
    { L"Kyoshiro D Portrait", 0xdafa0, 0xdafe0, indexSS5_Kyoshiro, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Mina_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Mina A Portrait", 0xed3a0, 0xed3e0, indexSS5_Mina, 0x40 },
    { L"Mina B Portrait", 0xed7a0, 0xed7e0, indexSS5_Mina, 0x40 },
    { L"Mina C Portrait", 0xedba0, 0xedbe0, indexSS5_Mina, 0x40 },
    { L"Mina D Portrait", 0xedfa0, 0xedfe0, indexSS5_Mina, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Nakoruru_PALETTES_PORTRAITS[] =
{
    //--Portrait--
    { L"Nakoruru A Portrait", 0xd63a0, 0xd63e0, indexSS5_Nakoruru, 0x40 },
    { L"Nakoruru B Portrait", 0xd67a0, 0xd67e0, indexSS5_Nakoruru, 0x40 },
    { L"Nakoruru C Portrait", 0xd6ba0, 0xd6be0, indexSS5_Nakoruru, 0x40 },
    { L"Nakoruru D Portrait", 0xd6fa0, 0xd6fe0, indexSS5_Nakoruru, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Rasetsumaru_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Rasetsumaru A Portrait", 0xe73a0, 0xe73e0, indexSS5_Rasetsumaru, 0x40 },
    { L"Rasetsumaru B Portrait", 0xe77a0, 0xe77e0, indexSS5_Rasetsumaru, 0x40 },
    { L"Rasetsumaru C Portrait", 0xe7ba0, 0xe7be0, indexSS5_Rasetsumaru, 0x40 },
    { L"Rasetsumaru D Portrait", 0xe7fa0, 0xe7fe0, indexSS5_Rasetsumaru, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Rera_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Rera A Portrait", 0xe83a0, 0xe83e0, indexSS5_Rera, 0x40 },
    { L"Rera B Portrait", 0xe87a0, 0xe87e0, indexSS5_Rera, 0x40 },
    { L"Rera C Portrait", 0xe8ba0, 0xe8be0, indexSS5_Rera, 0x40 },
    { L"Rera D Portrait", 0xe8fa0, 0xe8fe0, indexSS5_Rera, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Rimururu_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Rimururu A Portrait", 0xd73a0, 0xd73e0, indexSS5_Rimururu, 0x40 },
    { L"Rimururu B Portrait", 0xd77a0, 0xd77e0, indexSS5_Rimururu, 0x40 },
    { L"Rimururu C Portrait", 0xd7ba0, 0xd7be0, indexSS5_Rimururu, 0x40 },
    { L"Rimururu D Portrait", 0xd7fa0, 0xd7fe0, indexSS5_Rimururu, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Shizumaru_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Shizumaru A Portrait", 0xde3a0, 0xde3e0, indexSS5_Shizumaru, 0x40 },
    { L"Shizumaru B Portrait", 0xde7a0, 0xde7e0, indexSS5_Shizumaru, 0x40 },
    { L"Shizumaru C Portrait", 0xdeba0, 0xdebe0, indexSS5_Shizumaru, 0x40 },
    { L"Shizumaru D Portrait", 0xdefa0, 0xdefe0, indexSS5_Shizumaru, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Sogetsu_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Sogetsu A Portrait", 0xe63a0, 0xe63e0, indexSS5_Sogetsu, 0x40 },
    { L"Sogetsu B Portrait", 0xe67a0, 0xe67e0, indexSS5_Sogetsu, 0x40 },
    { L"Sogetsu C Portrait", 0xe6ba0, 0xe6be0, indexSS5_Sogetsu, 0x40 },
    { L"Sogetsu D Portrait", 0xe6fa0, 0xe6fe0, indexSS5_Sogetsu, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Suija_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Suija A Portrait", 0xea3a0, 0xea3e0, indexSS5_Suija, 0x40 },
    { L"Suija B Portrait", 0xea7a0, 0xea7e0, indexSS5_Suija, 0x40 },
    { L"Suija C Portrait", 0xeaba0, 0xeabe0, indexSS5_Suija, 0x40 },
    { L"Suija D Portrait", 0xeafa0, 0xeafe0, indexSS5_Suija, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_TamTam_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Tam Tam A Portrait", 0xe43a0, 0xe43e0, indexSS5_TamTam, 0x40 },
    { L"Tam Tam B Portrait", 0xe47a0, 0xe47e0, indexSS5_TamTam, 0x40 },
    { L"Tam Tam C Portrait", 0xe4ba0, 0xe4be0, indexSS5_TamTam, 0x40 },
    { L"Tam Tam D Portrait", 0xe4fa0, 0xe4fe0, indexSS5_TamTam, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Ukyo_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Ukyo A Portrait", 0xdb3a0, 0xdb3e0, indexSS5_Ukyo, 0x40 },
    { L"Ukyo B Portrait", 0xdb7a0, 0xdb7e0, indexSS5_Ukyo, 0x40 },
    { L"Ukyo C Portrait", 0xdbba0, 0xdbbe0, indexSS5_Ukyo, 0x40 },
    { L"Ukyo D Portrait", 0xdbfa0, 0xdbfe0, indexSS5_Ukyo, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Yoshitora_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Yoshitora A Portrait", 0xeb3a0, 0xeb3e0, indexSS5_Yoshitora, 0x40 },
    { L"Yoshitora B Portrait", 0xeb7a0, 0xeb7e0, indexSS5_Yoshitora, 0x40 },
    { L"Yoshitora C Portrait", 0xebba0, 0xebbe0, indexSS5_Yoshitora, 0x40 },
    { L"Yoshitora D Portrait", 0xebfa0, 0xebfe0, indexSS5_Yoshitora, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Yumeji_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Yumeji A Portrait", 0xe03a0, 0xe03e0, indexSS5_Yumeji, 0x40 },
    { L"Yumeji B Portrait", 0xe07a0, 0xe07e0, indexSS5_Yumeji, 0x40 },
    { L"Yumeji C Portrait", 0xe0ba0, 0xe0be0, indexSS5_Yumeji, 0x40 },
    { L"Yumeji D Portrait", 0xe0fa0, 0xe0fe0, indexSS5_Yumeji, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_Yunfei_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Yunfei A Portrait", 0xec3a0, 0xec3e0, indexSS5_Yunfei, 0x40 },
    { L"Yunfei B Portrait", 0xec7a0, 0xec7e0, indexSS5_Yunfei, 0x40 },
    { L"Yunfei C Portrait", 0xecba0, 0xecbe0, indexSS5_Yunfei, 0x40 },
    { L"Yunfei D Portrait", 0xecfa0, 0xecfe0, indexSS5_Yunfei, 0x40 },
};


const sGame_PaletteDataset SAMSHO5_A_Sankuro_PALETTES_PORTRAITS[] =
{
    // --Portrait--
    { L"Sankuro A Portrait", 0xe23a0, 0xe23e0, indexSS5_Sankuro, 0x40 },
    { L"Sankuro B Portrait", 0xe27a0, 0xe27e0, indexSS5_Sankuro, 0x40 },
    { L"Sankuro C Portrait", 0xe2ba0, 0xe2be0, indexSS5_Sankuro, 0x40 },
    { L"Sankuro D Portrait", 0xe2fa0, 0xe2fe0, indexSS5_Sankuro, 0x40 },
};

const sGame_PaletteDataset SAMSHO5_A_BONUS_HUD_PALETTES[] =
{
    { L"Generic Text", 0xd4000, 0xd4020 },
    { L"Intro Text/KO/POW", 0xd4020, 0xd4040, indexSamSho5Sprites_Bonus, 0x04 },
    { L"Counter Text", 0xd4040, 0xd4060, indexSamSho5Sprites_Bonus, 0x05 },
    { L"Top Bar", 0xd4060, 0xd4080, indexSamSho5Sprites_Bonus, 0x02 },
    { L"Low Health", 0xd4080, 0xd40a0, indexSamSho5Sprites_Bonus, 0x01 },
    { L"Bottom Bar", 0xd40a0, 0xd40c0, indexSamSho5Sprites_Bonus, 0x03 },
    { L"Timer/Names/Rage Active Bar/New Challenger", 0xd40c0, 0xd40e0, indexSamSho5Sprites_Bonus, 0x08 },
    { L"Round Win Icon", 0xd4100, 0xd4120 },
    { L"Text Board", 0xd42e0, 0xd4300 },
    { L"Character Names", 0xd44c0, 0xd44e0 },
    { L"Nameplates", 0xd44e0, 0xd4500 },
    { L"Round/Fight Text", 0xd4c20, 0xd4c40 },
    { L"Slash Text 1", 0xd4800, 0xd4820 },
    { L"Slash Text 2", 0xd4820, 0xd4840 },
    { L"Push Button Battle", 0xd45a0, 0xd45c0 },
    { L"Push Battle Text", 0xd4860, 0xd4880 },
    { L"VS Background", 0xd4ca0, 0xd4cc0 },
    { L"VS Board", 0xd4f00, 0xd4f40 },
    { L"Score Text", 0xd4ce0, 0xd4d00 },
    { L"Name Box", 0xd4180, 0xd41a0 },
    { L"Demo Logo", 0xd41a0, 0xd41c0 },
};

const sGame_PaletteDataset SAMSHO5_A_BONUS_CS_PALETTES[] =
{
    //--Character Screen--
    { L"Select Screen Background", 0xd48a0, 0xd48c0 },
    { L"Poppy Icon", 0xd49a0, 0xd49c0 },
    { L"Haohmaru/Genjuro/Jubei Icon", 0xd49c0, 0xd49e0 },
    { L"Suija/Mina Icon", 0xd49e0, 0xd4a00 },
    { L"Tam-Tam/Kazuki Icon", 0xd4a00, 0xd4a20 },
    { L"Sogetsu Icon", 0xd4a20, 0xd4a40 },
    { L"Hanzo Icon", 0xd4a40, 0xd4a60 },
    { L"Galford Icon", 0xd4a60, 0xd4a80 },
    { L"Charlotte Icon", 0xd4a80, 0xd4aa0 },
    { L"Ukyo/Basara Icon", 0xd4aa0, 0xd4ac0 },
    { L"Nakoruru/Rera Icon", 0xd4ac0, 0xd4ae0 },
    { L"Kyoshiro Icon", 0xd4ae0, 0xd4b00 },
    { L"Yunfei Icon", 0xd4b00, 0xd4b20 },
    { L"Enja Icon", 0xd4b20, 0xd4b40 },
    { L"Rimururu Icon", 0xd4b40, 0xd4b60 },
    { L"Shizumaru Icon", 0xd4b60, 0xd4b80 },
    { L"Kusaregedo Icon", 0xd4b80, 0xd4ba0 },
    { L"Yoshitora Icon", 0xd4ba0, 0xd4bc0 },
    { L"Rasetsumaru Icon", 0xd4bc0, 0xd4be0 },
    { L"Gaira Icon", 0xd4be0, 0xd4c00 },
};

const sGame_PaletteDataset SAMSHO5_A_BONUS_INTRO_PALETTES[] =
{
    // --Intro--
    { L"Yuki Enterprise Logo", 0xd4280, 0xd42a0 },
    { L"SNK Playmore Logo", 0xd42a0, 0xd42c0 },
    { L"Logo Flash", 0xd42c0, 0xd42e0 },
    { L"Title Screen Logo", 0xd4400, 0xd4440 },
    { L"Title Screen Background", 0xd4440, 0xd4460 },
    { L"Gaoh Intro", 0xef380, 0xef3a0 },
};

const sGame_PaletteDataset SAMSHO5_A_BONUS_INGAME_PALETTES[] =
{
    // --Ingame Extras--
    { L"Blood/Shadow", 0xd4600, 0xd4620, indexSS5_Bonus, 0x00 },
    { L"Censored Blood/Shadow", 0xd4640, 0xd4660 },
    { L"Kazuki/Enja Explosion Pal P1", 0xd4220, 0xd4240 },
    { L"Kazuki/Enja Explosion Pal P2", 0xd4620, 0xd4640 },
    { L"Censored Kazuki/Enja Explosion Pal P2", 0xd4660, 0xd4680 },
    { L"Hitsparks", 0xd4540, 0xd4560 },
    { L"Select Timer/Weaponsparks", 0xd46c0, 0xd46e0 },
    { L"Select/Weapon Icon", 0xd47a0, 0xd47c0 },
    { L"Rage Special Effect", 0xd4720, 0xd4740 },
    { L"Fire Smoke Effect 1", 0xd46e0, 0xd4700 },
    { L"Fire Smoke Effect 2", 0xd4700, 0xd4720 },
    { L"Fire Smoke Effect 3", 0xd4760, 0xd4780 },
    { L"Zap Effect", 0xd4780, 0xd47a0 },
    { L"Rage Explosion", 0xd4e40, 0xd4e60 },
    { L"Rage Explosion Dust", 0xd48c0, 0xd48e0 },
};

const sGame_PaletteDataset SAMSHO5_A_BONUS_TUTORIAL_PALETTES[] =
{
    // --Tutorial--
    { L"Tutorial Background", 0xd48e0, 0xd4900 },
    { L"Tutorial/Win Board", 0xd4c00, 0xd4c20 },
    { L"Tutorial Darkest Buttons", 0xd45e0, 0xd4600 },
    { L"Tutorial Buttons", 0xd45c0, 0xd45e0 },
};

const sGame_PaletteDataset SAMSHO5_A_BONUS_STORY_PALETTES[] =
{
    // --Story Mode--
    { L"Story Mode Text", 0xd4920, 0xd4940 },
    { L"(Nakoruru Story): Nakoruru's Father", 0xd62e0, 0xd6300 },
    { L"(Rimururu Story): Child Nakoruru", 0xd7300, 0xd7320 },
    { L"(Rimururu Story): Child Rimururu", 0xd7320, 0xd7340 },
    { L"(Galford Story): Ending Portal", 0xd91c0, 0xd91e0 },
    { L"(Kyoshiro Story): Sho Hayate", 0xda2e0, 0xda300 },
    { L"(Kyoshiro Story): Ryuhaku Todoh", 0xda320, 0xda340 },
    { L"(Ukyo Story): Girl", 0xdb2c0, 0xdb2e0 },
    { L"(Genjuro Story): Sankuro Coat", 0xe2380, 0xe23a0 },
    { L"(Genjuro Story): Mini Frog", 0xdc080, 0xdc0a0 },
    { L"(Shizumaru/Yoshitora Story): A Yaiba", 0xde320, 0xde340 },
    { L"(Gaira Story): Earthquake, Sieger, Wan-Fu", 0xdf320, 0xdf340 },
    { L"(Gaira Story): Gen-an", 0xdf340, 0xdf360 },
    { L"(Gaira Story): Nicotine", 0xdf360, 0xdf380 },
    { L"(Gaira Story): Kid", 0xdf380, 0xdf3a0 },
    { L"(Hanzo/Jubei Story): Ninjas", 0xe12e0, 0xe1300 },
    { L"(Charlotte Story): Lover", 0xe32c0, 0xe32e0 },
    { L"(Tam Tam Story): Barrel", 0xe4080, 0xe40a0 },
    { L"(Kazuki Story): Hazuki Kazama Ending", 0xe51c0, 0xe51e0 },
    { L"(Kazuki/Enja/Suija/Sogetsu Story): Kazama Clan", 0xe6360, 0xe6380 },
    { L"(Haohmaru/Rasetsumaru Story) Scared People", 0xe72a0, 0xe72c0 },
    { L"(Rasetsumaru Story): Hooded Yumeji", 0xe7300, 0xe7340 },
    { L"(Rera Story): Bear", 0xe82e0, 0xe8300 },
    { L"(Yunfei Story): Yunfei's Wife", 0xec1c0, 0xec200 },
    { L"(Mina Story): Scared Man", 0xed1c0, 0xed1e0 },
    { L"(Mina Story): Monster Chanpuru", 0xed2a0, 0xed2c0 },
    { L"(Shizumaru/Kusaregedo Story): Hakana", 0xd4c60, 0xd4c80 },
    { L"(Shizumaru/Charlotte Story): Hakana's Husband", 0xd4c80, 0xd4ca0 },
    { L"(Kazuki/Enja/Suija/Sogetsu Story): Hazuki Kazama", 0xd4d00, 0xd4d20 },
    { L"(Kazuki/Enja/Suija/Sogetsu Story): Hazuki Kazama Extra", 0xd4d20, 0xd4d40 },
    { L"(Yoshitora Story): Normal Gaoh", 0xd4d40, 0xd4d60 },
};

const sDescTreeNode SAMSHO5_A_Basara_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Basara_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Basara_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Basara_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Basara_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Basara_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Basara_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Basara_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Basara_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Basara_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Basara_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Charlotte_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Charlotte_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Charlotte_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Charlotte_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Charlotte_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Charlotte_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Charlotte_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Charlotte_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Charlotte_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Charlotte_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Charlotte_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Enja_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Enja_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Enja_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Enja_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Enja_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Enja_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Enja_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Enja_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Enja_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Enja_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Enja_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Gaira_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaira_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Gaira_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaira_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Gaira_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaira_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Gaira_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaira_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Gaira_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaira_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Gaira_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Galford_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Galford_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Galford_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Galford_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Galford_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Galford_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Galford_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Galford_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Galford_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Galford_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Galford_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Gaoh_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaoh_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Gaoh_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaoh_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Gaoh_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaoh_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Gaoh_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaoh_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Gaoh_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaoh_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Gaoh_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Genjuro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Genjuro_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Genjuro_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Genjuro_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Genjuro_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Genjuro_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Genjuro_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Genjuro_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Genjuro_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Genjuro_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Genjuro_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Hanzo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Hanzo_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Hanzo_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Hanzo_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Hanzo_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Hanzo_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Hanzo_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Hanzo_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Hanzo_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Hanzo_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Hanzo_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Haohmaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Haohmaru_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Haohmaru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Haohmaru_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Haohmaru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Haohmaru_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Haohmaru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Haohmaru_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Haohmaru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Haohmaru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Haohmaru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Jubei_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Jubei_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Jubei_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Jubei_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Jubei_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Jubei_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Jubei_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Jubei_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Jubei_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Jubei_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Jubei_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Kazuki_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kazuki_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Kazuki_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kazuki_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Kazuki_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kazuki_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Kazuki_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kazuki_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Kazuki_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kazuki_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Kazuki_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Kusaregedo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kusaregedo_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Kusaregedo_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kusaregedo_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Kusaregedo_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kusaregedo_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Kusaregedo_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kusaregedo_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Kusaregedo_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kusaregedo_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Kusaregedo_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Kyoshiro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kyoshiro_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Kyoshiro_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kyoshiro_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Kyoshiro_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kyoshiro_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Kyoshiro_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kyoshiro_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Kyoshiro_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kyoshiro_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Kyoshiro_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Mina_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Mina_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Mina_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Mina_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Mina_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Mina_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Mina_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Mina_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Mina_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Mina_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Mina_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Nakoruru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Nakoruru_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Nakoruru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Nakoruru_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Nakoruru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Nakoruru_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Nakoruru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Nakoruru_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Nakoruru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Nakoruru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Nakoruru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Rasetsumaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rasetsumaru_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Rasetsumaru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rasetsumaru_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Rasetsumaru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rasetsumaru_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Rasetsumaru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rasetsumaru_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Rasetsumaru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rasetsumaru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Rasetsumaru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Rera_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rera_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Rera_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rera_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Rera_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rera_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Rera_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rera_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Rera_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rera_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Rera_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Rimururu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rimururu_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Rimururu_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rimururu_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Rimururu_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rimururu_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Rimururu_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rimururu_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Rimururu_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rimururu_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Rimururu_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Shizumaru_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Shizumaru_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Shizumaru_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Shizumaru_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Shizumaru_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Shizumaru_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Shizumaru_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Shizumaru_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Shizumaru_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Shizumaru_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Shizumaru_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Sogetsu_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sogetsu_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Sogetsu_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sogetsu_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Sogetsu_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sogetsu_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Sogetsu_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sogetsu_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Sogetsu_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sogetsu_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Sogetsu_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Suija_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Suija_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Suija_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Suija_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Suija_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Suija_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Suija_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Suija_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Suija_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Suija_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Suija_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_TamTam_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_TamTam_PALETTES_A, ARRAYSIZE(SAMSHO5_A_TamTam_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_TamTam_PALETTES_B, ARRAYSIZE(SAMSHO5_A_TamTam_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_TamTam_PALETTES_C, ARRAYSIZE(SAMSHO5_A_TamTam_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_TamTam_PALETTES_D, ARRAYSIZE(SAMSHO5_A_TamTam_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_TamTam_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_TamTam_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Ukyo_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Ukyo_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Ukyo_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Ukyo_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Ukyo_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Ukyo_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Ukyo_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Ukyo_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Ukyo_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Ukyo_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Ukyo_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Yoshitora_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yoshitora_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Yoshitora_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yoshitora_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Yoshitora_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yoshitora_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Yoshitora_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yoshitora_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Yoshitora_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yoshitora_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Yoshitora_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Yunfei_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yunfei_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Yunfei_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yunfei_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Yunfei_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yunfei_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Yunfei_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yunfei_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Yunfei_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yunfei_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Yunfei_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Yumeji_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yumeji_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Yumeji_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yumeji_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Yumeji_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yumeji_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Yumeji_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yumeji_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Yumeji_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yumeji_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Yumeji_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_Sankuro_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sankuro_PALETTES_A, ARRAYSIZE(SAMSHO5_A_Sankuro_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sankuro_PALETTES_B, ARRAYSIZE(SAMSHO5_A_Sankuro_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sankuro_PALETTES_C, ARRAYSIZE(SAMSHO5_A_Sankuro_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sankuro_PALETTES_D, ARRAYSIZE(SAMSHO5_A_Sankuro_PALETTES_D) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sankuro_PALETTES_PORTRAITS, ARRAYSIZE(SAMSHO5_A_Sankuro_PALETTES_PORTRAITS) },
};

const sDescTreeNode SAMSHO5_A_BONUS_COLLECTION[] =
{
    { L"Character Screen", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_CS_PALETTES, ARRAYSIZE(SAMSHO5_A_BONUS_CS_PALETTES) },
    { L"Intro", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_INTRO_PALETTES, ARRAYSIZE(SAMSHO5_A_BONUS_INTRO_PALETTES) },
    { L"HUD",   DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_HUD_PALETTES,   ARRAYSIZE(SAMSHO5_A_BONUS_HUD_PALETTES) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_INGAME_PALETTES, ARRAYSIZE(SAMSHO5_A_BONUS_INGAME_PALETTES) },
    { L"Tutorial", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_TUTORIAL_PALETTES, ARRAYSIZE(SAMSHO5_A_BONUS_TUTORIAL_PALETTES) },
    { L"Story Mode", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_STORY_PALETTES, ARRAYSIZE(SAMSHO5_A_BONUS_STORY_PALETTES) },
};

const sDescTreeNode SAMSHO5_A_UNITS[] =
{
    { L"Basara", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Basara_COLLECTION, ARRAYSIZE(SAMSHO5_A_Basara_COLLECTION) },
    { L"Charlotte", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Charlotte_COLLECTION, ARRAYSIZE(SAMSHO5_A_Charlotte_COLLECTION) },
    { L"Enja", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Enja_COLLECTION, ARRAYSIZE(SAMSHO5_A_Enja_COLLECTION) },
    { L"Gaira", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaira_COLLECTION, ARRAYSIZE(SAMSHO5_A_Gaira_COLLECTION) },
    { L"Galford", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Galford_COLLECTION, ARRAYSIZE(SAMSHO5_A_Galford_COLLECTION) },
    { L"Gaoh", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Gaoh_COLLECTION, ARRAYSIZE(SAMSHO5_A_Gaoh_COLLECTION) },
    { L"Genjuro", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Genjuro_COLLECTION, ARRAYSIZE(SAMSHO5_A_Genjuro_COLLECTION) },
    { L"Hanzo", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Hanzo_COLLECTION, ARRAYSIZE(SAMSHO5_A_Hanzo_COLLECTION) },
    { L"Haohmaru", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Haohmaru_COLLECTION, ARRAYSIZE(SAMSHO5_A_Haohmaru_COLLECTION) },
    { L"Jubei", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Jubei_COLLECTION, ARRAYSIZE(SAMSHO5_A_Jubei_COLLECTION) },
    { L"Kazuki", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kazuki_COLLECTION, ARRAYSIZE(SAMSHO5_A_Kazuki_COLLECTION) },
    { L"Kusaregedo", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kusaregedo_COLLECTION, ARRAYSIZE(SAMSHO5_A_Kusaregedo_COLLECTION) },
    { L"Kyoshiro", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Kyoshiro_COLLECTION, ARRAYSIZE(SAMSHO5_A_Kyoshiro_COLLECTION) },
    { L"Mina", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Mina_COLLECTION, ARRAYSIZE(SAMSHO5_A_Mina_COLLECTION) },
    { L"Nakoruru", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Nakoruru_COLLECTION, ARRAYSIZE(SAMSHO5_A_Nakoruru_COLLECTION) },
    { L"Rasetsumaru", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rasetsumaru_COLLECTION, ARRAYSIZE(SAMSHO5_A_Rasetsumaru_COLLECTION) },
    { L"Rera", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rera_COLLECTION, ARRAYSIZE(SAMSHO5_A_Rera_COLLECTION) },
    { L"Rimururu", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Rimururu_COLLECTION, ARRAYSIZE(SAMSHO5_A_Rimururu_COLLECTION) },
    { L"Sankuro", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sankuro_COLLECTION, ARRAYSIZE(SAMSHO5_A_Sankuro_COLLECTION) },
    { L"Shizumaru", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Shizumaru_COLLECTION, ARRAYSIZE(SAMSHO5_A_Shizumaru_COLLECTION) },
    { L"Sogetsu", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Sogetsu_COLLECTION, ARRAYSIZE(SAMSHO5_A_Sogetsu_COLLECTION) },
    { L"Suija", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Suija_COLLECTION, ARRAYSIZE(SAMSHO5_A_Suija_COLLECTION) },
    { L"TamTam", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_TamTam_COLLECTION, ARRAYSIZE(SAMSHO5_A_TamTam_COLLECTION) },
    { L"Ukyo", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Ukyo_COLLECTION, ARRAYSIZE(SAMSHO5_A_Ukyo_COLLECTION) },
    { L"Yoshitora", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yoshitora_COLLECTION, ARRAYSIZE(SAMSHO5_A_Yoshitora_COLLECTION) },
    { L"Yumeji", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yumeji_COLLECTION, ARRAYSIZE(SAMSHO5_A_Yumeji_COLLECTION) },
    { L"Yunfei", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_Yunfei_COLLECTION, ARRAYSIZE(SAMSHO5_A_Yunfei_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)SAMSHO5_A_BONUS_COLLECTION, ARRAYSIZE(SAMSHO5_A_BONUS_COLLECTION) },
};

constexpr auto SAMSHO5_A_NUMUNIT = ARRAYSIZE(SAMSHO5_A_UNITS);

#define SAMSHO5_A_EXTRALOC SAMSHO5_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef SAMSHO5_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
