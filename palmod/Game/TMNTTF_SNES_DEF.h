#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to TMNTTF_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const sGame_PaletteDataset TMNTTF_SNES_LEO_PALETTES_P1[] =
{
     { L"Leo P1", 0x0487bc, 0x0487dc },
};

const sGame_PaletteDataset TMNTTF_SNES_LEO_PALETTES_P2[] =
{
    { L"Leo P2", 0x0487Dc, 0x0487FC },
};

const sGame_PaletteDataset TMNTTF_SNES_LEO_PALETTES_SHARED[] =
{
    { L"Leo Katanas", 0x0487Fc, 0x04880c },
    { L"Leo FX", 0x04880c, 0x04882c },
};

const sGame_PaletteDataset TMNTTF_SNES_RALPH_PALETTES_P1[] =
{
    { L"Ralph P1", 0x04882c, 0x04884C },
};

const sGame_PaletteDataset TMNTTF_SNES_RALPH_PALETTES_P2[] =
{
    { L"Ralph P2", 0x04884c, 0x04886C },
};

const sGame_PaletteDataset TMNTTF_SNES_RALPH_PALETTES_SHARED[] =
{
    { L"Ralph Sais", 0x04886c, 0x04887c },
    { L"Ralph Jamboree", 0x04887c, 0x04888C },
};

const sGame_PaletteDataset TMNTTF_SNES_DON_PALETTES_P1[] =
{
    { L"Don P1", 0x04890c, 0x04892C },
};

const sGame_PaletteDataset TMNTTF_SNES_DON_PALETTES_P2[] =
{
    { L"Don P2", 0x04892c, 0x04894C },
};

const sGame_PaletteDataset TMNTTF_SNES_DON_PALETTES_SHARED[] =
{
    { L"Don Bo", 0x04894c, 0x04895c },
    { L"Don FX", 0x04895c, 0x04897C },
};

const sGame_PaletteDataset TMNTTF_SNES_MIKE_PALETTES_P1[] =
{
    { L"Mike P1", 0x04889c, 0x0488BC },
};

const sGame_PaletteDataset TMNTTF_SNES_MIKE_PALETTES_P2[] =
{
    { L"Mike P2", 0x0488Bc, 0x0488DC },
};

const sGame_PaletteDataset TMNTTF_SNES_MIKE_PALETTES_SHARED[] =
{
    { L"Mike Nunchakus", 0x0488dc, 0x0488eC },
    { L"Mike Dragon Breath", 0x0488Ec, 0x0488FC },
};

const sGame_PaletteDataset TMNTTF_SNES_SHREDDER_PALETTES_P1[] =
{
    { L"C. Shredder P1", 0x048450, 0x048470 },
    { L"C. Shredder P1 FX 1", 0x048470, 0x04847e },
    { L"C. Shredder P1 FX 2", 0x048480, 0x0484a0 },
};

const sGame_PaletteDataset TMNTTF_SNES_SHREDDER_PALETTES_P2[] =
{
    { L"C. Shredder P2", 0x0484A0, 0x0484C0 },
    { L"C. Shredder P2 FX", 0x0484C0, 0x0484Ce },
    { L"C. Shredder P2 FX 2", 0x0484d0, 0x0484F0 },
};

const sGame_PaletteDataset TMNTTF_SNES_WAR_PALETTES_P1[] =
{
    { L"War P1", 0x048Aae, 0x048Ace },
    { L"War P1 FX", 0x048Aee, 0x048b0e },
};

const sGame_PaletteDataset TMNTTF_SNES_WAR_PALETTES_P2[] =
{
    { L"War P2", 0x048Ace, 0x048AEe },
    { L"War P2 FX", 0x048b0e, 0x048b2e },
};

const sGame_PaletteDataset TMNTTF_SNES_ASKA_PALETTES_P1[] =
{
    { L"Aska P1", 0x04855a, 0x04857A },
    { L"Aska P1 FX", 0x04859a, 0x0485BA },
    { L"Aska P1 FX 2", 0x0485da, 0x0485fA },
};

const sGame_PaletteDataset TMNTTF_SNES_ASKA_PALETTES_P2[] =
{
    { L"Aska P2", 0x04857a, 0x04859A },
    { L"Aska P2 FX", 0x0485Ba, 0x0485DA },
    { L"Aska P2 FX 2", 0x0485fc, 0x04861c },
};

const sGame_PaletteDataset TMNTTF_SNES_CHROME_PALETTES_P1[] =
{
    { L"Chrome Dome P1", 0x04897c, 0x04899c },
    { L"Chrome Dome P1 FX", 0x04899c, 0x0489BC },
};

const sGame_PaletteDataset TMNTTF_SNES_CHROME_PALETTES_P2[] =
{
    { L"Chrome Dome P2", 0x048A5c, 0x048A7C },
    { L"Chrome Dome P2 FX", 0x048A7c, 0x048A9C },
};

