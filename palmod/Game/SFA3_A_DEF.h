#pragma once

#define SFA3_A_PALSZ 16

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA3_A_RYU_PALETTES. 
// * Update every array using SFA3_A_NUM_IND below
// * Update the index lookups in Game_SFA3_A_.cpp that is marked 
//       - look for usage of index_SFA3_Ryu to find them
// That should be it.  Good luck.

enum Supported_SFA3_PaletteListIndex
{
    index_SFA3_Ryu,
    index_SFA3_Ken,
    index_SFA3_Gouki,
    index_SFA3_Charlie,
    index_SFA3_ChunLi,
    index_SFA3_Adon,
    index_SFA3_Sodom,
    index_SFA3_Guy,
    index_SFA3_Birdie,
    index_SFA3_Rose,
    index_SFA3_MBison,
    index_SFA3_Sagat,
    index_SFA3_Dan,
    index_SFA3_Sakura,
    index_SFA3_Rolento,
    index_SFA3_Dhalsim,
    index_SFA3_Zangief,
    index_SFA3_Gen,
    index_SFA3_Balrog,
    index_SFA3_Cammy,
    index_SFA3_EdHonda,
    index_SFA3_Blanka,
    index_SFA3_RMika,
    index_SFA3_Cody,
    index_SFA3_Vega,
    index_SFA3_Karin,
    index_SFA3_Juni,
    index_SFA3_Juli,
    index_SFA3_Last
};

constexpr auto SFA3_A_NUM_IND = index_SFA3_Last;

#define SFA3_A_EXTRALOC SFA3_A_NUM_IND

const UINT8 SFA3_A_UNITSORT[SFA3_A_NUM_IND + 1] = // Plus 1 for the extra palettes
{
    index_SFA3_Adon,
    index_SFA3_Balrog,
    index_SFA3_Birdie,
    index_SFA3_Blanka,
    index_SFA3_Cammy,
    index_SFA3_Charlie,
    index_SFA3_ChunLi,
    index_SFA3_Cody,
    index_SFA3_Dan,
    index_SFA3_Dhalsim,
    index_SFA3_EdHonda,
    index_SFA3_Gen,
    index_SFA3_Gouki,
    index_SFA3_Guy,
    index_SFA3_Juli,
    index_SFA3_Juni,
    index_SFA3_Karin,
    index_SFA3_Ken,
    index_SFA3_MBison,
    index_SFA3_RMika,
    index_SFA3_Rolento,
    index_SFA3_Rose,
    index_SFA3_Ryu,
    index_SFA3_Sagat,
    index_SFA3_Sakura,
    index_SFA3_Sodom,
    index_SFA3_Vega,
    index_SFA3_Zangief,
   
    SFA3_A_EXTRALOC // Extra palettes
};

const sGame_PaletteDataset SFA3_A_RYU_PALETTES[] =
{
    {"X-Ism Punch", 0x02C0D4, 0x02C0F4, 0x00},
    {"X-Ism Kick",  0x02C174, 0x02C194, 0x00},
    {"A-Ism Punch", 0x02C214, 0x02C234, 0x00},
    {"A-Ism Kick",  0x02C2B4, 0x02C2D4, 0x00},
    {"V-Ism 1",     0x02C354, 0x02C374, 0x00},
    {"V-Ism 2",     0x02C3F4, 0x02C414, 0x00},
};

const sGame_PaletteDataset SFA3_A_KEN_PALETTES[] =
{
    {"X-Ism Punch", 0x02C494, 0x02C4B4, 0x27},
    {"X-Ism Kick",  0x02C534, 0x02C554, 0x27},
    {"A-Ism Punch", 0x02C5D4, 0x02C5F4, 0x27},
    {"A-Ism Kick",  0x02C674, 0x02C694, 0x27},
    {"V-Ism 1",     0x02C714, 0x02C734, 0x27},
    {"V-Ism 2",     0x02C7B4, 0x02C7D4, 0x27},
};

