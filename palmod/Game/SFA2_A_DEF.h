#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA2_A_RYU_PALETTES. 
// * Update every array using SFA2_A_NUM_IND below
// * Update the index lookups in Game_SFA2_A.cpp that are marked 
//       - look for usage of index_SFA2_Ryu to find them
// That should be it.  Good luck.

// This list is sorted by ROM layout order
enum Supported_SFA2_PaletteListIndex
{
    index_SFA2_Ryu,
    index_SFA2_Ken,
    index_SFA2_Akuma,
    index_SFA2_Charlie,
    index_SFA2_ChunLi,
    index_SFA2_Adon,
    index_SFA2_Sodom,
    index_SFA2_Guy,
    index_SFA2_Birdie,
    index_SFA2_Rose,
    index_SFA2_MBison,
    index_SFA2_Sagat,
    index_SFA2_Dan,
    index_SFA2_Sakura,
    index_SFA2_Rolento,
    index_SFA2_Dhalsim,
    index_SFA2_Zangief,
    index_SFA2_Gen,
    index_SFA2_ChunLiAlt,
    //index_SFA2_GenCraneStance,
    // Following are revision 2 only
    index_SFA2_WWZangief,
    index_SFA2_WWDhalsim,
    index_SFA2_EvilRyu,
    // Following are SFZ2A only
    index_SFA2_WWMBison,
    index_SFA2_WWSagat,
    index_SFA2_WWKen,
    index_SFA2_WWRyu,
    index_SFA2_WWChunLi,
    index_SFA2_AltSakura,
    index_SFA2_Bonus07,
    index_SFA2_Last
};

constexpr auto SFA2_A_NUM_IND_07_REV1 = index_SFA2_ChunLiAlt + 1 + 1; // rev 1: +1 for extras, 1 for stages
#define SFA2_A_EXTRALOC_07_REV1 SFA2_A_NUM_IND_07_REV1

constexpr auto SFA2_A_NUM_IND_07_REV2 = index_SFA2_EvilRyu + 1 + 1; // rev 2: +1 for extras, +1 for bonus
#define SFA2_A_EXTRALOC_07_REV2 SFA2_A_NUM_IND_07_REV2

constexpr auto SFZ2A_A_NUM_IND_07 = index_SFA2_Last - 1; // rev 3, except no Bonus yet
#define SFZ2A_A_EXTRALOC_07 SFZ2A_A_NUM_IND_07

const UINT8 SFA2_A_UNITSORT_07_REV1[SFA2_A_NUM_IND_07_REV1 + 1] = // Plus 1 for the extra palettes
{
    index_SFA2_Adon,
    index_SFA2_Akuma,
    index_SFA2_Birdie,
    index_SFA2_Charlie,
    index_SFA2_ChunLi,
    index_SFA2_ChunLiAlt,
    index_SFA2_Dan,
    index_SFA2_Dhalsim,
    index_SFA2_Gen,
    index_SFA2_Guy,
    index_SFA2_Ken,
    index_SFA2_MBison,
    index_SFA2_Rolento,
    index_SFA2_Rose,
    index_SFA2_Ryu,
    index_SFA2_Sagat,
    index_SFA2_Sakura,
    index_SFA2_Sodom,
    index_SFA2_Zangief,

    index_SFA2_Bonus07,
   
    SFA2_A_EXTRALOC_07_REV1 // Extra palettes
};

const UINT8 SFA2_A_UNITSORT_07_0306[SFA2_A_NUM_IND_07_REV2 + 1] = // Plus 1 for the extra palettes
{
    index_SFA2_Adon,
    index_SFA2_Akuma,
    index_SFA2_Birdie,
    index_SFA2_Charlie,
    index_SFA2_ChunLi,
    index_SFA2_ChunLiAlt,
    index_SFA2_Dan,
    index_SFA2_Dhalsim,
    index_SFA2_WWDhalsim,
    index_SFA2_Gen,
    index_SFA2_Guy,
    index_SFA2_Ken,
    index_SFA2_MBison,
    index_SFA2_Rolento,
    index_SFA2_Rose,
    index_SFA2_Ryu,
    index_SFA2_EvilRyu,
    index_SFA2_Sagat,
    index_SFA2_Sakura,
    index_SFA2_Sodom,
    index_SFA2_Zangief,
    index_SFA2_WWZangief,

    index_SFA2_Bonus07,

    SFA2_A_EXTRALOC_07_REV2 // Extra palettes
};

const UINT8 SFZ2A_A_UNITSORT_07_0826[SFZ2A_A_NUM_IND_07 + 1] = // Plus 1 for the extra palettes
{
    index_SFA2_Adon,
    index_SFA2_Akuma,
    index_SFA2_Birdie,
    index_SFA2_Charlie,
    index_SFA2_ChunLi,
    index_SFA2_ChunLiAlt,
    index_SFA2_WWChunLi,
    index_SFA2_Dan,
    index_SFA2_Dhalsim,
    index_SFA2_WWDhalsim,
    index_SFA2_Gen,
    index_SFA2_Guy,
    index_SFA2_Ken,
    index_SFA2_WWKen,
    index_SFA2_MBison,
    index_SFA2_WWMBison,
    index_SFA2_Rolento,
    index_SFA2_Rose,
    index_SFA2_Ryu,
    index_SFA2_WWRyu,
    index_SFA2_EvilRyu,
    index_SFA2_Sagat,
    index_SFA2_WWSagat,
    index_SFA2_Sakura,
    index_SFA2_AltSakura,
    index_SFA2_Sodom,
    index_SFA2_Zangief,
    index_SFA2_WWZangief,

    //index_SFA2_Bonus07,

    SFZ2A_A_EXTRALOC_07 // Extra palettes
};

const sGame_PaletteDataset SFA2_A_RYU_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6e2c0, 0x6e2e0, indexCPS2_Ryu, 0x00 },
    { _T("Punch Hadoken"), 0x6e2e0, 0x6e300, indexCPS2_Ryu, 0x01 },
    { _T("Punch Extra 2"), 0x6e300, 0x6e320, indexCPS2_Ryu, 0x00 },
    { _T("Punch Super Trail Light"), 0x6e320, 0x6e340, indexCPS2_Ryu, 0x00 },
    { _T("Punch Super Trail Dark"), 0x6e340, 0x6e360, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6e360, 0x6e380, indexCPS2_Ryu, 0x00 },
    { _T("Kick Hadoken"), 0x6e380, 0x6e3a0, indexCPS2_Ryu, 0x01 },
    { _T("Kick Extra 2"), 0x6e3a0, 0x6e3c0, indexCPS2_Ryu, 0x00 },
    { _T("Kick Super Trail Light"), 0x6e3c0, 0x6e3e0, indexCPS2_Ryu, 0x00 },
    { _T("Kick Super Trail Dark"), 0x6e3e0, 0x6e400, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6e400, 0x6e420, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Hadoken"), 0x6e420, 0x6e440, indexCPS2_Ryu, 0x01 },
    { _T("2 Punches Extra 2"), 0x6e440, 0x6e460, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x6e460, 0x6e480, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x6e480, 0x6e4a0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6e4a0, 0x6e4c0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Hadoken"), 0x6e4c0, 0x6e4e0, indexCPS2_Ryu, 0x01 },
    { _T("2 Kicks Extra 2"), 0x6e4e0, 0x6e500, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x6e500, 0x6e520, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x6e520, 0x6e540, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6e540, 0x6e560, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Hadoken"), 0x6e560, 0x6e580, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Punch Extra 2"), 0x6e580, 0x6e5a0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6e5a0, 0x6e5c0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6e5c0, 0x6e5e0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6e5e0, 0x6e600, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Hadoken"), 0x6e600, 0x6e620, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Kick Extra 2"), 0x6e620, 0x6e640, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6e640, 0x6e660, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6e660, 0x6e680, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x72e60, 0x72e80, indexCPS2_Ryu, 0x00 },
    { _T("Burned 2"), 0x72e80, 0x72ea0, indexCPS2_Ryu, 0x00 },
    { _T("Psycho Power Burned 1"), 0x72ea0, 0x72ec0, indexCPS2_Ryu, 0x00 },
    { _T("Psycho Power Burned 2"), 0x72ec0, 0x72ee0, indexCPS2_Ryu, 0x00 },
    { _T("Punch CC Shadow 1"), 0x72ee0, 0x72f00, indexCPS2_Ryu, 0x00 },
    { _T("Punch CC Shadow 2"), 0x72f00, 0x72f20, indexCPS2_Ryu, 0x00 },
    { _T("Kick CC Shadow 1"), 0x72f20, 0x72f40, indexCPS2_Ryu, 0x00 },
    { _T("Kick CC Shadow 2"), 0x72f40, 0x72f60, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x72f60, 0x72f80, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x72f80, 0x72fa0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x72fa0, 0x72fc0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x72fc0, 0x72fe0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x72fe0, 0x73000, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73000, 0x73020, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73020, 0x73040, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73040, 0x73060, indexCPS2_Ryu, 0x00 },
};
 
