#pragma once

// Note that we only look up Onslaught from this section, and we don't have a sprite(?)
#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the line sof MVC_A_RYU_PALETTES. 
// * Update every array using MVC_A_NUMUNIT below
// * Update the index lookups in Game_MVC_A_.cpp that is marked - look for usage of indexRyu to find them
// That should be it.  Good luck.

enum SupportedPaletteListIndex
{
    indexWarMachine = 0,
    indexCaptainAmerica,
    indexHulk,
    indexWolverine,
    indexVenom,
    indexSpiderman,
    indexRoll,
    indexRyu,
    indexCapCom,
    indexChun,
    indexJin,
    indexGief,
    indexStrider,
    indexMegaman,
    indexMorrigan,
    indexOnslaught,
    indexHyperVenom,
    indexOrangeHulk,
    indexGWM,
    indexShadowLady,
    indexLilith,
    indexGambit,
    indexAssists,
    indexAssistPorts,
    indexCSIs,
    indexCSPs,
    indexVSPs,
    indexSuperPort,
    indexLast
};

constexpr auto MVC_A_NUMUNIT = indexLast;

#define MVC_A_EXTRALOC MVC_A_NUMUNIT

struct sMVC_PaletteDataset
{
    LPCSTR szPaletteName;
    int nPaletteOffset;
    int nPaletteOffsetEnd;
    UINT16 indexImgToUse = INVALID_UNIT_VALUE; // the major character/collection index
    UINT16 indexOffsetToUse = 0x0; // subsprites within that collection
};

const sMVC_PaletteDataset MVC_A_RYU_PALETTES[] =
{
    { "Ryu P1", 0x487c4, 0x487e4, 0x00 },
    { "Ryu P1 Hadouken", 0x487e4, 0x48804, 0x00, 1 },
    { "Ryu P1 Shoryuken", 0x48804, 0x48824, 0x27, 2 },
    { "Ryu P2", 0x48824, 0x48844, 0x00 },
    { "Ryu P2 Hadouken", 0x48844, 0x48864, 0x00, 1 },
    { "Ryu P2 Shoryuken", 0x48864, 0x48884, 0x27, 2 },

    { "Ken P1", 0x4ec44, 0x4ec64, 0x00 },
    { "Ken P1 Hakouken", 0x4ec64, 0x4ec84, 0x00, 1 },
    { "Ken P1 Shoryuken", 0x4ec84, 0x4eca4, 0x27, 2 },
    { "Ken P2", 0x4eca4, 0x4ecc4, 0x00 },
    { "Ken P2 Hadouken", 0x4ecc4, 0x4ece4, 0x00, 1 },
    { "Ken P2 Shoryuken", 0x4ece4, 0x4ed04, 0x27, 2 },

    { "Akuma P1", 0x4ed04, 0x4ed24, 0x00 },
    { "Akuma P1 Hadouken", 0x4ed24, 0x4ed44, 0x1e, 1 },
    { "Akuma P1 Shoryuken", 0x4ed44, 0x4ed64, 0x27, 2 },
    { "Akuma P2", 0x4ed64, 0x4ed84, 0x00 },
    { "Akuma P2 Hadouken", 0x4ed84, 0x4eda4, 0x1e, 1 },
    { "Akuma P2 Shoryuken", 0x4eda4, 0x4edc4, 0x27, 2 },
};

const sMVC_PaletteDataset MVC_A_GIEF_PALETTES[] =
{
    { "P1 Color", 0x48ac4, 0x48ae4, 0x01 },
    { "P1 Banishing Fist", 0x48ae4, 0x48b04, 0x01, 1 },
    { "Palette 3", 0x48b04, 0x48b24, 0xff },
    { "P2 Color", 0x48b24, 0x48b44, 0x01 },
    { "P2 Banishing Fist", 0x48b44, 0x48b64, 0x01, 1 },
    { "Palette 6", 0x48b64, 0x48b84, 0xff },
    { "Mecha Zangief P1", 0x48c84, 0x48ca4, 0x01 },
    { "P1 Yoga Flame", 0x48ca4, 0x48cc4, 0x01, 3 },
    { "Palette 15", 0x48cc4, 0x48ce4, 0xff },
    { "Mecha Zangief P2", 0x48ce4, 0x48d04, 0x01 },
    { "P2 Yoga Flame", 0x48d04, 0x48d24, 0x01, 3 },
    { "Palette 18", 0x48d24, 0x48d44, 0xff },
};

const sMVC_PaletteDataset MVC_A_SHADOWLADY_PALETTES[] =
{
    { "P1 Color", 0x492e4, 0x49304, 0x1b },
    { "P1 Glimmer 1", 0x4ff64, 0x4ff84, 0x1b },
    { "P1 Glimmer 2", 0x4ff84, 0x4ffa4, 0x1b },
    { "P1 Glimmer 3", 0x4ffa4, 0x4ffc4, 0x1b },
    { "P1 Extra 1", 0x49304, 0x49324 },
    { "P1 Extra 2", 0x49324, 0x49344 },
    { "P2 Color", 0x49344, 0x49364, 0x1b },
    { "P2 Glimmer 1", 0x4ffc4, 0x4ffe4, 0x1b },
    { "P2 Glimmer 2", 0x4ffe4, 0x50004, 0x1b },
    { "P2 Glimmer 3", 0x50004, 0x50024, 0x1b },
    { "P2 Extra 1", 0x49364, 0x49384 },
    { "P2 Extra 2", 0x49384, 0x493a4 },
};

const sMVC_PaletteDataset MVC_A_CHUNLI_PALETTES[] =
{
    { "P1 Color", 0x48944, 0x48964, 0x1b },
    { "P1 leg flash", 0x48964, 0x48984, 0x1b, 1 },
    { "P1 Kikosho", 0x48984, 0x489a4, 0x1b, 2 },
    { "P2 Color", 0x489a4, 0x489c4, 0x1b },
    { "P2 leg flash", 0x489c4, 0x489e4, 0x1b, 1 },
    { "P2 Kikosho", 0x489e4, 0x48a04, 0x1b, 2 },
};

const sMVC_PaletteDataset MVC_A_JIN_PALETTES[] =
{
    { "P1 Color", 0x48a04, 0x48a24, 0x37 },
    { "P1 Blodia FX", 0x48a24, 0x48a44, 0x37, 1 },
    { "P1 Blodia Punch", 0x48a44, 0x48a64, 0x37, 2 },
    { "P2 Color", 0x48a64, 0x48a84, 0x37 },
    { "P2 Blodia FX", 0x48a84, 0x48aa4, 0x37, 1 },
    { "P2 Blodia Punch", 0x48aa4, 0x48ac4, 0x37, 2 },
};