const sGame_PaletteDataset SFA3_A_GOUKI_PALETTES[] =
{
    {"X-Ism Punch", 0x02C854, 0x02C874, 0x1E},
    {"X-Ism Kick",  0x02C8F4, 0x02C914, 0x1E},
    {"A-Ism Punch", 0x02C994, 0x02C9B4, 0x1E},
    {"A-Ism Kick",  0x02CA34, 0x02CA54, 0x1E},
    {"V-Ism 1",     0x02CAD4, 0x02CAF4, 0x1E},
    {"V-Ism 2",     0x02CB74, 0x02CB94, 0x1E},
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PALETTES[] =
{
    {"X-Ism Punch", 0x02CC14, 0x02CC34, 0x21},
    {"X-Ism Kick",  0x02CCB4, 0x02CCD4, 0x21},
    {"A-Ism Punch", 0x02CD54, 0x02CD74, 0x21},
    {"A-Ism Kick",  0x02CDF4, 0x02CE14, 0x21},
    {"V-Ism 1",     0x02CE94, 0x02CEB4, 0x21},
    {"V-Ism 2",     0x02CF34, 0x02CF54, 0x21},
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PALETTES[] =
{
    {"X-Ism Punch", 0x02CFD4, 0x02CFF4, 0x1B},
    {"X-Ism Kick",  0x02D074, 0x02D094, 0x1B},
    {"A-Ism Punch", 0x02D114, 0x02D134, 0x1B, 0x04},
    {"A-Ism Kick",  0x02D1B4, 0x02D1D4, 0x1B, 0x04},
    {"V-Ism 1",     0x02D254, 0x02D274, 0x1B, 0x04},
    {"V-Ism 2",     0x02D2F4, 0x02D314, 0x1B, 0x04},
};

const sGame_PaletteDataset SFA3_A_ADON_PALETTES[] =
{
    {"X-Ism Punch", 0x02D394, 0x02D3B4, 0x3D},
    {"X-Ism Kick",  0x02D434, 0x02D454, 0x3D},
    {"A-Ism Punch", 0x02D4D4, 0x02D4F4, 0x3D},
    {"A-Ism Kick",  0x02D574, 0x02D594, 0x3D},
    {"V-Ism 1",     0x02D614, 0x02D634, 0x3D},
    {"V-Ism 2",     0x02D6B4, 0x02D6D4, 0x3D},
};

const sGame_PaletteDataset SFA3_A_SODOM_PALETTES[] =
{
    {"X-Ism Punch", 0x02D754, 0x02D774, 0x3E},
    {"X-Ism Kick",  0x02D7F4, 0x02D814, 0x3E},
    {"A-Ism Punch", 0x02D894, 0x02D8B4, 0x3E},
    {"A-Ism Kick",  0x02D934, 0x02D954, 0x3E},
    {"V-Ism 1",     0x02D9D4, 0x02D9F4, 0x3E},
    {"V-Ism 2",     0x02DA74, 0x02DA94, 0x3E},
};

const sGame_PaletteDataset SFA3_A_GUY_PALETTES[] =
{
    {"X-Ism Punch", 0x02DB14, 0x02DB34, 0x3F},
    {"X-Ism Kick",  0x02DBB4, 0x02DBD4, 0x3F},
    {"A-Ism Punch", 0x02DC54, 0x02DC74, 0x3F},
    {"A-Ism Kick",  0x02DCF4, 0x02DD14, 0x3F},
    {"V-Ism 1",     0x02DD94, 0x02DDB4, 0x3F},
    {"V-Ism 2",     0x02DE34, 0x02DE54, 0x3F},
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PALETTES[] =
{
    {"X-Ism Punch", 0x02DED4, 0x02DEF4, 0x40},
    {"X-Ism Kick",  0x02DF74, 0x02DF94, 0x40},
    {"A-Ism Punch", 0x02E014, 0x02E034, 0x40},
    {"A-Ism Kick",  0x02E0B4, 0x02E0D4, 0x40},
    {"V-Ism 1",     0x02E154, 0x02E174, 0x40},
    {"V-Ism 2",     0x02E1F4, 0x02E214, 0x40},
};

const sGame_PaletteDataset SFA3_A_ROSE_PALETTES[] =
{
    {"X-Ism Punch", 0x02E294, 0x02E2B4, 0x41},
    {"X-Ism Kick",  0x02E334, 0x02E354, 0x41},
    {"A-Ism Punch", 0x02E3D4, 0x02E3F4, 0x41},
    {"A-Ism Kick",  0x02E474, 0x02E494, 0x41},
    {"V-Ism 1",     0x02E514, 0x02E534, 0x41},
    {"V-Ism 2",     0x02E5B4, 0x02E5D4, 0x41},
};

const sGame_PaletteDataset SFA3_A_MBIPSON_PALETTES[] =
{
    {"X-Ism Punch", 0x02E654, 0x02E674, 0x26},
    {"X-Ism Kick",  0x02E6F4, 0x02E714, 0x26},
    {"A-Ism Punch", 0x02E794, 0x02E7B4, 0x26},
    {"A-Ism Kick",  0x02E834, 0x02E854, 0x26},
    {"V-Ism 1",     0x02E8D4, 0x02E8F4, 0x26},
    {"V-Ism 2",     0x02E974, 0x02E994, 0x26},
};

const sGame_PaletteDataset SFA3_A_SAGAT_PALETTES[] =
{
    {"X-Ism Punch", 0x02EA14, 0x02EA34, 0x42},
    {"X-Ism Kick",  0x02EAB4, 0x02EAD4, 0x42},
    {"A-Ism Punch", 0x02EB54, 0x02EB74, 0x42},
    {"A-Ism Kick",  0x02EBF4, 0x02EC14, 0x42},
    {"V-Ism 1",     0x02EC94, 0x02ECB4, 0x42},
    {"V-Ism 2",     0x02ED34, 0x02ED54, 0x42},
};

const sGame_PaletteDataset SFA3_A_DAN_PALETTES[] =
{
    {"X-Ism Punch", 0x02EDD4, 0x02EDF4, 0x23},
    {"X-Ism Kick",  0x02EE74, 0x02EE94, 0x23},
    {"A-Ism Punch", 0x02EF14, 0x02EF34, 0x23},
    {"A-Ism Kick",  0x02EFB4, 0x02EFD4, 0x23},
    {"V-Ism 1",     0x02F054, 0x02F074, 0x23},
    {"V-Ism 2",     0x02F0F4, 0x02F114, 0x23},
};

const sGame_PaletteDataset SFA3_A_SAKURA_PALETTES[] =
{
    {"X-Ism Punch", 0x02F194, 0x02F1B4, 0x22},
    {"X-Ism Kick",  0x02F234, 0x02F254, 0x22},
    {"A-Ism Punch", 0x02F2D4, 0x02F2F4, 0x22},
    {"A-Ism Kick",  0x02F374, 0x02F394, 0x22},
    {"V-Ism 1",     0x02F414, 0x02F434, 0x22},
    {"V-Ism 2",     0x02F4B4, 0x02F4D4, 0x22},
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PALETTES[] =
{
    {"X-Ism Punch", 0x02F554, 0x02F574, 0x43},
    {"X-Ism Kick",  0x02F5F4, 0x02F614, 0x43},
    {"A-Ism Punch", 0x02F694, 0x02F6B4, 0x43},
    {"A-Ism Kick",  0x02F734, 0x02F754, 0x43},
    {"V-Ism 1",     0x02F7D4, 0x02F7F4, 0x43},
    {"V-Ism 2",     0x02F874, 0x02F894, 0x43},
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PALETTES[] =
{
    {"X-Ism Punch", 0x02F914, 0x02F934, 0x25},
    {"X-Ism Kick",  0x02F9B4, 0x02F9D4, 0x25},
    {"A-Ism Punch", 0x02FA54, 0x02FA74, 0x25},
    {"A-Ism Kick",  0x02FAF4, 0x02FB14, 0x25},
    {"V-Ism 1",     0x02FB94, 0x02FBB4, 0x25},
    {"V-Ism 2",     0x02FC34, 0x02FC54, 0x25},
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PALETTES[] =
{
    {"X-Ism Punch", 0x02FCD4, 0x02FCF4, 0x01},
    {"X-Ism Kick",  0x02FD74, 0x02FD94, 0x01},
    {"A-Ism Punch", 0x02FE14, 0x02FE34, 0x01},
    {"A-Ism Kick",  0x02FEB4, 0x02FED4, 0x01},
    {"V-Ism 1",     0x02FF54, 0x02FF74, 0x01},
    {"V-Ism 2",     0x02FFF4, 0x030014, 0x01},
};

const sGame_PaletteDataset SFA3_A_GEN_PALETTES[] =
{
    {"X-Ism Punch", 0x030094, 0x0300B4, 0x44},
    {"X-Ism Kick",  0x030134, 0x030154, 0x44},
    {"A-Ism Punch", 0x0301D4, 0x0301F4, 0x44},
    {"A-Ism Kick",  0x030274, 0x030294, 0x44},
    {"V-Ism 1",     0x030314, 0x030334, 0x44},
    {"V-Ism 2",     0x0303B4, 0x0303D4, 0x44},
};

const sGame_PaletteDataset SFA3_A_BALROG_PALETTES[] =
{
    {"X-Ism Punch", 0x030454, 0x030474, 0x45},
    {"X-Ism Kick",  0x0304F4, 0x030514, 0x45},
    {"A-Ism Punch", 0x030594, 0x0305B4, 0x45},
    {"A-Ism Kick",  0x030634, 0x030654, 0x45},
    {"V-Ism 1",     0x0306D4, 0x0306F4, 0x45},
    {"V-Ism 2",     0x030774, 0x030794, 0x45},
};

const sGame_PaletteDataset SFA3_A_CAMMY_PALETTES[] =
{
    {"X-Ism Punch", 0x030814, 0x030834, 0x24},
    {"X-Ism Kick",  0x0308B4, 0x0308D4, 0x24},
    {"A-Ism Punch", 0x030954, 0x030974, 0x24},
    {"A-Ism Kick",  0x0309F4, 0x030A14, 0x24},
    {"V-Ism 1",     0x030A94, 0x030AB4, 0x24},
    {"V-Ism 2",     0x030B34, 0x030B54, 0x24},
};

const sGame_PaletteDataset SFA3_A_EHONDA_PALETTES[] =
{
    {"X-Ism Punch", 0x030BD4, 0x030BF4, 0x46},
    {"X-Ism Kick",  0x030C74, 0x030C94, 0x46},
    {"A-Ism Punch", 0x030D14, 0x030D34, 0x46},
    {"A-Ism Kick",  0x030DB4, 0x030DD4, 0x46},
    {"V-Ism 1",     0x030E54, 0x030E74, 0x46},
    {"V-Ism 2",     0x030EF4, 0x030F14, 0x46},
};

const sGame_PaletteDataset SFA3_A_BLANKA_PALETTES[] =
{
    {"X-Ism Punch", 0x030F94, 0x030FB4, 0x47},
    {"X-Ism Kick",  0x031034, 0x031054, 0x47},
    {"A-Ism Punch", 0x0310D4, 0x0310F4, 0x47},
    {"A-Ism Kick",  0x031174, 0x031194, 0x47},
    {"V-Ism 1",     0x031214, 0x031234, 0x47},
    {"V-Ism 2",     0x0312B4, 0x0312D4, 0x47},
};

const sGame_PaletteDataset SFA3_A_RMIKA_PALETTES[] =
{
    {"X-Ism Punch", 0x031354, 0x031374, 0x48},
    {"X-Ism Kick",  0x0313F4, 0x031414, 0x48},
    {"A-Ism Punch", 0x031494, 0x0314B4, 0x48},
    {"A-Ism Kick",  0x031534, 0x031554, 0x48},
    {"V-Ism 1",     0x0315D4, 0x0315F4, 0x48},
    {"V-Ism 2",     0x031674, 0x031694, 0x48},
};

const sGame_PaletteDataset SFA3_A_CODY_PALETTES[] =
{
    {"X-Ism Punch", 0x031714, 0x031734, 0x49},
    {"X-Ism Kick",  0x0317B4, 0x0317D4, 0x49},
    {"A-Ism Punch", 0x031854, 0x031874, 0x49},
    {"A-Ism Kick",  0x0318F4, 0x031914, 0x49},
    {"V-Ism 1",     0x031994, 0x0319B4, 0x49},
    {"V-Ism 2",     0x031A34, 0x031A54, 0x49},
};

const sGame_PaletteDataset SFA3_A_VEGA_PALETTES[] =
{
    {"X-Ism Punch", 0x031AD4, 0x031AF4, 0x4A},
    {"X-Ism Kick",  0x031B74, 0x031B94, 0x4A},
    {"A-Ism Punch", 0x031C14, 0x031C34, 0x4A},
    {"A-Ism Kick",  0x031CB4, 0x031CD4, 0x4A},
    {"V-Ism 1",     0x031D54, 0x031D74, 0x4A},
    {"V-Ism 2",     0x031DF4, 0x031E14, 0x4A},
};

const sGame_PaletteDataset SFA3_A_KARIN_PALETTES[] =
{
    {"X-Ism Punch", 0x031E94, 0x031EB4, 0x4B},
    {"X-Ism Kick",  0x031F34, 0x031F54, 0x4B},
    {"A-Ism Punch", 0x031FD4, 0x031FF4, 0x4B},
    {"A-Ism Kick",  0x032074, 0x032094, 0x4B},
    {"V-Ism 1",     0x032114, 0x032134, 0x4B},
    {"V-Ism 2",     0x0321B4, 0x0321D4, 0x4B},
};

const sGame_PaletteDataset SFA3_A_JUNI_PALETTES[] =
{
    {"X-Ism Punch", 0x032254, 0x032274, 0x4C},
    {"X-Ism Kick",  0x0322F4, 0x032314, 0x4C},
    {"A-Ism Punch", 0x032394, 0x0323B4, 0x4C},
    {"A-Ism Kick",  0x032434, 0x032454, 0x4C},
    {"V-Ism 1",     0x0324D4, 0x0324F4, 0x4C},
    {"V-Ism 2",     0x032574, 0x032594, 0x4C},
};

const sGame_PaletteDataset SFA3_A_JULI_PALETTES[] =
{
    {"X-Ism Punch", 0x032614, 0x032634, 0x4D},
    {"X-Ism Kick",  0x0326B4, 0x0326D4, 0x4D},
    {"A-Ism Punch", 0x032754, 0x032774, 0x4D},
    {"A-Ism Kick",  0x0327F4, 0x032814, 0x4D},
    {"V-Ism 1",     0x032894, 0x0328B4, 0x4D},
    {"V-Ism 2",     0x032934, 0x032954, 0x4D},
};

const sDescTreeNode SFA3_A_RYU_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PALETTES,       ARRAYSIZE(SFA3_A_RYU_PALETTES) },
};

const sDescTreeNode SFA3_A_KEN_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PALETTES,       ARRAYSIZE(SFA3_A_KEN_PALETTES) },
};

const sDescTreeNode SFA3_A_GOUKI_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_PALETTES,     ARRAYSIZE(SFA3_A_GOUKI_PALETTES) },
};