const sGame_PaletteDataset SFA2_A_KEN_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6e680, 0x6e6a0, indexCPS2_Ken, 0x00 },
    { _T("Punch Extra 1"), 0x6e6a0, 0x6e6c0, indexCPS2_Ken, 0x00 },
    { _T("Punch Extra 2"), 0x6e6c0, 0x6e6e0, indexCPS2_Ken, 0x00 },
    { _T("Punch Super Trail Light"), 0x6e6e0, 0x6e700, indexCPS2_Ken, 0x00 },
    { _T("Punch Super Trail Dark"), 0x6e700, 0x6e720, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6e720, 0x6e740, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 1"), 0x6e740, 0x6e760, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 2"), 0x6e760, 0x6e780, indexCPS2_Ken, 0x00 },
    { _T("Kick Super Trail Light"), 0x6e780, 0x6e7a0, indexCPS2_Ken, 0x00 },
    { _T("Kick Super Trail Dark"), 0x6e7a0, 0x6e7c0, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6e7c0, 0x6e7e0, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 1"), 0x6e7e0, 0x6e800, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 2"), 0x6e800, 0x6e820, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x6e820, 0x6e840, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x6e840, 0x6e860, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6e860, 0x6e880, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6e880, 0x6e8a0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6e8a0, 0x6e8c0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x6e8c0, 0x6e8e0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x6e8e0, 0x6e900, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6e900, 0x6e920, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6e920, 0x6e940, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6e940, 0x6e960, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6e960, 0x6e980, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6e980, 0x6e9a0, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6e9a0, 0x6e9c0, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6e9c0, 0x6e9e0, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6e9e0, 0x6ea00, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6ea00, 0x6ea20, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6ea20, 0x6ea40, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73060, 0x73080, indexCPS2_Ken, 0x00 },
    { _T("Burned 2"), 0x73080, 0x730a0, indexCPS2_Ken, 0x00 },
    { _T("Psycho Power Burned 1"), 0x730a0, 0x730c0, indexCPS2_Ken, 0x00 },
    { _T("Psycho Power Burned 2"), 0x730c0, 0x730e0, indexCPS2_Ken, 0x00 },
    { _T("Punch CC Shadow 1"), 0x730e0, 0x73100, indexCPS2_Ken, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73100, 0x73120, indexCPS2_Ken, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73120, 0x73140, indexCPS2_Ken, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73140, 0x73160, indexCPS2_Ken, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73160, 0x73180, indexCPS2_Ken, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73180, 0x731a0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x731a0, 0x731c0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x731c0, 0x731e0, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x731e0, 0x73200, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73200, 0x73220, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73220, 0x73240, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73240, 0x73260, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6ea40, 0x6ea60, indexCPS2_Akuma, 0x00 },
    { _T("Punch Extra 1"), 0x6ea60, 0x6ea80, indexCPS2_Akuma, 0x0c },
    { _T("Punch Extra 2"), 0x6ea80, 0x6eaa0, indexCPS2_Akuma, 0x00 },
    { _T("Punch Super Trail Light"), 0x6eaa0, 0x6eac0, indexCPS2_Akuma, 0x00 },
    { _T("Punch Super Trail Dark"), 0x6eac0, 0x6eae0, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6eae0, 0x6eb00, indexCPS2_Akuma, 0x00 },
    { _T("Kick Extra 1"), 0x6eb00, 0x6eb20, indexCPS2_Akuma, 0x0c },
    { _T("Kick Extra 2"), 0x6eb20, 0x6eb40, indexCPS2_Akuma, 0x00 },
    { _T("Kick Super Trail Light"), 0x6eb40, 0x6eb60, indexCPS2_Akuma, 0x00 },
    { _T("Kick Super Trail Dark"), 0x6eb60, 0x6eb80, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6eb80, 0x6eba0, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Extra 1"), 0x6eba0, 0x6ebc0, indexCPS2_Akuma, 0x0c },
    { _T("2 Punches Extra 2"), 0x6ebc0, 0x6ebe0, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x6ebe0, 0x6ec00, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x6ec00, 0x6ec20, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6ec20, 0x6ec40, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6ec40, 0x6ec60, indexCPS2_Akuma, 0x0c },
    { _T("2 Kicks Extra 2"), 0x6ec60, 0x6ec80, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x6ec80, 0x6eca0, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x6eca0, 0x6ecc0, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6ecc0, 0x6ece0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6ece0, 0x6ed00, indexCPS2_Akuma, 0x0c },
    { _T("Auto Guard Punch Extra 2"), 0x6ed00, 0x6ed20, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6ed20, 0x6ed40, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6ed40, 0x6ed60, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6ed60, 0x6ed80, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6ed80, 0x6eda0, indexCPS2_Akuma, 0x0c },
    { _T("Auto Guard Kick Extra 2"), 0x6eda0, 0x6edc0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6edc0, 0x6ede0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6ede0, 0x6ee00, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73260, 0x73280, indexCPS2_Akuma, 0x00 },
    { _T("Burned 2"), 0x73280, 0x732a0, indexCPS2_Akuma, 0x00 },
    { _T("Psycho Power Burned 1"), 0x732a0, 0x732c0, indexCPS2_Akuma, 0x00 },
    { _T("Psycho Power Burned 2"), 0x732c0, 0x732e0, indexCPS2_Akuma, 0x00 },
    { _T("Punch CC Shadow 1"), 0x732e0, 0x73300, indexCPS2_Akuma, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73300, 0x73320, indexCPS2_Akuma, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73320, 0x73340, indexCPS2_Akuma, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73340, 0x73360, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73360, 0x73380, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73380, 0x733a0, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x733a0, 0x733c0, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x733c0, 0x733e0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x733e0, 0x73400, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73400, 0x73420, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73420, 0x73440, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73440, 0x73460, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6ee00, 0x6ee20, indexCPS2_Charlie, 0x00 },
    { _T("Punch Sonic Boom"), 0x6ee20, 0x6ee40, indexCPS2_Charlie, 0x01 },
    { _T("Punch Flash Kick"), 0x6ee40, 0x6ee60, indexCPS2_Charlie, 0x02 },
    { _T("Punch Super Trail Light"), 0x6ee60, 0x6ee80, indexCPS2_Charlie, 0x00 },
    { _T("Punch Super Trail Dark"), 0x6ee80, 0x6eea0, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6eea0, 0x6eec0, indexCPS2_Charlie, 0x00 },
    { _T("Kick Sonic Boom"), 0x6eec0, 0x6eee0, indexCPS2_Charlie, 0x01 },
    { _T("Kick Flash Kick"), 0x6eee0, 0x6ef00, indexCPS2_Charlie, 0x02 },
    { _T("Kick Super Trail Light"), 0x6ef00, 0x6ef20, indexCPS2_Charlie, 0x00 },
    { _T("Kick Super Trail Dark"), 0x6ef20, 0x6ef40, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6ef40, 0x6ef60, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches Sonic Boom"), 0x6ef60, 0x6ef80, indexCPS2_Charlie, 0x01 },
    { _T("2 Punches Flash Kick"), 0x6ef80, 0x6efa0, indexCPS2_Charlie, 0x02 },
    { _T("2 Punches Super Trail Light"), 0x6efa0, 0x6efc0, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x6efc0, 0x6efe0, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6efe0, 0x6f000, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks Sonic Boom"), 0x6f000, 0x6f020, indexCPS2_Charlie, 0x01 },
    { _T("2 Kicks Flash Kick"), 0x6f020, 0x6f040, indexCPS2_Charlie, 0x02 },
    { _T("2 Kicks Super Trail Light"), 0x6f040, 0x6f060, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x6f060, 0x6f080, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6f080, 0x6f0a0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch Sonic Boom"), 0x6f0a0, 0x6f0c0, indexCPS2_Charlie, 0x01 },
    { _T("Auto Guard Punch Flash Kick"), 0x6f0c0, 0x6f0e0, indexCPS2_Charlie, 0x02 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6f0e0, 0x6f100, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6f100, 0x6f120, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6f120, 0x6f140, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick Sonic Boom"), 0x6f140, 0x6f160, indexCPS2_Charlie, 0x01 },
    { _T("Auto Guard Kick Flash Kick"), 0x6f160, 0x6f180, indexCPS2_Charlie, 0x02 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6f180, 0x6f1a0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6f1a0, 0x6f1c0, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73460, 0x73480, indexCPS2_Charlie, 0x00 },
    { _T("Burned 2"), 0x73480, 0x734a0, indexCPS2_Charlie, 0x00 },
    { _T("Psycho Power Burned 1"), 0x734a0, 0x734c0, indexCPS2_Charlie, 0x00 },
    { _T("Psycho Power Burned 2"), 0x734c0, 0x734e0, indexCPS2_Charlie, 0x00 },
    { _T("Punch CC Shadow 1"), 0x734e0, 0x73500, indexCPS2_Charlie, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73500, 0x73520, indexCPS2_Charlie, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73520, 0x73540, indexCPS2_Charlie, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73540, 0x73560, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73560, 0x73580, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73580, 0x735a0, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x735a0, 0x735c0, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x735c0, 0x735e0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x735e0, 0x73600, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73600, 0x73620, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73620, 0x73640, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73640, 0x73660, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6f1c0, 0x6f1e0, indexCPS2_ChunLi, 0x0c, &pairNext },
    { _T("Punch Keiokuken (shades)"), 0x6f1e0, 0x6f200, indexCPS2_ChunLi, 0x0f },
    { _T("Punch Extra 2"), 0x6f200, 0x6f220 },
    { _T("Punch Super Trail Light"), 0x6f220, 0x6f240, indexCPS2_ChunLi, 0x0c },
    { _T("Punch Super Trail Dark"), 0x6f240, 0x6f260, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6f260, 0x6f280, indexCPS2_ChunLi, 0x0c, &pairNext },
    { _T("Kick Keiokuken (shades)"), 0x6f280, 0x6f2a0, indexCPS2_ChunLi, 0x0f },
    { _T("Kick Extra 2"), 0x6f2a0, 0x6f2c0 },
    { _T("Kick Super Trail Light"), 0x6f2c0, 0x6f2e0, indexCPS2_ChunLi, 0x0c },
    { _T("Kick Super Trail Dark"), 0x6f2e0, 0x6f300, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6f300, 0x6f320, indexCPS2_ChunLi, 0x0c, &pairNext },
    { _T("2 Punches Keiokuken (shades)"), 0x6f320, 0x6f340, indexCPS2_ChunLi, 0x0f },
    { _T("2 Punches Extra 2"), 0x6f340, 0x6f360 },
    { _T("2 Punches Super Trail Light"), 0x6f360, 0x6f380, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches Super Trail Dark"), 0x6f380, 0x6f3a0, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6f3a0, 0x6f3c0, indexCPS2_ChunLi, 0x0c, &pairNext },
    { _T("2 Kicks Keiokuken (shades)"), 0x6f3c0, 0x6f3e0, indexCPS2_ChunLi, 0x0f },
    { _T("2 Kicks Extra 2"), 0x6f3e0, 0x6f400 },
    { _T("2 Kicks Super Trail Light"), 0x6f400, 0x6f420, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks Super Trail Dark"), 0x6f420, 0x6f440, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6f440, 0x6f460, indexCPS2_ChunLi, 0x0c, &pairNext },
    { _T("Auto Guard Punch Keiokuken (shades)"), 0x6f460, 0x6f480, indexCPS2_ChunLi, 0x0f },
    { _T("Auto Guard Punch Extra 2"), 0x6f480, 0x6f4a0 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6f4a0, 0x6f4c0, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6f4c0, 0x6f4e0, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6f4e0, 0x6f500, indexCPS2_ChunLi, 0x0c, &pairNext },
    { _T("Auto Guard Kick Keiokuken (shades)"), 0x6f500, 0x6f520, indexCPS2_ChunLi, 0x0f },
    { _T("Auto Guard Kick Extra 2"), 0x6f520, 0x6f540 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6f540, 0x6f560, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6f560, 0x6f580, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73660, 0x73680, indexCPS2_ChunLi, 0x0c },
    { _T("Burned 2"), 0x73680, 0x736a0, indexCPS2_ChunLi, 0x0c },
    { _T("Psycho Power Burned 1"), 0x736a0, 0x736c0, indexCPS2_ChunLi, 0x0c },
    { _T("Psycho Power Burned 2"), 0x736c0, 0x736e0, indexCPS2_ChunLi, 0x0c },
    { _T("Punch CC Shadow 1"), 0x736e0, 0x73700, indexCPS2_ChunLi, 0x0c },
    { _T("Punch CC Shadow 2"), 0x73700, 0x73720, indexCPS2_ChunLi, 0x0c },
    { _T("Kick CC Shadow 1"), 0x73720, 0x73740, indexCPS2_ChunLi, 0x0c },
    { _T("Kick CC Shadow 2"), 0x73740, 0x73760, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches CC Shadow 1"), 0x73760, 0x73780, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches CC Shadow 2"), 0x73780, 0x737a0, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks CC Shadow 1"), 0x737a0, 0x737c0, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks CC Shadow 2"), 0x737c0, 0x737e0, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch CC Shadow 1"), 0x737e0, 0x73800, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73800, 0x73820, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73820, 0x73840, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73840, 0x73860, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_ADON_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6f580, 0x6f5a0, indexCPS2_Adon, 0x00 },
    { _T("Punch Extra 1"), 0x6f5a0, 0x6f5c0, indexCPS2_Adon, 0x00 },
    { _T("Punch Extra 2"), 0x6f5c0, 0x6f5e0, indexCPS2_Adon, 0x00 },
    { _T("Punch Super Trail Light"), 0x6f5e0, 0x6f600, indexCPS2_Adon, 0x00 },
    { _T("Punch Super Trail Dark"), 0x6f600, 0x6f620, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6f620, 0x6f640, indexCPS2_Adon, 0x00 },
    { _T("Kick Extra 1"), 0x6f640, 0x6f660, indexCPS2_Adon, 0x00 },
    { _T("Kick Extra 2"), 0x6f660, 0x6f680, indexCPS2_Adon, 0x00 },
    { _T("Kick Super Trail Light"), 0x6f680, 0x6f6a0, indexCPS2_Adon, 0x00 },
    { _T("Kick Super Trail Dark"), 0x6f6a0, 0x6f6c0, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6f6c0, 0x6f6e0, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Extra 1"), 0x6f6e0, 0x6f700, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Extra 2"), 0x6f700, 0x6f720, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x6f720, 0x6f740, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x6f740, 0x6f760, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6f760, 0x6f780, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6f780, 0x6f7a0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6f7a0, 0x6f7c0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x6f7c0, 0x6f7e0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x6f7e0, 0x6f800, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6f800, 0x6f820, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6f820, 0x6f840, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6f840, 0x6f860, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6f860, 0x6f880, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6f880, 0x6f8a0, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6f8a0, 0x6f8c0, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6f8c0, 0x6f8e0, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6f8e0, 0x6f900, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6f900, 0x6f920, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6f920, 0x6f940, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73860, 0x73880, indexCPS2_Adon, 0x00 },
    { _T("Burned 2"), 0x73880, 0x738a0, indexCPS2_Adon, 0x00 },
    { _T("Psycho Power Burned 1"), 0x738a0, 0x738c0, indexCPS2_Adon, 0x00 },
    { _T("Psycho Power Burned 2"), 0x738c0, 0x738e0, indexCPS2_Adon, 0x00 },
    { _T("Punch CC Shadow 1"), 0x738e0, 0x73900, indexCPS2_Adon, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73900, 0x73920, indexCPS2_Adon, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73920, 0x73940, indexCPS2_Adon, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73940, 0x73960, indexCPS2_Adon, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73960, 0x73980, indexCPS2_Adon, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73980, 0x739a0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x739a0, 0x739c0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x739c0, 0x739e0, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x739e0, 0x73a00, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73a00, 0x73a20, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73a20, 0x73a40, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73a40, 0x73a60, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6f940, 0x6f960, indexCPS2_Sodom, 0x02 },
    { _T("Punch Extra 1: Slashes"), 0x6f960, 0x6f980, indexCPS2_Sodom, 0x04 },
    { _T("Punch Extra 2: Intro"), 0x6f980, 0x6f9a0, indexCPS2_Sodom, 0x03 },
    { _T("Punch Super Trail Light"), 0x6f9a0, 0x6f9c0, indexCPS2_Sodom, 0x02 },
    { _T("Punch Super Trail Dark"), 0x6f9c0, 0x6f9e0, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6f9e0, 0x6fa00, indexCPS2_Sodom, 0x02 },
    { _T("Kick Extra 1: Slashes"), 0x6fa00, 0x6fa20, indexCPS2_Sodom, 0x04 },
    { _T("Kick Extra 2: Intro"), 0x6fa20, 0x6fa40, indexCPS2_Sodom, 0x03 },
    { _T("Kick Super Trail Light"), 0x6fa40, 0x6fa60, indexCPS2_Sodom, 0x02 },
    { _T("Kick Super Trail Dark"), 0x6fa60, 0x6fa80, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6fa80, 0x6faa0, indexCPS2_Sodom, 0x02 },
    { _T("2 Punches Extra 1: Slashes"), 0x6faa0, 0x6fac0, indexCPS2_Sodom, 0x04 },
    { _T("2 Punches Extra 2: Intro"), 0x6fac0, 0x6fae0, indexCPS2_Sodom, 0x03 },
    { _T("2 Punches Super Trail Light"), 0x6fae0, 0x6fb00, indexCPS2_Sodom, 0x02 },
    { _T("2 Punches Super Trail Dark"), 0x6fb00, 0x6fb20, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6fb20, 0x6fb40, indexCPS2_Sodom, 0x02 },
    { _T("2 Kicks Extra 1: Slashes"), 0x6fb40, 0x6fb60, indexCPS2_Sodom, 0x04 },
    { _T("2 Kicks Extra 2: Intro"), 0x6fb60, 0x6fb80, indexCPS2_Sodom, 0x03 },
    { _T("2 Kicks Super Trail Light"), 0x6fb80, 0x6fba0, indexCPS2_Sodom, 0x02 },
    { _T("2 Kicks Super Trail Dark"), 0x6fba0, 0x6fbc0, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6fbc0, 0x6fbe0, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Punch Extra 1: Slashes"), 0x6fbe0, 0x6fc00, indexCPS2_Sodom, 0x04 },
    { _T("Auto Guard Punch Extra 2: Intro"), 0x6fc00, 0x6fc20, indexCPS2_Sodom, 0x03 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6fc20, 0x6fc40, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x6fc40, 0x6fc60, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6fc60, 0x6fc80, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Kick Extra 1: Slashes"), 0x6fc80, 0x6fca0, indexCPS2_Sodom, 0x04 },
    { _T("Auto Guard Kick Extra 2: Intro"), 0x6fca0, 0x6fcc0, indexCPS2_Sodom, 0x03 },
    { _T("Auto Guard Kick Super Trail Light"), 0x6fcc0, 0x6fce0, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x6fce0, 0x6fd00, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73a60, 0x73a80, indexCPS2_Sodom, 0x02 },
    { _T("Burned 2"), 0x73a80, 0x73aa0, indexCPS2_Sodom, 0x02 },
    { _T("Psycho Power Burned 1"), 0x73aa0, 0x73ac0, indexCPS2_Sodom, 0x02 },
    { _T("Psycho Power Burned 2"), 0x73ac0, 0x73ae0, indexCPS2_Sodom, 0x02 },
    { _T("Punch CC Shadow 1"), 0x73ae0, 0x73b00, indexCPS2_Sodom, 0x02 },
    { _T("Punch CC Shadow 2"), 0x73b00, 0x73b20, indexCPS2_Sodom, 0x02 },
    { _T("Kick CC Shadow 1"), 0x73b20, 0x73b40, indexCPS2_Sodom, 0x02 },
    { _T("Kick CC Shadow 2"), 0x73b40, 0x73b60, indexCPS2_Sodom, 0x02 },
    { _T("2 Punches CC Shadow 1"), 0x73b60, 0x73b80, indexCPS2_Sodom, 0x02 },
    { _T("2 Punches CC Shadow 2"), 0x73b80, 0x73ba0, indexCPS2_Sodom, 0x02 },
    { _T("2 Kicks CC Shadow 1"), 0x73ba0, 0x73bc0, indexCPS2_Sodom, 0x02 },
    { _T("2 Kicks CC Shadow 2"), 0x73bc0, 0x73be0, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x73be0, 0x73c00, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73c00, 0x73c20, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73c20, 0x73c40, indexCPS2_Sodom, 0x02 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73c40, 0x73c60, indexCPS2_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_GUY_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6fd00, 0x6fd20, indexCPS2_Guy, 0x00 },
    { _T("Punch Extra 1"), 0x6fd20, 0x6fd40 },
    { _T("Punch Extra 2"), 0x6fd40, 0x6fd60 },
    { _T("Punch Super Trail Light"), 0x6fd60, 0x6fd80, indexCPS2_Guy, 0x00 },
    { _T("Punch Super Trail Dark"), 0x6fd80, 0x6fda0, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6fda0, 0x6fdc0, indexCPS2_Guy, 0x00 },
    { _T("Kick Extra 1"), 0x6fdc0, 0x6fde0 },
    { _T("Kick Extra 2"), 0x6fde0, 0x6fe00 },
    { _T("Kick Super Trail Light"), 0x6fe00, 0x6fe20, indexCPS2_Guy, 0x00 },
    { _T("Kick Super Trail Dark"), 0x6fe20, 0x6fe40, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6fe40, 0x6fe60, indexCPS2_Guy, 0x00 },
    { _T("2 Punches Extra 1"), 0x6fe60, 0x6fe80 },
    { _T("2 Punches Extra 2"), 0x6fe80, 0x6fea0 },
    { _T("2 Punches Super Trail Light"), 0x6fea0, 0x6fec0, indexCPS2_Guy, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x6fec0, 0x6fee0, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6fee0, 0x6ff00, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6ff00, 0x6ff20 },
    { _T("2 Kicks Extra 2"), 0x6ff20, 0x6ff40 },
    { _T("2 Kicks Super Trail Light"), 0x6ff40, 0x6ff60, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x6ff60, 0x6ff80, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6ff80, 0x6ffa0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6ffa0, 0x6ffc0 },
    { _T("Auto Guard Punch Extra 2"), 0x6ffc0, 0x6ffe0 },
    { _T("Auto Guard Punch Super Trail Light"), 0x6ffe0, 0x70000, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x70000, 0x70020, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x70020, 0x70040, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70040, 0x70060 },
    { _T("Auto Guard Kick Extra 2"), 0x70060, 0x70080 },
    { _T("Auto Guard Kick Super Trail Light"), 0x70080, 0x700a0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x700a0, 0x700c0, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73c60, 0x73c80, indexCPS2_Guy, 0x00 },
    { _T("Burned 2"), 0x73c80, 0x73ca0, indexCPS2_Guy, 0x00 },
    { _T("Psycho Power Burned 1"), 0x73ca0, 0x73cc0, indexCPS2_Guy, 0x00 },
    { _T("Psycho Power Burned 2"), 0x73cc0, 0x73ce0, indexCPS2_Guy, 0x00 },
    { _T("Punch CC Shadow 1"), 0x73ce0, 0x73d00, indexCPS2_Guy, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73d00, 0x73d20, indexCPS2_Guy, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73d20, 0x73d40, indexCPS2_Guy, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73d40, 0x73d60, indexCPS2_Guy, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73d60, 0x73d80, indexCPS2_Guy, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73d80, 0x73da0, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x73da0, 0x73dc0, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x73dc0, 0x73de0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x73de0, 0x73e00, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73e00, 0x73e20, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73e20, 0x73e40, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73e40, 0x73e60, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x700c0, 0x700e0, indexCPS2_Birdie, 0x00 },
    { _T("Punch Extra 1"), 0x700e0, 0x70100, indexCPS2_Birdie, 0x00 },
    { _T("Punch Extra 2"), 0x70100, 0x70120, indexCPS2_Birdie, 0x00 },
    { _T("Punch Super Trail Light"), 0x70120, 0x70140, indexCPS2_Birdie, 0x00 },
    { _T("Punch Super Trail Dark"), 0x70140, 0x70160, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x70160, 0x70180, indexCPS2_Birdie, 0x00 },
    { _T("Kick Extra 1"), 0x70180, 0x701a0, indexCPS2_Birdie, 0x00 },
    { _T("Kick Extra 2"), 0x701a0, 0x701c0, indexCPS2_Birdie, 0x00 },
    { _T("Kick Super Trail Light"), 0x701c0, 0x701e0, indexCPS2_Birdie, 0x00 },
    { _T("Kick Super Trail Dark"), 0x701e0, 0x70200, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x70200, 0x70220, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Extra 1"), 0x70220, 0x70240, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Extra 2"), 0x70240, 0x70260, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x70260, 0x70280, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x70280, 0x702a0, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x702a0, 0x702c0, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Extra 1"), 0x702c0, 0x702e0, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Extra 2"), 0x702e0, 0x70300, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x70300, 0x70320, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x70320, 0x70340, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70340, 0x70360, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70360, 0x70380, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x70380, 0x703a0, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x703a0, 0x703c0, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x703c0, 0x703e0, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x703e0, 0x70400, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70400, 0x70420, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x70420, 0x70440, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x70440, 0x70460, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x70460, 0x70480, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73e60, 0x73e80, indexCPS2_Birdie, 0x00 },
    { _T("Burned 2"), 0x73e80, 0x73ea0, indexCPS2_Birdie, 0x00 },
    { _T("Psycho Power Burned 1"), 0x73ea0, 0x73ec0, indexCPS2_Birdie, 0x00 },
    { _T("Psycho Power Burned 2"), 0x73ec0, 0x73ee0, indexCPS2_Birdie, 0x00 },
    { _T("Punch CC Shadow 1"), 0x73ee0, 0x73f00, indexCPS2_Birdie, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73f00, 0x73f20, indexCPS2_Birdie, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73f20, 0x73f40, indexCPS2_Birdie, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73f40, 0x73f60, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73f60, 0x73f80, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73f80, 0x73fa0, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x73fa0, 0x73fc0, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x73fc0, 0x73fe0, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x73fe0, 0x74000, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74000, 0x74020, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74020, 0x74040, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74040, 0x74060, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x70480, 0x704a0, indexCPS2_Rose, 0x00 },
    { _T("Punch Soul Power 1"), 0x704a0, 0x704c0, indexCPS2_Rose, 0x02 },
    { _T("Punch Soul Power 2"), 0x704c0, 0x704e0, indexCPS2_Rose, 0x02 },
    { _T("Punch Super Trail Light"), 0x704e0, 0x70500, indexCPS2_Rose, 0x00 },
    { _T("Punch Super Trail Dark"), 0x70500, 0x70520, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x70520, 0x70540, indexCPS2_Rose, 0x00 },
    { _T("Kick Soul Power 1"), 0x70540, 0x70560, indexCPS2_Rose, 0x02 },
    { _T("Kick Soul Power 2"), 0x70560, 0x70580, indexCPS2_Rose, 0x02 },
    { _T("Kick Super Trail Light"), 0x70580, 0x705a0, indexCPS2_Rose, 0x00 },
    { _T("Kick Super Trail Dark"), 0x705a0, 0x705c0, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x705c0, 0x705e0, indexCPS2_Rose, 0x00 },
    { _T("2 Punches Soul Power 1"), 0x705e0, 0x70600, indexCPS2_Rose, 0x02 },
    { _T("2 Punches Soul Power 2"), 0x70600, 0x70620, indexCPS2_Rose, 0x02 },
    { _T("2 Punches Super Trail Light"), 0x70620, 0x70640, indexCPS2_Rose, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x70640, 0x70660, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x70660, 0x70680, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks Soul Power 1"), 0x70680, 0x706a0, indexCPS2_Rose, 0x02 },
    { _T("2 Kicks Soul Power 2"), 0x706a0, 0x706c0, indexCPS2_Rose, 0x02 },
    { _T("2 Kicks Super Trail Light"), 0x706c0, 0x706e0, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x706e0, 0x70700, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70700, 0x70720, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch Soul Power 1"), 0x70720, 0x70740, indexCPS2_Rose, 0x02 },
    { _T("Auto Guard Punch Soul Power 2"), 0x70740, 0x70760, indexCPS2_Rose, 0x02 },
    { _T("Auto Guard Punch Super Trail Light"), 0x70760, 0x70780, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x70780, 0x707a0, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x707a0, 0x707c0, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick Soul Power 1"), 0x707c0, 0x707e0, indexCPS2_Rose, 0x02 },
    { _T("Auto Guard Kick Soul Power 2"), 0x707e0, 0x70800, indexCPS2_Rose, 0x02 },
    { _T("Auto Guard Kick Super Trail Light"), 0x70800, 0x70820, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x70820, 0x70840, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74060, 0x74080, indexCPS2_Rose, 0x00 },
    { _T("Burned 2"), 0x74080, 0x740a0, indexCPS2_Rose, 0x00 },
    { _T("Psycho Power Burned 1"), 0x740a0, 0x740c0, indexCPS2_Rose, 0x00 },
    { _T("Psycho Power Burned 2"), 0x740c0, 0x740e0, indexCPS2_Rose, 0x00 },
    { _T("Punch CC Shadow 1"), 0x740e0, 0x74100, indexCPS2_Rose, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74100, 0x74120, indexCPS2_Rose, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74120, 0x74140, indexCPS2_Rose, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74140, 0x74160, indexCPS2_Rose, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74160, 0x74180, indexCPS2_Rose, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74180, 0x741a0, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x741a0, 0x741c0, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x741c0, 0x741e0, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x741e0, 0x74200, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74200, 0x74220, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74220, 0x74240, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74240, 0x74260, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x70840, 0x70860, indexCPS2_Bison, 0x00 },
    { _T("Punch Extra 1"), 0x70860, 0x70880 },
    { _T("Punch Extra 2"), 0x70880, 0x708a0 },
    { _T("Punch Super Trail Light"), 0x708a0, 0x708c0, indexCPS2_Bison, 0x00 },
    { _T("Punch Super Trail Dark"), 0x708c0, 0x708e0, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_PALETTES[] =
{
    { _T("Kick"), 0x708e0, 0x70900, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 1"), 0x70900, 0x70920 },
    { _T("Kick Extra 2"), 0x70920, 0x70940 },
    { _T("Kick Super Trail Light"), 0x70940, 0x70960, indexCPS2_Bison, 0x00 },
    { _T("Kick Super Trail Dark"), 0x70960, 0x70980, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x70980, 0x709a0, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 1"), 0x709a0, 0x709c0 },
    { _T("2 Punches Extra 2"), 0x709c0, 0x709e0 },
    { _T("2 Punches Super Trail Light"), 0x709e0, 0x70a00, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x70a00, 0x70a20, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x70a20, 0x70a40, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 1"), 0x70a40, 0x70a60 },
    { _T("2 Kicks Extra 2"), 0x70a60, 0x70a80 },
    { _T("2 Kicks Super Trail Light"), 0x70a80, 0x70aa0, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x70aa0, 0x70ac0, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70ac0, 0x70ae0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70ae0, 0x70b00 },
    { _T("Auto Guard Punch Extra 2"), 0x70b00, 0x70b20 },
    { _T("Auto Guard Punch Super Trail Light"), 0x70b20, 0x70b40, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x70b40, 0x70b60, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x70b60, 0x70b80, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70b80, 0x70ba0 },
    { _T("Auto Guard Kick Extra 2"), 0x70ba0, 0x70bc0 },
    { _T("Auto Guard Kick Super Trail Light"), 0x70bc0, 0x70be0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x70be0, 0x70c00, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74260, 0x74280, indexCPS2_Bison, 0x00 },
    { _T("Burned 2"), 0x74280, 0x742a0, indexCPS2_Bison, 0x00 },
    { _T("Psycho Power Burned 1"), 0x742a0, 0x742c0, indexCPS2_Bison, 0x00 },
    { _T("Psycho Power Burned 2"), 0x742c0, 0x742e0, indexCPS2_Bison, 0x00 },
    { _T("Punch CC Shadow 1"), 0x742e0, 0x74300, indexCPS2_Bison, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74300, 0x74320, indexCPS2_Bison, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74320, 0x74340, indexCPS2_Bison, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74340, 0x74360, indexCPS2_Bison, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74360, 0x74380, indexCPS2_Bison, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74380, 0x743a0, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x743a0, 0x743c0, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x743c0, 0x743e0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x743e0, 0x74400, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74400, 0x74420, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74420, 0x74440, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74440, 0x74460, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x70c00, 0x70c20, indexCPS2_Sagat, 0x00 },
    { _T("Punch Extra 1"), 0x70c20, 0x70c40 },
    { _T("Punch Extra 2"), 0x70c40, 0x70c60 },
    { _T("Punch Super Trail Light"), 0x70c60, 0x70c80, indexCPS2_Sagat, 0x00 },
    { _T("Punch Super Trail Dark"), 0x70c80, 0x70ca0, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_KICK_PALETTES[] =
{
    { _T("Kick"), 0x70ca0, 0x70cc0, indexCPS2_Sagat, 0x00 },
    { _T("Kick Extra 1"), 0x70cc0, 0x70ce0 },
    { _T("Kick Extra 2"), 0x70ce0, 0x70d00 },
    { _T("Kick Super Trail Light"), 0x70d00, 0x70d20, indexCPS2_Sagat, 0x00 },
    { _T("Kick Super Trail Dark"), 0x70d20, 0x70d40, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x70d40, 0x70d60, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Extra 1"), 0x70d60, 0x70d80 },
    { _T("2 Punches Extra 2"), 0x70d80, 0x70da0 },
    { _T("2 Punches Super Trail Light"), 0x70da0, 0x70dc0, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x70dc0, 0x70de0, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x70de0, 0x70e00, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Extra 1"), 0x70e00, 0x70e20 },
    { _T("2 Kicks Extra 2"), 0x70e20, 0x70e40 },
    { _T("2 Kicks Super Trail Light"), 0x70e40, 0x70e60, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x70e60, 0x70e80, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70e80, 0x70ea0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70ea0, 0x70ec0 },
    { _T("Auto Guard Punch Extra 2"), 0x70ec0, 0x70ee0 },
    { _T("Auto Guard Punch Super Trail Light"), 0x70ee0, 0x70f00, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x70f00, 0x70f20, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x70f20, 0x70f40, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70f40, 0x70f60 },
    { _T("Auto Guard Kick Extra 2"), 0x70f60, 0x70f80 },
    { _T("Auto Guard Kick Super Trail Light"), 0x70f80, 0x70fa0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x70fa0, 0x70fc0, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74460, 0x74480, indexCPS2_Sagat, 0x00 },
    { _T("Burned 2"), 0x74480, 0x744a0, indexCPS2_Sagat, 0x00 },
    { _T("Psycho Power Burned 1"), 0x744a0, 0x744c0, indexCPS2_Sagat, 0x00 },
    { _T("Psycho Power Burned 2"), 0x744c0, 0x744e0, indexCPS2_Sagat, 0x00 },
    { _T("Punch CC Shadow 1"), 0x744e0, 0x74500, indexCPS2_Sagat, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74500, 0x74520, indexCPS2_Sagat, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74520, 0x74540, indexCPS2_Sagat, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74540, 0x74560, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74560, 0x74580, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74580, 0x745a0, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x745a0, 0x745c0, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x745c0, 0x745e0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x745e0, 0x74600, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74600, 0x74620, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74620, 0x74640, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74640, 0x74660, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x70fc0, 0x70fe0, indexCPS2_Dan, 0x00 },
    { _T("Punch Extra 1"), 0x70fe0, 0x71000, indexCPS2_Dan, 0x00 },
    { _T("Punch Extra 2"), 0x71000, 0x71020, indexCPS2_Dan, 0x00 },
    { _T("Punch Super Trail Light"), 0x71020, 0x71040, indexCPS2_Dan, 0x00 },
    { _T("Punch Super Trail Dark"), 0x71040, 0x71060, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71060, 0x71080, indexCPS2_Dan, 0x00 },
    { _T("Kick Extra 1"), 0x71080, 0x710a0, indexCPS2_Dan, 0x00 },
    { _T("Kick Extra 2"), 0x710a0, 0x710c0, indexCPS2_Dan, 0x00 },
    { _T("Kick Super Trail Light"), 0x710c0, 0x710e0, indexCPS2_Dan, 0x00 },
    { _T("Kick Super Trail Dark"), 0x710e0, 0x71100, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x71100, 0x71120, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Extra 1"), 0x71120, 0x71140, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Extra 2"), 0x71140, 0x71160, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x71160, 0x71180, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x71180, 0x711a0, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x711a0, 0x711c0, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Extra 1"), 0x711c0, 0x711e0, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Extra 2"), 0x711e0, 0x71200, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x71200, 0x71220, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x71220, 0x71240, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71240, 0x71260, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71260, 0x71280, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71280, 0x712a0, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x712a0, 0x712c0, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x712c0, 0x712e0, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x712e0, 0x71300, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x71300, 0x71320, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x71320, 0x71340, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x71340, 0x71360, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x71360, 0x71380, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74660, 0x74680, indexCPS2_Dan, 0x00 },
    { _T("Burned 2"), 0x74680, 0x746a0, indexCPS2_Dan, 0x00 },
    { _T("Psycho Power Burned 1"), 0x746a0, 0x746c0, indexCPS2_Dan, 0x00 },
    { _T("Psycho Power Burned 2"), 0x746c0, 0x746e0, indexCPS2_Dan, 0x00 },
    { _T("Punch CC Shadow 1"), 0x746e0, 0x74700, indexCPS2_Dan, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74700, 0x74720, indexCPS2_Dan, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74720, 0x74740, indexCPS2_Dan, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74740, 0x74760, indexCPS2_Dan, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74760, 0x74780, indexCPS2_Dan, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74780, 0x747a0, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x747a0, 0x747c0, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x747c0, 0x747e0, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x747e0, 0x74800, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74800, 0x74820, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74820, 0x74840, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74840, 0x74860, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x71380, 0x713a0, indexCPS2_Sakura, 0x00 },
    { _T("Punch Extra 1"), 0x713a0, 0x713c0, indexCPS2_Sakura, 0x00 },
    { _T("Punch Extra 2"), 0x713c0, 0x713e0, indexCPS2_Sakura, 0x00 },
    { _T("Punch Super Trail Light"), 0x713e0, 0x71400, indexCPS2_Sakura, 0x00 },
    { _T("Punch Super Trail Dark"), 0x71400, 0x71420, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71420, 0x71440, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 1"), 0x71440, 0x71460, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 2"), 0x71460, 0x71480, indexCPS2_Sakura, 0x00 },
    { _T("Kick Super Trail Light"), 0x71480, 0x714a0, indexCPS2_Sakura, 0x00 },
    { _T("Kick Super Trail Dark"), 0x714a0, 0x714c0, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x714c0, 0x714e0, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 1"), 0x714e0, 0x71500, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 2"), 0x71500, 0x71520, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x71520, 0x71540, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x71540, 0x71560, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71560, 0x71580, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71580, 0x715a0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 2"), 0x715a0, 0x715c0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x715c0, 0x715e0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x715e0, 0x71600, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71600, 0x71620, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71620, 0x71640, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71640, 0x71660, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x71660, 0x71680, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x71680, 0x716a0, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x716a0, 0x716c0, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x716c0, 0x716e0, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x716e0, 0x71700, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x71700, 0x71720, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x71720, 0x71740, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74860, 0x74880, indexCPS2_Sakura, 0x00 },
    { _T("Burned 2"), 0x74880, 0x748a0, indexCPS2_Sakura, 0x00 },
    { _T("Psycho Power Burned 1"), 0x748a0, 0x748c0, indexCPS2_Sakura, 0x00 },
    { _T("Psycho Power Burned 2"), 0x748c0, 0x748e0, indexCPS2_Sakura, 0x00 },
    { _T("Punch CC Shadow 1"), 0x748e0, 0x74900, indexCPS2_Sakura, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74900, 0x74920, indexCPS2_Sakura, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74920, 0x74940, indexCPS2_Sakura, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74940, 0x74960, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74960, 0x74980, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74980, 0x749a0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x749a0, 0x749c0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x749c0, 0x749e0, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x749e0, 0x74a00, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74a00, 0x74a20, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74a20, 0x74a40, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74a40, 0x74a60, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x71740, 0x71760, indexCPS2_Rolento, 0x00 },
    { _T("Punch Extra 1"), 0x71760, 0x71780, indexCPS2_Rolento, 0x00 },
    { _T("Punch Extra 2"), 0x71780, 0x717a0, indexCPS2_Rolento, 0x00 },
    { _T("Punch Super Trail Light"), 0x717a0, 0x717c0, indexCPS2_Rolento, 0x00 },
    { _T("Punch Super Trail Dark"), 0x717c0, 0x717e0, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_KICK_PALETTES[] =
{
    { _T("Kick"), 0x717e0, 0x71800, indexCPS2_Rolento, 0x00 },
    { _T("Kick Extra 1"), 0x71800, 0x71820, indexCPS2_Rolento, 0x00 },
    { _T("Kick Extra 2"), 0x71820, 0x71840, indexCPS2_Rolento, 0x00 },
    { _T("Kick Super Trail Light"), 0x71840, 0x71860, indexCPS2_Rolento, 0x00 },
    { _T("Kick Super Trail Dark"), 0x71860, 0x71880, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x71880, 0x718a0, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Extra 1"), 0x718a0, 0x718c0, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Extra 2"), 0x718c0, 0x718e0, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x718e0, 0x71900, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x71900, 0x71920, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71920, 0x71940, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71940, 0x71960, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Extra 2"), 0x71960, 0x71980, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x71980, 0x719a0, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x719a0, 0x719c0, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x719c0, 0x719e0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x719e0, 0x71a00, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71a00, 0x71a20, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x71a20, 0x71a40, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x71a40, 0x71a60, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x71a60, 0x71a80, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x71a80, 0x71aa0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x71aa0, 0x71ac0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x71ac0, 0x71ae0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x71ae0, 0x71b00, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74a60, 0x74a80, indexCPS2_Rolento, 0x00 },
    { _T("Burned 2"), 0x74a80, 0x74aa0, indexCPS2_Rolento, 0x00 },
    { _T("Psycho Power Burned 1"), 0x74aa0, 0x74ac0, indexCPS2_Rolento, 0x00 },
    { _T("Psycho Power Burned 2"), 0x74ac0, 0x74ae0, indexCPS2_Rolento, 0x00 },
    { _T("Punch CC Shadow 1"), 0x74ae0, 0x74b00, indexCPS2_Rolento, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74b00, 0x74b20, indexCPS2_Rolento, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74b20, 0x74b40, indexCPS2_Rolento, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74b40, 0x74b60, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74b60, 0x74b80, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74b80, 0x74ba0, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x74ba0, 0x74bc0, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x74bc0, 0x74be0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x74be0, 0x74c00, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74c00, 0x74c20, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74c20, 0x74c40, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74c40, 0x74c60, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x71b00, 0x71b20, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 1"), 0x71b20, 0x71b40, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 2"), 0x71b40, 0x71b60, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Super Trail Light"), 0x71b60, 0x71b80, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Super Trail Dark"), 0x71b80, 0x71ba0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71ba0, 0x71bc0, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 1"), 0x71bc0, 0x71be0, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 2"), 0x71be0, 0x71c00, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Super Trail Light"), 0x71c00, 0x71c20, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Super Trail Dark"), 0x71c20, 0x71c40, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x71c40, 0x71c60, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 1"), 0x71c60, 0x71c80, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 2"), 0x71c80, 0x71ca0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x71ca0, 0x71cc0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x71cc0, 0x71ce0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71ce0, 0x71d00, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71d00, 0x71d20, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 2"), 0x71d20, 0x71d40, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x71d40, 0x71d60, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x71d60, 0x71d80, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71d80, 0x71da0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71da0, 0x71dc0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71dc0, 0x71de0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x71de0, 0x71e00, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x71e00, 0x71e20, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x71e20, 0x71e40, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x71e40, 0x71e60, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x71e60, 0x71e80, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x71e80, 0x71ea0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x71ea0, 0x71ec0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74c60, 0x74c80, indexCPS2_Dhalsim, 0x00 },
    { _T("Burned 2"), 0x74c80, 0x74ca0, indexCPS2_Dhalsim, 0x00 },
    { _T("Psycho Power Burned 1"), 0x74ca0, 0x74cc0, indexCPS2_Dhalsim, 0x00 },
    { _T("Psycho Power Burned 2"), 0x74cc0, 0x74ce0, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch CC Shadow 1"), 0x74ce0, 0x74d00, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74d00, 0x74d20, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74d20, 0x74d40, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74d40, 0x74d60, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74d60, 0x74d80, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74d80, 0x74da0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x74da0, 0x74dc0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x74dc0, 0x74de0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x74de0, 0x74e00, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74e00, 0x74e20, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74e20, 0x74e40, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74e40, 0x74e60, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x71ec0, 0x71ee0, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 1"), 0x71ee0, 0x71f00, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 2"), 0x71f00, 0x71f20, indexCPS2_Zangief, 0x00 },
    { _T("Punch Super Trail Light"), 0x71f20, 0x71f40, indexCPS2_Zangief, 0x00 },
    { _T("Punch Super Trail Dark"), 0x71f40, 0x71f60, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71f60, 0x71f80, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 1"), 0x71f80, 0x71fa0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 2"), 0x71fa0, 0x71fc0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Super Trail Light"), 0x71fc0, 0x71fe0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Super Trail Dark"), 0x71fe0, 0x72000, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x72000, 0x72020, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 1"), 0x72020, 0x72040, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 2"), 0x72040, 0x72060, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x72060, 0x72080, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x72080, 0x720a0, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x720a0, 0x720c0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 1"), 0x720c0, 0x720e0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 2"), 0x720e0, 0x72100, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x72100, 0x72120, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x72120, 0x72140, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x72140, 0x72160, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x72160, 0x72180, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72180, 0x721a0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x721a0, 0x721c0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x721c0, 0x721e0, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x721e0, 0x72200, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x72200, 0x72220, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x72220, 0x72240, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x72240, 0x72260, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x72260, 0x72280, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x74e60, 0x74e80, indexCPS2_Zangief, 0x00 },
    { _T("Burned 2"), 0x74e80, 0x74ea0, indexCPS2_Zangief, 0x00 },
    { _T("Psycho Power Burned 1"), 0x74ea0, 0x74ec0, indexCPS2_Zangief, 0x00 },
    { _T("Psycho Power Burned 2"), 0x74ec0, 0x74ee0, indexCPS2_Zangief, 0x00 },
    { _T("Punch CC Shadow 1"), 0x74ee0, 0x74f00, indexCPS2_Zangief, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74f00, 0x74f20, indexCPS2_Zangief, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74f20, 0x74f40, indexCPS2_Zangief, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74f40, 0x74f60, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74f60, 0x74f80, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74f80, 0x74fa0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x74fa0, 0x74fc0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x74fc0, 0x74fe0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x74fe0, 0x75000, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x75000, 0x75020, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x75020, 0x75040, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x75040, 0x75060, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x72280, 0x722a0, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 1"), 0x722a0, 0x722c0, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 2"), 0x722c0, 0x722e0, indexCPS2_Gen, 0x00 },
    { _T("Punch Super Trail Light"), 0x722e0, 0x72300, indexCPS2_Gen, 0x00 },
    { _T("Punch Super Trail Dark"), 0x72300, 0x72320, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x72320, 0x72340, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 1"), 0x72340, 0x72360, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 2"), 0x72360, 0x72380, indexCPS2_Gen, 0x00 },
    { _T("Kick Super Trail Light"), 0x72380, 0x723a0, indexCPS2_Gen, 0x00 },
    { _T("Kick Super Trail Dark"), 0x723a0, 0x723c0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x723c0, 0x723e0, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 1"), 0x723e0, 0x72400, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 2"), 0x72400, 0x72420, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x72420, 0x72440, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x72440, 0x72460, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x72460, 0x72480, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 1"), 0x72480, 0x724a0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 2"), 0x724a0, 0x724c0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x724c0, 0x724e0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x724e0, 0x72500, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x72500, 0x72520, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x72520, 0x72540, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72540, 0x72560, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x72560, 0x72580, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x72580, 0x725a0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x725a0, 0x725c0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x725c0, 0x725e0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x725e0, 0x72600, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x72600, 0x72620, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x72620, 0x72640, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x75060, 0x75080, indexCPS2_Gen, 0x00 },
    { _T("Burned 2"), 0x75080, 0x750a0, indexCPS2_Gen, 0x00 },
    { _T("Psycho Power Burned 1"), 0x750a0, 0x750c0, indexCPS2_Gen, 0x00 },
    { _T("Psycho Power Burned 2"), 0x750c0, 0x750e0, indexCPS2_Gen, 0x00 },
    { _T("Punch CC Shadow 1"), 0x750e0, 0x75100, indexCPS2_Gen, 0x00 },
    { _T("Punch CC Shadow 2"), 0x75100, 0x75120, indexCPS2_Gen, 0x00 },
    { _T("Kick CC Shadow 1"), 0x75120, 0x75140, indexCPS2_Gen, 0x00 },
    { _T("Kick CC Shadow 2"), 0x75140, 0x75160, indexCPS2_Gen, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x75160, 0x75180, indexCPS2_Gen, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x75180, 0x751a0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x751a0, 0x751c0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x751c0, 0x751e0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x751e0, 0x75200, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x75200, 0x75220, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x75220, 0x75240, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x75240, 0x75260, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x72640, 0x72660, indexCPS2_ChunLi, 0x00, &pairNext },
    { _T("Punch Keiokuken (shades)"), 0x72660, 0x72680, indexCPS2_ChunLi, 0x01 },
    { _T("Punch Extra 2"), 0x72680, 0x726a0, indexCPS2_ChunLi, 0x02 },
    { _T("Punch Super Trail Light"), 0x726a0, 0x726c0, indexCPS2_ChunLi, 0x00 },
    { _T("Punch Super Trail Dark"), 0x726c0, 0x726e0, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_KICK_PALETTES[] =
{
    { _T("Kick"), 0x726e0, 0x72700, indexCPS2_ChunLi, 0x00 , &pairNext},
    { _T("Kick Keiokuken (shades)"), 0x72700, 0x72720, indexCPS2_ChunLi, 0x01 },
    { _T("Kick Extra 2"), 0x72720, 0x72740, indexCPS2_ChunLi, 0x02 },
    { _T("Kick Super Trail Light"), 0x72740, 0x72760, indexCPS2_ChunLi, 0x00 },
    { _T("Kick Super Trail Dark"), 0x72760, 0x72780, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x72780, 0x727a0, indexCPS2_ChunLi, 0x00, &pairNext },
    { _T("2 Punches Keiokuken (shades)"), 0x727a0, 0x727c0, indexCPS2_ChunLi, 0x01 },
    { _T("2 Punches Extra 2"), 0x727c0, 0x727e0, indexCPS2_ChunLi, 0x02 },
    { _T("2 Punches Super Trail Light"), 0x727e0, 0x72800, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x72800, 0x72820, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x72820, 0x72840, indexCPS2_ChunLi, 0x00, &pairNext },
    { _T("2 Kicks Keiokuken (shades)"), 0x72840, 0x72860, indexCPS2_ChunLi, 0x01 },
    { _T("2 Kicks Extra 2"), 0x72860, 0x72880, indexCPS2_ChunLi, 0x02 },
    { _T("2 Kicks Super Trail Light"), 0x72880, 0x728a0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x728a0, 0x728c0, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x728c0, 0x728e0, indexCPS2_ChunLi, 0x00, &pairNext },
    { _T("Auto Guard Punch Keiokuken (shades)"), 0x728e0, 0x72900, indexCPS2_ChunLi, 0x01 },
    { _T("Auto Guard Punch Extra 2"), 0x72900, 0x72920, indexCPS2_ChunLi, 0x02 },
    { _T("Auto Guard Punch Super Trail Light"), 0x72920, 0x72940, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x72940, 0x72960, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x72960, 0x72980, indexCPS2_ChunLi, 0x00, &pairNext },
    { _T("Auto Guard Kick Keiokuken (shades)"), 0x72980, 0x729a0, indexCPS2_ChunLi, 0x01 },
    { _T("Auto Guard Kick Extra 2"), 0x729a0, 0x729c0, indexCPS2_ChunLi, 0x02 },
    { _T("Auto Guard Kick Super Trail Light"), 0x729c0, 0x729e0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x729e0, 0x72a00, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x75260, 0x75280, indexCPS2_ChunLi, 0x00 },
    { _T("Burned 2"), 0x75280, 0x752a0, indexCPS2_ChunLi, 0x00 },
    { _T("Psycho Power Burned 1"), 0x752a0, 0x752c0, indexCPS2_ChunLi, 0x00 },
    { _T("Psycho Power Burned 2"), 0x752c0, 0x752e0, indexCPS2_ChunLi, 0x00 },
    { _T("Punch CC Shadow 1"), 0x752e0, 0x75300, indexCPS2_ChunLi, 0x00 },
    { _T("Punch CC Shadow 2"), 0x75300, 0x75320, indexCPS2_ChunLi, 0x00 },
    { _T("Kick CC Shadow 1"), 0x75320, 0x75340, indexCPS2_ChunLi, 0x00 },
    { _T("Kick CC Shadow 2"), 0x75340, 0x75360, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x75360, 0x75380, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x75380, 0x753a0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x753a0, 0x753c0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x753c0, 0x753e0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x753e0, 0x75400, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x75400, 0x75420, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x75420, 0x75440, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x75440, 0x75460, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x72a00, 0x72a20, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 1"), 0x72a20, 0x72a40, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 2"), 0x72a40, 0x72a60, indexCPS2_Gen, 0x00 },
    { _T("Punch Super Trail Light"), 0x72a60, 0x72a80, indexCPS2_Gen, 0x00 },
    { _T("Punch Super Trail Dark"), 0x72a80, 0x72aa0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x72aa0, 0x72ac0, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 1"), 0x72ac0, 0x72ae0, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 2"), 0x72ae0, 0x72b00, indexCPS2_Gen, 0x00 },
    { _T("Kick Super Trail Light"), 0x72b00, 0x72b20, indexCPS2_Gen, 0x00 },
    { _T("Kick Super Trail Dark"), 0x72b20, 0x72b40, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x72b40, 0x72b60, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 1"), 0x72b60, 0x72b80, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 2"), 0x72b80, 0x72ba0, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x72ba0, 0x72bc0, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x72bc0, 0x72be0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x72be0, 0x72c00, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 1"), 0x72c00, 0x72c20, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 2"), 0x72c20, 0x72c40, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x72c40, 0x72c60, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x72c60, 0x72c80, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x72c80, 0x72ca0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x72ca0, 0x72cc0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72cc0, 0x72ce0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x72ce0, 0x72d00, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x72d00, 0x72d20, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x72d20, 0x72d40, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x72d40, 0x72d60, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x72d60, 0x72d80, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x72d80, 0x72da0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x72da0, 0x72dc0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x75460, 0x75480, indexCPS2_Gen, 0x00 },
    { _T("Burned 2"), 0x75480, 0x754a0, indexCPS2_Gen, 0x00 },
    { _T("Psycho Power Burned 1"), 0x754a0, 0x754c0, indexCPS2_Gen, 0x00 },
    { _T("Psycho Power Burned 2"), 0x754c0, 0x754e0, indexCPS2_Gen, 0x00 },
    { _T("Punch CC Shadow 1"), 0x754e0, 0x75500, indexCPS2_Gen, 0x00 },
    { _T("Punch CC Shadow 2"), 0x75500, 0x75520, indexCPS2_Gen, 0x00 },
    { _T("Kick CC Shadow 1"), 0x75520, 0x75540, indexCPS2_Gen, 0x00 },
    { _T("Kick CC Shadow 2"), 0x75540, 0x75560, indexCPS2_Gen, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x75560, 0x75580, indexCPS2_Gen, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x75580, 0x755a0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x755a0, 0x755c0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x755c0, 0x755e0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x755e0, 0x75600, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x75600, 0x75620, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x75620, 0x75640, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x75640, 0x75660, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x73180, 0x731a0, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 1"), 0x731a0, 0x731c0, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 2"), 0x731c0, 0x731e0, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 3"), 0x731e0, 0x73200, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 4"), 0x73200, 0x73220, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_KICK_PALETTES[] =
{
    { _T("Kick"), 0x73220, 0x73240, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 1"), 0x73240, 0x73260, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 2"), 0x73260, 0x73280, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 3"), 0x73280, 0x732a0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 4"), 0x732a0, 0x732c0, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x732c0, 0x732e0, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 1"), 0x732e0, 0x73300, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 2"), 0x73300, 0x73320, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 3"), 0x73320, 0x73340, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 4"), 0x73340, 0x73360, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x73360, 0x73380, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 1"), 0x73380, 0x733a0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 2"), 0x733a0, 0x733c0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 3"), 0x733c0, 0x733e0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 4"), 0x733e0, 0x73400, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x73400, 0x73420, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x73420, 0x73440, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x73440, 0x73460, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x73460, 0x73480, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x73480, 0x734a0, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x734a0, 0x734c0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x734c0, 0x734e0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x734e0, 0x73500, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x73500, 0x73520, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x73520, 0x73540, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x75860, 0x75880, indexCPS2_Zangief, 0x00 },
    { _T("Burned 2"), 0x75880, 0x758a0, indexCPS2_Zangief, 0x00 },
    { _T("Psycho Power Burned 1"), 0x758a0, 0x758c0, indexCPS2_Zangief, 0x00 },
    { _T("Psycho Power Burned 2"), 0x758c0, 0x758e0, indexCPS2_Zangief, 0x00 },
    { _T("Punch CC Shadow 1"), 0x758e0, 0x75900, indexCPS2_Zangief, 0x00 },
    { _T("Punch CC Shadow 2"), 0x75900, 0x75920, indexCPS2_Zangief, 0x00 },
    { _T("Kick CC Shadow 1"), 0x75920, 0x75940, indexCPS2_Zangief, 0x00 },
    { _T("Kick CC Shadow 2"), 0x75940, 0x75960, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x75960, 0x75980, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x75980, 0x759a0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x759a0, 0x759c0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x759c0, 0x759e0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x759e0, 0x75a00, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x75a00, 0x75a20, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x75a20, 0x75a40, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x75a40, 0x75a60, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x73540, 0x73560, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 1"), 0x73560, 0x73580, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 2"), 0x73580, 0x735a0, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 3"), 0x735a0, 0x735c0, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 4"), 0x735c0, 0x735e0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_KICK_PALETTES[] =
{
    { _T("Kick"), 0x735e0, 0x73600, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 1"), 0x73600, 0x73620, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 2"), 0x73620, 0x73640, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 3"), 0x73640, 0x73660, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 4"), 0x73660, 0x73680, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x73680, 0x736a0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 1"), 0x736a0, 0x736c0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 2"), 0x736c0, 0x736e0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 3"), 0x736e0, 0x73700, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 4"), 0x73700, 0x73720, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x73720, 0x73740, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 1"), 0x73740, 0x73760, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 2"), 0x73760, 0x73780, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 3"), 0x73780, 0x737a0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 4"), 0x737a0, 0x737c0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x737c0, 0x737e0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x737e0, 0x73800, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x73800, 0x73820, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x73820, 0x73840, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x73840, 0x73860, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x73860, 0x73880, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x73880, 0x738a0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x738a0, 0x738c0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x738c0, 0x738e0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x738e0, 0x73900, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x75a60, 0x75a80, indexCPS2_Dhalsim, 0x00 },
    { _T("Burned 2"),                       0x75a80, 0x75aa0, indexCPS2_Dhalsim, 0x00 },
    { _T("Psycho Power Burned 1"),          0x75aa0, 0x75ac0, indexCPS2_Dhalsim, 0x00 },
    { _T("Psycho Power Burned 2"),          0x75ac0, 0x75ae0, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch CC Shadow 1"),              0x75ae0, 0x75b00, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch CC Shadow 2"),              0x75b00, 0x75b20, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick CC Shadow 1"),               0x75b20, 0x75b40, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick CC Shadow 2"),               0x75b40, 0x75b60, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x75b60, 0x75b80, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x75b80, 0x75ba0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x75ba0, 0x75bc0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x75bc0, 0x75be0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x75be0, 0x75c00, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x75c00, 0x75c20, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x75c20, 0x75c40, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x75c40, 0x75c60, indexCPS2_Dhalsim, 0x00 },
};

