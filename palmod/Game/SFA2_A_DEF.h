#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of SFA2_A_RYU_PALETTES. 
// * Update every array using SFA2_A_NUM_IND below
// * Update the index lookups in Game_SFA2_A.cpp that are marked 
//       - look for usage of index_SFA2_Ryu to find them
// That should be it.  Good luck.

enum Supported_SFA2_PaletteListIndex
{
    index_SFA2_Ryu,
    index_SFA2_Ken,
    index_SFA2_Gouki,
    index_SFA2_Charlie,
    index_SFA2_ChunLi,
    index_SFA2_ChunLiAlt,
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
    index_SFA2_Last
};

constexpr auto SFA2_A_NUM_IND = index_SFA2_Last;

#define SFA2_A_EXTRALOC SFA2_A_NUM_IND

const UINT8 SFA2_A_UNITSORT[SFA2_A_NUM_IND + 1] = // Plus 1 for the extra palettes
{
    index_SFA2_Adon,
    index_SFA2_Birdie,
    index_SFA2_Charlie,
    index_SFA2_ChunLi,
    index_SFA2_ChunLiAlt,
    index_SFA2_Dan,
    index_SFA2_Dhalsim,
    index_SFA2_Gen,
    index_SFA2_Gouki,
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
   
    SFA2_A_EXTRALOC // Extra palettes
};

