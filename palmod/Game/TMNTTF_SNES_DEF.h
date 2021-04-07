#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to TMNTTF_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset TMNTTF_SNES_LEO_PALETTES_P1[] =
{
    { L"Leo P1", 0x487BE - 2, 0x487DC },
    { L"Leo P1 Portrait", 0x49882, 0x498A2 },
};

const sGame_PaletteDataset TMNTTF_SNES_LEO_PALETTES_P2[] =
{
    { L"Leo P2", 0x487DE - 2, 0x487FC },
    { L"Leo P2 Portrait", 0x49A1A, 0x49A3A },
};

const sGame_PaletteDataset TMNTTF_SNES_LEO_PALETTES_SHARED[] =
{
    { L"Leo Katanas", 0x487FE - 2, 0x48808 },
};

const sGame_PaletteDataset TMNTTF_SNES_RALPH_PALETTES_P1[] =
{
    { L"Ralph P1", 0x4882E - 2, 0x4884C },
    { L"Ralph P1 Portrait", 0x498C6, 0x498E6 },
};

const sGame_PaletteDataset TMNTTF_SNES_RALPH_PALETTES_P2[] =
{
    { L"Ralph P2", 0x4884E - 2, 0x4886C },
    { L"Ralph P2 Portrait", 0x49A5E, 0x49A7E },
};

const sGame_PaletteDataset TMNTTF_SNES_RALPH_PALETTES_SHARED[] =
{
    { L"Ralph Sais", 0x4886E - 2, 0x48878 },
    { L"Ralph Jamboree", 0x4887E - 2, 0x4888C },
};

const sGame_PaletteDataset TMNTTF_SNES_DON_PALETTES_P1[] =
{
    { L"Don P1", 0x4890E - 2, 0x4892C },
    { L"Don P1 Portrait", 0x498E8, 0x49908 },
};

const sGame_PaletteDataset TMNTTF_SNES_DON_PALETTES_P2[] =
{
    { L"Don P2", 0x4892E - 2, 0x4894C },
    { L"Don P2 Portrait", 0x49A80, 0x49AA0 },
};

const sGame_PaletteDataset TMNTTF_SNES_DON_PALETTES_SHARED[] =
{
    { L"Don Bow", 0x4894E - 2, 0x48958 },
    { L"Don FX", 0x4895E - 2, 0x4897C },
};

const sGame_PaletteDataset TMNTTF_SNES_MIKE_PALETTES_P1[] =
{
    { L"Mike P1", 0x4889E - 2, 0x488BC },
    { L"Mike P1 Portrait", 0x498A4, 0x498C4 },
};

const sGame_PaletteDataset TMNTTF_SNES_MIKE_PALETTES_P2[] =
{
    { L"Mike P2", 0x488BE - 2, 0x488DC },
    { L"Mike P2 Portrait", 0x49A3C, 0x49A5C },
};

const sGame_PaletteDataset TMNTTF_SNES_MIKE_PALETTES_SHARED[] =
{
    { L"Mike Dragon Breath", 0x488EE - 2, 0x488FC },
};

const sGame_PaletteDataset TMNTTF_SNES_SHREDDER_PALETTES_P1[] =
{
    { L"C. Shredder P1", 0x48452 - 2, 0x48470 },
    { L"C. Shredder P1 fx", 0x48472 - 2, 0x4847E },
    { L"C. Shredder P1 Portrait", 0x4994E, 0x4996E },
};

const sGame_PaletteDataset TMNTTF_SNES_SHREDDER_PALETTES_P2[] =
{
    { L"C. Shredder P2", 0x484A2 - 2, 0x484C0 },
    { L"C. Shredder P2 fx", 0x484C2 - 2, 0x484CE },
    { L"C. Shredder P2 Portrait", 0x49AE6, 0x49B06 },
};

const sGame_PaletteDataset TMNTTF_SNES_WAR_PALETTES_P1[] =
{
    { L"War P1", 0x48AB0 - 2, 0x48ACE },
    { L"War P1 Portrait", 0x49992, 0x499B2 },
};

const sGame_PaletteDataset TMNTTF_SNES_WAR_PALETTES_P2[] =
{
    { L"War P2", 0x48AD0 - 2, 0x48AEE },
    { L"War P2 Portrait", 0x49B2A, 0x49B4A },
};

const sGame_PaletteDataset TMNTTF_SNES_ASKA_PALETTES_P1[] =
{
    { L"Aska P1", 0x4855C - 2, 0x4857A },
    { L"Aska FX P1", 0x4859C - 2, 0x485BA },
    { L"Aska P1 Portrait", 0x499B4, 0x499D4 },
};

const sGame_PaletteDataset TMNTTF_SNES_ASKA_PALETTES_P2[] =
{
    { L"Aska P2", 0x4857C - 2, 0x4859A },
    { L"Aska FX P2", 0x485BC - 2, 0x485DA },
    { L"Aska P2 Portrait", 0x49B4C, 0x49B6C },
};