const sDescTreeNode SFA3_A_CHARLIE_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PALETTES,   ARRAYSIZE(SFA3_A_CHARLIE_PALETTES) },
};

const sDescTreeNode SFA3_A_CHUNLI_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PALETTES,    ARRAYSIZE(SFA3_A_CHUNLI_PALETTES) },
};

const sDescTreeNode SFA3_A_ADON_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PALETTES,      ARRAYSIZE(SFA3_A_ADON_PALETTES) },
};

const sDescTreeNode SFA3_A_SODOM_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PALETTES,     ARRAYSIZE(SFA3_A_SODOM_PALETTES) },
};

const sDescTreeNode SFA3_A_GUY_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PALETTES,       ARRAYSIZE(SFA3_A_GUY_PALETTES) },
};

const sDescTreeNode SFA3_A_BIRDIE_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PALETTES,    ARRAYSIZE(SFA3_A_BIRDIE_PALETTES) },
};

const sDescTreeNode SFA3_A_ROSE_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PALETTES,      ARRAYSIZE(SFA3_A_ROSE_PALETTES) },
};

const sDescTreeNode SFA3_A_MBIPSON_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_MBIPSON_PALETTES,   ARRAYSIZE(SFA3_A_MBIPSON_PALETTES) },
};

const sDescTreeNode SFA3_A_SAGAT_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PALETTES,     ARRAYSIZE(SFA3_A_SAGAT_PALETTES) },
};