// Note that since this is eleventy palettes, the code is substituting the default Megaman sprite when 0xff is supplied.  
// To unwind that we would want to specify the correct sprites to use everywhere.  MM is 0x1C .
const sMVC_PaletteDataset MVC_A_MEGAMAN_PALETTES[] =
{
    { "Megaman P1", 0x48f84, 0x48fa4 },
    { "P1 Rush/Eddie", 0x48fa4, 0x48fc4, 0x1c, 1 },
    { "P1 Beat", 0x48fc4, 0x48fe4 },
    { "Megaman P2", 0x48fe4, 0x49004 },
    { "P2 Rush/Eddie", 0x49004, 0x49024, 0x1c, 1 },
    { "P2 Beat", 0x49024, 0x49044 },
    { "P1 Hair", 0x4c044, 0x4c064 },
    { "P1 Teleport / Death Animation", 0x4c064, 0x4c084 },
    { "P1 Intro 1", 0x4c084, 0x4c0a4 },
    { "P1 Intro 2", 0x4c0a4, 0x4c0c4 },
    { "P1 Intro 3", 0x4c0c4, 0x4c0e4 },
    { "P1 Intro 4", 0x4c0e4, 0x4c104 },
    { "P1 Intro 5", 0x4c104, 0x4c124 },
    { "P1 Intro 6", 0x4c124, 0x4c144 },
    { "P1 Intro 7", 0x4c144, 0x4c164 },
    { "P1 Intro 8", 0x4c164, 0x4c184 },
    { "P1 Intro 9", 0x4c184, 0x4c1a4 },
    { "P1 Rush 1", 0x4c1a4, 0x4c1c4, 0x1c, 1 },
    { "P1 Rush 2", 0x4c1c4, 0x4c1e4, 0x1c, 1 },
    { "P1 Rush 3", 0x4c1e4, 0x4c204, 0x1c, 1 },
    { "P1 Rush 4", 0x4c204, 0x4c224, 0x1c, 1 },
    { "P1 Rush 5", 0x4c224, 0x4c244, 0x1c, 1 },
    { "P1 Rush 6", 0x4c244, 0x4c264, 0x1c, 1 },
    { "P1 Rush 7", 0x4c264, 0x4c284, 0x1c, 1 },
    { "P1 Rush 8", 0x4c284, 0x4c2a4, 0x1c, 1 },
    { "P1 Rush 9", 0x4c2a4, 0x4c2c4, 0x1c, 1 },
    { "P1 Beat 1", 0x4c2c4, 0x4c2e4 },
    { "P1 Beat 2", 0x4c2e4, 0x4c304 },
    { "P1 Beat 3", 0x4c304, 0x4c324 },
    { "P1 Beat 4", 0x4c324, 0x4c344 },
    { "P1 Beat 5", 0x4c344, 0x4c364 },
    { "P1 Beat 6", 0x4c364, 0x4c384 },
    { "P1 Beat 7", 0x4c384, 0x4c3a4 },
    { "P1 Beat 8", 0x4c3a4, 0x4c3c4 },
    { "P1 Beat 9", 0x4c3c4, 0x4c3e4 },
    { "P1 Beat Plane 1", 0x4c3e4, 0x4c404 },
    { "P1 Beat Plane 2", 0x4c404, 0x4c424 },
    { "P1 Beat Plane 3", 0x4c424, 0x4c444 },
    { "P1 Beat Plane 4", 0x4c444, 0x4c464 },
    { "P1 Beat Plane 5", 0x4c464, 0x4c484 },
    { "P1 Beat Plane 6", 0x4c484, 0x4c4a4 },
    { "P1 Beat Plane 7", 0x4c4a4, 0x4c4c4 },
    { "P1 Beat Plane 8", 0x4c4c4, 0x4c4e4 },
    { "P1 Beat Plane 9", 0x4c4e4, 0x4c504 },
    { "P1 Charged HP 1", 0x4c504, 0x4c524 },
    { "P1 Charged HP 2", 0x4c524, 0x4c544 },
    { "P1 Charged HP 3", 0x4c544, 0x4c564 },
    { "P1 Charged HP 4", 0x4c564, 0x4c584 },
    { "P1 Charged HP 5", 0x4c584, 0x4c5a4 },
    { "P1 Charged HP 6", 0x4c5a4, 0x4c5c4 },
    { "P1 Charged HP 7", 0x4c5c4, 0x4c5e4 },
    { "P1 Charged HP 8", 0x4c5e4, 0x4c604 },
    { "P1 Charged HP 9", 0x4c604, 0x4c624 },
    { "P1 Rush Drill 1", 0x4c624, 0x4c644, 0x1c, 1 },
    { "P1 Rush Drill 2", 0x4c644, 0x4c664, 0x1c, 1 },
    { "P1 Rush Drill 3", 0x4c664, 0x4c684, 0x1c, 1 },
    { "P1 Rush Drill 4", 0x4c684, 0x4c6a4, 0x1c, 1 },
    { "P1 Rush Drill 5", 0x4c6a4, 0x4c6c4, 0x1c, 1 },
    { "P1 Rush Drill 6", 0x4c6c4, 0x4c6e4, 0x1c, 1 },
    { "P1 Rush Drill 7", 0x4c6e4, 0x4c704, 0x1c, 1 },
    { "P1 Rush Drill 8", 0x4c704, 0x4c724, 0x1c, 1 },
    { "P1 Rush Drill 9", 0x4c724, 0x4c744, 0x1c, 1 },
    { "P1 Teleport Intro", 0x4c744, 0x4c764 },
    { "P1 Dr Light", 0x4c764, 0x4c784 },
    { "P1 Hyper Megaman Armor 1", 0x4c784, 0x4c7a4 },
    { "P1 Hyper Megaman Armor 2", 0x4c7a4, 0x4c7c4 },
    { "P1 Hyper Megaman Armor 3", 0x4c7c4, 0x4c7e4 },
    { "P1 Hyper Megaman Armor 4", 0x4c7e4, 0x4c804 },
    { "P1 Hyper Megaman Armor 5", 0x4c804, 0x4c824 },
    { "P1 Hyper Megaman Armor 6", 0x4c824, 0x4c844 },
    { "P1 Hyper Megaman Armor 7", 0x4c844, 0x4c864 },
    { "P1 Hyper Megaman Armor 8", 0x4c864, 0x4c884 },
    { "P1 Hyper Megaman Armor 9", 0x4c884, 0x4c8a4 },
    { "P1 Hyper Megaman 1", 0x4c8a4, 0x4c8c4 },
    { "P1 Hyper Megaman 2", 0x4c8c4, 0x4c8e4 },
    { "P1 Hyper Megaman 3", 0x4c8e4, 0x4c904 },
    { "P1 Hyper Megaman 4", 0x4c904, 0x4c924 },
    { "P1 Hyper Megaman 5", 0x4c924, 0x4c944 },
    { "P1 Hyper Megaman 6", 0x4c944, 0x4c964 },
    { "P1 Hyper Megaman 7", 0x4c964, 0x4c984 },
    { "P1 Hyper Megaman 8", 0x4c984, 0x4c9a4 },
    { "P1 Hyper Megaman 9", 0x4c9a4, 0x4c9c4 },
    { "P1 Hyper MegaMan Missiles", 0x4c9c4, 0x4c9e4 },
    { "P1 Roll Win Pose", 0x4cae4, 0x4cb04, 0x1d },
    { "P1 Magnetic Megaman", 0x4cb04, 0x4cb24 },
    { "P1 Hyper Megaman Revert 1", 0x4de64, 0x4de84 },
    { "P1 Hyper Megaman Revert 2", 0x4de84, 0x4dea4 },
    { "P1 Hyper Megaman Revert 3", 0x4dea4, 0x4dec4 },
    { "P1 Hyper Megaman Revert 4", 0x4dec4, 0x4dee4 },
    { "P1 Hyper Megaman Revert 5", 0x4dee4, 0x4df04 },
    { "P1 Hyper Megaman Revert 6", 0x4df04, 0x4df24 },
    { "P1 Hyper Megaman Revert 7", 0x4df24, 0x4df44 },
    { "P1 Hyper Megaman Revert 8", 0x4df44, 0x4df64 },
    { "P1 Hyper Megaman Revert 9", 0x4df64, 0x4df84 },
    { "P1 Beat Extra", 0x4df84, 0x4dfa4 },
    { "P1 Megaman Extra", 0x4e0a4, 0x4e0c4 },
    { "P1 Magnetic Megaman", 0x4e0c4, 0x4e0e4 },

    { "P2 Hair", 0x4cb24, 0x4cb44 },
    { "P2 Teleport Intro / Death", 0x4cb44, 0x4cb64 },

    { "P2 Intro 1", 0x4cb64, 0x4cb84 },
    { "P2 Intro 2", 0x4cb84, 0x4cba4 },
    { "P2 Intro 3", 0x4cba4, 0x4cbc4 },
    { "P2 Intro 4", 0x4cbc4, 0x4cbe4 },
    { "P2 Intro 5", 0x4cbe4, 0x4cc04 },
    { "P2 Intro 6", 0x4cc04, 0x4cc24 },
    { "P2 Intro 7", 0x4cc24, 0x4cc44 },
    { "P2 Intro 8", 0x4cc44, 0x4cc64 },
    { "P2 Intro 9", 0x4cc64, 0x4cc84 },

    { "P2 Rush 1", 0x4cc84, 0x4cca4, 0x1c, 1 },
    { "P2 Rush 2", 0x4cca4, 0x4ccc4, 0x1c, 1 },
    { "P2 Rush 3", 0x4ccc4, 0x4cce4, 0x1c, 1 },
    { "P2 Rush 4", 0x4cce4, 0x4cd04, 0x1c, 1 },
    { "P2 Rush 5", 0x4cd04, 0x4cd24, 0x1c, 1 },
    { "P2 Rush 6", 0x4cd24, 0x4cd44, 0x1c, 1 },
    { "P2 Rush 7", 0x4cd44, 0x4cd64, 0x1c, 1 },
    { "P2 Rush 8", 0x4cd64, 0x4cd84, 0x1c, 1 },
    { "P2 Rush 9", 0x4cd84, 0x4cda4, 0x1c, 1 },

    { "P2 Beat 1", 0x4cda4, 0x4cdc4 },
    { "P2 Beat 2", 0x4cdc4, 0x4cde4 },
    { "P2 Beat 3", 0x4cde4, 0x4ce04 },
    { "P2 Beat 4", 0x4ce04, 0x4ce24 },
    { "P2 Beat 5", 0x4ce24, 0x4ce44 },
    { "P2 Beat 6", 0x4ce44, 0x4ce64 },
    { "P2 Beat 7", 0x4ce64, 0x4ce84 },
    { "P2 Beat 8", 0x4ce84, 0x4cea4 },
    { "P2 Beat 9", 0x4cea4, 0x4cec4 },

    { "P2 Beat Plane 1", 0x4cec4, 0x4cee4 },
    { "P2 Beat Plane 2", 0x4cee4, 0x4cf04 },
    { "P2 Beat Plane 3", 0x4cf04, 0x4cf24 },
    { "P2 Beat Plane 4", 0x4cf24, 0x4cf44 },
    { "P2 Beat Plane 5", 0x4cf44, 0x4cf64 },
    { "P2 Beat Plane 6", 0x4cf64, 0x4cf84 },
    { "P2 Beat Plane 7", 0x4cf84, 0x4cfa4 },
    { "P2 Beat Plane 8", 0x4cfa4, 0x4cfc4 },
    { "P2 Beat Plane 9", 0x4cfc4, 0x4cfe4 },

    { "P2 Charged HP 1", 0x4cfe4, 0x4d004 },
    { "P2 Charged HP 2", 0x4d004, 0x4d024 },
    { "P2 Charged HP 3", 0x4d024, 0x4d044 },
    { "P2 Charged HP 4", 0x4d044, 0x4d064 },
    { "P2 Charged HP 5", 0x4d064, 0x4d084 },
    { "P2 Charged HP 6", 0x4d084, 0x4d0a4 },
    { "P2 Charged HP 7", 0x4d0a4, 0x4d0c4 },
    { "P2 Charged HP 8", 0x4d0c4, 0x4d0e4 },
    { "P2 Charged HP 9", 0x4d0e4, 0x4d104 },

    { "P2 Rush Drill 1", 0x4d104, 0x4d124, 0x1c, 1 },
    { "P2 Rush Drill 2", 0x4d124, 0x4d144, 0x1c, 1 },
    { "P2 Rush Drill 3", 0x4d144, 0x4d164, 0x1c, 1 },
    { "P2 Rush Drill 4", 0x4d164, 0x4d184, 0x1c, 1 },
    { "P2 Rush Drill 5", 0x4d184, 0x4d1a4, 0x1c, 1 },
    { "P2 Rush Drill 6", 0x4d1a4, 0x4d1c4, 0x1c, 1 },
    { "P2 Rush Drill 7", 0x4d1c4, 0x4d1e4, 0x1c, 1 },
    { "P2 Rush Drill 8", 0x4d1e4, 0x4d204, 0x1c, 1 },
    { "P2 Rush Drill 9", 0x4d204, 0x4d224, 0x1c, 1 }, // 97

    { "P2 Teleport Intro", 0x4d224, 0x4d244 },
    { "P2 Dr Light", 0x4d244, 0x4d264 },
    { "P2 Hyper Megaman Armor 1", 0x4d264, 0x4d284 },
    { "P2 Hyper Megaman Armor 2", 0x4d284, 0x4d2a4 },
    { "P2 Hyper Megaman Armor 3", 0x4d2a4, 0x4d2c4 },
    { "P2 Hyper Megaman Armor 4", 0x4d2c4, 0x4d2e4 },
    { "P2 Hyper Megaman Armor 5", 0x4d2e4, 0x4d304 },
    { "P2 Hyper Megaman Armor 6", 0x4d304, 0x4d324 },
    { "P2 Hyper Megaman Armor 7", 0x4d324, 0x4d344 },
    { "P2 Hyper Megaman Armor 8", 0x4d344, 0x4d364 },
    { "P2 Hyper Megaman Armor 9", 0x4d364, 0x4d384 }, // a2

    { "P2 Hyper Megaman 1", 0x4d384, 0x4d3a4 },
    { "P2 Hyper Megaman 2", 0x4d3a4, 0x4d3c4 },
    { "P2 Hyper Megaman 3", 0x4d3c4, 0x4d3e4 },
    { "P2 Hyper Megaman 4", 0x4d3e4, 0x4d404 },
    { "P2 Hyper Megaman 5", 0x4d404, 0x4d424 },
    { "P2 Hyper Megaman 6", 0x4d424, 0x4d444 },
    { "P2 Hyper Megaman 7", 0x4d444, 0x4d464 },
    { "P2 Hyper Megaman 8", 0x4d464, 0x4d484 },
    { "P2 Hyper Megaman 9", 0x4d484, 0x4d4a4 }, // ab

    { "P2 Hyper Megaman Missiles", 0x4d4a4, 0x4d4c4 }, // ac
    { "P2 Megaman Intro 1", 0x4e944, 0x4e964, 0x1c },
    { "P2 Megaman Intro 2", 0x4e964, 0x4e984, 0x1c },
    { "P2 Megaman Intro 3", 0x4e984, 0x4e9a4, 0x1c },
    { "P2 Megaman Intro 4", 0x4e9a4, 0x4e9c4, 0x1c },
    { "P2 Megaman Intro 5", 0x4e9c4, 0x4e9e4, 0x1c },
    { "P2 Megaman Intro 6", 0x4e9e4, 0x4ea04, 0x1c },
    { "P2 Megaman Intro 7", 0x4ea04, 0x4ea24, 0x1c },
    { "P2 Megaman Intro 8", 0x4ea24, 0x4ea44, 0x1c },
    { "P2 Megaman Intro 9", 0x4ea44, 0x4ea64, 0x1c }, //54ish

    { "P2 Roll Win Pose", 0x4d5c4, 0x4d5e4, 0x1d },
    { "P2 Magnetic Megaman", 0x4d5e4, 0x4d604 },
};

