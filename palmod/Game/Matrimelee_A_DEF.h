#pragma once

const std::vector<uint16_t> MATRIM_A_IMGIDS_USED =
{
    indexMatriMSprites_Anny,        // 0x00
    indexMatriMSprites_Buntaro,     // 0x01
    indexMatriMSprites_Chinnen,     // 0x02
    indexMatriMSprites_Clara,       // 0x03
    indexMatriMSprites_Elias,       // 0x04
    indexMatriMSprites_Hikaru,      // 0x05
    indexMatriMSprites_Jimmy,       // 0x06
    indexMatriMSprites_Jones,       // 0x07
    indexMatriMSprites_Kanji,       // 0x08
    indexMatriMSprites_Keith,       // 0x09
    indexMatriMSprites_Lynn,        // 0x0a
    indexMatriMSprites_Olof,        // 0x0b
    indexMatriMSprites_Poochy,      // 0x0c
    indexMatriMSprites_PrincessSissy, // 0x0d
    indexMatriMSprites_Reiji,       // 0x0e
    indexMatriMSprites_Saizo,       // 0x0f
    indexMatriMSprites_Shintaro,    // 0x10
    indexMatriMSprites_Tane,        // 0x11
    indexMatriMSprites_Ume,         // 0x12
    indexMatriMSprites_White,       // 0x13
    indexMatriMSprites_Bonus,       // 0x14
    indexMatriMSprites_Stages,      // 0x15
};