const sGame_PaletteDataset TMNTTF_SNES_CHROME_PALETTES_SHARED[] =
{
    { L"Chrome Dome Chrome Bomb FX 1", 0x489bc, 0x489dc },
    { L"Chrome Dome Chrome Bomb FX 2", 0x489dc, 0x489fc },
    { L"Chrome Dome Chrome Bomb FX 3", 0x489fc, 0x48a1c },
    { L"Chrome Dome Electric FX 1", 0x48a1c, 0x48a3c },
    { L"Chrome Dome Electric FX 2", 0x48a3c, 0x48a5c },
};

const sGame_PaletteDataset TMNTTF_SNES_WINGNUT_PALETTES_P1[] =
{
    { L"Wingnut P1", 0x048B2e, 0x048B4E },
    { L"Wingnut P1 Moonbuster/FX", 0x048B4e, 0x048B6E },
};

const sGame_PaletteDataset TMNTTF_SNES_WINGNUT_PALETTES_P2[] =
{
    { L"Wingnut P2", 0x048B6e, 0x048B8E },
    { L"Wingnut P2 Moonbuster/FX", 0x048B8e, 0x048BAE },
};

const sGame_PaletteDataset TMNTTF_SNES_ARMAGGON_PALETTES_P1[] =
{
    { L"Armaggon P1", 0x0484F0, 0x048510 },
};

const sGame_PaletteDataset TMNTTF_SNES_ARMAGGON_PALETTES_P2[] =
{
    { L"Armaggon P2", 0x048510, 0x048530 },
};

const sGame_PaletteDataset TMNTTF_SNES_ARMAGGON_PALETTES_SHARED[] =
{
    { L"Armaggon FX", 0x048530, 0x048540 },
    { L"Armaggon FX 2", 0x048540, 0x04855a },
};

const sGame_PaletteDataset TMNTTF_SNES_KARAI_PALETTES_P1[] =
{
    { L"Karai P1", 0x048bae, 0x048bce },
};

const sGame_PaletteDataset TMNTTF_SNES_KARAI_PALETTES_P2[] =
{
    { L"Karai P2", 0x048c2e, 0x048c4e },
};

const sGame_PaletteDataset TMNTTF_SNES_KARAI_PALETTES_SHARED[] =
{
    { L"Karai Bakuretsu Jigokuken", 0x048bee, 0x048c0e },
    { L"Karai Dark Thunder", 0x048c0e, 0x048c2e },
    { L"Karai Dark Thunder FX", 0x048bce, 0x048bee },
};

const sGame_PaletteDataset TMNTTF_SNES_RATKING_PALETTES_P1[] =
{
    { L"Rat King P1", 0x04861e, 0x04863e },
    { L"Rat King P1FX", 0x04863e, 0x04865e },
    { L"Rat King P1FX 2", 0x04865e, 0x04867e },
};

const sGame_PaletteDataset TMNTTF_SNES_RATKING_PALETTES_P2[] =
{
    { L"Rat King P2", 0x04867e, 0x04869e },
    { L"Rat King P2FX", 0x04869e, 0x0486be },
    { L"Rat King P2FX 2", 0x0486be, 0x0486de },
};

const sGame_PaletteDataset TMNTTF_SNES_FAKE_PALETTES_P1[] =
{
    { L"Fake Brother P1", 0x048cbc, 0x048cdc },
};

const sGame_PaletteDataset TMNTTF_SNES_FAKE_PALETTES_P2[] =
{
    { L"Fake Brother P2", 0x048cdc, 0x048cfc },
};

