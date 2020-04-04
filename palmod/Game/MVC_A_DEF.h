#pragma once

// Note that we only look up Onslaught from this section, and we don't have a sprite(?)
#define MVC_A_IMGSTART (0x3B + 0x11 + 0x11 + 0x01) //MVC2, then SSF2T, then SFA3, then XMVSF

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the line sof MVC_A_RYU_PALETTES. 
// * Update every array using MVC_A_NUMUNIT below
// * Update the three index lookups in Game_MVC_A_.cpp that are marked - look for usage of indexRyu to find them
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
    indexLast
};

constexpr auto MVC_A_NUMUNIT = indexLast;

#define MVC_A_EXTRALOC MVC_A_NUMUNIT

// These are the base offsets for a character.
const UINT32 MVC_A_UNITLOC[MVC_A_NUMUNIT] =
{
    0x481C4, // War Machine
    0x48284, // Cap
    0x48344, // Hulk
    0x48404, // Wolvie
    0x48584, // Venom
    0x48644, // Spidey
    0x48704, // Roll
    0x487C4, // Ryu
    0x48884, // CapCom
    0x48944, // Chun
    0x48A04, // Jin
    0x48AC4, // Gief
    0x48E04, // Strider
    0x48F84, // Megaman
    0x48ec4, // Morrigan
    0x49044, // Onslaught
    0x490A4, // Hyper Venom
    0x49164, // Orange Hulk
    0x49224, // GWM
    0x492E4, // Shadow Lady
    0x493A4, // Lilith
    0x484c4, // Gambit
    0x0, // Assists: Special
};

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
    { "Ryu P1", 0x487c4, 0x487d4, 0x00 },
    { "Ryu P1 Hadouken", 0x487e4, 0x487f4, 0x00, 1 },
    { "Ryu P1 Shoryuken", 0x48804, 0x48814, 0x27, 2 },
    { "Ryu P2", 0x48824, 0x48834, 0x00 },
    { "Ryu P2 Hadouken", 0x48844, 0x48854, 0x00, 1 },
    { "Ryu P2 Shoryuken", 0x48864, 0x48874, 0x27, 2 },

    { "Ken P1", 0x4ec44, 0x4ec54, 0x00 },
    { "Ken P1 Hakouken", 0x4ec64, 0x4ec74, 0x00, 1 },
    { "Ken P1 Shoryuken", 0x4ec84, 0x4ec94, 0x27, 2 },
    { "Ken P2", 0x4eca4, 0x4ecb4, 0x00 },
    { "Ken P2 Hadouken", 0x4ecc4, 0x4ecd4, 0x00, 1 },
    { "Ken P2 Shoryuken", 0x4ece4, 0x4ecf4, 0x27, 2 },

    { "Akuma P1", 0x4ed04, 0x4ed14, 0x00 },
    { "Akuma P1 Hadouken", 0x4ed24, 0x4ed34, 0x1e, 1 },
    { "Akuma P1 Shoryuken", 0x4ed44, 0x4ed54, 0x27, 2 },
    { "Akuma P2", 0x4ed64, 0x4ed74, 0x00 },
    { "Akuma P2 Hadouken", 0x4ed84, 0x4ed94, 0x1e, 1 },
    { "Akuma P2 Shoryuken", 0x4eda4, 0x4edb4, 0x27, 2 },
};

const sMVC_PaletteDataset MVC_A_GIEF_PALETTES[] =
{
    { "P1 Color", 0x48ac4, 0x48ad4, 0x01 },
    { "P1 Banishing Fist", 0x48ae4, 0x48af4, 0x01, 1 },
    { "Palette 3", 0x48b04, 0x48b14, 0xff },
    { "P2 Color", 0x48b24, 0x48b34, 0x01 },
    { "P2 Banishing Fist", 0x48b44, 0x48b54, 0x01, 1 },
    { "Palette 6", 0x48b64, 0x48b74, 0xff },
    { "Mecha Zangief P1", 0x48c84, 0x48c94, 0x01 },
    { "P1 Yoga Flame", 0x48ca4, 0x48cb4, 0x01, 3 },
    { "Palette 15", 0x48cc4, 0x48cd4, 0xff },
    { "Mecha Zangief P2", 0x48ce4, 0x48cf4, 0x01 },
    { "P2 Yoga Flame", 0x48d04, 0x48d14, 0x01, 3 },
    { "Palette 18", 0x48d24, 0x48d34, 0xff },
};

const sMVC_PaletteDataset MVC_A_SHADOWLADY_PALETTES[] =
{
    { "P1 Color", 0x492e4, 0x492f4, 0x1b },
    { "P1 Glimmer 1", 0x4ff64, 0x4ff74, 0x1b },
    { "P1 Glimmer 2", 0x4ff84, 0x4ff94, 0x1b },
    { "P1 Glimmer 3", 0x4ffa4, 0x4ffb4, 0x1b },
    { "P1 Extra 1", 0x49304, 0x49314 },
    { "P1 Extra 2", 0x49324, 0x49334 },
    { "P2 Color", 0x49344, 0x49354, 0x1b },
    { "P2 Glimmer 1", 0x4ffc4, 0x4ffd4, 0x1b },
    { "P2 Glimmer 2", 0x4ffe4, 0x4fff4, 0x1b },
    { "P2 Glimmer 3", 0x50004, 0x50014, 0x1b },
    { "P2 Extra 1", 0x49364, 0x49374 },
    { "P2 Extra 2", 0x49384, 0x49394 },
};

const sMVC_PaletteDataset MVC_A_CHUNLI_PALETTES[] =
{
    { "P1 Color", 0x48944, 0x48954, 0x1b },
    { "P1 leg flash", 0x48964, 0x48974, 0x1b, 1 },
    { "P1 Kikosho", 0x48984, 0x48994, 0x1b, 2 },
    { "P2 Color", 0x489a4, 0x489b4, 0x1b },
    { "P2 leg flash", 0x489c4, 0x489d4, 0x1b, 1 },
    { "P2 Kikosho", 0x489e4, 0x489f4, 0x1b, 2 },
};

const sMVC_PaletteDataset MVC_A_JIN_PALETTES[] =
{
    { "P1 Color", 0x48a04, 0x48a14, 0x37 },
    { "P1 Blodia FX", 0x48a24, 0x48a34, 0x37, 1 },
    { "P1 Blodia Punch", 0x48a44, 0x48a54, 0x37, 2 },
    { "P2 Color", 0x48a64, 0x48a74, 0x37 },
    { "P2 Blodia FX", 0x48a84, 0x48a94, 0x37, 1 },
    { "P2 Blodia Punch", 0x48aa4, 0x48ab4, 0x37, 2 },
};

