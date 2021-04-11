#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of MVC_A_RYU_PALETTES. 
// * Update every array using MVC_A_NUMUNIT below
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
    { L"Ryu P1", 0x487c4, 0x487e4, indexCPS2_Ryu, 0x09 },
    { L"Ryu P1 Hadouken", 0x487e4, 0x48804, indexCPS2_Ryu, 1 },
    { L"Ryu P1 Extra", 0x48804, 0x48824 },
    { L"Ken P1", 0x4ec44, 0x4ec64, indexCPS2_Ryu, 0x09 },
    { L"Ken P1 Hakouken", 0x4ec64, 0x4ec84, indexCPS2_Ken, 1 },
    { L"Ken P1 Shoryuken", 0x4ec84, 0x4eca4, indexCPS2_Ken, 2 },
    { L"Akuma P1", 0x4ed04, 0x4ed24, indexCPS2_Ryu, 0x09 },
    { L"Akuma P1 Hadouken", 0x4ed24, 0x4ed44, indexCPS2_Akuma, 1 },
    { L"Akuma P1 Extra", 0x4ed44, 0x4ed64 },
    { L"Ken (Background) P1", 0x4ebC4, 0x4ebE4, indexCPS2_Ryu, 0xa },
    { L"Sean (Background) P1", 0x4ebE4, 0x4ec04, indexCPS2_Ryu, 0xb },
};