const sDescTreeNode SFA2_A_RYU_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_RYU_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_KICK_PALETTES, ARRAYSIZE(SFA2_A_RYU_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_RYU_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_RYU_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_RYU_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_KEN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_KEN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_KICK_PALETTES, ARRAYSIZE(SFA2_A_KEN_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_KEN_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_KEN_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_KEN_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_AKUMA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_KICK_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_CHARLIE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_KICK_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_CHUNLI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_KICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_ADON_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ADON_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_KICK_PALETTES, ARRAYSIZE(SFA2_A_ADON_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ADON_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ADON_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ADON_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_SODOM_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_SODOM_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_KICK_PALETTES, ARRAYSIZE(SFA2_A_SODOM_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SODOM_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_GUY_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GUY_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_KICK_PALETTES, ARRAYSIZE(SFA2_A_GUY_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GUY_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GUY_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GUY_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_BIRDIE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_KICK_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_ROSE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROSE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_KICK_PALETTES, ARRAYSIZE(SFA2_A_ROSE_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROSE_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_MBISON_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_MBISON_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_KICK_PALETTES, ARRAYSIZE(SFA2_A_MBISON_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_MBISON_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_SAGAT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_KICK_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_DAN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_DAN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_KICK_PALETTES, ARRAYSIZE(SFA2_A_DAN_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_DAN_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_DAN_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DAN_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_SAKURA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_KICK_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_ROLENTO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_KICK_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_DHALSIM_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_KICK_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_ZANGIEF_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_KICK_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_GEN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GEN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_KICK_PALETTES, ARRAYSIZE(SFA2_A_GEN_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GEN_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GEN_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GEN_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_CHUNLIORIGINAL_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_KICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_GENCRANESTANCE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_KICK_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_WWDHALSIM_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_WWZANGIEF_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_STATUS_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_KEN_PALETTES[] =
{
    { L"Front Guests", 0x75AA0, 0x75BC0 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_KEN_PALETTES[] =
{
    { L"Tables and Decorations",    0x6F40, 0x7340 },
    { L"Guests and Some Decor",     0x11740, 0x11A80 },
    { L"Candles",                   0x29D20, 0x29DE0 },
    { L"Stage Preview",             0x23E20, 0x24180 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_KEN_PALETTES[] =
{
    { L"Front Guests", 0x75D20 + 0x180, 0x75E40 + 0x180 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_KEN_PALETTES[] =
{
    { L"Tables and Decorations",    0x69C0, 0x6DC0 },
    { L"Guests and Some Decor",     0x10DC0, 0x11100 },
    { L"Candles",                   0x29D20, 0x29DE0 },
    { L"Stage Preview",             0x23E20, 0x24180 }, 
};

const sGame_PaletteDataset SFA2_A_STAGES07_RYU_PALETTES[] =
{
    { L"Middle Mtns",   0x7C1C0 + 0x180, 0x7C220 + 0x180},
    { L"Shadow",        0x75C40 + 0x180, 0x75C60 + 0x180 },
    { L"Castle",        0x75C60 + 0x180, 0x75C80 + 0x180 },
    { L"Clouds",        0x75CC0 + 0x180, 0x75CE0 + 0x180 },
    { L"Bird",          0x75CE0 + 0x180, 0x75D00 + 0x180 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_RYU_PALETTES[] =
{
    { L"Foreground",      0x65C0, 0x6740 },
    { L"Far Background",  0x109C0, 0x10A40 },
    { L"Preview",         0x23A20, 0x23B40 },
};

const sDescTreeNode SFA2_A_BONUS07_REV1_COLLECTION[] =
{
    { _T("Ken Stage (ROM 07 parts)"), DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_KEN_PALETTES, ARRAYSIZE(SFA2_A_STAGES07_REV1_KEN_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS08_REV1_COLLECTION[] =
{
    { _T("Ken Stage (ROM 08 parts)"),                   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_KEN_PALETTES, ARRAYSIZE(SFA2_A_STAGES08_REV1_KEN_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS07_REV2_COLLECTION[] =
{
    { _T("Ken Stage (ROM 07 parts)"), DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_KEN_PALETTES, ARRAYSIZE(SFA2_A_STAGES07_REV2_KEN_PALETTES) },
    { _T("Ryu Stage - Japan (Winter)(ROM 07 Parts)"), DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_RYU_PALETTES, ARRAYSIZE(SFA2_A_STAGES07_RYU_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS08_REV2_COLLECTION[] =
{
    { _T("Ken Stage (ROM 08 parts)"),                   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_KEN_PALETTES, ARRAYSIZE(SFA2_A_STAGES08_REV2_KEN_PALETTES) },
    { _T("Ryu Stage - Japan (Winter)(ROM 08 Parts)"),   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_RYU_PALETTES, ARRAYSIZE(SFA2_A_STAGES08_RYU_PALETTES) },
};

#pragma region Extra palettes - auto-generated 

const sGame_PaletteDataset SFA2_A_AKUMA_PUNCH_MOVE_PALETTES[] =
{
    { _T("Extra 1"), 0x1adc0, 0x1ade0, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x1ade0, 0x1ae00, indexCPS2_Akuma, 1 },
    { _T("Shoryuken (Flame)"), 0x1ae00, 0x1ae20,  },
    { _T("Ashura Senku 1"), 0x1ae20, 0x1ae40, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1ae40, 0x1ae60, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_MOVE_PALETTES[] =
{
    { _T("Extra 1"), 0x1ae60, 0x1ae80, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x1ae80, 0x1aea0, indexCPS2_Akuma, 1 },
    { _T("Shoryuken (Flame)"), 0x1aea0, 0x1aec0,  },
    { _T("Ashura Senku 1"), 0x1aec0, 0x1aee0, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1aee0, 0x1af00, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_MOVE_PALETTES[] =
{
    { _T("Extra 1"), 0x1af00, 0x1af20, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x1af20, 0x1af40, indexCPS2_Akuma, 1 },
    { _T("Shoryuken (Flame)"), 0x1af40, 0x1af60,  },
    { _T("Ashura Senku 1"), 0x1af60, 0x1af80, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1af80, 0x1afa0, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_MOVE_PALETTES[] =
{
    { _T("Extra 1"), 0x1afa0, 0x1afc0, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x1afc0, 0x1afe0, indexCPS2_Akuma, 1 },
    { _T("Shoryuken (Flame)"), 0x1afe0, 0x1b000,  },
    { _T("Ashura Senku 1"), 0x1b000, 0x1b020, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1b020, 0x1b040, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { _T("Extra 1"), 0x1b040, 0x1b060, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x1b060, 0x1b080, indexCPS2_Akuma, 1 },
    { _T("Shoryuken (Flame)"), 0x1b080, 0x1b0a0,  },
    { _T("Ashura Senku 1"), 0x1b0a0, 0x1b0c0, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1b0c0, 0x1b0e0, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { _T("Extra 1"), 0x1b0e0, 0x1b100, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x1b100, 0x1b120, indexCPS2_Akuma, 1 },
    { _T("Shoryuken (Flame)"), 0x1b120, 0x1b140,  },
    { _T("Ashura Senku 1"), 0x1b140, 0x1b160, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1b160, 0x1b180, indexCPS2_Akuma, 0x00 },
};

const sDescTreeNode SFA2_A_AKUMA_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_PUNCH_MOVE_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_KICK_MOVE_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2PUNCHES_MOVE_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2KICKS_MOVE_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_PUNCH_MOVE_PALETTES[] =
{
    { _T("Bullrush 1"), 0x1b180, 0x1b1a0, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 2"), 0x1b1a0, 0x1b1c0, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 3"), 0x1b1c0, 0x1b1e0, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_MOVE_PALETTES[] =
{
    { _T("Bullrush 1"), 0x1b1e0, 0x1b200, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 2"), 0x1b200, 0x1b220, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 3"), 0x1b220, 0x1b240, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_MOVE_PALETTES[] =
{
    { _T("Bullrush 1"), 0x1b240, 0x1b260, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 2"), 0x1b260, 0x1b280, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 3"), 0x1b280, 0x1b2a0, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_MOVE_PALETTES[] =
{
    { _T("Bullrush 1"), 0x1b2a0, 0x1b2c0, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 2"), 0x1b2c0, 0x1b2e0, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 3"), 0x1b2e0, 0x1b300, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { _T("Bullrush 1"), 0x1b300, 0x1b320, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 2"), 0x1b320, 0x1b340, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 3"), 0x1b340, 0x1b360, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { _T("Bullrush 1"), 0x1b360, 0x1b380, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 2"), 0x1b380, 0x1b3a0, indexCPS2_Birdie, 0x00 },
    { _T("Bullrush 3"), 0x1b3a0, 0x1b3c0, indexCPS2_Birdie, 0x00 },
};

const sDescTreeNode SFA2_A_BIRDIE_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_PUNCH_MOVE_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_KICK_MOVE_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2PUNCHES_MOVE_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2KICKS_MOVE_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ROSE_PUNCH_MOVE_PALETTES[] =
{
    { _T("Dress winpose"), 0x1b3c0, 0x1b3e0, indexCPS2_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_MOVE_PALETTES[] =
{
    { _T("Dress winpose"), 0x1b3e0, 0x1b400, indexCPS2_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_MOVE_PALETTES[] =
{
    { _T("Dress winpose"), 0x1b400, 0x1b420, indexCPS2_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_MOVE_PALETTES[] =
{
    { _T("Dress winpose"), 0x1b420, 0x1b440, indexCPS2_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { _T("Dress winpose"), 0x1b440, 0x1b460, indexCPS2_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { _T("Dress winpose"), 0x1b460, 0x1b480, indexCPS2_Rose, 0x01 },
};

const sDescTreeNode SFA2_A_ROSE_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_PUNCH_MOVE_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_KICK_MOVE_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2PUNCHES_MOVE_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2KICKS_MOVE_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_MBISON_PUNCH_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b480, 0x1b4a0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 2"), 0x1b4a0, 0x1b4c0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 3"), 0x1b4c0, 0x1b4e0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 4"), 0x1b4e0, 0x1b500, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b500, 0x1b520, indexCPS2_Bison, 0x00 },
    { _T("Teleport 2"), 0x1b520, 0x1b540, indexCPS2_Bison, 0x00 },
    { _T("Teleport 3"), 0x1b540, 0x1b560, indexCPS2_Bison, 0x00 },
    { _T("Teleport 4"), 0x1b560, 0x1b580, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b580, 0x1b5a0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 2"), 0x1b5a0, 0x1b5c0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 3"), 0x1b5c0, 0x1b5e0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 4"), 0x1b5e0, 0x1b600, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b600, 0x1b620, indexCPS2_Bison, 0x00 },
    { _T("Teleport 2"), 0x1b620, 0x1b640, indexCPS2_Bison, 0x00 },
    { _T("Teleport 3"), 0x1b640, 0x1b660, indexCPS2_Bison, 0x00 },
    { _T("Teleport 4"), 0x1b660, 0x1b680, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b680, 0x1b6a0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 2"), 0x1b6a0, 0x1b6c0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 3"), 0x1b6c0, 0x1b6e0, indexCPS2_Bison, 0x00 },
    { _T("Teleport 4"), 0x1b6e0, 0x1b700, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b700, 0x1b720, indexCPS2_Bison, 0x00 },
    { _T("Teleport 2"), 0x1b720, 0x1b740, indexCPS2_Bison, 0x00 },
    { _T("Teleport 3"), 0x1b740, 0x1b760, indexCPS2_Bison, 0x00 },
    { _T("Teleport 4"), 0x1b760, 0x1b780, indexCPS2_Bison, 0x00 },
};

const sDescTreeNode SFA2_A_MBISON_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_PUNCH_MOVE_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_KICK_MOVE_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2PUNCHES_MOVE_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2KICKS_MOVE_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_PUNCH_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b820, 0x1b840, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 2"), 0x1b840, 0x1b860, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 3"), 0x1b860, 0x1b880, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 4"), 0x1b880, 0x1b8a0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 5"), 0x1b8a0, 0x1b8c0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b8c0, 0x1b8e0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 2"), 0x1b8e0, 0x1b900, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 3"), 0x1b900, 0x1b920, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 4"), 0x1b920, 0x1b940, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 5"), 0x1b940, 0x1b960, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1b960, 0x1b980, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 2"), 0x1b980, 0x1b9a0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 3"), 0x1b9a0, 0x1b9c0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 4"), 0x1b9c0, 0x1b9e0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 5"), 0x1b9e0, 0x1ba00, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1ba00, 0x1ba20, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 2"), 0x1ba20, 0x1ba40, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 3"), 0x1ba40, 0x1ba60, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 4"), 0x1ba60, 0x1ba80, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 5"), 0x1ba80, 0x1baa0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1baa0, 0x1bac0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 2"), 0x1bac0, 0x1bae0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 3"), 0x1bae0, 0x1bb00, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 4"), 0x1bb00, 0x1bb20, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 5"), 0x1bb20, 0x1bb40, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { _T("Teleport 1"), 0x1bb40, 0x1bb60, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 2"), 0x1bb60, 0x1bb80, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 3"), 0x1bb80, 0x1bba0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 4"), 0x1bba0, 0x1bbc0, indexCPS2_Dhalsim, 0x00 },
    { _T("Teleport 5"), 0x1bbc0, 0x1bbe0, indexCPS2_Dhalsim, 0x00 },
};

const sDescTreeNode SFA2_A_DHALSIM_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_PUNCH_MOVE_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_KICK_MOVE_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2PUNCHES_MOVE_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2KICKS_MOVE_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_PUNCH_MOVE_PALETTES[] =
{
    { _T("Evil Ryu"), 0x1bc80, 0x1bca0, indexCPS2_Ryu, 0x00 },
    { _T("Hadoken"), 0x1bca0, 0x1bcc0, indexCPS2_Ryu, 1 },
    { _T("Shoryuken"), 0x1bcc0, 0x1bce0,   },
    { _T("Ashura Senku 1"), 0x1bce0, 0x1bd00, indexCPS2_Ryu, 0x00 },
    { _T("Ashura Senku 2"), 0x1bd00, 0x1bd20, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_KICK_MOVE_PALETTES[] =
{
    { _T("Evil Ryu"), 0x1bd20, 0x1bd40, indexCPS2_Ryu, 0x00 },
    { _T("Hadoken"), 0x1bd40, 0x1bd60, indexCPS2_Ryu, 1 },
    { _T("Shoryuken"), 0x1bd60, 0x1bd80,   },
    { _T("Ashura Senku 1"), 0x1bd80, 0x1bda0, indexCPS2_Ryu, 0x00 },
    { _T("Ashura Senku 2"), 0x1bda0, 0x1bdc0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2PUNCHES_MOVE_PALETTES[] =
{
    { _T("Evil Ryu"), 0x1bdc0, 0x1bde0, indexCPS2_Ryu, 0x00 },
    { _T("Hadoken"), 0x1bde0, 0x1be00, indexCPS2_Ryu, 1 },
    { _T("Shoryuken"), 0x1be00, 0x1be20,   },
    { _T("Ashura Senku 1"), 0x1be20, 0x1be40, indexCPS2_Ryu, 0x00 },
    { _T("Ashura Senku 2"), 0x1be40, 0x1be60, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2KICKS_MOVE_PALETTES[] =
{
    { _T("Evil Ryu"), 0x1be60, 0x1be80, indexCPS2_Ryu, 0x00 },
    { _T("Hadoken"), 0x1be80, 0x1bea0, indexCPS2_Ryu, 1 },
    { _T("Shoryuken"), 0x1bea0, 0x1bec0,   },
    { _T("Ashura Senku 1"), 0x1bec0, 0x1bee0, indexCPS2_Ryu, 0x00 },
    { _T("Ashura Senku 2"), 0x1bee0, 0x1bf00, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { _T("Evil Ryu"), 0x1bf00, 0x1bf20, indexCPS2_Ryu, 0x00 },
    { _T("Hadoken"), 0x1bf20, 0x1bf40, indexCPS2_Ryu, 1 },
    { _T("Shoryuken"), 0x1bf40, 0x1bf60,   },
    { _T("Ashura Senku 1"), 0x1bf60, 0x1bf80, indexCPS2_Ryu, 0x00 },
    { _T("Ashura Senku 2"), 0x1bf80, 0x1bfa0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { _T("Evil Ryu"), 0x1bfa0, 0x1bfc0, indexCPS2_Ryu, 0x00 },
    { _T("Hadoken"), 0x1bfc0, 0x1bfe0, indexCPS2_Ryu, 1 },
    { _T("Shoryuken"), 0x1bfe0, 0x1c000,  },
    { _T("Ashura Senku 1"), 0x1c000, 0x1c020, indexCPS2_Ryu, 0x00 },
    { _T("Ashura Senku 2"), 0x1c020, 0x1c040, indexCPS2_Ryu, 0x00 },
};

const sDescTreeNode SFA2_A_EVILRYU_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_PUNCH_MOVE_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_KICK_MOVE_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2PUNCHES_MOVE_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2KICKS_MOVE_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x072720, 0x072740, indexCPS2_Ryu, 0x00 },
    { _T("Punch Hadoken"), 0x072740, 0x072760, indexCPS2_Ryu, 0x01 },
    { _T("Punch Hadoken Fire"), 0x072760, 0x072780, indexCPS2_Ryu, 0x00 },
    { _T("Punch Super Trail Light"), 0x072780, 0x0727a0, indexCPS2_Ryu, 0x00 },
    { _T("Punch Super Trail Dark"), 0x0727a0, 0x0727c0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_KICK_PALETTES[] =
{
    { _T("Kick"), 0x0727c0, 0x0727e0, indexCPS2_Ryu, 0x00 },
    { _T("Kick Hadoken"), 0x0727e0, 0x072800, indexCPS2_Ryu, 0x01 },
    { _T("Kick Hadoken Fire"), 0x072800, 0x072820, indexCPS2_Ryu, 0x00 },
    { _T("Kick Super Trail Light"), 0x072820, 0x072840, indexCPS2_Ryu, 0x00 },
    { _T("Kick Super Trail Dark"), 0x072840, 0x072860, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x072860, 0x072880, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Hadoken"), 0x072880, 0x0728a0, indexCPS2_Ryu, 0x01 },
    { _T("2 Punches Hadoken Fire"), 0x0728a0, 0x0728c0, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x0728c0, 0x0728e0, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x0728e0, 0x072900, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x072900, 0x072920, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Hadoken"), 0x072920, 0x072940, indexCPS2_Ryu, 0x01 },
    { _T("2 Kicks Hadoken Fire"), 0x072940, 0x072960, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x072960, 0x072980, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x072980, 0x0729a0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x0729a0, 0x0729c0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Hadoken"), 0x0729c0, 0x0729e0, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Punch Hadoken Fire"), 0x0729e0, 0x072a00, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x072a00, 0x072a20, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x072a20, 0x072a40, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x072a40, 0x072a60, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Hadoken"), 0x072a60, 0x072a80, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Kick Hadoken Fire"), 0x072a80, 0x072aa0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x072aa0, 0x072ac0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x072ac0, 0x072ae0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Portrait"), 0x1c7c0, 0x1c820, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Portrait"), 0x1cee0, 0x1cf40, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Portrait"), 0x1d600, 0x1d660, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Portrait"), 0x1dd20, 0x1dd80, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Portrait"), 0x1e440, 0x1e4a0, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Ryu Portrait"), 0x1eb60, 0x1ebc0, indexCPS2_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFA2_A_RYU_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_KEN_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Ken Portrait"), 0x1c820, 0x1c880, indexCPS2_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Ken Portrait"), 0x1cf40, 0x1cfa0, indexCPS2_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Ken Portrait"), 0x1d660, 0x1d6c0, indexCPS2_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Ken Portrait"), 0x1dd80, 0x1dde0, indexCPS2_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Ken Portrait"), 0x1e4a0, 0x1e500, indexCPS2_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Ken Portrait"), 0x1ebc0, 0x1ec20, indexCPS2_SFA2Portraits, 0x27 },
};

const sDescTreeNode SFA2_A_KEN_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_AKUMA_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Portrait"), 0x1c880, 0x1c8e0, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Portrait"), 0x1cfa0, 0x1d000, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Portrait"), 0x1d6c0, 0x1d720, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Portrait"), 0x1dde0, 0x1de40, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Portrait"), 0x1e500, 0x1e560, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Akuma Portrait"), 0x1ec20, 0x1ec80, indexCPS2_SFA2Portraits, 0x1e },
};

const sDescTreeNode SFA2_A_AKUMA_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Portrait"), 0x1c8e0, 0x1c940, indexCPS2_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Portrait"), 0x1d000, 0x1d060, indexCPS2_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Portrait"), 0x1d720, 0x1d780, indexCPS2_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Portrait"), 0x1de40, 0x1dea0, indexCPS2_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Portrait"), 0x1e560, 0x1e5c0, indexCPS2_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Charlie Portrait"), 0x1ec80, 0x1ece0, indexCPS2_SFA2Portraits, 0x21 },
};

const sDescTreeNode SFA2_A_CHARLIE_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Portrait"), 0x1c940, 0x1c9a0, indexCPS2_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Portrait"), 0x1d060, 0x1d0c0, indexCPS2_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Portrait"), 0x1d780, 0x1d7e0, indexCPS2_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Portrait"), 0x1dea0, 0x1df00, indexCPS2_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Portrait"), 0x1e5c0, 0x1e620, indexCPS2_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li Portrait"), 0x1ece0, 0x1ed40, indexCPS2_SFA2Portraits, 0x1b },
};

const sDescTreeNode SFA2_A_CHUNLI_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ADON_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Adon Portrait"), 0x1c9a0, 0x1ca00, indexCPS2_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Adon Portrait"), 0x1d0c0, 0x1d120, indexCPS2_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Adon Portrait"), 0x1d7e0, 0x1d840, indexCPS2_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Adon Portrait"), 0x1df00, 0x1df60, indexCPS2_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Adon Portrait"), 0x1e620, 0x1e680, indexCPS2_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Adon Portrait"), 0x1ed40, 0x1eda0, indexCPS2_SFA2Portraits, 0x3d },
};

const sDescTreeNode SFA2_A_ADON_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SODOM_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Portrait"), 0x1ca00, 0x1ca60, indexCPS2_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Portrait"), 0x1d120, 0x1d180, indexCPS2_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Portrait"), 0x1d840, 0x1d8a0, indexCPS2_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Portrait"), 0x1df60, 0x1dfc0, indexCPS2_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Portrait"), 0x1e680, 0x1e6e0, indexCPS2_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Sodom Portrait"), 0x1eda0, 0x1ee00, indexCPS2_SFA2Portraits, 0x3e },
};

const sDescTreeNode SFA2_A_SODOM_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_GUY_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Guy Portrait"), 0x1ca60, 0x1cac0, indexCPS2_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Guy Portrait"), 0x1d180, 0x1d1e0, indexCPS2_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Guy Portrait"), 0x1d8a0, 0x1d900, indexCPS2_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Guy Portrait"), 0x1dfc0, 0x1e020, indexCPS2_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Guy Portrait"), 0x1e6e0, 0x1e740, indexCPS2_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Guy Portrait"), 0x1ee00, 0x1ee60, indexCPS2_SFA2Portraits, 0x3f },
};

const sDescTreeNode SFA2_A_GUY_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Portrait"), 0x1cac0, 0x1cb20, indexCPS2_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Portrait"), 0x1d1e0, 0x1d240, indexCPS2_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Portrait"), 0x1d900, 0x1d960, indexCPS2_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Portrait"), 0x1e020, 0x1e080, indexCPS2_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Portrait"), 0x1e740, 0x1e7a0, indexCPS2_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Birdie Portrait"), 0x1ee60, 0x1eec0, indexCPS2_SFA2Portraits, 0x40 },
};