// Note that since this is eleventy palettes, the code is substituting the default Megaman sprite when 0xff is supplied.  
// To unwind that we would want to specify the correct sprites to use everywhere.  MM is 0x1C .
const sMVC_PaletteDataset MVC_A_MEGAMAN_PALETTES[] =
{
    { "Megaman P1", 0x48f84, 0x48f94 },
    { "P1 Rush/Eddie", 0x48fa4, 0x48fb4, 0x1c, 1 },
    { "P1 Beat", 0x48fc4, 0x48fd4 },
    { "Megaman P2", 0x48fe4, 0x48ff4 },
    { "P2 Rush/Eddie", 0x49004, 0x49014, 0x1c, 1 },
    { "P2 Beat", 0x49024, 0x49034 },
    { "P1 Hair", 0x4c044, 0x4c054 },
    { "P1 Teleport / Death Animation", 0x4c064, 0x4c074 },
    { "P1 Intro 1", 0x4c084, 0x4c094 },
    { "P1 Intro 2", 0x4c0a4, 0x4c0b4 },
    { "P1 Intro 3", 0x4c0c4, 0x4c0d4 },
    { "P1 Intro 4", 0x4c0e4, 0x4c0f4 },
    { "P1 Intro 5", 0x4c104, 0x4c114 },
    { "P1 Intro 6", 0x4c124, 0x4c134 },
    { "P1 Intro 7", 0x4c144, 0x4c154 },
    { "P1 Intro 8", 0x4c164, 0x4c174 },
    { "P1 Intro 9", 0x4c184, 0x4c194 },
    { "P1 Rush 1", 0x4c1a4, 0x4c1b4, 0x1c, 1 },
    { "P1 Rush 2", 0x4c1c4, 0x4c1d4, 0x1c, 1 },
    { "P1 Rush 3", 0x4c1e4, 0x4c1f4, 0x1c, 1 },
    { "P1 Rush 4", 0x4c204, 0x4c214, 0x1c, 1 },
    { "P1 Rush 5", 0x4c224, 0x4c234, 0x1c, 1 },
    { "P1 Rush 6", 0x4c244, 0x4c254, 0x1c, 1 },
    { "P1 Rush 7", 0x4c264, 0x4c274, 0x1c, 1 },
    { "P1 Rush 8", 0x4c284, 0x4c294, 0x1c, 1 },
    { "P1 Rush 9", 0x4c2a4, 0x4c2b4, 0x1c, 1 },
    { "P1 Beat 1", 0x4c2c4, 0x4c2d4 },
    { "P1 Beat 2", 0x4c2e4, 0x4c2f4 },
    { "P1 Beat 3", 0x4c304, 0x4c314 },
    { "P1 Beat 4", 0x4c324, 0x4c334 },
    { "P1 Beat 5", 0x4c344, 0x4c354 },
    { "P1 Beat 6", 0x4c364, 0x4c374 },
    { "P1 Beat 7", 0x4c384, 0x4c394 },
    { "P1 Beat 8", 0x4c3a4, 0x4c3b4 },
    { "P1 Beat 9", 0x4c3c4, 0x4c3d4 },
    { "P1 Beat Plane 1", 0x4c3e4, 0x4c3f4 },
    { "P1 Beat Plane 2", 0x4c404, 0x4c414 },
    { "P1 Beat Plane 3", 0x4c424, 0x4c434 },
    { "P1 Beat Plane 4", 0x4c444, 0x4c454 },
    { "P1 Beat Plane 5", 0x4c464, 0x4c474 },
    { "P1 Beat Plane 6", 0x4c484, 0x4c494 },
    { "P1 Beat Plane 7", 0x4c4a4, 0x4c4b4 },
    { "P1 Beat Plane 8", 0x4c4c4, 0x4c4d4 },
    { "P1 Beat Plane 9", 0x4c4e4, 0x4c4f4 },
    { "P1 Charged HP 1", 0x4c504, 0x4c514 },
    { "P1 Charged HP 2", 0x4c524, 0x4c534 },
    { "P1 Charged HP 3", 0x4c544, 0x4c554 },
    { "P1 Charged HP 4", 0x4c564, 0x4c574 },
    { "P1 Charged HP 5", 0x4c584, 0x4c594 },
    { "P1 Charged HP 6", 0x4c5a4, 0x4c5b4 },
    { "P1 Charged HP 7", 0x4c5c4, 0x4c5d4 },
    { "P1 Charged HP 8", 0x4c5e4, 0x4c5f4 },
    { "P1 Charged HP 9", 0x4c604, 0x4c614 },
    { "P1 Rush Drill 1", 0x4c624, 0x4c634, 0x1c, 1 },
    { "P1 Rush Drill 2", 0x4c644, 0x4c654, 0x1c, 1 },
    { "P1 Rush Drill 3", 0x4c664, 0x4c674, 0x1c, 1 },
    { "P1 Rush Drill 4", 0x4c684, 0x4c694, 0x1c, 1 },
    { "P1 Rush Drill 5", 0x4c6a4, 0x4c6b4, 0x1c, 1 },
    { "P1 Rush Drill 6", 0x4c6c4, 0x4c6d4, 0x1c, 1 },
    { "P1 Rush Drill 7", 0x4c6e4, 0x4c6f4, 0x1c, 1 },
    { "P1 Rush Drill 8", 0x4c704, 0x4c714, 0x1c, 1 },
    { "P1 Rush Drill 9", 0x4c724, 0x4c734, 0x1c, 1 },
    { "P1 Teleport Intro", 0x4c744, 0x4c754 },
    { "P1 Dr Light", 0x4c764, 0x4c774 },
    { "P1 Hyper Megaman Armor 1", 0x4c784, 0x4c794 },
    { "P1 Hyper Megaman Armor 2", 0x4c7a4, 0x4c7b4 },
    { "P1 Hyper Megaman Armor 3", 0x4c7c4, 0x4c7d4 },
    { "P1 Hyper Megaman Armor 4", 0x4c7e4, 0x4c7f4 },
    { "P1 Hyper Megaman Armor 5", 0x4c804, 0x4c814 },
    { "P1 Hyper Megaman Armor 6", 0x4c824, 0x4c834 },
    { "P1 Hyper Megaman Armor 7", 0x4c844, 0x4c854 },
    { "P1 Hyper Megaman Armor 8", 0x4c864, 0x4c874 },
    { "P1 Hyper Megaman Armor 9", 0x4c884, 0x4c894 },
    { "P1 Hyper Megaman 1", 0x4c8a4, 0x4c8b4 },
    { "P1 Hyper Megaman 2", 0x4c8c4, 0x4c8d4 },
    { "P1 Hyper Megaman 3", 0x4c8e4, 0x4c8f4 },
    { "P1 Hyper Megaman 4", 0x4c904, 0x4c914 },
    { "P1 Hyper Megaman 5", 0x4c924, 0x4c934 },
    { "P1 Hyper Megaman 6", 0x4c944, 0x4c954 },
    { "P1 Hyper Megaman 7", 0x4c964, 0x4c974 },
    { "P1 Hyper Megaman 8", 0x4c984, 0x4c994 },
    { "P1 Hyper Megaman 9", 0x4c9a4, 0x4c9b4 },
    { "P1 Hyper MegaMan Missiles", 0x4c9c4, 0x4c9d4 },
    { "P1 Roll Win Pose", 0x4cae4, 0x4caf4, 0x1d },
    { "P1 Magnetic Megaman", 0x4cb04, 0x4cb14 },
    { "P1 Hyper Megaman Revert 1", 0x4de64, 0x4de74 },
    { "P1 Hyper Megaman Revert 2", 0x4de84, 0x4de94 },
    { "P1 Hyper Megaman Revert 3", 0x4dea4, 0x4deb4 },
    { "P1 Hyper Megaman Revert 4", 0x4dec4, 0x4ded4 },
    { "P1 Hyper Megaman Revert 5", 0x4dee4, 0x4def4 },
    { "P1 Hyper Megaman Revert 6", 0x4df04, 0x4df14 },
    { "P1 Hyper Megaman Revert 7", 0x4df24, 0x4df34 },
    { "P1 Hyper Megaman Revert 8", 0x4df44, 0x4df54 },
    { "P1 Hyper Megaman Revert 9", 0x4df64, 0x4df74 },
    { "P1 Beat Extra", 0x4df84, 0x4df94 },
    { "P1 Megaman Extra", 0x4e0a4, 0x4e0b4 },
    { "P1 Magnetic Megaman", 0x4e0c4, 0x4e0d4 },

    { "P2 Hair", 0x4cb24, 0x4cb34 },
    { "P2 Teleport Intro / Death", 0x4cb44, 0x4cb54 },

    { "P2 Intro 1", 0x4cb64, 0x4cb74 },
    { "P2 Intro 2", 0x4cb84, 0x4cb94 },
    { "P2 Intro 3", 0x4cba4, 0x4cbb4 },
    { "P2 Intro 4", 0x4cbc4, 0x4cbd4 },
    { "P2 Intro 5", 0x4cbe4, 0x4cbf4 },
    { "P2 Intro 6", 0x4cc04, 0x4cc14 },
    { "P2 Intro 7", 0x4cc24, 0x4cc34 },
    { "P2 Intro 8", 0x4cc44, 0x4cc54 },
    { "P2 Intro 9", 0x4cc64, 0x4cc74 },

    { "P2 Rush 1", 0x4cc84, 0x4cc94, 0x1c, 1 },
    { "P2 Rush 2", 0x4cca4, 0x4ccb4, 0x1c, 1 },
    { "P2 Rush 3", 0x4ccc4, 0x4ccd4, 0x1c, 1 },
    { "P2 Rush 4", 0x4cce4, 0x4ccf4, 0x1c, 1 },
    { "P2 Rush 5", 0x4cd04, 0x4cd14, 0x1c, 1 },
    { "P2 Rush 6", 0x4cd24, 0x4cd34, 0x1c, 1 },
    { "P2 Rush 7", 0x4cd44, 0x4cd54, 0x1c, 1 },
    { "P2 Rush 8", 0x4cd64, 0x4cd74, 0x1c, 1 },
    { "P2 Rush 9", 0x4cd84, 0x4cd94, 0x1c, 1 },

    { "P2 Beat 1", 0x4cda4, 0x4cdb4 },
    { "P2 Beat 2", 0x4cdc4, 0x4cdd4 },
    { "P2 Beat 3", 0x4cde4, 0x4cdf4 },
    { "P2 Beat 4", 0x4ce04, 0x4ce14 },
    { "P2 Beat 5", 0x4ce24, 0x4ce34 },
    { "P2 Beat 6", 0x4ce44, 0x4ce54 },
    { "P2 Beat 7", 0x4ce64, 0x4ce74 },
    { "P2 Beat 8", 0x4ce84, 0x4ce94 },
    { "P2 Beat 9", 0x4cea4, 0x4ceb4 },

    { "P2 Beat Plane 1", 0x4cec4, 0x4ced4 },
    { "P2 Beat Plane 2", 0x4cee4, 0x4cef4 },
    { "P2 Beat Plane 3", 0x4cf04, 0x4cf14 },
    { "P2 Beat Plane 4", 0x4cf24, 0x4cf34 },
    { "P2 Beat Plane 5", 0x4cf44, 0x4cf54 },
    { "P2 Beat Plane 6", 0x4cf64, 0x4cf74 },
    { "P2 Beat Plane 7", 0x4cf84, 0x4cf94 },
    { "P2 Beat Plane 8", 0x4cfa4, 0x4cfb4 },
    { "P2 Beat Plane 9", 0x4cfc4, 0x4cfd4 },

    { "P2 Charged HP 1", 0x4cfe4, 0x4cff4 },
    { "P2 Charged HP 2", 0x4d004, 0x4d014 },
    { "P2 Charged HP 3", 0x4d024, 0x4d034 },
    { "P2 Charged HP 4", 0x4d044, 0x4d054 },
    { "P2 Charged HP 5", 0x4d064, 0x4d074 },
    { "P2 Charged HP 6", 0x4d084, 0x4d094 },
    { "P2 Charged HP 7", 0x4d0a4, 0x4d0b4 },
    { "P2 Charged HP 8", 0x4d0c4, 0x4d0d4 },
    { "P2 Charged HP 9", 0x4d0e4, 0x4d0f4 },

    { "P2 Rush Drill 1", 0x4d104, 0x4d114, 0x1c, 1 },
    { "P2 Rush Drill 2", 0x4d124, 0x4d134, 0x1c, 1 },
    { "P2 Rush Drill 3", 0x4d144, 0x4d154, 0x1c, 1 },
    { "P2 Rush Drill 4", 0x4d164, 0x4d174, 0x1c, 1 },
    { "P2 Rush Drill 5", 0x4d184, 0x4d194, 0x1c, 1 },
    { "P2 Rush Drill 6", 0x4d1a4, 0x4d1b4, 0x1c, 1 },
    { "P2 Rush Drill 7", 0x4d1c4, 0x4d1d4, 0x1c, 1 },
    { "P2 Rush Drill 8", 0x4d1e4, 0x4d1f4, 0x1c, 1 },
    { "P2 Rush Drill 9", 0x4d204, 0x4d214, 0x1c, 1 }, // 97

    { "P2 Teleport Intro", 0x4d224, 0x4d234 },
    { "P2 Dr Light", 0x4d244, 0x4d254 },
    { "P2 Hyper Megaman Armor 1", 0x4d264, 0x4d274 },
    { "P2 Hyper Megaman Armor 2", 0x4d284, 0x4d294 },
    { "P2 Hyper Megaman Armor 3", 0x4d2a4, 0x4d2b4 },
    { "P2 Hyper Megaman Armor 4", 0x4d2c4, 0x4d2d4 },
    { "P2 Hyper Megaman Armor 5", 0x4d2e4, 0x4d2f4 },
    { "P2 Hyper Megaman Armor 6", 0x4d304, 0x4d314 },
    { "P2 Hyper Megaman Armor 7", 0x4d324, 0x4d334 },
    { "P2 Hyper Megaman Armor 8", 0x4d344, 0x4d354 },
    { "P2 Hyper Megaman Armor 9", 0x4d364, 0x4d374 }, // a2

    { "P2 Hyper Megaman 1", 0x4d384, 0x4d394 },
    { "P2 Hyper Megaman 2", 0x4d3a4, 0x4d3b4 },
    { "P2 Hyper Megaman 3", 0x4d3c4, 0x4d3d4 },
    { "P2 Hyper Megaman 4", 0x4d3e4, 0x4d3f4 },
    { "P2 Hyper Megaman 5", 0x4d404, 0x4d414 },
    { "P2 Hyper Megaman 6", 0x4d424, 0x4d434 },
    { "P2 Hyper Megaman 7", 0x4d444, 0x4d454 },
    { "P2 Hyper Megaman 8", 0x4d464, 0x4d474 },
    { "P2 Hyper Megaman 9", 0x4d484, 0x4d494 }, // ab

    { "P2 Hyper Megaman Missiles", 0x4d4a4, 0x4d4b4 }, // ac
    { "P2 Megaman Intro 1", 0x4e944, 0x4e954, 0x1c },
    { "P2 Megaman Intro 2", 0x4e964, 0x4e974, 0x1c },
    { "P2 Megaman Intro 3", 0x4e984, 0x4e994, 0x1c },
    { "P2 Megaman Intro 4", 0x4e9a4, 0x4e9b4, 0x1c },
    { "P2 Megaman Intro 5", 0x4e9c4, 0x4e9d4, 0x1c },
    { "P2 Megaman Intro 6", 0x4e9e4, 0x4e9f4, 0x1c },
    { "P2 Megaman Intro 7", 0x4ea04, 0x4ea14, 0x1c },
    { "P2 Megaman Intro 8", 0x4ea24, 0x4ea34, 0x1c },
    { "P2 Megaman Intro 9", 0x4ea44, 0x4ea54, 0x1c }, //54ish

    { "P2 Roll Win Pose", 0x4d5c4, 0x4d5d4, 0x1d },
    { "P2 Magnetic Megaman", 0x4d5e4, 0x4d5f4 },
};

