#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to MMX_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> MMX_SNES_IMGIDS_USED =
{
};

const sGame_PaletteDataset MMX_SNES_MAIN_PALETTES[] =
{
    { L"X ", 0x2B700, 0x2B720 },
    { L"X Charging 1", 0x2C440, 0x2C460 },
    { L"X - Charging 2", 0x2C460, 0x2C480 },
    { L"X Charge Shots", 0x2B860, 0x2B880 },
    { L"X Intro Portrait 1", 0x2F680, 0x2F6A0 },
    { L"X Intro Portrait 2", 0x2F6A0, 0x2F6C0 },
    { L"X Scanner - Intro", 0x2CB80, 0x2CBA0 },
    { L"Zero", 0x2C0C0, 0x2C0E0 },
    { L"Vile and Mech (Intro stage)", 0x2C0A0, 0x2C0C0 },
    { L"Vile and Mech (Sigma stage 1)", 0x2CC20, 0x2CC40 },
};

const sGame_PaletteDataset MMX_SNES_BOSSES_PALETTES[] =
{
    { L"Armored Armadillo 1", 0x2C2A0, 0x2C2C0 },
    { L"Armored Armadillo 2", 0x2C2C0, 0x2C2E0 },
    { L"Boomer Kuwanger", 0x2C4A0, 0x2C4C0 },
    { L"Chill Penguin (real)", 0x2C380, 0x2C3A0 },
    { L"Flame Mammoth", 0x2C6C0, 0x2C6E0 },
    { L"Launch Octopus 1", 0x2C4E0, 0x2C500 },
    { L"Launch Octopus 2", 0x2C500, 0x2C520 },
    { L"Spark Mandrill", 0x2C840, 0x2C860 },
    { L"Sting Chameleon", 0x2BA60, 0x2BA80 },
    { L"Storm Eagle", 0x2C7A0, 0x2C7C0 },

    { L"Chill Penguin (Effects)", 0x2c3a0, 0x2c3c0 },
    { L"Storm Eagle (Effects)", 0x2c7c0, 0x2c7e0 },
    { L"Spark Mandrill (Frozen)", 0x2c860, 0x2c880 },
    { L"Spark Mandrill (Effects)", 0x2c880, 0x2c8a0 },
};

const sGame_PaletteDataset MMX_SNES_XWEAPONARMOR_PALETTES[] =
{
    { L"Boomerang Cutter", 0x2cca0, 0x2ccc0 },
    { L"Chameleon Sting", 0x2cc60, 0x2cc80 },
    { L"Chameleon Sting (Charged Camo 1)", 0x2cd40, 0x2cd60 },
    { L"Chameleon Sting (Charged Camo 2)", 0x2cd60, 0x2cd80 },
    { L"Chameleon Sting (Charged Camo 3)", 0x2cd80, 0x2cda0 },
    { L"Chameleon Sting (Charged Camo 4)", 0x2cda0, 0x2cdc0 },
    { L"Chameleon Sting (Charged Camo 5)", 0x2cdc0, 0x2cde0 },
    { L"Chameleon Sting (Charged Camo 6)", 0x2cde0, 0x2ce00 },
    { L"Chameleon Sting (Charged Camo 7)", 0x2ce00, 0x2ce20 },
    { L"Chameleon Sting (Charged Camo 8)", 0x2ce20, 0x2ce40 },
    { L"Electric Spark", 0x2cce0, 0x2cd00 },
    { L"Fire Wave", 0x2cd00, 0x2cd20 },
    { L"Homing Torpedo", 0x2cc40, 0x2cc60 },
    { L"Rolling Shield", 0x2cd20, 0x2cd40 },
    { L"Shotgun Ice", 0x2cc80, 0x2cca0 },
    { L"Storm Tornado ", 0x2ccc0, 0x2cce0 },
};

const sGame_PaletteDataset MMX_SNES_XWEAPONEFFECTS_PALETTES[] =
{
    { L"Boomerang Cutter", 0x2b7a0, 0x2b7c0 },
    { L"Chameleon Sting", 0x2b900, 0x2b920 },
    { L"Electric Spark", 0x2bee0, 0x2bf00 },
    { L"Fire Wave", 0x2bec0, 0x2bee0 },
    { L"Homing Torpedo", 0x2b8e0, 0x2b900 },
    { L"Rolling Shield 1", 0x2bf00, 0x2bf20 },
    { L"Rolling Shield 2", 0x2bf20, 0x2bf40 },
    { L"Rolling Shield 3", 0x2bf40, 0x2bf60 },
    { L"Rolling Shield 4", 0x2bf60, 0x2bf80 },
    { L"Rolling Shield 5", 0x2bf80, 0x2bfa0 },
    { L"Shotgun Ice", 0x2bea0, 0x2bec0 },
    { L"Storm Tornado", 0x2be20, 0x2be40 },
    { L"1-up/Lives Counter", 0x2df00, 0x2df20 },
    { L"Sub Tank", 0x2dfa0, 0x2dfc0 },
    { L"Explosion (Red)", 0x2b7c0, 0x2b7e0 },
    { L"Sigma Portrait (Stage Select)", 0x2eee0, 0x2ef00 },
};

