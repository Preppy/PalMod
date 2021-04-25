#pragma once

const UINT16 LASTBLADE_A_IMG_UNITS[] =
{
    indexLastBlade2_Akari,        // 0x1D9
    indexLastBlade2_Juzoh,        // 0x1DD
    indexLastBlade2_Kaede,        // 0x1DE
    indexLastBlade2_LeeRekka,     // 0x1E2
    indexLastBlade2_Moriya,       // 0x1E3
    indexLastBlade2_Mukuro,       // 0x1E4
    indexLastBlade2_Shigen,       // 0x1E6
    indexLastBlade2_Shinnosuke,   // 0x1E7 aka Kagami
    indexLastBlade2_Yuki,         // 0x1E8
    indexLastBlade2_Zantetsu,     // 0x1E9

    indexLastBladeSprites_Akari,    // 0x265
    indexLastBladeSprites_Amano,    // 0x266
    indexLastBladeSprites_Juzoh,    // 0x267
    indexLastBladeSprites_Kaede,    // 0x268
    indexLastBladeSprites_KaedeO,   // 0x269
    indexLastBladeSprites_Kagami,   // 0x26A
    indexLastBladeSprites_Lee,      // 0x26B
    indexLastBladeSprites_Moriya,   // 0x26C
    indexLastBladeSprites_Mukuro,   // 0x26D
    indexLastBladeSprites_Musashi,  // 0x26E
    indexLastBladeSprites_Okina,    // 0x26F
    indexLastBladeSprites_Shigen,   // 0x270
    indexLastBladeSprites_Washizuka, // 0x271
    indexLastBladeSprites_Yuki,     // 0x272
    indexLastBladeSprites_Zantetsu, // 0x273
    indexLastBladeSprites_Bonus,    // 0x274
};