const sDescTreeNode SFA3_A_DAN_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PALETTES,       ARRAYSIZE(SFA3_A_DAN_PALETTES) },
};

const sDescTreeNode SFA3_A_SAKURA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PALETTES,    ARRAYSIZE(SFA3_A_SAKURA_PALETTES) },
};

const sDescTreeNode SFA3_A_ROLENTO_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PALETTES,   ARRAYSIZE(SFA3_A_ROLENTO_PALETTES) },
};

const sDescTreeNode SFA3_A_DHALSIM_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PALETTES,   ARRAYSIZE(SFA3_A_DHALSIM_PALETTES) },
};

const sDescTreeNode SFA3_A_ZANGIEF_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PALETTES,   ARRAYSIZE(SFA3_A_ZANGIEF_PALETTES) },
};

const sDescTreeNode SFA3_A_GEN_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PALETTES,       ARRAYSIZE(SFA3_A_GEN_PALETTES) },
};

const sDescTreeNode SFA3_A_BALROG_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_PALETTES,    ARRAYSIZE(SFA3_A_BALROG_PALETTES) },
};

const sDescTreeNode SFA3_A_CAMMY_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PALETTES,     ARRAYSIZE(SFA3_A_CAMMY_PALETTES) },
};

const sDescTreeNode SFA3_A_EHONDA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PALETTES,    ARRAYSIZE(SFA3_A_EHONDA_PALETTES) },
};

