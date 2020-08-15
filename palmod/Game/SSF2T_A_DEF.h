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

const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_JAB[] =
{
    { _T("Jab"),        0x03FB2E, 0x03FB4E, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x03FBD0, 0x03FBF0, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x03FC72, 0x03FC92, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_SHORT[] =
{
    { _T("Short"),      0x03FD14, 0x03FD34, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x03FDB6, 0x03FDD6, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x03FE58, 0x03FE78, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_START[] =
{
    { _T("Start"),      0x03FEFA, 0x03FF1A, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x03FF9C, 0x03FFBC, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x04003E, 0x04005E, 0x00},
};
const sGame_PaletteDataset SSF2T_A_RYU_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x0400E0, 0x040100, 0x00},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_JAB[] =
{
    { _T("Jab"),        0x04019A, 0x0401BA, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x04023C, 0x04025C, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x0402DE, 0x0402FE, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_SHORT[] =
{
    { _T("Short"),      0x040380, 0x0403A0, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x040422, 0x040442, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x0404C4, 0x0404E4, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_START[] =
{
    { _T("Start"),      0x040566, 0x040586, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x040608, 0x040628, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x0406AA, 0x0406CA, 0x01},
};
const sGame_PaletteDataset SSF2T_A_EHONDA_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x04074C, 0x04076C, 0x01},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_JAB[] =
{
    { _T("Jab"),        0x040806, 0x040826, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x0408A6, 0x0408C6, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x040946, 0x040966, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_SHORT[] =
{
    { _T("Short"),      0x0409E6, 0x040A06, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x040A86, 0x040AA6, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x040B26, 0x040B46, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_START[] =
{
    { _T("Start"),      0x040BC6, 0x040BE6, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x040C66, 0x040C86, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x040D06, 0x040D26, 0x02},
};
const sGame_PaletteDataset SSF2T_A_BLANKA_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x040DA8, 0x040DC8, 0x02},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_JAB[] =
{
    { _T("Jab"),        0x040E62, 0x040E82, 0x03},
    { _T("Sonic Boom"), 0x040E82, 0x040EA2, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x040F04, 0x040F24, 0x03},
    { _T("Sonic Boom"), 0x040F24, 0x040F44, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x040FA6, 0x040FC6, 0x03},
    { _T("Sonic Boom"), 0x040FC6, 0x040FE6, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_SHORT[] =
{
    { _T("Short"),      0x041048, 0x041068, 0x03},
    { _T("Sonic Boom"), 0x041068, 0x041088, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x0410EA, 0x04110A, 0x03},
    { _T("Sonic Boom"), 0x04110A, 0x04112A, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x04118C, 0x0411AC, 0x03},
    { _T("Sonic Boom"), 0x0411AC, 0x0411CC, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_START[] =
{
    { _T("Start"),      0x04122E, 0x04124E, 0x03},
    { _T("Sonic Boom"), 0x04124E, 0x04126E, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x0412D0, 0x0412F0, 0x03},
    { _T("Sonic Boom"), 0x0412F0, 0x041310, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x041372, 0x041392, 0x03},
    { _T("Sonic Boom"), 0x041392, 0x0413B2, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_GUILE_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x041414, 0x041434, 0x03},
    { _T("Sonic Boom"), 0x041434, 0x041454, 0x03, 0x01},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_JAB[] =
{
    { _T("Jab"),        0x0414CE, 0x0414EE, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x041570, 0x041590, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x041612, 0x041632, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_SHORT[] =
{
    { _T("Short"),      0x0416B4, 0x0416D4, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x041756, 0x041776, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x0417F8, 0x041818, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_START[] =
{
    { _T("Start"),      0x04189A, 0x0418BA, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x04193C, 0x04195C, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x0419DE, 0x0419FE, 0x04},
};
const sGame_PaletteDataset SSF2T_A_KEN_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x041A80, 0x041AA0, 0x04},
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_JAB[] =
{
    { _T("Jab"),        0x041B3A, 0x041B5A, 0x05},
    { _T("Kikouken"),   0x041b5a, 0x041b7a, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x041BDC, 0x041BFC, 0x05},
    { _T("Kikouken"),   0x041bfc, 0x041c1c, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x041C7E, 0x041C9E, 0x05},
    { _T("Kikouken"),   0x041c9e, 0x041cbe, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_SHORT[] =
{
    { _T("Short"),      0x041D20, 0x041D40, 0x05},
    { _T("Kikouken"),   0x041d40, 0x041d60, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x041DC2, 0x041DE2, 0x05},
    { _T("Kikouken"),   0x041de2, 0x041e02, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x041E64, 0x041E84, 0x05},
    { _T("Kikouken"),   0x041e84, 0x041ea4, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_START[] =
{
    { _T("Start"),      0x041F06, 0x041F26, 0x05},
    { _T("Kikouken"),   0x041f26, 0x041f46, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x041FA8, 0x041FC8, 0x05},
    { _T("Kikouken"),   0x041fc8, 0x041fe8, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x04204A, 0x04206A, 0x05},
    { _T("Kikouken"),   0x04206a, 0x04208a, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_CHUNLI_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x0420EC, 0x04210C, 0x05},
    { _T("Kikouken"),   0x04210c, 0x04212c, 0x05, 1 },
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_JAB[] =
{
    { _T("Jab"),        0x0421A6, 0x0421C6, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x042248, 0x042268, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x0422EA, 0x04230A, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_SHORT[] =
{
    { _T("Short"),      0x04238C, 0x0423AC, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x04242E, 0x04244E, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x0424D0, 0x0424F0, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_START[] =
{
    { _T("Start"),      0x042572, 0x042592, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x042614, 0x042634, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x0426B6, 0x0426D6, 0x06},
};
const sGame_PaletteDataset SSF2T_A_ZANGIEF_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x042758, 0x042778, 0x06},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_JAB[] =
{
    { _T("Jab"),        0x042812, 0x042832, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x0428B4, 0x0428D4, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x042956, 0x042976, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_SHORT[] =
{
    { _T("Short"),      0x0429F8, 0x042A18, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x042A9A, 0x042ABA, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x042B3C, 0x042B5C, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_START[] =
{
    { _T("Start"),      0x042BDE, 0x042BFE, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x042C80, 0x042CA0, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x042D22, 0x042D42, 0x07},
};
const sGame_PaletteDataset SSF2T_A_DHALSIM_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x042DC4, 0x042DE4, 0x07},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_JAB[] =
{
    { _T("Jab"),        0x042E7E, 0x042E9E, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x042F20, 0x042F40, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x042FC2, 0x042FE2, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_SHORT[] =
{
    { _T("Short"),      0x043064, 0x043084, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x043106, 0x043126, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x0431A8, 0x0431C8, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_START[] =
{
    { _T("Start"),      0x04324A, 0x04326A, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x0432EC, 0x04330C, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x04338E, 0x0433AE, 0x08},
};
const sGame_PaletteDataset SSF2T_A_MBISON_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x043430, 0x043450, 0x08},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_JAB[] =
{
    { _T("Jab"),        0x0434EA, 0x04350A, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x04358C, 0x0435AC, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x04362E, 0x04364E, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_SHORT[] =
{
    { _T("Short"),      0x0436D0, 0x0436F0, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x043772, 0x043792, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x043814, 0x043834, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_START[] =
{
    { _T("Start"),      0x0438B6, 0x0438D6, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x043958, 0x043978, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x0439FA, 0x043A1A, 0x09},
};
const sGame_PaletteDataset SSF2T_A_SAGAT_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x043A9C, 0x043ABC, 0x09},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_JAB[] =
{
    { _T("Jab"),        0x043B56, 0x043B76, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x043BF8, 0x043C18, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x043C9A, 0x043CBA, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_SHORT[] =
{
    { _T("Short"),      0x043D3C, 0x043D5C, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x043DDE, 0x043DFE, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x043E80, 0x043EA0, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_START[] =
{
    { _T("Start"),      0x043F22, 0x043F42, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x043FC4, 0x043FE4, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x044066, 0x044086, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_BALROG_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x044108, 0x044128, 0x0A},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_JAB[] =
{
    { _T("Jab"),        0x0441C2, 0x0441E2, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x044264, 0x044284, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x044306, 0x044326, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_SHORT[] =
{
    { _T("Short"),      0x0443A8, 0x0443C8, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x04444A, 0x04446A, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x0444EC, 0x04450C, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_START[] =
{
    { _T("Start"),      0x04458E, 0x0445AE, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x044630, 0x044650, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x0446D2, 0x0446F2, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_VEGA_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x044774, 0x044794, 0x0B},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_JAB[] =
{
    { _T("Jab"),        0x04482E, 0x04484E, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x0448D0, 0x0448F0, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x044972, 0x044992, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_SHORT[] =
{
    { _T("Short"),      0x044A14, 0x044A34, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x044AB6, 0x044AD6, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x044B58, 0x044B78, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_START[] =
{
    { _T("Start"),      0x044BFA, 0x044C1A, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x044C9C, 0x044CBC, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x044D3E, 0x044D5E, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_CAMMY_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x044DE0, 0x044E00, 0x0C},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_JAB[] =
{
    { _T("Jab"),        0x044E9A, 0x044EBA, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x044F3C, 0x044F5C, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x044FDE, 0x044FFE, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_SHORT[] =
{
    { _T("Short"),      0x045080, 0x0450A0, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x045122, 0x045142, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x0451C4, 0x0451E4, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_START[] =
{
    { _T("Start"),      0x045266, 0x045286, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x045308, 0x045328, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x0453AA, 0x0453CA, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_THAWK_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x04544C, 0x04546C, 0x0D},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_JAB[] =
{
    { _T("Jab"),        0x045506, 0x045526, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x0455A8, 0x0455C8, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x04564A, 0x04566A, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_SHORT[] =
{
    { _T("Short"),      0x0456EC, 0x04570C, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x04578E, 0x0457AE, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x045830, 0x045850, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_START[] =
{
    { _T("Start"),      0x0458D2, 0x0458F2, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x045974, 0x045994, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x045A16, 0x045A36, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_FEILONG_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x045AB8, 0x045AD8, 0x0E},
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_JAB[] =
{
    { _T("Jab"),        0x045B72, 0x045B92, 0x0F},
    { _T("Air Slasher"), 0x045b92, 0x045bb2, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_STRONG[] =
{
    { _T("Strong"),     0x045C14, 0x045C34, 0x0F},
    { _T("Air Slasher"), 0x045c34, 0x045c54, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FIERCE[] =
{
    { _T("Fierce"),     0x045CB6, 0x045CD6, 0x0F},
    { _T("Air Slasher"), 0x045cd6, 0x045cf6, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_SHORT[] =
{
    { _T("Short"),      0x045D58, 0x045D78, 0x0F},
    { _T("Air Slasher"), 0x045d78, 0x045d98, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_FORWARD[] =
{
    { _T("Forward"),    0x045DFA, 0x045E1A, 0x0F},
    { _T("Air Slasher"), 0x045e1a, 0x045e3a, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_ROUNDHOUSE[] =
{
    { _T("Roundhouse"), 0x045E9C, 0x045EBC, 0x0F},
    { _T("Air Slasher"), 0x045ebc, 0x045edc, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_START[] =
{
    { _T("Start"),      0x045F3E, 0x045F5E, 0x0F},
    { _T("Air Slasher"), 0x045f5e, 0x045f7e, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_HOLD[] =
{
    { _T("Hold"),       0x045FE0, 0x046000, 0x0F},
    { _T("Air Slasher"), 0x046000, 0x046020, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD1P[] =
{
    { _T("Old 1P"),     0x046082, 0x0460A2, 0x0F},
    { _T("Air Slasher"), 0x0460a2, 0x0460c2, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_DEEJAY_PALETTES_OLD2P[] =
{
    { _T("Old 2P"),     0x046124, 0x046144, 0x0F},
    { _T("Air Slasher"), 0x046144, 0x046164, 0x0F, 1 },
};
const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P1COLOR[] =
{
    { _T("P1 Color"),        0x0461DE, 0x0461FE, 0x10},
};
const sGame_PaletteDataset SSF2T_A_GOUKI_PALETTES_P2COLOR[] =
{
    { _T("P2 Color"),        0x046280, 0x0462A0, 0x10},
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
