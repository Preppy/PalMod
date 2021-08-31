#pragma once

// transparency color is the last color on cps2 graphics
// the first 2 bytes of a palette on ST is how many palette lines it has

enum Supported_SSF2T_4A_UnitListIndex
{
    index_SSF2T_Balrog,
    index_SSF2T_Blanka,
    index_SSF2T_Cammy,
    index_SSF2T_ChunLi,
    index_SSF2T_DeeJay,
    index_SSF2T_Dhalsim,
    index_SSF2T_EHonda,
    index_SSF2T_FeiLong,
    index_SSF2T_Gouki,
    index_SSF2T_Guile,
    index_SSF2T_Ken,
    index_SSF2T_MBison,
    index_SSF2T_Ryu,
    index_SSF2T_Sagat,
    index_SSF2T_THawk,
    index_SSF2T_Vega,
    index_SSF2T_Zangief,
    index_SSF2T_4A_Stages,
    index_SSF2T_4A_Bonus,
    index_SSF2T_4A_Last
};

constexpr auto SSF2T_A_NUM_IND_4A = index_SSF2T_4A_Last;

#define SSF2T_A_EXTRALOC_4A SSF2T_A_NUM_IND_4A

const UINT8 SSF2T_A_UNITSORT_4A[SSF2T_A_NUM_IND_4A + 1] = // Plus 1 for the extra palettes
{
    index_SSF2T_Balrog,
    index_SSF2T_Blanka,
    index_SSF2T_Cammy,
    index_SSF2T_ChunLi,
    index_SSF2T_DeeJay,
    index_SSF2T_Dhalsim,
    index_SSF2T_EHonda,
    index_SSF2T_FeiLong,
    index_SSF2T_Gouki,
    index_SSF2T_Guile,
    index_SSF2T_Ken,
    index_SSF2T_MBison,
    index_SSF2T_Ryu,
    index_SSF2T_Sagat,
    index_SSF2T_THawk,
    index_SSF2T_Vega,
    index_SSF2T_Zangief,

    index_SSF2T_4A_Stages,
    index_SSF2T_4A_Bonus,

    SSF2T_A_EXTRALOC_4A // Extra palettes
};

