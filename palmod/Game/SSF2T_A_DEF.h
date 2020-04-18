#pragma once

enum Supported_SSF2T_PaletteListIndex
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
    index_SSF2T_Last
};

constexpr auto SSF2T_A_NUM_IND = index_SSF2T_Last;

#define SSF2T_A_EXTRALOC SSF2T_A_NUM_IND

const UINT8 SSF2T_A_UNITSORT[SSF2T_A_NUM_IND + 1] = // Plus 1 for the extra palettes
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

    SSF2T_A_EXTRALOC // Extra palettes
};

const UINT16 SSF2T_A_IMGREDIR[SSF2T_A_NUM_IND] =
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

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_JAB[] =
{
    { "Jab",        0x03FB2E, 0x03FB4E, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_STRONG[] =
{
    { "Strong",        0x03FBD0, 0x03FBF0, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FIERCE[] =
{
    { "Fierce",        0x03FC72, 0x03FC92, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_SHORT[] =
{
    { "Short",        0x03FD14, 0x03FD34, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FORWARD[] =
{
    { "Forward",        0x03FDB6, 0x03FDD6, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x03FE58, 0x03FE78, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_START[] =
{
    { "Start",        0x03FEFA, 0x03FF1A, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_HOLD[] =
{
    { "Hold",        0x03FF9C, 0x03FFBC, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x04003E, 0x04005E, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x0400E0, 0x040100, 0x00},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_JAB[] =
{
    { "Jab",        0x04019A, 0x0401BA, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_STRONG[] =
{
    { "Strong",        0x04023C, 0x04025C, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FIERCE[] =
{
    { "Fierce",        0x0402DE, 0x0402FE, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_SHORT[] =
{
    { "Short",        0x040380, 0x0403A0, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FORWARD[] =
{
    { "Forward",        0x040422, 0x040442, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x0404C4, 0x0404E4, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_START[] =
{
    { "Start",        0x040566, 0x040586, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_HOLD[] =
{
    { "Hold",        0x040608, 0x040628, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x0406AA, 0x0406CA, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x04074C, 0x04076C, 0x01},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_JAB[] =
{
    { "Jab",        0x040806, 0x040826, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_STRONG[] =
{
    { "Strong",        0x0408A6, 0x0408C6, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FIERCE[] =
{
    { "Fierce",        0x040946, 0x040966, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_SHORT[] =
{
    { "Short",        0x0409E6, 0x040A06, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FORWARD[] =
{
    { "Forward",        0x040A86, 0x040AA6, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x040B26, 0x040B46, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_START[] =
{
    { "Start",        0x040BC6, 0x040BE6, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_HOLD[] =
{
    { "Hold",        0x040C66, 0x040C86, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x040D06, 0x040D26, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x040DA8, 0x040DC8, 0x02},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_JAB[] =
{
    { "Jab",        0x040E62, 0x040E82, 0x03},
    { "Sonic Boom", 0x040E82, 0x040EA2, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_STRONG[] =
{
    { "Strong",     0x040F04, 0x040F24, 0x03},
    { "Sonic Boom", 0x040F24, 0x040F44, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FIERCE[] =
{
    { "Fierce",     0x040FA6, 0x040FC6, 0x03},
    { "Sonic Boom", 0x040FC6, 0x040FE6, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_SHORT[] =
{
    { "Short",      0x041048, 0x041068, 0x03},
    { "Sonic Boom", 0x041068, 0x041088, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FORWARD[] =
{
    { "Forward",    0x0410EA, 0x04110A, 0x03},
    { "Sonic Boom", 0x04110A, 0x04112A, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse", 0x04118C, 0x0411AC, 0x03},
    { "Sonic Boom", 0x0411AC, 0x0411CC, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_START[] =
{
    { "Start",      0x04122E, 0x04124E, 0x03},
    { "Sonic Boom", 0x04124E, 0x04126E, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_HOLD[] =
{
    { "Hold",       0x0412D0, 0x0412F0, 0x03},
    { "Sonic Boom", 0x0412F0, 0x041310, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD1P[] =
{
    { "Old 1P",     0x041372, 0x041392, 0x03},
    { "Sonic Boom", 0x041392, 0x0413B2, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD2P[] =
{
    { "Old 2P",     0x041414, 0x041434, 0x03},
    { "Sonic Boom", 0x041434, 0x041454, 0x03, 0x01},
}; 
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_JAB[] =
{
    { "Jab",        0x0414CE, 0x0414EE, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_STRONG[] =
{
    { "Strong",        0x041570, 0x041590, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FIERCE[] =
{
    { "Fierce",        0x041612, 0x041632, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_SHORT[] =
{
    { "Short",        0x0416B4, 0x0416D4, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FORWARD[] =
{
    { "Forward",        0x041756, 0x041776, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x0417F8, 0x041818, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_START[] =
{
    { "Start",        0x04189A, 0x0418BA, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_HOLD[] =
{
    { "Hold",        0x04193C, 0x04195C, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x0419DE, 0x0419FE, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x041A80, 0x041AA0, 0x04},
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_JAB[] =
{
    { "Jab",        0x041B3A, 0x041B5A, 0x05},
    { "Kikouken",   0x041b5a, 0x041b7a },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_STRONG[] =
{
    { "Strong",        0x041BDC, 0x041BFC, 0x05},
    { "Kikouken", 0x041bfc, 0x041c1c },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FIERCE[] =
{
    { "Fierce",        0x041C7E, 0x041C9E, 0x05},
    { "Kikouken", 0x041c9e, 0x041cbe },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_SHORT[] =
{
    { "Short",        0x041D20, 0x041D40, 0x05},
    { "Kikouken", 0x041d40, 0x041d60 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FORWARD[] =
{
    { "Forward",        0x041DC2, 0x041DE2, 0x05},
    { "Kikouken", 0x041de2, 0x041e02 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x041E64, 0x041E84, 0x05},
    { "Kikouken", 0x041e84, 0x041ea4 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_START[] =
{
    { "Start",        0x041F06, 0x041F26, 0x05},
    { "Kikouken", 0x041f26, 0x041f46 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_HOLD[] =
{
    { "Hold",        0x041FA8, 0x041FC8, 0x05},
    { "Kikouken", 0x041fc8, 0x041fe8 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x04204A, 0x04206A, 0x05},
    { "Kikouken", 0x04206a, 0x04208a },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x0420EC, 0x04210C, 0x05},
    { "Kikouken", 0x04210c, 0x04212c },
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_JAB[] =
{
    { "Jab",        0x0421A6, 0x0421C6, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_STRONG[] =
{
    { "Strong",        0x042248, 0x042268, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FIERCE[] =
{
    { "Fierce",        0x0422EA, 0x04230A, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_SHORT[] =
{
    { "Short",        0x04238C, 0x0423AC, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FORWARD[] =
{
    { "Forward",        0x04242E, 0x04244E, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x0424D0, 0x0424F0, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_START[] =
{
    { "Start",        0x042572, 0x042592, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_HOLD[] =
{
    { "Hold",        0x042614, 0x042634, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x0426B6, 0x0426D6, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x042758, 0x042778, 0x06},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_JAB[] =
{
    { "Jab",        0x042812, 0x042832, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_STRONG[] =
{
    { "Strong",        0x0428B4, 0x0428D4, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FIERCE[] =
{
    { "Fierce",        0x042956, 0x042976, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_SHORT[] =
{
    { "Short",        0x0429F8, 0x042A18, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FORWARD[] =
{
    { "Forward",        0x042A9A, 0x042ABA, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x042B3C, 0x042B5C, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_START[] =
{
    { "Start",        0x042BDE, 0x042BFE, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_HOLD[] =
{
    { "Hold",        0x042C80, 0x042CA0, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x042D22, 0x042D42, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x042DC4, 0x042DE4, 0x07},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_JAB[] =
{
    { "Jab",        0x042E7E, 0x042E9E, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_STRONG[] =
{
    { "Strong",        0x042F20, 0x042F40, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FIERCE[] =
{
    { "Fierce",        0x042FC2, 0x042FE2, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_SHORT[] =
{
    { "Short",        0x043064, 0x043084, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FORWARD[] =
{
    { "Forward",        0x043106, 0x043126, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x0431A8, 0x0431C8, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_START[] =
{
    { "Start",        0x04324A, 0x04326A, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_HOLD[] =
{
    { "Hold",        0x0432EC, 0x04330C, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x04338E, 0x0433AE, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x043430, 0x043450, 0x08},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_JAB[] =
{
    { "Jab",        0x0434EA, 0x04350A, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_STRONG[] =
{
    { "Strong",        0x04358C, 0x0435AC, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FIERCE[] =
{
    { "Fierce",        0x04362E, 0x04364E, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_SHORT[] =
{
    { "Short",        0x0436D0, 0x0436F0, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FORWARD[] =
{
    { "Forward",        0x043772, 0x043792, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x043814, 0x043834, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_START[] =
{
    { "Start",        0x0438B6, 0x0438D6, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_HOLD[] =
{
    { "Hold",        0x043958, 0x043978, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x0439FA, 0x043A1A, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x043A9C, 0x043ABC, 0x09},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_JAB[] =
{
    { "Jab",        0x043B56, 0x043B76, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_STRONG[] =
{
    { "Strong",        0x043BF8, 0x043C18, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FIERCE[] =
{
    { "Fierce",        0x043C9A, 0x043CBA, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_SHORT[] =
{
    { "Short",        0x043D3C, 0x043D5C, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FORWARD[] =
{
    { "Forward",        0x043DDE, 0x043DFE, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x043E80, 0x043EA0, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_START[] =
{
    { "Start",        0x043F22, 0x043F42, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_HOLD[] =
{
    { "Hold",        0x043FC4, 0x043FE4, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x044066, 0x044086, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x044108, 0x044128, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_JAB[] =
{
    { "Jab",        0x0441C2, 0x0441E2, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_STRONG[] =
{
    { "Strong",        0x044264, 0x044284, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FIERCE[] =
{
    { "Fierce",        0x044306, 0x044326, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_SHORT[] =
{
    { "Short",        0x0443A8, 0x0443C8, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FORWARD[] =
{
    { "Forward",        0x04444A, 0x04446A, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x0444EC, 0x04450C, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_START[] =
{
    { "Start",        0x04458E, 0x0445AE, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_HOLD[] =
{
    { "Hold",        0x044630, 0x044650, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x0446D2, 0x0446F2, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x044774, 0x044794, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_JAB[] =
{
    { "Jab",        0x04482E, 0x04484E, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_STRONG[] =
{
    { "Strong",        0x0448D0, 0x0448F0, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FIERCE[] =
{
    { "Fierce",        0x044972, 0x044992, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_SHORT[] =
{
    { "Short",        0x044A14, 0x044A34, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FORWARD[] =
{
    { "Forward",        0x044AB6, 0x044AD6, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x044B58, 0x044B78, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_START[] =
{
    { "Start",        0x044BFA, 0x044C1A, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_HOLD[] =
{
    { "Hold",        0x044C9C, 0x044CBC, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x044D3E, 0x044D5E, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x044DE0, 0x044E00, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_JAB[] =
{
    { "Jab",        0x044E9A, 0x044EBA, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_STRONG[] =
{
    { "Strong",        0x044F3C, 0x044F5C, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FIERCE[] =
{
    { "Fierce",        0x044FDE, 0x044FFE, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_SHORT[] =
{
    { "Short",        0x045080, 0x0450A0, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FORWARD[] =
{
    { "Forward",        0x045122, 0x045142, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x0451C4, 0x0451E4, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_START[] =
{
    { "Start",        0x045266, 0x045286, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_HOLD[] =
{
    { "Hold",        0x045308, 0x045328, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x0453AA, 0x0453CA, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x04544C, 0x04546C, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_JAB[] =
{
    { "Jab",        0x045506, 0x045526, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_STRONG[] =
{
    { "Strong",        0x0455A8, 0x0455C8, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FIERCE[] =
{
    { "Fierce",        0x04564A, 0x04566A, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_SHORT[] =
{
    { "Short",        0x0456EC, 0x04570C, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FORWARD[] =
{
    { "Forward",        0x04578E, 0x0457AE, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x045830, 0x045850, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_START[] =
{
    { "Start",        0x0458D2, 0x0458F2, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_HOLD[] =
{
    { "Hold",        0x045974, 0x045994, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x045A16, 0x045A36, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x045AB8, 0x045AD8, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_JAB[] =
{
    { "Jab",        0x045B72, 0x045B92, 0x0F},
    { "Air Slasher", 0x045b92, 0x045bb2 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_STRONG[] =
{
    { "Strong",        0x045C14, 0x045C34, 0x0F},
    { "Air Slasher", 0x045c34, 0x045c54 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FIERCE[] =
{
    { "Fierce",        0x045CB6, 0x045CD6, 0x0F},
    { "Air Slasher", 0x045cd6, 0x045cf6 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_SHORT[] =
{
    { "Short",        0x045D58, 0x045D78, 0x0F},
    { "Air Slasher", 0x045d78, 0x045d98 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FORWARD[] =
{
    { "Forward",        0x045DFA, 0x045E1A, 0x0F},
    { "Air Slasher", 0x045e1a, 0x045e3a },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE[] =
{
    { "Roundhouse",        0x045E9C, 0x045EBC, 0x0F},
    { "Air Slasher", 0x045ebc, 0x045edc },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_START[] =
{
    { "Start",        0x045F3E, 0x045F5E, 0x0F},
    { "Air Slasher", 0x045f5e, 0x045f7e },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_HOLD[] =
{
    { "Hold",        0x045FE0, 0x046000, 0x0F},
    { "Air Slasher", 0x046000, 0x046020 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD1P[] =
{
    { "Old 1P",        0x046082, 0x0460A2, 0x0F},
    { "Air Slasher", 0x0460a2, 0x0460c2 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD2P[] =
{
    { "Old 2P",        0x046124, 0x046144, 0x0F},
    { "Air Slasher", 0x046144, 0x046164 },
};
const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P1COLOR[] =
{
    { "P1 Color",        0x0461DE, 0x0461FE, 0x10},
};
const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P2COLOR[] =
{
    { "P2 Color",        0x046280, 0x0462A0, 0x10},
};
const sDescTreeNode SSF2T_A_RYU_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_START,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_RYU_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_RYU_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_EHONDA_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_START,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_EHONDA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_EHONDA_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_BLANKA_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_START,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BLANKA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BLANKA_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_GUILE_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_START,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_GUILE_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_GUILE_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_KEN_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_START,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_KEN_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_KEN_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_CHUNLI_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_START,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CHUNLI_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_CHUNLI_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_ZANGIEF_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_START,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_ZANGIEF_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_ZANGIEF_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_DHALSIM_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_START,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DHALSIM_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_DHALSIM_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_MBISON_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_START,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_MBISON_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_MBISON_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_SAGAT_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_START,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_SAGAT_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_SAGAT_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_BALROG_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_START,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_BALROG_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_BALROG_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_VEGA_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_START,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_VEGA_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_VEGA_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_CAMMY_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_START,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_CAMMY_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_CAMMY_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_THAWK_COLLECTION[] =
{
    { "Jab",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_JAB,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_JAB) },
    { "Strong",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_STRONG,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_STRONG) },
    { "Fierce",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_FIERCE,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FIERCE) },
    { "Short",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_SHORT,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_SHORT) },
    { "Forward",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_ROUNDHOUSE,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_ROUNDHOUSE) },
    { "Start",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_START,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_START) },
    { "Hold",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_HOLD,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_HOLD) },
    { "Old 1P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_OLD1P,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD1P) },
    { "Old 2P",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_THAWK_PALETTES_OLD2P,    ARRAYSIZE(SSF2T_A_THAWK_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_FEILONG_COLLECTION[] =
{
    { "Jab",	        DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_JAB,        ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_JAB) },
    { "Strong",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_STRONG,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_STRONG) },
    { "Fierce",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_FIERCE,     ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FIERCE) },
    { "Short",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_SHORT,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_SHORT) },
    { "Forward",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_FORWARD,    ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE, ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE) },
    { "Start",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_START,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_START) },
    { "Hold",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_HOLD,       ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_HOLD) },
    { "Old 1P",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_OLD1P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD1P) },
    { "Old 2P",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_FEILONG_PALETTES_OLD2P,      ARRAYSIZE(SSF2T_A_FEILONG_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_DEEJAY_COLLECTION[] =
{
    { "Jab",	        DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_JAB,         ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_JAB) },
    { "Strong",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_STRONG,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_STRONG) },
    { "Fierce",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_FIERCE,      ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FIERCE) },
    { "Short",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_SHORT,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_SHORT) },
    { "Forward",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_FORWARD,     ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_FORWARD) },
    { "Roundhouse",	DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE,  ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE) },
    { "Start",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_START,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_START) },
    { "Hold",	    DESC_NODETYPE_TREE,	(void*)SSF2T_A_DEEJAY_PALETTES_HOLD,        ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_HOLD) },
    { "Old 1P",	    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES_OLD1P,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD1P) },
    { "Old 2P",	    DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_PALETTES_OLD2P,       ARRAYSIZE(SSF2T_A_DEEJAY_PALETTES_OLD2P) },
};
const sDescTreeNode SSF2T_A_GOUKI_COLLECTION[] =
{
    { "P1 Color",	DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P1COLOR,    ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P1COLOR) },
    { "P2 Color",	DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_PALETTES_P2COLOR,    ARRAYSIZE(SSF2T_A_GOUKI_PALETTES_P2COLOR) },
};

const sDescTreeNode SSF2T_A_UNITS[SSF2T_A_NUM_IND] =
{
    { "Balrog",        DESC_NODETYPE_TREE, (void*)SSF2T_A_BALROG_COLLECTION,        ARRAYSIZE(SSF2T_A_BALROG_COLLECTION) },
    { "Blanka",        DESC_NODETYPE_TREE, (void*)SSF2T_A_BLANKA_COLLECTION,        ARRAYSIZE(SSF2T_A_BLANKA_COLLECTION) },
    { "Cammy",        DESC_NODETYPE_TREE, (void*)SSF2T_A_CAMMY_COLLECTION,        ARRAYSIZE(SSF2T_A_CAMMY_COLLECTION) },
    { "Chun-Li",        DESC_NODETYPE_TREE, (void*)SSF2T_A_CHUNLI_COLLECTION,        ARRAYSIZE(SSF2T_A_CHUNLI_COLLECTION) },
    { "Dee Jay",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DEEJAY_COLLECTION,        ARRAYSIZE(SSF2T_A_DEEJAY_COLLECTION) },
    { "Dhalsim",        DESC_NODETYPE_TREE, (void*)SSF2T_A_DHALSIM_COLLECTION,        ARRAYSIZE(SSF2T_A_DHALSIM_COLLECTION) },
    { "E. Honda",    DESC_NODETYPE_TREE, (void*)SSF2T_A_EHONDA_COLLECTION,        ARRAYSIZE(SSF2T_A_EHONDA_COLLECTION) },
    { "Fei Long",    DESC_NODETYPE_TREE, (void*)SSF2T_A_FEILONG_COLLECTION,        ARRAYSIZE(SSF2T_A_FEILONG_COLLECTION) },
    { "Gouki",        DESC_NODETYPE_TREE, (void*)SSF2T_A_GOUKI_COLLECTION,        ARRAYSIZE(SSF2T_A_GOUKI_COLLECTION) },
    { "Guile",        DESC_NODETYPE_TREE, (void*)SSF2T_A_GUILE_COLLECTION,        ARRAYSIZE(SSF2T_A_GUILE_COLLECTION) },
    { "Ken",            DESC_NODETYPE_TREE, (void*)SSF2T_A_KEN_COLLECTION,            ARRAYSIZE(SSF2T_A_KEN_COLLECTION) },
    { "M. Bison",    DESC_NODETYPE_TREE, (void*)SSF2T_A_MBISON_COLLECTION,        ARRAYSIZE(SSF2T_A_MBISON_COLLECTION) },
    { "Ryu",            DESC_NODETYPE_TREE, (void*)SSF2T_A_RYU_COLLECTION,            ARRAYSIZE(SSF2T_A_RYU_COLLECTION) },
    { "Sagat",        DESC_NODETYPE_TREE, (void*)SSF2T_A_SAGAT_COLLECTION,        ARRAYSIZE(SSF2T_A_SAGAT_COLLECTION) },
    { "T-Hawk",        DESC_NODETYPE_TREE, (void*)SSF2T_A_THAWK_COLLECTION,        ARRAYSIZE(SSF2T_A_THAWK_COLLECTION) },
    { "Vega",        DESC_NODETYPE_TREE, (void*)SSF2T_A_VEGA_COLLECTION,            ARRAYSIZE(SSF2T_A_VEGA_COLLECTION) },
    { "Zangief",        DESC_NODETYPE_TREE, (void*)SSF2T_A_ZANGIEF_COLLECTION,        ARRAYSIZE(SSF2T_A_ZANGIEF_COLLECTION) },
};

// We extend this array with data groveled from the SSF2Te.txt extensible extras file, if any.
const stExtraDef SSF2T_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};


