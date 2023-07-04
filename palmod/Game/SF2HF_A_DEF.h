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
};

const sGame_PaletteDataset SF2HF_A_EHONDA_SELECTICON_NODE[] =
{
    { L"E.Honda", 0xe440 - 0x02, 0xe460 - 0x02, indexSF2Sprites_EHonda, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_BLANKA_SELECTICON_NODE[] =
{
    { L"Blanka", 0xe460 - 0x02, 0xe480 - 0x02, indexSF2Sprites_Blanka, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_GUILE_SELECTICON_NODE[] =
{
    { L"Guile", 0xe480 - 0x02, 0xe4a0 - 0x02, indexSF2Sprites_Guile, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_KEN_SELECTICON_NODE[] =
{
    { L"Ken", 0xe4a0 - 0x02, 0xe4c0 - 0x02, indexSF2Sprites_Ken, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_CHUNLI_SELECTICON_NODE[] =
{
    { L"Chun-Li", 0xe4c0 - 0x02, 0xe4e0 - 0x02, indexSF2Sprites_ChunLi, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_ZANGIEF_SELECTICON_NODE[] =
{
    { L"Zangief", 0xe4e0 - 0x02, 0xe500 - 0x02, indexSF2Sprites_Zangief, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_DHALSIM_SELECTICON_NODE[] =
{
    { L"Dhalsim", 0xe500 - 0x02, 0xe520 - 0x02, indexSF2Sprites_Dhalsim, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_DICTATOR_SELECTICON_NODE[] =
{
    { L"Dictator", 0xe720 - 0x02, 0xe740 - 0x02, indexSF2Sprites_Bison, 0x26 },
};

const sGame_PaletteDataset SF2HF_A_SAGATBOXER_SELECTICON_NODE[] =
{
    { L"Sagat and Boxer", 0xe740 - 0x02, 0xe760 - 0x02, indexSF2Sprites_Bonus, 0x18 },
};

const sGame_PaletteDataset SF2HF_A_CLAW_SELECTICON_NODE[] =
{
    { L"Claw", 0xe760 - 0x02, 0xe780 - 0x02, indexSF2Sprites_Vega, 0x26 },
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
    { L"World Map Background", 0xe51e, 0xe5de },
};

const sGame_PaletteDataset SF2HF_A_STAGES_NODE[] =
{
    { L"Blanka Stage - Sky", 0x7de, 0x85e },
    { L"Blanka Stage - Background", 0x57fe, 0x59be },
    { L"Blanka Stage - Ground", 0x5a1e, 0x5afe },

    { L"Boxer Stage (1/2)", 0x77fe, 0x79fe },
    { L"Boxer Stage (2/2)", 0x79fe, 0x7bfe },

    { L"Chun-Li Stage (1/2)", 0x63fe, 0x65fe },
    { L"Chun-Li Stage (2/2)", 0x65fe, 0x677e },

    { L"Dhalsim Stage (1/3)", 0x6bfe, 0x6dfe },
    { L"Dhalsim Stage (2/3)", 0x6dfe, 0x6ffe },
    { L"Dhalsim Stage (3/3)", 0x6ffe, 0x700e },
    { L"Dhalsim Stage - Elephant", 0x1bfe, 0x1c3e },

    { L"E.Honda Stage - Floor & Ceiling", 0x53fe, 0x54be },

    { L"Guile Stage - Sky Top Half", 0x5e00, 0x5f40 },
    { L"Guile Stage - Sky Bottom Half", 0xbfe, 0xcfe },
    { L"Guile Stage - Ground & Jet", 0x5bfe, 0x5d3e },

    { L"Ken Stage (1/2)", 0x5fde, 0x61de },
    { L"Ken Stage (2/2)", 0x61de, 0x61fe },

    { L"Ryu Stage - Moon & Sky", 0x25e, 0x3de },
    { L"Ryu Stage - Ground", 0x4ffe, 0x51de },

    { L"Sagat Stage - Background Grass", 0x249e, 0x251e },
    { L"Sagat Stage - Ground & Buddha (1/2)", 0x73fe, 0x75fe },
    { L"Sagat Stage - Ground & Buddha (2/2)", 0x75fe, 0x775e },

    { L"Zangief Stage - Background & Crowd", 0x67fe, 0x697e },
    { L"Zangief Stage - Floor & Crowd", 0x6a5e, 0x6bfe },
};

const sDescTreeNode SF2HF_A_BONUS21_COLLECTION[] =
{
    { L"Stages",            DESC_NODETYPE_TREE, (void*)SF2HF_A_STAGES_NODE, ARRAYSIZE(SF2HF_A_STAGES_NODE) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SF2HF_A_BONUS21_NODE, ARRAYSIZE(SF2HF_A_BONUS21_NODE) },
};

const sDescTreeNode SF2HF_A_21_UNITS[] =
{
    { L"Portraits",      DESC_NODETYPE_TREE, (void*)SF2HF_A_PORTRAITS_COLLECTION, ARRAYSIZE(SF2HF_A_PORTRAITS_COLLECTION) },
    { L"Select Screen",  DESC_NODETYPE_TREE, (void*)SF2HF_A_SELECTICON_COLLECTION, ARRAYSIZE(SF2HF_A_SELECTICON_COLLECTION) },
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
