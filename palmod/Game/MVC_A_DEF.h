#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MVC_A_RYU_PALETTES. 
// * Update every array using MVC_A_NUMUNIT below
// * Update the index lookups in Game_MVC_A_.cpp that is marked - look for usage of indexRyu to find them
// That should be it.  Good luck.

enum SupportedMVCPaletteListIndex
{
    indexMVCWarMachine = 0,
    indexMVCCaptainAmerica,
    indexMVCHulk,
    indexMVCWolverine,
    indexMVCVenom,
    indexMVCSpiderman,
    indexMVCRoll,
    indexMVCRyu,
    indexMVCCapCom,
    indexMVCChun,
    indexMVCJin,
    indexMVCGief,
    indexMVCStrider,
    indexMVCMegaman,
    indexMVCMorrigan,
    indexMVCOnslaught,
    indexMVCHyperVenom,
    indexMVCOrangeHulk,
    indexMVCGWM,
    indexMVCShadowLady,
    indexMVCLilith,
    indexMVCGambit,
    indexMVCAssists,
    indexMVCPortraits,
    indexMVCCSIs,
    indexMVCBonus,
    indexMVCLast
};

constexpr auto MVC_A_NUMUNIT = indexMVCLast;

#define MVC_A_EXTRALOC MVC_A_NUMUNIT

const sGame_PaletteDataset MVC_A_RYU_PALETTES_P1[] =
{
    { "Ryu P1", 0x487c4, 0x487e4, 0x0 },
    { "Ryu P1 Hadouken", 0x487e4, 0x48804, 0x0, 1 },
    { "Ryu P1 Shoryuken", 0x48804, 0x48824, 0x27, 2 },
    { "Ken P1", 0x4ec44, 0x4ec64, 0x0 },
    { "Ken P1 Hakouken", 0x4ec64, 0x4ec84, 0x0, 1 },
    { "Ken P1 Shoryuken", 0x4ec84, 0x4eca4, 0x27, 2 },
    { "Akuma P1", 0x4ed04, 0x4ed24, 0x0 },
    { "Akuma P1 Hadouken", 0x4ed24, 0x4ed44, 0x1e, 1 },
    { "Akuma P1 Shoryuken", 0x4ed44, 0x4ed64, 0x27, 2 },
    { "Ken (Background) P1", 0x4ebC4, 0x4ebE4, 0x27, 0 },
    { "Sean (Background) P1", 0x4ebE4, 0x4ec04, 0x0, 0xb },
};