const sMVC_PaletteDataset MVC_A_ROLL_PALETTES[] =
{
    { "P1 Color", 0x48704, 0x48714, 0x1d },
    { "P1 Rush/Eddie", 0x48724, 0x48734, 0x1c, 1 },
    { "P1 Beat", 0x48744, 0x48754 },
    { "P2 Color", 0x48764, 0x48774, 0x1d },
    { "P2 Rush/Eddie", 0x48784, 0x48794, 0x1c, 1 },

    { "P2 Beat", 0x487a4, 0x487b4 }, // 09 : these numbers align to the mvc2 extra ids as identified in the Palette Variant Full spreadsheet
    { "P1 Hair", 0x4d604, 0x4d614 },
    { "P1 Intro / Death Animation", 0x4d624, 0x4d634 },
    { "P1 Intro 1", 0x4d644, 0x4d654, 0x1d },
    { "P1 Intro 2", 0x4d664, 0x4d674, 0x1d },
    { "P1 Intro 3", 0x4d684, 0x4d694, 0x1d },
    { "P1 Intro 4", 0x4d6a4, 0x4d6b4, 0x1d },
    { "P1 Intro 5", 0x4d6c4, 0x4d6d4, 0x1d },
    { "P1 Intro 6", 0x4d6e4, 0x4d6f4, 0x1d },
    { "P1 Intro 7", 0x4d704, 0x4d714, 0x1d },
    { "P1 Intro 8", 0x4d724, 0x4d734, 0x1d },
    { "P1 Intro 9", 0x4d744, 0x4d754, 0x1d },
    { "P1 Rush/Eddie 1", 0x4d764, 0x4d774, 0x1c, 1 },
    { "P1 Rush/Eddie 2", 0x4d784, 0x4d794, 0x1c, 1 },
    { "P1 Rush/Eddie 3", 0x4d7a4, 0x4d7b4, 0x1c, 1 },
    { "P1 Rush/Eddie 4", 0x4d7c4, 0x4d7d4, 0x1c, 1 },
    { "P1 Rush/Eddie 5", 0x4d7e4, 0x4d7f4, 0x1c, 1 },
    { "P1 Rush/Eddie 6", 0x4d804, 0x4d814, 0x1c, 1 },
    { "P1 Rush/Eddie 7", 0x4d824, 0x4d834, 0x1c, 1 },
    { "P1 Rush/Eddie 8", 0x4d844, 0x4d854, 0x1c, 1 },
    { "P1 Rush/Eddie 9", 0x4d864, 0x4d874, 0x1c, 1 },
    { "P1 Beat 1", 0x4d884, 0x4d894 },
    { "P1 Beat 2", 0x4d8a4, 0x4d8b4 },
    { "P1 Beat 3", 0x4d8c4, 0x4d8d4 },
    { "P1 Beat 4", 0x4d8e4, 0x4d8f4 },
    { "P1 Beat 5", 0x4d904, 0x4d914 },
    { "P1 Beat 6", 0x4d924, 0x4d934 },
    { "P1 Beat 7", 0x4d944, 0x4d954 },
    { "P1 Beat 8", 0x4d964, 0x4d974 },
    { "P1 Beat 9", 0x4d984, 0x4d994 },
    { "P1 Beat Plane 1", 0x4d9a4, 0x4d9b4 },
    { "P1 Beat Plane 2", 0x4d9c4, 0x4d9d4 },
    { "P1 Beat Plane 3", 0x4d9e4, 0x4d9f4 },
    { "P1 Beat Plane 4", 0x4da04, 0x4da14 },
    { "P1 Beat Plane 5", 0x4da24, 0x4da34 },
    { "P1 Beat Plane 6", 0x4da44, 0x4da54 },
    { "P1 Beat Plane 7", 0x4da64, 0x4da74 },
    { "P1 Beat Plane 8", 0x4da84, 0x4da94 },
    { "P1 Beat Plane 9", 0x4daa4, 0x4dab4 },
    { "P1 Charging Roll 1", 0x4dac4, 0x4dad4, 0x1d },
    { "P1 Charging Roll 2", 0x4dae4, 0x4daf4, 0x1d },
    { "P1 Charging Roll 3", 0x4db04, 0x4db14, 0x1d },
    { "P1 Charging Roll 4", 0x4db24, 0x4db34, 0x1d },
    { "P1 Charging Roll 5", 0x4db44, 0x4db54, 0x1d },
    { "P1 Charging Roll 6", 0x4db64, 0x4db74, 0x1d },
    { "P1 Charging Roll 7", 0x4db84, 0x4db94, 0x1d },
    { "P1 Charging Roll 8", 0x4dba4, 0x4dbb4, 0x1d },
    { "P1 Charging Roll 9", 0x4dbc4, 0x4dbd4, 0x1d },
    { "P1 Rush Drill 1", 0x4dbe4, 0x4dbf4, 0x1c, 1 },
    { "P1 Rush Drill 2", 0x4dc04, 0x4dc14, 0x1c, 1 },
    { "P1 Rush Drill 3", 0x4dc24, 0x4dc34, 0x1c, 1 },
    { "P1 Rush Drill 4", 0x4dc44, 0x4dc54, 0x1c, 1 },
    { "P1 Rush Drill 5", 0x4dc64, 0x4dc74, 0x1c, 1 },
    { "P1 Rush Drill 6", 0x4dc84, 0x4dc94, 0x1c, 1 },
    { "P1 Rush Drill 7", 0x4dca4, 0x4dcb4, 0x1c, 1 },
    { "P1 Rush Drill 8", 0x4dcc4, 0x4dcd4, 0x1c, 1 },
    { "P1 Rush Drill 9", 0x4dce4, 0x4dcf4, 0x1c, 1 },
    { "P1 Teleport Intro", 0x4dd04, 0x4dd14 },
    { "P1 Dr Light", 0x4dd24, 0x4dd34 },
    { "P1 Hyper Roll Armor 1", 0x4dd44, 0x4dd54 },
    { "P1 Hyper Roll Armor 2", 0x4dd64, 0x4dd74 },
    { "P1 Hyper Roll Armor 3", 0x4dd84, 0x4dd94 },
    { "P1 Hyper Roll Armor 4", 0x4dda4, 0x4ddb4 },
    { "P1 Hyper Roll Armor 5", 0x4ddc4, 0x4ddd4 },
    { "P1 Hyper Roll Armor 6", 0x4dde4, 0x4ddf4 },
    { "P1 Hyper Roll Armor 7", 0x4de04, 0x4de14 },
    { "P1 Hyper Roll Armor 8", 0x4de24, 0x4de34 },
    { "P1 Hyper Roll Armor 9", 0x4de44, 0x4de54 },

    // 0x4DE64-0x4DF64 are Megaman

    { "P1 Hyper Roll Missiles", 0x4df84, 0x4df94 },
    { "P1 Revert Hyper Roll 1", 0x4dfa4, 0x4dfb4 },
    { "P1 Revert Hyper Roll 2", 0x4dfc4, 0x4dfd4 },
    { "P1 Revert Hyper Roll 3", 0x4dfe4, 0x4dff4 },
    { "P1 Revert Hyper Roll 4", 0x4e004, 0x4e014 },
    { "P1 Revert Hyper Roll 5", 0x4e024, 0x4e034 },
    { "P1 Revert Hyper Roll 6", 0x4e044, 0x4e054 },
    { "P1 Revert Hyper Roll 7", 0x4e064, 0x4e074 },
    { "P1 Revert Hyper Roll 8", 0x4e084, 0x4e094 },
    { "P2 Hair ", 0x4e0e4, 0x4e0f4 },
    { "P2 Intro / Death Animation", 0x4e104, 0x4e114 },
    { "P2 Intro 1", 0x4e124, 0x4e134, 0x1d },
    { "P2 Intro 2", 0x4e144, 0x4e154, 0x1d },
    { "P2 Intro 3", 0x4e164, 0x4e174, 0x1d },
    { "P2 Intro 4", 0x4e184, 0x4e194, 0x1d },
    { "P2 Intro 5", 0x4e1a4, 0x4e1b4, 0x1d },
    { "P2 Intro 6", 0x4e1c4, 0x4e1d4, 0x1d },
    { "P2 Intro 7", 0x4e1e4, 0x4e1f4, 0x1d },
    { "P2 Intro 8", 0x4e204, 0x4e214, 0x1d },
    { "P2 Intro 9", 0x4e224, 0x4e234, 0x1d },
    { "P2 Rush/Eddie 1", 0x4e244, 0x4e254, 0x1c, 1 },
    { "P2 Rush/Eddie 2", 0x4e264, 0x4e274, 0x1c, 1 },
    { "P2 Rush/Eddie 3", 0x4e284, 0x4e294, 0x1c, 1 },
    { "P2 Rush/Eddie 4", 0x4e2a4, 0x4e2b4, 0x1c, 1 },
    { "P2 Rush/Eddie 5", 0x4e2c4, 0x4e2d4, 0x1c, 1 },
    { "P2 Rush/Eddie 6", 0x4e2e4, 0x4e2f4, 0x1c, 1 },
    { "P2 Rush/Eddie 7", 0x4e304, 0x4e314, 0x1c, 1 },
    { "P2 Rush/Eddie 8", 0x4e324, 0x4e334, 0x1c, 1 },
    { "P2 Rush/Eddie 9", 0x4e344, 0x4e354, 0x1c, 1 },
    { "P2 Beat 1", 0x4e364, 0x4e374 },
    { "P2 Beat 2", 0x4e384, 0x4e394 },
    { "P2 Beat 3", 0x4e3a4, 0x4e3b4 },
    { "P2 Beat 4", 0x4e3c4, 0x4e3d4 },
    { "P2 Beat 5", 0x4e3e4, 0x4e3f4 },
    { "P2 Beat 6", 0x4e404, 0x4e414 },
    { "P2 Beat 7", 0x4e424, 0x4e434 },
    { "P2 Beat 8", 0x4e444, 0x4e454 },
    { "P2 Beat 9", 0x4e464, 0x4e474 },
    { "P2 Beat Plane 1", 0x4e484, 0x4e494 },
    { "P2 Beat Plane 2", 0x4e4a4, 0x4e4b4 },
    { "P2 Beat Plane 3", 0x4e4c4, 0x4e4d4 },
    { "P2 Beat Plane 4", 0x4e4e4, 0x4e4f4 },
    { "P2 Beat Plane 5", 0x4e504, 0x4e514 },
    { "P2 Beat Plane 6", 0x4e524, 0x4e534 },
    { "P2 Beat Plane 7", 0x4e544, 0x4e554 },
    { "P2 Beat Plane 8", 0x4e564, 0x4e574 },
    { "P2 Beat Plane 9", 0x4e584, 0x4e594 },
    { "P2 Charging Roll 1", 0x4e5a4, 0x4e5b4, 0x1d },
    { "P2 Charging Roll 2", 0x4e5c4, 0x4e5d4, 0x1d },
    { "P2 Charging Roll 3", 0x4e5e4, 0x4e5f4, 0x1d },
    { "P2 Charging Roll 4", 0x4e604, 0x4e614, 0x1d },
    { "P2 Charging Roll 5", 0x4e624, 0x4e634, 0x1d },
    { "P2 Charging Roll 6", 0x4e644, 0x4e654, 0x1d },
    { "P2 Charging Roll 7", 0x4e664, 0x4e674, 0x1d },
    { "P2 Charging Roll 8", 0x4e684, 0x4e694, 0x1d },
    { "P2 Charging Roll 9", 0x4e6a4, 0x4e6b4, 0x1d },
    { "P2 Rush Drill 1", 0x4e6c4, 0x4e6d4, 0x1c, 1 },
    { "P2 Rush Drill 2", 0x4e6e4, 0x4e6f4, 0x1c, 1 },
    { "P2 Rush Drill 3", 0x4e704, 0x4e714, 0x1c, 1 },
    { "P2 Rush Drill 4", 0x4e724, 0x4e734, 0x1c, 1 },
    { "P2 Rush Drill 5", 0x4e744, 0x4e754, 0x1c, 1 },
    { "P2 Rush Drill 6", 0x4e764, 0x4e774, 0x1c, 1 },
    { "P2 Rush Drill 7", 0x4e784, 0x4e794, 0x1c, 1 },
    { "P2 Rush Drill 8", 0x4e7a4, 0x4e7b4, 0x1c, 1 },
    { "P2 Rush Drill 9", 0x4e7c4, 0x4e7d4, 0x1c, 1 },
    { "P2 Teleport Intro", 0x4e7e4, 0x4e7f4 },
    { "P2 Dr Light", 0x4e804, 0x4e814 },
    { "P2 Hyper Roll Armor 1", 0x4e824, 0x4e834 },
    { "P2 Hyper Roll Armor 2", 0x4e844, 0x4e854 },
    { "P2 Hyper Roll Armor 3", 0x4e864, 0x4e874 },
    { "P2 Hyper Roll Armor 4", 0x4e884, 0x4e894 },
    { "P2 Hyper Roll Armor 5", 0x4e8a4, 0x4e8b4 },
    { "P2 Hyper Roll Armor 6", 0x4e8c4, 0x4e8d4 },
    { "P2 Hyper Roll Armor 7", 0x4e8e4, 0x4e8f4 },
    { "P2 Hyper Roll Armor 8", 0x4e904, 0x4e914 },
    { "P2 Hyper Roll Armor 9", 0x4e924, 0x4e934 },
    { "P2 Hyper Roll Missiles", 0x4ea64, 0x4ea74 },
    { "P2 Revert Hyper Roll 1", 0x4ea84, 0x4ea94 },
    { "P2 Revert Hyper Roll 2", 0x4eaa4, 0x4eab4 },
    { "P2 Revert Hyper Roll 3", 0x4eac4, 0x4ead4 },
    { "P2 Revert Hyper Roll 4", 0x4eae4, 0x4eaf4 },
    { "P2 Revert Hyper Roll 5", 0x4eb04, 0x4eb14 },
    { "P2 Revert Hyper Roll 6", 0x4eb24, 0x4eb34 },
    { "P2 Revert Hyper Roll 7", 0x4eb44, 0x4eb54 },
    { "P2 Revert Hyper Roll 8", 0x4eb64, 0x4eb74 },
    { "P2 Megaman", 0x4eb84, 0x4eb94, 0x1c },
    { "P2 Magnetic Shockwave Megaman", 0x4eba4, 0x4ebb4, 0x1c },
};