const sMVC_PaletteDataset MVC_A_ROLL_PALETTES[] =
{
    { "P1 Color", 0x48704, 0x48724, 0x1d },
    { "P1 Rush/Eddie", 0x48724, 0x48744, 0x1c, 1 },
    { "P1 Beat", 0x48744, 0x48764 },
    { "P2 Color", 0x48764, 0x48784, 0x1d },
    { "P2 Rush/Eddie", 0x48784, 0x487a4, 0x1c, 1 },

    { "P2 Beat", 0x487a4, 0x487c4 }, // 09 : these numbers align to the mvc2 extra ids as identified in the Palette Variant Full spreadsheet
    { "P1 Hair", 0x4d604, 0x4d624 },
    { "P1 Intro / Death Animation", 0x4d624, 0x4d644 },
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
    { "P1 Beat 1", 0x4d884, 0x4d8a4 },
    { "P1 Beat 2", 0x4d8a4, 0x4d8c4 },
    { "P1 Beat 3", 0x4d8c4, 0x4d8e4 },
    { "P1 Beat 4", 0x4d8e4, 0x4d904 },
    { "P1 Beat 5", 0x4d904, 0x4d924 },
    { "P1 Beat 6", 0x4d924, 0x4d944 },
    { "P1 Beat 7", 0x4d944, 0x4d964 },
    { "P1 Beat 8", 0x4d964, 0x4d984 },
    { "P1 Beat 9", 0x4d984, 0x4d9a4 },
    { "P1 Beat Plane 1", 0x4d9a4, 0x4d9c4 },
    { "P1 Beat Plane 2", 0x4d9c4, 0x4d9e4 },
    { "P1 Beat Plane 3", 0x4d9e4, 0x4da04 },
    { "P1 Beat Plane 4", 0x4da04, 0x4da24 },
    { "P1 Beat Plane 5", 0x4da24, 0x4da44 },
    { "P1 Beat Plane 6", 0x4da44, 0x4da64 },
    { "P1 Beat Plane 7", 0x4da64, 0x4da84 },
    { "P1 Beat Plane 8", 0x4da84, 0x4daa4 },
    { "P1 Beat Plane 9", 0x4daa4, 0x4dac4 },
    { "P1 Charging Roll 1", 0x4dac4, 0x4dae4, 0x1d },
    { "P1 Charging Roll 2", 0x4dae4, 0x4db04, 0x1d },
    { "P1 Charging Roll 3", 0x4db04, 0x4db24, 0x1d },
    { "P1 Charging Roll 4", 0x4db24, 0x4db44, 0x1d },
    { "P1 Charging Roll 5", 0x4db44, 0x4db64, 0x1d },
    { "P1 Charging Roll 6", 0x4db64, 0x4db84, 0x1d },
    { "P1 Charging Roll 7", 0x4db84, 0x4dba4, 0x1d },
    { "P1 Charging Roll 8", 0x4dba4, 0x4dbc4, 0x1d },
    { "P1 Charging Roll 9", 0x4dbc4, 0x4dbe4, 0x1d },
    { "P1 Rush Drill 1", 0x4dbe4, 0x4dc04, 0x1c, 1 },
    { "P1 Rush Drill 2", 0x4dc04, 0x4dc24, 0x1c, 1 },
    { "P1 Rush Drill 3", 0x4dc24, 0x4dc44, 0x1c, 1 },
    { "P1 Rush Drill 4", 0x4dc44, 0x4dc64, 0x1c, 1 },
    { "P1 Rush Drill 5", 0x4dc64, 0x4dc84, 0x1c, 1 },
    { "P1 Rush Drill 6", 0x4dc84, 0x4dca4, 0x1c, 1 },
    { "P1 Rush Drill 7", 0x4dca4, 0x4dcc4, 0x1c, 1 },
    { "P1 Rush Drill 8", 0x4dcc4, 0x4dce4, 0x1c, 1 },
    { "P1 Rush Drill 9", 0x4dce4, 0x4dd04, 0x1c, 1 },
    { "P1 Teleport Intro", 0x4dd04, 0x4dd24 },
    { "P1 Dr Light", 0x4dd24, 0x4dd44 },
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
    { "P1 Revert Hyper Roll 1", 0x4dfa4, 0x4dfc4 },
    { "P1 Revert Hyper Roll 2", 0x4dfc4, 0x4dfe4 },
    { "P1 Revert Hyper Roll 3", 0x4dfe4, 0x4e004 },
    { "P1 Revert Hyper Roll 4", 0x4e004, 0x4e024 },
    { "P1 Revert Hyper Roll 5", 0x4e024, 0x4e044 },
    { "P1 Revert Hyper Roll 6", 0x4e044, 0x4e064 },
    { "P1 Revert Hyper Roll 7", 0x4e064, 0x4e084 },
    { "P1 Revert Hyper Roll 8", 0x4e084, 0x4e0a4 },
    { "P2 Hair ", 0x4e0e4, 0x4e104 },
    { "P2 Intro / Death Animation", 0x4e104, 0x4e124 },
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
    { "P2 Beat 1", 0x4e364, 0x4e384 },
    { "P2 Beat 2", 0x4e384, 0x4e3a4 },
    { "P2 Beat 3", 0x4e3a4, 0x4e3c4 },
    { "P2 Beat 4", 0x4e3c4, 0x4e3e4 },
    { "P2 Beat 5", 0x4e3e4, 0x4e404 },
    { "P2 Beat 6", 0x4e404, 0x4e424 },
    { "P2 Beat 7", 0x4e424, 0x4e444 },
    { "P2 Beat 8", 0x4e444, 0x4e464 },
    { "P2 Beat 9", 0x4e464, 0x4e484 },
    { "P2 Beat Plane 1", 0x4e484, 0x4e4a4 },
    { "P2 Beat Plane 2", 0x4e4a4, 0x4e4c4 },
    { "P2 Beat Plane 3", 0x4e4c4, 0x4e4e4 },
    { "P2 Beat Plane 4", 0x4e4e4, 0x4e504 },
    { "P2 Beat Plane 5", 0x4e504, 0x4e524 },
    { "P2 Beat Plane 6", 0x4e524, 0x4e544 },
    { "P2 Beat Plane 7", 0x4e544, 0x4e564 },
    { "P2 Beat Plane 8", 0x4e564, 0x4e584 },
    { "P2 Beat Plane 9", 0x4e584, 0x4e5a4 },
    { "P2 Charging Roll 1", 0x4e5a4, 0x4e5c4, 0x1d },
    { "P2 Charging Roll 2", 0x4e5c4, 0x4e5e4, 0x1d },
    { "P2 Charging Roll 3", 0x4e5e4, 0x4e604, 0x1d },
    { "P2 Charging Roll 4", 0x4e604, 0x4e624, 0x1d },
    { "P2 Charging Roll 5", 0x4e624, 0x4e644, 0x1d },
    { "P2 Charging Roll 6", 0x4e644, 0x4e664, 0x1d },
    { "P2 Charging Roll 7", 0x4e664, 0x4e684, 0x1d },
    { "P2 Charging Roll 8", 0x4e684, 0x4e6a4, 0x1d },
    { "P2 Charging Roll 9", 0x4e6a4, 0x4e6c4, 0x1d },
    { "P2 Rush Drill 1", 0x4e6c4, 0x4e6e4, 0x1c, 1 },
    { "P2 Rush Drill 2", 0x4e6e4, 0x4e704, 0x1c, 1 },
    { "P2 Rush Drill 3", 0x4e704, 0x4e724, 0x1c, 1 },
    { "P2 Rush Drill 4", 0x4e724, 0x4e744, 0x1c, 1 },
    { "P2 Rush Drill 5", 0x4e744, 0x4e764, 0x1c, 1 },
    { "P2 Rush Drill 6", 0x4e764, 0x4e784, 0x1c, 1 },
    { "P2 Rush Drill 7", 0x4e784, 0x4e7a4, 0x1c, 1 },
    { "P2 Rush Drill 8", 0x4e7a4, 0x4e7c4, 0x1c, 1 },
    { "P2 Rush Drill 9", 0x4e7c4, 0x4e7e4, 0x1c, 1 },
    { "P2 Teleport Intro", 0x4e7e4, 0x4e804 },
    { "P2 Dr Light", 0x4e804, 0x4e824 },
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
    { "P2 Revert Hyper Roll 1", 0x4ea84, 0x4eaa4 },
    { "P2 Revert Hyper Roll 2", 0x4eaa4, 0x4eac4 },
    { "P2 Revert Hyper Roll 3", 0x4eac4, 0x4eae4 },
    { "P2 Revert Hyper Roll 4", 0x4eae4, 0x4eb04 },
    { "P2 Revert Hyper Roll 5", 0x4eb04, 0x4eb24 },
    { "P2 Revert Hyper Roll 6", 0x4eb24, 0x4eb44 },
    { "P2 Revert Hyper Roll 7", 0x4eb44, 0x4eb64 },
    { "P2 Revert Hyper Roll 8", 0x4eb64, 0x4eb84 },
    { "P2 Megaman", 0x4eb84, 0x4eba4, 0x1c },
    { "P2 Magnetic Shockwave Megaman", 0x4eba4, 0x4ebc4, 0x1c },
};