const sDescTreeNode SFA2_A_BIRDIE_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ROSE_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Rose Portrait"), 0x1cb20, 0x1cb80, indexCPS2_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Rose Portrait"), 0x1d240, 0x1d2a0, indexCPS2_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Rose Portrait"), 0x1d960, 0x1d9c0, indexCPS2_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Rose Portrait"), 0x1e080, 0x1e0e0, indexCPS2_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Rose Portrait"), 0x1e7a0, 0x1e800, indexCPS2_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Rose Portrait"), 0x1eec0, 0x1ef20, indexCPS2_SFA2Portraits, 0x41 },
};

const sDescTreeNode SFA2_A_ROSE_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_MBISON_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Portrait"), 0x1cb80, 0x1cbe0, indexCPS2_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Portrait"), 0x1d2a0, 0x1d300, indexCPS2_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Portrait"), 0x1d9c0, 0x1da20, indexCPS2_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Portrait"), 0x1e0e0, 0x1e140, indexCPS2_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Portrait"), 0x1e800, 0x1e860, indexCPS2_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison Portrait"), 0x1ef20, 0x1ef80, indexCPS2_SFA2Portraits, 0x26 },
};

const sDescTreeNode SFA2_A_MBISON_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SAGAT_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Portrait"), 0x1cbe0, 0x1cc40, indexCPS2_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Portrait"), 0x1d300, 0x1d360, indexCPS2_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Portrait"), 0x1da20, 0x1da80, indexCPS2_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Portrait"), 0x1e140, 0x1e1a0, indexCPS2_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Portrait"), 0x1e860, 0x1e8c0, indexCPS2_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Sagat Portrait"), 0x1ef80, 0x1efe0, indexCPS2_SFA2Portraits, 0x42 },
};

