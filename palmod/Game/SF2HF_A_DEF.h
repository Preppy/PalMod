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
    indexSF2HFSprites_Stages,

    indexSF2Sprites_Stages, // 0x12
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

// Note that Dictator is flipped Start/Normal instead of Normal/Start
const sGame_PaletteDataset SF2HF_A_DICTATOR_START_NODE[] =
{
    { L"Dictator", 0x1E7B6, 0x1e7d6, indexSF2Sprites_Bison, 0x08, &pairNext2 },
    { L"Cape", 0x1e7d6, 0x1e7f6, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks 1", 0x1e836, 0x1e876, indexSF2Sprites_Bison, 0x09, &pairPrevious2 },
    { L"Psycho Attacks 2", 0x1e876, 0x1e8b6, indexSF2Sprites_Bison, 0x09, &pairPrevious3 },
    { L"Psycho Crusher", 0x1e7f6, 0x1e836, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_NORMAL_NODE[] = 
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
    // Note that Dictator is flipped Start/Normal instead of Normal/Start
    { L"Dictator Normal 1/2", 0x9500 - 0x02, 0x9520 - 0x02, indexSF2Sprites_Bison, 0x24, &pairNext },
    { L"Dictator Normal 2/2", 0x95c0 - 0x02, 0x95e0 - 0x02, indexSF2Sprites_Bison, 0x25 },
    { L"Dictator Start 1/2", 0x9700 - 0x02, 0x9720 - 0x02, indexSF2Sprites_Bison, 0x24, &pairNext },
    { L"Dictator Start 2/2", 0x97c0 - 0x02, 0x97E0 - 0x02, indexSF2Sprites_Bison, 0x25 },
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

// The ROM21 stages here are sorted in order of ROM layout
const sGame_PaletteDataset SF2HF_A_STAGES21_RYU_NODE[] =
{
    { L"Moon & Sky", 0x3be, 0x3de, indexSF2HFSprites_Stages, 0x00, &pairFullyLinkedNode },
    { L"Intermediate Rooftop", 0xa03e, 0xa09e, indexSF2HFSprites_Stages, 0x03 },
    { L"Front Rooftop 1", 0x501e, 0x507e, indexSF2HFSprites_Stages, 0x05 },
    { L"Front Rooftop 2", 0x50be, 0x511e, indexSF2HFSprites_Stages, 0x06 },
    { L"Floor", 0x4ffe, 0x501e, indexSF2HFSprites_Stages, 0x04 },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_EHONDA_NODE[] =
{
    { L"Background Wall 1", 0xa5de, 0xa61e, indexSF2HFSprites_Stages, 0x07, &pairNext9Palettes },
    { L"Background Wall 2", 0xa61e, 0xa69e, indexSF2HFSprites_Stages, 0x08 },
    { L"Background Wall 3", 0xa7de, 0xa7fe, indexSF2HFSprites_Stages, 0x09 },
    { L"Background Wall 4", 0xa3fe, 0xa41e, indexSF2HFSprites_Stages, 0x0a },
    { L"Ceiling", 0x541e, 0x5436, indexSF2HFSprites_Stages, 0x10 },
    { L"Floor 1", 0x53fe, 0x541e, indexSF2HFSprites_Stages, 0x0b },
    { L"Floor 2 (Background)", 0x543e, 0x545e, indexSF2HFSprites_Stages, 0x0c },
    { L"Left Side Wall", 0xa6de, 0xa75e, indexSF2HFSprites_Stages, 0x0d },
    { L"Bath Tub Top", 0x547e, 0x549e, indexSF2HFSprites_Stages, 0x0f },
    { L"Bath Tub Bottom", 0x468, 0x47e, indexSF2HFSprites_Stages, 0x0e },
    { L"Background After K.O. 1", 0xa55e, 0xa59e, indexSF2HFSprites_Stages, 0x11 },
    { L"Background After K.O. 2", 0xa75e, 0xa79e, indexSF2HFSprites_Stages, 0x12 },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_BLANKA_NODE[] =
{
    { L"Sky", 0x7fe, 0x83e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Left Hut 1", 0x583e, 0x585e },
    { L"Left Hut 2", 0x591e, 0x595e },
    { L"Left Hut 3", 0x58be, 0x58de },
    { L"Left Hut 4", 0x5a3e, 0x5a5e },
    { L"Left Hut & Water 1", 0x5a1e, 0x5a3e },
    { L"Left Hut & Water 2", 0x581e, 0x583e },
    { L"Left Hut & Water 3", 0x587e, 0x589e },
    { L"Water 1", 0x585e, 0x587e },
    { L"Water 2", 0x58de, 0x58fe },
    { L"Tree 1", 0xa83e, 0xa85e },
    { L"Tree 2", 0xa91e, 0xa93e },
    { L"Tree 3", 0xab1e, 0xab3e },
    { L"Tree & Crowd", 0xaabe, 0xaade },
    { L"Crowd 1", 0xa9be, 0xaa1e },
    { L"Crowd 2", 0xaa3e, 0xaa7e },
    { L"Crowd 3", 0xab5e, 0xab7e },
    { L"Crowd & Right Hut", 0xabbe, 0xabfe },
    { L"Right Hut 1", 0xa89e, 0xa8de },
    { L"Right Hut 2", 0xa95e, 0xa99e },
    { L"Floor", 0x5ade, 0x5afe },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_GUILE_NODE[] =
{
    { L"Sky 1", 0x5dfe, 0x5e1e, indexSF2HFSprites_Stages, 0x1a, &pairFullyLinkedNode },
    { L"Sky 2", 0xcde, 0xcfe, indexSF2HFSprites_Stages, 0x19 },
    { L"Sky 3", 0xbfe, 0xc1e, indexSF2HFSprites_Stages, 0x18 },
    { L"Sky & Hangars", 0xc7e, 0xcde, indexSF2HFSprites_Stages, 0x21 },
    { L"Field 1", 0xc1e, 0xc3e, indexSF2HFSprites_Stages, 0x1f },
    { L"Field 2", 0xc5e, 0xc7e, indexSF2HFSprites_Stages, 0x20 },
    { L"Air Force Logo & Ground", 0x5cbe, 0x5cfe, indexSF2HFSprites_Stages, 0x1d },
    { L"Ground", 0x5cfe, 0x5d1e, indexSF2HFSprites_Stages, 0x1e },
    { L"Tarmac", 0xc3e, 0xc5e, indexSF2HFSprites_Stages, 0x1b },
    { L"Jet 1", 0x5c1e, 0x5c3e, indexSF2HFSprites_Stages, 0x23 },
    { L"Jet 2", 0x5c5e, 0x5c9e, indexSF2HFSprites_Stages, 0x24 },
    { L"Jet 3", 0x5c9e, 0x5cbe, indexSF2HFSprites_Stages, 0x25 },
    { L"Jet & Ground", 0x5bfe, 0x5c1e, indexSF2HFSprites_Stages, 0x1c },
    { L"Cooler", 0xad1e, 0xad3e, indexSF2HFSprites_Stages, 0x2c },
    { L"Radio", 0xad3e, 0xad5e, indexSF2HFSprites_Stages, 0x2d },
    { L"Cans", 0xad7e, 0xad9e, indexSF2HFSprites_Stages, 0x2e },
    { L"Fence", 0xad9e, 0xadbe, indexSF2HFSprites_Stages, 0x22 },
    { L"Toolbox & Ground", 0x5c3e, 0x5c5e, indexSF2HFSprites_Stages, 0x26 },
    { L"Crowd 1", 0xabfe, 0xac3e, indexSF2HFSprites_Stages, 0x27 },
    { L"Crowd 2", 0xac7e, 0xac9e, indexSF2HFSprites_Stages, 0x28 },
    { L"Crowd 3", 0xacbe, 0xacde, indexSF2HFSprites_Stages, 0x29 },
    { L"Crowd 4", 0xacde, 0xacfe, indexSF2HFSprites_Stages, 0x2a },
    { L"Crowd 5", 0xad5e, 0xad7e, indexSF2HFSprites_Stages, 0x2b },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_KEN_NODE[] =
{
    { L"Sky & Water", 0x601e, 0x603e, indexSF2HFSprites_Stages, 0x31, &pairFullyLinkedNode },
    { L"Sky & Yacht 1", 0x605e, 0x607e, indexSF2HFSprites_Stages, 0x32 },
    { L"Sky & Yacht 2", 0x609e, 0x60de, indexSF2HFSprites_Stages, 0x33 },
    { L"Sky & Yacht 3", 0x603e, 0x605e, indexSF2HFSprites_Stages, 0x34 },
    { L"Sky & Yacht 4", 0x617e, 0x619e, indexSF2HFSprites_Stages, 0x35 },
    { L"Yacht & Water 1", 0x613e, 0x615e, indexSF2HFSprites_Stages, 0x36 },
    { L"Yacht & Water 2", 0x60de, 0x60fe, indexSF2HFSprites_Stages, 0x37 },
    { L"Yacht", 0x5ffe, 0x601e, indexSF2HFSprites_Stages, 0x38 },
    { L"Floor", 0x61de, 0x61f8, indexSF2HFSprites_Stages, 0x44 },
    { L"Steamboat 1", 0xb03e, 0xb05e, indexSF2HFSprites_Stages, 0x39 },
    { L"Steamboat 2", 0xb0fe, 0xb13e, indexSF2HFSprites_Stages, 0x3a },
    { L"Steamboat 3", 0xb17e, 0xb19e, indexSF2HFSprites_Stages, 0x3b },
    { L"Steamboat 4", 0xb1be, 0xb1fe, indexSF2HFSprites_Stages, 0x3c },
    { L"Steamboat 5", 0xb25e, 0xb31e, indexSF2HFSprites_Stages, 0x3d },
    { L"Crowd & Steamboat 1", 0xb05e, 0xb0fe, indexSF2HFSprites_Stages, 0x3e },
    { L"Crowd & Steamboat 2", 0xb13e, 0xb17e, indexSF2HFSprites_Stages, 0x3f },
    { L"Crowd & Steamboat 3", 0xb19e, 0xb1be, indexSF2HFSprites_Stages, 0x40 },
    { L"Crowd & Steamboat 4", 0xb1fe, 0xb25e, indexSF2HFSprites_Stages, 0x41 },
    { L"Crowd & Steamboat 5", 0xb31e, 0xb39e, indexSF2HFSprites_Stages, 0x42 },
    { L"Crowd & Steamboat 6", 0xaffe, 0xb01e, indexSF2HFSprites_Stages, 0x43 },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_CHUNLI_NODE[] =
{
    { L"Taiping Road Sign", 0x147e, 0x149e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Sky", 0xb4fe, 0xb51e },
    { L"Sky & Alley Buildings 1", 0xb3fe, 0xb41e },
    { L"Sky & Alley Buildings 2", 0xb51e, 0xb55e },
    { L"Alley Buildings 1", 0xb43e, 0xb49e },
    { L"Alley Buildings 2", 0xb59e, 0xb5be },

    { L"Deliveryman", 0x663e, 0x665e },
    { L"Deliveryman, Ground, Middle Shop, Right Shop", 0x63fe, 0x641e },
    { L"Ground & Right Shop", 0x651e, 0x653e },
    { L"Ground & Left Shop", 0x65de, 0x65fe },
    { L"Ground, Left Shop, Middle Shop 1", 0x641e, 0x643e },
    { L"Ground, Left Shop, Middle Shop 2", 0x659e, 0x65be },
    { L"Left Shop 1", 0x643e, 0x64de },
    { L"Left Shop 2", 0x657e, 0x659e },
    { L"Left Shop 3", 0x65fe, 0x661e },
    { L"Left Shop 4", 0x67de, 0x67fe },
    { L"Left Shop & Middle Shop 1", 0x64de, 0x64fe },
    { L"Left Shop & Middle Shop 2", 0x655e, 0x657e },
    { L"Left Shop & Middle Shop 3", 0x65be, 0x65de },
    { L"Left Shop, Middle Shop, Right Shop", 0x673e, 0x675e },
    { L"Middle Shop 1", 0x64fe, 0x651e },
    { L"Middle Shop 2", 0x653e, 0x655e },
    { L"Middle Shop 3", 0x661e, 0x663e },
    { L"Middle Shop 4", 0x665e, 0x667e },
    { L"Right Shop 1", 0x667e, 0x673e },
    { L"Right Shop 2", 0x675e, 0x677e },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_ZANGIEF_NODE[] =
{
    { L"Factory Background 1", 0xb7fe, 0xb89e, indexSF2HFSprites_Stages, 0x56, &pairFullyLinkedNode },
    { L"Factory Background 2", 0xb8be, 0xb95e, indexSF2HFSprites_Stages, 0x57 },
    { L"Factory Background 3", 0xb97e, 0xb99e, indexSF2HFSprites_Stages, 0x58 },
    { L"Background Fence", 0x68fe, 0x691e, indexSF2HFSprites_Stages, 0x59 },
    { L"Background Fence & Background Chain", 0x691e, 0x693e, indexSF2HFSprites_Stages, 0x5a },
    { L"Background Fence, Background Chain, Floor", 0x693e, 0x695e, indexSF2HFSprites_Stages, 0x5b },
    { L"Background Fence & Floor", 0x67fe, 0x681e, indexSF2HFSprites_Stages, 0x5c },
    { L"Background Fence & Beams", 0x68de, 0x68fe, indexSF2HFSprites_Stages, 0x5d },
    { L"Floor", 0x6b7e, 0x6b9e, indexSF2HFSprites_Stages, 0x5e },
    { L"Floor & Beams", 0x681e, 0x683e, indexSF2HFSprites_Stages, 0x5f },
    { L"Crowd 1", 0x6a9e, 0x6ade, indexSF2HFSprites_Stages, 0x60 },
    { L"Crowd 2", 0x6afe, 0x6b7e, indexSF2HFSprites_Stages, 0x61 },
    { L"Crowd 3", 0x6b9e, 0x6bde, indexSF2HFSprites_Stages, 0x62 },
    { L"Crowd & Beams 1", 0x685e, 0x687e, indexSF2HFSprites_Stages, 0x63 },
    { L"Crowd & Beams 2", 0x6a7e, 0x6a9e, indexSF2HFSprites_Stages, 0x64 },
    { L"Crowd & Beams 3", 0x6ade, 0x6afe, indexSF2HFSprites_Stages, 0x65 },
    { L"Crowd & Beams 4", 0x6bde, 0x6bfe, indexSF2HFSprites_Stages, 0x66 },
    { L"Foreground Chain", 0x183e, 0x185e, indexSF2HFSprites_Stages, 0x67 },
    { L"Foreground Fence", 0x17fe, 0x181e, indexSF2HFSprites_Stages, 0x68 },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_DHALSIM_NODE[] =
{
    { L"Painting", 0x6bfe, 0x6c1e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Painting & Column", 0x6f1e, 0x6f3e },
    { L"Painting & Curtain", 0x6f3e, 0x6f9e },
    { L"Curtain & Column 1", 0x6c1e, 0x6c5e },
    { L"Curtain & Column 2", 0x6c7e, 0x6c9e },
    { L"Floor 1", 0x6cbe, 0x6cde },
    { L"Floor 2", 0x6e9e, 0x6ebe },
    { L"Floor, Platform, Back Elephant", 0x6c9e, 0x6cbe },
    { L"Floor & Carpet", 0x6ede, 0x6f1e },
    { L"Carpet", 0x6ebe, 0x6ede },
    { L"Lattice", 0x6cfe, 0x6d1e },
    { L"Wall", 0x6d5e, 0x6d7e },
    { L"Back Elephant", 0x6c5e, 0x6c7e },
    { L"Back Elephant, Curtain, Column", 0x6cde, 0x6cfe },
    { L"Back Elephant, Curtain, Floor", 0x6d1e, 0x6d3e },
    { L"Back Elephant & Curtain", 0x6d7e, 0x6e3e },
    { L"Back Elephant & Lattice", 0x6e3e, 0x6e5e },
    { L"Back Elephant Rear & Lattice", 0x6e5e, 0x6e9e },
    { L"Back Elephant Trunk Animation, Curtain, Column", 0x6f9e, 0x6ffe },
    { L"Middle Elephant", 0xbbfe, 0xbc1e },
    { L"Middle Elephant & Floor", 0xbc1e, 0xbc3e },
    { L"Front Elephant", 0x1bfe, 0x1c1e },
    { L"Front Elephant & Floor", 0x1c1e, 0x1c3e },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_DICTATOR_NODE[] =
{
    { L"Ceiling 1", 0x6ffe, 0x701e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Ceiling 2", 0x703e, 0x705e },
    { L"Temple 1", 0x713e, 0x717e },
    { L"Temple 2", 0x71fe, 0x721e },
    { L"Temple 3", 0x723e, 0x725e },
    { L"Temple & Grass 1", 0x709e, 0x70be },
    { L"Temple & Grass 2", 0x727e, 0x729e },
    { L"Temple & Sky 1", 0x707e, 0x709e },
    { L"Temple & Sky 2", 0x70be, 0x70de },
    { L"Temple & Sky 3", 0x719e, 0x71be },
    { L"Temple, Sky, Trees", 0x701e, 0x703e },
    { L"Temple, Sky, Right Wall", 0x71be, 0x71fe },
    { L"Right Wall", 0x711e, 0x713e },
    { L"Right Wall & Grass", 0x721e, 0x723e },
    { L"Floor", 0x72fe, 0x737e },
    { L"Bell 1", 0xc01e, 0xc05e },
    { L"Bell 2", 0xc13e, 0xc15e },
    { L"Bell 3", 0xc23e, 0xc25e },
    { L"Crowd 1", 0xc0be, 0xc13e },
    { L"Crowd 2", 0xc15e, 0xc19e },
    { L"Crowd 3", 0xc21e, 0xc23e },
    { L"Crowd 4", 0xc27e, 0xc29e },
    { L"Columns", 0xc29e, 0xc2be },
    { L"Statues", 0x1ffe, 0x205e },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_SAGAT_NODE[] =
{
    { L"Bosses", 0xc3fe, 0xc43e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Sky & Temple", 0x253e, 0x255e },
    { L"Grass & Pavement 1", 0x741e, 0x743e },
    { L"Buddha 1", 0x73fe, 0x741e },
    { L"Buddha 2", 0x747e, 0x749e },
    { L"Buddha 3", 0x74be, 0x761e },
    { L"Buddha 4", 0x769e, 0x76be },
    { L"Buddha 5", 0x76de, 0x76fe },
    { L"Buddha 6", 0x771e, 0x773e },
    { L"Buddha & Right Structure", 0x767e, 0x769e },
    { L"Buddha & Grass 1", 0x761e, 0x765e },
    { L"Buddha & Grass 2", 0x76be, 0x76de },
    { L"Buddha & Grass 3", 0x76fe, 0x771e },
    { L"Buddha & Grass 4", 0x773e, 0x775e },
    { L"Grass", 0x24be, 0x24de },
    { L"Grass & Pavement 2", 0x749e, 0x74be },
    { L"Grass & Right Structure 1", 0x743e, 0x745e },
    { L"Grass & Right Structure 2", 0x765e, 0x767e },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_BOXER_NODE[] =
{
    { L"Wedding Chapel & Sky 1/4", 0x28de, 0x28fe, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
        { L"Wedding Chapel & Sky 2/4", 0x28fe, 0x291e },
        { L"Wedding Chapel & Sky 3/4", 0x291e, 0x293e },
        { L"Wedding Chapel & Sky 4/4", 0x293e, 0x295e },
    { L"Sassy Sally's Signage 1/2", 0x2a9e, 0x2abe },
        { L"Sassy Sally's Signage 2/2", 0x2abe, 0x2ade },
    { L"Misc. Signage & Sky 1/4", 0x2ade, 0x2afe },
        { L"Misc. Signage & Sky 2/4", 0x2afe, 0x2b1e },
        { L"Misc. Signage & Sky 3/4", 0x2b1e, 0x2b3e },
        { L"Misc. Signage & Sky 4/4", 0x2b3e, 0x2b5e },

    { L"Capcom 1/3", 0x799e, 0x79be },
        { L"Capcom 2/3", 0x79be, 0x79de },
        { L"Capcom 3/3", 0x79de, 0x79fe },
    { L"Golden Nugget", 0x797e, 0x799e },
    { L"Golden Nugget & Central Building 1/3", 0x791e, 0x793e },
        { L"Golden Nugget & Central Building 2/3", 0x793e, 0x795e },
        { L"Golden Nugget & Central Building 3/3", 0x795e, 0x797e },
    { L"Central Building 1", 0x79fe, 0x7a1e },
    { L"Central Building 2", 0x7a9e, 0x7abe },
    { L"Central Building 3", 0x7bbe, 0x7bde },
    { L"Golden Goose & Central Building 1/4", 0x7a1e, 0x7a3e },
        { L"Golden Goose & Central Building 2/4", 0x7a3e, 0x7a5e },
        { L"Golden Goose & Central Building 3/4", 0x7a5e, 0x7a7e },
        { L"Golden Goose & Central Building 4/4", 0x7a7e, 0x7a9e },
    { L"Street & Central Building", 0x7bde, 0x7bfe },
    { L"Misc. Signage", 0x7ade, 0x7afe },
    { L"Side Buildings & Neon 1/2", 0x78be, 0x78de },
        { L"Side Buildings & Neon 2/2", 0x78de, 0x78fe },
    { L"Casino, Side Buildings, Street 1/6", 0x77fe, 0x781e },
        { L"Casino, Side Buildings, Street 2/6", 0x781e, 0x783e },
        { L"Casino, Side Buildings, Street 3/6", 0x783e, 0x785e },
        { L"Casino, Side Buildings, Street 4/6", 0x785e, 0x787e },
        { L"Casino, Side Buildings, Street 5/6", 0x787e, 0x789e },
        { L"Casino, Side Buildings, Street 6/6", 0x789e, 0x78be },

    { L"Floor: LAS VEGAS and Ground 1/3", 0x7afe, 0x7b1e },
        { L"Floor: LAS VEGAS and Ground 2/3", 0x7b1e, 0x7b3e },
        { L"Floor: LAS VEGAS and Ground 3/3", 0x7b3e, 0x7b5e },
    { L"Floor: Lights 1/3", 0x7b5e, 0x7b7e },
        { L"Floor: Lights 2/3", 0x7b7e, 0x7b9e },
        { L"Floor: Lights 3/3", 0x7b9e, 0x7bbe },
    { L"Crowd 1", 0xc81e, 0xc83e },
    { L"Crowd 2", 0xc85e, 0xc87e },
    { L"Crowd 3", 0xc8be, 0xc8de },
    { L"Crowd 4", 0xca3e, 0xca5e },
    { L"Crowd & Left Car 1", 0xc87e, 0xc89e },
    { L"Crowd & Left Car 2", 0xc9fe, 0xca3e },
    { L"Crowd & Left Car 3", 0xcb1e, 0xcb3e },
    { L"Crowd & Right Car 1", 0xc89e, 0xc8be },
    { L"Crowd & Right Car 2", 0xca5e, 0xca7e },
    { L"Crowd & Right Car 3", 0xca9e, 0xcade },
    { L"Crowd & Right Car 4", 0xcafe, 0xcb1e },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_CLAW_NODE[] =
{
    { L"Wall & Sign, part 1 (\"Meson\")",               0x7bfe, 0x7c1e, indexSF2Sprites_Stages, 0x32, &pairFullyLinkedNode },
        { L"Wall & Sign, part 2 (\"Meson de\")",            0x7c1e, 0x7c3e, indexSF2Sprites_Stages, 0x32 },
        { L"Wall & Sign, part 3 (\"Meson de la\")",         0x7c3e, 0x7c5e, indexSF2Sprites_Stages, 0x32 },
        { L"Wall & Sign, part 5 (blank)",                   0x7c7e, 0x7c9e, indexSF2Sprites_Stages, 0x32 },
        // Displaying last for layering
        { L"Wall & Sign, part 4 (\"Meson de la Taberna\")", 0x7c5e, 0x7c7e, indexSF2Sprites_Stages, 0x32 },
    { L"Background wall, lamp wall (darkest shade)",     0x7cfe, 0x7d1e, indexSF2Sprites_Stages, 0x34 },
        { L"Background wall, lamp wall (middle shade)",     0x7d1e, 0x7d3e, indexSF2Sprites_Stages, 0x34 },
        { L"Background wall, lamp wall (lightest shade)",   0x7d3e, 0x7d5e, indexSF2Sprites_Stages, 0x34 },
    { L"Background wall, archway lower part + people + red trimming on top of Foreground wall", 0x7ede, 0x7efe, indexSF2Sprites_Stages, 0x37 },
    { L"Background wall, archway upper part", 0x7efe, 0x7f1e, indexSF2Sprites_Stages, 0x38 },
    { L"Background wall, torero & bull painting", 0x7f1e, 0x7f3e, indexSF2Sprites_Stages, 0x39 },
    { L"Background wall, torero & bull painting(footer) + red trimming on top of Foreground wall + side wall pieces", 0x7f5e, 0x7f7e, indexSF2Sprites_Stages, 0x3a },
    { L"Parallaxed ground", 0x7fde, 0x7ffe, indexSF2Sprites_Stages, 0x3b },

    { L"Middle layer, neon footer + feet of dancers/guitar players, part 1", 0xcc7e, 0xcc9e, indexSF2Sprites_Stages, 0x3c },
        { L"Middle layer, neon footer + feet of dancers/guitar players, part 2", 0xcc9e, 0xccbe, indexSF2Sprites_Stages, 0x3c },
        { L"Middle layer, neon footer + feet of dancers/guitar players, part 3", 0xccbe, 0xccde, indexSF2Sprites_Stages, 0x3c },
    { L"Middle layer, people cheering on the table", 0xccfe, 0xcd1e, indexSF2Sprites_Stages, 0x3d },
    { L"Middle layer, dancers", 0xcd1e, 0xcd3e, indexSF2Sprites_Stages, 0x3e },
    { L"Middle layer, guitar players", 0xcd3e, 0xcd5e, indexSF2Sprites_Stages, 0x3f },
    { L"Middle layer, people cheering on the table", 0xcd9e, 0xcdbe, indexSF2Sprites_Stages, 0x40 },
    { L"Middle layer, dancers", 0xcdbe, 0xcdde, indexSF2Sprites_Stages, 0x41 },
    { L"Middle layer, guitar players", 0xcdde, 0xcdfe, indexSF2Sprites_Stages, 0x42 },

    { L"Platform?", 0x7fbe, 0x7fde },

    { L"Cage + Brown wall on the sides", 0x2bfe, 0x2c1e, indexSF2Sprites_Stages, 0x31 },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_BONUSCAR_NODE[] =
{
    { L"Water & Sky", 0x801e, 0x803e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Water & Yacht 1", 0x80de, 0x80fe },
    { L"Water & Yacht 2", 0x813e, 0x815e },
    { L"Yacht, Flagpole, Sky", 0x80be, 0x80de },
    { L"Trees, Yacht, Sky", 0x809e, 0x80be },
    { L"Trees & Sky", 0x805e, 0x807e },
    { L"Flag, Flagpole, Sky", 0x803e, 0x805e },
    { L"Floor", 0x81de, 0x81fe },
    { L"Car & Car Shadow", 0x2ffe, 0x30be },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_BONUSCASKS_NODE[] =
{
    { L"Background Casks & Pallets", 0xd3fe, 0xd41e, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Background Casks & Gate", 0xd41e, 0xd43e },
    { L"Beams", 0x849e, 0x84be },
    { L"Beams, Conveyor, P1 Scoreboard", 0x83fe, 0x841e },
    { L"Beams, Conveyor", 0x845e, 0x847e },
    { L"Beams, P1 Scoreboard", 0x841e, 0x843e },
    { L"Beams & Floor", 0x843e, 0x845e },
    { L"Floor", 0x847e, 0x849e },
};

const sGame_PaletteDataset SF2HF_A_STAGES21_BONUSDRUMS_NODE[] =
{
    { L"Sky", 0x3bbe, 0x3bde, indexSF2HFSprites_Stages, -1, &pairFullyLinkedNode },
    { L"Crowd 1", 0x8a9e, 0x8ade },
    { L"Crowd 2", 0x8afe, 0x8b7e },
    { L"Crowd 3", 0x8b9e, 0x8bde },
    { L"Crowd & Beams 1", 0x885e, 0x887e },
    { L"Crowd & Beams 2", 0x8a7e, 0x8a9e },
    { L"Crowd & Beams 3", 0x8ade, 0x8afe },
    { L"Crowd & Beams 4", 0x8bde, 0x8bfe },
    { L"Fence", 0x88fe, 0x891e },
    { L"Fence & Beams", 0x88de, 0x88fe },
    { L"Fence & Floor", 0x87fe, 0x881e },
    { L"Floor & Beams", 0x881e, 0x883e },
    { L"Floor", 0x8b7e, 0x8b9e },
    { L"Drums", 0xd9be, 0xd9de },
};

const sDescTreeNode SF2HF_A_STAGES21_COLLECTION[] =
{
    // NOTE: This collection is used for both CE and HF
    { L"Blanka",                DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_BLANKA_NODE, ARRAYSIZE(SF2HF_A_STAGES21_BLANKA_NODE) },
    { L"Boxer",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_BOXER_NODE, ARRAYSIZE(SF2HF_A_STAGES21_BOXER_NODE) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_CHUNLI_NODE, ARRAYSIZE(SF2HF_A_STAGES21_CHUNLI_NODE) },
    { L"Claw",                  DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_CLAW_NODE, ARRAYSIZE(SF2HF_A_STAGES21_CLAW_NODE) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_DHALSIM_NODE, ARRAYSIZE(SF2HF_A_STAGES21_DHALSIM_NODE) },
    { L"Dictator",              DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_DICTATOR_NODE, ARRAYSIZE(SF2HF_A_STAGES21_DICTATOR_NODE) },
    { L"E.Honda",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_EHONDA_NODE, ARRAYSIZE(SF2HF_A_STAGES21_EHONDA_NODE) },
    { L"Guile",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_GUILE_NODE, ARRAYSIZE(SF2HF_A_STAGES21_GUILE_NODE) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_KEN_NODE, ARRAYSIZE(SF2HF_A_STAGES21_KEN_NODE) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_RYU_NODE, ARRAYSIZE(SF2HF_A_STAGES21_RYU_NODE) },
    { L"Sagat",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_SAGAT_NODE, ARRAYSIZE(SF2HF_A_STAGES21_SAGAT_NODE) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_ZANGIEF_NODE, ARRAYSIZE(SF2HF_A_STAGES21_ZANGIEF_NODE) },
    
    { L"Bonus Stage (Car)",     DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_BONUSCAR_NODE, ARRAYSIZE(SF2HF_A_STAGES21_BONUSCAR_NODE) },
    { L"Bonus Stage (Casks)",   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_BONUSCASKS_NODE, ARRAYSIZE(SF2HF_A_STAGES21_BONUSCASKS_NODE) },
    { L"Bonus Stage (Drums)",   DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_BONUSDRUMS_NODE, ARRAYSIZE(SF2HF_A_STAGES21_BONUSDRUMS_NODE) },
};

const sDescTreeNode SF2HF_A_BONUS21_COLLECTION[] =
{
    // NOTE: This collection is used for both CE and HF
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_NODE, ARRAYSIZE(SF2HF_A_BONUS21_NODE) },
};

const sDescTreeNode SF2HF_A_21_UNITS[] =
{
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2HF_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2HF_A_SELECTICON_COLLECTION, ARRAYSIZE(SF2HF_A_SELECTICON_COLLECTION) },
    { L"Stages",         DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_COLLECTION, ARRAYSIZE(SF2HF_A_STAGES21_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_COLLECTION, ARRAYSIZE(SF2HF_A_BONUS21_COLLECTION) },
};

const sGame_PaletteDataset SF2HF_A_22_BONUS_OPENING_NODE[] =
{
    { L"Intro Characters", 0x2fcfe, 0x2fe3e, indexSF2Sprites_Bonus, 0x2d },
};

const sGame_PaletteDataset SF2HF_A_22_BONUS_TITLE_NODE[] =
{
    { L"Street Fighter II'", 0x2fe5e, 0x2fe7e, indexSF2Sprites_Bonus, 0x2b },
    { L"Hyper Fighting", 0x2fcde, 0x2fcfe },
};

const sGame_PaletteDataset SF2HF_A_22_BONUS_CSELECT_NODE[] =
{
    { L"Character Select Extras", 0x3001e, 0x3007e, indexSF2Sprites_Bonus, 0x24 },
    { L"World Map Dictator", 0x2ff9e, 0x2ffbe, indexSF2Sprites_Bonus, 0x2f },
};

const sGame_PaletteDataset SF2HF_A_IN_GAME_NODE[] =
{
    // Insert Coin, Copyright, Push Start, Continue?
    { L"Insert Coin Text", 0x2da7e, 0x2da9e, indexSF2Sprites_Bonus, 0x2e },
    { L"HUD and Text", 0x2dbfe, 0x2dc3e, indexSF2Sprites_Bonus, 0x2c },
    { L"In-Game FX - Black", 0x2dbbe, 0x2dbde, indexSF2Sprites_Bonus, 0x29, &pairNextAndNext },
    // Dust, Vomit, Hit Sparks, Dizzy Stars, Rocks (Chun-Li & Sagat Stage)
    { L"In-Game FX - Dust and Green Hitsparks", 0x2dbde, 0x2dbfe, indexSF2Sprites_Bonus, 0x28 },
    // HUD Text, Hit Sparks, Dizzy Stars, Dizzy Birds, Hadouken, Hadouken Explosion, Kikouken Explosion, Sonic Boom Explosion, Glass Shards (Car Bonus Stage), Drum Fire on Hit (Drum Bonus Stage)
    // Vomit, Yoga Fire, Yoga Flame, Hit by Yoga Fire, Hit by Yoga Flame, Hit by Electricity, Tiger Shot Explosion, Car Fluids (Car Bonus Stage)
    { L"In-Game FX - Various", 0x2dc3e, 0x2dc7e, indexSF2Sprites_Bonus, 0x2a },
};

const sDescTreeNode SF2HF_A_22_BONUS_COLLECTION[] =
{
    { L"Opening Cinematic", DESC_NODETYPE_TREE, (void*)SF2HF_A_22_BONUS_OPENING_NODE, ARRAYSIZE(SF2HF_A_22_BONUS_OPENING_NODE) },
    { L"Title Screen",      DESC_NODETYPE_TREE, (void*)SF2HF_A_22_BONUS_TITLE_NODE, ARRAYSIZE(SF2HF_A_22_BONUS_TITLE_NODE) },
    { L"Character Select",  DESC_NODETYPE_TREE, (void*)SF2HF_A_22_BONUS_CSELECT_NODE, ARRAYSIZE(SF2HF_A_22_BONUS_CSELECT_NODE) },
    { L"In-Game Palettes",  DESC_NODETYPE_TREE, (void*)SF2HF_A_IN_GAME_NODE, ARRAYSIZE(SF2HF_A_IN_GAME_NODE) },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_BLANKA_NODE[] =
{
    { L"Posts", 0x2e1de, 0x2e1fe, indexSF2HFSprites_Stages, 0x49, &pairFullyLinkedNode },
    { L"Crowd & Stump", 0x2e1fe, 0x2e21e, indexSF2HFSprites_Stages, 0x4a },
    { L"Crowd & Right Hut", 0x2e21e, 0x2e23e, indexSF2HFSprites_Stages, 0x4b },
    { L"Crowd", 0x2e23e, 0x2e25e, indexSF2HFSprites_Stages, 0x4c },
    { L"Fish", 0x2e25e, 0x2e27e, indexSF2HFSprites_Stages, 0x4d },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_BOXER_NODE[] =
{
    { L"Show Girls", 0x2f1be, 0x2f27e, indexSF2Sprites_Stages, 0x1b },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_CHUNLI_NODE[] =
{
    { L"Blue Biker", 0x2e81e, 0x2e83e, indexSF2Sprites_Stages, 0x29, &pairFullyLinkedNode },
    { L"Green Biker", 0x2e83e, 0x2e85e, indexSF2Sprites_Stages, 0x2a },
    { L"Red Biker", 0x2e85e, 0x2e87e, indexSF2Sprites_Stages, 0x2b },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_DHALSIM_NODE[] =
{
    { L"Pots", 0x2ec40, 0x2ec80, indexSF2Sprites_Stages, 0x58 },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_DICTATOR_NODE[] =
{
    { L"Statues (Destroyed)", 0x2ee5e, 0x2ee7e, indexSF2HFSprites_Stages, 0x55 },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_EHONDA_NODE[] =
{
    { L"Left Side Wall", 0x2dfde, 0x2dffe, indexSF2HFSprites_Stages, 0x13, &pairNext3Palettes },
    { L"Soap & Bucket", 0x2dfbe, 0x2dfde, indexSF2HFSprites_Stages, 0x15 },
    { L"Water Droplets & Bathtub Overspill", 0x2dffe, 0x2e01e, indexSF2HFSprites_Stages, 0x14 },
    { L"Lantern", 0x2e05e, 0x2e07e, indexSF2HFSprites_Stages, 0x16 },
    { L"Lantern After KO", 0x2e01e, 0x2e05e, indexSF2HFSprites_Stages, 0x17 },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_GUILE_NODE[] =
{
    { L"Crates", 0x2e41e, 0x2e43e, indexSF2HFSprites_Stages, 0x30, &pairFullyLinkedNode },
    { L"Jet", 0x2e43e, 0x2e47e, indexSF2HFSprites_Stages, 0x2f },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_KEN_NODE[] =
{
    { L"Foreground Bollards", 0x2e5fe, 0x2e61e, indexSF2HFSprites_Stages, 0x46 },
    { L"Background Bollards & Steamboat", 0x2e63e, 0x2e65e, indexSF2HFSprites_Stages, 0x45 },
    { L"Drum", 0x2e65e, 0x2e67e, indexSF2HFSprites_Stages, 0x47 },
    { L"Drum (Destroyed)", 0x2e59e, 0x2e5be, indexSF2HFSprites_Stages, 0x48 },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_RYU_NODE[] =
{
    { L"Intermediate Rooftop & Birds", 0x2de1e, 0x2de3e, indexSF2HFSprites_Stages, 0x03, &pairFullyLinkedNode },
    { L"Background Building", 0x2de5e, 0x2de7e, indexSF2HFSprites_Stages, 0x01 },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_ZANGIEF_NODE[] =
{
    { L"Chain", 0x2e9de, 0x2e9fe, indexSF2HFSprites_Stages, 0x69, &pairNext },
    { L"Extinguisher", 0x2e9fe, 0x2ea1e, indexSF2HFSprites_Stages, 0x6a },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_BONUSCAR_NODE[] =
{
    { L"Car 1", 0x2f5be, 0x2f63e, indexSF2HFSprites_Stages, 0x4e, &pairFullyLinkedNode },
    { L"Car 2", 0x2f65e, 0x2f67e, indexSF2HFSprites_Stages, 0x4f },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_BONUSCASKS_NODE[] =
{
    { L"P2 Scoreboard", 0x2f7fe, 0x2f81e, indexSF2HFSprites_Stages, 0x50, &pairFullyLinkedNode },
    { L"Scoreboard Tallies", 0x2f81e, 0x2f83e, indexSF2HFSprites_Stages, 0x51 },
    { L"Rolling Casks", 0x2f85e, 0x2f87e, indexSF2HFSprites_Stages, 0x52 },
};

const sGame_PaletteDataset SF2HF_A_22_STAGES_BONUSDRUMS_NODE[] =
{
    { L"Drums", 0x2fa5e, 0x2fa7e, indexSF2HFSprites_Stages, 0x53, &pairFullyLinkedNode },
    { L"Flames", 0x2fa3e, 0x2fa5e, indexSF2HFSprites_Stages, 0x54 },
};

const sDescTreeNode SF2HF_A_22_STAGES_COLLECTION[] =
{
    { L"Blanka",                DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_BLANKA_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_BLANKA_NODE) },
    { L"Boxer",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_BOXER_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_BOXER_NODE) },
    { L"Chun-Li",               DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_CHUNLI_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_CHUNLI_NODE) },
    { L"Dhalsim",               DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_DHALSIM_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_DHALSIM_NODE) },
    { L"Dictator",              DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_DICTATOR_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_DICTATOR_NODE) },
    { L"E.Honda",               DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_EHONDA_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_EHONDA_NODE) },
    { L"Guile",                 DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_GUILE_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_GUILE_NODE) },
    { L"Ken",                   DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_KEN_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_KEN_NODE) },
    { L"Ryu",                   DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_RYU_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_RYU_NODE) },
    { L"Zangief",               DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_ZANGIEF_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_ZANGIEF_NODE) },

    { L"Bonus Stage (Car)",     DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_BONUSCAR_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_BONUSCAR_NODE) },
    { L"Bonus Stage (Casks)",   DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_BONUSCASKS_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_BONUSCASKS_NODE) },
    { L"Bonus Stage (Drums)",   DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_BONUSDRUMS_NODE, ARRAYSIZE(SF2HF_A_22_STAGES_BONUSDRUMS_NODE) },
};

const sDescTreeNode SF2HF_A_22_UNITS[] =
{
    { L"Blanka",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_COLLECTION, ARRAYSIZE(SF2HF_A_BLANKA_COLLECTION) },
    { L"Chun-Li",   DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_COLLECTION, ARRAYSIZE(SF2HF_A_CHUNLI_COLLECTION) },
    { L"Dhalsim",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_COLLECTION, ARRAYSIZE(SF2HF_A_DHALSIM_COLLECTION) },
    { L"E.Honda",   DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_COLLECTION, ARRAYSIZE(SF2HF_A_EHONDA_COLLECTION) },
    { L"Guile",     DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_COLLECTION, ARRAYSIZE(SF2HF_A_GUILE_COLLECTION) },
    { L"Ken",       DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_COLLECTION, ARRAYSIZE(SF2HF_A_KEN_COLLECTION) },
    { L"Ryu",       DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_COLLECTION, ARRAYSIZE(SF2HF_A_RYU_COLLECTION) },
    { L"Zangief",   DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_COLLECTION, ARRAYSIZE(SF2HF_A_ZANGIEF_COLLECTION) },

    { L"Boxer",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BOXER_COLLECTION, ARRAYSIZE(SF2HF_A_BOXER_COLLECTION) },
    { L"Claw",      DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_COLLECTION, ARRAYSIZE(SF2HF_A_CLAW_COLLECTION) },
    { L"Sagat",     DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGAT_COLLECTION, ARRAYSIZE(SF2HF_A_SAGAT_COLLECTION) },
    { L"Dictator",  DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_COLLECTION, ARRAYSIZE(SF2HF_A_DICTATOR_COLLECTION) },

    { L"Stages",    DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_COLLECTION, ARRAYSIZE(SF2HF_A_22_STAGES_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_22_BONUS_COLLECTION, ARRAYSIZE(SF2HF_A_22_BONUS_COLLECTION) },
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

const sGame_PaletteDataset SF2HF_A_23_BONUS_NODE[] =
{
    // (Order: Ryu, E.Honda, Blanka, Guile, Ken, Chun-Li, Zangief, Dhalsim, Dictator, Sagat, Boxer, Claw, Car, Casks, Drums)
    { L"Stage Player Character Shadows", 0x1a4e, 0x1a6e },
};

const sDescTreeNode SF2HF_A_23_PORTRAITS_COLLECTION[] =
{
    { L"Blanka",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_BLANKA_23_PORTRAITS_NODE) },
    { L"Chun-Li",   DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_CHUNLI_23_PORTRAITS_NODE) },
    { L"Dhalsim",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_DHALSIM_23_PORTRAITS_NODE) },
    { L"E.Honda",   DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_EHONDA_23_PORTRAITS_NODE) },
    { L"Guile",     DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_GUILE_23_PORTRAITS_NODE) },
    { L"Ken",       DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_KEN_23_PORTRAITS_NODE) },
    { L"Ryu",       DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_RYU_23_PORTRAITS_NODE) },
    { L"Zangief",   DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_23_PORTRAITS_NODE, ARRAYSIZE(SF2HF_A_ZANGIEF_23_PORTRAITS_NODE) },
};

const sDescTreeNode SF2HF_A_23_BONUS_COLLECTION[] =
{
    { L"Bonus",     DESC_NODETYPE_TREE, (void*)SF2HF_A_23_BONUS_NODE, ARRAYSIZE(SF2HF_A_23_BONUS_NODE) },
};

const sDescTreeNode SF2HF_A_23_UNITS[] =
{
    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)SF2HF_A_23_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_23_PORTRAITS_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_23_BONUS_COLLECTION, ARRAYSIZE(SF2HF_A_23_BONUS_COLLECTION) },
};

const sDescTreeNode SF2HF_A_UNITS_MONO[] =
{
    { L"Blanka",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BLANKA_COLLECTION, ARRAYSIZE(SF2HF_A_BLANKA_COLLECTION) },
    { L"Chun-Li",   DESC_NODETYPE_TREE, (void*)SF2HF_A_CHUNLI_COLLECTION, ARRAYSIZE(SF2HF_A_CHUNLI_COLLECTION) },
    { L"Dhalsim",   DESC_NODETYPE_TREE, (void*)SF2HF_A_DHALSIM_COLLECTION, ARRAYSIZE(SF2HF_A_DHALSIM_COLLECTION) },
    { L"E.Honda",   DESC_NODETYPE_TREE, (void*)SF2HF_A_EHONDA_COLLECTION, ARRAYSIZE(SF2HF_A_EHONDA_COLLECTION) },
    { L"Guile",     DESC_NODETYPE_TREE, (void*)SF2HF_A_GUILE_COLLECTION, ARRAYSIZE(SF2HF_A_GUILE_COLLECTION) },
    { L"Ken",       DESC_NODETYPE_TREE, (void*)SF2HF_A_KEN_COLLECTION, ARRAYSIZE(SF2HF_A_KEN_COLLECTION) },
    { L"Ryu",       DESC_NODETYPE_TREE, (void*)SF2HF_A_RYU_COLLECTION, ARRAYSIZE(SF2HF_A_RYU_COLLECTION) },
    { L"Zangief",   DESC_NODETYPE_TREE, (void*)SF2HF_A_ZANGIEF_COLLECTION, ARRAYSIZE(SF2HF_A_ZANGIEF_COLLECTION) },

    { L"Boxer",     DESC_NODETYPE_TREE, (void*)SF2HF_A_BOXER_COLLECTION, ARRAYSIZE(SF2HF_A_BOXER_COLLECTION) },
    { L"Claw",      DESC_NODETYPE_TREE, (void*)SF2HF_A_CLAW_COLLECTION, ARRAYSIZE(SF2HF_A_CLAW_COLLECTION) },
    { L"Sagat",     DESC_NODETYPE_TREE, (void*)SF2HF_A_SAGAT_COLLECTION, ARRAYSIZE(SF2HF_A_SAGAT_COLLECTION) },
    { L"Dictator",  DESC_NODETYPE_TREE, (void*)SF2HF_A_DICTATOR_COLLECTION, ARRAYSIZE(SF2HF_A_DICTATOR_COLLECTION) },

    { L"ROM22 Stages",    DESC_NODETYPE_TREE, (void*)SF2HF_A_22_STAGES_COLLECTION, ARRAYSIZE(SF2HF_A_22_STAGES_COLLECTION) },
    { L"ROM22 Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_22_BONUS_COLLECTION, ARRAYSIZE(SF2HF_A_22_BONUS_COLLECTION) },

    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2HF_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2HF_A_SELECTICON_COLLECTION, ARRAYSIZE(SF2HF_A_SELECTICON_COLLECTION) },
    { L"ROM21 Stages",         DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES21_COLLECTION, ARRAYSIZE(SF2HF_A_STAGES21_COLLECTION) },
    { L"ROM21 Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_COLLECTION, ARRAYSIZE(SF2HF_A_BONUS21_COLLECTION) },

    { L"Continue Portraits", DESC_NODETYPE_TREE, (void*)SF2HF_A_23_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_23_PORTRAITS_COLLECTION) },
    { L"ROM23 Bonus Palettes", DESC_NODETYPE_TREE, (void*)SF2HF_A_23_BONUS_COLLECTION, ARRAYSIZE(SF2HF_A_23_BONUS_COLLECTION) },
};