const sMVC_PaletteDataset MVC_A_ONSLAUGHT_PALETTES[] =
{
    { "Palette 1", 0x49044, 0x49054 },
    { "Palette 2", 0x49064, 0x49074 },
    { "Palette 3", 0x49084, 0x49094 },
};

const sMVC_PaletteDataset MVC_A_WARMACHINE_PALETTES[] =
{
    { "P1 Color", 0x481c4, 0x481d4, 0x33 },
    { "P1 Proton Cannon", 0x481e4, 0x481f4, 0x33, 1 },  // same sprites as iron man
    { "P1 Proton Laser", 0x48204, 0x48214, 0x33, 2 },
    { "P2 Color", 0x48224, 0x48234, 0x33 },
    { "P2 Proton Cannon", 0x48244, 0x48254, 0x33, 1 },
    { "P2 Proton Laser", 0x48264, 0x48274, 0x33, 2 },
};

const sMVC_PaletteDataset MVC_A_GOLDWARMACHINE_PALETTES[] =
{
    { "P1 Color", 0x49224, 0x49234, 0x33 },
    { "P1 Proton Cannon", 0x49244, 0x49254, 0x33, 1 }, // same sprites as iron man
    { "P1 Proton Laser", 0x49264, 0x49274, 0x33, 2 },
    { "P2 Color", 0x49284, 0x49294, 0x33 },
    { "P2 Proton Cannon", 0x492a4, 0x492b4, 0x33, 1 },
    { "P2 Proton Laser", 0x492c4, 0x492d4, 0x33, 2 },
};