const sDescTreeNode SFA2_A_SAGAT_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_DAN_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dan Portrait"), 0x1cc40, 0x1cca0, indexCPS2_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Dan Portrait"), 0x1d360, 0x1d3c0, indexCPS2_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Dan Portrait"), 0x1da80, 0x1dae0, indexCPS2_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Dan Portrait"), 0x1e1a0, 0x1e200, indexCPS2_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dan Portrait"), 0x1e8c0, 0x1e920, indexCPS2_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Dan Portrait"), 0x1efe0, 0x1f040, indexCPS2_SFA2Portraits, 0x23 },
};

const sDescTreeNode SFA2_A_DAN_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SAKURA_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sakura Portrait"), 0x1cca0, 0x1cd00, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Sakura Portrait"), 0x1d3c0, 0x1d420, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Sakura Portrait"), 0x1dae0, 0x1db40, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Sakura Portrait"), 0x1e200, 0x1e260, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sakura Portrait"), 0x1e920, 0x1e980, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Sakura Portrait"), 0x1f040, 0x1f0a0, indexCPS2_SFA2Portraits, 0x22 },
};

const sDescTreeNode SFA2_A_SAKURA_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Rolento Portrait"), 0x1cd00, 0x1cd60, indexCPS2_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Rolento Portrait"), 0x1d420, 0x1d480, indexCPS2_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Rolento Portrait"), 0x1db40, 0x1dba0, indexCPS2_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Rolento Portrait"), 0x1e260, 0x1e2c0, indexCPS2_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Rolento Portrait"), 0x1e980, 0x1e9e0, indexCPS2_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Rolento Portrait"), 0x1f0a0, 0x1f100, indexCPS2_SFA2Portraits, 0x43 },
};