const sDescTreeNode SFA3_A_BLANKA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PALETTES,    ARRAYSIZE(SFA3_A_BLANKA_PALETTES) },
};

const sDescTreeNode SFA3_A_RMIKA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PALETTES,     ARRAYSIZE(SFA3_A_RMIKA_PALETTES) },
};

const sDescTreeNode SFA3_A_CODY_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PALETTES,      ARRAYSIZE(SFA3_A_CODY_PALETTES) },
};

const sDescTreeNode SFA3_A_VEGA_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PALETTES,      ARRAYSIZE(SFA3_A_VEGA_PALETTES) },
};

const sDescTreeNode SFA3_A_KARIN_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PALETTES,     ARRAYSIZE(SFA3_A_KARIN_PALETTES) },
};

const sDescTreeNode SFA3_A_JUNI_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_PALETTES,      ARRAYSIZE(SFA3_A_JUNI_PALETTES) },
};

const sDescTreeNode SFA3_A_JULI_COLLECTION[] =
{
    { "Palettes", DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_PALETTES,      ARRAYSIZE(SFA3_A_JULI_PALETTES) },
};

const sDescTreeNode SFA3_A_UNITS[SFA3_A_NUM_IND] =
{
    {"Adon",            DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_COLLECTION,          ARRAYSIZE(SFA3_A_ADON_COLLECTION) },
    {"Balrog",          DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_COLLECTION,        ARRAYSIZE(SFA3_A_BALROG_COLLECTION) },
    {"Birdie",          DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA3_A_BIRDIE_COLLECTION) },
    {"Blanka",          DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_COLLECTION,        ARRAYSIZE(SFA3_A_BLANKA_COLLECTION) },
    {"Cammy",           DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_COLLECTION,         ARRAYSIZE(SFA3_A_CAMMY_COLLECTION) },
    {"Charlie",         DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA3_A_CHARLIE_COLLECTION) },
    {"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA3_A_CHUNLI_COLLECTION) },
    {"Cody",            DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_COLLECTION,          ARRAYSIZE(SFA3_A_CODY_COLLECTION) },
    {"Dan",             DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_COLLECTION,           ARRAYSIZE(SFA3_A_DAN_COLLECTION) },
    {"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA3_A_DHALSIM_COLLECTION) },
    {"E. Honda",        DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_COLLECTION,        ARRAYSIZE(SFA3_A_EHONDA_COLLECTION) },
    {"Gen",             DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_COLLECTION,           ARRAYSIZE(SFA3_A_GEN_COLLECTION) },
    {"Gouki",           DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA3_A_GOUKI_COLLECTION) },
    {"Guy",             DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_COLLECTION,           ARRAYSIZE(SFA3_A_GUY_COLLECTION) },
    {"Juli",            DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_COLLECTION,          ARRAYSIZE(SFA3_A_JULI_COLLECTION) },
    {"Juni",            DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_COLLECTION,          ARRAYSIZE(SFA3_A_JUNI_COLLECTION) },
    {"Karin",           DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_COLLECTION,         ARRAYSIZE(SFA3_A_KARIN_COLLECTION) },
    {"Ken",             DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_COLLECTION,           ARRAYSIZE(SFA3_A_KEN_COLLECTION) },
    {"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA3_A_MBIPSON_COLLECTION,       ARRAYSIZE(SFA3_A_MBIPSON_COLLECTION) },
    {"R. Mika",         DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_COLLECTION,         ARRAYSIZE(SFA3_A_RMIKA_COLLECTION) },
    {"Rolento",         DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA3_A_ROLENTO_COLLECTION) },
    {"Rose",            DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_COLLECTION,          ARRAYSIZE(SFA3_A_ROSE_COLLECTION) },
    {"Ryu",             DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_COLLECTION,           ARRAYSIZE(SFA3_A_RYU_COLLECTION) },
    {"Sagat",           DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA3_A_SAGAT_COLLECTION) },
    {"Sakura",          DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA3_A_SAKURA_COLLECTION) },
    {"Sodom",           DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_COLLECTION,         ARRAYSIZE(SFA3_A_SODOM_COLLECTION) },
    {"Vega",            DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_COLLECTION,          ARRAYSIZE(SFA3_A_VEGA_COLLECTION) },
    {"Zangief",         DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA3_A_ZANGIEF_COLLECTION) },
};

