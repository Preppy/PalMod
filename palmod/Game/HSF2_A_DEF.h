#pragma once

// transparency color is the last color on cps2 graphics
// the first 2 bytes of a palette on ST is how many palette lines it has

const std::vector<UINT16> HSF2_A_IMGIDS_USED =
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
    indexSF2Sprites_Cammy,
    indexSF2Sprites_THawk,
    indexSF2Sprites_FeiLong,
    indexSF2Sprites_DeeJay,
    indexSF2Sprites_Gouki,
    indexSF2Sprites_Bonus,
    indexSF2Sprites_Stages,
};

const sGame_PaletteDataset HSF2_A_RYU_WW_PALETTES[] =
{
    { L"Palette 1", 0x445f2, 0x44612, indexSF2Sprites_Ryu, 0x00 },
    { L"Palette 2", 0x44694, 0x446b4, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset HSF2_A_RYU_CE_PALETTES[] =
{
    { L"Palette 1", 0x44736, 0x44756, indexSF2Sprites_Ryu, 0x00 },
    { L"Palette 2", 0x447d8, 0x447F8, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset HSF2_A_RYU_HF_PALETTES[] =
{
    { L"Palette 1", 0x4487a, 0x4489a, indexSF2Sprites_Ryu, 0x00 },
    { L"Palette 2", 0x4491c, 0x4493c, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset HSF2_A_RYU_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x444ae, 0x444ce, indexSF2Sprites_Ryu, 0x00 },
    { L"Palette 2/Start", 0x44550, 0x44570, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset HSF2_A_RYU_ST_PALETTES[] =
{
    { L"Jab", 0x43f9e, 0x83FBE, indexSF2Sprites_Ryu, 0x00 },
    { L"Jab Super Trail 1", 0x43fde, 0x43ffe, indexSF2Sprites_Ryu, 0x00 },
    { L"Jab Super Trail 2", 0x43ffe, 0x4401E, indexSF2Sprites_Ryu, 0x00 },
    { L"Jab Super Trail 3", 0x4401e, 0x4403E, indexSF2Sprites_Ryu, 0x00 },
    { L"Strong", 0x44040, 0x44060, indexSF2Sprites_Ryu, 0x00 },
    { L"Strong Super Trail 1", 0x44080, 0x440A0, indexSF2Sprites_Ryu, 0x00 },
    { L"Strong Super Trail 2", 0x440A0, 0x440C0, indexSF2Sprites_Ryu, 0x00 },
    { L"Strong Super Trail 3", 0x440C0, 0x440E0, indexSF2Sprites_Ryu, 0x00 },
    { L"Fierce", 0x440e2, 0x44102, indexSF2Sprites_Ryu, 0x00 },
    { L"Fierce Super Trail 1", 0x44122, 0x44142, indexSF2Sprites_Ryu, 0x00 },
    { L"Fierce Super Trail 2", 0x44142, 0x44162, indexSF2Sprites_Ryu, 0x00 },
    { L"Fierce Super Trail 3", 0x44162, 0x44182, indexSF2Sprites_Ryu, 0x00 },
    { L"Short", 0x44184, 0x441A4, indexSF2Sprites_Ryu, 0x00 },
    { L"Short Super Trail 1", 0x441c4, 0x441e4, indexSF2Sprites_Ryu, 0x00 },
    { L"Short Super Trail 2", 0x441e4, 0x44204, indexSF2Sprites_Ryu, 0x00 },
    { L"Short Super Trail 3", 0x44204, 0x44224, indexSF2Sprites_Ryu, 0x00 },
    { L"Forward", 0x44226, 0x44246, indexSF2Sprites_Ryu, 0x00 },
    { L"Forward Super Trail 1", 0x44266, 0x44286, indexSF2Sprites_Ryu, 0x00 },
    { L"Forward Super Trail 2", 0x44286, 0x442A6, indexSF2Sprites_Ryu, 0x00 },
    { L"Forward Super Trail 3", 0x442A6, 0x442C6, indexSF2Sprites_Ryu, 0x00 },
    { L"Roundhouse", 0x442c8, 0x442e8, indexSF2Sprites_Ryu, 0x00 },
    { L"Roundhouse Super Trail 1", 0x44308, 0x44328, indexSF2Sprites_Ryu, 0x00 },
    { L"Roundhouse Super Trail 2", 0x44328, 0x44348, indexSF2Sprites_Ryu, 0x00 },
    { L"Roundhouse Super Trail 3", 0x44348, 0x44368, indexSF2Sprites_Ryu, 0x00 },
    { L"Start", 0x4436a, 0x4438a, indexSF2Sprites_Ryu, 0x00 },
    { L"Start Super Trail 1", 0x443aa, 0x443ca, indexSF2Sprites_Ryu, 0x00 },
    { L"Start Super Trail 2", 0x443ca, 0x443ea, indexSF2Sprites_Ryu, 0x00 },
    { L"Start Super Trail 3", 0x443ea, 0x4440A, indexSF2Sprites_Ryu, 0x00 },
    { L"Hold", 0x4440c, 0x4442c, indexSF2Sprites_Ryu, 0x00 },
    { L"Hold Super Trail 1", 0x4444c, 0x4446c, indexSF2Sprites_Ryu, 0x00 },
    { L"Hold Super Trail 2", 0x4446c, 0x4448c, indexSF2Sprites_Ryu, 0x00 },
    { L"Hold Super Trail 3", 0x4448c, 0x444ac, indexSF2Sprites_Ryu, 0x00 },
};

const sDescTreeNode HSF2_A_RYU_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_WW_PALETTES,    ARRAYSIZE(HSF2_A_RYU_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_CE_PALETTES,    ARRAYSIZE(HSF2_A_RYU_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_HF_PALETTES,    ARRAYSIZE(HSF2_A_RYU_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_RYU_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_ST_PALETTES,     ARRAYSIZE(HSF2_A_RYU_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_EHONDA_WW_PALETTES[] =
{
    { L"Palette 1", 0x45032, 0x45052, indexSF2Sprites_EHonda, 0x00 },
    { L"Palette 2", 0x450d4, 0x450f4, indexSF2Sprites_EHonda, 0x00 },
};
const sGame_PaletteDataset HSF2_A_EHONDA_CE_PALETTES[] =
{
    { L"Palette 1", 0x45176, 0x45196, indexSF2Sprites_EHonda, 0x00 },
    { L"Palette 2", 0x45218, 0x45238, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset HSF2_A_EHONDA_HF_PALETTES[] =
{
    { L"Palette 1", 0x452ba, 0x452da, indexSF2Sprites_EHonda, 0x00 },
    { L"Palette 2", 0x4535c, 0x4537c, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset HSF2_A_EHONDA_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x44eee, 0x44F0E, indexSF2Sprites_EHonda, 0x00 },
    { L"Palette 2/Start", 0x44f90, 0x44fb0, indexSF2Sprites_EHonda, 0x00 },
};


const sGame_PaletteDataset HSF2_A_EHONDA_ST_PALETTES[] =
{
    { L"Jab", 0x449de, 0x449fe, indexSF2Sprites_EHonda, 0x00 },
    { L"Jab Super Trail 1", 0x44a1e, 0x44a3e, indexSF2Sprites_EHonda, 0x00 },
    { L"Jab Super Trail 2", 0x44A3E, 0x44A5E, indexSF2Sprites_EHonda, 0x00 },
    { L"Jab Super Trail 3", 0x44A5E, 0x44A7E, indexSF2Sprites_EHonda, 0x00 },
    { L"Strong", 0x44a80, 0x44aa0, indexSF2Sprites_EHonda, 0x00 },
    { L"Strong Super Trail 1", 0x44AC0, 0x44Ae0, indexSF2Sprites_EHonda, 0x00 },
    { L"Strong Super Trail 2", 0x44Ae0, 0x44B00, indexSF2Sprites_EHonda, 0x00 },
    { L"Strong Super Trail 3", 0x44B00, 0x44B20, indexSF2Sprites_EHonda, 0x00 },
    { L"Fierce", 0x44B22, 0x44B42, indexSF2Sprites_EHonda, 0x00 },
    { L"Fierce Super Trail 1", 0x44B62, 0x44B82, indexSF2Sprites_EHonda, 0x00 },
    { L"Fierce Super Trail 2", 0x44B82, 0x44Ba2, indexSF2Sprites_EHonda, 0x00 },
    { L"Fierce Super Trail 3", 0x44Ba2, 0x44Bc2, indexSF2Sprites_EHonda, 0x00 },
    { L"Short", 0x44Bc4, 0x44Be4, indexSF2Sprites_EHonda, 0x00 },
    { L"Short Super Trail 1", 0x44C04, 0x44C24, indexSF2Sprites_EHonda, 0x00 },
    { L"Short Super Trail 2", 0x44C24, 0x44C44, indexSF2Sprites_EHonda, 0x00 },
    { L"Short Super Trail 3", 0x44C44, 0x44C64, indexSF2Sprites_EHonda, 0x00 },
    { L"Forward", 0x44C66, 0x44C86, indexSF2Sprites_EHonda, 0x00 },
    { L"Forward Super Trail 1", 0x44ca6, 0x44cc6, indexSF2Sprites_EHonda, 0x00 },
    { L"Forward Super Trail 2", 0x44cc6, 0x44ce6, indexSF2Sprites_EHonda, 0x00 },
    { L"Forward Super Trail 3", 0x44ce6, 0x44D06, indexSF2Sprites_EHonda, 0x00 },
    { L"Roundhouse", 0x44D08, 0x44D28, indexSF2Sprites_EHonda, 0x00 },
    { L"Roundhouse Super Trail 1", 0x44d48, 0x44d68, indexSF2Sprites_EHonda, 0x00 },
    { L"Roundhouse Super Trail 2", 0x44d68, 0x44d88, indexSF2Sprites_EHonda, 0x00 },
    { L"Roundhouse Super Trail 3", 0x44d88, 0x44da8, indexSF2Sprites_EHonda, 0x00 },
    { L"Start", 0x44daa, 0x44dca, indexSF2Sprites_EHonda, 0x00 },
    { L"Start Super Trail 1", 0x44dea, 0x44E0A, indexSF2Sprites_EHonda, 0x00 },
    { L"Start Super Trail 2", 0x44E0A, 0x44E2A, indexSF2Sprites_EHonda, 0x00 },
    { L"Start Super Trail 3", 0x44E2A, 0x44E4A, indexSF2Sprites_EHonda, 0x00 },
    { L"Hold", 0x44E4c, 0x44E6c, indexSF2Sprites_EHonda, 0x00 },
    { L"Hold Super Trail 1", 0x44e8c, 0x44eac, indexSF2Sprites_EHonda, 0x00 },
    { L"Hold Super Trail 2", 0x44eac, 0x44ecc, indexSF2Sprites_EHonda, 0x00 },
    { L"Hold Super Trail 3", 0x44ecc, 0x44eec, indexSF2Sprites_EHonda, 0x00 },
};

const sDescTreeNode HSF2_A_EHONDA_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_WW_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_CE_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_HF_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_SSF2_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_ST_PALETTES,         ARRAYSIZE(HSF2_A_EHONDA_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_BLANKA_WW_PALETTES[] =
{
    { L"Palette 1", 0x45a62, 0x45a82, indexSF2Sprites_Blanka, 0x00 },
    { L"Palette 2", 0x45b04, 0x45b24, indexSF2Sprites_Blanka, 0x00 },
};
const sGame_PaletteDataset HSF2_A_BLANKA_CE_PALETTES[] =
{
    { L"Palette 1", 0x45ba6, 0x45bc6, indexSF2Sprites_Blanka, 0x00 },
    { L"Palette 2", 0x45c48, 0x45c68, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset HSF2_A_BLANKA_HF_PALETTES[] =
{
    { L"Palette 1", 0x45cea, 0x45D0A, indexSF2Sprites_Blanka, 0x00 },
    { L"Palette 2", 0x45d8c, 0x45dac, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset HSF2_A_BLANKA_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4591E, 0x4593E, indexSF2Sprites_Blanka, 0x00 },
    { L"Palette 2/Start", 0x459c0, 0x459e0, indexSF2Sprites_Blanka, 0x00 },
};


const sGame_PaletteDataset HSF2_A_BLANKA_ST_PALETTES[] =
{
    { L"Jab", 0x4541e, 0x4543e, indexSF2Sprites_Blanka, 0x00 },
    { L"Jab Super Trail 1", 0x4545e, 0x4547c, indexSF2Sprites_Blanka, 0x00 },
    { L"Jab Super Trail 2", 0x4547c, 0x4549c, indexSF2Sprites_Blanka, 0x00 },
    { L"Jab Super Trail 3", 0x4549c, 0x454bc, indexSF2Sprites_Blanka, 0x00 },
    { L"Strong", 0x454be, 0x454de, indexSF2Sprites_Blanka, 0x00 },
    { L"Strong Super Trail 1", 0x454fe, 0x4551c, indexSF2Sprites_Blanka, 0x00 },
    { L"Strong Super Trail 2", 0x4551c, 0x4553c, indexSF2Sprites_Blanka, 0x00 },
    { L"Strong Super Trail 3", 0x4553c, 0x4555c, indexSF2Sprites_Blanka, 0x00 },
    { L"Fierce", 0x4555e, 0x4557e, indexSF2Sprites_Blanka, 0x00 },
    { L"Fierce Super Trail 1", 0x4559e, 0x455bc, indexSF2Sprites_Blanka, 0x00 },
    { L"Fierce Super Trail 2", 0x455bc, 0x455dc, indexSF2Sprites_Blanka, 0x00 },
    { L"Fierce Super Trail 3", 0x455dc, 0x455fc, indexSF2Sprites_Blanka, 0x00 },
    { L"Short", 0x455fe, 0x4561E, indexSF2Sprites_Blanka, 0x00 },
    { L"Short Super Trail 1", 0x4563e, 0x4565c, indexSF2Sprites_Blanka, 0x00 },
    { L"Short Super Trail 2", 0x4565c, 0x4567c, indexSF2Sprites_Blanka, 0x00 },
    { L"Short Super Trail 3", 0x4567c, 0x4569c, indexSF2Sprites_Blanka, 0x00 },
    { L"Forward", 0x4569e, 0x456be, indexSF2Sprites_Blanka, 0x00 },
    { L"Forward Super Trail 1", 0x456de, 0x456fc, indexSF2Sprites_Blanka, 0x00 },
    { L"Forward Super Trail 2", 0x456fc, 0x4571C, indexSF2Sprites_Blanka, 0x00 },
    { L"Forward Super Trail 3", 0x4571C, 0x4573C, indexSF2Sprites_Blanka, 0x00 },
    { L"Roundhouse", 0x4573E, 0x4575E, indexSF2Sprites_Blanka, 0x00 },
    { L"Roundhouse Super Trail 1", 0x4577e, 0x4579c, indexSF2Sprites_Blanka, 0x00 },
    { L"Roundhouse Super Trail 2", 0x4579c, 0x457bc, indexSF2Sprites_Blanka, 0x00 },
    { L"Roundhouse Super Trail 3", 0x457bc, 0x457dc, indexSF2Sprites_Blanka, 0x00 },
    { L"Start", 0x457DE, 0x457fE, indexSF2Sprites_Blanka, 0x00 },
    { L"Start Super Trail 1", 0x4581e, 0x4583c, indexSF2Sprites_Blanka, 0x00 },
    { L"Start Super Trail 2", 0x4583c, 0x4585c, indexSF2Sprites_Blanka, 0x00 },
    { L"Start Super Trail 3", 0x4585c, 0x4587c, indexSF2Sprites_Blanka, 0x00 },
    { L"Hold", 0x4587e, 0x4589e, indexSF2Sprites_Blanka, 0x00 },
    { L"Hold Super Trail 1", 0x458be, 0x458dc, indexSF2Sprites_Blanka, 0x00 },
    { L"Hold Super Trail 2", 0x458dc, 0x458fc, indexSF2Sprites_Blanka, 0x00 },
    { L"Hold Super Trail 3", 0x458fc, 0x4591C, indexSF2Sprites_Blanka, 0x00 },
};

const sDescTreeNode HSF2_A_BLANKA_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_WW_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_CE_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_HF_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_BLANKA_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_ST_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_GUILE_WW_PALETTES[] =
{
    { L"Palette 1", 0x464a2, 0x464c2, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 1 Sonic Boom", 0x464c2, 0x464e2, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2", 0x46544, 0x46564, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2 Sonic Boom", 0x46564, 0x46584, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset HSF2_A_GUILE_CE_PALETTES[] =
{
    { L"Palette 1", 0x465e6, 0x46606, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 1 Sonic Boom", 0x46606, 0x46626, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2", 0x46688, 0x466a8, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2 Sonic Boom", 0x466a8, 0x466c8, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset HSF2_A_GUILE_HF_PALETTES[] =
{
    { L"Palette 1", 0x4672a, 0x4674a, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 1 Sonic Boom", 0x4674a, 0x4676a, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2", 0x467cc, 0x467ec, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2 Sonic Boom", 0x467ec, 0x4680C, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset HSF2_A_GUILE_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4635e, 0x4637e, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 1 Sonic Boom", 0x4637e, 0x4639e, indexSF2Sprites_Guile, 0x01 },
    { L"Palette 2/Start", 0x46400, 0x46420, indexSF2Sprites_Guile, 0x00 },
    { L"Palette 2/Start Sonic Boom", 0x46420, 0x46440, indexSF2Sprites_Guile, 0x01 },
};

const sGame_PaletteDataset HSF2_A_GUILE_ST_PALETTES[] =
{
    { L"Jab", 0x45e4e, 0x45e6e, indexSF2Sprites_Guile },
    { L"Jab Sonic Boom", 0x45e6e, 0x45e8e, indexSF2Sprites_Guile, 0x01 },
    { L"Jab Super Trail 1", 0x45e8e, 0x45eae, indexSF2Sprites_Guile },
    { L"Jab Super Trail 2", 0x45eae, 0x45ece, indexSF2Sprites_Guile },
    { L"Jab Super Trail 3", 0x45ece, 0x45EEE, indexSF2Sprites_Guile },
    { L"Strong", 0x45ef0, 0x45F10, indexSF2Sprites_Guile },
    { L"Strong Sonic Boom", 0x45F10, 0x45F30, indexSF2Sprites_Guile, 0x01 },
    { L"Strong Super Trail 1", 0x45F30, 0x45F50, indexSF2Sprites_Guile },
    { L"Strong Super Trail 2", 0x45F50, 0x45F70, indexSF2Sprites_Guile },
    { L"Strong Super Trail 3", 0x45F70, 0x45F90, indexSF2Sprites_Guile },
    { L"Fierce", 0x45f92, 0x45fb2, indexSF2Sprites_Guile },
    { L"Fierce Sonic Boom", 0x45fb2, 0x45fd2, indexSF2Sprites_Guile, 0x01 },
    { L"Fierce Super Trail 1", 0x45fd2, 0x45FF2, indexSF2Sprites_Guile },
    { L"Fierce Super Trail 2", 0x45FF2, 0x46012, indexSF2Sprites_Guile },
    { L"Fierce Super Trail 3", 0x46012, 0x46032, indexSF2Sprites_Guile },
    { L"Short", 0x46034, 0x46054, indexSF2Sprites_Guile },
    { L"Short Sonic Boom", 0x46054, 0x46074, indexSF2Sprites_Guile, 0x01 },
    { L"Short Super Trail 1", 0x46074, 0x46094, indexSF2Sprites_Guile },
    { L"Short Super Trail 2", 0x46094, 0x460b4, indexSF2Sprites_Guile },
    { L"Short Super Trail 3", 0x460b4, 0x460D4, indexSF2Sprites_Guile },
    { L"Forward", 0x460D6, 0x460f6, indexSF2Sprites_Guile },
    { L"Forward Sonic Boom", 0x460f6, 0x46116, indexSF2Sprites_Guile, 0x01 },
    { L"Forward Super Trail 1", 0x46116, 0x46136, indexSF2Sprites_Guile },
    { L"Forward Super Trail 2", 0x46136, 0x46156, indexSF2Sprites_Guile },
    { L"Forward Super Trail 3", 0x46156, 0x46176, indexSF2Sprites_Guile },
    { L"Roundhouse", 0x46178, 0x46198, indexSF2Sprites_Guile },
    { L"Roundhouse Sonic Boom", 0x46198, 0x461B8, indexSF2Sprites_Guile, 0x01 },
    { L"Roundhouse Super Trail 1", 0x461B8, 0x461d8, indexSF2Sprites_Guile },
    { L"Roundhouse Super Trail 2", 0x461d8, 0x461f8, indexSF2Sprites_Guile },
    { L"Roundhouse Super Trail 3", 0x461f8, 0x46218, indexSF2Sprites_Guile },
    { L"Start", 0x4621a, 0x4623a, indexSF2Sprites_Guile },
    { L"Start Sonic Boom", 0x4623a, 0x4625a, indexSF2Sprites_Guile, 0x01 },
    { L"Start Super Trail 1", 0x4625a, 0x4627a, indexSF2Sprites_Guile },
    { L"Start Super Trail 2", 0x4627a, 0x4629a, indexSF2Sprites_Guile },
    { L"Start Super Trail 3", 0x4629a, 0x462BA, indexSF2Sprites_Guile },
    { L"Hold", 0x462Bc, 0x462dc, indexSF2Sprites_Guile },
    { L"Hold Sonic Boom", 0x462dc, 0x462fc, indexSF2Sprites_Guile, 0x01 },
    { L"Hold Super Trail 1", 0x462fc, 0x4631C, indexSF2Sprites_Guile },
    { L"Hold Super Trail 2", 0x4631C, 0x4633C, indexSF2Sprites_Guile },
    { L"Hold Super Trail 3", 0x4633C, 0x4635C, indexSF2Sprites_Guile },
};

const sDescTreeNode HSF2_A_GUILE_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_WW_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_CE_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_HF_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_GUILE_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_ST_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_KEN_WW_PALETTES[] =
{
    { L"Palette 1", 0x46ee2, 0x46F02, indexSF2Sprites_Ken, 0x00 },
    { L"Palette 2", 0x46f84, 0x46fa4, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset HSF2_A_KEN_CE_PALETTES[] =
{
    { L"Palette 1", 0x47026, 0x47046, indexSF2Sprites_Ken, 0x00 },
    { L"Palette 2", 0x470c8, 0x470E8, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset HSF2_A_KEN_HF_PALETTES[] =
{
    { L"Palette 1", 0x4716a, 0x4718a, indexSF2Sprites_Ken, 0x00 },
    { L"Palette 2", 0x4720c, 0x4722c, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset HSF2_A_KEN_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x46d9e, 0x46DBE, indexSF2Sprites_Ken, 0x00 },
    { L"Palette 2/Start", 0x46e40, 0x46e60, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset HSF2_A_KEN_ST_PALETTES[] =
{
    { L"Jab", 0x4688e, 0x468ae, indexSF2Sprites_Ken },
    { L"Jab Super Trail 1", 0x468ce, 0x468ee, indexSF2Sprites_Ken },
    { L"Jab Super Trail 2", 0x468ee, 0x4690E, indexSF2Sprites_Ken },
    { L"Jab Super Trail 3", 0x4690E, 0x4692E, indexSF2Sprites_Ken },
    { L"Strong", 0x46930, 0x46950, indexSF2Sprites_Ken },
    { L"Strong Super Trail 1", 0x46970, 0x46990, indexSF2Sprites_Ken },
    { L"Strong Super Trail 2", 0x46990, 0x469b0, indexSF2Sprites_Ken },
    { L"Strong Super Trail 3", 0x469b0, 0x469d0, indexSF2Sprites_Ken },
    { L"Fierce", 0x469d2, 0x469f2, indexSF2Sprites_Ken },
    { L"Fierce Super Trail 1", 0x46a12, 0x46a32, indexSF2Sprites_Ken },
    { L"Fierce Super Trail 2", 0x46a32, 0x46a52, indexSF2Sprites_Ken },
    { L"Fierce Super Trail 3", 0x46a52, 0x46a72, indexSF2Sprites_Ken },
    { L"Short", 0x46a74, 0x46a94, indexSF2Sprites_Ken },
    { L"Short Super Trail 1", 0x46ab4, 0x46ad4, indexSF2Sprites_Ken },
    { L"Short Super Trail 2", 0x46ad4, 0x46af4, indexSF2Sprites_Ken },
    { L"Short Super Trail 3", 0x46af4, 0x46B14, indexSF2Sprites_Ken },
    { L"Forward", 0x46B16, 0x46B36, indexSF2Sprites_Ken },
    { L"Forward Super Trail 1", 0x46b56, 0x46b76, indexSF2Sprites_Ken },
    { L"Forward Super Trail 2", 0x46b76, 0x46b96, indexSF2Sprites_Ken },
    { L"Forward Super Trail 3", 0x46b96, 0x46BB6, indexSF2Sprites_Ken },
    { L"Roundhouse", 0x46BB8, 0x46Bd8, indexSF2Sprites_Ken },
    { L"Roundhouse Super Trail 1", 0x46bf8, 0x46C18, indexSF2Sprites_Ken },
    { L"Roundhouse Super Trail 2", 0x46C18, 0x46C38, indexSF2Sprites_Ken },
    { L"Roundhouse Super Trail 3", 0x46C38, 0x46C58, indexSF2Sprites_Ken },
    { L"Start", 0x46c5a, 0x46c7a, indexSF2Sprites_Ken },
    { L"Start Super Trail 1", 0x46c9a, 0x46cba, indexSF2Sprites_Ken },
    { L"Start Super Trail 2", 0x46cba, 0x46cda, indexSF2Sprites_Ken },
    { L"Start Super Trail 3", 0x46cda ,0x46CFA, indexSF2Sprites_Ken },
    { L"Hold", 0x46cfc, 0x46D1C, indexSF2Sprites_Ken },
    { L"Hold Super Trail 1", 0x46d3c, 0x46d5c, indexSF2Sprites_Ken },
    { L"Hold Super Trail 2", 0x46d5c, 0x46d7c, indexSF2Sprites_Ken },
    { L"Hold Super Trail 3", 0x46d7c, 0x46D9C, indexSF2Sprites_Ken },
};

const sDescTreeNode HSF2_A_KEN_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_WW_PALETTES,    ARRAYSIZE(HSF2_A_KEN_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_CE_PALETTES,    ARRAYSIZE(HSF2_A_KEN_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_HF_PALETTES,    ARRAYSIZE(HSF2_A_KEN_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_KEN_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_ST_PALETTES,    ARRAYSIZE(HSF2_A_KEN_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_WW_PALETTES[] =
{
    { L"Palette 1", 0x47922, 0x47942, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 2", 0x479c4, 0x479e4, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_CE_PALETTES[] =
{
    { L"Palette 1", 0x47a66, 0x47a86, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 2", 0x47b08, 0x47b28, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_HF_PALETTES[] =
{
    { L"Palette 1", 0x47baa, 0x47bca, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 1 Kikouken", 0x47bca, 0x47bea, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 2", 0x47c4c, 0x47c6c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 2 Kikouken", 0x47c6c, 0x47c8c, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x477De, 0x477fe, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 1 Kikouken", 0x477fe, 0x4781E, indexSF2Sprites_ChunLi, 0x1 },
    { L"Palette 2/Start", 0x47880, 0x478a0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Palette 2/Start Kikouken", 0x478a0, 0x478c0, indexSF2Sprites_ChunLi, 0x1 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_ST_PALETTES[] =
{
    { L"Jab", 0x472ce, 0x472ee, indexSF2Sprites_ChunLi },
    { L"Jab Kikouken", 0x472ee, 0x4730E, indexSF2Sprites_ChunLi, 0x1 },
    { L"Jab Super Trail 1", 0x4730E, 0x4732E, indexSF2Sprites_ChunLi },
    { L"Jab Super Trail 2", 0x4732E, 0x4734E, indexSF2Sprites_ChunLi },
    { L"Jab Super Trail 3", 0x4734E, 0x4736E, indexSF2Sprites_ChunLi },
    { L"Strong", 0x47370, 0x47390, indexSF2Sprites_ChunLi },
    { L"Strong Kikouken", 0x47390, 0x473b0, indexSF2Sprites_ChunLi, 0x1 },
    { L"Strong Super Trail 1", 0x473b0, 0x473d0, indexSF2Sprites_ChunLi },
    { L"Strong Super Trail 2", 0x473d0, 0x473f0, indexSF2Sprites_ChunLi },
    { L"Strong Super Trail 3", 0x473f0, 0x47410, indexSF2Sprites_ChunLi },
    { L"Fierce", 0x47412, 0x47432, indexSF2Sprites_ChunLi },
    { L"Fierce Kikouken", 0x47432, 0x47452, indexSF2Sprites_ChunLi, 0x1 },
    { L"Fierce Super Trail 1", 0x47452, 0x47472, indexSF2Sprites_ChunLi },
    { L"Fierce Super Trail 2", 0x47472, 0x47492, indexSF2Sprites_ChunLi },
    { L"Fierce Super Trail 3", 0x47492, 0x474B2, indexSF2Sprites_ChunLi },
    { L"Short", 0x474B4, 0x474d4, indexSF2Sprites_ChunLi },
    { L"Short Kikouken", 0x474d4, 0x474f4, indexSF2Sprites_ChunLi, 0x1 },
    { L"Short Super Trail 1", 0x474f4, 0x47514, indexSF2Sprites_ChunLi },
    { L"Short Super Trail 2", 0x47514, 0x47534, indexSF2Sprites_ChunLi },
    { L"Short Super Trail 3", 0x47534, 0x47554, indexSF2Sprites_ChunLi },
    { L"Forward", 0x47556, 0x47576, indexSF2Sprites_ChunLi },
    { L"Forward Kikouken", 0x47576, 0x47596, indexSF2Sprites_ChunLi, 0x1 },
    { L"Forward Super Trail 1", 0x47596, 0x475b6, indexSF2Sprites_ChunLi },
    { L"Forward Super Trail 2", 0x475b6, 0x475d6, indexSF2Sprites_ChunLi },
    { L"Forward Super Trail 3", 0x475d6, 0x475F6, indexSF2Sprites_ChunLi },
    { L"Roundhouse", 0x475F8, 0x47618, indexSF2Sprites_ChunLi },
    { L"Roundhouse Kikouken", 0x47618, 0x47638, indexSF2Sprites_ChunLi, 0x1 },
    { L"Roundhouse Super Trail 1", 0x47638, 0x47658, indexSF2Sprites_ChunLi },
    { L"Roundhouse Super Trail 2", 0x47658, 0x47678, indexSF2Sprites_ChunLi },
    { L"Roundhouse Super Trail 3", 0x47678, 0x47698, indexSF2Sprites_ChunLi },
    { L"Start", 0x4769a, 0x476ba, indexSF2Sprites_ChunLi },
    { L"Start Kikouken", 0x476ba, 0x476da, indexSF2Sprites_ChunLi, 0x1 },
    { L"Start Super Trail 1", 0x476da, 0x476FA, indexSF2Sprites_ChunLi },
    { L"Start Super Trail 2", 0x476FA, 0x4771A, indexSF2Sprites_ChunLi },
    { L"Start Super Trail 3", 0x4771A, 0x4773A, indexSF2Sprites_ChunLi },
    { L"Hold", 0x4773c, 0x4775c, indexSF2Sprites_ChunLi },
    { L"Hold Kikouken", 0x4775c, 0x4777c, indexSF2Sprites_ChunLi, 0x1 },
    { L"Hold Super Trail 1", 0x4777c, 0x4779c, indexSF2Sprites_ChunLi },
    { L"Hold Super Trail 2", 0x4779c, 0x477bc, indexSF2Sprites_ChunLi },
    { L"Hold Super Trail 3", 0x477bc, 0x477DC, indexSF2Sprites_ChunLi },
};

const sDescTreeNode HSF2_A_CHUNLI_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_WW_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_CE_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_HF_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_SSF2_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_ST_PALETTES,         ARRAYSIZE(HSF2_A_CHUNLI_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_WW_PALETTES[] =
{
    { L"Palette 1", 0x48362, 0x48382, indexSF2Sprites_Zangief, 0x08 },
    { L"Palette 2", 0x48404, 0x48424, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_CE_PALETTES[] =
{
    { L"Palette 1", 0x484a6, 0x484c6, indexSF2Sprites_Zangief, 0x08 },
    { L"Palette 2", 0x48548, 0x48568, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_HF_PALETTES[] =
{
    { L"Palette 1", 0x485ea, 0x4860A, indexSF2Sprites_Zangief, 0x08 },
    { L"Palette 2", 0x4868c, 0x486ac, indexSF2Sprites_Zangief, 0x08 },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4821e, 0x4823e, indexSF2Sprites_Zangief, 0x00 },
    { L"Palette 1 Banishing Fist", 0x4823e, 0x4825e, indexSF2Sprites_Zangief, 1 },
    { L"Palette 2/Start", 0x482c0, 0x482e0, indexSF2Sprites_Zangief, 0x00 },
    { L"Palette 2/Start Banishing Fist", 0x482e0, 0x48300, indexSF2Sprites_Zangief, 1 },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_ST_PALETTES[] =
{
    { L"Jab", 0x47d0e, 0x47d2e, indexSF2Sprites_Zangief },
    { L"Jab Banishing Fist", 0x47d2e, 0x47d4e, indexSF2Sprites_Zangief, 1 },
    { L"Jab Super Trail 1", 0x47d4e, 0x47d6e, indexSF2Sprites_Zangief },
    { L"Jab Super Trail 2", 0x47d6e, 0x47d8e, indexSF2Sprites_Zangief },
    { L"Jab Super Trail 3", 0x47d8e ,0x47DAE, indexSF2Sprites_Zangief },
    { L"Strong", 0x47db0, 0x47dd0, indexSF2Sprites_Zangief },
    { L"Strong Banishing Fist", 0x47dd0, 0x47df0, indexSF2Sprites_Zangief, 1 },
    { L"Strong Super Trail 1", 0x47df0, 0X47E10, indexSF2Sprites_Zangief },
    { L"Strong Super Trail 2", 0X47E10, 0X47E30, indexSF2Sprites_Zangief },
    { L"Strong Super Trail 3", 0X47E30, 0x47E50, indexSF2Sprites_Zangief },
    { L"Fierce", 0x47E52, 0x47E72, indexSF2Sprites_Zangief },
    { L"Fierce Banishing Fist", 0x47E72,0x47E92, indexSF2Sprites_Zangief, 1 },
    { L"Fierce Super Trail 1", 0x47E92, 0x47EB2, indexSF2Sprites_Zangief },
    { L"Fierce Super Trail 2", 0x47EB2, 0x47ED2, indexSF2Sprites_Zangief },
    { L"Fierce Super Trail 3", 0x47ED2, 0x47EF2, indexSF2Sprites_Zangief },
    { L"Short", 0x47EF4, 0x47F14, indexSF2Sprites_Zangief },
    { L"Short Banishing Fist", 0x47F14, 0x47F34, indexSF2Sprites_Zangief, 1 },
    { L"Short Super Trail 1", 0x47F34, 0x47F54, indexSF2Sprites_Zangief },
    { L"Short Super Trail 2", 0x47F54, 0x47F74, indexSF2Sprites_Zangief },
    { L"Short Super Trail 3", 0x47F74, 0x47F94, indexSF2Sprites_Zangief },
    { L"Forward", 0x47F96, 0x47Fb6, indexSF2Sprites_Zangief },
    { L"Forward Banishing Fist", 0x47Fb6, 0x47Fd6, indexSF2Sprites_Zangief, 1 },
    { L"Forward Super Trail 1", 0x47Fd6, 0x47FF6, indexSF2Sprites_Zangief },
    { L"Forward Super Trail 2", 0x47FF6, 0x48016, indexSF2Sprites_Zangief },
    { L"Forward Super Trail 3", 0x48016, 0x48036, indexSF2Sprites_Zangief },
    { L"Roundhouse", 0x48038, 0x48058, indexSF2Sprites_Zangief },
    { L"Roundhouse Banishing Fist", 0x48058, 0x48078, indexSF2Sprites_Zangief, 1 },
    { L"Roundhouse Super Trail 1", 0x48078, 0x48098, indexSF2Sprites_Zangief },
    { L"Roundhouse Super Trail 2", 0x48098, 0x480b8, indexSF2Sprites_Zangief },
    { L"Roundhouse Super Trail 3", 0x480b8, 0x480D8, indexSF2Sprites_Zangief },
    { L"Start", 0x480Da, 0x480fa, indexSF2Sprites_Zangief },
    { L"Start Banishing Fist", 0x480fa, 0x4811A, indexSF2Sprites_Zangief, 1 },
    { L"Start Super Trail 1", 0x4811A, 0x4813A, indexSF2Sprites_Zangief },
    { L"Start Super Trail 2", 0x4813A, 0x4815A, indexSF2Sprites_Zangief },
    { L"Start Super Trail 3", 0x4815A, 0x4817A, indexSF2Sprites_Zangief },
    { L"Hold", 0x4817c, 0x4819c, indexSF2Sprites_Zangief },
    { L"Hold Banishing Fist", 0x4819c, 0x481bc, indexSF2Sprites_Zangief, 1 },
    { L"Hold Super Trail 1", 0x481bc, 0x481dc, indexSF2Sprites_Zangief },
    { L"Hold Super Trail 2", 0x481dc, 0x481fc, indexSF2Sprites_Zangief },
    { L"Hold Super Trail 3", 0x481fc, 0x4821C, indexSF2Sprites_Zangief },
};

const sDescTreeNode HSF2_A_ZANGIEF_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_WW_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_CE_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_HF_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_ZANGIEF_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_ST_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_WW_PALETTES[] =
{
    { L"Palette 1", 0x48da2, 0x48dc2, indexSF2Sprites_Dhalsim },
    { L"Palette 2", 0x48e44, 0x48e64, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_CE_PALETTES[] =
{
    { L"Palette 1", 0x48ee6, 0x48F06, indexSF2Sprites_Dhalsim },
    { L"Palette 2", 0x48f88, 0x48fa8, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_HF_PALETTES[] =
{
    { L"Palette 1", 0x4902a, 0x4904a, indexSF2Sprites_Dhalsim },
    { L"Palette 2", 0x490cc, 0x490ec, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x48c5e, 0x48c7e, indexSF2Sprites_Dhalsim },
    { L"Palette 2/Start", 0x48d00, 0x48d20, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_ST_PALETTES[] =
{
    { L"Jab", 0x4874e, 0x4876e, indexSF2Sprites_Dhalsim },
    { L"Jab Super Trail 1", 0x4878e, 0x487ae, indexSF2Sprites_Dhalsim },
    { L"Jab Super Trail 2", 0x487ae, 0x487ce, indexSF2Sprites_Dhalsim },
    { L"Jab Super Trail 3", 0x487ce, 0x487EE, indexSF2Sprites_Dhalsim },
    { L"Strong", 0x487f0, 0x48810, indexSF2Sprites_Dhalsim },
    { L"Strong Super Trail 1", 0x48830, 0x48850, indexSF2Sprites_Dhalsim },
    { L"Strong Super Trail 2", 0x48850, 0x48870, indexSF2Sprites_Dhalsim },
    { L"Strong Super Trail 3", 0x48870, 0x48890, indexSF2Sprites_Dhalsim },
    { L"Fierce", 0x48892, 0x488b2, indexSF2Sprites_Dhalsim },
    { L"Fierce Super Trail 1", 0x488d2, 0x488F2, indexSF2Sprites_Dhalsim },
    { L"Fierce Super Trail 2", 0x488F2, 0x48912, indexSF2Sprites_Dhalsim },
    { L"Fierce Super Trail 3", 0x48912, 0x48932, indexSF2Sprites_Dhalsim },
    { L"Short", 0x48934, 0x48954, indexSF2Sprites_Dhalsim },
    { L"Short Super Trail 1", 0x48974, 0x48994, indexSF2Sprites_Dhalsim },
    { L"Short Super Trail 2", 0x48994, 0x489b4, indexSF2Sprites_Dhalsim },
    { L"Short Super Trail 3", 0x489b4, 0x489D4, indexSF2Sprites_Dhalsim },
    { L"Forward", 0x489d6, 0x489F6, indexSF2Sprites_Dhalsim },
    { L"Forward Super Trail 1", 0x48a16, 0x48a36, indexSF2Sprites_Dhalsim },
    { L"Forward Super Trail 2", 0x48a36, 0x48a56, indexSF2Sprites_Dhalsim },
    { L"Forward Super Trail 3", 0x48a56, 0x48A76, indexSF2Sprites_Dhalsim },
    { L"Roundhouse", 0x48a78, 0x48a98, indexSF2Sprites_Dhalsim },
    { L"Roundhouse Super Trail 1", 0x48ab8, 0x48ad8, indexSF2Sprites_Dhalsim },
    { L"Roundhouse Super Trail 2", 0x48ad8, 0x48af8, indexSF2Sprites_Dhalsim },
    { L"Roundhouse Super Trail 3", 0x48af8, 0x48B18, indexSF2Sprites_Dhalsim },
    { L"Start", 0x48b1a, 0x48b3a, indexSF2Sprites_Dhalsim },
    { L"Start Super Trail 1", 0x48b5a, 0x48b7a, indexSF2Sprites_Dhalsim },
    { L"Start Super Trail 2", 0x48b7a, 0x48b9a, indexSF2Sprites_Dhalsim },
    { L"Start Super Trail 3", 0x48b9a, 0x48BBA, indexSF2Sprites_Dhalsim },
    { L"Hold", 0x48BBc, 0x48Bdc, indexSF2Sprites_Dhalsim },
    { L"Hold Super Trail 1", 0x48BFC, 0x48C1C, indexSF2Sprites_Dhalsim },
    { L"Hold Super Trail 2", 0x48C1C, 0x48C3C, indexSF2Sprites_Dhalsim },
    { L"Hold Super Trail 3", 0x48C3C, 0x48C5C, indexSF2Sprites_Dhalsim },
};

const sDescTreeNode HSF2_A_DHALSIM_COLLECTION[] =
{
    { L"WW",    DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_WW_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_WW_PALETTES) },
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_CE_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_HF_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_DHALSIM_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_ST_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_MBISON_CE_PALETTES[] =
{
    { L"Palette 1", 0x497De, 0x4987E, indexSF2Sprites_Bison },
    { L"Palette 2", 0x49880, 0x49920, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset HSF2_A_MBISON_HF_PALETTES[] =
{
    { L"Palette 1", 0x49922, 0x499C2, indexSF2Sprites_Bison },
    { L"Palette 2", 0x499c4, 0x49A64, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset HSF2_A_MBISON_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4969a, 0x4973A, indexSF2Sprites_Bison },
    { L"Palette 2/Start", 0x4973c, 0x497DC, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset HSF2_A_MBISON_ST_PALETTES[] =
{
    { L"Jab", 0x4918a, 0x4922A, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 1", 0x4878e, 0x487ae, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 2", 0x487ae, 0x487ce, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 3", 0x487ce, 0x487EE, indexSF2Sprites_Bison },
    { L"Strong", 0x4922c, 0x492CC, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 1", 0x48830, 0x48850, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 2", 0x48850, 0x48870, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 3", 0x48870, 0x48890, indexSF2Sprites_Bison },
    { L"Fierce", 0x492Ce, 0x4936E, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 1", 0x488d2, 0x488F2, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 2", 0x488F2, 0x48912, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 3", 0x48912, 0x48932, indexSF2Sprites_Bison },
    { L"Short", 0x49370, 0x49410, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 1", 0x48974, 0x48994, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 2", 0x48994, 0x489b4, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 3", 0x489b4, 0x489D4, indexSF2Sprites_Bison },
    { L"Forward", 0x49412, 0x494B2, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 1", 0x48a16, 0x48a36, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 2", 0x48a36, 0x48a56, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 3", 0x48a56, 0x48A76, indexSF2Sprites_Bison },
    { L"Roundhouse", 0x494B4, 0x49554, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 1", 0x48ab8, 0x48ad8, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 2", 0x48ad8, 0x48af8, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 3", 0x48af8, 0x48B18, indexSF2Sprites_Bison },
    { L"Start", 0x49556, 0x495F6, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 1", 0x48b5a, 0x48b7a, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 2", 0x48b7a, 0x48b9a, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 3", 0x48b5a, 0x48BBA, indexSF2Sprites_Bison },
    { L"Hold", 0x495F8, 0x49698, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 1", 0x48bfc, 0x48b1c, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 2", 0x48b1c, 0x48b3c, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 3", 0x481fc, 0x4821C, indexSF2Sprites_Bison },
};

const sDescTreeNode HSF2_A_MBISON_COLLECTION[] =
{
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_CE_PALETTES,    ARRAYSIZE(HSF2_A_MBISON_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_HF_PALETTES,    ARRAYSIZE(HSF2_A_MBISON_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_MBISON_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_ST_PALETTES,    ARRAYSIZE(HSF2_A_MBISON_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_SAGAT_CE_PALETTES[] =
{
    { L"Palette 1", 0x4a0d6, 0x4a0f6, indexSF2Sprites_Sagat },
    { L"Palette 1 Tiger Shot", 0x4a0f6, 0x4A116, indexSF2Sprites_Sagat, 0x1 },
    { L"Palette 2", 0x4a178, 0x4a198, indexSF2Sprites_Sagat },
    { L"Palette 2 Tiger Shot", 0x4a198, 0x4a1b8, indexSF2Sprites_Sagat, 0x1 },
};

const sGame_PaletteDataset HSF2_A_SAGAT_HF_PALETTES[] =
{
    { L"Palette 1", 0x4a21a, 0x4a23a, indexSF2Sprites_Sagat },
    { L"Palette 1 Tiger Shot", 0x4a23a, 0x4a25a, indexSF2Sprites_Sagat, 0x1 },
    { L"Palette 2", 0x4a2bc, 0x4a2dc, indexSF2Sprites_Sagat },
    { L"Palette 2 Tiger Shot", 0x4a2dc, 0x4a2fc, indexSF2Sprites_Sagat, 0x1 },
};

const sGame_PaletteDataset HSF2_A_SAGAT_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x49F92, 0x49Fb2, indexSF2Sprites_Sagat },
    { L"Palette 1 Tiger Shot", 0x49Fb2, 0x49Fd2, indexSF2Sprites_Sagat, 0x1 },
    { L"Palette 2/Start", 0x4a034, 0x4a054, indexSF2Sprites_Sagat },
    { L"Palette 2/Start Tiger Shot", 0x4a054, 0x4a074, indexSF2Sprites_Sagat, 0x1 },
};

const sGame_PaletteDataset HSF2_A_SAGAT_ST_PALETTES[] =
{
    { L"Jab", 0x49a82, 0x49aa2, indexSF2Sprites_Sagat },
    { L"Jab Tiger Shot", 0x49aa2, 0x49ac2, indexSF2Sprites_Sagat, 0x1 },
    { L"Jab Super Trail 1", 0x49ac2, 0x49ae2, indexSF2Sprites_Sagat },
    { L"Jab Super Trail 2", 0x49ae2, 0x49B02, indexSF2Sprites_Sagat },
    { L"Jab Super Trail 3", 0x49B02, 0x49B22, indexSF2Sprites_Sagat },
    { L"Strong", 0x49B24, 0x49B44, indexSF2Sprites_Sagat },
    { L"Strong Tiger Shot", 0x49B44, 0x49B64, indexSF2Sprites_Sagat, 0x1 },
    { L"Strong Super Trail 1", 0x49B64, 0x49B84, indexSF2Sprites_Sagat },
    { L"Strong Super Trail 2", 0x49B84, 0x49Ba4, indexSF2Sprites_Sagat },
    { L"Strong Super Trail 3", 0x49Ba4, 0x49BC4, indexSF2Sprites_Sagat },
    { L"Fierce", 0x49BC6, 0x49Be6, indexSF2Sprites_Sagat },
    { L"Fierce Tiger Shot", 0x49Be6, 0x49C06, indexSF2Sprites_Sagat, 0x1 },
    { L"Fierce Super Trail 1", 0x49C06, 0x49C26, indexSF2Sprites_Sagat },
    { L"Fierce Super Trail 2", 0x49C26, 0x49C46, indexSF2Sprites_Sagat },
    { L"Fierce Super Trail 3", 0x49C46, 0x49C66, indexSF2Sprites_Sagat },
    { L"Short", 0x49C68, 0x49C88, indexSF2Sprites_Sagat },
    { L"Short Tiger Shot", 0x49C88, 0x49Ca8, indexSF2Sprites_Sagat, 0x1 },
    { L"Short Super Trail 1", 0x49Ca8, 0x49Cc8, indexSF2Sprites_Sagat },
    { L"Short Super Trail 2", 0x49Cc8, 0x49Ce8, indexSF2Sprites_Sagat },
    { L"Short Super Trail 3", 0x49Ce8, 0x49D08, indexSF2Sprites_Sagat },
    { L"Forward", 0x49D0a, 0x49D2a, indexSF2Sprites_Sagat },
    { L"Forward Tiger Shot", 0x49D2a, 0x49D4a, indexSF2Sprites_Sagat, 0x1 },
    { L"Forward Super Trail 1", 0x49D4a, 0x49D6a, indexSF2Sprites_Sagat },
    { L"Forward Super Trail 2", 0x49D6a, 0x49D8a, indexSF2Sprites_Sagat },
    { L"Forward Super Trail 3", 0x49D8a, 0x49DAA, indexSF2Sprites_Sagat },
    { L"Roundhouse", 0x49DAc, 0x49Dcc, indexSF2Sprites_Sagat },
    { L"Roundhouse Tiger Shot", 0x49Dcc, 0x49Dec, indexSF2Sprites_Sagat, 0x1 },
    { L"Roundhouse Super Trail 1", 0x49Dec, 0x49E0C, indexSF2Sprites_Sagat },
    { L"Roundhouse Super Trail 2", 0x49E0C, 0x49E2C, indexSF2Sprites_Sagat },
    { L"Roundhouse Super Trail 3", 0x49E2C, 0x49E4C, indexSF2Sprites_Sagat },
    { L"Start", 0x49E4e, 0x49E6e, indexSF2Sprites_Sagat },
    { L"Start Tiger Shot", 0x49E6e, 0x49E8e, indexSF2Sprites_Sagat, 0x1 },
    { L"Start Super Trail 1", 0x49E8e, 0x49Eae, indexSF2Sprites_Sagat },
    { L"Start Super Trail 2", 0x49Eae, 0x49Ece, indexSF2Sprites_Sagat },
    { L"Start Super Trail 3", 0x49Ece, 0x49EEE, indexSF2Sprites_Sagat },
    { L"Hold", 0x49ef0, 0x49F10, indexSF2Sprites_Sagat },
    { L"Hold Tiger Shot", 0x49F10, 0x49F30, indexSF2Sprites_Sagat, 0x1 },
    { L"Hold Super Trail 1", 0x49F30, 0x49F50, indexSF2Sprites_Sagat },
    { L"Hold Super Trail 2", 0x49F50, 0x49F70, indexSF2Sprites_Sagat },
    { L"Hold Super Trail 3", 0x49F70, 0x49F90, indexSF2Sprites_Sagat },
};


const sDescTreeNode HSF2_A_SAGAT_COLLECTION[] =
{
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_CE_PALETTES,    ARRAYSIZE(HSF2_A_SAGAT_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_HF_PALETTES,    ARRAYSIZE(HSF2_A_SAGAT_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_SAGAT_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_ST_PALETTES,    ARRAYSIZE(HSF2_A_SAGAT_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_BALROG_CE_PALETTES[] =
{
    { L"Palette 1", 0x4a9ce, 0x4a9ee, indexSF2Sprites_Balrog },
    { L"Palette 2", 0x4aa70, 0x4aa90, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset HSF2_A_BALROG_HF_PALETTES[] =
{
    { L"Palette 1", 0x4ab12, 0x4ab32, indexSF2Sprites_Balrog },
    { L"Palette 2", 0x4abb4, 0x4abd4, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset HSF2_A_BALROG_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4a88a, 0x4a8aa, indexSF2Sprites_Balrog },
    { L"Palette 2/Start", 0x4a92c, 0x4a94c, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset HSF2_A_BALROG_ST_PALETTES[] =
{
    { L"Jab", 0x4a37a, 0x4a39a, indexSF2Sprites_Balrog },
    { L"Jab Super Trail 1", 0x4a3ba, 0x4a3da, indexSF2Sprites_Balrog },
    { L"Jab Super Trail 2", 0x4a3da, 0x4a3fa, indexSF2Sprites_Balrog },
    { L"Jab Super Trail 3", 0x4a3fa, 0x4A41A, indexSF2Sprites_Balrog },
    { L"Strong", 0x4A41c, 0x4A43c, indexSF2Sprites_Balrog },
    { L"Strong Super Trail 1", 0x4a45c, 0x4a47c, indexSF2Sprites_Balrog },
    { L"Strong Super Trail 2", 0x4a47c, 0x4a49c, indexSF2Sprites_Balrog },
    { L"Strong Super Trail 3", 0x4a49c, 0x4A4BC, indexSF2Sprites_Balrog },
    { L"Fierce", 0x4A4Be, 0x4A4de, indexSF2Sprites_Balrog },
    { L"Fierce Super Trail 1", 0x4a4fe, 0x4A51E, indexSF2Sprites_Balrog },
    { L"Fierce Super Trail 2", 0x4A51E, 0x4A53E, indexSF2Sprites_Balrog },
    { L"Fierce Super Trail 3", 0x4A53E, 0x4A55E, indexSF2Sprites_Balrog },
    { L"Short", 0x4a560, 0x4a580, indexSF2Sprites_Balrog },
    { L"Short Super Trail 1", 0x4a5a0, 0x4a5c0, indexSF2Sprites_Balrog },
    { L"Short Super Trail 2", 0x4a5c0, 0x4a5e0, indexSF2Sprites_Balrog },
    { L"Short Super Trail 3", 0x4a5e0, 0x4A600, indexSF2Sprites_Balrog },
    { L"Forward", 0x4a602, 0x4a622, indexSF2Sprites_Balrog },
    { L"Forward Super Trail 1", 0x4a642, 0x4a662, indexSF2Sprites_Balrog },
    { L"Forward Super Trail 2", 0x4a662, 0x4a682, indexSF2Sprites_Balrog },
    { L"Forward Super Trail 3", 0x4a682, 0x4A6A2, indexSF2Sprites_Balrog },
    { L"Roundhouse", 0x4a6a4, 0x4a6c4, indexSF2Sprites_Balrog },
    { L"Roundhouse Super Trail 1", 0x4a6e4, 0x4A704, indexSF2Sprites_Balrog },
    { L"Roundhouse Super Trail 2", 0x4A704, 0x4A724, indexSF2Sprites_Balrog },
    { L"Roundhouse Super Trail 3", 0x4A724, 0x4A744, indexSF2Sprites_Balrog },
    { L"Start", 0x4a746, 0x4a766, indexSF2Sprites_Balrog },
    { L"Start Super Trail 1", 0x4a786, 0x4a7a6, indexSF2Sprites_Balrog },
    { L"Start Super Trail 2", 0x4a7a6, 0x4a7c6, indexSF2Sprites_Balrog },
    { L"Start Super Trail 3", 0x4a7c6, 0x4A7E6, indexSF2Sprites_Balrog },
    { L"Hold", 0x4a7e8, 0x4A808, indexSF2Sprites_Balrog },
    { L"Hold Super Trail 1", 0x4a828, 0x4a848, indexSF2Sprites_Balrog },
    { L"Hold Super Trail 2", 0x4a848, 0x4a868, indexSF2Sprites_Balrog },
    { L"Hold Super Trail 3", 0x4a868, 0x4A888, indexSF2Sprites_Balrog },
};

const sDescTreeNode HSF2_A_BALROG_COLLECTION[] =
{
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_CE_PALETTES,    ARRAYSIZE(HSF2_A_BALROG_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_HF_PALETTES,    ARRAYSIZE(HSF2_A_BALROG_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_BALROG_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_ST_PALETTES,    ARRAYSIZE(HSF2_A_BALROG_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_VEGA_CE_PALETTES[] =
{
    { L"Palette 1", 0x4b2c6, 0x4b2e6, indexSF2Sprites_Vega },
    { L"Palette 2", 0x4b368, 0x4b388, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset HSF2_A_VEGA_HF_PALETTES[] =
{
    { L"Palette 1", 0x4b40a, 0x4b42a, indexSF2Sprites_Vega },
    { L"Palette 2", 0x4b4ac, 0x4b4cc, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset HSF2_A_VEGA_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4b182, 0x4b1a2, indexSF2Sprites_Vega },
    { L"Palette 2/Start", 0x4b224, 0x4b244, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset HSF2_A_VEGA_ST_PALETTES[] =
{
    { L"Jab", 0x4ac72, 0x4ac92, indexSF2Sprites_Vega },
    { L"Jab Super Trail 1", 0x4acb2, 0x4acd2, indexSF2Sprites_Vega },
    { L"Jab Super Trail 2", 0x4acd2, 0x4acf2, indexSF2Sprites_Vega },
    { L"Jab Super Trail 3", 0x4acf2, 0x4AD12, indexSF2Sprites_Vega },
    { L"Strong", 0x4ad14, 0x4ad34, indexSF2Sprites_Vega },
    { L"Strong Super Trail 1", 0x4ad54, 0x4ad74, indexSF2Sprites_Vega },
    { L"Strong Super Trail 2", 0x4ad74, 0x4ad94, indexSF2Sprites_Vega },
    { L"Strong Super Trail 3", 0x4ad94, 0x4adb4, indexSF2Sprites_Vega },
    { L"Fierce", 0x4adb6, 0x4add6, indexSF2Sprites_Vega },
    { L"Fierce Super Trail 1", 0x4adf6, 0x4AE16, indexSF2Sprites_Vega },
    { L"Fierce Super Trail 2", 0x4AE16, 0x4AE36, indexSF2Sprites_Vega },
    { L"Fierce Super Trail 3", 0x4AE36, 0x4AE56, indexSF2Sprites_Vega },
    { L"Short", 0x4ae58, 0x4ae78, indexSF2Sprites_Vega },
    { L"Short Super Trail 1", 0x4ae98, 0x4aeb8, indexSF2Sprites_Vega },
    { L"Short Super Trail 2", 0x4aeb8, 0x4aed8, indexSF2Sprites_Vega },
    { L"Short Super Trail 3", 0x4aed8, 0x4AEF8, indexSF2Sprites_Vega },
    { L"Forward", 0x4aefa, 0x4AF1A, indexSF2Sprites_Vega },
    { L"Forward Super Trail 1", 0x4af3a, 0x4af5a, indexSF2Sprites_Vega },
    { L"Forward Super Trail 2", 0x4af5a, 0x4af7a, indexSF2Sprites_Vega },
    { L"Forward Super Trail 3", 0x4af7a, 0x4AF9A, indexSF2Sprites_Vega },
    { L"Roundhouse", 0x4af9c, 0x4AFBC, indexSF2Sprites_Vega },
    { L"Roundhouse Super Trail 1", 0x4afdc, 0x4affc, indexSF2Sprites_Vega },
    { L"Roundhouse Super Trail 2", 0x4affc, 0x4B01C, indexSF2Sprites_Vega },
    { L"Roundhouse Super Trail 3", 0x4B01C, 0x4B03C, indexSF2Sprites_Vega },
    { L"Start", 0x4b03e, 0x4b05e, indexSF2Sprites_Vega },
    { L"Start Super Trail 1", 0x4b07e, 0x4b09e, indexSF2Sprites_Vega },
    { L"Start Super Trail 2", 0x4b09e, 0x4b0be, indexSF2Sprites_Vega },
    { L"Start Super Trail 3", 0x4b0be, 0x4B0DE, indexSF2Sprites_Vega },
    { L"Hold", 0x4b0e0, 0x4B100, indexSF2Sprites_Vega },
    { L"Hold Super Trail 1", 0x4b120, 0x4b140, indexSF2Sprites_Vega },
    { L"Hold Super Trail 2", 0x4b140, 0x4b160, indexSF2Sprites_Vega },
    { L"Hold Super Trail 3", 0x4b160, 0x4B180, indexSF2Sprites_Vega },
};


const sDescTreeNode HSF2_A_VEGA_COLLECTION[] =
{
    { L"CE",    DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_CE_PALETTES,    ARRAYSIZE(HSF2_A_VEGA_CE_PALETTES) },
    { L"HF",    DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_HF_PALETTES,    ARRAYSIZE(HSF2_A_VEGA_HF_PALETTES) },
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_VEGA_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_ST_PALETTES,    ARRAYSIZE(HSF2_A_VEGA_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_CAMMY_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4ba72, 0x4ba92, indexSF2Sprites_Cammy },
    { L"Palette 2/Start", 0x4bb14, 0x4bb34, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset HSF2_A_CAMMY_ST_PALETTES[] =
{
    { L"Jab", 0x4b562, 0x4b582, indexSF2Sprites_Cammy },
    { L"Jab Super Trail 1", 0x4b5a2, 0x4b5c2, indexSF2Sprites_Cammy },
    { L"Jab Super Trail 2", 0x4b5c2, 0x4b5e2, indexSF2Sprites_Cammy },
    { L"Jab Super Trail 3", 0x4b5e2, 0x4B602, indexSF2Sprites_Cammy },
    { L"Strong", 0x4b604, 0x4b624, indexSF2Sprites_Cammy },
    { L"Strong Super Trail 1", 0x4b644, 0x4b664, indexSF2Sprites_Cammy },
    { L"Strong Super Trail 2", 0x4b664, 0x4b684, indexSF2Sprites_Cammy },
    { L"Strong Super Trail 3", 0x4b684, 0x4B6A4, indexSF2Sprites_Cammy },
    { L"Fierce", 0x4b6a6, 0x4b6c6, indexSF2Sprites_Cammy },
    { L"Fierce Super Trail 1", 0x4b6e6, 0x4B706, indexSF2Sprites_Cammy },
    { L"Fierce Super Trail 2", 0x4B706, 0x4B726, indexSF2Sprites_Cammy },
    { L"Fierce Super Trail 3", 0x4B726, 0x4B746, indexSF2Sprites_Cammy },
    { L"Short", 0x4b748, 0x4b768, indexSF2Sprites_Cammy },
    { L"Short Super Trail 1", 0x4b788, 0x4b7a8, indexSF2Sprites_Cammy },
    { L"Short Super Trail 2", 0x4b7a8, 0x4b7c8, indexSF2Sprites_Cammy },
    { L"Short Super Trail 3", 0x4b7c8, 0x4B7E8, indexSF2Sprites_Cammy },
    { L"Forward", 0x4b7ea, 0x4b7fa, indexSF2Sprites_Cammy },
    { L"Forward Super Trail 1", 0x4b82a, 0x4b84a, indexSF2Sprites_Cammy },
    { L"Forward Super Trail 2", 0x4b84a, 0x4b86a, indexSF2Sprites_Cammy },
    { L"Forward Super Trail 3", 0x4b86a, 0x4B88A, indexSF2Sprites_Cammy },
    { L"Roundhouse", 0x4b88c, 0x4b8ac, indexSF2Sprites_Cammy },
    { L"Roundhouse Super Trail 1", 0x4b8cc, 0x4b8ec, indexSF2Sprites_Cammy },
    { L"Roundhouse Super Trail 2", 0x4b8ec, 0x4B90C, indexSF2Sprites_Cammy },
    { L"Roundhouse Super Trail 3", 0x4B90C, 0x4B92C, indexSF2Sprites_Cammy },
    { L"Start", 0x4b92e, 0x4b94e, indexSF2Sprites_Cammy },
    { L"Start Super Trail 1", 0x4b96e, 0x4b98e, indexSF2Sprites_Cammy },
    { L"Start Super Trail 2", 0x4b98e, 0x4b9ae, indexSF2Sprites_Cammy },
    { L"Start Super Trail 3", 0x4b9ae, 0x4B9CE, indexSF2Sprites_Cammy },
    { L"Hold", 0x4b9d0, 0x4B9F0, indexSF2Sprites_Cammy },
    { L"Hold Super Trail 1", 0x4ba10, 0x4ba30, indexSF2Sprites_Cammy },
    { L"Hold Super Trail 2", 0x4ba30, 0x4ba50, indexSF2Sprites_Cammy },
    { L"Hold Super Trail 3", 0x4ba50, 0x4BA70, indexSF2Sprites_Cammy },
};


const sDescTreeNode HSF2_A_CAMMY_COLLECTION[] =
{
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_CAMMY_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_CAMMY_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_CAMMY_ST_PALETTES,    ARRAYSIZE(HSF2_A_CAMMY_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_THAWK_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4c0da, 0x4C0FA, indexSF2Sprites_THawk },
    { L"Palette 2/Start", 0x4c17c, 0x4c19c, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset HSF2_A_THAWK_ST_PALETTES[] =
{
    { L"Jab", 0x4bbca, 0x4bbea, indexSF2Sprites_THawk },
    { L"Jab Super Trail 1", 0x4bc0a, 0x4bc2a, indexSF2Sprites_THawk },
    { L"Jab Super Trail 2", 0x4bc2a, 0x4bc4a, indexSF2Sprites_THawk },
    { L"Jab Super Trail 3", 0x4bc4a, 0x4bc6a, indexSF2Sprites_THawk },
    { L"Strong", 0x4bc6c, 0x4bc8c, indexSF2Sprites_THawk },
    { L"Strong Super Trail 1", 0x4bcac, 0x4bccc, indexSF2Sprites_THawk },
    { L"Strong Super Trail 2", 0x4bccc, 0x4bcec, indexSF2Sprites_THawk },
    { L"Strong Super Trail 3", 0x4bcec, 0x4BD0C, indexSF2Sprites_THawk },
    { L"Fierce", 0x4bd0e, 0x4bd2e, indexSF2Sprites_THawk },
    { L"Fierce Super Trail 1", 0x4bd4e, 0x4bd6e, indexSF2Sprites_THawk },
    { L"Fierce Super Trail 2", 0x4bd6e, 0x4bd8e, indexSF2Sprites_THawk },
    { L"Fierce Super Trail 3", 0x4bd8e, 0x4BDAE, indexSF2Sprites_THawk },
    { L"Short", 0x4bdb0, 0x4bdd0, indexSF2Sprites_THawk },
    { L"Short Super Trail 1", 0x4bdf0, 0x4BE10, indexSF2Sprites_THawk },
    { L"Short Super Trail 2", 0x4BE10, 0x4BE30, indexSF2Sprites_THawk },
    { L"Short Super Trail 3", 0x4BE30, 0x4BE50, indexSF2Sprites_THawk },
    { L"Forward", 0x4be52, 0x4be72, indexSF2Sprites_THawk },
    { L"Forward Super Trail 1", 0x4be92, 0x4beb2, indexSF2Sprites_THawk },
    { L"Forward Super Trail 2", 0x4beb2, 0x4bed2, indexSF2Sprites_THawk },
    { L"Forward Super Trail 3", 0x4bed2, 0x4BEF2, indexSF2Sprites_THawk },
    { L"Roundhouse", 0x4bef4, 0x4BF14, indexSF2Sprites_THawk },
    { L"Roundhouse Super Trail 1", 0x4bf34, 0x4bf54, indexSF2Sprites_THawk },
    { L"Roundhouse Super Trail 2", 0x4bf54, 0x4bf74, indexSF2Sprites_THawk },
    { L"Roundhouse Super Trail 3", 0x4bf74, 0x4BF94, indexSF2Sprites_THawk },
    { L"Start", 0x4bf96, 0x4BFB6, indexSF2Sprites_THawk },
    { L"Start Super Trail 1", 0x4bfd6, 0x4BFF6, indexSF2Sprites_THawk },
    { L"Start Super Trail 2", 0x4BFF6, 0x4C016, indexSF2Sprites_THawk },
    { L"Start Super Trail 3", 0x4C016, 0x4C036, indexSF2Sprites_THawk },
    { L"Hold", 0x4c038, 0x4c058, indexSF2Sprites_THawk },
    { L"Hold Super Trail 1", 0x4c078, 0x4c098, indexSF2Sprites_THawk },
    { L"Hold Super Trail 2", 0x4c098, 0x4c0b8, indexSF2Sprites_THawk },
    { L"Hold Super Trail 3", 0x4c0b8, 0x4C0D8, indexSF2Sprites_THawk },
};


const sDescTreeNode HSF2_A_THAWK_COLLECTION[] =
{
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_THAWK_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_THAWK_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_THAWK_ST_PALETTES,    ARRAYSIZE(HSF2_A_THAWK_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_FEILONG_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4c742, 0x4c762, indexSF2Sprites_FeiLong },
    { L"Palette 2/Start", 0x4c7e4, 0x4C804, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset HSF2_A_FEILONG_ST_PALETTES[] =
{
    { L"Jab", 0x4c232, 0x4c252, indexSF2Sprites_FeiLong },
    { L"Jab Super Trail 1", 0x4c272, 0x4c292, indexSF2Sprites_FeiLong },
    { L"Jab Super Trail 2", 0x4c292, 0x4c2b2, indexSF2Sprites_FeiLong },
    { L"Jab Super Trail 3", 0x4c2b2, 0x4C2D2, indexSF2Sprites_FeiLong },
    { L"Strong", 0x4c2d4, 0x4c2f4, indexSF2Sprites_FeiLong },
    { L"Strong Super Trail 1", 0x4c314, 0x4c334, indexSF2Sprites_FeiLong },
    { L"Strong Super Trail 2", 0x4c334, 0x4c354, indexSF2Sprites_FeiLong },
    { L"Strong Super Trail 3", 0x4c354, 0x4C374, indexSF2Sprites_FeiLong },
    { L"Fierce", 0x4c376, 0x4c396, indexSF2Sprites_FeiLong },
    { L"Fierce Super Trail 1", 0x4c3b6, 0x4c3d6, indexSF2Sprites_FeiLong },
    { L"Fierce Super Trail 2", 0x4c3d6, 0x4c3f6, indexSF2Sprites_FeiLong },
    { L"Fierce Super Trail 3", 0x4c3f6, 0x4C416, indexSF2Sprites_FeiLong },
    { L"Short", 0x4c418, 0x4c438, indexSF2Sprites_FeiLong },
    { L"Short Super Trail 1", 0x4c458, 0x4c478, indexSF2Sprites_FeiLong },
    { L"Short Super Trail 2", 0x4c478, 0x4c498, indexSF2Sprites_FeiLong },
    { L"Short Super Trail 3", 0x4c498, 0x4C4B8, indexSF2Sprites_FeiLong },
    { L"Forward", 0x4c4ba, 0x4c4da, indexSF2Sprites_FeiLong },
    { L"Forward Super Trail 1", 0x4c4fa, 0x4C51A, indexSF2Sprites_FeiLong },
    { L"Forward Super Trail 2", 0x4C51A, 0x4C53A, indexSF2Sprites_FeiLong },
    { L"Forward Super Trail 3", 0x4C53A, 0x4C55A, indexSF2Sprites_FeiLong },
    { L"Roundhouse", 0x4c55c, 0x4c57c, indexSF2Sprites_FeiLong },
    { L"Roundhouse Super Trail 1", 0x4c59c, 0x4C5BC, indexSF2Sprites_FeiLong },
    { L"Roundhouse Super Trail 2", 0x4c5bc, 0x4C5DC, indexSF2Sprites_FeiLong },
    { L"Roundhouse Super Trail 3", 0x4C5DC, 0x4C5FC, indexSF2Sprites_FeiLong },
    { L"Start", 0x4c5fe, 0x4C61E, indexSF2Sprites_FeiLong },
    { L"Start Super Trail 1", 0x4c63e, 0x4c65e, indexSF2Sprites_FeiLong },
    { L"Start Super Trail 2", 0x4c65e, 0x4c67e, indexSF2Sprites_FeiLong },
    { L"Start Super Trail 3", 0x4c67e, 0x4C69E, indexSF2Sprites_FeiLong },
    { L"Hold", 0x4c6a0, 0x4c6C0, indexSF2Sprites_FeiLong },
    { L"Hold Super Trail 1", 0x4c6e0, 0x4C700, indexSF2Sprites_FeiLong },
    { L"Hold Super Trail 2", 0x4C700, 0x4C720, indexSF2Sprites_FeiLong },
    { L"Hold Super Trail 3", 0x4C720, 0x4C740, indexSF2Sprites_FeiLong },
};


const sDescTreeNode HSF2_A_FEILONG_COLLECTION[] =
{
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_FEILONG_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_FEILONG_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_FEILONG_ST_PALETTES,    ARRAYSIZE(HSF2_A_FEILONG_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_DEEJAY_SSF2_PALETTES[] =
{
    { L"Palette 1", 0x4CDAa, 0x4CDCa, indexSF2Sprites_DeeJay },
    { L"Palette 1 Air Slasher", 0x4CDCa, 0x4CDEa, indexSF2Sprites_DeeJay, 0x1 },
    { L"Palette 2/Start", 0x4ce4c, 0x4ce6c, indexSF2Sprites_DeeJay },
    { L"Palette 2/Start Air Slasher", 0x4ce6c, 0x4ce8c, indexSF2Sprites_DeeJay, 0x1 },
};

const sGame_PaletteDataset HSF2_A_DEEJAY_ST_PALETTES[] =
{
    { L"Jab", 0x4c89a, 0x4c8ba, indexSF2Sprites_DeeJay },
    { L"Jab Air Slasher", 0x4c8ba, 0x4c8da, indexSF2Sprites_DeeJay, 0x1 },
    { L"Jab Super Trail 1", 0x4c8da, 0x4C8FA, indexSF2Sprites_DeeJay },
    { L"Jab Super Trail 2", 0x4C8FA, 0x4C91A, indexSF2Sprites_DeeJay },
    { L"Jab Super Trail 3", 0x4C91A, 0x4C93A, indexSF2Sprites_DeeJay },
    { L"Strong", 0x4c93c, 0x4c95c, indexSF2Sprites_DeeJay },
    { L"Strong Air Slasher", 0x4c95c, 0x4c97c, indexSF2Sprites_DeeJay, 0x1 },
    { L"Strong Super Trail 1", 0x4c97c, 0x4C99C, indexSF2Sprites_DeeJay },
    { L"Strong Super Trail 2", 0x4C99C, 0x4C9BC, indexSF2Sprites_DeeJay },
    { L"Strong Super Trail 3", 0x4C9BC, 0x4C9DC, indexSF2Sprites_DeeJay },
    { L"Fierce", 0x4c9de, 0x4c9fe, indexSF2Sprites_DeeJay },
    { L"Fierce Air Slasher", 0x4c9fe, 0x4CA1E, indexSF2Sprites_DeeJay, 0x1 },
    { L"Fierce Super Trail 1", 0x4CA1E, 0x4CA3E, indexSF2Sprites_DeeJay },
    { L"Fierce Super Trail 2", 0x4CA3E, 0x4CA5E, indexSF2Sprites_DeeJay },
    { L"Fierce Super Trail 3", 0x4CA5E, 0x4CA7E, indexSF2Sprites_DeeJay },
    { L"Short", 0x4ca80, 0x4caa0, indexSF2Sprites_DeeJay },
    { L"Short Air Slasher", 0x4caa0, 0x4cac0, indexSF2Sprites_DeeJay, 0x1 },
    { L"Short Super Trail 1", 0x4cac0, 0x4cae0, indexSF2Sprites_DeeJay },
    { L"Short Super Trail 2", 0x4cae0, 0x4CB00, indexSF2Sprites_DeeJay },
    { L"Short Super Trail 3", 0x4CB00, 0x4CB20, indexSF2Sprites_DeeJay },
    { L"Forward", 0x4CB22, 0x4CB42, indexSF2Sprites_DeeJay },
    { L"Forward Air Slasher", 0x4CB42, 0x4CB62, indexSF2Sprites_DeeJay, 0x1 },
    { L"Forward Super Trail 1", 0x4CB62, 0x4CB82, indexSF2Sprites_DeeJay },
    { L"Forward Super Trail 2", 0x4CB82, 0x4CBa2, indexSF2Sprites_DeeJay },
    { L"Forward Super Trail 3", 0x4CBa2, 0x4CBC2, indexSF2Sprites_DeeJay },
    { L"Roundhouse", 0x4CBC4, 0x4CBe4, indexSF2Sprites_DeeJay },
    { L"Roundhouse Air Slasher", 0x4CBe4, 0x4CC04, indexSF2Sprites_DeeJay, 0x1 },
    { L"Roundhouse Super Trail 1", 0x4CC04, 0x4CC24, indexSF2Sprites_DeeJay },
    { L"Roundhouse Super Trail 2", 0x4CC24, 0x4CC44, indexSF2Sprites_DeeJay },
    { L"Roundhouse Super Trail 3", 0x4CC44, 0x4CC64, indexSF2Sprites_DeeJay },
    { L"Start", 0x4CC66, 0x4CC86, indexSF2Sprites_DeeJay },
    { L"Start Air Slasher", 0x4CC86, 0x4CCa6, indexSF2Sprites_DeeJay, 0x1 },
    { L"Start Super Trail 1", 0x4CCa6, 0x4CCc6, indexSF2Sprites_DeeJay },
    { L"Start Super Trail 2", 0x4CCc6, 0x4CCe6, indexSF2Sprites_DeeJay },
    { L"Start Super Trail 3", 0x4CCe6, 0x4CD06, indexSF2Sprites_DeeJay },
    { L"Hold", 0x4CD08, 0x4CD28, indexSF2Sprites_DeeJay },
    { L"Hold Air Slasher", 0x4CD28, 0x4CD48, indexSF2Sprites_DeeJay, 0x1 },
    { L"Hold Super Trail 1", 0x4CD48, 0x4CD68, indexSF2Sprites_DeeJay },
    { L"Hold Super Trail 2", 0x4CD68, 0x4CD88, indexSF2Sprites_DeeJay },
    { L"Hold Super Trail 3", 0x4CD88, 0x4CDA8, indexSF2Sprites_DeeJay },
};


const sDescTreeNode HSF2_A_DEEJAY_COLLECTION[] =
{
    { L"SSF2",  DESC_NODETYPE_TREE,    (void*)HSF2_A_DEEJAY_SSF2_PALETTES,  ARRAYSIZE(HSF2_A_DEEJAY_SSF2_PALETTES) },
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_DEEJAY_ST_PALETTES,    ARRAYSIZE(HSF2_A_DEEJAY_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_GOUKI_ST_PALETTES[] =
{
    { L"P1 Palette", 0x4cef2, 0x4CF12, indexSF2Sprites_Gouki },
    { L"P1 Palette Super Trail 1", 0x4cf32, 0x4cf52, indexSF2Sprites_Gouki },
    { L"P1 Palette Super Trail 2", 0x4cf52, 0x4cf72, indexSF2Sprites_Gouki },
    { L"P1 Palette Super Trail 3", 0x4cf72, 0x4CF92, indexSF2Sprites_Gouki },
    { L"P2 Palette", 0x4cf94, 0x4cfB4, indexSF2Sprites_Gouki },
    { L"P2 Palette Super Trail 1", 0x4cfd4, 0x4cfF4, indexSF2Sprites_Gouki },
    { L"P2 Palette Super Trail 2", 0x4cfF4, 0x4D014, indexSF2Sprites_Gouki },
    { L"P2 Palette Super Trail 3", 0x4D014, 0x4D034, indexSF2Sprites_Gouki },
};


const sDescTreeNode HSF2_A_GOUKI_COLLECTION[] =
{
    { L"ST",    DESC_NODETYPE_TREE,    (void*)HSF2_A_GOUKI_ST_PALETTES,    ARRAYSIZE(HSF2_A_GOUKI_ST_PALETTES) },
};

const sGame_PaletteDataset HSF2_A_RYU_ST_PORTRAIT_PALETTES[] =
{
    { L"Ryu ST Portrait Jab 1/2", 0x2CE98, 0x2CF18, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Jab 2/2", 0x2d398, 0x2d418, indexSF2Sprites_Ryu, 0x11, &pairPrevious },
    { L"Ryu ST Portrait Strong 1/2", 0x2cf18, 0x2CF98, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Strong 2/2", 0x2d418, 0x2D498, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Fierce 1/2", 0x2CF98, 0x2D018, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Fierce 2/2", 0x2D498, 0x2D518, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Short 1/2", 0x2D018, 0x2D098, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Short 2/2", 0x2D518, 0x2D598, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Forward 1/2", 0x2D098, 0x2D118, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Forward 2/2", 0x2D598, 0x2D618, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Roundhouse 1/2", 0x2D118, 0x2D198, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Roundhouse 2/2", 0x2D618, 0x2D698, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Start 1/2", 0x2D198, 0x2D218, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Start 2/2", 0x2D698, 0x2D718, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu ST Portrait Hold 1/2", 0x2D218, 0x2D298, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu ST Portrait Hold 2/2", 0x2D718, 0x2D798, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu SSF2 Portrait Palette 1 1/2", 0x2D298, 0x2D318, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu SSF2 Portrait Palette 1 2/2", 0x2D798, 0x2D818, indexSF2Sprites_Ryu, 0x11 },
    { L"Ryu SSF2 Portrait Palette Start 1/2", 0x2D318, 0x2D398, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu SSF2 Portrait Palette Start 2/2", 0x2D818, 0x2D898, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset HSF2_A_EHONDA_ST_PORTRAIT_PALETTES[] =
{
    { L"E.Honda ST Portrait Jab 1/2", 0x2d898, 0x2D918, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Jab 2/2", 0x2dd98, 0x2DE18, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Strong 1/2", 0x2D918, 0x2D998, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Strong 2/2", 0x2DE18, 0x2DE98, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Fierce 1/2", 0x2D998, 0x2DA18, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Fierce 2/2", 0x2DE98, 0x2DF18, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Short 1/2", 0x2DA18, 0x2DA98, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Short 2/2", 0x2DF18, 0x2DF98, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Forward 1/2", 0x2DA98, 0x2DB18, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Forward 2/2", 0x2DF98, 0x2E018, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Roundhouse 1/2", 0x2DB18, 0x2DB98, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Roundhouse 2/2", 0x2E018, 0x2E098, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Start 1/2", 0x2DB98, 0x2DC18, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Start 2/2", 0x2E098, 0x2E118, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda ST Portrait Hold 1/2", 0x2DC18, 0x2DC98, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda ST Portrait Hold 2/2", 0x2E118, 0x2E198, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda SSF2 Portrait Palette 1 1/2", 0x2DC98, 0x2DD18, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda SSF2 Portrait Palette 1 2/2", 0x2E198, 0x2E218, indexSF2Sprites_EHonda, 0x11 },
    { L"E.Honda SSF2 Portrait Start 1/2", 0x2DD18, 0x2DD98, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E.Honda SSF2 Portrait Start 2/2", 0x2E218, 0x2E298, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset HSF2_A_BLANKA_ST_PORTRAIT_PALETTES[] =
{
    { L"Blanka ST Portrait Jab 1/2", 0x2e298, 0x2E318, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Jab 2/2", 0x2e798, 0x2E818, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Strong 1/2", 0x2E318, 0x2E398, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Strong 2/2", 0x2E818, 0x2E898, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Fierce 1/2", 0x2E398, 0x2E418, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Fierce 2/2", 0x2E898, 0x2E918, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Short 1/2", 0x2E418, 0x2E498, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Short 2/2", 0x2E918, 0x2E998, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Forward 1/2", 0x2E498, 0x2E518, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Forward 2/2", 0x2E998, 0x2EA18, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Roundhouse 1/2", 0x2E518, 0x2E598, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Roundhouse 2/2", 0x2EA18, 0x2EA98, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Start 1/2", 0x2E598, 0x2E618, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Start 2/2", 0x2EA98, 0x2EB18, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka ST Portrait Hold 1/2", 0x2E618, 0x2E698, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka ST Portrait Hold 2/2", 0x2EB18, 0x2EB98, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka SSF2 Portrait Palette 1 1/2", 0x2E698, 0x2E718, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka SSF2 Portrait Palette 1 2/2", 0x2EB98, 0x2EC18, indexSF2Sprites_Blanka, 0x11 },
    { L"Blanka SSF2 Portrait Start 1/2", 0x2E718, 0x2E798, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka SSF2 Portrait Start 2/2", 0x2EC18, 0x2EC98, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset HSF2_A_GUILE_ST_PORTRAIT_PALETTES[] =
{
    { L"Guile ST Portrait Jab 1/2", 0x2ec98, 0x2ED18, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Jab 2/2", 0x2f198, 0x2F218, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Strong 1/2", 0x2ED18, 0x2ED98, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Strong 2/2", 0x2F218, 0x2F298, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Fierce 1/2", 0x2ED98, 0x2EE18, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Fierce 2/2", 0x2F298, 0x2F318, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Short 1/2", 0x2EE18, 0x2EE98, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Short 2/2", 0x2F318, 0x2F398, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Forward 1/2", 0x2EE98, 0x2EF18, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Forward 2/2", 0x2F398, 0x2F418, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Roundhouse 1/2", 0x2EF18, 0x2EF98, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Roundhouse 2/2", 0x2F418, 0x2F498, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Start 1/2", 0x2EF98, 0x2F018, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Start 2/2", 0x2F498, 0x2F518, indexSF2Sprites_Guile, 0x11 },
    { L"Guile ST Portrait Hold 1/2", 0x2F018, 0x2F098, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile ST Portrait Hold 2/2", 0x2F518, 0x2F598, indexSF2Sprites_Guile, 0x11 },
    { L"Guile SSF2 Portrait Palette 1 1/2", 0x2F098, 0x2F118, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile SSF2 Portrait Palette 1 2/2", 0x2F598, 0x2F618, indexSF2Sprites_Guile, 0x11 },
    { L"Guile SSF2 Portrait Start 1/2", 0x2F118, 0x2F198, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile SSF2 Portrait Start 2/2", 0x2F618, 0x2F698, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset HSF2_A_KEN_ST_PORTRAIT_PALETTES[] =
{
    { L"Ken ST Portrait Jab 1/2", 0x2f698, 0x2F718, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Jab 2/2", 0x2fb98, 0x2FC18, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Strong 1/2", 0x2F718, 0x2F798, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Strong 2/2", 0x2FC18, 0x2FC98, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Fierce 1/2", 0x2F798, 0x2F818, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Fierce 2/2", 0x2FC98, 0x2FD18, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Short 1/2", 0x2F818, 0x2F898, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Short 2/2", 0x2FD18, 0x2FD98, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Forward 1/2", 0x2F898, 0x2F918, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Forward 2/2", 0x2FD98, 0x2FE18, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Roundhouse 1/2", 0x2F918, 0x2F998, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Roundhouse 2/2", 0x2FE18, 0x2FE98, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Start 1/2", 0x2F998, 0x2FA18, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Start 2/2", 0x2FE98, 0x2FF18, indexSF2Sprites_Ken, 0x11 },
    { L"Ken ST Portrait Hold 1/2", 0x2FA18, 0x2FA98, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken ST Portrait Hold 2/2", 0x2FF18, 0x2FF98, indexSF2Sprites_Ken, 0x11 },
    { L"Ken SSF2 Portrait Palette 1 1/2", 0x2FA98, 0x2FB18, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken SSF2 Portrait Palette 1 2/2", 0x2FF98, 0x30018, indexSF2Sprites_Ken, 0x11 },
    { L"Ken SSF2 Portrait Start 1/2", 0x2FB18, 0x2FB98, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken SSF2 Portrait Start 2/2", 0x30018, 0x30098, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_ST_PORTRAIT_PALETTES[] =
{
    { L"Chun Li ST Portrait Jab 1/2", 0x30098, 0x30118, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Jab 2/2", 0x30598, 0x30618, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Strong 1/2", 0x30118, 0x30198, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Strong 2/2", 0x30618, 0x30698, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Fierce 1/2", 0x30198, 0x30218, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Fierce 2/2", 0x30698, 0x30718, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Short 1/2", 0x30218, 0x30298, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Short 2/2", 0x30718, 0x30798, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Forward 1/2", 0x30298, 0x30318, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Forward 2/2", 0x30798, 0x30818, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Roundhouse 1/2", 0x30318, 0x30398, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Roundhouse 2/2", 0x30818, 0x30898, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Start 1/2", 0x30398, 0x30418, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Start 2/2", 0x30898, 0x30918, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li ST Portrait Hold 1/2", 0x30418, 0x30498, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li ST Portrait Hold 2/2", 0x30918, 0x30998, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li SSF2 Portrait Palette 1 1/2", 0x30498, 0x30518, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li SSF2 Portrait Palette 1 2/2", 0x30998, 0x30A18, indexSF2Sprites_ChunLi, 0x11 },
    { L"Chun Li SSF2 Portrait Start 1/2", 0x30518, 0x30598, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li SSF2 Portrait Start 2/2", 0x30A18, 0x30A98, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_ST_PORTRAIT_PALETTES[] =
{
    { L"Zangief ST Portrait Jab 1/2", 0x30A98, 0x30B18, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Jab 2/2", 0x30f98, 0x31018, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Strong 1/2", 0x30B18, 0x30B98, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Strong 2/2", 0x31018, 0x31098, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Fierce 1/2", 0x30B98, 0x30C18, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Fierce 2/2", 0x31098, 0x31118, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Short 1/2", 0x30C18, 0x30C98, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Short 2/2", 0x31118, 0x31198, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Forward 1/2", 0x30C98, 0x30D18, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Forward 2/2", 0x31198, 0x31218, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Roundhouse 1/2", 0x30D18, 0x30D98, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Roundhouse 2/2", 0x31218, 0x31298, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Start 1/2", 0x30D98, 0x30E18, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Start 2/2", 0x31298, 0x31318, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief ST Portrait Hold 1/2", 0x30E18, 0x30E98, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief ST Portrait Hold 2/2", 0x31318, 0x31398, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief SSF2 Portrait Palette 1 1/2", 0x30E98, 0x30F18, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief SSF2 Portrait Palette 1 2/2", 0x31398, 0x31418, indexSF2Sprites_Zangief, 0x11 },
    { L"Zangief SSF2 Portrait Start 1/2", 0x30F18, 0x30F98, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief SSF2 Portrait Start 2/2", 0x31418, 0x31498, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_ST_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim ST Portrait Jab 1/2", 0x31498, 0x31518, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Jab 2/2", 0x31998, 0x31A18, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Strong 1/2", 0x31518, 0x31598, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Strong 2/2", 0x31A18, 0x31A98, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Fierce 1/2", 0x31598, 0x31618, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Fierce 2/2", 0x31A98, 0x31B18, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Short 1/2", 0x31618, 0x31698, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Short 2/2", 0x31B18, 0x31B98, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Forward 1/2", 0x31698, 0x31718, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Forward 2/2", 0x31B98, 0x31C18, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Roundhouse 1/2", 0x31718, 0x31798, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Roundhouse 2/2", 0x31C18, 0x31C98, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Start 1/2", 0x31798, 0x31818, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Start 2/2", 0x31C98, 0x31D18, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim ST Portrait Hold 1/2", 0x31818, 0x31898, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim ST Portrait Hold 2/2", 0x31D18, 0x31D98, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim SSF2 Portrait Palette 1 1/2", 0x31898, 0x31918, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim SSF2 Portrait Palette 1 2/2", 0x31D98, 0x31E18, indexSF2Sprites_Dhalsim, 0x11 },
    { L"Dhalsim SSF2 Portrait Start 1/2", 0x31918, 0x31998, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim SSF2 Portrait Start 2/2", 0x31E18, 0x31E98, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset HSF2_A_MBISON_ST_PORTRAIT_PALETTES[] =
{
    { L"M. Bison ST Portrait Jab 1/2", 0x31e98, 0x31F18, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Jab 2/2", 0x32398, 0x32418, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Strong 1/2", 0x31F18, 0x31F98, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Strong 2/2", 0x32418, 0x32498, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Fierce 1/2", 0x31F98, 0x32018, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Fierce 2/2", 0x32498, 0x32518, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Short 1/2", 0x32018, 0x32098, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Short 2/2", 0x32518, 0x32598, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Forward 1/2", 0x32098, 0x32118, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Forward 2/2", 0x32598, 0x32618, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Roundhouse 1/2", 0x32118, 0x32198, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Roundhouse 2/2", 0x32618, 0x32698, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Start 1/2", 0x32198, 0x32218, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Start 2/2", 0x32698, 0x32718, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison ST Portrait Hold 1/2", 0x32218, 0x32298, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison ST Portrait Hold 2/2", 0x32718, 0x32798, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison SSF2 Portrait Palette 1 1/2", 0x32298, 0x32318, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison SSF2 Portrait Palette 1 2/2", 0x32798, 0x32818, indexSF2Sprites_Bison, 0x11 },
    { L"M. Bison SSF2 Portrait Start 1/2", 0x32318, 0x32398, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison SSF2 Portrait Start 2/2", 0x32818, 0x32898, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset HSF2_A_SAGAT_ST_PORTRAIT_PALETTES[] =
{
    { L"Sagat ST Portrait Jab 1/2", 0x32898, 0x32918, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Jab 2/2", 0x32D98, 0x32E18, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Strong 1/2", 0x32918, 0x32998, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Strong 2/2", 0x32E18, 0x32E98, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Fierce 1/2", 0x32998, 0x32A18, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Fierce 2/2", 0x32E98, 0x32F18, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Short 1/2", 0x32A18, 0x32A98, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Short 2/2", 0x32F18, 0x32F98, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Forward 1/2", 0x32A98, 0x32B18, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Forward 2/2", 0x32F98, 0x33018, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Roundhouse 1/2", 0x32B18, 0x32B98, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Roundhouse 2/2", 0x33018, 0x33098, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Start 1/2", 0x32B98, 0x32C18, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Start 2/2", 0x33098, 0x33118, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat ST Portrait Hold 1/2", 0x32C18, 0x32C98, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat ST Portrait Hold 2/2", 0x33118, 0x33198, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat SSF2 Portrait Palette 1 1/2", 0x32C98, 0x32D18, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat SSF2 Portrait Palette 1 2/2", 0x33198, 0x33218, indexSF2Sprites_Sagat, 0x11 },
    { L"Sagat SSF2 Portrait Start 1/2", 0x32D18, 0x32D98, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat SSF2 Portrait Start 2/2", 0x33218, 0x33298, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset HSF2_A_BALROG_ST_PORTRAIT_PALETTES[] =
{
    { L"Balrog ST Portrait Jab 1/2", 0x33298, 0x33318, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Jab 2/2", 0x33798, 0x33818, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Strong 1/2", 0x33318, 0x33398, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Strong 2/2", 0x33818, 0x33898, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Fierce 1/2", 0x33398, 0x33418, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Fierce 2/2", 0x33898, 0x33918, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Short 1/2", 0x33418, 0x33498, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Short 2/2", 0x33918, 0x33998, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Forward 1/2", 0x33498, 0x33518, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Forward 2/2", 0x33998, 0x33A18, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Roundhouse 1/2", 0x33518, 0x33598, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Roundhouse 2/2", 0x33A18, 0x33A98, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Start 1/2", 0x33598, 0x33618, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Start 2/2", 0x33A98, 0x33B18, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog ST Portrait Hold 1/2", 0x33618, 0x33698, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog ST Portrait Hold 2/2", 0x33B18, 0x33B98, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog SSF2 Portrait Palette 1 1/2", 0x33698, 0x33718, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog SSF2 Portrait Palette 1 2/2", 0x33B98, 0x33C18, indexSF2Sprites_Balrog, 0x11 },
    { L"Balrog SSF2 Portrait Start 1/2", 0x33718, 0x33798, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog SSF2 Portrait Start 2/2", 0x33C18, 0x33C98, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset HSF2_A_VEGA_ST_PORTRAIT_PALETTES[] =
{
    { L"Vega ST Portrait Jab 1/2", 0x33C98, 0x33D18, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Jab 2/2", 0x34198, 0x34218, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Strong 1/2", 0x33D18, 0x33D98, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Strong 2/2", 0x34218, 0x34298, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Fierce 1/2", 0x33D98, 0x33E18, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Fierce 2/2", 0x34298, 0x34318, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Short 1/2", 0x33E18, 0x33E98, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Short 2/2", 0x34318, 0x34398, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Forward 1/2", 0x33E98, 0x33F18, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Forward 2/2", 0x34398, 0x34418, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Roundhouse 1/2", 0x33F18, 0x33F98, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Roundhouse 2/2", 0x34418, 0x34498, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Start 1/2", 0x33F98, 0x34018, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Start 2/2", 0x34498, 0x34518, indexSF2Sprites_Vega, 0x11 },
    { L"Vega ST Portrait Hold 1/2", 0x34018, 0x34098, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega ST Portrait Hold 2/2", 0x34518, 0x34598, indexSF2Sprites_Vega, 0x11 },
    { L"Vega SSF2 Portrait Palette 1 1/2", 0x34098, 0x34118, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega SSF2 Portrait Palette 1 2/2", 0x34598, 0x34618, indexSF2Sprites_Vega, 0x11 },
    { L"Vega SSF2 Portrait Start 1/2", 0x34118, 0x34198, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega SSF2 Portrait Start 2/2", 0x34618, 0x34698, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset HSF2_A_CAMMY_ST_PORTRAIT_PALETTES[] =
{
    { L"Cammy ST Portrait Jab 1/2", 0x34698, 0x34718, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Jab 2/2", 0x34B98, 0x34C18, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Strong 1/2", 0x34718, 0x34798, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Strong 2/2", 0x34C18, 0x34C98, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Fierce 1/2", 0x34798, 0x34818, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Fierce 2/2", 0x34C98, 0x34D18, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Short 1/2", 0x34818, 0x34898, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Short 2/2", 0x34D18, 0x34D98, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Forward 1/2", 0x34898, 0x34918, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Forward 2/2", 0x34D98, 0x34E18, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Roundhouse 1/2", 0x34918, 0x34998, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Roundhouse 2/2", 0x34E18, 0x34E98, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Start 1/2", 0x34998, 0x34A18, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Start 2/2", 0x34E98, 0x34F18, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy ST Portrait Hold 1/2", 0x34A18, 0x34A98, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy ST Portrait Hold 2/2", 0x34F18, 0x34F98, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy SSF2 Portrait Palette 1 1/2", 0x34A98, 0x34B18, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy SSF2 Portrait Palette 1 2/2", 0x34F98, 0x35018, indexSF2Sprites_Cammy, 0x11 },
    { L"Cammy SSF2 Portrait Start 1/2", 0x34B18, 0x34B98, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy SSF2 Portrait Start 2/2", 0x35018, 0x35098, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset HSF2_A_THAWK_ST_PORTRAIT_PALETTES[] =
{
    { L"T-Hawk ST Portrait Jab 1/2", 0x35098, 0x35118, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Jab 2/2", 0x35598, 0x35618, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Strong 1/2", 0x35118, 0x35198, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Strong 2/2", 0x35618, 0x35698, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Fierce 1/2", 0x35198, 0x35218, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Fierce 2/2", 0x35698, 0x35718, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Short 1/2", 0x35218, 0x35298, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Short 2/2", 0x35718, 0x35798, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Forward 1/2", 0x35298, 0x35318, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Forward 2/2", 0x35798, 0x35818, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Roundhouse 1/2", 0x35318, 0x35398, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Roundhouse 2/2", 0x35818, 0x35898, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Start 1/2", 0x35398, 0x35418, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Start 2/2", 0x35898, 0x35918, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk ST Portrait Hold 1/2", 0x35418, 0x35498, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk ST Portrait Hold 2/2", 0x35918, 0x35998, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk SSF2 Portrait Palette 1 1/2", 0x35498, 0x35518, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk SSF2 Portrait Palette 1 2/2", 0x35998, 0x35A18, indexSF2Sprites_THawk, 0x11 },
    { L"T-Hawk SSF2 Portrait Start 1/2", 0x35518, 0x35598, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk SSF2 Portrait Start 2/2", 0x35A18, 0x35A98, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset HSF2_A_FEILONG_ST_PORTRAIT_PALETTES[] =
{
    { L"Fei Long ST Portrait Jab 1/2", 0x35A98, 0x35B18, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Jab 2/2", 0x35F98, 0x36018, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Strong 1/2", 0x35B18, 0x35B98, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Strong 2/2", 0x36018, 0x36098, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Fierce 1/2", 0x35B98, 0x35C18, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Fierce 2/2", 0x36098, 0x36118, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Short 1/2", 0x35C18, 0x35C98, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Short 2/2", 0x36118, 0x36198, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Forward 1/2", 0x35C98, 0x35D18, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Forward 2/2", 0x36198, 0x36218, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Roundhouse 1/2", 0x35D18, 0x35D98, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Roundhouse 2/2", 0x36218, 0x36298, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Start 1/2", 0x35D98, 0x35E18, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Start 2/2", 0x36298, 0x36318, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long ST Portrait Hold 1/2", 0x35E18, 0x35E98, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long ST Portrait Hold 2/2", 0x36318, 0x36398, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long SSF2 Portrait Palette 1 1/2", 0x35E98, 0x35F18, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long SSF2 Portrait Palette 1 2/2", 0x36398, 0x36418, indexSF2Sprites_FeiLong, 0x11 },
    { L"Fei Long SSF2 Portrait Start 1/2", 0x35F18, 0x35F98, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long SSF2 Portrait Start 2/2", 0x36418, 0x36498, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset HSF2_A_DEEJAY_ST_PORTRAIT_PALETTES[] =
{
    { L"Dee Jay ST Portrait Jab 1/2", 0x36498, 0x36518, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Jab 2/2", 0x36998, 0x36A18, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Strong 1/2", 0x36518, 0x36598, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Strong 2/2", 0x36A18, 0x36A98, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Fierce 1/2", 0x36598, 0x36618, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Fierce 2/2", 0x36A98, 0x36B18, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Short 1/2", 0x36618, 0x36698, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Short 2/2", 0x36B18, 0x36B98, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Forward 1/2", 0x36698, 0x36718, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Forward 2/2", 0x36B98, 0x36C18, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Roundhouse 1/2", 0x36718, 0x36798, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Roundhouse 2/2", 0x36C18, 0x36C98, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Start 1/2", 0x36798, 0x36818, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Start 2/2", 0x36C98, 0x36D18, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay ST Portrait Hold 1/2", 0x36818, 0x36898, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay ST Portrait Hold 2/2", 0x36D18, 0x36D98, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay SSF2 Portrait Palette 1 1/2", 0x36898, 0x36918, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay SSF2 Portrait Palette 1 2/2", 0x36D98, 0x36E18, indexSF2Sprites_DeeJay, 0x11 },
    { L"Dee Jay SSF2 Portrait Start 1/2", 0x36918, 0x36998, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay SSF2 Portrait Start 2/2", 0x36E18, 0x36E98, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset HSF2_A_RYU_WW_PORTRAIT_PALETTES[] =
{
    { L"Ryu WW Portrait (Shared)", 0x370A8, 0x37128, indexSF2Sprites_Bonus, 0x16 },
};

const sGame_PaletteDataset HSF2_A_RYU_CE_PORTRAIT_PALETTES[] =
{
    { L"Ryu CE Portrait Palette 1", 0x37128, 0x371A8, indexSF2Sprites_Bonus, 0x16 },
    { L"Ryu CE Portrait Palette 2", 0x371A8, 0x37228, indexSF2Sprites_Bonus, 0x16 },
};

const sGame_PaletteDataset HSF2_A_RYU_HF_PORTRAIT_PALETTES[] =
{
    { L"Ryu HF Portrait Palette 1 ", 0x372a8, 0X37328, indexSF2Sprites_Bonus, 0x16 },
    { L"Ryu HF Portrait Palette 2", 0x37228, 0x372a8, indexSF2Sprites_Bonus, 0x16 },
};

const sGame_PaletteDataset HSF2_A_EHONDA_WW_PORTRAIT_PALETTES[] =
{
    { L"E.Honda WW Portrait (Shared)", 0X37328, 0x373A8, indexSF2Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset HSF2_A_EHONDA_CE_PORTRAIT_PALETTES[] =
{
    { L"E.Honda CE Portrait Palette 1", 0x373A8, 0x37428, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda CE Portrait Palette 2", 0x37428, 0x374A8, indexSF2Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset HSF2_A_EHONDA_HF_PORTRAIT_PALETTES[] =
{
    { L"E.Honda HF Portrait Palette 1", 0X37528, 0x375A8, indexSF2Sprites_Bonus, 0x10 },
    { L"E.Honda HF Portrait Palette 2", 0x374A8, 0X37528, indexSF2Sprites_Bonus, 0x10 },
};

const sGame_PaletteDataset HSF2_A_BLANKA_WW_PORTRAIT_PALETTES[] =
{
    { L"Blanka WW Portrait (Shared)", 0x375A8, 0x37628, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset HSF2_A_BLANKA_CE_PORTRAIT_PALETTES[] =
{
    { L"Blanka CE Portrait Palette 1", 0x37628, 0x376A8, indexSF2Sprites_Bonus, 0x03 },
    { L"Blanka CE Portrait Palette 2", 0x376A8, 0x37728, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset HSF2_A_BLANKA_HF_PORTRAIT_PALETTES[] =
{
    { L"Blanka HF Portrait Palette 1", 0x377A8, 0x37828, indexSF2Sprites_Bonus, 0x03 },
    { L"Blanka HF Portrait Palette 2", 0x37728, 0x377A8, indexSF2Sprites_Bonus, 0x03 },
};

const sGame_PaletteDataset HSF2_A_GUILE_WW_PORTRAIT_PALETTES[] =
{
    { L"Guile WW Portrait (Shared)", 0x37828, 0x378A8, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset HSF2_A_GUILE_CE_PORTRAIT_PALETTES[] =
{
    { L"Guile CE Portrait Palette 1", 0x378A8, 0x37928, indexSF2Sprites_Bonus, 0x12 },
    { L"Guile CE Portrait Palette 2", 0x37928, 0x379A8, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset HSF2_A_GUILE_HF_PORTRAIT_PALETTES[] =
{
    { L"Guile HF Portrait Palette 1", 0X37A28, 0x37AA8, indexSF2Sprites_Bonus, 0x12 },
    { L"Guile HF Portrait Palette 2", 0x379A8, 0X37A28, indexSF2Sprites_Bonus, 0x12 },
};

const sGame_PaletteDataset HSF2_A_KEN_WW_PORTRAIT_PALETTES[] =
{
    { L"Ken WW Portrait (Shared)", 0x37AA8, 0x37B28, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset HSF2_A_KEN_CE_PORTRAIT_PALETTES[] =
{
    { L"Ken CE Portrait Palette 1", 0x37B28, 0x37BA8, indexSF2Sprites_Bonus, 0x14 },
    { L"Ken CE Portrait Palette 2", 0x37BA8, 0x37C28, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset HSF2_A_KEN_HF_PORTRAIT_PALETTES[] =
{
    { L"Ken HF Portrait Palette 1", 0x37CA8, 0x37D28, indexSF2Sprites_Bonus, 0x14 },
    { L"Ken HF Portrait Palette 2", 0x37C28, 0x37CA8, indexSF2Sprites_Bonus, 0x14 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_WW_PORTRAIT_PALETTES[] =
{
    { L"Chun Li WW Portrait (Shared)", 0x37D28, 0x37DA8, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_CE_PORTRAIT_PALETTES[] =
{
    { L"Chun Li CE Portrait Palette 1", 0x37DA8, 0x37E28, indexSF2Sprites_Bonus, 0x06 },
    { L"Chun Li CE Portrait Palette 2", 0x37E28, 0x37EA8, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset HSF2_A_CHUNLI_HF_PORTRAIT_PALETTES[] =
{
    { L"Chun Li HF Portrait Palette 1", 0x37F28, 0x37FA8, indexSF2Sprites_Bonus, 0x06 },
    { L"Chun Li HF Portrait Palette 2", 0x37EA8, 0x37F28, indexSF2Sprites_Bonus, 0x06 },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_WW_PORTRAIT_PALETTES[] =
{
    { L"Zangief WW Portrait (Shared) ", 0x37FA8, 0x38028, indexSF2Sprites_Bonus, 0x1a },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_CE_PORTRAIT_PALETTES[] =
{
    { L"Zangief CE Portrait Palette 1", 0x38028, 0x380A8, indexSF2Sprites_Bonus, 0x1a },
    { L"Zangief CE Portrait Palette 2", 0x380A8, 0x38128, indexSF2Sprites_Bonus, 0x1a },
};

const sGame_PaletteDataset HSF2_A_ZANGIEF_HF_PORTRAIT_PALETTES[] =
{
    { L"Zangief HF Portrait Palette 1", 0x381A8, 0x38228, indexSF2Sprites_Bonus, 0x1a },
    { L"Zangief HF Portrait Palette 2", 0x38128, 0x381A8, indexSF2Sprites_Bonus, 0x1a },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_WW_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim WW Portrait (Shared) 1/2", 0x38228, 0x38248, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim WW Portrait (Shared) 2/2", 0x38248, 0x382A8, indexSF2Sprites_Bonus, 0x0b },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_CE_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim CE Portrait Palette 1 1/2", 0x382A8, 0x382c8, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim CE Portrait Palette 1 2/2", 0x382c8, 0x38328, indexSF2Sprites_Bonus, 0x0b },
    { L"Dhalsim CE Portrait Palette 2 1/2", 0x38328, 0x38348, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim CE Portrait Palette 2 2/2", 0x38348, 0x383A8, indexSF2Sprites_Bonus, 0x0b },
};

const sGame_PaletteDataset HSF2_A_DHALSIM_HF_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim HF Portrait Palette 1 1/2", 0x38428, 0x38448, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim HF Portrait Palette 1 2/2", 0x38448, 0x384A8, indexSF2Sprites_Bonus, 0x0b },
    { L"Dhalsim HF Portrait Palette 2 1/2", 0x383A8, 0x383c8, indexSF2Sprites_Bonus, 0x0a, &pairNext },
    { L"Dhalsim HF Portrait Palette 2 2/2", 0x383c8, 0x38428, indexSF2Sprites_Bonus, 0x0b },
};

const sGame_PaletteDataset HSF2_A_MBISON_CE_PORTRAIT_PALETTES[] =
{
    { L"M. Bison CE Portrait Palette 1 1/2", 0x384A8, 0x384c8, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"M. Bison CE Portrait Palette 1 2/2", 0x384c8, 0x38528, indexSF2Sprites_Bonus, 0x0e },
    { L"M. Bison CE Portrait Palette 1 1/2", 0x38528, 0x38548, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"M. Bison CE Portrait Palette 1 2/2", 0x38548, 0x385A8, indexSF2Sprites_Bonus, 0x0e },
};

const sGame_PaletteDataset HSF2_A_MBISON_HF_PORTRAIT_PALETTES[] =
{
    { L"M. Bison HF Portrait Palette 1 1/2", 0x385A8, 0x385c8, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"M. Bison HF Portrait Palette 1 2/2", 0x385c8, 0x38628, indexSF2Sprites_Bonus, 0x0e },
    { L"M. Bison HF Portrait Palette 2 1/2", 0x38628, 0x38648, indexSF2Sprites_Bonus, 0x0d, &pairNext },
    { L"M. Bison HF Portrait Palette 2 2/2", 0x38648, 0x386A8, indexSF2Sprites_Bonus, 0x0e },
};

const sGame_PaletteDataset HSF2_A_SAGAT_CE_PORTRAIT_PALETTES[] =
{
    { L"Sagat CE Portrait Palette 1", 0x386A8, 0x38728, indexSF2Sprites_Bonus, 0x19 },
    { L"Sagat CE Portrait Palette 1", 0x38728, 0x387A8, indexSF2Sprites_Bonus, 0x19 },
};

const sGame_PaletteDataset HSF2_A_SAGAT_HF_PORTRAIT_PALETTES[] =
{
    { L"Sagat HF Portrait Palette 1", 0x38828, 0x388A8, indexSF2Sprites_Bonus, 0x19 },
    { L"Sagat HF Portrait Palette 2", 0x387A8, 0x38828, indexSF2Sprites_Bonus, 0x19 },
};

const sGame_PaletteDataset HSF2_A_BALROG_CE_PORTRAIT_PALETTES[] =
{
    { L"Balrog CE Portrait Palette 1", 0x388A8, 0x38928 },
    { L"Balrog CE Portrait Palette 2", 0x38928, 0x389A8 },
};

const sGame_PaletteDataset HSF2_A_BALROG_HF_PORTRAIT_PALETTES[] =
{
    { L"Balrog HF Portrait Palette 1", 0x38A28, 0x38AA8 },
    { L"Balrog HF Portrait Palette 2", 0x389A8, 0x38A28 },
};

const sGame_PaletteDataset HSF2_A_VEGA_CE_PORTRAIT_PALETTES[] =
{
    { L"Vega CE Portrait Palette 1", 0x38AA8, 0x38B28 },
    { L"Vega CE Portrait Palette 2", 0x38B28, 0x38BA8 },
};

const sGame_PaletteDataset HSF2_A_VEGA_HF_PORTRAIT_PALETTES[] =
{
    { L"Vega HF Portrait Palette 1", 0x38C28, 0x38CA8 },
    { L"Vega HF Portrait Palette 2", 0x38BA8, 0x38C28 },
};

const sDescTreeNode HSF2_A_RYU_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_RYU_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_RYU_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_RYU_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_RYU_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_RYU_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_EHONDA_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_EHONDA_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_EHONDA_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_BLANKA_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_BLANKA_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BLANKA_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_GUILE_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_GUILE_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_GUILE_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_KEN_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_KEN_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_KEN_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_KEN_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_KEN_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_KEN_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_CHUNLI_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_CHUNLI_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_CHUNLI_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_ZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_ZANGIEF_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_ZANGIEF_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_DHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"WW",        DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_WW_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_WW_PORTRAIT_PALETTES) },
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_DHALSIM_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_DHALSIM_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_MBISON_PORTRAIT_COLLECTION[] =
{
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_MBISON_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_MBISON_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_MBISON_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_MBISON_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_SAGAT_PORTRAIT_COLLECTION[] =
{
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_SAGAT_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_SAGAT_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_SAGAT_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_SAGAT_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_BALROG_PORTRAIT_COLLECTION[] =
{
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BALROG_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BALROG_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_BALROG_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_BALROG_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_VEGA_PORTRAIT_COLLECTION[] =
{
    { L"CE",        DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_CE_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_VEGA_CE_PORTRAIT_PALETTES) },
    { L"HF",        DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_HF_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_VEGA_HF_PORTRAIT_PALETTES) },
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_VEGA_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_VEGA_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_CAMMY_PORTRAIT_COLLECTION[] =
{
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_CAMMY_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_CAMMY_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_THAWK_PORTRAIT_COLLECTION[] =
{
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_THAWK_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_THAWK_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_FEILONG_PORTRAIT_COLLECTION[] =
{
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_FEILONG_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_FEILONG_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_DEEJAY_PORTRAIT_COLLECTION[] =
{
    { L"ST/SSF2",   DESC_NODETYPE_TREE,    (void*)HSF2_A_DEEJAY_ST_PORTRAIT_PALETTES,    ARRAYSIZE(HSF2_A_DEEJAY_ST_PORTRAIT_PALETTES) },
};

const sDescTreeNode HSF2_A_UNITS_03[] =
{
    { L"Ryu",       DESC_NODETYPE_TREE, (void*)HSF2_A_RYU_PORTRAIT_COLLECTION,      ARRAYSIZE(HSF2_A_RYU_PORTRAIT_COLLECTION) },
    { L"E.Honda",   DESC_NODETYPE_TREE, (void*)HSF2_A_EHONDA_PORTRAIT_COLLECTION,   ARRAYSIZE(HSF2_A_EHONDA_PORTRAIT_COLLECTION) },
    { L"Blanka",    DESC_NODETYPE_TREE, (void*)HSF2_A_BLANKA_PORTRAIT_COLLECTION,   ARRAYSIZE(HSF2_A_BLANKA_PORTRAIT_COLLECTION) },
    { L"Guile",     DESC_NODETYPE_TREE, (void*)HSF2_A_GUILE_PORTRAIT_COLLECTION,    ARRAYSIZE(HSF2_A_GUILE_PORTRAIT_COLLECTION) },
    { L"Ken",       DESC_NODETYPE_TREE, (void*)HSF2_A_KEN_PORTRAIT_COLLECTION,      ARRAYSIZE(HSF2_A_KEN_PORTRAIT_COLLECTION) },
    { L"Chun-Li",   DESC_NODETYPE_TREE, (void*)HSF2_A_CHUNLI_PORTRAIT_COLLECTION,   ARRAYSIZE(HSF2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Zangief",   DESC_NODETYPE_TREE, (void*)HSF2_A_ZANGIEF_PORTRAIT_COLLECTION,  ARRAYSIZE(HSF2_A_ZANGIEF_PORTRAIT_COLLECTION) },
    { L"Dhalsim",   DESC_NODETYPE_TREE, (void*)HSF2_A_DHALSIM_PORTRAIT_COLLECTION,  ARRAYSIZE(HSF2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"M.Bison",   DESC_NODETYPE_TREE, (void*)HSF2_A_MBISON_PORTRAIT_COLLECTION,   ARRAYSIZE(HSF2_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Sagat",     DESC_NODETYPE_TREE, (void*)HSF2_A_SAGAT_PORTRAIT_COLLECTION,    ARRAYSIZE(HSF2_A_SAGAT_PORTRAIT_COLLECTION) },
    { L"Balrog",    DESC_NODETYPE_TREE, (void*)HSF2_A_BALROG_PORTRAIT_COLLECTION,   ARRAYSIZE(HSF2_A_BALROG_PORTRAIT_COLLECTION) },
    { L"Vega",      DESC_NODETYPE_TREE, (void*)HSF2_A_VEGA_PORTRAIT_COLLECTION,     ARRAYSIZE(HSF2_A_VEGA_PORTRAIT_COLLECTION) },
    { L"Cammy",     DESC_NODETYPE_TREE, (void*)HSF2_A_CAMMY_PORTRAIT_COLLECTION,    ARRAYSIZE(HSF2_A_CAMMY_PORTRAIT_COLLECTION) },
    { L"T-Hawk",    DESC_NODETYPE_TREE, (void*)HSF2_A_THAWK_PORTRAIT_COLLECTION,    ARRAYSIZE(HSF2_A_THAWK_PORTRAIT_COLLECTION) },
    { L"Fei Long",  DESC_NODETYPE_TREE, (void*)HSF2_A_FEILONG_PORTRAIT_COLLECTION,  ARRAYSIZE(HSF2_A_FEILONG_PORTRAIT_COLLECTION) },
    { L"Dee Jay",   DESC_NODETYPE_TREE, (void*)HSF2_A_DEEJAY_PORTRAIT_COLLECTION,   ARRAYSIZE(HSF2_A_DEEJAY_PORTRAIT_COLLECTION) },
};

constexpr auto HSF2_A_NUMUNIT_03 = ARRAYSIZE(HSF2_A_UNITS_03);
constexpr auto HSF2_A_EXTRALOC_03 = HSF2_A_NUMUNIT_03;

const sDescTreeNode HSF2_A_UNITS_04[] =
{
    { L"Balrog",          DESC_NODETYPE_TREE, (void*)HSF2_A_BALROG_COLLECTION,          ARRAYSIZE(HSF2_A_BALROG_COLLECTION) },
    { L"Blanka",          DESC_NODETYPE_TREE, (void*)HSF2_A_BLANKA_COLLECTION,          ARRAYSIZE(HSF2_A_BLANKA_COLLECTION) },
    { L"Cammy",           DESC_NODETYPE_TREE, (void*)HSF2_A_CAMMY_COLLECTION,           ARRAYSIZE(HSF2_A_CAMMY_COLLECTION) },
    { L"Chun Li",         DESC_NODETYPE_TREE, (void*)HSF2_A_CHUNLI_COLLECTION,          ARRAYSIZE(HSF2_A_CHUNLI_COLLECTION) },
    { L"Dee Jay",         DESC_NODETYPE_TREE, (void*)HSF2_A_DEEJAY_COLLECTION,          ARRAYSIZE(HSF2_A_DEEJAY_COLLECTION) },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)HSF2_A_DHALSIM_COLLECTION,         ARRAYSIZE(HSF2_A_DHALSIM_COLLECTION) },
    { L"Fei Long",        DESC_NODETYPE_TREE, (void*)HSF2_A_FEILONG_COLLECTION,         ARRAYSIZE(HSF2_A_FEILONG_COLLECTION) },
    { L"Gouki",           DESC_NODETYPE_TREE, (void*)HSF2_A_GOUKI_COLLECTION,           ARRAYSIZE(HSF2_A_GOUKI_COLLECTION) },
    { L"E. Honda",        DESC_NODETYPE_TREE, (void*)HSF2_A_EHONDA_COLLECTION,          ARRAYSIZE(HSF2_A_EHONDA_COLLECTION) },
    { L"Guile",           DESC_NODETYPE_TREE, (void*)HSF2_A_GUILE_COLLECTION,           ARRAYSIZE(HSF2_A_GUILE_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)HSF2_A_KEN_COLLECTION,             ARRAYSIZE(HSF2_A_KEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)HSF2_A_MBISON_COLLECTION,          ARRAYSIZE(HSF2_A_MBISON_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)HSF2_A_RYU_COLLECTION,             ARRAYSIZE(HSF2_A_RYU_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)HSF2_A_SAGAT_COLLECTION,           ARRAYSIZE(HSF2_A_SAGAT_COLLECTION) },
    { L"T-Hawk",          DESC_NODETYPE_TREE, (void*)HSF2_A_THAWK_COLLECTION,           ARRAYSIZE(HSF2_A_THAWK_COLLECTION) },
    { L"Vega",            DESC_NODETYPE_TREE, (void*)HSF2_A_VEGA_COLLECTION,            ARRAYSIZE(HSF2_A_VEGA_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)HSF2_A_ZANGIEF_COLLECTION,         ARRAYSIZE(HSF2_A_ZANGIEF_COLLECTION) },
};

constexpr auto HSF2_A_NUMUNIT_04 = ARRAYSIZE(HSF2_A_UNITS_04);
constexpr auto HSF2_A_EXTRALOC_04 = HSF2_A_NUMUNIT_04;