const sGame_PaletteDataset TMNTTF_SNES_CHROME_PALETTES_P1[] =
{
    { L"Chrome Dome P1", 0x4897E - 2, 0x4899C },
    { L"Chrome Dome P1 Portrait", 0x4992C, 0x4994C },
};

const sGame_PaletteDataset TMNTTF_SNES_CHROME_PALETTES_P2[] =
{
    { L"Chrome Dome P2", 0x48A5E - 2, 0x48A7C },
    { L"Chrome Dome P2 Portrait", 0x49AC4, 0x49AE4 },
};

const sGame_PaletteDataset TMNTTF_SNES_CHROME_PALETTES_BONUS[] =
{
    { L"Chrome Dome P1 FX", 0x4899E - 2, 0x489BC },
};

const sGame_PaletteDataset TMNTTF_SNES_WINGNUT_PALETTES_P1[] =
{
    { L"Wingnut P1", 0x48B30 - 2, 0x48B4E },
    { L"Wingnut P1 Moonbuster / FX", 0x48B50 - 2, 0x48B6E },
    { L"Wingnut P1 Portrait", 0x499D6, 0x499F6 },
};

const sGame_PaletteDataset TMNTTF_SNES_WINGNUT_PALETTES_P2[] =
{
    { L"Wingnut P2", 0x48B70 - 2, 0x48B8E },
    { L"Wingnut P2 Moonbuster / FX", 0x48B90 - 2, 0x48BAE },
    { L"Wingnut P2 Portrait", 0x49B6E, 0x49B8E },
};

const sGame_PaletteDataset TMNTTF_SNES_ARMAGGON_PALETTES_P1[] =
{
    { L"Armaggon P1", 0x484F2 - 2, 0x48510 },
    { L"Armaggon P1 Portrait", 0x49AA2, 0x49AC2 },
};

const sGame_PaletteDataset TMNTTF_SNES_ARMAGGON_PALETTES_P2[] =
{
    { L"Armaggon P2", 0x48512 - 2, 0x48530 },
    { L"Armaggon P2 Portrait", 0x4990A, 0x4992A },
};