const sDescTreeNode SFA2_A_ROLENTO_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim Portrait"), 0x1cd60, 0x1cdc0, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim Portrait"), 0x1d480, 0x1d4e0, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim Portrait"), 0x1dba0, 0x1dc00, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim Portrait"), 0x1e2c0, 0x1e320, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim Portrait"), 0x1e9e0, 0x1ea40, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim Portrait"), 0x1f100, 0x1f160, indexCPS2_SFA2Portraits, 0x25 },
};

const sDescTreeNode SFA2_A_DHALSIM_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Zangief Portrait"), 0x1cdc0, 0x1ce20, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Zangief Portrait"), 0x1d4e0, 0x1d540, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Zangief Portrait"), 0x1dc00, 0x1dc60, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Zangief Portrait"), 0x1e320, 0x1e380, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Zangief Portrait"), 0x1ea40, 0x1eaa0, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Zangief Portrait"), 0x1f160, 0x1f1c0, indexCPS2_SFA2Portraits, 0x01 },
};

const sDescTreeNode SFA2_A_ZANGIEF_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_GEN_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Gen Portrait"), 0x1ce20, 0x1ce80, indexCPS2_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Gen Portrait"), 0x1d540, 0x1d5a0, indexCPS2_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Gen Portrait"), 0x1dc60, 0x1dcc0, indexCPS2_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Gen Portrait"), 0x1e380, 0x1e3e0, indexCPS2_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Gen Portrait"), 0x1eaa0, 0x1eb00, indexCPS2_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Gen Portrait"), 0x1f1c0, 0x1f220, indexCPS2_SFA2Portraits, 0x44 },
};

const sDescTreeNode SFA2_A_GEN_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (Original) Portrait"), 0x1ce80, 0x1cee0, indexCPS2_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (Original) Portrait"), 0x1d5a0, 0x1d600, indexCPS2_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (Original) Portrait"), 0x1dcc0, 0x1dd20, indexCPS2_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (Original) Portrait"), 0x1e3e0, 0x1e440, indexCPS2_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (Original) Portrait"), 0x1eb00, 0x1eb60, indexCPS2_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (Original) Portrait"), 0x1f220, 0x1f280, indexCPS2_SFA2Portraits, 0x1c },
};

const sDescTreeNode SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

#pragma endregion

#pragma region Street Fighter Zero 2 Alpha characters