const sGame_PaletteDataset MVC_A_RYU_PALETTES_P2[] =
{
    { L"Ryu P2", 0x48824, 0x48844, indexCPS2_Ryu, 0x09 },
    { L"Ryu P2 Hadouken", 0x48844, 0x48864, indexCPS2_Ryu, 1 },
    { L"Ryu P2 Extra", 0x48864, 0x48884 },
    { L"Ken P2", 0x4eca4, 0x4ecc4, indexCPS2_Ryu, 0x09 },
    { L"Ken P2 Hadouken", 0x4ecc4, 0x4ece4, indexCPS2_Ken, 1 },
    { L"Ken P2 Shoryuken", 0x4ece4, 0x4ed04, indexCPS2_Ken, 2 },
    { L"Akuma P2", 0x4ed64, 0x4ed84, indexCPS2_Ryu, 0x09 },
    { L"Akuma P2 Hadouken", 0x4ed84, 0x4eda4, indexCPS2_Akuma, 1 },
    { L"Akuma P2 Extra", 0x4eda4, 0x4edc4 },
    { L"Ken (Background) P2", 0x4ec04, 0x4ec24, indexCPS2_Ryu, 0xa },
    { L"Sean (Background) P2", 0x4ec24, 0x4ec44, indexCPS2_Ryu, 0xb },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_P1[] =
{
    { L"P1 Color", 0x48ac4, 0x48ae4, indexCPS2_Zangief },
    { L"P1 Banishing Fist", 0x48ae4, 0x48b04, indexCPS2_Zangief, 1 },
    { L"Palette 3", 0x48b04, 0x48b24 },

    { L"P1 SPD Rage 1", 0x48bc4, 0x48be4, indexCPS2_Zangief },
    { L"P1 SPD Rage 2", 0x48be4, 0x48c04, indexCPS2_Zangief },
    { L"P1 SPD Rage 3", 0x48c04, 0x48c24, indexCPS2_Zangief },

    { L"Mech-Gief P1 Color", 0x48c84, 0x48ca4, indexCPS2_Zangief },
    { L"Mech-Gief P1 Yoga Flame", 0x48ca4, 0x48cc4, indexCPS2_Zangief, 3 },
    { L"Mech-Gief Palette 15", 0x48cc4, 0x48ce4, 0xff },

    { L"Mech-Gief P1 SPD Rage 1", 0x48D44, 0x48D64, indexCPS2_Zangief },
    { L"Mech-Gief P1 SPD Rage 2", 0x48D64, 0x48D84, indexCPS2_Zangief },
    { L"Mech-Gief P1 SPD Rage 3", 0x48D84, 0x48DA4, indexCPS2_Zangief },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_P2[] =
{
    { L"P2 Color", 0x48b24, 0x48b44, indexCPS2_Zangief },
    { L"P2 Banishing Fist", 0x48b44, 0x48b64, indexCPS2_Zangief, 1 },
    { L"Palette 6", 0x48b64, 0x48b84 },

    { L"P2 SPD Rage 1", 0x48c24, 0x48c44, indexCPS2_Zangief },
    { L"P2 SPD Rage 2", 0x48c44, 0x48c64, indexCPS2_Zangief },
    { L"P2 SPD Rage 3", 0x48c64, 0x48c84, indexCPS2_Zangief },

    { L"Mech-Gief P2 Color", 0x48ce4, 0x48d04, indexCPS2_Zangief },
    { L"Mech-Gief P2 Yoga Flame", 0x48d04, 0x48d24, indexCPS2_Zangief, 3 },
    { L"Mech-Gief Palette 18", 0x48d24, 0x48d44, 0xff },

    { L"Mech-Gief P2 SPD Rage 1", 0x48DA4, 0x48DC4, indexCPS2_Zangief },
    { L"Mech-Gief P2 SPD Rage 2", 0x48DC4, 0x48DE4, indexCPS2_Zangief },
    { L"Mech-Gief P2 SPD Rage 3", 0x48DE4, 0x48E04, indexCPS2_Zangief },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_P1[] =
{
    { L"P1 Color", 0x492e4, 0x49304, indexCPS2_ChunLi },
    { L"P1 Glimmer 1", 0x4ff64, 0x4ff84, indexCPS2_ChunLi },
    { L"P1 Glimmer 2", 0x4ff84, 0x4ffa4, indexCPS2_ChunLi },
    { L"P1 Glimmer 3", 0x4ffa4, 0x4ffc4, indexCPS2_ChunLi },
    { L"P1 Glimmer 4", 0x4ffc4, 0x4ffe4, indexCPS2_ChunLi },
    { L"P1 Glimmer 5", 0x4ffe4, 0x50004, indexCPS2_ChunLi },
    { L"P1 Glimmer 6", 0x50004, 0x50024, indexCPS2_ChunLi },
    { L"P1 Glimmer 7", 0x50024, 0x50044, indexCPS2_ChunLi },
    { L"P1 Glimmer 8", 0x50124, 0x50144, indexCPS2_ChunLi }, // this range jumping to xx124 is odd.
    { L"P1 Laser?", 0x50144, 0x50164 },
    { L"P1 Missiles", 0x50164, 0x50184 },
    { L"P1 Infinity Legs", 0x49304, 0x49324, indexCPS2_ChunLi, 0x0E },
    { L"P1 Shadow Leg Flash", 0x49324, 0x49344, indexCPS2_ChunLi, 0x0D },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_P2[] =
{
    { L"P2 Color", 0x49344, 0x49364, indexCPS2_ChunLi },
    { L"P2 Glimmer 1", 0x50044, 0x50064, indexCPS2_ChunLi },
    { L"P2 Glimmer 2", 0x50064, 0x50084, indexCPS2_ChunLi },
    { L"P2 Glimmer 3", 0x50084, 0x500A4, indexCPS2_ChunLi },
    { L"P2 Glimmer 4", 0x500A4, 0x500C4, indexCPS2_ChunLi },
    { L"P2 Glimmer 5", 0x500C4, 0x500E4, indexCPS2_ChunLi },
    { L"P2 Glimmer 6", 0x500E4, 0x50104, indexCPS2_ChunLi },
    { L"P2 Glimmer 7", 0x50104, 0x50124, indexCPS2_ChunLi },
    { L"P2 Glimmer 8", 0x50184, 0x501A4, indexCPS2_ChunLi }, // this range is odd?
    { L"P2 Laser?", 0x501A4, 0x501C4 },
    { L"P2 Missiles", 0x501C4, 0x501E4 },
    { L"P2 Infinity Legs", 0x49364, 0x49384, indexCPS2_ChunLi, 0x0E },
    { L"P2 Shadow Leg Flash", 0x49384, 0x493a4, indexCPS2_ChunLi, 0x0D },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_P1[] =
{
    { L"P1 Color", 0x48944, 0x48964, indexCPS2_ChunLi, 0, &pairNext },
    { L"P1 Keiokuken (shades)", 0x48964, 0x48984, indexCPS2_ChunLi, 1 },
    { L"P1 Kikosho", 0x48984, 0x489a4, indexCPS2_ChunLi, 2 },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_P2[] =
{
    { L"P2 Color", 0x489a4, 0x489c4, indexCPS2_ChunLi, 0, &pairNext },
    { L"P2 Keiokuken (shades)", 0x489c4, 0x489e4, indexCPS2_ChunLi, 1 },
    { L"P2 Kikosho", 0x489e4, 0x48a04, indexCPS2_ChunLi, 2 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_P1[] =
{
    { L"P1 Color", 0x48a04, 0x48a24, indexCPS2_Jin },
    { L"P1 Blodia FX", 0x48a24, 0x48a44, indexCPS2_Jin, 1 },
    { L"P1 Blodia Punch", 0x48a44, 0x48a64, indexCPS2_Jin, 2 },

    { L"P1 Saotome Shine / Meikyou Shishui 1", 0x4f3e4, 0x4f404, indexCPS2_Jin },
    { L"P1 Saotome Shine / Meikyou Shishui 2", 0x4f404, 0x4f424, indexCPS2_Jin },
    { L"P1 Saotome Shine / Meikyou Shishui 3", 0x4f424, 0x4f444, indexCPS2_Jin },
    { L"P1 Saotome Shine / Meikyou Shishui 4", 0x4f444, 0x4f464, indexCPS2_Jin },
    { L"P1 Saotome Shine / Meikyou Shishui 5", 0x4f464, 0x4f484, indexCPS2_Jin },
    { L"P1 Saotome Shine / Meikyou Shishui 6", 0x4f484, 0x4f4a4, indexCPS2_Jin },

    { L"P1 Burning Taunt 1", 0x4f7A4, 0x4f7C4, indexCPS2_Jin, 15 },
    { L"P1 Burning Taunt 2", 0x4f7C4, 0x4f7E4, indexCPS2_Jin, 15  },
    { L"P1 Burning Taunt 3", 0x4f7E4, 0x4f804, indexCPS2_Jin, 15  },
    { L"P1 Burning Taunt 4", 0x4f804, 0x4f824, indexCPS2_Jin, 15  },
    { L"P1 Burning Taunt 5", 0x4f824, 0x4f844, indexCPS2_Jin, 15  },
    { L"P1 Burning Taunt 6", 0x4f844, 0x4f864, indexCPS2_Jin, 15  },

    { L"P1 Leaving Blodia 1", 0x4f564, 0x4f584, indexCPS2_Jin, 11 },
    { L"P1 Leaving Blodia 2", 0x4f584, 0x4f5a4, indexCPS2_Jin, 11 },
    { L"P1 Leaving Blodia 3", 0x4f5a4, 0x4f5c4, indexCPS2_Jin, 11 },
    { L"P1 Leaving Blodia 4", 0x4f5c4, 0x4f5e4, indexCPS2_Jin, 11 },
    { L"P1 Leaving Blodia 5", 0x4f5e4, 0x4f604, indexCPS2_Jin, 11 },
    { L"P1 Leaving Blodia 6", 0x4f604, 0x4f624, indexCPS2_Jin, 11 },

    { L"P1 Vulcan Super (Hands)", 0x4f6e4, 0x4f704, indexCPS2_Jin, 12 },
    { L"P1 Vulcan Super (Muzzle Flash)", 0x4f704, 0x4f724, indexCPS2_Jin, 13 },
    { L"P1 Vulcan Super (Inside of Blodia)", 0x4f724, 0x4f744, indexCPS2_Jin, 14 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_P2[] =
{
    { L"P2 Color", 0x48a64, 0x48a84, indexCPS2_Jin },
    { L"P2 Blodia FX", 0x48a84, 0x48aa4, indexCPS2_Jin, 1 },
    { L"P2 Blodia Punch", 0x48aa4, 0x48ac4, indexCPS2_Jin, 2 },

    { L"P2 Saotome Shine / Meikyou Shishui 1", 0x4f4a4, 0x4f4C4, indexCPS2_Jin },
    { L"P2 Saotome Shine / Meikyou Shishui 2", 0x4f4c4, 0x4f4e4, indexCPS2_Jin },
    { L"P2 Saotome Shine / Meikyou Shishui 3", 0x4f4e4, 0x4f504, indexCPS2_Jin },
    { L"P2 Saotome Shine / Meikyou Shishui 4", 0x4f504, 0x4f524, indexCPS2_Jin },
    { L"P2 Saotome Shine / Meikyou Shishui 5", 0x4f524, 0x4f544, indexCPS2_Jin },
    { L"P2 Saotome Shine / Meikyou Shishui 6", 0x4f544, 0x4f564, indexCPS2_Jin },

    { L"P2 Burning Taunt 1", 0x4f864, 0x4f884, indexCPS2_Jin, 15  },
    { L"P2 Burning Taunt 2", 0x4f884, 0x4f8A4, indexCPS2_Jin, 15  },
    { L"P2 Burning Taunt 3", 0x4f8A4, 0x4f8C4, indexCPS2_Jin, 15  },
    { L"P2 Burning Taunt 4", 0x4f8C4, 0x4f8E4, indexCPS2_Jin, 15  },
    { L"P2 Burning Taunt 5", 0x4f8E4, 0x4f904, indexCPS2_Jin, 15  },
    { L"P2 Burning Taunt 6", 0x4f904, 0x4f924, indexCPS2_Jin, 15  },

    { L"P2 Leaving Blodia 1", 0x4f624, 0x4f644, indexCPS2_Jin, 11 },
    { L"P2 Leaving Blodia 2", 0x4f644, 0x4f664, indexCPS2_Jin, 11 },
    { L"P2 Leaving Blodia 3", 0x4f664, 0x4f684, indexCPS2_Jin, 11 },
    { L"P2 Leaving Blodia 4", 0x4f684, 0x4f6a4, indexCPS2_Jin, 11 },
    { L"P2 Leaving Blodia 5", 0x4f6a4, 0x4f6c4, indexCPS2_Jin, 11 },
    { L"P2 Leaving Blodia 6", 0x4f6c4, 0x4f6e4, indexCPS2_Jin, 11 },

    { L"P2 Vulcan Super (Hands)", 0x4f744, 0x4f764, indexCPS2_Jin, 12 },
    { L"P2 Vulcan Super (Muzzle Flash)", 0x4f764, 0x4f784, indexCPS2_Jin, 13 },
    { L"P2 Vulcan Super (Inside of Blodia)", 0x4f784, 0x4f7A4, indexCPS2_Jin, 14 },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_EXTRAS[] =
{
    { L"Ending Transformation", 0x4f924, 0x4f944, indexCPS2_Jin },
};

// Note that since this is eleventy palettes, the code is substituting the default Megaman sprite when 0xff is supplied.  
// To unwind that we would want to specify the correct sprites to use everywhere.  MM is 0x1C .
const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_P1[] =
{
    { L"Megaman P1", 0x48f84, 0x48fa4, indexCPS2_Megaman },
    { L"P1 Rush/Eddie", 0x48fa4, 0x48fc4, indexCPS2_Megaman, 0x0C },
    { L"P1 Beat", 0x48fc4, 0x48fe4, indexCPS2_Megaman, 0x2 },

    { L"P1 Hair", 0x4c044, 0x4c064, indexCPS2_Megaman, 0x26 }, // 09
    { L"P1 Teleport / Death Animation", 0x4c064, 0x4c084, indexCPS2_Megaman, 0x0B }, // 0A

    { L"P1 Intro 1", 0x4c084, 0x4c0a4, indexCPS2_Megaman }, // 0B
    { L"P1 Intro 2", 0x4c0a4, 0x4c0c4, indexCPS2_Megaman },
    { L"P1 Intro 3", 0x4c0c4, 0x4c0e4, indexCPS2_Megaman },
    { L"P1 Intro 4", 0x4c0e4, 0x4c104, indexCPS2_Megaman },
    { L"P1 Intro 5", 0x4c104, 0x4c124, indexCPS2_Megaman },
    { L"P1 Intro 6", 0x4c124, 0x4c144, indexCPS2_Megaman },
    { L"P1 Intro 7", 0x4c144, 0x4c164, indexCPS2_Megaman },
    { L"P1 Intro 8", 0x4c164, 0x4c184, indexCPS2_Megaman },
    { L"P1 Intro 9", 0x4c184, 0x4c1a4, indexCPS2_Megaman },

    { L"P1 Rush 1", 0x4c1a4, 0x4c1c4, indexCPS2_Megaman, 1 }, // 14
    { L"P1 Rush 2", 0x4c1c4, 0x4c1e4, indexCPS2_Megaman, 1 },
    { L"P1 Rush 3", 0x4c1e4, 0x4c204, indexCPS2_Megaman, 1 },
    { L"P1 Rush 4", 0x4c204, 0x4c224, indexCPS2_Megaman, 1 },
    { L"P1 Rush 5", 0x4c224, 0x4c244, indexCPS2_Megaman, 1 },
    { L"P1 Rush 6", 0x4c244, 0x4c264, indexCPS2_Megaman, 1 },
    { L"P1 Rush 7", 0x4c264, 0x4c284, indexCPS2_Megaman, 1 },
    { L"P1 Rush 8", 0x4c284, 0x4c2a4, indexCPS2_Megaman, 1 },
    { L"P1 Rush 9", 0x4c2a4, 0x4c2c4, indexCPS2_Megaman, 1 },

    { L"P1 Beat 1", 0x4c2c4, 0x4c2e4, indexCPS2_Megaman, 0x2 }, // 1D
    { L"P1 Beat 2", 0x4c2e4, 0x4c304, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 3", 0x4c304, 0x4c324, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 4", 0x4c324, 0x4c344, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 5", 0x4c344, 0x4c364, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 6", 0x4c364, 0x4c384, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 7", 0x4c384, 0x4c3a4, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 8", 0x4c3a4, 0x4c3c4, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 9", 0x4c3c4, 0x4c3e4, indexCPS2_Megaman, 0x2 },

    { L"P1 Beat Plane 1", 0x4c3e4, 0x4c404, indexCPS2_Megaman, 0x24 }, // 26
    { L"P1 Beat Plane 2", 0x4c404, 0x4c424, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 3", 0x4c424, 0x4c444, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 4", 0x4c444, 0x4c464, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 5", 0x4c464, 0x4c484, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 6", 0x4c484, 0x4c4a4, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 7", 0x4c4a4, 0x4c4c4, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 8", 0x4c4c4, 0x4c4e4, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 9", 0x4c4e4, 0x4c504, indexCPS2_Megaman, 0x24 },

    { L"P1 Charged HP 1", 0x4c504, 0x4c524, indexCPS2_Megaman }, // 2F
    { L"P1 Charged HP 2", 0x4c524, 0x4c544, indexCPS2_Megaman },
    { L"P1 Charged HP 3", 0x4c544, 0x4c564, indexCPS2_Megaman },
    { L"P1 Charged HP 4", 0x4c564, 0x4c584, indexCPS2_Megaman },
    { L"P1 Charged HP 5", 0x4c584, 0x4c5a4, indexCPS2_Megaman },
    { L"P1 Charged HP 6", 0x4c5a4, 0x4c5c4, indexCPS2_Megaman },
    { L"P1 Charged HP 7", 0x4c5c4, 0x4c5e4, indexCPS2_Megaman },
    { L"P1 Charged HP 8", 0x4c5e4, 0x4c604, indexCPS2_Megaman },
    { L"P1 Charged HP 9", 0x4c604, 0x4c624, indexCPS2_Megaman },

    { L"P1 Rush Drill 1", 0x4c624, 0x4c644, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill }, // 38
    { L"P1 Rush Drill 2", 0x4c644, 0x4c664, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 3", 0x4c664, 0x4c684, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 4", 0x4c684, 0x4c6a4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 5", 0x4c6a4, 0x4c6c4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 6", 0x4c6c4, 0x4c6e4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 7", 0x4c6e4, 0x4c704, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 8", 0x4c704, 0x4c724, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 9", 0x4c724, 0x4c744, indexCPS2_Roll, 0x0B },

    { L"P1 Rush Drill Metal 1", 0x4c9e4 + 0x0, 0x4c9e4 + 0x20, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 2", 0x4c9e4 + 0x20, 0x4c9e4 + 0x40, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 3", 0x4c9e4 + 0x40, 0x4c9e4 + 0x060, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 4", 0x4c9e4 + 0x060, 0x4c9e4 + 0x080, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 5", 0x4c9e4 + 0x080, 0x4c9e4 + 0x0A0, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 6", 0x4c9e4 + 0x0A0, 0x4c9e4 + 0x0C0, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 7", 0x4c9e4 + 0x0C0, 0x4c9e4 + 0x0E0, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 8", 0x4c9e4 + 0x0E0, 0x4c9e4 + 0x100, indexCPS2_Roll, 0x0C },

    { L"P1 Teleport Intro", 0x4c744, 0x4c764, indexCPS2_Megaman, 0x0D }, // 41
    { L"P1 Dr Light", 0x4c764, 0x4c784, indexCPS2_Megaman, 0x25 }, // 42

    { L"P1 Hyper Megaman Armor 1", 0x4c784, 0x4c7a4, indexCPS2_Megaman, 0x27, &pairHyperMegaman }, // 43
    { L"P1 Hyper Megaman Armor 2", 0x4c7a4, 0x4c7c4, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 3", 0x4c7c4, 0x4c7e4, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 4", 0x4c7e4, 0x4c804, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 5", 0x4c804, 0x4c824, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 6", 0x4c824, 0x4c844, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 7", 0x4c844, 0x4c864, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 8", 0x4c864, 0x4c884, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P1 Hyper Megaman Armor 9", 0x4c884, 0x4c8a4, indexCPS2_Megaman, 0x27, &pairHyperMegaman },

    { L"P1 Hyper Megaman 1", 0x4c8a4, 0x4c8c4, indexCPS2_Megaman, 0x28 }, // 4C
    { L"P1 Hyper Megaman 2", 0x4c8c4, 0x4c8e4, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 3", 0x4c8e4, 0x4c904, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 4", 0x4c904, 0x4c924, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 5", 0x4c924, 0x4c944, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 6", 0x4c944, 0x4c964, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 7", 0x4c964, 0x4c984, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 8", 0x4c984, 0x4c9a4, indexCPS2_Megaman, 0x28 },
    { L"P1 Hyper Megaman 9", 0x4c9a4, 0x4c9c4, indexCPS2_Megaman, 0x28 },

    { L"P1 Hyper Megaman Missiles", 0x4c9c4, 0x4c9e4, indexCPS2_Megaman, 0x29 }, // 55

    { L"P1 Roll Win Pose", 0x4cae4, 0x4cb04, indexCPS2_Roll }, // 5E
    { L"P1 Magnetic Megaman", 0x4cb04, 0x4cb24, indexCPS2_Megaman }, // 5F
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_P2[] =
{
    { L"Megaman P2", 0x48fe4, 0x49004, indexCPS2_Megaman },
    { L"P2 Rush/Eddie", 0x49004, 0x49024, indexCPS2_Megaman, 0x0C },
    { L"P2 Beat", 0x49024, 0x49044, indexCPS2_Megaman, 0x2 },

    { L"P2 Hair", 0x4cb24, 0x4cb44, indexCPS2_Megaman, 0x26 },
    { L"P2 Teleport Intro / Death Animation", 0x4cb44, 0x4cb64, indexCPS2_Megaman, 0x0B },

    { L"P2 Intro 1", 0x4cb64, 0x4cb84, indexCPS2_Megaman },
    { L"P2 Intro 2", 0x4cb84, 0x4cba4, indexCPS2_Megaman },
    { L"P2 Intro 3", 0x4cba4, 0x4cbc4, indexCPS2_Megaman },
    { L"P2 Intro 4", 0x4cbc4, 0x4cbe4, indexCPS2_Megaman },
    { L"P2 Intro 5", 0x4cbe4, 0x4cc04, indexCPS2_Megaman },
    { L"P2 Intro 6", 0x4cc04, 0x4cc24, indexCPS2_Megaman },
    { L"P2 Intro 7", 0x4cc24, 0x4cc44, indexCPS2_Megaman },
    { L"P2 Intro 8", 0x4cc44, 0x4cc64, indexCPS2_Megaman },
    { L"P2 Intro 9", 0x4cc64, 0x4cc84, indexCPS2_Megaman },

    { L"P2 Rush 1", 0x4cc84, 0x4cca4, indexCPS2_Megaman, 1 },
    { L"P2 Rush 2", 0x4cca4, 0x4ccc4, indexCPS2_Megaman, 1 },
    { L"P2 Rush 3", 0x4ccc4, 0x4cce4, indexCPS2_Megaman, 1 },
    { L"P2 Rush 4", 0x4cce4, 0x4cd04, indexCPS2_Megaman, 1 },
    { L"P2 Rush 5", 0x4cd04, 0x4cd24, indexCPS2_Megaman, 1 },
    { L"P2 Rush 6", 0x4cd24, 0x4cd44, indexCPS2_Megaman, 1 },
    { L"P2 Rush 7", 0x4cd44, 0x4cd64, indexCPS2_Megaman, 1 },
    { L"P2 Rush 8", 0x4cd64, 0x4cd84, indexCPS2_Megaman, 1 },
    { L"P2 Rush 9", 0x4cd84, 0x4cda4, indexCPS2_Megaman, 1 },

    { L"P2 Beat 1", 0x4cda4, 0x4cdc4, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 2", 0x4cdc4, 0x4cde4, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 3", 0x4cde4, 0x4ce04, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 4", 0x4ce04, 0x4ce24, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 5", 0x4ce24, 0x4ce44, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 6", 0x4ce44, 0x4ce64, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 7", 0x4ce64, 0x4ce84, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 8", 0x4ce84, 0x4cea4, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 9", 0x4cea4, 0x4cec4, indexCPS2_Megaman, 0x2 },

    { L"P2 Beat Plane 1", 0x4cec4, 0x4cee4, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 2", 0x4cee4, 0x4cf04, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 3", 0x4cf04, 0x4cf24, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 4", 0x4cf24, 0x4cf44, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 5", 0x4cf44, 0x4cf64, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 6", 0x4cf64, 0x4cf84, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 7", 0x4cf84, 0x4cfa4, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 8", 0x4cfa4, 0x4cfc4, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 9", 0x4cfc4, 0x4cfe4, indexCPS2_Megaman, 0x24 },

    { L"P2 Charged HP 1", 0x4cfe4, 0x4d004, indexCPS2_Megaman },
    { L"P2 Charged HP 2", 0x4d004, 0x4d024, indexCPS2_Megaman },
    { L"P2 Charged HP 3", 0x4d024, 0x4d044, indexCPS2_Megaman },
    { L"P2 Charged HP 4", 0x4d044, 0x4d064, indexCPS2_Megaman },
    { L"P2 Charged HP 5", 0x4d064, 0x4d084, indexCPS2_Megaman },
    { L"P2 Charged HP 6", 0x4d084, 0x4d0a4, indexCPS2_Megaman },
    { L"P2 Charged HP 7", 0x4d0a4, 0x4d0c4, indexCPS2_Megaman },
    { L"P2 Charged HP 8", 0x4d0c4, 0x4d0e4, indexCPS2_Megaman },
    { L"P2 Charged HP 9", 0x4d0e4, 0x4d104, indexCPS2_Megaman },

    { L"P2 Rush Drill 1", 0x4d104, 0x4d124, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 2", 0x4d124, 0x4d144, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 3", 0x4d144, 0x4d164, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 4", 0x4d164, 0x4d184, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 5", 0x4d184, 0x4d1a4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 6", 0x4d1a4, 0x4d1c4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 7", 0x4d1c4, 0x4d1e4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 8", 0x4d1e4, 0x4d204, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 9", 0x4d204, 0x4d224, indexCPS2_Roll, 0x0B }, // 97

    // Presented out of order because they are associated
    { L"P2 Rush Drill Metal 1", 0x4d4c4 + 0x0, 0x4d4c4 + 0x20, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 2", 0x4d4c4 + 0x20, 0x4d4c4 + 0x40, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 3", 0x4d4c4 + 0x40, 0x4d4c4 + 0x060, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 4", 0x4d4c4 + 0x060, 0x4d4c4 + 0x080, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 5", 0x4d4c4 + 0x080, 0x4d4c4 + 0x0A0, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 6", 0x4d4c4 + 0x0A0, 0x4d4c4 + 0x0C0, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 7", 0x4d4c4 + 0x0C0, 0x4d4c4 + 0x0E0, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 8", 0x4d4c4 + 0x0E0, 0x4d4c4 + 0x100, indexCPS2_Roll, 0x0C },


    { L"P2 Teleport Intro", 0x4d224, 0x4d244, indexCPS2_Megaman, 0x0D },
    { L"P2 Dr Light", 0x4d244, 0x4d264, indexCPS2_Megaman, 0x25 },

    { L"P2 Hyper Megaman Armor 1", 0x4d264, 0x4d284, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 2", 0x4d284, 0x4d2a4, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 3", 0x4d2a4, 0x4d2c4, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 4", 0x4d2c4, 0x4d2e4, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 5", 0x4d2e4, 0x4d304, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 6", 0x4d304, 0x4d324, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 7", 0x4d324, 0x4d344, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 8", 0x4d344, 0x4d364, indexCPS2_Megaman, 0x27, &pairHyperMegaman },
    { L"P2 Hyper Megaman Armor 9", 0x4d364, 0x4d384, indexCPS2_Megaman, 0x27, &pairHyperMegaman }, // a2

    { L"P2 Hyper Megaman 1", 0x4d384, 0x4d3a4, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 2", 0x4d3a4, 0x4d3c4, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 3", 0x4d3c4, 0x4d3e4, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 4", 0x4d3e4, 0x4d404, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 5", 0x4d404, 0x4d424, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 6", 0x4d424, 0x4d444, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 7", 0x4d444, 0x4d464, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 8", 0x4d464, 0x4d484, indexCPS2_Megaman, 0x28 },
    { L"P2 Hyper Megaman 9", 0x4d484, 0x4d4a4, indexCPS2_Megaman, 0x28 }, // ab

    { L"P2 Hyper Megaman Missiles", 0x4d4a4, 0x4d4c4, indexCPS2_Megaman, 0x29 }, // ac

    { L"P2 Roll Win Pose", 0x4d5c4, 0x4d5e4, indexCPS2_Roll },
    { L"P2 Magnetic Megaman", 0x4d5e4, 0x4d604, indexCPS2_Megaman },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_EXTRAS[] =
{
    // { L"Megaman FX", 0x590E4, 0x59144 }, ?

    // This contains unpaired or unconfirmed palettes
    { L"P1 Megaman Extra", 0x4e0a4, 0x4e0c4, indexCPS2_Megaman },
    { L"P1 Magnetic Megaman", 0x4e0c4, 0x4e0e4, indexCPS2_Megaman },

    { L"P1 ? 1", 0x4de64, 0x4de84, indexCPS2_Megaman },
    { L"P1 ? 2", 0x4de84, 0x4dea4, indexCPS2_Megaman },
    { L"P1 ? 3", 0x4dea4, 0x4dec4, indexCPS2_Megaman },
    { L"P1 ? 4", 0x4dec4, 0x4dee4, indexCPS2_Megaman },
    { L"P1 ? 5", 0x4dee4, 0x4df04, indexCPS2_Megaman },
    { L"P1 ? 6", 0x4df04, 0x4df24, indexCPS2_Megaman },
    { L"P1 ? 7", 0x4df24, 0x4df44, indexCPS2_Megaman },
    { L"P1 ? 8", 0x4df44, 0x4df64, indexCPS2_Megaman },
    { L"P1 ? 9", 0x4df64, 0x4df84, indexCPS2_Megaman },

    { L"P2 ? 1", 0x4e944, 0x4e964, indexCPS2_Megaman },
    { L"P2 ? 2", 0x4e964, 0x4e984, indexCPS2_Megaman },
    { L"P2 ? 3", 0x4e984, 0x4e9a4, indexCPS2_Megaman },
    { L"P2 ? 4", 0x4e9a4, 0x4e9c4, indexCPS2_Megaman },
    { L"P2 ? 5", 0x4e9c4, 0x4e9e4, indexCPS2_Megaman },
    { L"P2 ? 6", 0x4e9e4, 0x4ea04, indexCPS2_Megaman },
    { L"P2 ? 7", 0x4ea04, 0x4ea24, indexCPS2_Megaman },
    { L"P2 ? 8", 0x4ea24, 0x4ea44, indexCPS2_Megaman },
    { L"P2 ? 9", 0x4ea44, 0x4ea64, indexCPS2_Megaman }, //54ish
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_P1[] =
{
    { L"P1 Color", 0x48704, 0x48724, indexCPS2_Roll },
    { L"P1 Rush/Eddie", 0x48724, 0x48744, indexCPS2_Megaman, 0x0C },
    { L"P1 Beat", 0x48744, 0x48764, indexCPS2_Megaman, 0x2 },

    { L"P1 Megaman Hair", 0x4d604, 0x4d624, indexCPS2_Megaman, 0x26 },
    { L"P1 Intro / Death Animation", 0x4d624, 0x4d644, indexCPS2_Megaman, 0x0B },

    { L"P1 Intro 1", 0x4d644, 0x4d664, indexCPS2_Roll },
    { L"P1 Intro 2", 0x4d664, 0x4d684, indexCPS2_Roll },
    { L"P1 Intro 3", 0x4d684, 0x4d6a4, indexCPS2_Roll },
    { L"P1 Intro 4", 0x4d6a4, 0x4d6c4, indexCPS2_Roll },
    { L"P1 Intro 5", 0x4d6c4, 0x4d6e4, indexCPS2_Roll },
    { L"P1 Intro 6", 0x4d6e4, 0x4d704, indexCPS2_Roll },
    { L"P1 Intro 7", 0x4d704, 0x4d724, indexCPS2_Roll },
    { L"P1 Intro 8", 0x4d724, 0x4d744, indexCPS2_Roll },
    { L"P1 Intro 9", 0x4d744, 0x4d764, indexCPS2_Roll },

    { L"P1 Rush/Eddie 1", 0x4d764, 0x4d784, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 2", 0x4d784, 0x4d7a4, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 3", 0x4d7a4, 0x4d7c4, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 4", 0x4d7c4, 0x4d7e4, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 5", 0x4d7e4, 0x4d804, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 6", 0x4d804, 0x4d824, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 7", 0x4d824, 0x4d844, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 8", 0x4d844, 0x4d864, indexCPS2_Megaman, 1 },
    { L"P1 Rush/Eddie 9", 0x4d864, 0x4d884, indexCPS2_Megaman, 1 },

    { L"P1 Beat 1", 0x4d884, 0x4d8a4, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 2", 0x4d8a4, 0x4d8c4, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 3", 0x4d8c4, 0x4d8e4, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 4", 0x4d8e4, 0x4d904, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 5", 0x4d904, 0x4d924, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 6", 0x4d924, 0x4d944, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 7", 0x4d944, 0x4d964, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 8", 0x4d964, 0x4d984, indexCPS2_Megaman, 0x2 },
    { L"P1 Beat 9", 0x4d984, 0x4d9a4, indexCPS2_Megaman, 0x2 },

    { L"P1 Beat Plane 1", 0x4d9a4, 0x4d9c4, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 2", 0x4d9c4, 0x4d9e4, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 3", 0x4d9e4, 0x4da04, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 4", 0x4da04, 0x4da24, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 5", 0x4da24, 0x4da44, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 6", 0x4da44, 0x4da64, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 7", 0x4da64, 0x4da84, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 8", 0x4da84, 0x4daa4, indexCPS2_Megaman, 0x24 },
    { L"P1 Beat Plane 9", 0x4daa4, 0x4dac4, indexCPS2_Megaman, 0x24 },

    { L"P1 Rush Drill 1", 0x4dbe4, 0x4dc04, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 2", 0x4dc04, 0x4dc24, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 3", 0x4dc24, 0x4dc44, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 4", 0x4dc44, 0x4dc64, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 5", 0x4dc64, 0x4dc84, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 6", 0x4dc84, 0x4dca4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 7", 0x4dca4, 0x4dcc4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 8", 0x4dcc4, 0x4dce4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P1 Rush Drill 9", 0x4dce4, 0x4dd04, indexCPS2_Roll, 0x0B },

    { L"P1 Rush Drill Metal 1", 0x4dfa4, 0x4dfc4, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 2", 0x4dfc4, 0x4dfe4, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 3", 0x4dfe4, 0x4e004, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 4", 0x4e004, 0x4e024, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 5", 0x4e024, 0x4e044, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 6", 0x4e044, 0x4e064, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 7", 0x4e064, 0x4e084, indexCPS2_Roll, 0x0C },
    { L"P1 Rush Drill Metal 8", 0x4e084, 0x4e0a4, indexCPS2_Roll, 0x0C },

    { L"P1 Teleport Intro", 0x4dd04, 0x4dd24, indexCPS2_Megaman, 0x0D },
    { L"P1 Dr Light", 0x4dd24, 0x4dd44, indexCPS2_Megaman, 0x25 },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_P2[] =
{
    { L"P2 Color", 0x48764, 0x48784, indexCPS2_Roll },
    { L"P2 Rush/Eddie", 0x48784, 0x487a4, indexCPS2_Megaman, 0x0C },
    { L"P2 Beat", 0x487a4, 0x487c4, indexCPS2_Megaman, 0x2 }, // 09 : these numbers align to the mvc2 extra ids as identified in the Palette Variant Full spreadsheet

    { L"P2 Megaman Hair", 0x4e0e4, 0x4e104, indexCPS2_Megaman, 0x26 },
    { L"P2 Intro / Death Animation", 0x4e104, 0x4e124, indexCPS2_Megaman, 0x0B },

    { L"P2 Intro 1", 0x4e124, 0x4e144, indexCPS2_Roll },
    { L"P2 Intro 2", 0x4e144, 0x4e164, indexCPS2_Roll },
    { L"P2 Intro 3", 0x4e164, 0x4e184, indexCPS2_Roll },
    { L"P2 Intro 4", 0x4e184, 0x4e1a4, indexCPS2_Roll },
    { L"P2 Intro 5", 0x4e1a4, 0x4e1c4, indexCPS2_Roll },
    { L"P2 Intro 6", 0x4e1c4, 0x4e1e4, indexCPS2_Roll },
    { L"P2 Intro 7", 0x4e1e4, 0x4e204, indexCPS2_Roll },
    { L"P2 Intro 8", 0x4e204, 0x4e224, indexCPS2_Roll },
    { L"P2 Intro 9", 0x4e224, 0x4e244, indexCPS2_Roll },

    { L"P2 Rush/Eddie 1", 0x4e244, 0x4e264, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 2", 0x4e264, 0x4e284, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 3", 0x4e284, 0x4e2a4, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 4", 0x4e2a4, 0x4e2c4, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 5", 0x4e2c4, 0x4e2e4, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 6", 0x4e2e4, 0x4e304, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 7", 0x4e304, 0x4e324, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 8", 0x4e324, 0x4e344, indexCPS2_Megaman, 1 },
    { L"P2 Rush/Eddie 9", 0x4e344, 0x4e364, indexCPS2_Megaman, 1 },

    { L"P2 Beat 1", 0x4e364, 0x4e384, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 2", 0x4e384, 0x4e3a4, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 3", 0x4e3a4, 0x4e3c4, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 4", 0x4e3c4, 0x4e3e4, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 5", 0x4e3e4, 0x4e404, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 6", 0x4e404, 0x4e424, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 7", 0x4e424, 0x4e444, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 8", 0x4e444, 0x4e464, indexCPS2_Megaman, 0x2 },
    { L"P2 Beat 9", 0x4e464, 0x4e484, indexCPS2_Megaman, 0x2 },

    { L"P2 Beat Plane 1", 0x4e484, 0x4e4a4, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 2", 0x4e4a4, 0x4e4c4, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 3", 0x4e4c4, 0x4e4e4, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 4", 0x4e4e4, 0x4e504, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 5", 0x4e504, 0x4e524, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 6", 0x4e524, 0x4e544, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 7", 0x4e544, 0x4e564, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 8", 0x4e564, 0x4e584, indexCPS2_Megaman, 0x24 },
    { L"P2 Beat Plane 9", 0x4e584, 0x4e5a4, indexCPS2_Megaman, 0x24 },

    { L"P2 Rush Drill 1", 0x4e6c4, 0x4e6e4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 2", 0x4e6e4, 0x4e704, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 3", 0x4e704, 0x4e724, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 4", 0x4e724, 0x4e744, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 5", 0x4e744, 0x4e764, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 6", 0x4e764, 0x4e784, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 7", 0x4e784, 0x4e7a4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 8", 0x4e7a4, 0x4e7c4, indexCPS2_Roll, 0x0B, &pairMVC1RushDrill },
    { L"P2 Rush Drill 9", 0x4e7c4, 0x4e7e4, indexCPS2_Roll, 0x0B },

    { L"P2 Rush Drill Metal 1", 0x4ea84, 0x4eaa4, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 2", 0x4eaa4, 0x4eac4, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 3", 0x4eac4, 0x4eae4, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 4", 0x4eae4, 0x4eb04, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 5", 0x4eb04, 0x4eb24, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 6", 0x4eb24, 0x4eb44, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 7", 0x4eb44, 0x4eb64, indexCPS2_Roll, 0x0C },
    { L"P2 Rush Drill Metal 8", 0x4eb64, 0x4eb84, indexCPS2_Roll, 0x0C },

    { L"P2 Teleport Intro", 0x4e7e4, 0x4e804, indexCPS2_Megaman, 0x0D },
    { L"P2 Dr Light", 0x4e804, 0x4e824, indexCPS2_Megaman, 0x25 },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_EXTRAS[] =
{
    { L"P1 Charging Roll 1", 0x4dac4, 0x4dae4, indexCPS2_Roll },
    { L"P1 Charging Roll 2", 0x4dae4, 0x4db04, indexCPS2_Roll },
    { L"P1 Charging Roll 3", 0x4db04, 0x4db24, indexCPS2_Roll },
    { L"P1 Charging Roll 4", 0x4db24, 0x4db44, indexCPS2_Roll },
    { L"P1 Charging Roll 5", 0x4db44, 0x4db64, indexCPS2_Roll },
    { L"P1 Charging Roll 6", 0x4db64, 0x4db84, indexCPS2_Roll },
    { L"P1 Charging Roll 7", 0x4db84, 0x4dba4, indexCPS2_Roll },
    { L"P1 Charging Roll 8", 0x4dba4, 0x4dbc4, indexCPS2_Roll },
    { L"P1 Charging Roll 9", 0x4dbc4, 0x4dbe4, indexCPS2_Roll },

    { L"P1 Hyper Roll Armor 1", 0x4dd44, 0x4dd64 },
    { L"P1 Hyper Roll Armor 2", 0x4dd64, 0x4dd84 },
    { L"P1 Hyper Roll Armor 3", 0x4dd84, 0x4dda4 },
    { L"P1 Hyper Roll Armor 4", 0x4dda4, 0x4ddc4 },
    { L"P1 Hyper Roll Armor 5", 0x4ddc4, 0x4dde4 },
    { L"P1 Hyper Roll Armor 6", 0x4dde4, 0x4de04 },
    { L"P1 Hyper Roll Armor 7", 0x4de04, 0x4de24 },
    { L"P1 Hyper Roll Armor 8", 0x4de24, 0x4de44 },
    { L"P1 Hyper Roll Armor 9", 0x4de44, 0x4de64 },

    // 0x4DE64-0x4DF64 are Megaman

    { L"P1 Hyper Roll Missiles", 0x4df84, 0x4dfa4 },

    { L"P2 Charging Roll 1", 0x4e5a4, 0x4e5c4, indexCPS2_Roll },
    { L"P2 Charging Roll 2", 0x4e5c4, 0x4e5e4, indexCPS2_Roll },
    { L"P2 Charging Roll 3", 0x4e5e4, 0x4e604, indexCPS2_Roll },
    { L"P2 Charging Roll 4", 0x4e604, 0x4e624, indexCPS2_Roll },
    { L"P2 Charging Roll 5", 0x4e624, 0x4e644, indexCPS2_Roll },
    { L"P2 Charging Roll 6", 0x4e644, 0x4e664, indexCPS2_Roll },
    { L"P2 Charging Roll 7", 0x4e664, 0x4e684, indexCPS2_Roll },
    { L"P2 Charging Roll 8", 0x4e684, 0x4e6a4, indexCPS2_Roll },
    { L"P2 Charging Roll 9", 0x4e6a4, 0x4e6c4, indexCPS2_Roll },

    { L"P2 Hyper Roll Armor 1", 0x4e824, 0x4e844 },
    { L"P2 Hyper Roll Armor 2", 0x4e844, 0x4e864 },
    { L"P2 Hyper Roll Armor 3", 0x4e864, 0x4e884 },
    { L"P2 Hyper Roll Armor 4", 0x4e884, 0x4e8a4 },
    { L"P2 Hyper Roll Armor 5", 0x4e8a4, 0x4e8c4 },
    { L"P2 Hyper Roll Armor 6", 0x4e8c4, 0x4e8e4 },
    { L"P2 Hyper Roll Armor 7", 0x4e8e4, 0x4e904 },
    { L"P2 Hyper Roll Armor 8", 0x4e904, 0x4e924 },
    { L"P2 Hyper Roll Armor 9", 0x4e924, 0x4e944 },

    { L"P2 Hyper Roll Missiles", 0x4ea64, 0x4ea84 },

    { L"P2 Megaman", 0x4eb84, 0x4eba4, indexCPS2_Megaman },
    { L"P2 Magnetic Shockwave Megaman", 0x4eba4, 0x4ebc4, indexCPS2_Megaman },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PALETTES[] =
{
    { L"Charles Intro", 0x49084, 0x490a4, indexCPS2_Onslaught, 0x1 },
    { L"Charles (Defeated)", 0x4C004, 0x4C024, indexCPS2_Onslaught, 0x07 },
    { L"Body (1st Form)", 0x49044, 0x49064, indexCPS2_Onslaught },
    { L"Main Body (2nd Form)", 0x38DFA, 0x38E1A, indexCPS2_Onslaught, 0x3 },
    { L"Main Body & Arm (2nd Form)", 0x4BBA4, 0x4BBC4, indexCPS2_Onslaught, 0x4 },
    { L"Head / Neck  (2nd Form)", 0x4BFA4, 0x4BFC4, indexCPS2_Onslaught, 0x0F },
    { L"Main Body Glimmer 1", 0x4BBC4, 0x4BBE4, indexCPS2_Onslaught },
    { L"Main Body Glimmer 2", 0x4BBE4, 0x4BC04, indexCPS2_Onslaught },
    { L"Main Body Glimmer 3", 0x4BC04, 0x4BC24, indexCPS2_Onslaught },
    { L"Teleport 1", 0x4BC64, 0x4BC84, indexCPS2_Onslaught },
    { L"Teleport 2", 0x4BC84, 0x4BCA4, indexCPS2_Onslaught },
    { L"Body Ram (Body)", 0x4BD24, 0x4BD44, indexCPS2_Onslaught, 0x08, &pairOnslaught },
    { L"Body Ram (Effect)", 0x4BD44, 0x4BD64, indexCPS2_Onslaught, 0x09 },
    { L"Magnetic Shockwave", 0x4BC44, 0x4BC64, indexCPS2_Onslaught, 0x06 },
    { L"Magnetic Tempest", 0x4BCC4, 0x4BCE4, indexCPS2_Onslaught, 0x0A },
    { L"Hyper Grav", 0x4BCA4, 0x4BCC4, indexCPS2_Onslaught, 0x5 },
    { L"Sparkles", 0x49064, 0x49084, indexCPS2_Onslaught, 0x2 },
    { L"Bystander", 0x4BD64, 0x4BD84, indexCPS2_Onslaught, 0x0B },
    { L"Bystander 2", 0x4BD84, 0x4BDA4, indexCPS2_Onslaught, 0x0B },
    { L"Skull Pain 1", 0x4BE24, 0x4BE44, indexCPS2_Onslaught, 0x0C },
    { L"Skull Pain 2", 0x4BE44, 0x4BE64, indexCPS2_Onslaught, 0x0C },
    { L"Skull Pain 3", 0x4BE64, 0x4BE84, indexCPS2_Onslaught, 0x0C },
    { L"Mind Blast (StartUp)", 0x4BDC4, 0x4BDE4, indexCPS2_Onslaught, 0x0D },
    { L"Mind Blast (Beam 1, 1st Form)", 0x4BDE4, 0x4BE04, indexCPS2_Onslaught, 0x0E },
    { L"Mind Blast (Beam 2, 1st Form)",  0x4BE04, 0x4BE24, indexCPS2_Onslaught, 0x0E },
    { L"KO Orbs 1", 0x4BFC4, 0x4BFE4, indexCPS2_Onslaught, 0x20 },
    { L"KO Orbs 2", 0x4BFE4, 0x4C004, indexCPS2_Onslaught, 0x20 },
    { L"Onslaught Sentinel", 0x4BD04, 0x4BD24, indexCPS2_Sentinel, 0xc },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_P1[] =
{
    { L"P1 Color", 0x481c4, 0x481e4, indexCPS2_WarMachine },
    { L"P1 Proton Cannon / War Destroyer", 0x481e4, 0x48204, indexCPS2_WarMachine, 1 },
    { L"P1 Beams/Blasts/Effect", 0x48204, 0x48224, indexCPS2_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_P2[] =
{
    { L"P2 Color", 0x48224, 0x48244, indexCPS2_WarMachine },
    { L"P2 Proton Cannon / War Destroyer", 0x48244, 0x48264, indexCPS2_WarMachine, 1 },
    { L"P2 Beams / Blasts / Effect", 0x48264, 0x48284, indexCPS2_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_P1[] =
{
    { L"P1 Color", 0x49224, 0x49244, indexCPS2_WarMachine },
    { L"P1 Proton Cannon / War Destroyer", 0x49244, 0x49264, indexCPS2_WarMachine, 1 },
    { L"P1 Beams / Blasts / Effect", 0x49264, 0x49284, indexCPS2_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_P2[] =
{
    { L"P2 Color", 0x49284, 0x492a4, indexCPS2_WarMachine },
    { L"P2 Proton Cannon / War Destroyer", 0x492a4, 0x492c4, indexCPS2_WarMachine, 1 },
    { L"P2 Beams / Blasts / Effect", 0x492c4, 0x492e4, indexCPS2_WarMachine, 2 },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_EXTRAS[] =
{
    { L"Armor P1+P2 Shared", 0x501e4, 0x50204, indexCPS2_WarMachine },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_P1[] =
{
    { L"P1 Color", 0x48284, 0x482a4, indexCPS2_CapAm, 0, &pairNext },
    { L"P1 Shield", 0x482a4, 0x482c4, indexCPS2_CapAm, 1 },
    { L"P1 Charging Star", 0x482c4, 0x482e4, indexCPS2_CapAm, 2 },
    { L"P1 Eagle", 0x591E4, 0x59204, indexCPS2_CapAm, 3 },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_P2[] =
{
    { L"P2 Color", 0x482e4, 0x48304, indexCPS2_CapAm, 0, &pairNext },
    { L"P2 Shield", 0x48304, 0x48324, indexCPS2_CapAm, 1 },
    { L"P2 Charging Star", 0x48324, 0x48344, indexCPS2_CapAm, 2 },
    { L"P2 Eagle", 0x59204, 0x59224, indexCPS2_CapAm, 3 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_P1[] =
{
    { L"P1 Color", 0x48344, 0x48364, indexCPS2_Hulk },
    { L"P1 Charge", 0x48364, 0x48384, indexCPS2_Hulk, 1 },
    { L"P1 Gamma Quake", 0x48384, 0x483a4, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_P2[] =
{
    { L"P2 Color", 0x483a4, 0x483c4, indexCPS2_Hulk },
    { L"P2 Charge", 0x483c4, 0x483e4, indexCPS2_Hulk, 1 },
    { L"P2 Gamma Quake", 0x483e4, 0x48404, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_EXTRAS[] =
{
    { L"Hulk Armor P1+P2 Shared", 0x4F3A4, 0x4F3C4, indexCPS2_Hulk },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_P1[] =
{
    { L"P1 Color", 0x49164, 0x49184, indexCPS2_Hulk },
    { L"P1 Charge", 0x49184, 0x491a4, indexCPS2_Hulk, 1 },
    { L"P1 Gamma Quake", 0x491a4, 0x491c4, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_P2[] =
{
    { L"P2 Color", 0x491c4, 0x491e4, indexCPS2_Hulk },
    { L"P2 Charge", 0x491e4, 0x49204, indexCPS2_Hulk, 1 },
    { L"P2 Gamma Quake", 0x49204, 0x49224, indexCPS2_Hulk, 2 },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_P1[] =
{
    { L"P1 Color", 0x48404, 0x48424, indexCPS2_Wolverine, 0, &pairNext },
    { L"P1 Claws", 0x48424, 0x48444, indexCPS2_Wolverine, 1 },
    { L"P1 Berserker FX", 0x48444, 0x48464, indexCPS2_Wolverine, 2 },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_P2[] =
{
    { L"P2 Color", 0x48464, 0x48484, indexCPS2_Wolverine, 0, &pairNext },
    { L"P2 Claws", 0x48484, 0x484a4, indexCPS2_Wolverine, 1 },
    { L"P2 Berserker FX", 0x484a4, 0x484c4, indexCPS2_Wolverine, 2 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_P1[] =
{
    { L"P1 Color", 0x48584, 0x485a4, indexCPS2_Venom },
    { L"P1 Taunt", 0x485a4, 0x485c4, indexCPS2_Venom, 1 },
    { L"P1 Web", 0x485c4, 0x485e4, indexCPS2_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_P2[] =
{
    { L"P2 Color", 0x485e4, 0x48604, indexCPS2_Venom },
    { L"P2 Taunt", 0x48604, 0x48624, indexCPS2_Venom, 1 },
    { L"P2 Web", 0x48624, 0x48644, indexCPS2_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_P1[] =
{
    { L"P1 Color", 0x490a4, 0x490c4, indexCPS2_Venom },
    { L"P1 Taunt", 0x490c4, 0x490e4, indexCPS2_Venom, 1 },
    { L"P1 Web", 0x490e4, 0x49104, indexCPS2_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_P2[] =
{
    { L"P2 Color", 0x49104, 0x49124, indexCPS2_Venom },
    { L"P2 Taunt", 0x49124, 0x49144, indexCPS2_Venom, 1 },
    { L"P2 Web", 0x49144, 0x49164, indexCPS2_Venom, 2 },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_P1[] =
{
    { L"P1 Color", 0x48644, 0x48664, indexCPS2_Spidey },
    { L"P1 Spotlight", 0x48664, 0x48684, indexCPS2_Spidey, 0x0C },
    { L"P1 Web", 0x48684, 0x486a4, indexCPS2_Spidey, 2 },
    { L"P1 Intro 1", 0x4B824, 0x4B844, indexCPS2_Spidey, 11 },
    { L"P1 Intro 2", 0x4B844, 0x4B864, indexCPS2_Spidey, 11 },
    { L"P1 Intro 3", 0x4B864, 0x4B884, indexCPS2_Spidey, 11 },
    { L"P1 Intro 4", 0x4B884, 0x4B8A4, indexCPS2_Spidey, 11 },
    { L"P1 Intro 5", 0x4B8A4, 0x4B8C4, indexCPS2_Spidey, 11 },
    { L"P1 Intro 6", 0x4B8C4, 0x4B8E4, indexCPS2_Spidey, 11 },
    { L"P1 Intro 7", 0x4B8E4, 0x4B904, indexCPS2_Spidey, 11 },
    { L"P1 Intro 8", 0x4B904, 0x4B924, indexCPS2_Spidey, 11 },
    { L"P1 Spiderlight 1", 0x4B924, 0x4B944, indexCPS2_Spidey, 12 },
    { L"P1 Spiderlight 2", 0x4B944, 0x4B964, indexCPS2_Spidey, 13 },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_P2[] =
{
    { L"P2 Color", 0x486a4, 0x486c4, indexCPS2_Spidey },
    { L"P2 Spotlight", 0x486c4, 0x486e4, indexCPS2_Spidey, 0x0C },
    { L"P2 Web", 0x486e4, 0x48704, indexCPS2_Spidey, 2 },

    { L"P2 Intro 1", 0x4BA24, 0x4BA44, indexCPS2_Spidey, 11 },
    { L"P2 Intro 2", 0x4BA44, 0x4BA64, indexCPS2_Spidey, 11 },
    { L"P2 Intro 3", 0x4BA64, 0x4BA84, indexCPS2_Spidey, 11 },
    { L"P2 Intro 4", 0x4BA84, 0x4BAA4, indexCPS2_Spidey, 11 },
    { L"P2 Intro 5", 0x4BAA4, 0x4BAC4, indexCPS2_Spidey, 11 },
    { L"P2 Intro 6", 0x4BAC4, 0x4BAE4, indexCPS2_Spidey, 11 },
    { L"P2 Intro 7", 0x4BAE4, 0x4BB04, indexCPS2_Spidey, 11 },
    { L"P2 Intro 8", 0x4BB04, 0x4BB24, indexCPS2_Spidey, 11 },
    { L"P2 Spiderlight 1", 0x4BB24, 0x4BB44, indexCPS2_Spidey, 12 },
    { L"P2 Spiderlight 2", 0x4BB44, 0x4BB64, indexCPS2_Spidey, 13 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_P1[] =
{
    { L"P1 Color",  0x48884, 0x488a4, indexCPS2_CapCom },
    { L"P1 Ninjas", 0x488a4, 0x488c4, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"P1 Hoover", 0x488c4, 0x488e4, indexCPS2_CapCom, 2 },
    { L"P1 Suit Intro", 0x4F304, 0x4F324, indexCPS2_CapCom, 0x0F },
    { L"P1 Taunt", 0x4F344, 0x4F364, indexCPS2_CapCom, 14 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_P2[] =
{
    { L"P2 Color",  0x488e4, 0x48904, indexCPS2_CapCom },
    { L"P2 Ninjas", 0x48904, 0x48924, indexCPS2_CapCom, 1, &pairCapComNinjas },
    { L"P2 Hoover", 0x48924, 0x48944, indexCPS2_CapCom, 2 },
    { L"P2 Suit Intro", 0x4F324, 0x4F344, indexCPS2_CapCom, 0x0F },
    { L"P2 Taunt", 0x4F364, 0x4F384, indexCPS2_CapCom, 14 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_EXTRAS[] =
{
    { L"Paint Rays 1", 0x4F264, 0x4F284, indexCPS2_CapCom, 11 },
    { L"Paint Rays 2", 0x4F284, 0x4F2A4, indexCPS2_CapCom, 11 },
    { L"Paint Rays 3", 0x4F2A4, 0x4F2C4, indexCPS2_CapCom, 11 },
    { L"Paint Rays 4", 0x4F2C4, 0x4F2E4, indexCPS2_CapCom, 11 },
    { L"Elect Grab", 0x4F2E4, 0x4F304, indexCPS2_CapCom, 12 },
    { L"Silhouette", 0x4F384, 0x4F3A4, indexCPS2_CapCom, 13 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_P1[] =
{
    { L"P1 Color", 0x48ec4, 0x48ee4, indexCPS2_Morrigan },
    { L"P1 Lilith", 0x48ee4, 0x48f04, indexCPS2_Morrigan, 1 },
    { L"P1 Extra 2", 0x48f04, 0x48f24, indexCPS2_Morrigan, 2 },

    { L"P1 Soul Eraser 1", 0x4edE4, 0x4ee04, indexCPS2_Morrigan, 11 },
    { L"P1 Soul Eraser 2", 0x4ee04, 0x4ee24, indexCPS2_Morrigan, 11 },

    { L"Morrigan Intro Pose", 0x4ee84, 0x4eeA4, indexCPS2_Morrigan, 13 },
    { L"Lilith Join Pose", 0x4eeA4, 0x4eeC4, indexCPS2_Morrigan, 12 },
    { L"Lilith Join Pose 2", 0x4eeC4, 0x4eEE4, indexCPS2_Morrigan, 12 },
    { L"Morrigan Join Pose", 0x4eee4, 0x4ef04, indexCPS2_Morrigan, 13 },
    { L"Morrigan Join Pose 2", 0x4ef04, 0x4ef24, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 1", 0x4ef44, 0x4eF64, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 2", 0x4ef64, 0x4eF84, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 3", 0x4ef84, 0x4eFA4, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 4", 0x4efA4, 0x4eFC4, indexCPS2_Morrigan, 13 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_P2[] =
{
    { L"P2 Color", 0x48f24, 0x48f44, indexCPS2_Morrigan },
    { L"P2 Lilith", 0x48f44, 0x48f64, indexCPS2_Morrigan, 1 },
    { L"P2 Extra 2", 0x48f64, 0x48f84, indexCPS2_Morrigan, 2 },

    { L"P2 Soul Eraser 1", 0x4ee44, 0x4ee64, indexCPS2_Morrigan, 11 },
    { L"P2 Soul Eraser 2", 0x4ee64, 0x4ee84, indexCPS2_Morrigan, 11 },

    { L"Morrigan P2 Intro Pose", 0x4eFE4, 0x4f004, indexCPS2_Morrigan, 13 },
    { L"Lilith P2 Join Pose", 0x4f004, 0x4f024, indexCPS2_Morrigan, 12 },
    { L"Lilith P2 Join Pose 2", 0x4f024, 0x4f044, indexCPS2_Morrigan, 12 },
    { L"Morrigan P2 Join Pose", 0x4f044, 0x4f064, indexCPS2_Morrigan, 13 },
    { L"Morrigan P2 Join Pose", 0x4f064, 0x4f084, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 1", 0x4f0A4, 0x4f0C4, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 2", 0x4f0C4, 0x4f0E4, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 3", 0x4f0E4, 0x4f104, indexCPS2_Morrigan, 13 },
    { L"Morrigan Intro Frame 4", 0x4f104, 0x4f124, indexCPS2_Morrigan, 13 },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_EXTRAS[] =
{
    // There isn't a direct p2 pair for this: ... ?
    { L"P1 Taunt", 0x4efC4, 0x4eFE4, indexCPS2_Morrigan, 14 }, // This is Range 7 Palette IE9 in their doc
    { L"Eternal Slumber Heart 1 (Shared)", 0x4f124, 0x4f144 },
    { L"Eternal Slumber Heart 2 (Shared)", 0x4f144, 0x4f164 },

    { L"Eternal Slumber XXX 1 (Shared)", 0x4f164, 0x4f184 },
    { L"Eternal Slumber XXX 2 (Shared)", 0x4f184, 0x4f1A4 },
    { L"Eternal Slumber XXX 3 (Shared)", 0x4f1A4, 0x4f1C4 },
    { L"Eternal Slumber XXX 4 (Shared)", 0x4f1C4, 0x4f1E4 },
    { L"Eternal Slumber XXX 5 (Shared)", 0x4f1E4, 0x4f204 },
    { L"Eternal Slumber XXX 6 (Shared)", 0x4f204, 0x4f224 },
    { L"Eternal Slumber XXX 7 (Shared)", 0x4f224, 0x4f244 },
    { L"Eternal Slumber XXX 8 (Shared)", 0x4f244, 0x4f264 },

    { L"Eternal Slumber Background", 0x424A6, 0x424E6 },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_P1[] =
{
    { L"P1 Color", 0x493a4, 0x493c4, indexCPS2_Morrigan },
    { L"P1 Extra 1", 0x493c4, 0x493e4, indexCPS2_Morrigan, 1 },
    { L"P1 Extra 2", 0x493e4, 0x49404, indexCPS2_Morrigan, 2 },
    { L"P1 Floating Taunt Morrigan?", 0x4fcc4, 0x4fce4 },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_P2[] =
{
    { L"P2 Color", 0x49404, 0x49424, indexCPS2_Morrigan },
    { L"P2 Extra 1", 0x49424, 0x49444, indexCPS2_Morrigan, 1 },
    { L"P2 Extra 2", 0x49444, 0x49464, indexCPS2_Morrigan, 2 },
    { L"P2 Floating Taunt Morrigan?", 0x4fce4, 0x4fd04 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_P1[] =
{
    { L"P1 Color", 0x48e04, 0x48e24, indexCPS2_Strider },
    { L"P1 FX", 0x48e24, 0x48e44, indexCPS2_Strider, 1 },
    { L"P1 Mech", 0x48e44, 0x48e64, indexCPS2_Strider, 2 },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_P2[] =
{
    { L"P2 Color", 0x48e64, 0x48e84, indexCPS2_Strider },
    { L"P2 FX", 0x48e84, 0x48ea4, indexCPS2_Strider, 1 },
    { L"P2 Mech", 0x48ea4, 0x48ec4, indexCPS2_Strider, 2 },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_P1[] =
{
    { L"P1 Color",   0x484c4, 0x484e4, indexCPS2_Gambit },
    { L"P1 Extra 1", 0x484e4, 0x48504, indexCPS2_Gambit, 1 },
    { L"P1 Extra 2", 0x48504, 0x48524, indexCPS2_Gambit, 2 },

    { L"P1 Lighting 1", 0x4f944, 0x4f964, indexCPS2_Gambit },
    { L"P1 Lighting 2", 0x4f964, 0x4f984, indexCPS2_Gambit },
    { L"P1 Lighting 3", 0x4f984, 0x4f9A4, indexCPS2_Gambit },
    { L"P1 Lighting 4", 0x4f9A4, 0x4f9C4, indexCPS2_Gambit },
    { L"P1 Lighting 5", 0x4f9C4, 0x4f9E4, indexCPS2_Gambit },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_P2[] =
{
    { L"P2 Color",   0x48524, 0x48544, indexCPS2_Gambit },
    { L"P2 Extra 1", 0x48544, 0x48564, indexCPS2_Gambit, 1 },
    { L"P2 Extra 2", 0x48564, 0x48584, indexCPS2_Gambit, 2 },

    { L"P2 Lighting 1", 0x4f9E4, 0x4fA04, indexCPS2_Gambit },
    { L"P2 Lighting 2", 0x4fA04, 0x4fA24, indexCPS2_Gambit },
    { L"P2 Lighting 3", 0x4fA24, 0x4fA44, indexCPS2_Gambit },
    { L"P2 Lighting 4", 0x4fA44, 0x4fA64, indexCPS2_Gambit },
    { L"P2 Lighting 5", 0x4fA64, 0x4fA84, indexCPS2_Gambit },
};

const sGame_PaletteDataset MVC_A_ASSIST_PALETTES[] =
{
    { L"Anita P1", 0x50fa4, 0x50fc4, indexCPS2_Anita },
    { L"Anita P1 Floating Body", 0x50fc4, 0x50fe4, indexCPS2_Anita, 2 },
    { L"Anita P1 Weapons", 0x50fe4, 0x51004, indexCPS2_Anita, 1 },
    { L"Anita P2", 0x51004, 0x51024, indexCPS2_Anita },
    { L"Anita P2 Floating Body", 0x51024, 0x51044, indexCPS2_Anita, 2 },
    { L"Anita P2 Weapons", 0x51044, 0x51064, indexCPS2_Anita, 1 },

    { L"Arthur P1", 0x50804, 0x50824, indexCPS2_MVCAssets },
    { L"Arthur P1 Extra 1", 0x50824, 0x50844, indexCPS2_MVCAssets, 1 },
    // This appears to be unused: commenting out for now
    //{ L"Arthur P1 Extra 2", 0x50844, 0x50864 },
    { L"Arthur P2", 0x50864, 0x50884, indexCPS2_MVCAssets },
    { L"Arthur P2 Extra 1", 0x50884, 0x508a4, indexCPS2_MVCAssets, 1 },
    //{ L"Arthur P2 Extra 2", 0x508a4, 0x508c4 },

    { L"Colossus P1", 0x505c4, 0x505e4, indexCPS2_Colossus },
    { L"Colossus P2", 0x50624, 0x50644, indexCPS2_Colossus },

    { L"Cyclops P1", 0x50504, 0x50524, indexCPS2_Cyclops },
    { L"Cyclops P2", 0x50564, 0x50584, indexCPS2_Cyclops },
    { L"Cyclops Optic Blast 1", 0x508c4, 0x508e4, indexCPS2_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 2", 0x508e4, 0x50904, indexCPS2_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 3", 0x50904, 0x50924, indexCPS2_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 4", 0x50924, 0x50944, indexCPS2_Cyclops, 0x0E },
    { L"Cyclops Optic Blast 5", 0x50944, 0x50964, indexCPS2_Cyclops, 0x0E },

    // Warning: these are joined using code in UpdatePalImg.  If you renumber these, you'll want to doublecheck display.
    { L"Devilot P1", 0x510c4, 0x510e4, indexCPS2_MVCAssets, 3, &pairMVCDevilotNormal },
    { L"Devilot P1: Dave and Xavier", 0x510e4, 0x51104, indexCPS2_MVCAssets, 4 },
    { L"Devilot P1: Platform", 0x51104, 0x51124, indexCPS2_MVCAssets, 2 },
    { L"Devilot P1: Burnt", 0x51184, 0x511a4, indexCPS2_MVCAssets, 5, &pairMVCDevilotBurnt },
    { L"Devilot P1: Burnt Dave and Xavier", 0x511a4, 0x511c4, indexCPS2_MVCAssets, 6 },
    { L"Devilot P2", 0x51124, 0x51144, indexCPS2_MVCAssets, 3, &pairMVCDevilotNormal },
    { L"Devilot P2: Dave and Xavier", 0x51144, 0x51164, indexCPS2_MVCAssets, 4 },
    { L"Devilot P2: Platform", 0x51164, 0x51184, indexCPS2_MVCAssets, 2 },
    { L"Devilot P2: Burnt", 0x511c4, 0x511e4, indexCPS2_MVCAssets, 5, &pairMVCDevilotBurnt },
    { L"Devilot P2: Burnt Dave and Xavier", 0x511e4, 0x51204, indexCPS2_MVCAssets, 6 },

    { L"Iceman P1", 0x50d64, 0x50d84, indexCPS2_Iceman },
    { L"Iceman P1 Extra 1", 0x50d84, 0x50da4, indexCPS2_Iceman, 0x20 },
    { L"Iceman P1 Extra 2", 0x50da4, 0x50dc4, indexCPS2_Iceman, 0x20 },
    { L"Iceman P2", 0x50dc4, 0x50de4, indexCPS2_Iceman },
    { L"Iceman P2 Extra 1", 0x50de4, 0x50e04, indexCPS2_Iceman, 0x20 },
    { L"Iceman P2 Extra 2", 0x50e04, 0x50e24, indexCPS2_Iceman, 0x20 },

    { L"Jubilee P1", 0x51204, 0x51224, indexCPS2_MVCAssets, 0x07 },
    { L"Jubilee P2", 0x51264, 0x51284, indexCPS2_MVCAssets, 0x07 },

    { L"Juggernaut P1", 0x502c4, 0x502e4, indexCPS2_Juggy },
    { L"Juggernaut P1 Extra 1", 0x50304, 0x50324, indexCPS2_Juggy, 2 },
    { L"Juggernaut P2", 0x50324, 0x50344, indexCPS2_Juggy },
    { L"Juggernaut P2 Extra 1", 0x50364, 0x50384, indexCPS2_Juggy, 2 },

    { L"Lou P1", 0x50204, 0x50224, indexCPS2_MVCAssets, 0x09, &pairMVCLou },
    { L"Lou P1 Extra", 0x50224, 0x50244, indexCPS2_MVCAssets, 0x0A },
    { L"Lou P2", 0x50264, 0x50284, indexCPS2_MVCAssets, 0x09, &pairMVCLou },
    { L"Lou P2 Extra", 0x50284, 0x502a4, indexCPS2_MVCAssets, 0x0A },

    { L"Magneto P1", 0x50384, 0x503a4, indexCPS2_Magneto },
    { L"Magneto P1 Extra", 0x503a4, 0x503c4, indexCPS2_Magneto, 1 },
    { L"Magneto P2", 0x503e4, 0x50404, indexCPS2_Magneto },
    { L"Magneto P2 Extra", 0x50404, 0x50424, indexCPS2_Magneto, 1 },

    { L"Michelle Heart P1", 0x50a24, 0x50a44, indexCPS2_MVCAssets, 0x0E },
    { L"Michelle Heart P1 Extra", 0x50a44, 0x50a64, indexCPS2_MVCAssets, 0x0F },
    { L"Michelle Heart P2", 0x50a84, 0x50aa4, indexCPS2_MVCAssets, 0x0E },
    { L"Michelle Heart P2 Extra", 0x50aa4, 0x50ac4, indexCPS2_MVCAssets, 0x0F },

    { L"Psylocke P1", 0x50444, 0x50464, indexCPS2_Psylocke },
    { L"Psylocke P1 Extra", 0x50464, 0x50484, indexCPS2_Psylocke, 2 },
    { L"Psylocke P2", 0x504a4, 0x504c4, indexCPS2_Psylocke },
    { L"Psylocke P2 Extra", 0x504c4, 0x504e4, indexCPS2_Psylocke, 2 },

    { L"Pure & Fur P1 Pure", 0x50e24, 0x50e44, indexCPS2_MVCAssets, 0x0B },
    { L"Pure & Fur P1 Fur", 0x50e44, 0x50e64, indexCPS2_MVCAssets, 0x0C },
    { L"Pure & Fur P1 Dice", 0x50e64, 0x50e84, indexCPS2_MVCAssets, 0x0D },
    { L"Pure & Fur P2 Pure", 0x50e84, 0x50ea4, indexCPS2_MVCAssets, 0x0B },
    { L"Pure & Fur P2 Fur", 0x50ea4, 0x50ec4, indexCPS2_MVCAssets, 0x0C },
    { L"Pure & Fur P2 Dice", 0x50ec4, 0x50ee4, indexCPS2_MVCAssets, 0x0D },

    { L"Rogue P1", 0x50ca4, 0x50cc4, indexCPS2_Rogue },
    { L"Rogue P2", 0x50d04, 0x50d24, indexCPS2_Rogue },

    { L"Saki P1", 0x50964, 0x509a4, indexCPS2_MVCAssets, 0x10 },
    { L"Saki P2", 0x509c4, 0x50a04, indexCPS2_MVCAssets, 0x10 },

    { L"Sentinel P1", 0x51344, 0x51364, indexCPS2_Sentinel, 0xc },
    { L"Sentinel P2", 0x513a4, 0x513c4, indexCPS2_Sentinel, 0xc },

    { L"Shadow Nash P1", 0x51284, 0x512a4, indexCPS2_Charlie },
    { L"Shadow Nash P1 Extra", 0x512c4, 0x512e4, indexCPS2_Charlie, 2 },
    { L"Shadow Nash P2", 0x512e4, 0x51304, indexCPS2_Charlie },
    { L"Shadow Nash P2 Extra", 0x51324, 0x51344, indexCPS2_Charlie, 2 },

    { L"Storm P1", 0x50ba4, 0x50bc4, indexCPS2_Storm },
    { L"Storm P1 Extra", 0x50c64, 0x50c84, indexCPS2_Storm, 12 },
    { L"Storm P2", 0x50c04, 0x50c24, indexCPS2_Storm },
    { L"Storm P2 Extra", 0x50c84, 0x50ca4, indexCPS2_Storm, 12 },

    { L"Ton-Pooh P1", 0x50744, 0x50784, indexCPS2_MVCAssets, 0x13 },
    { L"Ton-Pooh P1 Attack", 0x50784, 0x507a4, indexCPS2_MVCAssets, 0x14 },
    { L"Ton-Pooh P2", 0x507a4, 0x507e4, indexCPS2_MVCAssets, 0x13 },
    { L"Ton-Pooh P2 Attack", 0x507e4, 0x50804, indexCPS2_MVCAssets, 0x14 },

    { L"Thor P1", 0x50ae4, 0x50b04, indexCPS2_MVCAssets, 0x15 },
    { L"Thor P1 Lightning", 0x50b04, 0x50b24, indexCPS2_MVCAssets, 0x16 },
    { L"Thor P2", 0x50b44, 0x50b64, indexCPS2_MVCAssets, 0x15 },
    { L"Thor P2 Lightning", 0x50b64, 0x50b84, indexCPS2_MVCAssets, 0x16 },

    { L"Unknown Soldier P1", 0x50684, 0x506a4, indexCPS2_MVCAssets, 0x12 },
    { L"Unknown Soldier P1 Extra", 0x506a4, 0x506c4, indexCPS2_MVCAssets, 0x11 },
    { L"Unknown Soldier P2", 0x506e4, 0x50704, indexCPS2_MVCAssets, 0x12 },
    { L"Unknown Soldier P2 Extra", 0x50704, 0x50724, indexCPS2_MVCAssets, 0x11 },

    { L"US Agent P1", 0x50ee4, 0x50f04, indexCPS2_CapAm, 0, &pairNext },
    { L"US Agent P1 Shield", 0x50f04, 0x50f24, indexCPS2_CapAm, 1 },
    { L"US Agent P1 Charging Star", 0x50f24, 0x50f44, indexCPS2_CapAm, 2 },
    { L"US Agent P2", 0x50f44, 0x50f64, indexCPS2_CapAm, 0, &pairNext },
    { L"US Agent P2 Shield", 0x50f64, 0x50f84, indexCPS2_CapAm, 1 },
    { L"US Agent P2 Charging Star", 0x50f84, 0x50fa4, indexCPS2_CapAm, 2 },
};

const sGame_PaletteDataset MVC_A_WARMACHINE_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x49c04, 0x49c24, indexCPS2_WarMachine },
    { L"Burning 2", 0x49c24, 0x49c44, indexCPS2_WarMachine },
    { L"Shocked 1", 0x49c44, 0x49c64, indexCPS2_WarMachine },
    { L"Shocked 2", 0x49c64, 0x49c84, indexCPS2_WarMachine },
    { L"Dark Burning 1", 0x49c84, 0x49ca4, indexCPS2_WarMachine },
    { L"Dark Burning 2", 0x49ca4, 0x49cc4, indexCPS2_WarMachine },
    { L"Kinectic Charged 1", 0x49cc4, 0x49ce4, indexCPS2_WarMachine },
    { L"Kinectic Charged 2", 0x49ce4, 0x49d04, indexCPS2_WarMachine },
    { L"Kinectic Charged 3", 0x49d04, 0x49d24, indexCPS2_WarMachine },
    { L"Shadows Light", 0x494a4, 0x494c4, indexCPS2_WarMachine },
    { L"Shadows Dark", 0x494c4, 0x494e4, indexCPS2_WarMachine },
};

const sGame_PaletteDataset MVC_A_CAPAM_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x49d24, 0x49d44, indexCPS2_CapAm },
    { L"Burning 2", 0x49d44, 0x49d64, indexCPS2_CapAm },
    { L"Shocked 1", 0x49d64, 0x49d84, indexCPS2_CapAm },
    { L"Shocked 2", 0x49d84, 0x49da4, indexCPS2_CapAm },
    { L"Dark Burning 1", 0x49da4, 0x49dc4, indexCPS2_CapAm },
    { L"Dark Burning 2", 0x49dc4, 0x49de4, indexCPS2_CapAm },
    { L"Kinectic Charged 1", 0x49de4, 0x49e04, indexCPS2_CapAm },
    { L"Kinectic Charged 2", 0x49e04, 0x49e24, indexCPS2_CapAm },
    { L"Kinectic Charged 3", 0x49e24, 0x49e44, indexCPS2_CapAm },
    { L"Shadows Light", 0x494e4, 0x49504, indexCPS2_CapAm },
    { L"Shield Shadows Light", 0x49524, 0x49544, indexCPS2_CapAm, 0x1 },
    { L"Shadows Dark", 0x49504, 0x49524, indexCPS2_CapAm },
    { L"Shield Shadows Dark", 0x49544, 0x49564, indexCPS2_CapAm, 0x1 },
};

const sGame_PaletteDataset MVC_A_HULK_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x49f64, 0x49f84, indexCPS2_Hulk },
    { L"Burning 2", 0x49f84, 0x49fa4, indexCPS2_Hulk },
    { L"Shocked 1", 0x49fa4, 0x49fc4, indexCPS2_Hulk },
    { L"Shocked 2", 0x49fc4, 0x49fe4, indexCPS2_Hulk },
    { L"Dark Burning 1", 0x49fe4, 0x4a004, indexCPS2_Hulk },
    { L"Dark Burning 2", 0x4a004, 0x4a024, indexCPS2_Hulk },
    { L"Kinectic Charged 1", 0x4a024, 0x4a044, indexCPS2_Hulk },
    { L"Kinectic Charged 2", 0x4a044, 0x4a064, indexCPS2_Hulk },
    { L"Kinectic Charged 3", 0x4a064, 0x4a084, indexCPS2_Hulk },
    { L"Shadows Light", 0x49564, 0x49584, indexCPS2_Hulk },
    { L"Shadows Dark", 0x49584, 0x495A4, indexCPS2_Hulk },
};

const sGame_PaletteDataset MVC_A_WOLVERINE_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a084, 0x4a0a4, indexCPS2_Wolverine },
    { L"Burning 2", 0x4a0a4, 0x4a0c4, indexCPS2_Wolverine },
    { L"Shocked 1", 0x4a0c4, 0x4a0e4, indexCPS2_Wolverine },
    { L"Shocked 2", 0x4a0e4, 0x4a104, indexCPS2_Wolverine },
    { L"Dark Burning 1", 0x4a104, 0x4a124, indexCPS2_Wolverine },
    { L"Dark Burning 2", 0x4a124, 0x4a144, indexCPS2_Wolverine },
    { L"Kinectic Charged 1", 0x4a144, 0x4a164, indexCPS2_Wolverine },
    { L"Kinectic Charged 2", 0x4a164, 0x4a184, indexCPS2_Wolverine },
    { L"Kinectic Charged 3", 0x4a184, 0x4a1a4, indexCPS2_Wolverine },
    { L"Shadows Light", 0x495A4, 0x495C4, indexCPS2_Wolverine },
    { L"Shadows Dark", 0x495C4, 0x495E4, indexCPS2_Wolverine },
};

const sGame_PaletteDataset MVC_A_GAMBIT_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a1a4, 0x4a1c4, indexCPS2_Gambit },
    { L"Burning 2", 0x4a1c4, 0x4a1e4, indexCPS2_Gambit },
    { L"Shocked 1", 0x4a1e4, 0x4a204, indexCPS2_Gambit },
    { L"Shocked 2", 0x4a204, 0x4a224, indexCPS2_Gambit },
    { L"Dark Burning 1", 0x4a224, 0x4a244, indexCPS2_Gambit },
    { L"Dark Burning 2", 0x4a244, 0x4a264, indexCPS2_Gambit },
    { L"Kinectic Charged 1", 0x4a264, 0x4a284, indexCPS2_Gambit },
    { L"Kinectic Charged 2", 0x4a284, 0x4a2a4, indexCPS2_Gambit },
    { L"Kinectic Charged 3", 0x4a2a4, 0x4a2c4, indexCPS2_Gambit },
    { L"Shadows Light", 0x495E4, 0x49604, indexCPS2_Gambit },
    { L"Shadows Dark", 0x49604, 0x49624, indexCPS2_Gambit },
};

const sGame_PaletteDataset MVC_A_VENOM_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a2c4, 0x4a2e4, indexCPS2_Venom },
    { L"Burning 2", 0x4a2e4, 0x4a304, indexCPS2_Venom },
    { L"Shocked 1", 0x4a304, 0x4a324, indexCPS2_Venom },
    { L"Shocked 2", 0x4a324, 0x4a344, indexCPS2_Venom },
    { L"Dark Burning 1", 0x4a344, 0x4a364, indexCPS2_Venom },
    { L"Dark Burning 2", 0x4a364, 0x4a384, indexCPS2_Venom },
    { L"Kinectic Charged 1", 0x4a384, 0x4a3a4, indexCPS2_Venom },
    { L"Kinectic Charged 2", 0x4a3a4, 0x4a3c4, indexCPS2_Venom },
    { L"Kinectic Charged 3", 0x4a3c4, 0x4a3e4, indexCPS2_Venom },
    { L"Shadows Light", 0x49624, 0x49644, indexCPS2_Venom },
    { L"Shadows Dark", 0x49644, 0x49664, indexCPS2_Venom },
};

const sGame_PaletteDataset MVC_A_SPIDEY_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a504, 0x4a524, indexCPS2_Spidey },
    { L"Burning 2", 0x4a524, 0x4a544, indexCPS2_Spidey },
    { L"Shocked 1", 0x4a544, 0x4a564, indexCPS2_Spidey },
    { L"Shocked 2", 0x4a564, 0x4a584, indexCPS2_Spidey },
    { L"Dark Burning 1", 0x4a584, 0x4a5a4, indexCPS2_Spidey },
    { L"Dark Burning 2", 0x4a5a4, 0x4a5c4, indexCPS2_Spidey },
    { L"Kinectic Charged 1", 0x4a5c4, 0x4a5e4, indexCPS2_Spidey },
    { L"Kinectic Charged 2", 0x4a5e4, 0x4a604, indexCPS2_Spidey },
    { L"Kinectic Charged 3", 0x4a604, 0x4a624, indexCPS2_Spidey },
    { L"Shadows Light", 0x49664, 0x49684, indexCPS2_Spidey },
    { L"Shadows Dark", 0x49684, 0x496A4, indexCPS2_Spidey },
};

const sGame_PaletteDataset MVC_A_ROLL_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a624, 0x4a644, indexCPS2_Roll },
    { L"Burning 2", 0x4a644, 0x4a664, indexCPS2_Roll },
    { L"Shocked 1", 0x4a664, 0x4a684, indexCPS2_Roll },
    { L"Shocked 2", 0x4a684, 0x4a6a4, indexCPS2_Roll },
    { L"Dark Burning 1", 0x4a6a4, 0x4a6c4, indexCPS2_Roll },
    { L"Dark Burning 2", 0x4a6c4, 0x4a6e4, indexCPS2_Roll },
    { L"Kinectic Charged 1", 0x4a6e4, 0x4a704, indexCPS2_Roll },
    { L"Kinectic Charged 2", 0x4a704, 0x4a724, indexCPS2_Roll },
    { L"Kinectic Charged 3", 0x4a724, 0x4a744, indexCPS2_Roll },
    { L"Shadows Light", 0x496A4, 0x496C4, indexCPS2_Roll },
    { L"Shadows Dark", 0x496C4, 0x496E4, indexCPS2_Roll },
};

const sGame_PaletteDataset MVC_A_RYU_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a744, 0x4a764, indexCPS2_Ryu, 0x09 },
    { L"Burning 2", 0x4a764, 0x4a784, indexCPS2_Ryu, 0x09 },
    { L"Shocked 1", 0x4a784, 0x4a7a4, indexCPS2_Ryu, 0x09 },
    { L"Shocked 2", 0x4a7a4, 0x4a7c4, indexCPS2_Ryu, 0x09 },
    { L"Dark Burning 1", 0x4a7c4, 0x4a7e4, indexCPS2_Ryu, 0x09 },
    { L"Dark Burning 2", 0x4a7e4, 0x4a804, indexCPS2_Ryu, 0x09 },
    { L"Kinectic Charged 1", 0x4a804, 0x4a824, indexCPS2_Ryu, 0x09 },
    { L"Kinectic Charged 2", 0x4a824, 0x4a844, indexCPS2_Ryu, 0x09 },
    { L"Kinectic Charged 3", 0x4a844, 0x4a864, indexCPS2_Ryu, 0x09 },
    { L"Shadows Light", 0x49724, 0x49744, indexCPS2_Ryu, 0x09 },
    { L"Shadows Dark", 0x49744, 0x49764, indexCPS2_Ryu, 0x09 },
};

const sGame_PaletteDataset MVC_A_CAPCOM_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a864, 0x4a884, indexCPS2_CapCom },
    { L"Burning 2", 0x4a884, 0x4a8a4, indexCPS2_CapCom },
    { L"Shocked 1", 0x4a8a4, 0x4a8c4, indexCPS2_CapCom },
    { L"Shocked 2", 0x4a8c4, 0x4a8e4, indexCPS2_CapCom },
    { L"Dark Burning 1", 0x4a8e4, 0x4a904, indexCPS2_CapCom },
    { L"Dark Burning 2", 0x4a904, 0x4a924, indexCPS2_CapCom },
    { L"Kinectic Charged 1", 0x4a924, 0x4a944, indexCPS2_CapCom },
    { L"Kinectic Charged 2", 0x4a944, 0x4a964, indexCPS2_CapCom },
    { L"Kinectic Charged 3", 0x4a964, 0x4a984, indexCPS2_CapCom },
    { L"Shadows Light", 0x49764, 0x49784, indexCPS2_CapCom },
    { L"Shadows Dark", 0x49784, 0x497A4, indexCPS2_CapCom },
};

const sGame_PaletteDataset MVC_A_CHUNLI_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4a984, 0x4a9a4, indexCPS2_ChunLi },
    { L"Burning 2", 0x4a9a4, 0x4a9c4, indexCPS2_ChunLi },
    { L"Shocked 1", 0x4a9c4, 0x4a9e4, indexCPS2_ChunLi },
    { L"Shocked 2", 0x4a9e4, 0x4aa04, indexCPS2_ChunLi },
    { L"Dark Burning 1", 0x4aa04, 0x4aa24, indexCPS2_ChunLi },
    { L"Dark Burning 2", 0x4aa24, 0x4aa44, indexCPS2_ChunLi },
    { L"Kinectic Charged 1", 0x4aa44, 0x4aa64, indexCPS2_ChunLi },
    { L"Kinectic Charged 2", 0x4aa64, 0x4aa84, indexCPS2_ChunLi },
    { L"Kinectic Charged 3", 0x4aa84, 0x4aaa4, indexCPS2_ChunLi },
    { L"Shadows Light", 0x497A4, 0x497C4, indexCPS2_ChunLi },
    { L"Shadows Dark", 0x497C4, 0x497E4, indexCPS2_ChunLi },
};

const sGame_PaletteDataset MVC_A_JIN_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4aaa4, 0x4aac4, indexCPS2_Jin },
    { L"Burning 2", 0x4aac4, 0x4aae4, indexCPS2_Jin },
    { L"Shocked 1", 0x4aae4, 0x4ab04, indexCPS2_Jin },
    { L"Shocked 2", 0x4ab04, 0x4ab24, indexCPS2_Jin },
    { L"Dark Burning 1", 0x4ab24, 0x4ab44, indexCPS2_Jin },
    { L"Dark Burning 2", 0x4ab44, 0x4ab64, indexCPS2_Jin },
    { L"Kinectic Charged 1", 0x4ab64, 0x4ab84, indexCPS2_Jin },
    { L"Kinectic Charged 2", 0x4ab84, 0x4aba4, indexCPS2_Jin },
    { L"Kinectic Charged 3", 0x4aba4, 0x4abc4, indexCPS2_Jin },
    { L"Shadows Light", 0x497E4, 0x49804, indexCPS2_Jin },
    { L"Shadows Dark", 0x49804, 0x49824, indexCPS2_Jin },
};

const sGame_PaletteDataset MVC_A_GIEF_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4abc4, 0x4abe4, indexCPS2_Zangief },
    { L"Burning 2", 0x4abe4, 0x4ac04, indexCPS2_Zangief },
    { L"Shocked 1", 0x4ac04, 0x4ac24, indexCPS2_Zangief },
    { L"Shocked 2", 0x4ac24, 0x4ac44, indexCPS2_Zangief },
    { L"Dark Burning 1", 0x4ac44, 0x4ac64, indexCPS2_Zangief },
    { L"Dark Burning 2", 0x4ac64, 0x4ac84, indexCPS2_Zangief },
    { L"Kinectic Charged 1", 0x4ac84, 0x4aca4, indexCPS2_Zangief },
    { L"Kinectic Charged 2", 0x4aca4, 0x4acc4, indexCPS2_Zangief },
    { L"Kinectic Charged 3", 0x4acc4, 0x4ace4, indexCPS2_Zangief },
    { L"Shadows Light", 0x49824, 0x49844, indexCPS2_Zangief },
    { L"Shadows Dark", 0x49844, 0x49864, indexCPS2_Zangief },
};

const sGame_PaletteDataset MVC_A_STRIDER_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4ace4, 0x4ad04, indexCPS2_Strider },
    { L"Burning 2", 0x4ad04, 0x4ad24, indexCPS2_Strider },
    { L"Shocked 1", 0x4ad24, 0x4ad44, indexCPS2_Strider },
    { L"Shocked 2", 0x4ad44, 0x4ad64, indexCPS2_Strider },
    { L"Dark Burning 1", 0x4ad64, 0x4ad84, indexCPS2_Strider },
    { L"Dark Burning 2", 0x4ad84, 0x4ada4, indexCPS2_Strider },
    { L"Kinectic Charged 1", 0x4ada4, 0x4adc4, indexCPS2_Strider },
    { L"Kinectic Charged 2", 0x4adc4, 0x4ade4, indexCPS2_Strider },
    { L"Kinectic Charged 3", 0x4ade4, 0x4ae04, indexCPS2_Strider },
    { L"Shadows Light", 0x49864, 0x49884, indexCPS2_Strider },
    { L"Shadows Dark", 0x49884, 0x498A4, indexCPS2_Strider },
};

const sGame_PaletteDataset MVC_A_MORRIGAN_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4ae04, 0x4ae24, indexCPS2_Morrigan },
    { L"Burning 2", 0x4ae24, 0x4ae44, indexCPS2_Morrigan },
    { L"Shocked 1", 0x4ae44, 0x4ae64, indexCPS2_Morrigan },
    { L"Shocked 2", 0x4ae64, 0x4ae84, indexCPS2_Morrigan },
    { L"Dark Burning 1", 0x4ae84, 0x4aea4, indexCPS2_Morrigan },
    { L"Dark Burning 2", 0x4aea4, 0x4aec4, indexCPS2_Morrigan },
    { L"Kinectic Charged 1", 0x4aec4, 0x4aee4, indexCPS2_Morrigan },
    { L"Kinectic Charged 2", 0x4aee4, 0x4af04, indexCPS2_Morrigan },
    { L"Kinectic Charged 3", 0x4af04, 0x4af24, indexCPS2_Morrigan },
    { L"Shadows Light", 0x498A4, 0x498C4, indexCPS2_Morrigan },
    { L"Shadows Dark", 0x498C4, 0x498E4, indexCPS2_Morrigan },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4af24, 0x4af44, indexCPS2_Megaman },
    { L"Burning 2", 0x4af44, 0x4af64, indexCPS2_Megaman },
    { L"Shocked 1", 0x4af64, 0x4af84, indexCPS2_Megaman },
    { L"Shocked 2", 0x4af84, 0x4afa4, indexCPS2_Megaman },
    { L"Dark Burning 1", 0x4afa4, 0x4afc4, indexCPS2_Megaman },
    { L"Dark Burning 2", 0x4afc4, 0x4afe4, indexCPS2_Megaman },
    { L"Kinectic Charged 1", 0x4afe4, 0x4b004, indexCPS2_Megaman },
    { L"Kinectic Charged 2", 0x4b004, 0x4b024, indexCPS2_Megaman },
    { L"Kinectic Charged 3", 0x4b024, 0x4b044, indexCPS2_Megaman },
    { L"Shadows Light", 0x498e4, 0x49904, indexCPS2_Megaman },
    { L"Shadows Dark", 0x49904, 0x49924, indexCPS2_Megaman },
};

const sGame_PaletteDataset MVC_A_ONSLAUGHT_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4b044, 0x4b064, indexCPS2_Onslaught },
    { L"Burning 2", 0x4b064, 0x4b084, indexCPS2_Onslaught },
    { L"Shocked 1", 0x4b084, 0x4b0a4, indexCPS2_Onslaught },
    { L"Shocked 2", 0x4b0a4, 0x4b0c4, indexCPS2_Onslaught },
    { L"Dark Burning 1", 0x4b0c4, 0x4b0e4, indexCPS2_Onslaught },
    { L"Dark Burning 2", 0x4b0e4, 0x4b104, indexCPS2_Onslaught },
    { L"Shadows Light", 0x49924, 0x49944, indexCPS2_Onslaught },
    { L"Shadows Dark", 0x49944, 0x49964, indexCPS2_Onslaught },
};

const sGame_PaletteDataset MVC_A_HYPERVENOM_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4b104, 0x4b124, indexCPS2_Venom },
    { L"Burning 2", 0x4b124, 0x4b144, indexCPS2_Venom },
    { L"Shocked 1", 0x4b144, 0x4b164, indexCPS2_Venom },
    { L"Shocked 2", 0x4b164, 0x4b184, indexCPS2_Venom },
    { L"Dark Burning 1", 0x4b184, 0x4b1a4, indexCPS2_Venom },
    { L"Dark Burning 2", 0x4b1a4, 0x4b1c4, indexCPS2_Venom },
    { L"Kinectic Charged 1", 0x4b1c4, 0x4b1e4, indexCPS2_Venom },
    { L"Kinectic Charged 2", 0x4b1e4, 0x4b204, indexCPS2_Venom },
    { L"Kinectic Charged 3", 0x4b204, 0x4b224, indexCPS2_Venom },
    { L"Shadows Light", 0x49964, 0x49984, indexCPS2_Venom },
    { L"Shadows Dark", 0x49984, 0x499a4, indexCPS2_Venom },
};

const sGame_PaletteDataset MVC_A_ORANGEHULK_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4b344, 0x4b364, indexCPS2_Hulk },
    { L"Burning 2", 0x4b364, 0x4b384, indexCPS2_Hulk },
    { L"Shocked 1", 0x4b384, 0x4b3a4, indexCPS2_Hulk },
    { L"Shocked 2", 0x4b3a4, 0x4b3c4, indexCPS2_Hulk },
    { L"Dark Burning 1", 0x4b3c4, 0x4b3e4, indexCPS2_Hulk },
    { L"Dark Burning 2", 0x4b3e4, 0x4b404, indexCPS2_Hulk },
    { L"Kinectic Charged 1", 0x4b404, 0x4b424, indexCPS2_Hulk },
    { L"Kinectic Charged 2", 0x4b424, 0x4b444, indexCPS2_Hulk },
    { L"Kinectic Charged 3", 0x4b444, 0x4b464, indexCPS2_Hulk },
    { L"Shadows Light", 0x499a4, 0x499c4, indexCPS2_Hulk },
    { L"Shadows Dark", 0x499c4, 0x499e4, indexCPS2_Hulk },
    { L"Shadows 3?", 0x499e4, 0x49a04, indexCPS2_Hulk },
    { L"Shadows 4?", 0x49a04, 0x49a24, indexCPS2_Hulk },
};

const sGame_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4b464, 0x4b484, indexCPS2_WarMachine },
    { L"Burning 2", 0x4b484, 0x4b4a4, indexCPS2_WarMachine },
    { L"Shocked 1", 0x4b4a4, 0x4b4c4, indexCPS2_WarMachine },
    { L"Shocked 2", 0x4b4c4, 0x4b4e4, indexCPS2_WarMachine },
    { L"Dark Burning 1", 0x4b4e4, 0x4b504, indexCPS2_WarMachine },
    { L"Dark Burning 2", 0x4b504, 0x4b524, indexCPS2_WarMachine },
    { L"Kinectic Charged 1", 0x4b524, 0x4b544, indexCPS2_WarMachine },
    { L"Kinectic Charged 2", 0x4b544, 0x4b564, indexCPS2_WarMachine },
    { L"Kinectic Charged 3", 0x4b564, 0x4b584, indexCPS2_WarMachine },
    { L"Shadows Light", 0x49a24, 0x49a44, indexCPS2_WarMachine },
    { L"Shadows Dark", 0x49a44, 0x49a64, indexCPS2_WarMachine },
};

const sGame_PaletteDataset MVC_A_SHADOWLADY_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4b584, 0x4b5a4, indexCPS2_ChunLi },
    { L"Burning 2", 0x4b5a4, 0x4b5c4, indexCPS2_ChunLi },
    { L"Shocked 1", 0x4b5c4, 0x4b5e4, indexCPS2_ChunLi },
    { L"Shocked 2", 0x4b5e4, 0x4b604, indexCPS2_ChunLi },
    { L"Dark Burning 1", 0x4b604, 0x4b624, indexCPS2_ChunLi },
    { L"Dark Burning 2", 0x4b624, 0x4b644, indexCPS2_ChunLi },
    { L"Kinectic Charged 1", 0x4b644, 0x4b664, indexCPS2_ChunLi },
    { L"Kinectic Charged 2", 0x4b664, 0x4b684, indexCPS2_ChunLi },
    { L"Kinectic Charged 3", 0x4b684, 0x4b6a4, indexCPS2_ChunLi },
    { L"Shadows Light", 0x49a64, 0x49a84, indexCPS2_ChunLi },
    { L"Shadows Dark", 0x49a84, 0x49aa4, indexCPS2_ChunLi },
};

const sGame_PaletteDataset MVC_A_LILITH_PALETTES_SHARED[] =
{
    { L"Burning 1", 0x4b6a4, 0x4b6c4, indexCPS2_Morrigan },
    { L"Burning 2", 0x4b6c4, 0x4b6e4, indexCPS2_Morrigan },
    { L"Shocked 1", 0x4b6e4, 0x4b704, indexCPS2_Morrigan },
    { L"Shocked 2", 0x4b704, 0x4b724, indexCPS2_Morrigan },
    { L"Dark Burning 1", 0x4b724, 0x4b744, indexCPS2_Morrigan },
    { L"Dark Burning 2", 0x4b744, 0x4b764, indexCPS2_Morrigan },
    { L"Kinectic Charged 1", 0x4b764, 0x4b784, indexCPS2_Morrigan },
    { L"Kinectic Charged 2", 0x4b784, 0x4b7a4, indexCPS2_Morrigan },
    { L"Kinectic Charged 3", 0x4b7a4, 0x4b7c4, indexCPS2_Morrigan },
    { L"Shadows Light", 0x49aa4, 0x49ac4, indexCPS2_Morrigan },
    { L"Shadows Dark", 0x49ac4, 0x49ae4, indexCPS2_Morrigan },
};

const sGame_PaletteDataset MVC_A_ASSISTICON_PALETTES[] =
{
    { L"Anita", 0x47fc4, 0x47fe4, indexCPS2_MVCAssets, 0x30 },
    { L"Arthur", 0x47f04, 0x47f24, indexCPS2_MVCAssets, 0x31 },
    { L"Colossus", 0x47e04, 0x47e24, indexCPS2_MVCAssets, 0x32 },
    { L"Cyclops", 0x47de4, 0x47e04, indexCPS2_MVCAssets, 0x33 },
    { L"Devilot", 0x48004, 0x48024, indexCPS2_MVCAssets, 0x34 },
    { L"Iceman", 0x47e64, 0x47e84, indexCPS2_MVCAssets, 0x35 },
    { L"Jubilee", 0x47ea4, 0x47ec4, indexCPS2_MVCAssets, 0x36 },
    { L"Juggernaut", 0x47d84, 0x47da4, indexCPS2_MVCAssets, 0x37 },
    { L"Lou", 0x47fa4, 0x47fc4, indexCPS2_MVCAssets, 0x38 },
    { L"Magneto", 0x47da4, 0x47dc4, indexCPS2_MVCAssets, 0x39 },
    { L"Michelle Heart", 0x47f24, 0x47f44, indexCPS2_MVCAssets, 0x3A },
    { L"Psylocke", 0x47dc4, 0x47de4, indexCPS2_MVCAssets, 0x3B },
    { L"Pure & Fur", 0x47fe4, 0x48004, indexCPS2_MVCAssets, 0x3C },
    { L"Rogue", 0x47e84, 0x47ea4, indexCPS2_MVCAssets, 0x3D },
    { L"Saki", 0x47f64, 0x47f84, indexCPS2_MVCAssets, 0x3E },
    { L"Storm", 0x47ec4, 0x47ee4, indexCPS2_MVCAssets, 0x3F },
    { L"Thor", 0x47e24, 0x47e44, indexCPS2_MVCAssets, 0x40 },
    { L"Ton-Pooh", 0x47f44, 0x47f64, indexCPS2_MVCAssets, 0x41 },
    { L"Unknown Soldier", 0x47f84, 0x47fa4, indexCPS2_MVCAssets, 0x42 },
    { L"U.S. Agent", 0x47e44, 0x47e64, indexCPS2_MVCAssets, 0x43 },
    { L"Unselected Assist Icons", 0x52364, 0x52384, indexCPS2_MVCAssets, 0x44 },
};

const sGame_PaletteDataset MVC_A_VSP_PALETTES[] =
{
    { L"Captain America P1 VSP", 0x55e44, 0x55f04, indexCPS2_CapAm, 0x13 },
    { L"Captain America P2 VSP", 0x57104, 0x571c4, indexCPS2_CapAm, 0x13 },
    { L"Captain Commando P1 VSP", 0x56444, 0x56504, indexCPS2_CapCom, 0x13 },
    { L"Captain Commando P2 VSP", 0x57704, 0x577c4, indexCPS2_CapCom, 0x13 },
    { L"Chun-Li P1 VSP", 0x56504, 0x565c4, indexCPS2_ChunLi, 0x13 },
    { L"Chun-Li P2 VSP", 0x577c4, 0x57884, indexCPS2_ChunLi, 0x13 },
    { L"Shadow Lady P1 VSP", 0x56c84, 0x56d44, indexCPS2_ChunLi, 0x13 },
    { L"Shadow Lady P2 VSP", 0x57f44, 0x58004, indexCPS2_ChunLi, 0x13 },
    { L"Gambit P1 VSP", 0x56084, 0x56144, indexCPS2_Gambit, 0x13 },
    { L"Gambit P2 VSP", 0x57344, 0x57404, indexCPS2_Gambit, 0x13 },
    { L"Hulk P1 VSP", 0x55f04, 0x55f24, indexCPS2_Hulk, 0x13 },
    { L"Orange Hulk P1 VSP", 0x56b04, 0x56b24, indexCPS2_Hulk, 0x13 },
    { L"Hulk P2 VSP", 0x571c4, 0x571e4, indexCPS2_Hulk, 0x13 },
    { L"Orange Hulk P2 VSP", 0x57dc4, 0x57de4, indexCPS2_Hulk, 0x13 },
    { L"Jin P1 VSP", 0x565c4, 0x56684, indexCPS2_Jin, 0x13 },
    { L"Jin P2 VSP", 0x57884, 0x57944, indexCPS2_Jin, 0x13 },
    { L"Megaman P1 VSP", 0x568c4, 0x56944, indexCPS2_Megaman, 0x13 },
    { L"Megaman P2 VSP", 0x57b84, 0x57c04, indexCPS2_Megaman, 0x13 },
    { L"Morrigan P1 VSP", 0x56804, 0x568c4, indexCPS2_Morrigan, 0x13 },
    { L"Morrigan P2 VSP", 0x57ac4, 0x57b84, indexCPS2_Morrigan, 0x13 },
    { L"Lilith P1 VSP", 0x56d44, 0x56e04, indexCPS2_Morrigan, 0x13 },
    { L"Lilith P2 VSP", 0x58004, 0x580c4, indexCPS2_Morrigan, 0x13 },
    { L"Onslaught P1 VSP", 0x56984, 0x569e4, indexCPS2_Onslaught, 0x13 },
    { L"Roll P1 VSP", 0x562c4, 0x56384, indexCPS2_Roll, 0x13 },
    { L"Roll P2 VSP", 0x57584, 0x57644, indexCPS2_Roll, 0x13 },
    { L"Ryu P1 VSP", 0x56384, 0x56444, indexCPS2_Ryu, 0x13 },
    { L"Ryu P2 VSP", 0x57644, 0x57704, indexCPS2_Ryu, 0x13 },
    { L"Ken P1 VSP", 0x56e04, 0x56ec4, indexCPS2_Ryu, 0x13 },
    { L"Ken P2 VSP", 0x580c4, 0x58184, indexCPS2_Ryu, 0x13 },
    { L"Gouki P1 VSP", 0x56ec4, 0x56f84, indexCPS2_Ryu, 0x13 },
    { L"Gouki P2 VSP", 0x58184, 0x58244, indexCPS2_Ryu, 0x13 },
    { L"Spider-Man P1 VSP", 0x56204, 0x56284, indexCPS2_Spidey, 0x13 },
    { L"Spider-Man P2 VSP", 0x574c4, 0x57544, indexCPS2_Spidey, 0x13 },
    { L"Strider Hiryu P1 VSP", 0x56744, 0x56804, indexCPS2_Strider, 0x13 },
    { L"Strider Hiryu P2 VSP", 0x57a04, 0x57ac4, indexCPS2_Strider, 0x13 },
    { L"Venom P1 VSP", 0x56144, 0x561c4, indexCPS2_Venom, 0x13 },
    { L"Venom P2 VSP", 0x57404, 0x57484, indexCPS2_Venom, 0x13 },
    { L"Red Venom P1 VSP", 0x56a44, 0x56ac4, indexCPS2_Venom, 0x13 },
    { L"Red Venom P2 VSP", 0x57d04, 0x57d84, indexCPS2_Venom, 0x13 },
    { L"War Machine P1 VSP", 0x55d84, 0x55e04, indexCPS2_WarMachine, 0x13 },
    { L"War Machine P2 VSP", 0x57044, 0x570c4, indexCPS2_WarMachine, 0x13 },
    { L"Gold War Machine P1 VSP", 0x56bc4, 0x56c44, indexCPS2_WarMachine, 0x13 },
    { L"Gold War Machine P2 VSP", 0x57e84, 0x57f04, indexCPS2_WarMachine, 0x13 },
    { L"Wolverine P1 VSP", 0x55fc4, 0x56084, indexCPS2_Wolverine, 0x13 },
    { L"Wolverine P2 VSP", 0x57284, 0x57344, indexCPS2_Wolverine, 0x13 },
    { L"Zangief P1 VSP", 0x56684, 0x56724, indexCPS2_Zangief, 0x13 },
    { L"Zangief P2 VSP", 0x57944, 0x579e4, indexCPS2_Zangief, 0x13 },
    { L"Mech-Zangief P1 VSP", 0x56f84, 0x57024, indexCPS2_Zangief, 0x13 },
    { L"Mech-Zangief P2 VSP", 0x58244, 0x582e4, indexCPS2_Zangief, 0x13 },
};

const sGame_PaletteDataset MVC_A_CSP_PALETTES[] =
{
    { L"Captain America P1 Duo/CSP", 0x52a84, 0x52ae4, indexCPS2_CapAm, 0x10 },
    { L"Captain America P2 Duo/CSP", 0x53084, 0x530e4, indexCPS2_CapAm, 0x10 },
    { L"Captain Commando P1 Duo/CSP", 0x52d84, 0x52de4, indexCPS2_CapCom, 0x10 },
    { L"Captain Commando P2 Duo/CSP", 0x53384, 0x533e4, indexCPS2_CapCom, 0x10 },
    { L"Chun-Li P1 Duo/CSP", 0x52de4, 0x52e44, indexCPS2_ChunLi, 0x10 },
    { L"Chun-Li 2P Duo/CSP", 0x533e4, 0x53444, indexCPS2_ChunLi, 0x10 },
    { L"Shadow Lady P2 Duo/CSP", 0x53924, 0x53984, indexCPS2_ChunLi, 0x10 },
    { L"Shadow Lady P1 Duo/CSP", 0x53744, 0x537a4, indexCPS2_ChunLi, 0x10 },
    { L"Gambit P1 Duo/CSP", 0x52ba4, 0x52c04, indexCPS2_Gambit, 0x10 },
    { L"Gambit P2 Duo/CSP", 0x531a4, 0x53204, indexCPS2_Gambit, 0x10 },
    { L"Hulk P1 Duo/CSP", 0x52ae4, 0x52b04, indexCPS2_Hulk, 0x10 },
    { L"Hulk P2 Duo/CSP", 0x530e4, 0x53104, indexCPS2_Hulk, 0x10 },
    { L"Orange Hulk P1 Duo/CSP", 0x53684, 0x536a4, indexCPS2_Hulk, 0x10 },
    { L"Orange Hulk P2 Duo/CSP", 0x53864, 0x53884, indexCPS2_Hulk, 0x10 },
    { L"Jin P1 Duo/CSP", 0x52e44, 0x52ea4, indexCPS2_Jin, 0x10 },
    { L"Jin 2P Duo/CSP", 0x53444, 0x534a4, indexCPS2_Jin, 0x10 },
    { L"Megaman P1 Duo/CSP", 0x52fc4, 0x53024, indexCPS2_Megaman, 0x10 },
    { L"Megaman P2 Duo/CSP", 0x535c4, 0x53624, indexCPS2_Megaman, 0x10 },
    { L"Morrigan P1 Duo/CSP", 0x52f64, 0x52fc4, indexCPS2_Morrigan, 0x10 },
    { L"Morrigan P2 Duo/CSP", 0x53564, 0x535c4, indexCPS2_Morrigan, 0x10 },
    { L"Lilith P1 Duo/CSP", 0x537a4, 0x53804, indexCPS2_Morrigan, 0x10 },
    { L"Lilith P2 Duo/CSP", 0x53984, 0x539e4, indexCPS2_Morrigan, 0x10 },
    { L"Roll P1 Duo/CSP", 0x52cc4, 0x52d24, indexCPS2_Roll, 0x10 },
    { L"Roll P2 Duo/CSP", 0x532c4, 0x53324, indexCPS2_Roll, 0x10 },
    { L"Ryu P1 Duo/CSP", 0x52d24, 0x52d84, indexCPS2_Ryu, 0x10 },
    { L"Ryu P2 Duo/CSP", 0x53324, 0x53384, indexCPS2_Ryu, 0x10 },
    { L"Ken P1 Duo/CSP", 0x539e4, 0x53a44, indexCPS2_Ryu, 0x10 },
    { L"Ken P2 Duo/CSP", 0x53b04, 0x53b64, indexCPS2_Ryu, 0x10 },
    { L"Gouki P1 Duo/CSP", 0x53a44, 0x53aa4, indexCPS2_Ryu, 0x10 },
    { L"Gouki P2 Duo/CSP", 0x53b64, 0x53bc4, indexCPS2_Ryu, 0x10 },
    { L"Spider-Man P1 Duo/CSP", 0x52c64, 0x52ca4, indexCPS2_Spidey, 0x10 },
    { L"Spider-Man P2 Duo/CSP", 0x53264, 0x532a4, indexCPS2_Spidey, 0x10 },
    { L"Strider Hiryu P1 Duo/CSP", 0x52f04, 0x52f64, indexCPS2_Strider, 0x10 },
    { L"Strider Hiryu P2 Duo/CSP", 0x53504, 0x53564, indexCPS2_Strider, 0x10 },
    { L"Venom P1 Duo/CSP", 0x52c04, 0x52c64, indexCPS2_Venom, 0x10 },
    { L"Venom P2 Duo/CSP", 0x53204, 0x53264, indexCPS2_Venom, 0x10 },
    { L"Red Venom P1 Duo/CSP", 0x53624, 0x53684, indexCPS2_Venom, 0x10 },
    { L"Red Venom P2 Duo/CSP", 0x53804, 0x53864, indexCPS2_Venom, 0x10 },
    { L"War Machine P1 Duo/CSP", 0x52a44, 0x52a84, indexCPS2_WarMachine, 0x10 },
    { L"War Machine P2 Duo/CSP", 0x53044, 0x53084, indexCPS2_WarMachine, 0x10 },
    { L"Gold War Machine P1 Duo/CSP", 0x53704, 0x53744, indexCPS2_WarMachine, 0x10 },
    { L"Gold War Machine P2 Duo/CSP", 0x538e4, 0x53924, indexCPS2_WarMachine, 0x10 },
    { L"Wolverine P1 Duo/CSP", 0x52b44, 0x52ba4, indexCPS2_Wolverine, 0x10 },
    { L"Wolverine P2 Duo/CSP", 0x53144, 0x531a4, indexCPS2_Wolverine, 0x10 },
    { L"Zangief P1 Duo/CSP", 0x52ea4, 0x52f04, indexCPS2_Zangief, 0x10 },
    { L"Zangief P2 Duo/CSP", 0x534a4, 0x53504, indexCPS2_Zangief, 0x10 },
    { L"Mech-Zangief P1 Duo/CSP", 0x53aa4, 0x53b04, indexCPS2_Zangief, 0x10 },
    { L"Mech-Zangief P2 Duo/CSP", 0x53bc4, 0x53c24, indexCPS2_Zangief, 0x10 },
};

const sGame_PaletteDataset MVC_A_SUPERPORT_PALETTES[] =
{
    { L"Captain America P1 Super", 0x53ec4, 0x53f64, indexCPS2_CapAm, 0x12 },
    { L"Captain America P2 Super", 0x54e64, 0x54f04, indexCPS2_CapAm, 0x12 },
    { L"Captain Commando P1 Super", 0x543c4, 0x54464, indexCPS2_CapCom, 0x12 },
    { L"Captain Commando P2 Super", 0x55364, 0x55404, indexCPS2_CapCom, 0x12 },
    { L"Chun-Li P1 Super", 0x54464, 0x54504, indexCPS2_ChunLi, 0x12 },
    { L"Chun-Li P2 Super", 0x55404, 0x554a4, indexCPS2_ChunLi, 0x12 },
    { L"Shadow Lady P1 Super", 0x54aa4, 0x54b44, indexCPS2_ChunLi, 0x12 },
    { L"Shadow Lady P2 Super", 0x55a44, 0x55ae4, indexCPS2_ChunLi, 0x12 },
    { L"Gambit P1 Super", 0x540a4, 0x54124, indexCPS2_Gambit, 0x12 },
    { L"Gambit P2 Super", 0x55044, 0x550c4, indexCPS2_Gambit, 0x12 },
    { L"Hulk P1 Super", 0x53f64, 0x53f84, indexCPS2_Hulk, 0x12 },
    { L"Hulk P2 Super", 0x54f04, 0x54f24, indexCPS2_Hulk, 0x12 },
    { L"Orange Hulk P1 Super", 0x54964, 0x54984, indexCPS2_Hulk, 0x12 },
    { L"Orange Hulk P2 Super", 0x55904, 0x55924, indexCPS2_Hulk, 0x12 },
    { L"Jin P1 Super", 0x54504, 0x545a4, indexCPS2_Jin, 0x12 },
    { L"Jin P2 Super", 0x554a4, 0x55544, indexCPS2_Jin, 0x12 },
    { L"Megaman P1 Super", 0x54784, 0x54824, indexCPS2_Megaman, 0x12 },
    { L"Megaman P2 Super", 0x55724, 0x557c4, indexCPS2_Megaman, 0x12 },
    { L"Morrigan P1 Super", 0x546e4, 0x54784, indexCPS2_Morrigan, 0x12 },
    { L"Morrigan P2 Super", 0x55684, 0x55724, indexCPS2_Morrigan, 0x12 },
    { L"Lilith P1 Super", 0x54b44, 0x54be4, indexCPS2_Morrigan, 0x12 },
    { L"Lilith P2 Super", 0x55ae4, 0x55b84, indexCPS2_Morrigan, 0x12 },
    { L"Roll P1 Super", 0x54284, 0x54324, indexCPS2_Roll, 0x12 },
    { L"Roll P2 Super", 0x55224, 0x552c4, indexCPS2_Roll, 0x12 },
    { L"Ryu P1 Super", 0x54324, 0x543c4, indexCPS2_Ryu, 0x12 },
    { L"Ryu P2 Super", 0x552c4, 0x55364, indexCPS2_Ryu, 0x12 },
    { L"Ken P1 Super", 0x54be4, 0x54c84, indexCPS2_Ryu, 0x12 },
    { L"Ken P2 Super", 0x55b84, 0x55c24, indexCPS2_Ryu, 0x12 },
    { L"Gouki P1 Super", 0x54c84, 0x54d24, indexCPS2_Ryu, 0x12 },
    { L"Gouki P2 Super", 0x55c24, 0x55cc4, indexCPS2_Ryu, 0x12 },
    { L"Spider-Man P1 Super", 0x541e4, 0x54244, indexCPS2_Spidey, 0x12 },
    { L"Spider-Man P2 Super", 0x55184, 0x551e4, indexCPS2_Spidey, 0x12 },
    { L"Strider Hiryu P1 Super", 0x54644, 0x546e4, indexCPS2_Strider, 0x12 },
    { L"Strider Hiryu P2 Super", 0x555e4, 0x55684, indexCPS2_Strider, 0x12 },
    { L"Venom P1 Super", 0x54144, 0x541a4, indexCPS2_Venom, 0x12 },
    { L"Venom P2 Super", 0x550e4, 0x55144, indexCPS2_Venom, 0x12 },
    { L"Red Venom P1 Super", 0x548c4, 0x54924, indexCPS2_Venom, 0x12 },
    { L"Red Venom P2 Super", 0x55864, 0x558c4, indexCPS2_Venom, 0x12 },
    { L"War Machine P1 Super", 0x53e24, 0x53ea4, indexCPS2_WarMachine, 0x12 },
    { L"War Machine P2 Super", 0x54dc4, 0x54e44, indexCPS2_WarMachine, 0x12 },
    { L"Gold War Machine P1 Super", 0x54a04, 0x54a84, indexCPS2_WarMachine, 0x12 },
    { L"Gold War Machine P2 Super", 0x559a4, 0x55a24, indexCPS2_WarMachine, 0x12 },
    { L"Wolverine P1 Super", 0x54004, 0x54064, indexCPS2_Wolverine, 0x12 },
    { L"Wolverine P2 Super", 0x54fa4, 0x55004, indexCPS2_Wolverine, 0x12 },
    { L"Zangief P1 Super", 0x545a4, 0x54624, indexCPS2_Zangief, 0x12 },
    { L"Zangief P2 Super", 0x55544, 0x555c4, indexCPS2_Zangief, 0x12 },
    { L"Mech-Zangief P1 Super", 0x54d24, 0x54da4, indexCPS2_Zangief, 0x12 },
    { L"Mech-Zangief P2 Super", 0x55cc4, 0x55d44, indexCPS2_Zangief, 0x12 },
    { L"Onslaught P1 Super", 0x54824, 0x548a4, indexCPS2_Onslaught, 0x12 },
    { L"Onslaught P2 Super", 0x557c4, 0x55844, indexCPS2_Onslaught, 0x12 },
};

const sGame_PaletteDataset MVC_A_CSIS_PALETTES[] =
{
    { L"Captain America CS Icon", 0x3e5da, 0x3e5fa, indexCPS2_CapAm, 0x11 },
    { L"Captain Commando CS Icon", 0x3e6da, 0x3e6fa, indexCPS2_CapCom, 0x11 },
    { L"Chun-Li CS Icon", 0x3e6fa, 0x3e71a, indexCPS2_ChunLi, 0x11 },
    { L"Gambit CS Icon", 0x3e63a, 0x3e65a, indexCPS2_Gambit, 0x11 },
    { L"Hulk CS Icon", 0x3e5fa, 0x3e61a, indexCPS2_Hulk, 0x11 },
    { L"Jin CS Icon", 0x3e71a, 0x3e73a, indexCPS2_Jin, 0x11 },
    { L"Megaman CS Icon", 0x3e79a, 0x3e7ba, indexCPS2_Megaman, 0x11 },
    { L"Morrigan CS Icon", 0x3e77a, 0x3e79a, indexCPS2_Morrigan, 0x11 },
    // The Roll CSI is unused
    { L"Ryu CS Icon", 0x3e6ba, 0x3e6da, indexCPS2_Ryu, 0x11 },
    { L"Spider-Man CS Icon", 0x3e67a, 0x3e69a, indexCPS2_Spidey, 0x11 },
    { L"Strider Hiryu CS Icon", 0x3e75a, 0x3e77a, indexCPS2_Strider, 0x11 },
    { L"Venom CS Icon", 0x3e65a, 0x3e67a, indexCPS2_Venom, 0x11 },
    { L"War Machine CS Icon", 0x3e5ba, 0x3e5da, indexCPS2_WarMachine, 0x11 },
    { L"Wolverine CS Icon", 0x3e61a, 0x3e63a, indexCPS2_Wolverine, 0x11 },
    { L"Zangief CS Icon", 0x3e73a, 0x3e75a, indexCPS2_Zangief, 0x11 },
};

const sGame_PaletteDataset MVC_A_CSIS_NEXT_PALETTES[] =
{
    { L"Captain America", 0x3e5da + 0x1418A, 0x3e5fa + 0x1418A, indexCPS2_CapAm, 0x11 },
    { L"Captain Commando", 0x3e6da + 0x1418A, 0x3e6fa + 0x1418A, indexCPS2_CapCom, 0x11 },
    { L"Chun-Li",        0x3e6fa + 0x1418A, 0x3e71a + 0x1418A, indexCPS2_ChunLi, 0x11 },
    { L"Gambit",         0x3e63a + 0x1418A, 0x3e65a + 0x1418A, indexCPS2_Gambit, 0x11 },
    { L"Hulk",           0x3e5fa + 0x1418A, 0x3e61a + 0x1418A, indexCPS2_Hulk, 0x11 },
    { L"Jin",            0x3e71a + 0x1418A, 0x3e73a + 0x1418A, indexCPS2_Jin, 0x11 },
    { L"Megaman",        0x3e79a + 0x1418A, 0x3e7ba + 0x1418A, indexCPS2_Megaman, 0x11 },
    { L"Morrigan",       0x3e77a + 0x1418A, 0x3e79a + 0x1418A, indexCPS2_Morrigan, 0x11 },
    // The Roll Next is unused
    { L"Ryu",            0x3e6ba + 0x1418A, 0x3e6da + 0x1418A, indexCPS2_Ryu, 0x11 },
    { L"Spider-Man",     0x3e67a + 0x1418A, 0x3e69a + 0x1418A, indexCPS2_Spidey, 0x11 },
    { L"Strider Hiryu",  0x3e75a + 0x1418A, 0x3e77a + 0x1418A, indexCPS2_Strider, 0x11 },
    { L"Venom",          0x3e65a + 0x1418A, 0x3e67a + 0x1418A, indexCPS2_Venom, 0x11 },
    { L"War Machine",    0x3e5ba + 0x1418A, 0x3e5da + 0x1418A, indexCPS2_WarMachine, 0x11 },
    { L"Wolverine",      0x3e61a + 0x1418A, 0x3e63a + 0x1418A, indexCPS2_Wolverine, 0x11 },
    { L"Zangief",        0x3e73a + 0x1418A, 0x3e75a + 0x1418A, indexCPS2_Zangief, 0x11 },
    { L"Campaign Card Back", 0x52324, 0x52344, indexCPS2_MVCAssets, 0x20 },
};

const sGame_PaletteDataset MVC_A_BONUS_PALETTES[] =
{
    { L"Life Bars & Meter Count", 0x479E4, 0x47A04, indexCPS2_MVCAssets, 0x50 },
    { L"In-Game Text (Hit Counter, Stage Number, etc)", 0x47444, 0x47464, indexCPS2_MVCAssets, 0x51 },
    { L"In-Game Text (Score, Play Status, Level, Character Names)", 0x47424, 0x47444, indexCPS2_MVCAssets, 0x52 },
    { L"Test Menu Text", 0x3E4FA, 0x3E53A, indexCPS2_MVCAssets, 0x53 },
    { L"Marvel License Text", 0x3E55A, 0x3E57A, indexCPS2_MVCAssets, 0x54 },
    { L"QSound Patent Text", 0x3E57A, 0x3E59A, indexCPS2_MVCAssets, 0x55 },
    { L"Hitsparks", 0x590E4, 0x59124 },

    { L"Blue Super BG", 0x423E6, 0x42426 },
    { L"Yellow Crossover BG", 0x42446, 0x42486 },
    { L"Red Duo BG (Flickering off)", 0x46A06, 0x46A46 },
    { L"Level 3 Super BG", 0x42566, 0x425C6 },
    { L"Character Select Background - Space", 0x3EBFA, 0x3ECBA },
    { L"Character Select Background - Earth", 0x3E7DA, 0x3E91A },
};

const sGame_PaletteDataset MVC_A_BONUS_TITLES_PALETTES[] =
{
    { L"Intro Captain Commando",    0x40A86, 0x40B86, indexCPS2_MVCAssets, 0x7b },
    { L"Intro Spiderman",           0x409C6, 0x40A66, indexCPS2_MVCAssets, 0x7c },
    { L"Intro Cliff Pt1",           0x40006, 0x40206, indexCPS2_MVCAssets, 0x7d, &pairNextAndNext },
    { L"Intro Cliff Pt2",           0x40206, 0x40406, indexCPS2_MVCAssets, 0x7e },
    { L"Intro Cliff Pt3",           0x5AC24, 0x5AD64, indexCPS2_MVCAssets, 0x7f },
};

const sGame_PaletteDataset MVC_A_BONUS_NAME_PALETTES[] =
{
    { L"Captain America Name",  0x52444, 0x52464, indexCPS2_MVCAssets, 0x80 },
    { L"Captain Commando Name", 0x52544, 0x52564, indexCPS2_MVCAssets, 0x81 },
    { L"Chun-Li Name",          0x52564, 0x52584, indexCPS2_MVCAssets, 0x82 },
    { L"Gambit Name",           0x524A4, 0x524C4, indexCPS2_MVCAssets, 0x83 },
    { L"Hulk Name",             0x52464, 0x52484, indexCPS2_MVCAssets, 0x84 },
    { L"Jin Name",              0x52584, 0x525A4, indexCPS2_MVCAssets, 0x85 },
    { L"Megaman Name",          0x52624, 0x52644, indexCPS2_MVCAssets, 0x86 },
    { L"Morrigan Name",         0x525E4, 0x52604, indexCPS2_MVCAssets, 0x87 },
    { L"Onslaught Name",        0x52404, 0x52424, indexCPS2_MVCAssets, 0x88 },
    { L"Rockman Name",          0x52604, 0x52624, indexCPS2_MVCAssets, 0x89 },
    { L"Roll Name",             0x52504, 0x52524, indexCPS2_MVCAssets, 0x8a },
    { L"Ryu Name",              0x52524, 0x52544, indexCPS2_MVCAssets, 0x8b },
    { L"Spiderman Name",        0x524E4, 0x52504, indexCPS2_MVCAssets, 0x8c },
    { L"Strider JP Name",       0x525C4, 0x525E4, indexCPS2_MVCAssets, 0x8d },
    { L"Strider US Name",       0x52644, 0x52664, indexCPS2_MVCAssets, 0x8e },
    { L"Venom Name",            0x524C4, 0x524E4, indexCPS2_MVCAssets, 0x8f },
    { L"War Machine Name",      0x52424, 0x52444, indexCPS2_MVCAssets, 0x90 },
    { L"Wolverine Name",        0x52484, 0x524A4, indexCPS2_MVCAssets, 0x91 },
    { L"Zangief Name",          0x525A4, 0x525C4, indexCPS2_MVCAssets, 0x92 },
};

const sGame_PaletteDataset MVC_A_BLUEMOON_STAGE_PALETTES[] =
{
    { L"Sky 1",                 0x3ACFA, 0x3AEFA, indexCPS2_MVCAssets, 0x68, &pairFullyLinkedNode },
    { L"Sky 2",                 0x3AEFA, 0x3B0FA, indexCPS2_MVCAssets, 0x69 },
    { L"Left Side Ruins 1",     0x321FA, 0x323FA, indexCPS2_MVCAssets, 0x6a },
    { L"Left Side Ruins 2",     0x323FA, 0x325FA, indexCPS2_MVCAssets, 0x6b },
    { L"Right Side Ruins 1",    0x3619A, 0x3639A, indexCPS2_MVCAssets, 0x6d },
    { L"Right Side Ruins 2",    0x3639A, 0x3659A, indexCPS2_MVCAssets, 0x6c },
    { L"Sprites",               0x518A4, 0x51944, indexCPS2_MVCAssets, 0x6e },
};

const sGame_PaletteDataset MVC_A_COUNCIL_STAGE_PALETTES[] =
{
    { L"Scary Big Guy 1",           0x318FA, 0x31AFA, indexCPS2_MVCAssets, 0x5c, &pairFullyLinkedNode },
    { L"Scary Big Guy 2",           0x31AFA, 0x31CFA, indexCPS2_MVCAssets, 0x5d },
    { L"Center Light",              0x31CFA, 0x31D5A, indexCPS2_MVCAssets, 0x5e },
    { L"Big World People 1",        0x3A4FA, 0x3A6FA, indexCPS2_MVCAssets, 0x5f },
    { L"Big World People 2",        0x3A6FA, 0x3A8FA, indexCPS2_MVCAssets, 0x60 },
    { L"Images 1",                  0x3511A, 0x3531A, indexCPS2_MVCAssets, 0x61 },
    { L"Images 2",                  0x3531A, 0x3551A, indexCPS2_MVCAssets, 0x62 },
    { L"Images 3",                  0x3551A, 0x3571A, indexCPS2_MVCAssets, 0x63 },
    { L"Images 4",                  0x3571A, 0x3591A, indexCPS2_MVCAssets, 0x64 },
    { L"Images 5",                  0x3591A, 0x35B1A, indexCPS2_MVCAssets, 0x65 },
    { L"Images 6",                  0x35b1A, 0x35BDA, indexCPS2_MVCAssets, 0x66 },
    { L"Standers Floaters Craters", 0x51764, 0x51824, indexCPS2_MVCAssets, 0x67 },
};

const sGame_PaletteDataset MVC_A_MEGAMAN_STAGE_PALETTES[] =
{
    { L"Sky",                   0x314FA, 0x3165A, indexCPS2_MVCAssets, 0x56, &pairFullyLinkedNode },
    { L"Foundry 1",             0x34D1A, 0x34F1A, indexCPS2_MVCAssets, 0x57 },
    { L"Foundry 2",             0x34F1A, 0x3511A, indexCPS2_MVCAssets, 0x58 },
    { L"Ground/Machines 1",     0x3A0FA, 0x3A2FA, indexCPS2_MVCAssets, 0x59 },
    { L"Ground/Machines 2",     0x3A2FA, 0x3A4FA, indexCPS2_MVCAssets, 0x5a },
    { L"Wahwee Robot Crater",   0x516C4, 0x51764, indexCPS2_MVCAssets, 0x5b },
};

const sGame_PaletteDataset MVC_A_ZABEL_STAGE_PALETTES[] =
{
    { L"Background 1",  0x397FA, 0x399FA, indexCPS2_MVCAssets, 0x70, &pairFullyLinkedNode },
    { L"Background 2 (Unused)",  0x399FA, 0x39BFA },
    { L"Background 3",  0x39BFA, 0x39C7A, indexCPS2_MVCAssets, 0x6f },

    { L"Middle 1",      0x3421A, 0x3441A, indexCPS2_MVCAssets, 0x73 },
    { L"Middle 2",      0x3441A, 0x3461A, indexCPS2_MVCAssets, 0x72 },
    { L"Middle 3",      0x3461A, 0x346BA, indexCPS2_MVCAssets, 0x71 },

    { L"Foreground 1",  0x30B1A, 0x30d1A, indexCPS2_MVCAssets, 0x76 },
    { L"Foreground 2",  0x30D1A, 0x30f1A, indexCPS2_MVCAssets, 0x75 },
    { L"Foreground 3",  0x30f1A, 0x310FA, indexCPS2_MVCAssets, 0x74 },

    { L"Sprites",       0x51584, 0x51624, indexCPS2_MVCAssets, 0x77 },
};

const sDescTreeNode MVC_A_WARMACHINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_P1,         ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_P2,         ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES_SHARED, ARRAYSIZE(MVC_A_WARMACHINE_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_CAPAM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_P1,            ARRAYSIZE(MVC_A_CAPAM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_P2,            ARRAYSIZE(MVC_A_CAPAM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES_SHARED,    ARRAYSIZE(MVC_A_CAPAM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_HULK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_P1,             ARRAYSIZE(MVC_A_HULK_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_P2,             ARRAYSIZE(MVC_A_HULK_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_EXTRAS,     ARRAYSIZE(MVC_A_HULK_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES_SHARED,     ARRAYSIZE(MVC_A_HULK_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_WOLVERINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_P1,         ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_P2,         ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES_SHARED, ARRAYSIZE(MVC_A_WOLVERINE_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_GAMBIT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_P1,           ARRAYSIZE(MVC_A_GAMBIT_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_P2,           ARRAYSIZE(MVC_A_GAMBIT_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES_SHARED,   ARRAYSIZE(MVC_A_GAMBIT_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_VENOM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_P1,            ARRAYSIZE(MVC_A_VENOM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_P2,            ARRAYSIZE(MVC_A_VENOM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES_SHARED,    ARRAYSIZE(MVC_A_VENOM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_SPIDEY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_P1,           ARRAYSIZE(MVC_A_SPIDEY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_P2,           ARRAYSIZE(MVC_A_SPIDEY_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES_SHARED, ARRAYSIZE(MVC_A_SPIDEY_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ROLL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_P1,             ARRAYSIZE(MVC_A_ROLL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_P2,             ARRAYSIZE(MVC_A_ROLL_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_EXTRAS,             ARRAYSIZE(MVC_A_ROLL_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES_SHARED, ARRAYSIZE(MVC_A_ROLL_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_RYU_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_P1,              ARRAYSIZE(MVC_A_RYU_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_P2,              ARRAYSIZE(MVC_A_RYU_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES_SHARED, ARRAYSIZE(MVC_A_RYU_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_CAPCOM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_P1,           ARRAYSIZE(MVC_A_CAPCOM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_P2,           ARRAYSIZE(MVC_A_CAPCOM_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_EXTRAS,   ARRAYSIZE(MVC_A_CAPCOM_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES_SHARED, ARRAYSIZE(MVC_A_CAPCOM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_CHUNLI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_P1,           ARRAYSIZE(MVC_A_CHUNLI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_P2,           ARRAYSIZE(MVC_A_CHUNLI_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES_SHARED, ARRAYSIZE(MVC_A_CHUNLI_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_JIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_P1,              ARRAYSIZE(MVC_A_JIN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_P2,              ARRAYSIZE(MVC_A_JIN_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_EXTRAS,      ARRAYSIZE(MVC_A_JIN_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES_SHARED,      ARRAYSIZE(MVC_A_JIN_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_GIEF_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_P1,             ARRAYSIZE(MVC_A_GIEF_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_P2,             ARRAYSIZE(MVC_A_GIEF_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES_SHARED, ARRAYSIZE(MVC_A_GIEF_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_STRIDER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_P1,          ARRAYSIZE(MVC_A_STRIDER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_P2,          ARRAYSIZE(MVC_A_STRIDER_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES_SHARED, ARRAYSIZE(MVC_A_STRIDER_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_MEGAMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_P1,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_P2,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_EXTRAS,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES_SHARED, ARRAYSIZE(MVC_A_MEGAMAN_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_MORRIGAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_P1,         ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_P2,         ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_EXTRAS, ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES_SHARED, ARRAYSIZE(MVC_A_MORRIGAN_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ONSLAUGHT_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PALETTES,        ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PALETTES_SHARED, ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_HYPERVENOM_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_P1,       ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_P2,       ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES_SHARED, ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ORANGEHULK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_P1,       ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_P2,       ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES_SHARED, ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_GOLDWARMACHINE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_P1,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_P2,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_EXTRAS,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_EXTRAS) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES_SHARED, ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_SHADOWLADY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_P1,       ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_P2,       ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES_SHARED, ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_LILITH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_P1,           ARRAYSIZE(MVC_A_LILITH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_P2,           ARRAYSIZE(MVC_A_LILITH_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES_SHARED, ARRAYSIZE(MVC_A_LILITH_PALETTES_SHARED) },
};

const sDescTreeNode MVC_A_ASSIST_COLLECTION[] =
{
    { L"Assists",                      DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_PALETTES,           ARRAYSIZE(MVC_A_ASSIST_PALETTES) },
    { L"Assist Icons",                 DESC_NODETYPE_TREE, (void*)MVC_A_ASSISTICON_PALETTES,       ARRAYSIZE(MVC_A_ASSISTICON_PALETTES) },
};

const sDescTreeNode MVC_A_CSIS_COLLECTION[] =
{
    { L"Character Select Icons",       DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_PALETTES,             ARRAYSIZE(MVC_A_CSIS_PALETTES) },
    { L"Campaign Cards",               DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_NEXT_PALETTES,        ARRAYSIZE(MVC_A_CSIS_NEXT_PALETTES) },
};

const sDescTreeNode MVC_A_PORTRAITS_COLLECTION[] =
{
    { L"Character Select Portraits",   DESC_NODETYPE_TREE, (void*)MVC_A_CSP_PALETTES,              ARRAYSIZE(MVC_A_CSP_PALETTES) },
    { L"Victory Screen Portraits",     DESC_NODETYPE_TREE, (void*)MVC_A_VSP_PALETTES,              ARRAYSIZE(MVC_A_VSP_PALETTES) },
    { L"Super Portraits",              DESC_NODETYPE_TREE, (void*)MVC_A_SUPERPORT_PALETTES,        ARRAYSIZE(MVC_A_SUPERPORT_PALETTES) },
};

const sDescTreeNode MVC_A_BONUS_COLLECTION[] =
{
   { L"Bonus",                         DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_PALETTES,            ARRAYSIZE(MVC_A_BONUS_PALETTES) },
   { L"Title/Select Screen",           DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_TITLES_PALETTES,     ARRAYSIZE(MVC_A_BONUS_TITLES_PALETTES) },
   { L"Character Name Text",           DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_NAME_PALETTES,       ARRAYSIZE(MVC_A_BONUS_NAME_PALETTES) },
   { L"Blue Area of the Moon Stage",   DESC_NODETYPE_TREE, (void*)MVC_A_BLUEMOON_STAGE_PALETTES,   ARRAYSIZE(MVC_A_BLUEMOON_STAGE_PALETTES) },
   { L"Council Stage",                 DESC_NODETYPE_TREE, (void*)MVC_A_COUNCIL_STAGE_PALETTES,    ARRAYSIZE(MVC_A_COUNCIL_STAGE_PALETTES) },
   { L"Megaman Stage",                 DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_STAGE_PALETTES,    ARRAYSIZE(MVC_A_MEGAMAN_STAGE_PALETTES) },
   { L"Zabel Stage",                   DESC_NODETYPE_TREE, (void*)MVC_A_ZABEL_STAGE_PALETTES,      ARRAYSIZE(MVC_A_ZABEL_STAGE_PALETTES) },
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
    { L"War Machine",                  DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_COLLECTION,       ARRAYSIZE(MVC_A_WARMACHINE_COLLECTION) },
    { L"Captain America",              DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_COLLECTION,            ARRAYSIZE(MVC_A_CAPAM_COLLECTION) },
    { L"Hulk",                         DESC_NODETYPE_TREE, (void*)MVC_A_HULK_COLLECTION,             ARRAYSIZE(MVC_A_HULK_COLLECTION) },
    { L"Wolverine",                    DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_COLLECTION,        ARRAYSIZE(MVC_A_WOLVERINE_COLLECTION) },
    { L"Venom",                        DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_COLLECTION,            ARRAYSIZE(MVC_A_VENOM_COLLECTION) },
    { L"Spider-Man",                   DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_COLLECTION,           ARRAYSIZE(MVC_A_SPIDEY_COLLECTION) },
    { L"Roll",                         DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_COLLECTION,             ARRAYSIZE(MVC_A_ROLL_COLLECTION) },
    { L"Ryu",                          DESC_NODETYPE_TREE, (void*)MVC_A_RYU_COLLECTION,              ARRAYSIZE(MVC_A_RYU_COLLECTION) },
    { L"Captain Commando",             DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_COLLECTION,           ARRAYSIZE(MVC_A_CAPCOM_COLLECTION) },
    { L"Chun-Li",                      DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_COLLECTION,           ARRAYSIZE(MVC_A_CHUNLI_COLLECTION) },
    { L"Jin",                          DESC_NODETYPE_TREE, (void*)MVC_A_JIN_COLLECTION,              ARRAYSIZE(MVC_A_JIN_COLLECTION) },
    { L"Zangief",                      DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_COLLECTION,             ARRAYSIZE(MVC_A_GIEF_COLLECTION) },
    { L"Strider",                      DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_COLLECTION,          ARRAYSIZE(MVC_A_STRIDER_COLLECTION) },
    { L"Megaman",                      DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_COLLECTION,          ARRAYSIZE(MVC_A_MEGAMAN_COLLECTION) },
    { L"Morrigan",                     DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_COLLECTION,         ARRAYSIZE(MVC_A_MORRIGAN_COLLECTION) },
    { L"Onslaught",                    DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_COLLECTION,        ARRAYSIZE(MVC_A_ONSLAUGHT_COLLECTION) },
    { L"Red Venom",                    DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_COLLECTION,       ARRAYSIZE(MVC_A_HYPERVENOM_COLLECTION) },
    { L"Orange Hulk",                  DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_COLLECTION,       ARRAYSIZE(MVC_A_ORANGEHULK_COLLECTION) },
    { L"Gold War Machine",             DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_COLLECTION,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_COLLECTION) },
    { L"Shadow Lady",                  DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_COLLECTION,       ARRAYSIZE(MVC_A_SHADOWLADY_COLLECTION) },
    { L"Lilith",                       DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_COLLECTION,           ARRAYSIZE(MVC_A_LILITH_COLLECTION) },
    { L"Gambit",                       DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_COLLECTION,           ARRAYSIZE(MVC_A_GAMBIT_COLLECTION) },
    { L"Assists",                      DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_COLLECTION,           ARRAYSIZE(MVC_A_ASSIST_COLLECTION) },
    { L"Portraits",                    DESC_NODETYPE_TREE, (void*)MVC_A_PORTRAITS_COLLECTION,        ARRAYSIZE(MVC_A_PORTRAITS_COLLECTION) },
    { L"Character Icons",              DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_COLLECTION,             ARRAYSIZE(MVC_A_CSIS_COLLECTION) },
    { L"Bonus and Stages",             DESC_NODETYPE_TREE, (void*)MVC_A_BONUS_COLLECTION,            ARRAYSIZE(MVC_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the mvce.txt extensible extras file, if any.
const stExtraDef MVC_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