const sGame_PaletteDataset Matrimelee_A_Annie_A_PALETTES[] =
{
    { L"Anny Hamilton A", 0x29c82c, 0x29c84c, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy A", 0x29c84c, 0x29c86c, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy A", 0x29c86c, 0x29c88c, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail A", 0x29c88c, 0x29c8ac, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail A", 0x29c8ac, 0x29c8cc, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail A", 0x29c8cc, 0x29c8ec, indexMatriMSprites_Anny, 0x00 },
    { L"Hud Portrait A", 0x29c8ec, 0x29c90c, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_Annie_B_PALETTES[] =
{
    { L"Anny Hamilton B", 0x29c90c, 0x29c92c, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy B", 0x29c92c, 0x29c94c, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy B", 0x29c94c, 0x29c96c, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail B", 0x29c96c, 0x29c98c, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail B", 0x29c98c, 0x29c9ac, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail B", 0x29c9ac, 0x29c9cc, indexMatriMSprites_Anny, 0x00 },
    { L"Hud Portrait B", 0x29c9cc, 0x29c9ec, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_Annie_C_PALETTES[] =
{
    { L"Anny Hamilton C", 0x29c9ec, 0x29ca0c, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy C", 0x29ca0c, 0x29ca2c, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy C", 0x29ca2c, 0x29ca4c, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail C", 0x29ca4c, 0x29ca6c, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail C", 0x29ca6c, 0x29ca8c, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail C", 0x29ca8c, 0x29caac, indexMatriMSprites_Anny, 0x00 },
    { L"Hud Portrait C", 0x29caac, 0x29cacc, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_Annie_D_PALETTES[] =
{
    { L"Anny Hamilton D", 0x29cacc, 0x29caec, indexMatriMSprites_Anny, 0x00 },
    { L"Photon Energy D", 0x29caec, 0x29cb0c, indexMatriMSprites_Anny, 0x03, &pairNext },
    { L"Rainbow Energy D", 0x29cb0c, 0x29cb2c, indexMatriMSprites_Anny, 0x04, &pairPrevious },
    { L"Rolling/Super Jump Trail D", 0x29cb2c, 0x29cb4c, indexMatriMSprites_Anny, 0x00 },
    { L"EX/Super Trail D", 0x29cb4c, 0x29cb6c, indexMatriMSprites_Anny, 0x00 },
    { L"Guard Cancel Trail D", 0x29cb6c, 0x29cb8c, indexMatriMSprites_Anny, 0x00 },
    { L"Hud Portrait D", 0x29cb8c, 0x29cbac, indexMatriMSprites_Anny, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_Annie_SHARED_PALETTES[] =
{
    { L"Psychedelic Throw", 0x29ae7e, 0x29aebe, indexMatriMSprites_Anny, 0x02 },
};

const sGame_PaletteDataset Matrimelee_A_Annie_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29CBAc, 0x29CC4C, indexMatriMSprites_Anny, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_BUNTARO_A_PALETTES[] =
{
    { L"Buntaro Kuno A", 0x29f2fc, 0x29f31c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x29f31c, 0x29f33c, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail A", 0x29f33c, 0x29f35c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail A", 0x29f35c, 0x29f37c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Hud Portrait A", 0x29f37c, 0x29f39c, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_BUNTARO_B_PALETTES[] =
{
    { L"Buntaro Kuno B", 0x29f39c, 0x29f3bc, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x29f3bc, 0x29f3dc, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail B", 0x29f3dc, 0x29f3fc, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail B", 0x29f3fc, 0x29f41c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Hud Portrait B", 0x29f41c, 0x29f43c, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_BUNTARO_C_PALETTES[] =
{
    { L"Buntaro Kuno C", 0x29f43c, 0x29f45c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x29f45c, 0x29f47c, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail C", 0x29f47c, 0x29f49c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail C", 0x29f49c, 0x29f4bc, indexMatriMSprites_Buntaro, 0x00 },
    { L"Hud Portrait C", 0x29f4bc, 0x29f4dc, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_BUNTARO_D_PALETTES[] =
{
    { L"Buntaro Kuno D", 0x29f4dc, 0x29f4fc, indexMatriMSprites_Buntaro, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x29f4fc, 0x29f51c, indexMatriMSprites_Buntaro, 0x00 },
    { L"EX/Super Trail D", 0x29f51c, 0x29f53c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Guard Cancel Trail D", 0x29f53c, 0x29f55c, indexMatriMSprites_Buntaro, 0x00 },
    { L"Hud Portrait D", 0x29f55c, 0x29f57c, indexMatriMSprites_Buntaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_BUNTARO_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29F57c, 0x29F61C, indexMatriMSprites_Buntaro, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_CHINNEN_A_PALETTES[] =
{
    { L"Chinnen A", 0x29b824, 0x29b844, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power A", 0x29b844, 0x29b864 },
    { L"Spirit Orb A", 0x29b864, 0x29b884 },
    { L"Curse Seal A", 0x29b884, 0x29b8a4 },
    { L"Rolling/Super Jump Trail A", 0x29b8a4, 0x29b8c4, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail A", 0x29b8c4, 0x29b8e4, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail A", 0x29b8e4, 0x29b904, indexMatriMSprites_Chinnen, 0x00 },
    { L"Hud Portrait A", 0x29b904, 0x29b924, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CHINNEN_B_PALETTES[] =
{
    { L"Chinnen B", 0x29b924, 0x29b944, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power B", 0x29b944, 0x29b964 },
    { L"Spirit Orb B", 0x29b964, 0x29b984 },
    { L"Curse Seal B", 0x29b984, 0x29b9a4 },
    { L"Rolling/Super Jump Trail B", 0x29b9a4, 0x29b9c4, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail B", 0x29b9c4, 0x29b9e4, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail B", 0x29b9e4, 0x29ba04, indexMatriMSprites_Chinnen, 0x00 },
    { L"Hud Portrait B", 0x29ba04, 0x29ba24, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CHINNEN_C_PALETTES[] =
{
    { L"Chinnen C", 0x29ba24, 0x29ba44, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power C", 0x29ba44, 0x29ba64 },
    { L"Spirit Orb C", 0x29ba64, 0x29ba84 },
    { L"Curse Seal C", 0x29ba84, 0x29baa4 },
    { L"Rolling/Super Jump Trail C", 0x29baa4, 0x29bac4, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail C", 0x29bac4, 0x29bae4, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail C", 0x29bae4, 0x29bb04, indexMatriMSprites_Chinnen, 0x00 },
    { L"Hud Portrait C", 0x29bb04, 0x29bb24, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CHINNEN_D_PALETTES[] =
{
    { L"Chinnen D", 0x29bb24, 0x29bb44, indexMatriMSprites_Chinnen, 0x00 },
    { L"Bonnou Power D", 0x29bb44, 0x29bb64 },
    { L"Spirit Orb D", 0x29bb64, 0x29bb84 },
    { L"Curse Seal D", 0x29bb84, 0x29bba4 },
    { L"Rolling/Super Jump Trail D", 0x29bba4, 0x29bbc4, indexMatriMSprites_Chinnen, 0x00 },
    { L"EX/Super Trail D", 0x29bbc4, 0x29bbe4, indexMatriMSprites_Chinnen, 0x00 },
    { L"Guard Cancel Trail D", 0x29bbe4, 0x29bc04, indexMatriMSprites_Chinnen, 0x00 },
    { L"Hud Portrait D", 0x29bc04, 0x29bc24, indexMatriMSprites_Chinnen, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CHINNEN_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29BC24, 0x29BCA4, indexMatriMSprites_Chinnen, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_CLARA_A_PALETTES[] =
{
    { L"Clara Hananokoji A", 0x29cc4e, 0x29cc6e, indexMatriMSprites_Clara, 0x0 },
    { L"Miracle Attack A", 0x29cc6e, 0x29cc8e, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack A", 0x29cc8e, 0x29ccae, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang A", 0x29ccae, 0x29ccce, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss A", 0x29ccce, 0x29ccee, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution A", 0x29ccee, 0x29cd0e, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 A", 0x29cd0e, 0x29cd2e, indexMatriMSprites_Clara, 0x0 },
    { L"Winpose Flash 2 A", 0x29cd2e, 0x29cd4e, indexMatriMSprites_Clara, 0x0 },
    { L"Violent Pack-In Rabbit A", 0x29cd4e, 0x29cd6e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 A", 0x29cd6e, 0x29cd8e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 A", 0x29cd8e, 0x29cdae, indexMatriMSprites_Clara, 0x08 },
    { L"Rolling/Super Jump Trail A", 0x29cdae, 0x29cdce, indexMatriMSprites_Clara, 0x0 },
    { L"EX/Super Trail/Dashing 214+K A", 0x29cdce, 0x29cdee, indexMatriMSprites_Clara, 0x0 },
    { L"Guard Cancel Trail A", 0x29cdee, 0x29ce0e, indexMatriMSprites_Clara, 0x0 },
    { L"Hud Portrait A", 0x29ce0e, 0x29ce2e, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CLARA_B_PALETTES[] =
{
    { L"Clara Hananokoji B", 0x29ce2e, 0x29ce4e, indexMatriMSprites_Clara, 0x0 },
    { L"Miracle Attack B", 0x29ce4e, 0x29ce6e, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack B", 0x29ce6e, 0x29ce8e, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang B", 0x29ce8e, 0x29ceae, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss B", 0x29ceae, 0x29cece, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution B", 0x29cece, 0x29ceee, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 B", 0x29ceee, 0x29cf0e, indexMatriMSprites_Clara, 0x0 },
    { L"Winpose Flash 2 B", 0x29cf0e, 0x29cf2e, indexMatriMSprites_Clara, 0x0 },
    { L"Violent Pack-In Rabbit B", 0x29cf2e, 0x29cf4e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 B", 0x29cf4e, 0x29cf6e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 B", 0x29cf6e, 0x29cf8e, indexMatriMSprites_Clara, 0x08 },
    { L"Rolling/Super Jump Trail B", 0x29cf8e, 0x29cfae, indexMatriMSprites_Clara, 0x0 },
    { L"EX/Super Trail/Dashing 214+K B", 0x29cfae, 0x29cfce, indexMatriMSprites_Clara, 0x0 },
    { L"Guard Cancel Trail B", 0x29cfce, 0x29cfee, indexMatriMSprites_Clara, 0x0 },
    { L"Hud Portrait B", 0x29cfee, 0x29d00e, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CLARA_C_PALETTES[] =
{
    { L"Clara Hananokoji C", 0x29d00e, 0x29d02e, indexMatriMSprites_Clara, 0x0 },
    { L"Miracle Attack C", 0x29d02e, 0x29d04e, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack C", 0x29d04e, 0x29d06e, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang C", 0x29d06e, 0x29d08e, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss C", 0x29d08e, 0x29d0ae, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution C", 0x29d0ae, 0x29d0ce, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 C", 0x29d0ce, 0x29d0ee, indexMatriMSprites_Clara, 0x0 },
    { L"Winpose Flash 2 C", 0x29d0ee, 0x29d10e, indexMatriMSprites_Clara, 0x0 },
    { L"Violent Pack-In Rabbit C", 0x29d10e, 0x29d12e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 C", 0x29d12e, 0x29d14e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 C", 0x29d14e, 0x29d16e, indexMatriMSprites_Clara, 0x08 },
    { L"Rolling/Super Jump Trail C", 0x29d16e, 0x29d18e, indexMatriMSprites_Clara, 0x0 },
    { L"EX/Super Trail/Dashing 214+K C", 0x29d18e, 0x29d1ae, indexMatriMSprites_Clara, 0x0 },
    { L"Guard Cancel Trail C", 0x29d1ae, 0x29d1ce, indexMatriMSprites_Clara, 0x0 },
    { L"Hud Portrait C", 0x29d1ce, 0x29d1ee, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CLARA_D_PALETTES[] =
{
    { L"Clara Hananokoji D", 0x29d1ee, 0x29d20e, indexMatriMSprites_Clara, 0x0 },
    { L"Miracle Attack D", 0x29d20e, 0x29d22e, indexMatriMSprites_Clara, 0x03 },
    { L"Dream Turn Attack D", 0x29d22e, 0x29d24e, indexMatriMSprites_Clara, 0x02 },
    { L"Dream Boomerang D", 0x29d24e, 0x29d26e, indexMatriMSprites_Clara, 0x01 },
    { L"Miracle Death Kiss D", 0x29d26e, 0x29d28e, indexMatriMSprites_Clara, 0x04 },
    { L"Stardust Revolution D", 0x29d28e, 0x29d2Ae, indexMatriMSprites_Clara, 0x05 },
    { L"Winpose Flash 1 D", 0x29d2Ae, 0x29d2ce, indexMatriMSprites_Clara, 0x0 },
    { L"Winpose Flash 2 D", 0x29d2ce, 0x29d2ee, indexMatriMSprites_Clara, 0x0 },
    { L"Violent Pack-In Rabbit D", 0x29d2ee, 0x29d30e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 1 D", 0x29d30e, 0x29d32e, indexMatriMSprites_Clara, 0x08 },
    { L"Violent Pack-In Rabbit Flash 2 D", 0x29d32e, 0x29d34e, indexMatriMSprites_Clara, 0x08 },
    { L"Rolling/Super Jump Trail D", 0x29d34e, 0x29d36e, indexMatriMSprites_Clara, 0x0 },
    { L"EX/Super Trail/Dashing 214+K D", 0x29d36e, 0x29d38e, indexMatriMSprites_Clara, 0x0 },
    { L"Guard Cancel Trail D", 0x29d38e, 0x29d3ae, indexMatriMSprites_Clara, 0x0 },
    { L"Hud Portrait D", 0x29d3ae, 0x29d3ce, indexMatriMSprites_Clara, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_CLARA_SHARED_PALETTES[] =
{
    { L"Stardust Revolution: Pig", 0x29ae3e, 0x29ae5e, indexMatriMSprites_Clara, 0x07 },
    { L"Stardust Revolution: Gold Goose", 0x29ae5e, 0x29ae7e, indexMatriMSprites_Clara, 0x06 },
};

const sGame_PaletteDataset Matrimelee_A_CLARA_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29D3CE, 0x29D44E, indexMatriMSprites_Clara, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_ELIAS_A_PALETTES[] =
{
    { L"Elias Patrick A", 0x2A1240, 0x2A1260, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful A", 0x2A1260, 0x2A1280 },
    { L"Magnus A", 0x2A1280, 0x2A12A0 },
    { L"Maximum Desiderium A", 0x2A12A0, 0x2A12c0 },
    { L"Holy Flare A", 0x2A12c0, 0x2A12e0 },
    { L"Rolling/Super Jump Trail A", 0x2A12e0, 0x2A1300, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail A", 0x2A1300, 0x2A1320, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel/632146P A", 0x2A1320, 0x2A1340, indexMatriMSprites_Elias, 0x00 },
    { L"Hud Portrait A", 0x2A1340, 0x2A1360, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_ELIAS_B_PALETTES[] =
{
    { L"Elias Patrick B", 0x2A1360, 0x2A1380, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful B", 0x2A1380, 0x2A13a0 },
    { L"Magnus B", 0x2A13a0, 0x2A13c0 },
    { L"Maximum Desiderium B", 0x2A13c0, 0x2A13e0 },
    { L"Holy Flare B", 0x2A13e0, 0x2A1400 },
    { L"Rolling/Super Jump Trail B", 0x2A1400, 0x2A1420, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail B", 0x2A1420, 0x2A1440, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel/632146P B", 0x2A1440, 0x2A1460, indexMatriMSprites_Elias, 0x00 },
    { L"Hud Portrait B", 0x2A1460, 0x2A1480, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_ELIAS_C_PALETTES[] =
{
    { L"Elias Patrick C", 0x2A1480, 0x2A14a0, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful C", 0x2A14a0, 0x2A14c0 },
    { L"Magnus C", 0x2A14c0, 0x2A14e0 },
    { L"Maximum Desiderium C", 0x2A14e0, 0x2A1500 },
    { L"Holy Flare C", 0x2A1500, 0x2A1520 },
    { L"Rolling/Super Jump Trail C", 0x2A1520, 0x2A1540, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail C", 0x2A1540, 0x2A1560, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel/632146P C", 0x2A1560, 0x2A1580, indexMatriMSprites_Elias, 0x00 },
    { L"Hud Portrait C", 0x2A1580, 0x2A15a0, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_ELIAS_D_PALETTES[] =
{
    { L"Elias Patrick D", 0x2A15a0, 0x2A15c0, indexMatriMSprites_Elias, 0x00 },
    { L"Sinful D", 0x2A15c0, 0x2A15e0 },
    { L"Magnus D", 0x2A15e0, 0x2A1600 },
    { L"Maximum Desiderium D", 0x2A1600, 0x2A1620 },
    { L"Holy Flare D", 0x2A1620, 0x2A1640 },
    { L"Rolling/Super Jump Trail D", 0x2A1640, 0x2A1660, indexMatriMSprites_Elias, 0x00 },
    { L"EX/Super Trail D", 0x2A1660, 0x2A1680, indexMatriMSprites_Elias, 0x00 },
    { L"Guard Cancel/632146P D", 0x2A1680, 0x2A16a0, indexMatriMSprites_Elias, 0x00 },
    { L"Hud Portrait D", 0x2A16a0, 0x2A16c0, indexMatriMSprites_Elias, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_ELIAS_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x2A16C0, 0x2A1740, indexMatriMSprites_Elias, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_HIKARU_A_PALETTES[] =
{
    { L"Hikaru Jomon A", 0x29f920, 0x29f940, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x29f940, 0x29f960, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail A", 0x29f960, 0x29f980, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail A", 0x29f980, 0x29f9a0, indexMatriMSprites_Hikaru, 0x00 },
    { L"Hud Portrait A", 0x29f9a0, 0x29f9c0, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_HIKARU_B_PALETTES[] =
{
    { L"Hikaru Jomon B", 0x29f9c0, 0x29f9e0, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x29f9e0, 0x29fa00, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail B", 0x29fa00, 0x29fa20, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail B", 0x29fa20, 0x29fa40, indexMatriMSprites_Hikaru, 0x00 },
    { L"Hud Portrait B", 0x29fa40, 0x29fa60, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_HIKARU_C_PALETTES[] =
{
    { L"Hikaru Jomon C", 0x29fa60, 0x29fa80, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x29fa80, 0x29faa0, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail C", 0x29faa0, 0x29fac0, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail C", 0x29fac0, 0x29fae0, indexMatriMSprites_Hikaru, 0x00 },
    { L"Hud Portrait C", 0x29fae0, 0x29fb00, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_HIKARU_D_PALETTES[] =
{
    { L"Hikaru Jomon D", 0x29fb00, 0x29fb20, indexMatriMSprites_Hikaru, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x29fb20, 0x29fb40, indexMatriMSprites_Hikaru, 0x00 },
    { L"EX/Super Trail D", 0x29fb40, 0x29fb60, indexMatriMSprites_Hikaru, 0x00 },
    { L"Guard Cancel Trail D", 0x29fb60, 0x29fb80, indexMatriMSprites_Hikaru, 0x00 },
    { L"Hud Portrait D", 0x29fb80, 0x29fba0, indexMatriMSprites_Hikaru, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_HIKARU_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29FBA0, 0x29FC00, indexMatriMSprites_Hikaru, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_JIMMY_A_PALETTES[] =
{
    { L"Jimmy Lewis A", 0x2A1742, 0x2A1762, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks A", 0x2A1762, 0x2A1782, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat A", 0x2A1782, 0x2A17a2, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail A", 0x2A17a2, 0x2A17c2, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail A", 0x2A17c2, 0x2A17e2, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail A", 0x2A17e2, 0x2A1802, indexMatriMSprites_Jimmy, 0x00 },
    { L"Hud Portrait A", 0x2A1802, 0x2A1822, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JIMMY_B_PALETTES[] =
{
    { L"Jimmy Lewis B", 0x2A1822, 0x2A1842, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks B", 0x2A1842, 0x2A1862, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat B", 0x2A1862, 0x2A1882, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail B", 0x2A1882, 0x2A18a2, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail B", 0x2A18a2, 0x2A18c2, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail B", 0x2A18c2, 0x2A18e2, indexMatriMSprites_Jimmy, 0x00 },
    { L"Hud Portrait B", 0x2A18e2, 0x2A1902, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JIMMY_C_PALETTES[] =
{
    { L"Jimmy Lewis C", 0x2A1902, 0x2A1922, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks C", 0x2A1922, 0x2A1942, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat C", 0x2A1942, 0x2A1962, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail C", 0x2A1962, 0x2A1982, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail C", 0x2A1982, 0x2A19a2, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail C", 0x2A19a2, 0x2A19c2, indexMatriMSprites_Jimmy, 0x00 },
    { L"Hud Portrait C", 0x2A19c2, 0x2A19e2, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JIMMY_D_PALETTES[] =
{
    { L"Jimmy Lewis D", 0x2A19e2, 0x2A1a02, indexMatriMSprites_Jimmy, 0x00, &pairNext2 },
    { L"Fire Attacks D", 0x2A1a02, 0x2A1a22, indexMatriMSprites_Jimmy, 0x08 },
    { L"Intro Coat D", 0x2A1a22, 0x2A1a42, indexMatriMSprites_Jimmy, 0x01, &pairPrevious2 },
    { L"Rolling/Super Jump Trail D", 0x2A1a42, 0x2A1a62, indexMatriMSprites_Jimmy, 0x00 },
    { L"EX/Super Trail D", 0x2A1a62, 0x2A1a82, indexMatriMSprites_Jimmy, 0x00 },
    { L"Guard Cancel Trail D", 0x2A1a82, 0x2A1aa2, indexMatriMSprites_Jimmy, 0x00 },
    { L"Hud Portrait D", 0x2A1aa2, 0x2A1ac2, indexMatriMSprites_Jimmy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JIMMY_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x2A1AC2, 0x2A1B22, indexMatriMSprites_Jimmy, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_JONES_A_PALETTES[] =
{
    { L"Mr. Jones A", 0x2A09dc, 0x2A09fc, indexMatriMSprites_Jones, 0x0 },
    { L"Funky Impact A", 0x2A09fc, 0x2A0a1c },
    { L"King Kang A", 0x2A0a1c, 0x2A0a3c },
    { L"Rolling/Super Jump Trail A", 0x2A0a3c, 0x2A0a5c, indexMatriMSprites_Jones, 0x0 },
    { L"EX/Super Trail A", 0x2A0a5c, 0x2A0a7c, indexMatriMSprites_Jones, 0x0 },
    { L"Guard Cancel Trail A", 0x2A0a7c, 0x2A0a9c, indexMatriMSprites_Jones, 0x0 },
    { L"Hud Portrait A", 0x2A0a9c, 0x2A0abc, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JONES_B_PALETTES[] =
{
    { L"Mr. Jones B", 0x2A0abc, 0x2A0adc, indexMatriMSprites_Jones, 0x0 },
    { L"Funky Impact B", 0x2A0adc, 0x2A0afc },
    { L"King Kang B", 0x2A0afc, 0x2A0b1c },
    { L"Rolling/Super Jump Trail B", 0x2A0b1c, 0x2A0b3c, indexMatriMSprites_Jones, 0x0 },
    { L"EX/Super Trail B", 0x2A0b3c, 0x2A0b5c, indexMatriMSprites_Jones, 0x0 },
    { L"Guard Cancel Trail B", 0x2A0b5c, 0x2A0b7c, indexMatriMSprites_Jones, 0x0 },
    { L"Hud Portrait B", 0x2A0b7c, 0x2A0b9c, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JONES_C_PALETTES[] =
{
    { L"Mr. Jones C", 0x2A0b9c, 0x2A0bbc, indexMatriMSprites_Jones, 0x0 },
    { L"Funky Impact C", 0x2A0bbc, 0x2A0bdc },
    { L"King Kang C", 0x2A0bdc, 0x2A0bfc },
    { L"Rolling/Super Jump Trail C", 0x2A0bfc, 0x2A0c1c, indexMatriMSprites_Jones, 0x0 },
    { L"EX/Super Trail C", 0x2A0c1c, 0x2A0c3c, indexMatriMSprites_Jones, 0x0 },
    { L"Guard Cancel Trail C", 0x2A0c3c, 0x2A0c5c, indexMatriMSprites_Jones, 0x0 },
    { L"Hud Portrait C", 0x2A0c5c, 0x2A0c7c, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JONES_D_PALETTES[] =
{
    { L"Mr. Jones D", 0x2A0c7c, 0x2A0c9c, indexMatriMSprites_Jones, 0x0 },
    { L"Funky Impact D", 0x2A0c9c, 0x2A0cbc },
    { L"King Kang D", 0x2A0cbc, 0x2A0cdc },
    { L"Rolling/Super Jump Trail D", 0x2A0cdc, 0x2A0cfc, indexMatriMSprites_Jones, 0x0 },
    { L"EX/Super Trail D", 0x2A0cfc, 0x2A0d1c, indexMatriMSprites_Jones, 0x0 },
    { L"Guard Cancel Trail D", 0x2A0d1c, 0x2A0d3c, indexMatriMSprites_Jones, 0x0 },
    { L"Hud Portrait D", 0x2A0d3c, 0x2A0d5c, indexMatriMSprites_Jones, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_JONES_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x2A0D5c, 0x2A0dbC, indexMatriMSprites_Jones, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_KANJI_A_PALETTES[] =
{
    { L"Kanji Kokuin A", 0x29d450, 0x29d470, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou A", 0x29d470, 0x29d490 },
    { L"Spirit Power A", 0x29d490, 0x29d4b0 },
    { L"Bakuretsu Houhi A", 0x29d4b0, 0x29d4d0 },
    { L"Restore to Life A", 0x29d4d0, 0x29d4f0 },
    { L"Rolling/Super Jump Trail A", 0x29d4f0, 0x29d510, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail A", 0x29d510, 0x29d530, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail A", 0x29d530, 0x29d550, indexMatriMSprites_Kanji, 0x00 },
    { L"Hud Portrait A", 0x29d550, 0x29d570, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KANJI_B_PALETTES[] =
{
    { L"Kanji Kokuin B", 0x29d570, 0x29d590, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou B", 0x29d590, 0x29d5b0 },
    { L"Spirit Power B", 0x29d5b0, 0x29d5d0 },
    { L"Bakuretsu Houhi B", 0x29d5d0, 0x29d5f0 },
    { L"Restore to Life B", 0x29d5f0, 0x29d610 },
    { L"Rolling/Super Jump Trail B", 0x29d610, 0x29d630, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail B", 0x29d630, 0x29d650, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail B", 0x29d650, 0x29d670, indexMatriMSprites_Kanji, 0x00 },
    { L"Hud Portrait B", 0x29d670, 0x29d690, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KANJI_C_PALETTES[] =
{
    { L"Kanji Kokuin C", 0x29d690, 0x29d6b0, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou C", 0x29d6b0, 0x29d6d0 },
    { L"Spirit Power C", 0x29d6d0, 0x29d6f0 },
    { L"Bakuretsu Houhi C", 0x29d6f0, 0x29d710 },
    { L"Restore to Life C", 0x29d710, 0x29d730 },
    { L"Rolling/Super Jump Trail C", 0x29d730, 0x29d750, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail C", 0x29d750, 0x29d770, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail C", 0x29d770, 0x29d790, indexMatriMSprites_Kanji, 0x00 },
    { L"Hud Portrait C", 0x29d790, 0x29d7b0, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KANJI_D_PALETTES[] =
{
    { L"Kanji Kokuin D", 0x29d7b0, 0x29d7d0, indexMatriMSprites_Kanji, 0x00 },
    { L"Kyosuihizaryou D", 0x29d7d0, 0x29d7f0 },
    { L"Spirit Power D", 0x29d7f0, 0x29d810 },
    { L"Bakuretsu Houhi D", 0x29d810, 0x29d830 },
    { L"Restore to Life D", 0x29d830, 0x29d850 },
    { L"Rolling/Super Jump Trail D", 0x29d850, 0x29d870, indexMatriMSprites_Kanji, 0x00 },
    { L"EX/Super Trail D", 0x29d870, 0x29d890, indexMatriMSprites_Kanji, 0x00 },
    { L"Guard Cancel Trail D", 0x29d890, 0x29d8b0, indexMatriMSprites_Kanji, 0x00 },
    { L"Hud Portrait D", 0x29d8b0, 0x29d8d0, indexMatriMSprites_Kanji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KANJI_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29D8D0, 0x29D950, indexMatriMSprites_Kanji, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_KEITH_A_PALETTES[] =
{
    { L"Keith Wayne A", 0x29b3a2, 0x29b3c2, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy A", 0x29b3c2, 0x29b3e2, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy A", 0x29b3e2, 0x29b402, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra A", 0x29b402, 0x29b422 },
    { L"Rolling/Super Jump Trail A", 0x29b422, 0x29b442, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail A", 0x29b442, 0x29b462, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail A", 0x29b462, 0x29b482, indexMatriMSprites_Keith, 0x00 },
    { L"Hud Portrait A", 0x29b482, 0x29b4a2, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KEITH_B_PALETTES[] =
{
    { L"Keith Wayne B", 0x29b4a2, 0x29b4c2, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy B", 0x29b4c2, 0x29b4e2, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy B", 0x29b4e2, 0x29b502, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra B", 0x29b502, 0x29b522 },
    { L"Rolling/Super Jump Trail B", 0x29b522, 0x29b542, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail B", 0x29b542, 0x29b562, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail B", 0x29b562, 0x29b582, indexMatriMSprites_Keith, 0x00 },
    { L"Hud Portrait B", 0x29b582, 0x29b5a2, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KEITH_C_PALETTES[] =
{
    { L"Keith Wayne C", 0x29b5a2, 0x29b5c2, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy C", 0x29b5c2, 0x29b5e2, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy C", 0x29b5e2, 0x29b602, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra C", 0x29b602, 0x29b622 },
    { L"Rolling/Super Jump Trail C", 0x29b622, 0x29b642, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail C", 0x29b642, 0x29b662, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail C", 0x29b662, 0x29b682, indexMatriMSprites_Keith, 0x00 },
    { L"Hud Portrait C", 0x29b682, 0x29b6a2, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KEITH_D_PALETTES[] =
{
    { L"Keith Wayne D", 0x29b6a2, 0x29b6c2, indexMatriMSprites_Keith, 0x00 },
    { L"Lightning Energy D", 0x29b6c2, 0x29b6e2, indexMatriMSprites_Keith, 0x01 },
    { L"Volcano Energy D", 0x29b6e2, 0x29b702, indexMatriMSprites_Keith, 0x02 },
    { L"Unused Extra D", 0x29b702, 0x29b722 },
    { L"Rolling/Super Jump Trail D", 0x29b722, 0x29b742, indexMatriMSprites_Keith, 0x00 },
    { L"EX/Super Trail D", 0x29b742, 0x29b762, indexMatriMSprites_Keith, 0x00 },
    { L"Guard Cancel Trail D", 0x29b762, 0x29b782, indexMatriMSprites_Keith, 0x00 },
    { L"Hud Portrait D", 0x29b782, 0x29b7a2, indexMatriMSprites_Keith, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_KEITH_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29B7A2, 0x29B822, indexMatriMSprites_Keith, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_LYNN_A_PALETTES[] =
{
    { L"Lynn Baker A", 0x2A0dbe, 0x2A0dde, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 A", 0x2A0dde, 0x2A0dfe, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 A", 0x2A0dfe, 0x2A0e1e, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra A", 0x2A0e1e, 0x2A0e3e },
    { L"Rolling/Super Jump Trail A", 0x2A0e3e, 0x2A0e5e, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail A", 0x2A0e5e, 0x2A0e7e, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail A", 0x2A0e7e, 0x2A0e9e, indexMatriMSprites_Lynn, 0x00 },
    { L"Hud Portrait A", 0x2A0e9e, 0x2A0ebe, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_LYNN_B_PALETTES[] =
{
    { L"Lynn Baker B", 0x2A0ebe, 0x2A0ede, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 B", 0x2A0ede, 0x2A0efe, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 B", 0x2A0efe, 0x2A0f1e, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra B", 0x2A0f1e, 0x2A0f3e },
    { L"Rolling/Super Jump Trail B", 0x2A0f3e, 0x2A0f5e, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail B", 0x2A0f5e, 0x2A0f7e, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail B", 0x2A0f7e, 0x2A0f9e, indexMatriMSprites_Lynn, 0x00 },
    { L"Hud Portrait B", 0x2A0f9e, 0x2A0fbe, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_LYNN_C_PALETTES[] =
{
    { L"Lynn Baker C", 0x2A0fbe, 0x2A0fde, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 C", 0x2A0fde, 0x2A0ffe, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 C", 0x2A0ffe, 0x2A101e, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra C", 0x2A101e, 0x2A103e },
    { L"Rolling/Super Jump Trail C", 0x2A103e, 0x2A105e, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail C", 0x2A105e, 0x2A107e, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail C", 0x2A107e, 0x2A109e, indexMatriMSprites_Lynn, 0x00 },
    { L"Hud Portrait C", 0x2A109e, 0x2A10be, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_LYNN_D_PALETTES[] =
{
    { L"Lynn Baker D",                0x2A10be, 0x2A10de, indexMatriMSprites_Lynn, 0x00 },
    { L"Chi Energy 1 D",              0x2A10de, 0x2A10fe, indexMatriMSprites_Lynn, 0x01 },
    { L"Chi Energy 2 D",              0x2A10fe, 0x2A111e, indexMatriMSprites_Lynn, 0x02 },
    { L"Unused Extra D",              0x2A111e, 0x2A113e },
    { L"Rolling/Super Jump Trail D",  0x2A113e, 0x2A115e, indexMatriMSprites_Lynn, 0x00 },
    { L"EX/Super Trail D",            0x2A115e, 0x2A117e, indexMatriMSprites_Lynn, 0x00 },
    { L"Guard Cancel Trail D",        0x2A117e, 0x2A119e, indexMatriMSprites_Lynn, 0x00 },
    { L"Hud Portrait D",              0x2A119e, 0x2A11be, indexMatriMSprites_Lynn, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_LYNN_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x2A11Be, 0x2A123e, indexMatriMSprites_Lynn, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_OLOF_A_PALETTES[] =
{
    { L"Olof Linderof A", 0x29ed78, 0x29ed98, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack A", 0x29ed98, 0x29edb8, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy A", 0x29edb8, 0x29edd8, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 A", 0x29edd8, 0x29edf8, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 A", 0x29edf8, 0x29ee18, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages A", 0x29ee18, 0x29ee38, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail A", 0x29ee38, 0x29ee58, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail A", 0x29ee58, 0x29ee78, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail A", 0x29ee78, 0x29ee98, indexMatriMSprites_Olof, 0x00 },
    { L"Hud Portrait A", 0x29ee98, 0x29eeb8, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_OLOF_B_PALETTES[] =
{
    { L"Olof Linderof B", 0x29eeb8, 0x29eed8, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack B", 0x29eed8, 0x29eef8, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy B", 0x29eef8, 0x29ef18, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 B", 0x29ef18, 0x29ef38, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 B", 0x29ef38, 0x29ef58, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages B", 0x29ef58, 0x29ef78, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail B", 0x29ef78, 0x29ef98, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail B", 0x29ef98, 0x29efb8, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail B", 0x29efb8, 0x29efd8, indexMatriMSprites_Olof, 0x00 },
    { L"Hud Portrait B", 0x29efd8, 0x29eff8, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_OLOF_C_PALETTES[] =
{
    { L"Olof Linderof C", 0x29eff8, 0x29f018, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack C", 0x29f018, 0x29f038, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy C", 0x29f038, 0x29f058, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 C", 0x29f058, 0x29f078, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 C", 0x29f078, 0x29f098, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages C", 0x29f098, 0x29f0b8, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail C", 0x29f0b8, 0x29f0d8, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail C", 0x29f0d8, 0x29f0f8, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail C", 0x29f0f8, 0x29f118, indexMatriMSprites_Olof, 0x00 },
    { L"Hud Portrait C", 0x29f118, 0x29f138, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_OLOF_D_PALETTES[] =
{
    { L"Olof Linderof D", 0x29f138, 0x29f158, indexMatriMSprites_Olof, 0x00, &pairNext5 },
    { L"Surprise Attack D", 0x29f158, 0x29f178, indexMatriMSprites_Olof, 0x05 },
    { L"Purple Energy D", 0x29f178, 0x29f198, indexMatriMSprites_Olof, 0x04 },
    { L"Extreme Case 1 D", 0x29f198, 0x29f1b8, indexMatriMSprites_Olof, 0x02, &pairNext },
    { L"Extreme Case 2 D", 0x29f1b8, 0x29f1d8, indexMatriMSprites_Olof, 0x03, &pairPrevious },
    { L"Bandages D", 0x29f1d8, 0x29f1f8, indexMatriMSprites_Olof, 0x01 },
    { L"Rolling/Super Jump Trail D", 0x29f1f8, 0x29f218, indexMatriMSprites_Olof, 0x00 },
    { L"EX/Super Trail D", 0x29f218, 0x29f238, indexMatriMSprites_Olof, 0x00 },
    { L"Guard Cancel Trail D", 0x29f238, 0x29f258, indexMatriMSprites_Olof, 0x00 },
    { L"Hud Portrait D", 0x29f258, 0x29f278, indexMatriMSprites_Olof, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_OLOF_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29F278, 0x29F2F8, indexMatriMSprites_Olof, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_POOCHY_A_PALETTES[] =
{
    { L"Poochy A", 0x29d952, 0x29d972, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 A", 0x29d972, 0x29d992 },
    { L"Heavy Dig Items 2 A", 0x29d992, 0x29d9b2 },
    { L"Doggy Slash A", 0x29d9b2, 0x29d9d2 },
    { L"Giant Bear Assault A", 0x29d9d2, 0x29d9f2 },
    { L"Canine Cyclone A", 0x29d9f2, 0x29da12 },
    { L"Rolling/Super Jump Trail A", 0x29da12, 0x29da32, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail A", 0x29da32, 0x29da52, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail A", 0x29da52, 0x29da72, indexMatriMSprites_Poochy, 0x00 },
    { L"Hud Portrait A", 0x29da72, 0x29da92, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_POOCHY_B_PALETTES[] =
{
    { L"Poochy B", 0x29da92, 0x29dab2, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 B", 0x29dab2, 0x29dad2 },
    { L"Heavy Dig Items 2 B", 0x29dad2, 0x29daf2 },
    { L"Doggy Slash B", 0x29daf2, 0x29db12 },
    { L"Giant Bear Assault B", 0x29db12, 0x29db32 },
    { L"Canine Cyclone B", 0x29db32, 0x29db52 },
    { L"Rolling/Super Jump Trail B", 0x29db52, 0x29db72, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail B", 0x29db72, 0x29db92, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail B", 0x29db92, 0x29dbb2, indexMatriMSprites_Poochy, 0x00 },
    { L"Hud Portrait B", 0x29dbb2, 0x29dbd2, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_POOCHY_C_PALETTES[] =
{
    { L"Poochy C", 0x29dbd2, 0x29dbf2, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 C", 0x29dbf2, 0x29dc12 },
    { L"Heavy Dig Items 2 C", 0x29dc12, 0x29dc32 },
    { L"Doggy Slash C", 0x29dc32, 0x29dc52 },
    { L"Giant Bear Assault C", 0x29dc52, 0x29dc72 },
    { L"Canine Cyclone C", 0x29dc72, 0x29dc92 },
    { L"Rolling/Super Jump Trail C", 0x29dc92, 0x29dcb2, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail C", 0x29dcb2, 0x29dcd2, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail C", 0x29dcd2, 0x29dcf2, indexMatriMSprites_Poochy, 0x00 },
    { L"Hud Portrait C", 0x29dcf2, 0x29dd12, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_POOCHY_D_PALETTES[] =
{
    { L"Poochy D", 0x29dd12, 0x29dd32, indexMatriMSprites_Poochy, 0x00 },
    { L"Heavy Dig Items 1 D", 0x29dd32, 0x29dd52 },
    { L"Heavy Dig Items 2 D", 0x29dd52, 0x29dd72 },
    { L"Doggy Slash D", 0x29dd72, 0x29dd92 },
    { L"Giant Bear Assault D", 0x29dd92, 0x29ddb2 },
    { L"Canine Cyclone D", 0x29ddb2, 0x29ddd2 },
    { L"Rolling/Super Jump Trail D", 0x29ddd2, 0x29ddf2, indexMatriMSprites_Poochy, 0x00 },
    { L"EX/Super Trail D", 0x29ddf2, 0x29de12, indexMatriMSprites_Poochy, 0x00 },
    { L"Guard Cancel Trail D", 0x29de12, 0x29de32, indexMatriMSprites_Poochy, 0x00 },
    { L"Hud Portrait D", 0x29de32, 0x29de52, indexMatriMSprites_Poochy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_POOCHY_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29DE52, 0x29DED2, indexMatriMSprites_Poochy, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_PRINCESSSISSY_A_PALETTES[] =
{
    { L"Princess Sissy A", 0x29fc02, 0x29fc22, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons A", 0x29fc22, 0x29fc42, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection A", 0x29fc42, 0x29fc62, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box A", 0x29fc62, 0x29fc82, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb A", 0x29fc82, 0x29fca2, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion A", 0x29fca2, 0x29fcc2, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratse Reve A", 0x29fcc2, 0x29fce2, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion A", 0x29fce2, 0x29fd02, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail A", 0x29fd02, 0x29fd22, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail A", 0x29fd22, 0x29fd42, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail A", 0x29fd42, 0x29fd62, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Hud Portrait A", 0x29fd62, 0x29fd82, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_PRINCESSSISSY_B_PALETTES[] =
{
    { L"Princess Sissy B", 0x29fd82, 0x29fda2, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons B", 0x29fda2, 0x29fdc2, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection B", 0x29fdc2, 0x29fde2, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box B", 0x29fde2, 0x29fe02, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb B", 0x29fe02, 0x29fe22, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion B", 0x29fe22, 0x29fe42, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratse Reve B", 0x29fe42, 0x29fe62, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion B", 0x29fe62, 0x29fe82, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail B", 0x29fe82, 0x29fea2, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail B", 0x29fea2, 0x29fec2, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail B", 0x29fec2, 0x29fee2, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Hud Portrait B", 0x29fee2, 0x29ff02, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_PRINCESSSISSY_C_PALETTES[] =
{
    { L"Princess Sissy C", 0x29ff02, 0x29ff22, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons C", 0x29ff22, 0x29ff42, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection C", 0x29ff42, 0x29ff62, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box C", 0x29ff62, 0x29ff82, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb C", 0x29ff82, 0x29ffa2, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion C", 0x29ffa2, 0x29ffc2, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratse Reve C", 0x29ffc2, 0x29ffe2, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion C", 0x29ffe2, 0x2A0002, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail C", 0x2A0002, 0x2A0022, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail C", 0x2A0022, 0x2A0042, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail C", 0x2A0042, 0x2A0062, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Hud Portrait C", 0x2A0062, 0x2A0082, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_PRINCESSSISSY_D_PALETTES[] =
{
    { L"Princess Sissy D", 0x2A0082, 0x2A00a2, indexMatriMSprites_PrincessSissy, 0x00, &pairNextAndNextSkipped },
    { L"Cape Weapons D", 0x2A00a2, 0x2A00c2, indexMatriMSprites_PrincessSissy, 0x0c, &pairPrevious },
    { L"Misdirection D", 0x2A00c2, 0x2A00e2, indexMatriMSprites_PrincessSissy, 0x0a },
    { L"Sissy's Box D", 0x2A00e2, 0x2A0102, indexMatriMSprites_PrincessSissy, 0x0e },
    { L"Espoir Bomb D", 0x2A0102, 0x2A0122, indexMatriMSprites_PrincessSissy, 0x09, &pairNext },
    { L"Espoir Explosion D", 0x2A0122, 0x2A0142, indexMatriMSprites_PrincessSissy, 0x0d, &pairPrevious },
    { L"Ratse Reve D", 0x2A0142, 0x2A0162, indexMatriMSprites_PrincessSissy, 0x0b },
    { L"Princess Illusion D", 0x2A0162, 0x2A0182, indexMatriMSprites_PrincessSissy, 0x08 },
    { L"Rolling/Super Jump Trail D", 0x2A0182, 0x2A01a2, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"EX/Super Trail D", 0x2A01a2, 0x2A01c2, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Guard Cancel Trail D", 0x2A01c2, 0x2A01e2, indexMatriMSprites_PrincessSissy, 0x00 },
    { L"Hud Portrait D", 0x2A01e2, 0x2A0202, indexMatriMSprites_PrincessSissy, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_PRINCESSSISSY_SHARED_PALETTES[] =
{
    { L"Princess Illusion: Frog", 0x29af7e, 0x29af9e, indexMatriMSprites_PrincessSissy, 0x07 },
};

const sGame_PaletteDataset Matrimelee_A_PRINCESSSISSY_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x2A0202, 0x2A02A2, indexMatriMSprites_PrincessSissy, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_REIJI_A_PALETTES[] =
{
    { L"Reiji Oyama A", 0x29afc0, 0x29afe0, indexMatriMSprites_Reiji, 0x00 },
    { L"KI Energy A", 0x29afe0, 0x29b000 },
    { L"Geki Ko Sho Shou A", 0x29b000, 0x29b020 },
    { L"Rolling/Super Jump Trail A", 0x29b020, 0x29b040, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail A", 0x29b040, 0x29b060, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail A", 0x29b060, 0x29b080, indexMatriMSprites_Reiji, 0x00 },
    { L"Hud Portrait A", 0x29b080, 0x29b0a0, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_REIJI_B_PALETTES[] =
{
    { L"Reiji Oyama B", 0x29b0a0, 0x29b0c0, indexMatriMSprites_Reiji, 0x00 },
    { L"KI Energy B", 0x29b0c0, 0x29b0e0 },
    { L"Geki Ko Sho Shou B", 0x29b0e0, 0x29b100 },
    { L"Rolling/Super Jump Trail B", 0x29b100, 0x29b120, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail B", 0x29b120, 0x29b140, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail B", 0x29b140, 0x29b160, indexMatriMSprites_Reiji, 0x00 },
    { L"Hud Portrait B", 0x29b160, 0x29b180, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_REIJI_C_PALETTES[] =
{
    { L"Reiji Oyama C", 0x29b180, 0x29b1a0, indexMatriMSprites_Reiji, 0x00 },
    { L"KI Energy C", 0x29b1a0, 0x29b1c0 },
    { L"Geki Ko Sho Shou C", 0x29b1c0, 0x29b1e0 },
    { L"Rolling/Super Jump Trail C", 0x29b1e0, 0x29b200, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail C", 0x29b200, 0x29b220, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail C", 0x29b220, 0x29b240, indexMatriMSprites_Reiji, 0x00 },
    { L"Hud Portrait C", 0x29b240, 0x29b260, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_REIJI_D_PALETTES[] =
{
    { L"Reiji Oyama D", 0x29b260, 0x29b280, indexMatriMSprites_Reiji, 0x00 },
    { L"KI Energy D", 0x29b280, 0x29b2A0 },
    { L"Geki Ko Sho Shou D", 0x29b2A0, 0x29b2c0 },
    { L"Rolling/Super Jump Trail D", 0x29b2c0, 0x29b2e0, indexMatriMSprites_Reiji, 0x00 },
    { L"EX/Super Trail D", 0x29b2e0, 0x29b300, indexMatriMSprites_Reiji, 0x00 },
    { L"Guard Cancel Trail D", 0x29b300, 0x29b320, indexMatriMSprites_Reiji, 0x00 },
    { L"Hud Portrait D", 0x29b320, 0x29b340, indexMatriMSprites_Reiji, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_REIJI_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29B340, 0x29B3A0, indexMatriMSprites_Reiji, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_SAIZO_A_PALETTES[] =
{
    { L"Saizo Hattori A", 0x29bca6, 0x29bcc6, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast A", 0x29bcc6, 0x29bce6, indexMatriMSprites_Saizo, 0x0b },
    { L"Bombs Explosions A", 0x29bce6, 0x29bd06, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan A", 0x29bd06, 0x29bd26, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan A", 0x29bd26, 0x29bd46, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan A", 0x29bd46, 0x29bd66, indexMatriMSprites_Saizo, 0x0c },
    { L"Gokuen Shou Ryudan A", 0x29bd66, 0x29bd86, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail A", 0x29bd86, 0x29bda6, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail/Backdash A", 0x29bda6, 0x29bdc6, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail A", 0x29bdc6, 0x29bde6, indexMatriMSprites_Saizo, 0x00 },
    { L"Hud Portrait A", 0x29bde6, 0x29be06, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SAIZO_B_PALETTES[] =
{
    { L"Saizo Hattori B", 0x29be06, 0x29be26, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast B", 0x29be26, 0x29be46, indexMatriMSprites_Saizo, 0x0b },
    { L"Bombs Explosions B", 0x29be46, 0x29be66, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan B", 0x29be66, 0x29be86, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan B", 0x29be86, 0x29bea6, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan B", 0x29bea6, 0x29bec6, indexMatriMSprites_Saizo, 0x0c },
    { L"Gokuen Shou Ryudan B", 0x29bec6, 0x29bee6, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail B", 0x29bee6, 0x29bf06, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail/Backdash B", 0x29bf06, 0x29bf26, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail B", 0x29bf26, 0x29bf46, indexMatriMSprites_Saizo, 0x00 },
    { L"Hud Portrait B", 0x29bf46, 0x29bf66, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SAIZO_C_PALETTES[] =
{
    { L"Saizo Hattori C", 0x29bf66, 0x29bf86, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast C", 0x29bf86, 0x29bfa6, indexMatriMSprites_Saizo, 0x0b },
    { L"Bombs Explosions C", 0x29bfa6, 0x29bfc6, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan C", 0x29bfc6, 0x29bfe6, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan C", 0x29bfe6, 0x29c006, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan C", 0x29c006, 0x29c026, indexMatriMSprites_Saizo, 0x0c },
    { L"Gokuen Shou Ryudan C", 0x29c026, 0x29c046, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail C", 0x29c046, 0x29c066, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail/Backdash C", 0x29c066, 0x29c086, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail C", 0x29c086, 0x29c0a6, indexMatriMSprites_Saizo, 0x00 },
    { L"Hud Portrait C", 0x29c0a6, 0x29c0c6, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SAIZO_D_PALETTES[] =
{
    { L"Saizo Hattori D", 0x29c0c6, 0x29c0e6, indexMatriMSprites_Saizo, 0x00 },
    { L"Energy Blast D", 0x29c0e6, 0x29c106, indexMatriMSprites_Saizo, 0x0b },
    { L"Bombs Explosions D", 0x29c106, 0x29c126, indexMatriMSprites_Saizo, 0x08, &pairNextSkippedAndNextSkipped },
    { L"Shinku Senpuzan D", 0x29c126, 0x29c146, indexMatriMSprites_Saizo, 0x0d },
    { L"Gokuaku Noburu Ryu Dan D", 0x29c146, 0x29c166, indexMatriMSprites_Saizo, 0x09 },
    { L"Hishou Mai Kage Zan D", 0x29c166, 0x29c186, indexMatriMSprites_Saizo, 0x0c },
    { L"Gokuen Shou Ryudan D", 0x29c186, 0x29c1a6, indexMatriMSprites_Saizo, 0x0a },
    { L"Rolling/Super Jump Trail D", 0x29c1a6, 0x29c1c6, indexMatriMSprites_Saizo, 0x00 },
    { L"EX/Super Trail/Backdash D", 0x29c1c6, 0x29c1e6, indexMatriMSprites_Saizo, 0x00 },
    { L"Guard Cancel Trail D", 0x29c1e6, 0x29c206, indexMatriMSprites_Saizo, 0x00 },
    { L"Hud Portrait D", 0x29c206, 0x29c226, indexMatriMSprites_Saizo, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SAIZO_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29C226, 0x29C2A6, indexMatriMSprites_Saizo, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_SHINTARO_A_PALETTES[] =
{
    { L"Shintaro Kuno A", 0x29f61e, 0x29f63e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x29f63e, 0x29f65e, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail A", 0x29f65e, 0x29f67e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail A", 0x29f67e, 0x29f69e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Hud Portrait A", 0x29f69e, 0x29f6be, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SHINTARO_B_PALETTES[] =
{
    { L"Shintaro Kuno B", 0x29f6be, 0x29f6de, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x29f6de, 0x29f6fe, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail B", 0x29f6fe, 0x29f71e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail B", 0x29f71e, 0x29f73e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Hud Portrait B", 0x29f73e, 0x29f75e, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SHINTARO_C_PALETTES[] =
{
    { L"Shintaro Kuno C", 0x29f75e, 0x29f77e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x29f77e, 0x29f79e, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail C", 0x29f79e, 0x29f7be, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail C", 0x29f7be, 0x29f7de, indexMatriMSprites_Shintaro, 0x00 },
    { L"Hud Portrait C", 0x29f7de, 0x29f7fe, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SHINTARO_D_PALETTES[] =
{
    { L"Shintaro Kuno D", 0x29f7fe, 0x29f81e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x29f81e, 0x29f83e, indexMatriMSprites_Shintaro, 0x00 },
    { L"EX/Super Trail D", 0x29f83e, 0x29f85e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Guard Cancel Trail D", 0x29f85e, 0x29f87e, indexMatriMSprites_Shintaro, 0x00 },
    { L"Hud Portrait D", 0x29f87e, 0x29f89e, indexMatriMSprites_Shintaro, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_SHINTARO_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29F89e, 0x29F91E, indexMatriMSprites_Shintaro, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_TANE_A_PALETTES[] =
{
    { L"Tane Goketsuji A", 0x29ded4, 0x29def4, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi A", 0x29def4, 0x29df14 },
    { L"Burning Energy A", 0x29df14, 0x29df34 },
    { L"Purple Energy A", 0x29df34, 0x29df54 },
    { L"Mirror Attack A", 0x29df54, 0x29df74 },
    { L"Intro Clothes A", 0x29df74, 0x29df94 },
    { L"Unused Extra A", 0x29df94, 0x29dfb4 },
    { L"Winpose Young Form A", 0x29dfb4, 0x29dfd4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 A", 0x29dfd4, 0x29dff4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 A", 0x29dff4, 0x29e014, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 1 A", 0x29e014, 0x29e034, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 2 A", 0x29e034, 0x29e054, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x29e054, 0x29e074, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail A", 0x29e074, 0x29e094, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail A", 0x29e094, 0x29e0b4, indexMatriMSprites_Tane, 0x00 },
    { L"Hud Portrait A", 0x29e0b4, 0x29e0d4, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_TANE_B_PALETTES[] =
{
    { L"Tane Goketsuji B", 0x29e0d4, 0x29e0f4, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi B", 0x29e0f4, 0x29e114 },
    { L"Burning Energy B", 0x29e114, 0x29e134 },
    { L"Purple Energy B", 0x29e134, 0x29e154 },
    { L"Mirror Attack B", 0x29e154, 0x29e174 },
    { L"Intro Clothes B", 0x29e174, 0x29e194 },
    { L"Unused Extra B", 0x29e194, 0x29e1b4 },
    { L"Winpose Young Form B", 0x29e1b4, 0x29e1d4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 B", 0x29e1d4, 0x29e1f4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 B", 0x29e1f4, 0x29e214, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 1 B", 0x29e214, 0x29e234, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 2 B", 0x29e234, 0x29e254, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x29e254, 0x29e274, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail B", 0x29e274, 0x29e294, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail B", 0x29e294, 0x29e2b4, indexMatriMSprites_Tane, 0x00 },
    { L"Hud Portrait B", 0x29e2b4, 0x29e2d4, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_TANE_C_PALETTES[] =
{
    { L"Tane Goketsuji C", 0x29e2d4, 0x29e2f4, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi C", 0x29e2f4, 0x29e314 },
    { L"Burning Energy C", 0x29e314, 0x29e334 },
    { L"Purple Energy C", 0x29e334, 0x29e354 },
    { L"Mirror Attack C", 0x29e354, 0x29e374 },
    { L"Intro Clothes C", 0x29e374, 0x29e394 },
    { L"Unused Extra C", 0x29e394, 0x29e3b4 },
    { L"Winpose Young Form C", 0x29e3b4, 0x29e3d4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 C", 0x29e3d4, 0x29e3f4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 C", 0x29e3f4, 0x29e414, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 1 C", 0x29e414, 0x29e434, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 2 C", 0x29e434, 0x29e454, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x29e454, 0x29e474, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail C", 0x29e474, 0x29e494, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail C", 0x29e494, 0x29e4b4, indexMatriMSprites_Tane, 0x00 },
    { L"Hud Portrait C", 0x29e4b4, 0x29e4d4, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_TANE_D_PALETTES[] =
{
    { L"Tane Goketsuji D", 0x29e4d4, 0x29e4f4, indexMatriMSprites_Tane, 0x00 },
    { L"Gan Saishi D", 0x29e4f4, 0x29e514 },
    { L"Burning Energy D", 0x29e514, 0x29e534 },
    { L"Purple Energy D", 0x29e534, 0x29e554 },
    { L"v D", 0x29e554, 0x29e574 },
    { L"Intro Clothes D", 0x29e574, 0x29e594 },
    { L"Unused Extra D", 0x29e594, 0x29e5b4 },
    { L"Winpose Young Form D", 0x29e5b4, 0x29e5d4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 1 D", 0x29e5d4, 0x29e5f4, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Flash 2 D", 0x29e5f4, 0x29e614, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 1 D", 0x29e614, 0x29e634, indexMatriMSprites_Tane, 0x00 },
    { L"Winpose Young Form Flash 2 D", 0x29e634, 0x29e654, indexMatriMSprites_Tane, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x29e654, 0x29e674, indexMatriMSprites_Tane, 0x00 },
    { L"EX/Super Trail D", 0x29e674, 0x29e694, indexMatriMSprites_Tane, 0x00 },
    { L"Guard Cancel Trail D", 0x29e694, 0x29e6b4, indexMatriMSprites_Tane, 0x00 },
    { L"Hud Portrait D", 0x29e6b4, 0x29e6d4, indexMatriMSprites_Tane, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_TANE_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29E6D4, 0x29e734, indexMatriMSprites_Tane, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_UME_A_PALETTES[] =
{
    { L"Ume Goketsuji A", 0x29e736, 0x29e756, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi A", 0x29e756, 0x29e776 },
    { L"Burning Energy A", 0x29e776, 0x29e796 },
    { L"Purple Energy A", 0x29e796, 0x29e7b6 },
    { L"Mirror Attack A", 0x29e7b6, 0x29e7d6 },
    { L"Intro Clothes A", 0x29e7d6, 0x29e7f6 },
    { L"Unused Extra A", 0x29e7f6, 0x29e816 },
    //{ L"Unused(?) A", 0x29e816, 0x29e836 },
    //{ L"Unused(?) A", 0x29e836, 0x29e856 },
    //{ L"Unused(?) A", 0x29e856, 0x29e876 },
    { L"Rolling/Super Jump Trail A", 0x29e876, 0x29e896, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail A", 0x29e896, 0x29e8b6, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail A", 0x29e8b6, 0x29e8d6, indexMatriMSprites_Ume, 0x00 },
    { L"Hud Portrait A", 0x29e8d6, 0x29e8f6, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_UME_B_PALETTES[] =
{
    { L"Ume Goketsuji B", 0x29e8f6, 0x29e916, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi B", 0x29e916, 0x29e936 },
    { L"Burning Energy B", 0x29e936, 0x29e956 },
    { L"Purple Energy B", 0x29e956, 0x29e976 },
    { L"Mirror Attack B", 0x29e976, 0x29e996 },
    { L"Intro Clothes B", 0x29e996, 0x29e9b6 },
    { L"Unused Extra B", 0x29e9b6, 0x29e9d6 },
    { L"Rolling/Super Jump Trail B", 0x29e9d6, 0x29e9f6, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail B", 0x29e9f6, 0x29ea16, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail B", 0x29ea16, 0x29ea36, indexMatriMSprites_Ume, 0x00 },
    { L"Hud Portrait B", 0x29ea36, 0x29ea56, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_UME_C_PALETTES[] =
{
    { L"Ume Goketsuji C", 0x29ea56, 0x29ea76, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi C", 0x29ea76, 0x29ea96 },
    { L"Burning Energy C", 0x29ea96, 0x29eab6 },
    { L"Purple Energy C", 0x29eab6, 0x29ead6 },
    { L"Mirror Attack C", 0x29ead6, 0x29eaf6 },
    { L"Intro Clothes C", 0x29eaf6, 0x29eb16 },
    { L"Unused Extra C", 0x29eb16, 0x29eb36 },
    { L"Rolling/Super Jump Trail C", 0x29eb36, 0x29eb56, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail C", 0x29eb56, 0x29eb76, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail C", 0x29eb76, 0x29eb96, indexMatriMSprites_Ume, 0x00 },
    { L"Hud Portrait C", 0x29eb96, 0x29ebb6, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_UME_D_PALETTES[] =
{
    { L"Ume Goketsuji D", 0x29ebb6, 0x29ebd6, indexMatriMSprites_Ume, 0x00 },
    { L"Gan Saishi D", 0x29ebd6, 0x29ebf6 },
    { L"Burning Energy D", 0x29ebf6, 0x29ec16 },
    { L"Purple Energy D", 0x29ec16, 0x29ec36 },
    { L"Mirror Attack D", 0x29ec36, 0x29ec56 },
    { L"Intro Clothes D", 0x29ec56, 0x29ec76 },
    { L"Unused Extra D", 0x29ec76, 0x29ec96 },
    { L"Rolling/Super Jump Trail D", 0x29ec96, 0x29ecb6, indexMatriMSprites_Ume, 0x00 },
    { L"EX/Super Trail D", 0x29ecb6, 0x29ecd6, indexMatriMSprites_Ume, 0x00 },
    { L"Guard Cancel Trail D", 0x29ecd6, 0x29ecf6, indexMatriMSprites_Ume, 0x00 },
    { L"Hud Portrait D", 0x29ecf6, 0x29ed16, indexMatriMSprites_Ume, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_UME_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29eD16, 0x29eD76, indexMatriMSprites_Ume, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_WHITE_A_PALETTES[] =
{
    { L"White Buffalo A", 0x29c2A8, 0x29c2c8, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks A", 0x29c2c8, 0x29c2e8 },
    { L"Buffalo Storm A", 0x29c2e8, 0x29c308 },
    { L"Flying Elbow A", 0x29c308, 0x29c328 },
    { L"Totem Tornado A", 0x29c328, 0x29c348 },
    { L"Intro Clothes A", 0x29c348, 0x29c368, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail A", 0x29c368, 0x29c388, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail A", 0x29c388, 0x29c3a8, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail A", 0x29c3a8, 0x29c3c8, indexMatriMSprites_White, 0x00 },
    { L"Hud Portrait A", 0x29c3c8, 0x29c3e8, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_WHITE_B_PALETTES[] =
{
    { L"White Buffalo B", 0x29c3e8, 0x29c408, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks B", 0x29c408, 0x29c428 },
    { L"Buffalo Storm B", 0x29c428, 0x29c448 },
    { L"Flying Elbow B", 0x29c448, 0x29c468 },
    { L"Totem Tornado B", 0x29c468, 0x29c488 },
    { L"Intro Clothes B", 0x29c488, 0x29c4a8, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail B", 0x29c4a8, 0x29c4c8, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail B", 0x29c4c8, 0x29c4e8, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail B", 0x29c4e8, 0x29c508, indexMatriMSprites_White, 0x00 },
    { L"Hud Portrait B", 0x29c508, 0x29c528, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_WHITE_C_PALETTES[] =
{
    { L"White Buffalo C", 0x29c528, 0x29c548, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks C", 0x29c548, 0x29c568 },
    { L"Buffalo Storm C", 0x29c568, 0x29c588 },
    { L"Flying Elbow C", 0x29c588, 0x29c5a8 },
    { L"Totem Tornado C", 0x29c5a8, 0x29c5c8 },
    { L"Intro Clothes C", 0x29c5c8, 0x29c5e8, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail C", 0x29c5e8, 0x29c608, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail C", 0x29c608, 0x29c628, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail C", 0x29c628, 0x29c648, indexMatriMSprites_White, 0x00 },
    { L"Hud Portrait C", 0x29c648, 0x29c668, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_WHITE_D_PALETTES[] =
{
    { L"White Buffalo D", 0x29c668, 0x29c688, indexMatriMSprites_White, 0x00 },
    { L"Arrow Attacks D", 0x29c688, 0x29c6a8 },
    { L"Buffalo Storm D", 0x29c6a8, 0x29c6c8 },
    { L"Flying Elbow D", 0x29c6c8, 0x29c6e8 },
    { L"Totem Tornado D", 0x29c6e8, 0x29c708 },
    { L"Intro Clothes D", 0x29c708, 0x29c728, indexMatriMSprites_White, 0x00 },
    { L"Rolling/Super Jump Trail D", 0x29c728, 0x29c748, indexMatriMSprites_White, 0x00 },
    { L"EX/Super Trail D", 0x29c748, 0x29c768, indexMatriMSprites_White, 0x00 },
    { L"Guard Cancel Trail D", 0x29c768, 0x29c788, indexMatriMSprites_White, 0x00 },
    { L"Hud Portrait D", 0x29c788, 0x29c7a8, indexMatriMSprites_White, 0x31 },
};

const sGame_PaletteDataset Matrimelee_A_WHITE_PORTRAIT_PALETTES[] =
{
    { L"Shared Portrait", 0x29C7A8, 0x29C828, indexMatriMSprites_White, 0x30 },
};

const sGame_PaletteDataset Matrimelee_A_HUD_PORTRAIT_PALETTES[] =
{
    { L"VS Text Transition", 0x2a20c4, 0x2a20e4 },
    { L"VS Background Transition", 0x2a20e4, 0x2a2104 },
    { L"VS Text Pre-Battle", 0x2a2144, 0x2a2164 },
    { L"VS Dialogue 1P", 0x2a1c84, 0x2a1ca4, indexMatriMSprites_Bonus, 0x04 },
    { L"VS Dialogue 2P", 0x2a1ca4, 0x2a1cc4, indexMatriMSprites_Bonus, 0x05 },
    { L"VS Background", 0x2cbcb0, 0x2cbcf0, indexMatriMSprites_Bonus, 0x02 },
    { L"VS Character Names", 0x2a2124, 0x2a2144, indexMatriMSprites_Bonus, 0x06 },
    { L"Character Select 1P/2P", 0x2a27a4, 0x2a27c4 },
    { L"Round Text", 0x29ac9e, 0x29acbe },
    { L"Round Number Text", 0x29acbe, 0x29acde },
    { L"KO Text", 0x29acde, 0x29acfe },
    { L"Character Fire Palette", 0x29abbe, 0x29abde },
    { L"Character Electric Palette", 0x29abde, 0x29abfe },
    { L"Dialogue Text", 0x2a2866, 0x2a2886 },

    { L"Win Background", 0x2cbcf4, 0x2cbd14, indexMatriMSprites_Bonus, 0x01 },
    { L"Lose Background", 0x2d19d0, 0x2d19f0, indexMatriMSprites_Bonus, 0x00 },

    { L"'How to Play' Joystick", 0x2a2886, 0x2a28a6 },
    { L"'How to Play' A Button Arrow", 0x2a27e6, 0x2a2806 },
    { L"'How to Play' B Button", 0x2a28a6, 0x2a28c6 },
    { L"'How to Play' B Button Arrow", 0x2a2806, 0x2a2826 },
    { L"'How to Play' C Button", 0x2a28e6, 0x2a2906 },
    { L"'How to Play' C Button Arrow", 0x2a2826, 0x2a2846 },
    { L"'How to Play' D Button", 0x2a2906, 0x2a2926 },
    { L"'How to Play' D Button Arrow", 0x2a2846, 0x2a2866 },
    { L"'How to Play' A Button", 0x2a28c6, 0x2a28e6 },
    { L"'How to Play' Joystick Arrow", 0x2a27c6, 0x2a27e6 },
};

const sGame_PaletteDataset Matrimelee_A_JUDGE_PORTRAIT_PALETTES[] =
{
    { L"The Judge/Enabler/Kuroko", 0x29adde, 0x29adfe, indexMatriMSprites_Stages, 0x00 },
};

const sGame_PaletteDataset Matrimelee_A_BBM_PORTRAIT_PALETTES[] =
{
    { L"Bloodline Battles Monitor", 0x29ac3e, 0x29ac7e, indexMatriMSprites_Bonus, 0x03 },
};

const sGame_PaletteDataset Matrimelee_A_BONUS_SELECT_PALETTES[] =
{
    { L"Character Select Icons 1/2", 0x2a2424, 0x2a2624 },
    { L"Character Select Icons 2/2", 0x2a2624, 0x2a2684 },
};

const sGame_PaletteDataset Matrimelee_A_BONUS_SELECT_FADED_PALETTES[] =
{
    { L"Character Select Icons Faded 1/2", 0x2a21c4, 0x2a23c4 },
    { L"Character Select Icons Faded 2/2", 0x2a23c4, 0x2a2424 },
};

const sGame_PaletteDataset Matrimelee_A_BONUS_SELECT_SCREEN_PALETTES[] =
{
    { L"Character Select Background", 0x2cb8a8, 0x2cb8c8 },
    { L"Character Select Main", 0x2cb8c8, 0x2cbac8 },
    { L"Character Select Background Secret", 0x2cbacc, 0x2cbaec },
    { L"Character Select Secret", 0x2cbaec, 0x2cbcac },
    { L"Character Select Ring 1P", 0x2a2744, 0x2a2764 },
    { L"Character Select Ring 1P Flash 1", 0x2a2764, 0x2a2784 },
    { L"Character Select Ring 1P Flash 2", 0x2a2784, 0x2a27a4 },
    { L"Character Select Ring 2P", 0x2a26e4, 0x2a2704 },
    { L"Character Select Ring 2P Flash 1", 0x2a2704, 0x2a2724 },
    { L"Character Select Ring 2P Flash 2", 0x2a2724, 0x2a2744 },

    { L"Meter Bar: Stress", 0x29ac7e, 0x29ac9e },
    { L"Meter Bar Meter: Stress", 0x29abfe, 0x29ac1e },
    { L"Random Select Portrait Selected", 0x2a2084, 0x2a20a4 },
    { L"Random Select Portrait Faded", 0x2a2064, 0x2a2084 },
    { L"Random Select Ring", 0x2a2184, 0x2a21a4 },
};

const sDescTreeNode Matrimelee_A_Annie_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_Annie_A_PALETTES,    ARRAYSIZE(Matrimelee_A_Annie_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_Annie_B_PALETTES,    ARRAYSIZE(Matrimelee_A_Annie_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_Annie_C_PALETTES,    ARRAYSIZE(Matrimelee_A_Annie_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_Annie_D_PALETTES,    ARRAYSIZE(Matrimelee_A_Annie_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE,     (void*)Matrimelee_A_Annie_SHARED_PALETTES, ARRAYSIZE(Matrimelee_A_Annie_SHARED_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_Annie_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_Annie_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_BUNTARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_BUNTARO_A_PALETTES,    ARRAYSIZE(Matrimelee_A_BUNTARO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_BUNTARO_B_PALETTES,    ARRAYSIZE(Matrimelee_A_BUNTARO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_BUNTARO_C_PALETTES,    ARRAYSIZE(Matrimelee_A_BUNTARO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_BUNTARO_D_PALETTES,    ARRAYSIZE(Matrimelee_A_BUNTARO_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_BUNTARO_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_BUNTARO_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_CHINNEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CHINNEN_A_PALETTES,    ARRAYSIZE(Matrimelee_A_CHINNEN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CHINNEN_B_PALETTES,    ARRAYSIZE(Matrimelee_A_CHINNEN_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CHINNEN_C_PALETTES,    ARRAYSIZE(Matrimelee_A_CHINNEN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CHINNEN_D_PALETTES,    ARRAYSIZE(Matrimelee_A_CHINNEN_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_CHINNEN_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_CHINNEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_CLARA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CLARA_A_PALETTES,    ARRAYSIZE(Matrimelee_A_CLARA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CLARA_B_PALETTES,    ARRAYSIZE(Matrimelee_A_CLARA_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CLARA_C_PALETTES,    ARRAYSIZE(Matrimelee_A_CLARA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_CLARA_D_PALETTES,    ARRAYSIZE(Matrimelee_A_CLARA_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE,     (void*)Matrimelee_A_CLARA_SHARED_PALETTES, ARRAYSIZE(Matrimelee_A_CLARA_SHARED_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_CLARA_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_CLARA_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_ELIAS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_ELIAS_A_PALETTES,    ARRAYSIZE(Matrimelee_A_ELIAS_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_ELIAS_B_PALETTES,    ARRAYSIZE(Matrimelee_A_ELIAS_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_ELIAS_C_PALETTES,    ARRAYSIZE(Matrimelee_A_ELIAS_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_ELIAS_D_PALETTES,    ARRAYSIZE(Matrimelee_A_ELIAS_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_ELIAS_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_ELIAS_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_HIKARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_HIKARU_A_PALETTES,    ARRAYSIZE(Matrimelee_A_HIKARU_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_HIKARU_B_PALETTES,    ARRAYSIZE(Matrimelee_A_HIKARU_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_HIKARU_C_PALETTES,    ARRAYSIZE(Matrimelee_A_HIKARU_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_HIKARU_D_PALETTES,    ARRAYSIZE(Matrimelee_A_HIKARU_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_HIKARU_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_HIKARU_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_JIMMY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JIMMY_A_PALETTES,    ARRAYSIZE(Matrimelee_A_JIMMY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JIMMY_B_PALETTES,    ARRAYSIZE(Matrimelee_A_JIMMY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JIMMY_C_PALETTES,    ARRAYSIZE(Matrimelee_A_JIMMY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JIMMY_D_PALETTES,    ARRAYSIZE(Matrimelee_A_JIMMY_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_JIMMY_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_JIMMY_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_JONES_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JONES_A_PALETTES,    ARRAYSIZE(Matrimelee_A_JONES_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JONES_B_PALETTES,    ARRAYSIZE(Matrimelee_A_JONES_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JONES_C_PALETTES,    ARRAYSIZE(Matrimelee_A_JONES_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_JONES_D_PALETTES,    ARRAYSIZE(Matrimelee_A_JONES_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_JONES_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_JONES_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_KANJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KANJI_A_PALETTES,    ARRAYSIZE(Matrimelee_A_KANJI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KANJI_B_PALETTES,    ARRAYSIZE(Matrimelee_A_KANJI_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KANJI_C_PALETTES,    ARRAYSIZE(Matrimelee_A_KANJI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KANJI_D_PALETTES,    ARRAYSIZE(Matrimelee_A_KANJI_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_KANJI_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_KANJI_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_KEITH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KEITH_A_PALETTES,    ARRAYSIZE(Matrimelee_A_KEITH_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KEITH_B_PALETTES,    ARRAYSIZE(Matrimelee_A_KEITH_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KEITH_C_PALETTES,    ARRAYSIZE(Matrimelee_A_KEITH_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_KEITH_D_PALETTES,    ARRAYSIZE(Matrimelee_A_KEITH_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_KEITH_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_KEITH_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_LYNN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_LYNN_A_PALETTES,    ARRAYSIZE(Matrimelee_A_LYNN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_LYNN_B_PALETTES,    ARRAYSIZE(Matrimelee_A_LYNN_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_LYNN_C_PALETTES,    ARRAYSIZE(Matrimelee_A_LYNN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_LYNN_D_PALETTES,    ARRAYSIZE(Matrimelee_A_LYNN_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_LYNN_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_LYNN_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_OLOF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_OLOF_A_PALETTES,    ARRAYSIZE(Matrimelee_A_OLOF_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_OLOF_B_PALETTES,    ARRAYSIZE(Matrimelee_A_OLOF_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_OLOF_C_PALETTES,    ARRAYSIZE(Matrimelee_A_OLOF_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_OLOF_D_PALETTES,    ARRAYSIZE(Matrimelee_A_OLOF_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_OLOF_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_OLOF_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_POOCHY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_POOCHY_A_PALETTES,    ARRAYSIZE(Matrimelee_A_POOCHY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_POOCHY_B_PALETTES,    ARRAYSIZE(Matrimelee_A_POOCHY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_POOCHY_C_PALETTES,    ARRAYSIZE(Matrimelee_A_POOCHY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_POOCHY_D_PALETTES,    ARRAYSIZE(Matrimelee_A_POOCHY_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_POOCHY_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_POOCHY_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_PRINCESSSISSY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_PRINCESSSISSY_A_PALETTES,    ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_PRINCESSSISSY_B_PALETTES,    ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_PRINCESSSISSY_C_PALETTES,    ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_PRINCESSSISSY_D_PALETTES,    ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_D_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE,     (void*)Matrimelee_A_PRINCESSSISSY_SHARED_PALETTES, ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_SHARED_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_PRINCESSSISSY_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_REIJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_REIJI_A_PALETTES,    ARRAYSIZE(Matrimelee_A_REIJI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_REIJI_B_PALETTES,    ARRAYSIZE(Matrimelee_A_REIJI_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_REIJI_C_PALETTES,    ARRAYSIZE(Matrimelee_A_REIJI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_REIJI_D_PALETTES,    ARRAYSIZE(Matrimelee_A_REIJI_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_REIJI_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_REIJI_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_SAIZO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SAIZO_A_PALETTES,    ARRAYSIZE(Matrimelee_A_SAIZO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SAIZO_B_PALETTES,    ARRAYSIZE(Matrimelee_A_SAIZO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SAIZO_C_PALETTES,    ARRAYSIZE(Matrimelee_A_SAIZO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SAIZO_D_PALETTES,    ARRAYSIZE(Matrimelee_A_SAIZO_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_SAIZO_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_SAIZO_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_SHINTARO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SHINTARO_A_PALETTES,    ARRAYSIZE(Matrimelee_A_SHINTARO_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SHINTARO_B_PALETTES,    ARRAYSIZE(Matrimelee_A_SHINTARO_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SHINTARO_C_PALETTES,    ARRAYSIZE(Matrimelee_A_SHINTARO_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_SHINTARO_D_PALETTES,    ARRAYSIZE(Matrimelee_A_SHINTARO_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_SHINTARO_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_SHINTARO_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_TANE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_TANE_A_PALETTES,    ARRAYSIZE(Matrimelee_A_TANE_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_TANE_B_PALETTES,    ARRAYSIZE(Matrimelee_A_TANE_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_TANE_C_PALETTES,    ARRAYSIZE(Matrimelee_A_TANE_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_TANE_D_PALETTES,    ARRAYSIZE(Matrimelee_A_TANE_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_TANE_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_TANE_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_UME_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_UME_A_PALETTES,    ARRAYSIZE(Matrimelee_A_UME_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_UME_B_PALETTES,    ARRAYSIZE(Matrimelee_A_UME_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_UME_C_PALETTES,    ARRAYSIZE(Matrimelee_A_UME_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_UME_D_PALETTES,    ARRAYSIZE(Matrimelee_A_UME_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_UME_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_UME_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_WHITE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_WHITE_A_PALETTES,    ARRAYSIZE(Matrimelee_A_WHITE_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_WHITE_B_PALETTES,    ARRAYSIZE(Matrimelee_A_WHITE_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_WHITE_C_PALETTES,    ARRAYSIZE(Matrimelee_A_WHITE_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,          (void*)Matrimelee_A_WHITE_D_PALETTES,    ARRAYSIZE(Matrimelee_A_WHITE_D_PALETTES) },
    { L"Portrait", DESC_NODETYPE_TREE,   (void*)Matrimelee_A_WHITE_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_WHITE_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_BONUS_COLLECTION[] =
{
    { L"Character Select Portraits Selected",   DESC_NODETYPE_TREE,   (void*)Matrimelee_A_BONUS_SELECT_PALETTES, ARRAYSIZE(Matrimelee_A_BONUS_SELECT_PALETTES) },
    { L"Character Select Portraits Faded",      DESC_NODETYPE_TREE,   (void*)Matrimelee_A_BONUS_SELECT_FADED_PALETTES, ARRAYSIZE(Matrimelee_A_BONUS_SELECT_FADED_PALETTES) },
    { L"Select Screen Palettes",                DESC_NODETYPE_TREE,   (void*)Matrimelee_A_BONUS_SELECT_SCREEN_PALETTES, ARRAYSIZE(Matrimelee_A_BONUS_SELECT_SCREEN_PALETTES) },
    { L"HUD",                       DESC_NODETYPE_TREE,   (void*)Matrimelee_A_HUD_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_HUD_PORTRAIT_PALETTES) },
    { L"The Judge",                 DESC_NODETYPE_TREE,   (void*)Matrimelee_A_JUDGE_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_JUDGE_PORTRAIT_PALETTES) },
    { L"Bloodline Battle Monitor",  DESC_NODETYPE_TREE,   (void*)Matrimelee_A_BBM_PORTRAIT_PALETTES, ARRAYSIZE(Matrimelee_A_BBM_PORTRAIT_PALETTES) },
};

const sDescTreeNode Matrimelee_A_UNITS[] =
{
    { L"Anny Hamilton",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_Annie_COLLECTION,           ARRAYSIZE(Matrimelee_A_Annie_COLLECTION) },
    { L"Buntaro Kuno",      DESC_NODETYPE_TREE, (void*)Matrimelee_A_BUNTARO_COLLECTION,         ARRAYSIZE(Matrimelee_A_BUNTARO_COLLECTION) },
    { L"Chinnen",           DESC_NODETYPE_TREE, (void*)Matrimelee_A_CHINNEN_COLLECTION,         ARRAYSIZE(Matrimelee_A_CHINNEN_COLLECTION) },
    { L"Clara Hananokoji",  DESC_NODETYPE_TREE, (void*)Matrimelee_A_CLARA_COLLECTION,           ARRAYSIZE(Matrimelee_A_CLARA_COLLECTION) },
    { L"Elias Patrick",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_ELIAS_COLLECTION,           ARRAYSIZE(Matrimelee_A_ELIAS_COLLECTION) },
    { L"Hikaru Jomon",      DESC_NODETYPE_TREE, (void*)Matrimelee_A_HIKARU_COLLECTION,          ARRAYSIZE(Matrimelee_A_HIKARU_COLLECTION) },
    { L"Jimmy Lewis",       DESC_NODETYPE_TREE, (void*)Matrimelee_A_JIMMY_COLLECTION,           ARRAYSIZE(Matrimelee_A_JIMMY_COLLECTION) },
    { L"Mr. Jones",         DESC_NODETYPE_TREE, (void*)Matrimelee_A_JONES_COLLECTION,           ARRAYSIZE(Matrimelee_A_JONES_COLLECTION) },
    { L"Kanji Kokuin",      DESC_NODETYPE_TREE, (void*)Matrimelee_A_KANJI_COLLECTION,           ARRAYSIZE(Matrimelee_A_KANJI_COLLECTION) },
    { L"Keith Wayne",       DESC_NODETYPE_TREE, (void*)Matrimelee_A_KEITH_COLLECTION,           ARRAYSIZE(Matrimelee_A_KEITH_COLLECTION) },
    { L"Lynn Baker",        DESC_NODETYPE_TREE, (void*)Matrimelee_A_LYNN_COLLECTION,            ARRAYSIZE(Matrimelee_A_LYNN_COLLECTION) },
    { L"Olof Linderof",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_OLOF_COLLECTION,            ARRAYSIZE(Matrimelee_A_OLOF_COLLECTION) },
    { L"Poochy",            DESC_NODETYPE_TREE, (void*)Matrimelee_A_POOCHY_COLLECTION,          ARRAYSIZE(Matrimelee_A_POOCHY_COLLECTION) },
    { L"Princess Sissy",    DESC_NODETYPE_TREE, (void*)Matrimelee_A_PRINCESSSISSY_COLLECTION,   ARRAYSIZE(Matrimelee_A_PRINCESSSISSY_COLLECTION) },
    { L"Reiji Oyama",       DESC_NODETYPE_TREE, (void*)Matrimelee_A_REIJI_COLLECTION,           ARRAYSIZE(Matrimelee_A_REIJI_COLLECTION) },
    { L"Saizo Hattori",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_SAIZO_COLLECTION,           ARRAYSIZE(Matrimelee_A_SAIZO_COLLECTION) },
    { L"Shintaro Kuno",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_SHINTARO_COLLECTION,        ARRAYSIZE(Matrimelee_A_SHINTARO_COLLECTION) },
    { L"Tane Goketsuji",    DESC_NODETYPE_TREE, (void*)Matrimelee_A_TANE_COLLECTION,            ARRAYSIZE(Matrimelee_A_TANE_COLLECTION) },
    { L"Ume Goketsuji",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_UME_COLLECTION,             ARRAYSIZE(Matrimelee_A_UME_COLLECTION) },
    { L"White Buffalo",     DESC_NODETYPE_TREE, (void*)Matrimelee_A_WHITE_COLLECTION,           ARRAYSIZE(Matrimelee_A_WHITE_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)Matrimelee_A_BONUS_COLLECTION,           ARRAYSIZE(Matrimelee_A_BONUS_COLLECTION) },
};
