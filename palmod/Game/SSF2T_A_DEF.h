#pragma once

// transparency color is the last color on cps2 graphics
// the first 2 bytes of a palette on ST is how many palette lines it has

enum Supported_SSF2T_3C_PaletteListIndex
{
    index_SSF2T_3C_Portraits,
    index_SSF2T_3C_Last
};

enum Supported_SSF2T_4A_PaletteListIndex
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
    index_SSF2T_4A_Last
};

constexpr auto SSF2T_A_NUM_IND_3C = index_SSF2T_3C_Last;
constexpr auto SSF2T_A_NUM_IND_4A = index_SSF2T_4A_Last;

#define SSF2T_A_EXTRALOC_3C SSF2T_A_NUM_IND_3C
#define SSF2T_A_EXTRALOC_4A SSF2T_A_NUM_IND_4A

const UINT8 SSF2T_A_UNITSORT_3C[SSF2T_A_NUM_IND_3C + 1] = // Plus 1 for the extra palettes
{
    index_SSF2T_3C_Portraits,

    SSF2T_A_EXTRALOC_3C // Extra palettes
};

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

    SSF2T_A_EXTRALOC_4A // Extra palettes
};

const UINT16 SSF2T_A_IMGREDIR[SSF2T_A_NUM_IND_4A] =
{
    0x00,
    0x01,
    0x02,
    0x03,
    0x04,
    0x05,
    0x06,
    0x07,
    0x08,
    0x09,
    0x0A,
    0x0B,
    0x0C,
    0x0D,
    0x0E,
    0x0F,
    0x10
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_JAB[] =
{
    { _T("Jab"), 0x43b56, 0x43b76, 0x0a },
    { _T("Jab Super Trail 1"), 0x43b96, 0x43bb6, 0x0a },
    { _T("Jab Super Trail 2"), 0x43bb6, 0x43bd6, 0x0a },
    { _T("Jab Super Trail 3"), 0x43bd6, 0x43bf6, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x43bf8, 0x43c18, 0x0a },
    { _T("Strong Super Trail 1"), 0x43c38, 0x43c58, 0x0a },
    { _T("Strong Super Trail 2"), 0x43c58, 0x43c78, 0x0a },
    { _T("Strong Super Trail 3"), 0x43c78, 0x43c98, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x43c9a, 0x43cba, 0x0a },
    { _T("Fierce Super Trail 1"), 0x43cda, 0x43cfa, 0x0a },
    { _T("Fierce Super Trail 2"), 0x43cfa, 0x43d1a, 0x0a },
    { _T("Fierce Super Trail 3"), 0x43d1a, 0x43d3a, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_SHORT[] =
{
    { _T("Short"), 0x43d3c, 0x43d5c, 0x0a },
    { _T("Short Super Trail 1"), 0x43d7c, 0x43d9c, 0x0a },
    { _T("Short Super Trail 2"), 0x43d9c, 0x43dbc, 0x0a },
    { _T("Short Super Trail 3"), 0x43dbc, 0x43ddc, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x43dde, 0x43dfe, 0x0a },
    { _T("Forward Super Trail 1"), 0x43e1e, 0x43e3e, 0x0a },
    { _T("Forward Super Trail 2"), 0x43e3e, 0x43e5e, 0x0a },
    { _T("Forward Super Trail 3"), 0x43e5e, 0x43e7e, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x43e80, 0x43ea0, 0x0a },
    { _T("Roundhouse Super Trail 1"), 0x43ec0, 0x43ee0, 0x0a },
    { _T("Roundhouse Super Trail 2"), 0x43ee0, 0x43f00, 0x0a },
    { _T("Roundhouse Super Trail 3"), 0x43f00, 0x43f20, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_START[] =
{
    { _T("Start"), 0x43f22, 0x43f42, 0x0a },
    { _T("Start Super Trail 1"), 0x43f62, 0x43f82, 0x0a },
    { _T("Start Super Trail 2"), 0x43f82, 0x43fa2, 0x0a },
    { _T("Start Super Trail 3"), 0x43fa2, 0x43fc2, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x43fc4, 0x43fe4, 0x0a },
    { _T("Hold Super Trail 1"), 0x44004, 0x44024, 0x0a },
    { _T("Hold Super Trail 2"), 0x44024, 0x44044, 0x0a },
    { _T("Hold Super Trail 3"), 0x44044, 0x44064, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x44066, 0x44086, 0x0a },
    { _T("Old 1P Super Trail 1"), 0x440a6, 0x440c6, 0x0a },
    { _T("Old 1P Super Trail 2"), 0x440c6, 0x440e6, 0x0a },
    { _T("Old 1P Super Trail 3"), 0x440e6, 0x44106, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x44108, 0x44128, 0x0a },
    { _T("Old 2P Super Trail 1"), 0x44148, 0x44168, 0x0a },
    { _T("Old 2P Super Trail 2"), 0x44168, 0x44188, 0x0a },
    { _T("Old 2P Super Trail 3"), 0x44188, 0x441a8, 0x0a },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_JAB[] =
{
    { _T("Jab"), 0x40806, 0x40826, 0x02 },
    { _T("Jab Super Trail 1"), 0x40846, 0x40864, 0x02 },
    { _T("Jab Super Trail 2"), 0x40864, 0x40884, 0x02 },
    { _T("Jab Super Trail 3"), 0x40884, 0x408a4, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x408a6, 0x408c6, 0x02 },
    { _T("Strong Super Trail 1"), 0x408e6, 0x40904, 0x02 },
    { _T("Strong Super Trail 2"), 0x40904, 0x40924, 0x02 },
    { _T("Strong Super Trail 3"), 0x40924, 0x40944, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x40946, 0x40966, 0x02 },
    { _T("Fierce Super Trail 1"), 0x40986, 0x409a4, 0x02 },
    { _T("Fierce Super Trail 2"), 0x409a4, 0x409c4, 0x02 },
    { _T("Fierce Super Trail 3"), 0x409c4, 0x409e4, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_SHORT[] =
{
    { _T("Short"), 0x409e6, 0x40a06, 0x02 },
    { _T("Short Super Trail 1"), 0x40a26, 0x40a44, 0x02 },
    { _T("Short Super Trail 2"), 0x40a44, 0x40a64, 0x02 },
    { _T("Short Super Trail 3"), 0x40a64, 0x40a84, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x40a86, 0x40aa6, 0x02 },
    { _T("Forward Super Trail 1"), 0x40ac6, 0x40ae4, 0x02 },
    { _T("Forward Super Trail 2"), 0x40ae4, 0x40b04, 0x02 },
    { _T("Forward Super Trail 3"), 0x40b04, 0x40b24, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x40b26, 0x40b46, 0x02 },
    { _T("Roundhouse Super Trail 1"), 0x40b66, 0x40b84, 0x02 },
    { _T("Roundhouse Super Trail 2"), 0x40b84, 0x40ba4, 0x02 },
    { _T("Roundhouse Super Trail 3"), 0x40ba4, 0x40bc4, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_START[] =
{
    { _T("Start"), 0x40bc6, 0x40be6, 0x02 },
    { _T("Start Super Trail 1"), 0x40c06, 0x40c24, 0x02 },
    { _T("Start Super Trail 2"), 0x40c24, 0x40c44, 0x02 },
    { _T("Start Super Trail 3"), 0x40c44, 0x40c64, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x40c66, 0x40c86, 0x02 },
    { _T("Hold Super Trail 1"), 0x40ca6, 0x40cc4, 0x02 },
    { _T("Hold Super Trail 2"), 0x40cc4, 0x40ce4, 0x02 },
    { _T("Hold Super Trail 3"), 0x40ce4, 0x40d04, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x40d06, 0x40d26, 0x02 },
    { _T("Old 1P Super Trail 1"), 0x40d46, 0x40d66, 0x02 },
    { _T("Old 1P Super Trail 2"), 0x40d66, 0x40d86, 0x02 },
    { _T("Old 1P Super Trail 3"), 0x40d86, 0x40da6, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x40da8, 0x40dc8, 0x02 },
    { _T("Old 2P Super Trail 1"), 0x40de8, 0x40e08, 0x02 },
    { _T("Old 2P Super Trail 2"), 0x40e08, 0x40e28, 0x02 },
    { _T("Old 2P Super Trail 3"), 0x40e28, 0x40e48, 0x02 },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_JAB[] =
{
    { _T("Jab"), 0x4482e, 0x4484e, 0x0c },
    { _T("Jab Super Trail 1"), 0x4486e, 0x4488e, 0x0c },
    { _T("Jab Super Trail 2"), 0x4488e, 0x448ae, 0x0c },
    { _T("Jab Super Trail 3"), 0x448ae, 0x448ce, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x448d0, 0x448f0, 0x0c },
    { _T("Strong Super Trail 1"), 0x44910, 0x44930, 0x0c },
    { _T("Strong Super Trail 2"), 0x44930, 0x44950, 0x0c },
    { _T("Strong Super Trail 3"), 0x44950, 0x44970, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x44972, 0x44992, 0x0c },
    { _T("Fierce Super Trail 1"), 0x449b2, 0x449d2, 0x0c },
    { _T("Fierce Super Trail 2"), 0x449d2, 0x449f2, 0x0c },
    { _T("Fierce Super Trail 3"), 0x449f2, 0x44a12, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_SHORT[] =
{
    { _T("Short"), 0x44a14, 0x44a34, 0x0c },
    { _T("Short Super Trail 1"), 0x44a54, 0x44a74, 0x0c },
    { _T("Short Super Trail 2"), 0x44a74, 0x44a94, 0x0c },
    { _T("Short Super Trail 3"), 0x44a94, 0x44ab4, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x44ab6, 0x44ad6, 0x0c },
    { _T("Forward Super Trail 1"), 0x44af6, 0x44b16, 0x0c },
    { _T("Forward Super Trail 2"), 0x44b16, 0x44b36, 0x0c },
    { _T("Forward Super Trail 3"), 0x44b36, 0x44b56, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x44b58, 0x44b78, 0x0c },
    { _T("Roundhouse Super Trail 1"), 0x44b98, 0x44bb8, 0x0c },
    { _T("Roundhouse Super Trail 2"), 0x44bb8, 0x44bd8, 0x0c },
    { _T("Roundhouse Super Trail 3"), 0x44bd8, 0x44bf8, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_START[] =
{
    { _T("Start"), 0x44bfa, 0x44c1a, 0x0c },
    { _T("Start Super Trail 1"), 0x44c3a, 0x44c5a, 0x0c },
    { _T("Start Super Trail 2"), 0x44c5a, 0x44c7a, 0x0c },
    { _T("Start Super Trail 3"), 0x44c7a, 0x44c9a, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x44c9c, 0x44cbc, 0x0c },
    { _T("Hold Super Trail 1"), 0x44cdc, 0x44cfc, 0x0c },
    { _T("Hold Super Trail 2"), 0x44cfc, 0x44d1c, 0x0c },
    { _T("Hold Super Trail 3"), 0x44d1c, 0x44d3c, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x44d3e, 0x44d5e, 0x0c },
    { _T("Old 1P Super Trail 1"), 0x44d7e, 0x44d9e, 0x0c },
    { _T("Old 1P Super Trail 2"), 0x44d9e, 0x44dbe, 0x0c },
    { _T("Old 1P Super Trail 3"), 0x44dbe, 0x44dde, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x44de0, 0x44e00, 0x0c },
    { _T("Old 2P Super Trail 1"), 0x44e20, 0x44e40, 0x0c },
    { _T("Old 2P Super Trail 2"), 0x44e40, 0x44e60, 0x0c },
    { _T("Old 2P Super Trail 3"), 0x44e60, 0x44e80, 0x0c },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_JAB[] =
{
    { _T("Jab"), 0x41b3a, 0x41b5a, 0x05 },
    { _T("Jab Kikouken"), 0x41b5a, 0x41b7a, 0x05, 0x1 },
    { _T("Jab Super Trail 1"), 0x41b7a, 0x41b9a, 0x05 },
    { _T("Jab Super Trail 2"), 0x41b9a, 0x41bba, 0x05 },
    { _T("Jab Super Trail 3"), 0x41bba, 0x41bda, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x41bdc, 0x41bfc, 0x05 },
    { _T("Strong Kikouken"), 0x41bfc, 0x41c1c, 0x05, 0x1 },
    { _T("Strong Super Trail 1"), 0x41c1c, 0x41c3c, 0x05 },
    { _T("Strong Super Trail 2"), 0x41c3c, 0x41c5c, 0x05 },
    { _T("Strong Super Trail 3"), 0x41c5c, 0x41c7c, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x41c7e, 0x41c9e, 0x05 },
    { _T("Fierce Kikouken"), 0x41c9e, 0x41cbe, 0x05, 0x1 },
    { _T("Fierce Super Trail 1"), 0x41cbe, 0x41cde, 0x05 },
    { _T("Fierce Super Trail 2"), 0x41cde, 0x41cfe, 0x05 },
    { _T("Fierce Super Trail 3"), 0x41cfe, 0x41d1e, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_SHORT[] =
{
    { _T("Short"), 0x41d20, 0x41d40, 0x05 },
    { _T("Short Kikouken"), 0x41d40, 0x41d60, 0x05, 0x1 },
    { _T("Short Super Trail 1"), 0x41d60, 0x41d80, 0x05 },
    { _T("Short Super Trail 2"), 0x41d80, 0x41da0, 0x05 },
    { _T("Short Super Trail 3"), 0x41da0, 0x41dc0, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x41dc2, 0x41de2, 0x05 },
    { _T("Forward Kikouken"), 0x41de2, 0x41e02, 0x05, 0x1 },
    { _T("Forward Super Trail 1"), 0x41e02, 0x41e22, 0x05 },
    { _T("Forward Super Trail 2"), 0x41e22, 0x41e42, 0x05 },
    { _T("Forward Super Trail 3"), 0x41e42, 0x41e62, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x41e64, 0x41e84, 0x05 },
    { _T("Roundhouse Kikouken"), 0x41e84, 0x41ea4, 0x05, 0x1 },
    { _T("Roundhouse Super Trail 1"), 0x41ea4, 0x41ec4, 0x05 },
    { _T("Roundhouse Super Trail 2"), 0x41ec4, 0x41ee4, 0x05 },
    { _T("Roundhouse Super Trail 3"), 0x41ee4, 0x41f04, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_START[] =
{
    { _T("Start"), 0x41f06, 0x41f26, 0x05 },
    { _T("Start Kikouken"), 0x41f26, 0x41f46, 0x05, 0x1 },
    { _T("Start Super Trail 1"), 0x41f46, 0x41f66, 0x05 },
    { _T("Start Super Trail 2"), 0x41f66, 0x41f86, 0x05 },
    { _T("Start Super Trail 3"), 0x41f86, 0x41fa6, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x41fa8, 0x41fc8, 0x05 },
    { _T("Hold Kikouken"), 0x41fc8, 0x41fe8, 0x05, 0x1 },
    { _T("Hold Super Trail 1"), 0x41fe8, 0x42008, 0x05 },
    { _T("Hold Super Trail 2"), 0x42008, 0x42028, 0x05 },
    { _T("Hold Super Trail 3"), 0x42028, 0x42048, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x4204a, 0x4206a, 0x05 },
    { _T("Old 1P Kikouken"), 0x4206a, 0x4208a, 0x05, 0x1 },
    { _T("Old 1P Super Trail 1"), 0x4208a, 0x420aa, 0x05 },
    { _T("Old 1P Super Trail 2"), 0x420aa, 0x420ca, 0x05 },
    { _T("Old 1P Super Trail 3"), 0x420ca, 0x420ea, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x420ec, 0x4210c, 0x05 },
    { _T("Old 2P Kikouken"), 0x4210c, 0x4212c, 0x05, 0x1 },
    { _T("Old 2P Super Trail 1"), 0x4212c, 0x4214c, 0x05 },
    { _T("Old 2P Super Trail 2"), 0x4214c, 0x4216c, 0x05 },
    { _T("Old 2P Super Trail 3"), 0x4216c, 0x4218c, 0x05 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_JAB[] =
{
    { _T("Jab"), 0x45b72, 0x45b92, 0x0f },
    { _T("Jab Air Slasher"), 0x45b92, 0x45bb2, 0x0f, 0x1 },
    { _T("Jab Super Trail 1"), 0x45bb2, 0x45bd2, 0x0f },
    { _T("Jab Super Trail 2"), 0x45bd2, 0x45bf2, 0x0f },
    { _T("Jab Super Trail 3"), 0x45bf2, 0x45c12, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x45c14, 0x45c34, 0x0f },
    { _T("Strong Air Slasher"), 0x45c34, 0x45c54, 0x0f, 0x1 },
    { _T("Strong Super Trail 1"), 0x45c54, 0x45c74, 0x0f },
    { _T("Strong Super Trail 2"), 0x45c74, 0x45c94, 0x0f },
    { _T("Strong Super Trail 3"), 0x45c94, 0x45cb4, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x45cb6, 0x45cd6, 0x0f },
    { _T("Fierce Air Slasher"), 0x45cd6, 0x45cf6, 0x0f, 0x1 },
    { _T("Fierce Super Trail 1"), 0x45cf6, 0x45d16, 0x0f },
    { _T("Fierce Super Trail 2"), 0x45d16, 0x45d36, 0x0f },
    { _T("Fierce Super Trail 3"), 0x45d36, 0x45d56, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_SHORT[] =
{
    { _T("Short"), 0x45d58, 0x45d78, 0x0f },
    { _T("Short Air Slasher"), 0x45d78, 0x45d98, 0x0f, 0x1 },
    { _T("Short Super Trail 1"), 0x45d98, 0x45db8, 0x0f },
    { _T("Short Super Trail 2"), 0x45db8, 0x45dd8, 0x0f },
    { _T("Short Super Trail 3"), 0x45dd8, 0x45df8, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x45dfa, 0x45e1a, 0x0f },
    { _T("Forward Air Slasher"), 0x45e1a, 0x45e3a, 0x0f, 0x1 },
    { _T("Forward Super Trail 1"), 0x45e3a, 0x45e5a, 0x0f },
    { _T("Forward Super Trail 2"), 0x45e5a, 0x45e7a, 0x0f },
    { _T("Forward Super Trail 3"), 0x45e7a, 0x45e9a, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x45e9c, 0x45ebc, 0x0f },
    { _T("Roundhouse Air Slasher"), 0x45ebc, 0x45edc, 0x0f, 0x1 },
    { _T("Roundhouse Super Trail 1"), 0x45edc, 0x45efc, 0x0f },
    { _T("Roundhouse Super Trail 2"), 0x45efc, 0x45f1c, 0x0f },
    { _T("Roundhouse Super Trail 3"), 0x45f1c, 0x45f3c, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_START[] =
{
    { _T("Start"), 0x45f3e, 0x45f5e, 0x0f },
    { _T("Start Air Slasher"), 0x45f5e, 0x45f7e, 0x0f, 0x1 },
    { _T("Start Super Trail 1"), 0x45f7e, 0x45f9e, 0x0f },
    { _T("Start Super Trail 2"), 0x45f9e, 0x45fbe, 0x0f },
    { _T("Start Super Trail 3"), 0x45fbe, 0x45fde, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x45fe0, 0x46000, 0x0f },
    { _T("Hold Air Slasher"), 0x46000, 0x46020, 0x0f, 0x1 },
    { _T("Hold Super Trail 1"), 0x46020, 0x46040, 0x0f },
    { _T("Hold Super Trail 2"), 0x46040, 0x46060, 0x0f },
    { _T("Hold Super Trail 3"), 0x46060, 0x46080, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x46082, 0x460a2, 0x0f },
    { _T("Old 1P Air Slasher"), 0x460a2, 0x460c2, 0x0f, 0x1 },
    { _T("Old 1P Super Trail 1"), 0x460c2, 0x460e2, 0x0f },
    { _T("Old 1P Super Trail 2"), 0x460e2, 0x46102, 0x0f },
    { _T("Old 1P Super Trail 3"), 0x46102, 0x46122, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x46124, 0x46144, 0x0f },
    { _T("Old 2P Air Slasher"), 0x46144, 0x46164, 0x0f, 0x1 },
    { _T("Old 2P Super Trail 1"), 0x46164, 0x46184, 0x0f },
    { _T("Old 2P Super Trail 2"), 0x46184, 0x461a4, 0x0f },
    { _T("Old 2P Super Trail 3"), 0x461a4, 0x461c4, 0x0f },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_JAB[] =
{
    { _T("Jab"), 0x42812, 0x42832, 0x07 },
    { _T("Jab Super Trail 1"), 0x42852, 0x42872, 0x07 },
    { _T("Jab Super Trail 2"), 0x42872, 0x42892, 0x07 },
    { _T("Jab Super Trail 3"), 0x42892, 0x428b2, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x428b4, 0x428d4, 0x07 },
    { _T("Strong Super Trail 1"), 0x428f4, 0x42914, 0x07 },
    { _T("Strong Super Trail 2"), 0x42914, 0x42934, 0x07 },
    { _T("Strong Super Trail 3"), 0x42934, 0x42954, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x42956, 0x42976, 0x07 },
    { _T("Fierce Super Trail 1"), 0x42996, 0x429b6, 0x07 },
    { _T("Fierce Super Trail 2"), 0x429b6, 0x429d6, 0x07 },
    { _T("Fierce Super Trail 3"), 0x429d6, 0x429f6, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_SHORT[] =
{
    { _T("Short"), 0x429f8, 0x42a18, 0x07 },
    { _T("Short Super Trail 1"), 0x42a38, 0x42a58, 0x07 },
    { _T("Short Super Trail 2"), 0x42a58, 0x42a78, 0x07 },
    { _T("Short Super Trail 3"), 0x42a78, 0x42a98, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x42a9a, 0x42aba, 0x07 },
    { _T("Forward Super Trail 1"), 0x42ada, 0x42afa, 0x07 },
    { _T("Forward Super Trail 2"), 0x42afa, 0x42b1a, 0x07 },
    { _T("Forward Super Trail 3"), 0x42b1a, 0x42b3a, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x42b3c, 0x42b5c, 0x07 },
    { _T("Roundhouse Super Trail 1"), 0x42b7c, 0x42b9c, 0x07 },
    { _T("Roundhouse Super Trail 2"), 0x42b9c, 0x42bbc, 0x07 },
    { _T("Roundhouse Super Trail 3"), 0x42bbc, 0x42bdc, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_START[] =
{
    { _T("Start"), 0x42bde, 0x42bfe, 0x07 },
    { _T("Start Super Trail 1"), 0x42c1e, 0x42c3e, 0x07 },
    { _T("Start Super Trail 2"), 0x42c3e, 0x42c5e, 0x07 },
    { _T("Start Super Trail 3"), 0x42c5e, 0x42c7e, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x42c80, 0x42ca0, 0x07 },
    { _T("Hold Super Trail 1"), 0x42cc0, 0x42ce0, 0x07 },
    { _T("Hold Super Trail 2"), 0x42ce0, 0x42d00, 0x07 },
    { _T("Hold Super Trail 3"), 0x42d00, 0x42d20, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x42d22, 0x42d42, 0x07 },
    { _T("Old 1P Super Trail 1"), 0x42d62, 0x42d82, 0x07 },
    { _T("Old 1P Super Trail 2"), 0x42d82, 0x42da2, 0x07 },
    { _T("Old 1P Super Trail 3"), 0x42da2, 0x42dc2, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x42dc4, 0x42de4, 0x07 },
    { _T("Old 2P Super Trail 1"), 0x42e04, 0x42e24, 0x07 },
    { _T("Old 2P Super Trail 2"), 0x42e24, 0x42e44, 0x07 },
    { _T("Old 2P Super Trail 3"), 0x42e44, 0x42e64, 0x07 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_JAB[] =
{
    { _T("Jab"), 0x4019a, 0x401ba, 0x01 },
    { _T("Jab Super Trail 1"), 0x401da, 0x401fa, 0x01 },
    { _T("Jab Super Trail 2"), 0x401fa, 0x4021a, 0x01 },
    { _T("Jab Super Trail 3"), 0x4021a, 0x4023a, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x4023c, 0x4025c, 0x01 },
    { _T("Strong Super Trail 1"), 0x4027c, 0x4029c, 0x01 },
    { _T("Strong Super Trail 2"), 0x4029c, 0x402bc, 0x01 },
    { _T("Strong Super Trail 3"), 0x402bc, 0x402dc, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x402de, 0x402fe, 0x01 },
    { _T("Fierce Super Trail 1"), 0x4031e, 0x4033e, 0x01 },
    { _T("Fierce Super Trail 2"), 0x4033e, 0x4035e, 0x01 },
    { _T("Fierce Super Trail 3"), 0x4035e, 0x4037e, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_SHORT[] =
{
    { _T("Short"), 0x40380, 0x403a0, 0x01 },
    { _T("Short Super Trail 1"), 0x403c0, 0x403e0, 0x01 },
    { _T("Short Super Trail 2"), 0x403e0, 0x40400, 0x01 },
    { _T("Short Super Trail 3"), 0x40400, 0x40420, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x40422, 0x40442, 0x01 },
    { _T("Forward Super Trail 1"), 0x40462, 0x40482, 0x01 },
    { _T("Forward Super Trail 2"), 0x40482, 0x404a2, 0x01 },
    { _T("Forward Super Trail 3"), 0x404a2, 0x404c2, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x404c4, 0x404e4, 0x01 },
    { _T("Roundhouse Super Trail 1"), 0x40504, 0x40524, 0x01 },
    { _T("Roundhouse Super Trail 2"), 0x40524, 0x40544, 0x01 },
    { _T("Roundhouse Super Trail 3"), 0x40544, 0x40564, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_START[] =
{
    { _T("Start"), 0x40566, 0x40586, 0x01 },
    { _T("Start Super Trail 1"), 0x405a6, 0x405c6, 0x01 },
    { _T("Start Super Trail 2"), 0x405c6, 0x405e6, 0x01 },
    { _T("Start Super Trail 3"), 0x405e6, 0x40606, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x40608, 0x40628, 0x01 },
    { _T("Hold Super Trail 1"), 0x40648, 0x40668, 0x01 },
    { _T("Hold Super Trail 2"), 0x40668, 0x40688, 0x01 },
    { _T("Hold Super Trail 3"), 0x40688, 0x406a8, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x406aa, 0x406ca, 0x01 },
    { _T("Old 1P Super Trail 1"), 0x406ea, 0x4070a, 0x01 },
    { _T("Old 1P Super Trail 2"), 0x4070a, 0x4072a, 0x01 },
    { _T("Old 1P Super Trail 3"), 0x4072a, 0x4074a, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x4074c, 0x4076c, 0x01 },
    { _T("Old 2P Super Trail 1"), 0x4078c, 0x407ac, 0x01 },
    { _T("Old 2P Super Trail 2"), 0x407ac, 0x407cc, 0x01 },
    { _T("Old 2P Super Trail 3"), 0x407cc, 0x407ec, 0x01 },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_JAB[] =
{
    { _T("Jab"), 0x45506, 0x45526, 0x0e },
    { _T("Jab Super Trail 1"), 0x45546, 0x45566, 0x0e },
    { _T("Jab Super Trail 2"), 0x45566, 0x45586, 0x0e },
    { _T("Jab Super Trail 3"), 0x45586, 0x455a6, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x455a8, 0x455c8, 0x0e },
    { _T("Strong Super Trail 1"), 0x455e8, 0x45608, 0x0e },
    { _T("Strong Super Trail 2"), 0x45608, 0x45628, 0x0e },
    { _T("Strong Super Trail 3"), 0x45628, 0x45648, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x4564a, 0x4566a, 0x0e },
    { _T("Fierce Super Trail 1"), 0x4568a, 0x456aa, 0x0e },
    { _T("Fierce Super Trail 2"), 0x456aa, 0x456ca, 0x0e },
    { _T("Fierce Super Trail 3"), 0x456ca, 0x456ea, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_SHORT[] =
{
    { _T("Short"), 0x456ec, 0x4570c, 0x0e },
    { _T("Short Super Trail 1"), 0x4572c, 0x4574c, 0x0e },
    { _T("Short Super Trail 2"), 0x4574c, 0x4576c, 0x0e },
    { _T("Short Super Trail 3"), 0x4576c, 0x4578c, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x4578e, 0x457ae, 0x0e },
    { _T("Forward Super Trail 1"), 0x457ce, 0x457ee, 0x0e },
    { _T("Forward Super Trail 2"), 0x457ee, 0x4580e, 0x0e },
    { _T("Forward Super Trail 3"), 0x4580e, 0x4582e, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x45830, 0x45850, 0x0e },
    { _T("Roundhouse Super Trail 1"), 0x45870, 0x45890, 0x0e },
    { _T("Roundhouse Super Trail 2"), 0x45890, 0x458b0, 0x0e },
    { _T("Roundhouse Super Trail 3"), 0x458b0, 0x458d0, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_START[] =
{
    { _T("Start"), 0x458d2, 0x458f2, 0x0e },
    { _T("Start Super Trail 1"), 0x45912, 0x45932, 0x0e },
    { _T("Start Super Trail 2"), 0x45932, 0x45952, 0x0e },
    { _T("Start Super Trail 3"), 0x45952, 0x45972, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x45974, 0x45994, 0x0e },
    { _T("Hold Super Trail 1"), 0x459b4, 0x459d4, 0x0e },
    { _T("Hold Super Trail 2"), 0x459d4, 0x459f4, 0x0e },
    { _T("Hold Super Trail 3"), 0x459f4, 0x45a14, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x45a16, 0x45a36, 0x0e },
    { _T("Old 1P Super Trail 1"), 0x45a56, 0x45a76, 0x0e },
    { _T("Old 1P Super Trail 2"), 0x45a76, 0x45a96, 0x0e },
    { _T("Old 1P Super Trail 3"), 0x45a96, 0x45ab6, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x45ab8, 0x45ad8, 0x0e },
    { _T("Old 2P Super Trail 1"), 0x45af8, 0x45b18, 0x0e },
    { _T("Old 2P Super Trail 2"), 0x45b18, 0x45b38, 0x0e },
    { _T("Old 2P Super Trail 3"), 0x45b38, 0x45b58, 0x0e },
};

const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P1COLOR[] =
{
    { _T("P1 Color"), 0x461de, 0x461fe, 0x10 },
    { _T("P1 Color Super Trail 1"), 0x4621e, 0x4623e, 0x10 },
    { _T("P1 Color Super Trail 2"), 0x4623e, 0x4625e, 0x10 },
    { _T("P1 Color Super Trail 3"), 0x4625e, 0x4627e, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P2COLOR[] =
{
    { _T("P2 Color"), 0x46280, 0x462a0, 0x10 },
    { _T("P2 Color Super Trail 1"), 0x462c0, 0x462e0, 0x10 },
    { _T("P2 Color Super Trail 2"), 0x462e0, 0x46300, 0x10 },
    { _T("P2 Color Super Trail 3"), 0x46300, 0x46320, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_JAB[] =
{
    { _T("Jab"), 0x40e62, 0x40e82, 0x03 },
    { _T("Jab Sonic Boom"), 0x40e82, 0x40ea2, 0x03, 0x01 },
    { _T("Jab Super Trail 1"), 0x40ea2, 0x40ec2, 0x03 },
    { _T("Jab Super Trail 2"), 0x40ec2, 0x40ee2, 0x03 },
    { _T("Jab Super Trail 3"), 0x40ee2, 0x40f02, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x40f04, 0x40f24, 0x03 },
    { _T("Strong Sonic Boom"), 0x40f24, 0x40f44, 0x03, 0x01 },
    { _T("Strong Super Trail 1"), 0x40f44, 0x40f64, 0x03 },
    { _T("Strong Super Trail 2"), 0x40f64, 0x40f84, 0x03 },
    { _T("Strong Super Trail 3"), 0x40f84, 0x40fa4, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x40fa6, 0x40fc6, 0x03 },
    { _T("Fierce Sonic Boom"), 0x40fc6, 0x40fe6, 0x03, 0x01 },
    { _T("Fierce Super Trail 1"), 0x40fe6, 0x41006, 0x03 },
    { _T("Fierce Super Trail 2"), 0x41006, 0x41026, 0x03 },
    { _T("Fierce Super Trail 3"), 0x41026, 0x41046, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_SHORT[] =
{
    { _T("Short"), 0x41048, 0x41068, 0x03 },
    { _T("Short Sonic Boom"), 0x41068, 0x41088, 0x03, 0x01 },
    { _T("Short Super Trail 1"), 0x41088, 0x410a8, 0x03 },
    { _T("Short Super Trail 2"), 0x410a8, 0x410c8, 0x03 },
    { _T("Short Super Trail 3"), 0x410c8, 0x410e8, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x410ea, 0x4110a, 0x03 },
    { _T("Forward Sonic Boom"), 0x4110a, 0x4112a, 0x03, 0x01 },
    { _T("Forward Super Trail 1"), 0x4112a, 0x4114a, 0x03 },
    { _T("Forward Super Trail 2"), 0x4114a, 0x4116a, 0x03 },
    { _T("Forward Super Trail 3"), 0x4116a, 0x4118a, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x4118c, 0x411ac, 0x03 },
    { _T("Roundhouse Sonic Boom"), 0x411ac, 0x411cc, 0x03, 0x01 },
    { _T("Roundhouse Super Trail 1"), 0x411cc, 0x411ec, 0x03 },
    { _T("Roundhouse Super Trail 2"), 0x411ec, 0x4120c, 0x03 },
    { _T("Roundhouse Super Trail 3"), 0x4120c, 0x4122c, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_START[] =
{
    { _T("Start"), 0x4122e, 0x4124e, 0x03 },
    { _T("Start Sonic Boom"), 0x4124e, 0x4126e, 0x03, 0x01 },
    { _T("Start Super Trail 1"), 0x4126e, 0x4128e, 0x03 },
    { _T("Start Super Trail 2"), 0x4128e, 0x412ae, 0x03 },
    { _T("Start Super Trail 3"), 0x412ae, 0x412ce, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x412d0, 0x412f0, 0x03 },
    { _T("Hold Sonic Boom"), 0x412f0, 0x41310, 0x03, 0x01 },
    { _T("Hold Super Trail 1"), 0x41310, 0x41330, 0x03 },
    { _T("Hold Super Trail 2"), 0x41330, 0x41350, 0x03 },
    { _T("Hold Super Trail 3"), 0x41350, 0x41370, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x41372, 0x41392, 0x03 },
    { _T("Old 1P Sonic Boom"), 0x41392, 0x413b2, 0x03, 0x01 },
    { _T("Old 1P Super Trail 1"), 0x413b2, 0x413d2, 0x03 },
    { _T("Old 1P Super Trail 2"), 0x413d2, 0x413f2, 0x03 },
    { _T("Old 1P Super Trail 3"), 0x413f2, 0x41412, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x41414, 0x41434, 0x03 },
    { _T("Old 2P Sonic Boom"), 0x41434, 0x41454, 0x03, 0x01 },
    { _T("Old 2P Super Trail 1"), 0x41454, 0x41474, 0x03 },
    { _T("Old 2P Super Trail 2"), 0x41474, 0x41494, 0x03 },
    { _T("Old 2P Super Trail 3"), 0x41494, 0x414b4, 0x03 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_JAB[] =
{
    { _T("Jab"), 0x414ce, 0x414ee, 0x04 },
    { _T("Jab Super Trail 1"), 0x4150e, 0x4152e, 0x04 },
    { _T("Jab Super Trail 2"), 0x4152e, 0x4154e, 0x04 },
    { _T("Jab Super Trail 3"), 0x4154e, 0x4156e, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x41570, 0x41590, 0x04 },
    { _T("Strong Super Trail 1"), 0x415b0, 0x415d0, 0x04 },
    { _T("Strong Super Trail 2"), 0x415d0, 0x415f0, 0x04 },
    { _T("Strong Super Trail 3"), 0x415f0, 0x41610, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x41612, 0x41632, 0x04 },
    { _T("Fierce Super Trail 1"), 0x41652, 0x41672, 0x04 },
    { _T("Fierce Super Trail 2"), 0x41672, 0x41692, 0x04 },
    { _T("Fierce Super Trail 3"), 0x41692, 0x416b2, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_SHORT[] =
{
    { _T("Short"), 0x416b4, 0x416d4, 0x04 },
    { _T("Short Super Trail 1"), 0x416f4, 0x41714, 0x04 },
    { _T("Short Super Trail 2"), 0x41714, 0x41734, 0x04 },
    { _T("Short Super Trail 3"), 0x41734, 0x41754, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x41756, 0x41776, 0x04 },
    { _T("Forward Super Trail 1"), 0x41796, 0x417b6, 0x04 },
    { _T("Forward Super Trail 2"), 0x417b6, 0x417d6, 0x04 },
    { _T("Forward Super Trail 3"), 0x417d6, 0x417f6, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x417f8, 0x41818, 0x04 },
    { _T("Roundhouse Super Trail 1"), 0x41838, 0x41858, 0x04 },
    { _T("Roundhouse Super Trail 2"), 0x41858, 0x41878, 0x04 },
    { _T("Roundhouse Super Trail 3"), 0x41878, 0x41898, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_START[] =
{
    { _T("Start"), 0x4189a, 0x418ba, 0x04 },
    { _T("Start Super Trail 1"), 0x418da, 0x418fa, 0x04 },
    { _T("Start Super Trail 2"), 0x418fa, 0x4191a, 0x04 },
    { _T("Start Super Trail 3"), 0x4191a, 0x4193a, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x4193c, 0x4195c, 0x04 },
    { _T("Hold Super Trail 1"), 0x4197c, 0x4199c, 0x04 },
    { _T("Hold Super Trail 2"), 0x4199c, 0x419bc, 0x04 },
    { _T("Hold Super Trail 3"), 0x419bc, 0x419dc, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x419de, 0x419fe, 0x04 },
    { _T("Old 1P Super Trail 1"), 0x41a1e, 0x41a3e, 0x04 },
    { _T("Old 1P Super Trail 2"), 0x41a3e, 0x41a5e, 0x04 },
    { _T("Old 1P Super Trail 3"), 0x41a5e, 0x41a7e, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x41a80, 0x41aa0, 0x04 },
    { _T("Old 2P Super Trail 1"), 0x41ac0, 0x41ae0, 0x04 },
    { _T("Old 2P Super Trail 2"), 0x41ae0, 0x41b00, 0x04 },
    { _T("Old 2P Super Trail 3"), 0x41b00, 0x41b20, 0x04 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_JAB[] =
{
    { _T("Jab"), 0x42e7e, 0x42e9e, 0x08 },
    { _T("Jab Cape"), 0x42e9e, 0x42ebe },
    { _T("Jab Super Trail 1"), 0x42ebe, 0x42ede, 0x08 },
    { _T("Jab Super Trail 2"), 0x42ede, 0x42efe, 0x08 },
    { _T("Jab Super Trail 3"), 0x42efe, 0x42f1e, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x42f20, 0x42f40, 0x08 },
    { _T("Strong Cape"), 0x42f40, 0x42f60 },
    { _T("Strong Super Trail 1"), 0x42f60, 0x42f80, 0x08 },
    { _T("Strong Super Trail 2"), 0x42f80, 0x42fa0, 0x08 },
    { _T("Strong Super Trail 3"), 0x42fa0, 0x42fc0, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x42fc2, 0x42fe2, 0x08 },
    { _T("Fierce Cape"), 0x42fe2, 0x43002 },
    { _T("Fierce Super Trail 1"), 0x43002, 0x43022, 0x08 },
    { _T("Fierce Super Trail 2"), 0x43022, 0x43042, 0x08 },
    { _T("Fierce Super Trail 3"), 0x43042, 0x43062, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_SHORT[] =
{
    { _T("Short"), 0x43064, 0x43084, 0x08 },
    { _T("Short Cape"), 0x43084, 0x430a4 },
    { _T("Short Super Trail 1"), 0x430a4, 0x430c4, 0x08 },
    { _T("Short Super Trail 2"), 0x430c4, 0x430e4, 0x08 },
    { _T("Short Super Trail 3"), 0x430e4, 0x43104, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x43106, 0x43126, 0x08 },
    { _T("Forward Cape"), 0x43126, 0x43146 },
    { _T("Forward Super Trail 1"), 0x43146, 0x43166, 0x08 },
    { _T("Forward Super Trail 2"), 0x43166, 0x43186, 0x08 },
    { _T("Forward Super Trail 3"), 0x43186, 0x431a6, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x431a8, 0x431c8, 0x08 },
    { _T("Roundhouse Cape"), 0x431c8, 0x431e8 },
    { _T("Roundhouse Super Trail 1"), 0x431e8, 0x43208, 0x08 },
    { _T("Roundhouse Super Trail 2"), 0x43208, 0x43228, 0x08 },
    { _T("Roundhouse Super Trail 3"), 0x43228, 0x43248, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_START[] =
{
    { _T("Start"), 0x4324a, 0x4326a, 0x08 },
    { _T("Start Cape"), 0x4326a, 0x4328a },
    { _T("Start Super Trail 1"), 0x4328a, 0x432aa, 0x08 },
    { _T("Start Super Trail 2"), 0x432aa, 0x432ca, 0x08 },
    { _T("Start Super Trail 3"), 0x432ca, 0x432ea, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x432ec, 0x4330c, 0x08 },
    { _T("Hold Cape"), 0x4330c, 0x4332c },
    { _T("Hold Super Trail 1"), 0x4332c, 0x4334c, 0x08 },
    { _T("Hold Super Trail 2"), 0x4334c, 0x4336c, 0x08 },
    { _T("Hold Super Trail 3"), 0x4336c, 0x4338c, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x4338e, 0x433ae, 0x08 },
    { _T("Old 1P Cape"), 0x433ae, 0x433ce },
    { _T("Old 1P Super Trail 1"), 0x433ce, 0x433ee, 0x08 },
    { _T("Old 1P Super Trail 2"), 0x433ee, 0x4340e, 0x08 },
    { _T("Old 1P Super Trail 3"), 0x4340e, 0x4342e, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x43430, 0x43450, 0x08 },
    { _T("Old 2P Cape"), 0x43450, 0x43470 },
    { _T("Old 2P Super Trail 1"), 0x43470, 0x43490, 0x08 },
    { _T("Old 2P Super Trail 2"), 0x43490, 0x434b0, 0x08 },
    { _T("Old 2P Super Trail 3"), 0x434b0, 0x434d0, 0x08 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_JAB[] =
{
    { _T("Jab"), 0x3fb2e, 0x3fb4e, 0x00 },
    { _T("Jab Super Trail 1"), 0x3fb6e, 0x3fb8e, 0x00 },
    { _T("Jab Super Trail 2"), 0x3fb8e, 0x3fbae, 0x00 },
    { _T("Jab Super Trail 3"), 0x3fbae, 0x3fbce, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x3fbd0, 0x3fbf0, 0x00 },
    { _T("Strong Super Trail 1"), 0x3fc10, 0x3fc30, 0x00 },
    { _T("Strong Super Trail 2"), 0x3fc30, 0x3fc50, 0x00 },
    { _T("Strong Super Trail 3"), 0x3fc50, 0x3fc70, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x3fc72, 0x3fc92, 0x00 },
    { _T("Fierce Super Trail 1"), 0x3fcb2, 0x3fcd2, 0x00 },
    { _T("Fierce Super Trail 2"), 0x3fcd2, 0x3fcf2, 0x00 },
    { _T("Fierce Super Trail 3"), 0x3fcf2, 0x3fd12, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_SHORT[] =
{
    { _T("Short"), 0x3fd14, 0x3fd34, 0x00 },
    { _T("Short Super Trail 1"), 0x3fd54, 0x3fd74, 0x00 },
    { _T("Short Super Trail 2"), 0x3fd74, 0x3fd94, 0x00 },
    { _T("Short Super Trail 3"), 0x3fd94, 0x3fdb4, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x3fdb6, 0x3fdd6, 0x00 },
    { _T("Forward Super Trail 1"), 0x3fdf6, 0x3fe16, 0x00 },
    { _T("Forward Super Trail 2"), 0x3fe16, 0x3fe36, 0x00 },
    { _T("Forward Super Trail 3"), 0x3fe36, 0x3fe56, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x3fe58, 0x3fe78, 0x00 },
    { _T("Roundhouse Super Trail 1"), 0x3fe98, 0x3feb8, 0x00 },
    { _T("Roundhouse Super Trail 2"), 0x3feb8, 0x3fed8, 0x00 },
    { _T("Roundhouse Super Trail 3"), 0x3fed8, 0x3fef8, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_START[] =
{
    { _T("Start"), 0x3fefa, 0x3ff1a, 0x00 },
    { _T("Start Super Trail 1"), 0x3ff3a, 0x3ff5a, 0x00 },
    { _T("Start Super Trail 2"), 0x3ff5a, 0x3ff7a, 0x00 },
    { _T("Start Super Trail 3"), 0x3ff7a, 0x3ff9a, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x3ff9c, 0x3ffbc, 0x00 },
    { _T("Hold Super Trail 1"), 0x3ffdc, 0x3fffc, 0x00 },
    { _T("Hold Super Trail 2"), 0x3fffc, 0x4001c, 0x00 },
    { _T("Hold Super Trail 3"), 0x4001c, 0x4003c, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x4003e, 0x4005e, 0x00 },
    { _T("Old 1P Super Trail 1"), 0x4007e, 0x4009e, 0x00 },
    { _T("Old 1P Super Trail 2"), 0x4009e, 0x400be, 0x00 },
    { _T("Old 1P Super Trail 3"), 0x400be, 0x400de, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x400e0, 0x40100, 0x00 },
    { _T("Old 2P Super Trail 1"), 0x40120, 0x40140, 0x00 },
    { _T("Old 2P Super Trail 2"), 0x40140, 0x40160, 0x00 },
    { _T("Old 2P Super Trail 3"), 0x40160, 0x40180, 0x00 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_JAB[] =
{
    { _T("Jab"), 0x434ea, 0x4350a, 0x09 },
    { _T("Jab Extra"), 0x4350a, 0x4352a },
    { _T("Jab Super Trail 1"), 0x4352a, 0x4354a, 0x09 },
    { _T("Jab Super Trail 2"), 0x4354a, 0x4356a, 0x09 },
    { _T("Jab Super Trail 3"), 0x4356a, 0x4358a, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x4358c, 0x435ac, 0x09 },
    { _T("Strong Extra"), 0x435ac, 0x435cc },
    { _T("Strong Super Trail 1"), 0x435cc, 0x435ec, 0x09 },
    { _T("Strong Super Trail 2"), 0x435ec, 0x4360c, 0x09 },
    { _T("Strong Super Trail 3"), 0x4360c, 0x4362c, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x4362e, 0x4364e, 0x09 },
    { _T("Fierce Extra"), 0x4364e, 0x4366e },
    { _T("Fierce Super Trail 1"), 0x4366e, 0x4368e, 0x09 },
    { _T("Fierce Super Trail 2"), 0x4368e, 0x436ae, 0x09 },
    { _T("Fierce Super Trail 3"), 0x436ae, 0x436ce, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_SHORT[] =
{
    { _T("Short"), 0x436d0, 0x436f0, 0x09 },
    { _T("Short Extra"), 0x436f0, 0x43710 },
    { _T("Short Super Trail 1"), 0x43710, 0x43730, 0x09 },
    { _T("Short Super Trail 2"), 0x43730, 0x43750, 0x09 },
    { _T("Short Super Trail 3"), 0x43750, 0x43770, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x43772, 0x43792, 0x09 },
    { _T("Forward Extra"), 0x43792, 0x437b2 },
    { _T("Forward Super Trail 1"), 0x437b2, 0x437d2, 0x09 },
    { _T("Forward Super Trail 2"), 0x437d2, 0x437f2, 0x09 },
    { _T("Forward Super Trail 3"), 0x437f2, 0x43812, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x43814, 0x43834, 0x09 },
    { _T("Roundhouse Extra"), 0x43834, 0x43854 },
    { _T("Roundhouse Super Trail 1"), 0x43854, 0x43874, 0x09 },
    { _T("Roundhouse Super Trail 2"), 0x43874, 0x43894, 0x09 },
    { _T("Roundhouse Super Trail 3"), 0x43894, 0x438b4, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_START[] =
{
    { _T("Start"), 0x438b6, 0x438d6, 0x09 },
    { _T("Start Extra"), 0x438d6, 0x438f6 },
    { _T("Start Super Trail 1"), 0x438f6, 0x43916, 0x09 },
    { _T("Start Super Trail 2"), 0x43916, 0x43936, 0x09 },
    { _T("Start Super Trail 3"), 0x43936, 0x43956, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x43958, 0x43978, 0x09 },
    { _T("Hold Extra"), 0x43978, 0x43998 },
    { _T("Hold Super Trail 1"), 0x43998, 0x439b8, 0x09 },
    { _T("Hold Super Trail 2"), 0x439b8, 0x439d8, 0x09 },
    { _T("Hold Super Trail 3"), 0x439d8, 0x439f8, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x439fa, 0x43a1a, 0x09 },
    { _T("Old 1P Extra"), 0x43a1a, 0x43a3a },
    { _T("Old 1P Super Trail 1"), 0x43a3a, 0x43a5a, 0x09 },
    { _T("Old 1P Super Trail 2"), 0x43a5a, 0x43a7a, 0x09 },
    { _T("Old 1P Super Trail 3"), 0x43a7a, 0x43a9a, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x43a9c, 0x43abc, 0x09 },
    { _T("Old 2P Extra"), 0x43abc, 0x43adc },
    { _T("Old 2P Super Trail 1"), 0x43adc, 0x43afc, 0x09 },
    { _T("Old 2P Super Trail 2"), 0x43afc, 0x43b1c, 0x09 },
    { _T("Old 2P Super Trail 3"), 0x43b1c, 0x43b3c, 0x09 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_JAB[] =
{
    { _T("Jab"), 0x44e9a, 0x44eba, 0x0d },
    { _T("Jab Super Trail 1"), 0x44eda, 0x44efa, 0x0d },
    { _T("Jab Super Trail 2"), 0x44efa, 0x44f1a, 0x0d },
    { _T("Jab Super Trail 3"), 0x44f1a, 0x44f3a, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x44f3c, 0x44f5c, 0x0d },
    { _T("Strong Super Trail 1"), 0x44f7c, 0x44f9c, 0x0d },
    { _T("Strong Super Trail 2"), 0x44f9c, 0x44fbc, 0x0d },
    { _T("Strong Super Trail 3"), 0x44fbc, 0x44fdc, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x44fde, 0x44ffe, 0x0d },
    { _T("Fierce Super Trail 1"), 0x4501e, 0x4503e, 0x0d },
    { _T("Fierce Super Trail 2"), 0x4503e, 0x4505e, 0x0d },
    { _T("Fierce Super Trail 3"), 0x4505e, 0x4507e, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_SHORT[] =
{
    { _T("Short"), 0x45080, 0x450a0, 0x0d },
    { _T("Short Super Trail 1"), 0x450c0, 0x450e0, 0x0d },
    { _T("Short Super Trail 2"), 0x450e0, 0x45100, 0x0d },
    { _T("Short Super Trail 3"), 0x45100, 0x45120, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x45122, 0x45142, 0x0d },
    { _T("Forward Super Trail 1"), 0x45162, 0x45182, 0x0d },
    { _T("Forward Super Trail 2"), 0x45182, 0x451a2, 0x0d },
    { _T("Forward Super Trail 3"), 0x451a2, 0x451c2, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x451c4, 0x451e4, 0x0d },
    { _T("Roundhouse Super Trail 1"), 0x45204, 0x45224, 0x0d },
    { _T("Roundhouse Super Trail 2"), 0x45224, 0x45244, 0x0d },
    { _T("Roundhouse Super Trail 3"), 0x45244, 0x45264, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_START[] =
{
    { _T("Start"), 0x45266, 0x45286, 0x0d },
    { _T("Start Super Trail 1"), 0x452a6, 0x452c6, 0x0d },
    { _T("Start Super Trail 2"), 0x452c6, 0x452e6, 0x0d },
    { _T("Start Super Trail 3"), 0x452e6, 0x45306, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x45308, 0x45328, 0x0d },
    { _T("Hold Super Trail 1"), 0x45348, 0x45368, 0x0d },
    { _T("Hold Super Trail 2"), 0x45368, 0x45388, 0x0d },
    { _T("Hold Super Trail 3"), 0x45388, 0x453a8, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x453aa, 0x453ca, 0x0d },
    { _T("Old 1P Super Trail 1"), 0x453ea, 0x4540a, 0x0d },
    { _T("Old 1P Super Trail 2"), 0x4540a, 0x4542a, 0x0d },
    { _T("Old 1P Super Trail 3"), 0x4542a, 0x4544a, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x4544c, 0x4546c, 0x0d },
    { _T("Old 2P Super Trail 1"), 0x4548c, 0x454ac, 0x0d },
    { _T("Old 2P Super Trail 2"), 0x454ac, 0x454cc, 0x0d },
    { _T("Old 2P Super Trail 3"), 0x454cc, 0x454ec, 0x0d },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_JAB[] =
{
    { _T("Jab"), 0x441c2, 0x441e2, 0x0b },
    { _T("Jab Super Trail 1"), 0x44202, 0x44222, 0x0b },
    { _T("Jab Super Trail 2"), 0x44222, 0x44242, 0x0b },
    { _T("Jab Super Trail 3"), 0x44242, 0x44262, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x44264, 0x44284, 0x0b },
    { _T("Strong Super Trail 1"), 0x442a4, 0x442c4, 0x0b },
    { _T("Strong Super Trail 2"), 0x442c4, 0x442e4, 0x0b },
    { _T("Strong Super Trail 3"), 0x442e4, 0x44304, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x44306, 0x44326, 0x0b },
    { _T("Fierce Super Trail 1"), 0x44346, 0x44366, 0x0b },
    { _T("Fierce Super Trail 2"), 0x44366, 0x44386, 0x0b },
    { _T("Fierce Super Trail 3"), 0x44386, 0x443a6, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_SHORT[] =
{
    { _T("Short"), 0x443a8, 0x443c8, 0x0b },
    { _T("Short Super Trail 1"), 0x443e8, 0x44408, 0x0b },
    { _T("Short Super Trail 2"), 0x44408, 0x44428, 0x0b },
    { _T("Short Super Trail 3"), 0x44428, 0x44448, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x4444a, 0x4446a, 0x0b },
    { _T("Forward Super Trail 1"), 0x4448a, 0x444aa, 0x0b },
    { _T("Forward Super Trail 2"), 0x444aa, 0x444ca, 0x0b },
    { _T("Forward Super Trail 3"), 0x444ca, 0x444ea, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x444ec, 0x4450c, 0x0b },
    { _T("Roundhouse Super Trail 1"), 0x4452c, 0x4454c, 0x0b },
    { _T("Roundhouse Super Trail 2"), 0x4454c, 0x4456c, 0x0b },
    { _T("Roundhouse Super Trail 3"), 0x4456c, 0x4458c, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_START[] =
{
    { _T("Start"), 0x4458e, 0x445ae, 0x0b },
    { _T("Start Super Trail 1"), 0x445ce, 0x445ee, 0x0b },
    { _T("Start Super Trail 2"), 0x445ee, 0x4460e, 0x0b },
    { _T("Start Super Trail 3"), 0x4460e, 0x4462e, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x44630, 0x44650, 0x0b },
    { _T("Hold Super Trail 1"), 0x44670, 0x44690, 0x0b },
    { _T("Hold Super Trail 2"), 0x44690, 0x446b0, 0x0b },
    { _T("Hold Super Trail 3"), 0x446b0, 0x446d0, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x446d2, 0x446f2, 0x0b },
    { _T("Old 1P Super Trail 1"), 0x44712, 0x44732, 0x0b },
    { _T("Old 1P Super Trail 2"), 0x44732, 0x44752, 0x0b },
    { _T("Old 1P Super Trail 3"), 0x44752, 0x44772, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x44774, 0x44794, 0x0b },
    { _T("Old 2P Super Trail 1"), 0x447b4, 0x447d4, 0x0b },
    { _T("Old 2P Super Trail 2"), 0x447d4, 0x447f4, 0x0b },
    { _T("Old 2P Super Trail 3"), 0x447f4, 0x44814, 0x0b },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_JAB[] =
{
    { _T("Jab"), 0x421a6, 0x421c6, 0x06 },
    { _T("Jab Extra"), 0x421c6, 0x421e6 },
    { _T("Jab Super Trail 1"), 0x421e6, 0x42206, 0x06 },
    { _T("Jab Super Trail 2"), 0x42206, 0x42226, 0x06 },
    { _T("Jab Super Trail 3"), 0x42226, 0x42246, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_STRONG[] =
{
    { _T("Strong"), 0x42248, 0x42268, 0x06 },
    { _T("Strong Extra"), 0x42268, 0x42288 },
    { _T("Strong Super Trail 1"), 0x42288, 0x422a8, 0x06 },
    { _T("Strong Super Trail 2"), 0x422a8, 0x422c8, 0x06 },
    { _T("Strong Super Trail 3"), 0x422c8, 0x422e8, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FIERCE[] =
{
    { _T("Fierce"), 0x422ea, 0x4230a, 0x06 },
    { _T("Fierce Extra"), 0x4230a, 0x4232a },
    { _T("Fierce Super Trail 1"), 0x4232a, 0x4234a, 0x06 },
    { _T("Fierce Super Trail 2"), 0x4234a, 0x4236a, 0x06 },
    { _T("Fierce Super Trail 3"), 0x4236a, 0x4238a, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_SHORT[] =
{
    { _T("Short"), 0x4238c, 0x423ac, 0x06 },
    { _T("Short Extra"), 0x423ac, 0x423cc },
    { _T("Short Super Trail 1"), 0x423cc, 0x423ec, 0x06 },
    { _T("Short Super Trail 2"), 0x423ec, 0x4240c, 0x06 },
    { _T("Short Super Trail 3"), 0x4240c, 0x4242c, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FORWARD[] =
{
    { _T("Forward"), 0x4242e, 0x4244e, 0x06 },
    { _T("Forward Extra"), 0x4244e, 0x4246e },
    { _T("Forward Super Trail 1"), 0x4246e, 0x4248e, 0x06 },
    { _T("Forward Super Trail 2"), 0x4248e, 0x424ae, 0x06 },
    { _T("Forward Super Trail 3"), 0x424ae, 0x424ce, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x424d0, 0x424f0, 0x06 },
    { _T("Roundhouse Extra"), 0x424f0, 0x42510 },
    { _T("Roundhouse Super Trail 1"), 0x42510, 0x42530, 0x06 },
    { _T("Roundhouse Super Trail 2"), 0x42530, 0x42550, 0x06 },
    { _T("Roundhouse Super Trail 3"), 0x42550, 0x42570, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_START[] =
{
    { _T("Start"), 0x42572, 0x42592, 0x06 },
    { _T("Start Extra"), 0x42592, 0x425b2 },
    { _T("Start Super Trail 1"), 0x425b2, 0x425d2, 0x06 },
    { _T("Start Super Trail 2"), 0x425d2, 0x425f2, 0x06 },
    { _T("Start Super Trail 3"), 0x425f2, 0x42612, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_HOLD[] =
{
    { _T("Hold"), 0x42614, 0x42634, 0x06 },
    { _T("Hold Extra"), 0x42634, 0x42654 },
    { _T("Hold Super Trail 1"), 0x42654, 0x42674, 0x06 },
    { _T("Hold Super Trail 2"), 0x42674, 0x42694, 0x06 },
    { _T("Hold Super Trail 3"), 0x42694, 0x426b4, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD1P[] =
{
    { _T("Old 1P"), 0x426b6, 0x426d6, 0x06 },
    { _T("Old 1P Extra"), 0x426d6, 0x426f6 },
    { _T("Old 1P Super Trail 1"), 0x426f6, 0x42716, 0x06 },
    { _T("Old 1P Super Trail 2"), 0x42716, 0x42736, 0x06 },
    { _T("Old 1P Super Trail 3"), 0x42736, 0x42756, 0x06 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD2P[] =
{
    { _T("Old 2P"), 0x42758, 0x42778, 0x06 },
    { _T("Old 2P Extra"), 0x42778, 0x42798 },
    { _T("Old 2P Super Trail 1"), 0x42798, 0x427b8, 0x06 },
    { _T("Old 2P Super Trail 2"), 0x427b8, 0x427d8, 0x06 },
    { _T("Old 2P Super Trail 3"), 0x427d8, 0x427f8, 0x06 },
};

const sDescTreeNode SSF2T_A_RYU_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_RYU_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_START,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_EHONDA_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_START,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_BLANKA_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_START,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_GUILE_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_GUILE_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_START,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_KEN_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_KEN_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_START,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_CHUNLI_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_START,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD1P) },
    { _T("Old 2P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_ZANGIEF_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_DHALSIM_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_START,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_MBISON_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_MBISON_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_START,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_SAGAT_COLLECTION[] =
{
    { _T("Jab"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_JAB) },
    { _T("Strong"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_STRONG) },
    { _T("Fierce"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FIERCE) },
    { _T("Short"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_START,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_START) },
    { _T("Hold"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_HOLD) },
    { _T("Old 1P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD1P) },
    { _T("Old 2P"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_BALROG_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_BALROG_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_START,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD1P) },
    { _T("Old 2P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_VEGA_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_VEGA_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_VEGA_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_VEGA_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_START,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_VEGA_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD1P) },
    { _T("Old 2P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_CAMMY_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_START,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD1P) },
    { _T("Old 2P"), 	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_THAWK_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_THAWK_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_THAWK_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_THAWK_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_START,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_THAWK_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD1P) },
    { _T("Old 2P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_FEILONG_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_START,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD1P) },
    { _T("Old 2P"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_DEEJAY_COLLECTION[] =
{
    { _T("Jab"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_JAB) },
    { _T("Strong"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_STRONG) },
    { _T("Fierce"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FIERCE) },
    { _T("Short"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_SHORT) },
    { _T("Forward"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FORWARD) },
    { _T("Roundhouse"),	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE) },
    { _T("Start"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_START,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_START) },
    { _T("Hold"),	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_HOLD) },
    { _T("Old 1P"),	    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD1P) },
    { _T("Old 2P"),	    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_GOUKI_COLLECTION[] =
{
    { _T("P1 Color"),	DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P1COLOR,     ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P1COLOR) },
    { _T("P2 Color"),	DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P2COLOR,     ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P2COLOR) },
};

// THESE ARE IN sfxe.03c
const sGame_PaletteDataset SSF2T_A_RYU_PORTRAIT_NODE[] =
{
    { _T("Ryu Portrait - Jab"), 0x31c48, 0x31cc8, 0x00, 0x10 },
    { _T("Ryu Portrait - Strong"), 0x31cc8, 0x31d48, 0x00, 0x10 },
    { _T("Ryu Portrait - Fierce"), 0x31d48, 0x31dc8, 0x00, 0x10 },
    { _T("Ryu Portrait - Short"), 0x31dc8, 0x31e48, 0x00, 0x10 },
    { _T("Ryu Portrait - Forward"), 0x31e48, 0x31ec8, 0x00, 0x10 },
    { _T("Ryu Portrait - RH"), 0x31ec8, 0x31f48, 0x00, 0x10 },
    { _T("Ryu Portrait - Start"), 0x31f48, 0x31fc8, 0x00, 0x10 },
    { _T("Ryu Portrait - Hold"), 0x31fc8, 0x32048, 0x00, 0x10 },
    { _T("Ryu Portrait - Old 1P"), 0x32048, 0x320c8, 0x00, 0x10 },
    { _T("Ryu Portrait - Old 2P"), 0x320c8, 0x32148, 0x00, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_EHONDA_PORTRAIT_NODE[] =
{
    { _T("E. Honda Portrait - Jab"), 0x32148, 0x321c8, 0x01, 0x10 },
    { _T("E. Honda Portrait - Strong"), 0x321c8, 0x32248, 0x01, 0x10 },
    { _T("E. Honda Portrait - Fierce"), 0x32248, 0x322c8, 0x01, 0x10 },
    { _T("E. Honda Portrait - Short"), 0x322c8, 0x32348, 0x01, 0x10 },
    { _T("E. Honda Portrait - Forward"), 0x32348, 0x323c8, 0x01, 0x10 },
    { _T("E. Honda Portrait - RH"), 0x323c8, 0x32448, 0x01, 0x10 },
    { _T("E. Honda Portrait - Start"), 0x32448, 0x324c8, 0x01, 0x10 },
    { _T("E. Honda Portrait - Hold"), 0x324c8, 0x32548, 0x01, 0x10 },
    { _T("E. Honda Portrait - Old 1P"), 0x32548, 0x325c8, 0x01, 0x10 },
    { _T("E. Honda Portrait - Old 2P"), 0x325c8, 0x32648, 0x01, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BLANKA_PORTRAIT_NODE[] =
{
    { _T("Blanka Portrait - Jab"), 0x32648, 0x326c8, 0x02, 0x10 },
    { _T("Blanka Portrait - Strong"), 0x326c8, 0x32748, 0x02, 0x10 },
    { _T("Blanka Portrait - Fierce"), 0x32748, 0x327c8, 0x02, 0x10 },
    { _T("Blanka Portrait - Short"), 0x327c8, 0x32848, 0x02, 0x10 },
    { _T("Blanka Portrait - Forward"), 0x32848, 0x328c8, 0x02, 0x10 },
    { _T("Blanka Portrait - RH"), 0x328c8, 0x32948, 0x02, 0x10 },
    { _T("Blanka Portrait - Start"), 0x32948, 0x329c8, 0x02, 0x10 },
    { _T("Blanka Portrait - Hold"), 0x329c8, 0x32a48, 0x02, 0x10 },
    { _T("Blanka Portrait - Old 1P"), 0x32a48, 0x32ac8, 0x02, 0x10 },
    { _T("Blanka Portrait - Old 2P"), 0x32ac8, 0x32b48, 0x02, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_GUILE_PORTRAIT_NODE[] =
{
    { _T("Guile Portrait - Jab"), 0x32b48, 0x32bc8, 0x03, 0x10 },
    { _T("Guile Portrait - Strong"), 0x32bc8, 0x32c48, 0x03, 0x10 },
    { _T("Guile Portrait - Fierce"), 0x32c48, 0x32cc8, 0x03, 0x10 },
    { _T("Guile Portrait - Short"), 0x32cc8, 0x32d48, 0x03, 0x10 },
    { _T("Guile Portrait - Forward"), 0x32d48, 0x32dc8, 0x03, 0x10 },
    { _T("Guile Portrait - RH"), 0x32dc8, 0x32e48, 0x03, 0x10 },
    { _T("Guile Portrait - Start"), 0x32e48, 0x32ec8, 0x03, 0x10 },
    { _T("Guile Portrait - Hold"), 0x32ec8, 0x32f48, 0x03, 0x10 },
    { _T("Guile Portrait - Old 1P"), 0x32f48, 0x32fc8, 0x03, 0x10 },
    { _T("Guile Portrait - Old 2P"), 0x32fc8, 0x33048, 0x03, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_KEN_PORTRAIT_NODE[] =
{
    { _T("Ken Portrait - Jab"), 0x33048, 0x330c8, 0x04, 0x10 },
    { _T("Ken Portrait - Strong"), 0x330c8, 0x33148, 0x04, 0x10 },
    { _T("Ken Portrait - Fierce"), 0x33148, 0x331c8, 0x04, 0x10 },
    { _T("Ken Portrait - Short"), 0x331c8, 0x33248, 0x04, 0x10 },
    { _T("Ken Portrait - Forward"), 0x33248, 0x332c8, 0x04, 0x10 },
    { _T("Ken Portrait - RH"), 0x332c8, 0x33348, 0x04, 0x10 },
    { _T("Ken Portrait - Start"), 0x33348, 0x333c8, 0x04, 0x10 },
    { _T("Ken Portrait - Hold"), 0x333c8, 0x33448, 0x04, 0x10 },
    { _T("Ken Portrait - Old 1P"), 0x33448, 0x334c8, 0x04, 0x10 },
    { _T("Ken Portrait - Old 2P"), 0x334c8, 0x33548, 0x04, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_CHUNLI_PORTRAIT_NODE[] =
{
    { _T("Chun-Li Portrait - Jab"), 0x33548, 0x335c8, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Strong"), 0x335c8, 0x33648, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Fierce"), 0x33648, 0x336c8, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Short"), 0x336c8, 0x33748, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Forward"), 0x33748, 0x337c8, 0x05, 0x10 },
    { _T("Chun-Li Portrait - RH"), 0x337c8, 0x33848, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Start"), 0x33848, 0x338c8, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Hold"), 0x338c8, 0x33948, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Old 1P"), 0x33948, 0x339c8, 0x05, 0x10 },
    { _T("Chun-Li Portrait - Old 2P"), 0x339c8, 0x33a48, 0x05, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_ZANGIEF_PORTRAIT_NODE[] =
{
    { _T("Zangief Portrait - Jab"), 0x33a48, 0x33ac8, 0x06, 0x10 },
    { _T("Zangief Portrait - Strong"), 0x33ac8, 0x33b48, 0x06, 0x10 },
    { _T("Zangief Portrait - Fierce"), 0x33b48, 0x33bc8, 0x06, 0x10 },
    { _T("Zangief Portrait - Short"), 0x33bc8, 0x33c48, 0x06, 0x10 },
    { _T("Zangief Portrait - Forward"), 0x33c48, 0x33cc8, 0x06, 0x10 },
    { _T("Zangief Portrait - RH"), 0x33cc8, 0x33d48, 0x06, 0x10 },
    { _T("Zangief Portrait - Start"), 0x33d48, 0x33dc8, 0x06, 0x10 },
    { _T("Zangief Portrait - Hold"), 0x33dc8, 0x33e48, 0x06, 0x10 },
    { _T("Zangief Portrait - Old 1P"), 0x33e48, 0x33ec8, 0x06, 0x10 },
    { _T("Zangief Portrait - Old 2P"), 0x33ec8, 0x33f48, 0x06, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DHALSIM_PORTRAIT_NODE[] =
{
    { _T("Dhalsim Portrait - Jab"), 0x33f48, 0x33fc8, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Strong"), 0x33fc8, 0x34048, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Fierce"), 0x34048, 0x340c8, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Short"), 0x340c8, 0x34148, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Forward"), 0x34148, 0x341c8, 0x07, 0x10 },
    { _T("Dhalsim Portrait - RH"), 0x341c8, 0x34248, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Start"), 0x34248, 0x342c8, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Hold"), 0x342c8, 0x34348, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Old 1P"), 0x34348, 0x343c8, 0x07, 0x10 },
    { _T("Dhalsim Portrait - Old 2P"), 0x343c8, 0x34448, 0x07, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_MBISON_PORTRAIT_NODE[] =
{
    { _T("M. Bison Portrait - Jab"), 0x34448, 0x344c8, 0x08, 0x10 },
    { _T("M. Bison Portrait - Strong"), 0x344c8, 0x34548, 0x08, 0x10 },
    { _T("M. Bison Portrait - Fierce"), 0x34548, 0x345c8, 0x08, 0x10 },
    { _T("M. Bison Portrait - Short"), 0x345c8, 0x34648, 0x08, 0x10 },
    { _T("M. Bison Portrait - Forward"), 0x34648, 0x346c8, 0x08, 0x10 },
    { _T("M. Bison Portrait - RH"), 0x346c8, 0x34748, 0x08, 0x10 },
    { _T("M. Bison Portrait - Start"), 0x34748, 0x347c8, 0x08, 0x10 },
    { _T("M. Bison Portrait - Hold"), 0x347c8, 0x34848, 0x08, 0x10 },
    { _T("M. Bison Portrait - Old 1P"), 0x34848, 0x348c8, 0x08, 0x10 },
    { _T("M. Bison Portrait - Old 2P"), 0x348c8, 0x34948, 0x08, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_SAGAT_PORTRAIT_NODE[] =
{
    { _T("Sagat Portrait - Jab"), 0x34948, 0x349c8, 0x09, 0x10 },
    { _T("Sagat Portrait - Strong"), 0x349c8, 0x34a48, 0x09, 0x10 },
    { _T("Sagat Portrait - Fierce"), 0x34a48, 0x34ac8, 0x09, 0x10 },
    { _T("Sagat Portrait - Short"), 0x34ac8, 0x34b48, 0x09, 0x10 },
    { _T("Sagat Portrait - Forward"), 0x34b48, 0x34bc8, 0x09, 0x10 },
    { _T("Sagat Portrait - RH"), 0x34bc8, 0x34c48, 0x09, 0x10 },
    { _T("Sagat Portrait - Start"), 0x34c48, 0x34cc8, 0x09, 0x10 },
    { _T("Sagat Portrait - Hold"), 0x34cc8, 0x34d48, 0x09, 0x10 },
    { _T("Sagat Portrait - Old 1P"), 0x34d48, 0x34dc8, 0x09, 0x10 },
    { _T("Sagat Portrait - Old 2P"), 0x34dc8, 0x34e48, 0x09, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_BALROG_PORTRAIT_NODE[] =
{
    { _T("Balrog Portrait - Jab"), 0x34e48, 0x34ec8, 0x0a, 0x10 },
    { _T("Balrog Portrait - Strong"), 0x34ec8, 0x34f48, 0x0a, 0x10 },
    { _T("Balrog Portrait - Fierce"), 0x34f48, 0x34fc8, 0x0a, 0x10 },
    { _T("Balrog Portrait - Short"), 0x34fc8, 0x35048, 0x0a, 0x10 },
    { _T("Balrog Portrait - Forward"), 0x35048, 0x350c8, 0x0a, 0x10 },
    { _T("Balrog Portrait - RH"), 0x350c8, 0x35148, 0x0a, 0x10 },
    { _T("Balrog Portrait - Start"), 0x35148, 0x351c8, 0x0a, 0x10 },
    { _T("Balrog Portrait - Hold"), 0x351c8, 0x35248, 0x0a, 0x10 },
    { _T("Balrog Portrait - Old 1P"), 0x35248, 0x352c8, 0x0a, 0x10 },
    { _T("Balrog Portrait - Old 2P"), 0x352c8, 0x35348, 0x0a, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_VEGA_PORTRAIT_NODE[] =
{
    { _T("Vega Portrait - Jab"), 0x35348, 0x353c8, 0x0b, 0x10 },
    { _T("Vega Portrait - Strong"), 0x353c8, 0x35448, 0x0b, 0x10 },
    { _T("Vega Portrait - Fierce"), 0x35448, 0x354c8, 0x0b, 0x10 },
    { _T("Vega Portrait - Short"), 0x354c8, 0x35548, 0x0b, 0x10 },
    { _T("Vega Portrait - Forward"), 0x35548, 0x355c8, 0x0b, 0x10 },
    { _T("Vega Portrait - RH"), 0x355c8, 0x35648, 0x0b, 0x10 },
    { _T("Vega Portrait - Start"), 0x35648, 0x356c8, 0x0b, 0x10 },
    { _T("Vega Portrait - Hold"), 0x356c8, 0x35748, 0x0b, 0x10 },
    { _T("Vega Portrait - Old 1P"), 0x35748, 0x357c8, 0x0b, 0x10 },
    { _T("Vega Portrait - Old 2P"), 0x357c8, 0x35848, 0x0b, 0x10 }, };

const sGame_PaletteDataset SSF2T_A_CAMMY_PORTRAIT_NODE[] =
{
    { _T("Cammy Portrait - Jab"), 0x35848, 0x358c8, 0x0c, 0x10 },
    { _T("Cammy Portrait - Strong"), 0x358c8, 0x35948, 0x0c, 0x10 },
    { _T("Cammy Portrait - Fierce"), 0x35948, 0x359c8, 0x0c, 0x10 },
    { _T("Cammy Portrait - Short"), 0x359c8, 0x35a48, 0x0c, 0x10 },
    { _T("Cammy Portrait - Forward"), 0x35a48, 0x35ac8, 0x0c, 0x10 },
    { _T("Cammy Portrait - RH"), 0x35ac8, 0x35b48, 0x0c, 0x10 },
    { _T("Cammy Portrait - Start"), 0x35b48, 0x35bc8, 0x0c, 0x10 },
    { _T("Cammy Portrait - Hold"), 0x35bc8, 0x35c48, 0x0c, 0x10 },
    { _T("Cammy Portrait - Old 1P"), 0x35c48, 0x35cc8, 0x0c, 0x10 },
    { _T("Cammy Portrait - Old 2P"), 0x35cc8, 0x35d48, 0x0c, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_THAWK_PORTRAIT_NODE[] =
{
    { _T("T-Hawk Portrait - Jab"), 0x35d48, 0x35dc8, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Strong"), 0x35dc8, 0x35e48, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Fierce"), 0x35e48, 0x35ec8, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Short"), 0x35ec8, 0x35f48, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Forward"), 0x35f48, 0x35fc8, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - RH"), 0x35fc8, 0x36048, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Start"), 0x36048, 0x360c8, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Hold"), 0x360c8, 0x36148, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Old 1P"), 0x36148, 0x361c8, 0x0d, 0x10 },
    { _T("T-Hawk Portrait - Old 2P"), 0x361c8, 0x36248, 0x0d, 0x10 }, };

const sGame_PaletteDataset SSF2T_A_FEILONG_PORTRAIT_NODE[] =
{
    { _T("Fei Long Portrait - Jab"), 0x36248, 0x362c8, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Strong"), 0x362c8, 0x36348, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Fierce"), 0x36348, 0x363c8, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Short"), 0x363c8, 0x36448, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Forward"), 0x36448, 0x364c8, 0x0e, 0x10 },
    { _T("Fei Long Portrait - RH"), 0x364c8, 0x36548, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Start"), 0x36548, 0x365c8, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Hold"), 0x365c8, 0x36648, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Old 1P"), 0x36648, 0x366c8, 0x0e, 0x10 },
    { _T("Fei Long Portrait - Old 2P"), 0x366c8, 0x36748, 0x0e, 0x10 },
};

const sGame_PaletteDataset SSF2T_A_DEEJAY_PORTRAIT_NODE[] =
{
    { _T("Dee Jay Portrait - Jab"), 0x36748, 0x367c8, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Strong"), 0x367c8, 0x36848, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Fierce"), 0x36848, 0x368c8, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Short"), 0x368c8, 0x36948, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Forward"), 0x36948, 0x369c8, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - RH"), 0x369c8, 0x36a48, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Start"), 0x36a48, 0x36ac8, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Hold"), 0x36ac8, 0x36b48, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Old 1P"), 0x36b48, 0x36bc8, 0x0f, 0x10 },
    { _T("Dee Jay Portrait - Old 2P"), 0x36bc8, 0x36c48, 0x0f, 0x10 },
};

#ifdef UNUSED_PALETTES
    // These actually aren't used!  Only the P1s are ever shown.
    { _T("Ryu Portrait P2"),      0x036cfe, 0x036d7e, 0x00, 0x10 },
    { _T("E. Honda Portrait P2"), 0x0371fe, 0x03727e, 0x01, 0x10 },
    { _T("Blanka Portrait P2"),   0x0376fe, 0x03777e, 0x02, 0x10 },
    { _T("Guile Portrait P2"),    0x037bfe, 0x037c7e, 0x03, 0x10 },
    { _T("Ken Portrait P2"),      0x0380fe, 0x03817e, 0x04, 0x10 },
    { _T("Chun-Li Portrait P2"),  0x0385fe, 0x03867e, 0x05, 0x10 },
    { _T("Zangief Portrait P2"),  0x038afe, 0x038b7e, 0x06, 0x10 },
    { _T("Dhalsim Portrait P2"),  0x038ffe, 0x03907e, 0x07, 0x10 },
    { _T("M. Bison Portrait P2"), 0x0394fe, 0x03957e, 0x08, 0x10 },
    { _T("Sagat Portrait P2"),    0x0399fe, 0x039a7e, 0x09, 0x10 },
    { _T("Balrog Portrait P2"),   0x039efe, 0x039f7e, 0x0A, 0x10 },
    { _T("Vega Portrait P2"),     0x03a3fe, 0x03a47e, 0x0B, 0x10 },
    { _T("Cammy Portrait P2"),    0x03a8fe, 0x03a97e, 0x0C, 0x10 },
    { _T("T-Hawk Portrait P2"),   0x03adfe, 0x03ae7e, 0x0D, 0x10 },
    { _T("Fei Long Portrait P2"), 0x03b2fe, 0x03b37e, 0x0E, 0x10 },
    { _T("Dee Jay Portrait P2"),  0x03b7fe, 0x03b87e, 0x0F, 0x10 },
#endif


const sDescTreeNode SSF2T_A_PORTRAITS_COLLECTION[] =
{
    { _T("Balrog"),      DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_PORTRAIT_NODE,       ARRAYSIZE(SSF2T_A_BALROG_PORTRAIT_NODE) },
    { _T("Blanka"),      DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_PORTRAIT_NODE,       ARRAYSIZE(SSF2T_A_BLANKA_PORTRAIT_NODE) },
    { _T("Cammy"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_PORTRAIT_NODE,        ARRAYSIZE(SSF2T_A_CAMMY_PORTRAIT_NODE) },
    { _T("Chun-Li"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_PORTRAIT_NODE,       ARRAYSIZE(SSF2T_A_CHUNLI_PORTRAIT_NODE) },
    { _T("Dee Jay"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PORTRAIT_NODE,       ARRAYSIZE(SSF2T_A_DEEJAY_PORTRAIT_NODE) },
    { _T("Dhalsim"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_PORTRAIT_NODE,      ARRAYSIZE(SSF2T_A_DHALSIM_PORTRAIT_NODE) },
    { _T("E. Honda"),    DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_PORTRAIT_NODE,       ARRAYSIZE(SSF2T_A_EHONDA_PORTRAIT_NODE) },
    { _T("Fei Long"),    DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_PORTRAIT_NODE,      ARRAYSIZE(SSF2T_A_FEILONG_PORTRAIT_NODE) },
    { _T("Guile"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_PORTRAIT_NODE,        ARRAYSIZE(SSF2T_A_GUILE_PORTRAIT_NODE) },
    { _T("Ken"),         DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_PORTRAIT_NODE,          ARRAYSIZE(SSF2T_A_KEN_PORTRAIT_NODE) },
    { _T("M. Bison"),    DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_PORTRAIT_NODE,       ARRAYSIZE(SSF2T_A_MBISON_PORTRAIT_NODE) },
    { _T("Ryu"),         DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_PORTRAIT_NODE,          ARRAYSIZE(SSF2T_A_RYU_PORTRAIT_NODE) },
    { _T("Sagat"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_PORTRAIT_NODE,        ARRAYSIZE(SSF2T_A_SAGAT_PORTRAIT_NODE) },
    { _T("T-Hawk"),      DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_PORTRAIT_NODE,        ARRAYSIZE(SSF2T_A_THAWK_PORTRAIT_NODE) },
    { _T("Vega"),        DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_PORTRAIT_NODE,         ARRAYSIZE(SSF2T_A_VEGA_PORTRAIT_NODE) },
    { _T("Zangief"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_PORTRAIT_NODE,      ARRAYSIZE(SSF2T_A_ZANGIEF_PORTRAIT_NODE) },
};

const sDescTreeNode SSF2T_A_UNITS_3C[SSF2T_A_NUM_IND_3C] =
{
    { _T("Portraits"),   DESC_NODETYPE_TREE, (void*)SSF2T_A_PORTRAITS_COLLECTION,    ARRAYSIZE(SSF2T_A_PORTRAITS_COLLECTION) },
};

const sDescTreeNode SSF2T_A_UNITS_4A[SSF2T_A_NUM_IND_4A] =
{
    { _T("Balrog"),      DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_COLLECTION,       ARRAYSIZE(SSF2T_A_BALROG_COLLECTION) },
    { _T("Blanka"),      DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_COLLECTION,       ARRAYSIZE(SSF2T_A_BLANKA_COLLECTION) },
    { _T("Cammy"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_COLLECTION,        ARRAYSIZE(SSF2T_A_CAMMY_COLLECTION) },
    { _T("Chun-Li"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_COLLECTION,       ARRAYSIZE(SSF2T_A_CHUNLI_COLLECTION) },
    { _T("Dee Jay"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_COLLECTION,       ARRAYSIZE(SSF2T_A_DEEJAY_COLLECTION) },
    { _T("Dhalsim"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_COLLECTION,      ARRAYSIZE(SSF2T_A_DHALSIM_COLLECTION) },
    { _T("E. Honda"),    DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_COLLECTION,       ARRAYSIZE(SSF2T_A_EHONDA_COLLECTION) },
    { _T("Fei Long"),    DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_COLLECTION,      ARRAYSIZE(SSF2T_A_FEILONG_COLLECTION) },
    { _T("Gouki"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_COLLECTION,        ARRAYSIZE(SSF2T_A_GOUKI_COLLECTION) },
    { _T("Guile"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_COLLECTION,        ARRAYSIZE(SSF2T_A_GUILE_COLLECTION) },
    { _T("Ken"),         DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_COLLECTION,          ARRAYSIZE(SSF2T_A_KEN_COLLECTION) },
    { _T("M. Bison"),    DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_COLLECTION,       ARRAYSIZE(SSF2T_A_MBISON_COLLECTION) },
    { _T("Ryu"),         DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_COLLECTION,          ARRAYSIZE(SSF2T_A_RYU_COLLECTION) },
    { _T("Sagat"),       DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_COLLECTION,        ARRAYSIZE(SSF2T_A_SAGAT_COLLECTION) },
    { _T("T-Hawk"),      DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_COLLECTION,        ARRAYSIZE(SSF2T_A_THAWK_COLLECTION) },
    { _T("Vega"),        DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_COLLECTION,         ARRAYSIZE(SSF2T_A_VEGA_COLLECTION) },
    { _T("Zangief"),     DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_COLLECTION,      ARRAYSIZE(SSF2T_A_ZANGIEF_COLLECTION) },
};

// We extend this array with data groveled from the SSF2T-3Ce.txt or SSF2T-4Ae.txt extensible extras file, if any.
const stExtraDef SSF2T_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