const sGame_PaletteDataset SFA2_A_RYU_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6e2c0, 0x6e2e0, indexCPS2_Ryu, 0x00 },
    { _T("Punch Extra 1"), 0x6e2e0, 0x6e300, indexCPS2_Ryu, 0x00 },
    { _T("Punch Extra 2"), 0x6e300, 0x6e320, indexCPS2_Ryu, 0x00 },
    { _T("Punch Extra 3"), 0x6e320, 0x6e340, indexCPS2_Ryu, 0x00 },
    { _T("Punch Extra 4"), 0x6e340, 0x6e360, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6e360, 0x6e380, indexCPS2_Ryu, 0x00 },
    { _T("Kick Extra 1"), 0x6e380, 0x6e3a0, indexCPS2_Ryu, 0x00 },
    { _T("Kick Extra 2"), 0x6e3a0, 0x6e3c0, indexCPS2_Ryu, 0x00 },
    { _T("Kick Extra 3"), 0x6e3c0, 0x6e3e0, indexCPS2_Ryu, 0x00 },
    { _T("Kick Extra 4"), 0x6e3e0, 0x6e400, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6e400, 0x6e420, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Extra 1"), 0x6e420, 0x6e440, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Extra 2"), 0x6e440, 0x6e460, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Extra 3"), 0x6e460, 0x6e480, indexCPS2_Ryu, 0x00 },
    { _T("2 Punches Extra 4"), 0x6e480, 0x6e4a0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6e4a0, 0x6e4c0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6e4c0, 0x6e4e0, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6e4e0, 0x6e500, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6e500, 0x6e520, indexCPS2_Ryu, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6e520, 0x6e540, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6e540, 0x6e560, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6e560, 0x6e580, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6e580, 0x6e5a0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6e5a0, 0x6e5c0, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x6e5c0, 0x6e5e0, indexCPS2_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6e5e0, 0x6e600, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6e600, 0x6e620, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6e620, 0x6e640, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x6e640, 0x6e660, indexCPS2_Ryu, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x6e660, 0x6e680, indexCPS2_Ryu, 0x00 },
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
    { _T("Punch Extra 3"), 0x6e6e0, 0x6e700, indexCPS2_Ken, 0x00 },
    { _T("Punch Extra 4"), 0x6e700, 0x6e720, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6e720, 0x6e740, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 1"), 0x6e740, 0x6e760, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 2"), 0x6e760, 0x6e780, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 3"), 0x6e780, 0x6e7a0, indexCPS2_Ken, 0x00 },
    { _T("Kick Extra 4"), 0x6e7a0, 0x6e7c0, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6e7c0, 0x6e7e0, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 1"), 0x6e7e0, 0x6e800, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 2"), 0x6e800, 0x6e820, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 3"), 0x6e820, 0x6e840, indexCPS2_Ken, 0x00 },
    { _T("2 Punches Extra 4"), 0x6e840, 0x6e860, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6e860, 0x6e880, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6e880, 0x6e8a0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6e8a0, 0x6e8c0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6e8c0, 0x6e8e0, indexCPS2_Ken, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6e8e0, 0x6e900, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6e900, 0x6e920, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6e920, 0x6e940, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6e940, 0x6e960, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6e960, 0x6e980, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x6e980, 0x6e9a0, indexCPS2_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6e9a0, 0x6e9c0, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6e9c0, 0x6e9e0, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6e9e0, 0x6ea00, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x6ea00, 0x6ea20, indexCPS2_Ken, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x6ea20, 0x6ea40, indexCPS2_Ken, 0x00 },
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
    { _T("Punch Extra 1"), 0x6ea60, 0x6ea80, indexCPS2_Akuma, 0x00 },
    { _T("Punch Extra 2"), 0x6ea80, 0x6eaa0, indexCPS2_Akuma, 0x00 },
    { _T("Punch Extra 3"), 0x6eaa0, 0x6eac0, indexCPS2_Akuma, 0x00 },
    { _T("Punch Extra 4"), 0x6eac0, 0x6eae0, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6eae0, 0x6eb00, indexCPS2_Akuma, 0x00 },
    { _T("Kick Extra 1"), 0x6eb00, 0x6eb20, indexCPS2_Akuma, 0x00 },
    { _T("Kick Extra 2"), 0x6eb20, 0x6eb40, indexCPS2_Akuma, 0x00 },
    { _T("Kick Extra 3"), 0x6eb40, 0x6eb60, indexCPS2_Akuma, 0x00 },
    { _T("Kick Extra 4"), 0x6eb60, 0x6eb80, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6eb80, 0x6eba0, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Extra 1"), 0x6eba0, 0x6ebc0, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Extra 2"), 0x6ebc0, 0x6ebe0, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Extra 3"), 0x6ebe0, 0x6ec00, indexCPS2_Akuma, 0x00 },
    { _T("2 Punches Extra 4"), 0x6ec00, 0x6ec20, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6ec20, 0x6ec40, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6ec40, 0x6ec60, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6ec60, 0x6ec80, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6ec80, 0x6eca0, indexCPS2_Akuma, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6eca0, 0x6ecc0, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6ecc0, 0x6ece0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6ece0, 0x6ed00, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6ed00, 0x6ed20, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6ed20, 0x6ed40, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x6ed40, 0x6ed60, indexCPS2_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6ed60, 0x6ed80, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6ed80, 0x6eda0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6eda0, 0x6edc0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x6edc0, 0x6ede0, indexCPS2_Akuma, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x6ede0, 0x6ee00, indexCPS2_Akuma, 0x00 },
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
    { _T("Punch Extra 1"), 0x6ee20, 0x6ee40, indexCPS2_Charlie, 0x00 },
    { _T("Punch Extra 2"), 0x6ee40, 0x6ee60, indexCPS2_Charlie, 0x00 },
    { _T("Punch Extra 3"), 0x6ee60, 0x6ee80, indexCPS2_Charlie, 0x00 },
    { _T("Punch Extra 4"), 0x6ee80, 0x6eea0, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6eea0, 0x6eec0, indexCPS2_Charlie, 0x00 },
    { _T("Kick Extra 1"), 0x6eec0, 0x6eee0, indexCPS2_Charlie, 0x00 },
    { _T("Kick Extra 2"), 0x6eee0, 0x6ef00, indexCPS2_Charlie, 0x00 },
    { _T("Kick Extra 3"), 0x6ef00, 0x6ef20, indexCPS2_Charlie, 0x00 },
    { _T("Kick Extra 4"), 0x6ef20, 0x6ef40, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6ef40, 0x6ef60, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches Extra 1"), 0x6ef60, 0x6ef80, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches Extra 2"), 0x6ef80, 0x6efa0, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches Extra 3"), 0x6efa0, 0x6efc0, indexCPS2_Charlie, 0x00 },
    { _T("2 Punches Extra 4"), 0x6efc0, 0x6efe0, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6efe0, 0x6f000, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6f000, 0x6f020, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6f020, 0x6f040, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6f040, 0x6f060, indexCPS2_Charlie, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6f060, 0x6f080, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6f080, 0x6f0a0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6f0a0, 0x6f0c0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6f0c0, 0x6f0e0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6f0e0, 0x6f100, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x6f100, 0x6f120, indexCPS2_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6f120, 0x6f140, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6f140, 0x6f160, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6f160, 0x6f180, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x6f180, 0x6f1a0, indexCPS2_Charlie, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x6f1a0, 0x6f1c0, indexCPS2_Charlie, 0x00 },
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
    { _T("Punch"), 0x6f1c0, 0x6f1e0, indexCPS2_ChunLi, 0x0c },
    { _T("Punch Extra 1"), 0x6f1e0, 0x6f200, indexCPS2_ChunLi, 0x0c },
    { _T("Punch Extra 2"), 0x6f200, 0x6f220, indexCPS2_ChunLi, 0x0c },
    { _T("Punch Extra 3"), 0x6f220, 0x6f240, indexCPS2_ChunLi, 0x0c },
    { _T("Punch Extra 4"), 0x6f240, 0x6f260, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6f260, 0x6f280, indexCPS2_ChunLi, 0x0c },
    { _T("Kick Extra 1"), 0x6f280, 0x6f2a0, indexCPS2_ChunLi, 0x0c },
    { _T("Kick Extra 2"), 0x6f2a0, 0x6f2c0, indexCPS2_ChunLi, 0x0c },
    { _T("Kick Extra 3"), 0x6f2c0, 0x6f2e0, indexCPS2_ChunLi, 0x0c },
    { _T("Kick Extra 4"), 0x6f2e0, 0x6f300, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6f300, 0x6f320, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches Extra 1"), 0x6f320, 0x6f340, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches Extra 2"), 0x6f340, 0x6f360, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches Extra 3"), 0x6f360, 0x6f380, indexCPS2_ChunLi, 0x0c },
    { _T("2 Punches Extra 4"), 0x6f380, 0x6f3a0, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6f3a0, 0x6f3c0, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks Extra 1"), 0x6f3c0, 0x6f3e0, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks Extra 2"), 0x6f3e0, 0x6f400, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks Extra 3"), 0x6f400, 0x6f420, indexCPS2_ChunLi, 0x0c },
    { _T("2 Kicks Extra 4"), 0x6f420, 0x6f440, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6f440, 0x6f460, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch Extra 1"), 0x6f460, 0x6f480, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch Extra 2"), 0x6f480, 0x6f4a0, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch Extra 3"), 0x6f4a0, 0x6f4c0, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Punch Extra 4"), 0x6f4c0, 0x6f4e0, indexCPS2_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6f4e0, 0x6f500, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick Extra 1"), 0x6f500, 0x6f520, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick Extra 2"), 0x6f520, 0x6f540, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick Extra 3"), 0x6f540, 0x6f560, indexCPS2_ChunLi, 0x0c },
    { _T("Auto Guard Kick Extra 4"), 0x6f560, 0x6f580, indexCPS2_ChunLi, 0x0c },
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
    { _T("Punch Extra 3"), 0x6f5e0, 0x6f600, indexCPS2_Adon, 0x00 },
    { _T("Punch Extra 4"), 0x6f600, 0x6f620, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6f620, 0x6f640, indexCPS2_Adon, 0x00 },
    { _T("Kick Extra 1"), 0x6f640, 0x6f660, indexCPS2_Adon, 0x00 },
    { _T("Kick Extra 2"), 0x6f660, 0x6f680, indexCPS2_Adon, 0x00 },
    { _T("Kick Extra 3"), 0x6f680, 0x6f6a0, indexCPS2_Adon, 0x00 },
    { _T("Kick Extra 4"), 0x6f6a0, 0x6f6c0, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6f6c0, 0x6f6e0, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Extra 1"), 0x6f6e0, 0x6f700, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Extra 2"), 0x6f700, 0x6f720, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Extra 3"), 0x6f720, 0x6f740, indexCPS2_Adon, 0x00 },
    { _T("2 Punches Extra 4"), 0x6f740, 0x6f760, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6f760, 0x6f780, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6f780, 0x6f7a0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6f7a0, 0x6f7c0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6f7c0, 0x6f7e0, indexCPS2_Adon, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6f7e0, 0x6f800, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6f800, 0x6f820, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6f820, 0x6f840, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6f840, 0x6f860, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6f860, 0x6f880, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x6f880, 0x6f8a0, indexCPS2_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6f8a0, 0x6f8c0, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6f8c0, 0x6f8e0, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6f8e0, 0x6f900, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x6f900, 0x6f920, indexCPS2_Adon, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x6f920, 0x6f940, indexCPS2_Adon, 0x00 },
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
    { _T("Punch"), 0x6f940, 0x6f960, indexCPS2_Sodom, 0x00 },
    { _T("Punch Extra 1"), 0x6f960, 0x6f980, indexCPS2_Sodom, 0x00 },
    { _T("Punch Extra 2"), 0x6f980, 0x6f9a0, indexCPS2_Sodom, 0x00 },
    { _T("Punch Extra 3"), 0x6f9a0, 0x6f9c0, indexCPS2_Sodom, 0x00 },
    { _T("Punch Extra 4"), 0x6f9c0, 0x6f9e0, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6f9e0, 0x6fa00, indexCPS2_Sodom, 0x00 },
    { _T("Kick Extra 1"), 0x6fa00, 0x6fa20, indexCPS2_Sodom, 0x00 },
    { _T("Kick Extra 2"), 0x6fa20, 0x6fa40, indexCPS2_Sodom, 0x00 },
    { _T("Kick Extra 3"), 0x6fa40, 0x6fa60, indexCPS2_Sodom, 0x00 },
    { _T("Kick Extra 4"), 0x6fa60, 0x6fa80, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6fa80, 0x6faa0, indexCPS2_Sodom, 0x00 },
    { _T("2 Punches Extra 1"), 0x6faa0, 0x6fac0, indexCPS2_Sodom, 0x00 },
    { _T("2 Punches Extra 2"), 0x6fac0, 0x6fae0, indexCPS2_Sodom, 0x00 },
    { _T("2 Punches Extra 3"), 0x6fae0, 0x6fb00, indexCPS2_Sodom, 0x00 },
    { _T("2 Punches Extra 4"), 0x6fb00, 0x6fb20, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6fb20, 0x6fb40, indexCPS2_Sodom, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6fb40, 0x6fb60, indexCPS2_Sodom, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6fb60, 0x6fb80, indexCPS2_Sodom, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6fb80, 0x6fba0, indexCPS2_Sodom, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6fba0, 0x6fbc0, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6fbc0, 0x6fbe0, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6fbe0, 0x6fc00, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6fc00, 0x6fc20, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6fc20, 0x6fc40, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x6fc40, 0x6fc60, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x6fc60, 0x6fc80, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x6fc80, 0x6fca0, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x6fca0, 0x6fcc0, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x6fcc0, 0x6fce0, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x6fce0, 0x6fd00, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_STATUS_PALETTES[] =
{
    { _T("Burned 1"), 0x73a60, 0x73a80, indexCPS2_Sodom, 0x00 },
    { _T("Burned 2"), 0x73a80, 0x73aa0, indexCPS2_Sodom, 0x00 },
    { _T("Psycho Power Burned 1"), 0x73aa0, 0x73ac0, indexCPS2_Sodom, 0x00 },
    { _T("Psycho Power Burned 2"), 0x73ac0, 0x73ae0, indexCPS2_Sodom, 0x00 },
    { _T("Punch CC Shadow 1"), 0x73ae0, 0x73b00, indexCPS2_Sodom, 0x00 },
    { _T("Punch CC Shadow 2"), 0x73b00, 0x73b20, indexCPS2_Sodom, 0x00 },
    { _T("Kick CC Shadow 1"), 0x73b20, 0x73b40, indexCPS2_Sodom, 0x00 },
    { _T("Kick CC Shadow 2"), 0x73b40, 0x73b60, indexCPS2_Sodom, 0x00 },
    { _T("2 Punches CC Shadow 1"), 0x73b60, 0x73b80, indexCPS2_Sodom, 0x00 },
    { _T("2 Punches CC Shadow 2"), 0x73b80, 0x73ba0, indexCPS2_Sodom, 0x00 },
    { _T("2 Kicks CC Shadow 1"), 0x73ba0, 0x73bc0, indexCPS2_Sodom, 0x00 },
    { _T("2 Kicks CC Shadow 2"), 0x73bc0, 0x73be0, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Punch CC Shadow 1"), 0x73be0, 0x73c00, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Punch CC Shadow 2"), 0x73c00, 0x73c20, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Kick CC Shadow 1"), 0x73c20, 0x73c40, indexCPS2_Sodom, 0x00 },
    { _T("Auto Guard Kick CC Shadow 2"), 0x73c40, 0x73c60, indexCPS2_Sodom, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x6fd00, 0x6fd20, indexCPS2_Guy, 0x00 },
    { _T("Punch Extra 1"), 0x6fd20, 0x6fd40, indexCPS2_Guy, 0x00 },
    { _T("Punch Extra 2"), 0x6fd40, 0x6fd60, indexCPS2_Guy, 0x00 },
    { _T("Punch Extra 3"), 0x6fd60, 0x6fd80, indexCPS2_Guy, 0x00 },
    { _T("Punch Extra 4"), 0x6fd80, 0x6fda0, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_KICK_PALETTES[] =
{
    { _T("Kick"), 0x6fda0, 0x6fdc0, indexCPS2_Guy, 0x00 },
    { _T("Kick Extra 1"), 0x6fdc0, 0x6fde0, indexCPS2_Guy, 0x00 },
    { _T("Kick Extra 2"), 0x6fde0, 0x6fe00, indexCPS2_Guy, 0x00 },
    { _T("Kick Extra 3"), 0x6fe00, 0x6fe20, indexCPS2_Guy, 0x00 },
    { _T("Kick Extra 4"), 0x6fe20, 0x6fe40, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x6fe40, 0x6fe60, indexCPS2_Guy, 0x00 },
    { _T("2 Punches Extra 1"), 0x6fe60, 0x6fe80, indexCPS2_Guy, 0x00 },
    { _T("2 Punches Extra 2"), 0x6fe80, 0x6fea0, indexCPS2_Guy, 0x00 },
    { _T("2 Punches Extra 3"), 0x6fea0, 0x6fec0, indexCPS2_Guy, 0x00 },
    { _T("2 Punches Extra 4"), 0x6fec0, 0x6fee0, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x6fee0, 0x6ff00, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks Extra 1"), 0x6ff00, 0x6ff20, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks Extra 2"), 0x6ff20, 0x6ff40, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks Extra 3"), 0x6ff40, 0x6ff60, indexCPS2_Guy, 0x00 },
    { _T("2 Kicks Extra 4"), 0x6ff60, 0x6ff80, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x6ff80, 0x6ffa0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x6ffa0, 0x6ffc0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x6ffc0, 0x6ffe0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x6ffe0, 0x70000, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x70000, 0x70020, indexCPS2_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x70020, 0x70040, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70040, 0x70060, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x70060, 0x70080, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x70080, 0x700a0, indexCPS2_Guy, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x700a0, 0x700c0, indexCPS2_Guy, 0x00 },
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
    { _T("Punch Extra 3"), 0x70120, 0x70140, indexCPS2_Birdie, 0x00 },
    { _T("Punch Extra 4"), 0x70140, 0x70160, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x70160, 0x70180, indexCPS2_Birdie, 0x00 },
    { _T("Kick Extra 1"), 0x70180, 0x701a0, indexCPS2_Birdie, 0x00 },
    { _T("Kick Extra 2"), 0x701a0, 0x701c0, indexCPS2_Birdie, 0x00 },
    { _T("Kick Extra 3"), 0x701c0, 0x701e0, indexCPS2_Birdie, 0x00 },
    { _T("Kick Extra 4"), 0x701e0, 0x70200, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x70200, 0x70220, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Extra 1"), 0x70220, 0x70240, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Extra 2"), 0x70240, 0x70260, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Extra 3"), 0x70260, 0x70280, indexCPS2_Birdie, 0x00 },
    { _T("2 Punches Extra 4"), 0x70280, 0x702a0, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x702a0, 0x702c0, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Extra 1"), 0x702c0, 0x702e0, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Extra 2"), 0x702e0, 0x70300, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Extra 3"), 0x70300, 0x70320, indexCPS2_Birdie, 0x00 },
    { _T("2 Kicks Extra 4"), 0x70320, 0x70340, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70340, 0x70360, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70360, 0x70380, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x70380, 0x703a0, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x703a0, 0x703c0, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x703c0, 0x703e0, indexCPS2_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x703e0, 0x70400, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70400, 0x70420, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x70420, 0x70440, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x70440, 0x70460, indexCPS2_Birdie, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x70460, 0x70480, indexCPS2_Birdie, 0x00 },
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
    { _T("Punch Extra 1"), 0x704a0, 0x704c0, indexCPS2_Rose, 0x00 },
    { _T("Punch Extra 2"), 0x704c0, 0x704e0, indexCPS2_Rose, 0x00 },
    { _T("Punch Extra 3"), 0x704e0, 0x70500, indexCPS2_Rose, 0x00 },
    { _T("Punch Extra 4"), 0x70500, 0x70520, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_PALETTES[] =
{
    { _T("Kick"), 0x70520, 0x70540, indexCPS2_Rose, 0x00 },
    { _T("Kick Extra 1"), 0x70540, 0x70560, indexCPS2_Rose, 0x00 },
    { _T("Kick Extra 2"), 0x70560, 0x70580, indexCPS2_Rose, 0x00 },
    { _T("Kick Extra 3"), 0x70580, 0x705a0, indexCPS2_Rose, 0x00 },
    { _T("Kick Extra 4"), 0x705a0, 0x705c0, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x705c0, 0x705e0, indexCPS2_Rose, 0x00 },
    { _T("2 Punches Extra 1"), 0x705e0, 0x70600, indexCPS2_Rose, 0x00 },
    { _T("2 Punches Extra 2"), 0x70600, 0x70620, indexCPS2_Rose, 0x00 },
    { _T("2 Punches Extra 3"), 0x70620, 0x70640, indexCPS2_Rose, 0x00 },
    { _T("2 Punches Extra 4"), 0x70640, 0x70660, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x70660, 0x70680, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks Extra 1"), 0x70680, 0x706a0, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks Extra 2"), 0x706a0, 0x706c0, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks Extra 3"), 0x706c0, 0x706e0, indexCPS2_Rose, 0x00 },
    { _T("2 Kicks Extra 4"), 0x706e0, 0x70700, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70700, 0x70720, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70720, 0x70740, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x70740, 0x70760, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x70760, 0x70780, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x70780, 0x707a0, indexCPS2_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x707a0, 0x707c0, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x707c0, 0x707e0, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x707e0, 0x70800, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x70800, 0x70820, indexCPS2_Rose, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x70820, 0x70840, indexCPS2_Rose, 0x00 },
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
    { _T("Punch Extra 1"), 0x70860, 0x70880, indexCPS2_Bison, 0x00 },
    { _T("Punch Extra 2"), 0x70880, 0x708a0, indexCPS2_Bison, 0x00 },
    { _T("Punch Extra 3"), 0x708a0, 0x708c0, indexCPS2_Bison, 0x00 },
    { _T("Punch Extra 4"), 0x708c0, 0x708e0, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_PALETTES[] =
{
    { _T("Kick"), 0x708e0, 0x70900, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 1"), 0x70900, 0x70920, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 2"), 0x70920, 0x70940, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 3"), 0x70940, 0x70960, indexCPS2_Bison, 0x00 },
    { _T("Kick Extra 4"), 0x70960, 0x70980, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x70980, 0x709a0, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 1"), 0x709a0, 0x709c0, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 2"), 0x709c0, 0x709e0, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 3"), 0x709e0, 0x70a00, indexCPS2_Bison, 0x00 },
    { _T("2 Punches Extra 4"), 0x70a00, 0x70a20, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x70a20, 0x70a40, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 1"), 0x70a40, 0x70a60, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 2"), 0x70a60, 0x70a80, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 3"), 0x70a80, 0x70aa0, indexCPS2_Bison, 0x00 },
    { _T("2 Kicks Extra 4"), 0x70aa0, 0x70ac0, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70ac0, 0x70ae0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70ae0, 0x70b00, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x70b00, 0x70b20, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x70b20, 0x70b40, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x70b40, 0x70b60, indexCPS2_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x70b60, 0x70b80, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70b80, 0x70ba0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x70ba0, 0x70bc0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x70bc0, 0x70be0, indexCPS2_Bison, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x70be0, 0x70c00, indexCPS2_Bison, 0x00 },
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
    { _T("Punch Extra 1"), 0x70c20, 0x70c40, indexCPS2_Sagat, 0x00 },
    { _T("Punch Extra 2"), 0x70c40, 0x70c60, indexCPS2_Sagat, 0x00 },
    { _T("Punch Extra 3"), 0x70c60, 0x70c80, indexCPS2_Sagat, 0x00 },
    { _T("Punch Extra 4"), 0x70c80, 0x70ca0, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_KICK_PALETTES[] =
{
    { _T("Kick"), 0x70ca0, 0x70cc0, indexCPS2_Sagat, 0x00 },
    { _T("Kick Extra 1"), 0x70cc0, 0x70ce0, indexCPS2_Sagat, 0x00 },
    { _T("Kick Extra 2"), 0x70ce0, 0x70d00, indexCPS2_Sagat, 0x00 },
    { _T("Kick Extra 3"), 0x70d00, 0x70d20, indexCPS2_Sagat, 0x00 },
    { _T("Kick Extra 4"), 0x70d20, 0x70d40, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x70d40, 0x70d60, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Extra 1"), 0x70d60, 0x70d80, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Extra 2"), 0x70d80, 0x70da0, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Extra 3"), 0x70da0, 0x70dc0, indexCPS2_Sagat, 0x00 },
    { _T("2 Punches Extra 4"), 0x70dc0, 0x70de0, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x70de0, 0x70e00, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Extra 1"), 0x70e00, 0x70e20, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Extra 2"), 0x70e20, 0x70e40, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Extra 3"), 0x70e40, 0x70e60, indexCPS2_Sagat, 0x00 },
    { _T("2 Kicks Extra 4"), 0x70e60, 0x70e80, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x70e80, 0x70ea0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x70ea0, 0x70ec0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x70ec0, 0x70ee0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x70ee0, 0x70f00, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x70f00, 0x70f20, indexCPS2_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x70f20, 0x70f40, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x70f40, 0x70f60, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x70f60, 0x70f80, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x70f80, 0x70fa0, indexCPS2_Sagat, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x70fa0, 0x70fc0, indexCPS2_Sagat, 0x00 },
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
    { _T("Punch Extra 3"), 0x71020, 0x71040, indexCPS2_Dan, 0x00 },
    { _T("Punch Extra 4"), 0x71040, 0x71060, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71060, 0x71080, indexCPS2_Dan, 0x00 },
    { _T("Kick Extra 1"), 0x71080, 0x710a0, indexCPS2_Dan, 0x00 },
    { _T("Kick Extra 2"), 0x710a0, 0x710c0, indexCPS2_Dan, 0x00 },
    { _T("Kick Extra 3"), 0x710c0, 0x710e0, indexCPS2_Dan, 0x00 },
    { _T("Kick Extra 4"), 0x710e0, 0x71100, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x71100, 0x71120, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Extra 1"), 0x71120, 0x71140, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Extra 2"), 0x71140, 0x71160, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Extra 3"), 0x71160, 0x71180, indexCPS2_Dan, 0x00 },
    { _T("2 Punches Extra 4"), 0x71180, 0x711a0, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x711a0, 0x711c0, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Extra 1"), 0x711c0, 0x711e0, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Extra 2"), 0x711e0, 0x71200, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Extra 3"), 0x71200, 0x71220, indexCPS2_Dan, 0x00 },
    { _T("2 Kicks Extra 4"), 0x71220, 0x71240, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71240, 0x71260, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71260, 0x71280, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71280, 0x712a0, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x712a0, 0x712c0, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x712c0, 0x712e0, indexCPS2_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x712e0, 0x71300, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x71300, 0x71320, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x71320, 0x71340, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x71340, 0x71360, indexCPS2_Dan, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x71360, 0x71380, indexCPS2_Dan, 0x00 },
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
    { _T("Punch Extra 3"), 0x713e0, 0x71400, indexCPS2_Sakura, 0x00 },
    { _T("Punch Extra 4"), 0x71400, 0x71420, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71420, 0x71440, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 1"), 0x71440, 0x71460, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 2"), 0x71460, 0x71480, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 3"), 0x71480, 0x714a0, indexCPS2_Sakura, 0x00 },
    { _T("Kick Extra 4"), 0x714a0, 0x714c0, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x714c0, 0x714e0, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 1"), 0x714e0, 0x71500, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 2"), 0x71500, 0x71520, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 3"), 0x71520, 0x71540, indexCPS2_Sakura, 0x00 },
    { _T("2 Punches Extra 4"), 0x71540, 0x71560, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71560, 0x71580, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71580, 0x715a0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 2"), 0x715a0, 0x715c0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 3"), 0x715c0, 0x715e0, indexCPS2_Sakura, 0x00 },
    { _T("2 Kicks Extra 4"), 0x715e0, 0x71600, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71600, 0x71620, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71620, 0x71640, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71640, 0x71660, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x71660, 0x71680, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x71680, 0x716a0, indexCPS2_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x716a0, 0x716c0, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x716c0, 0x716e0, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x716e0, 0x71700, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x71700, 0x71720, indexCPS2_Sakura, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x71720, 0x71740, indexCPS2_Sakura, 0x00 },
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
    { _T("Punch Extra 3"), 0x717a0, 0x717c0, indexCPS2_Rolento, 0x00 },
    { _T("Punch Extra 4"), 0x717c0, 0x717e0, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_KICK_PALETTES[] =
{
    { _T("Kick"), 0x717e0, 0x71800, indexCPS2_Rolento, 0x00 },
    { _T("Kick Extra 1"), 0x71800, 0x71820, indexCPS2_Rolento, 0x00 },
    { _T("Kick Extra 2"), 0x71820, 0x71840, indexCPS2_Rolento, 0x00 },
    { _T("Kick Extra 3"), 0x71840, 0x71860, indexCPS2_Rolento, 0x00 },
    { _T("Kick Extra 4"), 0x71860, 0x71880, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x71880, 0x718a0, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Extra 1"), 0x718a0, 0x718c0, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Extra 2"), 0x718c0, 0x718e0, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Extra 3"), 0x718e0, 0x71900, indexCPS2_Rolento, 0x00 },
    { _T("2 Punches Extra 4"), 0x71900, 0x71920, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71920, 0x71940, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71940, 0x71960, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Extra 2"), 0x71960, 0x71980, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Extra 3"), 0x71980, 0x719a0, indexCPS2_Rolento, 0x00 },
    { _T("2 Kicks Extra 4"), 0x719a0, 0x719c0, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x719c0, 0x719e0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x719e0, 0x71a00, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71a00, 0x71a20, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x71a20, 0x71a40, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x71a40, 0x71a60, indexCPS2_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x71a60, 0x71a80, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x71a80, 0x71aa0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x71aa0, 0x71ac0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x71ac0, 0x71ae0, indexCPS2_Rolento, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x71ae0, 0x71b00, indexCPS2_Rolento, 0x00 },
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
    { _T("Punch Extra 3"), 0x71b60, 0x71b80, indexCPS2_Dhalsim, 0x00 },
    { _T("Punch Extra 4"), 0x71b80, 0x71ba0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71ba0, 0x71bc0, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 1"), 0x71bc0, 0x71be0, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 2"), 0x71be0, 0x71c00, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 3"), 0x71c00, 0x71c20, indexCPS2_Dhalsim, 0x00 },
    { _T("Kick Extra 4"), 0x71c20, 0x71c40, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x71c40, 0x71c60, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 1"), 0x71c60, 0x71c80, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 2"), 0x71c80, 0x71ca0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 3"), 0x71ca0, 0x71cc0, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Punches Extra 4"), 0x71cc0, 0x71ce0, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x71ce0, 0x71d00, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 1"), 0x71d00, 0x71d20, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 2"), 0x71d20, 0x71d40, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 3"), 0x71d40, 0x71d60, indexCPS2_Dhalsim, 0x00 },
    { _T("2 Kicks Extra 4"), 0x71d60, 0x71d80, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x71d80, 0x71da0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x71da0, 0x71dc0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x71dc0, 0x71de0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x71de0, 0x71e00, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x71e00, 0x71e20, indexCPS2_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x71e20, 0x71e40, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x71e40, 0x71e60, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x71e60, 0x71e80, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x71e80, 0x71ea0, indexCPS2_Dhalsim, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x71ea0, 0x71ec0, indexCPS2_Dhalsim, 0x00 },
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
    { _T("Punch Extra 3"), 0x71f20, 0x71f40, indexCPS2_Zangief, 0x00 },
    { _T("Punch Extra 4"), 0x71f40, 0x71f60, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_KICK_PALETTES[] =
{
    { _T("Kick"), 0x71f60, 0x71f80, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 1"), 0x71f80, 0x71fa0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 2"), 0x71fa0, 0x71fc0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 3"), 0x71fc0, 0x71fe0, indexCPS2_Zangief, 0x00 },
    { _T("Kick Extra 4"), 0x71fe0, 0x72000, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x72000, 0x72020, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 1"), 0x72020, 0x72040, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 2"), 0x72040, 0x72060, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 3"), 0x72060, 0x72080, indexCPS2_Zangief, 0x00 },
    { _T("2 Punches Extra 4"), 0x72080, 0x720a0, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x720a0, 0x720c0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 1"), 0x720c0, 0x720e0, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 2"), 0x720e0, 0x72100, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 3"), 0x72100, 0x72120, indexCPS2_Zangief, 0x00 },
    { _T("2 Kicks Extra 4"), 0x72120, 0x72140, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x72140, 0x72160, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x72160, 0x72180, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72180, 0x721a0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x721a0, 0x721c0, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x721c0, 0x721e0, indexCPS2_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x721e0, 0x72200, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x72200, 0x72220, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x72220, 0x72240, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x72240, 0x72260, indexCPS2_Zangief, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x72260, 0x72280, indexCPS2_Zangief, 0x00 },
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
    { _T("Punch Extra 3"), 0x722e0, 0x72300, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 4"), 0x72300, 0x72320, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_KICK_PALETTES[] =
{
    { _T("Kick"), 0x72320, 0x72340, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 1"), 0x72340, 0x72360, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 2"), 0x72360, 0x72380, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 3"), 0x72380, 0x723a0, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 4"), 0x723a0, 0x723c0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x723c0, 0x723e0, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 1"), 0x723e0, 0x72400, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 2"), 0x72400, 0x72420, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 3"), 0x72420, 0x72440, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 4"), 0x72440, 0x72460, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x72460, 0x72480, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 1"), 0x72480, 0x724a0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 2"), 0x724a0, 0x724c0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 3"), 0x724c0, 0x724e0, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 4"), 0x724e0, 0x72500, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x72500, 0x72520, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x72520, 0x72540, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72540, 0x72560, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x72560, 0x72580, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x72580, 0x725a0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x725a0, 0x725c0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x725c0, 0x725e0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x725e0, 0x72600, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x72600, 0x72620, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x72620, 0x72640, indexCPS2_Gen, 0x00 },
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
    { _T("Punch"), 0x72640, 0x72660, indexCPS2_ChunLi, 0x00 },
    { _T("Punch Extra 1"), 0x72660, 0x72680, indexCPS2_ChunLi, 0x00 },
    { _T("Punch Extra 2"), 0x72680, 0x726a0, indexCPS2_ChunLi, 0x00 },
    { _T("Punch Extra 3"), 0x726a0, 0x726c0, indexCPS2_ChunLi, 0x00 },
    { _T("Punch Extra 4"), 0x726c0, 0x726e0, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_KICK_PALETTES[] =
{
    { _T("Kick"), 0x726e0, 0x72700, indexCPS2_ChunLi, 0x00 },
    { _T("Kick Extra 1"), 0x72700, 0x72720, indexCPS2_ChunLi, 0x00 },
    { _T("Kick Extra 2"), 0x72720, 0x72740, indexCPS2_ChunLi, 0x00 },
    { _T("Kick Extra 3"), 0x72740, 0x72760, indexCPS2_ChunLi, 0x00 },
    { _T("Kick Extra 4"), 0x72760, 0x72780, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x72780, 0x727a0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches Extra 1"), 0x727a0, 0x727c0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches Extra 2"), 0x727c0, 0x727e0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches Extra 3"), 0x727e0, 0x72800, indexCPS2_ChunLi, 0x00 },
    { _T("2 Punches Extra 4"), 0x72800, 0x72820, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x72820, 0x72840, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks Extra 1"), 0x72840, 0x72860, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks Extra 2"), 0x72860, 0x72880, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks Extra 3"), 0x72880, 0x728a0, indexCPS2_ChunLi, 0x00 },
    { _T("2 Kicks Extra 4"), 0x728a0, 0x728c0, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x728c0, 0x728e0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x728e0, 0x72900, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72900, 0x72920, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x72920, 0x72940, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x72940, 0x72960, indexCPS2_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x72960, 0x72980, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x72980, 0x729a0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x729a0, 0x729c0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x729c0, 0x729e0, indexCPS2_ChunLi, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x729e0, 0x72a00, indexCPS2_ChunLi, 0x00 },
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

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_PUNCH_PALETTES[] =
{
    { _T("Punch"), 0x72a00, 0x72a20, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 1"), 0x72a20, 0x72a40, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 2"), 0x72a40, 0x72a60, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 3"), 0x72a60, 0x72a80, indexCPS2_Gen, 0x00 },
    { _T("Punch Extra 4"), 0x72a80, 0x72aa0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_KICK_PALETTES[] =
{
    { _T("Kick"), 0x72aa0, 0x72ac0, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 1"), 0x72ac0, 0x72ae0, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 2"), 0x72ae0, 0x72b00, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 3"), 0x72b00, 0x72b20, indexCPS2_Gen, 0x00 },
    { _T("Kick Extra 4"), 0x72b20, 0x72b40, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_2PUNCHES_PALETTES[] =
{
    { _T("2 Punches"), 0x72b40, 0x72b60, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 1"), 0x72b60, 0x72b80, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 2"), 0x72b80, 0x72ba0, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 3"), 0x72ba0, 0x72bc0, indexCPS2_Gen, 0x00 },
    { _T("2 Punches Extra 4"), 0x72bc0, 0x72be0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_2KICKS_PALETTES[] =
{
    { _T("2 Kicks"), 0x72be0, 0x72c00, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 1"), 0x72c00, 0x72c20, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 2"), 0x72c20, 0x72c40, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 3"), 0x72c40, 0x72c60, indexCPS2_Gen, 0x00 },
    { _T("2 Kicks Extra 4"), 0x72c60, 0x72c80, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_AUTOGUARDPUNCH_PALETTES[] =
{
    { _T("Auto Guard Punch"), 0x72c80, 0x72ca0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 1"), 0x72ca0, 0x72cc0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 2"), 0x72cc0, 0x72ce0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 3"), 0x72ce0, 0x72d00, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Punch Extra 4"), 0x72d00, 0x72d20, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_AUTOGUARDKICK_PALETTES[] =
{
    { _T("Auto Guard Kick"), 0x72d20, 0x72d40, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 1"), 0x72d40, 0x72d60, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 2"), 0x72d60, 0x72d80, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 3"), 0x72d80, 0x72da0, indexCPS2_Gen, 0x00 },
    { _T("Auto Guard Kick Extra 4"), 0x72da0, 0x72dc0, indexCPS2_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENALTCOSTUME_STATUS_PALETTES[] =
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

const sDescTreeNode SFA2_A_GENALTCOSTUME_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_KICK_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_KICK_PALETTES) },
    { _T("2 Punches"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_2PUNCHES_PALETTES) },
    { _T("2 Kicks"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_2KICKS_PALETTES) },
    { _T("Auto Guard Punch"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_AUTOGUARDPUNCH_PALETTES) },
    { _T("Auto Guard Kick"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_AUTOGUARDKICK_PALETTES) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA2_A_GENALTCOSTUME_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GENALTCOSTUME_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_UNITS[SFA2_A_NUM_IND] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { _T("Akuma"),           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { _T("Chun-Li (Original)"), DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { _T("Dhalsim"),         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { _T("Gen"),             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
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
};

// We extend this array with data groveled from the SFA2e.txt extensible extras file, if any.
const stExtraDef SFA2_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