const sMVC_PaletteDataset MVC_A_ONSLAUGHT_PALETTES[] =
{
    { "Palette 1", 0x49044, 0x49064 },
    { "Palette 2", 0x49064, 0x49084 },
    { "Palette 3", 0x49084, 0x490a4 },
};

const sMVC_PaletteDataset MVC_A_WARMACHINE_PALETTES[] =
{
    { "P1 Color", 0x481c4, 0x481e4, 0x33 },
    { "P1 Proton Cannon", 0x481e4, 0x48204, 0x33, 1 },  // same sprites as iron man
    { "P1 Proton Laser", 0x48204, 0x48224, 0x33, 2 },
    { "P2 Color", 0x48224, 0x48244, 0x33 },
    { "P2 Proton Cannon", 0x48244, 0x48264, 0x33, 1 },
    { "P2 Proton Laser", 0x48264, 0x48284, 0x33, 2 },
};

const sMVC_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES[] =
{
    { "P1 Color", 0x49224, 0x49244, 0x33 },
    { "P1 Proton Cannon", 0x49244, 0x49264, 0x33, 1 }, // same sprites as iron man
    { "P1 Proton Laser", 0x49264, 0x49284, 0x33, 2 },
    { "P2 Color", 0x49284, 0x492a4, 0x33 },
    { "P2 Proton Cannon", 0x492a4, 0x492c4, 0x33, 1 },
    { "P2 Proton Laser", 0x492c4, 0x492e4, 0x33, 2 },
};

const sMVC_PaletteDataset MVC_A_CAPAM_PALETTES[] =
{
    { "P1 Color", 0x48284, 0x482a4, 0x0b },
    { "P1 Shield", 0x482a4, 0x482c4, 0x0b, 1 },
    { "P1 Charging Star", 0x482c4, 0x482e4, 0x0b, 2 },
    { "P2 Color", 0x482e4, 0x48304, 0x0b },
    { "P2 Shield", 0x48304, 0x48324, 0x0b, 1 },
    { "P2 Charging Star", 0x48324, 0x48344, 0x0b, 2 },
};

const sMVC_PaletteDataset MVC_A_HULK_PALETTES[] =
{
    { "P1 Color", 0x48344, 0x48364, 0x0d },
    { "P1 Charge", 0x48364, 0x48384, 0x0d, 1 },
    { "P1 Gamma Quake", 0x48384, 0x483a4, 0x0d, 2 },
    { "P2 Color", 0x483a4, 0x483c4, 0x0d },
    { "P2 Charge", 0x483c4, 0x483e4, 0x0d, 1 },
    { "P2 Gamma Quake", 0x483e4, 0x48404, 0x0d, 2 },
};

const sMVC_PaletteDataset MVC_A_ORANGEHULK_PALETTES[] =
{
    { "P1 Color", 0x49164, 0x49184, 0x0d },
    { "P1 Charge", 0x49184, 0x491a4, 0x0d, 1 },
    { "P1 Gamma Quake", 0x491a4, 0x491c4, 0x0d, 2 },
    { "P2 Color", 0x491c4, 0x491e4, 0x0d },
    { "P2 Charge", 0x491e4, 0x49204, 0x0d, 1 },
    { "P2 Gamma Quake", 0x49204, 0x49224, 0x0d, 2 },
};

const sMVC_PaletteDataset MVC_A_WOLVERINE_PALETTES[] =
{
    { "P1 Color", 0x48404, 0x48424, 0x07 },
    { "P1 Claws", 0x48424, 0x48444, 0x07, 1 },
    { "P1 Berserker FX", 0x48444, 0x48464, 0x07, 2 },
    { "P2 Color", 0x48464, 0x48484, 0x07 },
    { "P2 Claws", 0x48484, 0x484a4, 0x07, 1 },
    { "P2 Berserker FX", 0x484a4, 0x484c4, 0x07, 2 },
};

const sMVC_PaletteDataset MVC_A_VENOM_PALETTES[] =
{
    { "P1 Color", 0x48584, 0x485a4, 0x0e },
    { "P1 Taunt", 0x485a4, 0x485c4, 0x0e, 1 },
    { "P1 Web", 0x485c4, 0x485e4, 0x0e, 2 },
    { "P2 Color", 0x485e4, 0x48604, 0x0e },
    { "P2 Taunt", 0x48604, 0x48624, 0x0e, 1 },
    { "P2 Web", 0x48624, 0x48644, 0x0e, 2 },
};

const sMVC_PaletteDataset MVC_A_HYPERVENOM_PALETTES[] =
{
    { "P1 Color", 0x490a4, 0x490c4, 0x0e },
    { "P1 Taunt", 0x490c4, 0x490e4, 0x0e, 1 },
    { "P1 Web", 0x490e4, 0x49104, 0x0e, 2 },
    { "P2 Color", 0x49104, 0x49124, 0x0e },
    { "P2 Taunt", 0x49124, 0x49144, 0x0e, 1 },
    { "P2 Web", 0x49144, 0x49164, 0x0e, 2 },
};

const sMVC_PaletteDataset MVC_A_SPIDEY_PALETTES[] =
{
    { "P1 Color", 0x48644, 0x48664, 0x0c },
    { "P1 Extra 1", 0x48664, 0x48684 },
    { "P1 Web", 0x48684, 0x486a4, 0x0c, 2 },
    { "P2 Color", 0x486a4, 0x486c4, 0x0c },
    { "P2 Extra 1", 0x486c4, 0x486e4 },
    { "P2 Web", 0x486e4, 0x48704, 0x0c, 2 },
};

const sMVC_PaletteDataset MVC_A_CAPCOM_PALETTES[] =
{
    { "P1 Color", 0x48884, 0x488a4, 0x38 },
    { "P1 Ninjas", 0x488a4, 0x488c4, 0x38, 1 },
    { "P1 Hoover", 0x488c4, 0x488e4, 0x38, 2 },
    { "P2 Color", 0x488e4, 0x48904, 0x38 },
    { "P2 Ninjas", 0x48904, 0x48924, 0x38, 1 },
    { "P2 Hoover", 0x48924, 0x48944, 0x38, 2 },
};

const sMVC_PaletteDataset MVC_A_MORRIGAN_PALETTES[] =
{
    { "P1 Color", 0x48ec4, 0x48ee4, 0x03 },
    { "P1 Lilith", 0x48ee4, 0x48f04, 0x03, 1 },
    { "P1 Extra 2", 0x48f04, 0x48f24, 0x03, 2 },
    { "P2 Color", 0x48f24, 0x48f44, 0x03 },
    { "P2 Lilith", 0x48f44, 0x48f64, 0x03, 1 },
    { "P2 Extra 2", 0x48f64, 0x48f84, 0x03, 2 },
};

const sMVC_PaletteDataset MVC_A_LILITH_PALETTES[] =
{
    { "P1 Color", 0x493a4, 0x493c4, 0x03 },
    { "P1 Extra 1", 0x493c4, 0x493e4, 0x03, 1 },
    { "P1 Extra 2", 0x493e4, 0x49404, 0x03, 2 },
    { "P2 Color", 0x49404, 0x49424, 0x03 },
    { "P2 Extra 1", 0x49424, 0x49444, 0x03, 1 },
    { "P2 Extra 2", 0x49444, 0x49464, 0x03, 2 },
};

const sMVC_PaletteDataset MVC_A_STRIDER_PALETTES[] =
{
    { "P1 Color", 0x48e04, 0x48e24, 0x05 },
    { "P1 FX", 0x48e24, 0x48e44, 0x05, 1 },
    { "P1 Mech", 0x48e44, 0x48e64, 0x05, 2 },
    { "P2 Color", 0x48e64, 0x48e84, 0x05 },
    { "P2 FX", 0x48e84, 0x48ea4, 0x05, 1 },
    { "P2 Mech", 0x48ea4, 0x48ec4, 0x05, 2 },
};

const sMVC_PaletteDataset MVC_A_GAMBIT_PALETTES[] =
{
    { "P1 Color", 0x484c4, 0x484e4, 0x28 },
    { "P1 Extra 1", 0x484e4, 0x48504, 0x28, 1 },
    { "P1 Extra 2", 0x48504, 0x48524, 0x28, 2 },
    { "P2 Color", 0x48524, 0x48544, 0x28 },
    { "P2 Extra 1", 0x48544, 0x48564, 0x28, 1 },
    { "P2 Extra 2", 0x48564, 0x48584, 0x28, 2 },
};

