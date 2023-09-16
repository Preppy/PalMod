#pragma once

const std::vector<uint16_t> SF2HF_A_IMGIDS_USED =
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
    { L"Dictator", 0x1E7B6, 0x1e7d6, indexSF2Sprites_Bison, 0x08, &pairNext2 },
    { L"Cape", 0x1e7d6, 0x1e7f6, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks 1", 0x1e836, 0x1e876, indexSF2Sprites_Bison, 0x09, &pairPrevious2 },
    { L"Psycho Attacks 2", 0x1e876, 0x1e8b6, indexSF2Sprites_Bison, 0x09, &pairPrevious3 },
    { L"Psycho Crusher", 0x1e7f6, 0x1e836, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_START_NODE[] =
{
    { L"Dictator", 0x1E95e, 0x1E97e, indexSF2Sprites_Bison, 0x08, &pairNext2 },
    { L"Cape", 0x1E97e, 0x1E99e, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks 1", 0x1e9dc, 0x1ea1c, indexSF2Sprites_Bison, 0x09, &pairPrevious2 },
    { L"Psycho Attacks 2", 0x1ea1c, 0x1ea5c, indexSF2Sprites_Bison, 0x09, &pairPrevious3 },
    { L"Psycho Crusher", 0x1E99e, 0x1e9dc, indexSF2Sprites_Bison, 0x03 },
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
    { L"Ryu Normal 1/2", 0x9600 - 0x02, 0x9620 - 0x02, indexSF2Sprites_Ryu, 0x20, &pairNext },
    { L"Ryu Normal 2/2", 0x95a0 - 0x02, 0x95c0 - 0x02, indexSF2Sprites_Ryu, 0x21 },
    { L"Ryu Start", 0x9400 - 0x02, 0x9420 - 0x02, indexSF2Sprites_Ryu, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_PORTRAITS_NODE[] =
{
    { L"E.Honda Normal", 0x9620 - 0x02, 0x9640 - 0x02, indexSF2Sprites_EHonda, 0x24 },
    { L"E.Honda Start", 0x9420 - 0x02, 0x9440 - 0x02, indexSF2Sprites_EHonda, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_PORTRAITS_NODE[] =
{
    { L"Blanka Normal 1/2", 0x9640 - 0x02, 0x9660 - 0x02, indexSF2Sprites_Blanka, 0x24, &pairNext },
    { L"Blanka Normal 2/2", 0x97E0 - 0x02, 0x9800 - 0x02, indexSF2Sprites_Blanka, 0x24 },
    { L"Blanka Start", 0x9440 - 0x02, 0x9460 - 0x02, indexSF2Sprites_Blanka, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_PORTRAITS_NODE[] =
{
    { L"Guile Normal", 0x9660 - 0x02, 0x9680 - 0x02, indexSF2Sprites_Guile, 0x24 },
    { L"Guile Start", 0x9460 - 0x02, 0x9480 - 0x02, indexSF2Sprites_Guile, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_KEN_PORTRAITS_NODE[] =
{
    { L"Ken Normal", 0x9680 - 0x02, 0x96a0 - 0x02, indexSF2Sprites_Ken, 0x24 },
    { L"Ken Start", 0x9480 - 0x02, 0x94a0 - 0x02, indexSF2Sprites_Ken, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_PORTRAITS_NODE[] =
{
    { L"Chun-Li Normal", 0x96a0 - 0x02, 0x96c0 - 0x02, indexSF2Sprites_ChunLi, 0x24 },
    { L"Chun-Li Start", 0x94a0 - 0x02, 0x94c0 - 0x02, indexSF2Sprites_ChunLi, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_PORTRAITS_NODE[] =
{
    { L"Zangief Normal 1/2", 0x96c0 - 0x02, 0x96e0 - 0x02, indexSF2Sprites_Zangief, 0x20, &pairNext },
    { L"Zangief Normal 2/2", 0x95E0 - 0x02, 0x9600 - 0x02, indexSF2Sprites_Zangief, 0x21 },
    { L"Zangief Start", 0x94c0 - 0x02, 0x94e0 - 0x02, indexSF2Sprites_Zangief, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_PORTRAITS_NODE[] =
{
    { L"Dhalsim Normal 1/2", 0x96e0 - 0x02, 0x9700 - 0x02, indexSF2Sprites_Dhalsim, 0x24, &pairNext },
    { L"Dhalsim Normal 2/2", 0x9780 - 0x02, 0x97a0 - 0x02, indexSF2Sprites_Dhalsim, 0x25 },
    { L"Dhalsim Start 1/2", 0x94e0 - 0x02, 0x9500 - 0x02, indexSF2Sprites_Dhalsim, 0x24, &pairNext },
    { L"Dhalsim Start 2/2", 0x9580 - 0x02, 0x95a0 - 0x02, indexSF2Sprites_Dhalsim, 0x25 },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_PORTRAITS_NODE[] =
{
    { L"Dictator Normal 1/2", 0x9700 - 0x02, 0x9720 - 0x02, indexSF2Sprites_Bison, 0x24, &pairNext },
    { L"Dictator Normal 2/2", 0x97c0 - 0x02, 0x97E0 - 0x02, indexSF2Sprites_Bison, 0x25 },
    { L"Dictator Start 1/2", 0x9500 - 0x02, 0x9520 - 0x02, indexSF2Sprites_Bison, 0x24, &pairNext },
    { L"Dictator Start 2/2", 0x95c0 - 0x02, 0x95e0 - 0x02, indexSF2Sprites_Bison, 0x25 },
};

const sGame_PaletteDataset SF2HF_A_BOXER_PORTRAITS_NODE[] =
{
    // Unsure of what is intended here
    { L"Boxer Normal 1/2", 0x9740 - 0x02, 0x9760 - 0x02, indexSF2Sprites_Balrog, 0x24, &pairNext },
    { L"Boxer Normal 2/2", 0x97a0 - 0x02, 0x97c0 - 0x02, indexSF2Sprites_Balrog, 0x24 },
    { L"Boxer Start", 0x9540 - 0x02, 0x9560 - 0x02, indexSF2Sprites_Balrog, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_SAGAT_PORTRAITS_NODE[] =
{
    { L"Sagat Normal", 0x9720 - 0x02, 0x9740 - 0x02, indexSF2Sprites_Sagat, 0x24 },
    { L"Sagat Start", 0x9520 - 0x02, 0x9540 - 0x02, indexSF2Sprites_Sagat, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_CLAW_PORTRAITS_NODE[] =
{
    { L"Claw Normal", 0x9760 - 0x02, 0x9780 - 0x02, indexSF2Sprites_Vega, 0x24 },
    { L"Claw Start", 0x9560 - 0x02, 0x9580 - 0x02, indexSF2Sprites_Vega, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_RYU_SELECTICON_NODE[] =
{
    { L"Ryu", 0xe420 - 0x02, 0xe440 - 0x02, indexSF2Sprites_Ryu, 0x26 },
    { L"Ryu (Defeated)", 0xe61e, 0xe63e, indexSF2Sprites_Ryu, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_SELECTICON_NODE[] =
{
    { L"E.Honda", 0xe440 - 0x02, 0xe460 - 0x02, indexSF2Sprites_EHonda, 0x26 },
    { L"E.Honda (Defeated)", 0xe63e, 0xe65e, indexSF2Sprites_EHonda, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_SELECTICON_NODE[] =
{
    { L"Blanka", 0xe460 - 0x02, 0xe480 - 0x02, indexSF2Sprites_Blanka, 0x26 },
    { L"Blanka (Defeated)", 0xe65e, 0xe67e, indexSF2Sprites_Blanka, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_SELECTICON_NODE[] =
{
    { L"Guile", 0xe480 - 0x02, 0xe4a0 - 0x02, indexSF2Sprites_Guile, 0x26 },
    { L"Guile (Defeated)", 0xe67e, 0xe69e, indexSF2Sprites_Guile, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_KEN_SELECTICON_NODE[] =
{
    { L"Ken", 0xe4a0 - 0x02, 0xe4c0 - 0x02, indexSF2Sprites_Ken, 0x26 },
    { L"Ken (Defeated)", 0xe69e, 0xe6be, indexSF2Sprites_Ken, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_SELECTICON_NODE[] =
{
    { L"Chun-Li", 0xe4c0 - 0x02, 0xe4e0 - 0x02, indexSF2Sprites_ChunLi, 0x26 },
    { L"Chun-Li (Defeated)", 0xe6be, 0xe6de, indexSF2Sprites_ChunLi, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_SELECTICON_NODE[] =
{
    { L"Zangief", 0xe4e0 - 0x02, 0xe500 - 0x02, indexSF2Sprites_Zangief, 0x26 },
    { L"Zangief (Defeated)", 0xe6de, 0xe6fe, indexSF2Sprites_Zangief, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_SELECTICON_NODE[] =
{
    { L"Dhalsim", 0xe500 - 0x02, 0xe520 - 0x02, indexSF2Sprites_Dhalsim, 0x26 },
    { L"Dhalsim (Defeated)", 0xe6fe, 0xe71e, indexSF2Sprites_Dhalsim, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_SELECTICON_NODE[] =
{
    { L"Dictator", 0xe720 - 0x02, 0xe740 - 0x02, indexSF2Sprites_Bison, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_SAGATBOXER_SELECTICON_NODE[] =
{
    { L"Sagat and Boxer", 0xe740 - 0x02, 0xe760 - 0x02, indexSF2Sprites_Bonus, 0x18 },
    { L"Sagat and Boxer (Defeated)", 0xe79e, 0xe7be, indexSF2Sprites_Bonus, 0x18 },
};

const sGame_PaletteDataset SF2HF_A_CLAW_SELECTICON_NODE[] =
{
    { L"Claw", 0xe760 - 0x02, 0xe780 - 0x02, indexSF2Sprites_Vega, 0x26 },
    { L"Claw (Defeated)", 0xe7be, 0xe7de, indexSF2Sprites_Vega, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_MAP_SELECTICON_NODE[] =
{
    { L"World Map Background", 0xe51e, 0xe5de, indexSF2Sprites_Bonus, 0x25 },
};

const sDescTreeNode SF2HF_A_SELECTICON_COLLECTION[] =
{
    { L"Blanka",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_BLANKA_SELECTICON_NODE) },
    { L"Chun-Li",    DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_SELECTICON_NODE) },
    { L"Dhalsim",    DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_SELECTICON_NODE) },
    { L"E.Honda",    DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_EHONDA_SELECTICON_NODE) },
    { L"Guile",      DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_GUILE_SELECTICON_NODE) },
    { L"Ken",        DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_KEN_SELECTICON_NODE) },
    { L"Ryu",        DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_RYU_SELECTICON_NODE) },
    { L"Zangief",    DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_SELECTICON_NODE) },

    { L"Sagat and Boxer", DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGATBOXER_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_SAGATBOXER_SELECTICON_NODE) },
    { L"Claw",       DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_CLAW_SELECTICON_NODE) },
    { L"Dictator",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_DICTATOR_SELECTICON_NODE) },

    { L"World Map",   DESC_NODETYPE_TREE, (void*)SF2HF_A_MAP_SELECTICON_NODE, ARRAYSIZE(SF2HF_A_MAP_SELECTICON_NODE) },
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

const sGame_PaletteDataset SF2HF_A_BONUS21_NODE[] =
{
    { L"Opening Cinematic - Sky", 0x901e, 0x903e },
    { L"Opening Cinematic - Skyscraper", 0xdffe, 0xe07e },
    { L"Title Screen - Background", 0xe1fe, 0xe204 },
    { L"Title Screen - Push Start & Credit Text", 0x3ffe, 0x401e, indexSF2Sprites_Bonus, 0x2e },
    { L"Revision Text", 0x4dbe, 0x4dde },
    { L"Copyright Warning Text", 0x4bfe, 0x4c1e },
    { L"Versus Screen - Background & VS", 0xe3fe, 0xe41e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_BLANKA_NODE[] =
{
    { L"Blanka Stage - Sky", 0x7fe, 0x83e },
    { L"Blanka Stage - Left Hut 1", 0x583e, 0x585e },
    { L"Blanka Stage - Left Hut 2", 0x591e, 0x595e },
    { L"Blanka Stage - Left Hut 3", 0x58be, 0x58de },
    { L"Blanka Stage - Left Hut 4", 0x5a3e, 0x5a5e },
    { L"Blanka Stage - Left Hut & Water 1", 0x5a1e, 0x5a3e },
    { L"Blanka Stage - Left Hut & Water 2", 0x581e, 0x583e },
    { L"Blanka Stage - Left Hut & Water 3", 0x587e, 0x589e },
    { L"Blanka Stage - Water 1", 0x585e, 0x587e },
    { L"Blanka Stage - Water 2", 0x58de, 0x58fe },
    { L"Blanka Stage - Tree 1", 0xa83e, 0xa85e },
    { L"Blanka Stage - Tree 2", 0xa91e, 0xa93e },
    { L"Blanka Stage - Tree 3", 0xab1e, 0xab3e },
    { L"Blanka Stage - Tree & Crowd", 0xaabe, 0xaade },
    { L"Blanka Stage - Crowd 1", 0xa9be, 0xaa1e },
    { L"Blanka Stage - Crowd 2", 0xaa3e, 0xaa7e },
    { L"Blanka Stage - Crowd 3", 0xab5e, 0xab7e },
    { L"Blanka Stage - Crowd & Right Hut", 0xabbe, 0xabfe },
    { L"Blanka Stage - Right Hut 1", 0xa89e, 0xa8de },
    { L"Blanka Stage - Right Hut 2", 0xa95e, 0xa99e },
    { L"Blanka Stage - Floor", 0x5ade, 0x5afe },
};

const sGame_PaletteDataset SF2HF_A_STAGES_BOXER_NODE[] =
{
    { L"Boxer Stage - Crowd 1", 0xc81e, 0xc83e },
    { L"Boxer Stage - Crowd 2", 0xc85e, 0xc87e },
    { L"Boxer Stage - Crowd 3", 0xc8be, 0xc8de },
    { L"Boxer Stage - Crowd 4", 0xca3e, 0xca5e },
    { L"Boxer Stage - Crowd & Left Car 1", 0xc87e, 0xc89e },
    { L"Boxer Stage - Crowd & Left Car 2", 0xc9fe, 0xca3e },
    { L"Boxer Stage - Crowd & Left Car 3", 0xcb1e, 0xcb3e },
    { L"Boxer Stage - Crowd & Right Car 1", 0xc89e, 0xc8be },
    { L"Boxer Stage - Crowd & Right Car 2", 0xca5e, 0xca7e },
    { L"Boxer Stage - Crowd & Right Car 3", 0xca9e, 0xcade },
    { L"Boxer Stage - Crowd & Right Car 4", 0xcafe, 0xcb1e },
    { L"Boxer Stage - Capcom", 0x799e, 0x79fe },
    { L"Boxer Stage - Golden Nugget", 0x797e, 0x799e },
    { L"Boxer Stage - Golden Nugget & Central Building", 0x791e, 0x797e },
    { L"Boxer Stage - Central Building 1", 0x79fe, 0x7a1e },
    { L"Boxer Stage - Central Building 2", 0x7a9e, 0x7abe },
    { L"Boxer Stage - Central Building 3", 0x7bbe, 0x7bde },
    { L"Boxer Stage - Golden Goose & Central Building", 0x7a1e, 0x7a9e },
    { L"Boxer Stage - Street & Central Building", 0x7bde, 0x7bfe },
    { L"Boxer Stage - Wedding Chapel & Sky", 0x28de, 0x295e },
    { L"Boxer Stage - Misc. Signage & Sky", 0x2a9e, 0x2b5e },
    { L"Boxer Stage - Misc. Signage", 0x7ade, 0x7afe },
    { L"Boxer Stage - Side Buildings & Neon", 0x78be, 0x78fe },
    { L"Boxer Stage - Casino, Side Buildings, Street", 0x77fe, 0x78be },
    { L"Boxer Stage - Floor", 0x7afe, 0x7bbe },
};

const sGame_PaletteDataset SF2HF_A_STAGES_CHUNLI_NODE[] =
{
    { L"Chun-Li Stage - Sky", 0xb4fe, 0xb51e },
    { L"Chun-Li Stage - Sky & Alley Buildings 1", 0xb3fe, 0xb41e },
    { L"Chun-Li Stage - Sky & Alley Buildings 2", 0xb51e, 0xb55e },
    { L"Chun-Li Stage - Alley Buildings 1", 0xb43e, 0xb49e },
    { L"Chun-Li Stage - Alley Buildings 2", 0xb59e, 0xb5be },
    { L"Chun-Li Stage - Deliveryman", 0x663e, 0x665e },
    { L"Chun-Li Stage - Deliveryman, Ground, Middle Shop, Right Shop", 0x63fe, 0x641e },
    { L"Chun-Li Stage - Ground & Right Shop", 0x651e, 0x653e },
    { L"Chun-Li Stage - Ground & Left Shop", 0x65de, 0x65fe },
    { L"Chun-Li Stage - Ground, Left Shop, Middle Shop 1", 0x641e, 0x643e },
    { L"Chun-Li Stage - Ground, Left Shop, Middle Shop 2", 0x659e, 0x65be },
    { L"Chun-Li Stage - Left Shop 1", 0x643e, 0x64de },
    { L"Chun-Li Stage - Left Shop 2", 0x657e, 0x659e },
    { L"Chun-Li Stage - Left Shop 3", 0x65fe, 0x661e },
    { L"Chun-Li Stage - Left Shop 4", 0x67de, 0x67fe },
    { L"Chun-Li Stage - Left Shop & Middle Shop 1", 0x64de, 0x64fe },
    { L"Chun-Li Stage - Left Shop & Middle Shop 2", 0x655e, 0x657e },
    { L"Chun-Li Stage - Left Shop & Middle Shop 3", 0x65be, 0x65de },
    { L"Chun-Li Stage - Left Shop, Middle Shop, Right Shop", 0x673e, 0x675e },
    { L"Chun-Li Stage - Middle Shop 1", 0x64fe, 0x651e },
    { L"Chun-Li Stage - Middle Shop 2", 0x653e, 0x655e },
    { L"Chun-Li Stage - Middle Shop 3", 0x661e, 0x663e },
    { L"Chun-Li Stage - Middle Shop 4", 0x665e, 0x667e },
    { L"Chun-Li Stage - Right Shop 1", 0x667e, 0x673e },
    { L"Chun-Li Stage - Right Shop 2", 0x675e, 0x677e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_CLAW_NODE[] =
{
    { L"Claw Stage - Performers", 0xcd1e, 0xcd5e },
    { L"Claw Stage - Performers & Stage", 0xcc7e, 0xccde },
    { L"Claw Stage - Crowd 1", 0xccfe, 0xcd1e },
    { L"Claw Stage - Crowd 2", 0xcd9e, 0xcdfe },
    { L"Claw Stage - Wall 1", 0x7efe, 0x7f1e },
    { L"Claw Stage - Wall 2", 0x7cfe, 0x7d5e },
    { L"Claw Stage - Wall & Sign", 0x7bfe, 0x7c9e },
    { L"Claw Stage - Wall & Mural", 0x7f1e, 0x7f3e },
    { L"Claw Stage - Wall, Mural, Platform", 0x7f5e, 0x7f7e },
    { L"Claw Stage - Wall, Crowd, Platform", 0x7ede, 0x7efe },
    { L"Claw Stage - Platform", 0x7fbe, 0x7fde },
    { L"Claw Stage - Platform & Floor", 0x7fde, 0x7ffe },
    { L"Claw Stage - Fence & Pillars", 0x2bfe, 0x2c1e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_DHALSIM_NODE[] =
{
    { L"Dhalsim Stage - Painting", 0x6bfe, 0x6c1e },
    { L"Dhalsim Stage - Painting & Column", 0x6f1e, 0x6f3e },
    { L"Dhalsim Stage - Painting & Curtain", 0x6f3e, 0x6f9e },
    { L"Dhalsim Stage - Curtain & Column 1", 0x6c1e, 0x6c5e },
    { L"Dhalsim Stage - Curtain & Column 2", 0x6c7e, 0x6c9e },
    { L"Dhalsim Stage - Floor 1", 0x6cbe, 0x6cde },
    { L"Dhalsim Stage - Floor 2", 0x6e9e, 0x6ebe },
    { L"Dhalsim Stage - Floor, Platform, Back Elephant", 0x6c9e, 0x6cbe },
    { L"Dhalsim Stage - Floor & Carpet", 0x6ede, 0x6f1e },
    { L"Dhalsim Stage - Carpet", 0x6ebe, 0x6ede },
    { L"Dhalsim Stage - Lattice", 0x6cfe, 0x6d1e },
    { L"Dhalsim Stage - Wall", 0x6d5e, 0x6d7e },
    { L"Dhalsim Stage - Back Elephant", 0x6c5e, 0x6c7e },
    { L"Dhalsim Stage - Back Elephant, Curtain, Column", 0x6cde, 0x6cfe },
    { L"Dhalsim Stage - Back Elephant, Curtain, Floor", 0x6d1e, 0x6d3e },
    { L"Dhalsim Stage - Back Elephant & Curtain", 0x6d7e, 0x6e3e },
    { L"Dhalsim Stage - Back Elephant & Lattice", 0x6e3e, 0x6e5e },
    { L"Dhalsim Stage - Back Elephant Trunk Animation, Curtain, Column", 0x6f9e, 0x6ffe },
    { L"Dhalsim Stage - Middle Elephant", 0xbbfe, 0xbc1e },
    { L"Dhalsim Stage - Middle Elephant & Floor", 0xbc1e, 0xbc3e },
    { L"Dhalsim Stage - Front Elephant", 0x1bfe, 0x1c1e },
    { L"Dhalsim Stage - Front Elephant & Floor", 0x1c1e, 0x1c3e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_DICTATOR_NODE[] =
{
    { L"Dictator Stage - Ceiling 1", 0x6ffe, 0x701e },
    { L"Dictator Stage - Ceiling 2", 0x703e, 0x705e },
    { L"Dictator Stage - Temple 1", 0x713e, 0x717e },
    { L"Dictator Stage - Temple 2", 0x71fe, 0x721e },
    { L"Dictator Stage - Temple 3", 0x723e, 0x725e },
    { L"Dictator Stage - Temple & Grass 1", 0x709e, 0x70be },
    { L"Dictator Stage - Temple & Grass 2", 0x727e, 0x729e },
    { L"Dictator Stage - Temple & Sky 1", 0x707e, 0x709e },
    { L"Dictator Stage - Temple & Sky 2", 0x70be, 0x70de },
    { L"Dictator Stage - Temple & Sky 3", 0x719e, 0x71be },
    { L"Dictator Stage - Temple, Sky, Trees", 0x701e, 0x703e },
    { L"Dictator Stage - Temple, Sky, Right Wall", 0x71be, 0x71fe },
    { L"Dictator Stage - Right Wall", 0x711e, 0x713e },
    { L"Dictator Stage - Right Wall & Grass", 0x721e, 0x723e },
    { L"Dictator Stage - Floor", 0x72fe, 0x737e },
    { L"Dictator Stage - Statues", 0x1ffe, 0x205e },
    { L"Dictator Stage - Bell 1", 0xc01e, 0xc05e },
    { L"Dictator Stage - Bell 2", 0xc13e, 0xc15e },
    { L"Dictator Stage - Bell 3", 0xc23e, 0xc25e },
    { L"Dictator Stage - Crowd 1", 0xc0be, 0xc13e },
    { L"Dictator Stage - Crowd 2", 0xc15e, 0xc19e },
    { L"Dictator Stage - Crowd 3", 0xc21e, 0xc23e },
    { L"Dictator Stage - Crowd 4", 0xc27e, 0xc29e },
    { L"Dictator Stage - Columns", 0xc29e, 0xc2be },
};

const sGame_PaletteDataset SF2HF_A_STAGES_EHONDA_NODE[] =
{
    { L"E.Honda Stage - Bath Tub Top", 0x547e, 0x549e },
    { L"E.Honda Stage - Bath Tub Bottom", 0x468, 0x47e },
    { L"E.Honda Stage - Floor 1", 0x53fe, 0x541e },
    { L"E.Honda Stage - Floor 2 (Background)", 0x543e, 0x545e },
    { L"E.Honda Stage - Ceiling", 0x541e, 0x5436 },
    { L"E.Honda Stage - Left Side Wall", 0xa6de, 0xa75e },
    { L"E.Honda Stage - Background Wall 1", 0xa5de, 0xa61e },
    { L"E.Honda Stage - Background Wall 2", 0xa61e, 0xa69e },
    { L"E.Honda Stage - Background Wall 3", 0xa7de, 0xa7fe },
    { L"E.Honda Stage - Background Wall 4", 0xa3fe, 0xa41e },
    { L"E.Honda Stage - Background After K.O. 1", 0xa55e, 0xa59e },
    { L"E.Honda Stage - Background After K.O. 2", 0xa75e, 0xa79e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_GUILE_NODE[] =
{
    { L"Guile Stage - Sky 1", 0x5dfe, 0x5e1e },
    { L"Guile Stage - Sky 2", 0xcde, 0xcfe },
    { L"Guile Stage - Sky 3", 0xbfe, 0xc1e },
    { L"Guile Stage - Sky & Hangars", 0xc7e, 0xcde },
    { L"Guile Stage - Field 1", 0xc1e, 0xc3e },
    { L"Guile Stage - Field 2", 0xc5e, 0xc7e },
    { L"Guile Stage - Tarmac", 0xc3e, 0xc5e },
    { L"Guile Stage - Crowd 1", 0xabfe, 0xac3e },
    { L"Guile Stage - Crowd 2", 0xac7e, 0xac9e },
    { L"Guile Stage - Crowd 3", 0xacbe, 0xacde },
    { L"Guile Stage - Crowd 4", 0xacde, 0xacfe },
    { L"Guile Stage - Crowd 5", 0xad5e, 0xad7e },
    { L"Guile Stage - Cooler", 0xad1e, 0xad3e },
    { L"Guile Stage - Radio", 0xad3e, 0xad5e },
    { L"Guile Stage - Cans", 0xad7e, 0xad9e },
    { L"Guile Stage - Fence", 0xad9e, 0xadbe },
    { L"Guile Stage - Jet 1", 0x5c1e, 0x5c3e },
    { L"Guile Stage - Jet 2", 0x5c5e, 0x5c9e },
    { L"Guile Stage - Jet 3", 0x5c9e, 0x5cbe },
    { L"Guile Stage - Jet & Ground", 0x5bfe, 0x5c1e },
    { L"Guile Stage - Toolbox & Ground", 0x5c3e, 0x5c5e },
    { L"Guile Stage - Air Force Logo & Ground", 0x5cbe, 0x5cfe },
    { L"Guile Stage - Ground", 0x5cfe, 0x5d1e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_KEN_NODE[] =
{
    { L"Ken Stage - Steamboat 1", 0xb03e, 0xb05e },
    { L"Ken Stage - Steamboat 2", 0xb0fe, 0xb13e },
    { L"Ken Stage - Steamboat 3", 0xb17e, 0xb19e },
    { L"Ken Stage - Steamboat 4", 0xb1be, 0xb1fe },
    { L"Ken Stage - Steamboat 5", 0xb25e, 0xb31e },
    { L"Ken Stage - Crowd & Steamboat 1", 0xb05e, 0xb0fe },
    { L"Ken Stage - Crowd & Steamboat 2", 0xb13e, 0xb17e },
    { L"Ken Stage - Crowd & Steamboat 3", 0xb19e, 0xb1be },
    { L"Ken Stage - Crowd & Steamboat 4", 0xb1fe, 0xb25e },
    { L"Ken Stage - Crowd & Steamboat 5", 0xb31e, 0xb39e },
    { L"Ken Stage - Crowd & Steamboat 6", 0xaffe, 0xb01e },
    { L"Ken Stage - Sky & Water", 0x601e, 0x603e },
    { L"Ken Stage - Sky & Yacht 1", 0x605e, 0x607e },
    { L"Ken Stage - Sky & Yacht 2", 0x609e, 0x60de },
    { L"Ken Stage - Sky & Yacht 3", 0x603e, 0x605e },
    { L"Ken Stage - Sky & Yacht 4", 0x617e, 0x619e },
    { L"Ken Stage - Yacht & Water 1", 0x613e, 0x615e },
    { L"Ken Stage - Yacht & Water 2", 0x60de, 0x60fe },
    { L"Ken Stage - Yacht", 0x5ffe, 0x601e },
    { L"Ken Stage - Floor", 0x61de, 0x61f8 },
};

const sGame_PaletteDataset SF2HF_A_STAGES_RYU_NODE[] =
{
    { L"Ryu Stage - Moon & Sky", 0x3be, 0x3de },
    { L"Ryu Stage - Intermediate Rooftop", 0xa03e, 0xa09e },
    { L"Ryu Stage - Front Rooftop 1", 0x501e, 0x507e },
    { L"Ryu Stage - Front Rooftop 2", 0x50be, 0x511e },
    { L"Ryu Stage - Floor", 0x4ffe, 0x501e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_SAGAT_NODE[] =
{
    { L"Sagat Stage - Sky & Temple", 0x253e, 0x255e },
    { L"Sagat Stage - Buddha 1", 0x73fe, 0x741e },
    { L"Sagat Stage - Buddha 2", 0x747e, 0x749e },
    { L"Sagat Stage - Buddha 3", 0x74be, 0x761e },
    { L"Sagat Stage - Buddha 4", 0x769e, 0x76be },
    { L"Sagat Stage - Buddha 5", 0x76de, 0x76fe },
    { L"Sagat Stage - Buddha 6", 0x771e, 0x773e },
    { L"Sagat Stage - Buddha & Right Structure", 0x767e, 0x769e },
    { L"Sagat Stage - Buddha & Grass 1", 0x761e, 0x765e },
    { L"Sagat Stage - Buddha & Grass 2", 0x76be, 0x76de },
    { L"Sagat Stage - Buddha & Grass 3", 0x76fe, 0x771e },
    { L"Sagat Stage - Buddha & Grass 4", 0x773e, 0x775e },
    { L"Sagat Stage - Grass", 0x24be, 0x24de },
    { L"Sagat Stage - Grass & Pavement 1", 0x741e, 0x743e },
    { L"Sagat Stage - Grass & Pavement 2", 0x749e, 0x74be },
    { L"Sagat Stage - Grass & Right Structure 1", 0x743e, 0x745e },
    { L"Sagat Stage - Grass & Right Structure 2", 0x765e, 0x767e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_ZANGIEF_NODE[] =
{
    { L"Zangief Stage - Factory Background 1", 0xb7fe, 0xb89e },
    { L"Zangief Stage - Factory Background 2", 0xb8be, 0xb95e },
    { L"Zangief Stage - Factory Background 3", 0xb97e, 0xb99e },
    { L"Zangief Stage - Background Fence", 0x68fe, 0x691e },
    { L"Zangief Stage - Background Fence & Background Chain", 0x691e, 0x693e },
    { L"Zangief Stage - Background Fence, Background Chain, Floor", 0x693e, 0x695e },
    { L"Zangief Stage - Background Fence & Floor", 0x67fe, 0x681e },
    { L"Zangief Stage - Background Fence & Beams", 0x68de, 0x68fe },
    { L"Zangief Stage - Floor", 0x6b7e, 0x6b9e },
    { L"Zangief Stage - Floor & Beams", 0x681e, 0x683e },
    { L"Zangief Stage - Crowd 1", 0x6a9e, 0x6ade },
    { L"Zangief Stage - Crowd 2", 0x6afe, 0x6b7e },
    { L"Zangief Stage - Crowd 3", 0x6b9e, 0x6bde },
    { L"Zangief Stage - Crowd & Beams 1", 0x685e, 0x687e },
    { L"Zangief Stage - Crowd & Beams 2", 0x6a7e, 0x6a9e },
    { L"Zangief Stage - Crowd & Beams 3", 0x6ade, 0x6afe },
    { L"Zangief Stage - Crowd & Beams 4", 0x6bde, 0x6bfe },
    { L"Zangief Stage - Foreground Chain", 0x183e, 0x185e },
    { L"Zangief Stage - Foreground Fence", 0x17fe, 0x181e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_BONUSCAR_NODE[] =
{
    { L"Bonus Stage (Car) - Water & Sky", 0x801e, 0x803e },
    { L"Bonus Stage (Car) - Water & Yacht 1", 0x80de, 0x80fe },
    { L"Bonus Stage (Car) - Water & Yacht 2", 0x813e, 0x815e },
    { L"Bonus Stage (Car) - Yacht, Flagpole, Sky", 0x80be, 0x80de },
    { L"Bonus Stage (Car) - Trees, Yacht, Sky", 0x809e, 0x80be },
    { L"Bonus Stage (Car) - Trees & Sky", 0x805e, 0x807e },
    { L"Bonus Stage (Car) - Flag, Flagpole, Sky", 0x803e, 0x805e },
    { L"Bonus Stage (Car) - Car & Car Shadow", 0x2ffe, 0x30be },
    { L"Bonus Stage (Car) - Floor", 0x81de, 0x81fe },
};

const sGame_PaletteDataset SF2HF_A_STAGES_BONUSCASKS_NODE[] =
{
    { L"Bonus Stage (Casks) - Background Casks & Pallets", 0xd3fe, 0xd41e },
    { L"Bonus Stage (Casks) - Background Casks & Gate", 0xd41e, 0xd43e },
    { L"Bonus Stage (Casks) - Beams", 0x849e, 0x84be },
    { L"Bonus Stage (Casks) - Beams, Conveyor, P1 Scoreboard", 0x83fe, 0x841e },
    { L"Bonus Stage (Casks) - Beams, Conveyor", 0x845e, 0x847e },
    { L"Bonus Stage (Casks) - Beams, P1 Scoreboard", 0x841e, 0x843e },
    { L"Bonus Stage (Casks) - Beams & Floor", 0x843e, 0x845e },
    { L"Bonus Stage (Casks) - Floor", 0x847e, 0x849e },
};

const sGame_PaletteDataset SF2HF_A_STAGES_BONUSDRUMS_NODE[] =
{
    { L"Bonus Stage (Drums) - Sky", 0x3bbe, 0x3bde },
    { L"Bonus Stage (Drums) - Crowd 1", 0x8a9e, 0x8ade },
    { L"Bonus Stage (Drums) - Crowd 2", 0x8afe, 0x8b7e },
    { L"Bonus Stage (Drums) - Crowd 3", 0x8b9e, 0x8bde },
    { L"Bonus Stage (Drums) - Crowd & Beams 1", 0x885e, 0x887e },
    { L"Bonus Stage (Drums) - Crowd & Beams 2", 0x8a7e, 0x8a9e },
    { L"Bonus Stage (Drums) - Crowd & Beams 3", 0x8ade, 0x8afe },
    { L"Bonus Stage (Drums) - Crowd & Beams 4", 0x8bde, 0x8bfe },
    { L"Bonus Stage (Drums) - Fence", 0x88fe, 0x891e },
    { L"Bonus Stage (Drums) - Fence & Beams", 0x88de, 0x88fe },
    { L"Bonus Stage (Drums) - Fence & Floor", 0x87fe, 0x881e },
    { L"Bonus Stage (Drums) - Floor & Beams", 0x881e, 0x883e },
    { L"Bonus Stage (Drums) - Floor", 0x8b7e, 0x8b9e },
    { L"Bonus Stage (Drums) - Drums", 0xd9be, 0xd9de },
};

const sDescTreeNode SF2HF_A_STAGES_COLLECTION[] =
{
    { L"Blanka",                DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_BLANKA_NODE, ARRAYSIZE(SF2HF_A_STAGES_BLANKA_NODE) },
    { L"Boxer",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_BOXER_NODE, ARRAYSIZE(SF2HF_A_STAGES_BOXER_NODE) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_CHUNLI_NODE, ARRAYSIZE(SF2HF_A_STAGES_CHUNLI_NODE) },
    { L"Claw",                  DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_CLAW_NODE, ARRAYSIZE(SF2HF_A_STAGES_CLAW_NODE) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_DHALSIM_NODE, ARRAYSIZE(SF2HF_A_STAGES_DHALSIM_NODE) },
    { L"Dictator",              DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_DICTATOR_NODE, ARRAYSIZE(SF2HF_A_STAGES_DICTATOR_NODE) },
    { L"E.Honda",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_EHONDA_NODE, ARRAYSIZE(SF2HF_A_STAGES_EHONDA_NODE) },
    { L"Guile",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_GUILE_NODE, ARRAYSIZE(SF2HF_A_STAGES_GUILE_NODE) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_KEN_NODE, ARRAYSIZE(SF2HF_A_STAGES_KEN_NODE) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_RYU_NODE, ARRAYSIZE(SF2HF_A_STAGES_RYU_NODE) },
    { L"Sagat",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_SAGAT_NODE, ARRAYSIZE(SF2HF_A_STAGES_SAGAT_NODE) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_ZANGIEF_NODE, ARRAYSIZE(SF2HF_A_STAGES_ZANGIEF_NODE) },
    
    { L"Bonus Stage (Car)",     DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_BONUSCAR_NODE, ARRAYSIZE(SF2HF_A_STAGES_BONUSCAR_NODE) },
    { L"Bonus Stage (Casks)",   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_BONUSCASKS_NODE, ARRAYSIZE(SF2HF_A_STAGES_BONUSCASKS_NODE) },
    { L"Bonus Stage (Drums)",   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_BONUSDRUMS_NODE, ARRAYSIZE(SF2HF_A_STAGES_BONUSDRUMS_NODE) },
};

const sDescTreeNode SF2HF_A_BONUS21_COLLECTION[] =
{
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_NODE, ARRAYSIZE(SF2HF_A_BONUS21_NODE) },
};

const sDescTreeNode SF2HF_A_21_UNITS[] =
{
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2HF_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2HF_A_SELECTICON_COLLECTION, ARRAYSIZE(SF2HF_A_SELECTICON_COLLECTION) },
    { L"Stages",         DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_COLLECTION, ARRAYSIZE(SF2HF_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_COLLECTION, ARRAYSIZE(SF2HF_A_BONUS21_COLLECTION) },
};

const sGame_PaletteDataset SF2HF_A_IN_GAME_NODE[] =
{
    { L"Insert Coin Text", 0x2da7e, 0x2da9e, indexSF2Sprites_Bonus, 0x2e },
    { L"HUD and Text", 0x2dbfe, 0x2dc3e, indexSF2Sprites_Bonus, 0x2c },
    { L"In-Game FX - Black", 0x2dbbe, 0x2dbde, indexSF2Sprites_Bonus, 0x29, &pairNextAndNext },
    { L"In-Game FX - Dust and Green Hitsparks", 0x2dbde, 0x2dbfe, indexSF2Sprites_Bonus, 0x28 },
    { L"In-Game FX - Various", 0x2dc3e, 0x2dc7e, indexSF2Sprites_Bonus, 0x2a },
};

const sGame_PaletteDataset SF2HF_A_BONUS22_NODE[] =
{
    { L"Intro Characters", 0x2fcfe, 0x2fe3e, indexSF2Sprites_Bonus, 0x2d },
    { L"Game Title", 0x2fe5e, 0x2fe7e, indexSF2Sprites_Bonus, 0x2b },
    { L"Character Select Extras", 0x3001e, 0x3007e, indexSF2Sprites_Bonus, 0x24 },
    { L"World Map Dictator", 0x2ff9e, 0x2ffbe, indexSF2Sprites_Bonus, 0x2f },
};

const sDescTreeNode SF2HF_A_BONUS22_COLLECTION[] =
{
    { L"In-Game Palettes",  DESC_NODETYPE_TREE, (void*)SF2HF_A_IN_GAME_NODE, ARRAYSIZE(SF2HF_A_IN_GAME_NODE) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS22_NODE, ARRAYSIZE(SF2HF_A_BONUS22_NODE) },
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

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS22_COLLECTION, ARRAYSIZE(SF2HF_A_BONUS22_COLLECTION) },
};

const sGame_PaletteDataset SF2HF_A_RYU_23_PORTRAITS_NODE[] =
{
    { L"Ryu", 0x2E868, 0x2E888, indexSF2Sprites_Ryu, 0x24 },
    { L"Ryu Start", 0x2e748, 0x2e768, indexSF2Sprites_Ryu, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_EHONDA_23_PORTRAITS_NODE[] =
{
    { L"E.Honda", 0x2E888, 0x2E8a8, indexSF2Sprites_EHonda, 0x24 },
    { L"E.Honda Start", 0x2e768, 0x2e788, indexSF2Sprites_EHonda, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_23_PORTRAITS_NODE[] =
{
    { L"Blanka", 0x2E8a8, 0x2E8c8, indexSF2Sprites_Blanka, 0x24 },
    { L"Blanka Start", 0x2e788, 0x2e7a8, indexSF2Sprites_Blanka, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_23_PORTRAITS_NODE[] =
{
    { L"Guile", 0x2E8c8, 0x2E8e8, indexSF2Sprites_Guile, 0x24 },
    { L"Guile Start", 0x2e7a8, 0x2e7c8, indexSF2Sprites_Guile, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_KEN_23_PORTRAITS_NODE[] =
{
    { L"Ken", 0x2E8e8, 0x2E908, indexSF2Sprites_Ken, 0x24 },
    { L"Ken Start", 0x2e7c8, 0x2e7e8, indexSF2Sprites_Ken, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_23_PORTRAITS_NODE[] =
{
    { L"Chun-Li", 0x2E908, 0x2E928, indexSF2Sprites_ChunLi, 0x24 },
    { L"Chun-Li Start", 0x2e7e8, 0x2E808, indexSF2Sprites_ChunLi, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_23_PORTRAITS_NODE[] =
{
    { L"Zangief", 0x2E928, 0x2E948, indexSF2Sprites_Zangief, 0x24 },
    { L"Zangief Start", 0x2E808, 0x2E828, indexSF2Sprites_Zangief, 0x24 },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_23_PORTRAITS_NODE[] =
{
    { L"Dhalsim", 0x2E948, 0x2E968, indexSF2Sprites_Dhalsim, 0x23 },
    { L"Dhalsim Start", 0x2E828, 0x2E848, indexSF2Sprites_Dhalsim, 0x24, &pairNext },
    { L"Dhalsim Part 3", 0x348d8, 0x348f8, indexSF2Sprites_Dhalsim, 0x25 },
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
