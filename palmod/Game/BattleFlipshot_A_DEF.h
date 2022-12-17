#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to JCHAN_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> BattleFlipShot_A_IMGIDS_USED =
{
    indexBattleFlipShotSprites_BloodyWolf,  // 0xc8
    indexBattleFlipShotSprites_Boss,        // 0xc9
    indexBattleFlipShotSprites_Chinta,      // 0xca
    indexBattleFlipShotSprites_MrJustice,   // 0xcb
    indexBattleFlipShotSprites_Salmon,      // 0xcc
    indexBattleFlipShotSprites_Siren,       // 0xcd
    indexBattleFlipShotSprites_Bonus,       // 0xce
};

const auto k_nPalettesPerFlipshotNode = 5;
const auto k_nPalettesPerFlipshotBossNode = 2;
const auto k_nCoreNodesPerFlipshotCollection = 2;

const stPairedPaletteInfo pairFlipShotP1toShared = { k_nPalettesPerFlipshotNode + (k_nPalettesPerFlipshotNode * (k_nCoreNodesPerFlipshotCollection - 1)), PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairFlipShotP2toShared = { k_nPalettesPerFlipshotNode, PalettePairOptions::DisableMultiExport };
const stPairedPaletteInfo pairFlipShotBosstoShared = { k_nPalettesPerFlipshotBossNode, PalettePairOptions::DisableMultiExport };

const sGame_PaletteDataset BattleFlipShot_A_ChintaNemoto_P1[] =
{
    { L"Chinta Nemoto P1", 0x27a5a, 0x27a7a, indexBattleFlipShotSprites_Chinta, 0x00, &pairFlipShotP1toShared },
    { L"Select Portrait P1", 0x27f1a, 0x27f3a, indexBattleFlipShotSprites_Chinta, 0x40 },
    { L"VS Portrait P1", 0x28c5a, 0x28c7a, indexBattleFlipShotSprites_Chinta, 0x41 },
    { L"Win Portrait 1/2 P1", 0x287da, 0x287fa, indexBattleFlipShotSprites_Chinta, 0x42, &pairNext },
    { L"Win Portrait 2/2 P1", 0x2881a, 0x2883a, indexBattleFlipShotSprites_Chinta, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_ChintaNemoto_P2[] =
{
    { L"Chinta Nemoto P2", 0x27a7a, 0x27a9a, indexBattleFlipShotSprites_Chinta, 0x00, &pairFlipShotP2toShared },
    { L"Select Portrait P2", 0x27f3a, 0x27f5a, indexBattleFlipShotSprites_Chinta, 0x40 },
    { L"VS Portrait P2", 0x28c7a, 0x28c9a, indexBattleFlipShotSprites_Chinta, 0x41 },
    { L"Win Portrait 1/2 P2", 0x287fa, 0x2881a, indexBattleFlipShotSprites_Chinta, 0x42, &pairNext },
    { L"Win Portrait 2/2 P2", 0x2883a, 0x2885a, indexBattleFlipShotSprites_Chinta, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_ChintaNemoto_Extras[] =
{
    { L"Shield", 0x27a9a, 0x27aba, indexBattleFlipShotSprites_Chinta, 0x01 },
    { L"Special Attack", 0x27aba, 0x27ada, indexBattleFlipShotSprites_Chinta, 0x08 },
    { L"Targets", 0x27ada, 0x27afa, indexBattleFlipShotSprites_Chinta, 0x09 },
};

const sGame_PaletteDataset BattleFlipShot_A_Siren_P1[] =
{
    { L"Siren P1", 0x27afa, 0x27b1a, indexBattleFlipShotSprites_Siren, 0x00, &pairFlipShotP1toShared },
    { L"Select Portrait P1", 0x27f5a, 0x27f7a, indexBattleFlipShotSprites_Siren, 0x40 },
    { L"VS Portrait P1", 0x28c9a, 0x28cba, indexBattleFlipShotSprites_Siren, 0x41 },
    { L"Win Portrait 1/2 P1", 0x2885a, 0x2887a, indexBattleFlipShotSprites_Siren, 0x42, &pairNext },
    { L"Win Portrait 2/2 P1", 0x2889a, 0x288ba, indexBattleFlipShotSprites_Siren, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_Siren_P2[] =
{
    { L"Siren P2", 0x27b1a, 0x27b3a, indexBattleFlipShotSprites_Siren, 0x00, &pairFlipShotP2toShared },
    { L"Select Portrait P2", 0x27f7a, 0x27f9a, indexBattleFlipShotSprites_Siren, 0x40 },
    { L"VS Portrait P2", 0x28cba, 0x28cda, indexBattleFlipShotSprites_Siren, 0x41 },
    { L"Win Portrait 1/2 P2", 0x2887a, 0x2889a, indexBattleFlipShotSprites_Siren, 0x42, &pairNext },
    { L"Win Portrait 2/2 P2", 0x288ba, 0x288da, indexBattleFlipShotSprites_Siren, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_Siren_Extras[] =
{
    { L"Shield", 0x27b3a, 0x27b5a, indexBattleFlipShotSprites_Siren, 0x01 },
    { L"Special Attack", 0x27b5a, 0x27b7a, indexBattleFlipShotSprites_Siren, 0x08 },
    { L"Targets", 0x27b7a, 0x27b9a, indexBattleFlipShotSprites_Siren, 0x09 },
};

const sGame_PaletteDataset BattleFlipShot_A_Saimon_P1[] =
{
    { L"Saimon P1", 0x27b9a, 0x27bba, indexBattleFlipShotSprites_Salmon, 0x00, &pairFlipShotP1toShared },
    { L"Select Portrait P1", 0x27f9a, 0x27fda, indexBattleFlipShotSprites_Salmon, 0x40 },
    { L"VS Portrait P1", 0x28cda, 0x28cfa, indexBattleFlipShotSprites_Salmon, 0x41 },
    { L"Win Portrait 1/2 P1", 0x288da, 0x288fa, indexBattleFlipShotSprites_Salmon, 0x42, &pairNext },
    { L"Win Portrait 2/2 P1", 0x2891a, 0x2893a, indexBattleFlipShotSprites_Salmon, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_Saimon_P2[] =
{
    { L"Saimon P2", 0x27bba, 0x27bda, indexBattleFlipShotSprites_Salmon, 0x00, &pairFlipShotP2toShared },
    { L"Select Portrait P2", 0x27fda, 0x2801a, indexBattleFlipShotSprites_Salmon, 0x40 },
    { L"VS Portrait P2", 0x28cfa, 0x28d1a, indexBattleFlipShotSprites_Salmon, 0x41 },
    { L"Win Portrait 1/2 P2", 0x288fa, 0x2891a, indexBattleFlipShotSprites_Salmon, 0x42, &pairNext },
    { L"Win Portrait 2/2 P2", 0x2893a, 0x2895a, indexBattleFlipShotSprites_Salmon, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_Saimon_Extras[] =
{
    { L"Shield", 0x27bda, 0x27bfa, indexBattleFlipShotSprites_Salmon, 0x01 },
    { L"Special Attack", 0x27bfa, 0x27c1a, indexBattleFlipShotSprites_Salmon, 0x08 },
    { L"Targets", 0x27c1a, 0x27c3a, indexBattleFlipShotSprites_Salmon, 0x09 },
};

const sGame_PaletteDataset BattleFlipShot_A_BloodyWolf_P1[] =
{
    { L"Bloody Wolf P1", 0x27cda, 0x27cfa, indexBattleFlipShotSprites_BloodyWolf, 0x00, &pairFlipShotP1toShared },
    { L"Select Portrait P1", 0x2805a, 0x2807a, indexBattleFlipShotSprites_BloodyWolf, 0x40 },
    { L"VS Portrait P1", 0x28d5a, 0x28d7a, indexBattleFlipShotSprites_BloodyWolf, 0x41 },
    { L"Win Portrait 1/2 P1", 0x289da, 0x289fa, indexBattleFlipShotSprites_BloodyWolf, 0x42, &pairNext },
    { L"Win Portrait 2/2 P1", 0x28a1a, 0x28a3a, indexBattleFlipShotSprites_BloodyWolf, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_BloodyWolf_P2[] =
{
    { L"Bloody Wolf P2", 0x27cfa, 0x27d1a, indexBattleFlipShotSprites_BloodyWolf, 0x00, &pairFlipShotP2toShared },
    { L"Select Portrait P2", 0x2807a, 0x2809a, indexBattleFlipShotSprites_BloodyWolf, 0x40 },
    { L"VS Portrait P2", 0x28d7a, 0x28d9a, indexBattleFlipShotSprites_BloodyWolf, 0x41 },
    { L"Win Portrait 1/2 P2", 0x289fa, 0x28a1a, indexBattleFlipShotSprites_BloodyWolf, 0x42, &pairNext },
    { L"Win Portrait 2/2 P2", 0x28a3a, 0x28a5a, indexBattleFlipShotSprites_BloodyWolf, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_BloodyWolf_Extras[] =
{
    { L"Shield", 0x27d1a, 0x27d3a, indexBattleFlipShotSprites_BloodyWolf, 0x01 },
    { L"Special Attack", 0x27d3a, 0x27d5a, indexBattleFlipShotSprites_BloodyWolf, 0x08 },
    { L"Targets", 0x27d5a, 0x27d7a, indexBattleFlipShotSprites_BloodyWolf, 0x09 },
};

const sGame_PaletteDataset BattleFlipShot_A_MrJustice_P1[] =
{
    { L"Mr.Justice P1", 0x27c3a, 0x27c5a, indexBattleFlipShotSprites_MrJustice, 0x00, &pairFlipShotP1toShared },
    { L"Select Portrait P1", 0x2801a, 0x2803a, indexBattleFlipShotSprites_MrJustice, 0x40 },
    { L"VS Portrait P1", 0x28d1a, 0x28d3a, indexBattleFlipShotSprites_MrJustice, 0x41 },
    { L"Win Portrait 1/2 P1", 0x2895a, 0x2897a, indexBattleFlipShotSprites_MrJustice, 0x42, &pairNext },
    { L"Win Portrait 2/2 P1", 0x2899a, 0x289ba, indexBattleFlipShotSprites_MrJustice, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_MrJustice_P2[] =
{
    { L"Mr.Justice P2", 0x27c5a, 0x27c7a, indexBattleFlipShotSprites_MrJustice,0x00, &pairFlipShotP2toShared },
    { L"Select Portrait P2", 0x2803a, 0x2805a, indexBattleFlipShotSprites_MrJustice, 0x40 },
    { L"VS Portrait P2", 0x28d3a, 0x28d5a, indexBattleFlipShotSprites_MrJustice, 0x41 },
    { L"Win Portrait 1/2 P2", 0x2897a, 0x2899a, indexBattleFlipShotSprites_MrJustice, 0x42, &pairNext },
    { L"Win Portrait 2/2 P2", 0x289ba, 0x289da, indexBattleFlipShotSprites_MrJustice, 0x43 },
};

const sGame_PaletteDataset BattleFlipShot_A_MrJustice_Extras[] =
{
    { L"Shield", 0x27c7a, 0x27c9a, indexBattleFlipShotSprites_MrJustice, 0x01 },
    { L"Special Attack", 0x27c9a, 0x27cba, indexBattleFlipShotSprites_MrJustice, 0x08 },
    { L"Targets", 0x27cba, 0x27cda, indexBattleFlipShotSprites_MrJustice, 0x09 },
};

const sGame_PaletteDataset BattleFlipShot_A_Boss_Main[] =
{
    { L"Sthenno (Boss)", 0x27d7a, 0x27d9a, indexBattleFlipShotSprites_Boss, 0x00, &pairFlipShotBosstoShared },
    { L"VS Portrait", 0x28D9A, 0x28DBA, indexBattleFlipShotSprites_Boss, 0x41 },
};

const sGame_PaletteDataset BattleFlipShot_A_Boss_Extras[] =
{
    { L"Shield", 0x27dba, 0x27dda, indexBattleFlipShotSprites_Boss, 0x01 },
    { L"Special Attack", 0x27dda, 0x27dfa, indexBattleFlipShotSprites_Boss, 0x08 },
    { L"Targets", 0x27dfa, 0x27e1a, indexBattleFlipShotSprites_Boss, 0x09 },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_Intro[] =
{
    { L"Credits Text", 0x2765a, 0x2767a, indexBattleFlipShotSprites_Bonus, 0x15 },
    { L"VISCO Logo", 0x2777a, 0x2779a, indexBattleFlipShotSprites_Bonus, 0x22 },
    { L"VISCO Text", 0x2775a, 0x2777a, indexBattleFlipShotSprites_Bonus, 0x23 },
    { L"Characters Names", 0x28b7a, 0x28b9a, indexBattleFlipShotSprites_Bonus, 0x13 },
    { L"Characters Information", 0x2945a, 0x2963a, indexBattleFlipShotSprites_Bonus, 0x12 },
    { L"Characters Portraits", 0x2785a, 0x279ba, indexBattleFlipShotSprites_Bonus, 0x14 },
    { L"Title Screen Background", 0x292fa, 0x2933a, indexBattleFlipShotSprites_Bonus, 0x1d },
    { L"Title Screen Logo 1/2", 0x2937a, 0x2939a, indexBattleFlipShotSprites_Bonus, 0x1e, &pairNext },
    { L"Title Screen Logo 2/2", 0x2925a, 0x292ba, indexBattleFlipShotSprites_Bonus, 0x1f },
    { L"Title Screen Numbers", 0x276fa, 0x2771a, indexBattleFlipShotSprites_Bonus, 0x20 },
    { L"Demo Logo", 0x292ba, 0x292fa, indexBattleFlipShotSprites_Bonus, 0x16 },
    { L"Tutorial Board", 0x28e9a, 0x28eba, indexBattleFlipShotSprites_Bonus, 0x21 },
    { L"Small Text", 0x28f1a, 0x28f3a, indexBattleFlipShotSprites_Bonus, 0x1c },
    { L"Ending Names", 0x28b5a, 0x28b7a, indexBattleFlipShotSprites_Bonus, 0x19 },
    { L"Ending You are No.1!!", 0x293ba, 0x293da, indexBattleFlipShotSprites_Bonus, 0x1b },
    { L"Ending Congratulations", 0x293fa, 0x2941a, indexBattleFlipShotSprites_Bonus, 0x17 },
    { L"Ending Cutscene", 0x2935a, 0x2937a, indexBattleFlipShotSprites_Bonus, 0x18 },
    { L"Ending Thank You For Your Playing!!", 0x2933a, 0x2935a, indexBattleFlipShotSprites_Bonus, 0x1a },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_SelectScreen[] =
{
    { L"Select Screen Background", 0x2923a, 0x2925a, indexBattleFlipShotSprites_Bonus, 0x2a },
    { L"Select Screen Text", 0x2809a, 0x280ba, indexBattleFlipShotSprites_Bonus, 0x2f },
    { L"Select Screen Numbers", 0x2767a, 0x2769a, indexBattleFlipShotSprites_Bonus, 0x2e },
    { L"Select Screen Board", 0x28c3a, 0x28c5a, indexBattleFlipShotSprites_Bonus, 0x2b, &pairNext },
    { L"Select Screen Icons", 0x28a5a, 0x28afa, indexBattleFlipShotSprites_Bonus, 0x2d },
    { L"Select Screen Cursor", 0x280ba, 0x280da, indexBattleFlipShotSprites_Bonus, 0x2c },
    { L"Select Screen Cursor Flash", 0x280da, 0x280fa, indexBattleFlipShotSprites_Bonus, 0x2c },
    { L"VS Screen Names", 0x28bba, 0x28bda, indexBattleFlipShotSprites_Bonus, 0x31 },
    { L"VS Screen Logo", 0x28b9a, 0x28bba, indexBattleFlipShotSprites_Bonus, 0x30 },
    { L"Win Screen Logo", 0x2819a, 0x281ba, indexBattleFlipShotSprites_Bonus, 0x33 },
    { L"Win Screen Text", 0x2779a, 0x277ba, indexBattleFlipShotSprites_Bonus, 0x32 },
    { L"Win Screen Numbers", 0x277ba, 0x277da, indexBattleFlipShotSprites_Bonus, 0x34 },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_Ranking[] =
{
    { L"Ranking Background", 0x290ba, 0x290da, indexBattleFlipShotSprites_Bonus, 0x24 },
    { L"Ranking Logo", 0x2905a, 0x2907a, indexBattleFlipShotSprites_Bonus, 0x25 },
    { L"Ranking Text", 0x276da, 0x276fa, indexBattleFlipShotSprites_Bonus, 0x29 },
    { L"Ranking Numbers", 0x277fa, 0x2781a, indexBattleFlipShotSprites_Bonus, 0x27 },
    { L"Ranking Positions", 0x2907a, 0x2909a, indexBattleFlipShotSprites_Bonus, 0x28 },
    { L"Ranking Name Entry", 0x2909a, 0x290ba, indexBattleFlipShotSprites_Bonus, 0x26 },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_Stages[] =
{
    { L"Chinta & Saimon's Stage", 0x2847a, 0x284fa, indexBattleFlipShotSprites_Bonus, 0x37 },
    { L"Siren's Stage", 0x2827a, 0x2833a, indexBattleFlipShotSprites_Bonus, 0x39 },
    { L"Bloody Wolf's Stage", 0x2837a, 0x2843a, indexBattleFlipShotSprites_Bonus, 0x35 },
    { L"Mr.Justice's Stage", 0x2867a, 0x2873a, indexBattleFlipShotSprites_Bonus, 0x38 },
    { L"Boss's Stage", 0x2857a, 0x2863a, indexBattleFlipShotSprites_Bonus, 0x36 },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_IngameExtras[] =
{
    { L"HUD", 0x291fa, 0x2921a, indexBattleFlipShotSprites_Bonus, 0x0b },
    { L"HUD Timer", 0x2769a, 0x276ba, indexBattleFlipShotSprites_Bonus, 0x0e },
    { L"HUD Score", 0x276ba, 0x276da, indexBattleFlipShotSprites_Bonus, 0x0c },
    { L"HUD Text", 0x2771a, 0x2773a, indexBattleFlipShotSprites_Bonus, 0x0d },
    { L"HUD Win Icon", 0x277da, 0x277fa, indexBattleFlipShotSprites_Bonus, 0x0f },
    { L"Ball & Hitsparks", 0x27e5a, 0x27e7a, indexBattleFlipShotSprites_Bonus, 0x0a },
    { L"Targets Points", 0x2941a, 0x2943a, indexBattleFlipShotSprites_Bonus, 0x11 },
    { L"Slide Trail 1", 0x27eba, 0x27eda, indexBattleFlipShotSprites_Bonus, 0x10 },
    { L"Slide Trail 2", 0x27eda, 0x27efa, indexBattleFlipShotSprites_Bonus, 0x10 },
    { L"Slide Trail 3", 0x27efa, 0x27f1a, indexBattleFlipShotSprites_Bonus, 0x10 },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_BigTexts[] =
{
    { L"ROUNDS", 0x291ba, 0x291da, indexBattleFlipShotSprites_Bonus, 0x08 },
    { L"FIGHT", 0x291da, 0x291fa, indexBattleFlipShotSprites_Bonus, 0x04 },
    { L"1PLAYER", 0x2911a, 0x2913a, indexBattleFlipShotSprites_Bonus, 0x00 },
    { L"2PLAYER", 0x2913a, 0x2915a, indexBattleFlipShotSprites_Bonus, 0x01 },
    { L"WIN", 0x290da, 0x290fa, indexBattleFlipShotSprites_Bonus, 0x09 },
    { L"LOSE", 0x290fa, 0x2911a, indexBattleFlipShotSprites_Bonus, 0x06 },
    { L"DRAW", 0x2915a, 0x2917a, indexBattleFlipShotSprites_Bonus, 0x03 },
    { L"NEW CHALLENGER", 0x2917a, 0x2919a, indexBattleFlipShotSprites_Bonus, 0x07 },
    { L"CONTINUE", 0x2919a, 0x291ba, indexBattleFlipShotSprites_Bonus, 0x02 },
    { L"GAME OVER", 0x2921a, 0x2923a, indexBattleFlipShotSprites_Bonus, 0x05 },
};

const sGame_PaletteDataset BattleFlipShot_A_BONUS_Unused[] =
{
    { L"Unused: Wall", 0x293da, 0x293fa, indexBattleFlipShotSprites_Bonus, 0x3e },
    { L"Unused: Floor", 0x28e7a, 0x28e9a, indexBattleFlipShotSprites_Bonus, 0x3b },
    { L"Unused: How to Play", 0x28e5a, 0x28e7a, indexBattleFlipShotSprites_Bonus, 0x3c },
    { L"Unused: Joystick & Buttons", 0x28eba, 0x28f1a, indexBattleFlipShotSprites_Bonus, 0x3d },
    { L"Unused: Character Select", 0x28BDA, 0x28BFA, indexBattleFlipShotSprites_Bonus, 0x3a },
};

const sDescTreeNode BattleFlipShot_A_ChintaNemoto_Collection[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_ChintaNemoto_P1, ARRAYSIZE(BattleFlipShot_A_ChintaNemoto_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_ChintaNemoto_P2, ARRAYSIZE(BattleFlipShot_A_ChintaNemoto_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_ChintaNemoto_Extras, ARRAYSIZE(BattleFlipShot_A_ChintaNemoto_Extras) },
};

const sDescTreeNode BattleFlipShot_A_Siren_Collection[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Siren_P1, ARRAYSIZE(BattleFlipShot_A_Siren_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Siren_P2, ARRAYSIZE(BattleFlipShot_A_Siren_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Siren_Extras, ARRAYSIZE(BattleFlipShot_A_Siren_Extras) },
};

const sDescTreeNode BattleFlipShot_A_Saimon_Collection[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Saimon_P1, ARRAYSIZE(BattleFlipShot_A_Saimon_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Saimon_P2, ARRAYSIZE(BattleFlipShot_A_Saimon_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Saimon_Extras, ARRAYSIZE(BattleFlipShot_A_Saimon_Extras) },
};

const sDescTreeNode BattleFlipShot_A_BloodyWolf_Collection[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BloodyWolf_P1, ARRAYSIZE(BattleFlipShot_A_BloodyWolf_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BloodyWolf_P2, ARRAYSIZE(BattleFlipShot_A_BloodyWolf_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BloodyWolf_Extras, ARRAYSIZE(BattleFlipShot_A_BloodyWolf_Extras) },
};

const sDescTreeNode BattleFlipShot_A_MrJustice_Collection[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_MrJustice_P1, ARRAYSIZE(BattleFlipShot_A_MrJustice_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_MrJustice_P2, ARRAYSIZE(BattleFlipShot_A_MrJustice_P2) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_MrJustice_Extras, ARRAYSIZE(BattleFlipShot_A_MrJustice_Extras) },
};

const sDescTreeNode BattleFlipShot_A_Boss_Collection[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Boss_Main, ARRAYSIZE(BattleFlipShot_A_Boss_Main) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Boss_Extras, ARRAYSIZE(BattleFlipShot_A_Boss_Extras) },
};

const sDescTreeNode BattleFlipShot_A_Bonus_Collection[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_Intro, ARRAYSIZE(BattleFlipShot_A_BONUS_Intro) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_SelectScreen, ARRAYSIZE(BattleFlipShot_A_BONUS_SelectScreen) },
    { L"Ranking", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_Ranking, ARRAYSIZE(BattleFlipShot_A_BONUS_Ranking) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_Stages, ARRAYSIZE(BattleFlipShot_A_BONUS_Stages) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_IngameExtras, ARRAYSIZE(BattleFlipShot_A_BONUS_IngameExtras) },
    { L"Big Texts", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_BigTexts, ARRAYSIZE(BattleFlipShot_A_BONUS_BigTexts) },

    { L"Unused", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BONUS_Unused, ARRAYSIZE(BattleFlipShot_A_BONUS_Unused) },
};

// We use a cross-node paired palette using a shared element, so use a compile-time check to help protect against math errors
static_assert(ARRAYSIZE(BattleFlipShot_A_ChintaNemoto_P1) == k_nPalettesPerFlipshotNode, "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_Siren_P1)        == k_nPalettesPerFlipshotNode, "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_Saimon_P1)       == k_nPalettesPerFlipshotNode, "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_BloodyWolf_P1)   == k_nPalettesPerFlipshotNode, "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_MrJustice_P1)    == k_nPalettesPerFlipshotNode, "Please update the pairing logic for Battle Flip Shot.");

static_assert(ARRAYSIZE(BattleFlipShot_A_Boss_Main)       == k_nPalettesPerFlipshotBossNode, "Please update the pairing logic for Battle Flip Shot.");

// +1 for the Shared node.
static_assert(ARRAYSIZE(BattleFlipShot_A_ChintaNemoto_Collection) == (k_nCoreNodesPerFlipshotCollection + 1), "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_Siren_Collection)        == (k_nCoreNodesPerFlipshotCollection + 1), "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_Saimon_Collection)       == (k_nCoreNodesPerFlipshotCollection + 1), "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_BloodyWolf_Collection)   == (k_nCoreNodesPerFlipshotCollection + 1), "Please update the pairing logic for Battle Flip Shot.");
static_assert(ARRAYSIZE(BattleFlipShot_A_MrJustice_Collection)    == (k_nCoreNodesPerFlipshotCollection + 1), "Please update the pairing logic for Battle Flip Shot.");

const sDescTreeNode BattleFlipShot_A_UNITS[] =
{
    { L"Chinta Nemoto", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_ChintaNemoto_Collection, ARRAYSIZE(BattleFlipShot_A_ChintaNemoto_Collection) },
    { L"Siren", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Siren_Collection, ARRAYSIZE(BattleFlipShot_A_Siren_Collection) },
    { L"Saimon", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Saimon_Collection, ARRAYSIZE(BattleFlipShot_A_Saimon_Collection) },
    { L"Bloody Wolf", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_BloodyWolf_Collection, ARRAYSIZE(BattleFlipShot_A_BloodyWolf_Collection) },
    { L"Mr. Justice", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_MrJustice_Collection, ARRAYSIZE(BattleFlipShot_A_MrJustice_Collection) },
    { L"Sthenno (Boss)", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Boss_Collection, ARRAYSIZE(BattleFlipShot_A_Boss_Collection) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)BattleFlipShot_A_Bonus_Collection, ARRAYSIZE(BattleFlipShot_A_Bonus_Collection) },
};