const sMVC_PaletteDataset MVC_A_ASSIST_PALETTES[] =
{
    { "Anita P1", 0x50fa4, 0x50fc4 },
    { "Anita P1 Extra 1", 0x50fc4, 0x50fe4 },
    { "Anita P1 Extra 2", 0x50fe4, 0x51004 },
    { "Anita P2", 0x51004, 0x51024 },
    { "Anita P2 Extra 1", 0x51024, 0x51044 },
    { "Anita P2 Extra 2", 0x51044, 0x51064 },

    { "Arthur P1", 0x50804, 0x50824 },
    { "Arthur P1 Extra 1", 0x50824, 0x50844 },
    { "Arthur P1 Extra 2", 0x50844, 0x50864 },
    { "Arthur P2", 0x50864, 0x50884 },
    { "Arthur P2 Extra 1", 0x50884, 0x508a4 },
    { "Arthur P2 Extra 2", 0x508a4, 0x508c4 },

    { "Colossus P1", 0x505c4, 0x505e4, 0x32 },
    { "Colossus P2", 0x50624, 0x50644, 0x32 },

    { "Cyclops P1", 0x50504, 0x50524, 0x06 },
    { "Cyclops P2", 0x50564, 0x50584, 0x06 },
    { "Cyclops Optic Blast 1", 0x508c4, 0x508e4 },
    { "Cyclops Optic Blast 2", 0x508e4, 0x50904 },
    { "Cyclops Optic Blast 3", 0x50904, 0x50924 },
    { "Cyclops Optic Blast 4", 0x50924, 0x50944 },
    { "Cyclops Optic Blast 5", 0x50944, 0x50964 },

    { "Devilot P1", 0x510c4, 0x510e4 },
    { "Devilot P1 Extra 1", 0x510e4, 0x51104 },
    { "Devilot P1 Extra 2", 0x51104, 0x51124 },
    { "Devilot P1 Extra 3", 0x51184, 0x511a4 },
    { "Devilot P1 Extra 4", 0x511a4, 0x511c4 },
    { "Devilot P2", 0x51124, 0x51144 },
    { "Devilot P2 Extra 1", 0x51144, 0x51164 },
    { "Devilot P2 Extra 2", 0x51164, 0x51184 },
    { "Devilot P2 Extra 3", 0x511c4, 0x511e4 },
    { "Devilot P2 Extra 4", 0x511e4, 0x51204 },

    { "Iceman P1", 0x50d64, 0x50d84, 0x09 },
    { "Iceman P1 Extra 1", 0x50d84, 0x50da4, 0x09 },
    { "Iceman P1 Extra 2", 0x50da4, 0x50dc4, 0x09 },
    { "Iceman P2", 0x50dc4, 0x50de4, 0x09 },
    { "Iceman P2 Extra 1", 0x50de4, 0x50e04, 0x09 },
    { "Iceman P2 Extra 2", 0x50e04, 0x50e24, 0x09 },

    { "Jubilee P1", 0x51204, 0x51224 },
    { "Jubilee P2", 0x51264, 0x51284 },

    { "Juggernaut P1", 0x502c4, 0x502e4, 0x29 },
    { "Juggernaut P1 Extra 1", 0x50304, 0x50324, 0x29, 2 },
    { "Juggernaut P2", 0x50324, 0x50344, 0x29 },
    { "Juggernaut P2 Extra 1", 0x50364, 0x50384, 0x29, 2 },

    { "Lou P1", 0x50204, 0x50224 },
    { "Lou P1 Extra", 0x50224, 0x50244 },
    { "Lou P2", 0x50264, 0x50284 },
    { "Lou P2 Extra", 0x50284, 0x502a4 },

    { "Magneto P1", 0x50384, 0x503a4, 0x2c },
    { "Magneto P1 Extra", 0x503a4, 0x503c4, 0x2c, 1 },
    { "Magneto P2", 0x503e4, 0x50404, 0x2c },
    { "Magneto P2 Extra", 0x50404, 0x50424, 0x2c, 1 },

    { "Michelle Heart P1", 0x50a24, 0x50a44 },
    { "Michelle Heart P1 Extra", 0x50a44, 0x50a64 },
    { "Michelle Heart P2", 0x50a84, 0x50aa4 },
    { "Michelle Heart P2 Extra", 0x50aa4, 0x50ac4 },

    { "Psylocke P1", 0x50444, 0x50464, 0x08 },
    { "Psylocke P1 Extra", 0x50464, 0x50484, 0x08, 2 },
    { "Psylocke P2", 0x504a4, 0x504c4, 0x08 },
    { "Psylocke P2 Extra", 0x504c4, 0x504e4, 0x08, 2 },

    { "Pure & Fur P1", 0x50e24, 0x50e44 },
    { "Pure & Fur P1 Extra 1", 0x50e44, 0x50e64 },
    { "Pure & Fur P1 Extra 2", 0x50e64, 0x50e84 },
    { "Pure & Fur P2", 0x50e84, 0x50ea4 },
    { "Pure & Fur P2 Extra 1", 0x50ea4, 0x50ec4 },
    { "Pure & Fur P2 Extra 2", 0x50ec4, 0x50ee4 },

    { "Rogue P1", 0x50ca4, 0x50cc4, 0x0a },
    { "Rogue P2", 0x50d04, 0x50d24, 0x0a },

    { "Saki P1", 0x50964, 0x50984 },
    { "Saki P1 Extra", 0x50984, 0x509a4 },
    { "Saki P2", 0x509c4, 0x509e4 },
    { "Saki P2 Extra", 0x509e4, 0x50a04 },

    { "Sentinel P1", 0x51344, 0x51364, 0x44 },
    { "Sentinel P2", 0x513a4, 0x513c4, 0x44 },

    { "Shadow Nash P1", 0x51284, 0x512a4, 0x21 },
    { "Shadow Nash P1 Extra", 0x512c4, 0x512e4, 0x21, 2 },
    { "Shadow Nash P2", 0x512e4, 0x51304, 0x21 },
    { "Shadow Nash P2 Extra", 0x51324, 0x51344, 0x21, 2 },

    { "Storm P1", 0x50ba4, 0x50bc4, 0x2a },
    { "Storm P1 Extra", 0x50c64, 0x50c84, 0x2a, 12 },
    { "Storm P2", 0x50c04, 0x50c24, 0x2a },
    { "Storm P2 Extra", 0x50c84, 0x50ca4, 0x2a, 12 },

    { "Ton-Pooh P1", 0x50744, 0x50764 },
    { "Ton-Pooh P1 Extra 1", 0x50764, 0x50784 },
    { "Ton-Pooh P1 Extra 2", 0x50784, 0x507a4 },
    { "Ton-Pooh P2", 0x507a4, 0x507c4 },
    { "Ton-Pooh P2 Extra 1", 0x507c4, 0x507e4 },
    { "Ton-Pooh P2 Extra 2", 0x507e4, 0x50804 },

    { "Thor P1", 0x50ae4, 0x50b04 },
    { "Thor P1 Extra", 0x50b04, 0x50b24 },
    { "Thor P2", 0x50b44, 0x50b64 },
    { "Thor P2 Extra", 0x50b64, 0x50b84 },

    { "Unknown Soldier P1", 0x50684, 0x506a4 },
    { "Unknown Soldier P1 Extra", 0x506a4, 0x506c4 },
    { "Unknown Soldier P2", 0x506e4, 0x50704 },
    { "Unknown Soldier P2 Extra", 0x50704, 0x50724 },

    { "US Agent P1", 0x50ee4, 0x50f04, 0x0b },
    { "US Agent P1 Shield", 0x50f04, 0x50f24, 0x0b, 1 },
    { "US Agent P1 Charging Star", 0x50f24, 0x50f44, 0x0b, 2 },
    { "US Agent P2", 0x50f44, 0x50f64, 0x0b },
    { "US Agent P2 Shield", 0x50f64, 0x50f84, 0x0b, 1 },
    { "US Agent P2 Charging Star", 0x50f84, 0x50fa4, 0x0b, 2 },
};

const sMVC_PaletteDataset MVC_A_ASSISTPORT_PALETTES[] =
{
    { "Cyclops Portrait", 0x0047de4, 0x0047e04 },
    { "Colossus Portrait", 0x0047e04, 0x0047e24 },
    { "IceMan Portrait", 0x0047e64, 0x0047e84 },
    { "Jubilee Portrait", 0x0047ea4, 0x0047ec4 },
    { "Juggernaut Portrait", 0x0047d84, 0x0047da4 },
    { "Magneto Portrait", 0x0047da4, 0x0047dc4 },
    { "Psylocke Portrait", 0x0047dc4, 0x0047de4 },
    { "Rogue Portrait", 0x0047e84, 0x0047ea4 },
    { "Storm Portrait", 0x0047ec4, 0x0047ee4 },
    { "Thor Portrait", 0x0047e24, 0x0047e44 },
    { "U.S. Agent Portrait", 0x0047e44, 0x0047e64 },
    { "Anita Portrait", 0x0047fc4, 0x0047fe4 },
    { "Arthur Portrait", 0x0047f04, 0x0047f24 },
    { "Devilot Portrait", 0x0048004, 0x0048024 },
    { "Lou Portrait", 0x0047fa4, 0x0047fc4 },
    { "Michelle Heart Portrait", 0x0047f24, 0x0047f44 },
    { "Pure and Fur Portrait", 0x0047fe4, 0x0048004 },
    { "Saki Portrait", 0x0047f64, 0x0047f84 },
    { "Ton-Pooh Portrait", 0x0047f44, 0x0047f64 },
    { "Unknown Soldier Portrait", 0x0047f84, 0x0047fa4 },
};