const sMVC_PaletteDataset MVC_A_CAPAM_PALETTES[] =
{
    { "P1 Color", 0x48284, 0x48294, 0x0b },
    { "P1 Shield", 0x482a4, 0x482b4, 0x0b, 1 },
    { "P1 Charging Star", 0x482c4, 0x482d4, 0x0b, 2 },
    { "P2 Color", 0x482e4, 0x482f4, 0x0b },
    { "P2 Shield", 0x48304, 0x48314, 0x0b, 1 },
    { "P2 Charging Star", 0x48324, 0x48334, 0x0b, 2 },
};

const sMVC_PaletteDataset MVC_A_HULK_PALETTES[] =
{
    { "P1 Color", 0x48344, 0x48354, 0x0d },
    { "P1 Charge", 0x48364, 0x48374, 0x0d, 1 },
    { "P1 Gamma Quake", 0x48384, 0x48394, 0x0d, 2 },
    { "P2 Color", 0x483a4, 0x483b4, 0x0d },
    { "P2 Charge", 0x483c4, 0x483d4, 0x0d, 1 },
    { "P2 Gamma Quake", 0x483e4, 0x483f4, 0x0d, 2 },
};

const sMVC_PaletteDataset MVC_A_ORANGEHULK_PALETTES[] =
{
    { "P1 Color", 0x49164, 0x49174, 0x0d },
    { "P1 Charge", 0x49184, 0x49194, 0x0d, 1 },
    { "P1 Gamma Quake", 0x491a4, 0x491b4, 0x0d, 2 },
    { "P2 Color", 0x491c4, 0x491d4, 0x0d },
    { "P2 Charge", 0x491e4, 0x491f4, 0x0d, 1 },
    { "P2 Gamma Quake", 0x49204, 0x49214, 0x0d, 2 },
};