const sGame_PaletteDataset SFA2_A_EVILRYU_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x65B44, 0x65B64, indexCPS2_Ryu, 0x00 },
    { _T("Punch Hadoken"), 0x65B64, 0x65B84, indexCPS2_Ryu, 0x01 },
    { _T("Punch Extra 2"), 0x65B84, 0x65Ba4 },
    { _T("Punch Super Trail Light"), 0x65Ba4, 0x65Bc4, indexCPS2_Ryu, 0x00 },
    { _T("Punch Super Trail Dark"), 0x65Bc4, 0x65Be4, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_KICK_PALETTES[] =
{
    { _T("Kick"), 0x65Be4, 0x65c04, indexCPS2_Ryu, 0x00 },
    { _T("Kick Hadoken"), 0x65c04, 0x65c24, indexCPS2_Ryu, 0x01 },
    { _T("Kick Extra 2"), 0x65c24, 0x65c44 },
    { _T("Kick Super Trail Light"), 0x65c44, 0x65c64, indexCPS2_Ryu, 0x00 },
    { _T("Kick Super Trail Dark"), 0x65c64, 0x65c84, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x65c84, 0x65ca4, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Hadoken"), 0x65ca4, 0x65cc4, indexCPS2_Ryu, 0x01 },
    { _T("2 Punches Extra 2"), 0x65cc4, 0x65ce4 },
    { _T("2 Punches Super Trail Light"), 0x65ce4, 0x65d04, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x65d04, 0x65d24, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x65d24, 0x65d44, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Hadoken"), 0x65d44, 0x65d64, indexCPS2_Ryu, 0x01 },
    { _T("2 Kicks Extra 2"), 0x65d64, 0x65d84 },
    { _T("2 Kicks Super Trail Light"), 0x65d84, 0x65da4, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x65da4, 0x65dc4, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x65dc4, 0x65de4, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Hadoken"), 0x65de4, 0x65e04, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Punch Extra 2"), 0x65e04, 0x65e24 },
    { _T("Auto Guard Punch Super Trail Light"), 0x65e24, 0x65e44, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x65e44, 0x65e64, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x65e64, 0x65e84, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Hadoken"), 0x65e84, 0x65ea4, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Kick Extra 2"), 0x65ea4, 0x65ec4 },
    { _T("Auto Guard Kick Super Trail Light"), 0x65ec4, 0x65ee4, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x65ee4, 0x65f04, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x75c60, 0x75c80, indexCPS2_Ryu, 0x00 },
    { _T("Burned 2"),                       0x75c80, 0x75ca0, indexCPS2_Ryu, 0x00 },
    { _T("Psycho Power Burned 1"),          0x75ca0, 0x75cc0, indexCPS2_Ryu, 0x00 },
    { _T("Psycho Power Burned 2"),          0x75cc0, 0x75ce0, indexCPS2_Ryu, 0x00 },
    { _T("Punch CC Shadow 1"),              0x75ce0, 0x75d00, indexCPS2_Ryu, 0x00 },
    { _T("Punch CC Shadow 2"),              0x75d00, 0x75d20, indexCPS2_Ryu, 0x00 },
    { _T("Kick CC Shadow 1"),               0x75d20, 0x75d40, indexCPS2_Ryu, 0x00 },
    { _T("Kick CC Shadow 2"),               0x75d40, 0x75d60, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x75d60, 0x75d80, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x75d80, 0x75da0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x75da0, 0x75dc0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x75dc0, 0x75de0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x75de0, 0x75e00, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x75e00, 0x75e20, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x75e20, 0x75e40, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x75e40, 0x75e60, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x66684, 0x666a4, indexCPS2_Ken, 0x00 },
    { _T("Punch Extra 1"), 0x666a4, 0x666c4, indexCPS2_Ken, 0x00 },
    { _T("Punch Extra 2"), 0x666c4, 0x666e4 },
    { _T("Punch Super Trail Light"), 0x666e4, 0x66704, indexCPS2_Ken, 0x00 },
    { _T("Punch Super Trail Dark"), 0x66704, 0x66724, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x66724, 0x66744, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 1"), 0x66744, 0x66764, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 2"), 0x66764, 0x66784 },
    { _T("Kick Super Trail Light"), 0x66784, 0x667a4, indexCPS2_Ken, 0x00 },
    { _T("Kick Super Trail Dark"), 0x667a4, 0x667c4, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x667c4, 0x667e4, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 1"), 0x667e4, 0x66804, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 2"), 0x66804, 0x66824 },
    { _T("2 Punches Super Trail Light"), 0x66824, 0x66844, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x66844, 0x66864, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x66864, 0x66884, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 1"), 0x66884, 0x668a4, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 2"), 0x668a4, 0x668c4 },
    { _T("2 Kicks Super Trail Light"), 0x668c4, 0x668e4, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x668e4, 0x66904, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x66904, 0x66924, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x66924, 0x66944, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x66944, 0x66964 },
    { _T("Auto Guard Punch Super Trail Light"), 0x66964, 0x66984, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x66984, 0x669a4, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x669a4, 0x669c4, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x669c4, 0x669e4, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x669e4, 0x66a04 },
    { _T("Auto Guard Kick Super Trail Light"), 0x66a04, 0x66a24, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x66a24, 0x66a44, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x76260, 0x76280, indexCPS2_Ken, 0x00 },
    { _T("Burned 2"),                       0x76280, 0x762a0, indexCPS2_Ken, 0x00 },
    { _T("Psycho Power Burned 1"),          0x762a0, 0x762c0, indexCPS2_Ken, 0x00 },
    { _T("Psycho Power Burned 2"),          0x762c0, 0x762e0, indexCPS2_Ken, 0x00 },
    { _T("Punch CC Shadow 1"),              0x762e0, 0x76300, indexCPS2_Ken, 0x00 },
    { _T("Punch CC Shadow 2"),              0x76300, 0x76320, indexCPS2_Ken, 0x00 },
    { _T("Kick CC Shadow 1"),               0x76320, 0x76340, indexCPS2_Ken, 0x00 },
    { _T("Kick CC Shadow 2"),               0x76340, 0x76360, indexCPS2_Ken, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x76360, 0x76380, indexCPS2_Ken, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x76380, 0x763a0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x763a0, 0x763c0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x763c0, 0x763e0, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x763e0, 0x76400, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x76400, 0x76420, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x76420, 0x76440, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x76440, 0x76460, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x66a44, 0x66a64, indexCPS2_Ryu, 0x00 },
    { _T("Punch Extra 1"), 0x66a64, 0x66a84, indexCPS2_Ryu, 0x01 },
    { _T("Punch Extra 2"), 0x66a84, 0x66aa4 },
    { _T("Punch Super Trail 1"), 0x66aa4, 0x66ac4, indexCPS2_Ryu, 0x00 },
    { _T("Punch Super Trail 2"), 0x66ac4, 0x66ae4, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_KICK_PALETTES[] =
{
    { _T("Kick"), 0x66ae4, 0x66b04, indexCPS2_Ryu, 0x00 },
    { _T("Kick Extra 1"), 0x66b04, 0x66b24, indexCPS2_Ryu, 0x01 },
    { _T("Kick Extra 2"), 0x66b24, 0x66b44 },
    { _T("Kick Super Trail 1"), 0x66b44, 0x66b64, indexCPS2_Ryu, 0x00 },
    { _T("Kick Super Trail 2"), 0x66b64, 0x66b84, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x66b84, 0x66ba4, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Extra 1"), 0x66ba4, 0x66bc4, indexCPS2_Ryu, 0x01 },
    { _T("2 Punches Extra 2"), 0x66bc4, 0x66be4 },
    { _T("2 Punches Super Trail 1"), 0x66be4, 0x66c04, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Super Trail 2"), 0x66c04, 0x66c24, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x66c24, 0x66c44, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Extra 1"), 0x66c44, 0x66c64, indexCPS2_Ryu, 0x01 },
    { _T("2 Kicks Extra 2"), 0x66c64, 0x66c84 },
    { _T("2 Kicks Super Trail 1"), 0x66c84, 0x66ca4, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Super Trail 2"), 0x66ca4, 0x66cc4, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x66cc4, 0x66ce4, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x66ce4, 0x66d04, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Punch Extra 2"), 0x66d04, 0x66d24 },
    { _T("Auto Guard Punch Super Trail 1"), 0x66d24, 0x66d44, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Super Trail 2"), 0x66d44, 0x66d64, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x66d64, 0x66d84, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x66d84, 0x66da4, indexCPS2_Ryu, 0x01 },
    { _T("Auto Guard Kick Extra 2"), 0x66da4, 0x66dc4 },
    { _T("Auto Guard Kick Super Trail 1"), 0x66dc4, 0x66de4, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Super Trail 2"), 0x66de4, 0x66e04, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x76460, 0x76480, indexCPS2_Ryu, 0x00 },
    { _T("Burned 2"),                       0x76480, 0x764a0, indexCPS2_Ryu, 0x00 },
    { _T("Psycho Power Burned 1"),          0x764a0, 0x764c0, indexCPS2_Ryu, 0x00 },
    { _T("Psycho Power Burned 2"),          0x764c0, 0x764e0, indexCPS2_Ryu, 0x00 },
    { _T("Punch CC Shadow 1"),              0x764e0, 0x76500, indexCPS2_Ryu, 0x00 },
    { _T("Punch CC Shadow 2"),              0x76500, 0x76520, indexCPS2_Ryu, 0x00 },
    { _T("Kick CC Shadow 1"),               0x76520, 0x76540, indexCPS2_Ryu, 0x00 },
    { _T("Kick CC Shadow 2"),               0x76540, 0x76560, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x76560, 0x76580, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x76580, 0x765a0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x765a0, 0x765c0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x765c0, 0x765e0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x765e0, 0x76600, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x76600, 0x76620, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x76620, 0x76640, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x76640, 0x76660, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x66e04, 0x66e24, indexCPS2_ChunLi, 0x0 },
    { _T("Punch Extra 1"), 0x66e24, 0x66e44, indexCPS2_ChunLi, 0x0 },
    { _T("Punch Extra 2"), 0x66e44, 0x66e64, indexCPS2_ChunLi, 0x0 },
    { _T("Punch Super Trail Light"), 0x66e64, 0x66e84, indexCPS2_ChunLi, 0x0 },
    { _T("Punch Super Trail Dark"), 0x66e84, 0x66ea4, indexCPS2_ChunLi, 0x0 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_KICK_PALETTES[] =
{
    { _T("Kick"), 0x66ea4, 0x66ec4, indexCPS2_ChunLi, 0x0 },
    { _T("Kick Extra 1"), 0x66ec4, 0x66ee4, indexCPS2_ChunLi, 0x0 },
    { _T("Kick Extra 2"), 0x66ee4, 0x66f04, indexCPS2_ChunLi, 0x0 },
    { _T("Kick Super Trail Light"), 0x66f04, 0x66f24, indexCPS2_ChunLi, 0x0 },
    { _T("Kick Super Trail Dark"), 0x66f24, 0x66f44, indexCPS2_ChunLi, 0x0 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x66f44, 0x66f64, indexCPS2_ChunLi, 0x0 },
    { _T("2 Punches Extra 1"), 0x66f64, 0x66f84, indexCPS2_ChunLi, 0x0 },
    { _T("2 Punches Extra 2"), 0x66f84, 0x66fa4, indexCPS2_ChunLi, 0x0 },
    { _T("2 Punches Super Trail Light"), 0x66fa4, 0x66fc4, indexCPS2_ChunLi, 0x0 },
    { _T("2 Punches Super Trail Dark"), 0x66fc4, 0x66fe4, indexCPS2_ChunLi, 0x0 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x66fe4, 0x67004, indexCPS2_ChunLi, 0x0 },
    { _T("2 Kicks Extra 1"), 0x67004, 0x67024, indexCPS2_ChunLi, 0x0 },
    { _T("2 Kicks Extra 2"), 0x67024, 0x67044, indexCPS2_ChunLi, 0x0 },
    { _T("2 Kicks Super Trail Light"), 0x67044, 0x67064, indexCPS2_ChunLi, 0x0 },
    { _T("2 Kicks Super Trail Dark"), 0x67064, 0x67084, indexCPS2_ChunLi, 0x0 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x67084, 0x670a4, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Punch Extra 1"), 0x670a4, 0x670c4, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Punch Extra 2"), 0x670c4, 0x670e4, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Punch Super Trail Light"), 0x670e4, 0x67104, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x67104, 0x67124, indexCPS2_ChunLi, 0x0 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x67124, 0x67144, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Kick Extra 1"), 0x67144, 0x67164, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Kick Extra 2"), 0x67164, 0x67184, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Kick Super Trail Light"), 0x67184, 0x671a4, indexCPS2_ChunLi, 0x0 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x671a4, 0x671c4, indexCPS2_ChunLi, 0x0 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x76660, 0x76680, indexCPS2_ChunLi, 0x00 },
    { _T("Burned 2"),                       0x76680, 0x766a0, indexCPS2_ChunLi, 0x00 },
    { _T("Psycho Power Burned 1"),          0x766a0, 0x766c0, indexCPS2_ChunLi, 0x00 },
    { _T("Psycho Power Burned 2"),          0x766c0, 0x766e0, indexCPS2_ChunLi, 0x00 },
    { _T("Punch CC Shadow 1"),              0x766e0, 0x76700, indexCPS2_ChunLi, 0x00 },
    { _T("Punch CC Shadow 2"),              0x76700, 0x76720, indexCPS2_ChunLi, 0x00 },
    { _T("Kick CC Shadow 1"),               0x76720, 0x76740, indexCPS2_ChunLi, 0x00 },
    { _T("Kick CC Shadow 2"),               0x76740, 0x76760, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x76760, 0x76780, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x76780, 0x767a0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x767a0, 0x767c0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x767c0, 0x767e0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x767e0, 0x76800, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x76800, 0x76820, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x76820, 0x76840, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x76840, 0x76860, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x65f04, 0x65f24, indexCPS2_Bison, 0x00 },
    { _T("Punch Extra 1"), 0x65f24, 0x65f44, indexCPS2_Bison, 0x00 },
    { _T("Punch Extra 2"), 0x65f44, 0x65f64, indexCPS2_Bison, 0x00 },
    { _T("Punch Super Trail Light"), 0x65f64, 0x65f84, indexCPS2_Bison, 0x00 },
    { _T("Punch Super Trail Dark"), 0x65f84, 0x65fa4, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_KICK_PALETTES[] =
{
    { _T("Kick"), 0x65fa4, 0x65fc4, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 1"), 0x65fc4, 0x65fe4, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 2"), 0x65fe4, 0x66004, indexCPS2_Bison, 0x00 },
    { _T("Kick Super Trail Light"), 0x66004, 0x66024, indexCPS2_Bison, 0x00 },
    { _T("Kick Super Trail Dark"), 0x66024, 0x66044, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x66044, 0x66064, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 1"), 0x66064, 0x66084, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 2"), 0x66084, 0x660a4, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Super Trail Light"), 0x660a4, 0x660c4, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x660c4, 0x660e4, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x660e4, 0x66104, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 1"), 0x66104, 0x66124, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 2"), 0x66124, 0x66144, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Super Trail Light"), 0x66144, 0x66164, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x66164, 0x66184, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x66184, 0x661a4, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x661a4, 0x661c4, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x661c4, 0x661e4, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Super Trail Light"), 0x661e4, 0x66204, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x66204, 0x66224, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x66224, 0x66244, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x66244, 0x66264, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x66264, 0x66284, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Super Trail Light"), 0x66284, 0x662a4, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x662a4, 0x662c4, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x75e60, 0x75e80, indexCPS2_Bison, 0x00 },
    { _T("Burned 2"),                       0x75e80, 0x75ea0, indexCPS2_Bison, 0x00 },
    { _T("Psycho Power Burned 1"),          0x75ea0, 0x75ec0, indexCPS2_Bison, 0x00 },
    { _T("Psycho Power Burned 2"),          0x75ec0, 0x75ee0, indexCPS2_Bison, 0x00 },
    { _T("Punch CC Shadow 1"),              0x75ee0, 0x75f00, indexCPS2_Bison, 0x00 },
    { _T("Punch CC Shadow 2"),              0x75f00, 0x75f20, indexCPS2_Bison, 0x00 },
    { _T("Kick CC Shadow 1"),               0x75f20, 0x75f40, indexCPS2_Bison, 0x00 },
    { _T("Kick CC Shadow 2"),               0x75f40, 0x75f60, indexCPS2_Bison, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x75f60, 0x75f80, indexCPS2_Bison, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x75f80, 0x75fa0, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x75fa0, 0x75fc0, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x75fc0, 0x75fe0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x75fe0, 0x76000, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x76000, 0x76020, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x76020, 0x76040, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x76040, 0x76060, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x662c4, 0x662e4, indexCPS2_Sagat, 0x00 },
    { _T("Punch Extra 1"), 0x662e4, 0x66304 },
    { _T("Punch Extra 2"), 0x66304, 0x66324 },
    { _T("Punch Super Trail Light"), 0x66324, 0x66344, indexCPS2_Sagat, 0x00 },
    { _T("Punch Super Trail Dark"), 0x66344, 0x66364, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_KICK_PALETTES[] =
{
    { _T("Kick"), 0x66364, 0x66384, indexCPS2_Sagat, 0x00 },
    { _T("Kick Extra 1"), 0x66384, 0x663a4 },
    { _T("Kick Extra 2"), 0x663a4, 0x663c4 },
    { _T("Kick Super Trail Light"), 0x663c4, 0x663e4, indexCPS2_Sagat, 0x00 },
    { _T("Kick Super Trail Dark"), 0x663e4, 0x66404, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x66404, 0x66424, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Extra 1"), 0x66424, 0x66444 },
    { _T("2 Punches Extra 2"), 0x66444, 0x66464 },
    { _T("2 Punches Super Trail Light"), 0x66464, 0x66484, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x66484, 0x664a4, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x664a4, 0x664c4, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Extra 1"), 0x664c4, 0x664e4 },
    { _T("2 Kicks Extra 2"), 0x664e4, 0x66504 },
    { _T("2 Kicks Super Trail Light"), 0x66504, 0x66524, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x66524, 0x66544, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x66544, 0x66564, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x66564, 0x66584 },
    { _T("Auto Guard Punch Extra 2"), 0x66584, 0x665a4 },
    { _T("Auto Guard Punch Super Trail Light"), 0x665a4, 0x665c4, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x665c4, 0x665e4, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x665e4, 0x66604, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x66604, 0x66624 },
    { _T("Auto Guard Kick Extra 2"), 0x66624, 0x66644 },
    { _T("Auto Guard Kick Super Trail Light"), 0x66644, 0x66664, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x66664, 0x66684, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_STATUS_PALETTES[] =
{
    { _T("Burned 1"),                       0x76060, 0x76080, indexCPS2_Sagat, 0x00 },
    { _T("Burned 2"),                       0x76080, 0x760a0, indexCPS2_Sagat, 0x00 },
    { _T("Psycho Power Burned 1"),          0x760a0, 0x760c0, indexCPS2_Sagat, 0x00 },
    { _T("Psycho Power Burned 2"),          0x760c0, 0x760e0, indexCPS2_Sagat, 0x00 },
    { _T("Punch CC Shadow 1"),              0x760e0, 0x76100, indexCPS2_Sagat, 0x00 },
    { _T("Punch CC Shadow 2"),              0x76100, 0x76120, indexCPS2_Sagat, 0x00 },
    { _T("Kick CC Shadow 1"),               0x76120, 0x76140, indexCPS2_Sagat, 0x00 },
    { _T("Kick CC Shadow 2"),               0x76140, 0x76160, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches CC Shadow 1"),          0x76160, 0x76180, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches CC Shadow 2"),          0x76180, 0x761a0, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks CC Shadow 1"),            0x761a0, 0x761c0, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks CC Shadow 2"),            0x761c0, 0x761e0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"),   0x761e0, 0x76200, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"),   0x76200, 0x76220, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"),    0x76220, 0x76240, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"),    0x76240, 0x76260, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x671c4, 0x713a0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Punch Extra 1"), 0x713a0 - 0xA1BC, 0x713c0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Punch Extra 2"), 0x713c0 - 0xA1BC, 0x713e0 - 0xA1BC },
    { _T("Punch Super Trail Light"), 0x713e0 - 0xA1BC, 0x71400 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Punch Super Trail Dark"), 0x71400 - 0xA1BC, 0x71420 - 0xA1BC, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71420 - 0xA1BC, 0x71440 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 1"), 0x71440 - 0xA1BC, 0x71460 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 2"), 0x71460 - 0xA1BC, 0x71480 - 0xA1BC },
    { _T("Kick Super Trail Light"), 0x71480 - 0xA1BC, 0x714a0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Kick Super Trail Dark"), 0x714a0 - 0xA1BC, 0x714c0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x714c0 - 0xA1BC, 0x714e0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 1"), 0x714e0 - 0xA1BC, 0x71500 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 2"), 0x71500 - 0xA1BC, 0x71520 - 0xA1BC },
    { _T("2 Punches Super Trail Light"), 0x71520 - 0xA1BC, 0x71540 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Super Trail Dark"), 0x71540 - 0xA1BC, 0x71560 - 0xA1BC, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71560 - 0xA1BC, 0x71580 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71580 - 0xA1BC, 0x715a0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 2"), 0x715a0 - 0xA1BC, 0x715c0 - 0xA1BC },
    { _T("2 Kicks Super Trail Light"), 0x715c0 - 0xA1BC, 0x715e0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Super Trail Dark"), 0x715e0 - 0xA1BC, 0x71600 - 0xA1BC, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71600 - 0xA1BC, 0x71620 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71620 - 0xA1BC, 0x71640 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71640 - 0xA1BC, 0x71660 - 0xA1BC },
    { _T("Auto Guard Punch Super Trail Light"), 0x71660 - 0xA1BC, 0x71680 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Super Trail Dark"), 0x71680 - 0xA1BC, 0x716a0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x716a0 - 0xA1BC, 0x716c0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x716c0 - 0xA1BC, 0x716e0 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x716e0 - 0xA1BC, 0x71700 - 0xA1BC },
    { _T("Auto Guard Kick Super Trail Light"), 0x71700 - 0xA1BC, 0x71720 - 0xA1BC, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Super Trail Dark"), 0x71720 - 0xA1BC, 0x67584, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x76860, 0x74880 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Burned 2"), 0x74880 + 0x2000, 0x748a0 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Psycho Power Burned 1"), 0x748a0 + 0x2000, 0x748c0 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Psycho Power Burned 2"), 0x748c0 + 0x2000, 0x748e0 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Punch CC Shadow 1"), 0x748e0 + 0x2000, 0x74900 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Punch CC Shadow 2"), 0x74900 + 0x2000, 0x74920 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Kick CC Shadow 1"), 0x74920 + 0x2000, 0x74940 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Kick CC Shadow 2"), 0x74940 + 0x2000, 0x74960 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x74960 + 0x2000, 0x74980 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x74980 + 0x2000, 0x749a0 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x749a0 + 0x2000, 0x749c0 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x749c0 + 0x2000, 0x749e0 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x749e0 + 0x2000, 0x74a00 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x74a00 + 0x2000, 0x74a20 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x74a20 + 0x2000, 0x74a40 + 0x2000, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x74a40 + 0x2000, 0x76a60, indexCPS2_Sakura, 0x00 },
};

const sDescTreeNode SFA2_A_WWRYU_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_WWKEN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_WWCHUNLI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_WWMBISON_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_WWSAGAT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_EVILRYU_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_KICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_EVILRYU_REV2_COLLECTION[] =
{
    { _T("Punch"),          DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_PUNCH_PALETTES) },
    { _T("Kick"),           DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_KICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_KICK_PALETTES) },
    { _T("2 Punches"),      DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_2PUNCHES_PALETTES) },
    { _T("2 Kicks"),        DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_ALTSAKURA_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_KICK_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_STATUS_PALETTES) },
};

#pragma endregion

const sGame_PaletteDataset SFA2_A_DAN_MOVE_PALETTES[] =
{
    { _T("Dan P1"), 0x1b780, 0x1b7A0, indexCPS2_Dan, 0x00 },
    { _T("Dan P2"), 0x1b7A0, 0x1b7C0, indexCPS2_Dan, 0x00 },
};

const sDescTreeNode SFA2_A_DAN_MOVE_COLLECTION[] =
{
    { _T("Sagat Throw"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DAN_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SHINAKUMA_MOVE_PALETTES[] =
{
    { _T("Shin Akuma"),     0x1bbe0, 0x1bc00, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"),        0x1bc00, 0x1bc20, indexCPS2_Akuma, 1 },
    { _T("Shoryuken"),      0x1bc20, 0x1bc40,  },
    { _T("Ashura Senku 1"), 0x1bc40, 0x1bc60, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x1bc60, 0x1bc80, indexCPS2_Akuma, 0x00 },
};

const sDescTreeNode SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION[] =
{
    { _T("Hidden Boss"), DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_MOVE_PALETTES, ARRAYSIZE(SFA2_A_SHINAKUMA_MOVE_PALETTES) },
};

#pragma region SFA2 Rev2 palettes


const sGame_PaletteDataset SFA2_A_REV2_SHINAKUMA_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Shin Akuma Portrait"), 0x224e0, 0x22540, indexCPS2_SFA2Portraits, 0x1e },
};

const sDescTreeNode SFA2_A_REV2_SHINAKUMA_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_SHINAKUMA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_SHINAKUMA_PUNCH_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_PUNCH_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x237e0, 0x23840, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Evil Ryu Portrait"), 0x23840, 0x238a0, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_2PUNCHES_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x238a0, 0x23900, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_2KICKS_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x23900, 0x23960, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x23960, 0x239c0, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Evil Ryu Portrait"), 0x239c0, 0x23a20, indexCPS2_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFA2_A_REV2_EVILRYU_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_REV2_WWDHALSIM_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x235a0, 0x23600, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_REV2_WWDHALSIM_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x23600, 0x23660, indexCPS2_SFA2Portraits, 0x25 },
};

const sDescTreeNode SFA2_A_REV2_WWDHALSIM_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWDHALSIM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWDHALSIM_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWDHALSIM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWDHALSIM_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_REV2_WWZANGIEF_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Zangief (WW) Portrait"), 0x23360, 0x233c0, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_REV2_WWZANGIEF_KICK_PORTRAIT_PALETTES[] =
{
     { _T("Zangief (WW) Portrait"), 0x233c0, 0x23420, indexCPS2_SFA2Portraits, 0x01 },
};

const sDescTreeNode SFA2_A_REV2_WWZANGIEF_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWZANGIEF_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWZANGIEF_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWZANGIEF_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWZANGIEF_KICK_PORTRAIT_PALETTES) },
};

#pragma endregion