const sMVC_PaletteDataset MVC_A_VSP_PALETTES[] =
{
    { "War Machine P1 VSP", 0x0055d84, 0x0055e04 },
    { "Gold War Machine P1 VSP", 0x0056bc4, 0x0056c44 },
#ifdef USE_LARGE_PALETTES
    { "Captain America P1 VSP", 0x0055e44, 0x0055f04 },
#else
    { "Captain America P1 VSP (1/2)", 0x0055e44, 0x0055ec4 },
    { "Captain America P1 VSP (2/2)", 0x0055ec4, 0x0055f04 },
#endif
    { "Hulk P1 VSP", 0x0055f04, 0x0055f24 },
    { "Orange Hulk P1 VSP", 0x0056b04, 0x0056b24 },
#ifdef USE_LARGE_PALETTES
    { "Wolverine P1 VSP", 0x0055fc4, 0x0056084 },
#else
    { "Wolverine P1 VSP (1/2)", 0x0055fc4, 0x0056044 },
    { "Wolverine P1 VSP (2/2)", 0x0056044, 0x0056084 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Gambit P1 VSP", 0x0056084, 0x0056144 },
#else
    { "Gambit P1 VSP (1/2)", 0x0056084, 0x0056104 },
    { "Gambit P1 VSP (2/2)", 0x0056104, 0x0056144 },
#endif
    { "Venom P1 VSP", 0x0056144, 0x00561c4 },
    { "Red Venom P1 VSP", 0x0056a44, 0x0056ac4 },
    { "Spider-Man P1 VSP", 0x0056204, 0x0056284 },
#ifdef USE_LARGE_PALETTES
    { "Roll P1 VSP", 0x00562c4, 0x0056384 },
#else
    { "Roll P1 VSP (1/2)", 0x00562c4, 0x0056344 },
    { "Roll P1 VSP (2/2)", 0x0056344, 0x0056384 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ryu P1 VSP", 0x0056384, 0x0056444 },
#else
    { "Ryu P1 VSP (1/2)", 0x0056384, 0x0056404 },
    { "Ryu P1 VSP (2/2)", 0x0056404, 0x0056444 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ken P1 VSP", 0x0056e04, 0x0056ec4 },
#else
    { "Ken P1 VSP (1/2)", 0x0056e04, 0x0056e84 },
    { "Ken P1 VSP (2/2)", 0x0056e84, 0x0056ec4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Gouki P1 VSP", 0x0056ec4, 0x0056f84 },
#else
    { "Gouki P1 VSP (1/2)", 0x0056ec4, 0x0056f44 },
    { "Gouki P1 VSP (2/2)", 0x0056f44, 0x0056f84 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Captain Commando P1 VSP", 0x0056444, 0x0056504 },
#else
    { "Captain Commando P1 VSP (1/2)", 0x0056444, 0x00564c4 },
    { "Captain Commando P1 VSP (2/2)", 0x00564c4, 0x0056504 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chun-Li P1 VSP", 0x0056504, 0x00565c4 },
#else
    { "Chun-Li P1 VSP (1/2)", 0x0056504, 0x0056584 },
    { "Chun-Li P1 VSP (2/2)", 0x0056584, 0x00565c4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow Lady P1 VSP", 0x0056c84, 0x0056d44 },
#else
    { "Shadow Lady P1 VSP (1/2)", 0x0056c84, 0x0056d04 },
    { "Shadow Lady P1 VSP (2/2)", 0x0056d04, 0x0056d44 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jin P1 VSP", 0x00565c4, 0x0056684 },
#else
    { "Jin P1 VSP (1/2)", 0x00565c4, 0x0056644 },
    { "Jin P1 VSP (2/2)", 0x0056644, 0x0056684 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Zangief P1 VSP", 0x0056684, 0x0056724 },
#else
    { "Zangief P1 VSP (1/2)", 0x0056684, 0x0056704 },
    { "Zangief P1 VSP (2/2)", 0x0056704, 0x0056724 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mech-Zangief P1 VSP", 0x0056f84, 0x0057024 },
#else
    { "Mech-Zangief P1 VSP (1/2)", 0x0056f84, 0x0057004 },
    { "Mech-Zangief P1 VSP (2/2)", 0x0057004, 0x0057024 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Strider Hiryu P1 VSP", 0x0056744, 0x0056804 },
#else
    { "Strider Hiryu P1 VSP (1/2)", 0x0056744, 0x00567c4 },
    { "Strider Hiryu P1 VSP (2/2)", 0x00567c4, 0x0056804 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Morrigan P1 VSP", 0x0056804, 0x00568c4 },
#else
    { "Morrigan P1 VSP (1/2)", 0x0056804, 0x0056884 },
    { "Morrigan P1 VSP (2/2)", 0x0056884, 0x00568c4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Lilith P1 VSP", 0x0056d44, 0x0056e04 },
#else
    { "Lilith P1 VSP (1/2)", 0x0056d44, 0x0056dc4 },
    { "Lilith P1 VSP (2/2)", 0x0056dc4, 0x0056e04 },
#endif
    { "Megaman P1 VSP", 0x00568c4, 0x0056944 },
    { "Onslaught P1 VSP", 0x0056984, 0x00569e4 },
    { "War Machine P2 VSP", 0x0057044, 0x00570c4 },
    { "Gold War Machine P2 VSP", 0x0057e84, 0x0057f04 },
#ifdef USE_LARGE_PALETTES
    { "Captain America P2 VSP", 0x0057104, 0x00571c4 },
#else
    { "Captain America P2 VSP (1/2)", 0x0057104, 0x0057184 },
    { "Captain America P2 VSP (2/2)", 0x0057184, 0x00571c4 },
#endif
    { "Hulk P2 VSP", 0x00571c4, 0x00571e4 },
    { "Orange Hulk P2 VSP", 0x0057dc4, 0x0057de4 },
#ifdef USE_LARGE_PALETTES
    { "Wolverine P2 VSP", 0x0057284, 0x0057344 },
#else
    { "Wolverine P2 VSP (1/2)", 0x0057284, 0x0057304 },
    { "Wolverine P2 VSP (2/2)", 0x0057304, 0x0057344 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Gambit P2 VSP", 0x0057344, 0x0057404 },
#else
    { "Gambit P2 VSP (1/2)", 0x0057344, 0x00573c4 },
    { "Gambit P2 VSP (2/2)", 0x00573c4, 0x0057404 },
#endif
    { "Venom P2 VSP", 0x0057404, 0x0057484 },
    { "Red Venom P2 VSP", 0x0057d04, 0x0057d84 },
    { "Spider-Man P2 VSP", 0x00574c4, 0x0057544 },
#ifdef USE_LARGE_PALETTES
    { "Roll P2 VSP", 0x0057584, 0x0057644 },
#else
    { "Roll P2 VSP (1/2)", 0x0057584, 0x0057604 },
    { "Roll P2 VSP (2/2)", 0x0057604, 0x0057644 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ryu P2 VSP", 0x0057644, 0x0057704 },
#else
    { "Ryu P2 VSP (1/2)", 0x0057644, 0x00576c4 },
    { "Ryu P2 VSP (2/2)", 0x00576c4, 0x0057704 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ken P2 VSP", 0x00580c4, 0x0058184 },
#else
    { "Ken P2 VSP (1/2)", 0x00580c4, 0x0058144 },
    { "Ken P2 VSP (2/2)", 0x0058144, 0x0058184 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Gouki P2 VSP", 0x0058184, 0x0058244 },
#else
    { "Gouki P2 VSP (1/2)", 0x0058184, 0x0058204 },
    { "Gouki P2 VSP (2/2)", 0x0058204, 0x0058244 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Captain Commando P2 VSP", 0x0057704, 0x00577c4 },
#else
    { "Captain Commando P2 VSP (1/2)", 0x0057704, 0x0057784 },
    { "Captain Commando P2 VSP (2/2)", 0x0057784, 0x00577c4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chun-Li P2 VSP", 0x00577c4, 0x0057884 },
#else
    { "Chun-Li P2 VSP (1/2)", 0x00577c4, 0x0057844 },
    { "Chun-Li P2 VSP (2/2)", 0x0057844, 0x0057884 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow Lady P2 VSP", 0x0057f44, 0x0058004 },
#else
    { "Shadow Lady P2 VSP (1/2)", 0x0057f44, 0x0057fc4 },
    { "Shadow Lady P2 VSP (2/2)", 0x0057fc4, 0x0058004 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jin P2 VSP", 0x0057884, 0x0057944 },
#else
    { "Jin P2 VSP (1/2)", 0x0057884, 0x0057904 },
    { "Jin P2 VSP (2/2)", 0x0057904, 0x0057944 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Zangief P2 VSP", 0x0057944, 0x00579e4 },
#else
    { "Zangief P2 VSP (1/2)", 0x0057944, 0x00579c4 },
    { "Zangief P2 VSP (2/2)", 0x00579c4, 0x00579e4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Mech-Zangief P2 VSP", 0x0058244, 0x00582e4 },
#else
    { "Mech-Zangief P2 VSP (1/2)", 0x0058244, 0x00582c4 },
    { "Mech-Zangief P2 VSP (2/2)", 0x00582c4, 0x00582e4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Strider Hiryu P2 VSP", 0x0057a04, 0x0057ac4 },
#else
    { "Strider Hiryu P2 VSP (1/2)", 0x0057a04, 0x0057a84 },
    { "Strider Hiryu P2 VSP (2/2)", 0x0057a84, 0x0057ac4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Morrigan P2 VSP", 0x0057ac4, 0x0057b84 },
#else
    { "Morrigan P2 VSP (1/2)", 0x0057ac4, 0x0057b44 },
    { "Morrigan P2 VSP (2/2)", 0x0057b44, 0x0057b84 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Lilith P2 VSP", 0x0058004, 0x00580c4 },
#else
    { "Lilith P2 VSP (1/2)", 0x0058004, 0x0058084 },
    { "Lilith P2 VSP (2/2)", 0x0058084, 0x00580c4 },
#endif
    { "Megaman P2 VSP", 0x0057b84, 0x0057c04 },
};

const sMVC_PaletteDataset MVC_A_CSP_PALETTES[] =
{
    { "War Machine P1 Duo/CSP", 0x0052a44, 0x0052a84 },
    { "Gold War Machine P1 Duo/CSP", 0x0053704, 0x0053744 },
    { "Captain America P1 Duo/CSP", 0x0052a84, 0x0052ae4 },
    { "Hulk P1 Duo/CSP", 0x0052ae4, 0x0052b04 },
    { "Orange Hulk P1 Duo/CSP", 0x0053684, 0x00536a4 },
    { "Wolverine P1 Duo/CSP", 0x0052b44, 0x0052ba4 },
    { "Gambit P1 Duo/CSP", 0x0052ba4, 0x0052c04 },
    { "Venom P1 Duo/CSP", 0x0052c04, 0x0052c64 },
    { "Red Venom P1 Duo/CSP", 0x0053624, 0x0053684 },
    { "Spider-Man P1 Duo/CSP", 0x0052c64, 0x0052ca4 },
    { "Roll P1 Duo/CSP", 0x0052cc4, 0x0052d24 },
    { "Ryu P1 Duo/CSP", 0x0052d24, 0x0052d84 },
    { "Ken P1 Duo/CSP", 0x00539e4, 0x0053a44 },
    { "Gouki P1 Duo/CSP", 0x0053a44, 0x0053aa4 },
    { "Captain Commando P1 Duo/CSP", 0x0052d84, 0x0052de4 },
    { "ChunLi P1 Duo/CSP", 0x0052de4, 0x0052e44 },
    { "Shadow Lady P1 Duo/CSP", 0x0053744, 0x00537a4 },
    { "Jin P1 Duo/CSP", 0x0052e44, 0x0052ea4 },
    { "Zangief P1 Duo/CSP", 0x0052ea4, 0x0052f04 },
    { "Mech-Zangief P1 Duo/CSP", 0x0053aa4, 0x0053b04 },
    { "Strider Hiryu P1 Duo/CSP", 0x0052f04, 0x0052f64 },
    { "Morrigan P1 Duo/CSP", 0x0052f64, 0x0052fc4 },
    { "Lilith P1 Duo/CSP", 0x00537a4, 0x0053804 },
    { "Megaman P1 Duo/CSP", 0x0052fc4, 0x0053024 },
    { "War Machine P2 Duo/CSP", 0x0053044, 0x0053084 },
    { "Gold War Machine P2 Duo/CSP", 0x00538e4, 0x0053924 },
    { "Captain America P2 Duo/CSP", 0x0053084, 0x00530e4 },
    { "Hulk P2 Duo/CSP", 0x00530e4, 0x0053104 },
    { "Orange Hulk P2 Duo/CSP", 0x0053864, 0x0053884 },
    { "Wolverine P2 Duo/CSP", 0x0053144, 0x00531a4 },
    { "Gambit P2 Duo/CSP", 0x00531a4, 0x0053204 },
    { "Venom P2 Duo/CSP", 0x0053204, 0x0053264 },
    { "Red Venom P2 Duo/CSP", 0x0053804, 0x0053864 },
    { "Spider-Man P2 Duo/CSP", 0x0053264, 0x00532a4 },
    { "Roll P2 Duo/CSP", 0x00532c4, 0x0053324 },
    { "Ryu P2 Duo/CSP", 0x0053324, 0x0053384 },
    { "Ken P2 Duo/CSP", 0x0053b04, 0x0053b64 },
    { "Gouki P2 Duo/CSP", 0x0053b64, 0x0053bc4 },
    { "Mech-Zangief P2 Duo/CSP", 0x0053bc4, 0x0053c24 },
    { "Captain Commando P2 Duo/CSP", 0x0053384, 0x00533e4 },
    { "Chun-Li 2P Duo/CSP", 0x00533e4, 0x0053444 },
    { "Shadow Lady P2 Duo/CSP", 0x0053924, 0x0053984 },
    { "Jin 2P Duo/CSP", 0x0053444, 0x00534a4 },
    { "Zangief P2 Duo/CSP", 0x00534a4, 0x0053504 },
    { "Strider Hiryu P2 Duo/CSP", 0x0053504, 0x0053564 },
    { "Morrigan P2 Duo/CSP", 0x0053564, 0x00535c4 },
    { "Lilith P2 Duo/CSP", 0x0053984, 0x00539e4 },
    { "Megaman P2 Duo/CSP", 0x00535c4, 0x0053624 }, 
};

const sMVC_PaletteDataset MVC_A_SUPERPORT_PALETTES[] =
{
    { "War Machine P1 Super", 0x0053e24, 0x0053ea4 },
    { "Gold War Machine P1 Super", 0x0054a04, 0x0054a84 },
#ifdef USE_LARGE_PALETTES
    { "Captain America P1 Super", 0x0053ec4, 0x0053f64 },
#else
    { "Captain America P1 Super (1/2)", 0x0053ec4, 0x0053f44 },
    { "Captain America P1 Super (2/2)", 0x0053f44, 0x0053f64 },
#endif
    { "Hulk P1 Super", 0x0053f64, 0x0053f84 },
    { "Orange Hulk P1 Super", 0x0054964, 0x0054984 },
    { "Wolverine P1 Super", 0x0054004, 0x0054064 },
    { "Gambit P1 Super", 0x00540a4, 0x0054124 },
    { "Venom P1 Super", 0x0054144, 0x00541a4 },
    { "Red Venom P1 Super", 0x00548c4, 0x0054924 },
    { "Spider-Man P1 Super", 0x00541e4, 0x0054244 },
#ifdef USE_LARGE_PALETTES
    { "Roll P1 Super", 0x0054284, 0x0054324 },
#else
    { "Roll P1 Super (1/2)", 0x0054284, 0x0054304 },
    { "Roll P1 Super (2/2)", 0x0054304, 0x0054324 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ryu P1 Super", 0x0054324, 0x00543c4 },
#else
    { "Ryu P1 Super (1/2)", 0x0054324, 0x00543a4 },
    { "Ryu P1 Super (2/2)", 0x00543a4, 0x00543c4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ken P1 Super", 0x0054be4, 0x0054c84 },
#else
    { "Ken P1 Super (1/2)", 0x0054be4, 0x0054c64 },
    { "Ken P1 Super (2/2)", 0x0054c64, 0x0054c84 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Gouki P1 Super", 0x0054c84, 0x0054d24 },
#else
    { "Gouki P1 Super (1/2)", 0x0054c84, 0x0054d04 },
    { "Gouki P1 Super (2/2)", 0x0054d04, 0x0054d24 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Captain Commando P1 Super", 0x00543c4, 0x0054464 },
#else
    { "Captain Commando P1 Super (1/2)", 0x00543c4, 0x0054444 },
    { "Captain Commando P1 Super (2/2)", 0x0054444, 0x0054464 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chun-Li P1 Super", 0x0054464, 0x0054504 },
#else
    { "Chun-Li P1 Super (1/2)", 0x0054464, 0x00544e4 },
    { "Chun-Li P1 Super (2/2)", 0x00544e4, 0x0054504 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow Lady P1 Super", 0x0054aa4, 0x0054b44 },
#else
    { "Shadow Lady P1 Super (1/2)", 0x0054aa4, 0x0054b24 },
    { "Shadow Lady P1 Super (2/2)", 0x0054b24, 0x0054b44 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jin P1 Super", 0x0054504, 0x00545a4 },
#else
    { "Jin P1 Super (1/2)", 0x0054504, 0x0054584 },
    { "Jin P1 Super (2/2)", 0x0054584, 0x00545a4 },
#endif
    { "Zangief P1 Super", 0x00545a4, 0x0054624 },
    { "Mech-Zangief P1 Super", 0x0054d24, 0x0054da4 },
#ifdef USE_LARGE_PALETTES
    { "Strider Hiryu P1 Super", 0x0054644, 0x00546e4 },
#else
    { "Strider Hiryu P1 Super (1/2)", 0x0054644, 0x00546c4 },
    { "Strider Hiryu P1 Super (2/2)", 0x00546c4, 0x00546e4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Morrigan P1 Super", 0x00546e4, 0x0054784 },
#else
    { "Morrigan P1 Super (1/2)", 0x00546e4, 0x0054764 },
    { "Morrigan P1 Super (2/2)", 0x0054764, 0x0054784 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Lilith P1 Super", 0x0054b44, 0x0054be4 },
#else
    { "Lilith P1 Super (1/2)", 0x0054b44, 0x0054bc4 },
    { "Lilith P1 Super (2/2)", 0x0054bc4, 0x0054be4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Megaman P1 Super", 0x0054784, 0x0054824 },
#else
    { "Megaman P1 Super (1/2)", 0x0054784, 0x0054804 },
    { "Megaman P1 Super (2/2)", 0x0054804, 0x0054824 },
#endif
    { "Onslaught P1 Super", 0x0054824, 0x00548a4 },
    { "War Machine P2 Super", 0x0054dc4, 0x0054e44 },
    { "Golden War Machine P2 Super", 0x00559a4, 0x0055a24 },
#ifdef USE_LARGE_PALETTES
    { "Captain America P2 Super", 0x0054e64, 0x0054f04 },
#else
    { "Captain America P2 Super (1/2)", 0x0054e64, 0x0054ee4 },
    { "Captain America P2 Super (2/2)", 0x0054ee4, 0x0054f04 },
#endif
    { "Hulk P2 Super", 0x0054f04, 0x0054f24 },
    { "Orange Hulk P2 Super", 0x0055904, 0x0055924 },
    { "Wolverine P2 Super", 0x0054fa4, 0x0055004 },
    { "Gambit P2 Super", 0x0055044, 0x00550c4 },
    { "Venom P2 Super", 0x00550e4, 0x0055144 },
    { "Red Venom P2 Super", 0x0055864, 0x00558c4 },
    { "Spider-Man P2 Super", 0x0055184, 0x00551e4 },
#ifdef USE_LARGE_PALETTES
    { "Roll P2 Super", 0x0055224, 0x00552c4 },
#else
    { "Roll P2 Super (1/2)", 0x0055224, 0x00552a4 },
    { "Roll P2 Super (2/2)", 0x00552a4, 0x00552c4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ryu P2 Super", 0x00552c4, 0x0055364 },
#else
    { "Ryu P2 Super (1/2)", 0x00552c4, 0x0055344 },
    { "Ryu P2 Super (2/2)", 0x0055344, 0x0055364 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Ken P2 Super", 0x0055b84, 0x0055c24 },
#else
    { "Ken P2 Super (1/2)", 0x0055b84, 0x0055c04 },
    { "Ken P2 Super (2/2)", 0x0055c04, 0x0055c24 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Gouki P2 Super", 0x0055c24, 0x0055cc4 },
#else
    { "Gouki P2 Super (1/2)", 0x0055c24, 0x0055ca4 },
    { "Gouki P2 Super (2/2)", 0x0055ca4, 0x0055cc4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Captain Commando P2 Super", 0x0055364, 0x0055404 },
#else
    { "Captain Commando P2 Super (1/2)", 0x0055364, 0x00553e4 },
    { "Captain Commando P2 Super (2/2)", 0x00553e4, 0x0055404 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Chun-Li P2 Super", 0x0055404, 0x00554a4 },
#else
    { "Chun-Li P2 Super (1/2)", 0x0055404, 0x0055484 },
    { "Chun-Li P2 Super (2/2)", 0x0055484, 0x00554a4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Shadow Lady P2 Super", 0x0055a44, 0x0055ae4 },
#else
    { "Shadow Lady P2 Super (1/2)", 0x0055a44, 0x0055ac4 },
    { "Shadow Lady P2 Super (2/2)", 0x0055ac4, 0x0055ae4 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Jin P2 Super", 0x00554a4, 0x0055544 },
#else
    { "Jin P2 Super (1/2)", 0x00554a4, 0x0055524 },
    { "Jin P2 Super (2/2)", 0x0055524, 0x0055544 },
#endif
    { "Zangief P2 Super", 0x0055544, 0x00555c4 },
    { "Mech-Zangief P2 Super", 0x0055cc4, 0x0055d44 },
#ifdef USE_LARGE_PALETTES
    { "Strider Hiryu P2 Super", 0x00555e4, 0x0055684 },
#else
    { "Strider Hiryu P2 Super (1/2)", 0x00555e4, 0x0055664 },
    { "Strider Hiryu P2 Super (2/2)", 0x0055664, 0x0055684 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Morrigan P2 Super", 0x0055684, 0x0055724 },
#else
    { "Morrigan P2 Super (1/2)", 0x0055684, 0x0055704 },
    { "Morrigan P2 Super (2/2)", 0x0055704, 0x0055724 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Lilith P2 Super", 0x0055ae4, 0x0055b84 },
#else
    { "Lilith P2 Super (1/2)", 0x0055ae4, 0x0055b64 },
    { "Lilith P2 Super (2/2)", 0x0055b64, 0x0055b84 },
#endif
#ifdef USE_LARGE_PALETTES
    { "Megaman P2 Super", 0x0055724, 0x00557c4 },
#else
    { "Megaman P2 Super (1/2)", 0x0055724, 0x00557a4 },
    { "Megaman P2 Super (2/2)", 0x00557a4, 0x00557c4 },
#endif
    { "Onslaught P2 Super", 0x00557c4, 0x0055844 },
};

const sMVC_PaletteDataset MVC_A_CSIS_PALETTES[] =
{
    { "War Machine CS Icon", 0x003e5ba, 0x003e5da },
    { "Captain America CS Icon", 0x003e5da, 0x003e5fa },
    { "Hulk CS Icon", 0x003e5fa, 0x003e61a },
    { "Wolverine CS Icon", 0x003e61a, 0x003e63a },
    { "Gambit CS Icon", 0x003e63a, 0x003e65a },
    { "Venom CS Icon", 0x003e65a, 0x003e67a },
    { "Spider-Man CS Icon", 0x003e67a, 0x003e69a },
    { "Roll? CS Icon", 0x003e69a, 0x003e6ba },
    { "Ryu CS Icon", 0x003e6ba, 0x003e6da },
    { "Captain Commando CS Icon", 0x003e6da, 0x003e6fa },
    { "Chun-Li CS Icon", 0x003e6fa, 0x003e71a },
    { "Jin CS Icon", 0x003e71a, 0x003e73a },
    { "Zangief CS Icon", 0x003e73a, 0x003e75a },
    { "Strider Hiryu CS Icon", 0x003e75a, 0x003e77a },
    { "Morrigan CS Icon", 0x003e77a, 0x003e79a },
    { "MegaMan CS Icon", 0x003e79a, 0x003e7ba },
};

const UINT8 MVC_A_UNITSORT[MVC_A_NUMUNIT + 1] = //Plus 1 for the extra palettes
{
    indexCaptainAmerica,
    indexCapCom,
    indexChun,
    indexGambit,
    indexHulk,
    indexJin,
    indexLilith,
    indexMegaman,
    indexMorrigan,
    indexOnslaught,
    indexOrangeHulk,
    indexRoll,
    indexRyu,
    indexShadowLady,
    indexSpiderman,
    indexStrider,
    indexVenom,
    indexHyperVenom,
    indexWarMachine,
    indexGWM,
    indexWolverine,
    indexGief,
    indexAssists,
    indexAssistPorts,
    indexCSIs,
    indexCSPs,
    indexVSPs,
    indexSuperPort,

    MVC_A_EXTRALOC //Extra palettes
};

const sDescTreeNode MVC_UNITS_51[MVC_A_NUMUNIT] =
{
    { "War Machine",                  DESC_NODETYPE_TREE, (void*)MVC_A_WARMACHINE_PALETTES,       ARRAYSIZE(MVC_A_WARMACHINE_PALETTES) },
    { "Captain America",              DESC_NODETYPE_TREE, (void*)MVC_A_CAPAM_PALETTES,            ARRAYSIZE(MVC_A_CAPAM_PALETTES) },
    { "Hulk",                         DESC_NODETYPE_TREE, (void*)MVC_A_HULK_PALETTES,             ARRAYSIZE(MVC_A_HULK_PALETTES) },
    { "Wolverine",                    DESC_NODETYPE_TREE, (void*)MVC_A_WOLVERINE_PALETTES,        ARRAYSIZE(MVC_A_WOLVERINE_PALETTES) },
    { "Venom",                        DESC_NODETYPE_TREE, (void*)MVC_A_VENOM_PALETTES,            ARRAYSIZE(MVC_A_VENOM_PALETTES) },
    { "Spider-Man",                   DESC_NODETYPE_TREE, (void*)MVC_A_SPIDEY_PALETTES,           ARRAYSIZE(MVC_A_SPIDEY_PALETTES) },
    { "Roll",                         DESC_NODETYPE_TREE, (void*)MVC_A_ROLL_PALETTES,             ARRAYSIZE(MVC_A_ROLL_PALETTES) },
    { "Ryu",                          DESC_NODETYPE_TREE, (void*)MVC_A_RYU_PALETTES,              ARRAYSIZE(MVC_A_RYU_PALETTES) },
    { "Captain Commando",             DESC_NODETYPE_TREE, (void*)MVC_A_CAPCOM_PALETTES,           ARRAYSIZE(MVC_A_CAPCOM_PALETTES) },
    { "Chun-Li",                      DESC_NODETYPE_TREE, (void*)MVC_A_CHUNLI_PALETTES,           ARRAYSIZE(MVC_A_CHUNLI_PALETTES) },
    { "Jin",                          DESC_NODETYPE_TREE, (void*)MVC_A_JIN_PALETTES,              ARRAYSIZE(MVC_A_JIN_PALETTES) },
    { "Zangief",                      DESC_NODETYPE_TREE, (void*)MVC_A_GIEF_PALETTES,             ARRAYSIZE(MVC_A_GIEF_PALETTES) },
    { "Strider",                      DESC_NODETYPE_TREE, (void*)MVC_A_STRIDER_PALETTES,          ARRAYSIZE(MVC_A_STRIDER_PALETTES) },
    { "Megaman",                      DESC_NODETYPE_TREE, (void*)MVC_A_MEGAMAN_PALETTES,          ARRAYSIZE(MVC_A_MEGAMAN_PALETTES) },
    { "Morrigan",                     DESC_NODETYPE_TREE, (void*)MVC_A_MORRIGAN_PALETTES,         ARRAYSIZE(MVC_A_MORRIGAN_PALETTES) },
    { "Onslaught",                    DESC_NODETYPE_TREE, (void*)MVC_A_ONSLAUGHT_PALETTES,        ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES) },
    { "Red Venom",                    DESC_NODETYPE_TREE, (void*)MVC_A_HYPERVENOM_PALETTES,       ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES) },
    { "Orange Hulk",                  DESC_NODETYPE_TREE, (void*)MVC_A_ORANGEHULK_PALETTES,       ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES) },
    { "Gold War Machine",             DESC_NODETYPE_TREE, (void*)MVC_A_GOLDWARMACHINE_PALETTES,   ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES) },
    { "Shadow Lady",                  DESC_NODETYPE_TREE, (void*)MVC_A_SHADOWLADY_PALETTES,       ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES) },
    { "Lilith",                       DESC_NODETYPE_TREE, (void*)MVC_A_LILITH_PALETTES,           ARRAYSIZE(MVC_A_LILITH_PALETTES) },
    { "Gambit",                       DESC_NODETYPE_TREE, (void*)MVC_A_GAMBIT_PALETTES,           ARRAYSIZE(MVC_A_GAMBIT_PALETTES) },
    { "Assists",                      DESC_NODETYPE_TREE, (void*)MVC_A_ASSIST_PALETTES,           ARRAYSIZE(MVC_A_ASSIST_PALETTES) },
    { "Assist Portraits",             DESC_NODETYPE_TREE, (void*)MVC_A_ASSISTPORT_PALETTES,       ARRAYSIZE(MVC_A_ASSISTPORT_PALETTES) },
    { "Character Select Icons",       DESC_NODETYPE_TREE, (void*)MVC_A_CSIS_PALETTES,             ARRAYSIZE(MVC_A_CSIS_PALETTES) },
    { "Character Select Portraits",   DESC_NODETYPE_TREE, (void*)MVC_A_CSP_PALETTES,              ARRAYSIZE(MVC_A_CSP_PALETTES) },
    { "Victory Screen Portraits",     DESC_NODETYPE_TREE, (void*)MVC_A_VSP_PALETTES,              ARRAYSIZE(MVC_A_VSP_PALETTES) },
    { "Super Portraits",              DESC_NODETYPE_TREE, (void*)MVC_A_SUPERPORT_PALETTES,        ARRAYSIZE(MVC_A_SUPERPORT_PALETTES) },
};

const UINT16 MVC_A_IMGREDIR[MVC_A_NUMUNIT] = {

    0x33, // WM
    0x0B, // CapAm
    0x0D, // Hulk
    0x07, // Wolvie
    0x0E, // Venom
    0x0C, // Spidey
    0x1D, // Roll
    0x00, // Ryu
    0x38, // Capcom
    0x1B, // Chun
    0x37, // Jin
    0x01, // gieeeeef
    0x05, // strider
    0x1C, // megaman
    0x03, // morrigan
    MVC_A_IMGSTART, // onslaughter
    0x0E, // red venom
    0x0D, // orange hulk
    0x33, // gwm
    0x1B, // shadow lady
    0x03, // lilith
    0x28, // gambit
    0xFF, // :( Assists ... we don't have anything. 
    0xFF, // assist portraits
    0xFF, // Character select icons
    0xFF, // Character Select Portraits
    0xFF, // Victory Screen Portraits
    0xFF, // Super portraits
};

// We extend this array with data groveled from the mvce.txt extensible extras file, if any.
const stExtraDef MVC_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