const sMVC_PaletteDataset MVC_A_WOLVERINE_PALETTES[] =
{
    { "P1 Color", 0x48404, 0x48414, 0x07 },
    { "P1 Claws", 0x48424, 0x48434, 0x07, 1 },
    { "P1 Berserker FX", 0x48444, 0x48454, 0x07, 2 },
    { "P2 Color", 0x48464, 0x48474, 0x07 },
    { "P2 Claws", 0x48484, 0x48494, 0x07, 1 },
    { "P2 Berserker FX", 0x484a4, 0x484b4, 0x07, 2 },
};

const sMVC_PaletteDataset MVC_A_VENOM_PALETTES[] =
{
    { "P1 Color", 0x48584, 0x48594, 0x0e },
    { "P1 Taunt", 0x485a4, 0x485b4, 0x0e, 1 },
    { "P1 Web", 0x485c4, 0x485d4, 0x0e, 2 },
    { "P2 Color", 0x485e4, 0x485f4, 0x0e },
    { "P2 Taunt", 0x48604, 0x48614, 0x0e, 1 },
    { "P2 Web", 0x48624, 0x48634, 0x0e, 2 },
};

const sMVC_PaletteDataset MVC_A_HYPERVENOM_PALETTES[] =
{
    { "P1 Color", 0x490a4, 0x490b4, 0x0e },
    { "P1 Taunt", 0x490c4, 0x490d4, 0x0e, 1 },
    { "P1 Web", 0x490e4, 0x490f4, 0x0e, 2 },
    { "P2 Color", 0x49104, 0x49114, 0x0e },
    { "P2 Taunt", 0x49124, 0x49134, 0x0e, 1 },
    { "P2 Web", 0x49144, 0x49154, 0x0e, 2 },
};

const sMVC_PaletteDataset MVC_A_SPIDEY_PALETTES[] =
{
    { "P1 Color", 0x48644, 0x48654, 0x0c },
    { "P1 Extra 1", 0x48664, 0x48674 },
    { "P1 Web", 0x48684, 0x48694, 0x0c, 2 },
    { "P2 Color", 0x486a4, 0x486b4, 0x0c },
    { "P2 Extra 1", 0x486c4, 0x486d4 },
    { "P2 Web", 0x486e4, 0x486f4, 0x0c, 2 },
};

