#pragma once

// transparency color is the last color on cps2 graphics
// the first 2 bytes of a palette on ST is how many palette lines it has

constexpr auto MATH_SHIFT_03_TO_STEAM = 0x110AFC61;
constexpr auto MATH_SHIFT_04_TO_STEAM = 0x1112FC61;
constexpr auto MATH_SHIFT_08_TO_STEAM = 0x1132FC61;

const std::vector<uint16_t> SSF2T_A_IMGIDS_USED =
{
    indexSF2Sprites_Ryu,    // 0x00
    indexSF2Sprites_EHonda, // 0x01
    indexSF2Sprites_Blanka, // 0x02
    indexSF2Sprites_Guile,  // 0x03
    indexSF2Sprites_Ken,    // 0x04
    indexSF2Sprites_ChunLi, // 0x05
    indexSF2Sprites_Zangief, // 0x06
    indexSF2Sprites_Dhalsim, // 0x07
    indexSF2Sprites_Bison,  // 0x08
    indexSF2Sprites_Sagat,  // 0x09
    indexSF2Sprites_Balrog, // 0x0a
    indexSF2Sprites_Vega,   // 0x0b
    indexSF2Sprites_Cammy,  // 0x0c
    indexSF2Sprites_THawk,  // 0x0d
    indexSF2Sprites_FeiLong, // 0x0e
    indexSF2Sprites_DeeJay, // 0x0f
    indexSF2Sprites_Gouki,  // 0x10
    indexSF2Sprites_Bonus,  // 0x11
    indexSF2Sprites_Stages, // 0x12
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
    { L"Jab", 0x42e7c, 0x42e9c, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Jab Cape", 0x42e9c, 0x42ebc, indexSF2Sprites_Bison, 0x01 },
    { L"Jab Psycho Attacks", 0x42efc, 0x42f1c, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Jab Psycho Crusher", 0x42ebc, 0x42efc, indexSF2Sprites_Bison, 0x03  },
    //{ L"Jab Cape", 0x42e9c, 0x42ebc },
    //{ L"Jab Super Trail 1", 0x42ebc, 0x42edc, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 2", 0x42edc, 0x42efc, indexSF2Sprites_Bison },
    //{ L"Jab Super Trail 3", 0x42efc, 0x42f1c, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_STRONG[] =
{
    { L"Strong", 0x42f1e, 0x42f3e, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Strong Cape", 0x42f3e, 0x42f5e, indexSF2Sprites_Bison, 0x01 },
    { L"Strong Psycho Attacks", 0x42f9e, 0x42fbe, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Strong Psycho Crusher", 0x42f5e, 0x42f9e, indexSF2Sprites_Bison, 0x03 },
    //{ L"Strong Cape", 0x42f40 - 0x02, 0x42f60 - 0x02 },
    //{ L"Strong Super Trail 1", 0x42f60 - 0x02, 0x42f80 - 0x02, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 2", 0x42f80 - 0x02, 0x42fa0 - 0x02, indexSF2Sprites_Bison },
    //{ L"Strong Super Trail 3", 0x42fa0 - 0x02, 0x42fc0 - 0x02, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x42fc0, 0x42fe0, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Fierce Cape", 0x42fe0, 0x43000, indexSF2Sprites_Bison, 0x01 },
    { L"Fierce Psycho Attacks", 0x43040, 0x43060, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Fierce Psycho Crusher", 0x43000, 0x43040, indexSF2Sprites_Bison, 0x03 },
    //{ L"Fierce Cape", 0x42fe0, 0x43000 },
    //{ L"Fierce Super Trail 1", 0x43000, 0x43020, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 2", 0x43020, 0x43040, indexSF2Sprites_Bison },
    //{ L"Fierce Super Trail 3", 0x43040, 0x43060, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_SHORT[] =
{
    { L"Short", 0x43062, 0x43082, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Short Cape", 0x43082, 0x430a2, indexSF2Sprites_Bison, 0x01 },
    { L"Short Psycho Attacks", 0x430e2, 0x43102, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Short Psycho Crusher", 0x430a2, 0x430e2, indexSF2Sprites_Bison, 0x03 },
    //{ L"Short Cape", 0x43082, 0x430a2 },
    //{ L"Short Super Trail 1", 0x430a2, 0x430c2, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 2", 0x430c2, 0x430e2, indexSF2Sprites_Bison },
    //{ L"Short Super Trail 3", 0x430e2, 0x43102, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FORWARD[] =
{
    { L"Forward", 0x43104, 0x43124, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Forward Cape", 0x43124, 0x43144, indexSF2Sprites_Bison, 0x01 },
    { L"Forward Psycho Attacks", 0x43184, 0x431a4, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Forward Psycho Crusher", 0x43144, 0x43184, indexSF2Sprites_Bison, 0x03 },
    //{ L"Forward Cape", 0x43124, 0x43144 },
    //{ L"Forward Super Trail 1", 0x43144, 0x43164, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 2", 0x43164, 0x43184, indexSF2Sprites_Bison },
    //{ L"Forward Super Trail 3", 0x43184, 0x431a4, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x431a6, 0x431c6, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Roundhouse Cape", 0x431c6, 0x431e6, indexSF2Sprites_Bison, 0x01 },
    { L"Roundhouse Psycho Attacks", 0x43226, 0x43246, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Roundhouse Psycho Crusher", 0x431e6, 0x43226, indexSF2Sprites_Bison, 0x03 },
    //{ L"Roundhouse Cape", 0x431c6, 0x431e6 },
    //{ L"Roundhouse Super Trail 1", 0x431e6, 0x43206, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 2", 0x43206, 0x43226, indexSF2Sprites_Bison },
    //{ L"Roundhouse Super Trail 3", 0x43226, 0x43246, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_START[] =
{
    { L"Start", 0x43248, 0x43268, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Start Cape", 0x43268, 0x43288, indexSF2Sprites_Bison, 0x01 },
    { L"Start Psycho Attacks", 0x432c8, 0x432e8, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Start Psycho Crusher", 0x43288, 0x432c8, indexSF2Sprites_Bison, 0x03 },
    //{ L"Start Cape", 0x4326a - 0x02, 0x4328a - 0x02 },
    //{ L"Start Super Trail 1", 0x4328a - 0x02, 0x432aa - 0x02, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 2", 0x432aa - 0x02, 0x432ca - 0x02, indexSF2Sprites_Bison },
    //{ L"Start Super Trail 3", 0x432ca - 0x02, 0x432ea - 0x02, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_HOLD[] =
{
    { L"Hold", 0x432ea, 0x4330a, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Hold Cape", 0x4330a, 0x4332a, indexSF2Sprites_Bison, 0x01 },
    { L"Hold Psycho Attacks", 0x4336a, 0x4338a, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Hold Psycho Crusher", 0x4332a, 0x4336a, indexSF2Sprites_Bison, 0x03 },
    //{ L"Hold Cape", 0x4330a, 0x4332c },
    //{ L"Hold Super Trail 1", 0x4332a, 0x4334a, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 2", 0x4334a, 0x4336a, indexSF2Sprites_Bison },
    //{ L"Hold Super Trail 3", 0x4336a, 0x4338a, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x4338c, 0x433ac, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Old 1P Cape", 0x433ac, 0x433cc, indexSF2Sprites_Bison, 0x01 },
    { L"Old 1P Psycho Attacks", 0x4340c, 0x4342c, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Old 1P Psycho Crusher", 0x433cc, 0x4340c, indexSF2Sprites_Bison, 0x03 },
    //{ L"Old 1P Cape", 0x433ac, 0x433cc },
    //{ L"Old 1P Super Trail 1", 0x433cc, 0x433ec, indexSF2Sprites_Bison },
    //{ L"Old 1P Super Trail 2", 0x433ec, 0x4340c, indexSF2Sprites_Bison },
    //{ L"Old 1P Super Trail 3", 0x4340c, 0x4342c, indexSF2Sprites_Bison },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x4342e, 0x4344e, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Old 2P Cape", 0x4344e, 0x4346e, indexSF2Sprites_Bison, 0x01 },
    { L"Old 2P Psycho Attacks", 0x434ae, 0x434ce, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Old 2P Psycho Crusher", 0x4346e, 0x434ae, indexSF2Sprites_Bison, 0x03 },
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
    { L"Jab Tiger Shot", 0x4350a - 0x02, 0x4352a - 0x02, indexSF2Sprites_Sagat, 0x1 },
    { L"Jab Super Trail 1", 0x4352a - 0x02, 0x4354a - 0x02, indexSF2Sprites_Sagat },
    { L"Jab Super Trail 2", 0x4354a - 0x02, 0x4356a - 0x02, indexSF2Sprites_Sagat },
    { L"Jab Super Trail 3", 0x4356a - 0x02, 0x4358a - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_STRONG[] =
{
    { L"Strong", 0x4358a, 0x435aa, indexSF2Sprites_Sagat },
    { L"Strong Tiger Shot", 0x435aa, 0x435ca, indexSF2Sprites_Sagat, 0x1 },
    { L"Strong Super Trail 1", 0x435ca, 0x435ea, indexSF2Sprites_Sagat },
    { L"Strong Super Trail 2", 0x435ea, 0x4360a, indexSF2Sprites_Sagat },
    { L"Strong Super Trail 3", 0x4360a, 0x4362a, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FIERCE[] =
{
    { L"Fierce", 0x4362c, 0x4364c, indexSF2Sprites_Sagat },
    { L"Fierce Tiger Shot", 0x4364c, 0x4366c, indexSF2Sprites_Sagat, 0x1 },
    { L"Fierce Super Trail 1", 0x4366c, 0x4368c, indexSF2Sprites_Sagat },
    { L"Fierce Super Trail 2", 0x4368c, 0x436ac, indexSF2Sprites_Sagat },
    { L"Fierce Super Trail 3", 0x436ac, 0x436cc, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_SHORT[] =
{
    { L"Short", 0x436d0 - 0x02, 0x436f0 - 0x02, indexSF2Sprites_Sagat },
    { L"Short Tiger Shot", 0x436f0 - 0x02, 0x43710 - 0x02, indexSF2Sprites_Sagat, 0x1 },
    { L"Short Super Trail 1", 0x43710 - 0x02, 0x43730 - 0x02, indexSF2Sprites_Sagat },
    { L"Short Super Trail 2", 0x43730 - 0x02, 0x43750 - 0x02, indexSF2Sprites_Sagat },
    { L"Short Super Trail 3", 0x43750 - 0x02, 0x43770 - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FORWARD[] =
{
    { L"Forward", 0x43770, 0x43790, indexSF2Sprites_Sagat },
    { L"Forward Tiger Shot", 0x43790, 0x437b0, indexSF2Sprites_Sagat, 0x1 },
    { L"Forward Super Trail 1", 0x437b0, 0x437d0, indexSF2Sprites_Sagat },
    { L"Forward Super Trail 2", 0x437d0, 0x437f0, indexSF2Sprites_Sagat },
    { L"Forward Super Trail 3", 0x437f0, 0x43810, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE[] =
{
    { L"Roundhouse", 0x43812, 0x43832, indexSF2Sprites_Sagat },
    { L"Roundhouse Tiger Shot", 0x43832, 0x43852, indexSF2Sprites_Sagat, 0x1 },
    { L"Roundhouse Super Trail 1", 0x43852, 0x43872, indexSF2Sprites_Sagat },
    { L"Roundhouse Super Trail 2", 0x43872, 0x43892, indexSF2Sprites_Sagat },
    { L"Roundhouse Super Trail 3", 0x43892, 0x438b2, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_START[] =
{
    { L"Start", 0x438b4, 0x438d4, indexSF2Sprites_Sagat },
    { L"Start Tiger Shot", 0x438d4, 0x438f4, indexSF2Sprites_Sagat, 0x1 },
    { L"Start Super Trail 1", 0x438f4, 0x43914, indexSF2Sprites_Sagat },
    { L"Start Super Trail 2", 0x43914, 0x43934, indexSF2Sprites_Sagat },
    { L"Start Super Trail 3", 0x43934, 0x43954, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_HOLD[] =
{
    { L"Hold", 0x43956, 0x43976, indexSF2Sprites_Sagat },
    { L"Hold Tiger Shot", 0x43976, 0x43996, indexSF2Sprites_Sagat, 0x1 },
    { L"Hold Super Trail 1", 0x43996, 0x439b6, indexSF2Sprites_Sagat },
    { L"Hold Super Trail 2", 0x439b6, 0x439d6, indexSF2Sprites_Sagat },
    { L"Hold Super Trail 3", 0x439d6, 0x439f6, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD1P[] =
{
    { L"Old 1P", 0x439fa - 0x02, 0x43a1a - 0x02, indexSF2Sprites_Sagat },
    { L"Old 1P Tiger Shot", 0x43a1a - 0x02, 0x43a3a - 0x02, indexSF2Sprites_Sagat, 0x1 },
    { L"Old 1P Super Trail 1", 0x43a3a - 0x02, 0x43a5a - 0x02, indexSF2Sprites_Sagat },
    { L"Old 1P Super Trail 2", 0x43a5a - 0x02, 0x43a7a - 0x02, indexSF2Sprites_Sagat },
    { L"Old 1P Super Trail 3", 0x43a7a - 0x02, 0x43a9a - 0x02, indexSF2Sprites_Sagat },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD2P[] =
{
    { L"Old 2P", 0x43a9a, 0x43aba, indexSF2Sprites_Sagat },
    { L"Old 2P Tiger Shot", 0x43aba, 0x43ada, indexSF2Sprites_Sagat, 0x1 },
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
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_RYU_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_START,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_EHONDA_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_START,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_BLANKA_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_START,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_GUILE_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_GUILE_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_START,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_KEN_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_KEN_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_START,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_CHUNLI_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_START,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_ZANGIEF_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_DHALSIM_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_START,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_MBISON_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_MBISON_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_START,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_SAGAT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_START,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_BALROG_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BALROG_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_START,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_VEGA_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_VEGA_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_VEGA_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_VEGA_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_START,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_VEGA_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_CAMMY_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_START,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_THAWK_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_THAWK_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_THAWK_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_THAWK_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_START,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_THAWK_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_FEILONG_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_START,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_DEEJAY_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_START,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD2P) },
};

const sDescTreeNode SSF2T_A_GOUKI_COLLECTION[] =
{
    { L"P1 Color",    DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P1COLOR,     ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P1COLOR) },
    { L"P2 Color",    DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P2COLOR,     ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P2COLOR) },
};

const sGame_PaletteDataset SSF2T_A_BONUS_NODE_03[] =
{
    { L"Character Select icons", 0xF1DA, 0xf3da, indexSF2Sprites_Bonus, 0x23 },
};

const sGame_PaletteDataset SSF2T_A_BONUS_BONUS_NODE_04[] =
{
    { L"Insert Coin Ryu Stage",                 0x53e3c, 0x53e5c },
    { L"Ryu Ending (Ryu walking)",              0x5987a, 0x5989a },
    { L"Ken Portrait 2",                        0x5c8ba, 0x5c9ba },
    { L"Cammy End Portrait 2",                  0x5c63a, 0x5c81a },
    { L"M.Bison Ending Portrait Fingers 1/3",   0x4a432, 0x4a452 },
    { L"M.Bison Ending Portrait Fingers 2/3",   0x4a478, 0x4a498 },
    { L"M.Bison Ending Portrait Fingers 3/3",   0x4a4be, 0x4a4de },
    { L"M.Bison Ending Portrait Body 1/3",      0x4a454, 0x4a474 },
    { L"M.Bison Ending Portrait Body 2/3",      0x4a49a, 0x4a4ba },
    { L"M.Bison Ending Portrait Body 3/3",      0x4a4e0, 0x4a500 },
    { L"Vega Ending Portrait 1",                0x5a4fa, 0x5a57a },
    { L"Vega Ending Portrait 2",                0x5a5da, 0x5a61a },
    { L"M.Bison Ending 2",                      0x5c3da, 0x5c4ba },
};

const sGame_PaletteDataset SSF2T_A_08_BONUS_NODE[] =
{
    { L"Intro Ryu Part 1", 0x6d0be, 0x6d1fe, indexSF2Sprites_Bonus, 0x31 },
    { L"Intro Ryu Part 2", 0x6d2be, 0x6d37e, indexSF2Sprites_Bonus, 0x32 },
    { L"Intro Ryu Part 3", 0x6d3be, 0x6d3de },
    { L"Intro Ryu Part 4", 0x755de, 0x755fe, indexSF2Sprites_Bonus, 0x33 },

    { L"Blue SUPER Text", 0x7561e, 0x7565e },
    { L"Yellow Flash SUPER Text Part 1", 0x7555e, 0x755de },
    { L"Yellow Flash SUPER Text Part 2", 0x7565e, 0x757fe },
    { L"Intro Ryu Hadouken Blast", 0x6d27e, 0x6d29e },

    { L"Character Select Background (1/2)", 0x743fe, 0x7441e, indexSF2Sprites_Bonus, 0x1c, &pairNext },
    { L"Character Select Background (2/2)", 0x7443e, 0x7445e, indexSF2Sprites_Bonus, 0x1d },
    { L"Vs Background", 0x74b1e, 0x74b3e, indexSF2Sprites_Bonus, 0x21 },

    { L"Super KO 1", 0x77020 - 0x02, 0x77040 - 0x02 },
    { L"Super KO 2", 0x77040 - 0x02, 0x77060 - 0x02 },
    { L"Super KO 3", 0x77060 - 0x02, 0x77080 - 0x02 },
    { L"Super KO 4", 0x77080 - 0x02, 0x770A0 - 0x02 },
    { L"Super KO 5", 0x770A0 - 0x02, 0x770C0 - 0x02 },
    { L"Super KO 6", 0x770C0 - 0x02, 0x770E0 - 0x02 },
    { L"Super KO 7", 0x770E0 - 0x02, 0x77100 - 0x02 },
    { L"Super KO 8", 0x77100 - 0x02, 0x77120 - 0x02 },
    { L"Super KO 9", 0x77120 - 0x02, 0x77140 - 0x02 },
    { L"Super KO 10", 0x77140 - 0x02, 0x77160 - 0x02 },
    { L"Super KO 11", 0x77160 - 0x02, 0x77180 - 0x02 },
    { L"Super KO 12", 0x77180 - 0x02, 0x771A0 - 0x02 },
    { L"Super KO 13", 0x771A0 - 0x02, 0x771C0 - 0x02 },
    { L"Super KO 14", 0x771C0 - 0x02, 0x771E0 - 0x02 },
    { L"Super KO 15", 0x771E0 - 0x02, 0x77200 - 0x02 },

    { L"World Tour Huds", 0x745fe, 0x747fe },
    { L"Ryu Ending Portrait 1 Winners Poster", 0x6d7fe, 0x6d81e },
    { L"Ryu Ending Portrait 2", 0x6d81e, 0x6d83e },
    { L"Ryu Ending Foreground", 0x75c40, 0x75c60 },
    { L"Ryu Ending 1 Bg", 0x75c60, 0x75c80 },
    { L"Ryu Ending Portrait Sunset Bg", 0x6d840, 0x6d860 },
    { L"Cammy Ending 1 Section (Delta Red)", 0x6e000, 0x6e020 },
    { L"M.Bison Ending Fade In", 0x6e5fe, 0x6e61e },
};

const sGame_PaletteDataset SSF2T_A_BONUS_NODE_04[] =
{
    { L"Akuma Intro",                   0x5bf5a, 0x5bf7a, indexSF2Sprites_Bonus, 0x01 },
    { L"Chun-Li Intro",                 0x5bf7a, 0x5c09a, indexSF2Sprites_Bonus, 0x02 },
    { L"Cammy Intro",                   0x5be5a, 0x5bf5a, indexSF2Sprites_Bonus, 0x00 },

    { L"Intro Ryu Part 5",              0x5917a, 0x5919a, indexSF2Sprites_Bonus, 0x34 },
    { L"Intro Ryu Part 6",              0x5919a, 0x591BA },

    { L"Intro Ryu Charging Hadouken",   0x591da, 0x591fa },
};

const sGame_PaletteDataset SSF2T_A_BONUS_TITLESCREEN_NODE_04[] =
{
    { L"Title Screen \"X\"",            0x59098, 0x590b8, indexSF2Sprites_Bonus, 0x20, &pairFullyLinkedNode },
    { L"Street Fighter II Text",        0x5921a, 0x5923a, indexSF2Sprites_Bonus, 0x1f },
    { L"Grand Master Challenge Text",   0x5915a, 0x5917a, indexSF2Sprites_Bonus, 0x1e },
    // this is now "charging hadouken" { L"Title Screen Lightning", 0x591da, 0x591fa },
};

const sGame_PaletteDataset SSF2T_A_BONUS_SUPERTRAILS_NODE_04[] =
{
    { L"Japan (Ryu's Stage)", 0x540da, 0x5413a },
    { L"Japan (E.Honda's Stage)", 0x544da, 0x5453a },
    { L"Brazil (Blanka's Stage)", 0x548da, 0x5493a },
    { L"USA (Guile's Stage)", 0x54cda, 0x54d3a },
    { L"USA (Ken's Stage)", 0x550da, 0x5513a },
    { L"China (Chun-Li's Stage)", 0x554da, 0x5553a },
    { L"USSR (Zangief's Stage)", 0x558da, 0x5593a },
    { L"India (Dhalsim's Stage)", 0x55cda, 0x55d3a },
    { L"Thailand (M.Bison's Stage)", 0x560da, 0x5613a },
    { L"Thailand (Sagat's Stage)", 0x564da, 0x5653a },
    { L"USA (Balrog's Stage)", 0x568da, 0x5693a },
    { L"Spain (Vega's Stage)", 0x56cda, 0x56d3a },
    { L"England (Cammy's Stage)", 0x570da, 0x5713a },
    { L"Mexico (T.Hawk's Stage)", 0x574da, 0x5753a },
    { L"Hong Kong (Fei Long's Stage)", 0x578da, 0x5793a },
    { L"Jamaica (Dee Jay's Stage)", 0x57cda, 0x57d3a },
};

const sGame_PaletteDataset SSF2T_A_STAGEHUD_NODE_04[] =
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

const sGame_PaletteDataset SSF2T_A_BALROG_STAGE_NODE_03[] =
{
    { L"Nin Nin Hall Sign (animation cycle 1/3)", 0x58ed2, 0x58ef2, indexSF2Sprites_Stages, 0x19 },
    { L"Nin Nin Hall Sign (animation cycle 2/3)", 0x58ef2, 0x58f12, indexSF2Sprites_Stages, 0x19 },
    { L"Nin Nin Hall Sign (animation cycle 3/3)", 0x58f12, 0x58f32, indexSF2Sprites_Stages, 0x19 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_STAGE_NODE_04[] =
{
    { L"Girls & Nin Nin Hall Sign", 0x5697a, 0x56a5a, indexSF2Sprites_Stages, 0x1b, &pairNext },
    { L"Casino Sign cycle 1/6", 0x4a360, 0x4a380, indexSF2Sprites_Stages, 0x1a },
    { L"Casino Sign cycle 2/6", 0x4a384, 0x4a3a4, indexSF2Sprites_Stages, 0x1a },
    { L"Casino Sign cycle 3/6", 0x4a3a8, 0x4a3c8, indexSF2Sprites_Stages, 0x1a },
    { L"Casino Sign cycle 4/6", 0x4a3cc, 0x4a3ec, indexSF2Sprites_Stages, 0x1a },
    { L"Casino Sign cycle 5/6", 0x4a3f0, 0x4a410, indexSF2Sprites_Stages, 0x1a },
    { L"Casino Sign cycle 6/6", 0x4a33c, 0x4a35c, indexSF2Sprites_Stages, 0x1a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_STAGE_NODE_08[] =
{
    { L"Wedding Chapel background 1/2", 0x628de, 0x6295e, indexSF2Sprites_Stages, 0x1d, &pairFullyLinkedNode },
    // We only have coverage for one line here
    { L"Wedding Chapel background 2/2", 0x62A9e, 0x62B5e, indexSF2Sprites_Stages, 0x1e },
    //{ L"Unused? 1/5", 0x62Abe, 0x62ade },
    //{ L"Unused? 2/5", 0x62Ade, 0x62afe },
    //{ L"Unused? 3/5", 0x62Afe, 0x62B1e },
    //{ L"Unused? 4/5", 0x62b1e, 0x62B3e },
    //{ L"Unused? 5/5", 0x62b3e, 0x62B5e },

    { L"Street", 0x627fe, 0x6281e, indexSF2Sprites_Stages, 0x25 },
    // This also should be chopped up: there's multiple animation cycles here
    { L"Casino signs", 0x6A91e, 0x6aabe, indexSF2Sprites_Stages, 0x1f },
    // This also should be chopped up: there's multiple animation cycles here
    { L"Ground / casinos", 0x6aade, 0x6abfe, indexSF2Sprites_Stages, 0x20 },
    { L"Cars / people", 0x72C7e, 0x72dfe, indexSF2Sprites_Stages, 0x21 },
    { L"Guy's torso", 0x72e7e, 0x72e9e, indexSF2Sprites_Stages, 0x22 },
    { L"Green car hood", 0x72efe, 0x72f1e, indexSF2Sprites_Stages, 0x23 },
    { L"Blue car hood", 0x72f3e, 0x72f5e, indexSF2Sprites_Stages, 0x24 },
    { L"Unused? 1/2", 0x72f5e, 0x72f7e },
    { L"Unused? 2/2", 0x72fbe, 0x72fde  },
    // This also should be chopped up: there's multiple animation cycles here
    { L"Side casino signs", 0x6A7Fe, 0x6A8Fe, indexSF2Sprites_Stages, 0x1c },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_STAGE_NODE_04[] =
{
    { L"Fish and feet", 0x5493a, 0x54a3a, indexSF2Sprites_Stages, 0x26 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_STAGE_NODE_08[] =
{
    { L"Blanka Stage 1/6", 0x607de, 0x6083e, indexSF2Sprites_Stages, 0xab, &pairFullyLinkedNode },

    { L"Blanka Stage 2/6", 0x687fe, 0x6895e, indexSF2Sprites_Stages, 0xac },

    { L"Blanka Stage 3/6 left water sparkle 1/3", 0x689fe, 0x68a1e, indexSF2Sprites_Stages, 0xad },
        { L"Blanka Stage 3/6 left water sparkle 2/3", 0x68a1e, 0x68a3e, indexSF2Sprites_Stages, 0xad },
        { L"Blanka Stage 3/6 left water sparkle 3/3", 0x68a3e, 0x68a5e, indexSF2Sprites_Stages, 0xad },

    { L"Blanka Stage 4/6 right water sparkle 1/4", 0x68a5e, 0x68a7e, indexSF2Sprites_Stages, 0x27 },
        { L"Blanka Stage 4/6 right water sparkle 2/4", 0x68a7e, 0x68a9e, indexSF2Sprites_Stages, 0x27 },
        { L"Blanka Stage 4/6 right water sparkle 3/4", 0x68a9e, 0x68abe, indexSF2Sprites_Stages, 0x27 },
        { L"Blanka Stage 4/6 right water sparkle 4/4", 0x68abe, 0x68ade, indexSF2Sprites_Stages, 0x27 },

    { L"Blanka Stage 5/6 tree and right side stuff", 0x70bfe, 0x70dfe, indexSF2Sprites_Stages, 0x28 },

    { L"Blanka Stage 6/6", 0x70dfe, 0x70e3e, indexSF2Sprites_Stages, 0xae },
};

const sGame_PaletteDataset SSF2T_A_GUILE_STAGE_NODE_04[] =
{
    { L"Fin and box", 0x54d3a, 0x54e3a, indexSF2Sprites_Stages, 0x94 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_STAGE_NODE_08[] =
{
    { L"Guile Stage 1/8", 0x60bfe, 0x60cde, indexSF2Sprites_Stages, 0x95, &pairFullyLinkedNode },

    { L"Guile Stage 2/8", 0x68bfe, 0x68cde, indexSF2Sprites_Stages, 0x96 },
    { L"Guile Stage 3/8 ground tiles", 0x68cde, 0x68d1e, indexSF2Sprites_Stages, 0x97 },
    { L"Guile Stage 4/8 plane bits", 0x68d3e, 0x68d5e, indexSF2Sprites_Stages, 0x98 },
    { L"Guile Stage 5/8 sky", 0x68dfe, 0x68e1e, indexSF2Sprites_Stages, 0x99 },

    { L"Guile Stage 6/8", 0x70ffe, 0x7107e, indexSF2Sprites_Stages, 0x9a },
    { L"Guile Stage 7/8", 0x7107e, 0x711be, indexSF2Sprites_Stages, 0x9b },
    { L"Guile Stage 8/8 stereo", 0x713be, 0x713fe, indexSF2Sprites_Stages, 0x9c },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_STAGE_NODE_04[] =
{
    { L"Blue Biker", 0x555da, 0x555fa, indexSF2Sprites_Stages, 0x29, &pairFullyLinkedNode },
    { L"Green Biker", 0x555fa, 0x5561a, indexSF2Sprites_Stages, 0x2a },
    { L"Red Biker", 0x5561a, 0x5563a, indexSF2Sprites_Stages, 0x2b },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_STAGE_NODE_08[] =
{
    { L"Chun-Li's Stage 1/5", 0x717fe, 0x7195e, indexSF2Sprites_Stages, 0x2c, &pairFullyLinkedNode },
    { L"Chun-Li's Stage 2/5", 0x719fe, 0x71a1e, indexSF2Sprites_Stages, 0x2d },
    { L"Chun-Li's Stage 3/5", 0x693fe, 0x695fe, indexSF2Sprites_Stages, 0x2e },
    { L"Chun-Li's Stage 4/5", 0x695fe, 0x6979e, indexSF2Sprites_Stages, 0x2f },
    { L"Chun-Li's Stage 5/5", 0x697de, 0x697fe, indexSF2Sprites_Stages, 0x30 },
};

const sGame_PaletteDataset SSF2T_A_GIEF_STAGE_NODE_04[] =
{
    { L"Chain and extinguisher", 0x5599a, 0x559da, indexSF2Sprites_Stages, 0xa6 },
};

const sGame_PaletteDataset SSF2T_A_GIEF_STAGE_NODE_08[] =
{
    { L"Zangief's Stage 1/4", 0x71bfe, 0x71d9e, indexSF2Sprites_Stages, 0xa7, &pairFullyLinkedNode },
    { L"Zangief's Stage 2/4", 0x697fe, 0x6995e, indexSF2Sprites_Stages, 0xa8 },
    { L"Zangief's Stage 3/4", 0x69a5e, 0x69bfe, indexSF2Sprites_Stages, 0xa9 },
    { L"Zangief's Stage 4/4", 0x617de, 0x6185e, indexSF2Sprites_Stages, 0xaa },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_STAGE_NODE_04[] =
{
    { L"Left gazebo 1/39", 0x49208, 0x49228, indexSF2Sprites_Stages, 0x44, &pairFullyLinkedNode },
    { L"Left gazebo 2/39", 0x49208 + (0x01 * 0x22), 0x49228 + (0x01 * 0x22), indexSF2Sprites_Stages, 0x45 },
        { L"Unused: Left gazebo 3/39", 0x49208 + (0x02 * 0x22), 0x49228 + (0x02 * 0x22) },
    { L"Left gazebo 4/39", 0x49208 + (0x03 * 0x22), 0x49228 + (0x03 * 0x22), indexSF2Sprites_Stages, 0x46 },
    { L"Left gazebo 5/39", 0x49208 + (0x04 * 0x22), 0x49228 + (0x04 * 0x22), indexSF2Sprites_Stages, 0x47 },
    { L"Left gazebo 6/39", 0x49208 + (0x05 * 0x22), 0x49228 + (0x05 * 0x22), indexSF2Sprites_Stages, 0x48 },
    { L"Left gazebo 7/39", 0x49208 + (0x06 * 0x22), 0x49228 + (0x06 * 0x22), indexSF2Sprites_Stages, 0x49 },
    { L"Left gazebo 8/39", 0x49208 + (0x07 * 0x22), 0x49228 + (0x07 * 0x22), indexSF2Sprites_Stages, 0x4a },
    { L"Left gazebo 9/39", 0x49208 + (0x08 * 0x22), 0x49228 + (0x08 * 0x22), indexSF2Sprites_Stages, 0x4b },
    { L"Left gazebo 10/39", 0x49208 + (0x09 * 0x22), 0x49228 + (0x09 * 0x22), indexSF2Sprites_Stages, 0x4c },
    { L"Left gazebo 11/39", 0x49208 + (0x0a * 0x22), 0x49228 + (0x0a * 0x22), indexSF2Sprites_Stages, 0x4d },
    { L"Left gazebo 12/39", 0x49208 + (0x0b * 0x22), 0x49228 + (0x0b * 0x22), indexSF2Sprites_Stages, 0x4e },
    { L"Left gazebo 13/39", 0x49208 + (0x0c * 0x22), 0x49228 + (0x0c * 0x22), indexSF2Sprites_Stages, 0x4f },
        { L"Unused: Left gazebo 14/39", 0x49208 + (0x0d * 0x22), 0x49228 + (0x0d * 0x22) },
        { L"Unused: Left gazebo 15/39", 0x49208 + (0x0e * 0x22), 0x49228 + (0x0e * 0x22) },
    { L"Left gazebo 16/39", 0x49208 + (0x0f * 0x22), 0x49228 + (0x0f * 0x22), indexSF2Sprites_Stages, 0x50 },
        { L"Unused: Left gazebo 17/39", 0x49208 + (0x10 * 0x22), 0x49228 + (0x10 * 0x22) },
        { L"Unused: Left gazebo 18/39", 0x49208 + (0x11 * 0x22), 0x49228 + (0x11 * 0x22) },
        { L"Unused: Left gazebo 19/39", 0x49208 + (0x12 * 0x22), 0x49228 + (0x12 * 0x22) },
        { L"Unused: Left gazebo 20/39", 0x49208 + (0x13 * 0x22), 0x49228 + (0x13 * 0x22) },
        { L"Unused: Left gazebo 21/39", 0x49208 + (0x14 * 0x22), 0x49228 + (0x14 * 0x22) },
        { L"Unused: Left gazebo 22/39", 0x49208 + (0x15 * 0x22), 0x49228 + (0x15 * 0x22) },
        { L"Unused: Left gazebo 23/39", 0x49208 + (0x16 * 0x22), 0x49228 + (0x16 * 0x22) },
        { L"Unused: Left gazebo 24/39", 0x49208 + (0x17 * 0x22), 0x49228 + (0x17 * 0x22) },
        { L"Unused: Left gazebo 25/39", 0x49208 + (0x18 * 0x22), 0x49228 + (0x18 * 0x22) },
        { L"Unused: Left gazebo 26/39", 0x49208 + (0x19 * 0x22), 0x49228 + (0x19 * 0x22) },
        { L"Unused: Left gazebo 27/39", 0x49208 + (0x1a * 0x22), 0x49228 + (0x1a * 0x22) },
        { L"Unused: Left gazebo 28/39", 0x49208 + (0x1b * 0x22), 0x49228 + (0x1b * 0x22) },
        { L"Unused: Left gazebo 29/39", 0x49208 + (0x1c * 0x22), 0x49228 + (0x1c * 0x22) },
        { L"Unused: Left gazebo 30/39", 0x49208 + (0x1d * 0x22), 0x49228 + (0x1d * 0x22) },
    { L"Left gazebo 31/39", 0x49208 + (0x1e * 0x22), 0x49228 + (0x1e * 0x22), indexSF2Sprites_Stages, 0x51 },
        { L"Unused: Left gazebo 32/39", 0x49208 + (0x1f * 0x22), 0x49228 + (0x1f * 0x22) },
        { L"Unused: Left gazebo 33/39", 0x49208 + (0x20 * 0x22), 0x49228 + (0x20 * 0x22) },
        { L"Unused: Left gazebo 34/39", 0x49208 + (0x21 * 0x22), 0x49228 + (0x21 * 0x22) },
        { L"Unused: Left gazebo 35/39", 0x49208 + (0x22 * 0x22), 0x49228 + (0x22 * 0x22) },
        { L"Unused: Left gazebo 36/39", 0x49208 + (0x23 * 0x22), 0x49228 + (0x23 * 0x22) },
        { L"Unused: Left gazebo 37/39", 0x49208 + (0x24 * 0x22), 0x49228 + (0x24 * 0x22) },
        { L"Unused: Left gazebo 38/39", 0x49208 + (0x25 * 0x22), 0x49228 + (0x25 * 0x22) },
        { L"Unused: Left gazebo 39/39", 0x49208 + (0x26 * 0x22), 0x49228 + (0x26 * 0x22) },
    { L"Dancers", 0x57d3a, 0x57e3a, indexSF2Sprites_Stages, 0x43 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_STAGE_NODE_08[] =
{
    { L"Dee Jay Stage Sky And Mid Foreground", 0x63bfe, 0x63cbe, indexSF2Sprites_Stages, 0x52, &pairFullyLinkedNode },
    { L"Dee Jay Stage Front Water 1/5", 0x63dfe, 0x63e1e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 2/5", 0x63e1e, 0x63e3e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 3/5", 0x63e3e, 0x63e5e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 4/5", 0x63e5e, 0x63e7e, indexSF2Sprites_Stages, 0x53 },
        { L"Dee Jay Stage Front Water 5/5", 0x63e7e, 0x63e9e, indexSF2Sprites_Stages, 0x53 },
    { L"Dee Jay Stage BG Water 1/5", 0x63ebe, 0x63ede, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 2/5", 0x63ede, 0x63efe, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 3/5", 0x63efe, 0x63f1e, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 4/5", 0x63f1e, 0x63f3e, indexSF2Sprites_Stages, 0x54 },
        { L"Dee Jay Stage BG Water 5/5", 0x63f3e, 0x63f5e, indexSF2Sprites_Stages, 0x54 },
    { L"Dee Jay Stage Gazebo and palm trees", 0x73ffe, 0x7407e, indexSF2Sprites_Stages, 0x55 },

    { L"Dee Jay Stage Grass right gazebo and people 1/2", 0x6bdbe, 0x6bfbe, indexSF2Sprites_Stages, 0x56 },
    { L"Dee Jay Stage Grass right gazebo and people 2/2", 0x6bfbe, 0x6bffe, indexSF2Sprites_Stages, 0x57 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_STAGE_NODE_04[] =
{
    { L"Birds", 0x5759a, 0x575ba, indexSF2Sprites_Stages, 0xaf, &pairNext },
    { L"Feet cycle 1/3", 0x575ba, 0x575da, indexSF2Sprites_Stages, 0xb0 },
    { L"Feet cycle 2/3", 0x575da, 0x575fa, indexSF2Sprites_Stages, 0xb0 },
    { L"Feet cycle 3/3", 0x575fa, 0x5761a, indexSF2Sprites_Stages, 0xb0 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_STAGE_NODE_08[] =
{
    { L"T-Hawk Stage 1/4 background", 0x633fe, 0x6357e, indexSF2Sprites_Stages, 0xa2, &pairFullyLinkedNode },
    { L"T-Hawk Stage 2/4 market and people", 0x737fe, 0x7393e, indexSF2Sprites_Stages, 0xa3 },
    { L"T-Hawk Stage 3/4 NPCs and ground 1/2", 0x6b3fe, 0x6b5fe, indexSF2Sprites_Stages, 0xa4 },
    { L"T-Hawk Stage 4/4 NPCs 2/2", 0x6b5fe, 0x6b79e, indexSF2Sprites_Stages, 0xa5 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_STAGE_NODE_04[] =
{
    { L"Dragon", 0x5797a, 0x579da, indexSF2Sprites_Stages, 0x8f },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_STAGE_NODE_08[] =
{
    { L"Fei Long Stage 1/4 background 1/2", 0x73bfe, 0x73dfe, indexSF2Sprites_Stages, 0x90, &pairFullyLinkedNode },
    { L"Fei Long Stage 2/4 background 2/2", 0x73dfe, 0x73ffe, indexSF2Sprites_Stages, 0x91 },
    { L"Fei Long Stage 3/4 tree", 0x637fe, 0x638de, indexSF2Sprites_Stages, 0x92 },
    { L"Fei Long Stage 4/4 ring ", 0x6b7fe, 0x6b83e, indexSF2Sprites_Stages, 0x93 },
};

const sGame_PaletteDataset SSF2T_A_RYU_STAGE_NODE_04[] =
{
    { L"Background Castle", 0x541Da, 0x5423a, indexSF2Sprites_Stages, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_RYU_STAGE_NODE_08[] =
{
    { L"Sky",           0x603c0 - 0x02, 0x603e0 - 0x02, indexSF2Sprites_Stages, 0x08, &pairFullyLinkedNode },
    { L"Wall",          0x70400 - 0x02, 0x704a0 - 0x02, indexSF2Sprites_Stages, 0x09 },
    { L"Foreground",    0x68000 - 0x02, 0x68120 - 0x02, indexSF2Sprites_Stages, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_STAGE_NODE_04[] =
{
    { L"Bird Castle Entrance", 0x5717a, 0x5723a, indexSF2Sprites_Stages, 0x13 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_STAGE_NODE_08[] =
{
    { L"Cammy Town BG", 0x73400 - 0x02, 0x73600 - 0x02, indexSF2Sprites_Stages, 0x0e, &pairFullyLinkedNode },
    { L"Cammy Town BG - mansions", 0x73600 - 0x02, 0x73800 - 0x02, indexSF2Sprites_Stages, 0x0d },
    { L"Cammy Bridge", 0x6B000 - 0x02, 0x6B200 - 0x02, indexSF2Sprites_Stages, 0x10 },
    { L"Cammy Sky", 0x6B200 - 0x02, 0x6B400 - 0x02, indexSF2Sprites_Stages, 0x0f },
    { L"Cammy Castle", 0x63000 - 0x02, 0x63200 - 0x02, indexSF2Sprites_Stages, 0x12 },
    { L"Cammy Castle", 0x63200 - 0x02, 0x63400 - 0x02, indexSF2Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_STAGE_NODE_03[] =
{
    { L"front elephant, legs/shadow", 0x61C20, 0x61C20 + 0x20 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_STAGE_NODE_04[] =
{
    { L"left vase and right vase", 0x55DFC, 0x55E1C + 0x20, indexSF2Sprites_Stages, 0x58 },
    //{ L"right vase", 0x55E1C, 0x55E1C + 0x20 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_STAGE_NODE_08[] =
{
    { L"BG wall painting",                                      0x69bfe + (0x00 * 0x20), 0x69bfe + (0x01 * 0x20), indexSF2Sprites_Stages, 0x59, &pairFullyLinkedNode },
    { L"BG curtains + lamp",                                    0x69bfe + (0x01 * 0x20), 0x69bfe + (0x02 * 0x20), indexSF2Sprites_Stages, 0x5a },
    { L"BG columns",                                            0x69bfe + (0x02 * 0x20), 0x69bfe + (0x03 * 0x20), indexSF2Sprites_Stages, 0x5b },
    { L"BG elephant (static part)",                             0x69bfe + (0x03 * 0x20), 0x69bfe + (0x04 * 0x20), indexSF2Sprites_Stages, 0x5c },
    { L"BG topmost curtain + column piece",                     0x69bfe + (0x04 * 0x20), 0x69bfe + (0x05 * 0x20), indexSF2Sprites_Stages, 0x5d },
    { L"BG stairs",                                             0x69bfe + (0x05 * 0x20), 0x69bfe + (0x06 * 0x20), indexSF2Sprites_Stages, 0x5e },
    { L"parallaxed ground, stones",                             0x69bfe + (0x06 * 0x20), 0x69bfe + (0x07 * 0x20), indexSF2Sprites_Stages, 0x5f },
    { L"BG curtains + BG elephant ivory fangs (static part)",   0x69bfe + (0x07 * 0x20), 0x69bfe + (0x08 * 0x20), indexSF2Sprites_Stages, 0x60 },
    { L"BG purpley grid",                                       0x69bfe + (0x08 * 0x20), 0x69bfe + (0x09 * 0x20), indexSF2Sprites_Stages, 0x61 },
    { L"BG elephant feet",                                      0x69bfe + (0x09 * 0x20), 0x69bfe + (0x0a * 0x20), indexSF2Sprites_Stages, 0x62 },
    { L"?",                                                     0x69bfe + (0x0a * 0x20), 0x69bfe + (0x0b * 0x20) },
    { L"BG wall, after the purple grid",                        0x69bfe + (0x0b * 0x20), 0x69bfe + (0x0c * 0x20), indexSF2Sprites_Stages, 0x63 },

    { L"BG elephant head + curtain 1",                          0x69bfe + (0x0c * 0x20), 0x69bfe + (0x0d * 0x20), indexSF2Sprites_Stages, 0x64 },
    { L"BG elephant head + curtain 2",                          0x69bfe + (0x0d * 0x20), 0x69bfe + (0x0e * 0x20), indexSF2Sprites_Stages, 0x65 },
    { L"BG elephant head + curtain 3",                          0x69bfe + (0x0e * 0x20), 0x69bfe + (0x0f * 0x20), indexSF2Sprites_Stages, 0x66 },
    { L"BG elephant head + curtain 4",                          0x69bfe + (0x0f * 0x20), 0x69bfe + (0x10 * 0x20), indexSF2Sprites_Stages, 0x67 },
    { L"BG elephant head + curtain 5",                          0x69bfe + (0x10 * 0x20), 0x69bfe + (0x11 * 0x20), indexSF2Sprites_Stages, 0x68 },
    { L"BG elephant trunk + curtain",                           0x69bfe + (0x11 * 0x20), 0x69bfe + (0x12 * 0x20), indexSF2Sprites_Stages, 0x69 },
    { L"BG elephant back + purpley grid",                       0x69bfe + (0x12 * 0x20), 0x69bfe + (0x13 * 0x20), indexSF2Sprites_Stages, 0x6a },
    { L"BG elephant back + purpley grid",                       0x69bfe + (0x13 * 0x20), 0x69bfe + (0x14 * 0x20), indexSF2Sprites_Stages, 0x6b },
    { L"BG elephant back + purpley grid",                       0x69bfe + (0x14 * 0x20), 0x69bfe + (0x15 * 0x20), indexSF2Sprites_Stages, 0x6c },
    { L"BG wall, after the purple grid, but on the footer",     0x69bfe + (0x15 * 0x20), 0x69bfe + (0x16 * 0x20), indexSF2Sprites_Stages, 0x6d },

    { L"parallaxed ground, carpet",                             0x69bfe + (0x16 * 0x20), 0x69bfe + (0x17 * 0x20), indexSF2Sprites_Stages, 0x6e },
    { L"parallaxed ground, border between carpet and stones",   0x69bfe + (0x17 * 0x20), 0x69bfe + (0x18 * 0x20), indexSF2Sprites_Stages, 0x6f },
    { L"parallaxed ground, border between carpet and stones, topmost part", 0x69bfe + (0x18 * 0x20), 0x69bfe + (0x19 * 0x20), indexSF2Sprites_Stages, 0x70 },
    { L"BG wall painting, frame/border",                        0x69bfe + (0x19 * 0x20), 0x69bfe + (0x1a * 0x20), indexSF2Sprites_Stages, 0x71 },
    { L"BG wall painting, topmost part",                        0x69bfe + (0x1a * 0x20), 0x69bfe + (0x1b * 0x20), indexSF2Sprites_Stages, 0x72 },
    { L"BG curtains above the wall painting",                   0x69bfe + (0x1b * 0x20), 0x69bfe + (0x1c * 0x20), indexSF2Sprites_Stages, 0x73 },
    { L"BG wall painting, frame/border, topmost part",          0x69bfe + (0x1c * 0x20), 0x69bfe + (0x1d * 0x20), indexSF2Sprites_Stages, 0x74 },
            { L"BG elephant trunk, when it's raised (in front of column)",          0x69bfe + (0x1d * 0x20), 0x69bfe + (0x1e * 0x20) },
            { L"BG elephant trunk, when it's raised (in front of curtain)",         0x69bfe + (0x1e * 0x20), 0x69bfe + (0x1f * 0x20) },
            { L"BG elephant trunk, when it's raised (in front of foremost column)", 0x69bfe + (0x1f * 0x20), 0x69bfe + (0x20 * 0x20) },

    { L"Mid layer elephant",                0x71ffe, 0x7201e, indexSF2Sprites_Stages, 0x75 },
    { L"Mid layer elephant, legs/shadow",   0x7201e, 0x7203e, indexSF2Sprites_Stages, 0x76 },

    { L"Front layer elephant",              0x61c00, 0x61c40, indexSF2Sprites_Stages, 0x77 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_STAGE_NODE_04[] =
{
    // 0x5457a : BLANK
    // 0x5459a : unused ?
    // 0x545Ba : water drips (ceiling / pool)
    { L"water drips (ceiling / pool)", 0x545Ba, 0x545Ba + 0x20, indexSF2Sprites_Stages, 0x7b, &pairFullyLinkedNode },
    // 0x545Da : bucket / tub
    { L"bucket / tub", 0x545Da, 0x545Da + 0x20, indexSF2Sprites_Stages, 0x78 },
    // 0x545Fa : door (glass area - lower part)
    { L"door (glass area - lower part)", 0x545Fa, 0x545Fa + 0x20, indexSF2Sprites_Stages, 0x79 },
    // 0x5461a : lamp
    { L"lamp", 0x5461a, 0x5461a + 0x20, indexSF2Sprites_Stages, 0x7a },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_STAGE_NODE_08[] =
{
    // --68400 ~6851F (floor / ceiling parallaxes)--
    // 0x68400 : floor
    { L"floor", 0x68400 - 0x02, 0x68400 + 0x1e, indexSF2Sprites_Stages, 0x7d, &pairFullyLinkedNode },
    // 0x68420 : ceiling
    { L"ceiling", 0x68420 - 0x02, 0x68420 + 0x1e, indexSF2Sprites_Stages, 0x7e },
    // 
    // 0x68440 : floor, "background"
    { L"floor, background", 0x68440 - 0x02, 0x68440 + 0x1e, indexSF2Sprites_Stages, 0x7f },
    // 0x68460 : unused ?
    // 0x684A0 : BLANK
    // 0x684C0 : unused ?
    // 0x684E0 : unused ?
    // 0x68500 : unused ?

    // --70800 ~70BFF (background)--
    // 0x70800 : wall painting
    { L"wall painting", 0x70800 - 0x02, 0x70800 + 0x1e, indexSF2Sprites_Stages, 0x81 },
    // 0x70820 : wall tiling (3rd row)
    { L"wall tiling (3rd row)", 0x70820 - 0x02, 0x70820 + 0x1e, indexSF2Sprites_Stages, 0x82 },
    // 0x70840 : wall color (above door)
    { L"wall color (above door)", 0x70840 - 0x02, 0x70840 + 0x1e, indexSF2Sprites_Stages, 0x83 },
    // 0x70860 : BLANK
    // 0x70880 : BLANK
    // 0x708A0 : BLANK
    // 0x708C0 : BLANK
    // 0x708E0 : BLANK
    // 0x70900 : BLANK
    // 0x70920 : BLANK
    // 0x70940 : BLANK
        // 0x70960 : wall painting (end round animation - frame 1)
        // 0x70980 : wall painting (end round animation - frame 2)
    // 0x709A0 : BLANK
    // 0x709C0 : BLANK
    // 0x709E0 : BLANK // actually is wall painting (top)

    // 0x70A00 : wall tiling (1st row) + wall color (around the door) + step near the wall
    { L"wall tiling (1st row) + wall color (around the door) + step near the wall", 0x70A00 - 0x02, 0x70A00 + 0x1e, indexSF2Sprites_Stages, 0x85 },
    // 0x70A20 : wall tiling (2nd row)
    { L"wall tiling (2nd row)", 0x70A20 - 0x02, 0x70A20 + 0x1e, indexSF2Sprites_Stages, 0x86 },
    // 0x70A40 : wall tiling (4th row)
    { L"wall tiling (4th row)", 0x70A40 - 0x02, 0x70A40 + 0x1e, indexSF2Sprites_Stages, 0x87 },
    // 0x70A60 : step near wall (parts with the wood props)
    { L"step near wall (parts with the wood props)", 0x70A60 - 0x02, 0x70A60 + 0x1e, indexSF2Sprites_Stages, 0x88 },
    // 0x70A80 : step near wall
    { L"step near wall", 0x70A80 - 0x02, 0x70A80 + 0x1e, indexSF2Sprites_Stages, 0x89 },
    // 0x70AA0 : BLANK
    // 0x70AC0 : BLANK
    // 0x70AE0 : door (upper part of the red area)
    { L"door (upper part of the red area)", 0x70AE0 - 0x02, 0x70AE0 + 0x1e, indexSF2Sprites_Stages, 0x8a },
    // 0x70B00 : door (lower part of the red area)
    { L"door (lower part of the red area)", 0x70B00 - 0x02, 0x70B00 + 0x1e, indexSF2Sprites_Stages, 0x8b },
    // 0x70B20 : door (glass area - upper part)
    { L"door (glass area - upper part)", 0x70B20 - 0x02, 0x70B20 + 0x1e, indexSF2Sprites_Stages, 0x8c },
    // 0x70B40 : door (between red area and glass part)
    { L"door (between red area and glass part)", 0x70B40 - 0x02, 0x70B40 + 0x1e, indexSF2Sprites_Stages, 0x8d },
    // 0x70B60 : wall painting (end round animation - frame 1)
    // 0x70B80 : wall painting (end round animation - frame 2)
    // 0x70BA0 : BLANK
    // 0x70BC0 : BLANK
    // 0x70BE0 : BLANK // actually is wall painting (center)
        { L"wall painting (end round animation - frame 1)", 0x70960 - 0x02, 0x70960 + 0x1e, indexSF2Sprites_Stages, 0x84 },
        { L"wall painting (end round animation - frame 2)", 0x70980 - 0x02, 0x70980 + 0x1e, indexSF2Sprites_Stages, 0x84 },
    { L"wall painting (top)", 0x709E0 - 0x02, 0x709E0 + 0x1e, indexSF2Sprites_Stages, 0x84 },

        { L"wall painting (end round animation - frame 1)", 0x70B60 - 0x02, 0x70B60 + 0x1e, indexSF2Sprites_Stages, 0x8e },
        { L"wall painting (end round animation - frame 2)", 0x70B80 - 0x02, 0x70B80 + 0x1e, indexSF2Sprites_Stages, 0x8e },
    { L"wall painting (center)", 0x70BE0 - 0x02, 0x70BE0 + 0x1e, indexSF2Sprites_Stages, 0x8e },

    // 0x60600: side of the pool
    { L"side of the pool", 0x60600 - 0x02, 0x60600 + 0x1e, indexSF2Sprites_Stages, 0x7c },
    // 0x68480 : pool (+water dripping animation)
    { L"pool (+water dripping animation)", 0x68480 - 0x02, 0x68480 + 0x1e, indexSF2Sprites_Stages, 0x80 },
};

// Sagat Stage - Lady+Floor    6A3FE        6A75E
// Sagat Stage - FarBG        727FE        7291E
// Sagat Stage - MG        623FE        627FE
const sGame_PaletteDataset SSF2T_A_SAGAT_STAGE_NODE_08[] =
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

const sGame_PaletteDataset SSF2T_A_VEGA_STAGE_NODE_08[] =
{
    { L"Wall sign, part 1 (\"Meson\")",                     0x6abfe + (0x00 * 0x20), 0x6abfe + (0x01 * 0x20), indexSF2Sprites_Stages, 0x32, &pairFullyLinkedNode },
        { L"Wall sign, part 2 (\"Meson de\")",              0x6abfe + (0x01 * 0x20), 0x6abfe + (0x02 * 0x20), indexSF2Sprites_Stages, 0x32 },
        { L"Wall sign, part 3 (\"Meson de la\")",           0x6abfe + (0x02 * 0x20), 0x6abfe + (0x03 * 0x20), indexSF2Sprites_Stages, 0x32 },
        { L"Wall sign, part 5 (blank)",                     0x6abfe + (0x04 * 0x20), 0x6abfe + (0x05 * 0x20), indexSF2Sprites_Stages, 0x32 },
        // putting last for layering
        { L"Wall sign, part 4 (\"Meson de la Taberna\")",   0x6abfe + (0x03 * 0x20), 0x6abfe + (0x04 * 0x20), indexSF2Sprites_Stages, 0x32 },
    { L"Foreground wall, stairs (darkest shade)",           0x6abfe + (0x05 * 0x20), 0x6abfe + (0x06 * 0x20), indexSF2Sprites_Stages, 0x33 },
        { L"Foreground wall, stairs (middle shade)",        0x6abfe + (0x06 * 0x20), 0x6abfe + (0x07 * 0x20), indexSF2Sprites_Stages, 0x33 },
        { L"Foreground wall, stairs (lightest shade)",      0x6abfe + (0x07 * 0x20), 0x6abfe + (0x08 * 0x20), indexSF2Sprites_Stages, 0x33 },
    { L"Background wall, lamp wall (middle shade)",         0x6abfe + (0x08 * 0x20), 0x6abfe + (0x09 * 0x20), indexSF2Sprites_Stages, 0x34 },
        { L"Background wall, lamp wall (lightest shade)",   0x6abfe + (0x09 * 0x20), 0x6abfe + (0x0a * 0x20), indexSF2Sprites_Stages, 0x34 },
        { L"Background wall, lamp wall (darkest shade)",    0x6abfe + (0x0a * 0x20), 0x6abfe + (0x0b * 0x20), indexSF2Sprites_Stages, 0x34 },
    // { L"Unused",                                         0x6abfe + (0x0b * 0x20), 0x6abfe + (0x0c * 0x20) },
    { L"Foreground wall, lamp wall (darkest shade)",        0x6abfe + (0x0c * 0x20), 0x6abfe + (0x0d * 0x20), indexSF2Sprites_Stages, 0x35 },
        { L"Foreground wall, lamp wall (middle shade)",     0x6abfe + (0x0d * 0x20), 0x6abfe + (0x0e * 0x20), indexSF2Sprites_Stages, 0x35 },
        { L"Foreground wall, lamp wall (lightest shade)",   0x6abfe + (0x0e * 0x20), 0x6abfe + (0x0f * 0x20), indexSF2Sprites_Stages, 0x35 },
    { L"Foreground wall, footer + ground",                  0x6abfe + (0x0f * 0x20), 0x6abfe + (0x10 * 0x20), indexSF2Sprites_Stages, 0x36 },
        { L"????",                                          0x6abfe + (0x10 * 0x20), 0x6abfe + (0x11 * 0x20) },
        { L"????",                                          0x6abfe + (0x11 * 0x20), 0x6abfe + (0x12 * 0x20) },
    // { L"Unused",                                         0x6abfe + (0x12 * 0x20), 0x6abfe + (0x13 * 0x20) },
    // { L"Unused",                                         0x6abfe + (0x13 * 0x20), 0x6abfe + (0x14 * 0x20) },
    // { L"Unused",                                         0x6abfe + (0x14 * 0x20), 0x6abfe + (0x15 * 0x20) },
    // { L"Unused",                                         0x6abfe + (0x15 * 0x20), 0x6abfe + (0x16 * 0x20) },
    // { L"Unused",                                         0x6abfe + (0x16 * 0x20), 0x6abfe + (0x17 * 0x20) },
    { L"Background wall, archway lower part + people + red trimming on top of Foreground wall", 0x6abfe + (0x17 * 0x20), 0x6abfe + (0x18 * 0x20), indexSF2Sprites_Stages, 0x37 },
    { L"Background wall, archway upper part",               0x6abfe + (0x18 * 0x20), 0x6abfe + (0x19 * 0x20), indexSF2Sprites_Stages, 0x38 },
    { L"Background wall, torero & bull painting",           0x6abfe + (0x19 * 0x20), 0x6abfe + (0x1a * 0x20), indexSF2Sprites_Stages, 0x39 },
    { L"Unused, but in ram it will have the values of palettes 8, 9 & A (BG lamp wall)", 0x6abfe + (0x1a * 0x20), 0x6abfe + (0x1b * 0x20) },
    { L"Background wall, torero & bull painting (footer) + red trimming on top of Foreground wall + side wall pieces", 0x6abfe + (0x1b * 0x20), 0x6abfe + (0x1c * 0x20), indexSF2Sprites_Stages, 0x3a },
        { L"Unused, but in ram it will have the values of palettes 0 - 0x02, 1, 2, 3 & 4 (Wall sign)", 0x6abfe + (0x1c * 0x20), 0x6abfe + (0x1d * 0x20) },
        { L"Unused",                                        0x6abfe + (0x1d * 0x20), 0x6abfe + (0x1e * 0x20) },
        { L"Unused from CPS1",                              0x6abfe + (0x1e * 0x20), 0x6abfe + (0x1f * 0x20) },
    { L"Parallaxed ground",                                 0x6abfe + (0x1f * 0x20), 0x6abfe + (0x20 * 0x20), indexSF2Sprites_Stages, 0x3b },
    //{ L"Unused",                                          0x6abfe + (0x20 * 0x20), 0x6abfe + (0x21 * 0x20) },
    //{ L"Unused",                                          0x6abfe + (0x21 * 0x20), 0x6abfe + (0x22 * 0x20) },
    //{ L"Unused",                                          0x6abfe + (0x22 * 0x20), 0x6abfe + (0x23 * 0x20) },
    //{ L"Unused",                                          0x6abfe + (0x23 * 0x20), 0x6abfe + (0x24 * 0x20) },

    // { L"Unused",                                         0x73000 - 0x02, 0x73020 - 0x02 },
    // { L"Unused",                                         0x73020 - 0x02, 0x73040 - 0x02 },
    // { L"Unused",                                         0x73040 - 0x02, 0x73060 - 0x02 },
    // { L"Unused",                                         0x73060 - 0x02, 0x73080 - 0x02 },
    { L"Middle layer, neon footer + feet of dancers/guitar players, part 1",     0x7307e + (0x00 * 0x20), 0x7307e + (0x01 * 0x20), indexSF2Sprites_Stages, 0x3c },
        { L"Middle layer, neon footer + feet of dancers/guitar players, part 2", 0x7307e + (0x01 * 0x20), 0x7307e + (0x02 * 0x20), indexSF2Sprites_Stages, 0x3c },
        { L"Middle layer, neon footer + feet of dancers/guitar players, part 3", 0x7307e + (0x02 * 0x20), 0x7307e + (0x03 * 0x20), indexSF2Sprites_Stages, 0x3c },
    // { L"Unused",                                                 0x7307e + (0x03 * 0x20), 0x7307e + (0x04 * 0x20) },
    { L"Middle layer, people cheering on the table",                0x7307e + (0x04 * 0x20), 0x7307e + (0x05 * 0x20), indexSF2Sprites_Stages, 0x3d },
    { L"Middle layer, dancers",                                     0x7307e + (0x05 * 0x20), 0x7307e + (0x06 * 0x20), indexSF2Sprites_Stages, 0x3e },
    { L"Middle layer, guitar players",                              0x7307e + (0x06 * 0x20), 0x7307e + (0x07 * 0x20), indexSF2Sprites_Stages, 0x3f },
    // { L"Unused",                                                 0x7307e + (0x07 * 0x20), 0x7307e + (0x08 * 0x20) },
    // { L"Unused",                                                 0x7307e + (0x08 * 0x20), 0x7307e + (0x09 * 0x20) },
    { L"Middle layer, people cheering on the table",                0x7307e + (0x09 * 0x20), 0x7307e + (0x0a * 0x20), indexSF2Sprites_Stages, 0x40 },
    { L"Middle layer, people cheering on the table + pink waiter",  0x7307e + (0x0a * 0x20), 0x7307e + (0x0b * 0x20), indexSF2Sprites_Stages, 0x41 },
    { L"Middle layer, red waiter",                                  0x7307e + (0x0b * 0x20), 0x7307e + (0x0c * 0x20), indexSF2Sprites_Stages, 0x42 },

    { L"Cage + Brown wall on the sides",                    0x62bfe, 0x62c1e, indexSF2Sprites_Stages, 0x31 },
};

const sGame_PaletteDataset SSF2T_A_KEN_STAGE_NODE_04[] =
{
    { L"Barrel & Metal things", 0x5519a, 0x5523a, indexSF2Sprites_Stages, 0x18 },
};

const sGame_PaletteDataset SSF2T_A_KEN_STAGE_NODE_08[] =
{
    { L"Ken Background/Foreground", 0x68FFE, 0x691fe, indexSF2Sprites_Stages, 0x15 },
    { L"Ken Boat 1/2", 0x713FE, 0X715fe, indexSF2Sprites_Stages, 0x16, &pairNext },
    { L"Ken Boat 2/2", 0x715fe, 0x717be, indexSF2Sprites_Stages, 0x17, &pairPrevious },
};

const sGame_PaletteDataset SSF2T_A_MBISON_STAGE_NODE_08[] =
{
    { L"M.Bison Stage 1/5", 0x69ffe, 0x6a1fe, indexSF2Sprites_Stages, 0x9d, &pairFullyLinkedNode },
    { L"M.Bison Stage 2/5", 0x6a1fe, 0x6a3fe, indexSF2Sprites_Stages, 0x9e },
    { L"M.Bison Stage 3/5 Bell", 0x7241e, 0x7261e, indexSF2Sprites_Stages, 0x9f },
    { L"M.Bison Stage 4/5", 0x7261e, 0x727fe, indexSF2Sprites_Stages, 0xa0 },
    { L"M.Bison Stage 5/5 Statue", 0x61fe0, 0x62060, indexSF2Sprites_Stages, 0xa1 },
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

// The New Legacy hack changes everything to only use the 2/2 palette.

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_JAB[] =
{
    { L"Ryu Portrait - Jab", 0x36cfc, 0x36d7c, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_STRONG[] =
{
    { L"Ryu Portrait - Strong", 0x36d7c, 0x36dfc, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_FIERCE[] =
{
    { L"Ryu Portrait - Fierce", 0x36dfc, 0x36e7c, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_SHORT[] =
{
    { L"Ryu Portrait - Short", 0x36e7c, 0x36efc, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_FORWARD[] =
{
    { L"Ryu Portrait - Forward", 0x36efc, 0x36f7c, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Ryu Portrait - Roundhouse", 0x36f7c, 0x36ffc, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_START[] =
{
    { L"Ryu Portrait - Start", 0x36ffc, 0x3707c, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_HOLD[] =
{
    { L"Ryu Portrait - Hold", 0x3707c, 0x370fc, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_OLD1P[] =
{
    { L"Ryu Portrait - Old 1P", 0x370fc, 0x3717c, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_RYU_03NL_PORTRAITS_OLD2P[] =
{
    { L"Ryu Portrait - Old 2P", 0x3717c, 0x371fc, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_JAB[] =
{
    { L"E. Honda Portrait - Jab", 0x371fc, 0x3727c, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_STRONG[] =
{
    { L"E. Honda Portrait - Strong", 0x3727c, 0x372fc, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_FIERCE[] =
{
    { L"E. Honda Portrait - Fierce", 0x372fc, 0x3737c, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_SHORT[] =
{
    { L"E. Honda Portrait - Short", 0x3737c, 0x373fc, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_FORWARD[] =
{
    { L"E. Honda Portrait - Forward", 0x373fc, 0x3747c, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"E. Honda Portrait - Roundhouse", 0x3747c, 0x374fc, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_START[] =
{
    { L"E. Honda Portrait - Start", 0x374fc, 0x3757c, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_HOLD[] =
{
    { L"E. Honda Portrait - Hold", 0x3757c, 0x375fc, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_OLD1P[] =
{
    { L"E. Honda Portrait - Old 1P", 0x375fc, 0x3767c, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_03NL_PORTRAITS_OLD2P[] =
{
    { L"E. Honda Portrait - Old 2P", 0x3767c, 0x376fc, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_JAB[] =
{
    { L"Blanka Portrait - Jab", 0x376fc, 0x3777c, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_STRONG[] =
{
    { L"Blanka Portrait - Strong", 0x3777c, 0x377fc, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_FIERCE[] =
{
    { L"Blanka Portrait - Fierce", 0x377fc, 0x3787c, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_SHORT[] =
{
    { L"Blanka Portrait - Short", 0x3787c, 0x378fc, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_FORWARD[] =
{
    { L"Blanka Portrait - Forward", 0x378fc, 0x3797c, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Blanka Portrait - Roundhouse", 0x3797c, 0x379fc, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_START[] =
{
    { L"Blanka Portrait - Start", 0x379fc, 0x37a7c, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_HOLD[] =
{
    { L"Blanka Portrait - Hold", 0x37a7c, 0x37afc, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_OLD1P[] =
{
    { L"Blanka Portrait - Old 1P", 0x37afc, 0x37b7c, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_03NL_PORTRAITS_OLD2P[] =
{
    { L"Blanka Portrait - Old 2P", 0x37b7c, 0x37bfc, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_JAB[] =
{
    { L"Guile Portrait - Jab", 0x37bfc, 0x37c7c, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_STRONG[] =
{
    { L"Guile Portrait - Strong", 0x37c7c, 0x37cfc, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_FIERCE[] =
{
    { L"Guile Portrait - Fierce", 0x37cfc, 0x37d7c, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_SHORT[] =
{
    { L"Guile Portrait - Short", 0x37d7c, 0x37dfc, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_FORWARD[] =
{
    { L"Guile Portrait - Forward", 0x37dfc, 0x37e7c, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Guile Portrait - Roundhouse", 0x37e7c, 0x37efc, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_START[] =
{
    { L"Guile Portrait - Start", 0x37efc, 0x37f7c, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_HOLD[] =
{
    { L"Guile Portrait - Hold", 0x37f7c, 0x37ffc, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_OLD1P[] =
{
    { L"Guile Portrait - Old 1P", 0x37ffc, 0x3807c, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_03NL_PORTRAITS_OLD2P[] =
{
    { L"Guile Portrait - Old 2P", 0x3807c, 0x380fc, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_JAB[] =
{
    { L"Ken Portrait - Jab", 0x380fc, 0x3817c, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_STRONG[] =
{
    { L"Ken Portrait - Strong", 0x3817c, 0x381fc, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_FIERCE[] =
{
    { L"Ken Portrait - Fierce", 0x381fc, 0x3827c, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_SHORT[] =
{
    { L"Ken Portrait - Short", 0x3827c, 0x382fc, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_FORWARD[] =
{
    { L"Ken Portrait - Forward", 0x382fc, 0x3837c, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Ken Portrait - Roundhouse", 0x3837c, 0x383fc, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_START[] =
{
    { L"Ken Portrait - Start", 0x383fc, 0x3847c, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_HOLD[] =
{
    { L"Ken Portrait - Hold", 0x3847c, 0x384fc, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_OLD1P[] =
{
    { L"Ken Portrait - Old 1P", 0x384fc, 0x3857c, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_03NL_PORTRAITS_OLD2P[] =
{
    { L"Ken Portrait - Old 2P", 0x3857c, 0x385fc, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_JAB[] =
{
    { L"Chun-Li Portrait - Jab", 0x385fc, 0x3867c, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_STRONG[] =
{
    { L"Chun-Li Portrait - Strong", 0x3867c, 0x386fc, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_FIERCE[] =
{
    { L"Chun-Li Portrait - Fierce", 0x386fc, 0x3877c, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_SHORT[] =
{
    { L"Chun-Li Portrait - Short", 0x3877c, 0x387fc, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_FORWARD[] =
{
    { L"Chun-Li Portrait - Forward", 0x387fc, 0x3887c, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Chun-Li Portrait - Roundhouse", 0x3887c, 0x388fc, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_START[] =
{
    { L"Chun-Li Portrait - Start", 0x388fc, 0x3897c, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_HOLD[] =
{
    { L"Chun-Li Portrait - Hold", 0x3897c, 0x389fc, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_OLD1P[] =
{
    { L"Chun-Li Portrait - Old 1P", 0x389fc, 0x38a7c, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_03NL_PORTRAITS_OLD2P[] =
{
    { L"Chun-Li Portrait - Old 2P", 0x38a7c, 0x38afc, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_JAB[] =
{
    { L"Zangief Portrait - Jab", 0x38afc, 0x38b7c, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_STRONG[] =
{
    { L"Zangief Portrait - Strong", 0x38b7c, 0x38bfc, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_FIERCE[] =
{
    { L"Zangief Portrait - Fierce", 0x38bfc, 0x38c7c, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_SHORT[] =
{
    { L"Zangief Portrait - Short", 0x38c7c, 0x38cfc, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_FORWARD[] =
{
    { L"Zangief Portrait - Forward", 0x38cfc, 0x38d7c, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Zangief Portrait - Roundhouse", 0x38d7c, 0x38dfc, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_START[] =
{
    { L"Zangief Portrait - Start", 0x38dfc, 0x38e7c, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_HOLD[] =
{
    { L"Zangief Portrait - Hold", 0x38e7c, 0x38efc, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_OLD1P[] =
{
    { L"Zangief Portrait - Old 1P", 0x38efc, 0x38f7c, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_03NL_PORTRAITS_OLD2P[] =
{
    { L"Zangief Portrait - Old 2P", 0x38f7c, 0x38ffc, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_JAB[] =
{
    { L"Dhalsim Portrait - Jab", 0x38ffc, 0x3907c, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_STRONG[] =
{
    { L"Dhalsim Portrait - Strong", 0x3907c, 0x390fc, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_FIERCE[] =
{
    { L"Dhalsim Portrait - Fierce", 0x390fc, 0x3917c, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_SHORT[] =
{
    { L"Dhalsim Portrait - Short", 0x3917c, 0x391fc, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_FORWARD[] =
{
    { L"Dhalsim Portrait - Forward", 0x391fc, 0x3927c, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Dhalsim Portrait - Roundhouse", 0x3927c, 0x392fc, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_START[] =
{
    { L"Dhalsim Portrait - Start", 0x392fc, 0x3937c, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_HOLD[] =
{
    { L"Dhalsim Portrait - Hold", 0x3937c, 0x393fc, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_OLD1P[] =
{
    { L"Dhalsim Portrait - Old 1P", 0x393fc, 0x3947c, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_03NL_PORTRAITS_OLD2P[] =
{
    { L"Dhalsim Portrait - Old 2P", 0x3947c, 0x394fc, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_JAB[] =
{
    { L"M. Bison Portrait - Jab", 0x394fc, 0x3957c, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_STRONG[] =
{
    { L"M. Bison Portrait - Strong", 0x3957c, 0x395fc, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_FIERCE[] =
{
    { L"M. Bison Portrait - Fierce", 0x395fc, 0x3967c, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_SHORT[] =
{
    { L"M. Bison Portrait - Short", 0x3967c, 0x396fc, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_FORWARD[] =
{
    { L"M. Bison Portrait - Forward", 0x396fc, 0x3977c, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"M. Bison Portrait - Roundhouse", 0x3977c, 0x397fc, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_START[] =
{
    { L"M. Bison Portrait - Start", 0x397fc, 0x3987c, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_HOLD[] =
{
    { L"M. Bison Portrait - Hold", 0x3987c, 0x398fc, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_OLD1P[] =
{
    { L"M. Bison Portrait - Old 1P", 0x398fc, 0x3997c, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_03NL_PORTRAITS_OLD2P[] =
{
    { L"M. Bison Portrait - Old 2P", 0x3997c, 0x399fc, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_JAB[] =
{
    { L"Sagat Portrait - Jab", 0x399fc, 0x39a7c, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_STRONG[] =
{
    { L"Sagat Portrait - Strong", 0x39a7c, 0x39afc, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_FIERCE[] =
{
    { L"Sagat Portrait - Fierce", 0x39afc, 0x39b7c, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_SHORT[] =
{
    { L"Sagat Portrait - Short", 0x39b7c, 0x39bfc, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_FORWARD[] =
{
    { L"Sagat Portrait - Forward", 0x39bfc, 0x39c7c, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Sagat Portrait - Roundhouse", 0x39c7c, 0x39cfc, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_START[] =
{
    { L"Sagat Portrait - Start", 0x39cfc, 0x39d7c, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_HOLD[] =
{
    { L"Sagat Portrait - Hold", 0x39d7c, 0x39dfc, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_OLD1P[] =
{
    { L"Sagat Portrait - Old 1P", 0x39dfc, 0x39e7c, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_03NL_PORTRAITS_OLD2P[] =
{
    { L"Sagat Portrait - Old 2P", 0x39e7c, 0x39efc, indexSF2Sprites_Sagat, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_JAB[] =
{
    { L"Balrog Portrait - Jab", 0x39efc, 0x39f7c, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_STRONG[] =
{
    { L"Balrog Portrait - Strong", 0x39f7c, 0x39ffc, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_FIERCE[] =
{
    { L"Balrog Portrait - Fierce", 0x39ffc, 0x3a07c, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_SHORT[] =
{
    { L"Balrog Portrait - Short", 0x3a07c, 0x3a0fc, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_FORWARD[] =
{
    { L"Balrog Portrait - Forward", 0x3a0fc, 0x3a17c, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Balrog Portrait - Roundhouse", 0x3a17c, 0x3a1fc, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_START[] =
{
    { L"Balrog Portrait - Start", 0x3a1fc, 0x3a27c, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_HOLD[] =
{
    { L"Balrog Portrait - Hold", 0x3a27c, 0x3a2fc, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_OLD1P[] =
{
    { L"Balrog Portrait - Old 1P", 0x3a2fc, 0x3a37c, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_03NL_PORTRAITS_OLD2P[] =
{
    { L"Balrog Portrait - Old 2P", 0x3a37c, 0x3a3fc, indexSF2Sprites_Balrog, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_JAB[] =
{
    { L"Vega Portrait - Jab", 0x3a3fc, 0x3a47c, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_STRONG[] =
{
    { L"Vega Portrait - Strong", 0x3a47c, 0x3a4fc, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_FIERCE[] =
{
    { L"Vega Portrait - Fierce", 0x3a4fc, 0x3a57c, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_SHORT[] =
{
    { L"Vega Portrait - Short", 0x3a57c, 0x3a5fc, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_FORWARD[] =
{
    { L"Vega Portrait - Forward", 0x3a5fc, 0x3a67c, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Vega Portrait - Roundhouse", 0x3a67c, 0x3a6fc, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_START[] =
{
    { L"Vega Portrait - Start", 0x3a6fc, 0x3a77c, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_HOLD[] =
{
    { L"Vega Portrait - Hold", 0x3a77c, 0x3a7fc, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_OLD1P[] =
{
    { L"Vega Portrait - Old 1P", 0x3a7fc, 0x3a87c, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_03NL_PORTRAITS_OLD2P[] =
{
    { L"Vega Portrait - Old 2P", 0x3a87c, 0x3a8fc, indexSF2Sprites_Vega, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_JAB[] =
{
    { L"Cammy Portrait - Jab", 0x3a8fc, 0x3a97c, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_STRONG[] =
{
    { L"Cammy Portrait - Strong", 0x3a97c, 0x3a9fc, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_FIERCE[] =
{
    { L"Cammy Portrait - Fierce", 0x3a9fc, 0x3aa7c, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_SHORT[] =
{
    { L"Cammy Portrait - Short", 0x3aa7c, 0x3aafc, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_FORWARD[] =
{
    { L"Cammy Portrait - Forward", 0x3aafc, 0x3ab7c, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Cammy Portrait - Roundhouse", 0x3ab7c, 0x3abfc, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_START[] =
{
    { L"Cammy Portrait - Start", 0x3abfc, 0x3ac7c, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_HOLD[] =
{
    { L"Cammy Portrait - Hold", 0x3ac7c, 0x3acfc, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_OLD1P[] =
{
    { L"Cammy Portrait - Old 1P", 0x3acfc, 0x3ad7c, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_03NL_PORTRAITS_OLD2P[] =
{
    { L"Cammy Portrait - Old 2P", 0x3ad7c, 0x3adfc, indexSF2Sprites_Cammy, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_JAB[] =
{
    { L"T-Hawk Portrait - Jab", 0x3adfc, 0x3ae7c, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_STRONG[] =
{
    { L"T-Hawk Portrait - Strong", 0x3ae7c, 0x3aefc, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_FIERCE[] =
{
    { L"T-Hawk Portrait - Fierce", 0x3aefc, 0x3af7c, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_SHORT[] =
{
    { L"T-Hawk Portrait - Short", 0x3af7c, 0x3affc, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_FORWARD[] =
{
    { L"T-Hawk Portrait - Forward", 0x3affc, 0x3b07c, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"T-Hawk Portrait - Roundhouse", 0x3b07c, 0x3b0fc, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_START[] =
{
    { L"T-Hawk Portrait - Start", 0x3b0fc, 0x3b17c, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_HOLD[] =
{
    { L"T-Hawk Portrait - Hold", 0x3b17c, 0x3b1fc, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_OLD1P[] =
{
    { L"T-Hawk Portrait - Old 1P", 0x3b1fc, 0x3b27c, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_03NL_PORTRAITS_OLD2P[] =
{
    { L"T-Hawk Portrait - Old 2P", 0x3b27c, 0x3b2fc, indexSF2Sprites_THawk, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_JAB[] =
{
    { L"Fei Long Portrait - Jab", 0x3b2fc, 0x3b37c, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_STRONG[] =
{
    { L"Fei Long Portrait - Strong", 0x3b37c, 0x3b3fc, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_FIERCE[] =
{
    { L"Fei Long Portrait - Fierce", 0x3b3fc, 0x3b47c, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_SHORT[] =
{
    { L"Fei Long Portrait - Short", 0x3b47c, 0x3b4fc, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_FORWARD[] =
{
    { L"Fei Long Portrait - Forward", 0x3b4fc, 0x3b57c, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Fei Long Portrait - Roundhouse", 0x3b57c, 0x3b5fc, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_START[] =
{
    { L"Fei Long Portrait - Start", 0x3b5fc, 0x3b67c, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_HOLD[] =
{
    { L"Fei Long Portrait - Hold", 0x3b67c, 0x3b6fc, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_OLD1P[] =
{
    { L"Fei Long Portrait - Old 1P", 0x3b6fc, 0x3b77c, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_03NL_PORTRAITS_OLD2P[] =
{
    { L"Fei Long Portrait - Old 2P", 0x3b77c, 0x3b7fc, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_JAB[] =
{
    { L"Dee Jay Portrait - Jab", 0x3b7fc, 0x3b87c, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_STRONG[] =
{
    { L"Dee Jay Portrait - Strong", 0x3b87c, 0x3b8fc, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_FIERCE[] =
{
    { L"Dee Jay Portrait - Fierce", 0x3b8fc, 0x3b97c, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_SHORT[] =
{
    { L"Dee Jay Portrait - Short", 0x3b97c, 0x3b9fc, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_FORWARD[] =
{
    { L"Dee Jay Portrait - Forward", 0x3b9fc, 0x3ba7c, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_ROUNDHOUSE[] =
{
    { L"Dee Jay Portrait - Roundhouse", 0x3ba7c, 0x3bafc, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_START[] =
{
    { L"Dee Jay Portrait - Start", 0x3bafc, 0x3bb7c, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_HOLD[] =
{
    { L"Dee Jay Portrait - Hold", 0x3bb7c, 0x3bbfc, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_OLD1P[] =
{
    { L"Dee Jay Portrait - Old 1P", 0x3bbfc, 0x3bc7c, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_03NL_PORTRAITS_OLD2P[] =
{
    { L"Dee Jay Portrait - Old 2P", 0x3bc7c, 0x3bcfc, indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_PORTRAITS[] =
{
    { L"Ryu Portrait - 11", 0x66ffe, 0x6707e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 12", 0x6707e, 0x670fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 13", 0x670fe, 0x6717e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 14", 0x6717e, 0x671fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 15", 0x671fe, 0x6727e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 16", 0x6727e, 0x672fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 17", 0x672fe, 0x6737e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 18", 0x6737e, 0x673fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 19", 0x673fe, 0x6747e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 20", 0x6747e, 0x674fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 21", 0x674fe, 0x6757e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 22", 0x6757e, 0x675fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 23", 0x675fe, 0x6767e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 24", 0x6767e, 0x676fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 25", 0x676fe, 0x6777e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 26", 0x6777e, 0x677fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 27", 0x677fe, 0x6787e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 28", 0x6787e, 0x678fe, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 29 (Hidden?)", 0x678fe, 0x6797e, indexSF2Sprites_Ryu, 0x10 },
    { L"Ryu Portrait - 30 (Hidden?)", 0x6797e, 0x679fe, indexSF2Sprites_Ryu, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_PORTRAITS[] =
{
    { L"E. Honda Portrait - 11", 0x679fe, 0x67a7e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 12", 0x67a7e, 0x67afe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 13", 0x67afe, 0x67b7e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 14", 0x67b7e, 0x67bfe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 15", 0x67bfe, 0x67c7e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 16", 0x67c7e, 0x67cfe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 17", 0x67cfe, 0x67d7e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 18", 0x67d7e, 0x67dfe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 19", 0x67dfe, 0x67e7e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 20", 0x67e7e, 0x67efe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 21", 0x67efe, 0x67f7e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 22", 0x67f7e, 0x67ffe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 23", 0x67ffe, 0x6807e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 24", 0x6807e, 0x680fe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 25", 0x680fe, 0x6817e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 26", 0x6817e, 0x681fe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 27", 0x681fe, 0x6827e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 28", 0x6827e, 0x682fe, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 29 (Hidden?)", 0x682fe, 0x6837e, indexSF2Sprites_EHonda, 0x10 },
    { L"E. Honda Portrait - 30 (Hidden?)", 0x6837e, 0x683fe, indexSF2Sprites_EHonda, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_PORTRAITS[] =
{
    { L"Blanka Portrait - 11", 0x683fe, 0x6847e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 12", 0x6847e, 0x684fe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 13", 0x684fe, 0x6857e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 14", 0x6857e, 0x685fe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 15", 0x685fe, 0x6867e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 16", 0x6867e, 0x686fe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 17", 0x686fe, 0x6877e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 18", 0x6877e, 0x687fe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 19", 0x687fe, 0x6887e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 20", 0x6887e, 0x688fe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 21", 0x688fe, 0x6897e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 22", 0x6897e, 0x689fe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 23", 0x689fe, 0x68a7e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 24", 0x68a7e, 0x68afe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 25", 0x68afe, 0x68b7e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 26", 0x68b7e, 0x68bfe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 27", 0x68bfe, 0x68c7e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 28", 0x68c7e, 0x68cfe, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 29 (Hidden?)", 0x68cfe, 0x68d7e, indexSF2Sprites_Blanka, 0x10 },
    { L"Blanka Portrait - 30 (Hidden?)", 0x68d7e, 0x68dfe, indexSF2Sprites_Blanka, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_PORTRAITS[] =
{
    { L"Guile Portrait - 11", 0x68dfe, 0x68e7e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 12", 0x68e7e, 0x68efe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 13", 0x68efe, 0x68f7e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 14", 0x68f7e, 0x68ffe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 15", 0x68ffe, 0x6907e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 16", 0x6907e, 0x690fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 17", 0x690fe, 0x6917e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 18", 0x6917e, 0x691fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 19", 0x691fe, 0x6927e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 20", 0x6927e, 0x692fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 21", 0x692fe, 0x6937e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 22", 0x6937e, 0x693fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 23", 0x693fe, 0x6947e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 24", 0x6947e, 0x694fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 25", 0x694fe, 0x6957e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 26", 0x6957e, 0x695fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 27", 0x695fe, 0x6967e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 28", 0x6967e, 0x696fe, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 29 (Hidden?)", 0x696fe, 0x6977e, indexSF2Sprites_Guile, 0x10 },
    { L"Guile Portrait - 30 (Hidden?)", 0x6977e, 0x697fe, indexSF2Sprites_Guile, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_PORTRAITS[] =
{
    { L"Ken Portrait - 11", 0x697fe, 0x6987e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 12", 0x6987e, 0x698fe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 13", 0x698fe, 0x6997e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 14", 0x6997e, 0x699fe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 15", 0x699fe, 0x69a7e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 16", 0x69a7e, 0x69afe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 17", 0x69afe, 0x69b7e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 18", 0x69b7e, 0x69bfe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 19", 0x69bfe, 0x69c7e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 20", 0x69c7e, 0x69cfe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 21", 0x69cfe, 0x69d7e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 22", 0x69d7e, 0x69dfe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 23", 0x69dfe, 0x69e7e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 24", 0x69e7e, 0x69efe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 25", 0x69efe, 0x69f7e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 26", 0x69f7e, 0x69ffe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 27", 0x69ffe, 0x6a07e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 28", 0x6a07e, 0x6a0fe, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 29 (Hidden?)", 0x6a0fe, 0x6a17e, indexSF2Sprites_Ken, 0x10 },
    { L"Ken Portrait - 30 (Hidden?)", 0x6a17e, 0x6a1fe, indexSF2Sprites_Ken, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_PORTRAITS[] =
{
    { L"Chun-Li Portrait - 11", 0x6a1fe, 0x6a27e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 12", 0x6a27e, 0x6a2fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 13", 0x6a2fe, 0x6a37e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 14", 0x6a37e, 0x6a3fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 15", 0x6a3fe, 0x6a47e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 16", 0x6a47e, 0x6a4fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 17", 0x6a4fe, 0x6a57e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 18", 0x6a57e, 0x6a5fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 19", 0x6a5fe, 0x6a67e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 20", 0x6a67e, 0x6a6fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 21", 0x6a6fe, 0x6a77e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 22", 0x6a77e, 0x6a7fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 23", 0x6a7fe, 0x6a87e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 24", 0x6a87e, 0x6a8fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 25", 0x6a8fe, 0x6a97e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 26", 0x6a97e, 0x6a9fe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 27", 0x6a9fe, 0x6aa7e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 28", 0x6aa7e, 0x6aafe, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 29 (Hidden?)", 0x6aafe, 0x6ab7e, indexSF2Sprites_ChunLi, 0x10 },
    { L"Chun-Li Portrait - 30 (Hidden?)", 0x6ab7e, 0x6abfe, indexSF2Sprites_ChunLi, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_PORTRAITS[] =
{
    { L"Zangief Portrait - 11", 0x6abfe, 0x6ac7e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 12", 0x6ac7e, 0x6acfe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 13", 0x6acfe, 0x6ad7e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 14", 0x6ad7e, 0x6adfe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 15", 0x6adfe, 0x6ae7e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 16", 0x6ae7e, 0x6aefe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 17", 0x6aefe, 0x6af7e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 18", 0x6af7e, 0x6affe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 19", 0x6affe, 0x6b07e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 20", 0x6b07e, 0x6b0fe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 21", 0x6b0fe, 0x6b17e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 22", 0x6b17e, 0x6b1fe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 23", 0x6b1fe, 0x6b27e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 24", 0x6b27e, 0x6b2fe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 25", 0x6b2fe, 0x6b37e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 26", 0x6b37e, 0x6b3fe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 27", 0x6b3fe, 0x6b47e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 28", 0x6b47e, 0x6b4fe, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 29 (Hidden?)", 0x6b4fe, 0x6b57e, indexSF2Sprites_Zangief, 0x10 },
    { L"Zangief Portrait - 30 (Hidden?)", 0x6b57e, 0x6b5fe, indexSF2Sprites_Zangief, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_PORTRAITS[] =
{
    { L"Dhalsim Portrait - 11", 0x6b5fe, 0x6b67e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 12", 0x6b67e, 0x6b6fe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 13", 0x6b6fe, 0x6b77e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 14", 0x6b77e, 0x6b7fe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 15", 0x6b7fe, 0x6b87e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 16", 0x6b87e, 0x6b8fe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 17", 0x6b8fe, 0x6b97e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 18", 0x6b97e, 0x6b9fe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 19", 0x6b9fe, 0x6ba7e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 20", 0x6ba7e, 0x6bafe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 21", 0x6bafe, 0x6bb7e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 22", 0x6bb7e, 0x6bbfe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 23", 0x6bbfe, 0x6bc7e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 24", 0x6bc7e, 0x6bcfe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 25", 0x6bcfe, 0x6bd7e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 26", 0x6bd7e, 0x6bdfe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 27", 0x6bdfe, 0x6be7e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 28", 0x6be7e, 0x6befe, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 29 (Hidden?)", 0x6befe, 0x6bf7e, indexSF2Sprites_Dhalsim, 0x10 },
    { L"Dhalsim Portrait - 30 (Hidden?)", 0x6bf7e, 0x6bffe, indexSF2Sprites_Dhalsim, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_PORTRAITS[] =
{
    { L"M. Bison Portrait - 11", 0x6bffe, 0x6c07e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 12", 0x6c07e, 0x6c0fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 13", 0x6c0fe, 0x6c17e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 14", 0x6c17e, 0x6c1fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 15", 0x6c1fe, 0x6c27e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 16", 0x6c27e, 0x6c2fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 17", 0x6c2fe, 0x6c37e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 18", 0x6c37e, 0x6c3fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 19", 0x6c3fe, 0x6c47e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 20", 0x6c47e, 0x6c4fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 21", 0x6c4fe, 0x6c57e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 22", 0x6c57e, 0x6c5fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 23", 0x6c5fe, 0x6c67e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 24", 0x6c67e, 0x6c6fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 25", 0x6c6fe, 0x6c77e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 26", 0x6c77e, 0x6c7fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 27", 0x6c7fe, 0x6c87e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 28", 0x6c87e, 0x6c8fe, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 29 (Hidden?)", 0x6c8fe, 0x6c97e, indexSF2Sprites_Bison, 0x10 },
    { L"M. Bison Portrait - 30 (Hidden?)", 0x6c97e, 0x6c9fe, indexSF2Sprites_Bison, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_PORTRAITS[] =
{
    { L"Sagat Portrait - 11", 0x6c9fe, 0x6ca7e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 12", 0x6ca7e, 0x6cafe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 13", 0x6cafe, 0x6cb7e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 14", 0x6cb7e, 0x6cbfe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 15", 0x6cbfe, 0x6cc7e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 16", 0x6cc7e, 0x6ccfe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 17", 0x6ccfe, 0x6cd7e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 18", 0x6cd7e, 0x6cdfe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 19", 0x6cdfe, 0x6ce7e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 20", 0x6ce7e, 0x6cefe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 21", 0x6cefe, 0x6cf7e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 22", 0x6cf7e, 0x6cffe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 23", 0x6cffe, 0x6d07e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 24", 0x6d07e, 0x6d0fe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 25", 0x6d0fe, 0x6d17e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 26", 0x6d17e, 0x6d1fe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 27", 0x6d1fe, 0x6d27e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 28", 0x6d27e, 0x6d2fe, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 29 (Hidden?)", 0x6d2fe, 0x6d37e, indexSF2Sprites_Sagat, 0x10 },
    { L"Sagat Portrait - 30 (Hidden?)", 0x6d37e, 0x6d3fe, indexSF2Sprites_Sagat, 0x10 },

};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_PORTRAITS[] =
{
    { L"Balrog Portrait - 11", 0x6d3fe, 0x6d47e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 12", 0x6d47e, 0x6d4fe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 13", 0x6d4fe, 0x6d57e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 14", 0x6d57e, 0x6d5fe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 15", 0x6d5fe, 0x6d67e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 16", 0x6d67e, 0x6d6fe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 17", 0x6d6fe, 0x6d77e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 18", 0x6d77e, 0x6d7fe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 19", 0x6d7fe, 0x6d87e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 20", 0x6d87e, 0x6d8fe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 21", 0x6d8fe, 0x6d97e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 22", 0x6d97e, 0x6d9fe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 23", 0x6d9fe, 0x6da7e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 24", 0x6da7e, 0x6dafe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 25", 0x6dafe, 0x6db7e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 26", 0x6db7e, 0x6dbfe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 27", 0x6dbfe, 0x6dc7e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 28", 0x6dc7e, 0x6dcfe, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 29 (Hidden?)", 0x6dcfe, 0x6dd7e, indexSF2Sprites_Balrog, 0x10 },
    { L"Balrog Portrait - 30 (Hidden?)", 0x6dd7e, 0x6ddfe, indexSF2Sprites_Balrog, 0x10 },

};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_PORTRAITS[] =
{
    { L"Vega Portrait - 11", 0x6ddfe, 0x6de7e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 12", 0x6de7e, 0x6defe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 13", 0x6defe, 0x6df7e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 14", 0x6df7e, 0x6dffe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 15", 0x6dffe, 0x6e07e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 16", 0x6e07e, 0x6e0fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 17", 0x6e0fe, 0x6e17e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 18", 0x6e17e, 0x6e1fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 19", 0x6e1fe, 0x6e27e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 20", 0x6e27e, 0x6e2fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 21", 0x6e2fe, 0x6e37e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 22", 0x6e37e, 0x6e3fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 23", 0x6e3fe, 0x6e47e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 24", 0x6e47e, 0x6e4fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 25", 0x6e4fe, 0x6e57e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 26", 0x6e57e, 0x6e5fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 27", 0x6e5fe, 0x6e67e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 28", 0x6e67e, 0x6e6fe, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 29 (Hidden?)", 0x6e6fe, 0x6e77e, indexSF2Sprites_Vega, 0x10 },
    { L"Vega Portrait - 30 (Hidden?)", 0x6e77e, 0x6e7fe, indexSF2Sprites_Vega, 0x10 },

};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_PORTRAITS[] =
{
    { L"Cammy Portrait - 11", 0x6e7fe, 0x6e87e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 12", 0x6e87e, 0x6e8fe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 13", 0x6e8fe, 0x6e97e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 14", 0x6e97e, 0x6e9fe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 15", 0x6e9fe, 0x6ea7e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 16", 0x6ea7e, 0x6eafe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 17", 0x6eafe, 0x6eb7e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 18", 0x6eb7e, 0x6ebfe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 19", 0x6ebfe, 0x6ec7e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 20", 0x6ec7e, 0x6ecfe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 21", 0x6ecfe, 0x6ed7e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 22", 0x6ed7e, 0x6edfe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 23", 0x6edfe, 0x6ee7e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 24", 0x6ee7e, 0x6eefe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 25", 0x6eefe, 0x6ef7e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 26", 0x6ef7e, 0x6effe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 27", 0x6effe, 0x6f07e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 28", 0x6f07e, 0x6f0fe, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 29 (Hidden?)", 0x6f0fe, 0x6f17e, indexSF2Sprites_Cammy, 0x10 },
    { L"Cammy Portrait - 30 (Hidden?)", 0x6f17e, 0x6f1fe, indexSF2Sprites_Cammy, 0x10 },

};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_PORTRAITS[] =
{
    { L"T-Hawk Portrait - 11", 0x6f1fe, 0x6f27e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 12", 0x6f27e, 0x6f2fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 13", 0x6f2fe, 0x6f37e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 14", 0x6f37e, 0x6f3fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 15", 0x6f3fe, 0x6f47e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 16", 0x6f47e, 0x6f4fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 17", 0x6f4fe, 0x6f57e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 18", 0x6f57e, 0x6f5fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 19", 0x6f5fe, 0x6f67e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 20", 0x6f67e, 0x6f6fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 21", 0x6f6fe, 0x6f77e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 22", 0x6f77e, 0x6f7fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 23", 0x6f7fe, 0x6f87e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 24", 0x6f87e, 0x6f8fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 25", 0x6f8fe, 0x6f97e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 26", 0x6f97e, 0x6f9fe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 27", 0x6f9fe, 0x6fa7e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 28", 0x6fa7e, 0x6fafe, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 29 (Hidden?)", 0x6fafe, 0x6fb7e, indexSF2Sprites_THawk, 0x10 },
    { L"T-Hawk Portrait - 30 (Hidden?)", 0x6fb7e, 0x6fbfe, indexSF2Sprites_THawk, 0x10 },

};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_PORTRAITS[] =
{
    { L"Fei Long Portrait - 11", 0x6fbfe, 0x6fc7e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 12", 0x6fc7e, 0x6fcfe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 13", 0x6fcfe, 0x6fd7e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 14", 0x6fd7e, 0x6fdfe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 15", 0x6fdfe, 0x6fe7e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 16", 0x6fe7e, 0x6fefe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 17", 0x6fefe, 0x6ff7e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 18", 0x6ff7e, 0x6fffe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 19", 0x6fffe, 0x7007e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 20", 0x7007e, 0x700fe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 21", 0x700fe, 0x7017e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 22", 0x7017e, 0x701fe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 23", 0x701fe, 0x7027e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 24", 0x7027e, 0x702fe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 25", 0x702fe, 0x7037e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 26", 0x7037e, 0x703fe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 27", 0x703fe, 0x7047e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 28", 0x7047e, 0x704fe, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 29 (Hidden?)", 0x704fe, 0x7057e, indexSF2Sprites_FeiLong, 0x10 },
    { L"Fei Long Portrait - 30 (Hidden?)", 0x7057e, 0x705fe, indexSF2Sprites_FeiLong, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_PORTRAITS[] =
{
    { L"Dee Jay Portrait - 11", 0x705fe, 0x7067e, indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 12", 0x705fe + (1 * 0x80), 0x7067e + (1 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 13", 0x705fe + (2 * 0x80), 0x7067e + (2 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 14", 0x705fe + (3 * 0x80), 0x7067e + (3 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 15", 0x705fe + (4 * 0x80), 0x7067e + (4 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 16", 0x705fe + (5 * 0x80), 0x7067e + (5 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 17", 0x705fe + (6 * 0x80), 0x7067e + (6 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 18", 0x705fe + (7 * 0x80), 0x7067e + (7 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 19", 0x705fe + (8 * 0x80), 0x7067e + (8 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 20", 0x705fe + (9 * 0x80), 0x7067e + (9 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 21", 0x705fe + (10 * 0x80), 0x7067e + (10 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 22", 0x705fe + (11 * 0x80), 0x7067e + (11 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 23", 0x705fe + (12 * 0x80), 0x7067e + (12 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 24", 0x705fe + (13 * 0x80), 0x7067e + (13 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 25", 0x705fe + (14 * 0x80), 0x7067e + (14 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 26", 0x705fe + (15 * 0x80), 0x7067e + (15 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 27", 0x705fe + (16 * 0x80), 0x7067e + (16 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 28", 0x705fe + (17 * 0x80), 0x7067e + (17 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 29 (Hidden?)", 0x705fe + (18 * 0x80), 0x7067e + (18 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
    { L"Dee Jay Portrait - 30 (Hidden?)", 0x705fe + (19 * 0x80), 0x7067e + (19 * 0x80), indexSF2Sprites_DeeJay, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_PORTRAITS[] =
{
    { L"Gouki Portrait - 01", 0x70ffe + (0 * 0x80), 0x7107e + (0 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 02", 0x70ffe + (1 * 0x80), 0x7107e + (1 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 03", 0x70ffe + (2 * 0x80), 0x7107e + (2 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 04", 0x70ffe + (3 * 0x80), 0x7107e + (3 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 05", 0x70ffe + (4 * 0x80), 0x7107e + (4 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 06", 0x70ffe + (5 * 0x80), 0x7107e + (5 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 07", 0x70ffe + (6 * 0x80), 0x7107e + (6 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 08", 0x70ffe + (7 * 0x80), 0x7107e + (7 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 09", 0x70ffe + (8 * 0x80), 0x7107e + (8 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 10", 0x70ffe + (9 * 0x80), 0x7107e + (9 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 11", 0x70ffe + (10 * 0x80), 0x7107e + (10 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 12", 0x70ffe + (11 * 0x80), 0x7107e + (11 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 13", 0x70ffe + (12 * 0x80), 0x7107e + (12 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 14", 0x70ffe + (13 * 0x80), 0x7107e + (13 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 15", 0x70ffe + (14 * 0x80), 0x7107e + (14 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 16", 0x70ffe + (15 * 0x80), 0x7107e + (15 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 17", 0x70ffe + (16 * 0x80), 0x7107e + (16 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 18", 0x70ffe + (17 * 0x80), 0x7107e + (17 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 19", 0x70ffe + (18 * 0x80), 0x7107e + (18 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 20", 0x70ffe + (19 * 0x80), 0x7107e + (19 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 21", 0x70ffe + (20 * 0x80), 0x7107e + (20 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 22", 0x70ffe + (21 * 0x80), 0x7107e + (21 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 23", 0x70ffe + (22 * 0x80), 0x7107e + (22 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 24", 0x70ffe + (23 * 0x80), 0x7107e + (23 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 25", 0x70ffe + (24 * 0x80), 0x7107e + (24 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 26", 0x70ffe + (25 * 0x80), 0x7107e + (25 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 27", 0x70ffe + (26 * 0x80), 0x7107e + (26 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 28", 0x70ffe + (27 * 0x80), 0x7107e + (27 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 29 (Hidden?)", 0x70ffe + (28 * 0x80), 0x7107e + (28 * 0x80), indexSF2Sprites_Gouki, 0x10 },
    { L"Gouki Portrait - 30 (Hidden?)", 0x70ffe + (29 * 0x80), 0x7107e + (29 * 0x80), indexSF2Sprites_Gouki, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_11[] =
{
    { L"Main Color", 0x71f4a, 0x71f6a, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x71f6a, 0x71f8a },
    { L"Super Trail 1", 0x71f8a, 0x71faa, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x71faa, 0x71fca, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x71fca, 0x71fea, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_12[] =
{
    { L"Main Color", 0x71fec, 0x7200c, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x7200c, 0x7202c },
    { L"Super Trail 1", 0x7202c, 0x7204c, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x7204c, 0x7206c, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x7206c, 0x7208c, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_13[] =
{
    { L"Main Color", 0x7208e, 0x720ae, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x720ae, 0x720ce },
    { L"Super Trail 1", 0x720ce, 0x720ee, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x720ee, 0x7210e, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x7210e, 0x7212e, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_14[] =
{
    { L"Main Color", 0x72130, 0x72150, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72150, 0x72170 },
    { L"Super Trail 1", 0x72170, 0x72190, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72190, 0x721b0, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x721b0, 0x721d0, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_15[] =
{
    { L"Main Color", 0x721d2, 0x721f2, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x721f2, 0x72212 },
    { L"Super Trail 1", 0x72212, 0x72232, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72232, 0x72252, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72252, 0x72272, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_16[] =
{
    { L"Main Color", 0x72274, 0x72294, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72294, 0x722b4 },
    { L"Super Trail 1", 0x722b4, 0x722d4, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x722d4, 0x722f4, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x722f4, 0x72314, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_17[] =
{
    { L"Main Color", 0x72316, 0x72336, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72336, 0x72356 },
    { L"Super Trail 1", 0x72356, 0x72376, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72376, 0x72396, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72396, 0x723b6, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_18[] =
{
    { L"Main Color", 0x723b8, 0x723d8, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x723d8, 0x723f8 },
    { L"Super Trail 1", 0x723f8, 0x72418, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72418, 0x72438, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72438, 0x72458, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_19[] =
{
    { L"Main Color", 0x7245a, 0x7247a, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x7247a, 0x7249a },
    { L"Super Trail 1", 0x7249a, 0x724ba, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x724ba, 0x724da, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x724da, 0x724fa, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_20[] =
{
    { L"Main Color", 0x724fc, 0x7251c, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x7251c, 0x7253c },
    { L"Super Trail 1", 0x7253c, 0x7255c, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x7255c, 0x7257c, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x7257c, 0x7259c, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_21[] =
{
    { L"Main Color", 0x7259e, 0x725be, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x725be, 0x725de },
    { L"Super Trail 1", 0x725de, 0x725fe, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x725fe, 0x7261e, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x7261e, 0x7263e, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_22[] =
{
    { L"Main Color", 0x72640, 0x72660, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72660, 0x72680 },
    { L"Super Trail 1", 0x72680, 0x726a0, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x726a0, 0x726c0, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x726c0, 0x726e0, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_23[] =
{
    { L"Main Color", 0x726e2, 0x72702, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72702, 0x72722 },
    { L"Super Trail 1", 0x72722, 0x72742, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72742, 0x72762, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72762, 0x72782, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_24[] =
{
    { L"Main Color", 0x72784, 0x727a4, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x727a4, 0x727c4 },
    { L"Super Trail 1", 0x727c4, 0x727e4, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x727e4, 0x72804, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72804, 0x72824, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_25[] =
{
    { L"Main Color", 0x72826, 0x72846, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72846, 0x72866 },
    { L"Super Trail 1", 0x72866, 0x72886, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72886, 0x728a6, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x728a6, 0x728c6, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_26[] =
{
    { L"Main Color", 0x728c8, 0x728e8, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x728e8, 0x72908 },
    { L"Super Trail 1", 0x72908, 0x72928, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72928, 0x72948, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72948, 0x72968, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_27[] =
{
    { L"Main Color", 0x7296a, 0x7298a, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x7298a, 0x729aa },
    { L"Super Trail 1", 0x729aa, 0x729ca, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x729ca, 0x729ea, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x729ea, 0x72a0a, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_28[] =
{
    { L"Main Color", 0x72a0c, 0x72a2c, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72a2c, 0x72a4c },
    { L"Super Trail 1", 0x72a4c, 0x72a6c, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72a6c, 0x72a8c, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72a8c, 0x72aac, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_29[] =
{
    { L"Main Color", 0x72aae, 0x72ace, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72ace, 0x72aee },
    { L"Super Trail 1", 0x72aee, 0x72b0e, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72b0e, 0x72b2e, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72b2e, 0x72b4e, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ryu_09NL_30[] =
{
    { L"Main Color", 0x72b50, 0x72b70, indexSF2Sprites_Ryu, 0x00 },
    // Unused { L"Extra 00", 0x72b70, 0x72b90 },
    { L"Super Trail 1", 0x72b90, 0x72bb0, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 2", 0x72bb0, 0x72bd0, indexSF2Sprites_Ryu, 0x00 },
    { L"Super Trail 3", 0x72bd0, 0x72bf0, indexSF2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_11[] =
{
    { L"Main Color", 0x72c1a, 0x72c3a, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x72c3a, 0x72c5a },
    { L"Super Trail 1", 0x72c5a, 0x72c7a, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x72c7a, 0x72c9a, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x72c9a, 0x72cba, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_12[] =
{
    { L"Main Color", 0x72cbc, 0x72cdc, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x72cdc, 0x72cfc },
    { L"Super Trail 1", 0x72cfc, 0x72d1c, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x72d1c, 0x72d3c, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x72d3c, 0x72d5c, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_13[] =
{
    { L"Main Color", 0x72d5e, 0x72d7e, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x72d7e, 0x72d9e },
    { L"Super Trail 1", 0x72d9e, 0x72dbe, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x72dbe, 0x72dde, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x72dde, 0x72dfe, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_14[] =
{
    { L"Main Color", 0x72e00, 0x72e20, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x72e20, 0x72e40 },
    { L"Super Trail 1", 0x72e40, 0x72e60, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x72e60, 0x72e80, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x72e80, 0x72ea0, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_15[] =
{
    { L"Main Color", 0x72ea2, 0x72ec2, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x72ec2, 0x72ee2 },
    { L"Super Trail 1", 0x72ee2, 0x72f02, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x72f02, 0x72f22, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x72f22, 0x72f42, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_16[] =
{
    { L"Main Color", 0x72f44, 0x72f64, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x72f64, 0x72f84 },
    { L"Super Trail 1", 0x72f84, 0x72fa4, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x72fa4, 0x72fc4, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x72fc4, 0x72fe4, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_17[] =
{
    { L"Main Color", 0x72fe6, 0x73006, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x73006, 0x73026 },
    { L"Super Trail 1", 0x73026, 0x73046, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x73046, 0x73066, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x73066, 0x73086, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_18[] =
{
    { L"Main Color", 0x73088, 0x730a8, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x730a8, 0x730c8 },
    { L"Super Trail 1", 0x730c8, 0x730e8, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x730e8, 0x73108, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x73108, 0x73128, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_19[] =
{
    { L"Main Color", 0x7312a, 0x7314a, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x7314a, 0x7316a },
    { L"Super Trail 1", 0x7316a, 0x7318a, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x7318a, 0x731aa, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x731aa, 0x731ca, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_20[] =
{
    { L"Main Color", 0x731cc, 0x731ec, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x731ec, 0x7320c },
    { L"Super Trail 1", 0x7320c, 0x7322c, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x7322c, 0x7324c, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x7324c, 0x7326c, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_21[] =
{
    { L"Main Color", 0x7326e, 0x7328e, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x7328e, 0x732ae },
    { L"Super Trail 1", 0x732ae, 0x732ce, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x732ce, 0x732ee, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x732ee, 0x7330e, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_22[] =
{
    { L"Main Color", 0x73310, 0x73330, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x73330, 0x73350 },
    { L"Super Trail 1", 0x73350, 0x73370, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x73370, 0x73390, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x73390, 0x733b0, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_23[] =
{
    { L"Main Color", 0x733b2, 0x733d2, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x733d2, 0x733f2 },
    { L"Super Trail 1", 0x733f2, 0x73412, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x73412, 0x73432, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x73432, 0x73452, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_24[] =
{
    { L"Main Color", 0x73454, 0x73474, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x73474, 0x73494 },
    { L"Super Trail 1", 0x73494, 0x734b4, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x734b4, 0x734d4, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x734d4, 0x734f4, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_25[] =
{
    { L"Main Color", 0x734f6, 0x73516, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x73516, 0x73536 },
    { L"Super Trail 1", 0x73536, 0x73556, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x73556, 0x73576, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x73576, 0x73596, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_26[] =
{
    { L"Main Color", 0x73598, 0x735b8, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x735b8, 0x735d8 },
    { L"Super Trail 1", 0x735d8, 0x735f8, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x735f8, 0x73618, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x73618, 0x73638, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_27[] =
{
    { L"Main Color", 0x7363a, 0x7365a, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x7365a, 0x7367a },
    { L"Super Trail 1", 0x7367a, 0x7369a, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x7369a, 0x736ba, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x736ba, 0x736da, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_28[] =
{
    { L"Main Color", 0x736dc, 0x736fc, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x736fc, 0x7371c },
    { L"Super Trail 1", 0x7371c, 0x7373c, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x7373c, 0x7375c, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x7375c, 0x7377c, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_29[] =
{
    { L"Main Color", 0x7377e, 0x7379e, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x7379e, 0x737be },
    { L"Super Trail 1", 0x737be, 0x737de, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x737de, 0x737fe, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x737fe, 0x7381e, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_EHonda_09NL_30[] =
{
    { L"Main Color", 0x73820, 0x73840, indexSF2Sprites_EHonda, 0x00 },
    // Unused { L"Extra 00", 0x73840, 0x73860 },
    { L"Super Trail 1", 0x73860, 0x73880, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 2", 0x73880, 0x738a0, indexSF2Sprites_EHonda, 0x00 },
    { L"Super Trail 3", 0x738a0, 0x738c0, indexSF2Sprites_EHonda, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_11[] =
{
    { L"Main Color", 0x738ea, 0x7390a, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x7390a, 0x7392a },
    { L"Super Trail 1", 0x7392a, 0x7394a, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x7394a, 0x7396a, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x7396a, 0x7398a, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_12[] =
{
    { L"Main Color", 0x7398c, 0x739ac, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x739ac, 0x739cc },
    { L"Super Trail 1", 0x739cc, 0x739ec, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x739ec, 0x73a0c, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73a0c, 0x73a2c, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_13[] =
{
    { L"Main Color", 0x73a2e, 0x73a4e, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73a4e, 0x73a6e },
    { L"Super Trail 1", 0x73a6e, 0x73a8e, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73a8e, 0x73aae, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73aae, 0x73ace, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_14[] =
{
    { L"Main Color", 0x73ad0, 0x73af0, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73af0, 0x73b10 },
    { L"Super Trail 1", 0x73b10, 0x73b30, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73b30, 0x73b50, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73b50, 0x73b70, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_15[] =
{
    { L"Main Color", 0x73b72, 0x73b92, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73b92, 0x73bb2 },
    { L"Super Trail 1", 0x73bb2, 0x73bd2, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73bd2, 0x73bf2, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73bf2, 0x73c12, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_16[] =
{
    { L"Main Color", 0x73c14, 0x73c34, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73c34, 0x73c54 },
    { L"Super Trail 1", 0x73c54, 0x73c74, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73c74, 0x73c94, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73c94, 0x73cb4, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_17[] =
{
    { L"Main Color", 0x73cb6, 0x73cd6, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73cd6, 0x73cf6 },
    { L"Super Trail 1", 0x73cf6, 0x73d16, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73d16, 0x73d36, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73d36, 0x73d56, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_18[] =
{
    { L"Main Color", 0x73d58, 0x73d78, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73d78, 0x73d98 },
    { L"Super Trail 1", 0x73d98, 0x73db8, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73db8, 0x73dd8, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73dd8, 0x73df8, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_19[] =
{
    { L"Main Color", 0x73dfa, 0x73e1a, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73e1a, 0x73e3a },
    { L"Super Trail 1", 0x73e3a, 0x73e5a, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73e5a, 0x73e7a, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73e7a, 0x73e9a, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_20[] =
{
    { L"Main Color", 0x73e9c, 0x73ebc, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73ebc, 0x73edc },
    { L"Super Trail 1", 0x73edc, 0x73efc, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73efc, 0x73f1c, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73f1c, 0x73f3c, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_21[] =
{
    { L"Main Color", 0x73f3e, 0x73f5e, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x73f5e, 0x73f7e },
    { L"Super Trail 1", 0x73f7e, 0x73f9e, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x73f9e, 0x73fbe, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x73fbe, 0x73fde, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_22[] =
{
    { L"Main Color", 0x73fe0, 0x74000, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x74000, 0x74020 },
    { L"Super Trail 1", 0x74020, 0x74040, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x74040, 0x74060, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x74060, 0x74080, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_23[] =
{
    { L"Main Color", 0x74082, 0x740a2, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x740a2, 0x740c2 },
    { L"Super Trail 1", 0x740c2, 0x740e2, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x740e2, 0x74102, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x74102, 0x74122, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_24[] =
{
    { L"Main Color", 0x74124, 0x74144, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x74144, 0x74164 },
    { L"Super Trail 1", 0x74164, 0x74184, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x74184, 0x741a4, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x741a4, 0x741c4, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_25[] =
{
    { L"Main Color", 0x741c6, 0x741e6, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x741e6, 0x74206 },
    { L"Super Trail 1", 0x74206, 0x74226, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x74226, 0x74246, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x74246, 0x74266, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_26[] =
{
    { L"Main Color", 0x74268, 0x74288, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x74288, 0x742a8 },
    { L"Super Trail 1", 0x742a8, 0x742c8, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x742c8, 0x742e8, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x742e8, 0x74308, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_27[] =
{
    { L"Main Color", 0x7430a, 0x7432a, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x7432a, 0x7434a },
    { L"Super Trail 1", 0x7434a, 0x7436a, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x7436a, 0x7438a, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x7438a, 0x743aa, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_28[] =
{
    { L"Main Color", 0x743ac, 0x743cc, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x743cc, 0x743ec },
    { L"Super Trail 1", 0x743ec, 0x7440c, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x7440c, 0x7442c, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x7442c, 0x7444c, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_29[] =
{
    { L"Main Color", 0x7444e, 0x7446e, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x7446e, 0x7448e },
    { L"Super Trail 1", 0x7448e, 0x744ae, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x744ae, 0x744ce, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x744ce, 0x744ee, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Blanka_09NL_30[] =
{
    { L"Main Color", 0x744f0, 0x74510, indexSF2Sprites_Blanka, 0x00 },
    // Unused { L"Extra 00", 0x74510, 0x74530 },
    { L"Super Trail 1", 0x74530, 0x74550, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 2", 0x74550, 0x74570, indexSF2Sprites_Blanka, 0x00 },
    { L"Super Trail 3", 0x74570, 0x74590, indexSF2Sprites_Blanka, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_11[] =
{
    { L"Main Color", 0x745ba, 0x745da, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x745da, 0x745fa, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x745fa, 0x7461a, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x7461a, 0x7463a, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x7463a, 0x7465a, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_12[] =
{
    { L"Main Color", 0x7465c, 0x7467c, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x7467c, 0x7469c, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x7469c, 0x746bc, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x746bc, 0x746dc, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x746dc, 0x746fc, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_13[] =
{
    { L"Main Color", 0x746fe, 0x7471e, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x7471e, 0x7473e, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x7473e, 0x7475e, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x7475e, 0x7477e, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x7477e, 0x7479e, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_14[] =
{
    { L"Main Color", 0x747a0, 0x747c0, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x747c0, 0x747e0, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x747e0, 0x74800, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74800, 0x74820, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74820, 0x74840, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_15[] =
{
    { L"Main Color", 0x74842, 0x74862, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74862, 0x74882, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74882, 0x748a2, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x748a2, 0x748c2, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x748c2, 0x748e2, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_16[] =
{
    { L"Main Color", 0x748e4, 0x74904, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74904, 0x74924, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74924, 0x74944, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74944, 0x74964, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74964, 0x74984, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_17[] =
{
    { L"Main Color", 0x74986, 0x749a6, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x749a6, 0x749c6, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x749c6, 0x749e6, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x749e6, 0x74a06, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74a06, 0x74a26, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_18[] =
{
    { L"Main Color", 0x74a28, 0x74a48, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74a48, 0x74a68, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74a68, 0x74a88, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74a88, 0x74aa8, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74aa8, 0x74ac8, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_19[] =
{
    { L"Main Color", 0x74aca, 0x74aea, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74aea, 0x74b0a, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74b0a, 0x74b2a, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74b2a, 0x74b4a, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74b4a, 0x74b6a, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_20[] =
{
    { L"Main Color", 0x74b6c, 0x74b8c, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74b8c, 0x74bac, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74bac, 0x74bcc, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74bcc, 0x74bec, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74bec, 0x74c0c, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_21[] =
{
    { L"Main Color", 0x74c0e, 0x74c2e, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74c2e, 0x74c4e, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74c4e, 0x74c6e, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74c6e, 0x74c8e, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74c8e, 0x74cae, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_22[] =
{
    { L"Main Color", 0x74cb0, 0x74cd0, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74cd0, 0x74cf0, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74cf0, 0x74d10, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74d10, 0x74d30, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74d30, 0x74d50, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_23[] =
{
    { L"Main Color", 0x74d52, 0x74d72, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74d72, 0x74d92, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74d92, 0x74db2, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74db2, 0x74dd2, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74dd2, 0x74df2, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_24[] =
{
    { L"Main Color", 0x74df4, 0x74e14, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74e14, 0x74e34, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74e34, 0x74e54, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74e54, 0x74e74, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74e74, 0x74e94, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_25[] =
{
    { L"Main Color", 0x74e96, 0x74eb6, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74eb6, 0x74ed6, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74ed6, 0x74ef6, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74ef6, 0x74f16, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74f16, 0x74f36, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_26[] =
{
    { L"Main Color", 0x74f38, 0x74f58, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74f58, 0x74f78, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x74f78, 0x74f98, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x74f98, 0x74fb8, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x74fb8, 0x74fd8, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_27[] =
{
    { L"Main Color", 0x74fda, 0x74ffa, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x74ffa, 0x7501a, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x7501a, 0x7503a, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x7503a, 0x7505a, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x7505a, 0x7507a, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_28[] =
{
    { L"Main Color", 0x7507c, 0x7509c, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x7509c, 0x750bc, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x750bc, 0x750dc, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x750dc, 0x750fc, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x750fc, 0x7511c, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_29[] =
{
    { L"Main Color", 0x7511e, 0x7513e, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x7513e, 0x7515e, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x7515e, 0x7517e, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x7517e, 0x7519e, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x7519e, 0x751be, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Guile_09NL_30[] =
{
    { L"Main Color", 0x751c0, 0x751e0, indexSF2Sprites_Guile, 0x00 },
    { L"Sonic Boom", 0x751e0, 0x75200, indexSF2Sprites_Guile, 0x01 },
    { L"Super Trail 1", 0x75200, 0x75220, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 2", 0x75220, 0x75240, indexSF2Sprites_Guile, 0x00 },
    { L"Super Trail 3", 0x75240, 0x75260, indexSF2Sprites_Guile, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_11[] =
{
    { L"Main Color", 0x7528a, 0x752aa, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x752aa, 0x752ca },
    { L"Super Trail 1", 0x752ca, 0x752ea, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x752ea, 0x7530a, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x7530a, 0x7532a, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_12[] =
{
    { L"Main Color", 0x7532c, 0x7534c, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x7534c, 0x7536c },
    { L"Super Trail 1", 0x7536c, 0x7538c, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x7538c, 0x753ac, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x753ac, 0x753cc, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_13[] =
{
    { L"Main Color", 0x753ce, 0x753ee, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x753ee, 0x7540e },
    { L"Super Trail 1", 0x7540e, 0x7542e, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x7542e, 0x7544e, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x7544e, 0x7546e, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_14[] =
{
    { L"Main Color", 0x75470, 0x75490, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75490, 0x754b0 },
    { L"Super Trail 1", 0x754b0, 0x754d0, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x754d0, 0x754f0, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x754f0, 0x75510, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_15[] =
{
    { L"Main Color", 0x75512, 0x75532, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75532, 0x75552 },
    { L"Super Trail 1", 0x75552, 0x75572, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75572, 0x75592, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75592, 0x755b2, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_16[] =
{
    { L"Main Color", 0x755b4, 0x755d4, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x755d4, 0x755f4 },
    { L"Super Trail 1", 0x755f4, 0x75614, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75614, 0x75634, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75634, 0x75654, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_17[] =
{
    { L"Main Color", 0x75656, 0x75676, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75676, 0x75696 },
    { L"Super Trail 1", 0x75696, 0x756b6, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x756b6, 0x756d6, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x756d6, 0x756f6, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_18[] =
{
    { L"Main Color", 0x756f8, 0x75718, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75718, 0x75738 },
    { L"Super Trail 1", 0x75738, 0x75758, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75758, 0x75778, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75778, 0x75798, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_19[] =
{
    { L"Main Color", 0x7579a, 0x757ba, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x757ba, 0x757da },
    { L"Super Trail 1", 0x757da, 0x757fa, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x757fa, 0x7581a, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x7581a, 0x7583a, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_20[] =
{
    { L"Main Color", 0x7583c, 0x7585c, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x7585c, 0x7587c },
    { L"Super Trail 1", 0x7587c, 0x7589c, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x7589c, 0x758bc, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x758bc, 0x758dc, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_21[] =
{
    { L"Main Color", 0x758de, 0x758fe, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x758fe, 0x7591e },
    { L"Super Trail 1", 0x7591e, 0x7593e, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x7593e, 0x7595e, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x7595e, 0x7597e, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_22[] =
{
    { L"Main Color", 0x75980, 0x759a0, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x759a0, 0x759c0 },
    { L"Super Trail 1", 0x759c0, 0x759e0, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x759e0, 0x75a00, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75a00, 0x75a20, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_23[] =
{
    { L"Main Color", 0x75a22, 0x75a42, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75a42, 0x75a62 },
    { L"Super Trail 1", 0x75a62, 0x75a82, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75a82, 0x75aa2, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75aa2, 0x75ac2, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_24[] =
{
    { L"Main Color", 0x75ac4, 0x75ae4, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75ae4, 0x75b04 },
    { L"Super Trail 1", 0x75b04, 0x75b24, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75b24, 0x75b44, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75b44, 0x75b64, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_25[] =
{
    { L"Main Color", 0x75b66, 0x75b86, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75b86, 0x75ba6 },
    { L"Super Trail 1", 0x75ba6, 0x75bc6, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75bc6, 0x75be6, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75be6, 0x75c06, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_26[] =
{
    { L"Main Color", 0x75c08, 0x75c28, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75c28, 0x75c48 },
    { L"Super Trail 1", 0x75c48, 0x75c68, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75c68, 0x75c88, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75c88, 0x75ca8, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_27[] =
{
    { L"Main Color", 0x75caa, 0x75cca, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75cca, 0x75cea },
    { L"Super Trail 1", 0x75cea, 0x75d0a, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75d0a, 0x75d2a, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75d2a, 0x75d4a, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_28[] =
{
    { L"Main Color", 0x75d4c, 0x75d6c, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75d6c, 0x75d8c },
    { L"Super Trail 1", 0x75d8c, 0x75dac, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75dac, 0x75dcc, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75dcc, 0x75dec, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_29[] =
{
    { L"Main Color", 0x75dee, 0x75e0e, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75e0e, 0x75e2e },
    { L"Super Trail 1", 0x75e2e, 0x75e4e, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75e4e, 0x75e6e, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75e6e, 0x75e8e, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Ken_09NL_30[] =
{
    { L"Main Color", 0x75e90, 0x75eb0, indexSF2Sprites_Ken, 0x00 },
    // Unused { L"Extra 00", 0x75eb0, 0x75ed0 },
    { L"Super Trail 1", 0x75ed0, 0x75ef0, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 2", 0x75ef0, 0x75f10, indexSF2Sprites_Ken, 0x00 },
    { L"Super Trail 3", 0x75f10, 0x75f30, indexSF2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_11[] =
{
    { L"Main Color", 0x75f5a, 0x75f7a, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x75f7a, 0x75f9a, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x75f9a, 0x75fba, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x75fba, 0x75fda, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x75fda, 0x75ffa, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_12[] =
{
    { L"Main Color", 0x75ffc, 0x7601c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x7601c, 0x7603c, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x7603c, 0x7605c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x7605c, 0x7607c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x7607c, 0x7609c, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_13[] =
{
    { L"Main Color", 0x7609e, 0x760be, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x760be, 0x760de, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x760de, 0x760fe, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x760fe, 0x7611e, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x7611e, 0x7613e, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_14[] =
{
    { L"Main Color", 0x76140, 0x76160, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76160, 0x76180, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76180, 0x761a0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x761a0, 0x761c0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x761c0, 0x761e0, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_15[] =
{
    { L"Main Color", 0x761e2, 0x76202, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76202, 0x76222, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76222, 0x76242, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76242, 0x76262, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76262, 0x76282, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_16[] =
{
    { L"Main Color", 0x76284, 0x762a4, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x762a4, 0x762c4, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x762c4, 0x762e4, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x762e4, 0x76304, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76304, 0x76324, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_17[] =
{
    { L"Main Color", 0x76326, 0x76346, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76346, 0x76366, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76366, 0x76386, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76386, 0x763a6, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x763a6, 0x763c6, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_18[] =
{
    { L"Main Color", 0x763c8, 0x763e8, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x763e8, 0x76408, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76408, 0x76428, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76428, 0x76448, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76448, 0x76468, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_19[] =
{
    { L"Main Color", 0x7646a, 0x7648a, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x7648a, 0x764aa, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x764aa, 0x764ca, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x764ca, 0x764ea, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x764ea, 0x7650a, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_20[] =
{
    { L"Main Color", 0x7650c, 0x7652c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x7652c, 0x7654c, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x7654c, 0x7656c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x7656c, 0x7658c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x7658c, 0x765ac, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_21[] =
{
    { L"Main Color", 0x765ae, 0x765ce, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x765ce, 0x765ee, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x765ee, 0x7660e, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x7660e, 0x7662e, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x7662e, 0x7664e, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_22[] =
{
    { L"Main Color", 0x76650, 0x76670, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76670, 0x76690, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76690, 0x766b0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x766b0, 0x766d0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x766d0, 0x766f0, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_23[] =
{
    { L"Main Color", 0x766f2, 0x76712, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76712, 0x76732, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76732, 0x76752, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76752, 0x76772, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76772, 0x76792, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_24[] =
{
    { L"Main Color", 0x76794, 0x767b4, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x767b4, 0x767d4, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x767d4, 0x767f4, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x767f4, 0x76814, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76814, 0x76834, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_25[] =
{
    { L"Main Color", 0x76836, 0x76856, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76856, 0x76876, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76876, 0x76896, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76896, 0x768b6, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x768b6, 0x768d6, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_26[] =
{
    { L"Main Color", 0x768d8, 0x768f8, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x768f8, 0x76918, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76918, 0x76938, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76938, 0x76958, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76958, 0x76978, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_27[] =
{
    { L"Main Color", 0x7697a, 0x7699a, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x7699a, 0x769ba, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x769ba, 0x769da, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x769da, 0x769fa, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x769fa, 0x76a1a, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_28[] =
{
    { L"Main Color", 0x76a1c, 0x76a3c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76a3c, 0x76a5c, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76a5c, 0x76a7c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76a7c, 0x76a9c, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76a9c, 0x76abc, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_29[] =
{
    { L"Main Color", 0x76abe, 0x76ade, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76ade, 0x76afe, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76afe, 0x76b1e, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76b1e, 0x76b3e, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76b3e, 0x76b5e, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_ChunLi_09NL_30[] =
{
    { L"Main Color", 0x76b60, 0x76b80, indexSF2Sprites_ChunLi, 0x00 },
    { L"Kikouken", 0x76b80, 0x76ba0, indexSF2Sprites_ChunLi, 0x01 },
    { L"Super Trail 1", 0x76ba0, 0x76bc0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 2", 0x76bc0, 0x76be0, indexSF2Sprites_ChunLi, 0x00 },
    { L"Super Trail 3", 0x76be0, 0x76c00, indexSF2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_11[] =
{
    { L"Main Color", 0x76c2a, 0x76c4a, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x76c4a, 0x76c6a, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x76c6a, 0x76c8a, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x76c8a, 0x76caa, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x76caa, 0x76cca, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_12[] =
{
    { L"Main Color", 0x76ccc, 0x76cec, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x76cec, 0x76d0c, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x76d0c, 0x76d2c, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x76d2c, 0x76d4c, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x76d4c, 0x76d6c, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_13[] =
{
    { L"Main Color", 0x76d6e, 0x76d8e, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x76d8e, 0x76dae, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x76dae, 0x76dce, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x76dce, 0x76dee, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x76dee, 0x76e0e, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_14[] =
{
    { L"Main Color", 0x76e10, 0x76e30, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x76e30, 0x76e50, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x76e50, 0x76e70, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x76e70, 0x76e90, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x76e90, 0x76eb0, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_15[] =
{
    { L"Main Color", 0x76eb2, 0x76ed2, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x76ed2, 0x76ef2, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x76ef2, 0x76f12, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x76f12, 0x76f32, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x76f32, 0x76f52, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_16[] =
{
    { L"Main Color", 0x76f54, 0x76f74, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x76f74, 0x76f94, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x76f94, 0x76fb4, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x76fb4, 0x76fd4, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x76fd4, 0x76ff4, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_17[] =
{
    { L"Main Color", 0x76ff6, 0x77016, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x77016, 0x77036, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x77036, 0x77056, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x77056, 0x77076, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x77076, 0x77096, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_18[] =
{
    { L"Main Color", 0x77098, 0x770b8, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x770b8, 0x770d8, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x770d8, 0x770f8, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x770f8, 0x77118, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x77118, 0x77138, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_19[] =
{
    { L"Main Color", 0x7713a, 0x7715a, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x7715a, 0x7717a, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x7717a, 0x7719a, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x7719a, 0x771ba, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x771ba, 0x771da, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_20[] =
{
    { L"Main Color", 0x771dc, 0x771fc, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x771fc, 0x7721c, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x7721c, 0x7723c, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x7723c, 0x7725c, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x7725c, 0x7727c, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_21[] =
{
    { L"Main Color", 0x7727e, 0x7729e, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x7729e, 0x772be, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x772be, 0x772de, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x772de, 0x772fe, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x772fe, 0x7731e, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_22[] =
{
    { L"Main Color", 0x77320, 0x77340, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x77340, 0x77360, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x77360, 0x77380, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x77380, 0x773a0, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x773a0, 0x773c0, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_23[] =
{
    { L"Main Color", 0x773c2, 0x773e2, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x773e2, 0x77402, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x77402, 0x77422, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x77422, 0x77442, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x77442, 0x77462, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_24[] =
{
    { L"Main Color", 0x77464, 0x77484, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x77484, 0x774a4, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x774a4, 0x774c4, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x774c4, 0x774e4, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x774e4, 0x77504, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_25[] =
{
    { L"Main Color", 0x77506, 0x77526, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x77526, 0x77546, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x77546, 0x77566, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x77566, 0x77586, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x77586, 0x775a6, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_26[] =
{
    { L"Main Color", 0x775a8, 0x775c8, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x775c8, 0x775e8, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x775e8, 0x77608, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x77608, 0x77628, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x77628, 0x77648, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_27[] =
{
    { L"Main Color", 0x7764a, 0x7766a, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x7766a, 0x7768a, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x7768a, 0x776aa, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x776aa, 0x776ca, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x776ca, 0x776ea, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_28[] =
{
    { L"Main Color", 0x776ec, 0x7770c, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x7770c, 0x7772c, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x7772c, 0x7774c, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x7774c, 0x7776c, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x7776c, 0x7778c, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_29[] =
{
    { L"Main Color", 0x7778e, 0x777ae, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x777ae, 0x777ce, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x777ce, 0x777ee, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x777ee, 0x7780e, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x7780e, 0x7782e, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Zangief_09NL_30[] =
{
    { L"Main Color", 0x77830, 0x77850, indexSF2Sprites_Zangief, 0x00 },
    { L"Banishing Fist", 0x77850, 0x77870, indexSF2Sprites_Zangief, 0x01 },
    { L"Super Trail 1", 0x77870, 0x77890, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 2", 0x77890, 0x778b0, indexSF2Sprites_Zangief, 0x00 },
    { L"Super Trail 3", 0x778b0, 0x778d0, indexSF2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_11[] =
{
    { L"Main Color", 0x778fa, 0x7791a, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x7791a, 0x7793a },
    { L"Super Trail 1", 0x7793a, 0x7795a, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x7795a, 0x7797a, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x7797a, 0x7799a, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_12[] =
{
    { L"Main Color", 0x7799c, 0x779bc, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x779bc, 0x779dc },
    { L"Super Trail 1", 0x779dc, 0x779fc, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x779fc, 0x77a1c, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77a1c, 0x77a3c, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_13[] =
{
    { L"Main Color", 0x77a3e, 0x77a5e, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77a5e, 0x77a7e },
    { L"Super Trail 1", 0x77a7e, 0x77a9e, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77a9e, 0x77abe, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77abe, 0x77ade, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_14[] =
{
    { L"Main Color", 0x77ae0, 0x77b00, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77b00, 0x77b20 },
    { L"Super Trail 1", 0x77b20, 0x77b40, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77b40, 0x77b60, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77b60, 0x77b80, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_15[] =
{
    { L"Main Color", 0x77b82, 0x77ba2, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77ba2, 0x77bc2 },
    { L"Super Trail 1", 0x77bc2, 0x77be2, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77be2, 0x77c02, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77c02, 0x77c22, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_16[] =
{
    { L"Main Color", 0x77c24, 0x77c44, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77c44, 0x77c64 },
    { L"Super Trail 1", 0x77c64, 0x77c84, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77c84, 0x77ca4, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77ca4, 0x77cc4, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_17[] =
{
    { L"Main Color", 0x77cc6, 0x77ce6, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77ce6, 0x77d06 },
    { L"Super Trail 1", 0x77d06, 0x77d26, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77d26, 0x77d46, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77d46, 0x77d66, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_18[] =
{
    { L"Main Color", 0x77d68, 0x77d88, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77d88, 0x77da8 },
    { L"Super Trail 1", 0x77da8, 0x77dc8, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77dc8, 0x77de8, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77de8, 0x77e08, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_19[] =
{
    { L"Main Color", 0x77e0a, 0x77e2a, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77e2a, 0x77e4a },
    { L"Super Trail 1", 0x77e4a, 0x77e6a, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77e6a, 0x77e8a, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77e8a, 0x77eaa, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_20[] =
{
    { L"Main Color", 0x77eac, 0x77ecc, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77ecc, 0x77eec },
    { L"Super Trail 1", 0x77eec, 0x77f0c, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77f0c, 0x77f2c, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77f2c, 0x77f4c, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_21[] =
{
    { L"Main Color", 0x77f4e, 0x77f6e, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x77f6e, 0x77f8e },
    { L"Super Trail 1", 0x77f8e, 0x77fae, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x77fae, 0x77fce, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x77fce, 0x77fee, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_22[] =
{
    { L"Main Color", 0x77ff0, 0x78010, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x78010, 0x78030 },
    { L"Super Trail 1", 0x78030, 0x78050, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x78050, 0x78070, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x78070, 0x78090, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_23[] =
{
    { L"Main Color", 0x78092, 0x780b2, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x780b2, 0x780d2 },
    { L"Super Trail 1", 0x780d2, 0x780f2, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x780f2, 0x78112, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x78112, 0x78132, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_24[] =
{
    { L"Main Color", 0x78134, 0x78154, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x78154, 0x78174 },
    { L"Super Trail 1", 0x78174, 0x78194, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x78194, 0x781b4, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x781b4, 0x781d4, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_25[] =
{
    { L"Main Color", 0x781d6, 0x781f6, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x781f6, 0x78216 },
    { L"Super Trail 1", 0x78216, 0x78236, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x78236, 0x78256, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x78256, 0x78276, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_26[] =
{
    { L"Main Color", 0x78278, 0x78298, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x78298, 0x782b8 },
    { L"Super Trail 1", 0x782b8, 0x782d8, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x782d8, 0x782f8, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x782f8, 0x78318, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_27[] =
{
    { L"Main Color", 0x7831a, 0x7833a, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x7833a, 0x7835a },
    { L"Super Trail 1", 0x7835a, 0x7837a, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x7837a, 0x7839a, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x7839a, 0x783ba, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_28[] =
{
    { L"Main Color", 0x783bc, 0x783dc, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x783dc, 0x783fc },
    { L"Super Trail 1", 0x783fc, 0x7841c, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x7841c, 0x7843c, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x7843c, 0x7845c, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_29[] =
{
    { L"Main Color", 0x7845e, 0x7847e, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x7847e, 0x7849e },
    { L"Super Trail 1", 0x7849e, 0x784be, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x784be, 0x784de, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x784de, 0x784fe, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Dhalsim_09NL_30[] =
{
    { L"Main Color", 0x78500, 0x78520, indexSF2Sprites_Dhalsim, 0x00 },
    // Unused { L"Extra 00", 0x78520, 0x78540 },
    { L"Super Trail 1", 0x78540, 0x78560, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 2", 0x78560, 0x78580, indexSF2Sprites_Dhalsim, 0x00 },
    { L"Super Trail 3", 0x78580, 0x785a0, indexSF2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_11[] =
{
    { L"Main Color", 0x785ca, 0x785ea, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x785ea, 0x7860a, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x7864a, 0x7866a, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x7860a, 0x7864a, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_12[] =
{
    { L"Main Color", 0x7866c, 0x7868c, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x7868c, 0x786ac, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x786ec, 0x7870c, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x786ac, 0x786ec, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_13[] =
{
    { L"Main Color", 0x7870e, 0x7872e, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x7872e, 0x7874e, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x7878e, 0x787ae, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x7874e, 0x7878e, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_14[] =
{
    { L"Main Color", 0x787b0, 0x787d0, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x787d0, 0x787f0, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78830, 0x78850, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x787f0, 0x78830, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_15[] =
{
    { L"Main Color", 0x78852, 0x78872, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78872, 0x78892, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x788d2, 0x788f2, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78892, 0x788d2, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_16[] =
{
    { L"Main Color", 0x788f4, 0x78914, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78914, 0x78934, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78974, 0x78994, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78934, 0x78974, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_17[] =
{
    { L"Main Color", 0x78996, 0x789b6, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x789b6, 0x789d6, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78a16, 0x78a36, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x789d6, 0x78a16, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_18[] =
{
    { L"Main Color", 0x78a38, 0x78a58, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78a58, 0x78a78, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78ab8, 0x78ad8, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78a78, 0x78ab8, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_19[] =
{
    { L"Main Color", 0x78ada, 0x78afa, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78afa, 0x78b1a, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78b5a, 0x78b7a, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78b1a, 0x78b5a, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_20[] =
{
    { L"Main Color", 0x78b7c, 0x78b9c, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78b9c, 0x78bbc, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78bfc, 0x78c1c, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78bbc, 0x78bfc, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_21[] =
{
    { L"Main Color", 0x78c1e, 0x78c3e, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78c3e, 0x78c5e, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78c9e, 0x78cbe, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78c5e, 0x78c9e, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_22[] =
{
    { L"Main Color", 0x78cc0, 0x78ce0, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78ce0, 0x78d00, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78d40, 0x78d60, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78d00, 0x78d40, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_23[] =
{
    { L"Main Color", 0x78d62, 0x78d82, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78d82, 0x78da2, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78de2, 0x78e02, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78da2, 0x78de2, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_24[] =
{
    { L"Main Color", 0x78e04, 0x78e24, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78e24, 0x78e44, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78e84, 0x78ea4, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78e44, 0x78e84, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_25[] =
{
    { L"Main Color", 0x78ea6, 0x78ec6, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78ec6, 0x78ee6, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78f26, 0x78f46, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78ee6, 0x78f26, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_26[] =
{
    { L"Main Color", 0x78f48, 0x78f68, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x78f68, 0x78f88, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x78fc8, 0x78fe8, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x78f88, 0x78fc8, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_27[] =
{
    { L"Main Color", 0x78fea, 0x7900a, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x7900a, 0x7902a, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x7906a, 0x7908a, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x7902a, 0x7906a, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_28[] =
{
    { L"Main Color", 0x7908c, 0x790ac, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x790ac, 0x790cc, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x7910c, 0x7912c, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x790cc, 0x7910c, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_29[] =
{
    { L"Main Color", 0x7912e, 0x7914e, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x7914e, 0x7916e, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x791ae, 0x791ce, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x7916e, 0x791ae, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Bison_09NL_30[] =
{
    { L"Main Color", 0x791d0, 0x791f0, indexSF2Sprites_Bison, 0x00, &pairNext2 },
    { L"Cape", 0x791f0, 0x79210, indexSF2Sprites_Bison, 0x01 },
    { L"Psycho Attacks", 0x79250, 0x79270, indexSF2Sprites_Bison, 0x02, &pairPrevious2 },
    { L"Psycho Crusher", 0x79210, 0x79250, indexSF2Sprites_Bison, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_11[] =
{
    { L"Main Color", 0x7929a, 0x792ba, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x792ba, 0x792da, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x792da, 0x792fa, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x792fa, 0x7931a, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x7931a, 0x7933a, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_12[] =
{
    { L"Main Color", 0x7933c, 0x7935c, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x7935c, 0x7937c, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x7937c, 0x7939c, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x7939c, 0x793bc, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x793bc, 0x793dc, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_13[] =
{
    { L"Main Color", 0x793de, 0x793fe, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x793fe, 0x7941e, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x7941e, 0x7943e, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x7943e, 0x7945e, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x7945e, 0x7947e, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_14[] =
{
    { L"Main Color", 0x79480, 0x794a0, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x794a0, 0x794c0, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x794c0, 0x794e0, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x794e0, 0x79500, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79500, 0x79520, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_15[] =
{
    { L"Main Color", 0x79522, 0x79542, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79542, 0x79562, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79562, 0x79582, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79582, 0x795a2, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x795a2, 0x795c2, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_16[] =
{
    { L"Main Color", 0x795c4, 0x795e4, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x795e4, 0x79604, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79604, 0x79624, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79624, 0x79644, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79644, 0x79664, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_17[] =
{
    { L"Main Color", 0x79666, 0x79686, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79686, 0x796a6, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x796a6, 0x796c6, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x796c6, 0x796e6, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x796e6, 0x79706, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_18[] =
{
    { L"Main Color", 0x79708, 0x79728, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79728, 0x79748, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79748, 0x79768, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79768, 0x79788, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79788, 0x797a8, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_19[] =
{
    { L"Main Color", 0x797aa, 0x797ca, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x797ca, 0x797ea, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x797ea, 0x7980a, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x7980a, 0x7982a, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x7982a, 0x7984a, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_20[] =
{
    { L"Main Color", 0x7984c, 0x7986c, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x7986c, 0x7988c, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x7988c, 0x798ac, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x798ac, 0x798cc, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x798cc, 0x798ec, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_21[] =
{
    { L"Main Color", 0x798ee, 0x7990e, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x7990e, 0x7992e, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x7992e, 0x7994e, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x7994e, 0x7996e, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x7996e, 0x7998e, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_22[] =
{
    { L"Main Color", 0x79990, 0x799b0, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x799b0, 0x799d0, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x799d0, 0x799f0, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x799f0, 0x79a10, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79a10, 0x79a30, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_23[] =
{
    { L"Main Color", 0x79a32, 0x79a52, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79a52, 0x79a72, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79a72, 0x79a92, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79a92, 0x79ab2, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79ab2, 0x79ad2, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_24[] =
{
    { L"Main Color", 0x79ad4, 0x79af4, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79af4, 0x79b14, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79b14, 0x79b34, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79b34, 0x79b54, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79b54, 0x79b74, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_25[] =
{
    { L"Main Color", 0x79b76, 0x79b96, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79b96, 0x79bb6, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79bb6, 0x79bd6, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79bd6, 0x79bf6, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79bf6, 0x79c16, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_26[] =
{
    { L"Main Color", 0x79c18, 0x79c38, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79c38, 0x79c58, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79c58, 0x79c78, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79c78, 0x79c98, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79c98, 0x79cb8, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_27[] =
{
    { L"Main Color", 0x79cba, 0x79cda, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79cda, 0x79cfa, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79cfa, 0x79d1a, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79d1a, 0x79d3a, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79d3a, 0x79d5a, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_28[] =
{
    { L"Main Color", 0x79d5c, 0x79d7c, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79d7c, 0x79d9c, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79d9c, 0x79dbc, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79dbc, 0x79ddc, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79ddc, 0x79dfc, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_29[] =
{
    { L"Main Color", 0x79dfe, 0x79e1e, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79e1e, 0x79e3e, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79e3e, 0x79e5e, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79e5e, 0x79e7e, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79e7e, 0x79e9e, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Sagat_09NL_30[] =
{
    { L"Main Color", 0x79ea0, 0x79ec0, indexSF2Sprites_Sagat, 0x00 },
    { L"Tiger Shot", 0x79ec0, 0x79ee0, indexSF2Sprites_Sagat, 0x01 },
    { L"Super Trail 1", 0x79ee0, 0x79f00, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 2", 0x79f00, 0x79f20, indexSF2Sprites_Sagat, 0x00 },
    { L"Super Trail 3", 0x79f20, 0x79f40, indexSF2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_11[] =
{
    { L"Main Color", 0x79f6a, 0x79f8a, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x79f8a, 0x79faa },
    { L"Super Trail 1", 0x79faa, 0x79fca, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x79fca, 0x79fea, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x79fea, 0x7a00a, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_12[] =
{
    { L"Main Color", 0x7a00c, 0x7a02c, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a02c, 0x7a04c },
    { L"Super Trail 1", 0x7a04c, 0x7a06c, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a06c, 0x7a08c, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a08c, 0x7a0ac, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_13[] =
{
    { L"Main Color", 0x7a0ae, 0x7a0ce, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a0ce, 0x7a0ee },
    { L"Super Trail 1", 0x7a0ee, 0x7a10e, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a10e, 0x7a12e, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a12e, 0x7a14e, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_14[] =
{
    { L"Main Color", 0x7a150, 0x7a170, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a170, 0x7a190 },
    { L"Super Trail 1", 0x7a190, 0x7a1b0, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a1b0, 0x7a1d0, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a1d0, 0x7a1f0, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_15[] =
{
    { L"Main Color", 0x7a1f2, 0x7a212, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a212, 0x7a232 },
    { L"Super Trail 1", 0x7a232, 0x7a252, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a252, 0x7a272, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a272, 0x7a292, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_16[] =
{
    { L"Main Color", 0x7a294, 0x7a2b4, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a2b4, 0x7a2d4 },
    { L"Super Trail 1", 0x7a2d4, 0x7a2f4, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a2f4, 0x7a314, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a314, 0x7a334, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_17[] =
{
    { L"Main Color", 0x7a336, 0x7a356, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a356, 0x7a376 },
    { L"Super Trail 1", 0x7a376, 0x7a396, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a396, 0x7a3b6, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a3b6, 0x7a3d6, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_18[] =
{
    { L"Main Color", 0x7a3d8, 0x7a3f8, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a3f8, 0x7a418 },
    { L"Super Trail 1", 0x7a418, 0x7a438, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a438, 0x7a458, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a458, 0x7a478, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_19[] =
{
    { L"Main Color", 0x7a47a, 0x7a49a, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a49a, 0x7a4ba },
    { L"Super Trail 1", 0x7a4ba, 0x7a4da, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a4da, 0x7a4fa, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a4fa, 0x7a51a, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_20[] =
{
    { L"Main Color", 0x7a51c, 0x7a53c, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a53c, 0x7a55c },
    { L"Super Trail 1", 0x7a55c, 0x7a57c, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a57c, 0x7a59c, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a59c, 0x7a5bc, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_21[] =
{
    { L"Main Color", 0x7a5be, 0x7a5de, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a5de, 0x7a5fe },
    { L"Super Trail 1", 0x7a5fe, 0x7a61e, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a61e, 0x7a63e, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a63e, 0x7a65e, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_22[] =
{
    { L"Main Color", 0x7a660, 0x7a680, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a680, 0x7a6a0 },
    { L"Super Trail 1", 0x7a6a0, 0x7a6c0, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a6c0, 0x7a6e0, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a6e0, 0x7a700, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_23[] =
{
    { L"Main Color", 0x7a702, 0x7a722, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a722, 0x7a742 },
    { L"Super Trail 1", 0x7a742, 0x7a762, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a762, 0x7a782, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a782, 0x7a7a2, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_24[] =
{
    { L"Main Color", 0x7a7a4, 0x7a7c4, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a7c4, 0x7a7e4 },
    { L"Super Trail 1", 0x7a7e4, 0x7a804, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a804, 0x7a824, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a824, 0x7a844, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_25[] =
{
    { L"Main Color", 0x7a846, 0x7a866, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a866, 0x7a886 },
    { L"Super Trail 1", 0x7a886, 0x7a8a6, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a8a6, 0x7a8c6, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a8c6, 0x7a8e6, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_26[] =
{
    { L"Main Color", 0x7a8e8, 0x7a908, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a908, 0x7a928 },
    { L"Super Trail 1", 0x7a928, 0x7a948, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a948, 0x7a968, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7a968, 0x7a988, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_27[] =
{
    { L"Main Color", 0x7a98a, 0x7a9aa, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7a9aa, 0x7a9ca },
    { L"Super Trail 1", 0x7a9ca, 0x7a9ea, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7a9ea, 0x7aa0a, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7aa0a, 0x7aa2a, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_28[] =
{
    { L"Main Color", 0x7aa2c, 0x7aa4c, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7aa4c, 0x7aa6c },
    { L"Super Trail 1", 0x7aa6c, 0x7aa8c, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7aa8c, 0x7aaac, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7aaac, 0x7aacc, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_29[] =
{
    { L"Main Color", 0x7aace, 0x7aaee, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7aaee, 0x7ab0e },
    { L"Super Trail 1", 0x7ab0e, 0x7ab2e, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7ab2e, 0x7ab4e, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7ab4e, 0x7ab6e, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Balrog_09NL_30[] =
{
    { L"Main Color", 0x7ab70, 0x7ab90, indexSF2Sprites_Balrog, 0x00 },
    // Unused { L"Extra 00", 0x7ab90, 0x7abb0 },
    { L"Super Trail 1", 0x7abb0, 0x7abd0, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 2", 0x7abd0, 0x7abf0, indexSF2Sprites_Balrog, 0x00 },
    { L"Super Trail 3", 0x7abf0, 0x7ac10, indexSF2Sprites_Balrog, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_11[] =
{
    { L"Main Color", 0x7ac3a, 0x7ac5a, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7ac5a, 0x7ac7a },
    { L"Super Trail 1", 0x7ac7a, 0x7ac9a, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7ac9a, 0x7acba, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7acba, 0x7acda, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_12[] =
{
    { L"Main Color", 0x7acdc, 0x7acfc, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7acfc, 0x7ad1c },
    { L"Super Trail 1", 0x7ad1c, 0x7ad3c, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7ad3c, 0x7ad5c, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7ad5c, 0x7ad7c, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_13[] =
{
    { L"Main Color", 0x7ad7e, 0x7ad9e, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7ad9e, 0x7adbe },
    { L"Super Trail 1", 0x7adbe, 0x7adde, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7adde, 0x7adfe, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7adfe, 0x7ae1e, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_14[] =
{
    { L"Main Color", 0x7ae20, 0x7ae40, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7ae40, 0x7ae60 },
    { L"Super Trail 1", 0x7ae60, 0x7ae80, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7ae80, 0x7aea0, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7aea0, 0x7aec0, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_15[] =
{
    { L"Main Color", 0x7aec2, 0x7aee2, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7aee2, 0x7af02 },
    { L"Super Trail 1", 0x7af02, 0x7af22, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7af22, 0x7af42, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7af42, 0x7af62, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_16[] =
{
    { L"Main Color", 0x7af64, 0x7af84, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7af84, 0x7afa4 },
    { L"Super Trail 1", 0x7afa4, 0x7afc4, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7afc4, 0x7afe4, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7afe4, 0x7b004, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_17[] =
{
    { L"Main Color", 0x7b006, 0x7b026, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b026, 0x7b046 },
    { L"Super Trail 1", 0x7b046, 0x7b066, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b066, 0x7b086, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b086, 0x7b0a6, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_18[] =
{
    { L"Main Color", 0x7b0a8, 0x7b0c8, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b0c8, 0x7b0e8 },
    { L"Super Trail 1", 0x7b0e8, 0x7b108, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b108, 0x7b128, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b128, 0x7b148, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_19[] =
{
    { L"Main Color", 0x7b14a, 0x7b16a, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b16a, 0x7b18a },
    { L"Super Trail 1", 0x7b18a, 0x7b1aa, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b1aa, 0x7b1ca, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b1ca, 0x7b1ea, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_20[] =
{
    { L"Main Color", 0x7b1ec, 0x7b20c, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b20c, 0x7b22c },
    { L"Super Trail 1", 0x7b22c, 0x7b24c, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b24c, 0x7b26c, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b26c, 0x7b28c, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_21[] =
{
    { L"Main Color", 0x7b28e, 0x7b2ae, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b2ae, 0x7b2ce },
    { L"Super Trail 1", 0x7b2ce, 0x7b2ee, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b2ee, 0x7b30e, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b30e, 0x7b32e, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_22[] =
{
    { L"Main Color", 0x7b330, 0x7b350, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b350, 0x7b370 },
    { L"Super Trail 1", 0x7b370, 0x7b390, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b390, 0x7b3b0, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b3b0, 0x7b3d0, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_23[] =
{
    { L"Main Color", 0x7b3d2, 0x7b3f2, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b3f2, 0x7b412 },
    { L"Super Trail 1", 0x7b412, 0x7b432, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b432, 0x7b452, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b452, 0x7b472, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_24[] =
{
    { L"Main Color", 0x7b474, 0x7b494, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b494, 0x7b4b4 },
    { L"Super Trail 1", 0x7b4b4, 0x7b4d4, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b4d4, 0x7b4f4, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b4f4, 0x7b514, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_25[] =
{
    { L"Main Color", 0x7b516, 0x7b536, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b536, 0x7b556 },
    { L"Super Trail 1", 0x7b556, 0x7b576, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b576, 0x7b596, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b596, 0x7b5b6, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_26[] =
{
    { L"Main Color", 0x7b5b8, 0x7b5d8, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b5d8, 0x7b5f8 },
    { L"Super Trail 1", 0x7b5f8, 0x7b618, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b618, 0x7b638, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b638, 0x7b658, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_27[] =
{
    { L"Main Color", 0x7b65a, 0x7b67a, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b67a, 0x7b69a },
    { L"Super Trail 1", 0x7b69a, 0x7b6ba, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b6ba, 0x7b6da, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b6da, 0x7b6fa, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_28[] =
{
    { L"Main Color", 0x7b6fc, 0x7b71c, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b71c, 0x7b73c },
    { L"Super Trail 1", 0x7b73c, 0x7b75c, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b75c, 0x7b77c, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b77c, 0x7b79c, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_29[] =
{
    { L"Main Color", 0x7b79e, 0x7b7be, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b7be, 0x7b7de },
    { L"Super Trail 1", 0x7b7de, 0x7b7fe, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b7fe, 0x7b81e, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b81e, 0x7b83e, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Vega_09NL_30[] =
{
    { L"Main Color", 0x7b840, 0x7b860, indexSF2Sprites_Vega, 0x00 },
    // Unused { L"Extra 00", 0x7b860, 0x7b880 },
    { L"Super Trail 1", 0x7b880, 0x7b8a0, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 2", 0x7b8a0, 0x7b8c0, indexSF2Sprites_Vega, 0x00 },
    { L"Super Trail 3", 0x7b8c0, 0x7b8e0, indexSF2Sprites_Vega, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_11[] =
{
    { L"Main Color", 0x7b90a, 0x7b92a, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7b92a, 0x7b94a },
    { L"Super Trail 1", 0x7b94a, 0x7b96a, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7b96a, 0x7b98a, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7b98a, 0x7b9aa, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_12[] =
{
    { L"Main Color", 0x7b9ac, 0x7b9cc, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7b9cc, 0x7b9ec },
    { L"Super Trail 1", 0x7b9ec, 0x7ba0c, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7ba0c, 0x7ba2c, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7ba2c, 0x7ba4c, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_13[] =
{
    { L"Main Color", 0x7ba4e, 0x7ba6e, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7ba6e, 0x7ba8e },
    { L"Super Trail 1", 0x7ba8e, 0x7baae, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7baae, 0x7bace, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bace, 0x7baee, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_14[] =
{
    { L"Main Color", 0x7baf0, 0x7bb10, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bb10, 0x7bb30 },
    { L"Super Trail 1", 0x7bb30, 0x7bb50, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bb50, 0x7bb70, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bb70, 0x7bb90, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_15[] =
{
    { L"Main Color", 0x7bb92, 0x7bbb2, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bbb2, 0x7bbd2 },
    { L"Super Trail 1", 0x7bbd2, 0x7bbf2, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bbf2, 0x7bc12, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bc12, 0x7bc32, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_16[] =
{
    { L"Main Color", 0x7bc34, 0x7bc54, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bc54, 0x7bc74 },
    { L"Super Trail 1", 0x7bc74, 0x7bc94, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bc94, 0x7bcb4, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bcb4, 0x7bcd4, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_17[] =
{
    { L"Main Color", 0x7bcd6, 0x7bcf6, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bcf6, 0x7bd16 },
    { L"Super Trail 1", 0x7bd16, 0x7bd36, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bd36, 0x7bd56, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bd56, 0x7bd76, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_18[] =
{
    { L"Main Color", 0x7bd78, 0x7bd98, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bd98, 0x7bdb8 },
    { L"Super Trail 1", 0x7bdb8, 0x7bdd8, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bdd8, 0x7bdf8, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bdf8, 0x7be18, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_19[] =
{
    { L"Main Color", 0x7be1a, 0x7be3a, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7be3a, 0x7be5a },
    { L"Super Trail 1", 0x7be5a, 0x7be7a, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7be7a, 0x7be9a, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7be9a, 0x7beba, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_20[] =
{
    { L"Main Color", 0x7bebc, 0x7bedc, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bedc, 0x7befc },
    { L"Super Trail 1", 0x7befc, 0x7bf1c, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bf1c, 0x7bf3c, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bf3c, 0x7bf5c, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_21[] =
{
    { L"Main Color", 0x7bf5e, 0x7bf7e, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7bf7e, 0x7bf9e },
    { L"Super Trail 1", 0x7bf9e, 0x7bfbe, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7bfbe, 0x7bfde, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7bfde, 0x7bffe, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_22[] =
{
    { L"Main Color", 0x7c000, 0x7c020, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c020, 0x7c040 },
    { L"Super Trail 1", 0x7c040, 0x7c060, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c060, 0x7c080, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c080, 0x7c0a0, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_23[] =
{
    { L"Main Color", 0x7c0a2, 0x7c0c2, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c0c2, 0x7c0e2 },
    { L"Super Trail 1", 0x7c0e2, 0x7c102, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c102, 0x7c122, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c122, 0x7c142, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_24[] =
{
    { L"Main Color", 0x7c144, 0x7c164, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c164, 0x7c184 },
    { L"Super Trail 1", 0x7c184, 0x7c1a4, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c1a4, 0x7c1c4, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c1c4, 0x7c1e4, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_25[] =
{
    { L"Main Color", 0x7c1e6, 0x7c206, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c206, 0x7c226 },
    { L"Super Trail 1", 0x7c226, 0x7c246, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c246, 0x7c266, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c266, 0x7c286, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_26[] =
{
    { L"Main Color", 0x7c288, 0x7c2a8, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c2a8, 0x7c2c8 },
    { L"Super Trail 1", 0x7c2c8, 0x7c2e8, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c2e8, 0x7c308, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c308, 0x7c328, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_27[] =
{
    { L"Main Color", 0x7c32a, 0x7c34a, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c34a, 0x7c36a },
    { L"Super Trail 1", 0x7c36a, 0x7c38a, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c38a, 0x7c3aa, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c3aa, 0x7c3ca, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_28[] =
{
    { L"Main Color", 0x7c3cc, 0x7c3ec, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c3ec, 0x7c40c },
    { L"Super Trail 1", 0x7c40c, 0x7c42c, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c42c, 0x7c44c, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c44c, 0x7c46c, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_29[] =
{
    { L"Main Color", 0x7c46e, 0x7c48e, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c48e, 0x7c4ae },
    { L"Super Trail 1", 0x7c4ae, 0x7c4ce, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c4ce, 0x7c4ee, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c4ee, 0x7c50e, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Cammy_09NL_30[] =
{
    { L"Main Color", 0x7c510, 0x7c530, indexSF2Sprites_Cammy, 0x00 },
    // Unused { L"Extra 00", 0x7c530, 0x7c550 },
    { L"Super Trail 1", 0x7c550, 0x7c570, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 2", 0x7c570, 0x7c590, indexSF2Sprites_Cammy, 0x00 },
    { L"Super Trail 3", 0x7c590, 0x7c5b0, indexSF2Sprites_Cammy, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_11[] =
{
    { L"Main Color", 0x7c5da, 0x7c5fa, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c5fa, 0x7c61a },
    { L"Super Trail 1", 0x7c61a, 0x7c63a, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7c63a, 0x7c65a, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7c65a, 0x7c67a, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_12[] =
{
    { L"Main Color", 0x7c67c, 0x7c69c, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c69c, 0x7c6bc },
    { L"Super Trail 1", 0x7c6bc, 0x7c6dc, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7c6dc, 0x7c6fc, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7c6fc, 0x7c71c, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_13[] =
{
    { L"Main Color", 0x7c71e, 0x7c73e, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c73e, 0x7c75e },
    { L"Super Trail 1", 0x7c75e, 0x7c77e, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7c77e, 0x7c79e, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7c79e, 0x7c7be, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_14[] =
{
    { L"Main Color", 0x7c7c0, 0x7c7e0, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c7e0, 0x7c800 },
    { L"Super Trail 1", 0x7c800, 0x7c820, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7c820, 0x7c840, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7c840, 0x7c860, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_15[] =
{
    { L"Main Color", 0x7c862, 0x7c882, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c882, 0x7c8a2 },
    { L"Super Trail 1", 0x7c8a2, 0x7c8c2, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7c8c2, 0x7c8e2, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7c8e2, 0x7c902, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_16[] =
{
    { L"Main Color", 0x7c904, 0x7c924, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c924, 0x7c944 },
    { L"Super Trail 1", 0x7c944, 0x7c964, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7c964, 0x7c984, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7c984, 0x7c9a4, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_17[] =
{
    { L"Main Color", 0x7c9a6, 0x7c9c6, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7c9c6, 0x7c9e6 },
    { L"Super Trail 1", 0x7c9e6, 0x7ca06, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7ca06, 0x7ca26, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7ca26, 0x7ca46, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_18[] =
{
    { L"Main Color", 0x7ca48, 0x7ca68, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7ca68, 0x7ca88 },
    { L"Super Trail 1", 0x7ca88, 0x7caa8, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7caa8, 0x7cac8, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cac8, 0x7cae8, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_19[] =
{
    { L"Main Color", 0x7caea, 0x7cb0a, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7cb0a, 0x7cb2a },
    { L"Super Trail 1", 0x7cb2a, 0x7cb4a, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cb4a, 0x7cb6a, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cb6a, 0x7cb8a, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_20[] =
{
    { L"Main Color", 0x7cb8c, 0x7cbac, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7cbac, 0x7cbcc },
    { L"Super Trail 1", 0x7cbcc, 0x7cbec, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cbec, 0x7cc0c, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cc0c, 0x7cc2c, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_21[] =
{
    { L"Main Color", 0x7cc2e, 0x7cc4e, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7cc4e, 0x7cc6e },
    { L"Super Trail 1", 0x7cc6e, 0x7cc8e, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cc8e, 0x7ccae, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7ccae, 0x7ccce, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_22[] =
{
    { L"Main Color", 0x7ccd0, 0x7ccf0, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7ccf0, 0x7cd10 },
    { L"Super Trail 1", 0x7cd10, 0x7cd30, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cd30, 0x7cd50, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cd50, 0x7cd70, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_23[] =
{
    { L"Main Color", 0x7cd72, 0x7cd92, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7cd92, 0x7cdb2 },
    { L"Super Trail 1", 0x7cdb2, 0x7cdd2, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cdd2, 0x7cdf2, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cdf2, 0x7ce12, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_24[] =
{
    { L"Main Color", 0x7ce14, 0x7ce34, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7ce34, 0x7ce54 },
    { L"Super Trail 1", 0x7ce54, 0x7ce74, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7ce74, 0x7ce94, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7ce94, 0x7ceb4, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_25[] =
{
    { L"Main Color", 0x7ceb6, 0x7ced6, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7ced6, 0x7cef6 },
    { L"Super Trail 1", 0x7cef6, 0x7cf16, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cf16, 0x7cf36, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cf36, 0x7cf56, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_26[] =
{
    { L"Main Color", 0x7cf58, 0x7cf78, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7cf78, 0x7cf98 },
    { L"Super Trail 1", 0x7cf98, 0x7cfb8, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7cfb8, 0x7cfd8, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7cfd8, 0x7cff8, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_27[] =
{
    { L"Main Color", 0x7cffa, 0x7d01a, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7d01a, 0x7d03a },
    { L"Super Trail 1", 0x7d03a, 0x7d05a, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7d05a, 0x7d07a, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7d07a, 0x7d09a, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_28[] =
{
    { L"Main Color", 0x7d09c, 0x7d0bc, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7d0bc, 0x7d0dc },
    { L"Super Trail 1", 0x7d0dc, 0x7d0fc, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7d0fc, 0x7d11c, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7d11c, 0x7d13c, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_29[] =
{
    { L"Main Color", 0x7d13e, 0x7d15e, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7d15e, 0x7d17e },
    { L"Super Trail 1", 0x7d17e, 0x7d19e, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7d19e, 0x7d1be, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7d1be, 0x7d1de, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_THawk_09NL_30[] =
{
    { L"Main Color", 0x7d1e0, 0x7d200, indexSF2Sprites_THawk, 0x00 },
    // Unused { L"Extra 00", 0x7d200, 0x7d220 },
    { L"Super Trail 1", 0x7d220, 0x7d240, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 2", 0x7d240, 0x7d260, indexSF2Sprites_THawk, 0x00 },
    { L"Super Trail 3", 0x7d260, 0x7d280, indexSF2Sprites_THawk, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_11[] =
{
    { L"Main Color", 0x7d2aa, 0x7d2ca, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d2ca, 0x7d2ea },
    { L"Super Trail 1", 0x7d2ea, 0x7d30a, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d30a, 0x7d32a, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d32a, 0x7d34a, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_12[] =
{
    { L"Main Color", 0x7d34c, 0x7d36c, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d36c, 0x7d38c },
    { L"Super Trail 1", 0x7d38c, 0x7d3ac, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d3ac, 0x7d3cc, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d3cc, 0x7d3ec, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_13[] =
{
    { L"Main Color", 0x7d3ee, 0x7d40e, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d40e, 0x7d42e },
    { L"Super Trail 1", 0x7d42e, 0x7d44e, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d44e, 0x7d46e, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d46e, 0x7d48e, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_14[] =
{
    { L"Main Color", 0x7d490, 0x7d4b0, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d4b0, 0x7d4d0 },
    { L"Super Trail 1", 0x7d4d0, 0x7d4f0, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d4f0, 0x7d510, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d510, 0x7d530, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_15[] =
{
    { L"Main Color", 0x7d532, 0x7d552, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d552, 0x7d572 },
    { L"Super Trail 1", 0x7d572, 0x7d592, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d592, 0x7d5b2, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d5b2, 0x7d5d2, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_16[] =
{
    { L"Main Color", 0x7d5d4, 0x7d5f4, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d5f4, 0x7d614 },
    { L"Super Trail 1", 0x7d614, 0x7d634, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d634, 0x7d654, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d654, 0x7d674, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_17[] =
{
    { L"Main Color", 0x7d676, 0x7d696, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d696, 0x7d6b6 },
    { L"Super Trail 1", 0x7d6b6, 0x7d6d6, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d6d6, 0x7d6f6, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d6f6, 0x7d716, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_18[] =
{
    { L"Main Color", 0x7d718, 0x7d738, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d738, 0x7d758 },
    { L"Super Trail 1", 0x7d758, 0x7d778, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d778, 0x7d798, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d798, 0x7d7b8, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_19[] =
{
    { L"Main Color", 0x7d7ba, 0x7d7da, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d7da, 0x7d7fa },
    { L"Super Trail 1", 0x7d7fa, 0x7d81a, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d81a, 0x7d83a, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d83a, 0x7d85a, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_20[] =
{
    { L"Main Color", 0x7d85c, 0x7d87c, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d87c, 0x7d89c },
    { L"Super Trail 1", 0x7d89c, 0x7d8bc, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d8bc, 0x7d8dc, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d8dc, 0x7d8fc, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_21[] =
{
    { L"Main Color", 0x7d8fe, 0x7d91e, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d91e, 0x7d93e },
    { L"Super Trail 1", 0x7d93e, 0x7d95e, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7d95e, 0x7d97e, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7d97e, 0x7d99e, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_22[] =
{
    { L"Main Color", 0x7d9a0, 0x7d9c0, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7d9c0, 0x7d9e0 },
    { L"Super Trail 1", 0x7d9e0, 0x7da00, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7da00, 0x7da20, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7da20, 0x7da40, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_23[] =
{
    { L"Main Color", 0x7da42, 0x7da62, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7da62, 0x7da82 },
    { L"Super Trail 1", 0x7da82, 0x7daa2, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7daa2, 0x7dac2, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7dac2, 0x7dae2, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_24[] =
{
    { L"Main Color", 0x7dae4, 0x7db04, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7db04, 0x7db24 },
    { L"Super Trail 1", 0x7db24, 0x7db44, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7db44, 0x7db64, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7db64, 0x7db84, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_25[] =
{
    { L"Main Color", 0x7db86, 0x7dba6, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7dba6, 0x7dbc6 },
    { L"Super Trail 1", 0x7dbc6, 0x7dbe6, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7dbe6, 0x7dc06, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7dc06, 0x7dc26, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_26[] =
{
    { L"Main Color", 0x7dc28, 0x7dc48, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7dc48, 0x7dc68 },
    { L"Super Trail 1", 0x7dc68, 0x7dc88, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7dc88, 0x7dca8, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7dca8, 0x7dcc8, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_27[] =
{
    { L"Main Color", 0x7dcca, 0x7dcea, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7dcea, 0x7dd0a },
    { L"Super Trail 1", 0x7dd0a, 0x7dd2a, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7dd2a, 0x7dd4a, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7dd4a, 0x7dd6a, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_28[] =
{
    { L"Main Color", 0x7dd6c, 0x7dd8c, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7dd8c, 0x7ddac },
    { L"Super Trail 1", 0x7ddac, 0x7ddcc, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7ddcc, 0x7ddec, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7ddec, 0x7de0c, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_29[] =
{
    { L"Main Color", 0x7de0e, 0x7de2e, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7de2e, 0x7de4e },
    { L"Super Trail 1", 0x7de4e, 0x7de6e, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7de6e, 0x7de8e, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7de8e, 0x7deae, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_FeiLong_09NL_30[] =
{
    { L"Main Color", 0x7deb0, 0x7ded0, indexSF2Sprites_FeiLong, 0x00 },
    // Unused { L"Extra 00", 0x7ded0, 0x7def0 },
    { L"Super Trail 1", 0x7def0, 0x7df10, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 2", 0x7df10, 0x7df30, indexSF2Sprites_FeiLong, 0x00 },
    { L"Super Trail 3", 0x7df30, 0x7df50, indexSF2Sprites_FeiLong, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_11[] =
{
    { L"Main Color", 0x7df7a, 0x7df9a, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7df9a, 0x7dfba, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7dfba, 0x7dfda, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7dfda, 0x7dffa, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7dffa, 0x7e01a, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_12[] =
{
    { L"Main Color", 0x7e01c, 0x7e03c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e03c, 0x7e05c, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e05c, 0x7e07c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e07c, 0x7e09c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e09c, 0x7e0bc, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_13[] =
{
    { L"Main Color", 0x7e0be, 0x7e0de, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e0de, 0x7e0fe, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e0fe, 0x7e11e, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e11e, 0x7e13e, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e13e, 0x7e15e, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_14[] =
{
    { L"Main Color", 0x7e160, 0x7e180, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e180, 0x7e1a0, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e1a0, 0x7e1c0, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e1c0, 0x7e1e0, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e1e0, 0x7e200, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_15[] =
{
    { L"Main Color", 0x7e202, 0x7e222, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e222, 0x7e242, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e242, 0x7e262, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e262, 0x7e282, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e282, 0x7e2a2, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_16[] =
{
    { L"Main Color", 0x7e2a4, 0x7e2c4, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e2c4, 0x7e2e4, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e2e4, 0x7e304, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e304, 0x7e324, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e324, 0x7e344, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_17[] =
{
    { L"Main Color", 0x7e346, 0x7e366, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e366, 0x7e386, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e386, 0x7e3a6, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e3a6, 0x7e3c6, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e3c6, 0x7e3e6, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_18[] =
{
    { L"Main Color", 0x7e3e8, 0x7e408, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e408, 0x7e428, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e428, 0x7e448, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e448, 0x7e468, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e468, 0x7e488, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_19[] =
{
    { L"Main Color", 0x7e48a, 0x7e4aa, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e4aa, 0x7e4ca, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e4ca, 0x7e4ea, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e4ea, 0x7e50a, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e50a, 0x7e52a, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_20[] =
{
    { L"Main Color", 0x7e52c, 0x7e54c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e54c, 0x7e56c, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e56c, 0x7e58c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e58c, 0x7e5ac, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e5ac, 0x7e5cc, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_21[] =
{
    { L"Main Color", 0x7e5ce, 0x7e5ee, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e5ee, 0x7e60e, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e60e, 0x7e62e, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e62e, 0x7e64e, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e64e, 0x7e66e, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_22[] =
{
    { L"Main Color", 0x7e670, 0x7e690, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e690, 0x7e6b0, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e6b0, 0x7e6d0, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e6d0, 0x7e6f0, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e6f0, 0x7e710, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_23[] =
{
    { L"Main Color", 0x7e712, 0x7e732, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e732, 0x7e752, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e752, 0x7e772, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e772, 0x7e792, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e792, 0x7e7b2, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_24[] =
{
    { L"Main Color", 0x7e7b4, 0x7e7d4, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e7d4, 0x7e7f4, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e7f4, 0x7e814, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e814, 0x7e834, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e834, 0x7e854, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_25[] =
{
    { L"Main Color", 0x7e856, 0x7e876, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e876, 0x7e896, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e896, 0x7e8b6, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e8b6, 0x7e8d6, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e8d6, 0x7e8f6, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_26[] =
{
    { L"Main Color", 0x7e8f8, 0x7e918, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e918, 0x7e938, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e938, 0x7e958, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e958, 0x7e978, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7e978, 0x7e998, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_27[] =
{
    { L"Main Color", 0x7e99a, 0x7e9ba, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7e9ba, 0x7e9da, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7e9da, 0x7e9fa, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7e9fa, 0x7ea1a, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7ea1a, 0x7ea3a, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_28[] =
{
    { L"Main Color", 0x7ea3c, 0x7ea5c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7ea5c, 0x7ea7c, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7ea7c, 0x7ea9c, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7ea9c, 0x7eabc, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7eabc, 0x7eadc, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_29[] =
{
    { L"Main Color", 0x7eade, 0x7eafe, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7eafe, 0x7eb1e, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7eb1e, 0x7eb3e, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7eb3e, 0x7eb5e, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7eb5e, 0x7eb7e, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_DeeJay_09NL_30[] =
{
    { L"Main Color", 0x7eb80, 0x7eba0, indexSF2Sprites_DeeJay, 0x00 },
    { L"Air Slasher", 0x7eba0, 0x7ebc0, indexSF2Sprites_DeeJay, 0x01 },
    { L"Super Trail 1", 0x7ebc0, 0x7ebe0, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 2", 0x7ebe0, 0x7ec00, indexSF2Sprites_DeeJay, 0x00 },
    { L"Super Trail 3", 0x7ec00, 0x7ec20, indexSF2Sprites_DeeJay, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_01[] =
{
    { L"Main Color", 0x7ec5e, 0x7ec7e, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7ec7e, 0x7ec9e, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7ec9e, 0x7ecbe, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7ecbe, 0x7ecde, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7ecde, 0x7ecfe, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_02[] =
{
    { L"Main Color", 0x7ed00, 0x7ed20, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7ed20, 0x7ed40, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7ed40, 0x7ed60, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7ed60, 0x7ed80, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7ed80, 0x7eda0, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_03[] =
{
    { L"Main Color", 0x7eda2, 0x7edc2, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7edc2, 0x7ede2, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7ede2, 0x7ee02, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7ee02, 0x7ee22, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7ee22, 0x7ee42, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_04[] =
{
    { L"Main Color", 0x7ee44, 0x7ee64, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7ee64, 0x7ee84, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7ee84, 0x7eea4, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7eea4, 0x7eec4, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7eec4, 0x7eee4, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_05[] =
{
    { L"Main Color", 0x7eee6, 0x7ef06, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7ef06, 0x7ef26, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7ef26, 0x7ef46, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7ef46, 0x7ef66, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7ef66, 0x7ef86, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_06[] =
{
    { L"Main Color", 0x7ef88, 0x7efa8, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7efa8, 0x7efc8, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7efc8, 0x7efe8, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7efe8, 0x7f008, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f008, 0x7f028, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_07[] =
{
    { L"Main Color", 0x7f02a, 0x7f04a, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f04a, 0x7f06a, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f06a, 0x7f08a, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f08a, 0x7f0aa, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f0aa, 0x7f0ca, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_08[] =
{
    { L"Main Color", 0x7f0cc, 0x7f0ec, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f0ec, 0x7f10c, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f10c, 0x7f12c, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f12c, 0x7f14c, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f14c, 0x7f16c, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_09[] =
{
    { L"Main Color", 0x7f16e, 0x7f18e, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f18e, 0x7f1ae, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f1ae, 0x7f1ce, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f1ce, 0x7f1ee, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f1ee, 0x7f20e, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_10[] =
{
    { L"Main Color", 0x7f210, 0x7f230, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f230, 0x7f250, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f250, 0x7f270, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f270, 0x7f290, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f290, 0x7f2b0, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_11[] =
{
    { L"Main Color", 0x7f2b2, 0x7f2d2, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f2d2, 0x7f2f2, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f2f2, 0x7f312, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f312, 0x7f332, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f332, 0x7f352, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_12[] =
{
    { L"Main Color", 0x7f354, 0x7f374, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f374, 0x7f394, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f394, 0x7f3b4, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f3b4, 0x7f3d4, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f3d4, 0x7f3f4, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_13[] =
{
    { L"Main Color", 0x7f3f6, 0x7f416, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f416, 0x7f436, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f436, 0x7f456, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f456, 0x7f476, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f476, 0x7f496, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_14[] =
{
    { L"Main Color", 0x7f498, 0x7f4b8, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f4b8, 0x7f4d8, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f4d8, 0x7f4f8, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f4f8, 0x7f518, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f518, 0x7f538, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_15[] =
{
    { L"Main Color", 0x7f53a, 0x7f55a, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f55a, 0x7f57a, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f57a, 0x7f59a, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f59a, 0x7f5ba, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f5ba, 0x7f5da, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_16[] =
{
    { L"Main Color", 0x7f5dc, 0x7f5fc, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f5fc, 0x7f61c, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f61c, 0x7f63c, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f63c, 0x7f65c, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f65c, 0x7f67c, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_17[] =
{
    { L"Main Color", 0x7f67e, 0x7f69e, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f69e, 0x7f6be, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f6be, 0x7f6de, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f6de, 0x7f6fe, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f6fe, 0x7f71e, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_18[] =
{
    { L"Main Color", 0x7f720, 0x7f740, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f740, 0x7f760, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f760, 0x7f780, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f780, 0x7f7a0, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f7a0, 0x7f7c0, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_19[] =
{
    { L"Main Color", 0x7f7c2, 0x7f7e2, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f7e2, 0x7f802, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f802, 0x7f822, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f822, 0x7f842, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f842, 0x7f862, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_20[] =
{
    { L"Main Color", 0x7f864, 0x7f884, indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884, 0x7f8a4, indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4, 0x7f8c4, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4, 0x7f8e4, indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4, 0x7f904, indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_21[] =
{
    { L"Main Color", 0x7f864 + (1 * 0xa2), 0x7f884 + (1 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (1 * 0xa2), 0x7f8a4 + (1 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (1 * 0xa2), 0x7f8c4 + (1 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (1 * 0xa2), 0x7f8e4 + (1 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (1 * 0xa2), 0x7f904 + (1 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_22[] =
{
    { L"Main Color", 0x7f864 + (2 * 0xa2), 0x7f884 + (2 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (2 * 0xa2), 0x7f8a4 + (2 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (2 * 0xa2), 0x7f8c4 + (2 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (2 * 0xa2), 0x7f8e4 + (2 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (2 * 0xa2), 0x7f904 + (2 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_23[] =
{
    { L"Main Color", 0x7f864 + (3 * 0xa2), 0x7f884 + (3 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (3 * 0xa2), 0x7f8a4 + (3 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (3 * 0xa2), 0x7f8c4 + (3 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (3 * 0xa2), 0x7f8e4 + (3 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (3 * 0xa2), 0x7f904 + (3 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_24[] =
{
    { L"Main Color", 0x7f864 + (4 * 0xa2), 0x7f884 + (4 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (4 * 0xa2), 0x7f8a4 + (4 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (4 * 0xa2), 0x7f8c4 + (4 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (4 * 0xa2), 0x7f8e4 + (4 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (4 * 0xa2), 0x7f904 + (4 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_25[] =
{
    { L"Main Color", 0x7f864 + (5 * 0xa2), 0x7f884 + (5 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (5 * 0xa2), 0x7f8a4 + (5 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (5 * 0xa2), 0x7f8c4 + (5 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (5 * 0xa2), 0x7f8e4 + (5 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (5 * 0xa2), 0x7f904 + (5 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_26[] =
{
    { L"Main Color", 0x7f864 + (6 * 0xa2), 0x7f884 + (6 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (6 * 0xa2), 0x7f8a4 + (6 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (6 * 0xa2), 0x7f8c4 + (6 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (6 * 0xa2), 0x7f8e4 + (6 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (6 * 0xa2), 0x7f904 + (6 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_27[] =
{
    { L"Main Color", 0x7f864 + (7 * 0xa2), 0x7f884 + (7 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (7 * 0xa2), 0x7f8a4 + (7 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (7 * 0xa2), 0x7f8c4 + (7 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (7 * 0xa2), 0x7f8e4 + (7 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (7 * 0xa2), 0x7f904 + (7 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_28[] =
{
    { L"Main Color", 0x7f864 + (8 * 0xa2), 0x7f884 + (8 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (8 * 0xa2), 0x7f8a4 + (8 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (8 * 0xa2), 0x7f8c4 + (8 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (8 * 0xa2), 0x7f8e4 + (8 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (8 * 0xa2), 0x7f904 + (8 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_29[] =
{
    { L"Main Color", 0x7f864 + (9 * 0xa2), 0x7f884 + (9 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (9 * 0xa2), 0x7f8a4 + (9 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (9 * 0xa2), 0x7f8c4 + (9 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (9 * 0xa2), 0x7f8e4 + (9 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (9 * 0xa2), 0x7f904 + (9 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_Gouki_09NL_30[] =
{
    { L"Main Color", 0x7f864 + (10 * 0xa2), 0x7f884 + (10 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Hadouken", 0x7f884 + (10 * 0xa2), 0x7f8a4 + (10 * 0xa2), indexSF2Sprites_Gouki, 0x01 },
    { L"Super Trail 1", 0x7f8a4 + (10 * 0xa2), 0x7f8c4 + (10 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 2", 0x7f8c4 + (10 * 0xa2), 0x7f8e4 + (10 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
    { L"Super Trail 3", 0x7f8e4 + (10 * 0xa2), 0x7f904 + (10 * 0xa2), indexSF2Sprites_Gouki, 0x00 },
};

const sDescTreeNode SSF2T_A_Ryu_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_11, ARRAYSIZE(SSF2T_A_Ryu_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_12, ARRAYSIZE(SSF2T_A_Ryu_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_13, ARRAYSIZE(SSF2T_A_Ryu_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_14, ARRAYSIZE(SSF2T_A_Ryu_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_15, ARRAYSIZE(SSF2T_A_Ryu_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_16, ARRAYSIZE(SSF2T_A_Ryu_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_17, ARRAYSIZE(SSF2T_A_Ryu_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_18, ARRAYSIZE(SSF2T_A_Ryu_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_19, ARRAYSIZE(SSF2T_A_Ryu_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_20, ARRAYSIZE(SSF2T_A_Ryu_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_21, ARRAYSIZE(SSF2T_A_Ryu_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_22, ARRAYSIZE(SSF2T_A_Ryu_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_23, ARRAYSIZE(SSF2T_A_Ryu_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_24, ARRAYSIZE(SSF2T_A_Ryu_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_25, ARRAYSIZE(SSF2T_A_Ryu_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_26, ARRAYSIZE(SSF2T_A_Ryu_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_27, ARRAYSIZE(SSF2T_A_Ryu_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_28, ARRAYSIZE(SSF2T_A_Ryu_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_29, ARRAYSIZE(SSF2T_A_Ryu_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_30, ARRAYSIZE(SSF2T_A_Ryu_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Ryu_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_EHonda_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_11, ARRAYSIZE(SSF2T_A_EHonda_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_12, ARRAYSIZE(SSF2T_A_EHonda_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_13, ARRAYSIZE(SSF2T_A_EHonda_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_14, ARRAYSIZE(SSF2T_A_EHonda_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_15, ARRAYSIZE(SSF2T_A_EHonda_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_16, ARRAYSIZE(SSF2T_A_EHonda_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_17, ARRAYSIZE(SSF2T_A_EHonda_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_18, ARRAYSIZE(SSF2T_A_EHonda_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_19, ARRAYSIZE(SSF2T_A_EHonda_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_20, ARRAYSIZE(SSF2T_A_EHonda_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_21, ARRAYSIZE(SSF2T_A_EHonda_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_22, ARRAYSIZE(SSF2T_A_EHonda_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_23, ARRAYSIZE(SSF2T_A_EHonda_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_24, ARRAYSIZE(SSF2T_A_EHonda_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_25, ARRAYSIZE(SSF2T_A_EHonda_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_26, ARRAYSIZE(SSF2T_A_EHonda_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_27, ARRAYSIZE(SSF2T_A_EHonda_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_28, ARRAYSIZE(SSF2T_A_EHonda_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_29, ARRAYSIZE(SSF2T_A_EHonda_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_30, ARRAYSIZE(SSF2T_A_EHonda_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_EHonda_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Blanka_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_11, ARRAYSIZE(SSF2T_A_Blanka_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_12, ARRAYSIZE(SSF2T_A_Blanka_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_13, ARRAYSIZE(SSF2T_A_Blanka_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_14, ARRAYSIZE(SSF2T_A_Blanka_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_15, ARRAYSIZE(SSF2T_A_Blanka_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_16, ARRAYSIZE(SSF2T_A_Blanka_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_17, ARRAYSIZE(SSF2T_A_Blanka_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_18, ARRAYSIZE(SSF2T_A_Blanka_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_19, ARRAYSIZE(SSF2T_A_Blanka_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_20, ARRAYSIZE(SSF2T_A_Blanka_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_21, ARRAYSIZE(SSF2T_A_Blanka_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_22, ARRAYSIZE(SSF2T_A_Blanka_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_23, ARRAYSIZE(SSF2T_A_Blanka_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_24, ARRAYSIZE(SSF2T_A_Blanka_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_25, ARRAYSIZE(SSF2T_A_Blanka_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_26, ARRAYSIZE(SSF2T_A_Blanka_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_27, ARRAYSIZE(SSF2T_A_Blanka_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_28, ARRAYSIZE(SSF2T_A_Blanka_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_29, ARRAYSIZE(SSF2T_A_Blanka_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_30, ARRAYSIZE(SSF2T_A_Blanka_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Blanka_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Guile_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_11, ARRAYSIZE(SSF2T_A_Guile_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_12, ARRAYSIZE(SSF2T_A_Guile_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_13, ARRAYSIZE(SSF2T_A_Guile_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_14, ARRAYSIZE(SSF2T_A_Guile_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_15, ARRAYSIZE(SSF2T_A_Guile_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_16, ARRAYSIZE(SSF2T_A_Guile_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_17, ARRAYSIZE(SSF2T_A_Guile_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_18, ARRAYSIZE(SSF2T_A_Guile_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_19, ARRAYSIZE(SSF2T_A_Guile_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_20, ARRAYSIZE(SSF2T_A_Guile_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_21, ARRAYSIZE(SSF2T_A_Guile_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_22, ARRAYSIZE(SSF2T_A_Guile_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_23, ARRAYSIZE(SSF2T_A_Guile_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_24, ARRAYSIZE(SSF2T_A_Guile_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_25, ARRAYSIZE(SSF2T_A_Guile_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_26, ARRAYSIZE(SSF2T_A_Guile_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_27, ARRAYSIZE(SSF2T_A_Guile_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_28, ARRAYSIZE(SSF2T_A_Guile_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_29, ARRAYSIZE(SSF2T_A_Guile_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_30, ARRAYSIZE(SSF2T_A_Guile_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Guile_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Ken_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_11, ARRAYSIZE(SSF2T_A_Ken_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_12, ARRAYSIZE(SSF2T_A_Ken_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_13, ARRAYSIZE(SSF2T_A_Ken_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_14, ARRAYSIZE(SSF2T_A_Ken_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_15, ARRAYSIZE(SSF2T_A_Ken_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_16, ARRAYSIZE(SSF2T_A_Ken_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_17, ARRAYSIZE(SSF2T_A_Ken_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_18, ARRAYSIZE(SSF2T_A_Ken_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_19, ARRAYSIZE(SSF2T_A_Ken_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_20, ARRAYSIZE(SSF2T_A_Ken_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_21, ARRAYSIZE(SSF2T_A_Ken_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_22, ARRAYSIZE(SSF2T_A_Ken_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_23, ARRAYSIZE(SSF2T_A_Ken_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_24, ARRAYSIZE(SSF2T_A_Ken_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_25, ARRAYSIZE(SSF2T_A_Ken_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_26, ARRAYSIZE(SSF2T_A_Ken_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_27, ARRAYSIZE(SSF2T_A_Ken_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_28, ARRAYSIZE(SSF2T_A_Ken_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_29, ARRAYSIZE(SSF2T_A_Ken_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_30, ARRAYSIZE(SSF2T_A_Ken_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Ken_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_ChunLi_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_11, ARRAYSIZE(SSF2T_A_ChunLi_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_12, ARRAYSIZE(SSF2T_A_ChunLi_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_13, ARRAYSIZE(SSF2T_A_ChunLi_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_14, ARRAYSIZE(SSF2T_A_ChunLi_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_15, ARRAYSIZE(SSF2T_A_ChunLi_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_16, ARRAYSIZE(SSF2T_A_ChunLi_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_17, ARRAYSIZE(SSF2T_A_ChunLi_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_18, ARRAYSIZE(SSF2T_A_ChunLi_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_19, ARRAYSIZE(SSF2T_A_ChunLi_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_20, ARRAYSIZE(SSF2T_A_ChunLi_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_21, ARRAYSIZE(SSF2T_A_ChunLi_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_22, ARRAYSIZE(SSF2T_A_ChunLi_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_23, ARRAYSIZE(SSF2T_A_ChunLi_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_24, ARRAYSIZE(SSF2T_A_ChunLi_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_25, ARRAYSIZE(SSF2T_A_ChunLi_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_26, ARRAYSIZE(SSF2T_A_ChunLi_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_27, ARRAYSIZE(SSF2T_A_ChunLi_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_28, ARRAYSIZE(SSF2T_A_ChunLi_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_29, ARRAYSIZE(SSF2T_A_ChunLi_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_30, ARRAYSIZE(SSF2T_A_ChunLi_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_ChunLi_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Zangief_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_11, ARRAYSIZE(SSF2T_A_Zangief_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_12, ARRAYSIZE(SSF2T_A_Zangief_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_13, ARRAYSIZE(SSF2T_A_Zangief_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_14, ARRAYSIZE(SSF2T_A_Zangief_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_15, ARRAYSIZE(SSF2T_A_Zangief_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_16, ARRAYSIZE(SSF2T_A_Zangief_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_17, ARRAYSIZE(SSF2T_A_Zangief_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_18, ARRAYSIZE(SSF2T_A_Zangief_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_19, ARRAYSIZE(SSF2T_A_Zangief_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_20, ARRAYSIZE(SSF2T_A_Zangief_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_21, ARRAYSIZE(SSF2T_A_Zangief_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_22, ARRAYSIZE(SSF2T_A_Zangief_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_23, ARRAYSIZE(SSF2T_A_Zangief_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_24, ARRAYSIZE(SSF2T_A_Zangief_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_25, ARRAYSIZE(SSF2T_A_Zangief_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_26, ARRAYSIZE(SSF2T_A_Zangief_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_27, ARRAYSIZE(SSF2T_A_Zangief_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_28, ARRAYSIZE(SSF2T_A_Zangief_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_29, ARRAYSIZE(SSF2T_A_Zangief_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_30, ARRAYSIZE(SSF2T_A_Zangief_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Zangief_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Dhalsim_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_11, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_12, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_13, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_14, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_15, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_16, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_17, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_18, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_19, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_20, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_21, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_22, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_23, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_24, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_25, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_26, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_27, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_28, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_29, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_30, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Bison_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_11, ARRAYSIZE(SSF2T_A_Bison_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_12, ARRAYSIZE(SSF2T_A_Bison_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_13, ARRAYSIZE(SSF2T_A_Bison_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_14, ARRAYSIZE(SSF2T_A_Bison_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_15, ARRAYSIZE(SSF2T_A_Bison_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_16, ARRAYSIZE(SSF2T_A_Bison_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_17, ARRAYSIZE(SSF2T_A_Bison_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_18, ARRAYSIZE(SSF2T_A_Bison_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_19, ARRAYSIZE(SSF2T_A_Bison_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_20, ARRAYSIZE(SSF2T_A_Bison_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_21, ARRAYSIZE(SSF2T_A_Bison_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_22, ARRAYSIZE(SSF2T_A_Bison_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_23, ARRAYSIZE(SSF2T_A_Bison_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_24, ARRAYSIZE(SSF2T_A_Bison_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_25, ARRAYSIZE(SSF2T_A_Bison_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_26, ARRAYSIZE(SSF2T_A_Bison_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_27, ARRAYSIZE(SSF2T_A_Bison_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_28, ARRAYSIZE(SSF2T_A_Bison_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_29, ARRAYSIZE(SSF2T_A_Bison_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_30, ARRAYSIZE(SSF2T_A_Bison_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Bison_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Sagat_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_11, ARRAYSIZE(SSF2T_A_Sagat_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_12, ARRAYSIZE(SSF2T_A_Sagat_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_13, ARRAYSIZE(SSF2T_A_Sagat_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_14, ARRAYSIZE(SSF2T_A_Sagat_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_15, ARRAYSIZE(SSF2T_A_Sagat_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_16, ARRAYSIZE(SSF2T_A_Sagat_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_17, ARRAYSIZE(SSF2T_A_Sagat_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_18, ARRAYSIZE(SSF2T_A_Sagat_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_19, ARRAYSIZE(SSF2T_A_Sagat_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_20, ARRAYSIZE(SSF2T_A_Sagat_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_21, ARRAYSIZE(SSF2T_A_Sagat_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_22, ARRAYSIZE(SSF2T_A_Sagat_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_23, ARRAYSIZE(SSF2T_A_Sagat_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_24, ARRAYSIZE(SSF2T_A_Sagat_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_25, ARRAYSIZE(SSF2T_A_Sagat_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_26, ARRAYSIZE(SSF2T_A_Sagat_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_27, ARRAYSIZE(SSF2T_A_Sagat_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_28, ARRAYSIZE(SSF2T_A_Sagat_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_29, ARRAYSIZE(SSF2T_A_Sagat_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_30, ARRAYSIZE(SSF2T_A_Sagat_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Sagat_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Balrog_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_11, ARRAYSIZE(SSF2T_A_Balrog_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_12, ARRAYSIZE(SSF2T_A_Balrog_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_13, ARRAYSIZE(SSF2T_A_Balrog_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_14, ARRAYSIZE(SSF2T_A_Balrog_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_15, ARRAYSIZE(SSF2T_A_Balrog_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_16, ARRAYSIZE(SSF2T_A_Balrog_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_17, ARRAYSIZE(SSF2T_A_Balrog_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_18, ARRAYSIZE(SSF2T_A_Balrog_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_19, ARRAYSIZE(SSF2T_A_Balrog_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_20, ARRAYSIZE(SSF2T_A_Balrog_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_21, ARRAYSIZE(SSF2T_A_Balrog_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_22, ARRAYSIZE(SSF2T_A_Balrog_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_23, ARRAYSIZE(SSF2T_A_Balrog_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_24, ARRAYSIZE(SSF2T_A_Balrog_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_25, ARRAYSIZE(SSF2T_A_Balrog_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_26, ARRAYSIZE(SSF2T_A_Balrog_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_27, ARRAYSIZE(SSF2T_A_Balrog_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_28, ARRAYSIZE(SSF2T_A_Balrog_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_29, ARRAYSIZE(SSF2T_A_Balrog_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_30, ARRAYSIZE(SSF2T_A_Balrog_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Balrog_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Vega_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_11, ARRAYSIZE(SSF2T_A_Vega_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_12, ARRAYSIZE(SSF2T_A_Vega_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_13, ARRAYSIZE(SSF2T_A_Vega_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_14, ARRAYSIZE(SSF2T_A_Vega_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_15, ARRAYSIZE(SSF2T_A_Vega_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_16, ARRAYSIZE(SSF2T_A_Vega_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_17, ARRAYSIZE(SSF2T_A_Vega_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_18, ARRAYSIZE(SSF2T_A_Vega_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_19, ARRAYSIZE(SSF2T_A_Vega_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_20, ARRAYSIZE(SSF2T_A_Vega_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_21, ARRAYSIZE(SSF2T_A_Vega_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_22, ARRAYSIZE(SSF2T_A_Vega_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_23, ARRAYSIZE(SSF2T_A_Vega_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_24, ARRAYSIZE(SSF2T_A_Vega_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_25, ARRAYSIZE(SSF2T_A_Vega_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_26, ARRAYSIZE(SSF2T_A_Vega_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_27, ARRAYSIZE(SSF2T_A_Vega_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_28, ARRAYSIZE(SSF2T_A_Vega_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_29, ARRAYSIZE(SSF2T_A_Vega_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_30, ARRAYSIZE(SSF2T_A_Vega_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Vega_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Cammy_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_11, ARRAYSIZE(SSF2T_A_Cammy_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_12, ARRAYSIZE(SSF2T_A_Cammy_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_13, ARRAYSIZE(SSF2T_A_Cammy_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_14, ARRAYSIZE(SSF2T_A_Cammy_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_15, ARRAYSIZE(SSF2T_A_Cammy_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_16, ARRAYSIZE(SSF2T_A_Cammy_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_17, ARRAYSIZE(SSF2T_A_Cammy_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_18, ARRAYSIZE(SSF2T_A_Cammy_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_19, ARRAYSIZE(SSF2T_A_Cammy_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_20, ARRAYSIZE(SSF2T_A_Cammy_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_21, ARRAYSIZE(SSF2T_A_Cammy_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_22, ARRAYSIZE(SSF2T_A_Cammy_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_23, ARRAYSIZE(SSF2T_A_Cammy_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_24, ARRAYSIZE(SSF2T_A_Cammy_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_25, ARRAYSIZE(SSF2T_A_Cammy_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_26, ARRAYSIZE(SSF2T_A_Cammy_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_27, ARRAYSIZE(SSF2T_A_Cammy_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_28, ARRAYSIZE(SSF2T_A_Cammy_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_29, ARRAYSIZE(SSF2T_A_Cammy_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_30, ARRAYSIZE(SSF2T_A_Cammy_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Cammy_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_THawk_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_11, ARRAYSIZE(SSF2T_A_THawk_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_12, ARRAYSIZE(SSF2T_A_THawk_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_13, ARRAYSIZE(SSF2T_A_THawk_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_14, ARRAYSIZE(SSF2T_A_THawk_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_15, ARRAYSIZE(SSF2T_A_THawk_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_16, ARRAYSIZE(SSF2T_A_THawk_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_17, ARRAYSIZE(SSF2T_A_THawk_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_18, ARRAYSIZE(SSF2T_A_THawk_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_19, ARRAYSIZE(SSF2T_A_THawk_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_20, ARRAYSIZE(SSF2T_A_THawk_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_21, ARRAYSIZE(SSF2T_A_THawk_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_22, ARRAYSIZE(SSF2T_A_THawk_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_23, ARRAYSIZE(SSF2T_A_THawk_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_24, ARRAYSIZE(SSF2T_A_THawk_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_25, ARRAYSIZE(SSF2T_A_THawk_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_26, ARRAYSIZE(SSF2T_A_THawk_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_27, ARRAYSIZE(SSF2T_A_THawk_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_28, ARRAYSIZE(SSF2T_A_THawk_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_29, ARRAYSIZE(SSF2T_A_THawk_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_30, ARRAYSIZE(SSF2T_A_THawk_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_THawk_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_FeiLong_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_11, ARRAYSIZE(SSF2T_A_FeiLong_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_12, ARRAYSIZE(SSF2T_A_FeiLong_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_13, ARRAYSIZE(SSF2T_A_FeiLong_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_14, ARRAYSIZE(SSF2T_A_FeiLong_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_15, ARRAYSIZE(SSF2T_A_FeiLong_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_16, ARRAYSIZE(SSF2T_A_FeiLong_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_17, ARRAYSIZE(SSF2T_A_FeiLong_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_18, ARRAYSIZE(SSF2T_A_FeiLong_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_19, ARRAYSIZE(SSF2T_A_FeiLong_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_20, ARRAYSIZE(SSF2T_A_FeiLong_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_21, ARRAYSIZE(SSF2T_A_FeiLong_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_22, ARRAYSIZE(SSF2T_A_FeiLong_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_23, ARRAYSIZE(SSF2T_A_FeiLong_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_24, ARRAYSIZE(SSF2T_A_FeiLong_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_25, ARRAYSIZE(SSF2T_A_FeiLong_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_26, ARRAYSIZE(SSF2T_A_FeiLong_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_27, ARRAYSIZE(SSF2T_A_FeiLong_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_28, ARRAYSIZE(SSF2T_A_FeiLong_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_29, ARRAYSIZE(SSF2T_A_FeiLong_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_30, ARRAYSIZE(SSF2T_A_FeiLong_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_FeiLong_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_DeeJay_09NL_COLLECTION[] =
{
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_11, ARRAYSIZE(SSF2T_A_DeeJay_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_12, ARRAYSIZE(SSF2T_A_DeeJay_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_13, ARRAYSIZE(SSF2T_A_DeeJay_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_14, ARRAYSIZE(SSF2T_A_DeeJay_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_15, ARRAYSIZE(SSF2T_A_DeeJay_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_16, ARRAYSIZE(SSF2T_A_DeeJay_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_17, ARRAYSIZE(SSF2T_A_DeeJay_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_18, ARRAYSIZE(SSF2T_A_DeeJay_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_19, ARRAYSIZE(SSF2T_A_DeeJay_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_20, ARRAYSIZE(SSF2T_A_DeeJay_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_21, ARRAYSIZE(SSF2T_A_DeeJay_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_22, ARRAYSIZE(SSF2T_A_DeeJay_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_23, ARRAYSIZE(SSF2T_A_DeeJay_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_24, ARRAYSIZE(SSF2T_A_DeeJay_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_25, ARRAYSIZE(SSF2T_A_DeeJay_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_26, ARRAYSIZE(SSF2T_A_DeeJay_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_27, ARRAYSIZE(SSF2T_A_DeeJay_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_28, ARRAYSIZE(SSF2T_A_DeeJay_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_29, ARRAYSIZE(SSF2T_A_DeeJay_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_30, ARRAYSIZE(SSF2T_A_DeeJay_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_DeeJay_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_Gouki_09NL_COLLECTION[] =
{
    { L"01", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_01, ARRAYSIZE(SSF2T_A_Gouki_09NL_01) },
    { L"02", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_02, ARRAYSIZE(SSF2T_A_Gouki_09NL_02) },
    { L"03", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_03, ARRAYSIZE(SSF2T_A_Gouki_09NL_03) },
    { L"04", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_04, ARRAYSIZE(SSF2T_A_Gouki_09NL_04) },
    { L"05", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_05, ARRAYSIZE(SSF2T_A_Gouki_09NL_05) },
    { L"06", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_06, ARRAYSIZE(SSF2T_A_Gouki_09NL_06) },
    { L"07", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_07, ARRAYSIZE(SSF2T_A_Gouki_09NL_07) },
    { L"08", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_08, ARRAYSIZE(SSF2T_A_Gouki_09NL_08) },
    { L"09", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_09, ARRAYSIZE(SSF2T_A_Gouki_09NL_09) },
    { L"10", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_10, ARRAYSIZE(SSF2T_A_Gouki_09NL_10) },
    { L"11", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_11, ARRAYSIZE(SSF2T_A_Gouki_09NL_11) },
    { L"12", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_12, ARRAYSIZE(SSF2T_A_Gouki_09NL_12) },
    { L"13", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_13, ARRAYSIZE(SSF2T_A_Gouki_09NL_13) },
    { L"14", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_14, ARRAYSIZE(SSF2T_A_Gouki_09NL_14) },
    { L"15", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_15, ARRAYSIZE(SSF2T_A_Gouki_09NL_15) },
    { L"16", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_16, ARRAYSIZE(SSF2T_A_Gouki_09NL_16) },
    { L"17", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_17, ARRAYSIZE(SSF2T_A_Gouki_09NL_17) },
    { L"18", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_18, ARRAYSIZE(SSF2T_A_Gouki_09NL_18) },
    { L"19", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_19, ARRAYSIZE(SSF2T_A_Gouki_09NL_19) },
    { L"20", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_20, ARRAYSIZE(SSF2T_A_Gouki_09NL_20) },
    { L"21", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_21, ARRAYSIZE(SSF2T_A_Gouki_09NL_21) },
    { L"22", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_22, ARRAYSIZE(SSF2T_A_Gouki_09NL_22) },
    { L"23", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_23, ARRAYSIZE(SSF2T_A_Gouki_09NL_23) },
    { L"24", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_24, ARRAYSIZE(SSF2T_A_Gouki_09NL_24) },
    { L"25", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_25, ARRAYSIZE(SSF2T_A_Gouki_09NL_25) },
    { L"26", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_26, ARRAYSIZE(SSF2T_A_Gouki_09NL_26) },
    { L"27", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_27, ARRAYSIZE(SSF2T_A_Gouki_09NL_27) },
    { L"28", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_28, ARRAYSIZE(SSF2T_A_Gouki_09NL_28) },
    { L"29", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_29, ARRAYSIZE(SSF2T_A_Gouki_09NL_29) },
    { L"30", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_30, ARRAYSIZE(SSF2T_A_Gouki_09NL_30) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_PORTRAITS, ARRAYSIZE(SSF2T_A_Gouki_09NL_PORTRAITS) },
};

const sDescTreeNode SSF2T_A_RYU_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_EHONDA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_BLANKA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_GUILE_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_KEN_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_CHUNLI_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_DHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_MBISON_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_SAGAT_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_RYU_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_RYU_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_EHONDA_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_EHONDA_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_BLANKA_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BLANKA_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_GUILE_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_GUILE_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_KEN_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_KEN_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_CHUNLI_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CHUNLI_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_ZANGIEF_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_ZANGIEF_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_DHALSIM_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DHALSIM_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_MBISON_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_MBISON_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_SAGAT_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_SAGAT_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_BALROG_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_03NL_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_VEGA_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_03NL_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_CAMMY_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_03NL_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_THAWK_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_03NL_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_FEILONG_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_03NL_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_DEEJAY_03NL_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_03NL_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_BALROG_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_JAB,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_START,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_BALROG_PORTRAITS_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_VEGA_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_VEGA_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_VEGA_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_CAMMY_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_CAMMY_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_THAWK_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_THAWK_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_FEILONG_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_FEILONG_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_DEEJAY_PORTRAIT_COLLECTION[] =
{
    { L"Jab",           DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_JAB,        ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_JAB) },
    { L"Strong",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_STRONG,     ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_STRONG) },
    { L"Fierce",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_FIERCE,     ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_FIERCE) },
    { L"Short",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_SHORT,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_SHORT) },
    { L"Forward",       DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_FORWARD,    ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_FORWARD) },
    { L"Roundhouse",    DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_ROUNDHOUSE) },
    { L"Start",         DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_START,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_START) },
    { L"Hold",          DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_HOLD,       ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_HOLD) },
    { L"Old 1P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_OLD1P,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_OLD1P) },
    { L"Old 2P",        DESC_NODETYPE_TREE,    (void*)SSF2T_A_DEEJAY_PORTRAITS_OLD2P,      ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAITS_OLD2P) },
};

const sDescTreeNode SSF2T_A_03_STAGES_COLLECTION[] =
{
    { L"Balrog's Casino Stage (03 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_STAGE_NODE_03,   ARRAYSIZE(SSF2T_A_BALROG_STAGE_NODE_03) },
    { L"Dhalsim's Stage (03 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_STAGE_NODE_03,  ARRAYSIZE(SSF2T_A_DHALSIM_STAGE_NODE_03) },
};

const sDescTreeNode SSF2T_A_4A_STAGES_COLLECTION[] =
{
    { L"Stage HUDs and Effects",            DESC_NODETYPE_TREE, (void*)SSF2T_A_STAGEHUD_NODE_04, ARRAYSIZE(SSF2T_A_STAGEHUD_NODE_04) },

    { L"Balrog's Casino Stage (04 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_STAGE_NODE_04, ARRAYSIZE(SSF2T_A_BALROG_STAGE_NODE_04) },
    { L"Blanka's Stage (04 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_BLANKA_STAGE_NODE_04) },
    { L"Cammy's Stage (04 parts)",          DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE_04,  ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE_04) },
    { L"Chun-Li's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_CHUNLI_STAGE_NODE_04) },
    { L"Dee Jay's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_DEEJAY_STAGE_NODE_04) },
    { L"Dhalsim's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_STAGE_NODE_04,  ARRAYSIZE(SSF2T_A_DHALSIM_STAGE_NODE_04) },
    { L"E. Honda's Stage (04 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_STAGE_NODE_04,   ARRAYSIZE(SSF2T_A_EHONDA_STAGE_NODE_04) },
    { L"Fei Long's Stage (04 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_FEILONG_STAGE_NODE_04) },
    { L"Guile's Stage (04 parts)",          DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_GUILE_STAGE_NODE_04) },
    { L"Ken's Stage (04 parts)",            DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_KEN_STAGE_NODE_04) },
    { L"Ryu's Stage (04 parts)",            DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE_04) },
    { L"T-Hawk's Stage (04 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_THAWK_STAGE_NODE_04) },
    { L"Zangief's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_GIEF_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_GIEF_STAGE_NODE_04) },

    { L"Stage Super Trails",                DESC_NODETYPE_TREE, (void*)SSF2T_A_BONUS_SUPERTRAILS_NODE_04, ARRAYSIZE(SSF2T_A_BONUS_SUPERTRAILS_NODE_04) },
};

const sDescTreeNode SSF2T_A_HYBRID_STAGES_COLLECTION_UNIQUE_04[] =
{
    { L"Stage HUDs and Effects",        DESC_NODETYPE_TREE, (void*)SSF2T_A_STAGEHUD_NODE_04, ARRAYSIZE(SSF2T_A_STAGEHUD_NODE_04) },

    { L"Balrog's Casino Stage (04 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_STAGE_NODE_04, ARRAYSIZE(SSF2T_A_BALROG_STAGE_NODE_04) },
    { L"Blanka's Stage (04 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_BLANKA_STAGE_NODE_04) },
    // This and the other two are in the Hybrid_Stages node
    //{ L"Cammy's Stage (04 parts)",          DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE_04,  ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE_04) },
    { L"Chun-Li's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_CHUNLI_STAGE_NODE_04) },
    { L"Dee Jay's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_DEEJAY_STAGE_NODE_04) },
    { L"Dhalsim's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_STAGE_NODE_04,  ARRAYSIZE(SSF2T_A_DHALSIM_STAGE_NODE_04) },
    { L"E. Honda's Stage (04 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_STAGE_NODE_04,   ARRAYSIZE(SSF2T_A_EHONDA_STAGE_NODE_04) },
    { L"Fei Long's Stage (04 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_FEILONG_STAGE_NODE_04) },
    { L"Guile's Stage (04 parts)",          DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_GUILE_STAGE_NODE_04) },
    //{ L"Ken's Stage (04 parts)",            DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_KEN_STAGE_NODE_04) },
    //{ L"Ryu's Stage (04 parts)",            DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE_04) },
    { L"T-Hawk's Stage (04 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_THAWK_STAGE_NODE_04) },
    { L"Zangief's Stage (04 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_GIEF_STAGE_NODE_04,    ARRAYSIZE(SSF2T_A_GIEF_STAGE_NODE_04) },

    { L"Stage Super Trails",            DESC_NODETYPE_TREE, (void*)SSF2T_A_BONUS_SUPERTRAILS_NODE_04, ARRAYSIZE(SSF2T_A_BONUS_SUPERTRAILS_NODE_04) },
};

// These collections are mirrored between HSF2 and SSF2T due to varying locations
const sDescTreeNode SSF2T_A_03_BONUS_COLLECTION[] =
{
    { L"Palettes",                  DESC_NODETYPE_TREE, (void*)SSF2T_A_BONUS_NODE_03,          ARRAYSIZE(SSF2T_A_BONUS_NODE_03) },
};

const sDescTreeNode SSF2T_A_04_BONUS_COLLECTION[] =
{
    { L"Intro Palettes",            DESC_NODETYPE_TREE, (void*)SSF2T_A_BONUS_NODE_04,          ARRAYSIZE(SSF2T_A_BONUS_NODE_04) },
    { L"Title Screen",              DESC_NODETYPE_TREE, (void*)SSF2T_A_BONUS_TITLESCREEN_NODE_04, ARRAYSIZE(SSF2T_A_BONUS_TITLESCREEN_NODE_04) },
    { L"Bonus",                     DESC_NODETYPE_TREE, (void*)SSF2T_A_BONUS_BONUS_NODE_04,     ARRAYSIZE(SSF2T_A_BONUS_BONUS_NODE_04) },
};

const sDescTreeNode SSF2T_A_08_BONUS_COLLECTION[] =
{
    { L"Palettes",                  DESC_NODETYPE_TREE, (void*)SSF2T_A_08_BONUS_NODE,   ARRAYSIZE(SSF2T_A_08_BONUS_NODE) },
};

const sDescTreeNode SSF2T_A_08_STAGES_COLLECTION[] =
{
    { L"Ryu's Stage",                       DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE_08,       ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE_08) },
    { L"E. Honda's Stage (08 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_EHONDA_STAGE_NODE_08) },
    { L"Blanka's Stage (08 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_BLANKA_STAGE_NODE_08) },
    { L"Guile's Stage (08 parts)",          DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_GUILE_STAGE_NODE_08) },
    { L"Ken's Stage (08 parts)",            DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_STAGE_NODE_08,       ARRAYSIZE(SSF2T_A_KEN_STAGE_NODE_08) },
    { L"Chun-Li's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_CHUNLI_STAGE_NODE_08) },
    { L"Zangief's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_GIEF_STAGE_NODE_08,      ARRAYSIZE(SSF2T_A_GIEF_STAGE_NODE_08) },
    { L"Dhalsim's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_STAGE_NODE_08,   ARRAYSIZE(SSF2T_A_DHALSIM_STAGE_NODE_08) },
    { L"M. Bison's Stage",                  DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_MBISON_STAGE_NODE_08) },
    { L"Sagat's Stage",                     DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_SAGAT_STAGE_NODE_08) },
    { L"Balrog's Casino Stage (08 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_BALROG_STAGE_NODE_08) },
    { L"Vega's Stage",                      DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_STAGE_NODE_08,      ARRAYSIZE(SSF2T_A_VEGA_STAGE_NODE_08) },
    { L"Cammy's Stage",                     DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE_08) },
    { L"T-Hawk's Stage (08 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_THAWK_STAGE_NODE_08) },
    { L"Fei Long's Stage (08 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_STAGE_NODE_08,   ARRAYSIZE(SSF2T_A_FEILONG_STAGE_NODE_08) },
    { L"Dee Jay's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_DEEJAY_STAGE_NODE_08) },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_STAGE_NODE_HYBRID[] =
{
    { L"Bird Castle Entrance", 0x5717a + MATH_SHIFT_04_TO_STEAM, 0x5723a + MATH_SHIFT_04_TO_STEAM, indexSF2Sprites_Stages, 0x13, &pairFullyLinkedNode },
    { L"Cammy Town BG", 0x73400 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x73600 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x0e },
    { L"Cammy Town BG - mansions", 0x73600 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x73800 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x0d },
    { L"Cammy Bridge", 0x6B000 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x6B200 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x10 },
    { L"Cammy Sky", 0x6B200 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x6B400 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x0f },
    { L"Cammy Castle", 0x63000 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x63200 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x12 },
    { L"Cammy Castle", 0x63200 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x63400 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x11 },
};

const sGame_PaletteDataset SSF2T_A_KEN_STAGE_NODE_HYBRID[] =
{
    { L"Barrel & Metal things", 0x5519a + MATH_SHIFT_04_TO_STEAM, 0x5523a + MATH_SHIFT_04_TO_STEAM, indexSF2Sprites_Stages, 0x18 },
    { L"Ken Background/Foreground", 0x68FFE + MATH_SHIFT_08_TO_STEAM, 0x691fe + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x15 },
    { L"Ken Boat 1/2", 0x713FE + MATH_SHIFT_08_TO_STEAM, 0X715fe + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x16, &pairNext },
    { L"Ken Boat 2/2", 0x715fe + MATH_SHIFT_08_TO_STEAM, 0x717be + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x17, &pairPrevious },
};

const sGame_PaletteDataset SSF2T_A_RYU_STAGE_NODE_HYBRID[] =
{
    { L"Sky",           0x603c0 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x603e0 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x08, &pairFullyLinkedNode },
    { L"Wall",          0x70400 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x704a0 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x09 },
    { L"Foreground",    0x68000 - 0x02 + MATH_SHIFT_08_TO_STEAM, 0x68120 - 0x02 + MATH_SHIFT_08_TO_STEAM, indexSF2Sprites_Stages, 0x0a },
    { L"Background Castle", 0x541Da + MATH_SHIFT_04_TO_STEAM, 0x5423a + MATH_SHIFT_04_TO_STEAM, indexSF2Sprites_Stages, 0x0b },
};

const sDescTreeNode SSF2T_A_HYBRID_STAGES_COLLECTION[] =
{
    { L"Cammy's Stage", DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE_HYBRID, ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE_HYBRID) },
    { L"Ken's Stage",   DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_STAGE_NODE_HYBRID,   ARRAYSIZE(SSF2T_A_KEN_STAGE_NODE_HYBRID) },
    { L"Ryu's Stage",   DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE_HYBRID,   ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE_HYBRID) },
};

const sDescTreeNode SSF2T_A_HYBRID_STAGES_COLLECTION_UNIQUE_08[] =
{
    { L"Balrog's Casino Stage (08 parts)",  DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_BALROG_STAGE_NODE_08) },
    { L"Blanka's Stage (08 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_BLANKA_STAGE_NODE_08) },
    // This and the other two are in the Hybrid collection
    //{ L"Cammy's Stage",                     DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_CAMMY_STAGE_NODE_08) },
    { L"Chun-Li's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_CHUNLI_STAGE_NODE_08) },
    { L"Claw's Stage",                      DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_STAGE_NODE_08,      ARRAYSIZE(SSF2T_A_VEGA_STAGE_NODE_08) },
    { L"Dee Jay's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_DEEJAY_STAGE_NODE_08) },
    { L"Dhalsim's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_STAGE_NODE_08,   ARRAYSIZE(SSF2T_A_DHALSIM_STAGE_NODE_08) },
    { L"E. Honda's Stage (08 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_EHONDA_STAGE_NODE_08) },
    { L"Fei Long's Stage (08 parts)",       DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_STAGE_NODE_08,   ARRAYSIZE(SSF2T_A_FEILONG_STAGE_NODE_08) },
    { L"Guile's Stage (08 parts)",          DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_GUILE_STAGE_NODE_08) },
    //{ L"Ken's Stage (08 parts)",            DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_STAGE_NODE_08,       ARRAYSIZE(SSF2T_A_KEN_STAGE_NODE_08) },
    { L"M. Bison's Stage",                  DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_STAGE_NODE_08,    ARRAYSIZE(SSF2T_A_MBISON_STAGE_NODE_08) },
    //{ L"Ryu's Stage",                       DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_STAGE_NODE_08,       ARRAYSIZE(SSF2T_A_RYU_STAGE_NODE_08) },
    { L"Sagat's Stage",                     DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_SAGAT_STAGE_NODE_08) },
    { L"T-Hawk's Stage (08 parts)",         DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_STAGE_NODE_08,     ARRAYSIZE(SSF2T_A_THAWK_STAGE_NODE_08) },
    { L"Zangief's Stage (08 parts)",        DESC_NODETYPE_TREE, (void*)SSF2T_A_GIEF_STAGE_NODE_08,      ARRAYSIZE(SSF2T_A_GIEF_STAGE_NODE_08) },
};

const sDescTreeNode SSF2T_A_UNITS_3C[] =
{
    { L"Ryu",               DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_PORTRAIT_COLLECTION,             ARRAYSIZE(SSF2T_A_RYU_PORTRAIT_COLLECTION) },
    { L"E. Honda",          DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_EHONDA_PORTRAIT_COLLECTION) },
    { L"Blanka",            DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_BLANKA_PORTRAIT_COLLECTION) },
    { L"Guile",             DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_PORTRAIT_COLLECTION,           ARRAYSIZE(SSF2T_A_GUILE_PORTRAIT_COLLECTION) },
    { L"Ken",               DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_PORTRAIT_COLLECTION,             ARRAYSIZE(SSF2T_A_KEN_PORTRAIT_COLLECTION) },
    { L"Chun-Li",           DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Zangief",           DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION) },
    { L"Dhalsim",           DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"M. Bison",          DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Sagat",             DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_PORTRAIT_COLLECTION,           ARRAYSIZE(SSF2T_A_SAGAT_PORTRAIT_COLLECTION) },
    { L"Balrog",            DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_BALROG_PORTRAIT_COLLECTION) },
    { L"Vega",              DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_PORTRAIT_COLLECTION,            ARRAYSIZE(SSF2T_A_VEGA_PORTRAIT_COLLECTION) },
    { L"Cammy",             DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_PORTRAIT_COLLECTION,           ARRAYSIZE(SSF2T_A_CAMMY_PORTRAIT_COLLECTION) },
    { L"T-Hawk",            DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_PORTRAIT_COLLECTION,           ARRAYSIZE(SSF2T_A_THAWK_PORTRAIT_COLLECTION) },
    { L"Fei Long",          DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_PORTRAIT_COLLECTION,         ARRAYSIZE(SSF2T_A_FEILONG_PORTRAIT_COLLECTION) },
    { L"Dee Jay",           DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PORTRAIT_COLLECTION,          ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAIT_COLLECTION) },

    { L"Stages",            DESC_NODETYPE_TREE, (void*)SSF2T_A_03_STAGES_COLLECTION,                ARRAYSIZE(SSF2T_A_03_STAGES_COLLECTION) },

    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SSF2T_A_03_BONUS_COLLECTION,                 ARRAYSIZE(SSF2T_A_03_BONUS_COLLECTION) },
};

const sDescTreeNode SSF2T_A_UNITS_03_NL[] =
{
    { L"Ryu",               DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_03NL_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_RYU_03NL_PORTRAIT_COLLECTION) },
    { L"E. Honda",          DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_03NL_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_EHONDA_03NL_PORTRAIT_COLLECTION) },
    { L"Blanka",            DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_03NL_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_BLANKA_03NL_PORTRAIT_COLLECTION) },
    { L"Guile",             DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_03NL_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_GUILE_03NL_PORTRAIT_COLLECTION) },
    { L"Ken",               DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_03NL_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_KEN_03NL_PORTRAIT_COLLECTION) },
    { L"Chun-Li",           DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_03NL_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_CHUNLI_03NL_PORTRAIT_COLLECTION) },
    { L"Zangief",           DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_03NL_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2T_A_ZANGIEF_03NL_PORTRAIT_COLLECTION) },
    { L"Dhalsim",           DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_03NL_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2T_A_DHALSIM_03NL_PORTRAIT_COLLECTION) },
    { L"M. Bison",          DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_03NL_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_MBISON_03NL_PORTRAIT_COLLECTION) },
    { L"Sagat",             DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_03NL_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_SAGAT_03NL_PORTRAIT_COLLECTION) },
    { L"Balrog",            DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_03NL_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_BALROG_03NL_PORTRAIT_COLLECTION) },
    { L"Vega",              DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_03NL_PORTRAIT_COLLECTION,       ARRAYSIZE(SSF2T_A_VEGA_03NL_PORTRAIT_COLLECTION) },
    { L"Cammy",             DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_03NL_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_CAMMY_03NL_PORTRAIT_COLLECTION) },
    { L"T-Hawk",            DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_03NL_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_THAWK_03NL_PORTRAIT_COLLECTION) },
    { L"Fei Long",          DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_03NL_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2T_A_FEILONG_03NL_PORTRAIT_COLLECTION) },
    { L"Dee Jay",           DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_03NL_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_DEEJAY_03NL_PORTRAIT_COLLECTION) },

    { L"Stages",            DESC_NODETYPE_TREE, (void*)SSF2T_A_03_STAGES_COLLECTION,                ARRAYSIZE(SSF2T_A_03_STAGES_COLLECTION) },

    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SSF2T_A_03_BONUS_COLLECTION,                 ARRAYSIZE(SSF2T_A_03_BONUS_COLLECTION) },
};

const sDescTreeNode SSF2T_A_UNITS_09_NL[] =
{
    { L"Ryu",       DESC_NODETYPE_TREE, (void*)SSF2T_A_Ryu_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Ryu_09NL_COLLECTION) },
    { L"E. Honda",  DESC_NODETYPE_TREE, (void*)SSF2T_A_EHonda_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_EHonda_09NL_COLLECTION) },
    { L"Blanka",    DESC_NODETYPE_TREE, (void*)SSF2T_A_Blanka_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Blanka_09NL_COLLECTION) },
    { L"Guile",     DESC_NODETYPE_TREE, (void*)SSF2T_A_Guile_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Guile_09NL_COLLECTION) },
    { L"Ken",       DESC_NODETYPE_TREE, (void*)SSF2T_A_Ken_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Ken_09NL_COLLECTION) },
    { L"Chun-Li",   DESC_NODETYPE_TREE, (void*)SSF2T_A_ChunLi_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_ChunLi_09NL_COLLECTION) },
    { L"Zangief",   DESC_NODETYPE_TREE, (void*)SSF2T_A_Zangief_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Zangief_09NL_COLLECTION) },
    { L"Dhalsim",   DESC_NODETYPE_TREE, (void*)SSF2T_A_Dhalsim_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Dhalsim_09NL_COLLECTION) },
    { L"M. Bison",  DESC_NODETYPE_TREE, (void*)SSF2T_A_Bison_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Bison_09NL_COLLECTION) },
    { L"Sagat",     DESC_NODETYPE_TREE, (void*)SSF2T_A_Sagat_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Sagat_09NL_COLLECTION) },
    { L"Balrog",    DESC_NODETYPE_TREE, (void*)SSF2T_A_Balrog_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Balrog_09NL_COLLECTION) },
    { L"Vega",      DESC_NODETYPE_TREE, (void*)SSF2T_A_Vega_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Vega_09NL_COLLECTION) },
    { L"Cammy",     DESC_NODETYPE_TREE, (void*)SSF2T_A_Cammy_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Cammy_09NL_COLLECTION) },
    { L"T-Hawk",    DESC_NODETYPE_TREE, (void*)SSF2T_A_THawk_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_THawk_09NL_COLLECTION) },
    { L"Fei Long",  DESC_NODETYPE_TREE, (void*)SSF2T_A_FeiLong_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_FeiLong_09NL_COLLECTION) },
    { L"Dee Jay",   DESC_NODETYPE_TREE, (void*)SSF2T_A_DeeJay_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_DeeJay_09NL_COLLECTION) },
    { L"Gouki",     DESC_NODETYPE_TREE, (void*)SSF2T_A_Gouki_09NL_COLLECTION, ARRAYSIZE(SSF2T_A_Gouki_09NL_COLLECTION) },    
};

const sDescTreeNode SSF2T_A_UNITS_4A[] =
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
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SSF2T_A_04_BONUS_COLLECTION,     ARRAYSIZE(SSF2T_A_04_BONUS_COLLECTION) },
};

const sDescTreeNode SSF2T_A_UNITS_8[] =
{
    { L"Stages",            DESC_NODETYPE_TREE, (void*)SSF2T_A_08_STAGES_COLLECTION,    ARRAYSIZE(SSF2T_A_08_STAGES_COLLECTION) },
    { L"Bonus Palettes",    DESC_NODETYPE_TREE, (void*)SSF2T_A_08_BONUS_COLLECTION,     ARRAYSIZE(SSF2T_A_08_BONUS_COLLECTION) },
};

const sDescTreeNode SSF2T_A_UNITS_MONO[] =
{
    { L"Balrog",      DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_COLLECTION,     ARRAYSIZE(SSF2T_A_BALROG_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Blanka",      DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_COLLECTION,     ARRAYSIZE(SSF2T_A_BLANKA_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Cammy",       DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_COLLECTION,      ARRAYSIZE(SSF2T_A_CAMMY_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Chun-Li",     DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_COLLECTION,     ARRAYSIZE(SSF2T_A_CHUNLI_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Dee Jay",     DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_COLLECTION,     ARRAYSIZE(SSF2T_A_DEEJAY_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Dhalsim",     DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_COLLECTION,    ARRAYSIZE(SSF2T_A_DHALSIM_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"E. Honda",    DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_COLLECTION,     ARRAYSIZE(SSF2T_A_EHONDA_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Fei Long",    DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_COLLECTION,    ARRAYSIZE(SSF2T_A_FEILONG_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Gouki",       DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_COLLECTION,      ARRAYSIZE(SSF2T_A_GOUKI_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Guile",       DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_COLLECTION,      ARRAYSIZE(SSF2T_A_GUILE_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Ken",         DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_COLLECTION,        ARRAYSIZE(SSF2T_A_KEN_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"M. Bison",    DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_COLLECTION,     ARRAYSIZE(SSF2T_A_MBISON_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Ryu",         DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_COLLECTION,        ARRAYSIZE(SSF2T_A_RYU_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Sagat",       DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_COLLECTION,      ARRAYSIZE(SSF2T_A_SAGAT_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"T-Hawk",      DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_COLLECTION,      ARRAYSIZE(SSF2T_A_THAWK_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Vega",        DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_COLLECTION,       ARRAYSIZE(SSF2T_A_VEGA_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"Zangief",     DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_COLLECTION,    ARRAYSIZE(SSF2T_A_ZANGIEF_COLLECTION), MATH_SHIFT_04_TO_STEAM },

    { L"Portraits: Balrog",     DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_BALROG_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Blanka",     DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_BLANKA_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Cammy",      DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_CAMMY_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Chun-Li",    DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Dee Jay",    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Dhalsim",    DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: E. Honda",   DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_EHONDA_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Fei Long",   DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2T_A_FEILONG_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Guile",      DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_GUILE_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Ken",        DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_KEN_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: M. Bison",   DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_PORTRAIT_COLLECTION,     ARRAYSIZE(SSF2T_A_MBISON_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Ryu",        DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_PORTRAIT_COLLECTION,        ARRAYSIZE(SSF2T_A_RYU_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Sagat",      DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_SAGAT_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: T-Hawk",     DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_PORTRAIT_COLLECTION,      ARRAYSIZE(SSF2T_A_THAWK_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Vega",       DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_PORTRAIT_COLLECTION,       ARRAYSIZE(SSF2T_A_VEGA_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"Portraits: Zangief",    DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION,    ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAIT_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    // This composites across multiple roms to show the full stage at once
    // It's a task, tho, so not everything has been moved.
    { L"Stages",                DESC_NODETYPE_TREE, (void*)SSF2T_A_HYBRID_STAGES_COLLECTION,       ARRAYSIZE(SSF2T_A_HYBRID_STAGES_COLLECTION) },

    { L"ROM03 Stages",          DESC_NODETYPE_TREE, (void*)SSF2T_A_03_STAGES_COLLECTION,                ARRAYSIZE(SSF2T_A_03_STAGES_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"ROM04 Stages",          DESC_NODETYPE_TREE, (void*)SSF2T_A_HYBRID_STAGES_COLLECTION_UNIQUE_04,  ARRAYSIZE(SSF2T_A_HYBRID_STAGES_COLLECTION_UNIQUE_04), MATH_SHIFT_04_TO_STEAM },
    { L"ROM08 Stages",          DESC_NODETYPE_TREE, (void*)SSF2T_A_HYBRID_STAGES_COLLECTION_UNIQUE_08,  ARRAYSIZE(SSF2T_A_HYBRID_STAGES_COLLECTION_UNIQUE_08), MATH_SHIFT_08_TO_STEAM },
    { L"ROM03 Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SSF2T_A_03_BONUS_COLLECTION,            ARRAYSIZE(SSF2T_A_03_BONUS_COLLECTION), MATH_SHIFT_03_TO_STEAM },
    { L"ROM04 Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SSF2T_A_04_BONUS_COLLECTION,            ARRAYSIZE(SSF2T_A_04_BONUS_COLLECTION), MATH_SHIFT_04_TO_STEAM },
    { L"ROM08 Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SSF2T_A_08_BONUS_COLLECTION,            ARRAYSIZE(SSF2T_A_08_BONUS_COLLECTION), MATH_SHIFT_08_TO_STEAM },
};