const sGame_PaletteDataset LASTBLADE_A_AKARI_PALETTES_PA[] =
{
    { L"Main", 0xb5b20, 0xb5b40, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon", 0xb5d20, 0xb5d40, indexLastBlade2_Akari, 0x01 },
    { L"Burned", 0xb5b40, 0xb5b60, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb5d40, 0xb5d60, indexLastBlade2_Akari, 0x01 },
    { L"Cursed", 0xb5b60, 0xb5b80, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb5d60, 0xb5d80, indexLastBlade2_Akari, 0x01 },
    { L"Fandango", 0xb5b80, 0xb5ba0, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb5d80, 0xb5da0, indexLastBlade2_Akari, 0x01 },
    { L"Frozen", 0xb5ba0, 0xb5bc0, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb5da0, 0xb5dc0, indexLastBlade2_Akari, 0x01 },
    { L"Shocked", 0xb5bc0, 0xb5be0, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb5dc0, 0xb5de0, indexLastBlade2_Akari, 0x01 },
    { L"Zombie", 0xb5be0, 0xb5c00, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb5de0, 0xb5e00, indexLastBlade2_Akari, 0x01 },
    { L"Blink", 0xb5c00, 0xb5c20, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb5e00, 0xb5e20, indexLastBlade2_Akari, 0x01 },
    { L"Deflect", 0xb5c20, 0xb5c40, indexLastBlade2_Akari, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb5e20, 0xb5e40, indexLastBlade2_Akari, 0x01 },
    { L"Extra 1", 0xb5c40, 0xb5c60 },
    { L"Extra 2", 0xb5c60, 0xb5c80 },
    { L"Extra 3", 0xb5c80, 0xb5ca0 },
    { L"Extra 4", 0xb5ca0, 0xb5cc0 },
    { L"Extra 5", 0xb5cc0, 0xb5ce0 },
    { L"Extra 6", 0xb5ce0, 0xb5d00 },
    { L"Extra 7", 0xb5d00, 0xb5d20 },
    { L"Weapon Extras 1", 0xb5e40, 0xb5e60 },
    { L"Weapon Extras 2", 0xb5e60, 0xb5e80 },
    { L"Weapon Extras 3", 0xb5e80, 0xb5ea0 },
    { L"Weapon Extras 4", 0xb5ea0, 0xb5ec0 },
    { L"Weapon Extras 5", 0xb5ec0, 0xb5ee0 },
    { L"Weapon Extras 6", 0xb5ee0, 0xb5f00 },
    { L"Weapon Extras 7", 0xb5f00, 0xb5f20 },
};

const sGame_PaletteDataset LASTBLADE_A_AMANO_PALETTES_PA[] =
{
    { L"Main", 0xbd560, 0xbd580, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon", 0xbd760, 0xbd780, indexLastBladeSprites_Amano, 0x01 },
    { L"Burned", 0xbd580, 0xbd5a0, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Burned", 0xbd780, 0xbd7a0, indexLastBladeSprites_Amano, 0x01 },
    { L"Cursed", 0xbd5a0, 0xbd5c0, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xbd7a0, 0xbd7c0, indexLastBladeSprites_Amano, 0x01 },
    { L"Fandango", 0xbd5c0, 0xbd5e0, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xbd7c0, 0xbd7e0, indexLastBladeSprites_Amano, 0x01 },
    { L"Frozen", 0xbd5e0, 0xbd600, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xbd7e0, 0xbd800, indexLastBladeSprites_Amano, 0x01 },
    { L"Shocked", 0xbd600, 0xbd620, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xbd800, 0xbd820, indexLastBladeSprites_Amano, 0x01 },
    { L"Zombie", 0xbd620, 0xbd640, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xbd820, 0xbd840, indexLastBladeSprites_Amano, 0x01 },
    { L"Blink", 0xbd640, 0xbd660, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Blink", 0xbd840, 0xbd860, indexLastBladeSprites_Amano, 0x01 },
    { L"Deflect", 0xbd660, 0xbd680, indexLastBladeSprites_Amano, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xbd860, 0xbd880, indexLastBladeSprites_Amano, 0x01 },
    { L"Extra 1", 0xbd680, 0xbd6a0 },
    { L"Extra 2", 0xbd6a0, 0xbd6c0 },
    { L"Extra 3", 0xbd6c0, 0xbd6e0 },
    { L"Extra 4", 0xbd6e0, 0xbd700 },
    { L"Extra 5", 0xbd700, 0xbd720 },
    { L"Extra 6", 0xbd720, 0xbd740 },
    { L"Extra 7", 0xbd740, 0xbd760 },
    { L"Weapon Extras 1", 0xbd880, 0xbd8a0 },
    { L"Weapon Extras 2", 0xbd8a0, 0xbd8c0 },
    { L"Weapon Extras 3", 0xbd8c0, 0xbd8e0 },
    { L"Weapon Extras 4", 0xbd8e0, 0xbd900 },
    { L"Weapon Extras 5", 0xbd900, 0xbd920 },
    { L"Weapon Extras 6", 0xbd920, 0xbd940 },
    { L"Weapon Extras 7", 0xbd940, 0xbd960 },
};

const sGame_PaletteDataset LASTBLADE_A_JUZOH_PALETTES_PA[] =
{
    { L"Main", 0xb7020, 0xb7040, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon", 0xb7220, 0xb7240, indexLastBlade2_Juzoh, 0x01 },
    { L"Burned", 0xb7040, 0xb7060, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb7240, 0xb7260, indexLastBlade2_Juzoh, 0x01 },
    { L"Cursed", 0xb7060, 0xb7080, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb7260, 0xb7280, indexLastBlade2_Juzoh, 0x01 },
    { L"Fandango", 0xb7080, 0xb70a0, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb7280, 0xb72a0, indexLastBlade2_Juzoh, 0x01 },
    { L"Frozen", 0xb70a0, 0xb70c0, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb72a0, 0xb72c0, indexLastBlade2_Juzoh, 0x01 },
    { L"Shocked", 0xb70c0, 0xb70e0, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb72c0, 0xb72e0, indexLastBlade2_Juzoh, 0x01 },
    { L"Zombie", 0xb70e0, 0xb7100, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb72e0, 0xb7300, indexLastBlade2_Juzoh, 0x01 },
    { L"Blink", 0xb7100, 0xb7120, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb7300, 0xb7320, indexLastBlade2_Juzoh, 0x01 },
    { L"Deflect", 0xb7120, 0xb7140, indexLastBlade2_Juzoh, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb7320, 0xb7340, indexLastBlade2_Juzoh, 0x01 },
    { L"Extra 1", 0xb7140, 0xb7160 },
    { L"Extra 2", 0xb7160, 0xb7180 },
    { L"Extra 3", 0xb7180, 0xb71a0 },
    { L"Extra 4", 0xb71a0, 0xb71c0 },
    { L"Extra 5", 0xb71c0, 0xb71e0 },
    { L"Extra 6", 0xb71e0, 0xb7200 },
    { L"Extra 7", 0xb7200, 0xb7220 },
    { L"Weapon Extras 1", 0xb7340, 0xb7360 },
    { L"Weapon Extras 2", 0xb7360, 0xb7380 },
    { L"Weapon Extras 3", 0xb7380, 0xb73a0 },
    { L"Weapon Extras 4", 0xb73a0, 0xb73c0 },
    { L"Weapon Extras 5", 0xb73c0, 0xb73e0 },
    { L"Weapon Extras 6", 0xb73e0, 0xb7400 },
    { L"Weapon Extras 7", 0xb7400, 0xb7420 },
};

const sGame_PaletteDataset LASTBLADE_A_KAEDE_PALETTES_PA[] =
{
    { L"Main", 0xb0720, 0xb0740, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon", 0xb0920, 0xb0940, indexLastBlade2_Kaede, 0x01 },
    { L"Burned", 0xb0740, 0xb0760, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb0940, 0xb0960, indexLastBlade2_Kaede, 0x01 },
    { L"Cursed", 0xb0760, 0xb0780, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb0960, 0xb0980, indexLastBlade2_Kaede, 0x01 },
    { L"Fandango", 0xb0780, 0xb07a0, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb0980, 0xb09a0, indexLastBlade2_Kaede, 0x01 },
    { L"Frozen", 0xb07a0, 0xb07c0, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb09a0, 0xb09c0, indexLastBlade2_Kaede, 0x01 },
    { L"Shocked", 0xb07c0, 0xb07e0, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb09c0, 0xb09e0, indexLastBlade2_Kaede, 0x01 },
    { L"Zombie", 0xb07e0, 0xb0800, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb09e0, 0xb0a00, indexLastBlade2_Kaede, 0x01 },
    { L"Blink", 0xb0800, 0xb0820, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb0a00, 0xb0a20, indexLastBlade2_Kaede, 0x01 },
    { L"Deflect", 0xb0820, 0xb0840, indexLastBlade2_Kaede, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb0a20, 0xb0a40, indexLastBlade2_Kaede, 0x01 },
    { L"Extra 1", 0xb0840, 0xb0860 },
    { L"Extra 2", 0xb0860, 0xb0880 },
    { L"Extra 3", 0xb0880, 0xb08a0 },
    { L"Extra 4", 0xb08a0, 0xb08c0 },
    { L"Extra 5", 0xb08c0, 0xb08e0 },
    { L"Extra 6", 0xb08e0, 0xb0900 },
    { L"Extra 7", 0xb0900, 0xb0920 },
    { L"Weapon Extras 1", 0xb0a40, 0xb0a60 },
    { L"Weapon Extras 2", 0xb0a60, 0xb0a80 },
    { L"Weapon Extras 3", 0xb0a80, 0xb0aa0 },
    { L"Weapon Extras 4", 0xb0aa0, 0xb0ac0 },
    { L"Weapon Extras 5", 0xb0ac0, 0xb0ae0 },
    { L"Weapon Extras 6", 0xb0ae0, 0xb0b00 },
    { L"Weapon Extras 7", 0xb0b00, 0xb0b20 },
};

const sGame_PaletteDataset LASTBLADE_A_KAGAMI_PALETTES_PA[] =
{
    { L"Main", 0xc3e60, 0xc3e80, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon", 0xc4060, 0xc4080, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Burned", 0xc3e80, 0xc3ea0, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Burned", 0xc4080, 0xc40a0, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Cursed", 0xc3ea0, 0xc3ec0, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xc40a0, 0xc40c0, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Fandango", 0xc3ec0, 0xc3ee0, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xc40c0, 0xc40e0, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Frozen", 0xc3ee0, 0xc3f00, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xc40e0, 0xc4100, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Shocked", 0xc3f00, 0xc3f20, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xc4100, 0xc4120, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Zombie", 0xc3f20, 0xc3f40, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xc4120, 0xc4140, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Blink", 0xc3f40, 0xc3f60, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Blink", 0xc4140, 0xc4160, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Deflect", 0xc3f60, 0xc3f80, indexLastBlade2_Shinnosuke, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xc4160, 0xc4180, indexLastBlade2_Shinnosuke, 0x01 },
    { L"Extra 1", 0xc3f80, 0xc3fa0 },
    { L"Extra 2", 0xc3fa0, 0xc3fc0 },
    { L"Extra 3", 0xc3fc0, 0xc3fe0 },
    { L"Extra 4", 0xc3fe0, 0xc4000 },
    { L"Extra 5", 0xc4000, 0xc4020 },
    { L"Extra 6", 0xc4020, 0xc4040 },
    { L"Extra 7", 0xc4040, 0xc4060 },
    { L"Weapon Extras 1", 0xc4180, 0xc41a0 },
    { L"Weapon Extras 2", 0xc41a0, 0xc41c0 },
    { L"Weapon Extras 3", 0xc41c0, 0xc41e0 },
    { L"Weapon Extras 4", 0xc41e0, 0xc4200 },
    { L"Weapon Extras 5", 0xc4200, 0xc4220 },
    { L"Weapon Extras 6", 0xc4220, 0xc4240 },
    { L"Weapon Extras 7", 0xc4240, 0xc4260 },
};

const sGame_PaletteDataset LASTBLADE_A_LEE_PALETTES_PA[] =
{
    { L"Main", 0xbea60, 0xbea80, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon", 0xbec60, 0xbec80, indexLastBlade2_LeeRekka, 0x01 },
    { L"Burned", 0xbea80, 0xbeaa0, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Burned", 0xbec80, 0xbeca0, indexLastBlade2_LeeRekka, 0x01 },
    { L"Cursed", 0xbeaa0, 0xbeac0, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xbeca0, 0xbecc0, indexLastBlade2_LeeRekka, 0x01 },
    { L"Fandango", 0xbeac0, 0xbeae0, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xbecc0, 0xbece0, indexLastBlade2_LeeRekka, 0x01 },
    { L"Frozen", 0xbeae0, 0xbeb00, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xbece0, 0xbed00, indexLastBlade2_LeeRekka, 0x01 },
    { L"Shocked", 0xbeb00, 0xbeb20, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xbed00, 0xbed20, indexLastBlade2_LeeRekka, 0x01 },
    { L"Zombie", 0xbeb20, 0xbeb40, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xbed20, 0xbed40, indexLastBlade2_LeeRekka, 0x01 },
    { L"Blink", 0xbeb40, 0xbeb60, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Blink", 0xbed40, 0xbed60, indexLastBlade2_LeeRekka, 0x01 },
    { L"Deflect", 0xbeb60, 0xbeb80, indexLastBlade2_LeeRekka, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xbed60, 0xbed80, indexLastBlade2_LeeRekka, 0x01 },
    { L"Extra 1", 0xbeb80, 0xbeba0 },
    { L"Extra 2", 0xbeba0, 0xbebc0 },
    { L"Extra 3", 0xbebc0, 0xbebe0 },
    { L"Extra 4", 0xbebe0, 0xbec00 },
    { L"Extra 5", 0xbec00, 0xbec20 },
    { L"Extra 6", 0xbec20, 0xbec40 },
    { L"Extra 7", 0xbec40, 0xbec60 },
    { L"Weapon Extras 1", 0xbed80, 0xbeda0 },
    { L"Weapon Extras 2", 0xbeda0, 0xbedc0 },
    { L"Weapon Extras 3", 0xbedc0, 0xbede0 },
    { L"Weapon Extras 4", 0xbede0, 0xbee00 },
    { L"Weapon Extras 5", 0xbee00, 0xbee20 },
    { L"Weapon Extras 6", 0xbee20, 0xbee40 },
    { L"Weapon Extras 7", 0xbee40, 0xbee60 },
};

const sGame_PaletteDataset LASTBLADE_A_MORYIA_PALETTES_PA[] =
{
    { L"Main", 0xb1c20, 0xb1c40, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon", 0xb1e20, 0xb1e40, indexLastBlade2_Moriya, 0x01 },
    { L"Burned", 0xb1c40, 0xb1c60, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb1e40, 0xb1e60, indexLastBlade2_Moriya, 0x01 },
    { L"Cursed", 0xb1c60, 0xb1c80, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb1e60, 0xb1e80, indexLastBlade2_Moriya, 0x01 },
    { L"Fandango", 0xb1c80, 0xb1ca0, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb1e80, 0xb1ea0, indexLastBlade2_Moriya, 0x01 },
    { L"Frozen", 0xb1ca0, 0xb1cc0, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb1ea0, 0xb1ec0, indexLastBlade2_Moriya, 0x01 },
    { L"Shocked", 0xb1cc0, 0xb1ce0, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb1ec0, 0xb1ee0, indexLastBlade2_Moriya, 0x01 },
    { L"Zombie", 0xb1ce0, 0xb1d00, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb1ee0, 0xb1f00, indexLastBlade2_Moriya, 0x01 },
    { L"Blink", 0xb1d00, 0xb1d20, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb1f00, 0xb1f20, indexLastBlade2_Moriya, 0x01 },
    { L"Deflect", 0xb1d20, 0xb1d40, indexLastBlade2_Moriya, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb1f20, 0xb1f40, indexLastBlade2_Moriya, 0x01 },
    { L"Extra 1", 0xb1d40, 0xb1d60 },
    { L"Extra 2", 0xb1d60, 0xb1d80 },
    { L"Extra 3", 0xb1d80, 0xb1da0 },
    { L"Extra 4", 0xb1da0, 0xb1dc0 },
    { L"Extra 5", 0xb1dc0, 0xb1de0 },
    { L"Extra 6", 0xb1de0, 0xb1e00 },
    { L"Extra 7", 0xb1e00, 0xb1e20 },
    { L"Weapon Extras 1", 0xb1f40, 0xb1f60 },
    { L"Weapon Extras 2", 0xb1f60, 0xb1f80 },
    { L"Weapon Extras 3", 0xb1f80, 0xb1fa0 },
    { L"Weapon Extras 4", 0xb1fa0, 0xb1fc0 },
    { L"Weapon Extras 5", 0xb1fc0, 0xb1fe0 },
    { L"Weapon Extras 6", 0xb1fe0, 0xb2000 },
    { L"Weapon Extras 7", 0xb2000, 0xb2020 },
};

const sGame_PaletteDataset LASTBLADE_A_MUKURO_PALETTES_PA[] =
{
    { L"Main", 0xbc060, 0xbc080, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon", 0xbc260, 0xbc280, indexLastBlade2_Mukuro, 0x01 },
    { L"Burned", 0xbc080, 0xbc0a0, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Burned", 0xbc280, 0xbc2a0, indexLastBlade2_Mukuro, 0x01 },
    { L"Cursed", 0xbc0a0, 0xbc0c0, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xbc2a0, 0xbc2c0, indexLastBlade2_Mukuro, 0x01 },
    { L"Fandango", 0xbc0c0, 0xbc0e0, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xbc2c0, 0xbc2e0, indexLastBlade2_Mukuro, 0x01 },
    { L"Frozen", 0xbc0e0, 0xbc100, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xbc2e0, 0xbc300, indexLastBlade2_Mukuro, 0x01 },
    { L"Shocked", 0xbc100, 0xbc120, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xbc300, 0xbc320, indexLastBlade2_Mukuro, 0x01 },
    { L"Zombie", 0xbc120, 0xbc140, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xbc320, 0xbc340, indexLastBlade2_Mukuro, 0x01 },
    { L"Blink", 0xbc140, 0xbc160, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Blink", 0xbc340, 0xbc360, indexLastBlade2_Mukuro, 0x01 },
    { L"Deflect", 0xbc160, 0xbc180, indexLastBlade2_Mukuro, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xbc360, 0xbc380, indexLastBlade2_Mukuro, 0x01 },
    { L"Extra 1", 0xbc180, 0xbc1a0 },
    { L"Extra 2", 0xbc1a0, 0xbc1c0 },
    { L"Extra 3", 0xbc1c0, 0xbc1e0 },
    { L"Extra 4", 0xbc1e0, 0xbc200 },
    { L"Extra 5", 0xbc200, 0xbc220 },
    { L"Extra 6", 0xbc220, 0xbc240 },
    { L"Extra 7", 0xbc240, 0xbc260 },
    { L"Weapon Extras 1", 0xbc380, 0xbc3a0 },
    { L"Weapon Extras 2", 0xbc3a0, 0xbc3c0 },
    { L"Weapon Extras 3", 0xbc3c0, 0xbc3e0 },
    { L"Weapon Extras 4", 0xbc3e0, 0xbc400 },
    { L"Weapon Extras 5", 0xbc400, 0xbc420 },
    { L"Weapon Extras 6", 0xbc420, 0xbc440 },
    { L"Weapon Extras 7", 0xbc440, 0xbc460 },
};

const sGame_PaletteDataset LASTBLADE_A_MUSASHI_PALETTES_PA[] =
{
    { L"Main", 0xc2960, 0xc2980, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon", 0xc2b60, 0xc2b80, indexLastBladeSprites_Musashi, 0x01 },
    { L"Burned", 0xc2980, 0xc29a0, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Burned", 0xc2b80, 0xc2ba0, indexLastBladeSprites_Musashi, 0x01 },
    { L"Cursed", 0xc29a0, 0xc29c0, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xc2ba0, 0xc2bc0, indexLastBladeSprites_Musashi, 0x01 },
    { L"Fandango", 0xc29c0, 0xc29e0, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xc2bc0, 0xc2be0, indexLastBladeSprites_Musashi, 0x01 },
    { L"Frozen", 0xc29e0, 0xc2a00, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xc2be0, 0xc2c00, indexLastBladeSprites_Musashi, 0x01 },
    { L"Shocked", 0xc2a00, 0xc2a20, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xc2c00, 0xc2c20, indexLastBladeSprites_Musashi, 0x01 },
    { L"Zombie", 0xc2a20, 0xc2a40, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xc2c20, 0xc2c40, indexLastBladeSprites_Musashi, 0x01 },
    { L"Blink", 0xc2a40, 0xc2a60, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Blink", 0xc2c40, 0xc2c60, indexLastBladeSprites_Musashi, 0x01 },
    { L"Deflect", 0xc2a60, 0xc2a80, indexLastBladeSprites_Musashi, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xc2c60, 0xc2c80, indexLastBladeSprites_Musashi, 0x01 },
    { L"Extra 1", 0xc2a80, 0xc2aa0 },
    { L"Extra 2", 0xc2aa0, 0xc2ac0 },
    { L"Extra 3", 0xc2ac0, 0xc2ae0 },
    { L"Extra 4", 0xc2ae0, 0xc2b00 },
    { L"Extra 5", 0xc2b00, 0xc2b20 },
    { L"Extra 6", 0xc2b20, 0xc2b40 },
    { L"Extra 7", 0xc2b40, 0xc2b60 },
    { L"Weapon Extras 1", 0xc2c80, 0xc2ca0 },
    { L"Weapon Extras 2", 0xc2ca0, 0xc2cc0 },
    { L"Weapon Extras 3", 0xc2cc0, 0xc2ce0 },
    { L"Weapon Extras 4", 0xc2ce0, 0xc2d00 },
    { L"Weapon Extras 5", 0xc2d00, 0xc2d20 },
    { L"Weapon Extras 6", 0xc2d20, 0xc2d40 },
    { L"Weapon Extras 7", 0xc2d40, 0xc2d60 },
};

const sGame_PaletteDataset LASTBLADE_A_OKINA_PALETTES_PA[] =
{
    { L"Main", 0xb4620, 0xb4640, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon", 0xb4820, 0xb4840, indexLastBladeSprites_Okina, 0x01 },
    { L"Burned", 0xb4640, 0xb4660, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb4840, 0xb4860, indexLastBladeSprites_Okina, 0x01 },
    { L"Cursed", 0xb4660, 0xb4680, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb4860, 0xb4880, indexLastBladeSprites_Okina, 0x01 },
    { L"Fandango", 0xb4680, 0xb46a0, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb4880, 0xb48a0, indexLastBladeSprites_Okina, 0x01 },
    { L"Frozen", 0xb46a0, 0xb46c0, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb48a0, 0xb48c0, indexLastBladeSprites_Okina, 0x01 },
    { L"Shocked", 0xb46c0, 0xb46e0, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb48c0, 0xb48e0, indexLastBladeSprites_Okina, 0x01 },
    { L"Zombie", 0xb46e0, 0xb4700, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb48e0, 0xb4900, indexLastBladeSprites_Okina, 0x01 },
    { L"Blink", 0xb4700, 0xb4720, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb4900, 0xb4920, indexLastBladeSprites_Okina, 0x01 },
    { L"Deflect", 0xb4720, 0xb4740, indexLastBladeSprites_Okina, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb4920, 0xb4940, indexLastBladeSprites_Okina, 0x01 },
    { L"Extra 1", 0xb4740, 0xb4760 },
    { L"Extra 2", 0xb4760, 0xb4780 },
    { L"Extra 3", 0xb4780, 0xb47a0 },
    { L"Extra 4", 0xb47a0, 0xb47c0 },
    { L"Extra 5", 0xb47c0, 0xb47e0 },
    { L"Extra 6", 0xb47e0, 0xb4800 },
    { L"Extra 7", 0xb4800, 0xb4820 },
    { L"Weapon Extras 1", 0xb4940, 0xb4960 },
    { L"Weapon Extras 2", 0xb4960, 0xb4980 },
    { L"Weapon Extras 3", 0xb4980, 0xb49a0 },
    { L"Weapon Extras 4", 0xb49a0, 0xb49c0 },
    { L"Weapon Extras 5", 0xb49c0, 0xb49e0 },
    { L"Weapon Extras 6", 0xb49e0, 0xb4a00 },
    { L"Weapon Extras 7", 0xb4a00, 0xb4a20 },
};

const sGame_PaletteDataset LASTBLADE_A_SHIGEN_PALETTES_PA[] =
{
    { L"Main", 0xc1460, 0xc1480, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon", 0xc1660, 0xc1680, indexLastBlade2_Shigen, 0x01 },
    { L"Burned", 0xc1480, 0xc14a0, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Burned", 0xc1680, 0xc16a0, indexLastBlade2_Shigen, 0x01 },
    { L"Cursed", 0xc14a0, 0xc14c0, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xc16a0, 0xc16c0, indexLastBlade2_Shigen, 0x01 },
    { L"Fandango", 0xc14c0, 0xc14e0, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xc16c0, 0xc16e0, indexLastBlade2_Shigen, 0x01 },
    { L"Frozen", 0xc14e0, 0xc1500, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xc16e0, 0xc1700, indexLastBlade2_Shigen, 0x01 },
    { L"Shocked", 0xc1500, 0xc1520, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xc1700, 0xc1720, indexLastBlade2_Shigen, 0x01 },
    { L"Zombie", 0xc1520, 0xc1540, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xc1720, 0xc1740, indexLastBlade2_Shigen, 0x01 },
    { L"Blink", 0xc1540, 0xc1560, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Blink", 0xc1740, 0xc1760, indexLastBlade2_Shigen, 0x01 },
    { L"Deflect", 0xc1560, 0xc1580, indexLastBlade2_Shigen, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xc1760, 0xc1780, indexLastBlade2_Shigen, 0x01 },
    { L"Extra 1", 0xc1580, 0xc15a0 },
    { L"Extra 2", 0xc15a0, 0xc15c0 },
    { L"Extra 3", 0xc15c0, 0xc15e0 },
    { L"Extra 4", 0xc15e0, 0xc1600 },
    { L"Extra 5", 0xc1600, 0xc1620 },
    { L"Extra 6", 0xc1620, 0xc1640 },
    { L"Extra 7", 0xc1640, 0xc1660 },
    { L"Weapon Extras 1", 0xc1780, 0xc17a0 },
    { L"Weapon Extras 2", 0xc17a0, 0xc17c0 },
    { L"Weapon Extras 3", 0xc17c0, 0xc17e0 },
    { L"Weapon Extras 4", 0xc17e0, 0xc1800 },
    { L"Weapon Extras 5", 0xc1800, 0xc1820 },
    { L"Weapon Extras 6", 0xc1820, 0xc1840 },
    { L"Weapon Extras 7", 0xc1840, 0xc1860 },
};

const sGame_PaletteDataset LASTBLADE_A_WASHIZUKA_PALETTES_PA[] =
{
    { L"Main", 0xb8520, 0xb8540, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon", 0xb8720, 0xb8740, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Burned", 0xb8540, 0xb8560, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb8740, 0xb8760, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Cursed", 0xb8560, 0xb8580, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb8760, 0xb8780, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Fandango", 0xb8580, 0xb85a0, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb8780, 0xb87a0, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Frozen", 0xb85a0, 0xb85c0, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb87a0, 0xb87c0, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Shocked", 0xb85c0, 0xb85e0, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb87c0, 0xb87e0, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Zombie", 0xb85e0, 0xb8600, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb87e0, 0xb8800, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Blink", 0xb8600, 0xb8620, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb8800, 0xb8820, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Deflect", 0xb8620, 0xb8640, indexLastBladeSprites_Washizuka, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb8820, 0xb8840, indexLastBladeSprites_Washizuka, 0x01 },
    { L"Extra 1", 0xb8640, 0xb8660 },
    { L"Extra 2", 0xb8660, 0xb8680 },
    { L"Extra 3", 0xb8680, 0xb86a0 },
    { L"Extra 4", 0xb86a0, 0xb86c0 },
    { L"Extra 5", 0xb86c0, 0xb86e0 },
    { L"Extra 6", 0xb86e0, 0xb8700 },
    { L"Extra 7", 0xb8700, 0xb8720 },
    { L"Weapon Extras 1", 0xb8840, 0xb8860 },
    { L"Weapon Extras 2", 0xb8860, 0xb8880 },
    { L"Weapon Extras 3", 0xb8880, 0xb88a0 },
    { L"Weapon Extras 4", 0xb88a0, 0xb88c0 },
    { L"Weapon Extras 5", 0xb88c0, 0xb88e0 },
    { L"Weapon Extras 6", 0xb88e0, 0xb8900 },
    { L"Weapon Extras 7", 0xb8900, 0xb8920 },
};

const sGame_PaletteDataset LASTBLADE_A_YUKI_PALETTES_PA[] =
{
    { L"Main", 0xb3120, 0xb3140, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon", 0xb3320, 0xb3340, indexLastBlade2_Yuki, 0x01 },
    { L"Burned", 0xb3140, 0xb3160, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Burned", 0xb3340, 0xb3360, indexLastBlade2_Yuki, 0x01 },
    { L"Cursed", 0xb3160, 0xb3180, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xb3360, 0xb3380, indexLastBlade2_Yuki, 0x01 },
    { L"Fandango", 0xb3180, 0xb31a0, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xb3380, 0xb33a0, indexLastBlade2_Yuki, 0x01 },
    { L"Frozen", 0xb31a0, 0xb31c0, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xb33a0, 0xb33c0, indexLastBlade2_Yuki, 0x01 },
    { L"Shocked", 0xb31c0, 0xb31e0, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xb33c0, 0xb33e0, indexLastBlade2_Yuki, 0x01 },
    { L"Zombie", 0xb31e0, 0xb3200, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xb33e0, 0xb3400, indexLastBlade2_Yuki, 0x01 },
    { L"Blink", 0xb3200, 0xb3220, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Blink", 0xb3400, 0xb3420, indexLastBlade2_Yuki, 0x01 },
    { L"Deflect", 0xb3220, 0xb3240, indexLastBlade2_Yuki, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xb3420, 0xb3440, indexLastBlade2_Yuki, 0x01 },
    { L"Extra 1", 0xb3240, 0xb3260 },
    { L"Extra 2", 0xb3260, 0xb3280 },
    { L"Extra 3", 0xb3280, 0xb32a0 },
    { L"Extra 4", 0xb32a0, 0xb32c0 },
    { L"Extra 5", 0xb32c0, 0xb32e0 },
    { L"Extra 6", 0xb32e0, 0xb3300 },
    { L"Extra 7", 0xb3300, 0xb3320 },
    { L"Weapon Extras 1", 0xb3440, 0xb3460 },
    { L"Weapon Extras 2", 0xb3460, 0xb3480 },
    { L"Weapon Extras 3", 0xb3480, 0xb34a0 },
    { L"Weapon Extras 4", 0xb34a0, 0xb34c0 },
    { L"Weapon Extras 5", 0xb34c0, 0xb34e0 },
    { L"Weapon Extras 6", 0xb34e0, 0xb3500 },
    { L"Weapon Extras 7", 0xb3500, 0xb3520 },
};

const sGame_PaletteDataset LASTBLADE_A_ZANTETSU_PALETTES_PA[] =
{
    { L"Main", 0xbff60, 0xbff80, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon", 0xc0160, 0xc0180, indexLastBlade2_Zantetsu, 0x01 },
    { L"Burned", 0xbff80, 0xbffa0, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Burned", 0xc0180, 0xc01a0, indexLastBlade2_Zantetsu, 0x01 },
    { L"Cursed", 0xbffa0, 0xbffc0, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Cursed", 0xc01a0, 0xc01c0, indexLastBlade2_Zantetsu, 0x01 },
    { L"Fandango", 0xbffc0, 0xbffe0, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Fandango", 0xc01c0, 0xc01e0, indexLastBlade2_Zantetsu, 0x01 },
    { L"Frozen", 0xbffe0, 0xc0000, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Frozen", 0xc01e0, 0xc0200, indexLastBlade2_Zantetsu, 0x01 },
    { L"Shocked", 0xc0000, 0xc0020, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Shocked", 0xc0200, 0xc0220, indexLastBlade2_Zantetsu, 0x01 },
    { L"Zombie", 0xc0020, 0xc0040, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Zombie", 0xc0220, 0xc0240, indexLastBlade2_Zantetsu, 0x01 },
    { L"Blink", 0xc0040, 0xc0060, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Blink", 0xc0240, 0xc0260, indexLastBlade2_Zantetsu, 0x01 },
    { L"Deflect", 0xc0060, 0xc0080, indexLastBlade2_Zantetsu, 0x00, &pairNext },
    { L"Weapon - Deflect", 0xc0260, 0xc0280, indexLastBlade2_Zantetsu, 0x01 },
    { L"Extra 1", 0xc0080, 0xc00a0 },
    { L"Extra 2", 0xc00a0, 0xc00c0 },
    { L"Extra 3", 0xc00c0, 0xc00e0 },
    { L"Extra 4", 0xc00e0, 0xc0100 },
    { L"Extra 5", 0xc0100, 0xc0120 },
    { L"Extra 6", 0xc0120, 0xc0140 },
    { L"Extra 7", 0xc0140, 0xc0160 },
    { L"Weapon Extras 1", 0xc0280, 0xc02a0 },
    { L"Weapon Extras 2", 0xc02a0, 0xc02c0 },
    { L"Weapon Extras 3", 0xc02c0, 0xc02e0 },
    { L"Weapon Extras 4", 0xc02e0, 0xc0300 },
    { L"Weapon Extras 5", 0xc0300, 0xc0320 },
    { L"Weapon Extras 6", 0xc0320, 0xc0340 },
    { L"Weapon Extras 7", 0xc0340, 0xc0360 },
};

const sDescTreeNode LASTBLADE_A_AKARI_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_AKARI_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_AKARI_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_AMANO_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_AMANO_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_AMANO_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_JUZOH_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_JUZOH_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_JUZOH_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_KAEDE_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_KAEDE_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_KAEDE_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_KAGAMI_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_KAGAMI_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_KAGAMI_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_LEE_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_LEE_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_LEE_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_MORYIA_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_MORYIA_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_MORYIA_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_MUKURO_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_MUKURO_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_MUKURO_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_MUSASHI_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_MUSASHI_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_MUSASHI_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_OKINA_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_OKINA_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_OKINA_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_SHIGEN_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_SHIGEN_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_SHIGEN_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_WASHIZUKA_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_WASHIZUKA_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_WASHIZUKA_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_YUKI_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_YUKI_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_YUKI_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_ZANTETSU_COLLECTION[] =
{
    { L"Power A", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_ZANTETSU_PALETTES_PA, ARRAYSIZE(LASTBLADE_A_ZANTETSU_PALETTES_PA) },
};

const sDescTreeNode LASTBLADE_A_UNITS[] =
{
    { L"Akari", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_AKARI_COLLECTION, ARRAYSIZE(LASTBLADE_A_AKARI_COLLECTION) },
    { L"Amano", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_AMANO_COLLECTION, ARRAYSIZE(LASTBLADE_A_AMANO_COLLECTION) },
    { L"Juzoh", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_JUZOH_COLLECTION, ARRAYSIZE(LASTBLADE_A_JUZOH_COLLECTION) },
    { L"Kaede/O.Kaede", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_KAEDE_COLLECTION, ARRAYSIZE(LASTBLADE_A_KAEDE_COLLECTION) },
    { L"Kagami", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_KAGAMI_COLLECTION, ARRAYSIZE(LASTBLADE_A_KAGAMI_COLLECTION) },
    { L"Lee", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_LEE_COLLECTION, ARRAYSIZE(LASTBLADE_A_LEE_COLLECTION) },
    { L"Moriya", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_MORYIA_COLLECTION, ARRAYSIZE(LASTBLADE_A_MORYIA_COLLECTION) },
    { L"Mukuro", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_MUKURO_COLLECTION, ARRAYSIZE(LASTBLADE_A_MUKURO_COLLECTION) },
    { L"Musashi", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_MUSASHI_COLLECTION, ARRAYSIZE(LASTBLADE_A_MUSASHI_COLLECTION) },
    { L"Okina", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_OKINA_COLLECTION, ARRAYSIZE(LASTBLADE_A_OKINA_COLLECTION) },
    { L"Shigen", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_SHIGEN_COLLECTION, ARRAYSIZE(LASTBLADE_A_SHIGEN_COLLECTION) },
    { L"Washizuka", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_WASHIZUKA_COLLECTION, ARRAYSIZE(LASTBLADE_A_WASHIZUKA_COLLECTION) },
    { L"Yuki", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_YUKI_COLLECTION, ARRAYSIZE(LASTBLADE_A_YUKI_COLLECTION) },
    { L"Zantetsu", DESC_NODETYPE_TREE, (void*)LASTBLADE_A_ZANTETSU_COLLECTION, ARRAYSIZE(LASTBLADE_A_ZANTETSU_COLLECTION) },
};

constexpr auto LASTBLADE_A_NUMUNIT = ARRAYSIZE(LASTBLADE_A_UNITS);

#define LASTBLADE_A_EXTRALOC LASTBLADE_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef LASTBLADE_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