const sGame_PaletteDataset TMNTTF_SNES_ARMAGGON_PALETTES_SHARED[] =
{
    { L"Armaggon FX (shared)", 0x48532 - 2, 0x48540 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_ARTMUSEUM_PALETTES[] =
{
    { L"Sculptures, Walls", 0x4A8EC, 0x4A90C },
    { L"Center Hallway", 0x4A90A, 0x4A92A },
    { L"Floor, pillars", 0x4A928, 0x4A948 },
    { L"Center Sculpture", 0x4A946, 0x4A966 },
    { L"Mousers, Big pillars", 0x4A964, 0x4A984 },
    { L"People", 0x4A982, 0x4A9A2 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_BACKALLEY_PALETTES[] =
{
    { L"Sidewalk, smashed car", 0x4837A, 0x4839A },
    { L"Garbage cans, windows, horizon", 0x48398, 0x483B8 },
    { L"Phonebooth", 0x483B6, 0x483D6 },
    { L"Torn Poster", 0x483D4, 0x483F4 },
    { L"Building, lamp posts, crates", 0x483F2, 0x48412 },
    { L"People", 0x48410, 0x48430 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_CAFETERIA_PALETTES[] =
{
    { L"Bar", 0x49F38, 0x49F58 },
    { L"Bar decorations / Windows", 0x49F56, 0x49F76 },
    { L"Menus, coffee, brickwall", 0x49F74, 0x49F94 },
    { L"People, barstools", 0x49F92, 0x49FB2 },
    { L"Pinball machines, Jukebox", 0x49FB0, 0x49FD0 },
    { L"Neon Sign 1", 0x49FD0, 0x49FF0 },
    { L"Neon Sign 2", 0x49FF2, 0x4A012 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_METROTRAIN_PALETTES[] =
{
    { L"Buildings 1, Horizon", 0x481AC, 0x481CC },
    { L"Buildings 2, Trees", 0x481CA, 0x481EA },
    { L"Brown buildings", 0x481E8, 0x48208 },
    { L"Train / Red girders 1", 0x48206, 0x48226 },
    { L"Train / Red girders 2", 0x48284, 0x482A4 },
    { L"Train / Red girders 3", 0x482A4, 0x482C4 },
    { L"Building 3", 0x48224, 0x48244 },
    { L"Chopper 1", 0x48244, 0x48264 },
    { L"Chopper 2", 0x48264, 0x48284 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_METALWORKS_PALETTES[] =
{
    { L"Floor", 0x482C4, 0x482E4 },
    { L"Truck / Orange Foot Soldier", 0x482E2, 0x48302 },
    { L"Red supports / Purple Foot", 0x48300, 0x48320 },
    { L"Yellow supports / Violet Foot", 0x4831E, 0x4833E },
    { L"Yellow supports / Green Foot", 0x4833C, 0x4835C },
    { L"Background", 0x4835A, 0x4837A },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_MTOLYMPUS_PALETTES[] =
{
    { L"Floor + Head Statue", 0x4A2F2, 0x4A312 },
    { L"Stone Blocks + Foot Clan", 0x4A310,0x4A330 },
    { L"Bebop + Pillar", 0x4A32E, 0x4A34E },
    { L"Rocksteady + Pillar", 0x4A34C, 0x4A36C },
    { L"Sphinx + Sky", 0x4A36A, 0x4A38A },
    { L"Parthanon + Sky", 0x4A388, 0x4A3A8 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_NOHSTAGE_PALETTES[] =
{
    { L"Floor, Cherry Blossom Trees", 0x4AD8E, 0x4ADAE },
    { L"People (robed), Shrines", 0x4ADAC, 0x4ADCC },
    { L"Frog", 0x4ADCA, 0x4ADEA },
    { L"Stairs, Roof", 0x4ADE8, 0x4AE08 },
    { L"Walls, Banners", 0x4AE06, 0x4AE26 },
    { L"Tsunami art walls", 0x4AE24, 0x4AE44 },
    { L"Guy on Frog", 0x4AE44, 0x4AE64 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_PIRATESHIP_PALETTES[] =
{
    { L"Water / Floor", 0x4A3A8, 0x4A3C8 },
    { L"Cannons, Wood, Water", 0x4A3C6,0x4A3E6 },
    { L"Purple BG, Wood", 0x4A3E4, 0x4A404 },
    { L"Barrels", 0x4A402, 0x4A422 },
    { L"Tentacles", 0x4A420, 0x4A440 },
    { L"Squid", 0x4A43E, 0x4A45E },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_SCRAPYARD_PALETTES[] =
{
    { L"Floor + Casey", 0x4AE64, 0x4AE84 },
    { L"Fence, Tires, Wrecking ball, Clouds", 0x4AE82, 0x4AEA2 },
    { L"Yellow Car", 0x4AEA0, 0x4AEC0 },
    { L"Pink Car", 0x4AEBE, 0x4AEDE },
    { L"Background cars, Clear Sky", 0x4AEDC, 0x4AEFC },
    { L"Baxter", 0x4AEFA, 0x4AF1A },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_SKYPALACE_PALETTES[] =
{
    { L"Floor", 0x4A5DC, 0x4A5FC },
    { L"Skyline (Green, Red buildings)", 0x4A5FA, 0x4A61A },
    { L"Skyline (Purple)", 0x4A618, 0x4A638 },
    { L"Billboard (left)", 0x4A636, 0x4A656 },
    { L"Billboard (right)", 0x4A654, 0x4A674 },
    { L"KONAMI sign 1", 0x4A674, 0x4A694 },
    { L"KONAMI sign 2", 0x4A694, 0x4A6B4 },
    { L"KONAMI sign 3", 0x4A6B4, 0x4A6D4 },
    { L"KONAMI sign 4", 0x4A6D4, 0x4A6F4 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_STUDIO6_PALETTES[] =
{
    { L"Curtains", 0x4A45E, 0x4A47E },
    { L"Desk, Cameras", 0x4A47C, 0x4A49C },
    { L"Crates, Stage lights", 0x4A49A, 0x4A4BA },
    { L"Floor, Neon Sign 1", 0x4A4B8, 0x4A4D8 },
    { L"Floor, Neon Sign 2", 0x4A58E, 0x4A5AE },
    { L"People, $ signs", 0x4A4D6, 0x4A4F6 },
};

const sGame_PaletteDataset TMNTTF_SNES_STAGE_THUNDERDOME_PALETTES[] =
{
    { L"Stage lights, supports, crowd", 0x49BB0, 0x49BD0 },
    { L"lights, stage, drummer 1", 0x49Bce, 0x49Bee },
    { L"Instruments", 0x49BEC, 0x49C0C },
    { L"Floor", 0x49C0A, 0x49C2A },
    { L"Band / Rockers", 0x49C28, 0x49C48 },
    { L"Dinosaurs / Lights", 0x49C46, 0x49C66 },
    { L"Singer", 0x49F18, 0x49F38 },
};

const sDescTreeNode TMNTTF_SNES_LEO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_LEO_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_LEO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_LEO_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_LEO_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_LEO_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_LEO_PALETTES_SHARED) },
};

const sDescTreeNode TMNTTF_SNES_RALPH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RALPH_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_RALPH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RALPH_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_RALPH_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RALPH_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_RALPH_PALETTES_SHARED) },
};

const sDescTreeNode TMNTTF_SNES_DON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_DON_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_DON_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_DON_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_DON_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_DON_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_DON_PALETTES_SHARED) },
};

const sDescTreeNode TMNTTF_SNES_MIKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_MIKE_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_MIKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_MIKE_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_MIKE_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_MIKE_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_MIKE_PALETTES_SHARED) },
};

const sDescTreeNode TMNTTF_SNES_SHREDDER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_SHREDDER_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_SHREDDER_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_SHREDDER_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_SHREDDER_PALETTES_P2) },
};

const sDescTreeNode TMNTTF_SNES_WAR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_WAR_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_WAR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_WAR_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_WAR_PALETTES_P2) },
};

const sDescTreeNode TMNTTF_SNES_ASKA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ASKA_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_ASKA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ASKA_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_ASKA_PALETTES_P2) },
};