const UINT16 SSF2T_A_IMGIDS_USED[] =
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

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_JAB[] =
{
    { L"Jab", 0x43b54, 0x43b74, indexSF2Sprites_Balrog },
    { L"Jab Super Trail 1", 0x43b94, 0x43bb4, indexSF2Sprites_Balrog },
    { L"Jab Super Trail 2", 0x43bb4, 0x43bd4, indexSF2Sprites_Balrog },
    { L"Jab Super Trail 3", 0x43bd4, 0x43bf4, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_STRONG[] =
{
    { L"Strong", 0x43bf6, 0x43c16, indexSF2Sprites_Balrog },
    { L"Strong Super Trail 1", 0x43c36, 0x43c56, indexSF2Sprites_Balrog },
    { L"Strong Super Trail 2", 0x43c56, 0x43c76, indexSF2Sprites_Balrog },
    { L"Strong Super Trail 3", 0x43c76, 0x43c96, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x43c9a - 0x02, 0x43cba - 0x02, indexSF2Sprites_Balrog },
    { L"Fierce Super Trail 1", 0x43cda - 0x02, 0x43cfa - 0x02, indexSF2Sprites_Balrog },
    { L"Fierce Super Trail 2", 0x43cfa - 0x02, 0x43d1a - 0x02, indexSF2Sprites_Balrog },
    { L"Fierce Super Trail 3", 0x43d1a - 0x02, 0x43d3a - 0x02, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_SHORT[] =
{
    { L"Short", 0x43d3a, 0x43d5a, indexSF2Sprites_Balrog },
    { L"Short Super Trail 1", 0x43d7a, 0x43d9a, indexSF2Sprites_Balrog },
    { L"Short Super Trail 2", 0x43d9a, 0x43dba, indexSF2Sprites_Balrog },
    { L"Short Super Trail 3", 0x43dba, 0x43dda, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FORWARD[] =
{
    { L"Forward", 0x43ddc, 0x43dfc, indexSF2Sprites_Balrog },
    { L"Forward Super Trail 1", 0x43e1c, 0x43e3c, indexSF2Sprites_Balrog },
    { L"Forward Super Trail 2", 0x43e3c, 0x43e5c, indexSF2Sprites_Balrog },
    { L"Forward Super Trail 3", 0x43e5c, 0x43e7c, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x43e80 - 0x02, 0x43ea0 - 0x02, indexSF2Sprites_Balrog },
    { L"Roundhouse Super Trail 1", 0x43ec0 - 0x02, 0x43ee0 - 0x02, indexSF2Sprites_Balrog },
    { L"Roundhouse Super Trail 2", 0x43ee0 - 0x02, 0x43f00 - 0x02, indexSF2Sprites_Balrog },
    { L"Roundhouse Super Trail 3", 0x43f00 - 0x02, 0x43f20 - 0x02, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_START[] =
{
    { L"Start", 0x43f20, 0x43f40, indexSF2Sprites_Balrog },
    { L"Start Super Trail 1", 0x43f60, 0x43f80, indexSF2Sprites_Balrog },
    { L"Start Super Trail 2", 0x43f80, 0x43fa0, indexSF2Sprites_Balrog },
    { L"Start Super Trail 3", 0x43fa0, 0x43fc0, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_HOLD[] =
{
    { L"Hold", 0x43fc2, 0x43fe2, indexSF2Sprites_Balrog },
    { L"Hold Super Trail 1", 0x44002, 0x44022, indexSF2Sprites_Balrog },
    { L"Hold Super Trail 2", 0x44022, 0x44042, indexSF2Sprites_Balrog },
    { L"Hold Super Trail 3", 0x44042, 0x44062, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x44064, 0x44084, indexSF2Sprites_Balrog },
    { L"Old 1P Super Trail 1", 0x440a4, 0x440c4, indexSF2Sprites_Balrog },
    { L"Old 1P Super Trail 2", 0x440c4, 0x440e4, indexSF2Sprites_Balrog },
    { L"Old 1P Super Trail 3", 0x440e4, 0x44104, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x44106, 0x44126, indexSF2Sprites_Balrog },
    { L"Old 2P Super Trail 1", 0x44146, 0x44166, indexSF2Sprites_Balrog },
    { L"Old 2P Super Trail 2", 0x44166, 0x44186, indexSF2Sprites_Balrog },
    { L"Old 2P Super Trail 3", 0x44186, 0x441a6, indexSF2Sprites_Balrog },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_JAB[] =
{
    { L"Jab", 0x40804, 0x40824, indexSF2Sprites_Blanka },
    { L"Jab Super Trail 1", 0x40844, 0x40862, indexSF2Sprites_Blanka },
    { L"Jab Super Trail 2", 0x40862, 0x40882, indexSF2Sprites_Blanka },
    { L"Jab Super Trail 3", 0x40882, 0x408a2, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_STRONG[] =
{
    { L"Strong", 0x408a4, 0x408c4, indexSF2Sprites_Blanka },
    { L"Strong Super Trail 1", 0x408e4, 0x40902, indexSF2Sprites_Blanka },
    { L"Strong Super Trail 2", 0x40902, 0x40922, indexSF2Sprites_Blanka },
    { L"Strong Super Trail 3", 0x40922, 0x40942, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x40944, 0x40964, indexSF2Sprites_Blanka },
    { L"Fierce Super Trail 1", 0x40984, 0x409a2, indexSF2Sprites_Blanka },
    { L"Fierce Super Trail 2", 0x409a2, 0x409c2, indexSF2Sprites_Blanka },
    { L"Fierce Super Trail 3", 0x409c2, 0x409e2, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_SHORT[] =
{
    { L"Short", 0x409e4, 0x40a04, indexSF2Sprites_Blanka },
    { L"Short Super Trail 1", 0x40a24, 0x40a42, indexSF2Sprites_Blanka },
    { L"Short Super Trail 2", 0x40a42, 0x40a62, indexSF2Sprites_Blanka },
    { L"Short Super Trail 3", 0x40a62, 0x40a82, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FORWARD[] =
{
    { L"Forward", 0x40a84, 0x40aa4, indexSF2Sprites_Blanka },
    { L"Forward Super Trail 1", 0x40ac4, 0x40ae2, indexSF2Sprites_Blanka },
    { L"Forward Super Trail 2", 0x40ae2, 0x40b02, indexSF2Sprites_Blanka },
    { L"Forward Super Trail 3", 0x40b02, 0x40b22, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x40b24, 0x40b44, indexSF2Sprites_Blanka },
    { L"Roundhouse Super Trail 1", 0x40b64, 0x40b82, indexSF2Sprites_Blanka },
    { L"Roundhouse Super Trail 2", 0x40b82, 0x40ba2, indexSF2Sprites_Blanka },
    { L"Roundhouse Super Trail 3", 0x40ba2, 0x40bc2, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_START[] =
{
    { L"Start", 0x40bc4, 0x40be4, indexSF2Sprites_Blanka },
    { L"Start Super Trail 1", 0x40c04, 0x40c22, indexSF2Sprites_Blanka },
    { L"Start Super Trail 2", 0x40c22, 0x40c42, indexSF2Sprites_Blanka },
    { L"Start Super Trail 3", 0x40c42, 0x40c62, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_HOLD[] =
{
    { L"Hold", 0x40c64, 0x40c84, indexSF2Sprites_Blanka },
    { L"Hold Super Trail 1", 0x40ca4, 0x40cc2, indexSF2Sprites_Blanka },
    { L"Hold Super Trail 2", 0x40cc2, 0x40ce2, indexSF2Sprites_Blanka },
    { L"Hold Super Trail 3", 0x40ce2, 0x40d02, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x40d04, 0x40d24, indexSF2Sprites_Blanka },
    { L"Old 1P Super Trail 1", 0x40d44, 0x40d64, indexSF2Sprites_Blanka },
    { L"Old 1P Super Trail 2", 0x40d64, 0x40d84, indexSF2Sprites_Blanka },
    { L"Old 1P Super Trail 3", 0x40d84, 0x40da4, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x40da6, 0x40dc6, indexSF2Sprites_Blanka },
    { L"Old 2P Super Trail 1", 0x40de6, 0x40e06, indexSF2Sprites_Blanka },
    { L"Old 2P Super Trail 2", 0x40e06, 0x40e26, indexSF2Sprites_Blanka },
    { L"Old 2P Super Trail 3", 0x40e26, 0x40e46, indexSF2Sprites_Blanka },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_JAB[] =
{
    { L"Jab", 0x4482c, 0x4484c, indexSF2Sprites_Cammy },
    { L"Jab Super Trail 1", 0x4486c, 0x4488c, indexSF2Sprites_Cammy },
    { L"Jab Super Trail 2", 0x4488c, 0x448ac, indexSF2Sprites_Cammy },
    { L"Jab Super Trail 3", 0x448ac, 0x448cc, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_STRONG[] =
{
    { L"Strong", 0x448d0 - 0x02, 0x448f0 - 0x02, indexSF2Sprites_Cammy },
    { L"Strong Super Trail 1", 0x44910 - 0x02, 0x44930 - 0x02, indexSF2Sprites_Cammy },
    { L"Strong Super Trail 2", 0x44930 - 0x02, 0x44950 - 0x02, indexSF2Sprites_Cammy },
    { L"Strong Super Trail 3", 0x44950 - 0x02, 0x44970 - 0x02, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x44970, 0x44990, indexSF2Sprites_Cammy },
    { L"Fierce Super Trail 1", 0x449b0, 0x449d0, indexSF2Sprites_Cammy },
    { L"Fierce Super Trail 2", 0x449d0, 0x449f0, indexSF2Sprites_Cammy },
    { L"Fierce Super Trail 3", 0x449f0, 0x44a10, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_SHORT[] =
{
    { L"Short", 0x44a12, 0x44a32, indexSF2Sprites_Cammy },
    { L"Short Super Trail 1", 0x44a52, 0x44a72, indexSF2Sprites_Cammy },
    { L"Short Super Trail 2", 0x44a72, 0x44a92, indexSF2Sprites_Cammy },
    { L"Short Super Trail 3", 0x44a92, 0x44ab2, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FORWARD[] =
{
    { L"Forward", 0x44ab4, 0x44ad4, indexSF2Sprites_Cammy },
    { L"Forward Super Trail 1", 0x44af4, 0x44b14, indexSF2Sprites_Cammy },
    { L"Forward Super Trail 2", 0x44b14, 0x44b34, indexSF2Sprites_Cammy },
    { L"Forward Super Trail 3", 0x44b34, 0x44b54, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x44b56, 0x44b76, indexSF2Sprites_Cammy },
    { L"Roundhouse Super Trail 1", 0x44b96, 0x44bb6, indexSF2Sprites_Cammy },
    { L"Roundhouse Super Trail 2", 0x44bb6, 0x44bd6, indexSF2Sprites_Cammy },
    { L"Roundhouse Super Trail 3", 0x44bd6, 0x44bf6, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_START[] =
{
    { L"Start", 0x44bfa - 0x02, 0x44c1a - 0x02, indexSF2Sprites_Cammy },
    { L"Start Super Trail 1", 0x44c3a - 0x02, 0x44c5a - 0x02, indexSF2Sprites_Cammy },
    { L"Start Super Trail 2", 0x44c5a - 0x02, 0x44c7a - 0x02, indexSF2Sprites_Cammy },
    { L"Start Super Trail 3", 0x44c7a - 0x02, 0x44c9a - 0x02, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_HOLD[] =
{
    { L"Hold", 0x44c9a, 0x44cba, indexSF2Sprites_Cammy },
    { L"Hold Super Trail 1", 0x44cda, 0x44cfa, indexSF2Sprites_Cammy },
    { L"Hold Super Trail 2", 0x44cfa, 0x44d1a, indexSF2Sprites_Cammy },
    { L"Hold Super Trail 3", 0x44d1a, 0x44d3a, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x44d3c, 0x44d5c, indexSF2Sprites_Cammy },
    { L"Old 1P Super Trail 1", 0x44d7c, 0x44d9c, indexSF2Sprites_Cammy },
    { L"Old 1P Super Trail 2", 0x44d9c, 0x44dbc, indexSF2Sprites_Cammy },
    { L"Old 1P Super Trail 3", 0x44dbc, 0x44ddc, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x44de0 - 0x02, 0x44e00 - 0x02, indexSF2Sprites_Cammy },
    { L"Old 2P Super Trail 1", 0x44e20 - 0x02, 0x44e40 - 0x02, indexSF2Sprites_Cammy },
    { L"Old 2P Super Trail 2", 0x44e40 - 0x02, 0x44e60 - 0x02, indexSF2Sprites_Cammy },
    { L"Old 2P Super Trail 3", 0x44e60 - 0x02, 0x44e80 - 0x02, indexSF2Sprites_Cammy },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_JAB[] =
{
    { L"Jab", 0x41b3a - 0x02, 0x41b5a - 0x02, indexSF2Sprites_ChunLi },
    { L"Jab Kikouken", 0x41b5a - 0x02, 0x41b7a - 0x02, indexSF2Sprites_ChunLi, 0x1 },
    { L"Jab Super Trail 1", 0x41b7a - 0x02, 0x41b9a - 0x02, indexSF2Sprites_ChunLi },
    { L"Jab Super Trail 2", 0x41b9a - 0x02, 0x41bba - 0x02, indexSF2Sprites_ChunLi },
    { L"Jab Super Trail 3", 0x41bba - 0x02, 0x41bda - 0x02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_STRONG[] =
{
    { L"Strong", 0x41bda, 0x41bfa, indexSF2Sprites_ChunLi },
    { L"Strong Kikouken", 0x41bfa, 0x41c1a, indexSF2Sprites_ChunLi, 0x1 },
    { L"Strong Super Trail 1", 0x41c1a, 0x41c3a, indexSF2Sprites_ChunLi },
    { L"Strong Super Trail 2", 0x41c3a, 0x41c5a, indexSF2Sprites_ChunLi },
    { L"Strong Super Trail 3", 0x41c5a, 0x41c7a, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x41c7c, 0x41c9c, indexSF2Sprites_ChunLi },
    { L"Fierce Kikouken", 0x41c9c, 0x41cbc, indexSF2Sprites_ChunLi, 0x1 },
    { L"Fierce Super Trail 1", 0x41cbc, 0x41cdc, indexSF2Sprites_ChunLi },
    { L"Fierce Super Trail 2", 0x41cdc, 0x41cfc, indexSF2Sprites_ChunLi },
    { L"Fierce Super Trail 3", 0x41cfc, 0x41d1c, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_SHORT[] =
{
    { L"Short", 0x41d20 - 0x02, 0x41d40 - 0x02, indexSF2Sprites_ChunLi },
    { L"Short Kikouken", 0x41d40 - 0x02, 0x41d60 - 0x02, indexSF2Sprites_ChunLi, 0x1 },
    { L"Short Super Trail 1", 0x41d60 - 0x02, 0x41d80 - 0x02, indexSF2Sprites_ChunLi },
    { L"Short Super Trail 2", 0x41d80 - 0x02, 0x41da0 - 0x02, indexSF2Sprites_ChunLi },
    { L"Short Super Trail 3", 0x41da0 - 0x02, 0x41dc0 - 0x02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FORWARD[] =
{
    { L"Forward", 0x41dc0, 0x41de0, indexSF2Sprites_ChunLi },
    { L"Forward Kikouken", 0x41de0, 0x41e00, indexSF2Sprites_ChunLi, 0x1 },
    { L"Forward Super Trail 1", 0x41e00, 0x41e20, indexSF2Sprites_ChunLi },
    { L"Forward Super Trail 2", 0x41e20, 0x41e40, indexSF2Sprites_ChunLi },
    { L"Forward Super Trail 3", 0x41e40, 0x41e60, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x41e62, 0x41e82, indexSF2Sprites_ChunLi },
    { L"Roundhouse Kikouken", 0x41e82, 0x41ea2, indexSF2Sprites_ChunLi, 0x1 },
    { L"Roundhouse Super Trail 1", 0x41ea2, 0x41ec2, indexSF2Sprites_ChunLi },
    { L"Roundhouse Super Trail 2", 0x41ec2, 0x41ee2, indexSF2Sprites_ChunLi },
    { L"Roundhouse Super Trail 3", 0x41ee2, 0x41f02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_START[] =
{
    { L"Start", 0x41f04, 0x41f24, indexSF2Sprites_ChunLi },
    { L"Start Kikouken", 0x41f24, 0x41f44, indexSF2Sprites_ChunLi, 0x1 },
    { L"Start Super Trail 1", 0x41f44, 0x41f64, indexSF2Sprites_ChunLi },
    { L"Start Super Trail 2", 0x41f64, 0x41f84, indexSF2Sprites_ChunLi },
    { L"Start Super Trail 3", 0x41f84, 0x41fa4, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_HOLD[] =
{
    { L"Hold", 0x41fa6, 0x41fc6, indexSF2Sprites_ChunLi },
    { L"Hold Kikouken", 0x41fc6, 0x41fe6, indexSF2Sprites_ChunLi, 0x1 },
    { L"Hold Super Trail 1", 0x41fe6, 0x42006, indexSF2Sprites_ChunLi },
    { L"Hold Super Trail 2", 0x42006, 0x42026, indexSF2Sprites_ChunLi },
    { L"Hold Super Trail 3", 0x42026, 0x42046, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x4204a - 0x02, 0x4206a - 0x02, indexSF2Sprites_ChunLi },
    { L"Old 1P Kikouken", 0x4206a - 0x02, 0x4208a - 0x02, indexSF2Sprites_ChunLi, 0x1 },
    { L"Old 1P Super Trail 1", 0x4208a - 0x02, 0x420aa - 0x02, indexSF2Sprites_ChunLi },
    { L"Old 1P Super Trail 2", 0x420aa - 0x02, 0x420ca - 0x02, indexSF2Sprites_ChunLi },
    { L"Old 1P Super Trail 3", 0x420ca - 0x02, 0x420ea - 0x02, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x420ea, 0x4210a, indexSF2Sprites_ChunLi },
    { L"Old 2P Kikouken", 0x4210a, 0x4212a, indexSF2Sprites_ChunLi, 0x1 },
    { L"Old 2P Super Trail 1", 0x4212a, 0x4214a, indexSF2Sprites_ChunLi },
    { L"Old 2P Super Trail 2", 0x4214a, 0x4216a, indexSF2Sprites_ChunLi },
    { L"Old 2P Super Trail 3", 0x4216a, 0x4218a, indexSF2Sprites_ChunLi },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_JAB[] =
{
    { L"Jab", 0x45b70, 0x45b90, indexSF2Sprites_DeeJay },
    { L"Jab Air Slasher", 0x45b90, 0x45bb0, indexSF2Sprites_DeeJay, 0x1 },
    { L"Jab Super Trail 1", 0x45bb0, 0x45bd0, indexSF2Sprites_DeeJay },
    { L"Jab Super Trail 2", 0x45bd0, 0x45bf0, indexSF2Sprites_DeeJay },
    { L"Jab Super Trail 3", 0x45bf0, 0x45c10, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_STRONG[] =
{
    { L"Strong", 0x45c12, 0x45c32, indexSF2Sprites_DeeJay },
    { L"Strong Air Slasher", 0x45c32, 0x45c52, indexSF2Sprites_DeeJay, 0x1 },
    { L"Strong Super Trail 1", 0x45c52, 0x45c72, indexSF2Sprites_DeeJay },
    { L"Strong Super Trail 2", 0x45c72, 0x45c92, indexSF2Sprites_DeeJay },
    { L"Strong Super Trail 3", 0x45c92, 0x45cb2, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x45cb4, 0x45cd4, indexSF2Sprites_DeeJay },
    { L"Fierce Air Slasher", 0x45cd4, 0x45cf4, indexSF2Sprites_DeeJay, 0x1 },
    { L"Fierce Super Trail 1", 0x45cf4, 0x45d14, indexSF2Sprites_DeeJay },
    { L"Fierce Super Trail 2", 0x45d14, 0x45d34, indexSF2Sprites_DeeJay },
    { L"Fierce Super Trail 3", 0x45d34, 0x45d54, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_SHORT[] =
{
    { L"Short", 0x45d56, 0x45d76, indexSF2Sprites_DeeJay },
    { L"Short Air Slasher", 0x45d76, 0x45d96, indexSF2Sprites_DeeJay, 0x1 },
    { L"Short Super Trail 1", 0x45d96, 0x45db6, indexSF2Sprites_DeeJay },
    { L"Short Super Trail 2", 0x45db6, 0x45dd6, indexSF2Sprites_DeeJay },
    { L"Short Super Trail 3", 0x45dd6, 0x45df6, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FORWARD[] =
{
    { L"Forward", 0x45dfa - 0x02, 0x45e1a - 0x02, indexSF2Sprites_DeeJay },
    { L"Forward Air Slasher", 0x45e1a - 0x02, 0x45e3a - 0x02, indexSF2Sprites_DeeJay, 0x1 },
    { L"Forward Super Trail 1", 0x45e3a - 0x02, 0x45e5a - 0x02, indexSF2Sprites_DeeJay },
    { L"Forward Super Trail 2", 0x45e5a - 0x02, 0x45e7a - 0x02, indexSF2Sprites_DeeJay },
    { L"Forward Super Trail 3", 0x45e7a - 0x02, 0x45e9a - 0x02, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x45e9a, 0x45eba, indexSF2Sprites_DeeJay },
    { L"Roundhouse Air Slasher", 0x45eba, 0x45eda, indexSF2Sprites_DeeJay, 0x1 },
    { L"Roundhouse Super Trail 1", 0x45eda, 0x45efa, indexSF2Sprites_DeeJay },
    { L"Roundhouse Super Trail 2", 0x45efa, 0x45f1a, indexSF2Sprites_DeeJay },
    { L"Roundhouse Super Trail 3", 0x45f1a, 0x45f3a, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_START[] =
{
    { L"Start", 0x45f3c, 0x45f5c, indexSF2Sprites_DeeJay },
    { L"Start Air Slasher", 0x45f5c, 0x45f7c, indexSF2Sprites_DeeJay, 0x1 },
    { L"Start Super Trail 1", 0x45f7c, 0x45f9c, indexSF2Sprites_DeeJay },
    { L"Start Super Trail 2", 0x45f9c, 0x45fbc, indexSF2Sprites_DeeJay },
    { L"Start Super Trail 3", 0x45fbc, 0x45fdc, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_HOLD[] =
{
    { L"Hold", 0x45fe0 - 0x02, 0x46000 - 0x02, indexSF2Sprites_DeeJay },
    { L"Hold Air Slasher", 0x46000 - 0x02, 0x46020 - 0x02, indexSF2Sprites_DeeJay, 0x1 },
    { L"Hold Super Trail 1", 0x46020 - 0x02, 0x46040 - 0x02, indexSF2Sprites_DeeJay },
    { L"Hold Super Trail 2", 0x46040 - 0x02, 0x46060 - 0x02, indexSF2Sprites_DeeJay },
    { L"Hold Super Trail 3", 0x46060 - 0x02, 0x46080 - 0x02, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x46080, 0x460a0, indexSF2Sprites_DeeJay },
    { L"Old 1P Air Slasher", 0x460a0, 0x460c0, indexSF2Sprites_DeeJay, 0x1 },
    { L"Old 1P Super Trail 1", 0x460c0, 0x460e0, indexSF2Sprites_DeeJay },
    { L"Old 1P Super Trail 2", 0x460e0, 0x46100, indexSF2Sprites_DeeJay },
    { L"Old 1P Super Trail 3", 0x46100, 0x46120, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x46122, 0x46142, indexSF2Sprites_DeeJay },
    { L"Old 2P Air Slasher", 0x46142, 0x46162, indexSF2Sprites_DeeJay, 0x1 },
    { L"Old 2P Super Trail 1", 0x46162, 0x46182, indexSF2Sprites_DeeJay },
    { L"Old 2P Super Trail 2", 0x46182, 0x461a2, indexSF2Sprites_DeeJay },
    { L"Old 2P Super Trail 3", 0x461a2, 0x461c2, indexSF2Sprites_DeeJay },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_JAB[] =
{
    { L"Jab", 0x42810, 0x42830, indexSF2Sprites_Dhalsim },
    { L"Jab Super Trail 1", 0x42850, 0x42870, indexSF2Sprites_Dhalsim },
    { L"Jab Super Trail 2", 0x42870, 0x42890, indexSF2Sprites_Dhalsim },
    { L"Jab Super Trail 3", 0x42890, 0x428b0, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_STRONG[] =
{
    { L"Strong", 0x428b2, 0x428d2, indexSF2Sprites_Dhalsim },
    { L"Strong Super Trail 1", 0x428f2, 0x42912, indexSF2Sprites_Dhalsim },
    { L"Strong Super Trail 2", 0x42912, 0x42932, indexSF2Sprites_Dhalsim },
    { L"Strong Super Trail 3", 0x42932, 0x42952, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x42954, 0x42974, indexSF2Sprites_Dhalsim },
    { L"Fierce Super Trail 1", 0x42994, 0x429b4, indexSF2Sprites_Dhalsim },
    { L"Fierce Super Trail 2", 0x429b4, 0x429d4, indexSF2Sprites_Dhalsim },
    { L"Fierce Super Trail 3", 0x429d4, 0x429f4, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_SHORT[] =
{
    { L"Short", 0x429f6, 0x42a16, indexSF2Sprites_Dhalsim },
    { L"Short Super Trail 1", 0x42a36, 0x42a56, indexSF2Sprites_Dhalsim },
    { L"Short Super Trail 2", 0x42a56, 0x42a76, indexSF2Sprites_Dhalsim },
    { L"Short Super Trail 3", 0x42a76, 0x42a96, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FORWARD[] =
{
    { L"Forward", 0x42a9a - 0x02, 0x42aba - 0x02, indexSF2Sprites_Dhalsim },
    { L"Forward Super Trail 1", 0x42ada - 0x02, 0x42afa - 0x02, indexSF2Sprites_Dhalsim },
    { L"Forward Super Trail 2", 0x42afa - 0x02, 0x42b1a - 0x02, indexSF2Sprites_Dhalsim },
    { L"Forward Super Trail 3", 0x42b1a - 0x02, 0x42b3a - 0x02, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x42b3a, 0x42b5a, indexSF2Sprites_Dhalsim },
    { L"Roundhouse Super Trail 1", 0x42b7a, 0x42b9a, indexSF2Sprites_Dhalsim },
    { L"Roundhouse Super Trail 2", 0x42b9a, 0x42bba, indexSF2Sprites_Dhalsim },
    { L"Roundhouse Super Trail 3", 0x42bba, 0x42bda, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_START[] =
{
    { L"Start", 0x42bdc, 0x42bfc, indexSF2Sprites_Dhalsim },
    { L"Start Super Trail 1", 0x42c1c, 0x42c3c, indexSF2Sprites_Dhalsim },
    { L"Start Super Trail 2", 0x42c3c, 0x42c5c, indexSF2Sprites_Dhalsim },
    { L"Start Super Trail 3", 0x42c5c, 0x42c7c, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_HOLD[] =
{
    { L"Hold", 0x42c80 - 0x02, 0x42ca0 - 0x02, indexSF2Sprites_Dhalsim },
    { L"Hold Super Trail 1", 0x42cc0 - 0x02, 0x42ce0 - 0x02, indexSF2Sprites_Dhalsim },
    { L"Hold Super Trail 2", 0x42ce0 - 0x02, 0x42d00 - 0x02, indexSF2Sprites_Dhalsim },
    { L"Hold Super Trail 3", 0x42d00 - 0x02, 0x42d20 - 0x02, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x42d20, 0x42d40, indexSF2Sprites_Dhalsim },
    { L"Old 1P Super Trail 1", 0x42d60, 0x42d80, indexSF2Sprites_Dhalsim },
    { L"Old 1P Super Trail 2", 0x42d80, 0x42da0, indexSF2Sprites_Dhalsim },
    { L"Old 1P Super Trail 3", 0x42da0, 0x42dc0, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x42dc2, 0x42de2, indexSF2Sprites_Dhalsim },
    { L"Old 2P Super Trail 1", 0x42e02, 0x42e22, indexSF2Sprites_Dhalsim },
    { L"Old 2P Super Trail 2", 0x42e22, 0x42e42, indexSF2Sprites_Dhalsim },
    { L"Old 2P Super Trail 3", 0x42e42, 0x42e62, indexSF2Sprites_Dhalsim },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_JAB[] =
{
    { L"Jab", 0x4019a - 0x02, 0x401ba - 0x02, indexSF2Sprites_EHonda },
    { L"Jab Super Trail 1", 0x401da - 0x02, 0x401fa - 0x02, indexSF2Sprites_EHonda },
    { L"Jab Super Trail 2", 0x401fa - 0x02, 0x4021a - 0x02, indexSF2Sprites_EHonda },
    { L"Jab Super Trail 3", 0x4021a - 0x02, 0x4023a - 0x02, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_STRONG[] =
{
    { L"Strong", 0x4023a, 0x4025a, indexSF2Sprites_EHonda },
    { L"Strong Super Trail 1", 0x4027a, 0x4029a, indexSF2Sprites_EHonda },
    { L"Strong Super Trail 2", 0x4029a, 0x402ba, indexSF2Sprites_EHonda },
    { L"Strong Super Trail 3", 0x402ba, 0x402da, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x402dc, 0x402fc, indexSF2Sprites_EHonda },
    { L"Fierce Super Trail 1", 0x4031c, 0x4033c, indexSF2Sprites_EHonda },
    { L"Fierce Super Trail 2", 0x4033c, 0x4035c, indexSF2Sprites_EHonda },
    { L"Fierce Super Trail 3", 0x4035c, 0x4037c, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_SHORT[] =
{
    { L"Short", 0x40380 - 0x02, 0x403a0 - 0x02, indexSF2Sprites_EHonda },
    { L"Short Super Trail 1", 0x403c0 - 0x02, 0x403e0 - 0x02, indexSF2Sprites_EHonda },
    { L"Short Super Trail 2", 0x403e0 - 0x02, 0x40400 - 0x02, indexSF2Sprites_EHonda },
    { L"Short Super Trail 3", 0x40400 - 0x02, 0x40420 - 0x02, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FORWARD[] =
{
    { L"Forward", 0x40420, 0x40440, indexSF2Sprites_EHonda },
    { L"Forward Super Trail 1", 0x40460, 0x40480, indexSF2Sprites_EHonda },
    { L"Forward Super Trail 2", 0x40480, 0x404a0, indexSF2Sprites_EHonda },
    { L"Forward Super Trail 3", 0x404a0, 0x404c0, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x404c2, 0x404e2, indexSF2Sprites_EHonda },
    { L"Roundhouse Super Trail 1", 0x40502, 0x40522, indexSF2Sprites_EHonda },
    { L"Roundhouse Super Trail 2", 0x40522, 0x40542, indexSF2Sprites_EHonda },
    { L"Roundhouse Super Trail 3", 0x40542, 0x40562, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_START[] =
{
    { L"Start", 0x40564, 0x40584, indexSF2Sprites_EHonda },
    { L"Start Super Trail 1", 0x405a4, 0x405c4, indexSF2Sprites_EHonda },
    { L"Start Super Trail 2", 0x405c4, 0x405e4, indexSF2Sprites_EHonda },
    { L"Start Super Trail 3", 0x405e4, 0x40604, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_HOLD[] =
{
    { L"Hold", 0x40606, 0x40626, indexSF2Sprites_EHonda },
    { L"Hold Super Trail 1", 0x40646, 0x40666, indexSF2Sprites_EHonda },
    { L"Hold Super Trail 2", 0x40666, 0x40686, indexSF2Sprites_EHonda },
    { L"Hold Super Trail 3", 0x40686, 0x406a6, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x406aa - 0x02, 0x406ca - 0x02, indexSF2Sprites_EHonda },
    { L"Old 1P Super Trail 1", 0x406ea - 0x02, 0x4070a - 0x02, indexSF2Sprites_EHonda },
    { L"Old 1P Super Trail 2", 0x4070a - 0x02, 0x4072a - 0x02, indexSF2Sprites_EHonda },
    { L"Old 1P Super Trail 3", 0x4072a - 0x02, 0x4074a - 0x02, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x4074a, 0x4076a, indexSF2Sprites_EHonda },
    { L"Old 2P Super Trail 1", 0x4078a, 0x407aa, indexSF2Sprites_EHonda },
    { L"Old 2P Super Trail 2", 0x407aa, 0x407ca, indexSF2Sprites_EHonda },
    { L"Old 2P Super Trail 3", 0x407ca, 0x407ea, indexSF2Sprites_EHonda },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_JAB[] =
{
    { L"Jab", 0x45504, 0x45524, indexSF2Sprites_FeiLong },
    { L"Jab Super Trail 1", 0x45544, 0x45564, indexSF2Sprites_FeiLong },
    { L"Jab Super Trail 2", 0x45564, 0x45584, indexSF2Sprites_FeiLong },
    { L"Jab Super Trail 3", 0x45584, 0x455a4, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_STRONG[] =
{
    { L"Strong", 0x455a6, 0x455c6, indexSF2Sprites_FeiLong },
    { L"Strong Super Trail 1", 0x455e6, 0x45606, indexSF2Sprites_FeiLong },
    { L"Strong Super Trail 2", 0x45606, 0x45626, indexSF2Sprites_FeiLong },
    { L"Strong Super Trail 3", 0x45626, 0x45646, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x4564a - 0x02, 0x4566a - 0x02, indexSF2Sprites_FeiLong },
    { L"Fierce Super Trail 1", 0x4568a - 0x02, 0x456aa - 0x02, indexSF2Sprites_FeiLong },
    { L"Fierce Super Trail 2", 0x456aa - 0x02, 0x456ca - 0x02, indexSF2Sprites_FeiLong },
    { L"Fierce Super Trail 3", 0x456ca - 0x02, 0x456ea - 0x02, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_SHORT[] =
{
    { L"Short", 0x456ea, 0x4570a, indexSF2Sprites_FeiLong },
    { L"Short Super Trail 1", 0x4572a, 0x4574a, indexSF2Sprites_FeiLong },
    { L"Short Super Trail 2", 0x4574a, 0x4576a, indexSF2Sprites_FeiLong },
    { L"Short Super Trail 3", 0x4576a, 0x4578a, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FORWARD[] =
{
    { L"Forward", 0x4578c, 0x457ac, indexSF2Sprites_FeiLong },
    { L"Forward Super Trail 1", 0x457cc, 0x457ec, indexSF2Sprites_FeiLong },
    { L"Forward Super Trail 2", 0x457ec, 0x4580c, indexSF2Sprites_FeiLong },
    { L"Forward Super Trail 3", 0x4580c, 0x4582c, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x45830 - 0x02, 0x45850 - 0x02, indexSF2Sprites_FeiLong },
    { L"Roundhouse Super Trail 1", 0x45870 - 0x02, 0x45890 - 0x02, indexSF2Sprites_FeiLong },
    { L"Roundhouse Super Trail 2", 0x45890 - 0x02, 0x458b0 - 0x02, indexSF2Sprites_FeiLong },
    { L"Roundhouse Super Trail 3", 0x458b0 - 0x02, 0x458d0 - 0x02, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_START[] =
{
    { L"Start", 0x458d0, 0x458f0, indexSF2Sprites_FeiLong },
    { L"Start Super Trail 1", 0x45910, 0x45930, indexSF2Sprites_FeiLong },
    { L"Start Super Trail 2", 0x45930, 0x45950, indexSF2Sprites_FeiLong },
    { L"Start Super Trail 3", 0x45950, 0x45970, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_HOLD[] =
{
    { L"Hold", 0x45972, 0x45992, indexSF2Sprites_FeiLong },
    { L"Hold Super Trail 1", 0x459b2, 0x459d2, indexSF2Sprites_FeiLong },
    { L"Hold Super Trail 2", 0x459d2, 0x459f2, indexSF2Sprites_FeiLong },
    { L"Hold Super Trail 3", 0x459f2, 0x45a12, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x45a14, 0x45a34, indexSF2Sprites_FeiLong },
    { L"Old 1P Super Trail 1", 0x45a54, 0x45a74, indexSF2Sprites_FeiLong },
    { L"Old 1P Super Trail 2", 0x45a74, 0x45a94, indexSF2Sprites_FeiLong },
    { L"Old 1P Super Trail 3", 0x45a94, 0x45ab4, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x45ab6, 0x45ad6, indexSF2Sprites_FeiLong },
    { L"Old 2P Super Trail 1", 0x45af6, 0x45b16, indexSF2Sprites_FeiLong },
    { L"Old 2P Super Trail 2", 0x45b16, 0x45b36, indexSF2Sprites_FeiLong },
    { L"Old 2P Super Trail 3", 0x45b36, 0x45b56, indexSF2Sprites_FeiLong },
};

const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P1COLOR[] =
{
    { L"P1 Color", 0x461dc, 0x461fc, indexSF2Sprites_Gouki },
    { L"P1 Color Super Trail 1", 0x4621c, 0x4623c, indexSF2Sprites_Gouki },
    { L"P1 Color Super Trail 2", 0x4623c, 0x4625c, indexSF2Sprites_Gouki },
    { L"P1 Color Super Trail 3", 0x4625c, 0x4627c, indexSF2Sprites_Gouki },
};

const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P2COLOR[] =
{
    { L"P2 Color", 0x46280 - 0x02, 0x462a0 - 0x02, indexSF2Sprites_Gouki },
    { L"P2 Color Super Trail 1", 0x462c0 - 0x02, 0x462e0 - 0x02, indexSF2Sprites_Gouki },
    { L"P2 Color Super Trail 2", 0x462e0 - 0x02, 0x46300 - 0x02, indexSF2Sprites_Gouki },
    { L"P2 Color Super Trail 3", 0x46300 - 0x02, 0x46320 - 0x02, indexSF2Sprites_Gouki },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_JAB[] =
{
    { L"Jab", 0x40e60, 0x40e80, indexSF2Sprites_Guile },
    { L"Jab Sonic Boom", 0x40e80, 0x40ea0, indexSF2Sprites_Guile, 0x01 },
    { L"Jab Super Trail 1", 0x40ea0, 0x40ec0, indexSF2Sprites_Guile },
    { L"Jab Super Trail 2", 0x40ec0, 0x40ee0, indexSF2Sprites_Guile },
    { L"Jab Super Trail 3", 0x40ee0, 0x40f00, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_STRONG[] =
{
    { L"Strong", 0x40f02, 0x40f22, indexSF2Sprites_Guile },
    { L"Strong Sonic Boom", 0x40f22, 0x40f42, indexSF2Sprites_Guile, 0x01 },
    { L"Strong Super Trail 1", 0x40f42, 0x40f62, indexSF2Sprites_Guile },
    { L"Strong Super Trail 2", 0x40f62, 0x40f82, indexSF2Sprites_Guile },
    { L"Strong Super Trail 3", 0x40f82, 0x40fa2, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x40fa4, 0x40fc4, indexSF2Sprites_Guile },
    { L"Fierce Sonic Boom", 0x40fc4, 0x40fe4, indexSF2Sprites_Guile, 0x01 },
    { L"Fierce Super Trail 1", 0x40fe4, 0x41004, indexSF2Sprites_Guile },
    { L"Fierce Super Trail 2", 0x41004, 0x41024, indexSF2Sprites_Guile },
    { L"Fierce Super Trail 3", 0x41024, 0x41044, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_SHORT[] =
{
    { L"Short", 0x41046, 0x41066, indexSF2Sprites_Guile },
    { L"Short Sonic Boom", 0x41066, 0x41086, indexSF2Sprites_Guile, 0x01 },
    { L"Short Super Trail 1", 0x41086, 0x410a6, indexSF2Sprites_Guile },
    { L"Short Super Trail 2", 0x410a6, 0x410c6, indexSF2Sprites_Guile },
    { L"Short Super Trail 3", 0x410c6, 0x410e6, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FORWARD[] =
{
    { L"Forward", 0x410ea - 0x02, 0x4110a - 0x02, indexSF2Sprites_Guile },
    { L"Forward Sonic Boom", 0x4110a - 0x02, 0x4112a - 0x02, indexSF2Sprites_Guile, 0x01 },
    { L"Forward Super Trail 1", 0x4112a - 0x02, 0x4114a - 0x02, indexSF2Sprites_Guile },
    { L"Forward Super Trail 2", 0x4114a - 0x02, 0x4116a - 0x02, indexSF2Sprites_Guile },
    { L"Forward Super Trail 3", 0x4116a - 0x02, 0x4118a - 0x02, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x4118a, 0x411aa, indexSF2Sprites_Guile },
    { L"Roundhouse Sonic Boom", 0x411aa, 0x411ca, indexSF2Sprites_Guile, 0x01 },
    { L"Roundhouse Super Trail 1", 0x411ca, 0x411ea, indexSF2Sprites_Guile },
    { L"Roundhouse Super Trail 2", 0x411ea, 0x4120a, indexSF2Sprites_Guile },
    { L"Roundhouse Super Trail 3", 0x4120a, 0x4122a, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_START[] =
{
    { L"Start", 0x4122c, 0x4124c, indexSF2Sprites_Guile },
    { L"Start Sonic Boom", 0x4124c, 0x4126c, indexSF2Sprites_Guile, 0x01 },
    { L"Start Super Trail 1", 0x4126c, 0x4128c, indexSF2Sprites_Guile },
    { L"Start Super Trail 2", 0x4128c, 0x412ac, indexSF2Sprites_Guile },
    { L"Start Super Trail 3", 0x412ac, 0x412cc, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_HOLD[] =
{
    { L"Hold", 0x412d0 - 0x02, 0x412f0 - 0x02, indexSF2Sprites_Guile },
    { L"Hold Sonic Boom", 0x412f0 - 0x02, 0x41310 - 0x02, indexSF2Sprites_Guile, 0x01 },
    { L"Hold Super Trail 1", 0x41310 - 0x02, 0x41330 - 0x02, indexSF2Sprites_Guile },
    { L"Hold Super Trail 2", 0x41330 - 0x02, 0x41350 - 0x02, indexSF2Sprites_Guile },
    { L"Hold Super Trail 3", 0x41350 - 0x02, 0x41370 - 0x02, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x41370, 0x41390, indexSF2Sprites_Guile },
    { L"Old 1P Sonic Boom", 0x41390, 0x413b0, indexSF2Sprites_Guile, 0x01 },
    { L"Old 1P Super Trail 1", 0x413b0, 0x413d0, indexSF2Sprites_Guile },
    { L"Old 1P Super Trail 2", 0x413d0, 0x413f0, indexSF2Sprites_Guile },
    { L"Old 1P Super Trail 3", 0x413f0, 0x41410, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x41412, 0x41432, indexSF2Sprites_Guile },
    { L"Old 2P Sonic Boom", 0x41432, 0x41452, indexSF2Sprites_Guile, 0x01 },
    { L"Old 2P Super Trail 1", 0x41452, 0x41472, indexSF2Sprites_Guile },
    { L"Old 2P Super Trail 2", 0x41472, 0x41492, indexSF2Sprites_Guile },
    { L"Old 2P Super Trail 3", 0x41492, 0x414b2, indexSF2Sprites_Guile },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_JAB[] =
{
    { L"Jab", 0x414cc, 0x414ec, indexSF2Sprites_Ken },
    { L"Jab Super Trail 1", 0x4150c, 0x4152c, indexSF2Sprites_Ken },
    { L"Jab Super Trail 2", 0x4152c, 0x4154c, indexSF2Sprites_Ken },
    { L"Jab Super Trail 3", 0x4154c, 0x4156c, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_STRONG[] =
{
    { L"Strong", 0x41570 - 0x02, 0x41590 - 0x02, indexSF2Sprites_Ken },
    { L"Strong Super Trail 1", 0x415b0 - 0x02, 0x415d0 - 0x02, indexSF2Sprites_Ken },
    { L"Strong Super Trail 2", 0x415d0 - 0x02, 0x415f0 - 0x02, indexSF2Sprites_Ken },
    { L"Strong Super Trail 3", 0x415f0 - 0x02, 0x41610 - 0x02, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x41610, 0x41630, indexSF2Sprites_Ken },
    { L"Fierce Super Trail 1", 0x41650, 0x41670, indexSF2Sprites_Ken },
    { L"Fierce Super Trail 2", 0x41670, 0x41690, indexSF2Sprites_Ken },
    { L"Fierce Super Trail 3", 0x41690, 0x416b0, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_SHORT[] =
{
    { L"Short", 0x416b2, 0x416d2, indexSF2Sprites_Ken },
    { L"Short Super Trail 1", 0x416f2, 0x41712, indexSF2Sprites_Ken },
    { L"Short Super Trail 2", 0x41712, 0x41732, indexSF2Sprites_Ken },
    { L"Short Super Trail 3", 0x41732, 0x41752, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FORWARD[] =
{
    { L"Forward", 0x41754, 0x41774, indexSF2Sprites_Ken },
    { L"Forward Super Trail 1", 0x41794, 0x417b4, indexSF2Sprites_Ken },
    { L"Forward Super Trail 2", 0x417b4, 0x417d4, indexSF2Sprites_Ken },
    { L"Forward Super Trail 3", 0x417d4, 0x417f4, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x417f6, 0x41816, indexSF2Sprites_Ken },
    { L"Roundhouse Super Trail 1", 0x41836, 0x41856, indexSF2Sprites_Ken },
    { L"Roundhouse Super Trail 2", 0x41856, 0x41876, indexSF2Sprites_Ken },
    { L"Roundhouse Super Trail 3", 0x41876, 0x41896, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_START[] =
{
    { L"Start", 0x4189a - 0x02, 0x418ba - 0x02, indexSF2Sprites_Ken },
    { L"Start Super Trail 1", 0x418da - 0x02, 0x418fa - 0x02, indexSF2Sprites_Ken },
    { L"Start Super Trail 2", 0x418fa - 0x02, 0x4191a - 0x02, indexSF2Sprites_Ken },
    { L"Start Super Trail 3", 0x4191a - 0x02, 0x4193a - 0x02, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_HOLD[] =
{
    { L"Hold", 0x4193a, 0x4195a, indexSF2Sprites_Ken },
    { L"Hold Super Trail 1", 0x4197a, 0x4199a, indexSF2Sprites_Ken },
    { L"Hold Super Trail 2", 0x4199a, 0x419ba, indexSF2Sprites_Ken },
    { L"Hold Super Trail 3", 0x419ba, 0x419da, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x419dc, 0x419fc, indexSF2Sprites_Ken },
    { L"Old 1P Super Trail 1", 0x41a1c, 0x41a3c, indexSF2Sprites_Ken },
    { L"Old 1P Super Trail 2", 0x41a3c, 0x41a5c, indexSF2Sprites_Ken },
    { L"Old 1P Super Trail 3", 0x41a5c, 0x41a7c, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x41a80 - 0x02, 0x41aa0 - 0x02, indexSF2Sprites_Ken },
    { L"Old 2P Super Trail 1", 0x41ac0 - 0x02, 0x41ae0 - 0x02, indexSF2Sprites_Ken },
    { L"Old 2P Super Trail 2", 0x41ae0 - 0x02, 0x41b00 - 0x02, indexSF2Sprites_Ken },
    { L"Old 2P Super Trail 3", 0x41b00 - 0x02, 0x41b20 - 0x02, indexSF2Sprites_Ken },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_JAB[] =
{
    { L"Jab", 0x42e7c, 0x42f1c, indexSF2Sprites_Bison },
    //{ L"Jab Cape", 0x42e9c, 0x42ebc },
    //{ L"Jab Super Trail 1", 0x42ebc, 0x42edc, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 2", 0x42edc, 0x42efc, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 3", 0x42efc, 0x42f1c, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_STRONG[] =
{
    { L"Strong", 0x42f20 - 0x02, 0x42fc0 - 0x02, indexSF2Sprites_Bison },
    //{ L"Strong Cape", 0x42f40 - 0x02, 0x42f60 - 0x02 },
    //{ L"Strong Super Trail 1", 0x42f60 - 0x02, 0x42f80 - 0x02, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 2", 0x42f80 - 0x02, 0x42fa0 - 0x02, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 3", 0x42fa0 - 0x02, 0x42fc0 - 0x02, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x42fc0, 0x43060, indexSF2Sprites_Bison },
    //{ L"Fierce Cape", 0x42fe0, 0x43000 },
    //{ L"Fierce Super Trail 1", 0x43000, 0x43020, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 2", 0x43020, 0x43040, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 3", 0x43040, 0x43060, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_SHORT[] =
{
    { L"Short", 0x43062, 0x43102, indexSF2Sprites_Bison },
    //{ L"Short Cape", 0x43082, 0x430a2 },
    //{ L"Short Super Trail 1", 0x430a2, 0x430c2, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 2", 0x430c2, 0x430e2, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 3", 0x430e2, 0x43102, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FORWARD[] =
{
    { L"Forward", 0x43104, 0x431a4, indexSF2Sprites_Bison },
    //{ L"Forward Cape", 0x43124, 0x43144 },
    //{ L"Forward Super Trail 1", 0x43144, 0x43164, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 2", 0x43164, 0x43184, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 3", 0x43184, 0x431a4, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x431a6, 0x43246, indexSF2Sprites_Bison },
    //{ L"Roundhouse Cape", 0x431c6, 0x431e6 },
    //{ L"Roundhouse Super Trail 1", 0x431e6, 0x43206, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 2", 0x43206, 0x43226, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 3", 0x43226, 0x43246, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_START[] =
{
    { L"Start", 0x4324a - 0x02, 0x432ea - 0x02, indexSF2Sprites_Bison },
    //{ L"Start Cape", 0x4326a - 0x02, 0x4328a - 0x02 },
    //{ L"Start Super Trail 1", 0x4328a - 0x02, 0x432aa - 0x02, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 2", 0x432aa - 0x02, 0x432ca - 0x02, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 3", 0x432ca - 0x02, 0x432ea - 0x02, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_HOLD[] =
{
    { L"Hold", 0x432ea, 0x4338a, indexSF2Sprites_Bison },
    //{ L"Hold Cape", 0x4330a, 0x4332c },
    //{ L"Hold Super Trail 1", 0x4332a, 0x4334a, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 2", 0x4334a, 0x4336a, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 3", 0x4336a, 0x4338a, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x4338c, 0x4342c, indexSF2Sprites_Bison },
    //{ L"Old 1P Cape", 0x433ac, 0x433cc },
    //{ L"Old 1P Super Trail 1", 0x433cc, 0x433ec, indexSF2Sprites_Bison },
    //{ L"Old 1P Super Trail 2", 0x433ec, 0x4340c, indexSF2Sprites_Bison },
    //{ L"Old 1P Super Trail 3", 0x4340c, 0x4342c, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x43430 - 0x02, 0x434d0 - 0x02, indexSF2Sprites_Bison },
    //{ L"Old 2P Cape", 0x43450 - 0x02, 0x43470 - 0x02 },
    //{ L"Old 2P Super Trail 1", 0x43470 - 0x02, 0x43490 - 0x02, indexSF2Sprites_Bison },
    //{ L"Old 2P Super Trail 2", 0x43490 - 0x02, 0x434b0 - 0x02, indexSF2Sprites_Bison },
    //{ L"Old 2P Super Trail 3", 0x434b0 - 0x02, 0x434d0 - 0x02, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_JAB[] =
{
    { L"Jab", 0x3fb2c, 0x3fb4c, indexSF2Sprites_Ryu },
    { L"Jab Super Trail 1", 0x3fb6c, 0x3fb8c, indexSF2Sprites_Ryu },
    { L"Jab Super Trail 2", 0x3fb8c, 0x3fbac, indexSF2Sprites_Ryu },
    { L"Jab Super Trail 3", 0x3fbac, 0x3fbcc, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_STRONG[] =
{
    { L"Strong", 0x3fbd0 - 0x02, 0x3fbf0 - 0x02, indexSF2Sprites_Ryu },
    { L"Strong Super Trail 1", 0x3fc10 - 0x02, 0x3fc30 - 0x02, indexSF2Sprites_Ryu },
    { L"Strong Super Trail 2", 0x3fc30 - 0x02, 0x3fc50 - 0x02, indexSF2Sprites_Ryu },
    { L"Strong Super Trail 3", 0x3fc50 - 0x02, 0x3fc70 - 0x02, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x3fc70, 0x3fc90, indexSF2Sprites_Ryu },
    { L"Fierce Super Trail 1", 0x3fcb0, 0x3fcd0, indexSF2Sprites_Ryu },
    { L"Fierce Super Trail 2", 0x3fcd0, 0x3fcf0, indexSF2Sprites_Ryu },
    { L"Fierce Super Trail 3", 0x3fcf0, 0x3fd10, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_SHORT[] =
{
    { L"Short", 0x3fd12, 0x3fd32, indexSF2Sprites_Ryu },
    { L"Short Super Trail 1", 0x3fd52, 0x3fd72, indexSF2Sprites_Ryu },
    { L"Short Super Trail 2", 0x3fd72, 0x3fd92, indexSF2Sprites_Ryu },
    { L"Short Super Trail 3", 0x3fd92, 0x3fdb2, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FORWARD[] =
{
    { L"Forward", 0x3fdb4, 0x3fdd4, indexSF2Sprites_Ryu },
    { L"Forward Super Trail 1", 0x3fdf4, 0x3fe14, indexSF2Sprites_Ryu },
    { L"Forward Super Trail 2", 0x3fe14, 0x3fe34, indexSF2Sprites_Ryu },
    { L"Forward Super Trail 3", 0x3fe34, 0x3fe54, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x3fe56, 0x3fe76, indexSF2Sprites_Ryu },
    { L"Roundhouse Super Trail 1", 0x3fe96, 0x3feb6, indexSF2Sprites_Ryu },
    { L"Roundhouse Super Trail 2", 0x3feb6, 0x3fed6, indexSF2Sprites_Ryu },
    { L"Roundhouse Super Trail 3", 0x3fed6, 0x3fef6, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_START[] =
{
    { L"Start", 0x3fefa - 0x02, 0x3ff1a - 0x02, indexSF2Sprites_Ryu },
    { L"Start Super Trail 1", 0x3ff3a - 0x02, 0x3ff5a - 0x02, indexSF2Sprites_Ryu },
    { L"Start Super Trail 2", 0x3ff5a - 0x02, 0x3ff7a - 0x02, indexSF2Sprites_Ryu },
    { L"Start Super Trail 3", 0x3ff7a - 0x02, 0x3ff9a - 0x02, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_HOLD[] =
{
    { L"Hold", 0x3ff9a, 0x3ffba, indexSF2Sprites_Ryu },
    { L"Hold Super Trail 1", 0x3ffda, 0x3fffa, indexSF2Sprites_Ryu },
    { L"Hold Super Trail 2", 0x3fffa, 0x4001a, indexSF2Sprites_Ryu },
    { L"Hold Super Trail 3", 0x4001a, 0x4003a, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x4003c, 0x4005c, indexSF2Sprites_Ryu },
    { L"Old 1P Super Trail 1", 0x4007c, 0x4009c, indexSF2Sprites_Ryu },
    { L"Old 1P Super Trail 2", 0x4009c, 0x400bc, indexSF2Sprites_Ryu },
    { L"Old 1P Super Trail 3", 0x400bc, 0x400dc, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x400e0 - 0x02, 0x40100 - 0x02, indexSF2Sprites_Ryu },
    { L"Old 2P Super Trail 1", 0x40120 - 0x02, 0x40140 - 0x02, indexSF2Sprites_Ryu },
    { L"Old 2P Super Trail 2", 0x40140 - 0x02, 0x40160 - 0x02, indexSF2Sprites_Ryu },
    { L"Old 2P Super Trail 3", 0x40160 - 0x02, 0x40180 - 0x02, indexSF2Sprites_Ryu },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_JAB[] =
{
    { L"Jab", 0x434ea - 0x02, 0x4350a - 0x02, indexSF2Sprites_Sagat },
    { L"Jab Extra", 0x4350a - 0x02, 0x4352a - 0x02, indexSF2Sprites_Sagat, 0x1 },
    { L"Jab Super Trail 1", 0x4352a - 0x02, 0x4354a - 0x02, indexSF2Sprites_Sagat },
    { L"Jab Super Trail 2", 0x4354a - 0x02, 0x4356a - 0x02, indexSF2Sprites_Sagat },
    { L"Jab Super Trail 3", 0x4356a - 0x02, 0x4358a - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_STRONG[] =
{
    { L"Strong", 0x4358a, 0x435aa, indexSF2Sprites_Sagat },
    { L"Strong Extra", 0x435aa, 0x435ca, indexSF2Sprites_Sagat, 0x1 },
    { L"Strong Super Trail 1", 0x435ca, 0x435ea, indexSF2Sprites_Sagat },
    { L"Strong Super Trail 2", 0x435ea, 0x4360a, indexSF2Sprites_Sagat },
    { L"Strong Super Trail 3", 0x4360a, 0x4362a, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x4362c, 0x4364c, indexSF2Sprites_Sagat },
    { L"Fierce Extra", 0x4364c, 0x4366c, indexSF2Sprites_Sagat, 0x1 },
    { L"Fierce Super Trail 1", 0x4366c, 0x4368c, indexSF2Sprites_Sagat },
    { L"Fierce Super Trail 2", 0x4368c, 0x436ac, indexSF2Sprites_Sagat },
    { L"Fierce Super Trail 3", 0x436ac, 0x436cc, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_SHORT[] =
{
    { L"Short", 0x436d0 - 0x02, 0x436f0 - 0x02, indexSF2Sprites_Sagat },
    { L"Short Extra", 0x436f0 - 0x02, 0x43710 - 0x02, indexSF2Sprites_Sagat, 0x1 },
    { L"Short Super Trail 1", 0x43710 - 0x02, 0x43730 - 0x02, indexSF2Sprites_Sagat },
    { L"Short Super Trail 2", 0x43730 - 0x02, 0x43750 - 0x02, indexSF2Sprites_Sagat },
    { L"Short Super Trail 3", 0x43750 - 0x02, 0x43770 - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FORWARD[] =
{
    { L"Forward", 0x43770, 0x43790, indexSF2Sprites_Sagat },
    { L"Forward Extra", 0x43790, 0x437b0, indexSF2Sprites_Sagat, 0x1 },
    { L"Forward Super Trail 1", 0x437b0, 0x437d0, indexSF2Sprites_Sagat },
    { L"Forward Super Trail 2", 0x437d0, 0x437f0, indexSF2Sprites_Sagat },
    { L"Forward Super Trail 3", 0x437f0, 0x43810, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x43812, 0x43832, indexSF2Sprites_Sagat },
    { L"Roundhouse Extra", 0x43832, 0x43852, indexSF2Sprites_Sagat, 0x1 },
    { L"Roundhouse Super Trail 1", 0x43852, 0x43872, indexSF2Sprites_Sagat },
    { L"Roundhouse Super Trail 2", 0x43872, 0x43892, indexSF2Sprites_Sagat },
    { L"Roundhouse Super Trail 3", 0x43892, 0x438b2, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_START[] =
{
    { L"Start", 0x438b4, 0x438d4, indexSF2Sprites_Sagat },
    { L"Start Extra", 0x438d4, 0x438f4, indexSF2Sprites_Sagat, 0x1 },
    { L"Start Super Trail 1", 0x438f4, 0x43914, indexSF2Sprites_Sagat },
    { L"Start Super Trail 2", 0x43914, 0x43934, indexSF2Sprites_Sagat },
    { L"Start Super Trail 3", 0x43934, 0x43954, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_HOLD[] =
{
    { L"Hold", 0x43956, 0x43976, indexSF2Sprites_Sagat },
    { L"Hold Extra", 0x43976, 0x43996, indexSF2Sprites_Sagat, 0x1 },
    { L"Hold Super Trail 1", 0x43996, 0x439b6, indexSF2Sprites_Sagat },
    { L"Hold Super Trail 2", 0x439b6, 0x439d6, indexSF2Sprites_Sagat },
    { L"Hold Super Trail 3", 0x439d6, 0x439f6, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x439fa - 0x02, 0x43a1a - 0x02, indexSF2Sprites_Sagat },
    { L"Old 1P Extra", 0x43a1a - 0x02, 0x43a3a - 0x02, indexSF2Sprites_Sagat, 0x1 },
    { L"Old 1P Super Trail 1", 0x43a3a - 0x02, 0x43a5a - 0x02, indexSF2Sprites_Sagat },
    { L"Old 1P Super Trail 2", 0x43a5a - 0x02, 0x43a7a - 0x02, indexSF2Sprites_Sagat },
    { L"Old 1P Super Trail 3", 0x43a7a - 0x02, 0x43a9a - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x43a9a, 0x43aba, indexSF2Sprites_Sagat },
    { L"Old 2P Extra", 0x43aba, 0x43ada, indexSF2Sprites_Sagat, 0x1 },
    { L"Old 2P Super Trail 1", 0x43ada, 0x43afa, indexSF2Sprites_Sagat },
    { L"Old 2P Super Trail 2", 0x43afa, 0x43b1a, indexSF2Sprites_Sagat },
    { L"Old 2P Super Trail 3", 0x43b1a, 0x43b3a, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_JAB[] =
{
    { L"Jab", 0x44e9a - 0x02, 0x44eba - 0x02, indexSF2Sprites_THawk },
    { L"Jab Super Trail 1", 0x44eda - 0x02, 0x44efa - 0x02, indexSF2Sprites_THawk },
    { L"Jab Super Trail 2", 0x44efa - 0x02, 0x44f1a - 0x02, indexSF2Sprites_THawk },
    { L"Jab Super Trail 3", 0x44f1a - 0x02, 0x44f3a - 0x02, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_STRONG[] =
{
    { L"Strong", 0x44f3a, 0x44f5a, indexSF2Sprites_THawk },
    { L"Strong Super Trail 1", 0x44f7a, 0x44f9a, indexSF2Sprites_THawk },
    { L"Strong Super Trail 2", 0x44f9a, 0x44fba, indexSF2Sprites_THawk },
    { L"Strong Super Trail 3", 0x44fba, 0x44fda, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x44fdc, 0x44ffc, indexSF2Sprites_THawk },
    { L"Fierce Super Trail 1", 0x4501c, 0x4503c, indexSF2Sprites_THawk },
    { L"Fierce Super Trail 2", 0x4503c, 0x4505c, indexSF2Sprites_THawk },
    { L"Fierce Super Trail 3", 0x4505c, 0x4507c, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_SHORT[] =
{
    { L"Short", 0x45080 - 0x02, 0x450a0 - 0x02, indexSF2Sprites_THawk },
    { L"Short Super Trail 1", 0x450c0 - 0x02, 0x450e0 - 0x02, indexSF2Sprites_THawk },
    { L"Short Super Trail 2", 0x450e0 - 0x02, 0x45100 - 0x02, indexSF2Sprites_THawk },
    { L"Short Super Trail 3", 0x45100 - 0x02, 0x45120 - 0x02, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FORWARD[] =
{
    { L"Forward", 0x45120, 0x45140, indexSF2Sprites_THawk },
    { L"Forward Super Trail 1", 0x45160, 0x45180, indexSF2Sprites_THawk },
    { L"Forward Super Trail 2", 0x45180, 0x451a0, indexSF2Sprites_THawk },
    { L"Forward Super Trail 3", 0x451a0, 0x451c0, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x451c2, 0x451e2, indexSF2Sprites_THawk },
    { L"Roundhouse Super Trail 1", 0x45202, 0x45222, indexSF2Sprites_THawk },
    { L"Roundhouse Super Trail 2", 0x45222, 0x45242, indexSF2Sprites_THawk },
    { L"Roundhouse Super Trail 3", 0x45242, 0x45262, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_START[] =
{
    { L"Start", 0x45264, 0x45284, indexSF2Sprites_THawk },
    { L"Start Super Trail 1", 0x452a4, 0x452c4, indexSF2Sprites_THawk },
    { L"Start Super Trail 2", 0x452c4, 0x452e4, indexSF2Sprites_THawk },
    { L"Start Super Trail 3", 0x452e4, 0x45304, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_HOLD[] =
{
    { L"Hold", 0x45306, 0x45326, indexSF2Sprites_THawk },
    { L"Hold Super Trail 1", 0x45346, 0x45366, indexSF2Sprites_THawk },
    { L"Hold Super Trail 2", 0x45366, 0x45386, indexSF2Sprites_THawk },
    { L"Hold Super Trail 3", 0x45386, 0x453a6, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x453aa - 0x02, 0x453ca - 0x02, indexSF2Sprites_THawk },
    { L"Old 1P Super Trail 1", 0x453ea - 0x02, 0x4540a - 0x02, indexSF2Sprites_THawk },
    { L"Old 1P Super Trail 2", 0x4540a - 0x02, 0x4542a - 0x02, indexSF2Sprites_THawk },
    { L"Old 1P Super Trail 3", 0x4542a - 0x02, 0x4544a - 0x02, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x4544a, 0x4546a, indexSF2Sprites_THawk },
    { L"Old 2P Super Trail 1", 0x4548a, 0x454aa, indexSF2Sprites_THawk },
    { L"Old 2P Super Trail 2", 0x454aa, 0x454ca, indexSF2Sprites_THawk },
    { L"Old 2P Super Trail 3", 0x454ca, 0x454ea, indexSF2Sprites_THawk },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_JAB[] =
{
    { L"Jab", 0x441c0, 0x441e0, indexSF2Sprites_Vega },
    { L"Jab Super Trail 1", 0x44200, 0x44220, indexSF2Sprites_Vega },
    { L"Jab Super Trail 2", 0x44220, 0x44240, indexSF2Sprites_Vega },
    { L"Jab Super Trail 3", 0x44240, 0x44260, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_STRONG[] =
{
    { L"Strong", 0x44262, 0x44282, indexSF2Sprites_Vega },
    { L"Strong Super Trail 1", 0x442a2, 0x442c2, indexSF2Sprites_Vega },
    { L"Strong Super Trail 2", 0x442c2, 0x442e2, indexSF2Sprites_Vega },
    { L"Strong Super Trail 3", 0x442e2, 0x44302, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x44304, 0x44324, indexSF2Sprites_Vega },
    { L"Fierce Super Trail 1", 0x44344, 0x44364, indexSF2Sprites_Vega },
    { L"Fierce Super Trail 2", 0x44364, 0x44384, indexSF2Sprites_Vega },
    { L"Fierce Super Trail 3", 0x44384, 0x443a4, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_SHORT[] =
{
    { L"Short", 0x443a6, 0x443c6, indexSF2Sprites_Vega },
    { L"Short Super Trail 1", 0x443e6, 0x44406, indexSF2Sprites_Vega },
    { L"Short Super Trail 2", 0x44406, 0x44426, indexSF2Sprites_Vega },
    { L"Short Super Trail 3", 0x44426, 0x44446, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FORWARD[] =
{
    { L"Forward", 0x4444a - 0x02, 0x4446a - 0x02, indexSF2Sprites_Vega },
    { L"Forward Super Trail 1", 0x4448a - 0x02, 0x444aa - 0x02, indexSF2Sprites_Vega },
    { L"Forward Super Trail 2", 0x444aa - 0x02, 0x444ca - 0x02, indexSF2Sprites_Vega },
    { L"Forward Super Trail 3", 0x444ca - 0x02, 0x444ea - 0x02, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x444ea, 0x4450a, indexSF2Sprites_Vega },
    { L"Roundhouse Super Trail 1", 0x4452a, 0x4454a, indexSF2Sprites_Vega },
    { L"Roundhouse Super Trail 2", 0x4454a, 0x4456a, indexSF2Sprites_Vega },
    { L"Roundhouse Super Trail 3", 0x4456a, 0x4458a, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_START[] =
{
    { L"Start", 0x4458c, 0x445ac, indexSF2Sprites_Vega },
    { L"Start Super Trail 1", 0x445cc, 0x445ec, indexSF2Sprites_Vega },
    { L"Start Super Trail 2", 0x445ec, 0x4460c, indexSF2Sprites_Vega },
    { L"Start Super Trail 3", 0x4460c, 0x4462c, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_HOLD[] =
{
    { L"Hold", 0x44630 - 0x02, 0x44650 - 0x02, indexSF2Sprites_Vega },
    { L"Hold Super Trail 1", 0x44670 - 0x02, 0x44690 - 0x02, indexSF2Sprites_Vega },
    { L"Hold Super Trail 2", 0x44690 - 0x02, 0x446b0 - 0x02, indexSF2Sprites_Vega },
    { L"Hold Super Trail 3", 0x446b0 - 0x02, 0x446d0 - 0x02, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x446d0, 0x446f0, indexSF2Sprites_Vega },
    { L"Old 1P Super Trail 1", 0x44710, 0x44730, indexSF2Sprites_Vega },
    { L"Old 1P Super Trail 2", 0x44730, 0x44750, indexSF2Sprites_Vega },
    { L"Old 1P Super Trail 3", 0x44750, 0x44770, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x44772, 0x44792, indexSF2Sprites_Vega },
    { L"Old 2P Super Trail 1", 0x447b2, 0x447d2, indexSF2Sprites_Vega },
    { L"Old 2P Super Trail 2", 0x447d2, 0x447f2, indexSF2Sprites_Vega },
    { L"Old 2P Super Trail 3", 0x447f2, 0x44812, indexSF2Sprites_Vega },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_JAB[] =
{
    { L"Jab", 0x421a4, 0x421c4, indexSF2Sprites_Zangief },
    { L"Jab Banishing Fist", 0x421c4, 0x421e4, indexSF2Sprites_Zangief, 1 },
    { L"Jab Super Trail 1", 0x421e4, 0x42204, indexSF2Sprites_Zangief },
    { L"Jab Super Trail 2", 0x42204, 0x42224, indexSF2Sprites_Zangief },
    { L"Jab Super Trail 3", 0x42224, 0x42244, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_STRONG[] =
{
    { L"Strong", 0x42246, 0x42266, indexSF2Sprites_Zangief, 0 },
    { L"Strong Banishing Fist", 0x42266, 0x42286, indexSF2Sprites_Zangief, 1 },
    { L"Strong Super Trail 1", 0x42286, 0x422a6, indexSF2Sprites_Zangief },
    { L"Strong Super Trail 2", 0x422a6, 0x422c6, indexSF2Sprites_Zangief },
    { L"Strong Super Trail 3", 0x422c6, 0x422e6, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x422ea - 0x02, 0x4230a - 0x02, indexSF2Sprites_Zangief },
    { L"Fierce Banishing Fist", 0x4230a - 0x02, 0x4232a - 0x02, indexSF2Sprites_Zangief, 1 },
    { L"Fierce Super Trail 1", 0x4232a - 0x02, 0x4234a - 0x02, indexSF2Sprites_Zangief },
    { L"Fierce Super Trail 2", 0x4234a - 0x02, 0x4236a - 0x02, indexSF2Sprites_Zangief },
    { L"Fierce Super Trail 3", 0x4236a - 0x02, 0x4238a - 0x02, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_SHORT[] =
{
    { L"Short", 0x4238a, 0x423aa, indexSF2Sprites_Zangief },
    { L"Short Banishing Fist", 0x423aa, 0x423ca, indexSF2Sprites_Zangief, 1 },
    { L"Short Super Trail 1", 0x423ca, 0x423ea, indexSF2Sprites_Zangief },
    { L"Short Super Trail 2", 0x423ea, 0x4240a, indexSF2Sprites_Zangief },
    { L"Short Super Trail 3", 0x4240a, 0x4242a, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FORWARD[] =
{
    { L"Forward", 0x4242c, 0x4244c, indexSF2Sprites_Zangief },
    { L"Forward Banishing Fist", 0x4244c, 0x4246c, indexSF2Sprites_Zangief, 1 },
    { L"Forward Super Trail 1", 0x4246c, 0x4248c, indexSF2Sprites_Zangief },
    { L"Forward Super Trail 2", 0x4248c, 0x424ac, indexSF2Sprites_Zangief },
    { L"Forward Super Trail 3", 0x424ac, 0x424cc, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x424d0 - 0x02, 0x424f0 - 0x02, indexSF2Sprites_Zangief },
    { L"Roundhouse Banishing Fist", 0x424f0 - 0x02, 0x42510 - 0x02, indexSF2Sprites_Zangief, 1 },
    { L"Roundhouse Super Trail 1", 0x42510 - 0x02, 0x42530 - 0x02, indexSF2Sprites_Zangief },
    { L"Roundhouse Super Trail 2", 0x42530 - 0x02, 0x42550 - 0x02, indexSF2Sprites_Zangief },
    { L"Roundhouse Super Trail 3", 0x42550 - 0x02, 0x42570 - 0x02, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_START[] =
{
    { L"Start", 0x42570, 0x42590, indexSF2Sprites_Zangief },
    { L"Start Banishing Fist", 0x42590, 0x425b0, indexSF2Sprites_Zangief, 1 },
    { L"Start Super Trail 1", 0x425b0, 0x425d0, indexSF2Sprites_Zangief },
    { L"Start Super Trail 2", 0x425d0, 0x425f0, indexSF2Sprites_Zangief },
    { L"Start Super Trail 3", 0x425f0, 0x42610, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_HOLD[] =
{
    { L"Hold", 0x42612, 0x42632, indexSF2Sprites_Zangief },
    { L"Hold Banishing Fist", 0x42632, 0x42652, indexSF2Sprites_Zangief, 1 },
    { L"Hold Super Trail 1", 0x42652, 0x42672, indexSF2Sprites_Zangief },
    { L"Hold Super Trail 2", 0x42672, 0x42692, indexSF2Sprites_Zangief },
    { L"Hold Super Trail 3", 0x42692, 0x426b2, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x426b4, 0x426d4, indexSF2Sprites_Zangief },
    { L"Old 1P Banishing Fist", 0x426d4, 0x426f4, indexSF2Sprites_Zangief, 1 },
    { L"Old 1P Super Trail 1", 0x426f4, 0x42714, indexSF2Sprites_Zangief },
    { L"Old 1P Super Trail 2", 0x42714, 0x42734, indexSF2Sprites_Zangief },
    { L"Old 1P Super Trail 3", 0x42734, 0x42754, indexSF2Sprites_Zangief },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x42756, 0x42776, indexSF2Sprites_Zangief },
    { L"Old 2P Banishing Fist", 0x42776, 0x42796, indexSF2Sprites_Zangief, 1 },
    { L"Old 2P Super Trail 1", 0x42796, 0x427b6, indexSF2Sprites_Zangief },
    { L"Old 2P Super Trail 2", 0x427b6, 0x427d6, indexSF2Sprites_Zangief },
    { L"Old 2P Super Trail 3", 0x427d6, 0x427f6, indexSF2Sprites_Zangief },
};

const sDescTreeNode SSF2T_A_RYU_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_RYU_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_START,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_EHONDA_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_START,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_BLANKA_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_START,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_GUILE_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_GUILE_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_START,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_KEN_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_KEN_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_START,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_CHUNLI_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_START,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_ZANGIEF_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_DHALSIM_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_START,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_MBISON_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_MBISON_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_START,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_SAGAT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_START,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_BALROG_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BALROG_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_START,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_VEGA_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_VEGA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_VEGA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_VEGA_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_START,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_VEGA_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_CAMMY_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_START,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD1P) },
    { L"Old 2P",     DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_THAWK_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_THAWK_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_THAWK_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_THAWK_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_START,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_THAWK_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_FEILONG_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_START,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_DEEJAY_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_START,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_GOUKI_COLLECTION[] =
{
    { L"P1 Color",    DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P1COLOR,     ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P1COLOR) },
    { L"P2 Color",    DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P2COLOR,     ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P2COLOR) },
};

const sGame_PaletteDataset SSF2T_A_08_BONUS_NODE[] =
{
    { L"Intro Ryu Part 1", 0x6d0be, 0x6d1fe },
    { L"Intro Ryu Part 2", 0x6d2be, 0x6d37e },
    { L"Intro Ryu Part 3", 0x6d3be, 0x6d3de },
    { L"Intro Ryu Part 4", 0x755de, 0x755fe },

    { L"Blue SUPER Text", 0x7561e, 0x7565e },
    { L"Yellow Flash SUPER Text Part 1", 0x7555e, 0x755de },
    { L"Yellow Flash SUPER Text Part 2", 0x7565e, 0x757fe },
    { L"Intro Ryu Hadouken Blast", 0x6d27e, 0x6d29e },

    { L"Character Select Background (1/2)", 0x743fe, 0x7441e, indexSF2Sprites_Bonus, 0x1c, &pairNext },
    { L"Character Select Background (2/2)", 0x7443e, 0x7445e, indexSF2Sprites_Bonus, 0x1d },
    { L"Vs Background", 0x74b1e, 0x74b3e, indexSF2Sprites_Bonus, 0x21 },
};

const sGame_PaletteDataset SSF2T_A_03_STAGES_CASINO_NODE[] =
{
    { L"Nin Nin Hall Sign", 0x58ed2, 0x58f32 },
};

// THESE ARE IN sfxe.04a

const sGame_PaletteDataset SSF2T_A_04_BONUS_NODE[] =
{
    { L"Akuma Intro", 0x05bf5a, 0x05bf7a, indexSF2Sprites_Bonus, 1 },
    { L"Chun-Li Intro", 0x05bf7a, 0x05c09a, indexSF2Sprites_Bonus, 2 },
    { L"Cammy Intro", 0x05be5a, 0x05bf5a, indexSF2Sprites_Bonus, 0 },

    { L"Intro Ryu Part 5", 0x5917a, 0x5919a },

    { L"Intro Ryu Charging Hadouken", 0x591da, 0x591fa },
};

const sGame_PaletteDataset SSF2T_A_04_BONUS_TITLESCREEN_NODE[] =
{
    { L"Title Screen \"X\"", 0x59098, 0x590b8, indexSF2Sprites_Bonus, 0x20, &pairFullyLinkedNode },
    { L"Street Fighter II Text", 0x5921a, 0x5923a, indexSF2Sprites_Bonus, 0x1f },
    { L"Grand Master Challenge Text", 0x5915a, 0x5917a, indexSF2Sprites_Bonus, 0x1e },
    // this is now "charging hadouken" { L"Title Screen Lightning", 0x591da, 0x591fa },
};

const sGame_PaletteDataset SSF2T_A_04_STAGES_CASINO_NODE[] =
{
    { L"Girls & Nin Nin Hall Sign", 0x5697a, 0x56a5a, indexSF2Sprites_Stages, -1, &pairFullyLinkedNode },
    { L"Casino Sign 1", 0x4a360, 0x4a380, indexSF2Sprites_Stages, -1 },
    { L"Casino Sign 2", 0x4a384, 0x4a3a4, indexSF2Sprites_Stages, -1 },
    { L"Casino Sign 3", 0x4a3a8, 0x4a3c8, indexSF2Sprites_Stages, -1 },
    { L"Casino Sign 4", 0x4a3cc, 0x4a3ec, indexSF2Sprites_Stages, -1 },
    { L"Casino Sign 5", 0x4a3f0, 0x4a410, indexSF2Sprites_Stages, -1 },
    { L"Casino Sign 6", 0x4a33c, 0x4a35c, indexSF2Sprites_Stages, -1 },
};

const sGame_PaletteDataset SSF2T_A_RYU_STAGE_NODE_4[] =
{
    { L"Background Castle", 0x541Da, 0x5423a, indexSF2Sprites_Stages, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_04_STAGEHUD_NODE[] =
{
    { L"Ryu Stage HUD and Extras", 0x53f7c, 0x5403c, indexSF2Sprites_Bonus, 0x22 },
    { L"E. Honda Stage HUD and Extras", 0x5437c, 0x5443c, indexSF2Sprites_Bonus, 0x22 },
    { L"Blanka Stage HUD and Extras", 0x5477c, 0x5483c, indexSF2Sprites_Bonus, 0x22 },
    { L"Guile Stage HUD and Extras", 0x54b7c, 0x54c3c, indexSF2Sprites_Bonus, 0x22 },
    { L"Ken Stage HUD and Extras", 0x54f7c, 0x5503c, indexSF2Sprites_Bonus, 0x22 },
    { L"Chun-Li Stage HUD and Extras", 0x5537c, 0x5543c, indexSF2Sprites_Bonus, 0x22 },
    { L"Zangief Stage HUD and Extras", 0x5577c, 0x5583c, indexSF2Sprites_Bonus, 0x22 },
    { L"Dhalsim Stage HUD and Extras", 0x55b7c, 0x55c3c, indexSF2Sprites_Bonus, 0x22 },
    { L"M. Bison Stage HUD and Extras", 0x55f7c, 0x5603c, indexSF2Sprites_Bonus, 0x22 },
    { L"Sagat Stage HUD and Extras", 0x5637c, 0x5643c, indexSF2Sprites_Bonus, 0x22 },
    { L"Balrog Stage HUD and Extras", 0x5677c, 0x5683c, indexSF2Sprites_Bonus, 0x22 },
    { L"Vega Stage HUD and Extras", 0x56b7c, 0x56c3c, indexSF2Sprites_Bonus, 0x22 },
    { L"Cammy Stage HUD and Extras", 0x56f7c, 0x5703c, indexSF2Sprites_Bonus, 0x22 },
    { L"T. Hawk Stage HUD and Extras", 0x5737c, 0x5743c, indexSF2Sprites_Bonus, 0x22 },
    { L"Fei-Long Stage HUD and Extras", 0x5777c, 0x5783c, indexSF2Sprites_Bonus, 0x22 },
    { L"Dee Jay Stage HUD and Extras", 0x57b7c, 0x57c3c, indexSF2Sprites_Bonus, 0x22 },
};

const sGame_PaletteDataset SSF2T_A_RYU_STAGE_NODE[] =
{
    { L"Sky",           0x603c0 - 0x02, 0x603e0 - 0x02, indexSF2Sprites_Stages, 0x08, &pairFullyLinkedNode },
    { L"Wall",          0x70400 - 0x02, 0x704a0 - 0x02, indexSF2Sprites_Stages, 0x09 },
    { L"Foreground",    0x68000 - 0x02, 0x68120 - 0x02, indexSF2Sprites_Stages, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_STAGE_NODE_4[] =
{
    { L"Bird Castle Entrance", 0x5717a, 0x5723a, indexSF2Sprites_Stages, 0x13 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_STAGE_NODE[] =
{
    { L"Cammy Town BG", 0x73400 - 0x02, 0x73600 - 0x02, indexSF2Sprites_Stages, 0x0e, &pairFullyLinkedNode },
    { L"Cammy Town BG - mansions", 0x73600 - 0x02, 0x73800 - 0x02, indexSF2Sprites_Stages, 0x0d },
    { L"Cammy Bridge", 0x6B000 - 0x02, 0x6B200 - 0x02, indexSF2Sprites_Stages, 0x10 },
    { L"Cammy Sky", 0x6B200 - 0x02, 0x6B400 - 0x02, indexSF2Sprites_Stages, 0x0f },
    { L"Cammy Castle", 0x63000 - 0x02, 0x63200 - 0x02, indexSF2Sprites_Stages, 0x12 },
    { L"Cammy Castle", 0x63200 - 0x02, 0x63400 - 0x02, indexSF2Sprites_Stages, 0x11 },
};

// Sagat Stage - Lady+Floor    6A3FE        6A75E
// Sagat Stage - FarBG        727FE        7291E
// Sagat Stage - MG        623FE        627FE
const sGame_PaletteDataset SSF2T_A_SAGAT_STAGE_NODE[] =
{
    //{ L"Background",    0x72800 - 0x02, 0x72920 - 0x02, indexSF2Sprites_Stages, 0x00 },
    //{ L"Midground 1",   0x62400 - 0x02, 0x62600 - 0x02, indexSF2Sprites_Stages, 0x01 },
    //{ L"Midground 2",   0x62600 - 0x02, 0x62800 - 0x02, indexSF2Sprites_Stages, 0x02 },
  //  { L"Buddha 1",      0x6A400 - 0x02, 0x6A560 - 0x02, indexSF2Sprites_Stages, 0x03 },
//    { L"Buddha 2",      0x6A600 - 0x02, 0x6A760 - 0x02, indexSF2Sprites_Stages, 0x04 },

    { L"Background",    0x72800 - 0x02, 0x72920 - 0x02, indexSF2Sprites_Stages, 0x00, &pairFullyLinkedNode },
    //{ L"Midground 1",   0x62400 - 0x02, 0x62600 - 0x02, indexSF2Sprites_Stages, 0x01 }, // nothing useful here
    { L"Midground",     0x62600 - 0x02, 0x62800 - 0x02, indexSF2Sprites_Stages, 0x01 },
    { L"Buddha 1",      0x6A400 - 0x02, 0x6A600 - 0x02, indexSF2Sprites_Stages, 0x04 },
    { L"Buddha 2",      0x6A600 - 0x02, 0x6A760 - 0x02, indexSF2Sprites_Stages, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_JAB[] =
{
    { L"Ryu Portrait - Jab 1/2", 0x31c46, 0x31cc6, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Jab 2/2", 0x36cfc, 0x36d7c, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_STRONG[] =
{
    { L"Ryu Portrait - Strong 1/2", 0x31cc6, 0x31d46, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Strong 2/2", 0x36d7c, 0x36dfc, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_FIERCE[] =
{
    { L"Ryu Portrait - Fierce 1/2", 0x31d46, 0x31dc6, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Fierce 2/2", 0x36dfc, 0x36e7c, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_SHORT[] =
{
    { L"Ryu Portrait - Short 1/2", 0x31dc6, 0x31e46, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Short 2/2", 0x36e7c, 0x36efc, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_FORWARD[] =
{
    { L"Ryu Portrait - Forward 1/2", 0x31e46, 0x31ec6, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Forward 2/2", 0x36efc, 0x36f7c, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Ryu Portrait - RH 1/2", 0x31ec6, 0x31f46, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - RH 2/2", 0x36f7c, 0x36ffc, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_START[] =
{
    { L"Ryu Portrait - Start 1/2", 0x31f46, 0x31fc6, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Start 2/2", 0x36ffc, 0x3707c, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_HOLD[] =
{
    { L"Ryu Portrait - Hold 1/2", 0x31fc6, 0x32046, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Hold 2/2", 0x3707c, 0x370fc, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_OLD1P[] =
{
    { L"Ryu Portrait - Old 1P 1/2", 0x32046, 0x320c6, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Old 1P 2/2", 0x370fc, 0x3717c, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PORTRAITS_OLD2P[] =
{
    { L"Ryu Portrait - Old 2P 1/2", 0x320c6, 0x32146, indexSF2Sprites_Ryu, 0x10, &pairNext },
    { L"Ryu Portrait - Old 2P 2/2", 0x3717c, 0x371fc, indexSF2Sprites_Ryu, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_JAB[] =
{
    { L"E. Honda Portrait - Jab 1/2", 0x32146, 0x321c6, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Jab 2/2", 0x371fc, 0x3727c, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_STRONG[] =
{
    { L"E. Honda Portrait - Strong 1/2", 0x321c6, 0x32246, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Strong 2/2", 0x3727c, 0x372fc, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_FIERCE[] =
{
    { L"E. Honda Portrait - Fierce 1/2", 0x32246, 0x322c6, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Fierce 2/2", 0x372fc, 0x3737c, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_SHORT[] =
{
    { L"E. Honda Portrait - Short 1/2", 0x322c6, 0x32346, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Short 2/2", 0x3737c, 0x373fc, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_FORWARD[] =
{
    { L"E. Honda Portrait - Forward 1/2", 0x32346, 0x323c6, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Forward 2/2", 0x373fc, 0x3747c, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_ROUNDHOUSE[] =
{
    { L"E. Honda Portrait - RH 1/2", 0x323c6, 0x32446, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - RH 2/2", 0x3747c, 0x374fc, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_START[] =
{
    { L"E. Honda Portrait - Start 1/2", 0x32446, 0x324c6, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Start 2/2", 0x374fc, 0x3757c, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_HOLD[] =
{
    { L"E. Honda Portrait - Hold 1/2", 0x324c6, 0x32546, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Hold 2/2", 0x3757c, 0x375fc, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_OLD1P[] =
{
    { L"E. Honda Portrait - Old 1P 1/2", 0x32546, 0x325c6, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Old 1P 2/2", 0x375fc, 0x3767c, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAITS_OLD2P[] =
{
    { L"E. Honda Portrait - Old 2P 1/2", 0x325c6, 0x32646, indexSF2Sprites_EHonda, 0x10, &pairNext },
    { L"E. Honda Portrait - Old 2P 2/2", 0x3767c, 0x376fc, indexSF2Sprites_EHonda, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_JAB[] =
{
    { L"Blanka Portrait - Jab 1/2", 0x32646, 0x326c6, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Jab 2/2", 0x376fc, 0x3777c, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_STRONG[] =
{
    { L"Blanka Portrait - Strong 1/2", 0x326c6, 0x32746, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Strong 2/2", 0x3777c, 0x377fc, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_FIERCE[] =
{
    { L"Blanka Portrait - Fierce 1/2", 0x32746, 0x327c6, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Fierce 2/2", 0x377fc, 0x3787c, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_SHORT[] =
{
    { L"Blanka Portrait - Short 1/2", 0x327c6, 0x32846, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Short 2/2", 0x3787c, 0x378fc, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_FORWARD[] =
{
    { L"Blanka Portrait - Forward 1/2", 0x32846, 0x328c6, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Forward 2/2", 0x378fc, 0x3797c, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Blanka Portrait - RH 1/2", 0x328c6, 0x32946, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - RH 2/2", 0x3797c, 0x379fc, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_START[] =
{
    { L"Blanka Portrait - Start 1/2", 0x32946, 0x329c6, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Start 2/2", 0x379fc, 0x37a7c, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_HOLD[] =
{
    { L"Blanka Portrait - Hold 1/2", 0x329c6, 0x32a46, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Hold 2/2", 0x37a7c, 0x37afc, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_OLD1P[] =
{
    { L"Blanka Portrait - Old 1P 1/2", 0x32a46, 0x32ac6, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Old 1P 2/2", 0x37afc, 0x37b7c, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAITS_OLD2P[] =
{
    { L"Blanka Portrait - Old 2P 1/2", 0x32ac6, 0x32b46, indexSF2Sprites_Blanka, 0x10, &pairNext },
    { L"Blanka Portrait - Old 2P 2/2", 0x37b7c, 0x37bfc, indexSF2Sprites_Blanka, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_JAB[] =
{
    { L"Guile Portrait - Jab 1/2", 0x32b46, 0x32bc6, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Jab 2/2", 0x37bfc, 0x37c7c, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_STRONG[] =
{
    { L"Guile Portrait - Strong 1/2", 0x32bc6, 0x32c46, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Strong 2/2", 0x37c7c, 0x37cfc, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_FIERCE[] =
{
    { L"Guile Portrait - Fierce 1/2", 0x32c46, 0x32cc6, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Fierce 2/2", 0x37cfc, 0x37d7c, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_SHORT[] =
{
    { L"Guile Portrait - Short 1/2", 0x32cc6, 0x32d46, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Short 2/2", 0x37d7c, 0x37dfc, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_FORWARD[] =
{
    { L"Guile Portrait - Forward 1/2", 0x32d46, 0x32dc6, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Forward 2/2", 0x37dfc, 0x37e7c, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Guile Portrait - RH 1/2", 0x32dc6, 0x32e46, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - RH 2/2", 0x37e7c, 0x37efc, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_START[] =
{
    { L"Guile Portrait - Start 1/2", 0x32e46, 0x32ec6, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Start 2/2", 0x37efc, 0x37f7c, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_HOLD[] =
{
    { L"Guile Portrait - Hold 1/2", 0x32ec6, 0x32f46, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Hold 2/2", 0x37f7c, 0x37ffc, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_OLD1P[] =
{
    { L"Guile Portrait - Old 1P 1/2", 0x32f46, 0x32fc6, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Old 1P 2/2", 0x37ffc, 0x3807c, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAITS_OLD2P[] =
{
    { L"Guile Portrait - Old 2P 1/2", 0x32fc6, 0x33046, indexSF2Sprites_Guile, 0x10, &pairNext },
    { L"Guile Portrait - Old 2P 2/2", 0x3807c, 0x380fc, indexSF2Sprites_Guile, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_JAB[] =
{
    { L"Ken Portrait - Jab 1/2", 0x33046, 0x330c6, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Jab 2/2", 0x380fc, 0x3817c, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_STRONG[] =
{
    { L"Ken Portrait - Strong 1/2", 0x330c6, 0x33146, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Strong 2/2", 0x3817c, 0x381fc, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_FIERCE[] =
{
    { L"Ken Portrait - Fierce 1/2", 0x33146, 0x331c6, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Fierce 2/2", 0x381fc, 0x3827c, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_SHORT[] =
{
    { L"Ken Portrait - Short 1/2", 0x331c6, 0x33246, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Short 2/2", 0x3827c, 0x382fc, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_FORWARD[] =
{
    { L"Ken Portrait - Forward 1/2", 0x33246, 0x332c6, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Forward 2/2", 0x382fc, 0x3837c, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Ken Portrait - RH 1/2", 0x332c6, 0x33346, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - RH 2/2", 0x3837c, 0x383fc, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_START[] =
{
    { L"Ken Portrait - Start 1/2", 0x33346, 0x333c6, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Start 2/2", 0x383fc, 0x3847c, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_HOLD[] =
{
    { L"Ken Portrait - Hold 1/2", 0x333c6, 0x33446, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Hold 2/2", 0x3847c, 0x384fc, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_OLD1P[] =
{
    { L"Ken Portrait - Old 1P 1/2", 0x33446, 0x334c6, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Old 1P 2/2", 0x384fc, 0x3857c, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAITS_OLD2P[] =
{
    { L"Ken Portrait - Old 2P 1/2", 0x334c6, 0x33546, indexSF2Sprites_Ken, 0x10, &pairNext },
    { L"Ken Portrait - Old 2P 2/2", 0x3857c, 0x385fc, indexSF2Sprites_Ken, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_JAB[] =
{
    { L"Chun-Li Portrait - Jab 1/2", 0x33546, 0x335c6, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Jab 2/2", 0x385fc, 0x3867c, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_STRONG[] =
{
    { L"Chun-Li Portrait - Strong 1/2", 0x335c6, 0x33646, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Strong 2/2", 0x3867c, 0x386fc, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_FIERCE[] =
{
    { L"Chun-Li Portrait - Fierce 1/2", 0x33646, 0x336c6, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Fierce 2/2", 0x386fc, 0x3877c, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_SHORT[] =
{
    { L"Chun-Li Portrait - Short 1/2", 0x336c6, 0x33746, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Short 2/2", 0x3877c, 0x387fc, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_FORWARD[] =
{
    { L"Chun-Li Portrait - Forward 1/2", 0x33746, 0x337c6, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Forward 2/2", 0x387fc, 0x3887c, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Chun-Li Portrait - RH 1/2", 0x337c6, 0x33846, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - RH 2/2", 0x3887c, 0x388fc, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_START[] =
{
    { L"Chun-Li Portrait - Start 1/2", 0x33846, 0x338c6, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Start 2/2", 0x388fc, 0x3897c, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_HOLD[] =
{
    { L"Chun-Li Portrait - Hold 1/2", 0x338c6, 0x33946, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Hold 2/2", 0x3897c, 0x389fc, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_OLD1P[] =
{
    { L"Chun-Li Portrait - Old 1P 1/2", 0x33946, 0x339c6, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Old 1P 2/2", 0x389fc, 0x38a7c, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAITS_OLD2P[] =
{
    { L"Chun-Li Portrait - Old 2P 1/2", 0x339c6, 0x33a46, indexSF2Sprites_ChunLi, 0x10, &pairNext },
    { L"Chun Li Portrait - Old 2P 2/2", 0x38a7c, 0x38afc, indexSF2Sprites_ChunLi, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_JAB[] =
{
    { L"Zangief Portrait - Jab 1/2", 0x33a46, 0x33ac6, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Jab 2/2", 0x38afc, 0x38b7c, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_STRONG[] =
{
    { L"Zangief Portrait - Strong 1/2", 0x33ac6, 0x33b46, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Strong 2/2", 0x38b7c, 0x38bfc, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_FIERCE[] =
{
    { L"Zangief Portrait - Fierce 1/2", 0x33b46, 0x33bc6, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Fierce 2/2", 0x38bfc, 0x38c7c, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_SHORT[] =
{
    { L"Zangief Portrait - Short 1/2", 0x33bc6, 0x33c46, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Short 2/2", 0x38c7c, 0x38cfc, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_FORWARD[] =
{
    { L"Zangief Portrait - Forward 1/2", 0x33c46, 0x33cc6, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Forward 2/2", 0x38cfc, 0x38d7c, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Zangief Portrait - RH 1/2", 0x33cc6, 0x33d46, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - RH 2/2", 0x38d7c, 0x38dfc, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_START[] =
{
    { L"Zangief Portrait - Start 1/2", 0x33d46, 0x33dc6, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Start 2/2", 0x38dfc, 0x38e7c, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_HOLD[] =
{
    { L"Zangief Portrait - Hold 1/2", 0x33dc6, 0x33e46, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Hold 2/2", 0x38e7c, 0x38efc, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_OLD1P[] =
{
    { L"Zangief Portrait - Old 1P 1/2", 0x33e46, 0x33ec6, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Old 1P 2/2", 0x38efc, 0x38f7c, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAITS_OLD2P[] =
{
    { L"Zangief Portrait - Old 2P 1/2", 0x33ec6, 0x33f46, indexSF2Sprites_Zangief, 0x10, &pairNext },
    { L"Zangief Portrait - Old 2P 2/2", 0x38f7c, 0x38ffc, indexSF2Sprites_Zangief, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_JAB[] =
{
    { L"Dhalsim Portrait - Jab 1/2", 0x33f46, 0x33fc6, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Jab 2/2", 0x38ffc, 0x3907c, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_STRONG[] =
{
    { L"Dhalsim Portrait - Strong 1/2", 0x33fc6, 0x34046, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Strong 2/2", 0x3907c, 0x390fc, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_FIERCE[] =
{
    { L"Dhalsim Portrait - Fierce 1/2", 0x34046, 0x340c6, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Fierce 2/2", 0x390fc, 0x3917c, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_SHORT[] =
{
    { L"Dhalsim Portrait - Short 1/2", 0x340c6, 0x34146, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Short 2/2", 0x3917c, 0x391fc, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_FORWARD[] =
{
    { L"Dhalsim Portrait - Forward 1/2", 0x34146, 0x341c6, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Forward 2/2", 0x391fc, 0x3927c, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Dhalsim Portrait - RH 1/2", 0x341c6, 0x34246, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - RH 2/2", 0x3927c, 0x392fc, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_START[] =
{
    { L"Dhalsim Portrait - Start 1/2", 0x34246, 0x342c6, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Start 2/2", 0x392fc, 0x3937c, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_HOLD[] =
{
    { L"Dhalsim Portrait - Hold 1/2", 0x342c6, 0x34346, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Hold 2/2", 0x3937c, 0x393fc, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_OLD1P[] =
{
    { L"Dhalsim Portrait - Old 1P 1/2", 0x34346, 0x343c6, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Old 1P 2/2", 0x393fc, 0x3947c, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAITS_OLD2P[] =
{
    { L"Dhalsim Portrait - Old 2P 1/2", 0x343c6, 0x34446, indexSF2Sprites_Dhalsim, 0x10, &pairNext },
    { L"Dhalsim Portrait - Old 2P 2/2", 0x3947c, 0x394fc, indexSF2Sprites_Dhalsim, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_JAB[] =
{
    { L"M. Bison Portrait - Jab 1/2", 0x34446, 0x344c6, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Jab 2/2", 0x394fc, 0x3957c, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_STRONG[] =
{
    { L"M. Bison Portrait - Strong 1/2", 0x344c6, 0x34546, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Strong 2/2", 0x3957c, 0x395fc, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_FIERCE[] =
{
    { L"M. Bison Portrait - Fierce 1/2", 0x34546, 0x345c6, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Fierce 2/2", 0x395fc, 0x3967c, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_SHORT[] =
{
    { L"M. Bison Portrait - Short 1/2", 0x345c6, 0x34646, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Short 2/2", 0x3967c, 0x396fc, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_FORWARD[] =
{
    { L"M. Bison Portrait - Forward 1/2", 0x34646, 0x346c6, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Forward 2/2", 0x396fc, 0x3977c, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_ROUNDHOUSE[] =
{
    { L"M. Bison Portrait - RH 1/2", 0x346c6, 0x34746, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - RH 2/2", 0x3977c, 0x397fc, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_START[] =
{
    { L"M. Bison Portrait - Start 1/2", 0x34746, 0x347c6, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Start 2/2", 0x397fc, 0x3987c, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_HOLD[] =
{
    { L"M. Bison Portrait - Hold 1/2", 0x347c6, 0x34846, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Hold 2/2", 0x3987c, 0x398fc, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_OLD1P[] =
{
    { L"M. Bison Portrait - Old 1P 1/2", 0x34846, 0x348c6, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Old 1P 2/2", 0x398fc, 0x3997c, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAITS_OLD2P[] =
{
    { L"M. Bison Portrait - Old 2P 1/2", 0x348c6, 0x34946, indexSF2Sprites_Bison, 0x10, &pairNext },
    { L"M. Bison Portrait - Old 2P 2/2", 0x3997c, 0x399fc, indexSF2Sprites_Bison, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_JAB[] =
{
    { L"Sagat Portrait - Jab 1/2", 0x34946, 0x349c6, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Jab 2/2", 0x399fc, 0x39a7c, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_STRONG[] =
{
    { L"Sagat Portrait - Strong 1/2", 0x349c6, 0x34a46, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Strong 2/2", 0x39a7c, 0x39afc, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_FIERCE[] =
{
    { L"Sagat Portrait - Fierce 1/2", 0x34a46, 0x34ac6, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Fierce 2/2", 0x39afc, 0x39b7c, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_SHORT[] =
{
    { L"Sagat Portrait - Short 1/2", 0x34ac6, 0x34b46, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Short 2/2", 0x39b7c, 0x39bfc, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_FORWARD[] =
{
    { L"Sagat Portrait - Forward 1/2", 0x34b46, 0x34bc6, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Forward 2/2", 0x39bfc, 0x39c7c, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Sagat Portrait - RH 1/2", 0x34bc6, 0x34c46, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - RH 2/2", 0x39c7c, 0x39cfc, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_START[] =
{
    { L"Sagat Portrait - Start 1/2", 0x34c46, 0x34cc6, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Start 2/2", 0x39cfc, 0x39d7c, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_HOLD[] =
{
    { L"Sagat Portrait - Hold 1/2", 0x34cc6, 0x34d46, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Hold 2/2", 0x39d7c, 0x39dfc, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_OLD1P[] =
{
    { L"Sagat Portrait - Old 1P 1/2", 0x34d46, 0x34dc6, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Old 1P 2/2", 0x39dfc, 0x39e7c, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAITS_OLD2P[] =
{
    { L"Sagat Portrait - Old 2P 1/2", 0x34dc6, 0x34e46, indexSF2Sprites_Sagat, 0x10, &pairNext },
    { L"Sagat Portrait - Old 2P 2/2", 0x39e7c, 0x39efc, indexSF2Sprites_Sagat, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_JAB[] =
{
    { L"Balrog Portrait - Jab 1/2", 0x34e46, 0x34ec6, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Jab 2/2", 0x39efc, 0x39f7c, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_STRONG[] =
{
    { L"Balrog Portrait - Strong 1/2", 0x34ec6, 0x34f46, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Strong 2/2", 0x39f7c, 0x39ffc, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_FIERCE[] =
{
    { L"Balrog Portrait - Fierce 1/2", 0x34f46, 0x34fc6, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Fierce 2/2", 0x39ffc, 0x3a07c, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_SHORT[] =
{
    { L"Balrog Portrait - Short 1/2", 0x34fc6, 0x35046, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Short 2/2", 0x3a07c, 0x3a0fc, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_FORWARD[] =
{
    { L"Balrog Portrait - Forward 1/2", 0x35046, 0x350c6, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Forward 2/2", 0x3a0fc, 0x3a17c, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Balrog Portrait - RH 1/2", 0x350c6, 0x35146, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - RH 2/2", 0x3a17c, 0x3a1fc, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_START[] =
{
    { L"Balrog Portrait - Start 1/2", 0x35146, 0x351c6, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Start 2/2", 0x3a1fc, 0x3a27c, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_HOLD[] =
{
    { L"Balrog Portrait - Hold 1/2", 0x351c6, 0x35246, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Hold 2/2", 0x3a27c, 0x3a2fc, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_OLD1P[] =
{
    { L"Balrog Portrait - Old 1P 1/2", 0x35246, 0x352c6, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Old 1P 2/2", 0x3a2fc, 0x3a37c, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAITS_OLD2P[] =
{
    { L"Balrog Portrait - Old 2P 1/2", 0x352c6, 0x35346, indexSF2Sprites_Balrog, 0x10, &pairNext },
    { L"Balrog Portrait - Old 2P 2/2", 0x3a37c, 0x3a3fc, indexSF2Sprites_Balrog, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_JAB[] =
{
    { L"Vega Portrait - Jab 1/2", 0x35346, 0x353c6, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Jab 2/2", 0x3a3fc, 0x3a47c, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_STRONG[] =
{
    { L"Vega Portrait - Strong 1/2", 0x353c6, 0x35446, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Strong 2/2", 0x3a47c, 0x3a4fc, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_FIERCE[] =
{
    { L"Vega Portrait - Fierce 1/2", 0x35446, 0x354c6, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Fierce 2/2", 0x3a4fc, 0x3a57c, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_SHORT[] =
{
    { L"Vega Portrait - Short 1/2", 0x354c6, 0x35546, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Short 2/2", 0x3a57c, 0x3a5fc, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_FORWARD[] =
{
    { L"Vega Portrait - Forward 1/2", 0x35546, 0x355c6, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Forward 2/2", 0x3a5fc, 0x3a67c, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Vega Portrait - RH 1/2", 0x355c6, 0x35646, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - RH 2/2", 0x3a67c, 0x3a6fc, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_START[] =
{
    { L"Vega Portrait - Start 1/2", 0x35646, 0x356c6, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Start 2/2", 0x3a6fc, 0x3a77c, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_HOLD[] =
{
    { L"Vega Portrait - Hold 1/2", 0x356c6, 0x35746, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Hold 2/2", 0x3a77c, 0x3a7fc, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_OLD1P[] =
{
    { L"Vega Portrait - Old 1P 1/2", 0x35746, 0x357c6, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Old 1P 2/2", 0x3a7fc, 0x3a87c, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAITS_OLD2P[] =
{
    { L"Vega Portrait - Old 2P 1/2", 0x357c6, 0x35846, indexSF2Sprites_Vega, 0x10, &pairNext },
    { L"Vega Portrait - Old 2P 2/2", 0x3a87c, 0x3a8fc, indexSF2Sprites_Vega, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_JAB[] =
{
    { L"Cammy Portrait - Jab 1/2", 0x35846, 0x358c6, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Jab 2/2", 0x3a8fc, 0x3a97c, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_STRONG[] =
{
    { L"Cammy Portrait - Strong 1/2", 0x358c6, 0x35946, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Strong 2/2", 0x3a97c, 0x3a9fc, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_FIERCE[] =
{
    { L"Cammy Portrait - Fierce 1/2", 0x35946, 0x359c6, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Fierce 2/2", 0x3a9fc, 0x3aa7c, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_SHORT[] =
{
    { L"Cammy Portrait - Short 1/2", 0x359c6, 0x35a46, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Short 2/2", 0x3aa7c, 0x3aafc, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_FORWARD[] =
{
    { L"Cammy Portrait - Forward 1/2", 0x35a46, 0x35ac6, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Forward 2/2", 0x3aafc, 0x3ab7c, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Cammy Portrait - RH 1/2", 0x35ac6, 0x35b46, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - RH 2/2", 0x3ab7c, 0x3abfc, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_START[] =
{
    { L"Cammy Portrait - Start 1/2", 0x35b46, 0x35bc6, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Start 2/2", 0x3abfc, 0x3ac7c, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_HOLD[] =
{
    { L"Cammy Portrait - Hold 1/2", 0x35bc6, 0x35c46, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Hold 2/2", 0x3ac7c, 0x3acfc, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_OLD1P[] =
{
    { L"Cammy Portrait - Old 1P 1/2", 0x35c46, 0x35cc6, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Old 1P 2/2", 0x3acfc, 0x3ad7c, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAITS_OLD2P[] =
{
    { L"Cammy Portrait - Old 2P 1/2", 0x35cc6, 0x35d46, indexSF2Sprites_Cammy, 0x10, &pairNext },
    { L"Cammy Portrait - Old 2P 2/2", 0x3ad7c, 0x3adfc, indexSF2Sprites_Cammy, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_JAB[] =
{
    { L"T-Hawk Portrait - Jab 1/2", 0x35d46, 0x35dc6, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Jab 2/2", 0x3adfc, 0x3ae7c, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_STRONG[] =
{
    { L"T-Hawk Portrait - Strong 1/2", 0x35dc6, 0x35e46, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Strong 2/2", 0x3ae7c, 0x3aefc, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_FIERCE[] =
{
    { L"T-Hawk Portrait - Fierce 1/2", 0x35e46, 0x35ec6, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Fierce 2/2", 0x3aefc, 0x3af7c, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_SHORT[] =
{
    { L"T-Hawk Portrait - Short 1/2", 0x35ec6, 0x35f46, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Short 2/2", 0x3af7c, 0x3affc, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_FORWARD[] =
{
    { L"T-Hawk Portrait - Forward 1/2", 0x35f46, 0x35fc6, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Forward 2/2", 0x3affc, 0x3b07c, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_ROUNDHOUSE[] =
{
    { L"T-Hawk Portrait - RH 1/2", 0x35fc6, 0x36046, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - RH 2/2", 0x3b07c, 0x3b0fc, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_START[] =
{
    { L"T-Hawk Portrait - Start 1/2", 0x36046, 0x360c6, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Start 2/2", 0x3b0fc, 0x3b17c, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_HOLD[] =
{
    { L"T-Hawk Portrait - Hold 1/2", 0x360c6, 0x36146, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Hold 2/2", 0x3b17c, 0x3b1fc, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_OLD1P[] =
{
    { L"T-Hawk Portrait - Old 1P 1/2", 0x36146, 0x361c6, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Old 1P 2/2", 0x3b1fc, 0x3b27c, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAITS_OLD2P[] =
{
    { L"T-Hawk Portrait - Old 2P 1/2", 0x361c6, 0x36246, indexSF2Sprites_THawk, 0x10, &pairNext },
    { L"T-Hawk Portrait - Old 2P 2/2", 0x3b27c, 0x3b2fc, indexSF2Sprites_THawk, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_JAB[] =
{
    { L"Fei Long Portrait - Jab 1/2", 0x36246, 0x362c6, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Jab 2/2", 0x3b2fc, 0x3b37c, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_STRONG[] =
{
    { L"Fei Long Portrait - Strong 1/2", 0x362c6, 0x36346, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Strong 2/2", 0x3b37c, 0x3b3fc, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_FIERCE[] =
{
    { L"Fei Long Portrait - Fierce 1/2", 0x36346, 0x363c6, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Fierce 2/2", 0x3b3fc, 0x3b47c, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_SHORT[] =
{
    { L"Fei Long Portrait - Short 1/2", 0x363c6, 0x36446, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Short 2/2", 0x3b47c, 0x3b4fc, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_FORWARD[] =
{
    { L"Fei Long Portrait - Forward 1/2", 0x36446, 0x364c6, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Forward 2/2", 0x3b4fc, 0x3b57c, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Fei Long Portrait - RH 1/2", 0x364c6, 0x36546, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - RH 2/2", 0x3b57c, 0x3b5fc, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_START[] =
{
    { L"Fei Long Portrait - Start 1/2", 0x36546, 0x365c6, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Start 2/2", 0x3b5fc, 0x3b67c, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_HOLD[] =
{
    { L"Fei Long Portrait - Hold 1/2", 0x365c6, 0x36646, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Hold 2/2", 0x3b67c, 0x3b6fc, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_OLD1P[] =
{
    { L"Fei Long Portrait - Old 1P 1/2", 0x36646, 0x366c6, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Old 1P 2/2", 0x3b6fc, 0x3b77c, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAITS_OLD2P[] =
{
    { L"Fei Long Portrait - Old 2P 1/2", 0x366c6, 0x36746, indexSF2Sprites_FeiLong, 0x10, &pairNext },
    { L"Fei Long Portrait - Old 2P 2/2", 0x3b77c, 0x3b7fc, indexSF2Sprites_FeiLong, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_JAB[] =
{
    { L"Dee Jay Portrait - Jab 1/2", 0x36746, 0x367c6, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Jab 2/2", 0x3b7fc, 0x3b87c, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_STRONG[] =
{
    { L"Dee Jay Portrait - Strong 1/2", 0x367c6, 0x36846, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Strong 2/2", 0x3b87c, 0x3b8fc, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_FIERCE[] =
{
    { L"Dee Jay Portrait - Fierce 1/2", 0x36846, 0x368c6, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Fierce 2/2", 0x3b8fc, 0x3b97c, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_SHORT[] =
{
    { L"Dee Jay Portrait - Short 1/2", 0x368c6, 0x36946, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Short 2/2", 0x3b97c, 0x3b9fc, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_FORWARD[] =
{
    { L"Dee Jay Portrait - Forward 1/2", 0x36946, 0x369c6, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Forward 2/2", 0x3b9fc, 0x3ba7c, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Dee Jay Portrait - RH 1/2", 0x369c6, 0x36a46, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - RH 2/2", 0x3ba7c, 0x3bafc, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_START[] =
{
    { L"Dee Jay Portrait - Start 1/2", 0x36a46, 0x36ac6, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Start 2/2", 0x3bafc, 0x3bb7c, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_HOLD[] =
{
    { L"Dee Jay Portrait - Hold 1/2", 0x36ac6, 0x36b46, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Hold 2/2", 0x3bb7c, 0x3bbfc, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_OLD1P[] =
{
    { L"Dee Jay Portrait - Old 1P 1/2", 0x36b46, 0x36bc6, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Old 1P 2/2", 0x3bbfc, 0x3bc7c, indexSF2Sprites_DeeJay, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAITS_OLD2P[] =
{
    { L"Dee Jay Portrait - Old 2P 1/2", 0x36bc6, 0x36c46, indexSF2Sprites_DeeJay, 0x10, &pairNext },
    { L"Dee Jay Portrait - Old 2P 2/2", 0x3bc7c, 0x3bcfc, indexSF2Sprites_DeeJay, 0x11 },
};

const sDescTreeNode SSF2T_A_RYU_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_EHONDA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_BLANKA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_GUILE_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_KEN_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_CHUNLI_PORTRAIT_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_DHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_MBISON_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_SAGAT_PORTRAIT_COLLECTION[] =
{
    { L"Jab",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_FIERCE) },
    { L"Short",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_ROUNDHOUSE) },
    { L"Start",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_START) },
    { L"Hold",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_BALROG_PORTRAIT_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_VEGA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_CAMMY_PORTRAIT_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_OLD1P) },
    { L"Old 2P",     DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_THAWK_PORTRAIT_COLLECTION[] =
{
    { L"Jab",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_FIERCE) },
    { L"Short",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_SHORT) },
    { L"Forward",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_ROUNDHOUSE) },
    { L"Start",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_START) },
    { L"Hold",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_FEILONG_PORTRAIT_COLLECTION[] =
{
    { L"Jab",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_FIERCE) },
    { L"Short",     DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_SHORT) },
    { L"Forward",   DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_FORWARD) },
    { L"Roundhouse", DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_ROUNDHOUSE) },
    { L"Start",     DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_START) },
    { L"Hold",      DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_DEEJAY_PORTRAIT_COLLECTION[] =
{
    { L"Jab",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_JAB) },
    { L"Strong",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_STRONG) },
    { L"Fierce",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_FIERCE) },
    { L"Short",     DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_SHORT) },
    { L"Forward",   DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_FORWARD) },
    { L"Roundhouse", DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_ROUNDHOUSE) },
    { L"Start",     DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_START) },
    { L"Hold",      DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_HOLD) },
    { L"Old 1P",    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_OLD1P) },
    { L"Old 2P",    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_03_STAGES_COLLECTION[] =
{
    { L"Balrog's Casino Stage (03 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_03_STAGES_CASINO_NODE,   ARRAYSIZE(SSF2T_A_03_STAGES_CASINO_NODE) },
};

const sDescTreeNode SSF2T_A_4A_STAGES_COLLECTION[] =
{
    { L"Stage HUDs and Extras",     DESC_NODETYPE_TREE, (void*)SSF2T_A_04_STAGEHUD_NODE, ARRAYSIZE(SSF2T_A_04_STAGEHUD_NODE) },

    { L"Balrog's Casino Stage (04 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_04_STAGES_CASINO_NODE, ARRAYSIZE(SSF2T_A_04_STAGES_CASINO_NODE) },

    { L"Cammy Stage (04 parts)",    DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE_4,  ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE_4) },
    { L"Ryu Stage (04 parts)",      DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE_4,    ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE_4) },
};

const sDescTreeNode SSF2T_A_04_BONUS_COLLECTION[] =
{
    { L"Intro Palettes",            DESC_NODETYPE_TREE, (void*)SSF2T_A_04_BONUS_NODE,          ARRAYSIZE(SSF2T_A_04_BONUS_NODE) },
    { L"Title Screen",              DESC_NODETYPE_TREE, (void*)SSF2T_A_04_BONUS_TITLESCREEN_NODE, ARRAYSIZE(SSF2T_A_04_BONUS_TITLESCREEN_NODE) },
};

const sDescTreeNode SSF2T_A_08_BONUS_COLLECTION[] =
{
    { L"Palettes",                  DESC_NODETYPE_TREE, (void*)SSF2T_A_08_BONUS_NODE,   ARRAYSIZE(SSF2T_A_08_BONUS_NODE) },
};

const sDescTreeNode SSF2T_A_STAGES_COLLECTION[] =
{

    { L"Cammy Stage",   DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE,    ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE) },
    { L"Ryu Stage",     DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE,      ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE) },
    { L"Sagat Stage",   DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_STAGE_NODE,    ARRAYSIZE(SSF2T_A_SAGAT_STAGE_NODE) },
};

const sDescTreeNode SSF2T_A_UNITS_3C[] =
{
    { L"Balrog",      DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_BALROG_PORTRAIT_COLLECTION) },
    { L"Blanka",      DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_BLANKA_PORTRAIT_COLLECTION) },
    { L"Cammy",       DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_CAMMY_PORTRAIT_COLLECTION) },
    { L"Chun-Li",     DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Dee Jay",     DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAIT_COLLECTION) },
    { L"Dhalsim",     DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_PORTRAIT_COLLECTION,       ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"E. Honda",    DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_EHONDA_PORTRAIT_COLLECTION) },
    { L"Fei Long",    DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_PORTRAIT_COLLECTION,       ARRAYSIZE(SSF2T_A_FEILONG_PORTRAIT_COLLECTION) },
    { L"Guile",       DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_GUILE_PORTRAIT_COLLECTION) },
    { L"Ken",         DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_PORTRAIT_COLLECTION,           ARRAYSIZE(SSF2T_A_KEN_PORTRAIT_COLLECTION) },
    { L"M. Bison",    DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_PORTRAIT_COLLECTION,           ARRAYSIZE(SSF2T_A_RYU_PORTRAIT_COLLECTION) },
    { L"Sagat",       DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_SAGAT_PORTRAIT_COLLECTION) },
    { L"T-Hawk",      DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_THAWK_PORTRAIT_COLLECTION) },
    { L"Vega",        DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_VEGA_PORTRAIT_COLLECTION) },
    { L"Zangief",     DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION,       ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION) },
    { L"Stages",      DESC_NODETYPE_TREE, (void*)SSF2T_A_03_STAGES_COLLECTION,              ARRAYSIZE(SSF2T_A_03_STAGES_COLLECTION) },
};

constexpr auto SSF2T_A_NUM_IND_3C = ARRAYSIZE(SSF2T_A_UNITS_3C);
#define SSF2T_A_EXTRALOC_3C SSF2T_A_NUM_IND_3C

#define k_stNameKey_Bonus L"Bonus Palettes"

const sDescTreeNode SSF2T_A_UNITS_4A[SSF2T_A_NUM_IND_4A] =
{
    { L"Balrog",      DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_COLLECTION,     ARRAYSIZE(SSF2T_A_BALROG_COLLECTION) },
    { L"Blanka",      DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_COLLECTION,     ARRAYSIZE(SSF2T_A_BLANKA_COLLECTION) },
    { L"Cammy",       DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_COLLECTION,      ARRAYSIZE(SSF2T_A_CAMMY_COLLECTION) },
    { L"Chun-Li",     DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_COLLECTION,     ARRAYSIZE(SSF2T_A_CHUNLI_COLLECTION) },
    { L"Dee Jay",     DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_COLLECTION,     ARRAYSIZE(SSF2T_A_DEEJAY_COLLECTION) },
    { L"Dhalsim",     DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_COLLECTION,    ARRAYSIZE(SSF2T_A_DHALSIM_COLLECTION) },
    { L"E. Honda",    DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_COLLECTION,     ARRAYSIZE(SSF2T_A_EHONDA_COLLECTION) },
    { L"Fei Long",    DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_COLLECTION,    ARRAYSIZE(SSF2T_A_FEILONG_COLLECTION) },
    { L"Gouki",       DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_COLLECTION,      ARRAYSIZE(SSF2T_A_GOUKI_COLLECTION) },
    { L"Guile",       DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_COLLECTION,      ARRAYSIZE(SSF2T_A_GUILE_COLLECTION) },
    { L"Ken",         DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_COLLECTION,        ARRAYSIZE(SSF2T_A_KEN_COLLECTION) },
    { L"M. Bison",    DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_COLLECTION,     ARRAYSIZE(SSF2T_A_MBISON_COLLECTION) },
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_COLLECTION,        ARRAYSIZE(SSF2T_A_RYU_COLLECTION) },
    { L"Sagat",       DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_COLLECTION,      ARRAYSIZE(SSF2T_A_SAGAT_COLLECTION) },
    { L"T-Hawk",      DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_COLLECTION,      ARRAYSIZE(SSF2T_A_THAWK_COLLECTION) },
    { L"Vega",        DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_COLLECTION,       ARRAYSIZE(SSF2T_A_VEGA_COLLECTION) },
    { L"Zangief",     DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_COLLECTION,    ARRAYSIZE(SSF2T_A_ZANGIEF_COLLECTION) },
    { L"Stages",      DESC_NODETYPE_TREE, (void*)SSF2T_A_4A_STAGES_COLLECTION,    ARRAYSIZE(SSF2T_A_4A_STAGES_COLLECTION) },
    // We special-case handling this, so use a namekey
    { k_stNameKey_Bonus,    DESC_NODETYPE_TREE, (void*)SSF2T_A_04_BONUS_COLLECTION,      ARRAYSIZE(SSF2T_A_04_BONUS_COLLECTION) },
};

const sDescTreeNode SSF2T_A_UNITS_8[] =
{
    { L"Stages",            DESC_NODETYPE_TREE, (void*)SSF2T_A_STAGES_COLLECTION, ARRAYSIZE(SSF2T_A_STAGES_COLLECTION) },
    // We special-case handling this, so use a namekey
    { k_stNameKey_Bonus,    DESC_NODETYPE_TREE, (void*)SSF2T_A_08_BONUS_COLLECTION,      ARRAYSIZE(SSF2T_A_08_BONUS_COLLECTION) },
};

constexpr auto SSF2T_A_NUM_IND_8 = ARRAYSIZE(SSF2T_A_UNITS_8);
#define SSF2T_A_EXTRALOC_8 SSF2T_A_NUM_IND_8

// We extend this array with data groveled from the SSF2T-3Ce.txt or SSF2T-4Ae.txt extensible extras filc, if any.
const stExtraDef SSF2T_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