const sGame_PaletteDataset TMNTTF_SNES_FAKE_PALETTES_SHARED[] =
{
    { L"Fake Brother Weapon", 0x048cfc, 0x048d0c },
    { L"Fake Brother Leo FX", 0x048d0c, 0x048d2c },
    { L"Fake Brother Ralph FX", 0x048d6c, 0x048d8c },
    { L"Fake Brother Don FX", 0x048d4c, 0x048d6c },
    { L"Fake Brother Mike FX", 0x048d2c, 0x048d4c },
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

const sGame_PaletteDataset TMNTTF_SNES_BONUS_PALETTES_SELECT[] =
{
    { L"Turtles Portrait Weapons", 0x049860, 0x049880 },
    { L"Leo Portrait P1", 0x049882, 0x0498A2 },
    { L"Leo Portrait P2", 0x049A1A, 0x049A3A },
    { L"Ralph Portrait P1", 0x0498C6, 0x0498E6 },
    { L"Ralph Portrait P2", 0x049A5E, 0x049A7E },
    { L"Don Portrait P1", 0x0498E8, 0x049908 },
    { L"Don Portrait P2", 0x049A80, 0x049AA0 },
    { L"Mike Portrait P1", 0x0498A4, 0x0498C4 },
    { L"Mike Portrait P2", 0x049A3c, 0x049A5C },
    { L"C. Shredder Portrait P1", 0x04994E, 0x04996E },
    { L"C. Shredder Portrait P2", 0x049AE6, 0x049B06 },
    { L"War Portrait P1", 0x049992, 0x0499B2 },
    { L"War Portrait P2", 0x049B2A, 0x049B4A },
    { L"Aska Portrait P1", 0x0499B4, 0x0499D4 },
    { L"Aska Portrait P2", 0x049B4c, 0x049B6C },
    { L"Chrome Dome Portrait P1", 0x04992c, 0x04994C },
    { L"Chrome Dome Portrait P2", 0x049AC4, 0x049AE4 },
    { L"Wingnut Portrait P1", 0x0499D6, 0x0499F6 },
    { L"Wingnut Portrait P2", 0x049B6E, 0x049B8E },
    { L"Armaggon Portrait P1", 0x049AA2, 0x049AC2 },
    { L"Armaggon Portrait P2", 0x04990A, 0x04992A },
    { L"Karai Portrait P1", 0x0499f8, 0x049a18 },
    { L"Karai Portrait P2", 0x049B90, 0x049Bb0 },
    { L"Rat King Portrait P1", 0x049970, 0x049990 },
    { L"Rat King Portrait P2", 0x049b08, 0x049b28 },
};

const sGame_PaletteDataset TMNTTF_SNES_BONUS_PALETTES_SELECTICONS[] =
{
    { L"Leo & Ralph Select Icon", 0x0496f8, 0x049718 },
    { L"Don & Mike Select Icon", 0x0496d8, 0x0496f8 },
    { L"C.Shredder Select Icon", 0x0496b8, 0x0496d8 },
    { L"War Select Icon", 0x049800, 0x049820 },
    { L"Aska Select Icon", 0x04975c, 0x04977c },
    { L"Chrome Dome Select Icon", 0x0486fe, 0x04871e },
    { L"Wingnut Select Icon", 0x0497a0, 0x0497c0 },
    { L"Armaggon Select Icon", 0x049820, 0x049840 },
};

const sGame_PaletteDataset TMNTTF_SNES_BONUS_PALETTES_UNSELECTICONS[] =
{
    { L"Turtles UnSelect Icon", 0x04973a, 0x04975a },
    { L"C.Shredder UnSelect Icon", 0x049718, 0x049738 },
    { L"War UnSelect Icon", 0x04871e, 0x04873e },
    { L"Aska UnSelect Icon", 0x04977e, 0x04979e },
    { L"Chrome Dome UnSelect Icon", 0x0486de, 0x0486fe },
    { L"Wingnut UnSelect Icon", 0x0497c2, 0x0497e2 },
};

const sGame_PaletteDataset TMNTTF_SNES_BONUS_PALETTES_MENU[] =
{
    { L"Characters Names", 0x049840, 0x049860 },
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
    { L"Bonus", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_CHROME_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_CHROME_PALETTES_SHARED) },
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

const sDescTreeNode TMNTTF_SNES_KARAI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_KARAI_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_KARAI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_KARAI_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_KARAI_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_KARAI_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_KARAI_PALETTES_SHARED) },
};

const sDescTreeNode TMNTTF_SNES_RATKING_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RATKING_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_RATKING_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RATKING_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_RATKING_PALETTES_P2) },
};

const sDescTreeNode TMNTTF_SNES_FAKE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_FAKE_PALETTES_P1, ARRAYSIZE(TMNTTF_SNES_FAKE_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_FAKE_PALETTES_P2, ARRAYSIZE(TMNTTF_SNES_FAKE_PALETTES_P2) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_FAKE_PALETTES_SHARED, ARRAYSIZE(TMNTTF_SNES_FAKE_PALETTES_SHARED) },
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

const sDescTreeNode TMNTTF_SNES_BONUS_COLLECTION[] =
{
    { L"Select Portraits", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_BONUS_PALETTES_SELECT, ARRAYSIZE(TMNTTF_SNES_BONUS_PALETTES_SELECT) },
    { L"Selected Icons", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_BONUS_PALETTES_SELECTICONS, ARRAYSIZE(TMNTTF_SNES_BONUS_PALETTES_SELECTICONS) },
    { L"Unselected Icons", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_BONUS_PALETTES_UNSELECTICONS, ARRAYSIZE(TMNTTF_SNES_BONUS_PALETTES_UNSELECTICONS) },
    { L"Menu Extras", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_BONUS_PALETTES_MENU, ARRAYSIZE(TMNTTF_SNES_BONUS_PALETTES_MENU) },
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
    { L"Karai", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_KARAI_COLLECTION, ARRAYSIZE(TMNTTF_SNES_KARAI_COLLECTION) },
    { L"Rat King", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_RATKING_COLLECTION, ARRAYSIZE(TMNTTF_SNES_RATKING_COLLECTION) },
    { L"Fake Brother", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_FAKE_COLLECTION, ARRAYSIZE(TMNTTF_SNES_FAKE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)TMNTTF_SNES_BONUS_COLLECTION, ARRAYSIZE(TMNTTF_SNES_BONUS_COLLECTION) },
    
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