#pragma region SFZ2A08 palettes

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_PUNCH_PALETTES[] =
{
    { _T("Shin Akuma"),     0x12144, 0x12164, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"),        0x12164, 0x12184, indexCPS2_Akuma, 1 },
    { _T("Shoryuken"),      0x12184, 0x121a4,  },
    { _T("Ashura Senku 1"), 0x121a4, 0x121c4, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x121c4, 0x121e4, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_KICK_PALETTES[] =
{
    { _T("Shin Akuma"), 0x121e4, 0x12204, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x12204, 0x12224, indexCPS2_Akuma, 1 },
    { _T("Shoryuken"), 0x12224, 0x12244 },
    { _T("Ashura Senku 1"), 0x12244, 0x12264, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x12264, 0x12284, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2PUNCHES_PALETTES[] =
{
    { _T("Shin Akuma"), 0x12284, 0x122a4, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x122a4, 0x122c4, indexCPS2_Akuma, 1 },
    { _T("Shoryuken "), 0x122c4, 0x122e4 },
    { _T("Ashura Senku 1"), 0x122e4, 0x12304, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x12304, 0x12324, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2KICKS_PALETTES[] =
{
    { _T("Shin Akuma"), 0x12324, 0x12344, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x12344, 0x12364, indexCPS2_Akuma, 1 },
    { _T("Shoryuken "), 0x12364, 0x12384 },
    { _T("Ashura Senku 1"), 0x12384, 0x123A4, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x123A4, 0x123C4, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Shin Akuma"), 0x123C4, 0x123E4, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x123E4, 0x12404, indexCPS2_Akuma, 1 },
    { _T("Shoryuken "), 0x12404, 0x12424 },
    { _T("Ashura Senku 1"), 0x12424, 0x12444, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x12444, 0x12464, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Shin Akuma"), 0x12464, 0x12484, indexCPS2_Akuma, 0x00 },
    { _T("Hadoken"), 0x12484, 0x124a4, indexCPS2_Akuma, 1 },
    { _T("Shoryuken "), 0x124a4, 0x124c4 },
    { _T("Ashura Senku 1"), 0x124c4, 0x124e4, indexCPS2_Akuma, 0x00 },
    { _T("Ashura Senku 2"), 0x124e4, 0x12504, indexCPS2_Akuma, 0x00 },
};

const sDescTreeNode SFZ2A_A_SHINAKUMA_FULL_MOVE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_PUNCH_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_KICK_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2PUNCHES_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2KICKS_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PALETTES) }, 
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Shin Akuma Portrait"), 0x1a064, 0x1a0c4, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_KICK_PORTRAIT_PALETTES[] =
{
   { _T("Shin Akuma Portrait"), 0x1a0c4, 0x1a124, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Shin Akuma Portrait"), 0x1a124, 0x1a184, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2KICKS_PORTRAIT_PALETTES[] =
{
   { _T("Shin Akuma Portrait"), 0x1a184, 0x1a1e4, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Shin Akuma Portrait"), 0x1a1e4, 0x1a244, indexCPS2_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Shin Akuma Portrait"), 0x1a244, 0x1a2a4, indexCPS2_SFA2Portraits, 0x1e },
};

const sDescTreeNode SFZ2A_A_SHINAKUMA_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_PUNCH_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x1a724, 0x1a784, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Evil Ryu Portrait"), 0x1a784, 0x1a7e4, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_2PUNCHES_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x1a7e4, 0x1a844, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_2KICKS_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x1a844, 0x1a8a4, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
   { _T("Evil Ryu Portrait"), 0x1a8a4, 0x1a904, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Evil Ryu Portrait"), 0x1a904, 0x1a964, indexCPS2_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFZ2A_A_EVILRYU_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWRYU_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Ryu (WW) Portrait"), 0x1b024, 0x1b084, indexCPS2_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_WWLRYU_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Ryu (WW) Portrait"), 0x1b084, 0x1b0e4, indexCPS2_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFZ2A_A_WWRYU_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWRYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWRYU_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWLRYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWLRYU_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWCHUNLI_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (WW) Portrait"), 0x1b264, 0x1b2c4,  indexCPS2_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFZ2A_A_WWCHUNLI_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Chun-Li (WW) Portrait"), 0x1b2c4, 0x1b324, indexCPS2_SFA2Portraits, 0x1c },
};

const sDescTreeNode SFZ2A_A_WWCHUNLI_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWCHUNLI_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWCHUNLI_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWCHUNLI_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWCHUNLI_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWKEN_PUNCH_PORTRAIT_PALETTES[] =
{
   { _T("Ken (WW) Portrait"), 0x1ade4, 0x1ae44, indexCPS2_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFZ2A_A_WWKEN_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Ken (WW) Portrait"), 0x1ae44, 0x1aea4, indexCPS2_SFA2Portraits, 0x27 },
};

const sDescTreeNode SFZ2A_A_WWKEN_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWKEN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWKEN_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWKEN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWKEN_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x1a4e4, 0x1a544, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x1a544, 0x1a5a4, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x1a5a4, 0x1a604, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x1a604, 0x1a664, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x1a664, 0x1a6c4, indexCPS2_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Dhalsim (WW) Portrait"), 0x1a6c4, 0x1a724, indexCPS2_SFA2Portraits, 0x25 },
};

const sDescTreeNode SFZ2A_A_WWDHALSIM_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Zangief (WW) Portrait"), 0x1a2a4, 0x1a304, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_KICK_PORTRAIT_PALETTES[] =
{
     { _T("Zangief (WW) Portrait"), 0x1a304, 0x1a364, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Zangief (WW) Portrait"), 0x1a364, 0x1a3c4, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Zangief (WW) Portrait"), 0x1a3c4, 0x1a424, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Zangief (WW) Portrait"), 0x1a424, 0x1a484, indexCPS2_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Zangief (WW) Portrait"),  0x1a484, 0x1a4e4, indexCPS2_SFA2Portraits, 0x01 },
};

const sDescTreeNode SFZ2A_A_WWZANGIEF_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWSAGAT_PUNCH_PORTRAIT_PALETTES[] =
{
     { _T("Sagat (WW) Portrait"), 0x1aba4, 0x1ac04, indexCPS2_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFZ2A_A_WWSAGAT_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Sagat (WW) Portrait"), 0x1ac04, 0x1ac64, indexCPS2_SFA2Portraits, 0x42 },
};

const sDescTreeNode SFZ2A_A_WWSAGAT_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWSAGAT_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWSAGAT_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWSAGAT_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWSAGAT_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWMBISON_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison (WW) Portrait"), 0x1a964, 0x1a9c4, indexCPS2_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFZ2A_A_WWMBISON_KICK_PORTRAIT_PALETTES[] =
{
    { _T("M.Bison (WW) Portrait"), 0x1a9c4, 0x1aa24, indexCPS2_SFA2Portraits, 0x26 },
};

const sDescTreeNode SFZ2A_A_WWMBISON_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWMBISON_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWMBISON_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWMBISON_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWMBISON_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_PUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sakura (Alt) Portrait"), 0x1b4a4, 0x1b504, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_KICK_PORTRAIT_PALETTES[] =
{
    { _T("Sakura (Alt) Portrait"), 0x1b504, 0x1b564, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { _T("Sakura (Alt) Portrait"), 0x1b564, 0x1b5c4, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_2KICKS_PORTRAIT_PALETTES[] =
{
    { _T("Sakura (Alt) Portrait"), 0x1b5c4, 0x1b624, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { _T("Sakura (Alt) Portrait"), 0x1b624, 0x1b684, indexCPS2_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { _T("Sakura (Alt) Portrait"), 0x1b684, 0x1b6e4, indexCPS2_SFA2Portraits, 0x22 },
};

const sDescTreeNode SFZ2A_A_ALTSAKURA_PORTRAIT_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_PUNCH_PORTRAIT_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_KICK_PORTRAIT_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_2PUNCHES_PORTRAIT_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_2KICKS_PORTRAIT_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

#pragma endregion

const sDescTreeNode SFA2_A_UNITS_07_REV1[SFA2_A_NUM_IND_07_REV1] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { _T("Akuma"),           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { _T("Chun-Li (Original)"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { _T("Dhalsim"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { _T("Gen"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
    // Crane Stance Gen isn't really loadable, per Jed
    //{ _T("Gen (Crane Stance"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION,  ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION) },
    { _T("Guy"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION) },
    { _T("Ken"),             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION) },
    { _T("M. Bison"),        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION) },
    { _T("Rolento"),         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION) },
    { _T("Rose"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION) },
    { _T("Ryu"),             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION) },
    { _T("Sagat"),           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION) },
    { _T("Sakura"),          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION) },
    { _T("Sodom"),           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION) },
    { _T("Zangief"),         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION) },
    { _T("Stages"),          DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07_REV1_COLLECTION,  ARRAYSIZE(SFA2_A_BONUS07_REV1_COLLECTION) },
};

const sDescTreeNode SFA2_A_UNITS_07_REV2[SFA2_A_NUM_IND_07_REV2] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { _T("Akuma"),           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { _T("Chun-Li (Original)"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { _T("Dhalsim"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { _T("Dhalsim (WW)"),    DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_COLLECTION,     ARRAYSIZE(SFA2_A_WWDHALSIM_COLLECTION) },
    { _T("Gen"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
    // Crane Stance Gen isn't really loadable, per Jed
    //{ _T("Gen (Crane Stance"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION,  ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION) },
    { _T("Guy"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION) },
    { _T("Ken"),             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION) },
    { _T("M. Bison"),        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION) },
    { _T("Rolento"),         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION) },
    { _T("Rose"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION) },
    { _T("Ryu"),             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION) },
    { _T("Evil Ryu (US Only)"), DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_COLLECTION, ARRAYSIZE(SFA2_A_EVILRYU_REV2_COLLECTION) },
    { _T("Sagat"),           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION) },
    { _T("Sakura"),          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION) },
    { _T("Sodom"),           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION) },
    { _T("Zangief"),         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION) },
    { _T("Zangief (WW)"),    DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_COLLECTION,     ARRAYSIZE(SFA2_A_WWZANGIEF_COLLECTION) },
    { _T("Stages"),          DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07_REV2_COLLECTION,  ARRAYSIZE(SFA2_A_BONUS07_REV2_COLLECTION) },
};

const sDescTreeNode SFZ2A_A_UNITS_07[SFZ2A_A_NUM_IND_07] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { _T("Akuma"),           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { _T("Chun-Li (Original)"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { _T("Chun-Li (WW)"),    DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_COLLECTION,      ARRAYSIZE(SFA2_A_WWCHUNLI_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { _T("Dhalsim"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { _T("Dhalsim (WW)"),    DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_COLLECTION,     ARRAYSIZE(SFA2_A_WWDHALSIM_COLLECTION) },
    { _T("Gen"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
    // Crane Stance Gen isn't really loadable, per Jed
    //{ _T("Gen (Crane Stance"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION,  ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION) },
    { _T("Guy"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION) },
    { _T("Ken"),             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION) },
    { _T("Ken (WW)"),        DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_COLLECTION,         ARRAYSIZE(SFA2_A_WWKEN_COLLECTION) },
    { _T("M. Bison"),        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION) },
    { _T("M. Bison (WW)"),   DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_COLLECTION,      ARRAYSIZE(SFA2_A_WWMBISON_COLLECTION) },
    { _T("Rolento"),         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION) },
    { _T("Rose"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION) },
    { _T("Ryu"),             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION) },
    { _T("Ryu (WW)"),        DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_COLLECTION,         ARRAYSIZE(SFA2_A_WWRYU_COLLECTION) },
    { _T("Evil Ryu"),        DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_COLLECTION,       ARRAYSIZE(SFA2_A_EVILRYU_COLLECTION) },
    { _T("Sagat"),           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION) },
    { _T("Sagat (WW)"),      DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_COLLECTION,       ARRAYSIZE(SFA2_A_WWSAGAT_COLLECTION) },
    { _T("Sakura"),          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION) },
    { _T("Sakura (Alt)"),    DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_COLLECTION,     ARRAYSIZE(SFA2_A_ALTSAKURA_COLLECTION) },
    { _T("Sodom"),           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION) },
    { _T("Zangief"),         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION) },
    { _T("Zangief (WW)"),    DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_COLLECTION,     ARRAYSIZE(SFA2_A_WWZANGIEF_COLLECTION) },
    // EX/WW versions of Ryu, Ken, Chun-Li, Sagat, M.Bison at this point for SFZ2A
    //{ _T("Bonus"),           DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07_COLLECTION,       ARRAYSIZE(SFA2_A_BONUS07_COLLECTION) },
};

const sDescTreeNode SFA2_A_UNITS_08_REV1[] =
{
    { _T("Boss: Shin Akuma"),  DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION) },
    { _T("Akuma Extras"),       DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION) },
    { _T("Birdie Extras"),      DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION) },
    { _T("Dhalsim Extras"),     DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION) },
    { _T("M.Bison Extras"),     DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION) },
    { _T("Rose Extras"),        DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION) },
    { _T("Dan Extras"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION) },

    { _T("Adon Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION) },
    { _T("Akuma Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION) },
    { _T("Birdie Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION) },
    { _T("Charlie Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION) },
    { _T("Chun-Li Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { _T("Chun-Li (Original) Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION) },
    { _T("Dan Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION) },
    { _T("Dhalsim Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { _T("Gen Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION) },
    { _T("Guy Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION) },
    { _T("Ken Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION) },
    { _T("M.Bison Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION) },
    { _T("Rolento Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION) },
    { _T("Rose Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION) },
    { _T("Ryu Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION) },
    { _T("Sagat Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION) },
    { _T("Sakura Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION) },
    { _T("Sodom Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION) },
    { _T("Zangief Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION) },

    { L"Stages",                DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08_REV1_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08_REV1_COLLECTION) },
};

constexpr auto SFA2_A_NUM_IND_08_REV1 = ARRAYSIZE(SFA2_A_UNITS_08_REV1);
#define SFA2_A_EXTRALOC_08_REV1 SFA2_A_NUM_IND_08_REV1

const sDescTreeNode SFA2_A_UNITS_08_REV2[] =
{
    { _T("Boss: Shin Akuma"),  DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION) },
    { _T("Boss: Evil Ryu Extras (US ROM only!)"),  DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_EVILRYU_MOVE_COLLECTION) },
    { _T("Akuma Extras"),       DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION) },
    { _T("Birdie Extras"),      DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION) },
    { _T("Dhalsim Extras"),     DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION) },
    { _T("M.Bison Extras"),     DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION) },
    { _T("Rose Extras"),        DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION) },
    { _T("Dan Extras"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION) },

    { _T("Adon Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION) },
    { _T("Akuma Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION) },
    { _T("Birdie Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION) },
    { _T("Charlie Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION) },
    { _T("Chun-Li Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { _T("Chun-Li (Original) Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION) },
    { _T("Dan Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION) },
    { _T("Dhalsim Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { _T("Gen Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION) },
    { _T("Guy Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION) },
    { _T("Ken Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION) },
    { _T("M.Bison Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION) },
    { _T("Rolento Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION) },
    { _T("Rose Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION) },
    { _T("Ryu Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION) },
    { _T("Sagat Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION) },
    { _T("Sakura Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION) },
    { _T("Sodom Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION) },
    { _T("Zangief Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION) },

    { _T("Shin Akuma Portraits"),   DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_SHINAKUMA_PORTRAIT_COLLECTION,   ARRAYSIZE(SFA2_A_REV2_SHINAKUMA_PORTRAIT_COLLECTION) },
    { _T("Evil Ryu Portraits"),     DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_PORTRAIT_COLLECTION,     ARRAYSIZE(SFA2_A_REV2_EVILRYU_PORTRAIT_COLLECTION) },
    { _T("Dhalsim (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWDHALSIM_PORTRAIT_COLLECTION,   ARRAYSIZE(SFA2_A_REV2_WWDHALSIM_PORTRAIT_COLLECTION) },
    { _T("Zangief (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWZANGIEF_PORTRAIT_COLLECTION,   ARRAYSIZE(SFA2_A_REV2_WWZANGIEF_PORTRAIT_COLLECTION) },
    
    { L"Stages",                DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08_REV2_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08_REV2_COLLECTION) },
};

constexpr auto SFA2_A_NUM_IND_08_REV2 = ARRAYSIZE(SFA2_A_UNITS_08_REV2);
#define SFA2_A_EXTRALOC_08_REV2 SFA2_A_NUM_IND_08_REV2

const sDescTreeNode SFZ2A_A_UNITS_08[] =
{
    { _T("Boss: Shin Akuma"),   DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_FULL_MOVE_COLLECTION, ARRAYSIZE(SFZ2A_A_SHINAKUMA_FULL_MOVE_COLLECTION) },
    { _T("Boss: Evil Ryu"),     DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_EVILRYU_MOVE_COLLECTION) },
    { _T("Akuma Extras"),       DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION) },
    { _T("Birdie Extras"),      DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION) },
    { _T("Dhalsim Extras"),     DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION) },
    { _T("M.Bison Extras"),     DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION) },
    { _T("Rose Extras"),        DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION) },
    { _T("Dan Extras"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION) },

    { _T("Adon Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION) },
    { _T("Akuma Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION) },
    { _T("Birdie Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION) },
    { _T("Charlie Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION) },
    { _T("Chun-Li Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { _T("Chun-Li (Original) Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION) },
    { _T("Dan Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION) },
    { _T("Dhalsim Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { _T("Gen Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION) },
    { _T("Guy Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION) },
    { _T("Ken Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION) },
    { _T("M.Bison Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION) },
    { _T("Rolento Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION) },
    { _T("Rose Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION) },
    { _T("Ryu Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION) },
    { _T("Sagat Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION) },
    { _T("Sakura Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION) },
    { _T("Sodom Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION) },
    { _T("Zangief Portraits"), DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION) },

    { _T("Shin Akuma Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_SHINAKUMA_PORTRAIT_COLLECTION) },
    { _T("Evil Ryu Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_EVILRYU_PORTRAIT_COLLECTION) },
    { _T("Ryu (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWRYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWRYU_PORTRAIT_COLLECTION) },
    { _T("Chun-Li (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWCHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWCHUNLI_PORTRAIT_COLLECTION) },
    { _T("Ken (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWKEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWKEN_PORTRAIT_COLLECTION) },
    { _T("Dhalsim (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWDHALSIM_PORTRAIT_COLLECTION) },
    { _T("Zangief (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWZANGIEF_PORTRAIT_COLLECTION) },
    { _T("Sagat (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWSAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWSAGAT_PORTRAIT_COLLECTION) },
    { _T("M. Bison (WW) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWMBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWMBISON_PORTRAIT_COLLECTION) },
    { _T("Sakura (Alt) Portraits"), DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_ALTSAKURA_PORTRAIT_COLLECTION) },

    //{ L"Stages",                DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08_REV1_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08_REV1_COLLECTION) },
};

constexpr auto SFZ2A_A_NUM_IND_08 = ARRAYSIZE(SFZ2A_A_UNITS_08);
#define SFZ2A_A_EXTRALOC_08 SFZ2A_A_NUM_IND_08

// We extend this array with data groveled from the SFA2e.txt extensible extras file, if any.
const stExtraDef SFA2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
