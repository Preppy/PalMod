#pragma once
#include "SF2HF_A_DEF.h"

const std::vector<uint16_t> SF2WW_A_IMGIDS_USED =
{
    indexSF2Sprites_Ryu,
    indexSF2Sprites_EHonda,
    indexSF2Sprites_Blanka,
    indexSF2Sprites_Guile,
    indexSF2Sprites_Ken,
    indexSF2Sprites_ChunLi,
    indexSF2Sprites_Zangief,
    indexSF2Sprites_Dhalsim,
    indexSF2Sprites_Bison,
    indexSF2Sprites_Sagat,
    indexSF2Sprites_Balrog,
    indexSF2Sprites_Vega,
    indexSF2Sprites_Bonus,
    indexSF2HFSprites_Stages,

    indexSF2Sprites_Stages, // 0x12
};

const sGame_PaletteDataset SF2WW_A_RYU_09_NODE[] =
{
    { L"Ryu", 0xacd8, 0xacf8, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_EHONDA_09_NODE[] =
{
    { L"E.Honda", 0xacf8, 0xad18, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_BLANKA_09_NODE[] =
{
    { L"Blanka", 0xad18, 0xad38, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_GUILE_09_NODE[] =
{
    { L"Guile", 0xad38, 0xad58, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_KEN_09_NODE[] =
{
    { L"Ken", 0xad58, 0xad78, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_CHUNLI_09_NODE[] =
{
    { L"Chun-Li", 0xad78, 0xad98, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_ZANGIEF_09_NODE[] =
{
    { L"Zangief", 0xad98, 0xadb8, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SF2WW_A_DHALSIM_09_NODE[] =
{
    { L"Dhalsim", 0xadb8, 0xadd8, indexSF2Sprites_Dhalsim, 0x00 },
};

const sDescTreeNode SF2WW_A_RYU_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_RYU_09_NODE, ARRAYSIZE(SF2WW_A_RYU_09_NODE) },
};

const sDescTreeNode SF2WW_A_EHONDA_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_EHONDA_09_NODE, ARRAYSIZE(SF2WW_A_EHONDA_09_NODE) },
};

const sDescTreeNode SF2WW_A_BLANKA_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_BLANKA_09_NODE, ARRAYSIZE(SF2WW_A_BLANKA_09_NODE) },
};

const sDescTreeNode SF2WW_A_GUILE_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_GUILE_09_NODE, ARRAYSIZE(SF2WW_A_GUILE_09_NODE) },
};

const sDescTreeNode SF2WW_A_KEN_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_KEN_09_NODE, ARRAYSIZE(SF2WW_A_KEN_09_NODE) },
};

const sDescTreeNode SF2WW_A_CHUNLI_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_CHUNLI_09_NODE, ARRAYSIZE(SF2WW_A_CHUNLI_09_NODE) },
};

const sDescTreeNode SF2WW_A_ZANGIEF_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_ZANGIEF_09_NODE, ARRAYSIZE(SF2WW_A_ZANGIEF_09_NODE) },
};

const sDescTreeNode SF2WW_A_DHALSIM_09_COLLECTION[] =
{
    { L"Palettes",         DESC_NODETYPE_TREE, (void*)SF2WW_A_DHALSIM_09_NODE, ARRAYSIZE(SF2WW_A_DHALSIM_09_NODE) },
};