// We extend this array with data groveled from the SFA3e.txt extensible extras file, if any.
const stExtraDef SFA3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};

/*
const UINT16 SFA3_A_IMGREDIR[SFA3_A_NUM_IND] =
{
    0x00,
    0x27,
    0x1E,
    0x21,
    SFA3_A_IMGSTART + 0x00,
    SFA3_A_IMGSTART + 0x01,
    SFA3_A_IMGSTART + 0x02,
    SFA3_A_IMGSTART + 0x03,
    SFA3_A_IMGSTART + 0x04,
    SFA3_A_IMGSTART + 0x05,
    0x26,
    SFA3_A_IMGSTART + 0x06,
    0x23,
    0x22,
    SFA3_A_IMGSTART + 0x07,
    0x25,
    0x01,
    SFA3_A_IMGSTART + 0x08,
    SFA3_A_IMGSTART + 0x09,
    0x24,
    SFA3_A_IMGSTART + 0x0A,
    SFA3_A_IMGSTART + 0x0B,
    SFA3_A_IMGSTART + 0x0C,
    SFA3_A_IMGSTART + 0x0D,
    SFA3_A_IMGSTART + 0x0E,
    SFA3_A_IMGSTART + 0x0F,
    SFA3_A_IMGSTART + 0x10,
    SFA3_A_IMGSTART + 0x11,  // If you change this array you will want to change gamedef.h's SFA3_A_* values
};
// */