const sMVC_PaletteDataset MVC_A_CAPCOM_PALETTES[] =
{
    { "P1 Color", 0x48884, 0x48894, 0x38 },
    { "P1 Ninjas", 0x488a4, 0x488b4, 0x38, 1 },
    { "P1 Hoover", 0x488c4, 0x488d4, 0x38, 2 },
    { "P2 Color", 0x488e4, 0x488f4, 0x38 },
    { "P2 Ninjas", 0x48904, 0x48914, 0x38, 1 },
    { "P2 Hoover", 0x48924, 0x48934, 0x38, 2 },
};

const sMVC_PaletteDataset MVC_A_MORRIGAN_PALETTES[] =
{
    { "P1 Color", 0x48ec4, 0x48ed4, 0x03 },
    { "P1 Lilith", 0x48ee4, 0x48ef4, 0x03, 1 },
    { "P1 Extra 2", 0x48f04, 0x48f14, 0x03, 2 },
    { "P2 Color", 0x48f24, 0x48f34, 0x03 },
    { "P2 Lilith", 0x48f44, 0x48f54, 0x03, 1 },
    { "P2 Extra 2", 0x48f64, 0x48f74, 0x03, 2 },
};

const sMVC_PaletteDataset MVC_A_LILITH_PALETTES[] =
{
    { "P1 Color", 0x493a4, 0x493b4, 0x03 },
    { "P1 Extra 1", 0x493c4, 0x493d4, 0x03, 1 },
    { "P1 Extra 2", 0x493e4, 0x493f4, 0x03, 2 },
    { "P2 Color", 0x49404, 0x49414, 0x03 },
    { "P2 Extra 1", 0x49424, 0x49434, 0x03, 1 },
    { "P2 Extra 2", 0x49444, 0x49454, 0x03, 2 },
};

const sMVC_PaletteDataset MVC_A_STRIDER_PALETTES[] =
{
    { "P1 Color", 0x48e04, 0x48e14, 0x05 },
    { "P1 FX", 0x48e24, 0x48e34, 0x05, 1 },
    { "P1 Mech", 0x48e44, 0x48e54, 0x05, 2 },
    { "P2 Color", 0x48e64, 0x48e74, 0x05 },
    { "P2 FX", 0x48e84, 0x48e94, 0x05, 1 },
    { "P2 Mech", 0x48ea4, 0x48eb4, 0x05, 2 },
};

const sMVC_PaletteDataset MVC_A_GAMBIT_PALETTES[] =
{
    { "P1 Color", 0x484c4, 0x484d4, 0x28 },
    { "P1 Extra 1", 0x484e4, 0x484f4, 0x28, 1 },
    { "P1 Extra 2", 0x48504, 0x48514, 0x28, 2 },
    { "P2 Color", 0x48524, 0x48534, 0x28 },
    { "P2 Extra 1", 0x48544, 0x48554, 0x28, 1 },
    { "P2 Extra 2", 0x48564, 0x48574, 0x28, 2 },
};

const sMVC_PaletteDataset MVC_A_ASSIST_PALETTES[] =
{
    { "Anita P1", 0x50fa4, 0x50fb4 },
    { "Anita P1 Extra 1", 0x50fc4, 0x50fd4 },
    { "Anita P1 Extra 2", 0x50fe4, 0x50ff4 },
    { "Anita P2", 0x51004, 0x51014 },
    { "Anita P2 Extra 1", 0x51024, 0x51034 },
    { "Anita P2 Extra 2", 0x51044, 0x51054 },

    { "Arthur P1", 0x50804, 0x50814 },
    { "Arthur P1 Extra 1", 0x50824, 0x50834 },
    { "Arthur P1 Extra 2", 0x50844, 0x50854 },
    { "Arthur P2", 0x50864, 0x50874 },
    { "Arthur P2 Extra 1", 0x50884, 0x50894 },
    { "Arthur P2 Extra 2", 0x508a4, 0x508b4 },

    { "Colossus P1", 0x505c4, 0x505d4, 0x32 },
    { "Colossus P2", 0x50624, 0x50634, 0x32 },

    { "Cyclops P1", 0x50504, 0x50514, 0x06 },
    { "Cyclops P2", 0x50564, 0x50574, 0x06 },
    { "Cyclops Optic Blast 1", 0x508c4, 0x508d4 },
    { "Cyclops Optic Blast 2", 0x508e4, 0x508f4 },
    { "Cyclops Optic Blast 3", 0x50904, 0x50914 },
    { "Cyclops Optic Blast 4", 0x50924, 0x50934 },
    { "Cyclops Optic Blast 5", 0x50944, 0x50954 },

    { "Devilot P1", 0x510c4, 0x510d4 },
    { "Devilot P1 Extra 1", 0x510e4, 0x510f4 },
    { "Devilot P1 Extra 2", 0x51104, 0x51114 },
    { "Devilot P1 Extra 3", 0x51184, 0x51194 },
    { "Devilot P1 Extra 4", 0x511a4, 0x511b4 },
    { "Devilot P2", 0x51124, 0x51134 },
    { "Devilot P2 Extra 1", 0x51144, 0x51154 },
    { "Devilot P2 Extra 2", 0x51164, 0x51174 },
    { "Devilot P2 Extra 3", 0x511c4, 0x511d4 },
    { "Devilot P2 Extra 4", 0x511e4, 0x511f4 },

    { "Iceman P1", 0x50d64, 0x50d74, 0x09 },
    { "Iceman P1 Extra 1", 0x50d84, 0x50d94, 0x09 },
    { "Iceman P1 Extra 2", 0x50da4, 0x50db4, 0x09 },
    { "Iceman P2", 0x50dc4, 0x50dd4, 0x09 },
    { "Iceman P2 Extra 1", 0x50de4, 0x50df4, 0x09 },
    { "Iceman P2 Extra 2", 0x50e04, 0x50e14, 0x09 },

    { "Jubilee P1", 0x51204, 0x51214 },
    { "Jubilee P2", 0x51264, 0x51274 },

    { "Juggernaut P1", 0x502c4, 0x502d4, 0x29 },
    { "Juggernaut P1 Extra 1", 0x50304, 0x50314, 0x29, 2 },
    { "Juggernaut P2", 0x50324, 0x50334, 0x29 },
    { "Juggernaut P2 Extra 1", 0x50364, 0x50374, 0x29, 2 },

    { "Lou P1", 0x50204, 0x50214 },
    { "Lou P1 Extra", 0x50224, 0x50234 },
    { "Lou P2", 0x50264, 0x50274 },
    { "Lou P2 Extra", 0x50284, 0x50294 },

    { "Magneto P1", 0x50384, 0x50394, 0x2c },
    { "Magneto P1 Extra", 0x503a4, 0x503b4, 0x2c, 1 },
    { "Magneto P2", 0x503e4, 0x503f4, 0x2c },
    { "Magneto P2 Extra", 0x50404, 0x50414, 0x2c, 1 },

    { "Michelle Heart P1", 0x50a24, 0x50a34 },
    { "Michelle Heart P1 Extra", 0x50a44, 0x50a54 },
    { "Michelle Heart P2", 0x50a84, 0x50a94 },
    { "Michelle Heart P2 Extra", 0x50aa4, 0x50ab4 },

    { "Psylocke P1", 0x50444, 0x50454, 0x08 },
    { "Psylocke P1 Extra", 0x50464, 0x50474, 0x08, 2 },
    { "Psylocke P2", 0x504a4, 0x504b4, 0x08 },
    { "Psylocke P2 Extra", 0x504c4, 0x504d4, 0x08, 2 },

    { "Pure & Fur P1", 0x50e24, 0x50e34 },
    { "Pure & Fur P1 Extra 1", 0x50e44, 0x50e54 },
    { "Pure & Fur P1 Extra 2", 0x50e64, 0x50e74 },
    { "Pure & Fur P2", 0x50e84, 0x50e94 },
    { "Pure & Fur P2 Extra 1", 0x50ea4, 0x50eb4 },
    { "Pure & Fur P2 Extra 2", 0x50ec4, 0x50ed4 },

    { "Rogue P1", 0x50ca4, 0x50cb4, 0x0a },
    { "Rogue P2", 0x50d04, 0x50d14, 0x0a },

    { "Saki P1", 0x50964, 0x50974 },
    { "Saki P1 Extra", 0x50984, 0x50994 },
    { "Saki P2", 0x509c4, 0x509d4 },
    { "Saki P2 Extra", 0x509e4, 0x509f4 },

    { "Sentinel P1", 0x51344, 0x51354, 0x34 },
    { "Sentinel P2", 0x513a4, 0x513b4, 0x34 },

    { "Shadow Nash P1", 0x51284, 0x51294, 0x21 },
    { "Shadow Nash P1 Extra", 0x512c4, 0x512d4, 0x21, 2 },
    { "Shadow Nash P2", 0x512e4, 0x512f4, 0x21 },
    { "Shadow Nash P2 Extra", 0x51324, 0x51334, 0x21, 2 },

    { "Storm P1", 0x50ba4, 0x50bb4, 0x2a },
    { "Storm P1 Extra", 0x50c64, 0x50c74, 0x2a, 12 },
    { "Storm P2", 0x50c04, 0x50c14, 0x2a },
    { "Storm P2 Extra", 0x50c84, 0x50c94, 0x2a, 12 },

    { "Ton-Pooh P1", 0x50744, 0x50754 },
    { "Ton-Pooh P1 Extra 1", 0x50764, 0x50774 },
    { "Ton-Pooh P1 Extra 2", 0x50784, 0x50794 },
    { "Ton-Pooh P2", 0x507a4, 0x507b4 },
    { "Ton-Pooh P2 Extra 1", 0x507c4, 0x507d4 },
    { "Ton-Pooh P2 Extra 2", 0x507e4, 0x507f4 },

    { "Thor P1", 0x50ae4, 0x50af4 },
    { "Thor P1 Extra", 0x50b04, 0x50b14 },
    { "Thor P2", 0x50b44, 0x50b54 },
    { "Thor P2 Extra", 0x50b64, 0x50b74 },

    { "Unknown Soldier P1", 0x50684, 0x50694 },
    { "Unknown Soldier P1 Extra", 0x506a4, 0x506b4 },
    { "Unknown Soldier P2", 0x506e4, 0x506f4 },
    { "Unknown Soldier P2 Extra", 0x50704, 0x50714 },

    { "US Agent P1", 0x50ee4, 0x50ef4, 0x0b },
    { "US Agent P1 Shield", 0x50f04, 0x50f14, 0x0b, 1 },
    { "US Agent P1 Charging Star", 0x50f24, 0x50f34, 0x0b, 2 },
    { "US Agent P2", 0x50f44, 0x50f54, 0x0b },
    { "US Agent P2 Shield", 0x50f64, 0x50f74, 0x0b, 1 },
    { "US Agent P2 Charging Star", 0x50f84, 0x50f94, 0x0b, 2 },
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

    MVC_A_EXTRALOC //Extra palettes
};