const sGame_PaletteDataset SF2WW_A_RYU_PORTRAITS_NODE[] =
{
    { L"Ryu", 0x9400 - 0x02, 0x9420 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_EHONDA_PORTRAITS_NODE[] =
{
    { L"E.Honda", 0x9420 - 0x02, 0x9440 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_BLANKA_PORTRAITS_NODE[] =
{
    { L"Blanka", 0x9440 - 0x02, 0x9460 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_GUILE_PORTRAITS_NODE[] =
{
    { L"Guile", 0x9460 - 0x02, 0x9480 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_KEN_PORTRAITS_NODE[] =
{
    { L"Ken", 0x9480 - 0x02, 0x94a0 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_CHUNLI_PORTRAITS_NODE[] =
{
    { L"Chun-Li", 0x94a0 - 0x02, 0x94c0 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_ZANGIEF_PORTRAITS_NODE[] =
{
    { L"Zangief", 0x94c0 - 0x02, 0x94e0 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_DHALSIM_PORTRAITS_NODE[] =
{
    { L"Dhalsim 1/2", 0x94e0 - 0x02, 0x9500 - 0x02 },
    { L"Dhalsim 2/2", 0x9580 - 0x02, 0x95a0 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_DICTATOR_PORTRAITS_NODE[] =
{
    { L"Dictator 1/2", 0x9500 - 0x02, 0x9520 - 0x02 },
    { L"Dictator 2/2", 0x95c0 - 0x02, 0x95e0 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_BOXER_PORTRAITS_NODE[] =
{
    { L"Boxer", 0x9540 - 0x02, 0x9560 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_SAGAT_PORTRAITS_NODE[] =
{
    { L"Sagat", 0x9520 - 0x02, 0x9540 - 0x02 },
};

const sGame_PaletteDataset SF2WW_A_CLAW_PORTRAITS_NODE[] =
{
    { L"Claw", 0x9560 - 0x02, 0x9580 - 0x02 },
};

const sDescTreeNode SF2WW_A_10_PORTRAITS_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2WW_A_BLANKA_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_BLANKA_PORTRAITS_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2WW_A_CHUNLI_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_CHUNLI_PORTRAITS_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2WW_A_DHALSIM_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_DHALSIM_PORTRAITS_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2WW_A_EHONDA_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_EHONDA_PORTRAITS_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2WW_A_GUILE_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_GUILE_PORTRAITS_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2WW_A_KEN_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_KEN_PORTRAITS_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2WW_A_RYU_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_RYU_PORTRAITS_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2WW_A_ZANGIEF_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_ZANGIEF_PORTRAITS_NODE) },

    { L"Boxer",      DESC_NODETYPE_TREE, (void*)SF2WW_A_BOXER_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_BOXER_PORTRAITS_NODE) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2WW_A_CLAW_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_CLAW_PORTRAITS_NODE) },
    { L"Sagat",      DESC_NODETYPE_TREE, (void*)SF2WW_A_SAGAT_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_SAGAT_PORTRAITS_NODE) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2WW_A_DICTATOR_PORTRAITS_NODE, ARRAYSIZE(SF2WW_A_DICTATOR_PORTRAITS_NODE) },
};

const sGame_PaletteDataset SF2WW_A_10_SELECTSCREEN_NODE[] =
{
    { L"Select Portraits",      0xe41e, 0xe51e,  indexSF2Sprites_Bonus, 0x26 },
    { L"World Map Background",  0xe51e, 0xe5de, indexSF2Sprites_Bonus, 0x25 },
};

const sDescTreeNode SF2WW_A_10_SELECTSCREEN_COLLECTION[] =
{
    { L"Select Screen",         DESC_NODETYPE_TREE, (void*)SF2WW_A_10_SELECTSCREEN_NODE, ARRAYSIZE(SF2WW_A_10_SELECTSCREEN_NODE) },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_BLANKA_NODE[] =
{
    { L"Crowd & Stump", 0x2e1fe - 0x22DC6, 0x2e21e - 0x22DC6, indexSF2HFSprites_Stages, 0x4a, &pairFullyLinkedNode },
    { L"Crowd & Right Hut", 0x2e21e - 0x22DC6, 0x2e23e - 0x22DC6, indexSF2HFSprites_Stages, 0x4b },
    { L"Crowd", 0x2e23e - 0x22DC6, 0x2e25e - 0x22DC6, indexSF2HFSprites_Stages, 0x4c },
    { L"Fish", 0x2e25e - 0x22DC6, 0x2e27e - 0x22DC6, indexSF2HFSprites_Stages, 0x4d },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_BOXER_NODE[] =
{
    { L"Show Girls", 0x2f1be - 0x22DC6, 0x2f27e - 0x22DC6, indexSF2Sprites_Stages, 0x1b },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_CHUNLI_NODE[] =
{
    // These were redrawn for CE/HF evidently
    { L"Blue Biker", 0x2e81e - 0x22DC6, 0x2e83e - 0x22DC6, indexSF2Sprites_Stages, -1, &pairFullyLinkedNode },
    { L"Green Biker", 0x2e83e - 0x22DC6, 0x2e85e - 0x22DC6 },
    { L"Red Biker", 0x2e85e - 0x22DC6, 0x2e87e - 0x22DC6 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_DICTATOR_NODE[] =
{
    { L"Statues (Destroyed)", 0x2ee5e - 0x22DC6, 0x2ee7e - 0x22DC6, indexSF2HFSprites_Stages, 0x55 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_EHONDA_NODE[] =
{
    { L"Left Side Wall", 0x2dfde - 0x22DC6, 0x2dffe - 0x22DC6, indexSF2HFSprites_Stages, 0x13, &pairNext3Palettes },
    { L"Water Droplets & Bathtub Overspill", 0x2dffe - 0x22DC6, 0x2e01e - 0x22DC6, indexSF2HFSprites_Stages, 0x14 },
    { L"Lantern", 0x2e05e - 0x22DC6, 0x2e07e - 0x22DC6, indexSF2HFSprites_Stages, 0x16 },
    { L"Lantern After KO", 0x2e01e - 0x22DC6, 0x2e05e - 0x22DC6, indexSF2HFSprites_Stages, 0x17 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_GUILE_NODE[] =
{
    { L"Crates", 0x2e41e - 0x22DC6, 0x2e43e - 0x22DC6, indexSF2HFSprites_Stages, 0x30, &pairFullyLinkedNode },
    { L"Jet", 0x2e43e - 0x22DC6, 0x2e47e - 0x22DC6, indexSF2HFSprites_Stages, 0x2f },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_KEN_NODE[] =
{
    { L"Foreground Bollards", 0x2e5fe - 0x22DC6, 0x2e61e - 0x22DC6, indexSF2HFSprites_Stages, 0x46 },
    { L"Background Bollards & Steamboat", 0x2e63e - 0x22DC6, 0x2e65e - 0x22DC6, indexSF2HFSprites_Stages, 0x45 },
    { L"Drum (maybe?)", 0x2e65e - 0x22DC6, 0x2e67e - 0x22DC6, indexSF2HFSprites_Stages, 0x47 },
    { L"Drum (Destroyed)", 0x2e59e - 0x22DC6, 0x2e5be - 0x22DC6, indexSF2HFSprites_Stages, 0x48 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_RYU_NODE[] =
{
    { L"Intermediate Rooftop & Birds", 0x2de1e - 0x22DC6, 0x2de3e - 0x22DC6, indexSF2HFSprites_Stages, 0x03, &pairFullyLinkedNode },
    { L"Background Building", 0x2de5e - 0x22DC6, 0x2de7e - 0x22DC6, indexSF2HFSprites_Stages, 0x01 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_ZANGIEF_NODE[] =
{
    { L"Chain", 0x2e9de - 0x22DC6, 0x2e9fe - 0x22DC6, indexSF2HFSprites_Stages, 0x69 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_BONUSCAR_NODE[] =
{
    { L"Car 1", 0x2f5be - 0x22DC6, 0x2f63e - 0x22DC6, indexSF2HFSprites_Stages, 0x4e, &pairFullyLinkedNode },
    { L"Car 2", 0x2f65e - 0x22DC6, 0x2f67e - 0x22DC6, indexSF2HFSprites_Stages, 0x4f },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_BONUSCASKS_NODE[] =
{
    { L"P2 Scoreboard", 0x2f7fe - 0x22DC6, 0x2f81e - 0x22DC6, indexSF2HFSprites_Stages, 0x50, &pairFullyLinkedNode },
    { L"Scoreboard Tallies", 0x2f81e - 0x22DC6, 0x2f83e - 0x22DC6, indexSF2HFSprites_Stages, 0x51 },
    { L"Rolling Casks", 0x2f85e - 0x22DC6, 0x2f87e - 0x22DC6, indexSF2HFSprites_Stages, 0x52 },
};

const sGame_PaletteDataset SF2WW_A_09_STAGES_BONUSDRUMS_NODE[] =
{
    { L"Drums", 0x2fa5e - 0x22DC6, 0x2fa7e - 0x22DC6, indexSF2HFSprites_Stages, 0x53, &pairFullyLinkedNode },
    { L"Flames", 0x2fa3e - 0x22DC6, 0x2fa5e - 0x22DC6, indexSF2HFSprites_Stages, 0x54 },
};

const sDescTreeNode SF2WW_A_09_STAGES_COLLECTION[] =
{
    { L"Blanka",                DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_BLANKA_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_BLANKA_NODE) },
    { L"Boxer",                 DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_BOXER_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_BOXER_NODE) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_CHUNLI_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_CHUNLI_NODE) },
    { L"Dictator",              DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_DICTATOR_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_DICTATOR_NODE) },
    { L"E.Honda",               DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_EHONDA_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_EHONDA_NODE) },
    { L"Guile",                 DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_GUILE_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_GUILE_NODE) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_KEN_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_KEN_NODE) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_RYU_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_RYU_NODE) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_ZANGIEF_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_ZANGIEF_NODE) },

    { L"Bonus Stage (Car)",     DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_BONUSCAR_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_BONUSCAR_NODE) },
    { L"Bonus Stage (Casks)",   DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_BONUSCASKS_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_BONUSCASKS_NODE) },
    { L"Bonus Stage (Drums)",   DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_BONUSDRUMS_NODE, ARRAYSIZE(SF2WW_A_09_STAGES_BONUSDRUMS_NODE) },
};

const sGame_PaletteDataset SF2WW_A_09_BONUS_OPENING_NODE[] =
{
    { L"Intro Characters",          0x2fcfe - 0x22DC6, 0x2fe3e - 0x22DC6, indexSF2Sprites_Bonus, 0x2d },
};

const sGame_PaletteDataset SF2WW_A_09_BONUS_TITLE_NODE[] =
{
    // This preview is inaccurate
    { L"Street Fighter II",        0x2fe5e - 0x22DC6, 0x2fe7e - 0x22DC6, indexSF2Sprites_Bonus, 0x2b },
};

const sGame_PaletteDataset SF2WW_A_09_BONUS_CSELECT_NODE[] =
{
    { L"Character Select Extras",   0x3001e - 0x22DC6, 0x3007e - 0x22DC6, indexSF2Sprites_Bonus, 0x24 },
};

const sGame_PaletteDataset SF2WW_A_09_BONUS_IN_GAME_NODE[] =
{
    // Insert Coin, Copyright, Push Start, Continue?
    // This preview is inaccurate
    { L"Insert Coin Text",                      0x2da7e - 0x22DC6, 0x2da9e - 0x22DC6, indexSF2Sprites_Bonus, 0x2e },
    // This preview is inaccurate
    { L"HUD and Text",                          0x2dbfe - 0x22DC6, 0x2dc3e - 0x22DC6, indexSF2Sprites_Bonus, 0x2c },
    { L"In-Game FX - Black",                    0x2dbbe - 0x22DC6, 0x2dbde - 0x22DC6, indexSF2Sprites_Bonus, 0x29, &pairNextAndNext },
    // Dust, Vomit, Hit Sparks, Dizzy Stars, Rocks (Chun-Li & Sagat Stage)
    { L"In-Game FX - Dust and Green Hitsparks", 0x2dbde - 0x22DC6, 0x2dbfe - 0x22DC6, indexSF2Sprites_Bonus, 0x28 },
    // HUD Text, Hit Sparks, Dizzy Stars, Dizzy Birds, Hadouken, Hadouken Explosion, Kikouken Explosion, Sonic Boom Explosion, Glass Shards (Car Bonus Stage), Drum Fire on Hit (Drum Bonus Stage)
    // Vomit, Yoga Fire, Yoga Flame, Hit by Yoga Fire, Hit by Yoga Flame, Hit by Electricity, Tiger Shot Explosion, Car Fluids (Car Bonus Stage)
    { L"In-Game FX - Various",                  0x2dc3e - 0x22DC6, 0x2dc7e - 0x22DC6, indexSF2Sprites_Bonus, 0x2a },
};

const sDescTreeNode SF2WW_A_09_BONUS_COLLECTION[] =
{
    { L"Opening Cinematic", DESC_NODETYPE_TREE, (void*)SF2WW_A_09_BONUS_OPENING_NODE, ARRAYSIZE(SF2WW_A_09_BONUS_OPENING_NODE) },
    { L"Title Screen",      DESC_NODETYPE_TREE, (void*)SF2WW_A_09_BONUS_TITLE_NODE, ARRAYSIZE(SF2WW_A_09_BONUS_TITLE_NODE) },
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)SF2WW_A_09_BONUS_CSELECT_NODE, ARRAYSIZE(SF2WW_A_09_BONUS_CSELECT_NODE) },
    { L"In-Game Palettes",  DESC_NODETYPE_TREE, (void*)SF2WW_A_09_BONUS_IN_GAME_NODE, ARRAYSIZE(SF2WW_A_09_BONUS_IN_GAME_NODE) },
};

const sGame_PaletteDataset SF2WW_A_BONUS10_NODE[] =
{
    { L"Opening Cinematic - Sky", 0x901e, 0x903e },
    { L"Opening Cinematic - Skyscraper", 0xdffe, 0xe07e },
    { L"Title Screen - Push Start & Credit Text", 0x3ffe, 0x401e, indexSF2Sprites_Bonus, 0x2e },
    { L"Revision Text", 0x4dbe, 0x4dde },
    { L"Copyright Warning Text", 0x4bfe, 0x4c1e },
};

const sDescTreeNode SF2WW_A_10_BONUS_COLLECTION[] =
{
    // NOTE: This collection is used for both CE and HF
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SF2WW_A_BONUS10_NODE, ARRAYSIZE(SF2WW_A_BONUS10_NODE) },
};

const sDescTreeNode SF2WW_A_UNITS_09[] =
{
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2WW_A_RYU_09_COLLECTION, ARRAYSIZE(SF2WW_A_RYU_09_COLLECTION) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2WW_A_EHONDA_09_COLLECTION, ARRAYSIZE(SF2WW_A_EHONDA_09_COLLECTION) },
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2WW_A_BLANKA_09_COLLECTION, ARRAYSIZE(SF2WW_A_BLANKA_09_COLLECTION) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2WW_A_GUILE_09_COLLECTION, ARRAYSIZE(SF2WW_A_GUILE_09_COLLECTION) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2WW_A_KEN_09_COLLECTION, ARRAYSIZE(SF2WW_A_KEN_09_COLLECTION) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2WW_A_CHUNLI_09_COLLECTION, ARRAYSIZE(SF2WW_A_CHUNLI_09_COLLECTION) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2WW_A_ZANGIEF_09_COLLECTION, ARRAYSIZE(SF2WW_A_ZANGIEF_09_COLLECTION) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2WW_A_DHALSIM_09_COLLECTION, ARRAYSIZE(SF2WW_A_DHALSIM_09_COLLECTION) },

    { L"Stages",    DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_COLLECTION, ARRAYSIZE(SF2WW_A_09_STAGES_COLLECTION) },

    // This is an offset version of the HF ROM 22 Bonus collection, except minus Bison
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2WW_A_09_BONUS_COLLECTION, ARRAYSIZE(SF2WW_A_09_BONUS_COLLECTION) },
};

const sDescTreeNode SF2WW_A_UNITS_10[] =
{
    // This ROM loosely maps to CE ROM 21 and the HF ROM 21, except they're one player only more or less
    { L"Portraits",         DESC_NODETYPE_TREE, (void*)SF2WW_A_10_PORTRAITS_COLLECTION, ARRAYSIZE(SF2WW_A_10_PORTRAITS_COLLECTION) },
    { L"Select Screen",     DESC_NODETYPE_TREE, (void*)SF2WW_A_10_SELECTSCREEN_COLLECTION, ARRAYSIZE(SF2WW_A_10_SELECTSCREEN_COLLECTION) },

    // NOTE: These are being picked up from the Hyper Fighting definitions as they are identical
    { L"Stages",         DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_COLLECTION,  ARRAYSIZE(SF2HF_A_STAGES21_COLLECTION) },
    // NOTE: These are being picked up from the Hyper Fighting definitions as they are identical
    { L"Endings",        DESC_NODETYPE_TREE, (void*)SF2HF_A_ENDINGS21_COLLECTION, ARRAYSIZE(SF2HF_A_ENDINGS21_COLLECTION) },

    // This is a very slight modification of the SF2HF 21 Bonus collection
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2WW_A_10_BONUS_COLLECTION, ARRAYSIZE(SF2WW_A_10_BONUS_COLLECTION) },
};

const sDescTreeNode SF2WW_A_UNITS_MONO[] =
{
//ROM09
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2WW_A_RYU_09_COLLECTION, ARRAYSIZE(SF2WW_A_RYU_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2WW_A_EHONDA_09_COLLECTION, ARRAYSIZE(SF2WW_A_EHONDA_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2WW_A_BLANKA_09_COLLECTION, ARRAYSIZE(SF2WW_A_BLANKA_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2WW_A_GUILE_09_COLLECTION, ARRAYSIZE(SF2WW_A_GUILE_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2WW_A_KEN_09_COLLECTION, ARRAYSIZE(SF2WW_A_KEN_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2WW_A_CHUNLI_09_COLLECTION, ARRAYSIZE(SF2WW_A_CHUNLI_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2WW_A_ZANGIEF_09_COLLECTION, ARRAYSIZE(SF2WW_A_ZANGIEF_09_COLLECTION), 0x6fee5ba - 0xacf8 },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2WW_A_DHALSIM_09_COLLECTION, ARRAYSIZE(SF2WW_A_DHALSIM_09_COLLECTION), 0x6fee5ba - 0xacf8 },

    { L"Stages (ROM09)",    DESC_NODETYPE_TREE, (void*)SF2WW_A_09_STAGES_COLLECTION, ARRAYSIZE(SF2WW_A_09_STAGES_COLLECTION), 0x6fee5ba - 0xacf8 },

    // This is an offset version of the HF ROM 22 Bonus collection, except minus Bison
    { L"Bonus Palettes (ROM09)", DESC_NODETYPE_TREE, (void*)SF2WW_A_09_BONUS_COLLECTION, ARRAYSIZE(SF2WW_A_09_BONUS_COLLECTION), 0x6fee5ba - 0xacf8 },

//ROM10
    // This ROM loosely maps to CE ROM 21 and the HF ROM 21, except they're one player only more or less
    { L"Portraits",         DESC_NODETYPE_TREE, (void*)SF2WW_A_10_PORTRAITS_COLLECTION, ARRAYSIZE(SF2WW_A_10_PORTRAITS_COLLECTION), 0x702ccdc - 0x943e },
    { L"Select Screen",     DESC_NODETYPE_TREE, (void*)SF2WW_A_10_SELECTSCREEN_COLLECTION, ARRAYSIZE(SF2WW_A_10_SELECTSCREEN_COLLECTION), 0x702ccdc - 0x943e },

    // NOTE: These are being picked up from the Hyper Fighting definitions as they are identical
    { L"Stages (ROM10)",    DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_COLLECTION,  ARRAYSIZE(SF2HF_A_STAGES21_COLLECTION), 0x702ccdc - 0x943e },
    // NOTE: These are being picked up from the Hyper Fighting definitions as they are identical
    { L"Endings",           DESC_NODETYPE_TREE, (void*)SF2HF_A_ENDINGS21_COLLECTION, ARRAYSIZE(SF2HF_A_ENDINGS21_COLLECTION), 0x702ccdc - 0x943e },

    // This is a very slight modification of the SF2HF 21 Bonus collection
    { L"Bonus Palettes (ROM10)", DESC_NODETYPE_TREE, (void*)SF2WW_A_10_BONUS_COLLECTION, ARRAYSIZE(SF2WW_A_10_BONUS_COLLECTION), 0x702ccdc - 0x943e },
};
