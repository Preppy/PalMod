#pragma once

const UINT16 SF2HF_A_IMGIDS_USED[] =
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
};

const sGame_PaletteDataset SF2HF_A_RYU_NORMAL_NODE[] =
{
    { L"Ryu", 0x2daa0 - 0x02, 0x2dac0 - 0x02, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SF2HF_A_RYU_START_NODE[] =
{
    { L"Ryu", 0x1e6a8 - 0x02, 0x1e6c8 - 0x02, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_NORMAL_NODE[] =
{
    { L"E.Honda", 0x2dac0 - 0x02, 0x2dae0 - 0x02, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_START_NODE[] =
{
    { L"E.Honda", 0x1e6ca - 0x02, 0x1e6ea - 0x02, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_NORMAL_NODE[] =
{
    { L"Blanka", 0x2dae0 - 0x02, 0x2db00 - 0x02, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_START_NODE[] =
{
    { L"Blanka", 0x1e6ec - 0x02, 0x1e70c - 0x02, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SF2HF_A_GUILE_NORMAL_NODE[] =
{
    { L"Guile", 0x2db00 - 0x02, 0x2db20 - 0x02, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SF2HF_A_GUILE_START_NODE[] =
{
    { L"Guile", 0x1e70e - 0x02, 0x1e72e - 0x02, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SF2HF_A_KEN_NORMAL_NODE[] =
{
    { L"Ken", 0x2db20 - 0x02, 0x2db40 - 0x02, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SF2HF_A_KEN_START_NODE[] =
{
    { L"Ken", 0x1e730 - 0x02, 0x1e750 - 0x02, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_NORMAL_NODE[] =
{
    { L"Chun-Li", 0x2db40 - 0x02, 0x2db60 - 0x02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_START_NODE[] =
{
    { L"Chun-Li", 0x1e752 - 0x02, 0x1e772 - 0x02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_NORMAL_NODE[] =
{
    { L"Zangief", 0x2db60 - 0x02, 0x2db80 - 0x02, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_START_NODE[] =
{
    { L"Zangief", 0x1e774 - 0x02, 0x1e794 - 0x02, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_NORMAL_NODE[] =
{
    { L"Dhalsim", 0x2db80 - 0x02, 0x2dbA0 - 0x02, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_START_NODE[] =
{
    { L"Dhalsim", 0x1e796 - 0x02, 0x1e7b6 - 0x02, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_NORMAL_NODE[] =
{
    { L"Dictator", 0x1E7B8 - 0x02, 0x1e8b8 - 0x02, indexSF2Sprites_Bison, 0x8 },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_START_NODE[] =
{
    { L"Dictator", 0x1E960 - 0x02, 0x1ea60 - 0x02, indexSF2Sprites_Bison, 0x8 },
};

const sGame_PaletteDataset SF2HF_A_SAGAT_NORMAL_NODE[] =
{
    { L"Sagat", 0x1ea62 - 0x02, 0x1ea82 - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SF2HF_A_SAGAT_START_NODE[] =
{
    { L"Sagat", 0x1e8ba - 0x02, 0x1e8da - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SF2HF_A_BOXER_NORMAL_NODE[] =
{
    { L"Boxer", 0x1eac4 - 0x02, 0x1eae4 - 0x02, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SF2HF_A_BOXER_START_NODE[] =
{
    { L"Boxer", 0x1E91c - 0x02, 0x1E93c - 0x02, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SF2HF_A_CLAW_NORMAL_NODE[] =
{
    { L"Claw", 0x1eae6 - 0x02, 0x1eb06 - 0x02, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SF2HF_A_CLAW_START_NODE[] =
{
    { L"Claw", 0x1E93e - 0x02, 0x1E95e - 0x02, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SF2HF_A_RYU_PORTRAITS_NODE[] =
{
    { L"Ryu Normal 1/2", 0x9600 - 0x02, 0x9620 - 0x02, indexSF2Sprites_Bonus, 0x16, &pairNext },
    { L"Ryu Normal 2/2", 0x95a0 - 0x02, 0x95c0 - 0x02, indexSF2Sprites_Bonus, 0x16 },
    { L"Ryu Start", 0x9400 - 0x02, 0x9420 - 0x02, indexSF2Sprites_Bonus, 0x16 },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_PORTRAITS_NODE[] =
{
    { L"E.Honda Normal", 0x9620 - 0x02, 0x9640 - 0x02, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda Start", 0x9420 - 0x02, 0x9440 - 0x02, indexSF2Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_PORTRAITS_NODE[] =
{
    { L"Blanka Normal 1/2", 0x9640 - 0x02, 0x9660 - 0x02, indexSF2Sprites_Bonus, 0x03, &pairNext },
    { L"Blanka Normal 2/2", 0x97E0 - 0x02, 0x9800 - 0x02, indexSF2Sprites_Bonus, 0x03 },
    { L"Blanka Start", 0x9440 - 0x02, 0x9460 - 0x02, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_PORTRAITS_NODE[] =
{
    { L"Guile Normal", 0x9660 - 0x02, 0x9680 - 0x02, indexSF2Sprites_Bonus, 0x12 },
    { L"Guile Start", 0x9460 - 0x02, 0x9480 - 0x02, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset SF2HF_A_KEN_PORTRAITS_NODE[] =
{
    { L"Ken Normal", 0x9680 - 0x02, 0x96a0 - 0x02, indexSF2Sprites_Bonus, 0x14 },
    { L"Ken Start", 0x9480 - 0x02, 0x94a0 - 0x02, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_PORTRAITS_NODE[] =
{
    { L"Chun-Li Normal", 0x96a0 - 0x02, 0x96c0 - 0x02, indexSF2Sprites_Bonus, 0x06 },
    { L"Chun-Li Start", 0x94a0 - 0x02, 0x94c0 - 0x02, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_PORTRAITS_NODE[] =
{
    { L"Zangief Normal 1/2", 0x96c0 - 0x02, 0x96e0 - 0x02, indexSF2Sprites_Bonus, 0x1a, &pairNext },
    { L"Zangief Normal 2/2", 0x95E0 - 0x02, 0x9600 - 0x02, indexSF2Sprites_Bonus, 0x1a },
    { L"Zangief Start", 0x94c0 - 0x02, 0x94e0 - 0x02, indexSF2Sprites_Bonus, 0x1a },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_PORTRAITS_NODE[] =
{
    { L"Dhalsim Normal 1/2", 0x96e0 - 0x02, 0x9700 - 0x02, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim Normal 2/2", 0x9780 - 0x02, 0x97a0 - 0x02, indexSF2Sprites_Bonus, 0x0b },
    { L"Dhalsim Start 1/2", 0x94e0 - 0x02, 0x9500 - 0x02, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim Start 2/2", 0x9580 - 0x02, 0x95a0 - 0x02, indexSF2Sprites_Bonus, 0x0b },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_PORTRAITS_NODE[] =
{
    { L"Dictator Normal 1/2", 0x9700 - 0x02, 0x9720 - 0x02, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"Dictator Normal 2/2", 0x97c0 - 0x02, 0x97E0 - 0x02, indexSF2Sprites_Bonus, 0x0e },
    { L"Dictator Start 1/2", 0x9500 - 0x02, 0x9520 - 0x02, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"Dictator Start 2/2", 0x95c0 - 0x02, 0x95e0 - 0x02, indexSF2Sprites_Bonus, 0x0e },
};

const sGame_PaletteDataset SF2HF_A_BOXER_PORTRAITS_NODE[] =
{
    { L"Boxer Normal 1/2", 0x9740 - 0x02, 0x9760 - 0x02, indexSF2Sprites_Bonus, 0x05, &pairNext },
    { L"Boxer Normal 2/2", 0x97a0 - 0x02, 0x97c0 - 0x02, indexSF2Sprites_Bonus, 0x05 },
    { L"Boxer Start", 0x9540 - 0x02, 0x9560 - 0x02, indexSF2Sprites_Bonus, 0x05 },
};

const sGame_PaletteDataset SF2HF_A_SAGAT_PORTRAITS_NODE[] =
{
    { L"Sagat Normal", 0x9720 - 0x02, 0x9740 - 0x02, indexSF2Sprites_Bonus, 0x19 },
    { L"Sagat Start", 0x9520 - 0x02, 0x9540 - 0x02, indexSF2Sprites_Bonus, 0x19 },
};

const sGame_PaletteDataset SF2HF_A_CLAW_PORTRAITS_NODE[] =
{
    { L"Claw Normal", 0x9760 - 0x02, 0x9780 - 0x02, indexSF2Sprites_Bonus, 0x08 },
    { L"Claw Start", 0x9560 - 0x02, 0x9580 - 0x02, indexSF2Sprites_Bonus, 0x08 },
};

const sGame_PaletteDataset SF2HF_A_RYU_SELSCREEN_NODE[] =
{
    { L"Ryu", 0xe420 - 0x02, 0xe440 - 0x02, indexSF2Sprites_Bonus, 0x17 },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_SELSCREEN_NODE[] =
{
    { L"E.Honda", 0xe440 - 0x02, 0xe460 - 0x02, indexSF2Sprites_Bonus, 0x11 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_SELSCREEN_NODE[] =
{
    { L"Blanka", 0xe460 - 0x02, 0xe480 - 0x02, indexSF2Sprites_Bonus, 0x04 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_SELSCREEN_NODE[] =
{
    { L"Guile", 0xe480 - 0x02, 0xe4a0 - 0x02, indexSF2Sprites_Bonus, 0x13 },
};

const sGame_PaletteDataset SF2HF_A_KEN_SELSCREEN_NODE[] =
{
    { L"Ken", 0xe4a0 - 0x02, 0xe4c0 - 0x02, indexSF2Sprites_Bonus, 0x15 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_SELSCREEN_NODE[] =
{
    { L"Chun-Li", 0xe4c0 - 0x02, 0xe4e0 - 0x02, indexSF2Sprites_Bonus, 0x07 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_SELSCREEN_NODE[] =
{
    { L"Zangief", 0xe4e0 - 0x02, 0xe500 - 0x02, indexSF2Sprites_Bonus, 0x1b  },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_SELSCREEN_NODE[] =
{
    { L"Dhalsim", 0xe500 - 0x02, 0xe520 - 0x02, indexSF2Sprites_Bonus, 0x0c },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_SELSCREEN_NODE[] =
{
    { L"Dictator", 0xe720 - 0x02, 0xe740 - 0x02, indexSF2Sprites_Bonus, 0x0f },
};

const sGame_PaletteDataset SF2HF_A_SAGATBOXER_SELSCREEN_NODE[] =
{
    { L"Sagat and Boxer", 0xe740 - 0x02, 0xe760 - 0x02, indexSF2Sprites_Bonus, 0x18 },
};

const sGame_PaletteDataset SF2HF_A_CLAW_SELSCREEN_NODE[] =
{
    { L"Claw", 0xe760 - 0x02, 0xe780 - 0x02, indexSF2Sprites_Bonus, 0x09 },
};

const sDescTreeNode SF2HF_A_SELSCREEN_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_BLANKA_SELSCREEN_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_SELSCREEN_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_SELSCREEN_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_EHONDA_SELSCREEN_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_GUILE_SELSCREEN_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_KEN_SELSCREEN_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_RYU_SELSCREEN_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_SELSCREEN_NODE) },

    { L"Sagat and Boxer", DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGATBOXER_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_SAGATBOXER_SELSCREEN_NODE) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_CLAW_SELSCREEN_NODE) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_SELSCREEN_NODE, ARRAYSIZE(SF2HF_A_DICTATOR_SELSCREEN_NODE) },
};

const sDescTreeNode SF2HF_A_BLANKA_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_NORMAL_NODE, ARRAYSIZE(SF2HF_A_BLANKA_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_START_NODE, ARRAYSIZE(SF2HF_A_BLANKA_START_NODE) },
};

const sDescTreeNode SF2HF_A_CHUNLI_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_NORMAL_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_START_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_START_NODE) },
};

const sDescTreeNode SF2HF_A_DHALSIM_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_NORMAL_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_START_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_START_NODE) },
};

const sDescTreeNode SF2HF_A_EHONDA_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_NORMAL_NODE, ARRAYSIZE(SF2HF_A_EHONDA_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_START_NODE, ARRAYSIZE(SF2HF_A_EHONDA_START_NODE) },
};

const sDescTreeNode SF2HF_A_GUILE_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_NORMAL_NODE, ARRAYSIZE(SF2HF_A_GUILE_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_START_NODE, ARRAYSIZE(SF2HF_A_GUILE_START_NODE) },
};

const sDescTreeNode SF2HF_A_KEN_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_NORMAL_NODE, ARRAYSIZE(SF2HF_A_KEN_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_START_NODE, ARRAYSIZE(SF2HF_A_KEN_START_NODE) },
};

const sDescTreeNode SF2HF_A_RYU_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_NORMAL_NODE, ARRAYSIZE(SF2HF_A_RYU_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_START_NODE, ARRAYSIZE(SF2HF_A_RYU_START_NODE) },
};

const sDescTreeNode SF2HF_A_ZANGIEF_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_NORMAL_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_START_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_START_NODE) },
};

const sDescTreeNode SF2HF_A_BOXER_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_BOXER_NORMAL_NODE, ARRAYSIZE(SF2HF_A_BOXER_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_BOXER_START_NODE, ARRAYSIZE(SF2HF_A_BOXER_START_NODE) },
};

const sDescTreeNode SF2HF_A_CLAW_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_NORMAL_NODE, ARRAYSIZE(SF2HF_A_CLAW_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_START_NODE, ARRAYSIZE(SF2HF_A_CLAW_START_NODE) },
};

const sDescTreeNode SF2HF_A_SAGAT_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGAT_NORMAL_NODE, ARRAYSIZE(SF2HF_A_SAGAT_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGAT_START_NODE, ARRAYSIZE(SF2HF_A_SAGAT_START_NODE) },
};

const sDescTreeNode SF2HF_A_DICTATOR_COLLECTION[] =
{
    { L"Normal",        DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_NORMAL_NODE, ARRAYSIZE(SF2HF_A_DICTATOR_NORMAL_NODE) },
    { L"Start",         DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_START_NODE, ARRAYSIZE(SF2HF_A_DICTATOR_START_NODE) },
};

const sDescTreeNode SF2HF_A_PORTRAITS_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_BLANKA_PORTRAITS_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_PORTRAITS_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_PORTRAITS_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_EHONDA_PORTRAITS_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_GUILE_PORTRAITS_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_KEN_PORTRAITS_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_RYU_PORTRAITS_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_PORTRAITS_NODE) },

    { L"Boxer",      DESC_NODETYPE_TREE, (void*)SF2HF_A_BOXER_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_BOXER_PORTRAITS_NODE) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_CLAW_PORTRAITS_NODE) },
    { L"Sagat",      DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGAT_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_SAGAT_PORTRAITS_NODE) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_DICTATOR_PORTRAITS_NODE) },
};

const sDescTreeNode SF2HF_A_21_UNITS[] =
{
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2HF_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2HF_A_SELSCREEN_COLLECTION, ARRAYSIZE(SF2HF_A_SELSCREEN_COLLECTION) },
};

const sDescTreeNode SF2HF_A_22_UNITS[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_COLLECTION, ARRAYSIZE(SF2HF_A_BLANKA_COLLECTION) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_COLLECTION, ARRAYSIZE(SF2HF_A_CHUNLI_COLLECTION) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_COLLECTION, ARRAYSIZE(SF2HF_A_DHALSIM_COLLECTION) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_COLLECTION, ARRAYSIZE(SF2HF_A_EHONDA_COLLECTION) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_COLLECTION, ARRAYSIZE(SF2HF_A_GUILE_COLLECTION) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_COLLECTION, ARRAYSIZE(SF2HF_A_KEN_COLLECTION) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_COLLECTION, ARRAYSIZE(SF2HF_A_RYU_COLLECTION) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_COLLECTION, ARRAYSIZE(SF2HF_A_ZANGIEF_COLLECTION) },

    { L"Boxer",      DESC_NODETYPE_TREE, (void*)SF2HF_A_BOXER_COLLECTION, ARRAYSIZE(SF2HF_A_BOXER_COLLECTION) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_COLLECTION, ARRAYSIZE(SF2HF_A_CLAW_COLLECTION) },
    { L"Sagat",      DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGAT_COLLECTION, ARRAYSIZE(SF2HF_A_SAGAT_COLLECTION) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_COLLECTION, ARRAYSIZE(SF2HF_A_DICTATOR_COLLECTION) },
};

constexpr auto SF2HF_A_21_NUMUNIT = ARRAYSIZE(SF2HF_A_21_UNITS);
#define SF2HF_A_21_EXTRALOC SF2HF_A_21_NUMUNIT

constexpr auto SF2HF_A_22_NUMUNIT = ARRAYSIZE(SF2HF_A_22_UNITS);
#define SF2HF_A_22_EXTRALOC SF2HF_A_22_NUMUNIT

const sGame_PaletteDataset SF2HF_A_RYU_23_PORTRAITS_NODE[] =
{
    { L"Ryu", 0x2E868, 0x2E888, indexSF2Sprites_Bonus, 0x16 },
    { L"Ryu Start", 0x2e748, 0x2e768, indexSF2Sprites_Bonus, 0x16 },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_23_PORTRAITS_NODE[] =
{
    { L"E.Honda", 0x2E888, 0x2E8a8, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda Start", 0x2e768, 0x2e788, indexSF2Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_23_PORTRAITS_NODE[] =
{
    { L"Blanka", 0x2E8a8, 0x2E8c8, indexSF2Sprites_Bonus, 0x03 },
    { L"Blanka Start", 0x2e788, 0x2e7a8, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_23_PORTRAITS_NODE[] =
{
    { L"Guile", 0x2E8c8, 0x2E8e8, indexSF2Sprites_Bonus, 0x12 },
    { L"Guile Start", 0x2e7a8, 0x2e7c8, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset SF2HF_A_KEN_23_PORTRAITS_NODE[] =
{
    { L"Ken", 0x2E8e8, 0x2E908, indexSF2Sprites_Bonus, 0x14 },
    { L"Ken Start", 0x2e7c8, 0x2e7e8, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_23_PORTRAITS_NODE[] =
{
    { L"Chun-Li", 0x2E908, 0x2E928, indexSF2Sprites_Bonus, 0x06 },
    { L"Chun-Li Start", 0x2e7e8, 0x2E808, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_23_PORTRAITS_NODE[] =
{
    { L"Zangief", 0x2E928, 0x2E948, indexSF2Sprites_Bonus, 0x1a },
    { L"Zangief Start", 0x2E808, 0x2E828, indexSF2Sprites_Bonus, 0x1a },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_23_PORTRAITS_NODE[] =
{
    { L"Dhalsim", 0x2E948, 0x2E968 },
    { L"Dhalsim Start", 0x2E828, 0x2E848, -1, -1, &pairNext },
    { L"Dhalsim Part 3", 0x348d8, 0x348f8 },
};

const sDescTreeNode SF2HF_A_23_PORTRAITS_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_BLANKA_23_PORTRAITS_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_23_PORTRAITS_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_23_PORTRAITS_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_EHONDA_23_PORTRAITS_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_GUILE_23_PORTRAITS_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_KEN_23_PORTRAITS_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_RYU_23_PORTRAITS_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_23_PORTRAITS_NODE) },
};

const sDescTreeNode SF2HF_A_23_UNITS[] =
{
    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)SF2HF_A_23_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_23_PORTRAITS_COLLECTION) },
};

constexpr auto SF2HF_A_23_NUMUNIT = ARRAYSIZE(SF2HF_A_23_UNITS);
#define SF2HF_A_23_EXTRALOC SF2HF_A_23_NUMUNIT

const stExtraDef SF2HF_A_EXTRA[] = 
{
    //Start
    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};