const sGame_PaletteDataset MMX_SNES_ENEMIES_PALETTES[] =
{
    { L"Bat", 0x2bfe0, 0x2c000 },
    { L"Mace & Shield robot", 0x2b740, 0x2b760 },
    { L"Missile Turtle 1", 0x2c900, 0x2c920 },
    { L"Missile Turtle 2", 0x2d880, 0x2d8a0 },
    { L"Pink Ride Armor/Pilot", 0x2bfc0, 0x2bfe0 },
    { L"Spiked Tire", 0x2ba40, 0x2ba60 },
    { L"Stationary Turret", 0x2c800, 0x2c820 },
};

const sGame_PaletteDataset MMX_SNES_SIGMA_PALETTES[] =
{
    { L"Spider (Fortress 1 Boss)", 0x2ca80, 0x2caa0 },
    { L"Rangda Bangda 1 (Fortress 2 Boss)", 0x2f8e0, 0x2f900 },
    { L"Rangda Bangda 2 (Fortress 2 Boss)", 0x2c960, 0x2c980 },
    { L"Rangda Bangda 3 (Fortress 2 Boss)", 0x2c980, 0x2c9a0 },
    { L"Rangda Bangda 4 (Fortress 2 Boss)", 0x2c9a0, 0x2c9c0 },
    { L"D-Rex Bottom (Fortress 3 Boss)", 0x2f0a0, 0x2f0c0 },
    { L"D-Rex Top (Fortress 3 Boss)", 0x2cac0, 0x2cae0 },
    { L"D-Rex (Charging)", 0x2cb00, 0x2cb20 },
    { L"D-Rex (Effects)", 0x2cae0, 0x2cb00 },
    { L"Velgauder, Flames (Sigma's Dog)", 0x2c920, 0x2c940 },
    { L"Velgauder, Sparks (Sigma's Dog)", 0x2c940, 0x2c960 },
    { L"Sigma", 0x2cb20, 0x2cb40 },
    { L"Sigma Cloak", 0x2cb40, 0x2cb60 },
    { L"Wolf Sigma", 0x2bd00, 0x2bd20 },
    { L"Wolf Sigma (Effects)", 0x2bda0, 0x2bdc0 },
};

const sGame_PaletteDataset MMX_SNES_ENDING_PALETTES[] =
{
    { L"X Dimmed", 0x2fea0, 0x2fec0 },
    { L"Cliff, Sky, Water", 0x2fec0, 0x2fee0 },
    { L"Cliff, Sky, Water (Dimmed)", 0x2fe80, 0x2fea0 },
    { L"Fortress", 0x2cc00, 0x2cc20 },
    { L"Explosions, Water splash", 0x2cbe0, 0x2cc00 },
    { L"Font", 0x2fe60, 0x2fe80 },
    { L"Sigma Monitor 1 (credits)", 0x2ff00, 0x2ff20 },
    { L"Sigma Monitor 2 (credits)", 0x2ff40, 0x2ff60 },
    { L"Sigma Monitor 3 (credits)", 0x2ff60, 0x2ff80 },
    { L"Sigma Monitor 4 (credits)", 0x2ff80, 0x2ffa0 },
    { L"Sigma Portrait (credits)", 0x2ff20, 0x2ff40 },
};

const sDescTreeNode MMX_SNES_MAIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_MAIN_PALETTES, ARRAYSIZE(MMX_SNES_MAIN_PALETTES) },
};

const sDescTreeNode MMX_SNES_BOSSES_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_BOSSES_PALETTES, ARRAYSIZE(MMX_SNES_BOSSES_PALETTES) },
};

const sDescTreeNode MMX_SNES_XWEAPONS_COLLECTION[] =
{
    { L"Armor Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_XWEAPONARMOR_PALETTES, ARRAYSIZE(MMX_SNES_XWEAPONARMOR_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)MMX_SNES_XWEAPONEFFECTS_PALETTES, ARRAYSIZE(MMX_SNES_XWEAPONEFFECTS_PALETTES) },
};

const sDescTreeNode MMX_SNES_ENEMIES_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_ENEMIES_PALETTES, ARRAYSIZE(MMX_SNES_ENEMIES_PALETTES) },
};

const sDescTreeNode MMX_SNES_SIGMA_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_SIGMA_PALETTES, ARRAYSIZE(MMX_SNES_SIGMA_PALETTES) },
};

const sDescTreeNode MMX_SNES_ENDING_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MMX_SNES_ENDING_PALETTES, ARRAYSIZE(MMX_SNES_ENDING_PALETTES) },
};

const sDescTreeNode MMX_SNES_UNITS[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)MMX_SNES_MAIN_COLLECTION, ARRAYSIZE(MMX_SNES_MAIN_COLLECTION) },
    { L"Bosses", DESC_NODETYPE_TREE, (void*)MMX_SNES_BOSSES_COLLECTION, ARRAYSIZE(MMX_SNES_BOSSES_COLLECTION) },

    { L"X Weapons", DESC_NODETYPE_TREE, (void*)MMX_SNES_XWEAPONS_COLLECTION, ARRAYSIZE(MMX_SNES_XWEAPONS_COLLECTION) },
    { L"Enemies", DESC_NODETYPE_TREE, (void*)MMX_SNES_ENEMIES_COLLECTION, ARRAYSIZE(MMX_SNES_ENEMIES_COLLECTION) },
    { L"Sigma Fortress", DESC_NODETYPE_TREE, (void*)MMX_SNES_SIGMA_COLLECTION, ARRAYSIZE(MMX_SNES_SIGMA_COLLECTION) },
    { L"Ending", DESC_NODETYPE_TREE, (void*)MMX_SNES_ENDING_COLLECTION, ARRAYSIZE(MMX_SNES_ENDING_COLLECTION) },
};