const sGame_PaletteDataset MVC_A_RYU_PALETTES_P2[] =
{
    { "Ryu P2", 0x48824, 0x48844, 0x0 },
    { "Ryu P2 Hadouken", 0x48844, 0x48864, 0x0, 1 },
    { "Ryu P2 Shoryuken", 0x48864, 0x48884, 0x27, 2 },
    { "Ken P2", 0x4eca4, 0x4ecc4, 0x0 },
    { "Ken P2 Hadouken", 0x4ecc4, 0x4ece4, 0x0, 1 },
    { "Ken P2 Shoryuken", 0x4ece4, 0x4ed04, 0x27, 2 },
    { "Akuma P2", 0x4ed64, 0x4ed84, 0x0 },
    { "Akuma P2 Hadouken", 0x4ed84, 0x4eda4, 0x1e, 1 },
    { "Akuma P2 Shoryuken", 0x4eda4, 0x4edc4, 0x27, 2 },
    { "Ken (Background) P2", 0x4ec04, 0x4ec24, 0x27, 0 },
    { "Sean (Background) P2", 0x4ec24, 0x4ec44, 0x0, 0xb },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_P1[] =
{
    { "P1 Color", 0x48ac4, 0x48ae4, 0x1 },
    { "P1 Banishing Fist", 0x48ae4, 0x48b04, 0x1, 1 },
    { "Palette 3", 0x48b04, 0x48b24, 0xff },

    { "P1 SPD Rage 1", 0x48bc4, 0x48be4, 0x1 },
    { "P1 SPD Rage 2", 0x48be4, 0x48c04, 0x1 },
    { "P1 SPD Rage 3", 0x48c04, 0x48c24, 0x1 },

    { "Mech-Gief P1 Color", 0x48c84, 0x48ca4, 0x1 },
    { "Mech-Gief P1 Yoga Flame", 0x48ca4, 0x48cc4, 0x1, 3 },
    { "Mech-Gief Palette 15", 0x48cc4, 0x48ce4, 0xff },

    { "Mech-Gief P1 SPD Rage 1", 0x48D44, 0x48D64, 0x1 },
    { "Mech-Gief P1 SPD Rage 2", 0x48D64, 0x48D84, 0x1 },
    { "Mech-Gief P1 SPD Rage 3", 0x48D84, 0x48DA4, 0x1 },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_P2[] =
{
    { "P2 Color", 0x48b24, 0x48b44, 0x1 },
    { "P2 Banishing Fist", 0x48b44, 0x48b64, 0x1, 1 },
    { "Palette 6", 0x48b64, 0x48b84, 0xff },

    { "P2 SPD Rage 1", 0x48c24, 0x48c44, 0x1 },
    { "P2 SPD Rage 2", 0x48c44, 0x48c64, 0x1 },
    { "P2 SPD Rage 3", 0x48c64, 0x48c84, 0x1 },

    { "Mech-Gief P2 Color", 0x48ce4, 0x48d04, 0x1 },
    { "Mech-Gief P2 Yoga Flame", 0x48d04, 0x48d24, 0x1, 3 },
    { "Mech-Gief Palette 18", 0x48d24, 0x48d44, 0xff },

    { "Mech-Gief P2 SPD Rage 1", 0x48DA4, 0x48DC4, 0x1 },
    { "Mech-Gief P2 SPD Rage 2", 0x48DC4, 0x48DE4, 0x1 },
    { "Mech-Gief P2 SPD Rage 3", 0x48DE4, 0x48E04, 0x1 },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_P1[] =
{
    { "P1 Color", 0x492e4, 0x49304, 0x1b },
    { "P1 Glimmer 1", 0x4ff64, 0x4ff84, 0x1b },
    { "P1 Glimmer 2", 0x4ff84, 0x4ffa4, 0x1b },
    { "P1 Glimmer 3", 0x4ffa4, 0x4ffc4, 0x1b },
    { "P2 Glimmer 4", 0x4ffc4, 0x4ffe4, 0x1b },
    { "P1 Glimmer 5", 0x4ffe4, 0x50004, 0x1b },
    { "P1 Glimmer 6", 0x50004, 0x50024, 0x1b },
    { "P1 Glimmer 7", 0x50024, 0x50044, 0x1b },
    { "P1 Glimmer 8", 0x50124, 0x50144, 0x1b }, // this range is odd?
    { "P1 Laser?", 0x50144, 0x50164 },
    { "P1 Missiles", 0x50164, 0x50184 },
    { "P1 Infinity Legs", 0x49304, 0x49324, 0x1b, 0x0E },
    { "P1 Shadow Leg Flash", 0x49324, 0x49344, 0x1b, 0x0D },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_P2[] =
{
    { "P2 Color", 0x49344, 0x49364, 0x1b },
    { "P2 Glimmer 1", 0x50044, 0x50064, 0x1b },
    { "P2 Glimmer 2", 0x50064, 0x50084, 0x1b },
    { "P2 Glimmer 3", 0x50084, 0x500A4, 0x1b },
    { "P2 Glimmer 4", 0x500A4, 0x500C4, 0x1b },
    { "P2 Glimmer 5", 0x500C4, 0x500E4, 0x1b },
    { "P2 Glimmer 6", 0x500E4, 0x50104, 0x1b },
    { "P2 Glimmer 7", 0x50104, 0x50124, 0x1b },
    { "P2 Glimmer 8", 0x50184, 0x501A4, 0x1b }, // this range is odd?
    { "P2 Laser?", 0x501A4, 0x501C4 },
    { "P2 Missiles", 0x501C4, 0x501E4 },
    { "P2 Infinity Legs", 0x49364, 0x49384, 0x1b, 0x0E },
    { "P2 Shadow Leg Flash", 0x49384, 0x493a4, 0x1b, 0x0D },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_P1[] =
{
    { "P1 Color", 0x48944, 0x48964, 0x1b },
    { "P1 leg flash", 0x48964, 0x48984, 0x1b, 1 },
    { "P1 Kikosho", 0x48984, 0x489a4, 0x1b, 2 },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_P2[] =
{
    { "P2 Color", 0x489a4, 0x489c4, 0x1b },
    { "P2 leg flash", 0x489c4, 0x489e4, 0x1b, 1 },
    { "P2 Kikosho", 0x489e4, 0x48a04, 0x1b, 2 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_P1[] =
{
    { "P1 Color", 0x48a04, 0x48a24, 0x37 },
    { "P1 Blodia FX", 0x48a24, 0x48a44, 0x37, 1 },
    { "P1 Blodia Punch", 0x48a44, 0x48a64, 0x37, 2 },

    { "P1 Saotome Shine / Meikyou Shishui 1", 0x4f3e4, 0x4f404, 0x37 },
    { "P1 Saotome Shine / Meikyou Shishui 2", 0x4f404, 0x4f424, 0x37 },
    { "P1 Saotome Shine / Meikyou Shishui 3", 0x4f424, 0x4f444, 0x37 },
    { "P1 Saotome Shine / Meikyou Shishui 4", 0x4f444, 0x4f464, 0x37 },
    { "P1 Saotome Shine / Meikyou Shishui 5", 0x4f464, 0x4f484, 0x37 },
    { "P1 Saotome Shine / Meikyou Shishui 6", 0x4f484, 0x4f4a4, 0x37 },

    { "P1 Burning Taunt 1", 0x4f7A4, 0x4f7C4, 0x37, 15 },
    { "P1 Burning Taunt 2", 0x4f7C4, 0x4f7E4, 0x37, 15  },
    { "P1 Burning Taunt 3", 0x4f7E4, 0x4f804, 0x37, 15  },
    { "P1 Burning Taunt 4", 0x4f804, 0x4f824, 0x37, 15  },
    { "P1 Burning Taunt 5", 0x4f824, 0x4f844, 0x37, 15  },
    { "P1 Burning Taunt 6", 0x4f844, 0x4f864, 0x37, 15  },

    { "P1 Leaving Blodia 1", 0x4f564, 0x4f584, 0x37, 11 },
    { "P1 Leaving Blodia 2", 0x4f584, 0x4f5a4, 0x37, 11 },
    { "P1 Leaving Blodia 3", 0x4f5a4, 0x4f5c4, 0x37, 11 },
    { "P1 Leaving Blodia 4", 0x4f5c4, 0x4f5e4, 0x37, 11 },
    { "P1 Leaving Blodia 5", 0x4f5e4, 0x4f604, 0x37, 11 },
    { "P1 Leaving Blodia 6", 0x4f604, 0x4f624, 0x37, 11 },

    { "P1 Vulcan Super (Hands)", 0x4f6e4, 0x4f704, 0x37, 12 },
    { "P1 Vulcan Super (Muzzle Flash)", 0x4f704, 0x4f724, 0x37, 13 },
    { "P1 Vulcan Super (Inside of Blodia)", 0x4f724, 0x4f744, 0x37, 14 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_P2[] =
{
    { "P2 Color", 0x48a64, 0x48a84, 0x37 },
    { "P2 Blodia FX", 0x48a84, 0x48aa4, 0x37, 1 },
    { "P2 Blodia Punch", 0x48aa4, 0x48ac4, 0x37, 2 },

    { "P2 Saotome Shine / Meikyou Shishui 1", 0x4f4a4, 0x4f4C4, 0x37 },
    { "P2 Saotome Shine / Meikyou Shishui 2", 0x4f4c4, 0x4f4e4, 0x37 },
    { "P2 Saotome Shine / Meikyou Shishui 3", 0x4f4e4, 0x4f504, 0x37 },
    { "P2 Saotome Shine / Meikyou Shishui 4", 0x4f504, 0x4f524, 0x37 },
    { "P2 Saotome Shine / Meikyou Shishui 5", 0x4f524, 0x4f544, 0x37 },
    { "P2 Saotome Shine / Meikyou Shishui 6", 0x4f544, 0x4f564, 0x37 },

    { "P2 Burning Taunt 1", 0x4f864, 0x4f884, 0x37, 15  },
    { "P2 Burning Taunt 2", 0x4f884, 0x4f8A4, 0x37, 15  },
    { "P2 Burning Taunt 3", 0x4f8A4, 0x4f8C4, 0x37, 15  },
    { "P2 Burning Taunt 4", 0x4f8C4, 0x4f8E4, 0x37, 15  },
    { "P2 Burning Taunt 5", 0x4f8E4, 0x4f904, 0x37, 15  },
    { "P2 Burning Taunt 6", 0x4f904, 0x4f924, 0x37, 15  },

    { "P2 Leaving Blodia 1", 0x4f624, 0x4f644, 0x37, 11 },
    { "P2 Leaving Blodia 2", 0x4f644, 0x4f664, 0x37, 11 },
    { "P2 Leaving Blodia 3", 0x4f664, 0x4f684, 0x37, 11 },
    { "P2 Leaving Blodia 4", 0x4f684, 0x4f6a4, 0x37, 11 },
    { "P2 Leaving Blodia 5", 0x4f6a4, 0x4f6c4, 0x37, 11 },
    { "P2 Leaving Blodia 6", 0x4f6c4, 0x4f6e4, 0x37, 11 },

    { "P2 Vulcan Super (Hands)", 0x4f744, 0x4f764, 0x37, 12 },
    { "P2 Vulcan Super (Muzzle Flash)", 0x4f764, 0x4f784, 0x37, 13 },
    { "P2 Vulcan Super (Inside of Blodia)", 0x4f784, 0x4f7A4, 0x37, 14 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_EXTRAS[] =
{
    { "Ending Transformation", 0x4f924, 0x4f944, 0x37 },
};

// Note that since this is eleventy palettes, the code is substituting the default Megaman sprite when 0xff is supplied.  
// To unwind that we would want to specify the correct sprites to use everywhere.  MM is 0x1C .
const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_P1[] =
{
    { "Megaman P1", 0x48f84, 0x48fa4, 0x1c },
    { "P1 Rush/Eddie", 0x48fa4, 0x48fc4, 0x1c, 0x0C },
    { "P1 Beat", 0x48fc4, 0x48fe4, 0x1C, 0x2 },

    { "P1 Hair", 0x4c044, 0x4c064, 0x1C, 0x26 }, // 09
    { "P1 Teleport / Death Animation", 0x4c064, 0x4c084, 0x1C, 0x0B }, // 0A

    { "P1 Intro 1", 0x4c084, 0x4c0a4, 0x1c }, // 0B
    { "P1 Intro 2", 0x4c0a4, 0x4c0c4, 0x1c },
    { "P1 Intro 3", 0x4c0c4, 0x4c0e4, 0x1c },
    { "P1 Intro 4", 0x4c0e4, 0x4c104, 0x1c },
    { "P1 Intro 5", 0x4c104, 0x4c124, 0x1c },
    { "P1 Intro 6", 0x4c124, 0x4c144, 0x1c },
    { "P1 Intro 7", 0x4c144, 0x4c164, 0x1c },
    { "P1 Intro 8", 0x4c164, 0x4c184, 0x1c },
    { "P1 Intro 9", 0x4c184, 0x4c1a4, 0x1c },

    { "P1 Rush 1", 0x4c1a4, 0x4c1c4, 0x1c, 1 }, // 14
    { "P1 Rush 2", 0x4c1c4, 0x4c1e4, 0x1c, 1 },
    { "P1 Rush 3", 0x4c1e4, 0x4c204, 0x1c, 1 },
    { "P1 Rush 4", 0x4c204, 0x4c224, 0x1c, 1 },
    { "P1 Rush 5", 0x4c224, 0x4c244, 0x1c, 1 },
    { "P1 Rush 6", 0x4c244, 0x4c264, 0x1c, 1 },
    { "P1 Rush 7", 0x4c264, 0x4c284, 0x1c, 1 },
    { "P1 Rush 8", 0x4c284, 0x4c2a4, 0x1c, 1 },
    { "P1 Rush 9", 0x4c2a4, 0x4c2c4, 0x1c, 1 },

    { "P1 Beat 1", 0x4c2c4, 0x4c2e4, 0x1C, 0x2 }, // 1D
    { "P1 Beat 2", 0x4c2e4, 0x4c304, 0x1C, 0x2 },
    { "P1 Beat 3", 0x4c304, 0x4c324, 0x1C, 0x2 },
    { "P1 Beat 4", 0x4c324, 0x4c344, 0x1C, 0x2 },
    { "P1 Beat 5", 0x4c344, 0x4c364, 0x1C, 0x2 },
    { "P1 Beat 6", 0x4c364, 0x4c384, 0x1C, 0x2 },
    { "P1 Beat 7", 0x4c384, 0x4c3a4, 0x1C, 0x2 },
    { "P1 Beat 8", 0x4c3a4, 0x4c3c4, 0x1C, 0x2 },
    { "P1 Beat 9", 0x4c3c4, 0x4c3e4, 0x1C, 0x2 },

    { "P1 Beat Plane 1", 0x4c3e4, 0x4c404, 0x1c, 0x24 }, // 26
    { "P1 Beat Plane 2", 0x4c404, 0x4c424, 0x1c, 0x24 },
    { "P1 Beat Plane 3", 0x4c424, 0x4c444, 0x1c, 0x24 },
    { "P1 Beat Plane 4", 0x4c444, 0x4c464, 0x1c, 0x24 },
    { "P1 Beat Plane 5", 0x4c464, 0x4c484, 0x1c, 0x24 },
    { "P1 Beat Plane 6", 0x4c484, 0x4c4a4, 0x1c, 0x24 },
    { "P1 Beat Plane 7", 0x4c4a4, 0x4c4c4, 0x1c, 0x24 },
    { "P1 Beat Plane 8", 0x4c4c4, 0x4c4e4, 0x1c, 0x24 },
    { "P1 Beat Plane 9", 0x4c4e4, 0x4c504, 0x1c, 0x24 },

    { "P1 Charged HP 1", 0x4c504, 0x4c524, 0x1c }, // 2F
    { "P1 Charged HP 2", 0x4c524, 0x4c544, 0x1c },
    { "P1 Charged HP 3", 0x4c544, 0x4c564, 0x1c },
    { "P1 Charged HP 4", 0x4c564, 0x4c584, 0x1c },
    { "P1 Charged HP 5", 0x4c584, 0x4c5a4, 0x1c },
    { "P1 Charged HP 6", 0x4c5a4, 0x4c5c4, 0x1c },
    { "P1 Charged HP 7", 0x4c5c4, 0x4c5e4, 0x1c },
    { "P1 Charged HP 8", 0x4c5e4, 0x4c604, 0x1c },
    { "P1 Charged HP 9", 0x4c604, 0x4c624, 0x1c },

    { "P1 Rush Drill 1", 0x4c624, 0x4c644, 0x1D, 0x0B, true }, // 38
    { "P1 Rush Drill 2", 0x4c644, 0x4c664, 0x1D, 0x0B, true },
    { "P1 Rush Drill 3", 0x4c664, 0x4c684, 0x1D, 0x0B, true },
    { "P1 Rush Drill 4", 0x4c684, 0x4c6a4, 0x1D, 0x0B, true },
    { "P1 Rush Drill 5", 0x4c6a4, 0x4c6c4, 0x1D, 0x0B, true },
    { "P1 Rush Drill 6", 0x4c6c4, 0x4c6e4, 0x1D, 0x0B, true },
    { "P1 Rush Drill 7", 0x4c6e4, 0x4c704, 0x1D, 0x0B, true },
    { "P1 Rush Drill 8", 0x4c704, 0x4c724, 0x1D, 0x0B, true },
    { "P1 Rush Drill 9", 0x4c724, 0x4c744, 0x1D, 0x0B },

    { "P1 Rush Drill Metal 1", 0x4c9e4 + 0x0, 0x4c9e4 + 0x20, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 2", 0x4c9e4 + 0x20, 0x4c9e4 + 0x40, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 3", 0x4c9e4 + 0x40, 0x4c9e4 + 0x060, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 4", 0x4c9e4 + 0x060, 0x4c9e4 + 0x080, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 5", 0x4c9e4 + 0x080, 0x4c9e4 + 0x0A0, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 6", 0x4c9e4 + 0x0A0, 0x4c9e4 + 0x0C0, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 7", 0x4c9e4 + 0x0C0, 0x4c9e4 + 0x0E0, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 8", 0x4c9e4 + 0x0E0, 0x4c9e4 + 0x100, 0x1D, 0x0C },

    { "P1 Teleport Intro", 0x4c744, 0x4c764, 0x1C, 0x0D }, // 41
    { "P1 Dr Light", 0x4c764, 0x4c784, 0x1c, 0x25 }, // 42

    { "P1 Hyper Megaman Armor 1", 0x4c784, 0x4c7a4, 0x1C, 0x27, true }, // 43
    { "P1 Hyper Megaman Armor 2", 0x4c7a4, 0x4c7c4, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 3", 0x4c7c4, 0x4c7e4, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 4", 0x4c7e4, 0x4c804, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 5", 0x4c804, 0x4c824, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 6", 0x4c824, 0x4c844, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 7", 0x4c844, 0x4c864, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 8", 0x4c864, 0x4c884, 0x1C, 0x27, true },
    { "P1 Hyper Megaman Armor 9", 0x4c884, 0x4c8a4, 0x1C, 0x27, true },

    { "P1 Hyper Megaman 1", 0x4c8a4, 0x4c8c4, 0x1c, 0x28 }, // 4C
    { "P1 Hyper Megaman 2", 0x4c8c4, 0x4c8e4, 0x1c, 0x28 },
    { "P1 Hyper Megaman 3", 0x4c8e4, 0x4c904, 0x1c, 0x28 },
    { "P1 Hyper Megaman 4", 0x4c904, 0x4c924, 0x1c, 0x28 },
    { "P1 Hyper Megaman 5", 0x4c924, 0x4c944, 0x1c, 0x28 },
    { "P1 Hyper Megaman 6", 0x4c944, 0x4c964, 0x1c, 0x28 },
    { "P1 Hyper Megaman 7", 0x4c964, 0x4c984, 0x1c, 0x28 },
    { "P1 Hyper Megaman 8", 0x4c984, 0x4c9a4, 0x1c, 0x28 },
    { "P1 Hyper Megaman 9", 0x4c9a4, 0x4c9c4, 0x1c, 0x28 },

    { "P1 Hyper Megaman Missiles", 0x4c9c4, 0x4c9e4, 0x1C, 0x29 }, // 55


    { "P1 Roll Win Pose", 0x4cae4, 0x4cb04, 0x1d }, // 5E
    { "P1 Magnetic Megaman", 0x4cb04, 0x4cb24, 0x1c }, // 5F
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_P2[] =
{
    { "Megaman P2", 0x48fe4, 0x49004, 0x1c },
    { "P2 Rush/Eddie", 0x49004, 0x49024, 0x1c, 0x0C },
    { "P2 Beat", 0x49024, 0x49044, 0x1C, 0x2 },

    { "P2 Hair", 0x4cb24, 0x4cb44, 0x1C, 0x26 },
    { "P2 Teleport Intro / Death Animation", 0x4cb44, 0x4cb64, 0x1C, 0x0B },

    { "P2 Intro 1", 0x4cb64, 0x4cb84, 0x1c },
    { "P2 Intro 2", 0x4cb84, 0x4cba4, 0x1c },
    { "P2 Intro 3", 0x4cba4, 0x4cbc4, 0x1c },
    { "P2 Intro 4", 0x4cbc4, 0x4cbe4, 0x1c },
    { "P2 Intro 5", 0x4cbe4, 0x4cc04, 0x1c },
    { "P2 Intro 6", 0x4cc04, 0x4cc24, 0x1c },
    { "P2 Intro 7", 0x4cc24, 0x4cc44, 0x1c },
    { "P2 Intro 8", 0x4cc44, 0x4cc64, 0x1c },
    { "P2 Intro 9", 0x4cc64, 0x4cc84, 0x1c },

    { "P2 Rush 1", 0x4cc84, 0x4cca4, 0x1c, 1 },
    { "P2 Rush 2", 0x4cca4, 0x4ccc4, 0x1c, 1 },
    { "P2 Rush 3", 0x4ccc4, 0x4cce4, 0x1c, 1 },
    { "P2 Rush 4", 0x4cce4, 0x4cd04, 0x1c, 1 },
    { "P2 Rush 5", 0x4cd04, 0x4cd24, 0x1c, 1 },
    { "P2 Rush 6", 0x4cd24, 0x4cd44, 0x1c, 1 },
    { "P2 Rush 7", 0x4cd44, 0x4cd64, 0x1c, 1 },
    { "P2 Rush 8", 0x4cd64, 0x4cd84, 0x1c, 1 },
    { "P2 Rush 9", 0x4cd84, 0x4cda4, 0x1c, 1 },

    { "P2 Beat 1", 0x4cda4, 0x4cdc4, 0x1C, 0x2 },
    { "P2 Beat 2", 0x4cdc4, 0x4cde4, 0x1C, 0x2 },
    { "P2 Beat 3", 0x4cde4, 0x4ce04, 0x1C, 0x2 },
    { "P2 Beat 4", 0x4ce04, 0x4ce24, 0x1C, 0x2 },
    { "P2 Beat 5", 0x4ce24, 0x4ce44, 0x1C, 0x2 },
    { "P2 Beat 6", 0x4ce44, 0x4ce64, 0x1C, 0x2 },
    { "P2 Beat 7", 0x4ce64, 0x4ce84, 0x1C, 0x2 },
    { "P2 Beat 8", 0x4ce84, 0x4cea4, 0x1C, 0x2 },
    { "P2 Beat 9", 0x4cea4, 0x4cec4, 0x1C, 0x2 },

    { "P2 Beat Plane 1", 0x4cec4, 0x4cee4, 0x1c, 0x24 },
    { "P2 Beat Plane 2", 0x4cee4, 0x4cf04, 0x1c, 0x24 },
    { "P2 Beat Plane 3", 0x4cf04, 0x4cf24, 0x1c, 0x24 },
    { "P2 Beat Plane 4", 0x4cf24, 0x4cf44, 0x1c, 0x24 },
    { "P2 Beat Plane 5", 0x4cf44, 0x4cf64, 0x1c, 0x24 },
    { "P2 Beat Plane 6", 0x4cf64, 0x4cf84, 0x1c, 0x24 },
    { "P2 Beat Plane 7", 0x4cf84, 0x4cfa4, 0x1c, 0x24 },
    { "P2 Beat Plane 8", 0x4cfa4, 0x4cfc4, 0x1c, 0x24 },
    { "P2 Beat Plane 9", 0x4cfc4, 0x4cfe4, 0x1c, 0x24 },

    { "P2 Charged HP 1", 0x4cfe4, 0x4d004, 0x1c },
    { "P2 Charged HP 2", 0x4d004, 0x4d024, 0x1c },
    { "P2 Charged HP 3", 0x4d024, 0x4d044, 0x1c },
    { "P2 Charged HP 4", 0x4d044, 0x4d064, 0x1c },
    { "P2 Charged HP 5", 0x4d064, 0x4d084, 0x1c },
    { "P2 Charged HP 6", 0x4d084, 0x4d0a4, 0x1c },
    { "P2 Charged HP 7", 0x4d0a4, 0x4d0c4, 0x1c },
    { "P2 Charged HP 8", 0x4d0c4, 0x4d0e4, 0x1c },
    { "P2 Charged HP 9", 0x4d0e4, 0x4d104, 0x1c },

    { "P2 Rush Drill 1", 0x4d104, 0x4d124, 0x1D, 0x0B, true },
    { "P2 Rush Drill 2", 0x4d124, 0x4d144, 0x1D, 0x0B, true },
    { "P2 Rush Drill 3", 0x4d144, 0x4d164, 0x1D, 0x0B, true },
    { "P2 Rush Drill 4", 0x4d164, 0x4d184, 0x1D, 0x0B, true },
    { "P2 Rush Drill 5", 0x4d184, 0x4d1a4, 0x1D, 0x0B, true },
    { "P2 Rush Drill 6", 0x4d1a4, 0x4d1c4, 0x1D, 0x0B, true },
    { "P2 Rush Drill 7", 0x4d1c4, 0x4d1e4, 0x1D, 0x0B, true },
    { "P2 Rush Drill 8", 0x4d1e4, 0x4d204, 0x1D, 0x0B, true },
    { "P2 Rush Drill 9", 0x4d204, 0x4d224, 0x1D, 0x0B }, // 97

    // Presented out of order because they are associated
    { "P2 Rush Drill Metal 1", 0x4d4c4 + 0x0, 0x4d4c4 + 0x20, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 2", 0x4d4c4 + 0x20, 0x4d4c4 + 0x40, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 3", 0x4d4c4 + 0x40, 0x4d4c4 + 0x060, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 4", 0x4d4c4 + 0x060, 0x4d4c4 + 0x080, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 5", 0x4d4c4 + 0x080, 0x4d4c4 + 0x0A0, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 6", 0x4d4c4 + 0x0A0, 0x4d4c4 + 0x0C0, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 7", 0x4d4c4 + 0x0C0, 0x4d4c4 + 0x0E0, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 8", 0x4d4c4 + 0x0E0, 0x4d4c4 + 0x100, 0x1D, 0x0C },


    { "P2 Teleport Intro", 0x4d224, 0x4d244, 0x1C, 0x0D },
    { "P2 Dr Light", 0x4d244, 0x4d264, 0x1c, 0x25 },

    { "P2 Hyper Megaman Armor 1", 0x4d264, 0x4d284, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 2", 0x4d284, 0x4d2a4, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 3", 0x4d2a4, 0x4d2c4, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 4", 0x4d2c4, 0x4d2e4, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 5", 0x4d2e4, 0x4d304, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 6", 0x4d304, 0x4d324, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 7", 0x4d324, 0x4d344, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 8", 0x4d344, 0x4d364, 0x1C, 0x27, true },
    { "P2 Hyper Megaman Armor 9", 0x4d364, 0x4d384, 0x1C, 0x27, true }, // a2

    { "P2 Hyper Megaman 1", 0x4d384, 0x4d3a4, 0x1C, 0x28 },
    { "P2 Hyper Megaman 2", 0x4d3a4, 0x4d3c4, 0x1C, 0x28 },
    { "P2 Hyper Megaman 3", 0x4d3c4, 0x4d3e4, 0x1C, 0x28 },
    { "P2 Hyper Megaman 4", 0x4d3e4, 0x4d404, 0x1C, 0x28 },
    { "P2 Hyper Megaman 5", 0x4d404, 0x4d424, 0x1C, 0x28 },
    { "P2 Hyper Megaman 6", 0x4d424, 0x4d444, 0x1C, 0x28 },
    { "P2 Hyper Megaman 7", 0x4d444, 0x4d464, 0x1C, 0x28 },
    { "P2 Hyper Megaman 8", 0x4d464, 0x4d484, 0x1C, 0x28 },
    { "P2 Hyper Megaman 9", 0x4d484, 0x4d4a4, 0x1C, 0x28 }, // ab

    { "P2 Hyper Megaman Missiles", 0x4d4a4, 0x4d4c4, 0x1C, 0x29 }, // ac

    { "P2 Roll Win Pose", 0x4d5c4, 0x4d5e4, 0x1d },
    { "P2 Magnetic Megaman", 0x4d5e4, 0x4d604, 0x1c },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_EXTRAS[] =
{
    // { "Megaman FX", 0x590E4, 0x59144 }, ?

    // This contains unpaired or unconfirmed palettes
    { "P1 Megaman Extra", 0x4e0a4, 0x4e0c4, 0x1c },
    { "P1 Magnetic Megaman", 0x4e0c4, 0x4e0e4, 0x1c },

    { "P1 ? 1", 0x4de64, 0x4de84, 0x1c },
    { "P1 ? 2", 0x4de84, 0x4dea4, 0x1c },
    { "P1 ? 3", 0x4dea4, 0x4dec4, 0x1c },
    { "P1 ? 4", 0x4dec4, 0x4dee4, 0x1c },
    { "P1 ? 5", 0x4dee4, 0x4df04, 0x1c },
    { "P1 ? 6", 0x4df04, 0x4df24, 0x1c },
    { "P1 ? 7", 0x4df24, 0x4df44, 0x1c },
    { "P1 ? 8", 0x4df44, 0x4df64, 0x1c },
    { "P1 ? 9", 0x4df64, 0x4df84, 0x1c },

    { "P2 ? 1", 0x4e944, 0x4e964, 0x1c },
    { "P2 ? 2", 0x4e964, 0x4e984, 0x1c },
    { "P2 ? 3", 0x4e984, 0x4e9a4, 0x1c },
    { "P2 ? 4", 0x4e9a4, 0x4e9c4, 0x1c },
    { "P2 ? 5", 0x4e9c4, 0x4e9e4, 0x1c },
    { "P2 ? 6", 0x4e9e4, 0x4ea04, 0x1c },
    { "P2 ? 7", 0x4ea04, 0x4ea24, 0x1c },
    { "P2 ? 8", 0x4ea24, 0x4ea44, 0x1c },
    { "P2 ? 9", 0x4ea44, 0x4ea64, 0x1c }, //54ish
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_P1[] =
{
    { "P1 Color", 0x48704, 0x48724, 0x1d },
    { "P1 Rush/Eddie", 0x48724, 0x48744, 0x1c, 0x0C },
    { "P1 Beat", 0x48744, 0x48764, 0x1C, 0x2 },

    { "P1 Megaman Hair", 0x4d604, 0x4d624, 0x1C, 0x26 },
    { "P1 Intro / Death Animation", 0x4d624, 0x4d644, 0x1C, 0x0B },

    { "P1 Intro 1", 0x4d644, 0x4d664, 0x1d },
    { "P1 Intro 2", 0x4d664, 0x4d684, 0x1d },
    { "P1 Intro 3", 0x4d684, 0x4d6a4, 0x1d },
    { "P1 Intro 4", 0x4d6a4, 0x4d6c4, 0x1d },
    { "P1 Intro 5", 0x4d6c4, 0x4d6e4, 0x1d },
    { "P1 Intro 6", 0x4d6e4, 0x4d704, 0x1d },
    { "P1 Intro 7", 0x4d704, 0x4d724, 0x1d },
    { "P1 Intro 8", 0x4d724, 0x4d744, 0x1d },
    { "P1 Intro 9", 0x4d744, 0x4d764, 0x1d },

    { "P1 Rush/Eddie 1", 0x4d764, 0x4d784, 0x1c, 1 },
    { "P1 Rush/Eddie 2", 0x4d784, 0x4d7a4, 0x1c, 1 },
    { "P1 Rush/Eddie 3", 0x4d7a4, 0x4d7c4, 0x1c, 1 },
    { "P1 Rush/Eddie 4", 0x4d7c4, 0x4d7e4, 0x1c, 1 },
    { "P1 Rush/Eddie 5", 0x4d7e4, 0x4d804, 0x1c, 1 },
    { "P1 Rush/Eddie 6", 0x4d804, 0x4d824, 0x1c, 1 },
    { "P1 Rush/Eddie 7", 0x4d824, 0x4d844, 0x1c, 1 },
    { "P1 Rush/Eddie 8", 0x4d844, 0x4d864, 0x1c, 1 },
    { "P1 Rush/Eddie 9", 0x4d864, 0x4d884, 0x1c, 1 },

    { "P1 Beat 1", 0x4d884, 0x4d8a4, 0x1C, 0x2 },
    { "P1 Beat 2", 0x4d8a4, 0x4d8c4, 0x1C, 0x2 },
    { "P1 Beat 3", 0x4d8c4, 0x4d8e4, 0x1C, 0x2 },
    { "P1 Beat 4", 0x4d8e4, 0x4d904, 0x1C, 0x2 },
    { "P1 Beat 5", 0x4d904, 0x4d924, 0x1C, 0x2 },
    { "P1 Beat 6", 0x4d924, 0x4d944, 0x1C, 0x2 },
    { "P1 Beat 7", 0x4d944, 0x4d964, 0x1C, 0x2 },
    { "P1 Beat 8", 0x4d964, 0x4d984, 0x1C, 0x2 },
    { "P1 Beat 9", 0x4d984, 0x4d9a4, 0x1C, 0x2 },

    { "P1 Beat Plane 1", 0x4d9a4, 0x4d9c4, 0x1C, 0x24 },
    { "P1 Beat Plane 2", 0x4d9c4, 0x4d9e4, 0x1C, 0x24 },
    { "P1 Beat Plane 3", 0x4d9e4, 0x4da04, 0x1C, 0x24 },
    { "P1 Beat Plane 4", 0x4da04, 0x4da24, 0x1C, 0x24 },
    { "P1 Beat Plane 5", 0x4da24, 0x4da44, 0x1C, 0x24 },
    { "P1 Beat Plane 6", 0x4da44, 0x4da64, 0x1C, 0x24 },
    { "P1 Beat Plane 7", 0x4da64, 0x4da84, 0x1C, 0x24 },
    { "P1 Beat Plane 8", 0x4da84, 0x4daa4, 0x1C, 0x24 },
    { "P1 Beat Plane 9", 0x4daa4, 0x4dac4, 0x1C, 0x24 },

    { "P1 Rush Drill 1", 0x4dbe4, 0x4dc04, 0x1D, 0x0B, true },
    { "P1 Rush Drill 2", 0x4dc04, 0x4dc24, 0x1D, 0x0B, true },
    { "P1 Rush Drill 3", 0x4dc24, 0x4dc44, 0x1D, 0x0B, true },
    { "P1 Rush Drill 4", 0x4dc44, 0x4dc64, 0x1D, 0x0B, true },
    { "P1 Rush Drill 5", 0x4dc64, 0x4dc84, 0x1D, 0x0B, true },
    { "P1 Rush Drill 6", 0x4dc84, 0x4dca4, 0x1D, 0x0B, true },
    { "P1 Rush Drill 7", 0x4dca4, 0x4dcc4, 0x1D, 0x0B, true },
    { "P1 Rush Drill 8", 0x4dcc4, 0x4dce4, 0x1D, 0x0B, true },
    { "P1 Rush Drill 9", 0x4dce4, 0x4dd04, 0x1D, 0x0B },

    { "P1 Rush Drill Metal 1", 0x4dfa4, 0x4dfc4, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 2", 0x4dfc4, 0x4dfe4, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 3", 0x4dfe4, 0x4e004, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 4", 0x4e004, 0x4e024, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 5", 0x4e024, 0x4e044, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 6", 0x4e044, 0x4e064, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 7", 0x4e064, 0x4e084, 0x1D, 0x0C },
    { "P1 Rush Drill Metal 8", 0x4e084, 0x4e0a4, 0x1D, 0x0C },

    { "P1 Teleport Intro", 0x4dd04, 0x4dd24, 0x1C, 0x0D },
    { "P1 Dr Light", 0x4dd24, 0x4dd44, 0x1c, 0x25 },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_P2[] =
{
    { "P2 Color", 0x48764, 0x48784, 0x1d },
    { "P2 Rush/Eddie", 0x48784, 0x487a4, 0x1c, 0x0C },
    { "P2 Beat", 0x487a4, 0x487c4, 0x1C, 0x2 }, // 09 : these numbers align to the mvc2 extra ids as identified in the Palette Variant Full spreadsheet

    { "P2 Megaman Hair", 0x4e0e4, 0x4e104, 0x1C, 0x26 },
    { "P2 Intro / Death Animation", 0x4e104, 0x4e124, 0x1C, 0x0B },

    { "P2 Intro 1", 0x4e124, 0x4e144, 0x1d },
    { "P2 Intro 2", 0x4e144, 0x4e164, 0x1d },
    { "P2 Intro 3", 0x4e164, 0x4e184, 0x1d },
    { "P2 Intro 4", 0x4e184, 0x4e1a4, 0x1d },
    { "P2 Intro 5", 0x4e1a4, 0x4e1c4, 0x1d },
    { "P2 Intro 6", 0x4e1c4, 0x4e1e4, 0x1d },
    { "P2 Intro 7", 0x4e1e4, 0x4e204, 0x1d },
    { "P2 Intro 8", 0x4e204, 0x4e224, 0x1d },
    { "P2 Intro 9", 0x4e224, 0x4e244, 0x1d },

    { "P2 Rush/Eddie 1", 0x4e244, 0x4e264, 0x1c, 1 },
    { "P2 Rush/Eddie 2", 0x4e264, 0x4e284, 0x1c, 1 },
    { "P2 Rush/Eddie 3", 0x4e284, 0x4e2a4, 0x1c, 1 },
    { "P2 Rush/Eddie 4", 0x4e2a4, 0x4e2c4, 0x1c, 1 },
    { "P2 Rush/Eddie 5", 0x4e2c4, 0x4e2e4, 0x1c, 1 },
    { "P2 Rush/Eddie 6", 0x4e2e4, 0x4e304, 0x1c, 1 },
    { "P2 Rush/Eddie 7", 0x4e304, 0x4e324, 0x1c, 1 },
    { "P2 Rush/Eddie 8", 0x4e324, 0x4e344, 0x1c, 1 },
    { "P2 Rush/Eddie 9", 0x4e344, 0x4e364, 0x1c, 1 },

    { "P2 Beat 1", 0x4e364, 0x4e384, 0x1C, 0x2 },
    { "P2 Beat 2", 0x4e384, 0x4e3a4, 0x1C, 0x2 },
    { "P2 Beat 3", 0x4e3a4, 0x4e3c4, 0x1C, 0x2 },
    { "P2 Beat 4", 0x4e3c4, 0x4e3e4, 0x1C, 0x2 },
    { "P2 Beat 5", 0x4e3e4, 0x4e404, 0x1C, 0x2 },
    { "P2 Beat 6", 0x4e404, 0x4e424, 0x1C, 0x2 },
    { "P2 Beat 7", 0x4e424, 0x4e444, 0x1C, 0x2 },
    { "P2 Beat 8", 0x4e444, 0x4e464, 0x1C, 0x2 },
    { "P2 Beat 9", 0x4e464, 0x4e484, 0x1C, 0x2 },

    { "P2 Beat Plane 1", 0x4e484, 0x4e4a4, 0x1C, 0x24 },
    { "P2 Beat Plane 2", 0x4e4a4, 0x4e4c4, 0x1C, 0x24 },
    { "P2 Beat Plane 3", 0x4e4c4, 0x4e4e4, 0x1C, 0x24 },
    { "P2 Beat Plane 4", 0x4e4e4, 0x4e504, 0x1C, 0x24 },
    { "P2 Beat Plane 5", 0x4e504, 0x4e524, 0x1C, 0x24 },
    { "P2 Beat Plane 6", 0x4e524, 0x4e544, 0x1C, 0x24 },
    { "P2 Beat Plane 7", 0x4e544, 0x4e564, 0x1C, 0x24 },
    { "P2 Beat Plane 8", 0x4e564, 0x4e584, 0x1C, 0x24 },
    { "P2 Beat Plane 9", 0x4e584, 0x4e5a4, 0x1C, 0x24 },

    { "P2 Rush Drill 1", 0x4e6c4, 0x4e6e4, 0x1D, 0x0B, true },
    { "P2 Rush Drill 2", 0x4e6e4, 0x4e704, 0x1D, 0x0B, true },
    { "P2 Rush Drill 3", 0x4e704, 0x4e724, 0x1D, 0x0B, true },
    { "P2 Rush Drill 4", 0x4e724, 0x4e744, 0x1D, 0x0B, true },
    { "P2 Rush Drill 5", 0x4e744, 0x4e764, 0x1D, 0x0B, true },
    { "P2 Rush Drill 6", 0x4e764, 0x4e784, 0x1D, 0x0B, true },
    { "P2 Rush Drill 7", 0x4e784, 0x4e7a4, 0x1D, 0x0B, true },
    { "P2 Rush Drill 8", 0x4e7a4, 0x4e7c4, 0x1D, 0x0B, true },
    { "P2 Rush Drill 9", 0x4e7c4, 0x4e7e4, 0x1D, 0x0B },

    { "P2 Rush Drill Metal 1", 0x4ea84, 0x4eaa4, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 2", 0x4eaa4, 0x4eac4, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 3", 0x4eac4, 0x4eae4, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 4", 0x4eae4, 0x4eb04, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 5", 0x4eb04, 0x4eb24, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 6", 0x4eb24, 0x4eb44, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 7", 0x4eb44, 0x4eb64, 0x1D, 0x0C },
    { "P2 Rush Drill Metal 8", 0x4eb64, 0x4eb84, 0x1D, 0x0C },

    { "P2 Teleport Intro", 0x4e7e4, 0x4e804, 0x1C, 0x0D },
    { "P2 Dr Light", 0x4e804, 0x4e824, 0x1c, 0x25 },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_EXTRAS[] =
{
    { "P1 Charging Roll 1", 0x4dac4, 0x4dae4, 0x1d },
    { "P1 Charging Roll 2", 0x4dae4, 0x4db04, 0x1d },
    { "P1 Charging Roll 3", 0x4db04, 0x4db24, 0x1d },
    { "P1 Charging Roll 4", 0x4db24, 0x4db44, 0x1d },
    { "P1 Charging Roll 5", 0x4db44, 0x4db64, 0x1d },
    { "P1 Charging Roll 6", 0x4db64, 0x4db84, 0x1d },
    { "P1 Charging Roll 7", 0x4db84, 0x4dba4, 0x1d },
    { "P1 Charging Roll 8", 0x4dba4, 0x4dbc4, 0x1d },
    { "P1 Charging Roll 9", 0x4dbc4, 0x4dbe4, 0x1d },

    { "P1 Hyper Roll Armor 1", 0x4dd44, 0x4dd64 },
    { "P1 Hyper Roll Armor 2", 0x4dd64, 0x4dd84 },
    { "P1 Hyper Roll Armor 3", 0x4dd84, 0x4dda4 },
    { "P1 Hyper Roll Armor 4", 0x4dda4, 0x4ddc4 },
    { "P1 Hyper Roll Armor 5", 0x4ddc4, 0x4dde4 },
    { "P1 Hyper Roll Armor 6", 0x4dde4, 0x4de04 },
    { "P1 Hyper Roll Armor 7", 0x4de04, 0x4de24 },
    { "P1 Hyper Roll Armor 8", 0x4de24, 0x4de44 },
    { "P1 Hyper Roll Armor 9", 0x4de44, 0x4de64 },

    // 0x4DE64-0x4DF64 are Megaman

    { "P1 Hyper Roll Missiles", 0x4df84, 0x4dfa4 },

    { "P2 Charging Roll 1", 0x4e5a4, 0x4e5c4, 0x1d },
    { "P2 Charging Roll 2", 0x4e5c4, 0x4e5e4, 0x1d },
    { "P2 Charging Roll 3", 0x4e5e4, 0x4e604, 0x1d },
    { "P2 Charging Roll 4", 0x4e604, 0x4e624, 0x1d },
    { "P2 Charging Roll 5", 0x4e624, 0x4e644, 0x1d },
    { "P2 Charging Roll 6", 0x4e644, 0x4e664, 0x1d },
    { "P2 Charging Roll 7", 0x4e664, 0x4e684, 0x1d },
    { "P2 Charging Roll 8", 0x4e684, 0x4e6a4, 0x1d },
    { "P2 Charging Roll 9", 0x4e6a4, 0x4e6c4, 0x1d },

    { "P2 Hyper Roll Armor 1", 0x4e824, 0x4e844 },
    { "P2 Hyper Roll Armor 2", 0x4e844, 0x4e864 },
    { "P2 Hyper Roll Armor 3", 0x4e864, 0x4e884 },
    { "P2 Hyper Roll Armor 4", 0x4e884, 0x4e8a4 },
    { "P2 Hyper Roll Armor 5", 0x4e8a4, 0x4e8c4 },
    { "P2 Hyper Roll Armor 6", 0x4e8c4, 0x4e8e4 },
    { "P2 Hyper Roll Armor 7", 0x4e8e4, 0x4e904 },
    { "P2 Hyper Roll Armor 8", 0x4e904, 0x4e924 },
    { "P2 Hyper Roll Armor 9", 0x4e924, 0x4e944 },

    { "P2 Hyper Roll Missiles", 0x4ea64, 0x4ea84 },

    { "P2 Megaman", 0x4eb84, 0x4eba4, 0x1c },
    { "P2 Magnetic Shockwave Megaman", 0x4eba4, 0x4ebc4, 0x1c },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PALETTES[] =
{
    { "Charles Intro", 0x49084, 0x490a4, 0x3B, 0x1 },
    { "Charles (Defeated)", 0x4C004, 0x4C024, 0x3B, 0x07 },
    { "Body (1st Form)", 0x49044, 0x49064, 0x3B },
    { "Main Body (2nd Form)", 0x38DFA, 0x38E1A, 0x3B, 0x3 },
    { "Main Body & Arm (2nd Form)", 0x4BBA4, 0x4BBC4, 0x3B, 0x4 },
    { "Head / Neck  (2nd Form)", 0x4BFA4, 0x4BFC4, 0x3B, 0x0F },
    { "Main Body Glimmer 1", 0x4BBC4, 0x4BBE4, 0x3B },
    { "Main Body Glimmer 2", 0x4BBE4, 0x4BC04, 0x3B },
    { "Main Body Glimmer 3", 0x4BC04, 0x4BC24, 0x3B },
    { "Teleport 1", 0x4BC64, 0x4BC84, 0x3B },
    { "Teleport 2", 0x4BC84, 0x4BCA4, 0x3B },
    { "Body Ram (Body)", 0x4BD24, 0x4BD44, 0x3B, 0x08, true },
    { "Body Ram (Effect)", 0x4BD44, 0x4BD64, 0x3B, 0x09 },
    { "Magnetic Shockwave", 0x4BC44, 0x4BC64, 0x3B, 0x06 },
    { "Magnetic Tempest", 0x4BCC4, 0x4BCE4, 0x3B, 0x0A },
    { "Hyper Grav", 0x4BCA4, 0x4BCC4, 0x3B, 0x5 },
    { "Sparkles", 0x49064, 0x49084, 0x3B, 0x2 },
    { "Bystander", 0x4BD64, 0x4BD84, 0x3B, 0x0B },
    { "Bystander 2", 0x4BD84, 0x4BDA4, 0x3B, 0x0B },
    { "Skull Pain 1", 0x4BE24, 0x4BE44, 0x3B, 0x0C },
    { "Skull Pain 2", 0x4BE44, 0x4BE64, 0x3B, 0x0C },
    { "Skull Pain 3", 0x4BE64, 0x4BE84, 0x3B, 0x0C },
    { "Mind Blast (StartUp)", 0x4BDC4, 0x4BDE4, 0x3B, 0x0D },
    { "Mind Blast (Beam 1, 1st Form)", 0x4BDE4, 0x4BE04, 0x3B, 0x0E },
    { "Mind Blast (Beam 2, 1st Form)",  0x4BE04, 0x4BE24, 0x3B, 0x0E },
    { "KO Orbs 1", 0x4BFC4, 0x4BFE4, 0x3B, 0x20 },
    { "KO Orbs 2", 0x4BFE4, 0x4C004, 0x3B, 0x20 },
    { "Onslaught Sentinel", 0x4BD04, 0x4BD24, 0x34 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_P1[] =
{
    { "P1 Color", 0x481c4, 0x481e4, 0x2E },
    { "P1 Proton Cannon", 0x481e4, 0x48204, 0x33, 1 },  // same sprites as iron man
    { "P1 Proton Laser", 0x48204, 0x48224, 0x33, 2 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_P2[] =
{
    { "P2 Color", 0x48224, 0x48244, 0x2E },
    { "P2 Proton Cannon", 0x48244, 0x48264, 0x33, 1 },
    { "P2 Proton Laser", 0x48264, 0x48284, 0x33, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_P1[] =
{
    { "P1 Color", 0x49224, 0x49244, 0x2E },
    { "P1 Proton Cannon", 0x49244, 0x49264, 0x33, 1 }, // same sprites as iron man
    { "P1 Proton Laser", 0x49264, 0x49284, 0x33, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_P2[] =
{
    { "P2 Color", 0x49284, 0x492a4, 0x2E },
    { "P2 Proton Cannon", 0x492a4, 0x492c4, 0x33, 1 },
    { "P2 Proton Laser", 0x492c4, 0x492e4, 0x33, 2 },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_P1[] =
{
    { "P1 Color", 0x48284, 0x482a4, 0x0b, 0, true },
    { "P1 Shield", 0x482a4, 0x482c4, 0x0b, 1 },
    { "P1 Charging Star", 0x482c4, 0x482e4, 0x0b, 2 },
    { "P1 Eagle", 0x591E4, 0x59204, 0x0B, 3 },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_P2[] =
{
    { "P2 Color", 0x482e4, 0x48304, 0x0b, 0, true },
    { "P2 Shield", 0x48304, 0x48324, 0x0b, 1 },
    { "P2 Charging Star", 0x48324, 0x48344, 0x0b, 2 },
    { "P2 Eagle", 0x59204, 0x59224, 0x0B, 3 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_P1[] =
{
    { "P1 Color", 0x48344, 0x48364, 0x0d },
    { "P1 Charge", 0x48364, 0x48384, 0x0d, 1 },
    { "P1 Gamma Quake", 0x48384, 0x483a4, 0x0d, 2 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_P2[] =
{
    { "P2 Color", 0x483a4, 0x483c4, 0x0d },
    { "P2 Charge", 0x483c4, 0x483e4, 0x0d, 1 },
    { "P2 Gamma Quake", 0x483e4, 0x48404, 0x0d, 2 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_EXTRAS[] =
{
    { "Hulk Armor P1+P2 Shared", 0x4F3A4, 0x4F3C4, 0x0d },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_P1[] =
{
    { "P1 Color", 0x49164, 0x49184, 0x0d },
    { "P1 Charge", 0x49184, 0x491a4, 0x0d, 1 },
    { "P1 Gamma Quake", 0x491a4, 0x491c4, 0x0d, 2 },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_P2[] =
{
    { "P2 Color", 0x491c4, 0x491e4, 0x0d },
    { "P2 Charge", 0x491e4, 0x49204, 0x0d, 1 },
    { "P2 Gamma Quake", 0x49204, 0x49224, 0x0d, 2 },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_P1[] =
{
    { "P1 Color", 0x48404, 0x48424, 0x07, 0, true },
    { "P1 Claws", 0x48424, 0x48444, 0x07, 1 },
    { "P1 Berserker FX", 0x48444, 0x48464, 0x07, 2 },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_P2[] =
{
    { "P2 Color", 0x48464, 0x48484, 0x07, 0, true },
    { "P2 Claws", 0x48484, 0x484a4, 0x07, 1 },
    { "P2 Berserker FX", 0x484a4, 0x484c4, 0x07, 2 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_P1[] =
{
    { "P1 Color", 0x48584, 0x485a4, 0x0e },
    { "P1 Taunt", 0x485a4, 0x485c4, 0x0e, 1 },
    { "P1 Web", 0x485c4, 0x485e4, 0x0e, 2 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_P2[] =
{
    { "P2 Color", 0x485e4, 0x48604, 0x0e },
    { "P2 Taunt", 0x48604, 0x48624, 0x0e, 1 },
    { "P2 Web", 0x48624, 0x48644, 0x0e, 2 },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_P1[] =
{
    { "P1 Color", 0x490a4, 0x490c4, 0x0e },
    { "P1 Taunt", 0x490c4, 0x490e4, 0x0e, 1 },
    { "P1 Web", 0x490e4, 0x49104, 0x0e, 2 },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_P2[] =
{
    { "P2 Color", 0x49104, 0x49124, 0x0e },
    { "P2 Taunt", 0x49124, 0x49144, 0x0e, 1 },
    { "P2 Web", 0x49144, 0x49164, 0x0e, 2 },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_P1[] =
{
    { "P1 Color", 0x48644, 0x48664, 0x0c },
    { "P1 Spotlight", 0x48664, 0x48684, 0x0C, 0x0C },
    { "P1 Web", 0x48684, 0x486a4, 0x0c, 2 },
    { "P1 Intro 1", 0x4B824, 0x4B844, 0x0C, 11 },
    { "P1 Intro 2", 0x4B844, 0x4B864, 0x0C, 11 },
    { "P1 Intro 3", 0x4B864, 0x4B884, 0x0C, 11 },
    { "P1 Intro 4", 0x4B884, 0x4B8A4, 0x0C, 11 },
    { "P1 Intro 5", 0x4B8A4, 0x4B8C4, 0x0C, 11 },
    { "P1 Intro 6", 0x4B8C4, 0x4B8E4, 0x0C, 11 },
    { "P1 Intro 7", 0x4B8E4, 0x4B904, 0x0C, 11 },
    { "P1 Intro 8", 0x4B904, 0x4B924, 0x0C, 11 },
    { "P1 Spiderlight 1", 0x4B924, 0x4B944, 0x0C, 12 },
    { "P1 Spiderlight 2", 0x4B944, 0x4B964, 0x0C, 13 },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_P2[] =
{
    { "P2 Color", 0x486a4, 0x486c4, 0x0c },
    { "P2 Spotlight", 0x486c4, 0x486e4, 0x0C, 0x0C },
    { "P2 Web", 0x486e4, 0x48704, 0x0c, 2 },

    { "P2 Intro 1", 0x4BA24, 0x4BA44, 0x0C, 11 },
    { "P2 Intro 2", 0x4BA44, 0x4BA64, 0x0C, 11 },
    { "P2 Intro 3", 0x4BA64, 0x4BA84, 0x0C, 11 },
    { "P2 Intro 4", 0x4BA84, 0x4BAA4, 0x0C, 11 },
    { "P2 Intro 5", 0x4BAA4, 0x4BAC4, 0x0C, 11 },
    { "P2 Intro 6", 0x4BAC4, 0x4BAE4, 0x0C, 11 },
    { "P2 Intro 7", 0x4BAE4, 0x4BB04, 0x0C, 11 },
    { "P2 Intro 8", 0x4BB04, 0x4BB24, 0x0C, 11 },
    { "P2 Spiderlight 1", 0x4BB24, 0x4BB44, 0x0C, 12 },
    { "P2 Spiderlight 2", 0x4BB44, 0x4BB64, 0x0C, 13 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_P1[] =
{
    { "P1 Color",  0x48884, 0x488a4, 0x38 },
    { "P1 Ninjas", 0x488a4, 0x488c4, 0x38, 1, true },
    { "P1 Hoover", 0x488c4, 0x488e4, 0x38, 2 },
    { "P1 Suit Intro", 0x4F304, 0x4F324, 0x38, 0x0F },
    { "P1 Taunt", 0x4F344, 0x4F364, 0x38, 14 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_P2[] =
{
    { "P2 Color",  0x488e4, 0x48904, 0x38 },
    { "P2 Ninjas", 0x48904, 0x48924, 0x38, 1, true },
    { "P2 Hoover", 0x48924, 0x48944, 0x38, 2 },
    { "P2 Suit Intro", 0x4F324, 0x4F344, 0x38, 0x0F },
    { "P2 Taunt", 0x4F364, 0x4F384, 0x38, 14 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_EXTRAS[] =
{
    { "Paint Rays 1", 0x4F264, 0x4F284, 0x38, 11 },
    { "Paint Rays 2", 0x4F284, 0x4F2A4, 0x38, 11 },
    { "Paint Rays 3", 0x4F2A4, 0x4F2C4, 0x38, 11 },
    { "Paint Rays 4", 0x4F2C4, 0x4F2E4, 0x38, 11 },
    { "Elect Grab", 0x4F2E4, 0x4F304, 0x38, 12 },
    { "Silhouette", 0x4F384, 0x4F3A4, 0x38, 13 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_P1[] =
{
    { "P1 Color", 0x48ec4, 0x48ee4, 0x3 },
    { "P1 Lilith", 0x48ee4, 0x48f04, 0x3, 1 },
    { "P1 Extra 2", 0x48f04, 0x48f24, 0x3, 2 },

    { "P1 Soul Eraser 1", 0x4edE4, 0x4ee04, 0x3, 11 },
    { "P1 Soul Eraser 2", 0x4ee04, 0x4ee24, 0x3, 11 },

    { "Morrigan Intro Pose", 0x4ee84, 0x4eeA4, 0x3, 13 },
    { "Lilith Join Pose", 0x4eeA4, 0x4eeC4, 0x3, 12 },
    { "Lilith Join Pose 2", 0x4eeC4, 0x4eEE4, 0x3, 12 },
    { "Morrigan Join Pose", 0x4eee4, 0x4ef04, 0x3, 13 },
    { "Morrigan Join Pose 2", 0x4ef04, 0x4ef24, 0x3, 13 },
    { "Morrigan Intro Frame 1", 0x4ef44, 0x4eF64, 0x3, 13 },
    { "Morrigan Intro Frame 2", 0x4ef64, 0x4eF84, 0x3, 13 },
    { "Morrigan Intro Frame 3", 0x4ef84, 0x4eFA4, 0x3, 13 },
    { "Morrigan Intro Frame 4", 0x4efA4, 0x4eFC4, 0x3, 13 },
   
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_P2[] =
{
    { "P2 Color", 0x48f24, 0x48f44, 0x3 },
    { "P2 Lilith", 0x48f44, 0x48f64, 0x3, 1 },
    { "P2 Extra 2", 0x48f64, 0x48f84, 0x3, 2 },

    { "P2 Soul Eraser 1", 0x4ee44, 0x4ee64, 0x3, 11 },
    { "P2 Soul Eraser 2", 0x4ee64, 0x4ee84, 0x3, 11 },

    { "Morrigan P2 Intro Pose", 0x4eFE4, 0x4f004, 0x3, 13 },
    { "Lilith P2 Join Pose", 0x4f004, 0x4f024, 0x3, 12 },
    { "Lilith P2 Join Pose 2", 0x4f024, 0x4f044, 0x3, 12 },
    { "Morrigan P2 Join Pose", 0x4f044, 0x4f064, 0x3, 13 },
    { "Morrigan P2 Join Pose", 0x4f064, 0x4f084, 0x3, 13 },
    { "Morrigan Intro Frame 1", 0x4f0A4, 0x4f0C4, 0x3, 13 },
    { "Morrigan Intro Frame 2", 0x4f0C4, 0x4f0E4, 0x3, 13 },
    { "Morrigan Intro Frame 3", 0x4f0E4, 0x4f104, 0x3, 13 },
    { "Morrigan Intro Frame 4", 0x4f104, 0x4f124, 0x3, 13 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_EXTRAS[] =
{
    // There isn't a direct p2 pair for this: ... ?
    { "P1 Taunt", 0x4efC4, 0x4eFE4, 0x3, 14 }, // This is Range 7 Palette IE9 in their doc
    { "Eternal Slumber Heart 1 (Shared)", 0x4f124, 0x4f144 },
    { "Eternal Slumber Heart 2 (Shared)", 0x4f144, 0x4f164 },

    { "Eternal Slumber XXX 1 (Shared)", 0x4f164, 0x4f184 },
    { "Eternal Slumber XXX 2 (Shared)", 0x4f184, 0x4f1A4 },
    { "Eternal Slumber XXX 3 (Shared)", 0x4f1A4, 0x4f1C4 },
    { "Eternal Slumber XXX 4 (Shared)", 0x4f1C4, 0x4f1E4 },
    { "Eternal Slumber XXX 5 (Shared)", 0x4f1E4, 0x4f204 },
    { "Eternal Slumber XXX 6 (Shared)", 0x4f204, 0x4f224 },
    { "Eternal Slumber XXX 7 (Shared)", 0x4f224, 0x4f244 },
    { "Eternal Slumber XXX 8 (Shared)", 0x4f244, 0x4f264 },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_P1[] =
{
    { "P1 Color", 0x493a4, 0x493c4, 0x3 },
    { "P1 Extra 1", 0x493c4, 0x493e4, 0x3, 1 },
    { "P1 Extra 2", 0x493e4, 0x49404, 0x3, 2 },
    { "P1 Floating Taunt Morrigan?", 0x4fcc4, 0x4fce4 },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_P2[] =
{
    { "P2 Color", 0x49404, 0x49424, 0x3 },
    { "P2 Extra 1", 0x49424, 0x49444, 0x3, 1 },
    { "P2 Extra 2", 0x49444, 0x49464, 0x3, 2 },
    { "P2 Floating Taunt Morrigan?", 0x4fce4, 0x4fd04 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_P1[] =
{
    { "P1 Color", 0x48e04, 0x48e24, 0x5 },
    { "P1 FX", 0x48e24, 0x48e44, 0x5, 1 },
    { "P1 Mech", 0x48e44, 0x48e64, 0x5, 2 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_P2[] =
{
    { "P2 Color", 0x48e64, 0x48e84, 0x5 },
    { "P2 FX", 0x48e84, 0x48ea4, 0x5, 1 },
    { "P2 Mech", 0x48ea4, 0x48ec4, 0x5, 2 },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_P1[] =
{
    { "P1 Color",   0x484c4, 0x484e4, 0x28 },
    { "P1 Extra 1", 0x484e4, 0x48504, 0x28, 1 },
    { "P1 Extra 2", 0x48504, 0x48524, 0x28, 2 },

    { "P1 Lighting 1", 0x4f944, 0x4f964, 0x28 },
    { "P1 Lighting 2", 0x4f964, 0x4f984, 0x28 },
    { "P1 Lighting 3", 0x4f984, 0x4f9A4, 0x28 },
    { "P1 Lighting 4", 0x4f9A4, 0x4f9C4, 0x28 },
    { "P1 Lighting 5", 0x4f9C4, 0x4f9E4, 0x28 },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_P2[] =
{
    { "P2 Color",   0x48524, 0x48544, 0x28 },
    { "P2 Extra 1", 0x48544, 0x48564, 0x28, 1 },
    { "P2 Extra 2", 0x48564, 0x48584, 0x28, 2 },

    { "P2 Lighting 1", 0x4f9E4, 0x4fA04, 0x28 },
    { "P2 Lighting 2", 0x4fA04, 0x4fA24, 0x28 },
    { "P2 Lighting 3", 0x4fA24, 0x4fA44, 0x28 },
    { "P2 Lighting 4", 0x4fA44, 0x4fA64, 0x28 },
    { "P2 Lighting 5", 0x4fA64, 0x4fA84, 0x28 },
};

const sGame_PaletteDataset MVC_A_ASSIST_PALETTES[] =
{
    { "Anita P1", 0x50fa4, 0x50fc4, 0x51 },
    { "Anita P1 Floating Body", 0x50fc4, 0x50fe4, 0x51, 2 },
    { "Anita P1 Weapons", 0x50fe4, 0x51004, 0x51, 1 },
    { "Anita P2", 0x51004, 0x51024, 0x51 },
    { "Anita P2 Floating Body", 0x51024, 0x51044, 0x51, 2 },
    { "Anita P2 Weapons", 0x51044, 0x51064, 0x51, 1 },

    { "Arthur P1", 0x50804, 0x50824, 0x3C },
    { "Arthur P1 Extra 1", 0x50824, 0x50844, 0x3C, 1 },
    // This appears to be unused: commenting out for now
    //{ "Arthur P1 Extra 2", 0x50844, 0x50864 },
    { "Arthur P2", 0x50864, 0x50884, 0x3C },
    { "Arthur P2 Extra 1", 0x50884, 0x508a4, 0x3C, 1 },
    //{ "Arthur P2 Extra 2", 0x508a4, 0x508c4 },

    { "Colossus P1", 0x505c4, 0x505e4, 0x32 },
    { "Colossus P2", 0x50624, 0x50644, 0x32 },

    { "Cyclops P1", 0x50504, 0x50524, 0x06 },
    { "Cyclops P2", 0x50564, 0x50584, 0x06 },
    { "Cyclops Optic Blast 1", 0x508c4, 0x508e4, 0x06, 0x0E },
    { "Cyclops Optic Blast 2", 0x508e4, 0x50904, 0x06, 0x0E },
    { "Cyclops Optic Blast 3", 0x50904, 0x50924, 0x06, 0x0E },
    { "Cyclops Optic Blast 4", 0x50924, 0x50944, 0x06, 0x0E },
    { "Cyclops Optic Blast 5", 0x50944, 0x50964, 0x06, 0x0E },

    // Warning: these are joined using code in UpdatePalImg.  If you renumber these, you'll want to doublecheck display.
    { "Devilot P1", 0x510c4, 0x510e4, 0x3C, 3, true },
    { "Devilot P1: Dave and Xavier", 0x510e4, 0x51104, 0x3C, 4 },
    { "Devilot P1: Platform", 0x51104, 0x51124, 0x3C, 2 },
    { "Devilot P1: Burnt", 0x51184, 0x511a4, 0x3C, 5, true },
    { "Devilot P1: Burnt Dave and Xavier", 0x511a4, 0x511c4, 0x3C, 6 },
    { "Devilot P2", 0x51124, 0x51144, 0x3C, 3, true },
    { "Devilot P2: Dave and Xavier", 0x51144, 0x51164, 0x3C, 4 },
    { "Devilot P2: Platform", 0x51164, 0x51184, 0x3C, 2 },
    { "Devilot P2: Burnt", 0x511c4, 0x511e4, 0x3C, 5, true },
    { "Devilot P2: Burnt Dave and Xavier", 0x511e4, 0x51204, 0x3C, 6 },

    { "Iceman P1", 0x50d64, 0x50d84, 0x09 },
    { "Iceman P1 Extra 1", 0x50d84, 0x50da4, 0x09, 0x20 },
    { "Iceman P1 Extra 2", 0x50da4, 0x50dc4, 0x09, 0x20 },
    { "Iceman P2", 0x50dc4, 0x50de4, 0x09 },
    { "Iceman P2 Extra 1", 0x50de4, 0x50e04, 0x09, 0x20 },
    { "Iceman P2 Extra 2", 0x50e04, 0x50e24, 0x09, 0x20 },

    { "Jubilee P1", 0x51204, 0x51224, 0x3C, 0x07 },
    { "Jubilee P2", 0x51264, 0x51284, 0x3C, 0x07 },

    { "Juggernaut P1", 0x502c4, 0x502e4, 0x29 },
    { "Juggernaut P1 Extra 1", 0x50304, 0x50324, 0x29, 2 },
    { "Juggernaut P2", 0x50324, 0x50344, 0x29 },
    { "Juggernaut P2 Extra 1", 0x50364, 0x50384, 0x29, 2 },

    { "Lou P1", 0x50204, 0x50224, 0x3C, 0x09, true },
    { "Lou P1 Extra", 0x50224, 0x50244, 0x3C, 0x0A },
    { "Lou P2", 0x50264, 0x50284, 0x3C, 0x09, true },
    { "Lou P2 Extra", 0x50284, 0x502a4, 0x3C, 0x0A },

    { "Magneto P1", 0x50384, 0x503a4, 0x2c },
    { "Magneto P1 Extra", 0x503a4, 0x503c4, 0x2c, 1 },
    { "Magneto P2", 0x503e4, 0x50404, 0x2c },
    { "Magneto P2 Extra", 0x50404, 0x50424, 0x2c, 1 },

    { "Michelle Heart P1", 0x50a24, 0x50a44, 0x3C, 0x0E },
    { "Michelle Heart P1 Extra", 0x50a44, 0x50a64, 0x3C, 0x0F },
    { "Michelle Heart P2", 0x50a84, 0x50aa4, 0x3C, 0x0E },
    { "Michelle Heart P2 Extra", 0x50aa4, 0x50ac4, 0x3C, 0x0F },

    { "Psylocke P1", 0x50444, 0x50464, 0x08 },
    { "Psylocke P1 Extra", 0x50464, 0x50484, 0x08, 2 },
    { "Psylocke P2", 0x504a4, 0x504c4, 0x08 },
    { "Psylocke P2 Extra", 0x504c4, 0x504e4, 0x08, 2 },

    { "Pure & Fur P1 Pure", 0x50e24, 0x50e44, 0x3C, 0x0B },
    { "Pure & Fur P1 Fur", 0x50e44, 0x50e64, 0x3C, 0x0C },
    { "Pure & Fur P1 Dice", 0x50e64, 0x50e84, 0x3C, 0x0D },
    { "Pure & Fur P2 Pure", 0x50e84, 0x50ea4, 0x3C, 0x0B },
    { "Pure & Fur P2 Fur", 0x50ea4, 0x50ec4, 0x3C, 0x0C },
    { "Pure & Fur P2 Dice", 0x50ec4, 0x50ee4, 0x3C, 0x0D },

    { "Rogue P1", 0x50ca4, 0x50cc4, 0x0a },
    { "Rogue P2", 0x50d04, 0x50d24, 0x0a },

    { "Saki P1", 0x50964, 0x509a4, 0x3C, 0x10 },
    { "Saki P2", 0x509c4, 0x50a04, 0x3C, 0x10 },

    { "Sentinel P1", 0x51344, 0x51364, 0x34 },
    { "Sentinel P2", 0x513a4, 0x513c4, 0x34 },

    { "Shadow Nash P1", 0x51284, 0x512a4, 0x21 },
    { "Shadow Nash P1 Extra", 0x512c4, 0x512e4, 0x21, 2 },
    { "Shadow Nash P2", 0x512e4, 0x51304, 0x21 },
    { "Shadow Nash P2 Extra", 0x51324, 0x51344, 0x21, 2 },

    { "Storm P1", 0x50ba4, 0x50bc4, 0x2a },
    { "Storm P1 Extra", 0x50c64, 0x50c84, 0x2a, 12 },
    { "Storm P2", 0x50c04, 0x50c24, 0x2a },
    { "Storm P2 Extra", 0x50c84, 0x50ca4, 0x2a, 12 },

    { "Ton-Pooh P1", 0x50744, 0x50784, 0x3C, 0x13 },
    { "Ton-Pooh P1 Attack", 0x50784, 0x507a4, 0x3C, 0x14 },
    { "Ton-Pooh P2", 0x507a4, 0x507e4, 0x3C, 0x13 },
    { "Ton-Pooh P2 Attack", 0x507e4, 0x50804, 0x3C, 0x14 },

    { "Thor P1", 0x50ae4, 0x50b04, 0x3C, 0x15 },
    { "Thor P1 Lightning", 0x50b04, 0x50b24, 0x3C, 0x16 },
    { "Thor P2", 0x50b44, 0x50b64, 0x3C, 0x15 },
    { "Thor P2 Lightning", 0x50b64, 0x50b84, 0x3C, 0x16 },

    { "Unknown Soldier P1", 0x50684, 0x506a4, 0x3C, 0x12 },
    { "Unknown Soldier P1 Extra", 0x506a4, 0x506c4, 0x3C, 0x11 },
    { "Unknown Soldier P2", 0x506e4, 0x50704, 0x3C, 0x12 },
    { "Unknown Soldier P2 Extra", 0x50704, 0x50724, 0x3C, 0x11 },

    { "US Agent P1", 0x50ee4, 0x50f04, 0x0b, 0, true },
    { "US Agent P1 Shield", 0x50f04, 0x50f24, 0x0b, 1 },
    { "US Agent P1 Charging Star", 0x50f24, 0x50f44, 0x0b, 2 },
    { "US Agent P2", 0x50f44, 0x50f64, 0x0b, 0, true },
    { "US Agent P2 Shield", 0x50f64, 0x50f84, 0x0b, 1 },
    { "US Agent P2 Charging Star", 0x50f84, 0x50fa4, 0x0b, 2 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_SHARED[] =
{
    { "Burning 1", 0x49c04, 0x49c24, 0x2e },
    { "Burning 2", 0x49c24, 0x49c44, 0x2e },
    { "Shocked 1", 0x49c44, 0x49c64, 0x2e },
    { "Shocked 2", 0x49c64, 0x49c84, 0x2e },
    { "Dark Burning 1", 0x49c84, 0x49ca4, 0x2e },
    { "Dark Burning 2", 0x49ca4, 0x49cc4, 0x2e },
    { "Kinectic Charged 1", 0x49cc4, 0x49ce4, 0x2e },
    { "Kinectic Charged 2", 0x49ce4, 0x49d04, 0x2e },
    { "Kinectic Charged 3", 0x49d04, 0x49d24, 0x2e },
    { "Shadows Light", 0x494a4, 0x494c4, 0x2E },
    { "Shadows Dark", 0x494c4, 0x494e4, 0x2E },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_SHARED[] =
{
    { "Burning 1", 0x49d24, 0x49d44, 0x0b },
    { "Burning 2", 0x49d44, 0x49d64, 0x0b },
    { "Shocked 1", 0x49d64, 0x49d84, 0x0b },
    { "Shocked 2", 0x49d84, 0x49da4, 0x0b },
    { "Dark Burning 1", 0x49da4, 0x49dc4, 0x0b },
    { "Dark Burning 2", 0x49dc4, 0x49de4, 0x0b },
    { "Kinectic Charged 1", 0x49de4, 0x49e04, 0x0b },
    { "Kinectic Charged 2", 0x49e04, 0x49e24, 0x0b },
    { "Kinectic Charged 3", 0x49e24, 0x49e44, 0x0b },
    { "Shadows Light", 0x494e4, 0x49504, 0x0b },
    { "Shield Shadows Light", 0x49524, 0x49544, 0x0b, 0x1 },
    { "Shadows Dark", 0x49504, 0x49524, 0x0b },
    { "Shield Shadows Dark", 0x49544, 0x49564, 0x0b, 0x1 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_SHARED[] =
{
    { "Burning 1", 0x49f64, 0x49f84, 0x0d },
    { "Burning 2", 0x49f84, 0x49fa4, 0x0d },
    { "Shocked 1", 0x49fa4, 0x49fc4, 0x0d },
    { "Shocked 2", 0x49fc4, 0x49fe4, 0x0d },
    { "Dark Burning 1", 0x49fe4, 0x4a004, 0x0d },
    { "Dark Burning 2", 0x4a004, 0x4a024, 0x0d },
    { "Kinectic Charged 1", 0x4a024, 0x4a044, 0x0d },
    { "Kinectic Charged 2", 0x4a044, 0x4a064, 0x0d },
    { "Kinectic Charged 3", 0x4a064, 0x4a084, 0x0d },
    { "Shadows Light", 0x49564, 0x49584, 0x0d },
    { "Shadows Dark", 0x49584, 0x495A4, 0x0d },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a084, 0x4a0a4, 0x07 },
    { "Burning 2", 0x4a0a4, 0x4a0c4, 0x07 },
    { "Shocked 1", 0x4a0c4, 0x4a0e4, 0x07 },
    { "Shocked 2", 0x4a0e4, 0x4a104, 0x07 },
    { "Dark Burning 1", 0x4a104, 0x4a124, 0x07 },
    { "Dark Burning 2", 0x4a124, 0x4a144, 0x07 },
    { "Kinectic Charged 1", 0x4a144, 0x4a164, 0x07 },
    { "Kinectic Charged 2", 0x4a164, 0x4a184, 0x07 },
    { "Kinectic Charged 3", 0x4a184, 0x4a1a4, 0x07 },
    { "Shadows Light", 0x495A4, 0x495C4, 0x07 },
    { "Shadows Dark", 0x495C4, 0x495E4, 0x07 },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a1a4, 0x4a1c4, 0x28 },
    { "Burning 2", 0x4a1c4, 0x4a1e4, 0x28 },
    { "Shocked 1", 0x4a1e4, 0x4a204, 0x28 },
    { "Shocked 2", 0x4a204, 0x4a224, 0x28 },
    { "Dark Burning 1", 0x4a224, 0x4a244, 0x28 },
    { "Dark Burning 2", 0x4a244, 0x4a264, 0x28 },
    { "Kinectic Charged 1", 0x4a264, 0x4a284, 0x28 },
    { "Kinectic Charged 2", 0x4a284, 0x4a2a4, 0x28 },
    { "Kinectic Charged 3", 0x4a2a4, 0x4a2c4, 0x28 },
    { "Shadows Light", 0x495E4, 0x49604, 0x28 },
    { "Shadows Dark", 0x49604, 0x49624, 0x28 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a2c4, 0x4a2e4, 0x0e },
    { "Burning 2", 0x4a2e4, 0x4a304, 0x0e },
    { "Shocked 1", 0x4a304, 0x4a324, 0x0e },
    { "Shocked 2", 0x4a324, 0x4a344, 0x0e },
    { "Dark Burning 1", 0x4a344, 0x4a364, 0x0e },
    { "Dark Burning 2", 0x4a364, 0x4a384, 0x0e },
    { "Kinectic Charged 1", 0x4a384, 0x4a3a4, 0x0e },
    { "Kinectic Charged 2", 0x4a3a4, 0x4a3c4, 0x0e },
    { "Kinectic Charged 3", 0x4a3c4, 0x4a3e4, 0x0e },
    { "Shadows Light", 0x49624, 0x49644, 0x0e },
    { "Shadows Dark", 0x49644, 0x49664, 0x0e },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a504, 0x4a524, 0x0c },
    { "Burning 2", 0x4a524, 0x4a544, 0x0c },
    { "Shocked 1", 0x4a544, 0x4a564, 0x0c },
    { "Shocked 2", 0x4a564, 0x4a584, 0x0c },
    { "Dark Burning 1", 0x4a584, 0x4a5a4, 0x0c },
    { "Dark Burning 2", 0x4a5a4, 0x4a5c4, 0x0c },
    { "Kinectic Charged 1", 0x4a5c4, 0x4a5e4, 0x0c },
    { "Kinectic Charged 2", 0x4a5e4, 0x4a604, 0x0c },
    { "Kinectic Charged 3", 0x4a604, 0x4a624, 0x0c },
    { "Shadows Light", 0x49664, 0x49684, 0x0c },
    { "Shadows Dark", 0x49684, 0x496A4, 0x0c },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a624, 0x4a644, 0x1d },
    { "Burning 2", 0x4a644, 0x4a664, 0x1d },
    { "Shocked 1", 0x4a664, 0x4a684, 0x1d },
    { "Shocked 2", 0x4a684, 0x4a6a4, 0x1d },
    { "Dark Burning 1", 0x4a6a4, 0x4a6c4, 0x1d },
    { "Dark Burning 2", 0x4a6c4, 0x4a6e4, 0x1d },
    { "Kinectic Charged 1", 0x4a6e4, 0x4a704, 0x1d },
    { "Kinectic Charged 2", 0x4a704, 0x4a724, 0x1d },
    { "Kinectic Charged 3", 0x4a724, 0x4a744, 0x1d },
    { "Shadows Light", 0x496A4, 0x496C4, 0x1d },
    { "Shadows Dark", 0x496C4, 0x496E4, 0x1d },
};

const sGame_PaletteDataset MVC_A_RYU_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a744, 0x4a764, 0x00 },
    { "Burning 2", 0x4a764, 0x4a784, 0x00 },
    { "Shocked 1", 0x4a784, 0x4a7a4, 0x00 },
    { "Shocked 2", 0x4a7a4, 0x4a7c4, 0x00 },
    { "Dark Burning 1", 0x4a7c4, 0x4a7e4, 0x00 },
    { "Dark Burning 2", 0x4a7e4, 0x4a804, 0x00 },
    { "Kinectic Charged 1", 0x4a804, 0x4a824, 0x00 },
    { "Kinectic Charged 2", 0x4a824, 0x4a844, 0x00 },
    { "Kinectic Charged 3", 0x4a844, 0x4a864, 0x00 },
    { "Shadows Light", 0x49724, 0x49744, 0x00 },
    { "Shadows Dark", 0x49744, 0x49764, 0x00 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a864, 0x4a884, 0x38 },
    { "Burning 2", 0x4a884, 0x4a8a4, 0x38 },
    { "Shocked 1", 0x4a8a4, 0x4a8c4, 0x38 },
    { "Shocked 2", 0x4a8c4, 0x4a8e4, 0x38 },
    { "Dark Burning 1", 0x4a8e4, 0x4a904, 0x38 },
    { "Dark Burning 2", 0x4a904, 0x4a924, 0x38 },
    { "Kinectic Charged 1", 0x4a924, 0x4a944, 0x38 },
    { "Kinectic Charged 2", 0x4a944, 0x4a964, 0x38 },
    { "Kinectic Charged 3", 0x4a964, 0x4a984, 0x38 },
    { "Shadows Light", 0x49764, 0x49784, 0x38 },
    { "Shadows Dark", 0x49784, 0x497A4, 0x38 },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4a984, 0x4a9a4, 0x1b },
    { "Burning 2", 0x4a9a4, 0x4a9c4, 0x1b },
    { "Shocked 1", 0x4a9c4, 0x4a9e4, 0x1b },
    { "Shocked 2", 0x4a9e4, 0x4aa04, 0x1b },
    { "Dark Burning 1", 0x4aa04, 0x4aa24, 0x1b },
    { "Dark Burning 2", 0x4aa24, 0x4aa44, 0x1b },
    { "Kinectic Charged 1", 0x4aa44, 0x4aa64, 0x1b },
    { "Kinectic Charged 2", 0x4aa64, 0x4aa84, 0x1b },
    { "Kinectic Charged 3", 0x4aa84, 0x4aaa4, 0x1b },
    { "Shadows Light", 0x497A4, 0x497C4, 0x1b },
    { "Shadows Dark", 0x497C4, 0x497E4, 0x1b },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4aaa4, 0x4aac4, 0x37 },
    { "Burning 2", 0x4aac4, 0x4aae4, 0x37 },
    { "Shocked 1", 0x4aae4, 0x4ab04, 0x37 },
    { "Shocked 2", 0x4ab04, 0x4ab24, 0x37 },
    { "Dark Burning 1", 0x4ab24, 0x4ab44, 0x37 },
    { "Dark Burning 2", 0x4ab44, 0x4ab64, 0x37 },
    { "Kinectic Charged 1", 0x4ab64, 0x4ab84, 0x37 },
    { "Kinectic Charged 2", 0x4ab84, 0x4aba4, 0x37 },
    { "Kinectic Charged 3", 0x4aba4, 0x4abc4, 0x37 },
    { "Shadows Light", 0x497E4, 0x49804, 0x37 },
    { "Shadows Dark", 0x49804, 0x49824, 0x37 },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4abc4, 0x4abe4, 0x01 },
    { "Burning 2", 0x4abe4, 0x4ac04, 0x01 },
    { "Shocked 1", 0x4ac04, 0x4ac24, 0x01 },
    { "Shocked 2", 0x4ac24, 0x4ac44, 0x01 },
    { "Dark Burning 1", 0x4ac44, 0x4ac64, 0x01 },
    { "Dark Burning 2", 0x4ac64, 0x4ac84, 0x01 },
    { "Kinectic Charged 1", 0x4ac84, 0x4aca4, 0x01 },
    { "Kinectic Charged 2", 0x4aca4, 0x4acc4, 0x01 },
    { "Kinectic Charged 3", 0x4acc4, 0x4ace4, 0x01 },
    { "Shadows Light", 0x49824, 0x49844, 0x01 },
    { "Shadows Dark", 0x49844, 0x49864, 0x01 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4ace4, 0x4ad04, 0x05 },
    { "Burning 2", 0x4ad04, 0x4ad24, 0x05 },
    { "Shocked 1", 0x4ad24, 0x4ad44, 0x05 },
    { "Shocked 2", 0x4ad44, 0x4ad64, 0x05 },
    { "Dark Burning 1", 0x4ad64, 0x4ad84, 0x05 },
    { "Dark Burning 2", 0x4ad84, 0x4ada4, 0x05 },
    { "Kinectic Charged 1", 0x4ada4, 0x4adc4, 0x05 },
    { "Kinectic Charged 2", 0x4adc4, 0x4ade4, 0x05 },
    { "Kinectic Charged 3", 0x4ade4, 0x4ae04, 0x05 },
    { "Shadows Light", 0x49864, 0x49884, 0x05 },
    { "Shadows Dark", 0x49884, 0x498A4, 0x05 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4ae04, 0x4ae24, 0x03 },
    { "Burning 2", 0x4ae24, 0x4ae44, 0x03 },
    { "Shocked 1", 0x4ae44, 0x4ae64, 0x03 },
    { "Shocked 2", 0x4ae64, 0x4ae84, 0x03 },
    { "Dark Burning 1", 0x4ae84, 0x4aea4, 0x03 },
    { "Dark Burning 2", 0x4aea4, 0x4aec4, 0x03 },
    { "Kinectic Charged 1", 0x4aec4, 0x4aee4, 0x03 },
    { "Kinectic Charged 2", 0x4aee4, 0x4af04, 0x03 },
    { "Kinectic Charged 3", 0x4af04, 0x4af24, 0x03 },
    { "Shadows Light", 0x498A4, 0x498C4, 0x03 },
    { "Shadows Dark", 0x498C4, 0x498E4, 0x03 },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4af24, 0x4af44, 0x1c },
    { "Burning 2", 0x4af44, 0x4af64, 0x1c },
    { "Shocked 1", 0x4af64, 0x4af84, 0x1c },
    { "Shocked 2", 0x4af84, 0x4afa4, 0x1c },
    { "Dark Burning 1", 0x4afa4, 0x4afc4, 0x1c },
    { "Dark Burning 2", 0x4afc4, 0x4afe4, 0x1c },
    { "Kinectic Charged 1", 0x4afe4, 0x4b004, 0x1c },
    { "Kinectic Charged 2", 0x4b004, 0x4b024, 0x1c },
    { "Kinectic Charged 3", 0x4b024, 0x4b044, 0x1c },
    { "Shadows Light", 0x498e4, 0x49904, 0x1c },
    { "Shadows Dark", 0x49904, 0x49924, 0x1c },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4b044, 0x4b064, 0x3b },
    { "Burning 2", 0x4b064, 0x4b084, 0x3b },
    { "Shocked 1", 0x4b084, 0x4b0a4, 0x3b },
    { "Shocked 2", 0x4b0a4, 0x4b0c4, 0x3b },
    { "Dark Burning 1", 0x4b0c4, 0x4b0e4, 0x3b },
    { "Dark Burning 2", 0x4b0e4, 0x4b104, 0x3b },
    { "Shadows Light", 0x49924, 0x49944, 0x3b },
    { "Shadows Dark", 0x49944, 0x49964, 0x3b },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4b104, 0x4b124, 0x0e },
    { "Burning 2", 0x4b124, 0x4b144, 0x0e },
    { "Shocked 1", 0x4b144, 0x4b164, 0x0e },
    { "Shocked 2", 0x4b164, 0x4b184, 0x0e },
    { "Dark Burning 1", 0x4b184, 0x4b1a4, 0x0e },
    { "Dark Burning 2", 0x4b1a4, 0x4b1c4, 0x0e },
    { "Kinectic Charged 1", 0x4b1c4, 0x4b1e4, 0x0e },
    { "Kinectic Charged 2", 0x4b1e4, 0x4b204, 0x0e },
    { "Kinectic Charged 3", 0x4b204, 0x4b224, 0x0e },
    { "Shadows Light", 0x49964, 0x49984, 0x0e },
    { "Shadows Dark", 0x49984, 0x499a4, 0x0e },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4b344, 0x4b364, 0x0d },
    { "Burning 2", 0x4b364, 0x4b384, 0x0d },
    { "Shocked 1", 0x4b384, 0x4b3a4, 0x0d },
    { "Shocked 2", 0x4b3a4, 0x4b3c4, 0x0d },
    { "Dark Burning 1", 0x4b3c4, 0x4b3e4, 0x0d },
    { "Dark Burning 2", 0x4b3e4, 0x4b404, 0x0d },
    { "Kinectic Charged 1", 0x4b404, 0x4b424, 0x0d },
    { "Kinectic Charged 2", 0x4b424, 0x4b444, 0x0d },
    { "Kinectic Charged 3", 0x4b444, 0x4b464, 0x0d },
    { "Shadows Light", 0x499a4, 0x499c4, 0x0d },
    { "Shadows Dark", 0x499c4, 0x499e4, 0x0d },
    { "Shadows 3?", 0x499e4, 0x49a04, 0x0d },
    { "Shadows 4?", 0x49a04, 0x49a24, 0x0d },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4b464, 0x4b484, 0x2e },
    { "Burning 2", 0x4b484, 0x4b4a4, 0x2e },
    { "Shocked 1", 0x4b4a4, 0x4b4c4, 0x2e },
    { "Shocked 2", 0x4b4c4, 0x4b4e4, 0x2e },
    { "Dark Burning 1", 0x4b4e4, 0x4b504, 0x2e },
    { "Dark Burning 2", 0x4b504, 0x4b524, 0x2e },
    { "Kinectic Charged 1", 0x4b524, 0x4b544, 0x2e },
    { "Kinectic Charged 2", 0x4b544, 0x4b564, 0x2e },
    { "Kinectic Charged 3", 0x4b564, 0x4b584, 0x2e },
    { "Shadows Light", 0x49a24, 0x49a44, 0x2E },
    { "Shadows Dark", 0x49a54, 0x49a86, 0x2E },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4b584, 0x4b5a4, 0x1b },
    { "Burning 2", 0x4b5a4, 0x4b5c4, 0x1b },
    { "Shocked 1", 0x4b5c4, 0x4b5e4, 0x1b },
    { "Shocked 2", 0x4b5e4, 0x4b604, 0x1b },
    { "Dark Burning 1", 0x4b604, 0x4b624, 0x1b },
    { "Dark Burning 2", 0x4b624, 0x4b644, 0x1b },
    { "Kinectic Charged 1", 0x4b644, 0x4b664, 0x1b },
    { "Kinectic Charged 2", 0x4b664, 0x4b684, 0x1b },
    { "Kinectic Charged 3", 0x4b684, 0x4b6a4, 0x1b },
    { "Shadows Light", 0x49a64, 0x49a84, 0x1b },
    { "Shadows Dark", 0x49a84, 0x49aa4, 0x1b },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_SHARED[] =
{
    { "Burning 1", 0x4b6a4, 0x4b6c4, 0x03 },
    { "Burning 2", 0x4b6c4, 0x4b6e4, 0x03 },
    { "Shocked 1", 0x4b6e4, 0x4b704, 0x03 },
    { "Shocked 2", 0x4b704, 0x4b724, 0x03 },
    { "Dark Burning 1", 0x4b724, 0x4b744, 0x03 },
    { "Dark Burning 2", 0x4b744, 0x4b764, 0x03 },
    { "Kinectic Charged 1", 0x4b764, 0x4b784, 0x03 },
    { "Kinectic Charged 2", 0x4b784, 0x4b7a4, 0x03 },
    { "Kinectic Charged 3", 0x4b7a4, 0x4b7c4, 0x03 },
    { "Shadows Light", 0x49aa4, 0x49ac4, 0x03 },
    { "Shadows Dark", 0x49ac4, 0x49ae4, 0x03 },
};

const sGame_PaletteDataset MVC_A_ASSISTICON_PALETTES[] =
{
    { "Anita", 0x47fc4, 0x47fe4, 0x3C, 0x30 },
    { "Arthur", 0x47f04, 0x47f24, 0x3C, 0x31 },
    { "Colossus", 0x47e04, 0x47e24, 0x3C, 0x32 },
    { "Cyclops", 0x47de4, 0x47e04, 0x3C, 0x33 },
    { "Devilot", 0x48004, 0x48024, 0x3C, 0x34 },
    { "Iceman", 0x47e64, 0x47e84, 0x3C, 0x35 },
    { "Jubilee", 0x47ea4, 0x47ec4, 0x3C, 0x36 },
    { "Juggernaut", 0x47d84, 0x47da4, 0x3C, 0x37 },
    { "Lou", 0x47fa4, 0x47fc4, 0x3C, 0x38 },
    { "Magneto", 0x47da4, 0x47dc4, 0x3C, 0x39 },
    { "Michelle Heart", 0x47f24, 0x47f44, 0x3C, 0x3A },
    { "Psylocke", 0x47dc4, 0x47de4, 0x3C, 0x3B },
    { "Pure & Fur", 0x47fe4, 0x48004, 0x3C, 0x3C },
    { "Rogue", 0x47e84, 0x47ea4, 0x3C, 0x3D },
    { "Saki", 0x47f64, 0x47f84, 0x3C, 0x3E },
    { "Storm", 0x47ec4, 0x47ee4, 0x3C, 0x3F },
    { "Thor", 0x47e24, 0x47e44, 0x3C, 0x40 },
    { "Ton-Pooh", 0x47f44, 0x47f64, 0x3C, 0x41 },
    { "Unknown Soldier", 0x47f84, 0x47fa4, 0x3C, 0x42 },
    { "U.S. Agent", 0x47e44, 0x47e64, 0x3C, 0x43 },
    { "Unselected Assist Icons", 0x52364, 0x52384, 0x3C, 0x44 },
};

const sGame_PaletteDataset MVC_A_VSP_PALETTES[] =
{
    { "Captain America P1 VSP", 0x55e44, 0x55f04, 0x0B, 0x13},
    { "Captain America P2 VSP", 0x57104, 0x571c4, 0x0B, 0x13},
    { "Captain Commando P1 VSP", 0x56444, 0x56504, 0x38, 0x13},
    { "Captain Commando P2 VSP", 0x57704, 0x577c4, 0x38, 0x13},
    { "Chun-Li P1 VSP", 0x56504, 0x565c4, 0x1b, 0x13},
    { "Chun-Li P2 VSP", 0x577c4, 0x57884, 0x1b, 0x13},
    { "Shadow Lady P1 VSP", 0x56c84, 0x56d44, 0x1b, 0x13},
    { "Shadow Lady P2 VSP", 0x57f44, 0x58004, 0x1b, 0x13},
    { "Gambit P1 VSP", 0x56084, 0x56144, 0x28, 0x13},
    { "Gambit P2 VSP", 0x57344, 0x57404, 0x28, 0x13},
    { "Hulk P1 VSP", 0x55f04, 0x55f24, 0x0D, 0x13 },
    { "Orange Hulk P1 VSP", 0x56b04, 0x56b24, 0x0D, 0x13 },
    { "Hulk P2 VSP", 0x571c4, 0x571e4, 0x0D, 0x13 },
    { "Orange Hulk P2 VSP", 0x57dc4, 0x57de4, 0x0D, 0x13 },
    { "Jin P1 VSP", 0x565c4, 0x56684, 0x37, 0x13},
    { "Jin P2 VSP", 0x57884, 0x57944, 0x37, 0x13},
    { "Megaman P1 VSP", 0x568c4, 0x56944, 0x1C, 0x13 },
    { "Megaman P2 VSP", 0x57b84, 0x57c04, 0x1C, 0x13 },
    { "Morrigan P1 VSP", 0x56804, 0x568c4, 0x3, 0x13},
    { "Morrigan P2 VSP", 0x57ac4, 0x57b84, 0x3, 0x13},
    { "Lilith P1 VSP", 0x56d44, 0x56e04, 0x3, 0x13},
    { "Lilith P2 VSP", 0x58004, 0x580c4, 0x3, 0x13},
    { "Onslaught P1 VSP", 0x56984, 0x569e4, 0x3B, 0x13 },
    { "Roll P1 VSP", 0x562c4, 0x56384, 0x1D, 0x13},
    { "Roll P2 VSP", 0x57584, 0x57644, 0x1D, 0x13},
    { "Ryu P1 VSP", 0x56384, 0x56444, 0x0, 0x13},
    { "Ryu P2 VSP", 0x57644, 0x57704, 0x0, 0x13},
    { "Ken P1 VSP", 0x56e04, 0x56ec4, 0x0, 0x13},
    { "Ken P2 VSP", 0x580c4, 0x58184, 0x0, 0x13},
    { "Gouki P1 VSP", 0x56ec4, 0x56f84, 0x0, 0x13},
    { "Gouki P2 VSP", 0x58184, 0x58244, 0x0, 0x13},
    { "Spider-Man P1 VSP", 0x56204, 0x56284, 0x0C, 0x13 },
    { "Spider-Man P2 VSP", 0x574c4, 0x57544, 0x0C, 0x13 },
    { "Strider Hiryu P1 VSP", 0x56744, 0x56804, 0x5, 0x13},
    { "Strider Hiryu P2 VSP", 0x57a04, 0x57ac4, 0x5, 0x13},
    { "Venom P1 VSP", 0x56144, 0x561c4, 0x0E, 0x13 },
    { "Venom P2 VSP", 0x57404, 0x57484, 0x0E, 0x13 },
    { "Red Venom P1 VSP", 0x56a44, 0x56ac4, 0x0E, 0x13 },
    { "Red Venom P2 VSP", 0x57d04, 0x57d84, 0x0E, 0x13 },
    { "War Machine P1 VSP", 0x55d84, 0x55e04, 0x2E, 0x13 },
    { "Gold War Machine P1 VSP", 0x56bc4, 0x56c44, 0x2E, 0x13 },
    { "War Machine P2 VSP", 0x57044, 0x570c4, 0x2E, 0x13 },
    { "Gold War Machine P2 VSP", 0x57e84, 0x57f04, 0x2E, 0x13 },
    { "Wolverine P1 VSP", 0x55fc4, 0x56084, 0x07, 0x13},
    { "Wolverine P2 VSP", 0x57284, 0x57344, 0x07, 0x13},
    { "Zangief P1 VSP", 0x56684, 0x56724, 0x1, 0x13},
    { "Zangief P2 VSP", 0x57944, 0x579e4, 0x1, 0x13},
    { "Mech-Zangief P1 VSP", 0x56f84, 0x57024, 0x1, 0x13},
    { "Mech-Zangief P2 VSP", 0x58244, 0x582e4, 0x1, 0x13},
};

const sGame_PaletteDataset MVC_A_CSP_PALETTES[] =
{
    { "Captain America P1 Duo/CSP", 0x52a84, 0x52ae4, 0x0B, 0x10 },
    { "Captain America P2 Duo/CSP", 0x53084, 0x530e4, 0x0B, 0x10 },
    { "Captain Commando P1 Duo/CSP", 0x52d84, 0x52de4, 0x38, 0x10 },
    { "Captain Commando P2 Duo/CSP", 0x53384, 0x533e4, 0x38, 0x10 },
    { "Chun-Li P1 Duo/CSP", 0x52de4, 0x52e44, 0x1b, 0x10 },
    { "Chun-Li 2P Duo/CSP", 0x533e4, 0x53444, 0x1b, 0x10 },
    { "Shadow Lady P2 Duo/CSP", 0x53924, 0x53984, 0x1b, 0x10 },
    { "Shadow Lady P1 Duo/CSP", 0x53744, 0x537a4, 0x1b, 0x10 },
    { "Gambit P1 Duo/CSP", 0x52ba4, 0x52c04, 0x28, 0x10 },
    { "Gambit P2 Duo/CSP", 0x531a4, 0x53204, 0x28, 0x10 },
    { "Hulk P1 Duo/CSP", 0x52ae4, 0x52b04, 0x0D, 0x10 },
    { "Hulk P2 Duo/CSP", 0x530e4, 0x53104, 0x0D, 0x10 },
    { "Orange Hulk P1 Duo/CSP", 0x53684, 0x536a4, 0x0D, 0x10 },
    { "Orange Hulk P2 Duo/CSP", 0x53864, 0x53884, 0x0D, 0x10 },
    { "Jin P1 Duo/CSP", 0x52e44, 0x52ea4, 0x37, 0x10 },
    { "Jin 2P Duo/CSP", 0x53444, 0x534a4, 0x37, 0x10 },
    { "Megaman P1 Duo/CSP", 0x52fc4, 0x53024, 0x1C, 0x10 },
    { "Megaman P2 Duo/CSP", 0x535c4, 0x53624, 0x1C, 0x10 },
    { "Morrigan P1 Duo/CSP", 0x52f64, 0x52fc4, 0x3, 0x10 },
    { "Morrigan P2 Duo/CSP", 0x53564, 0x535c4, 0x3, 0x10 },
    { "Lilith P1 Duo/CSP", 0x537a4, 0x53804, 0x3, 0x10 },
    { "Lilith P2 Duo/CSP", 0x53984, 0x539e4, 0x3, 0x10 },
    { "Roll P1 Duo/CSP", 0x52cc4, 0x52d24, 0x1D, 0x10 },
    { "Roll P2 Duo/CSP", 0x532c4, 0x53324, 0x1D, 0x10 },
    { "Ryu P1 Duo/CSP", 0x52d24, 0x52d84, 0x0, 0x10 },
    { "Ryu P2 Duo/CSP", 0x53324, 0x53384, 0x0, 0x10 },
    { "Ken P1 Duo/CSP", 0x539e4, 0x53a44, 0x0, 0x10 },
    { "Ken P2 Duo/CSP", 0x53b04, 0x53b64, 0x0, 0x10 },
    { "Gouki P1 Duo/CSP", 0x53a44, 0x53aa4, 0x0, 0x10 },
    { "Gouki P2 Duo/CSP", 0x53b64, 0x53bc4, 0x0, 0x10 },
    { "Spider-Man P1 Duo/CSP", 0x52c64, 0x52ca4, 0x0C, 0x10 },
    { "Spider-Man P2 Duo/CSP", 0x53264, 0x532a4, 0x0C, 0x10 },
    { "Strider Hiryu P1 Duo/CSP", 0x52f04, 0x52f64, 0x5, 0x10 },
    { "Strider Hiryu P2 Duo/CSP", 0x53504, 0x53564, 0x5, 0x10 },
    { "Venom P1 Duo/CSP", 0x52c04, 0x52c64, 0x0E, 0x10 },
    { "Venom P2 Duo/CSP", 0x53204, 0x53264, 0x0E, 0x10 },
    { "Red Venom P1 Duo/CSP", 0x53624, 0x53684, 0x0E, 0x10 },
    { "Red Venom P2 Duo/CSP", 0x53804, 0x53864, 0x0E, 0x10 },
    { "War Machine P1 Duo/CSP", 0x52a44, 0x52a84, 0x2E, 0x10 },
    { "War Machine P2 Duo/CSP", 0x53044, 0x53084, 0x2E, 0x10 },
    { "Gold War Machine P1 Duo/CSP", 0x53704, 0x53744, 0x2E, 0x10 },
    { "Gold War Machine P2 Duo/CSP", 0x538e4, 0x53924, 0x2E, 0x10 },
    { "Wolverine P1 Duo/CSP", 0x52b44, 0x52ba4, 0x07, 0x10 },
    { "Wolverine P2 Duo/CSP", 0x53144, 0x531a4, 0x07, 0x10 },
    { "Zangief P1 Duo/CSP", 0x52ea4, 0x52f04, 0x1, 0x10 },
    { "Zangief P2 Duo/CSP", 0x534a4, 0x53504, 0x1, 0x10 },
    { "Mech-Zangief P1 Duo/CSP", 0x53aa4, 0x53b04, 0x1, 0x10 },
    { "Mech-Zangief P2 Duo/CSP", 0x53bc4, 0x53c24, 0x1, 0x10 },
};

const sGame_PaletteDataset MVC_A_SUPERPORT_PALETTES[] =
{
    { "Captain America P1 Super", 0x53ec4, 0x53f64, 0x0B, 0x12 },
    { "Captain America P2 Super", 0x54e64, 0x54f04, 0x0B, 0x12 },
    { "Captain Commando P1 Super", 0x543c4, 0x54464, 0x38, 0x12 },
    { "Captain Commando P2 Super", 0x55364, 0x55404, 0x38, 0x12 },
    { "Chun-Li P1 Super", 0x54464, 0x54504, 0x1b, 0x12 },
    { "Chun-Li P2 Super", 0x55404, 0x554a4, 0x1b, 0x12 },
    { "Shadow Lady P1 Super", 0x54aa4, 0x54b44, 0x1b, 0x12 },
    { "Shadow Lady P2 Super", 0x55a44, 0x55ae4, 0x1b, 0x12 },
    { "Gambit P1 Super", 0x540a4, 0x54124, 0x28, 0x12 },
    { "Gambit P2 Super", 0x55044, 0x550c4, 0x28, 0x12 },
    { "Hulk P1 Super", 0x53f64, 0x53f84, 0x0D, 0x12 },
    { "Hulk P2 Super", 0x54f04, 0x54f24, 0x0D, 0x12 },
    { "Orange Hulk P1 Super", 0x54964, 0x54984, 0x0D, 0x12 },
    { "Orange Hulk P2 Super", 0x55904, 0x55924, 0x0D, 0x12 },
    { "Jin P1 Super", 0x54504, 0x545a4, 0x37, 0x12 },
    { "Jin P2 Super", 0x554a4, 0x55544, 0x37, 0x12 },
    { "Megaman P1 Super", 0x54784, 0x54824, 0x1C, 0x12 },
    { "Megaman P2 Super", 0x55724, 0x557c4, 0x1C, 0x12 },
    { "Morrigan P1 Super", 0x546e4, 0x54784, 0x3, 0x12 },
    { "Morrigan P2 Super", 0x55684, 0x55724, 0x3, 0x12 },
    { "Lilith P1 Super", 0x54b44, 0x54be4, 0x3, 0x12 },
    { "Lilith P2 Super", 0x55ae4, 0x55b84, 0x3, 0x12 },
    { "Roll P1 Super", 0x54284, 0x54324, 0x1D, 0x12 },
    { "Roll P2 Super", 0x55224, 0x552c4, 0x1D, 0x12 },
    { "Ryu P1 Super", 0x54324, 0x543c4, 0x0, 0x12 },
    { "Ryu P2 Super", 0x552c4, 0x55364, 0x0, 0x12 },
    { "Ken P1 Super", 0x54be4, 0x54c84, 0x0, 0x12 },
    { "Ken P2 Super", 0x55b84, 0x55c24, 0x0, 0x12 },
    { "Gouki P1 Super", 0x54c84, 0x54d24, 0x0, 0x12 },
    { "Gouki P2 Super", 0x55c24, 0x55cc4, 0x0, 0x12 },
    { "Spider-Man P1 Super", 0x541e4, 0x54244, 0x0C, 0x12 },
    { "Spider-Man P2 Super", 0x55184, 0x551e4, 0x0C, 0x12 },
    { "Strider Hiryu P1 Super", 0x54644, 0x546e4, 0x5, 0x12 },
    { "Strider Hiryu P2 Super", 0x555e4, 0x55684, 0x5, 0x12 },
    { "Venom P1 Super", 0x54144, 0x541a4, 0x0E, 0x12 },
    { "Venom P2 Super", 0x550e4, 0x55144, 0x0E, 0x12 },
    { "Red Venom P1 Super", 0x548c4, 0x54924, 0x0E, 0x12 },
    { "Red Venom P2 Super", 0x55864, 0x558c4, 0x0E, 0x12 },
    { "War Machine P1 Super", 0x53e24, 0x53ea4, 0x2E, 0x12 },
    { "War Machine P2 Super", 0x54dc4, 0x54e44, 0x2E, 0x12 },
    { "Gold War Machine P1 Super", 0x54a04, 0x54a84, 0x2E, 0x12 },
    { "Gold War Machine P2 Super", 0x559a4, 0x55a24, 0x2E, 0x12 },
    { "Wolverine P1 Super", 0x54004, 0x54064, 0x07, 0x12 },
    { "Wolverine P2 Super", 0x54fa4, 0x55004, 0x07, 0x12 },
    { "Zangief P1 Super", 0x545a4, 0x54624, 0x1, 0x12 },
    { "Zangief P2 Super", 0x55544, 0x555c4, 0x1, 0x12 },
    { "Mech-Zangief P1 Super", 0x54d24, 0x54da4, 0x1, 0x12 },
    { "Mech-Zangief P2 Super", 0x55cc4, 0x55d44, 0x1, 0x12 },
    { "Onslaught P1 Super", 0x54824, 0x548a4, 0x3B, 0x12 },
    { "Onslaught P2 Super", 0x557c4, 0x55844, 0x3B, 0x12 },
};

const sGame_PaletteDataset MVC_A_CSIS_PALETTES[] =
{
    { "Captain America CS Icon", 0x3e5da, 0x3e5fa, 0x0B, 0x11 },
    { "Captain Commando CS Icon", 0x3e6da, 0x3e6fa, 0x38, 0x11 },
    { "Chun-Li CS Icon", 0x3e6fa, 0x3e71a, 0x1b, 0x11 },
    { "Gambit CS Icon", 0x3e63a, 0x3e65a, 0x28, 0x11 },
    { "Hulk CS Icon", 0x3e5fa, 0x3e61a, 0x0D, 0x11 },
    { "Jin CS Icon", 0x3e71a, 0x3e73a, 0x37, 0x11 },
    { "Megaman CS Icon", 0x3e79a, 0x3e7ba, 0x1C, 0x11 },
    { "Morrigan CS Icon", 0x3e77a, 0x3e79a, 0x3, 0x11 },
    // The Roll CSI is unused
    { "Ryu CS Icon", 0x3e6ba, 0x3e6da, 0x0, 0x11 },
    { "Spider-Man CS Icon", 0x3e67a, 0x3e69a, 0x0C, 0x11 },
    { "Strider Hiryu CS Icon", 0x3e75a, 0x3e77a, 0x5, 0x11 },
    { "Venom CS Icon", 0x3e65a, 0x3e67a, 0x0E, 0x11 },
    { "War Machine CS Icon", 0x3e5ba, 0x3e5da, 0x2E, 0x11 },
    { "Wolverine CS Icon", 0x3e61a, 0x3e63a, 0x07, 0x11 },
    { "Zangief CS Icon", 0x3e73a, 0x3e75a, 0x1, 0x11 },
};

const sGame_PaletteDataset MVC_A_CSIS_NEXT_PALETTES[] =
{
    { "Captain America", 0x3e5da + 0x1418A, 0x3e5fa + 0x1418A, 0x0B, 0x11 },
    { "Captain Commando", 0x3e6da + 0x1418A, 0x3e6fa + 0x1418A, 0x38, 0x11 },
    { "Chun-Li",        0x3e6fa + 0x1418A, 0x3e71a + 0x1418A, 0x1b, 0x11 },
    { "Gambit",         0x3e63a + 0x1418A, 0x3e65a + 0x1418A, 0x28, 0x11 },
    { "Hulk",           0x3e5fa + 0x1418A, 0x3e61a + 0x1418A, 0x0D, 0x11 },
    { "Jin",            0x3e71a + 0x1418A, 0x3e73a + 0x1418A, 0x37, 0x11 },
    { "Megaman",        0x3e79a + 0x1418A, 0x3e7ba + 0x1418A, 0x1C, 0x11 },
    { "Morrigan",       0x3e77a + 0x1418A, 0x3e79a + 0x1418A, 0x3, 0x11 },
    // The Roll Next is unused
    { "Ryu",            0x3e6ba + 0x1418A, 0x3e6da + 0x1418A, 0x0, 0x11 },
    { "Spider-Man",     0x3e67a + 0x1418A, 0x3e69a + 0x1418A, 0x0C, 0x11 },
    { "Strider Hiryu",  0x3e75a + 0x1418A, 0x3e77a + 0x1418A, 0x5, 0x11 },
    { "Venom",          0x3e65a + 0x1418A, 0x3e67a + 0x1418A, 0x0E, 0x11 },
    { "War Machine",    0x3e5ba + 0x1418A, 0x3e5da + 0x1418A, 0x2E, 0x11 },
    { "Wolverine",      0x3e61a + 0x1418A, 0x3e63a + 0x1418A, 0x07, 0x11 },
    { "Zangief",        0x3e73a + 0x1418A, 0x3e75a + 0x1418A, 0x1, 0x11 },
    { "Campaign Card Back", 0x52324, 0x52344, 0x3C, 0x20 },
};

const sGame_PaletteDataset MVC_A_BONUS_PALETTES[] =
{
    { "Life Bars & Meter Count", 0x479E4, 0x47A04, 0x3C, 0x50 },
    { "In-Game Text (Hit Counter, Stage Number, etc)", 0x47444, 0x47464, 0x3C, 0x51 },
    { "In-Game Text (Score, Play Status, Level, Character Names)", 0x47424, 0x47444, 0x3C, 0x52 },
    { "Test Menu Text", 0x3E4FA, 0x3E53A, 0x3C, 0x53 },
    { "Marvel License Text", 0x3E55A, 0x3E57A, 0x3C, 0x54 },
    { "QSound Patent Text", 0x3E57A, 0x3E59A, 0x3C, 0x55 },
};

const sDescTreeNode MVC_A_WARMACHINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_P1,         ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_P2,         ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_SHARED, ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_CAPAM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_P1,            ARRAYSIZE(MVC_A_CAPAM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_P2,            ARRAYSIZE(MVC_A_CAPAM_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_SHARED,    ARRAYSIZE(MVC_A_CAPAM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_HULK_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_P1,             ARRAYSIZE(MVC_A_HULK_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_P2,             ARRAYSIZE(MVC_A_HULK_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_EXTRAS,     ARRAYSIZE(MVC_A_HULK_PALETTES_EXTRAS) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_SHARED,     ARRAYSIZE(MVC_A_HULK_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_WOLVERINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_P1,         ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_P2,         ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_SHARED, ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_GAMBIT_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_P1,           ARRAYSIZE(MVC_A_GAMBIT_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_P2,           ARRAYSIZE(MVC_A_GAMBIT_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_SHARED,   ARRAYSIZE(MVC_A_GAMBIT_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_VENOM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_P1,            ARRAYSIZE(MVC_A_VENOM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_P2,            ARRAYSIZE(MVC_A_VENOM_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_SHARED,    ARRAYSIZE(MVC_A_VENOM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_SPIDEY_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_P1,           ARRAYSIZE(MVC_A_SPIDEY_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_P2,           ARRAYSIZE(MVC_A_SPIDEY_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_SHARED, ARRAYSIZE(MVC_A_SPIDEY_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ROLL_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_P1,             ARRAYSIZE(MVC_A_ROLL_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_P2,             ARRAYSIZE(MVC_A_ROLL_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_EXTRAS,             ARRAYSIZE(MVC_A_ROLL_PALETTES_EXTRAS) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_SHARED, ARRAYSIZE(MVC_A_ROLL_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_RYU_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_P1,              ARRAYSIZE(MVC_A_RYU_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_P2,              ARRAYSIZE(MVC_A_RYU_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_SHARED, ARRAYSIZE(MVC_A_RYU_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_CAPCOM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_P1,           ARRAYSIZE(MVC_A_CAPCOM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_P2,           ARRAYSIZE(MVC_A_CAPCOM_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_EXTRAS,   ARRAYSIZE(MVC_A_CAPCOM_PALETTES_EXTRAS) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_SHARED, ARRAYSIZE(MVC_A_CAPCOM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_CHUNLI_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_P1,           ARRAYSIZE(MVC_A_CHUNLI_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_P2,           ARRAYSIZE(MVC_A_CHUNLI_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_SHARED, ARRAYSIZE(MVC_A_CHUNLI_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_JIN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_P1,              ARRAYSIZE(MVC_A_JIN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_P2,              ARRAYSIZE(MVC_A_JIN_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_EXTRAS,      ARRAYSIZE(MVC_A_JIN_PALETTES_EXTRAS) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_SHARED,      ARRAYSIZE(MVC_A_JIN_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_GIEF_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_P1,             ARRAYSIZE(MVC_A_GIEF_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_P2,             ARRAYSIZE(MVC_A_GIEF_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_SHARED, ARRAYSIZE(MVC_A_GIEF_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_STRIDER_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_P1,          ARRAYSIZE(MVC_A_STRIDER_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_P2,          ARRAYSIZE(MVC_A_STRIDER_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_SHARED, ARRAYSIZE(MVC_A_STRIDER_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_MEGAMAN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_P1,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_P2,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_EXTRAS,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_EXTRAS) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_SHARED, ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_MORRIGAN_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_P1,         ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_P2,         ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_P2) },
    { "Extras", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_EXTRAS, ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_EXTRAS) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ONSLAUGHT_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PALETTES,        ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PALETTES_SHARED, ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_HYPERVENOM_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_P1,       ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_P2,       ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_SHARED, ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ORANGEHULK_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_P1,       ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_P2,       ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_SHARED, ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_GOLDWARMACHINE_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_P1,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_P2,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_SHARED, ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_SHADOWLADY_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_P1,       ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_P2,       ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_SHARED, ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_LILITH_COLLECTION[] =
{
    { "P1", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_P1,           ARRAYSIZE(MVC_A_LILITH_PALETTES_P1) },
    { "P2", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_P2,           ARRAYSIZE(MVC_A_LILITH_PALETTES_P2) },
    { "Shared", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_SHARED, ARRAYSIZE(MVC_A_LILITH_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ASSIST_COLLECTION[] =
{
    { "Assists",                      DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_PALETTES,           ARRAYSIZE(MVC_A_ASSIST_PALETTES) },
    { "Assist Icons",                 DESC_NODETYPE_TREE, (void*)MVC_A_ASSISTICON_PALETTES,       ARRAYSIZE(MVC_A_ASSISTICON_PALETTES) },
};

const sDescTreeNode MVC_A_CSIS_COLLECTION[] =
{
    { "Character Select Icons",       DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_PALETTES,             ARRAYSIZE(MVC_A_CSIS_PALETTES) },
    { "Campaign Cards",               DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_NEXT_PALETTES,        ARRAYSIZE(MVC_A_CSIS_NEXT_PALETTES) },
};

const sDescTreeNode MVC_A_PORTRAITS_COLLECTION[] =
{
    { "Character Select Portraits",   DESC_NODETYPE_TREE, (void*)MVC_A_CSP_PALETTES,              ARRAYSIZE(MVC_A_CSP_PALETTES) },
    { "Victory Screen Portraits",     DESC_NODETYPE_TREE, (void*)MVC_A_VSP_PALETTES,              ARRAYSIZE(MVC_A_VSP_PALETTES) },
    { "Super Portraits",              DESC_NODETYPE_TREE, (void*)MVC_A_SUPERPORT_PALETTES,        ARRAYSIZE(MVC_A_SUPERPORT_PALETTES) },
};

const sDescTreeNode MVC_A_BONUS_COLLECTION[] =
{
   { "Bonus",                         DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_PALETTES,            ARRAYSIZE(MVC_A_BONUS_PALETTES) },
};

const UINT8 MVC_A_UNITSORT[MVC_A_NUMUNIT + 1] = //Plus 1 for the extra palettes
{
    indexMVCCaptainAmerica,
    indexMVCCapCom,
    indexMVCChun,
    indexMVCGambit,
    indexMVCHulk,
    indexMVCJin,
    indexMVCLilith,
    indexMVCMegaman,
    indexMVCMorrigan,
    indexMVCOnslaught,
    indexMVCOrangeHulk,
    indexMVCRoll,
    indexMVCRyu,
    indexMVCShadowLady,
    indexMVCSpiderman,
    indexMVCStrider,
    indexMVCVenom,
    indexMVCHyperVenom,
    indexMVCWarMachine,
    indexMVCGWM,
    indexMVCWolverine,
    indexMVCGief,
    indexMVCAssists,
    indexMVCPortraits,
    indexMVCCSIs,
    indexMVCBonus,

    MVC_A_EXTRALOC //Extra palettes
};

const sDescTreeNode MVC_UNITS[MVC_A_NUMUNIT] =
{
    { "War Machine",                  DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_COLLECTION,       ARRAYSIZE(MVC_A_WARMACHINE_COLLECTION) },
    { "Captain America",              DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_COLLECTION,            ARRAYSIZE(MVC_A_CAPAM_COLLECTION) },
    { "Hulk",                         DESC_NODETYPE_TREE, (void*)MVC_A_HULK_COLLECTION,             ARRAYSIZE(MVC_A_HULK_COLLECTION) },
    { "Wolverine",                    DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_COLLECTION,        ARRAYSIZE(MVC_A_WOLVERINE_COLLECTION) },
    { "Venom",                        DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_COLLECTION,            ARRAYSIZE(MVC_A_VENOM_COLLECTION) },
    { "Spider-Man",                   DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_COLLECTION,           ARRAYSIZE(MVC_A_SPIDEY_COLLECTION) },
    { "Roll",                         DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_COLLECTION,             ARRAYSIZE(MVC_A_ROLL_COLLECTION) },
    { "Ryu",                          DESC_NODETYPE_TREE, (void*)MVC_A_RYU_COLLECTION,              ARRAYSIZE(MVC_A_RYU_COLLECTION) },
    { "Captain Commando",             DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_COLLECTION,           ARRAYSIZE(MVC_A_CAPCOM_COLLECTION) },
    { "Chun-Li",                      DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_COLLECTION,           ARRAYSIZE(MVC_A_CHUNLI_COLLECTION) },
    { "Jin",                          DESC_NODETYPE_TREE, (void*)MVC_A_JIN_COLLECTION,              ARRAYSIZE(MVC_A_JIN_COLLECTION) },
    { "Zangief",                      DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_COLLECTION,             ARRAYSIZE(MVC_A_GIEF_COLLECTION) },
    { "Strider",                      DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_COLLECTION,          ARRAYSIZE(MVC_A_STRIDER_COLLECTION) },
    { "Megaman",                      DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_COLLECTION,          ARRAYSIZE(MVC_A_MEGAMAN_COLLECTION) },
    { "Morrigan",                     DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_COLLECTION,         ARRAYSIZE(MVC_A_MORRIGAN_COLLECTION) },
    { "Onslaught",                    DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_COLLECTION,        ARRAYSIZE(MVC_A_ONSLAUGHT_COLLECTION) },
    { "Red Venom",                    DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_COLLECTION,       ARRAYSIZE(MVC_A_HYPERVENOM_COLLECTION) },
    { "Orange Hulk",                  DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_COLLECTION,       ARRAYSIZE(MVC_A_ORANGEHULK_COLLECTION) },
    { "Gold War Machine",             DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_COLLECTION,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_COLLECTION) },
    { "Shadow Lady",                  DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_COLLECTION,       ARRAYSIZE(MVC_A_SHADOWLADY_COLLECTION) },
    { "Lilith",                       DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_COLLECTION,           ARRAYSIZE(MVC_A_LILITH_COLLECTION) },
    { "Gambit",                       DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_COLLECTION,           ARRAYSIZE(MVC_A_GAMBIT_COLLECTION) },
    { "Assists",                      DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_COLLECTION,           ARRAYSIZE(MVC_A_ASSIST_COLLECTION) },
    { "Portraits",                    DESC_NODETYPE_TREE, (void*)MVC_A_PORTRAITS_COLLECTION,        ARRAYSIZE(MVC_A_PORTRAITS_COLLECTION) },
    { "Character Icons",              DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_COLLECTION,             ARRAYSIZE(MVC_A_CSIS_COLLECTION) },
    { "Bonus",                        DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_COLLECTION,            ARRAYSIZE(MVC_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the mvce.txt extensible extras file, if any.
const stExtraDef MVC_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