const char MVC_A_IMGDESC[6][MAX_DESCRIPTION_LENGTH] =
{
    "P1 Color",
    "Palette 2",
    "Palette 3",
    "P2 Color",
    "Palette 5",
    "Palette 6"
};

const char MVC_A_UNITDESC[MVC_A_NUMUNIT][MAX_DESCRIPTION_LENGTH] =
{
    "War Machine",
    "Captain America",
    "Hulk",
    "Wolverine",
    "Venom",
    "Spider-Man",
    "Roll",
    "Ryu",
    "Captain Commando",
    "Chun-Li",
    "Jin",
    "Zangief",
    "Strider",
    "Megaman",
    "Morrigan",
    "Onslaught",
    "Red Venom",
    "Orange Hulk",
    "Gold War Machine",
    "Shadow Lady",
    "Lilith",
    "Gambit",
    "Assists",
};

const UINT16 MVC_A_PALAMT[MVC_A_NUMUNIT] = {

    ARRAYSIZE(MVC_A_WARMACHINE_PALETTES), // WM
    ARRAYSIZE(MVC_A_CAPAM_PALETTES), // CapAm
    ARRAYSIZE(MVC_A_HULK_PALETTES), // Hulk
    ARRAYSIZE(MVC_A_WOLVERINE_PALETTES), // Wolvie
    ARRAYSIZE(MVC_A_VENOM_PALETTES), // Venom
    ARRAYSIZE(MVC_A_SPIDEY_PALETTES), // Spidey
    ARRAYSIZE(MVC_A_ROLL_PALETTES), // Roll
    ARRAYSIZE(MVC_A_RYU_PALETTES), // Ryu
    ARRAYSIZE(MVC_A_CAPCOM_PALETTES), // Capcom
    ARRAYSIZE(MVC_A_CHUNLI_PALETTES), // Chun
    ARRAYSIZE(MVC_A_JIN_PALETTES), // Jin
    ARRAYSIZE(MVC_A_GIEF_PALETTES), // Gief & MechaGief
    ARRAYSIZE(MVC_A_STRIDER_PALETTES), // Strider    
    ARRAYSIZE(MVC_A_MEGAMAN_PALETTES), // Megaman
    ARRAYSIZE(MVC_A_MORRIGAN_PALETTES), // Morrigan
    ARRAYSIZE(MVC_A_ONSLAUGHT_PALETTES), // Onslaught
    ARRAYSIZE(MVC_A_HYPERVENOM_PALETTES), // Red Venom
    ARRAYSIZE(MVC_A_ORANGEHULK_PALETTES), // Orange Hulk
    ARRAYSIZE(MVC_A_GOLDWARMACHINE_PALETTES), // Gold War Machine
    ARRAYSIZE(MVC_A_SHADOWLADY_PALETTES), // Shadow Lady
    ARRAYSIZE(MVC_A_LILITH_PALETTES), // Lilith
    ARRAYSIZE(MVC_A_GAMBIT_PALETTES), // Gambit
    ARRAYSIZE(MVC_A_ASSIST_PALETTES), // Assists
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
};

// We extend this array with data groveled from the mvce.txt extensible extras file, if any.
const stExtraDef MVC_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