const sDescTreeNode TMNTTF_SNES_CHROME_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_CHROME_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_CHROME_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_CHROME_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_CHROME_PALETTES_P2) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_CHROME_PALETTES_BONUS, ARRAYSIZE(TMNTTF_SNES_CHROME_PALETTES_BONUS) },
};

const sDescTreeNode TMNTTF_SNES_WINGNUT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_WINGNUT_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_WINGNUT_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_WINGNUT_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_WINGNUT_PALETTES_P2) },
};

const sDescTreeNode TMNTTF_SNES_ARMAGGON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ARMAGGON_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_ARMAGGON_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ARMAGGON_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_ARMAGGON_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ARMAGGON_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_ARMAGGON_PALETTES_SHARED) },
};

const sDescTreeNode TMNTTF_SNES_STAGES_COLLECTION[] =
{
    { L"Art Museum", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_ARTMUSEUM_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_ARTMUSEUM_PALETTES) },
    { L"Back Alley", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_BACKALLEY_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_BACKALLEY_PALETTES) },
    { L"Cafeteria", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_CAFETERIA_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_CAFETERIA_PALETTES) },
    { L"Metal Works", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_METALWORKS_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_METALWORKS_PALETTES) },
    { L"Metro Train", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_METROTRAIN_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_METROTRAIN_PALETTES) },
    { L"Mt. Olympus", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_MTOLYMPUS_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_MTOLYMPUS_PALETTES) },
    { L"Noh Stage", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_NOHSTAGE_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_NOHSTAGE_PALETTES) },
    { L"Pirate Ship", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_PIRATESHIP_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_PIRATESHIP_PALETTES) },
    { L"Scrapyard", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_SCRAPYARD_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_SCRAPYARD_PALETTES) },
    { L"Sky Palace", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_SKYPALACE_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_SKYPALACE_PALETTES) },
    { L"Studio 6", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_STUDIO6_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_STUDIO6_PALETTES) },
    { L"Thunder Dome", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGE_THUNDERDOME_PALETTES, ARRAYSIZE(TMNTTF_SNES_STAGE_THUNDERDOME_PALETTES) },
};

const sDescTreeNode TMNTTF_SNES_UNITS[] =
{
    { L"Leo", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_LEO_COLLECTION, ARRAYSIZE(TMNTTF_SNES_LEO_COLLECTION) },
    { L"Ralph", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RALPH_COLLECTION, ARRAYSIZE(TMNTTF_SNES_RALPH_COLLECTION) },
    { L"Don", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_DON_COLLECTION, ARRAYSIZE(TMNTTF_SNES_DON_COLLECTION) },
    { L"Mike", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_MIKE_COLLECTION, ARRAYSIZE(TMNTTF_SNES_MIKE_COLLECTION) },
    { L"C. Shredder", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_SHREDDER_COLLECTION, ARRAYSIZE(TMNTTF_SNES_SHREDDER_COLLECTION) },
    { L"War", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_WAR_COLLECTION, ARRAYSIZE(TMNTTF_SNES_WAR_COLLECTION) },
    { L"Aska", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ASKA_COLLECTION, ARRAYSIZE(TMNTTF_SNES_ASKA_COLLECTION) },
    { L"Chrome Dome", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_CHROME_COLLECTION, ARRAYSIZE(TMNTTF_SNES_CHROME_COLLECTION) },
    { L"Wingnut", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_WINGNUT_COLLECTION, ARRAYSIZE(TMNTTF_SNES_WINGNUT_COLLECTION) },
    { L"Armaggon", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_ARMAGGON_COLLECTION, ARRAYSIZE(TMNTTF_SNES_ARMAGGON_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_STAGES_COLLECTION, ARRAYSIZE(TMNTTF_SNES_STAGES_COLLECTION) },
};

constexpr auto TMNTTF_SNES_NUMUNIT = ARRAYSIZE(TMNTTF_SNES_UNITS);

#define TMNTTF_SNES_EXTRALOC TMNTTF_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef TMNTTF_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
