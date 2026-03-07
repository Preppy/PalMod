#pragma once

// Be careful of modifications here: there are a lot of shifty SFA2 revisions

const std::vector<uint16_t> SFA2_A_IMGIDS_USED =
{
    indexCPS2Sprites_Ryu,               // 0x00,
    indexCPS2Sprites_Zangief,           // 0x01,
    indexCPS2Sprites_ChunLi,            // 0x1B,
    indexCPS2Sprites_Akuma,             // 0x1E,
    indexCPS2Sprites_Charlie,           // 0x21,
    indexCPS2Sprites_Sakura,            // 0x22,
    indexCPS2Sprites_Dan,               // 0x23,
    indexCPS2Sprites_Dhalsim,           // 0x25,
    indexCPS2Sprites_Bison,             // 0x26,
    indexCPS2Sprites_Ken,               // 0x27,
    indexCPS2Sprites_Adon,              // 0x3D,
    indexCPS2Sprites_Sodom,             // 0x3E,
    indexCPS2Sprites_Guy,               // 0x3F,
    indexCPS2Sprites_Birdie,            // 0x40,
    indexCPS2Sprites_Rose,              // 0x41,
    indexCPS2Sprites_Sagat,             // 0x42,
    indexCPS2Sprites_Rolento,           // 0x43,
    indexCPS2Sprites_Gen,               // 0x44,
    indexCPS2Sprites_SFA2Portraits,     // 0x58
    indexCPS2Sprites_SFA2_Bonus,        // 0x7f
    indexCPS2Sprites_SFA2_Stages,       // 0x80
};

const sGame_PaletteDataset SFA2_A_RYU_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6e2be, 0x6e2de, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Hadoken", 0x6e2de, 0x6e2fe, indexCPS2Sprites_Ryu, 0x01 },
    { L"Punch Extra 2", 0x6e2fe, 0x6e31e },
    { L"Punch Super Trail Light", 0x6e31e, 0x6e33e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Super Trail Dark", 0x6e33e, 0x6e35e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_KICK_PALETTES[] =
{
    { L"Kick", 0x6e35e, 0x6e37e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Hadoken", 0x6e37e, 0x6e39e, indexCPS2Sprites_Ryu, 0x01 },
    { L"Kick Extra 2", 0x6e39e, 0x6e3be },
    { L"Kick Super Trail Light", 0x6e3be, 0x6e3de, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Super Trail Dark", 0x6e3de, 0x6e3fe, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6e3fe, 0x6e41e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Hadoken", 0x6e41e, 0x6e43e, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Punches Extra 2", 0x6e43e, 0x6e45e },
    { L"2 Punches Super Trail Light", 0x6e45e, 0x6e47e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Super Trail Dark", 0x6e47e, 0x6e49e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6e49e, 0x6e4be, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Hadoken", 0x6e4be, 0x6e4de, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Kicks Extra 2", 0x6e4de, 0x6e4fe },
    { L"2 Kicks Super Trail Light", 0x6e4fe, 0x6e51e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x6e51e, 0x6e53e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6e53e, 0x6e55e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Hadoken", 0x6e55e, 0x6e57e, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x6e57e, 0x6e59e },
    { L"Auto Guard Punch Super Trail Light", 0x6e59e, 0x6e5be, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x6e5be, 0x6e5de, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6e5de, 0x6e5fe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Hadoken", 0x6e5fe, 0x6e61e, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x6e61e, 0x6e63e },
    { L"Auto Guard Kick Super Trail Light", 0x6e63e, 0x6e65e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x6e65e, 0x6e67e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x72e5e, 0x72e7e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Burned 2", 0x72e7e, 0x72e9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Psycho Power Burned 1", 0x72e9e, 0x72ebe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Psycho Power Burned 2", 0x72ebe, 0x72ede, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch CC Shadow 1", 0x72ede, 0x72f00 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch CC Shadow 2", 0x72f00 - 0x02, 0x72f1e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick CC Shadow 1", 0x72f1e, 0x72f3e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick CC Shadow 2", 0x72f3e, 0x72f5e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches CC Shadow 1", 0x72f5e, 0x72f7e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches CC Shadow 2", 0x72f7e, 0x72f9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x72f9e, 0x72fbe, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x72fbe, 0x72fde, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x72fde, 0x72ffe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x72ffe, 0x7301e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7301e, 0x7303e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7303e, 0x7305e, indexCPS2Sprites_Ryu, 0x00 },
};
 
const sGame_PaletteDataset SFA2_A_KEN_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6e67e, 0x6e69e, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch Extra 1", 0x6e69e, 0x6e6be, indexCPS2Sprites_Ken, 0x01 },
    { L"Punch Extra 2", 0x6e6be, 0x6e6de, indexCPS2Sprites_Ken, 0x08 },
    { L"Punch Super Trail Light", 0x6e6de, 0x6e6fe, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch Super Trail Dark", 0x6e6fe, 0x6e71e, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_KICK_PALETTES[] =
{
    { L"Kick", 0x6e71e, 0x6e73e, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick Extra 1", 0x6e73e, 0x6e75e, indexCPS2Sprites_Ken, 0x01 },
    { L"Kick Extra 2", 0x6e75e, 0x6e77e, indexCPS2Sprites_Ken, 0x08 },
    { L"Kick Super Trail Light", 0x6e77e, 0x6e79e, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick Super Trail Dark", 0x6e79e, 0x6e7be, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6e7be, 0x6e7de, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches Extra 1", 0x6e7de, 0x6e7fe, indexCPS2Sprites_Ken, 0x01 },
    { L"2 Punches Extra 2", 0x6e7fe, 0x6e81e, indexCPS2Sprites_Ken, 0x08 },
    { L"2 Punches Super Trail Light", 0x6e81e, 0x6e83e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches Super Trail Dark", 0x6e83e, 0x6e85e, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6e85e, 0x6e87e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks Extra 1", 0x6e87e, 0x6e89e, indexCPS2Sprites_Ken, 0x01 },
    { L"2 Kicks Extra 2", 0x6e89e, 0x6e8be, indexCPS2Sprites_Ken, 0x08 },
    { L"2 Kicks Super Trail Light", 0x6e8be, 0x6e8de, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x6e8de, 0x6e8fe, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6e8fe, 0x6e91e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x6e91e, 0x6e93e, indexCPS2Sprites_Ken, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x6e93e, 0x6e95e, indexCPS2Sprites_Ken, 0x08 },
    { L"Auto Guard Punch Super Trail Light", 0x6e95e, 0x6e97e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x6e97e, 0x6e99e, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6e99e, 0x6e9be, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x6e9be, 0x6e9de, indexCPS2Sprites_Ken, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x6e9de, 0x6ea00 - 0x02, indexCPS2Sprites_Ken, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x6ea00 - 0x02, 0x6ea1e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x6ea1e, 0x6ea3e, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_KEN_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7305e, 0x7307e, indexCPS2Sprites_Ken, 0x00 },
    { L"Burned 2", 0x7307e, 0x7309e, indexCPS2Sprites_Ken, 0x00 },
    { L"Psycho Power Burned 1", 0x7309e, 0x730be, indexCPS2Sprites_Ken, 0x00 },
    { L"Psycho Power Burned 2", 0x730be, 0x730de, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch CC Shadow 1", 0x730de, 0x730fe, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch CC Shadow 2", 0x730fe, 0x7311e, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick CC Shadow 1", 0x7311e, 0x7313e, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick CC Shadow 2", 0x7313e, 0x7315e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7315e, 0x7317e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7317e, 0x7319e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7319e, 0x731be, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x731be, 0x731de, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x731de, 0x731fe, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x731fe, 0x7321e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7321e, 0x7323e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7323e, 0x7325e, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6ea3e, 0x6ea5e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Punch Extra 1", 0x6ea5e, 0x6ea7e, indexCPS2Sprites_Akuma, 0x0c },
    { L"Punch Extra 2", 0x6ea7e, 0x6ea9e },
    { L"Punch Super Trail Light", 0x6ea9e, 0x6eabe, indexCPS2Sprites_Akuma, 0x00 },
    { L"Punch Super Trail Dark", 0x6eabe, 0x6eade, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_PALETTES[] =
{
    { L"Kick", 0x6eade, 0x6eb00 - 0x02, indexCPS2Sprites_Akuma, 0x00 },
    { L"Kick Extra 1", 0x6eb00 - 0x02, 0x6eb1e, indexCPS2Sprites_Akuma, 0x0c },
    { L"Kick Extra 2", 0x6eb1e, 0x6eb3e },
    { L"Kick Super Trail Light", 0x6eb3e, 0x6eb5e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Kick Super Trail Dark", 0x6eb5e, 0x6eb7e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6eb7e, 0x6eb9e, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Punches Extra 1", 0x6eb9e, 0x6ebbe, indexCPS2Sprites_Akuma, 0x0c },
    { L"2 Punches Extra 2", 0x6ebbe, 0x6ebde },
    { L"2 Punches Super Trail Light", 0x6ebde, 0x6ec00 - 0x02, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Punches Super Trail Dark", 0x6ec00 - 0x02, 0x6ec1e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6ec1e, 0x6ec3e, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Kicks Extra 1", 0x6ec3e, 0x6ec5e, indexCPS2Sprites_Akuma, 0x0c },
    { L"2 Kicks Extra 2", 0x6ec5e, 0x6ec7e },
    { L"2 Kicks Super Trail Light", 0x6ec7e, 0x6ec9e, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x6ec9e, 0x6ecbe, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6ecbe, 0x6ecde, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x6ecde, 0x6ed00 - 0x02, indexCPS2Sprites_Akuma, 0x0c },
    { L"Auto Guard Punch Extra 2", 0x6ed00 - 0x02, 0x6ed1e },
    { L"Auto Guard Punch Super Trail Light", 0x6ed1e, 0x6ed3e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x6ed3e, 0x6ed5e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6ed5e, 0x6ed7e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x6ed7e, 0x6ed9e, indexCPS2Sprites_Akuma, 0x0c },
    { L"Auto Guard Kick Extra 2", 0x6ed9e, 0x6edbe },
    { L"Auto Guard Kick Super Trail Light", 0x6edbe, 0x6edde, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x6edde, 0x6ee00 - 0x02, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7325e, 0x7327e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Burned 2", 0x7327e, 0x7329e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Psycho Power Burned 1", 0x7329e, 0x732be, indexCPS2Sprites_Akuma, 0x00 },
    { L"Psycho Power Burned 2", 0x732be, 0x732de, indexCPS2Sprites_Akuma, 0x00 },
    { L"Punch CC Shadow 1", 0x732de, 0x732fe, indexCPS2Sprites_Akuma, 0x00 },
    { L"Punch CC Shadow 2", 0x732fe, 0x7331e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Kick CC Shadow 1", 0x7331e, 0x7333e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Kick CC Shadow 2", 0x7333e, 0x7335e, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7335e, 0x7337e, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7337e, 0x7339e, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7339e, 0x733be, indexCPS2Sprites_Akuma, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x733be, 0x733de, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x733de, 0x733fe, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x733fe, 0x7341e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7341e, 0x7343e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7343e, 0x7345e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6ee00 - 0x02, 0x6ee1e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Punch Sonic Boom", 0x6ee1e, 0x6ee3e, indexCPS2Sprites_Charlie, 0x01 },
    { L"Punch Flash Kick", 0x6ee3e, 0x6ee5e, indexCPS2Sprites_Charlie, 0x02 },
    { L"Punch Super Trail Light", 0x6ee5e, 0x6ee7e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Punch Super Trail Dark", 0x6ee7e, 0x6ee9e, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_KICK_PALETTES[] =
{
    { L"Kick", 0x6ee9e, 0x6eebe, indexCPS2Sprites_Charlie, 0x00 },
    { L"Kick Sonic Boom", 0x6eebe, 0x6eede, indexCPS2Sprites_Charlie, 0x01 },
    { L"Kick Flash Kick", 0x6eede, 0x6ef00 - 0x02, indexCPS2Sprites_Charlie, 0x02 },
    { L"Kick Super Trail Light", 0x6ef00 - 0x02, 0x6ef1e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Kick Super Trail Dark", 0x6ef1e, 0x6ef3e, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6ef3e, 0x6ef5e, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Punches Sonic Boom", 0x6ef5e, 0x6ef7e, indexCPS2Sprites_Charlie, 0x01 },
    { L"2 Punches Flash Kick", 0x6ef7e, 0x6ef9e, indexCPS2Sprites_Charlie, 0x02 },
    { L"2 Punches Super Trail Light", 0x6ef9e, 0x6efbe, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Punches Super Trail Dark", 0x6efbe, 0x6efde, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6efde, 0x6f000 - 0x02, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Kicks Sonic Boom", 0x6f000 - 0x02, 0x6f01e, indexCPS2Sprites_Charlie, 0x01 },
    { L"2 Kicks Flash Kick", 0x6f01e, 0x6f03e, indexCPS2Sprites_Charlie, 0x02 },
    { L"2 Kicks Super Trail Light", 0x6f03e, 0x6f05e, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x6f05e, 0x6f07e, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6f07e, 0x6f09e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Punch Sonic Boom", 0x6f09e, 0x6f0be, indexCPS2Sprites_Charlie, 0x01 },
    { L"Auto Guard Punch Flash Kick", 0x6f0be, 0x6f0de, indexCPS2Sprites_Charlie, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x6f0de, 0x6f0fe, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x6f0fe, 0x6f11e, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6f11e, 0x6f13e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Kick Sonic Boom", 0x6f13e, 0x6f15e, indexCPS2Sprites_Charlie, 0x01 },
    { L"Auto Guard Kick Flash Kick", 0x6f15e, 0x6f17e, indexCPS2Sprites_Charlie, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x6f17e, 0x6f19e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x6f19e, 0x6f1be, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7345e, 0x7347e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Burned 2", 0x7347e, 0x7349e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Psycho Power Burned 1", 0x7349e, 0x734be, indexCPS2Sprites_Charlie, 0x00 },
    { L"Psycho Power Burned 2", 0x734be, 0x734de, indexCPS2Sprites_Charlie, 0x00 },
    { L"Punch CC Shadow 1", 0x734de, 0x734fe, indexCPS2Sprites_Charlie, 0x00 },
    { L"Punch CC Shadow 2", 0x734fe, 0x7351e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Kick CC Shadow 1", 0x7351e, 0x7353e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Kick CC Shadow 2", 0x7353e, 0x7355e, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7355e, 0x7357e, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7357e, 0x7359e, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7359e, 0x735be, indexCPS2Sprites_Charlie, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x735be, 0x735de, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x735de, 0x735fe, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x735fe, 0x7361e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7361e, 0x7363e, indexCPS2Sprites_Charlie, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7363e, 0x7365e, indexCPS2Sprites_Charlie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6f1be, 0x6f1de, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"Punch Keiokuken (shades)", 0x6f1de, 0x6f1fe, indexCPS2Sprites_ChunLi, 0x0f },
    { L"Punch Extra 2", 0x6f1fe, 0x6f21e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Punch Super Trail Light", 0x6f21e, 0x6f23e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Punch Super Trail Dark", 0x6f23e, 0x6f25e, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_KICK_PALETTES[] =
{
    { L"Kick", 0x6f25e, 0x6f27e, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"Kick Keiokuken (shades)", 0x6f27e, 0x6f29e, indexCPS2Sprites_ChunLi, 0x0f },
    { L"Kick Extra 2", 0x6f29e, 0x6f2be, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Kick Super Trail Light", 0x6f2be, 0x6f2de, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Kick Super Trail Dark", 0x6f2de, 0x6f2fe, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6f2fe, 0x6f31e, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"2 Punches Keiokuken (shades)", 0x6f31e, 0x6f33e, indexCPS2Sprites_ChunLi, 0x0f },
    { L"2 Punches Extra 2", 0x6f33e, 0x6f35e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"2 Punches Super Trail Light", 0x6f35e, 0x6f37e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"2 Punches Super Trail Dark", 0x6f37e, 0x6f39e, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6f39e, 0x6f3be, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"2 Kicks Keiokuken (shades)", 0x6f3be, 0x6f3de, indexCPS2Sprites_ChunLi, 0x0f },
    { L"2 Kicks Extra 2", 0x6f3de, 0x6f3fe, indexCPS2Sprites_ChunLi, 0x02 },
    { L"2 Kicks Super Trail Light", 0x6f3fe, 0x6f41e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"2 Kicks Super Trail Dark", 0x6f41e, 0x6f43e, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6f43e, 0x6f45e, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"Auto Guard Punch Keiokuken (shades)", 0x6f45e, 0x6f47e, indexCPS2Sprites_ChunLi, 0x0f },
    { L"Auto Guard Punch Extra 2", 0x6f47e, 0x6f49e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x6f49e, 0x6f4be, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Auto Guard Punch Super Trail Dark", 0x6f4be, 0x6f4de, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6f4de, 0x6f4fe, indexCPS2Sprites_ChunLi, 0x0c, &pairNext },
    { L"Auto Guard Kick Keiokuken (shades)", 0x6f4fe, 0x6f51e, indexCPS2Sprites_ChunLi, 0x0f },
    { L"Auto Guard Kick Extra 2", 0x6f51e, 0x6f53e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x6f53e, 0x6f55e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Auto Guard Kick Super Trail Dark", 0x6f55e, 0x6f57e, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7365e, 0x7367e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Burned 2", 0x7367e, 0x7369e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Psycho Power Burned 1", 0x7369e, 0x736be, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Psycho Power Burned 2", 0x736be, 0x736de, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Punch CC Shadow 1", 0x736de, 0x736fe, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Punch CC Shadow 2", 0x736fe, 0x7371e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Kick CC Shadow 1", 0x7371e, 0x7373e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Kick CC Shadow 2", 0x7373e, 0x7375e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"2 Punches CC Shadow 1", 0x7375e, 0x7377e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"2 Punches CC Shadow 2", 0x7377e, 0x7379e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"2 Kicks CC Shadow 1", 0x7379e, 0x737be, indexCPS2Sprites_ChunLi, 0x0c },
    { L"2 Kicks CC Shadow 2", 0x737be, 0x737de, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Auto Guard Punch CC Shadow 1", 0x737de, 0x737fe, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Auto Guard Punch CC Shadow 2", 0x737fe, 0x7381e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Auto Guard Kick CC Shadow 1", 0x7381e, 0x7383e, indexCPS2Sprites_ChunLi, 0x0c },
    { L"Auto Guard Kick CC Shadow 2", 0x7383e, 0x7385e, indexCPS2Sprites_ChunLi, 0x0c },
};

const sGame_PaletteDataset SFA2_A_ADON_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6f57e, 0x6f59e, indexCPS2Sprites_Adon, 0x00 },
    { L"Punch Extra 1", 0x6f59e, 0x6f5be, indexCPS2Sprites_Adon, 0x01 },
    { L"Punch Extra 2", 0x6f5be, 0x6f5de },
    { L"Punch Super Trail Light", 0x6f5de, 0x6f5fe, indexCPS2Sprites_Adon, 0x00 },
    { L"Punch Super Trail Dark", 0x6f5fe, 0x6f61e, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_KICK_PALETTES[] =
{
    { L"Kick", 0x6f61e, 0x6f63e, indexCPS2Sprites_Adon, 0x00 },
    { L"Kick Extra 1", 0x6f63e, 0x6f65e, indexCPS2Sprites_Adon, 0x01 },
    { L"Kick Extra 2", 0x6f65e, 0x6f67e },
    { L"Kick Super Trail Light", 0x6f67e, 0x6f69e, indexCPS2Sprites_Adon, 0x00 },
    { L"Kick Super Trail Dark", 0x6f69e, 0x6f6be, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6f6be, 0x6f6de, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Punches Extra 1", 0x6f6de, 0x6f6fe, indexCPS2Sprites_Adon, 0x01 },
    { L"2 Punches Extra 2", 0x6f6fe, 0x6f71e },
    { L"2 Punches Super Trail Light", 0x6f71e, 0x6f73e, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Punches Super Trail Dark", 0x6f73e, 0x6f75e, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6f75e, 0x6f77e, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Kicks Extra 1", 0x6f77e, 0x6f79e, indexCPS2Sprites_Adon, 0x01 },
    { L"2 Kicks Extra 2", 0x6f79e, 0x6f7be },
    { L"2 Kicks Super Trail Light", 0x6f7be, 0x6f7de, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x6f7de, 0x6f7fe, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6f7fe, 0x6f81e, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x6f81e, 0x6f83e, indexCPS2Sprites_Adon, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x6f83e, 0x6f85e },
    { L"Auto Guard Punch Super Trail Light", 0x6f85e, 0x6f87e, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x6f87e, 0x6f89e, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6f89e, 0x6f8be, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x6f8be, 0x6f8de, indexCPS2Sprites_Adon, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x6f8de, 0x6f900 - 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x6f900 - 0x02, 0x6f91e, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x6f91e, 0x6f93e, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ADON_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7385e, 0x7387e, indexCPS2Sprites_Adon, 0x00 },
    { L"Burned 2", 0x7387e, 0x7389e, indexCPS2Sprites_Adon, 0x00 },
    { L"Psycho Power Burned 1", 0x7389e, 0x738be, indexCPS2Sprites_Adon, 0x00 },
    { L"Psycho Power Burned 2", 0x738be, 0x738de, indexCPS2Sprites_Adon, 0x00 },
    { L"Punch CC Shadow 1", 0x738de, 0x73900 - 0x02, indexCPS2Sprites_Adon, 0x00 },
    { L"Punch CC Shadow 2", 0x73900 - 0x02, 0x7391e, indexCPS2Sprites_Adon, 0x00 },
    { L"Kick CC Shadow 1", 0x7391e, 0x7393e, indexCPS2Sprites_Adon, 0x00 },
    { L"Kick CC Shadow 2", 0x7393e, 0x7395e, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7395e, 0x7397e, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7397e, 0x7399e, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7399e, 0x739be, indexCPS2Sprites_Adon, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x739be, 0x739de, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x739de, 0x73a00 - 0x02, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x73a00 - 0x02, 0x73a1e, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x73a1e, 0x73a3e, indexCPS2Sprites_Adon, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x73a3e, 0x73a5e, indexCPS2Sprites_Adon, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SODOM_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6f93e, 0x6f95e, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Punch Extra 1: Slashes", 0x6f95e, 0x6f97e, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Punch Extra 2: Intro", 0x6f97e, 0x6f99e, indexCPS2Sprites_Sodom, 0x03 },
    { L"Punch Super Trail Light", 0x6f99e, 0x6f9be, indexCPS2Sprites_Sodom, 0x02 },
    { L"Punch Super Trail Dark", 0x6f9be, 0x6f9de, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_KICK_PALETTES[] =
{
    { L"Kick", 0x6f9de, 0x6fa00 - 0x02, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Kick Extra 1: Slashes", 0x6fa00 - 0x02, 0x6fa1e, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Kick Extra 2: Intro", 0x6fa1e, 0x6fa3e, indexCPS2Sprites_Sodom, 0x03 },
    { L"Kick Super Trail Light", 0x6fa3e, 0x6fa5e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Kick Super Trail Dark", 0x6fa5e, 0x6fa7e, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6fa7e, 0x6fa9e, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"2 Punches Extra 1: Slashes", 0x6fa9e, 0x6fabe, indexCPS2Sprites_Sodom, 0x044, &pairPrevious },
    { L"2 Punches Extra 2: Intro", 0x6fabe, 0x6fade, indexCPS2Sprites_Sodom, 0x03 },
    { L"2 Punches Super Trail Light", 0x6fade, 0x6fb00 - 0x02, indexCPS2Sprites_Sodom, 0x02 },
    { L"2 Punches Super Trail Dark", 0x6fb00 - 0x02, 0x6fb1e, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6fb1e, 0x6fb3e, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"2 Kicks Extra 1: Slashes", 0x6fb3e, 0x6fb5e, indexCPS2Sprites_Sodom, 0x044, &pairPrevious },
    { L"2 Kicks Extra 2: Intro", 0x6fb5e, 0x6fb7e, indexCPS2Sprites_Sodom, 0x03 },
    { L"2 Kicks Super Trail Light", 0x6fb7e, 0x6fb9e, indexCPS2Sprites_Sodom, 0x02 },
    { L"2 Kicks Super Trail Dark", 0x6fb9e, 0x6fbbe, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6fbbe, 0x6fbde, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Auto Guard Punch Extra 1: Slashes", 0x6fbde, 0x6fc00 - 0x02, indexCPS2Sprites_Sodom, 0x044, &pairPrevious },
    { L"Auto Guard Punch Extra 2: Intro", 0x6fc00 - 0x02, 0x6fc1e, indexCPS2Sprites_Sodom, 0x03 },
    { L"Auto Guard Punch Super Trail Light", 0x6fc1e, 0x6fc3e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Auto Guard Punch Super Trail Dark", 0x6fc3e, 0x6fc5e, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x6fc5e, 0x6fc7e, indexCPS2Sprites_Sodom, 0x02, &pairNext },
    { L"Auto Guard Kick Extra 1: Slashes", 0x6fc7e, 0x6fc9e, indexCPS2Sprites_Sodom, 0x04, &pairPrevious },
    { L"Auto Guard Kick Extra 2: Intro", 0x6fc9e, 0x6fcbe, indexCPS2Sprites_Sodom, 0x03 },
    { L"Auto Guard Kick Super Trail Light", 0x6fcbe, 0x6fcde, indexCPS2Sprites_Sodom, 0x02 },
    { L"Auto Guard Kick Super Trail Dark", 0x6fcde, 0x6fd00 - 0x02, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_SODOM_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x73a5e, 0x73a7e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Burned 2", 0x73a7e, 0x73a9e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Psycho Power Burned 1", 0x73a9e, 0x73abe, indexCPS2Sprites_Sodom, 0x02 },
    { L"Psycho Power Burned 2", 0x73abe, 0x73ade, indexCPS2Sprites_Sodom, 0x02 },
    { L"Punch CC Shadow 1", 0x73ade, 0x73b00 - 0x02, indexCPS2Sprites_Sodom, 0x02 },
    { L"Punch CC Shadow 2", 0x73b00 - 0x02, 0x73b1e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Kick CC Shadow 1", 0x73b1e, 0x73b3e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Kick CC Shadow 2", 0x73b3e, 0x73b5e, indexCPS2Sprites_Sodom, 0x02 },
    { L"2 Punches CC Shadow 1", 0x73b5e, 0x73b7e, indexCPS2Sprites_Sodom, 0x02 },
    { L"2 Punches CC Shadow 2", 0x73b7e, 0x73b9e, indexCPS2Sprites_Sodom, 0x02 },
    { L"2 Kicks CC Shadow 1", 0x73b9e, 0x73bbe, indexCPS2Sprites_Sodom, 0x02 },
    { L"2 Kicks CC Shadow 2", 0x73bbe, 0x73bde, indexCPS2Sprites_Sodom, 0x02 },
    { L"Auto Guard Punch CC Shadow 1", 0x73bde, 0x73c00 - 0x02, indexCPS2Sprites_Sodom, 0x02 },
    { L"Auto Guard Punch CC Shadow 2", 0x73c00 - 0x02, 0x73c1e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Auto Guard Kick CC Shadow 1", 0x73c1e, 0x73c3e, indexCPS2Sprites_Sodom, 0x02 },
    { L"Auto Guard Kick CC Shadow 2", 0x73c3e, 0x73c5e, indexCPS2Sprites_Sodom, 0x02 },
};

const sGame_PaletteDataset SFA2_A_GUY_PUNCH_PALETTES[] =
{
    { L"Punch", 0x6fd00 - 0x02, 0x6fd1e, indexCPS2Sprites_Guy, 0x00 },
    { L"Punch Extra 1", 0x6fd1e, 0x6fd3e },
    { L"Punch Extra 2: Barrels", 0x6fd3e, 0x6fd5e, indexCPS2Sprites_Guy, 0x02 },
    { L"Punch Super Trail Light", 0x6fd5e, 0x6fd7e, indexCPS2Sprites_Guy, 0x00 },
    { L"Punch Super Trail Dark", 0x6fd7e, 0x6fd9e, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_KICK_PALETTES[] =
{
    { L"Kick", 0x6fd9e, 0x6fdbe, indexCPS2Sprites_Guy, 0x00 },
    { L"Kick Extra 1", 0x6fdbe, 0x6fdde },
    { L"Kick Extra 2: Barrels", 0x6fdde, 0x6fe00 - 0x02, indexCPS2Sprites_Guy, 0x02 },
    { L"Kick Super Trail Light", 0x6fe00 - 0x02, 0x6fe1e, indexCPS2Sprites_Guy, 0x00 },
    { L"Kick Super Trail Dark", 0x6fe1e, 0x6fe3e, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x6fe3e, 0x6fe5e, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Punches Extra 1", 0x6fe5e, 0x6fe7e },
    { L"2 Punches Extra 2: Barrels", 0x6fe7e, 0x6fe9e, indexCPS2Sprites_Guy, 0x02 },
    { L"2 Punches Super Trail Light", 0x6fe9e, 0x6febe, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Punches Super Trail Dark", 0x6febe, 0x6fede, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x6fede, 0x6ff00 - 0x02, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Kicks Extra 1", 0x6ff00 - 0x02, 0x6ff1e },
    { L"2 Kicks Extra 2: Barrels", 0x6ff1e, 0x6ff3e, indexCPS2Sprites_Guy, 0x02 },
    { L"2 Kicks Super Trail Light", 0x6ff3e, 0x6ff5e, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x6ff5e, 0x6ff7e, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x6ff7e, 0x6ff9e, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x6ff9e, 0x6ffbe },
    { L"Auto Guard Punch Extra 2: Barrels", 0x6ffbe, 0x6ffde, indexCPS2Sprites_Guy, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x6ffde, 0x70000 - 0x02, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x70000 - 0x02, 0x7001e, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7001e, 0x7003e, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x7003e, 0x7005e },
    { L"Auto Guard Kick Extra 2: Barrels", 0x7005e, 0x7007e, indexCPS2Sprites_Guy, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x7007e, 0x7009e, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7009e, 0x700be, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GUY_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x73c5e, 0x73c7e, indexCPS2Sprites_Guy, 0x00 },
    { L"Burned 2", 0x73c7e, 0x73c9e, indexCPS2Sprites_Guy, 0x00 },
    { L"Psycho Power Burned 1", 0x73c9e, 0x73cbe, indexCPS2Sprites_Guy, 0x00 },
    { L"Psycho Power Burned 2", 0x73cbe, 0x73cde, indexCPS2Sprites_Guy, 0x00 },
    { L"Punch CC Shadow 1", 0x73cde, 0x73d00 - 0x02, indexCPS2Sprites_Guy, 0x00 },
    { L"Punch CC Shadow 2", 0x73d00 - 0x02, 0x73d1e, indexCPS2Sprites_Guy, 0x00 },
    { L"Kick CC Shadow 1", 0x73d1e, 0x73d3e, indexCPS2Sprites_Guy, 0x00 },
    { L"Kick CC Shadow 2", 0x73d3e, 0x73d5e, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Punches CC Shadow 1", 0x73d5e, 0x73d7e, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Punches CC Shadow 2", 0x73d7e, 0x73d9e, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x73d9e, 0x73dbe, indexCPS2Sprites_Guy, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x73dbe, 0x73dde, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x73dde, 0x73e00 - 0x02, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x73e00 - 0x02, 0x73e1e, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x73e1e, 0x73e3e, indexCPS2Sprites_Guy, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x73e3e, 0x73e5e, indexCPS2Sprites_Guy, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_PUNCH_PALETTES[] =
{
    { L"Punch", 0x700be, 0x700de, indexCPS2Sprites_Birdie, 0x00 },
    { L"Punch Extra 1", 0x700de, 0x700fe, indexCPS2Sprites_Birdie, 0x00 },
    { L"Punch Extra 2", 0x700fe, 0x7011e },
    { L"Punch Super Trail Light", 0x7011e, 0x7013e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Punch Super Trail Dark", 0x7013e, 0x7015e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_PALETTES[] =
{
    { L"Kick", 0x7015e, 0x7017e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Kick Extra 1", 0x7017e, 0x7019e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Kick Extra 2", 0x7019e, 0x701be },
    { L"Kick Super Trail Light", 0x701be, 0x701de, indexCPS2Sprites_Birdie, 0x00 },
    { L"Kick Super Trail Dark", 0x701de, 0x701fe, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x701fe, 0x7021e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Punches Extra 1", 0x7021e, 0x7023e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Punches Extra 2", 0x7023e, 0x7025e },
    { L"2 Punches Super Trail Light", 0x7025e, 0x7027e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7027e, 0x7029e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7029e, 0x702be, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Kicks Extra 1", 0x702be, 0x702de, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Kicks Extra 2", 0x702de, 0x702fe },
    { L"2 Kicks Super Trail Light", 0x702fe, 0x7031e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x7031e, 0x7033e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x7033e, 0x7035e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x7035e, 0x7037e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x7037e, 0x7039e },
    { L"Auto Guard Punch Super Trail Light", 0x7039e, 0x703be, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x703be, 0x703de, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x703de, 0x703fe, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x703fe, 0x7041e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x7041e, 0x7043e },
    { L"Auto Guard Kick Super Trail Light", 0x7043e, 0x7045e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7045e, 0x7047e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x73e5e, 0x73e7e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Burned 2", 0x73e7e, 0x73e9e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Psycho Power Burned 1", 0x73e9e, 0x73ebe, indexCPS2Sprites_Birdie, 0x00 },
    { L"Psycho Power Burned 2", 0x73ebe, 0x73ede, indexCPS2Sprites_Birdie, 0x00 },
    { L"Punch CC Shadow 1", 0x73ede, 0x73f00 - 0x02, indexCPS2Sprites_Birdie, 0x00 },
    { L"Punch CC Shadow 2", 0x73f00 - 0x02, 0x73f1e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Kick CC Shadow 1", 0x73f1e, 0x73f3e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Kick CC Shadow 2", 0x73f3e, 0x73f5e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Punches CC Shadow 1", 0x73f5e, 0x73f7e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Punches CC Shadow 2", 0x73f7e, 0x73f9e, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x73f9e, 0x73fbe, indexCPS2Sprites_Birdie, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x73fbe, 0x73fde, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x73fde, 0x74000 - 0x02, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x74000 - 0x02, 0x7401e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7401e, 0x7403e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7403e, 0x7405e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7047e, 0x7049e, indexCPS2Sprites_Rose, 0x00 },
    { L"Punch Soul Power 1", 0x7049e, 0x704be, indexCPS2Sprites_Rose, 0x02 },
    { L"Punch Soul Power 2", 0x704be, 0x704de, indexCPS2Sprites_Rose, 0x02 },
    { L"Punch Super Trail Light", 0x704de, 0x704fe, indexCPS2Sprites_Rose, 0x00 },
    { L"Punch Super Trail Dark", 0x704fe, 0x7051e, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_PALETTES[] =
{
    { L"Kick", 0x7051e, 0x7053e, indexCPS2Sprites_Rose, 0x00 },
    { L"Kick Soul Power 1", 0x7053e, 0x7055e, indexCPS2Sprites_Rose, 0x02 },
    { L"Kick Soul Power 2", 0x7055e, 0x7057e, indexCPS2Sprites_Rose, 0x02 },
    { L"Kick Super Trail Light", 0x7057e, 0x7059e, indexCPS2Sprites_Rose, 0x00 },
    { L"Kick Super Trail Dark", 0x7059e, 0x705be, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x705be, 0x705de, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Punches Soul Power 1", 0x705de, 0x705fe, indexCPS2Sprites_Rose, 0x02 },
    { L"2 Punches Soul Power 2", 0x705fe, 0x7061e, indexCPS2Sprites_Rose, 0x02 },
    { L"2 Punches Super Trail Light", 0x7061e, 0x7063e, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7063e, 0x7065e, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7065e, 0x7067e, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Kicks Soul Power 1", 0x7067e, 0x7069e, indexCPS2Sprites_Rose, 0x02 },
    { L"2 Kicks Soul Power 2", 0x7069e, 0x706be, indexCPS2Sprites_Rose, 0x02 },
    { L"2 Kicks Super Trail Light", 0x706be, 0x706de, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x706de, 0x706fe, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x706fe, 0x7071e, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Punch Soul Power 1", 0x7071e, 0x7073e, indexCPS2Sprites_Rose, 0x02 },
    { L"Auto Guard Punch Soul Power 2", 0x7073e, 0x7075e, indexCPS2Sprites_Rose, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x7075e, 0x7077e, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x7077e, 0x7079e, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7079e, 0x707be, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Kick Soul Power 1", 0x707be, 0x707de, indexCPS2Sprites_Rose, 0x02 },
    { L"Auto Guard Kick Soul Power 2", 0x707de, 0x707fe, indexCPS2Sprites_Rose, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x707fe, 0x7081e, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7081e, 0x7083e, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROSE_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7405e, 0x7407e, indexCPS2Sprites_Rose, 0x00 },
    { L"Burned 2", 0x7407e, 0x7409e, indexCPS2Sprites_Rose, 0x00 },
    { L"Psycho Power Burned 1", 0x7409e, 0x740be, indexCPS2Sprites_Rose, 0x00 },
    { L"Psycho Power Burned 2", 0x740be, 0x740de, indexCPS2Sprites_Rose, 0x00 },
    { L"Punch CC Shadow 1", 0x740de, 0x740fe, indexCPS2Sprites_Rose, 0x00 },
    { L"Punch CC Shadow 2", 0x740fe, 0x7411e, indexCPS2Sprites_Rose, 0x00 },
    { L"Kick CC Shadow 1", 0x7411e, 0x7413e, indexCPS2Sprites_Rose, 0x00 },
    { L"Kick CC Shadow 2", 0x7413e, 0x7415e, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7415e, 0x7417e, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7417e, 0x7419e, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7419e, 0x741be, indexCPS2Sprites_Rose, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x741be, 0x741de, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x741de, 0x741fe, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x741fe, 0x7421e, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7421e, 0x7423e, indexCPS2Sprites_Rose, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7423e, 0x7425e, indexCPS2Sprites_Rose, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7083e, 0x7085e, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch Extra 1", 0x7085e, 0x7087e, indexCPS2Sprites_Bison, 0x08 },
    { L"Punch Extra 2", 0x7087e, 0x7089e, indexCPS2Sprites_Bison, 0x09 },
    { L"Punch Super Trail Light", 0x7089e, 0x708be, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch Super Trail Dark", 0x708be, 0x708de, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_PALETTES[] =
{
    { L"Kick", 0x708de, 0x70900 - 0x02, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick Extra 1", 0x70900 - 0x02, 0x7091e, indexCPS2Sprites_Bison, 0x08 },
    { L"Kick Extra 2", 0x7091e, 0x7093e, indexCPS2Sprites_Bison, 0x09 },
    { L"Kick Super Trail Light", 0x7093e, 0x7095e, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick Super Trail Dark", 0x7095e, 0x7097e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x7097e, 0x7099e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches Extra 1", 0x7099e, 0x709be, indexCPS2Sprites_Bison, 0x08 },
    { L"2 Punches Extra 2", 0x709be, 0x709de, indexCPS2Sprites_Bison, 0x09 },
    { L"2 Punches Super Trail Light", 0x709de, 0x70a00 - 0x02, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches Super Trail Dark", 0x70a00 - 0x02, 0x70a1e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x70a1e, 0x70a3e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks Extra 1", 0x70a3e, 0x70a5e, indexCPS2Sprites_Bison, 0x08 },
    { L"2 Kicks Extra 2", 0x70a5e, 0x70a7e, indexCPS2Sprites_Bison, 0x09 },
    { L"2 Kicks Super Trail Light", 0x70a7e, 0x70a9e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x70a9e, 0x70abe, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x70abe, 0x70ade, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x70ade, 0x70b00 - 0x02, indexCPS2Sprites_Bison, 0x08 },
    { L"Auto Guard Punch Extra 2", 0x70b00 - 0x02, 0x70b1e, indexCPS2Sprites_Bison, 0x09 },
    { L"Auto Guard Punch Super Trail Light", 0x70b1e, 0x70b3e, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x70b3e, 0x70b5e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x70b5e, 0x70b7e, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x70b7e, 0x70b9e, indexCPS2Sprites_Bison, 0x08 },
    { L"Auto Guard Kick Extra 2", 0x70b9e, 0x70bbe, indexCPS2Sprites_Bison, 0x09 },
    { L"Auto Guard Kick Super Trail Light", 0x70bbe, 0x70bde, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x70bde, 0x70c00 - 0x02, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7425e, 0x7427e, indexCPS2Sprites_Bison, 0x00 },
    { L"Burned 2", 0x7427e, 0x7429e, indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho Power Burned 1", 0x7429e, 0x742be, indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho Power Burned 2", 0x742be, 0x742de, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch CC Shadow 1", 0x742de, 0x742fe, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch CC Shadow 2", 0x742fe, 0x7431e, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick CC Shadow 1", 0x7431e, 0x7433e, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick CC Shadow 2", 0x7433e, 0x7435e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7435e, 0x7437e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7437e, 0x7439e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7439e, 0x743be, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x743be, 0x743de, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x743de, 0x743fe, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x743fe, 0x7441e, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7441e, 0x7443e, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7443e, 0x7445e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_PUNCH_PALETTES[] =
{
    { L"Punch", 0x70c00 - 0x02, 0x70c1e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch Extra 1", 0x70c1e, 0x70c3e, indexCPS2Sprites_Sagat, 0x01 },
    { L"Punch Extra 2", 0x70c3e, 0x70c5e, indexCPS2Sprites_Sagat, 0x02 },
    { L"Punch Super Trail Light", 0x70c5e, 0x70c7e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch Super Trail Dark", 0x70c7e, 0x70c9e, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_KICK_PALETTES[] =
{
    { L"Kick", 0x70c9e, 0x70cbe, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick Extra 1", 0x70cbe, 0x70cde, indexCPS2Sprites_Sagat, 0x01 },
    { L"Kick Extra 2", 0x70cde, 0x70d00 - 0x02, indexCPS2Sprites_Sagat, 0x02 },
    { L"Kick Super Trail Light", 0x70d00 - 0x02, 0x70d1e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick Super Trail Dark", 0x70d1e, 0x70d3e, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x70d3e, 0x70d5e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches Extra 1", 0x70d5e, 0x70d7e, indexCPS2Sprites_Sagat, 0x01 },
    { L"2 Punches Extra 2", 0x70d7e, 0x70d9e, indexCPS2Sprites_Sagat, 0x02 },
    { L"2 Punches Super Trail Light", 0x70d9e, 0x70dbe, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches Super Trail Dark", 0x70dbe, 0x70dde, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x70dde, 0x70e00 - 0x02, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks Extra 1", 0x70e00 - 0x02, 0x70e1e, indexCPS2Sprites_Sagat, 0x01 },
    { L"2 Kicks Extra 2", 0x70e1e, 0x70e3e, indexCPS2Sprites_Sagat, 0x02 },
    { L"2 Kicks Super Trail Light", 0x70e3e, 0x70e5e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x70e5e, 0x70e7e, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x70e7e, 0x70e9e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x70e9e, 0x70ebe, indexCPS2Sprites_Sagat, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x70ebe, 0x70ede, indexCPS2Sprites_Sagat, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x70ede, 0x70f00 - 0x02, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x70f00 - 0x02, 0x70f1e, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x70f1e, 0x70f3e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x70f3e, 0x70f5e, indexCPS2Sprites_Sagat, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x70f5e, 0x70f7e, indexCPS2Sprites_Sagat, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x70f7e, 0x70f9e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x70f9e, 0x70fbe, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7445e, 0x7447e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Burned 2", 0x7447e, 0x7449e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Psycho Power Burned 1", 0x7449e, 0x744be, indexCPS2Sprites_Sagat, 0x00 },
    { L"Psycho Power Burned 2", 0x744be, 0x744de, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch CC Shadow 1", 0x744de, 0x744fe, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch CC Shadow 2", 0x744fe, 0x7451e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick CC Shadow 1", 0x7451e, 0x7453e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick CC Shadow 2", 0x7453e, 0x7455e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7455e, 0x7457e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7457e, 0x7459e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7459e, 0x745be, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x745be, 0x745de, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x745de, 0x745fe, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x745fe, 0x7461e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7461e, 0x7463e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7463e, 0x7465e, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_PUNCH_PALETTES[] =
{
    { L"Punch", 0x70fbe, 0x70fde, indexCPS2Sprites_Dan, 0x00 },
    { L"Punch Extra 1", 0x70fde, 0x71000 - 0x02, indexCPS2Sprites_Dan, 0x01 },
    { L"Punch Extra 2", 0x71000 - 0x02, 0x7101e },
    { L"Punch Super Trail Light", 0x7101e, 0x7103e, indexCPS2Sprites_Dan, 0x00 },
    { L"Punch Super Trail Dark", 0x7103e, 0x7105e, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_KICK_PALETTES[] =
{
    { L"Kick", 0x7105e, 0x7107e, indexCPS2Sprites_Dan, 0x00 },
    { L"Kick Extra 1", 0x7107e, 0x7109e, indexCPS2Sprites_Dan, 0x01 },
    { L"Kick Extra 2", 0x7109e, 0x710be },
    { L"Kick Super Trail Light", 0x710be, 0x710de, indexCPS2Sprites_Dan, 0x00 },
    { L"Kick Super Trail Dark", 0x710de, 0x710fe, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x710fe, 0x7111e, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Punches Extra 1", 0x7111e, 0x7113e, indexCPS2Sprites_Dan, 0x01 },
    { L"2 Punches Extra 2", 0x7113e, 0x7115e },
    { L"2 Punches Super Trail Light", 0x7115e, 0x7117e, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7117e, 0x7119e, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7119e, 0x711be, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Kicks Extra 1", 0x711be, 0x711de, indexCPS2Sprites_Dan, 0x01 },
    { L"2 Kicks Extra 2", 0x711de, 0x711fe },
    { L"2 Kicks Super Trail Light", 0x711fe, 0x7121e, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x7121e, 0x7123e, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x7123e, 0x7125e, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x7125e, 0x7127e, indexCPS2Sprites_Dan, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x7127e, 0x7129e },
    { L"Auto Guard Punch Super Trail Light", 0x7129e, 0x712be, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x712be, 0x712de, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x712de, 0x712fe, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x712fe, 0x7131e, indexCPS2Sprites_Dan, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x7131e, 0x7133e },
    { L"Auto Guard Kick Super Trail Light", 0x7133e, 0x7135e, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7135e, 0x7137e, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DAN_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7465e, 0x7467e, indexCPS2Sprites_Dan, 0x00 },
    { L"Burned 2", 0x7467e, 0x7469e, indexCPS2Sprites_Dan, 0x00 },
    { L"Psycho Power Burned 1", 0x7469e, 0x746be, indexCPS2Sprites_Dan, 0x00 },
    { L"Psycho Power Burned 2", 0x746be, 0x746de, indexCPS2Sprites_Dan, 0x00 },
    { L"Punch CC Shadow 1", 0x746de, 0x746fe, indexCPS2Sprites_Dan, 0x00 },
    { L"Punch CC Shadow 2", 0x746fe, 0x7471e, indexCPS2Sprites_Dan, 0x00 },
    { L"Kick CC Shadow 1", 0x7471e, 0x7473e, indexCPS2Sprites_Dan, 0x00 },
    { L"Kick CC Shadow 2", 0x7473e, 0x7475e, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7475e, 0x7477e, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7477e, 0x7479e, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7479e, 0x747be, indexCPS2Sprites_Dan, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x747be, 0x747de, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x747de, 0x747fe, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x747fe, 0x7481e, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7481e, 0x7483e, indexCPS2Sprites_Dan, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7483e, 0x7485e, indexCPS2Sprites_Dan, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7137e, 0x7139e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch Extra 1", 0x7139e, 0x713be, indexCPS2Sprites_Sakura, 0x01 },
    { L"Punch Extra 2", 0x713be, 0x713de, indexCPS2Sprites_Sakura, 0x02 },
    { L"Punch Super Trail Light", 0x713de, 0x713fe, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch Super Trail Dark", 0x713fe, 0x7141e, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_KICK_PALETTES[] =
{
    { L"Kick", 0x7141e, 0x7143e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick Extra 1", 0x7143e, 0x7145e, indexCPS2Sprites_Sakura, 0x01 },
    { L"Kick Extra 2", 0x7145e, 0x7147e, indexCPS2Sprites_Sakura, 0x02 },
    { L"Kick Super Trail Light", 0x7147e, 0x7149e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick Super Trail Dark", 0x7149e, 0x714be, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x714be, 0x714de, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches Extra 1", 0x714de, 0x714fe, indexCPS2Sprites_Sakura, 0x01 },
    { L"2 Punches Extra 2", 0x714fe, 0x7151e, indexCPS2Sprites_Sakura, 0x02 },
    { L"2 Punches Super Trail Light", 0x7151e, 0x7153e, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7153e, 0x7155e, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7155e, 0x7157e, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks Extra 1", 0x7157e, 0x7159e, indexCPS2Sprites_Sakura, 0x01 },
    { L"2 Kicks Extra 2", 0x7159e, 0x715be, indexCPS2Sprites_Sakura, 0x02 },
    { L"2 Kicks Super Trail Light", 0x715be, 0x715de, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x715de, 0x715fe, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x715fe, 0x7161e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x7161e, 0x7163e, indexCPS2Sprites_Sakura, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x7163e, 0x7165e, indexCPS2Sprites_Sakura, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x7165e, 0x7167e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x7167e, 0x7169e, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7169e, 0x716be, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x716be, 0x716de, indexCPS2Sprites_Sakura, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x716de, 0x716fe, indexCPS2Sprites_Sakura, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x716fe, 0x7171e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7171e, 0x7173e, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7485e, 0x7487e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Burned 2", 0x7487e, 0x7489e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Psycho Power Burned 1", 0x7489e, 0x748be, indexCPS2Sprites_Sakura, 0x00 },
    { L"Psycho Power Burned 2", 0x748be, 0x748de, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch CC Shadow 1", 0x748de, 0x74900 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch CC Shadow 2", 0x74900 - 0x02, 0x7491e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick CC Shadow 1", 0x7491e, 0x7493e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick CC Shadow 2", 0x7493e, 0x7495e, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7495e, 0x7497e, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7497e, 0x7499e, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7499e, 0x749be, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x749be, 0x749de, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x749de, 0x74a00 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x74a00 - 0x02, 0x74a1e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x74a1e, 0x74a3e, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x74a3e, 0x74a5e, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7173e, 0x7175e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Punch Extra 1", 0x7175e, 0x7177e },
    { L"Punch Extra 2", 0x7177e, 0x7179e },
    { L"Punch Super Trail Light", 0x7179e, 0x717be, indexCPS2Sprites_Rolento, 0x00 },
    { L"Punch Super Trail Dark", 0x717be, 0x717de, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_KICK_PALETTES[] =
{
    { L"Kick", 0x717de, 0x717fe, indexCPS2Sprites_Rolento, 0x00 },
    { L"Kick Extra 1", 0x717fe, 0x7181e },
    { L"Kick Extra 2", 0x7181e, 0x7183e },
    { L"Kick Super Trail Light", 0x7183e, 0x7185e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Kick Super Trail Dark", 0x7185e, 0x7187e, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x7187e, 0x7189e, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Punches Extra 1", 0x7189e, 0x718be },
    { L"2 Punches Extra 2", 0x718be, 0x718de },
    { L"2 Punches Super Trail Light", 0x718de, 0x71900 - 0x02, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Punches Super Trail Dark", 0x71900 - 0x02, 0x7191e, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7191e, 0x7193e, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Kicks Extra 1", 0x7193e, 0x7195e },
    { L"2 Kicks Extra 2", 0x7195e, 0x7197e },
    { L"2 Kicks Super Trail Light", 0x7197e, 0x7199e, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x7199e, 0x719be, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x719be, 0x719de, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x719de, 0x71a00 - 0x02 },
    { L"Auto Guard Punch Extra 2", 0x71a00 - 0x02, 0x71a1e },
    { L"Auto Guard Punch Super Trail Light", 0x71a1e, 0x71a3e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x71a3e, 0x71a5e, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x71a5e, 0x71a7e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x71a7e, 0x71a9e },
    { L"Auto Guard Kick Extra 2", 0x71a9e, 0x71abe },
    { L"Auto Guard Kick Super Trail Light", 0x71abe, 0x71ade, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x71ade, 0x71b00 - 0x02, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x74a5e, 0x74a7e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Burned 2", 0x74a7e, 0x74a9e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Psycho Power Burned 1", 0x74a9e, 0x74abe, indexCPS2Sprites_Rolento, 0x00 },
    { L"Psycho Power Burned 2", 0x74abe, 0x74ade, indexCPS2Sprites_Rolento, 0x00 },
    { L"Punch CC Shadow 1", 0x74ade, 0x74b00 - 0x02, indexCPS2Sprites_Rolento, 0x00 },
    { L"Punch CC Shadow 2", 0x74b00 - 0x02, 0x74b1e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Kick CC Shadow 1", 0x74b1e, 0x74b3e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Kick CC Shadow 2", 0x74b3e, 0x74b5e, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Punches CC Shadow 1", 0x74b5e, 0x74b7e, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Punches CC Shadow 2", 0x74b7e, 0x74b9e, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x74b9e, 0x74bbe, indexCPS2Sprites_Rolento, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x74bbe, 0x74bde, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x74bde, 0x74c00 - 0x02, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x74c00 - 0x02, 0x74c1e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x74c1e, 0x74c3e, indexCPS2Sprites_Rolento, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x74c3e, 0x74c5e, indexCPS2Sprites_Rolento, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_PUNCH_PALETTES[] =
{
    { L"Punch", 0x71b00 - 0x02, 0x71b1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch Extra 1", 0x71b1e, 0x71b3e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Punch Extra 2", 0x71b3e, 0x71b5e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Punch Super Trail Light", 0x71b5e, 0x71b7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch Super Trail Dark", 0x71b7e, 0x71b9e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_PALETTES[] =
{
    { L"Kick", 0x71b9e, 0x71bbe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick Extra 1", 0x71bbe, 0x71bde, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Kick Extra 2", 0x71bde, 0x71c00 - 0x02, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Kick Super Trail Light", 0x71c00 - 0x02, 0x71c1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick Super Trail Dark", 0x71c1e, 0x71c3e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x71c3e, 0x71c5e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches Extra 1", 0x71c5e, 0x71c7e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"2 Punches Extra 2", 0x71c7e, 0x71c9e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"2 Punches Super Trail Light", 0x71c9e, 0x71cbe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches Super Trail Dark", 0x71cbe, 0x71cde, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x71cde, 0x71d00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks Extra 1", 0x71d00 - 0x02, 0x71d1e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"2 Kicks Extra 2", 0x71d1e, 0x71d3e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"2 Kicks Super Trail Light", 0x71d3e, 0x71d5e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x71d5e, 0x71d7e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x71d7e, 0x71d9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x71d9e, 0x71dbe, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x71dbe, 0x71dde, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x71dde, 0x71e00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x71e00 - 0x02, 0x71e1e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x71e1e, 0x71e3e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x71e3e, 0x71e5e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x71e5e, 0x71e7e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x71e7e, 0x71e9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x71e9e, 0x71ebe, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x74c5e, 0x74c7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Burned 2", 0x74c7e, 0x74c9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Psycho Power Burned 1", 0x74c9e, 0x74cbe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Psycho Power Burned 2", 0x74cbe, 0x74cde, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch CC Shadow 1", 0x74cde, 0x74d00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch CC Shadow 2", 0x74d00 - 0x02, 0x74d1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick CC Shadow 1", 0x74d1e, 0x74d3e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick CC Shadow 2", 0x74d3e, 0x74d5e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches CC Shadow 1", 0x74d5e, 0x74d7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches CC Shadow 2", 0x74d7e, 0x74d9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x74d9e, 0x74dbe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x74dbe, 0x74dde, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x74dde, 0x74e00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x74e00 - 0x02, 0x74e1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x74e1e, 0x74e3e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x74e3e, 0x74e5e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_PUNCH_PALETTES[] =
{
    { L"Punch", 0x71ebe, 0x71ede, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch Extra 1", 0x71ede, 0x71f00 - 0x02, indexCPS2Sprites_Zangief, 0x01 },
    { L"Punch Extra 2", 0x71f00 - 0x02, 0x71f1e, indexCPS2Sprites_Zangief, 0x02 },
    { L"Punch Super Trail Light", 0x71f1e, 0x71f3e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch Super Trail Dark", 0x71f3e, 0x71f5e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_KICK_PALETTES[] =
{
    { L"Kick", 0x71f5e, 0x71f7e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick Extra 1", 0x71f7e, 0x71f9e, indexCPS2Sprites_Zangief, 0x01 },
    { L"Kick Extra 2", 0x71f9e, 0x71fbe, indexCPS2Sprites_Zangief, 0x02 },
    { L"Kick Super Trail Light", 0x71fbe, 0x71fde, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick Super Trail Dark", 0x71fde, 0x72000 - 0x02, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x72000 - 0x02, 0x7201e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches Extra 1", 0x7201e, 0x7203e, indexCPS2Sprites_Zangief, 0x01 },
    { L"2 Punches Extra 2", 0x7203e, 0x7205e, indexCPS2Sprites_Zangief, 0x02 },
    { L"2 Punches Super Trail Light", 0x7205e, 0x7207e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7207e, 0x7209e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7209e, 0x720be, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks Extra 1", 0x720be, 0x720de, indexCPS2Sprites_Zangief, 0x01 },
    { L"2 Kicks Extra 2", 0x720de, 0x720fe, indexCPS2Sprites_Zangief, 0x02 },
    { L"2 Kicks Super Trail Light", 0x720fe, 0x7211e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x7211e, 0x7213e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x7213e, 0x7215e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x7215e, 0x7217e, indexCPS2Sprites_Zangief, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x7217e, 0x7219e, indexCPS2Sprites_Zangief, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x7219e, 0x721be, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x721be, 0x721de, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x721de, 0x721fe, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x721fe, 0x7221e, indexCPS2Sprites_Zangief, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x7221e, 0x7223e, indexCPS2Sprites_Zangief, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x7223e, 0x7225e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7225e, 0x7227e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x74e5e, 0x74e7e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Burned 2", 0x74e7e, 0x74e9e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Psycho Power Burned 1", 0x74e9e, 0x74ebe, indexCPS2Sprites_Zangief, 0x00 },
    { L"Psycho Power Burned 2", 0x74ebe, 0x74ede, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch CC Shadow 1", 0x74ede, 0x74f00 - 0x02, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch CC Shadow 2", 0x74f00 - 0x02, 0x74f1e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick CC Shadow 1", 0x74f1e, 0x74f3e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick CC Shadow 2", 0x74f3e, 0x74f5e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches CC Shadow 1", 0x74f5e, 0x74f7e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches CC Shadow 2", 0x74f7e, 0x74f9e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x74f9e, 0x74fbe, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x74fbe, 0x74fde, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x74fde, 0x75000 - 0x02, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x75000 - 0x02, 0x7501e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7501e, 0x7503e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7503e, 0x7505e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7227e, 0x7229e, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Extra 1", 0x7229e, 0x722be, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Extra 2", 0x722be, 0x722de, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Super Trail Light", 0x722de, 0x722fe, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Super Trail Dark", 0x722fe, 0x7231e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_KICK_PALETTES[] =
{
    { L"Kick", 0x7231e, 0x7233e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Extra 1", 0x7233e, 0x7235e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Extra 2", 0x7235e, 0x7237e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Super Trail Light", 0x7237e, 0x7239e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Super Trail Dark", 0x7239e, 0x723be, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x723be, 0x723de, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Extra 1", 0x723de, 0x723fe, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Extra 2", 0x723fe, 0x7241e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Super Trail Light", 0x7241e, 0x7243e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7243e, 0x7245e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7245e, 0x7247e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Extra 1", 0x7247e, 0x7249e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Extra 2", 0x7249e, 0x724be, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Super Trail Light", 0x724be, 0x724de, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x724de, 0x724fe, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x724fe, 0x7251e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x7251e, 0x7253e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x7253e, 0x7255e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Super Trail Light", 0x7255e, 0x7257e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x7257e, 0x7259e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7259e, 0x725be, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x725be, 0x725de, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x725de, 0x725fe, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Super Trail Light", 0x725fe, 0x7261e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7261e, 0x7263e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GEN_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7505e, 0x7507e, indexCPS2Sprites_Gen, 0x00 },
    { L"Burned 2", 0x7507e, 0x7509e, indexCPS2Sprites_Gen, 0x00 },
    { L"Psycho Power Burned 1", 0x7509e, 0x750be, indexCPS2Sprites_Gen, 0x00 },
    { L"Psycho Power Burned 2", 0x750be, 0x750de, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch CC Shadow 1", 0x750de, 0x750fe, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch CC Shadow 2", 0x750fe, 0x7511e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick CC Shadow 1", 0x7511e, 0x7513e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick CC Shadow 2", 0x7513e, 0x7515e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7515e, 0x7517e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7517e, 0x7519e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7519e, 0x751be, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x751be, 0x751de, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x751de, 0x751fe, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x751fe, 0x7521e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7521e, 0x7523e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7523e, 0x7525e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7263e, 0x7265e, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Punch Keiokuken (shades)", 0x7265e, 0x7267e, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Punch Extra 2", 0x7267e, 0x7269e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Punch Super Trail Light", 0x7269e, 0x726be, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch Super Trail Dark", 0x726be, 0x726de, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_KICK_PALETTES[] =
{
    { L"Kick", 0x726de, 0x726fe, indexCPS2Sprites_ChunLi, 0x00, &pairNext},
    { L"Kick Keiokuken (shades)", 0x726fe, 0x7271e, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Kick Extra 2", 0x7271e, 0x7273e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Kick Super Trail Light", 0x7273e, 0x7275e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick Super Trail Dark", 0x7275e, 0x7277e, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x7277e, 0x7279e, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"2 Punches Keiokuken (shades)", 0x7279e, 0x727be, indexCPS2Sprites_ChunLi, 0x01 },
    { L"2 Punches Extra 2", 0x727be, 0x727de, indexCPS2Sprites_ChunLi, 0x02 },
    { L"2 Punches Super Trail Light", 0x727de, 0x727fe, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches Super Trail Dark", 0x727fe, 0x7281e, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7281e, 0x7283e, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"2 Kicks Keiokuken (shades)", 0x7283e, 0x7285e, indexCPS2Sprites_ChunLi, 0x01 },
    { L"2 Kicks Extra 2", 0x7285e, 0x7287e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"2 Kicks Super Trail Light", 0x7287e, 0x7289e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x7289e, 0x728be, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x728be, 0x728de, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Auto Guard Punch Keiokuken (shades)", 0x728de, 0x72900 - 0x02, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x72900 - 0x02, 0x7291e, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x7291e, 0x7293e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x7293e, 0x7295e, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7295e, 0x7297e, indexCPS2Sprites_ChunLi, 0x00, &pairNext },
    { L"Auto Guard Kick Keiokuken (shades)", 0x7297e, 0x7299e, indexCPS2Sprites_ChunLi, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x7299e, 0x729be, indexCPS2Sprites_ChunLi, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x729be, 0x729de, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x729de, 0x72a00 - 0x02, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7525e, 0x7527e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burned 2", 0x7527e, 0x7529e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Psycho Power Burned 1", 0x7529e, 0x752be, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Psycho Power Burned 2", 0x752be, 0x752de, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch CC Shadow 1", 0x752de, 0x752fe, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch CC Shadow 2", 0x752fe, 0x7531e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick CC Shadow 1", 0x7531e, 0x7533e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick CC Shadow 2", 0x7533e, 0x7535e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7535e, 0x7537e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7537e, 0x7539e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7539e, 0x753be, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x753be, 0x753de, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x753de, 0x753fe, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x753fe, 0x7541e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7541e, 0x7543e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7543e, 0x7545e, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_PUNCH_PALETTES[] =
{
    { L"Punch", 0x72a00 - 0x02, 0x72a1e, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Extra 1", 0x72a1e, 0x72a3e, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Extra 2", 0x72a3e, 0x72a5e, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Super Trail Light", 0x72a5e, 0x72a7e, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch Super Trail Dark", 0x72a7e, 0x72a9e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_KICK_PALETTES[] =
{
    { L"Kick", 0x72a9e, 0x72abe, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Extra 1", 0x72abe, 0x72ade, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Extra 2", 0x72ade, 0x72b00 - 0x02, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Super Trail Light", 0x72b00 - 0x02, 0x72b1e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick Super Trail Dark", 0x72b1e, 0x72b3e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x72b3e, 0x72b5e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Extra 1", 0x72b5e, 0x72b7e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Extra 2", 0x72b7e, 0x72b9e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Super Trail Light", 0x72b9e, 0x72bbe, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches Super Trail Dark", 0x72bbe, 0x72bde, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x72bde, 0x72c00 - 0x02, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Extra 1", 0x72c00 - 0x02, 0x72c1e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Extra 2", 0x72c1e, 0x72c3e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Super Trail Light", 0x72c3e, 0x72c5e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x72c5e, 0x72c7e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x72c7e, 0x72c9e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x72c9e, 0x72cbe, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x72cbe, 0x72cde, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Super Trail Light", 0x72cde, 0x72d00 - 0x02, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x72d00 - 0x02, 0x72d1e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x72d1e, 0x72d3e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x72d3e, 0x72d5e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x72d5e, 0x72d7e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Super Trail Light", 0x72d7e, 0x72d9e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x72d9e, 0x72dbe, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_GENCRANESTANCE_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7545e, 0x7547e, indexCPS2Sprites_Gen, 0x00 },
    { L"Burned 2", 0x7547e, 0x7549e, indexCPS2Sprites_Gen, 0x00 },
    { L"Psycho Power Burned 1", 0x7549e, 0x754be, indexCPS2Sprites_Gen, 0x00 },
    { L"Psycho Power Burned 2", 0x754be, 0x754de, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch CC Shadow 1", 0x754de, 0x754fe, indexCPS2Sprites_Gen, 0x00 },
    { L"Punch CC Shadow 2", 0x754fe, 0x7551e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick CC Shadow 1", 0x7551e, 0x7553e, indexCPS2Sprites_Gen, 0x00 },
    { L"Kick CC Shadow 2", 0x7553e, 0x7555e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7555e, 0x7557e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7557e, 0x7559e, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7559e, 0x755be, indexCPS2Sprites_Gen, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x755be, 0x755de, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x755de, 0x755fe, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x755fe, 0x7561e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x7561e, 0x7563e, indexCPS2Sprites_Gen, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x7563e, 0x7565e, indexCPS2Sprites_Gen, 0x00 },
};

const sGame_PaletteDataset SFA2_A_SHINAKUMAREV1_PALETTES[] =
{
    { L"Shin Akuma", 0x72dbe, 0x72dde, indexCPS2Sprites_Akuma, 0x00 },
    { L"Shin Akuma Extra 1", 0x72dde, 0x72e00 - 0x02, indexCPS2Sprites_Akuma, 1 },
    { L"Shin Akuma Extra 2", 0x72e00 - 0x02, 0x72e1e },
    { L"Shin Akuma Super Trail Light", 0x72e1e, 0x72e3e, indexCPS2Sprites_Akuma },
    { L"Shin Akuma Super Trail Dark", 0x72e3e, 0x72e5e, indexCPS2Sprites_Akuma },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7317e, 0x7319e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch Extra 1", 0x7319e, 0x731be, indexCPS2Sprites_Zangief, 0x01 },
    { L"Punch Extra 2", 0x731be, 0x731de, indexCPS2Sprites_Zangief, 0x02 },
    { L"Punch Super Trail Light", 0x731de, 0x731fe, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch Super Trail Dark", 0x731fe, 0x7321e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_KICK_PALETTES[] =
{
    { L"Kick", 0x7321e, 0x7323e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick Extra 1", 0x7323e, 0x7325e, indexCPS2Sprites_Zangief, 0x01 },
    { L"Kick Extra 2", 0x7325e, 0x7327e, indexCPS2Sprites_Zangief, 0x02 },
    { L"Kick Super Trail Light", 0x7327e, 0x7329e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick Super Trail Dark", 0x7329e, 0x732be, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x732be, 0x732de, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches Extra 1", 0x732de, 0x732fe, indexCPS2Sprites_Zangief, 0x01 },
    { L"2 Punches Extra 2", 0x732fe, 0x7331e, indexCPS2Sprites_Zangief, 0x02 },
    { L"2 Punches Super Trail Light", 0x7331e, 0x7333e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches Super Trail Dark", 0x7333e, 0x7335e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7335e, 0x7337e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks Extra 1", 0x7337e, 0x7339e, indexCPS2Sprites_Zangief, 0x01 },
    { L"2 Kicks Extra 2", 0x7339e, 0x733be, indexCPS2Sprites_Zangief, 0x02 },
    { L"2 Kicks Super Trail Light", 0x733be, 0x733de, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x733de, 0x733fe, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x733fe, 0x7341e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x7341e, 0x7343e, indexCPS2Sprites_Zangief, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x7343e, 0x7345e, indexCPS2Sprites_Zangief, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x7345e, 0x7347e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x7347e, 0x7349e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7349e, 0x734be, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x734be, 0x734de, indexCPS2Sprites_Zangief, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x734de, 0x734fe, indexCPS2Sprites_Zangief, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x734fe, 0x7351e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x7351e, 0x7353e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWZANGIEF_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7585e, 0x7587e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Burned 2", 0x7587e, 0x7589e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Psycho Power Burned 1", 0x7589e, 0x758be, indexCPS2Sprites_Zangief, 0x00 },
    { L"Psycho Power Burned 2", 0x758be, 0x758de, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch CC Shadow 1", 0x758de, 0x75900 - 0x02, indexCPS2Sprites_Zangief, 0x00 },
    { L"Punch CC Shadow 2", 0x75900 - 0x02, 0x7591e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick CC Shadow 1", 0x7591e, 0x7593e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Kick CC Shadow 2", 0x7593e, 0x7595e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches CC Shadow 1", 0x7595e, 0x7597e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Punches CC Shadow 2", 0x7597e, 0x7599e, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x7599e, 0x759be, indexCPS2Sprites_Zangief, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x759be, 0x759de, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x759de, 0x75a00 - 0x02, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x75a00 - 0x02, 0x75a1e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x75a1e, 0x75a3e, indexCPS2Sprites_Zangief, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x75a3e, 0x75a5e, indexCPS2Sprites_Zangief, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_PUNCH_PALETTES[] =
{
    { L"Punch", 0x7353e, 0x7355e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch Extra 1", 0x7355e, 0x7357e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Punch Extra 2", 0x7357e, 0x7359e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Punch Super Trail Light", 0x7359e, 0x735be, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch Super Trail Dark", 0x735be, 0x735de, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_KICK_PALETTES[] =
{
    { L"Kick", 0x735de, 0x735fe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick Extra 1", 0x735fe, 0x7361e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Kick Extra 2", 0x7361e, 0x7363e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Kick Super Trail Light", 0x7363e, 0x7365e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick Super Trail Dark", 0x7365e, 0x7367e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x7367e, 0x7369e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches Extra 1", 0x7369e, 0x736be, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"2 Punches Extra 2", 0x736be, 0x736de, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"2 Punches Super Trail Light", 0x736de, 0x736fe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches Super Trail Dark", 0x736fe, 0x7371e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x7371e, 0x7373e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks Extra 1", 0x7373e, 0x7375e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"2 Kicks Extra 2", 0x7375e, 0x7377e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"2 Kicks Super Trail Light", 0x7377e, 0x7379e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x7379e, 0x737be, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x737be, 0x737de, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x737de, 0x737fe, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x737fe, 0x7381e, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x7381e, 0x7383e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x7383e, 0x7385e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x7385e, 0x7387e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x7387e, 0x7389e, indexCPS2Sprites_Dhalsim, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x7389e, 0x738be, indexCPS2Sprites_Dhalsim, 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x738be, 0x738de, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x738de, 0x73900 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWDHALSIM_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x75a5e, 0x75a7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Burned 2",                       0x75a7e, 0x75a9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Psycho Power Burned 1",          0x75a9e, 0x75abe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Psycho Power Burned 2",          0x75abe, 0x75ade, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch CC Shadow 1",              0x75ade, 0x75b00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Punch CC Shadow 2",              0x75b00 - 0x02, 0x75b1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick CC Shadow 1",               0x75b1e, 0x75b3e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Kick CC Shadow 2",               0x75b3e, 0x75b5e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches CC Shadow 1",          0x75b5e, 0x75b7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Punches CC Shadow 2",          0x75b7e, 0x75b9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x75b9e, 0x75bbe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x75bbe, 0x75bde, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x75bde, 0x75c00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x75c00 - 0x02, 0x75c1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x75c1e, 0x75c3e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x75c3e, 0x75c5e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sDescTreeNode SFA2_A_RYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_RYU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_KICK_PALETTES, ARRAYSIZE(SFA2_A_RYU_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_RYU_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_RYU_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_KEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_KEN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_KICK_PALETTES, ARRAYSIZE(SFA2_A_KEN_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_KEN_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_KEN_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_AKUMA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_KICK_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_CHARLIE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_KICK_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_CHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_KICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_ADON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ADON_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_KICK_PALETTES, ARRAYSIZE(SFA2_A_ADON_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ADON_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ADON_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_SODOM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_SODOM_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_KICK_PALETTES, ARRAYSIZE(SFA2_A_SODOM_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_GUY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GUY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_KICK_PALETTES, ARRAYSIZE(SFA2_A_GUY_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GUY_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GUY_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_BIRDIE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_KICK_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_ROSE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROSE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_KICK_PALETTES, ARRAYSIZE(SFA2_A_ROSE_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_MBISON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_MBISON_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_KICK_PALETTES, ARRAYSIZE(SFA2_A_MBISON_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_SAGAT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_KICK_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_DAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_DAN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_KICK_PALETTES, ARRAYSIZE(SFA2_A_DAN_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_DAN_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_DAN_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_SAKURA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_KICK_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_ROLENTO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_KICK_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_DHALSIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_KICK_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_ZANGIEF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_KICK_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_GEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GEN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_KICK_PALETTES, ARRAYSIZE(SFA2_A_GEN_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GEN_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GEN_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_CHUNLIORIGINAL_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_KICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_GENCRANESTANCE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_KICK_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_SHINAKUMAREV1_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMAREV1_PALETTES, ARRAYSIZE(SFA2_A_SHINAKUMAREV1_PALETTES) },
};

const sDescTreeNode SFA2_A_WWDHALSIM_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_WWZANGIEF_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_AUTOGUARDKICK_PALETTES) },
};

// Stages:
// 
// Stage sprites(?) begin about 0x75c3e in ROM07
// Middle layer begins at 0x7c1c0 in ROM07 and is +0x400 for each stage until terminal end of rom at 0x80000
//  middle layer continues in ROM08 from 0 to 0x19c0.
// 
// Sort order is:
//  Japan (Winter): Ryu
//  USA (Party): Ken
//  Japan (Gokuentou)
//  USA (Plane): Guile
//  China (Street): Chun-Li
//  Thailand (Lake)
//  USA (Truck)
//  USA (Metro City)
//  England
//  Italy
//  Brazil
//  Thailand (Statue)
//  Hong Kong
//  Japan (House)
//  USA (Elevator)
//  India
//  USSR
//  China (Alley)
//  #Australia
//  #Venezuala

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_JAPANWINTER[] =
{
    { L"Sprites", 0x759be, 0x75a9e, indexCPS2Sprites_SFA2_Stages, 0xb5, &pairFullyLinkedNode }, /* Delta: -0x280 */
    { L"Midground 1/2", 0x7c33e, 0x7c53e, indexCPS2Sprites_SFA2_Stages, 0x50, &pairNext }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7c53e, 0x7c73e }, /* Delta: 0x180 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_USAPARTY[] =
{
    { L"Midground 1/2", 0x7c73e, 0x7c93e, indexCPS2Sprites_SFA2_Stages, 0x87, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7c93e, 0x7cb3e, indexCPS2Sprites_SFA2_Stages, 0x88 }, /* Delta: 0x180 */
    { L"Sprites", 0x75a9e, 0x75b7e, indexCPS2Sprites_SFA2_Stages, 0xb3 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_JAPANGOKUENTOU[] =
{
    { L"Midground 1/2", 0x7cb3e, 0x7cd3e, indexCPS2Sprites_SFA2_Stages, 0x45, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7cd3e, 0x7cf3e }, /* Delta: 0x180 */
    { L"Sprites", 0x75b7e, 0x75c5e, indexCPS2Sprites_SFA2_Stages, 0xa8 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_USAPLANE[] =
{
    { L"Sprites", 0x75cde, 0x75d3e, indexCPS2Sprites_SFA2_Stages, 0xb4, &pairFullyLinkedNode }, /* Delta: -0x280 */
    { L"Midground: Plane 1/2", 0x7cf3e, 0x7d13e, indexCPS2Sprites_SFA2_Stages, 0x8d, &pairNext }, /* Delta: 0x180 */
    { L"Midground: Plane 2/2", 0x7d13e, 0x7d33e, indexCPS2Sprites_SFA2_Stages, 0x8e }, /* Delta: 0x180 */
    { L"Foreground Sprites", 0x75c5e, 0x75cde, indexCPS2Sprites_SFA2_Stages, 0xbb }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_CHINASTREET[] =
{
    { L"Midground 1/2", 0x7d33e, 0x7d53e, indexCPS2Sprites_SFA2_Stages, 0x38, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7d53e, 0x7d73e, indexCPS2Sprites_SFA2_Stages, 0x39 }, /* Delta: 0x180 */
    { L"Sprites", 0x75d3e, 0x75e1e, indexCPS2Sprites_SFA2_Stages, 0xac }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_THAILANDLAKE[] =
{
    { L"Midground 1/2", 0x7d73e, 0x7d93e, indexCPS2Sprites_SFA2_Stages, 0x51, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7d93e, 0x7db3e }, /* Delta: 0x180 */
    { L"Sprites", 0x75e1e, 0x75efe, indexCPS2Sprites_SFA2_Stages, 0xb6 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_USATRUCK[] =
{
    { L"Midground 1/2", 0x7db3e, 0x7dd3e, indexCPS2Sprites_SFA2_Stages, 0x90, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7dd3e, 0x7df3e, indexCPS2Sprites_SFA2_Stages, 0x91 }, /* Delta: 0x180 */
    { L"Sprites", 0x75efe, 0x75fde, indexCPS2Sprites_SFA2_Stages, 0xb9 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_USAMETROCITY[] =
{
    { L"Sprites", 0x75fde, 0x760be, indexCPS2Sprites_SFA2_Stages, 0xb8, &pairFullyLinkedNode }, /* Delta: -0x280 */
    { L"Midground 1/2", 0x7df3e, 0x7e13e, indexCPS2Sprites_SFA2_Stages, 0x62, &pairNext }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7e13e, 0x7e33e }, /* Delta: 0x180 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_ENGLAND[] =
{
    { L"Midground 1/2", 0x7e33e, 0x7e53e, indexCPS2Sprites_SFA2_Stages, 0x7e, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7e53e, 0x7e73e, indexCPS2Sprites_SFA2_Stages, 0x7f }, /* Delta: 0x180 */
    { L"Sprites", 0x760be, 0x7619e, indexCPS2Sprites_SFA2_Stages, 0xae }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_ITALY[] =
{
    { L"Sprites", 0x7619e, 0x7627e, indexCPS2Sprites_SFA2_Stages, 0xb1, &pairFullyLinkedNode }, /* Delta: -0x280 */
    { L"Midground: Ship 1/2", 0x7e73e, 0x7e93e, indexCPS2Sprites_SFA2_Stages, 0x75, &pairNext }, /* Delta: 0x180 */
    { L"Midground: Ship 2/2", 0x7e93e, 0x7eb3e, indexCPS2Sprites_SFA2_Stages, 0x76 }, /* Delta: 0x180 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_BRAZIL[] =
{
    { L"Midground 1/2", 0x7eb3e, 0x7ed3e, indexCPS2Sprites_SFA2_Stages, 0x34, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7ed3e, 0x7ef3e }, /* Delta: 0x180 */
    { L"Sprites", 0x7627e, 0x7635e, indexCPS2Sprites_SFA2_Stages, 0xaa }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_THAILANDSTATUE[] =
{
    { L"Midground 1/2", 0x7ef3e, 0x7f13e, indexCPS2Sprites_SFA2_Stages, 0x58, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7f13e, 0x7f33e }, /* Delta: 0x180 */
    { L"Sprites", 0x7635e, 0x7643e, indexCPS2Sprites_SFA2_Stages, 0xb7 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_HONGKONG[] =
{
    { L"Sprites", 0x7643e, 0x7651e, indexCPS2Sprites_SFA2_Stages, 0xaf, &pairFullyLinkedNode }, /* Delta: -0x280 */
    { L"Midground 1/2", 0x7f33e, 0x7f53e, indexCPS2Sprites_SFA2_Stages, 0x40 }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7f53e, 0x7f73e }, /* Delta: 0x180 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_JAPANHOUSE[] =
{
    { L"Midground 1/2", 0x7f73e, 0x7f93e, indexCPS2Sprites_SFA2_Stages, 0x4c, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7f93e, 0x7fb3e, indexCPS2Sprites_SFA2_Stages, 0x4d }, /* Delta: 0x180 */
    { L"Sprites", 0x7651e, 0x765fe, indexCPS2Sprites_SFA2_Stages, 0xb2 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_USAELEVATOR[] =
{
    { L"Midground 1/2", 0x7fb3e, 0x7fd3e, indexCPS2Sprites_SFA2_Stages, 0x5d, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x7fd3e, 0x7ff3e }, /* Delta: 0x180 */
    { L"Sprites", 0x765fe, 0x766de, indexCPS2Sprites_SFA2_Stages, 0xad }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_INDIA[] =
{
    // Normal "2" is empty and in ROM08
    { L"Midground", 0x7ff3e, 0x7fffe, indexCPS2Sprites_SFA2_Stages, 0x44, &pairFullyLinkedNode },
    { L"Sprites", 0x766de, 0x767be, indexCPS2Sprites_SFA2_Stages, 0xb0 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_USSR[] =
{
    { L"Sprites", 0x767be, 0x7689e, indexCPS2Sprites_SFA2_Stages, 0xba }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_CHINAALLEY[] =
{
    { L"Sprites", 0x7689e, 0x7697e, indexCPS2Sprites_SFA2_Stages, 0xab }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_AUSTRALIA[] =
{
    { L"Sprites", 0x7697e, 0x76a5e, indexCPS2Sprites_SFA2_Stages, 0xa9 }, /* Delta: -0x280 */
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV1_PALETTES_VENEZUALA[] =
{
    // just the stage shadow
    { L"Sprites", 0x76cde - 0x280, 0x76dbe - 0x280, indexCPS2Sprites_SFA2_Stages, 0xbf },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_JAPANWINTER[] =
{
    { L"Sprites",       0x75c3e, 0x75d1e, indexCPS2Sprites_SFA2_Stages, 0xb5, &pairFullyLinkedNode },
    { L"Midground 1/2", 0x7c1be, 0x7c3be, indexCPS2Sprites_SFA2_Stages, 0x50, &pairNext },
    { L"Midground 2/2", 0x7c3be, 0x7c5be },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_USAPARTY[] =
{
    { L"Midground 1/2", 0x7c5be, 0x7c7be, indexCPS2Sprites_SFA2_Stages, 0x87, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7c7be, 0x7c9be, indexCPS2Sprites_SFA2_Stages, 0x88 },
    { L"Sprites",       0x75d1e, 0x75dfe, indexCPS2Sprites_SFA2_Stages, 0xb3 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_JAPANGOKUENTOU[] =
{
    { L"Midground 1/2", 0x7c9be, 0x7cbbe, indexCPS2Sprites_SFA2_Stages, 0x45, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7cbbe, 0x7cdbe },
    { L"Sprites",       0x75dfe, 0x75ede, indexCPS2Sprites_SFA2_Stages, 0xa8 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_USAPLANE[] =
{
    
    { L"Sprites",               0x75f5e, 0x75fbe, indexCPS2Sprites_SFA2_Stages, 0xb4, &pairFullyLinkedNode },
    { L"Midground: Plane 1/2",  0x7cdbe, 0x7cfbe, indexCPS2Sprites_SFA2_Stages, 0x8d, &pairNext },
    { L"Midground: Plane 2/2",  0x7cfbe, 0x7d1be, indexCPS2Sprites_SFA2_Stages, 0x8e },
    { L"Foreground Sprites",    0x75ede, 0x75f5e, indexCPS2Sprites_SFA2_Stages, 0xbb },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_CHINASTREET[] =
{
    { L"Midground 1/2", 0x7d1be, 0x7d3be, indexCPS2Sprites_SFA2_Stages, 0x38, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7d3be, 0x7d5be, indexCPS2Sprites_SFA2_Stages, 0x39 },
    // we're missing sprite coverage of line 5 which is another chunk of bicyclists.
    // but this is a rough sprite to capture since it's a ton of motioning objects
    { L"Sprites",       0x75fbe, 0x7609e, indexCPS2Sprites_SFA2_Stages, 0xac },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_THAILANDLAKE[] =
{
    { L"Midground 1/2", 0x7d5be, 0x7d7be, indexCPS2Sprites_SFA2_Stages, 0x51, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7d7be, 0x7d9be },
    { L"Sprites",       0x7609e, 0x7617e, indexCPS2Sprites_SFA2_Stages, 0xb6 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_USATRUCK[] =
{
    { L"Midground 1/2", 0x7d9be, 0x7dbbe, indexCPS2Sprites_SFA2_Stages, 0x90, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7dbbe, 0x7ddbe, indexCPS2Sprites_SFA2_Stages, 0x91 },
    { L"Sprites",       0x7617e, 0x7625e, indexCPS2Sprites_SFA2_Stages, 0xb9 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_USAMETROCITY[] =
{
    { L"Sprites",       0x7625e, 0x7633e, indexCPS2Sprites_SFA2_Stages, 0xb8, &pairFullyLinkedNode },
    { L"Midground 1/2", 0x7ddbe, 0x7dfbe, indexCPS2Sprites_SFA2_Stages, 0x62, &pairNext },
    { L"Midground 2/2", 0x7dfbe, 0x7e1be },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_ENGLAND[] =
{
    { L"Midground 1/2", 0x7e1be, 0x7e3be, indexCPS2Sprites_SFA2_Stages, 0x7e, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7e3be, 0x7e5be, indexCPS2Sprites_SFA2_Stages, 0x7f },
    { L"Sprites",       0x7633e, 0x7641e, indexCPS2Sprites_SFA2_Stages, 0xae },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_ITALY[] =
{
    { L"Sprites",               0x7641e, 0x764fe, indexCPS2Sprites_SFA2_Stages, 0xb1, &pairFullyLinkedNode },
    { L"Midground: Ship 1/2",   0x7e5be, 0x7e7be, indexCPS2Sprites_SFA2_Stages, 0x75, &pairNext },
    { L"Midground: Ship 2/2",   0x7e7be, 0x7e9be, indexCPS2Sprites_SFA2_Stages, 0x76 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_BRAZIL[] =
{
    { L"Midground 1/2", 0x7e9be, 0x7ebbe, indexCPS2Sprites_SFA2_Stages, 0x34, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7ebbe, 0x7edbe },
    { L"Sprites",       0x764fe, 0x765de, indexCPS2Sprites_SFA2_Stages, 0xaa },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_THAILANDSTATUE[] =
{
    { L"Midground 1/2", 0x7edbe, 0x7efbe, indexCPS2Sprites_SFA2_Stages, 0x58, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7efbe, 0x7f1be },
    { L"Sprites",       0x765de, 0x766be, indexCPS2Sprites_SFA2_Stages, 0xb7 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_HONGKONG[] =
{
    { L"Sprites",       0x766be, 0x7679e, indexCPS2Sprites_SFA2_Stages, 0xaf, &pairFullyLinkedNode },
    { L"Midground 1/2", 0x7f1be, 0x7f3be, indexCPS2Sprites_SFA2_Stages, 0x40 },
    { L"Midground 2/2", 0x7f3be, 0x7f5be },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_JAPANHOUSE[] =
{
    { L"Midground 1/2", 0x7f5be, 0x7f7be, indexCPS2Sprites_SFA2_Stages, 0x4c, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7f7be, 0x7f9be, indexCPS2Sprites_SFA2_Stages, 0x4d },
    { L"Sprites",       0x7679e, 0x7687e, indexCPS2Sprites_SFA2_Stages, 0xb2 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_USAELEVATOR[] =
{
    { L"Midground 1/2", 0x7f9be, 0x7fbbe, indexCPS2Sprites_SFA2_Stages, 0x5d, &pairFullyLinkedNode },
    { L"Midground 2/2", 0x7fbbe, 0x7fdbe },
    { L"Sprites",       0x7687e, 0x7695e, indexCPS2Sprites_SFA2_Stages, 0xad },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_INDIA[] =
{
    { L"Midground 1/2", 0x7fdbe, 0x7ffbe, indexCPS2Sprites_SFA2_Stages, 0x44, &pairFullyLinkedNode },
    //{ L"India 2/2",                 0x7ffbe, 0x801be, indexCPS2Sprites_SFA2_Stages, -1 },
    { L"Midground 2/2", 0x7ffbe, 0x7fffe, indexCPS2Sprites_SFA2_Stages, -1 },
    // Rest are in ROM08
    //{ L"USSR 1/2",                  0x801be, 0x803be, indexCPS2Sprites_SFA2_Stages, -1, &pairNext },
    //{ L"USSR 2/2",                  0x803be, 0x805be, indexCPS2Sprites_SFA2_Stages, -1 },
    //{ L"China (Alley) 1/2",         0x805be, 0x807be, indexCPS2Sprites_SFA2_Stages, -1, &pairNext },
    //{ L"China (Alley) 2/2",         0x807be, 0x809be, indexCPS2Sprites_SFA2_Stages, -1 },
    //{ L"Australia 1/2",             0x809be, 0x80bbe, indexCPS2Sprites_SFA2_Stages, -1, &pairNext },
    //{ L"Australia 2/2",             0x80bbe, 0x80dbe, indexCPS2Sprites_SFA2_Stages, -1 },
    //{ L"Venezuala 1/2",             0x80dbe, 0x80fbe, indexCPS2Sprites_SFA2_Stages, -1, &pairNext },
    //{ L"Venezuala 2/2",             0x80fbe, 0x811be, indexCPS2Sprites_SFA2_Stages, -1 },
    { L"Sprites",       0x7695e, 0x76a3e, indexCPS2Sprites_SFA2_Stages, 0xb0 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_USSR[] =
{
    { L"Sprites",       0x76a3e, 0x76b1e, indexCPS2Sprites_SFA2_Stages, 0xba },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_CHINAALLEY[] =
{
    { L"Sprites",       0x76b1e, 0x76bfe, indexCPS2Sprites_SFA2_Stages, 0xab },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_AUSTRALIA[] =
{
    { L"Sprites",       0x76bfe, 0x76cde, indexCPS2Sprites_SFA2_Stages, 0xa9 },
};

const sGame_PaletteDataset SFA2_A_STAGES07_REV2_PALETTES_VENEZUALA[] =
{
    // just the stage shadow
    { L"Sprites",       0x76cde, 0x76dbe, indexCPS2Sprites_SFA2_Stages, 0xbf },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_JAPANWINTER[] =
{
    { L"Background 1/2", 0x1133e, 0x1153e, indexCPS2Sprites_SFA2_Stages, 0x4e, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1153e, 0x1171e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x6b3e, 0x6d3e, indexCPS2Sprites_SFA2_Stages, 0x4f, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x6d3e, 0x6f3e }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_USAPARTY[] =
{
    { L"Sky Animation", 0x28abe, 0x28b9e, indexCPS2Sprites_SFA2_Stages, 0x84, &pairFullyLinkedNode }, /* Delta: 0 */
    { L"Foreground 1/2", 0x6f3e, 0x713e, indexCPS2Sprites_SFA2_Stages, 0x82, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x713e, 0x733e, indexCPS2Sprites_SFA2_Stages, 0x83 }, /* Delta: 0x580 */
    { L"Foreground Objects 1/2", 0x1173e, 0x1193e, indexCPS2Sprites_SFA2_Stages, 0x63, &pairNext }, /* Delta: 0x980 */
    { L"Foreground Objects 2/2", 0x1193e, 0x11b1e, indexCPS2Sprites_SFA2_Stages, 0x64 }, /* Delta: 0x980 */
    { L"Candle Animations 1", 0x29d1e, 0x29d7e, indexCPS2Sprites_SFA2_Stages, 0x85 }, /* Delta: 0 */
    { L"Candle Animations 2", 0x29d7e, 0x29dde, indexCPS2Sprites_SFA2_Stages, 0x86 }, /* Delta: 0 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_JAPANGOKUENTOU[] =
{
    { L"Foreground 1/2", 0x733e, 0x753e, indexCPS2Sprites_SFA2_Stages, 0x46, &pairFullyLinkedNode }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x753e, 0x773e, indexCPS2Sprites_SFA2_Stages, 0x47 }, /* Delta: 0x580 */
    { L"Front Layer 1/2", 0x11b3e, 0x11d3e, indexCPS2Sprites_SFA2_Stages, 0x48, &pairNext }, /* Delta: 0x980 */
    { L"Front Layer 2/2", 0x11d3e, 0x11f1e }, /* Delta: 0x980 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_USAPLANE[] =
{
    { L"Background 1/2", 0x11f3e, 0x1213e, indexCPS2Sprites_SFA2_Stages, 0x8f, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1213e, 0x1231e }, /* Delta: 0x980 */
    { L"Background Animations 1", 0x2c4fe, 0x2c63e, indexCPS2Sprites_SFA2_Stages, 0x9f }, /* Delta: 0 */
    { L"Background Animations 2", 0x2c63e, 0x2c81e, indexCPS2Sprites_SFA2_Stages, 0xa0 }, /* Delta: 0 */
    { L"Background Animations 3", 0x2c81e, 0x2ca1e, indexCPS2Sprites_SFA2_Stages, 0xa1 }, /* Delta: 0 */
    { L"Background Animations 4", 0x2ca1e, 0x2cb5e, indexCPS2Sprites_SFA2_Stages, 0xa2 }, /* Delta: 0 */
    { L"Foreground 1/2", 0x773e, 0x793e, indexCPS2Sprites_SFA2_Stages, 0xa3, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x793e, 0x7b3e, indexCPS2Sprites_SFA2_Stages, 0xa4 }, /* Delta: 0x580 */
    { L"Ground 1", 0x298be, 0x29abe, indexCPS2Sprites_SFA2_Stages, 0xa5 }, /* Delta: 0 */
    { L"Ground 2", 0x29abe, 0x29b3e, indexCPS2Sprites_SFA2_Stages, 0xa6 }, /* Delta: 0 */
    // Note I swapped the order here so it syncs better visually
    { L"Ground Animation Cycle 2/2", 0x1cdfe, 0x1ce5e, indexCPS2Sprites_SFA2_Stages, 0xc6 }, /* Delta: 0x900 */
    { L"Ground Animation Cycle 1/2", 0x1cd9e, 0x1cdfe, indexCPS2Sprites_SFA2_Stages, 0xc6 }, /* Delta: 0x900 */

    { L"Wing Tip Animation Cycle", 0x2953e, 0x295be, indexCPS2Sprites_SFA2_Stages, 0xa7 }, /* Delta: 0 */
    { L"Unknown Animation Cycle", 0x295be, 0x2963e }, /* Delta: 0 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_CHINASTREET[] =
{
    // Remapped locations for "China (Street)" in new ROM (note this is speculative):
    { L"Foreground 1/2", 0x7b3e, 0x7d3e, indexCPS2Sprites_SFA2_Stages, 0x3a, &pairFullyLinkedNode }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x7d3e, 0x7f3e, indexCPS2Sprites_SFA2_Stages, 0x3b }, /* Delta: 0x580 */
    { L"Bicyclists 1/2", 0x1233e, 0x1253e, indexCPS2Sprites_SFA2_Stages, 0x3c, &pairNext }, /* Delta: 0x980 */
    { L"Bicyclists 2/2", 0x1253e, 0x1271e }, /* Delta: 0x980 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_THAILANDLAKE[] =
{
    // Remapped locations for "Thailand (Lake)" in new ROM (note this is speculative):
    { L"Background 1/2", 0x1273e, 0x1293e, indexCPS2Sprites_SFA2_Stages, 0x54, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1293e, 0x12b1e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x7f3e, 0x813e, indexCPS2Sprites_SFA2_Stages, 0x52, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x813e, 0x833e, indexCPS2Sprites_SFA2_Stages, 0x53 }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_USATRUCK[] =
{
    { L"Background 1/2", 0x12b3e, 0x12d3e, indexCPS2Sprites_SFA2_Stages, 0x65, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x12d3e, 0x12f1e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x833e, 0x853e, indexCPS2Sprites_SFA2_Stages, 0x66, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x853e, 0x873e }, /* Delta: 0x580 */
    { L"Animation Cycle 1 ", 0x28fbe, 0x291be, indexCPS2Sprites_SFA2_Stages, 0x8a }, /* Delta: 0 */
    { L"Animation Cycle 2 ", 0x291be, 0x293be, indexCPS2Sprites_SFA2_Stages, 0x8b }, /* Delta: 0 */
    { L"Animation Cycle 3", 0x293be, 0x2953e, indexCPS2Sprites_SFA2_Stages, 0x8c }, /* Delta: 0 */
    { L"Tree and Bush Animation Cycle", 0x1cc5e, 0x1cc9e, indexCPS2Sprites_SFA2_Stages, 0xc5, &pairNext }, /* Delta: 0x900 */
    { L"Truck Decor Animation Cycle", 0x1cc9e, 0x1cd1e, indexCPS2Sprites_SFA2_Stages, 0xc2 }, /* Delta: 0x900 */
    { L"Truck Lanterns Animation Cycle", 0x1cd1e, 0x1cd5e, indexCPS2Sprites_SFA2_Stages, 0xc4 }, /* Delta: 0x900 */
    { L"Truck Fish Streamer Animation Cycle", 0x1cd5e, 0x1cd9e, indexCPS2Sprites_SFA2_Stages, 0xc3 }, /* Delta: 0x900 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_USAMETROCITY[] =
{
    { L"Background 1/2", 0x12f3e, 0x1313e, indexCPS2Sprites_SFA2_Stages, 0x5e, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1313e, 0x1331e, indexCPS2Sprites_SFA2_Stages, 0x5f }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x873e, 0x893e, indexCPS2Sprites_SFA2_Stages, 0x60, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x893e, 0x8b3e, indexCPS2Sprites_SFA2_Stages, 0x61 }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_ENGLAND[] =
{
    { L"Foreground 1/2", 0x8b3e, 0x8d3e, indexCPS2Sprites_SFA2_Stages, 0x7d, &pairFullyLinkedNode }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x8d3e, 0x8f3e }, /* Delta: 0x580 */

    // These are oddly sliced
    { L"Animation Cycle 1 1/3",    0x28b9e, 0x28bbe }, /* delta 0 on these thankfully */
    { L"Animation Cycle 1 2/3",    0x28bbe, 0x28bde },
    { L"Animation Cycle 1 3/3",    0x28d5e, 0x28d7e },
    { L"Animation Cycle 2 1/3",    0x28bde, 0x28bfe },
    { L"Animation Cycle 2 2/3",    0x28bfe, 0x28c1e },
    { L"Animation Cycle 2 3/3",    0x28d7e, 0x28d9e },
    { L"Animation Cycle 3 1/3",    0x28c1e, 0x28c3e, indexCPS2Sprites_SFA2_Stages, 0x80 },
    { L"Animation Cycle 3 2/3",    0x28c3e, 0x28c5e, indexCPS2Sprites_SFA2_Stages, 0x80 },
    { L"Animation Cycle 3 3/3",    0x28d9e, 0x28dbe, indexCPS2Sprites_SFA2_Stages, 0x80 },
    { L"Animation Cycle 4 1/3",    0x28c5e, 0x28c7e, indexCPS2Sprites_SFA2_Stages, 0xc7 },
    { L"Animation Cycle 4 2/3",    0x28c7e, 0x28c9e, indexCPS2Sprites_SFA2_Stages, 0xc7 },
    { L"Animation Cycle 4 3/3",    0x28dbe, 0x28dde, indexCPS2Sprites_SFA2_Stages, 0xc7 },
    { L"Animation Cycle 5 1/3",    0x28c9e, 0x28cbe, indexCPS2Sprites_SFA2_Stages, 0xc8 },
    { L"Animation Cycle 5 2/3",    0x28cbe, 0x28cde, indexCPS2Sprites_SFA2_Stages, 0xc8 },
    { L"Animation Cycle 5 3/3",    0x28dde, 0x28dfe, indexCPS2Sprites_SFA2_Stages, 0xc8 },
    { L"Animation Cycle 6 1/3",    0x28cde, 0x28cfe },
    { L"Animation Cycle 6 2/3",    0x28cfe, 0x28d1e },
    { L"Animation Cycle 6 3/3",    0x28dfe, 0x28e1e },
    { L"Animation Cycle 7 1/3",    0x28d1e, 0x28d3e, indexCPS2Sprites_SFA2_Stages, 0xc9 },
    { L"Animation Cycle 7 2/3",    0x28d3e, 0x28d5e, indexCPS2Sprites_SFA2_Stages, 0xc9 },
    { L"Animation Cycle 7 3/3",    0x28e1e, 0x28e3e, indexCPS2Sprites_SFA2_Stages, 0xc9 },

    { L"Infrastructure 1/2", 0x1333e, 0x1353e, indexCPS2Sprites_SFA2_Stages, 0x81, &pairNext }, /* Delta: 0x980 */
    { L"Infrastructure 2/2", 0x1353e, 0x1371e }, /* Delta: 0x980 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_ITALY[] =
{
    { L"Background 1/2", 0x1373e, 0x1393e, indexCPS2Sprites_SFA2_Stages, 0x71, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1393e, 0x13b1e, indexCPS2Sprites_SFA2_Stages, 0x72 }, /* Delta: 0x980 */
    { L"Water Animation Cycle 1 1/2", 0x2c0fe, 0x2c2fe, indexCPS2Sprites_SFA2_Stages, 0x77 }, /* Delta: 0 */
    { L"Water Animation Cycle 1 2/2", 0x2c2fe, 0x2c33e, indexCPS2Sprites_SFA2_Stages, 0x77 }, /* Delta: 0 */
    { L"Water Animation Cycle 2", 0x2c33e, 0x2c45e, indexCPS2Sprites_SFA2_Stages, 0x78 }, /* Delta: 0 */
    { L"Foreground 1/2", 0x8f3e, 0x913e, indexCPS2Sprites_SFA2_Stages, 0x73, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x913e, 0x933e, indexCPS2Sprites_SFA2_Stages, 0x74 }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_BRAZIL[] =
{
    { L"Background 1/2", 0x13b3e, 0x13d3e, indexCPS2Sprites_SFA2_Stages, 0x37, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x13d3e, 0x13f1e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x933e, 0x953e, indexCPS2Sprites_SFA2_Stages, 0x35, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x953e, 0x973e, indexCPS2Sprites_SFA2_Stages, 0x36 }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_THAILANDSTATUE[] =
{
    { L"Background 1/2", 0x13f3e, 0x1413e, indexCPS2Sprites_SFA2_Stages, 0x55, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1413e, 0x1431e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x973e, 0x993e, indexCPS2Sprites_SFA2_Stages, 0x56, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x993e, 0x9b3e, indexCPS2Sprites_SFA2_Stages, 0x57 }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_HONGKONG[] =
{
    { L"Background 1/2", 0x1433e, 0x1453e, indexCPS2Sprites_SFA2_Stages, 0x3d, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1453e, 0x1471e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x9b3e, 0x9d3e, indexCPS2Sprites_SFA2_Stages, 0x3e, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0x9d3e, 0x9f3e, indexCPS2Sprites_SFA2_Stages, 0x3f }, /* Delta: 0x580 */
    { L"People", 0x1cafe, 0x1cb3e, indexCPS2Sprites_SFA2_Stages, 0xbe }, /* Delta: 0x900 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_JAPANHOUSE[] =
{
    { L"Background 1/2", 0x1473e, 0x1493e, indexCPS2Sprites_SFA2_Stages, 0x49, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1493e, 0x14b1e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0x9f3e, 0xa13e, indexCPS2Sprites_SFA2_Stages, 0x4a, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0xa13e, 0xa33e, indexCPS2Sprites_SFA2_Stages, 0x4b }, /* Delta: 0x580 */
    { L"Person Animation Cycle", 0x1d03e, 0x1d0be, indexCPS2Sprites_SFA2_Stages, 0xc0 }, /* Delta: 0x900 */
    { L"Stove Animation Cycle", 0x1cbbe, 0x1cc5e, indexCPS2Sprites_SFA2_Stages, 0xc1 }, /* Delta: 0x900 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_USAELEVATOR[] =
{
    { L"Background 1/2", 0x14b3e, 0x14d3e, indexCPS2Sprites_SFA2_Stages, 0x59, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x14d3e, 0x14f1e, indexCPS2Sprites_SFA2_Stages, 0x5a }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0xa33e, 0xa53e, indexCPS2Sprites_SFA2_Stages, 0x5b, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0xa53e, 0xa73e, indexCPS2Sprites_SFA2_Stages, 0x5c }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_INDIA[] =
{
    { L"Background 1/2", 0x14f3e, 0x1513e, indexCPS2Sprites_SFA2_Stages, 0x41, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1513e, 0x1531e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0xa73e, 0xa93e, indexCPS2Sprites_SFA2_Stages, 0x42, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0xa93e, 0xab3e, indexCPS2Sprites_SFA2_Stages, 0x43 }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_USSR[] =
{
    { L"Background 1/2", 0x1533e, 0x1553e, indexCPS2Sprites_SFA2_Stages, 0x92, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x1553e, 0x1571e, indexCPS2Sprites_SFA2_Stages, 0x93 }, /* Delta: 0x980 */
    { L"More Animations", 0x2cb5e, 0x2cc1e, indexCPS2Sprites_SFA2_Stages, 0x9e }, /* Delta: 0 */
    { L"Midground 1/2", 0x33e, 0x53e, indexCPS2Sprites_SFA2_Stages, 0x94, &pairNext }, /* Delta: 0x180 */
    { L"Midground 2/2", 0x53e, 0x73e, indexCPS2Sprites_SFA2_Stages, 0x95 }, /* Delta: 0x180 */
    { L"Foreground 1/2", 0xab3e, 0xad3e, indexCPS2Sprites_SFA2_Stages, 0x96, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0xad3e, 0xaf3e, indexCPS2Sprites_SFA2_Stages, 0x97 }, /* Delta: 0x580 */

    { L"Foreground Animation Cycles 1/6",   0x29dde, 0x29fbe, indexCPS2Sprites_SFA2_Stages, 0x98 },
    { L"Foreground Animation Cycles 2/6",   0x29fbe, 0x2a15e, indexCPS2Sprites_SFA2_Stages, 0x99 },
    { L"Foreground Animation Cycles 3/6",   0x2a19e, 0x2a25e, indexCPS2Sprites_SFA2_Stages, 0x9a },
    { L"Foreground Animation Cycles 4/6",   0x2a25e, 0x2a45e, indexCPS2Sprites_SFA2_Stages, 0x9b },
    { L"Foreground Animation Cycles 5/6",   0x2a45e, 0x2a65e, indexCPS2Sprites_SFA2_Stages, 0x9c },
    { L"Foreground Animation Cycles 6/6",   0x2a65e, 0x2a85e, indexCPS2Sprites_SFA2_Stages, 0x9d },
    { L"Ground Animation Cycles 1/2",       0x2a15e, 0x2a19e, indexCPS2Sprites_SFA2_Stages, 0xcb },
    { L"Ground Animation Cycles 2/2",       0x2a85e, 0x2a8be, indexCPS2Sprites_SFA2_Stages, 0xcb },

    { L"Electricity Animation Cycle 1/2", 0x2009e, 0x200de, indexCPS2Sprites_SFA2_Stages, 0xcc }, /* Delta: 0x900 */
    { L"Electricity Animation Cycle 2/2", 0x1fb7e, 0x1fbde, indexCPS2Sprites_SFA2_Stages, 0xcc }, /* Delta: 0x900 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_CHINAALLEY[] =
{
    { L"Background 1/2", 0xaf3e, 0xb13e, indexCPS2Sprites_SFA2_Stages, 0x6a, &pairFullyLinkedNode }, /* Delta: 0x580 */
    { L"Background 2/2", 0xb13e, 0xb33e, indexCPS2Sprites_SFA2_Stages, 0x6b }, /* Delta: 0x580 */
    { L"Background Animation Cycle", 0x297de, 0x2981e, indexCPS2Sprites_SFA2_Stages, 0x6c }, /* Delta: 0 */
    { L"Spotlights 1/2", 0x73e, 0x93e, indexCPS2Sprites_SFA2_Stages, 0x6d, &pairNext }, /* Delta: 0x180 */
    { L"Spotlights 2/2", 0x93e, 0xb3e, indexCPS2Sprites_SFA2_Stages, 0x6e }, /* Delta: 0x180 */
    { L"Ground 1/2", 0x1573e, 0x1593e, indexCPS2Sprites_SFA2_Stages, 0x6f, &pairNext }, /* Delta: 0x980 */
    { L"Ground 2/2", 0x1593e, 0x15b1e, indexCPS2Sprites_SFA2_Stages, 0x70 }, /* Delta: 0x980 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_AUSTRALIA[] =
{
    { L"Background 1/2", 0x15b3e, 0x15d3e, indexCPS2Sprites_SFA2_Stages, 0x79, &pairFullyLinkedNode }, /* Delta: 0x980 */
    { L"Background 2/2", 0x15d3e, 0x15f1e, indexCPS2Sprites_SFA2_Stages, 0xff }, /* Delta: 0x980 */
    // Match at 0x15b3e, 0x15bbe (delta -0x16920)
    // Match at 0x2c45e, 0x2c4de (delta 0x0)
    { L"Background Animation Cycle", 0x2c45e, 0x2c4de, indexCPS2Sprites_SFA2_Stages, 0x79 }, /* Delta: 0 */
    { L"Midground 1/2", 0xb3e, 0xd3e, indexCPS2Sprites_SFA2_Stages, 0xff, &pairNext }, /* Delta: 0x180 */
    { L"Midground 2/2", 0xd3e, 0xf3e, indexCPS2Sprites_SFA2_Stages, 0xff }, /* Delta: 0x180 */
    { L"Foreground 1/2", 0xb33e, 0xb53e, indexCPS2Sprites_SFA2_Stages, 0xff, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0xb53e, 0xb73e, indexCPS2Sprites_SFA2_Stages, 0xff }, /* Delta: 0x580 */
    { L"Foreground Animation Cycle", 0x29b3e, 0x29d1e, indexCPS2Sprites_SFA2_Stages, 0x7a }, /* Delta: 0 */
    { L"Animation cycle 1?", 0x2981e, 0x298be, indexCPS2Sprites_SFA2_Stages, 0x7b }, /* Delta: 0 */
    { L"Animation cycle 2?", 0x2bade, 0x2bcde, indexCPS2Sprites_SFA2_Stages, 0xff }, /* Delta: 0 */
    { L"Mid sky animation cycle", 0x2963e, 0x296de, indexCPS2Sprites_SFA2_Stages, 0x7c }, /* Delta: 0 */
    { L"Top Grass Animation Cycle", 0x1cf9e, 0x1d03e, indexCPS2Sprites_SFA2_Stages, 0xca }, /* Delta: 0x900 */
    { L"Front Grass Top Animation Cycle", 0x1ce5e, 0x1cefe, indexCPS2Sprites_SFA2_Stages, 0xbc }, /* Delta: 0x900 */
    { L"Front Grass Bottom Animation Cycle", 0x1cefe, 0x1cf9e, indexCPS2Sprites_SFA2_Stages, 0xbd }, /* Delta: 0x900 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_PALETTES_VENEZUALA[] =
{
    { L"Background 1/2", 0xf3e, 0x113e, indexCPS2Sprites_SFA2_Stages, 0x69, &pairFullyLinkedNode }, /* Delta: 0x180 */
    { L"Background 2/2", 0x113e, 0x133e }, /* Delta: 0x180 */
    { L"Midground 1/2", 0x15f3e, 0x1613e, indexCPS2Sprites_SFA2_Stages, 0x67, &pairNext }, /* Delta: 0x980 */
    { L"Midground 2/2", 0x1613e, 0x1631e }, /* Delta: 0x980 */
    { L"Foreground 1/2", 0xb73e, 0xb93e, indexCPS2Sprites_SFA2_Stages, 0x68, &pairNext }, /* Delta: 0x580 */
    { L"Foreground 2/2", 0xb93e, 0xbb3e }, /* Delta: 0x580 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_JAPANWINTER[] =
{
    { L"Background 1/2",        0x109be, 0x10bbe, indexCPS2Sprites_SFA2_Stages, 0x4e, &pairFullyLinkedNode },
    { L"Background 2/2",        0x10bbe, 0x10d9e },
    { L"Foreground 1/2",        0x65be, 0x67be, indexCPS2Sprites_SFA2_Stages, 0x4f, &pairNext },
    { L"Foreground 2/2",        0x67be, 0x69be },
    // rom07 sprites 0x75c3e, 0x75d1e
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_USAPARTY[] =
{
    { L"Sky Animation",         0x28abe, 0x28b9e, indexCPS2Sprites_SFA2_Stages, 0x84, &pairFullyLinkedNode },

    { L"Foreground 1/2",        0x69be, 0x6bbe, indexCPS2Sprites_SFA2_Stages, 0x82, &pairNext },
    { L"Foreground 2/2",        0x6bbe, 0x6dbe, indexCPS2Sprites_SFA2_Stages, 0x83 },

    { L"Foreground Objects 1/2",  0x10dbe, 0x10fbe, indexCPS2Sprites_SFA2_Stages, 0x63, &pairNext },
    { L"Foreground Objects  2/2", 0x10fbe, 0x1119e, indexCPS2Sprites_SFA2_Stages, 0x64 },
    // rom07 sprites 0x75d1e, 0x75dfe
    // rom08 sky animation 0x28abe, 0x28ba0

    { L"Candle Animations 1",   0x29d1e, 0x29d7e, indexCPS2Sprites_SFA2_Stages, 0x85 },
    { L"Candle Animations 2",   0x29d7e, 0x29dde, indexCPS2Sprites_SFA2_Stages, 0x86 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_JAPANGOKUENTOU[] =
{
    { L"Foreground 1/2",     0x6dbe, 0x6fbe, indexCPS2Sprites_SFA2_Stages, 0x46, &pairFullyLinkedNode },
    { L"Foreground 2/2",     0x6fbe, 0x71be, indexCPS2Sprites_SFA2_Stages, 0x47 },
    { L"Front Layer 1/2",    0x111be, 0x113be, indexCPS2Sprites_SFA2_Stages, 0x48, &pairNext },
    { L"Front Layer 2/2",    0x113be, 0x1159e },
    // rom07 sprites 0x75dfe, 0x75ede
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_USAPLANE[] =
{
    { L"Background 1/2",            0x115be, 0x117be, indexCPS2Sprites_SFA2_Stages, 0x8f, &pairFullyLinkedNode },
    { L"Background 2/2",            0x117be, 0x1199e },

    { L"Background Animations 1",   0x2c4fe, 0x2c63e, indexCPS2Sprites_SFA2_Stages, 0x9f },
    { L"Background Animations 2",   0x2c63e, 0x2c81e, indexCPS2Sprites_SFA2_Stages, 0xa0 },
    { L"Background Animations 3",   0x2c81e, 0x2ca1e, indexCPS2Sprites_SFA2_Stages, 0xa1 },
    { L"Background Animations 4",   0x2ca1e, 0x2cb5e, indexCPS2Sprites_SFA2_Stages, 0xa2 },

    { L"Foreground 1/2",            0x71be, 0x73be, indexCPS2Sprites_SFA2_Stages, 0xa3, &pairNext },
    { L"Foreground 2/2",            0x73be, 0x75be, indexCPS2Sprites_SFA2_Stages, 0xa4 },
    // rom07 sprites 0x75ede, 0x75fbe
    { L"Ground 1",                  0x298be, 0x29abe, indexCPS2Sprites_SFA2_Stages, 0xa5 },
    { L"Ground 2",                  0x29abe, 0x29b3e, indexCPS2Sprites_SFA2_Stages, 0xa6 },

    // sprite seems to be missing far left aspects, but it's at least
    { L"Ground Animation Cycle 1/2",    0x1c49e, 0x1c4fe, indexCPS2Sprites_SFA2_Stages, 0xc6 },
    { L"Ground Animation Cycle 2/2",    0x1c4fe, 0x1c55e, indexCPS2Sprites_SFA2_Stages, 0xc6 },

    { L"Wing Tip Animation Cycle",  0x2953e, 0x295be, indexCPS2Sprites_SFA2_Stages, 0xa7 },
    { L"Unknown Animation Cycle",   0x295be, 0x2963e },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_CHINASTREET[] =
{
    { L"Foreground 1/2",        0x75be, 0x77be, indexCPS2Sprites_SFA2_Stages, 0x3a, &pairFullyLinkedNode },
    { L"Foreground 2/2",        0x77be, 0x79be, indexCPS2Sprites_SFA2_Stages, 0x3b },
    { L"Bicyclists 1/2",        0x119be, 0x11bbe, indexCPS2Sprites_SFA2_Stages, 0x3c, &pairNext },
    { L"Bicyclists 2/2",        0x11bbe, 0x11d9e },
    // rom 07 sprites 0x75fbe, 0x7609e
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_THAILANDLAKE[] =
{
    { L"Background 1/2",       0x11dbe, 0x11fbe, indexCPS2Sprites_SFA2_Stages, 0x54, &pairFullyLinkedNode },
    { L"Background 2/2",       0x11fbe, 0x1219e },
    { L"Foreground 1/2",       0x79be, 0x7bbe, indexCPS2Sprites_SFA2_Stages, 0x52, &pairNext },
    { L"Foreground 2/2",       0x7bbe, 0x7dbe, indexCPS2Sprites_SFA2_Stages, 0x53 },
    // rom07 sprites 0x7609e, 0x7617e
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_USATRUCK[] =
{
    { L"Background 1/2",    0x121be, 0x123be, indexCPS2Sprites_SFA2_Stages, 0x65, &pairFullyLinkedNode },
    { L"Background 2/2",    0x123be, 0x1259e },
    { L"Foreground 1/2",    0x7dbe, 0x7fbe, indexCPS2Sprites_SFA2_Stages, 0x66, &pairNext },
    { L"Foreground 2/2",    0x7fbe, 0x81be },
    // rom07 sprites 0x7617e, 0x7625e
    // rom08 animation 0x28fbe, 0x291be
    { L"Animation Cycle 1 ",    0x28fbe, 0x291be, indexCPS2Sprites_SFA2_Stages, 0x8a },

    { L"Animation Cycle 2 ",    0x291be, 0x293be, indexCPS2Sprites_SFA2_Stages, 0x8b },
    { L"Animation Cycle 3",     0x293be, 0x2953e, indexCPS2Sprites_SFA2_Stages, 0x8c },

    { L"Tree and Bush Animation Cycle",     0x1c35e, 0x1c39e, indexCPS2Sprites_SFA2_Stages, 0xc5, &pairNext3Palettes },
    { L"Truck Decor Animation Cycle",       0x1c39e, 0x1c41e, indexCPS2Sprites_SFA2_Stages, 0xc2 },
    { L"Truck Lanterns Animation Cycle",    0x1c41e, 0x1c45e, indexCPS2Sprites_SFA2_Stages, 0xc4 },
    { L"Truck Fish Streamer Animation Cycle", 0x1c45e, 0x1c49e, indexCPS2Sprites_SFA2_Stages, 0xc3 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_USAMETROCITY[] =
{
    { L"Background 1/2",      0x125be, 0x127be, indexCPS2Sprites_SFA2_Stages, 0x5e, &pairFullyLinkedNode },
    { L"Background 2/2",      0x127be, 0x1299e, indexCPS2Sprites_SFA2_Stages, 0x5f },
    { L"Foreground 1/2",      0x81be, 0x83be, indexCPS2Sprites_SFA2_Stages, 0x60, &pairNext },
    { L"Foreground 2/2",      0x83be, 0x85be, indexCPS2Sprites_SFA2_Stages, 0x61 },
    // rom07 0x7625e, 0x7633e
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_ENGLAND[] =
{
    { L"Foreground 1/2",        0x85be, 0x87be, indexCPS2Sprites_SFA2_Stages, 0x7d, &pairFullyLinkedNode },
    { L"Foreground 2/2",        0x87be, 0x89be },

    // rom07 sprites  0x7633e, 0x7641e
    // rom08 animation stuff 0x28b9e, 0x28e1e

    // These are oddly sliced
    { L"Animation Cycle 1 1/3",    0x28b9e, 0x28bbe },
    { L"Animation Cycle 1 2/3",    0x28bbe, 0x28bde },
    { L"Animation Cycle 1 3/3",    0x28d5e, 0x28d7e },
    { L"Animation Cycle 2 1/3",    0x28bde, 0x28bfe },
    { L"Animation Cycle 2 2/3",    0x28bfe, 0x28c1e },
    { L"Animation Cycle 2 3/3",    0x28d7e, 0x28d9e },
    { L"Animation Cycle 3 1/3",    0x28c1e, 0x28c3e, indexCPS2Sprites_SFA2_Stages, 0x80 },
    { L"Animation Cycle 3 2/3",    0x28c3e, 0x28c5e, indexCPS2Sprites_SFA2_Stages, 0x80 },
    { L"Animation Cycle 3 3/3",    0x28d9e, 0x28dbe, indexCPS2Sprites_SFA2_Stages, 0x80 },
    { L"Animation Cycle 4 1/3",    0x28c5e, 0x28c7e, indexCPS2Sprites_SFA2_Stages, 0xc7 },
    { L"Animation Cycle 4 2/3",    0x28c7e, 0x28c9e, indexCPS2Sprites_SFA2_Stages, 0xc7 },
    { L"Animation Cycle 4 3/3",    0x28dbe, 0x28dde, indexCPS2Sprites_SFA2_Stages, 0xc7 },
    { L"Animation Cycle 5 1/3",    0x28c9e, 0x28cbe, indexCPS2Sprites_SFA2_Stages, 0xc8 },
    { L"Animation Cycle 5 2/3",    0x28cbe, 0x28cde, indexCPS2Sprites_SFA2_Stages, 0xc8 },
    { L"Animation Cycle 5 3/3",    0x28dde, 0x28dfe, indexCPS2Sprites_SFA2_Stages, 0xc8 },
    { L"Animation Cycle 6 1/3",    0x28cde, 0x28cfe },
    { L"Animation Cycle 6 2/3",    0x28cfe, 0x28d1e },
    { L"Animation Cycle 6 3/3",    0x28dfe, 0x28e1e },
    { L"Animation Cycle 7 1/3",    0x28d1e, 0x28d3e, indexCPS2Sprites_SFA2_Stages, 0xc9 },
    { L"Animation Cycle 7 2/3",    0x28d3e, 0x28d5e, indexCPS2Sprites_SFA2_Stages, 0xc9 },
    { L"Animation Cycle 7 3/3",    0x28e1e, 0x28e3e, indexCPS2Sprites_SFA2_Stages, 0xc9 },

    { L"Infrastructure 1/2",    0x129be, 0x12bbe, indexCPS2Sprites_SFA2_Stages, 0x81, &pairNext },
    { L"Infrastructure 2/2",    0x12bbe, 0x12d9e },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_ITALY[] =
{
    { L"Background 1/2",                 0x12dbe, 0x12fbe, indexCPS2Sprites_SFA2_Stages, 0x71, &pairFullyLinkedNode },
    { L"Background 2/2",                 0x12fbe, 0x1319e, indexCPS2Sprites_SFA2_Stages, 0x72 },
    // rom07 sprites 0x7641e, 0x764fe
    // rom08 water animation 0x2c0fe, 0x2c45e
    { L"Water Animation Cycle 1 1/2",   0x2c0fe, 0x2c2fe, indexCPS2Sprites_SFA2_Stages, 0x77 },
    { L"Water Animation Cycle 1 2/2",   0x2c2fe, 0x2c33e, indexCPS2Sprites_SFA2_Stages, 0x77 },
    { L"Water Animation Cycle 2",       0x2c33e, 0x2c45e, indexCPS2Sprites_SFA2_Stages, 0x78 },

    { L"Foreground 1/2",                 0x89be, 0x8bbe, indexCPS2Sprites_SFA2_Stages, 0x73, &pairNext },
    { L"Foreground 2/2",                 0x8bbe, 0x8dbe, indexCPS2Sprites_SFA2_Stages, 0x74 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_BRAZIL[] =
{
    // rom07 0x764fe, 0x765de
    { L"Background 1/2",                0x131be, 0x133be, indexCPS2Sprites_SFA2_Stages, 0x37, &pairFullyLinkedNode },
    { L"Background 2/2",                0x133be, 0x1359e },
    { L"Foreground 1/2",                0x8dbe, 0x8fbe, indexCPS2Sprites_SFA2_Stages, 0x35, &pairNext },
    { L"Foreground 2/2",                0x8fbe, 0x91be, indexCPS2Sprites_SFA2_Stages, 0x36 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_THAILANDSTATUE[] =
{
    // rom07 0x765de, 0x766be
    { L"Background 1/2",     0x135be, 0x137be, indexCPS2Sprites_SFA2_Stages, 0x55, &pairFullyLinkedNode },
    { L"Background 2/2",     0x137be, 0x1399e },
    { L"Foreground 1/2",     0x91be, 0x93be, indexCPS2Sprites_SFA2_Stages, 0x56, &pairNext },
    { L"Foreground 2/2",     0x93be, 0x95be, indexCPS2Sprites_SFA2_Stages, 0x57 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_HONGKONG[] =
{
    // rom07 0x766be, 0x7679e
    { L"Background 1/2",            0x139be, 0x13bbe, indexCPS2Sprites_SFA2_Stages, 0x3d, &pairFullyLinkedNode },
    { L"Background 2/2",            0x13bbe, 0x13d9e },
    { L"Foreground 1/2",            0x95be, 0x97be, indexCPS2Sprites_SFA2_Stages, 0x3e, &pairNext },
    { L"Foreground 2/2",            0x97be, 0x99be, indexCPS2Sprites_SFA2_Stages, 0x3f },

    { L"People",                    0x1c1fe, 0x1c23e, indexCPS2Sprites_SFA2_Stages, 0xbe },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_JAPANHOUSE[] =
{
    // rom07 , 0x7679e, 0x7687e
    { L"Background 1/2",            0x13dbe, 0x13fbe, indexCPS2Sprites_SFA2_Stages, 0x49, &pairFullyLinkedNode },
    { L"Background 2/2",            0x13fbe, 0x1419e },
    { L"Foreground 1/2",            0x99be, 0x9bbe, indexCPS2Sprites_SFA2_Stages, 0x4a, &pairNext },
    { L"Foreground 2/2",            0x9bbe, 0x9dbe, indexCPS2Sprites_SFA2_Stages, 0x4b },

    { L"Person Animation Cycle",    0x1c73e, 0x1c7be, indexCPS2Sprites_SFA2_Stages, 0xc0 },
    { L"Stove Animation Cycle",     0x1c2be, 0x1c35e, indexCPS2Sprites_SFA2_Stages, 0xc1 },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_USAELEVATOR[] =
{
    { L"Background 1/2",        0x141be, 0x143be, indexCPS2Sprites_SFA2_Stages, 0x59, &pairFullyLinkedNode },
    { L"Background 2/2",        0x143be, 0x1459e, indexCPS2Sprites_SFA2_Stages, 0x5a },
    { L"Foreground 1/2",        0x9dbe, 0x9fbe, indexCPS2Sprites_SFA2_Stages, 0x5b, &pairNext },
    { L"Foreground 2/2",        0x9fbe, 0xa1be, indexCPS2Sprites_SFA2_Stages, 0x5c },
    // rom07 sprites 0x7687e, 0x7695e
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_INDIA[] =
{
    { L"Background 1/2",                 0x145be, 0x147be, indexCPS2Sprites_SFA2_Stages, 0x41, &pairFullyLinkedNode },
    { L"Background 2/2",                 0x147be, 0x1499e },
    { L"Foreground 1/2",                 0xa1be, 0xa3be, indexCPS2Sprites_SFA2_Stages, 0x42, &pairNext },
    { L"Foreground 2/2",                 0xa3be, 0xa5be, indexCPS2Sprites_SFA2_Stages, 0x43 },
    // rom07 sprites 0x7695e, 0x76a3e
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_USSR[] =
{
    { L"Background 1/2",                    0x149be, 0x14bbe, indexCPS2Sprites_SFA2_Stages, 0x92, &pairFullyLinkedNode },
    { L"Background 2/2",                    0x14bbe, 0x14d9e, indexCPS2Sprites_SFA2_Stages, 0x93 },

    { L"More Animations",                   0x2cb5e, 0x2cc1e, indexCPS2Sprites_SFA2_Stages, 0x9e },

    { L"Midground 1/2",                     0x01be, 0x03be, indexCPS2Sprites_SFA2_Stages, 0x94, &pairNext },
    { L"Midground 2/2",                     0x03be, 0x05be, indexCPS2Sprites_SFA2_Stages, 0x95 },
    { L"Foreground 1/2",                    0xa5be, 0xa7be, indexCPS2Sprites_SFA2_Stages, 0x96, &pairNext },
    { L"Foreground 2/2",                    0xa7be, 0xa9be, indexCPS2Sprites_SFA2_Stages, 0x97 },
    // ROM07 Sprites 0x76a3e, 0x76b1e
    // ROM08 foreground lighting animation cycles 0x2a25e, 0x2a8be
    { L"Foreground Animation Cycles 1/6",   0x29dde, 0x29fbe, indexCPS2Sprites_SFA2_Stages, 0x98 },
    { L"Foreground Animation Cycles 2/6",   0x29fbe, 0x2a15e, indexCPS2Sprites_SFA2_Stages, 0x99 },
    { L"Foreground Animation Cycles 3/6",   0x2a19e, 0x2a25e, indexCPS2Sprites_SFA2_Stages, 0x9a },
    { L"Foreground Animation Cycles 4/6",   0x2a25e, 0x2a45e, indexCPS2Sprites_SFA2_Stages, 0x9b },
    { L"Foreground Animation Cycles 5/6",   0x2a45e, 0x2a65e, indexCPS2Sprites_SFA2_Stages, 0x9c },
    { L"Foreground Animation Cycles 6/6",   0x2a65e, 0x2a85e, indexCPS2Sprites_SFA2_Stages, 0x9d },
    { L"Ground Animation Cycles 1/2",       0x2a15e, 0x2a19e, indexCPS2Sprites_SFA2_Stages, 0xcb },
    { L"Ground Animation Cycles 2/2",       0x2a85e, 0x2a8be, indexCPS2Sprites_SFA2_Stages, 0xcb },

    { L"Electricity Animation Cycle 1/2",   0x1f79e, 0x1f7de, indexCPS2Sprites_SFA2_Stages, 0xcc },
    { L"Electricity Animation Cycle 2/2",   0x1f27e, 0x1f2de, indexCPS2Sprites_SFA2_Stages, 0xcc },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_CHINAALLEY[] =
{
    // ROM08 Background alley animation cycle, 0x297de, 0x2981e
    { L"Background 1/2",            0xa9be, 0xabbe, indexCPS2Sprites_SFA2_Stages, 0x6a, &pairFullyLinkedNode },
    { L"Background 2/2",            0xabbe, 0xadbe, indexCPS2Sprites_SFA2_Stages, 0x6b },

    { L"Background Animation Cycle", 0x297de, 0x2981e, indexCPS2Sprites_SFA2_Stages, 0x6c },

    { L"Spotlights 1/2",            0x05be, 0x07be, indexCPS2Sprites_SFA2_Stages, 0x6d, &pairNext },
    { L"Spotlights 2/2",            0x07be, 0x09be, indexCPS2Sprites_SFA2_Stages, 0x6e },

    { L"Ground 1/2",                0x14dbe, 0x14fbe, indexCPS2Sprites_SFA2_Stages, 0x6f, &pairNext },
    { L"Ground 2/2",                0x14fbe, 0x1519e, indexCPS2Sprites_SFA2_Stages, 0x70 },

    // ROM07 sprites??? 0x76b1e, 0x76bfe
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_AUSTRALIA[] =
{
    //ROM08 Background sky animation palettes, 0x2c45e, 0x2c4de
    //ROM08 Foreground Grass?? animation palettes, 0x29b3e, 0x29d1e
    //ROM07 Sprites 0x76bfe, 0x76cde
    // unknown but present -- 0x2bade to 0x2bcde?
    { L"Background 1/2",             0x151be, 0x153be, indexCPS2Sprites_SFA2_Stages, 0x79, &pairFullyLinkedNode },
    { L"Background 2/2",             0x153be, 0x1559e, indexCPS2Sprites_SFA2_Stages, -1 },
    { L"Background Animation Cycle", 0x2c45e, 0x2c4de, indexCPS2Sprites_SFA2_Stages, 0x79 },
    { L"Midground 1/2",              0x09be, 0x0bbe, indexCPS2Sprites_SFA2_Stages, -1, &pairNext },
    { L"Midground 2/2",              0x0bbe, 0x0dbe, indexCPS2Sprites_SFA2_Stages, -1 },
    { L"Foreground 1/2",             0xadbe, 0xafbe, indexCPS2Sprites_SFA2_Stages, -1, &pairNext },
    { L"Foreground 2/2",             0xafbe, 0xb1be, indexCPS2Sprites_SFA2_Stages, -1 },
    { L"Foreground Animation Cycle", 0x29b3e, 0x29d1e, indexCPS2Sprites_SFA2_Stages, 0x7a },

    { L"Animation cycle 1?",          0x2981e, 0x298be, indexCPS2Sprites_SFA2_Stages, 0x7b },
    { L"Animation cycle 2?",          0x2bade, 0x2bcde, indexCPS2Sprites_SFA2_Stages, -1 },

    { L"Mid sky animation cycle",   0x2963e, 0x296de, indexCPS2Sprites_SFA2_Stages, 0x7c },

    { L"Top Grass Animation Cycle", 0x1c69e, 0x1c73e, indexCPS2Sprites_SFA2_Stages, 0xca },

    { L"Front Grass Top Animation Cycle",   0x1c55e, 0x1c5fe, indexCPS2Sprites_SFA2_Stages, 0xbc, &pairNext },
    { L"Front Grass Bottom Animation Cycle", 0x1c5fe, 0x1c69e, indexCPS2Sprites_SFA2_Stages, 0xbd },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PALETTES_VENEZUALA[] =
{
    { L"Background 1/2",             0x0dbe, 0x0fbe, indexCPS2Sprites_SFA2_Stages, 0x69, &pairFullyLinkedNode },
    { L"Background 2/2",             0x0fbe, 0x11be },
    { L"Midground 1/2",              0x155be, 0x157be, indexCPS2Sprites_SFA2_Stages, 0x67, &pairNext },
    { L"Midground 2/2",              0x157be, 0x1599e },
    { L"Foreground 1/2",             0xb1be, 0xb3be, indexCPS2Sprites_SFA2_Stages, 0x68, &pairNext },
    { L"Foreground 2/2",             0xb3be, 0xb5be },
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV1_SPLASH_PALETTES[] =
{
    { L"Japan (Winter)", 0x1171e, 0x1173e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"USA (Party)", 0x11b1e, 0x11b3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Japan (Gokuentou)", 0x11f1e, 0x11f3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"USA (Plane)", 0x1231e, 0x1233e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"China (Street)", 0x1271e, 0x1273e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Thailand (Lake)", 0x12b1e, 0x12b3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"USA (Truck)", 0x12f1e, 0x12f3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"USA (Metro City)", 0x1331e, 0x1333e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"England", 0x1371e, 0x1373e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Italy", 0x13b1e, 0x13b3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Brazil", 0x13f1e, 0x13f3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Thailand (Statue)", 0x1431e, 0x1433e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Hong Kong", 0x1471e, 0x1473e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Japan (House)", 0x14b1e, 0x14b3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"USA (Elevator)", 0x14f1e, 0x14f3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"India", 0x1531e, 0x1533e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"USSR", 0x1571e, 0x1573e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"China (Alley)", 0x15b1e, 0x15b3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Australia", 0x15f1e, 0x15f3e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
    { L"Venezuala", 0x1631e, 0x1633e, indexCPS2Sprites_SFA2_Stages, 0x33 }, /* Delta: 0x980 */
};

const sGame_PaletteDataset SFA2_A_STAGES08_REV2_SPLASH_PALETTES[] =
{
    { L"Japan (Winter)",        0x10d9e, 0x10dbe, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"USA (Party)",           0x1119e, 0x111be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Japan (Gokuentou)",     0x1159e, 0x115be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"USA (Plane)",           0x1199e, 0x119be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"China (Street)",        0x11d9e, 0x11dbe, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Thailand (Lake)",       0x1219e, 0x121be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"USA (Truck)",           0x1259e, 0x125be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"USA (Metro City)",      0x1299e, 0x129be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"England",               0x12d9e, 0x12dbe, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Italy",                 0x1319e, 0x131be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Brazil",                0x1359e, 0x135be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Thailand (Statue)",     0x1399e, 0x139be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Hong Kong",             0x13d9e, 0x13dbe, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Japan (House)",         0x1419e, 0x141be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"USA (Elevator)",        0x1459e, 0x145be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"India",                 0x1499e, 0x149be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"USSR",                  0x14d9e, 0x14dbe, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"China (Alley)",         0x1519e, 0x151be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Australia",             0x1559e, 0x155be, indexCPS2Sprites_SFA2_Stages, 0x33 },
    { L"Venezuala",             0x1599e, 0x159be, indexCPS2Sprites_SFA2_Stages, 0x33 },
};

// rev2
const sGame_PaletteDataset SFA2_A_STAGES08_REV2_PREVIEW_PALETTES[] =
{
    { L"Japan (Winter) 1/2",        0x23A1e, 0x23c1e, indexCPS2Sprites_SFA2_Stages, 0x0b, &pairNext },
    { L"Japan (Winter) 2/2",        0x23c1e, 0x23e1e, indexCPS2Sprites_SFA2_Stages, 0x0c },
    { L"USA (Party) 1/2",           0x23E1e, 0x2401e, indexCPS2Sprites_SFA2_Stages, 0x0d, &pairNext },
    { L"USA (Party) 2/2",           0x2401e, 0x2421e, indexCPS2Sprites_SFA2_Stages, 0x0e },
    { L"Japan (Gokuentou) 1/2",     0x2421e, 0x2441e, indexCPS2Sprites_SFA2_Stages, 0x0f, &pairNext },
    { L"Japan (Gokuentou) 2/2",     0x2441e, 0x2461e, indexCPS2Sprites_SFA2_Stages, 0x10 },
    { L"USA (Plane) 1/2",           0x2461e, 0x2481e, indexCPS2Sprites_SFA2_Stages, 0x11, &pairNext },
    { L"USA (Plane) 2/2",           0x2481e, 0x24a1e, indexCPS2Sprites_SFA2_Stages, 0x12 },
    { L"China (Street) 1/2",        0x24a1e, 0x24c1e, indexCPS2Sprites_SFA2_Stages, 0x13, &pairNext },
    { L"China (Street) 2/2",        0x24c1e, 0x24e1e, indexCPS2Sprites_SFA2_Stages, 0x14 },
    { L"Thailand (Lake) 1/2",       0x24e1e, 0x2501e, indexCPS2Sprites_SFA2_Stages, 0x15, &pairNext },
    { L"Thailand (Lake) 2/2",       0x2501e, 0x2521e, indexCPS2Sprites_SFA2_Stages, 0x16 },
    { L"USA (Truck) 1/2",           0x2521e, 0x2541e, indexCPS2Sprites_SFA2_Stages, 0x17, &pairNext },
    { L"USA (Truck) 2/2",           0x2541e, 0x2561e, indexCPS2Sprites_SFA2_Stages, 0x18 },
    { L"USA (Metro City) 1/2",      0x2561e, 0x2581e, indexCPS2Sprites_SFA2_Stages, 0x19, &pairNext },
    { L"USA (Metro City) 2/2",      0x2581e, 0x25a1e, indexCPS2Sprites_SFA2_Stages, 0x1a },
    { L"England 1/2",               0x25a1e, 0x25c1e, indexCPS2Sprites_SFA2_Stages, 0x1b, &pairNext },
    { L"England 2/2",               0x25c1e, 0x25e1e, indexCPS2Sprites_SFA2_Stages, 0x1c },
    { L"Italy 1/2",                 0x25e1e, 0x2601e, indexCPS2Sprites_SFA2_Stages, 0x1d, &pairNext },
    { L"Italy 2/2",                 0x2601e, 0x2621e, indexCPS2Sprites_SFA2_Stages, 0x1e },
    { L"Brazil 1/2",                0x2621e, 0x2641e, indexCPS2Sprites_SFA2_Stages, 0x1f, &pairNext },
    { L"Brazil 2/2",                0x2641e, 0x2661e, indexCPS2Sprites_SFA2_Stages, 0x20 },
    { L"Thailand (Statue) 1/2",     0x2661e, 0x2681e, indexCPS2Sprites_SFA2_Stages, 0x21, &pairNext },
    { L"Thailand (Statue) 2/2",     0x2681e, 0x26a1e, indexCPS2Sprites_SFA2_Stages, 0x22 },
    { L"Hong Kong 1/2",             0x26a1e, 0x26c1e, indexCPS2Sprites_SFA2_Stages, 0x23, &pairNext },
    { L"Hong Kong 2/2",             0x26c1e, 0x26e1e, indexCPS2Sprites_SFA2_Stages, 0x24 },
    { L"Japan (House) 1/2",         0x26e1e, 0x2701e, indexCPS2Sprites_SFA2_Stages, 0x25, &pairNext },
    { L"Japan (House) 2/2",         0x2701e, 0x2721e, indexCPS2Sprites_SFA2_Stages, 0x26 },
    { L"USA (Elevator) 1/2",        0x2721e, 0x2741e, indexCPS2Sprites_SFA2_Stages, 0x27, &pairNext },
    { L"USA (Elevator) 2/2",        0x2741e, 0x2761e, indexCPS2Sprites_SFA2_Stages, 0x28 },
    { L"India 1/2",                 0x2761e, 0x2781e, indexCPS2Sprites_SFA2_Stages, 0x29, &pairNext },
    { L"India 2/2",                 0x2781e, 0x27a1e, indexCPS2Sprites_SFA2_Stages, 0x2a },
    { L"USSR 1/2",                  0x27a1e, 0x27c1e, indexCPS2Sprites_SFA2_Stages, 0x2b, &pairNext },
    { L"USSR 2/2",                  0x27c1e, 0x27e1e, indexCPS2Sprites_SFA2_Stages, 0x2c },
    { L"China (Alley) 1/2",         0x27e1e, 0x2801e, indexCPS2Sprites_SFA2_Stages, 0x2d, &pairNext },
    { L"China (Alley) 2/2",         0x2801e, 0x2821e, indexCPS2Sprites_SFA2_Stages, 0x2e },
    { L"Australia 1/2",             0x2821e, 0x2841e, indexCPS2Sprites_SFA2_Stages, 0x2f, &pairNext },
    { L"Australia 2/2",             0x2841e, 0x2861e, indexCPS2Sprites_SFA2_Stages, 0x30 },
    { L"Venezuala 1/2",             0x2861e, 0x2881e, indexCPS2Sprites_SFA2_Stages, 0x31, &pairNext },
    { L"Venezuala 2/2",             0x2881e, 0x28a1e, indexCPS2Sprites_SFA2_Stages, 0x32 },
};

const sDescTreeNode SFA2_A_STAGES07_REV1_COLLECTION[] =
{
    { L"Japan (Winter)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_JAPANWINTER, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_JAPANWINTER) },
    { L"USA (Party)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_USAPARTY, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_USAPARTY) },
    { L"Japan (Gokuentou)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_JAPANGOKUENTOU, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_JAPANGOKUENTOU) },
    { L"USA (Plane)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_USAPLANE, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_USAPLANE) },
    { L"China (Street)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_CHINASTREET, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_CHINASTREET) },
    { L"Thailand (Lake)",                   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_THAILANDLAKE, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_THAILANDLAKE) },
    { L"USA (Truck)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_USATRUCK, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_USATRUCK) },
    { L"USA (Metro City)",                  DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_USAMETROCITY, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_USAMETROCITY) },
    { L"England",                           DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_ENGLAND, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_ENGLAND) },
    { L"Italy",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_ITALY, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_ITALY) },
    { L"Brazil",                            DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_BRAZIL, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_BRAZIL) },
    { L"Thailand (Statue)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_THAILANDSTATUE, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_THAILANDSTATUE) },
    { L"Hong Kong",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_HONGKONG, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_HONGKONG) },
    { L"Japan (House)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_JAPANHOUSE, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_JAPANHOUSE) },
    { L"USA (Elevator)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_USAELEVATOR, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_USAELEVATOR) },
    { L"India",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_INDIA, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_INDIA) },
    { L"USSR",                              DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_USSR, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_USSR) },
    { L"China (Alley)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_CHINAALLEY, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_CHINAALLEY) },
    { L"Australia",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_AUSTRALIA, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_AUSTRALIA) },
    { L"Venezuala",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_PALETTES_VENEZUALA, ARRAYSIZE(SFA2_A_STAGES07_REV1_PALETTES_VENEZUALA) },
};

const sDescTreeNode SFA2_A_STAGES08_REV1_COLLECTION[] =
{
    { L"Japan (Winter)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_JAPANWINTER,   ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_JAPANWINTER) },
    { L"USA (Party)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_USAPARTY,      ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_USAPARTY) },
    { L"Japan (Gokuentou)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_JAPANGOKUENTOU, ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_JAPANGOKUENTOU) },
    { L"USA (Plane)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_USAPLANE,      ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_USAPLANE) },
    { L"China (Street)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_CHINASTREET,   ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_CHINASTREET) },
    { L"Thailand (Lake)",                   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_THAILANDLAKE,  ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_THAILANDLAKE) },
    { L"USA (Truck)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_USATRUCK,      ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_USATRUCK) },
    { L"USA (Metro City)",                  DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_USAMETROCITY,  ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_USAMETROCITY) },
    { L"England",                           DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_ENGLAND,       ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_ENGLAND) },
    { L"Italy",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_ITALY,         ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_ITALY) },
    { L"Brazil",                            DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_BRAZIL,        ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_BRAZIL) },
    { L"Thailand (Statue)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_THAILANDSTATUE, ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_THAILANDSTATUE) },
    { L"Hong Kong",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_HONGKONG,      ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_HONGKONG) },
    { L"Japan (House)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_JAPANHOUSE,    ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_JAPANHOUSE) },
    { L"USA (Elevator)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_USAELEVATOR,   ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_USAELEVATOR) },
    { L"India",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_INDIA,         ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_INDIA) },
    { L"USSR",                              DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_USSR,          ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_USSR) },
    { L"China (Alley)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_CHINAALLEY,    ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_CHINAALLEY) },
    { L"Australia",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_AUSTRALIA,     ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_AUSTRALIA) },
    { L"Venezuala",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_PALETTES_VENEZUALA,     ARRAYSIZE(SFA2_A_STAGES08_REV1_PALETTES_VENEZUALA) },

    { L"Splash Screens",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_SPLASH_PALETTES,        ARRAYSIZE(SFA2_A_STAGES08_REV1_SPLASH_PALETTES) },

    // Using Rev2 since they match
    { L"Previews",                          DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PREVIEW_PALETTES,       ARRAYSIZE(SFA2_A_STAGES08_REV2_PREVIEW_PALETTES) },
};

const sDescTreeNode SFA2_A_STAGES07_REV2_COLLECTION[] =
{
    { L"Japan (Winter)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_JAPANWINTER, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_JAPANWINTER) },
    { L"USA (Party)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_USAPARTY, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_USAPARTY) },
    { L"Japan (Gokuentou)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_JAPANGOKUENTOU, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_JAPANGOKUENTOU) },
    { L"USA (Plane)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_USAPLANE, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_USAPLANE) },
    { L"China (Street)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_CHINASTREET, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_CHINASTREET) },
    { L"Thailand (Lake)",                   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_THAILANDLAKE, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_THAILANDLAKE) },
    { L"USA (Truck)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_USATRUCK, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_USATRUCK) },
    { L"USA (Metro City)",                  DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_USAMETROCITY, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_USAMETROCITY) },
    { L"England",                           DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_ENGLAND, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_ENGLAND) },
    { L"Italy",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_ITALY, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_ITALY) },
    { L"Brazil",                            DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_BRAZIL, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_BRAZIL) },
    { L"Thailand (Statue)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_THAILANDSTATUE, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_THAILANDSTATUE) },
    { L"Hong Kong",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_HONGKONG, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_HONGKONG) },
    { L"Japan (House)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_JAPANHOUSE, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_JAPANHOUSE) },
    { L"USA (Elevator)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_USAELEVATOR, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_USAELEVATOR) },
    { L"India",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_INDIA, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_INDIA) },
    { L"USSR",                              DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_USSR, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_USSR) },
    { L"China (Alley)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_CHINAALLEY, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_CHINAALLEY) },
    { L"Australia",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_AUSTRALIA, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_AUSTRALIA) },
    { L"Venezuala",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_PALETTES_VENEZUALA, ARRAYSIZE(SFA2_A_STAGES07_REV2_PALETTES_VENEZUALA) },
};

const sDescTreeNode SFA2_A_STAGES08_REV2_COLLECTION[] =
{
    { L"Japan (Winter)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_JAPANWINTER,   ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_JAPANWINTER) },
    { L"USA (Party)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_USAPARTY,      ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_USAPARTY) },
    { L"Japan (Gokuentou)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_JAPANGOKUENTOU, ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_JAPANGOKUENTOU) },
    { L"USA (Plane)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_USAPLANE,      ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_USAPLANE) },
    { L"China (Street)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_CHINASTREET,   ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_CHINASTREET) },
    { L"Thailand (Lake)",                   DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_THAILANDLAKE,  ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_THAILANDLAKE) },
    { L"USA (Truck)",                       DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_USATRUCK,      ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_USATRUCK) },
    { L"USA (Metro City)",                  DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_USAMETROCITY,  ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_USAMETROCITY) },
    { L"England",                           DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_ENGLAND,       ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_ENGLAND) },
    { L"Italy",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_ITALY,         ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_ITALY) },
    { L"Brazil",                            DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_BRAZIL,        ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_BRAZIL) },
    { L"Thailand (Statue)",                 DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_THAILANDSTATUE, ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_THAILANDSTATUE) },
    { L"Hong Kong",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_HONGKONG,      ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_HONGKONG) },
    { L"Japan (House)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_JAPANHOUSE,    ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_JAPANHOUSE) },
    { L"USA (Elevator)",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_USAELEVATOR,   ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_USAELEVATOR) },
    { L"India",                             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_INDIA,         ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_INDIA) },
    { L"USSR",                              DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_USSR,          ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_USSR) },
    { L"China (Alley)",                     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_CHINAALLEY,    ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_CHINAALLEY) },
    { L"Australia",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_AUSTRALIA,     ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_AUSTRALIA) },
    { L"Venezuala",                         DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PALETTES_VENEZUALA,     ARRAYSIZE(SFA2_A_STAGES08_REV2_PALETTES_VENEZUALA) },

    { L"Splash Screens",                    DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_SPLASH_PALETTES,        ARRAYSIZE(SFA2_A_STAGES08_REV2_SPLASH_PALETTES) },

    { L"Previews",                          DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_PREVIEW_PALETTES,       ARRAYSIZE(SFA2_A_STAGES08_REV2_PREVIEW_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_07REV1_CSI_PALETTES[] =
{
    { L"Char Select 1", 0x7703E, 0x7723e, indexCPS2Sprites_SFA2_Bonus, 0x11, &pairNext },
    { L"Char Select 2", 0x7723e, 0x7727E, indexCPS2Sprites_SFA2_Bonus, 0x12 },
};

const sGame_PaletteDataset SFA2_A_07REV2_CSI_PALETTES[] =
{
    { L"Char Select 1", 0x772c0 + 0x37e, 0x774c0 + 0x37e, indexCPS2Sprites_SFA2_Bonus, 0x11, &pairNext },
    { L"Char Select 2", 0x774c0 + 0x37e, 0x77500 + 0x37e, indexCPS2Sprites_SFA2_Bonus, 0x12 },
};

const sGame_PaletteDataset SFA2_A_07ForSFZ2A_CSI_PALETTES[] =
{
    { L"Char Select 1", 0x772c0 + 0x137e, 0x774c0 + 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x11, &pairNext },
    { L"Char Select 2", 0x774c0 + 0x137e, 0x77500 + 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x12 },
};

// these locations are based off of rev2
const sGame_PaletteDataset SFA2_A_07REV1_INTROPORTRAIT_PALETTES[] =
{
    { L"Rose' Tarot Cards (Intro)", 0x770A0 - 0x27e, 0x770C0 - 0x27e, indexCPS2Sprites_SFA2_Bonus, 0x1a },
    { L"Intro - Purple BG pt.1", 0x76F60 - 0x27e, 0x76F80 - 0x27e },

    { L"Charlie (Intro)", 0x76E80 - 0x27e, 0x76EE0 - 0x27e, indexCPS2Sprites_SFA2_Bonus, 0x0e },
    { L"Chun-Li (Intro)", 0x76DE0 - 0x27e, 0x76E80 - 0x27e, indexCPS2Sprites_SFA2_Bonus, 0x0f },
    { L"Foreground Flames (Intro)", 0x76DC0 - 0x27e, 0x76DE0 - 0x27e, indexCPS2Sprites_SFA2_Bonus, 0x1f },
};

const sGame_PaletteDataset SFA2_A_07REV2_INTROPORTRAIT_PALETTES[] =
{
    { L"Rose' Tarot Cards (Intro)", 0x770A0 + 0x37e, 0x770C0 + 0x37e, indexCPS2Sprites_SFA2_Bonus, 0x1a },
    { L"Intro - Purple BG pt.1", 0x76F60 + 0x37e, 0x76F80 + 0x37e },

    { L"Charlie (Intro)", 0x76E80 + 0x37e, 0x76EE0 + 0x37e, indexCPS2Sprites_SFA2_Bonus, 0x0e },
    { L"Chun-Li (Intro)", 0x76DE0 + 0x37e, 0x76E80 + 0x37e, indexCPS2Sprites_SFA2_Bonus, 0x0f },
    { L"Foreground Flames (Intro)", 0x76DC0 + 0x37e, 0x76DE0 + 0x37e, indexCPS2Sprites_SFA2_Bonus, 0x1f },
};

const sGame_PaletteDataset SFA2_A_07ForSFZ2A_INTROPORTRAIT_PALETTES[] =
{
    { L"Rose' Tarot Cards (Intro)", 0x770A0 + 0x137e, 0x770C0 + 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x1a },
    { L"Intro - Purple BG pt.1", 0x76F60 + 0x137e, 0x76F80 + 0x137e },

    { L"Charlie (Intro)", 0x76E80 + 0x137e, 0x76EE0 + 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x0e },
    { L"Chun-Li (Intro)", 0x76DE0 + 0x137e, 0x76E80 + 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x0f },
    { L"Foreground Flames (Intro)", 0x76DC0 + 0x137e, 0x76DE0 + 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x1f },
    { L"Birdie", 0x774c2 + 0xB11E - 0x02, 0x77582 + 0xB11E - 0x02, indexCPS2Sprites_SFA2_Bonus, 0x01 },
};

const sGame_PaletteDataset SFA2_A_08REV1_INTROPORTRAIT_PALETTES[] =
{
    { L"Akuma Background Flames: Lower", 0xbb9e, 0xbbbe, indexCPS2Sprites_SFA2_Bonus, 0x20, &pairNextAndNext }, /* Delta: 0x580 */
    { L"Akuma Background Flames: Upper", 0xbbbe, 0xbbde, indexCPS2Sprites_SFA2_Bonus, 0x21 }, /* Delta: 0x580 */
    { L"Akuma", 0x1633e, 0x1639e, indexCPS2Sprites_SFA2_Bonus, 0x27 }, /* Delta: 0x980 */

    { L"Birdie", 0x13de, 0x149e, indexCPS2Sprites_SFA2_Bonus, 0x01 }, /* Delta: 0x180 */
    // Match at 0xbdfe, 0xbe5e (delta 0x580)
    // Match at 0x1d4de, 0x1d53e (delta 0x11c60)
    { L"Sagat", 0xbdfe, 0xbe5e, indexCPS2Sprites_SFA2_Bonus, 0x09 }, /* Delta: 0x580 */
    { L"Sakura", 0x2171e, 0x2177e, indexCPS2Sprites_SFA2_Bonus, 0x0a }, /* Delta: 0x900 */
    { L"Gen", 0x2165e, 0x2169e, indexCPS2Sprites_SFA2_Bonus, 0x05 }, /* Delta: 0x900 */
    { L"Rolento", 0x2183e, 0x2187e, indexCPS2Sprites_SFA2_Bonus, 0x07 }, /* Delta: 0x900 */
    { L"Dhalsim", 0x218fe, 0x2193e, indexCPS2Sprites_SFA2_Bonus, 0x04 }, /* Delta: 0x900 */
    { L"Zangief", 0x219be, 0x219fe, indexCPS2Sprites_SFA2_Bonus, 0x0b }, /* Delta: 0x900 */
    { L"Adon Pants", 0x21a9e, 0x21abe, indexCPS2Sprites_SFA2_Bonus, 0x00 }, /* Delta: 0x900 */
    { L"Dan Intro", 0x21ade, 0x21b3e, indexCPS2Sprites_SFA2_Bonus, 0x03 }, /* Delta: 0x900 */
    { L"Dan Intro Rock", 0x21b3e, 0x21b5e, indexCPS2Sprites_SFA2_Bonus, 0x02 }, /* Delta: 0x900 */
    { L"Ryu Intro Faceoff", 0x21b7e, 0x21c1e, indexCPS2Sprites_SFA2_Bonus, 0x08 }, /* Delta: 0x900 */
    { L"Ken Intro Faceoff", 0x21c1e, 0x21cbe, indexCPS2Sprites_SFA2_Bonus, 0x06 }, /* Delta: 0x900 */
    { L"Ryu Charge Part 1", 0x2b51e, 0x2b5be, indexCPS2Sprites_SFA2_Bonus, 0x14, &pairNext }, /* Delta: 0 */
    { L"Ryu Charge Part 2", 0x2b69e, 0x2b6de, indexCPS2Sprites_SFA2_Bonus, 0x15 }, /* Delta: 0 */
    { L"Ken Charge", 0x2b5be, 0x2b69e, indexCPS2Sprites_SFA2_Bonus, 0x13 }, /* Delta: 0 */
    { L"Ryu Ken Intro Blast", 0x2b4fe, 0x2b51e, indexCPS2Sprites_SFA2_Bonus, 0x16 }, /* Delta: 0 */
    { L"Rose", 0xbbde, 0xbcbe, indexCPS2Sprites_SFA2_Bonus, 0x10 }, /* Delta: 0x580 */
    { L"Bison", 0xbcbe, 0xbdfe, indexCPS2Sprites_SFA2_Bonus, 0x0c, &pairNext }, /* Delta: 0x580 */
    { L"Bison pt.2", 0xbe7e, 0xbe9e, indexCPS2Sprites_SFA2_Bonus, 0x0d }, /* Delta: 0x580 */

    { L"Intro - Purple BG pt.2", 0x1639e, 0x163be }, /* Delta: 0x980 */
    { L"Intro - Blue BG pt.1", 0x21a7e, 0x21a9e }, /* Delta: 0x900 */
    { L"Intro - Blue BG pt.2", 0x2cd7e, 0x2cd9e }, /* Delta: 0 */
    { L"Foreground Flames Background (Intro)", 0x137e, 0x139e, indexCPS2Sprites_SFA2_Bonus, 0x22 }, /* Delta: x180 */
};

const sGame_PaletteDataset SFA2_A_08REV2_INTROPORTRAIT_PALETTES[] =
{
    { L"Akuma Background Flames: Lower", 0xb61e, 0xb63e, indexCPS2Sprites_SFA2_Bonus, 0x20, &pairNextAndNext }, // followed by rose stuff?
    { L"Akuma Background Flames: Upper", 0xb63e, 0xb65e, indexCPS2Sprites_SFA2_Bonus, 0x21 },
    { L"Akuma", 0x159be, 0x15a1e, indexCPS2Sprites_SFA2_Bonus, 0x27 },

    { L"Birdie", 0x125e, 0x131e, indexCPS2Sprites_SFA2_Bonus, 0x01 },
    { L"Sagat", 0xB87e, 0xB8de, indexCPS2Sprites_SFA2_Bonus, 0x09 },

    { L"Sakura",    0x20E1e, 0x20E7e, indexCPS2Sprites_SFA2_Bonus, 0x0a }, // 2171c, 20e1e,176a0
    { L"Gen",       0x20D5e, 0x20D9e, indexCPS2Sprites_SFA2_Bonus, 0x05 },
    { L"Rolento",   0x20F3e, 0x20F7e, indexCPS2Sprites_SFA2_Bonus, 0x07 },
    { L"Dhalsim",   0x21000 - 0x02, 0x2103e, indexCPS2Sprites_SFA2_Bonus, 0x04 },
    { L"Zangief",   0x210be, 0x210fe, indexCPS2Sprites_SFA2_Bonus, 0x0b },

    { L"Adon Pants", 0x2119e, 0x211be, indexCPS2Sprites_SFA2_Bonus, 0x00 },
    { L"Dan Intro", 0x211de, 0x2123e, indexCPS2Sprites_SFA2_Bonus, 0x03 },
    { L"Dan Intro Rock", 0x2123e, 0x2125e, indexCPS2Sprites_SFA2_Bonus, 0x02 },

    { L"Ryu Intro Faceoff", 0x2127e, 0x2131e, indexCPS2Sprites_SFA2_Bonus, 0x08 },
    { L"Ken Intro Faceoff", 0x2131e, 0x213be, indexCPS2Sprites_SFA2_Bonus, 0x06 },
    { L"Ryu Charge Part 1", 0x2b51e, 0x2b5be, indexCPS2Sprites_SFA2_Bonus, 0x14, &pairNext },
    { L"Ryu Charge Part 2", 0x2b69e, 0x2b6de, indexCPS2Sprites_SFA2_Bonus, 0x15 },
    { L"Ken Charge", 0x2b5be, 0x2b69e, indexCPS2Sprites_SFA2_Bonus, 0x13 },
    { L"Ryu Ken Intro Blast", 0x2b4fe, 0x2b51e, indexCPS2Sprites_SFA2_Bonus, 0x16 },

    { L"Rose", 0xB65e, 0xB73e, indexCPS2Sprites_SFA2_Bonus, 0x10 },
    { L"Bison", 0xB73e, 0xB87e, indexCPS2Sprites_SFA2_Bonus, 0x0c, &pairNext },
    { L"Bison pt.2", 0xB900 - 0x02, 0xB91e, indexCPS2Sprites_SFA2_Bonus, 0x0d },
    { L"Intro - Purple BG pt.2", 0x15A1e, 0x15A3e },
    { L"Intro - Blue BG pt.1", 0x2117e, 0x2119e },
    { L"Intro - Blue BG pt.2", 0x2CD7e, 0x2CD9e },

    { L"Foreground Flames Background (Intro)", 0x11fe, 0x121e, indexCPS2Sprites_SFA2_Bonus, 0x22 },
};

const sGame_PaletteDataset SFA2_A_08ForSFZ2A_INTROPORTRAIT_PALETTES[] =
{
    { L"Sagat", 0xB87e, 0xB8de, indexCPS2Sprites_SFA2_Bonus, 0x09 },

    { L"Sakura",    0x20E1e, 0x20E7e, indexCPS2Sprites_SFA2_Bonus, 0x0a }, // 2171c, 20e1e,176a0
    { L"Gen",       0x20D5e, 0x20D9e, indexCPS2Sprites_SFA2_Bonus, 0x05 },
    { L"Rolento",   0x20F3e, 0x20F7e, indexCPS2Sprites_SFA2_Bonus, 0x07 },
    { L"Dhalsim",   0x21000 - 0x02, 0x2103e, indexCPS2Sprites_SFA2_Bonus, 0x04 },
    { L"Zangief",   0x210be, 0x210fe, indexCPS2Sprites_SFA2_Bonus, 0x0b },

    { L"Adon Pants", 0x2119e, 0x211be, indexCPS2Sprites_SFA2_Bonus, 0x00 },
    { L"Dan Intro", 0x211de, 0x2123e, indexCPS2Sprites_SFA2_Bonus, 0x03 },
    { L"Dan Intro Rock", 0x2123e, 0x2125e, indexCPS2Sprites_SFA2_Bonus, 0x02 },

    { L"Ryu Intro Faceoff", 0x2127e, 0x2131e, indexCPS2Sprites_SFA2_Bonus, 0x08 },
    { L"Ken Intro Faceoff", 0x2131e, 0x213be, indexCPS2Sprites_SFA2_Bonus, 0x06 },

    // at 231e2
    { L"Ryu Charge Part 1", 0x2b520 + 0x143e, 0x2b5C0 + 0x143e, indexCPS2Sprites_SFA2_Bonus, 0x14, &pairNext },
    { L"Ryu Charge Part 2", 0x2b6a0 + 0x143e, 0x2b6e0 + 0x143e, indexCPS2Sprites_SFA2_Bonus, 0x15 },
    { L"Ken Charge", 0x2b5C0 + 0x143e, 0x2b6A0 + 0x143e, indexCPS2Sprites_SFA2_Bonus, 0x13 },
    { L"Ryu Ken Intro Blast", 0x2b500 + 0x143e, 0x2b520 + 0x143e, indexCPS2Sprites_SFA2_Bonus, 0x16 },

    { L"Rose", 0xB65e, 0xB73e, indexCPS2Sprites_SFA2_Bonus, 0x10 },
    { L"Bison", 0xB73e, 0xB87e, indexCPS2Sprites_SFA2_Bonus, 0x0c, &pairNext },
    { L"Bison pt.2", 0xB900 - 0x02, 0xB91e, indexCPS2Sprites_SFA2_Bonus, 0x0d },
    { L"Intro - Purple BG pt.2", 0x15A1e, 0x15A3e },
    { L"Intro - Blue BG pt.1", 0x2117e, 0x2119e },
    { L"Intro - Blue BG pt.2", 0x2CD80 + 0x143e, 0x2CDA0 + 0x143e },
};

#ifdef IMGDAT_LOCATIONS
SFA2_Bonus - AdonIntroPants || 0x7F - 0x00
SFA2_Bonus - DanIntro || 0x7F - 0x03
SFA2_Bonus - DanIntroRocks || 0x7F - 0x02
#endif

const sGame_PaletteDataset SFA2_A_07REV1_BONUS_PALETTES[] =
{
    { L"SF Title Logo Pt.1", 0x76F9E - 0x280, 0x76FDE - 0x280, indexCPS2Sprites_SFA2_Bonus, 0x1c, &pairNext },
    { L"Alpha 2 Logo", 0x76FFE - 0x280, 0x7701E - 0x280, indexCPS2Sprites_SFA2_Bonus, 0x1d },
    { L"Character HUD Name / VS / Perfect!! (flash)", 0x75B9E - 0x280, 0x75BBE - 0x280, indexCPS2Sprites_SFA2_Bonus, 0x18 },
    { L"CC Win Icons / Perfect text (filled)", 0x75C1E - 0x280, 0x75C3E - 0x280, indexCPS2Sprites_SFA2_Bonus, 0x17 },
};

const sGame_PaletteDataset SFA2_A_07REV2_BONUS_PALETTES[] =
{
    { L"SF Title Logo Pt.1", 0x76F9E + 0x380, 0x76FDE + 0x380, indexCPS2Sprites_SFA2_Bonus, 0x1c, &pairNext },
    { L"Alpha 2 Logo", 0x76FFE + 0x380, 0x7701E + 0x380, indexCPS2Sprites_SFA2_Bonus, 0x1d },
    { L"Character HUD Name / VS / Perfect!! (flash)", 0x75B9E + 0x380, 0x75BBE + 0x380, indexCPS2Sprites_SFA2_Bonus, 0x18 },
    { L"CC Win Icons / Perfect text (filled)", 0x75C1E + 0x380, 0x75C3E + 0x380, indexCPS2Sprites_SFA2_Bonus, 0x17 },
};

const sGame_PaletteDataset SFA2_A_07ForSFZ2A_BONUS_PALETTES[] =
{
    { L"SF Title Logo Pt.1", 0x76F9E + 0x1380, 0x76FDE + 0x1380, indexCPS2Sprites_SFA2_Bonus, 0x1c, &pairNext },
    { L"Alpha 2 Logo", 0x76FFE + 0x1380, 0x7701E + 0x1380, indexCPS2Sprites_SFA2_Bonus, 0x1d },
    { L"Character HUD Name / VS / Perfect!! (flash)", 0x75B9E + 0x1380, 0x75BBE + 0x1380, indexCPS2Sprites_SFA2_Bonus, 0x18 },
    { L"CC Win Icons / Perfect text (filled)", 0x75C1E + 0x1380, 0x75C3E + 0x1380, indexCPS2Sprites_SFA2_Bonus, 0x17 },

    { L"CAPCOM logo", 0x77422 + 0xB11C, 0x77442 + 0xB11C, indexCPS2Sprites_SFA2_Bonus, 0x23 },
    { L"Winners Don't Use Drugs", 0x77442 + 0xB11C, 0x77462 + 0xB11C, indexCPS2Sprites_SFA2_Bonus, 0x26 },
    { L"Text Colors: Intro", 0x77782 + 0xB11C, 0x77822 + 0xB11C, indexCPS2Sprites_SFA2_Bonus, 0x25 },
};

const sGame_PaletteDataset SFA2_A_08REV1_BONUS_PALETTES[] =
{
    { L"CAPCOM logo", 0x133e, 0x135e, indexCPS2Sprites_SFA2_Bonus, 0x23 }, /* Delta: 0x180 */
    { L"Winners Don't Use Drugs", 0x135e, 0x137e, indexCPS2Sprites_SFA2_Bonus, 0x26 }, /* Delta: 0x180 */
    { L"QSound Virtual Audio logo", 0xbb3e, 0xbb9e, indexCPS2Sprites_SFA2_Bonus, 0x24 }, /* Delta: 0x580 */
    { L"Text Colors: Intro", 0x169e, 0x173e, indexCPS2Sprites_SFA2_Bonus, 0x25 }, /* Delta: 0x180 */

    { L"Title BG", 0x163de, 0x163fe, indexCPS2Sprites_SFA2_Bonus, 0x1b }, /* Delta: 0x980 */
    { L"\"Round # Fight\"", 0x2249e, 0x224be, indexCPS2Sprites_SFA2_Bonus, 0x19 }, /* Delta: 0x900 */
    { L"SF Title Logo Pt.2", 0x21cbe, 0x21cfe, indexCPS2Sprites_SFA2_Bonus, 0x1e }, /* Delta: 0x900 */
    { L"SF Title Logo Pt.3", 0x1ca5e, 0x1ca7e }, /* Delta: 0x900 */
};

const sGame_PaletteDataset SFA2_A_08REV2_BONUS_PALETTES[] =
{
    { L"CAPCOM logo", 0x11be, 0x11de, indexCPS2Sprites_SFA2_Bonus, 0x23 },
    { L"Winners Don't Use Drugs", 0x11de, 0x11fe, indexCPS2Sprites_SFA2_Bonus, 0x26 },
    { L"QSound Virtual Audio logo", 0xb5be, 0xb61e, indexCPS2Sprites_SFA2_Bonus, 0x24 },
    { L"Text Colors: Intro", 0x151e, 0x15be, indexCPS2Sprites_SFA2_Bonus, 0x25 },

    { L"Title BG", 0x15A5E, 0x15A7e, indexCPS2Sprites_SFA2_Bonus, 0x1b },
    { L"\"Round # Fight\"", 0x21B9E, 0x21BBE, indexCPS2Sprites_SFA2_Bonus, 0x19 },
    { L"SF Title Logo Pt.2", 0x213BE, 0x213FE, indexCPS2Sprites_SFA2_Bonus, 0x1e },
    { L"SF Title Logo Pt.3", 0x1C15E, 0x1C17E },

    // bugbug: is this correct?
    //{ L"SF Title Motion Logo", 0x76f7e, 0x76f9e },
};

// Z is mostly in line with REV2 but some of the early palettes are in rom07 due to shifts
const sGame_PaletteDataset SFA2_A_08SFZ2A_BONUS_PALETTES[] =
{
    { L"QSound Virtual Audio logo", 0xb5be, 0xb61e, indexCPS2Sprites_SFA2_Bonus, 0x24 },

    { L"Title BG", 0x15A5E, 0x15A7e, indexCPS2Sprites_SFA2_Bonus, 0x1b },
    { L"\"Round # Fight\"", 0x21B9E, 0x21BBE, indexCPS2Sprites_SFA2_Bonus, 0x19 },
    { L"SF Title Logo Pt.2", 0x213BE, 0x213FE, indexCPS2Sprites_SFA2_Bonus, 0x1e },
    { L"SF Title Logo Pt.3", 0x1C15E, 0x1C17E },
};

const sDescTreeNode SFA2_A_BONUS07REV1_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)SFA2_A_07REV1_CSI_PALETTES, ARRAYSIZE(SFA2_A_07REV1_CSI_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_07REV1_INTROPORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_07REV1_INTROPORTRAIT_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_07REV1_BONUS_PALETTES, ARRAYSIZE(SFA2_A_07REV1_BONUS_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS07REV2_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)SFA2_A_07REV2_CSI_PALETTES, ARRAYSIZE(SFA2_A_07REV2_CSI_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_07REV2_INTROPORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_07REV2_INTROPORTRAIT_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_07REV2_BONUS_PALETTES, ARRAYSIZE(SFA2_A_07REV2_BONUS_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS07ForSFZ2A_COLLECTION[] =
{
    { L"Character Select Icons", DESC_NODETYPE_TREE, (void*)SFA2_A_07ForSFZ2A_CSI_PALETTES, ARRAYSIZE(SFA2_A_07ForSFZ2A_CSI_PALETTES) },
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_07ForSFZ2A_INTROPORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_07ForSFZ2A_INTROPORTRAIT_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_07ForSFZ2A_BONUS_PALETTES, ARRAYSIZE(SFA2_A_07ForSFZ2A_BONUS_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS08REV1_COLLECTION[] =
{
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_08REV1_INTROPORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_08REV1_INTROPORTRAIT_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_08REV1_BONUS_PALETTES, ARRAYSIZE(SFA2_A_08REV1_BONUS_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS08REV2_COLLECTION[] =
{
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_08REV2_INTROPORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_08REV2_INTROPORTRAIT_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_08REV2_BONUS_PALETTES, ARRAYSIZE(SFA2_A_08REV2_BONUS_PALETTES) },
};

const sDescTreeNode SFA2_A_BONUS08ForSFZ2A_COLLECTION[] =
{
    { L"Intro Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_08ForSFZ2A_INTROPORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_08ForSFZ2A_INTROPORTRAIT_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_08SFZ2A_BONUS_PALETTES, ARRAYSIZE(SFA2_A_08SFZ2A_BONUS_PALETTES) },
};

#pragma region Extra palettes - auto-generated 

const sGame_PaletteDataset SFA2_A_AKUMA_PUNCH_MOVE_PALETTES[] =
{
    { L"Extra 1", 0x1adbe, 0x1adde, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x1adde, 0x1ae00 - 0x02, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken (Flame)", 0x1ae00 - 0x02, 0x1ae1e },
    { L"Ashura Senku 1", 0x1ae1e, 0x1ae3e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1ae3e, 0x1ae5e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_MOVE_PALETTES[] =
{
    { L"Extra 1", 0x1ae5e, 0x1ae7e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x1ae7e, 0x1ae9e, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken (Flame)", 0x1ae9e, 0x1aebe },
    { L"Ashura Senku 1", 0x1aebe, 0x1aede, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1aede, 0x1af00 - 0x02, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_MOVE_PALETTES[] =
{
    { L"Extra 1", 0x1af00 - 0x02, 0x1af1e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x1af1e, 0x1af3e, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken (Flame)", 0x1af3e, 0x1af5e },
    { L"Ashura Senku 1", 0x1af5e, 0x1af7e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1af7e, 0x1af9e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_MOVE_PALETTES[] =
{
    { L"Extra 1", 0x1af9e, 0x1afbe, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x1afbe, 0x1afde, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken (Flame)", 0x1afde, 0x1b000 - 0x02 },
    { L"Ashura Senku 1", 0x1b000 - 0x02, 0x1b01e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1b01e, 0x1b03e, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { L"Extra 1", 0x1b03e, 0x1b05e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x1b05e, 0x1b07e, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken (Flame)", 0x1b07e, 0x1b09e },
    { L"Ashura Senku 1", 0x1b09e, 0x1b0be, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1b0be, 0x1b0de, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { L"Extra 1", 0x1b0de, 0x1b0fe, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x1b0fe, 0x1b11e, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken (Flame)", 0x1b11e, 0x1b13e },
    { L"Ashura Senku 1", 0x1b13e, 0x1b15e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1b15e, 0x1b17e, indexCPS2Sprites_Akuma, 0x00 },
};

const sDescTreeNode SFA2_A_AKUMA_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_PUNCH_MOVE_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_KICK_MOVE_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2PUNCHES_MOVE_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2KICKS_MOVE_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_PUNCH_MOVE_PALETTES[] =
{
    { L"Bullrush 1", 0x1b17e, 0x1b19e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 2", 0x1b19e, 0x1b1be, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 3", 0x1b1be, 0x1b1de, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_MOVE_PALETTES[] =
{
    { L"Bullrush 1", 0x1b1de, 0x1b1fe, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 2", 0x1b1fe, 0x1b21e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 3", 0x1b21e, 0x1b23e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_MOVE_PALETTES[] =
{
    { L"Bullrush 1", 0x1b23e, 0x1b25e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 2", 0x1b25e, 0x1b27e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 3", 0x1b27e, 0x1b29e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_MOVE_PALETTES[] =
{
    { L"Bullrush 1", 0x1b29e, 0x1b2be, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 2", 0x1b2be, 0x1b2de, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 3", 0x1b2de, 0x1b2fe, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { L"Bullrush 1", 0x1b2fe, 0x1b31e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 2", 0x1b31e, 0x1b33e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 3", 0x1b33e, 0x1b35e, indexCPS2Sprites_Birdie, 0x00 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { L"Bullrush 1", 0x1b35e, 0x1b37e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 2", 0x1b37e, 0x1b39e, indexCPS2Sprites_Birdie, 0x00 },
    { L"Bullrush 3", 0x1b39e, 0x1b3be, indexCPS2Sprites_Birdie, 0x00 },
};

const sDescTreeNode SFA2_A_BIRDIE_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_PUNCH_MOVE_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_KICK_MOVE_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2PUNCHES_MOVE_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2KICKS_MOVE_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ROSE_PUNCH_MOVE_PALETTES[] =
{
    { L"Dress winpose", 0x1b3be, 0x1b3de, indexCPS2Sprites_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_MOVE_PALETTES[] =
{
    { L"Dress winpose", 0x1b3de, 0x1b3fe, indexCPS2Sprites_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_MOVE_PALETTES[] =
{
    { L"Dress winpose", 0x1b3fe, 0x1b41e, indexCPS2Sprites_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_MOVE_PALETTES[] =
{
    { L"Dress winpose", 0x1b41e, 0x1b43e, indexCPS2Sprites_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { L"Dress winpose", 0x1b43e, 0x1b45e, indexCPS2Sprites_Rose, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { L"Dress winpose", 0x1b45e, 0x1b47e, indexCPS2Sprites_Rose, 0x01 },
};

const sDescTreeNode SFA2_A_ROSE_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_PUNCH_MOVE_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_KICK_MOVE_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2PUNCHES_MOVE_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2KICKS_MOVE_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_MBISON_PUNCH_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b47e, 0x1b49e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 2", 0x1b49e, 0x1b4be, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 3", 0x1b4be, 0x1b4de, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 4", 0x1b4de, 0x1b4fe, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b4fe, 0x1b51e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 2", 0x1b51e, 0x1b53e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 3", 0x1b53e, 0x1b55e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 4", 0x1b55e, 0x1b57e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b57e, 0x1b59e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 2", 0x1b59e, 0x1b5be, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 3", 0x1b5be, 0x1b5de, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 4", 0x1b5de, 0x1b5fe, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b5fe, 0x1b61e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 2", 0x1b61e, 0x1b63e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 3", 0x1b63e, 0x1b65e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 4", 0x1b65e, 0x1b67e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b67e, 0x1b69e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 2", 0x1b69e, 0x1b6be, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 3", 0x1b6be, 0x1b6de, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 4", 0x1b6de, 0x1b6fe, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b6fe, 0x1b71e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 2", 0x1b71e, 0x1b73e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 3", 0x1b73e, 0x1b75e, indexCPS2Sprites_Bison, 0x00 },
    { L"Teleport 4", 0x1b75e, 0x1b77e, indexCPS2Sprites_Bison, 0x00 },
};

const sDescTreeNode SFA2_A_MBISON_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_PUNCH_MOVE_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_KICK_MOVE_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2PUNCHES_MOVE_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2KICKS_MOVE_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_PUNCH_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b81e, 0x1b83e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 2", 0x1b83e, 0x1b85e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 3", 0x1b85e, 0x1b87e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 4", 0x1b87e, 0x1b89e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 5", 0x1b89e, 0x1b8be, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b8be, 0x1b8de, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 2", 0x1b8de, 0x1b900 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 3", 0x1b900 - 0x02, 0x1b91e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 4", 0x1b91e, 0x1b93e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 5", 0x1b93e, 0x1b95e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1b95e, 0x1b97e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 2", 0x1b97e, 0x1b99e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 3", 0x1b99e, 0x1b9be, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 4", 0x1b9be, 0x1b9de, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 5", 0x1b9de, 0x1ba00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1ba00 - 0x02, 0x1ba1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 2", 0x1ba1e, 0x1ba3e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 3", 0x1ba3e, 0x1ba5e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 4", 0x1ba5e, 0x1ba7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 5", 0x1ba7e, 0x1ba9e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1ba9e, 0x1babe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 2", 0x1babe, 0x1bade, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 3", 0x1bade, 0x1bb00 - 0x02, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 4", 0x1bb00 - 0x02, 0x1bb1e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 5", 0x1bb1e, 0x1bb3e, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { L"Teleport 1", 0x1bb3e, 0x1bb5e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 2", 0x1bb5e, 0x1bb7e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 3", 0x1bb7e, 0x1bb9e, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 4", 0x1bb9e, 0x1bbbe, indexCPS2Sprites_Dhalsim, 0x00 },
    { L"Teleport 5", 0x1bbbe, 0x1bbde, indexCPS2Sprites_Dhalsim, 0x00 },
};

const sDescTreeNode SFA2_A_DHALSIM_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_PUNCH_MOVE_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_KICK_MOVE_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2PUNCHES_MOVE_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2KICKS_MOVE_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_PUNCH_MOVE_PALETTES[] =
{
    { L"Evil Ryu", 0x1bc7e, 0x1bc9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadoken", 0x1bc9e, 0x1bcbe, indexCPS2Sprites_Ryu, 1 },
    { L"Shoryuken", 0x1bcbe, 0x1bcde },
    { L"Ashura Senku 1", 0x1bcde, 0x1bd00 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ashura Senku 2", 0x1bd00 - 0x02, 0x1bd1e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_KICK_MOVE_PALETTES[] =
{
    { L"Evil Ryu", 0x1bd1e, 0x1bd3e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadoken", 0x1bd3e, 0x1bd5e, indexCPS2Sprites_Ryu, 1 },
    { L"Shoryuken", 0x1bd5e, 0x1bd7e },
    { L"Ashura Senku 1", 0x1bd7e, 0x1bd9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ashura Senku 2", 0x1bd9e, 0x1bdbe, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2PUNCHES_MOVE_PALETTES[] =
{
    { L"Evil Ryu", 0x1bdbe, 0x1bdde, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadoken", 0x1bdde, 0x1be00 - 0x02, indexCPS2Sprites_Ryu, 1 },
    { L"Shoryuken", 0x1be00 - 0x02, 0x1be1e },
    { L"Ashura Senku 1", 0x1be1e, 0x1be3e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ashura Senku 2", 0x1be3e, 0x1be5e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2KICKS_MOVE_PALETTES[] =
{
    { L"Evil Ryu", 0x1be5e, 0x1be7e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadoken", 0x1be7e, 0x1be9e, indexCPS2Sprites_Ryu, 1 },
    { L"Shoryuken", 0x1be9e, 0x1bebe },
    { L"Ashura Senku 1", 0x1bebe, 0x1bede, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ashura Senku 2", 0x1bede, 0x1bf00 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDPUNCH_MOVE_PALETTES[] =
{
    { L"Evil Ryu", 0x1bf00 - 0x02, 0x1bf1e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadoken", 0x1bf1e, 0x1bf3e, indexCPS2Sprites_Ryu, 1 },
    { L"Shoryuken", 0x1bf3e, 0x1bf5e },
    { L"Ashura Senku 1", 0x1bf5e, 0x1bf7e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ashura Senku 2", 0x1bf7e, 0x1bf9e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDKICK_MOVE_PALETTES[] =
{
    { L"Evil Ryu", 0x1bf9e, 0x1bfbe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Hadoken", 0x1bfbe, 0x1bfde, indexCPS2Sprites_Ryu, 1 },
    { L"Shoryuken", 0x1bfde, 0x1c000 - 0x02 },
    { L"Ashura Senku 1", 0x1c000 - 0x02, 0x1c01e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Ashura Senku 2", 0x1c01e, 0x1c03e, indexCPS2Sprites_Ryu, 0x00 },
};

const sDescTreeNode SFA2_A_EVILRYU_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_PUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_PUNCH_MOVE_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_KICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_KICK_MOVE_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2PUNCHES_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2PUNCHES_MOVE_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2KICKS_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2KICKS_MOVE_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDPUNCH_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDPUNCH_MOVE_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDKICK_MOVE_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDKICK_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_PUNCH_PALETTES[] =
{
    { L"Punch", 0x07271e, 0x07273e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Hadoken", 0x07273e, 0x07275e, indexCPS2Sprites_Ryu, 0x01 },
    { L"Punch Hadoken Fire", 0x07275e, 0x07277e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Super Trail Light", 0x07277e, 0x07279e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Super Trail Dark", 0x07279e, 0x0727be, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_KICK_PALETTES[] =
{
    { L"Kick", 0x0727be, 0x0727de, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Hadoken", 0x0727de, 0x0727fe, indexCPS2Sprites_Ryu, 0x01 },
    { L"Kick Hadoken Fire", 0x0727fe, 0x07281e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Super Trail Light", 0x07281e, 0x07283e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Super Trail Dark", 0x07283e, 0x07285e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x07285e, 0x07287e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Hadoken", 0x07287e, 0x07289e, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Punches Hadoken Fire", 0x07289e, 0x0728be, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Super Trail Light", 0x0728be, 0x0728de, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Super Trail Dark", 0x0728de, 0x072900 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x072900 - 0x02, 0x07291e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Hadoken", 0x07291e, 0x07293e, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Kicks Hadoken Fire", 0x07293e, 0x07295e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Super Trail Light", 0x07295e, 0x07297e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x07297e, 0x07299e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x07299e, 0x0729be, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Hadoken", 0x0729be, 0x0729de, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Punch Hadoken Fire", 0x0729de, 0x072a00 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Super Trail Light", 0x072a00 - 0x02, 0x072a1e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x072a1e, 0x072a3e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_REV2_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x072a3e, 0x072a5e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Hadoken", 0x072a5e, 0x072a7e, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Kick Hadoken Fire", 0x072a7e, 0x072a9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Super Trail Light", 0x072a9e, 0x072abe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x072abe, 0x072ade, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Ryu Portrait", 0x1c7be, 0x1c81e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_KICK_PORTRAIT_PALETTES[] =
{
    { L"Ryu Portrait", 0x1cede, 0x1cf3e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Ryu Portrait", 0x1d5fe, 0x1d65e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Ryu Portrait", 0x1dd1e, 0x1dd7e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Ryu Portrait", 0x1e43e, 0x1e49e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_RYU_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Ryu Portrait", 0x1eb5e, 0x1ebbe, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFA2_A_RYU_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_RYU_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_KEN_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Ken Portrait", 0x1c81e, 0x1c87e, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_KICK_PORTRAIT_PALETTES[] =
{
    { L"Ken Portrait", 0x1cf3e, 0x1cf9e, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Ken Portrait", 0x1d65e, 0x1d6be, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Ken Portrait", 0x1dd7e, 0x1ddde, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Ken Portrait", 0x1e49e, 0x1e4fe, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFA2_A_KEN_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Ken Portrait", 0x1ebbe, 0x1ec1e, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sDescTreeNode SFA2_A_KEN_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_KEN_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_AKUMA_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Akuma Portrait", 0x1c87e, 0x1c8de, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_KICK_PORTRAIT_PALETTES[] =
{
    { L"Akuma Portrait", 0x1cf9e, 0x1d000 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Akuma Portrait", 0x1d6be, 0x1d71e, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Akuma Portrait", 0x1ddde, 0x1de3e, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Akuma Portrait", 0x1e4fe, 0x1e55e, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFA2_A_AKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Akuma Portrait", 0x1ec1e, 0x1ec7e, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sDescTreeNode SFA2_A_AKUMA_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Charlie Portrait", 0x1c8de, 0x1c93e, indexCPS2Sprites_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_KICK_PORTRAIT_PALETTES[] =
{
    { L"Charlie Portrait", 0x1d000 - 0x02, 0x1d05e, indexCPS2Sprites_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Charlie Portrait", 0x1d71e, 0x1d77e, indexCPS2Sprites_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Charlie Portrait", 0x1de3e, 0x1de9e, indexCPS2Sprites_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Charlie Portrait", 0x1e55e, 0x1e5be, indexCPS2Sprites_SFA2Portraits, 0x21 },
};

const sGame_PaletteDataset SFA2_A_CHARLIE_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Charlie Portrait", 0x1ec7e, 0x1ecde, indexCPS2Sprites_SFA2Portraits, 0x21 },
};

const sDescTreeNode SFA2_A_CHARLIE_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Portrait", 0x1c93e, 0x1c99e, indexCPS2Sprites_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_KICK_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Portrait", 0x1d05e, 0x1d0be, indexCPS2Sprites_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Portrait", 0x1d77e, 0x1d7de, indexCPS2Sprites_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Portrait", 0x1de9e, 0x1df00 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Portrait", 0x1e5be, 0x1e61e, indexCPS2Sprites_SFA2Portraits, 0x1b },
};

const sGame_PaletteDataset SFA2_A_CHUNLI_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li Portrait", 0x1ecde, 0x1ed3e, indexCPS2Sprites_SFA2Portraits, 0x1b },
};

const sDescTreeNode SFA2_A_CHUNLI_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ADON_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Adon Portrait", 0x1c99e, 0x1ca00 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_KICK_PORTRAIT_PALETTES[] =
{
    { L"Adon Portrait", 0x1d0be, 0x1d11e, indexCPS2Sprites_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Adon Portrait", 0x1d7de, 0x1d83e, indexCPS2Sprites_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Adon Portrait", 0x1df00 - 0x02, 0x1df5e, indexCPS2Sprites_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Adon Portrait", 0x1e61e, 0x1e67e, indexCPS2Sprites_SFA2Portraits, 0x3d },
};

const sGame_PaletteDataset SFA2_A_ADON_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Adon Portrait", 0x1ed3e, 0x1ed9e, indexCPS2Sprites_SFA2Portraits, 0x3d },
};

const sDescTreeNode SFA2_A_ADON_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ADON_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SODOM_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sodom Portrait", 0x1ca00 - 0x02, 0x1ca5e, indexCPS2Sprites_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_KICK_PORTRAIT_PALETTES[] =
{
    { L"Sodom Portrait", 0x1d11e, 0x1d17e, indexCPS2Sprites_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Sodom Portrait", 0x1d83e, 0x1d89e, indexCPS2Sprites_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Sodom Portrait", 0x1df5e, 0x1dfbe, indexCPS2Sprites_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sodom Portrait", 0x1e67e, 0x1e6de, indexCPS2Sprites_SFA2Portraits, 0x3e },
};

const sGame_PaletteDataset SFA2_A_SODOM_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Sodom Portrait", 0x1ed9e, 0x1ee00 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x3e },
};

const sDescTreeNode SFA2_A_SODOM_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SODOM_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_GUY_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Guy Portrait", 0x1ca5e, 0x1cabe, indexCPS2Sprites_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_KICK_PORTRAIT_PALETTES[] =
{
    { L"Guy Portrait", 0x1d17e, 0x1d1de, indexCPS2Sprites_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Guy Portrait", 0x1d89e, 0x1d900 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Guy Portrait", 0x1dfbe, 0x1e01e, indexCPS2Sprites_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Guy Portrait", 0x1e6de, 0x1e73e, indexCPS2Sprites_SFA2Portraits, 0x3f },
};

const sGame_PaletteDataset SFA2_A_GUY_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Guy Portrait", 0x1ee00 - 0x02, 0x1ee5e, indexCPS2Sprites_SFA2Portraits, 0x3f },
};

const sDescTreeNode SFA2_A_GUY_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GUY_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Birdie Portrait", 0x1cabe, 0x1cb1e, indexCPS2Sprites_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_KICK_PORTRAIT_PALETTES[] =
{
    { L"Birdie Portrait", 0x1d1de, 0x1d23e, indexCPS2Sprites_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Birdie Portrait", 0x1d900 - 0x02, 0x1d95e, indexCPS2Sprites_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Birdie Portrait", 0x1e01e, 0x1e07e, indexCPS2Sprites_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Birdie Portrait", 0x1e73e, 0x1e79e, indexCPS2Sprites_SFA2Portraits, 0x40 },
};

const sGame_PaletteDataset SFA2_A_BIRDIE_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Birdie Portrait", 0x1ee5e, 0x1eebe, indexCPS2Sprites_SFA2Portraits, 0x40 },
};

const sDescTreeNode SFA2_A_BIRDIE_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ROSE_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Rose Portrait", 0x1cb1e, 0x1cb7e, indexCPS2Sprites_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_KICK_PORTRAIT_PALETTES[] =
{
    { L"Rose Portrait", 0x1d23e, 0x1d29e, indexCPS2Sprites_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Rose Portrait", 0x1d95e, 0x1d9be, indexCPS2Sprites_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Rose Portrait", 0x1e07e, 0x1e0de, indexCPS2Sprites_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Rose Portrait", 0x1e79e, 0x1e7fe, indexCPS2Sprites_SFA2Portraits, 0x41 },
};

const sGame_PaletteDataset SFA2_A_ROSE_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Rose Portrait", 0x1eebe, 0x1ef1e, indexCPS2Sprites_SFA2Portraits, 0x41 },
};

const sDescTreeNode SFA2_A_ROSE_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROSE_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_MBISON_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Portrait", 0x1cb7e, 0x1cbde, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_KICK_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Portrait", 0x1d29e, 0x1d2fe, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Portrait", 0x1d9be, 0x1da1e, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Portrait", 0x1e0de, 0x1e13e, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Portrait", 0x1e7fe, 0x1e85e, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFA2_A_MBISON_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"M.Bison Portrait", 0x1ef1e, 0x1ef7e, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sDescTreeNode SFA2_A_MBISON_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_MBISON_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SAGAT_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sagat Portrait", 0x1cbde, 0x1cc3e, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_KICK_PORTRAIT_PALETTES[] =
{
    { L"Sagat Portrait", 0x1d2fe, 0x1d35e, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Sagat Portrait", 0x1da1e, 0x1da7e, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Sagat Portrait", 0x1e13e, 0x1e19e, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sagat Portrait", 0x1e85e, 0x1e8be, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFA2_A_SAGAT_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Sagat Portrait", 0x1ef7e, 0x1efde, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sDescTreeNode SFA2_A_SAGAT_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_DAN_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dan Portrait", 0x1cc3e, 0x1cc9e, indexCPS2Sprites_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_KICK_PORTRAIT_PALETTES[] =
{
    { L"Dan Portrait", 0x1d35e, 0x1d3be, indexCPS2Sprites_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Dan Portrait", 0x1da7e, 0x1dade, indexCPS2Sprites_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Dan Portrait", 0x1e19e, 0x1e1fe, indexCPS2Sprites_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dan Portrait", 0x1e8be, 0x1e91e, indexCPS2Sprites_SFA2Portraits, 0x23 },
};

const sGame_PaletteDataset SFA2_A_DAN_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Dan Portrait", 0x1efde, 0x1f03e, indexCPS2Sprites_SFA2Portraits, 0x23 },
};

const sDescTreeNode SFA2_A_DAN_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DAN_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SAKURA_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sakura Portrait", 0x1cc9e, 0x1cd00 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_KICK_PORTRAIT_PALETTES[] =
{
    { L"Sakura Portrait", 0x1d3be, 0x1d41e, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Sakura Portrait", 0x1dade, 0x1db3e, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Sakura Portrait", 0x1e1fe, 0x1e25e, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sakura Portrait", 0x1e91e, 0x1e97e, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFA2_A_SAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Sakura Portrait", 0x1f03e, 0x1f09e, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sDescTreeNode SFA2_A_SAKURA_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Rolento Portrait", 0x1cd00 - 0x02, 0x1cd5e, indexCPS2Sprites_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_KICK_PORTRAIT_PALETTES[] =
{
    { L"Rolento Portrait", 0x1d41e, 0x1d47e, indexCPS2Sprites_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Rolento Portrait", 0x1db3e, 0x1db9e, indexCPS2Sprites_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Rolento Portrait", 0x1e25e, 0x1e2be, indexCPS2Sprites_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Rolento Portrait", 0x1e97e, 0x1e9de, indexCPS2Sprites_SFA2Portraits, 0x43 },
};

const sGame_PaletteDataset SFA2_A_ROLENTO_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Rolento Portrait", 0x1f09e, 0x1f0fe, indexCPS2Sprites_SFA2Portraits, 0x43 },
};

const sDescTreeNode SFA2_A_ROLENTO_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim Portrait", 0x1cd5e, 0x1cdbe, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_KICK_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim Portrait", 0x1d47e, 0x1d4de, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim Portrait", 0x1db9e, 0x1dc00 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim Portrait", 0x1e2be, 0x1e31e, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim Portrait", 0x1e9de, 0x1ea3e, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_DHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim Portrait", 0x1f0fe, 0x1f15e, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sDescTreeNode SFA2_A_DHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Zangief Portrait", 0x1cdbe, 0x1ce1e, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_KICK_PORTRAIT_PALETTES[] =
{
    { L"Zangief Portrait", 0x1d4de, 0x1d53e, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Zangief Portrait", 0x1dc00 - 0x02, 0x1dc5e, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Zangief Portrait", 0x1e31e, 0x1e37e, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Zangief Portrait", 0x1ea3e, 0x1ea9e, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_ZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Zangief Portrait", 0x1f15e, 0x1f1be, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sDescTreeNode SFA2_A_ZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_GEN_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Gen Portrait", 0x1ce1e, 0x1ce7e, indexCPS2Sprites_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_KICK_PORTRAIT_PALETTES[] =
{
    { L"Gen Portrait", 0x1d53e, 0x1d59e, indexCPS2Sprites_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Gen Portrait", 0x1dc5e, 0x1dcbe, indexCPS2Sprites_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Gen Portrait", 0x1e37e, 0x1e3de, indexCPS2Sprites_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Gen Portrait", 0x1ea9e, 0x1eb00 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x44 },
};

const sGame_PaletteDataset SFA2_A_GEN_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Gen Portrait", 0x1f1be, 0x1f21e, indexCPS2Sprites_SFA2Portraits, 0x44 },
};

const sDescTreeNode SFA2_A_GEN_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_GEN_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (Original) Portrait", 0x1ce7e, 0x1cede, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_KICK_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (Original) Portrait", 0x1d59e, 0x1d5fe, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (Original) Portrait", 0x1dcbe, 0x1dd1e, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (Original) Portrait", 0x1e3de, 0x1e43e, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (Original) Portrait", 0x1eb00 - 0x02, 0x1eb5e, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (Original) Portrait", 0x1f21e, 0x1f27e, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sDescTreeNode SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

#pragma endregion

#pragma region Street Fighter Zero 2 Alpha characters

const sGame_PaletteDataset SFA2_A_EVILRYU_PUNCH_PALETTES[] =
{
    { L"Punch", 0x65B42, 0x65B62, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Hadoken", 0x65B62, 0x65B82, indexCPS2Sprites_Ryu, 0x01 },
    { L"Punch Extra 2", 0x65B82, 0x65Ba2 },
    { L"Punch Super Trail Light", 0x65Ba2, 0x65Bc2, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Super Trail Dark", 0x65Bc2, 0x65Be2, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_KICK_PALETTES[] =
{
    { L"Kick", 0x65Be2, 0x65c02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Hadoken", 0x65c02, 0x65c22, indexCPS2Sprites_Ryu, 0x01 },
    { L"Kick Extra 2", 0x65c22, 0x65c42 },
    { L"Kick Super Trail Light", 0x65c42, 0x65c62, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Super Trail Dark", 0x65c62, 0x65c82, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x65c82, 0x65ca2, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Hadoken", 0x65ca2, 0x65cc2, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Punches Extra 2", 0x65cc2, 0x65ce2 },
    { L"2 Punches Super Trail Light", 0x65ce2, 0x65d02, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Super Trail Dark", 0x65d02, 0x65d22, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x65d22, 0x65d42, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Hadoken", 0x65d42, 0x65d62, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Kicks Extra 2", 0x65d62, 0x65d82 },
    { L"2 Kicks Super Trail Light", 0x65d82, 0x65da2, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x65da2, 0x65dc2, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x65dc2, 0x65de2, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Hadoken", 0x65de2, 0x65e02, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x65e02, 0x65e22 },
    { L"Auto Guard Punch Super Trail Light", 0x65e22, 0x65e42, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x65e42, 0x65e62, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x65e62, 0x65e82, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Hadoken", 0x65e82, 0x65ea2, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x65ea2, 0x65ec2 },
    { L"Auto Guard Kick Super Trail Light", 0x65ec2, 0x65ee2, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x65ee2, 0x65f02, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_EVILRYU_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x75c5e, 0x75c7e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Burned 2",                       0x75c7e, 0x75c9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Psycho Power Burned 1",          0x75c9e, 0x75cbe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Psycho Power Burned 2",          0x75cbe, 0x75cde, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch CC Shadow 1",              0x75cde, 0x75d00 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch CC Shadow 2",              0x75d00 - 0x02, 0x75d1e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick CC Shadow 1",               0x75d1e, 0x75d3e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick CC Shadow 2",               0x75d3e, 0x75d5e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches CC Shadow 1",          0x75d5e, 0x75d7e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches CC Shadow 2",          0x75d7e, 0x75d9e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x75d9e, 0x75dbe, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x75dbe, 0x75dde, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x75dde, 0x75e00 - 0x02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x75e00 - 0x02, 0x75e1e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x75e1e, 0x75e3e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x75e3e, 0x75e5e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_PUNCH_PALETTES[] =
{
    { L"Punch", 0x66682, 0x666a2, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch Extra 1", 0x666a2, 0x666c2, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch Extra 2", 0x666c2, 0x666e2 },
    { L"Punch Super Trail Light", 0x666e2, 0x66702, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch Super Trail Dark", 0x66702, 0x66722, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_KICK_PALETTES[] =
{
    { L"Kick", 0x66722, 0x66742, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick Extra 1", 0x66742, 0x66762, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick Extra 2", 0x66762, 0x66782 },
    { L"Kick Super Trail Light", 0x66782, 0x667a2, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick Super Trail Dark", 0x667a2, 0x667c2, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x667c2, 0x667e2, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches Extra 1", 0x667e2, 0x66802, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches Extra 2", 0x66802, 0x66822 },
    { L"2 Punches Super Trail Light", 0x66822, 0x66842, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches Super Trail Dark", 0x66842, 0x66862, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x66862, 0x66882, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks Extra 1", 0x66882, 0x668a2, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks Extra 2", 0x668a2, 0x668c2 },
    { L"2 Kicks Super Trail Light", 0x668c2, 0x668e2, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x668e2, 0x66902, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x66902, 0x66922, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x66922, 0x66942, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x66942, 0x66962 },
    { L"Auto Guard Punch Super Trail Light", 0x66962, 0x66982, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x66982, 0x669a2, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x669a2, 0x669c2, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x669c2, 0x669e2, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x669e2, 0x66a02 },
    { L"Auto Guard Kick Super Trail Light", 0x66a02, 0x66a22, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x66a22, 0x66a42, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWKEN_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x7625e, 0x7627e, indexCPS2Sprites_Ken, 0x00 },
    { L"Burned 2",                       0x7627e, 0x7629e, indexCPS2Sprites_Ken, 0x00 },
    { L"Psycho Power Burned 1",          0x7629e, 0x762be, indexCPS2Sprites_Ken, 0x00 },
    { L"Psycho Power Burned 2",          0x762be, 0x762de, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch CC Shadow 1",              0x762de, 0x762fe, indexCPS2Sprites_Ken, 0x00 },
    { L"Punch CC Shadow 2",              0x762fe, 0x7631e, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick CC Shadow 1",               0x7631e, 0x7633e, indexCPS2Sprites_Ken, 0x00 },
    { L"Kick CC Shadow 2",               0x7633e, 0x7635e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches CC Shadow 1",          0x7635e, 0x7637e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Punches CC Shadow 2",          0x7637e, 0x7639e, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x7639e, 0x763be, indexCPS2Sprites_Ken, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x763be, 0x763de, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x763de, 0x763fe, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x763fe, 0x7641e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x7641e, 0x7643e, indexCPS2Sprites_Ken, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x7643e, 0x7645e, indexCPS2Sprites_Ken, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_PUNCH_PALETTES[] =
{
    { L"Punch", 0x66a42, 0x66a62, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Extra 1", 0x66a62, 0x66a82, indexCPS2Sprites_Ryu, 0x01 },
    { L"Punch Extra 2", 0x66a82, 0x66aa2 },
    { L"Punch Super Trail 1", 0x66aa2, 0x66ac2, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch Super Trail 2", 0x66ac2, 0x66ae2, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_KICK_PALETTES[] =
{
    { L"Kick", 0x66ae2, 0x66b02, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Extra 1", 0x66b02, 0x66b22, indexCPS2Sprites_Ryu, 0x01 },
    { L"Kick Extra 2", 0x66b22, 0x66b42 },
    { L"Kick Super Trail 1", 0x66b42, 0x66b62, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick Super Trail 2", 0x66b62, 0x66b82, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x66b82, 0x66ba2, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Extra 1", 0x66ba2, 0x66bc2, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Punches Extra 2", 0x66bc2, 0x66be2 },
    { L"2 Punches Super Trail 1", 0x66be2, 0x66c02, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches Super Trail 2", 0x66c02, 0x66c22, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x66c22, 0x66c42, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Extra 1", 0x66c42, 0x66c62, indexCPS2Sprites_Ryu, 0x01 },
    { L"2 Kicks Extra 2", 0x66c62, 0x66c82 },
    { L"2 Kicks Super Trail 1", 0x66c82, 0x66ca2, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks Super Trail 2", 0x66ca2, 0x66cc2, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x66cc2, 0x66ce2, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x66ce2, 0x66d02, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Punch Extra 2", 0x66d02, 0x66d22 },
    { L"Auto Guard Punch Super Trail 1", 0x66d22, 0x66d42, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch Super Trail 2", 0x66d42, 0x66d62, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x66d62, 0x66d82, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x66d82, 0x66da2, indexCPS2Sprites_Ryu, 0x01 },
    { L"Auto Guard Kick Extra 2", 0x66da2, 0x66dc2 },
    { L"Auto Guard Kick Super Trail 1", 0x66dc2, 0x66de2, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick Super Trail 2", 0x66de2, 0x66e02, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWRYU_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x7645e, 0x7647e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Burned 2",                       0x7647e, 0x7649e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Psycho Power Burned 1",          0x7649e, 0x764be, indexCPS2Sprites_Ryu, 0x00 },
    { L"Psycho Power Burned 2",          0x764be, 0x764de, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch CC Shadow 1",              0x764de, 0x764fe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Punch CC Shadow 2",              0x764fe, 0x7651e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick CC Shadow 1",               0x7651e, 0x7653e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Kick CC Shadow 2",               0x7653e, 0x7655e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches CC Shadow 1",          0x7655e, 0x7657e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Punches CC Shadow 2",          0x7657e, 0x7659e, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x7659e, 0x765be, indexCPS2Sprites_Ryu, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x765be, 0x765de, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x765de, 0x765fe, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x765fe, 0x7661e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x7661e, 0x7663e, indexCPS2Sprites_Ryu, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x7663e, 0x7665e, indexCPS2Sprites_Ryu, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_PUNCH_PALETTES[] =
{
    { L"Punch", 0x66e02, 0x66e22, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch Extra 1", 0x66e22, 0x66e42, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch Extra 2", 0x66e42, 0x66e62, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch Super Trail Light", 0x66e62, 0x66e82, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch Super Trail Dark", 0x66e82, 0x66ea2, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_KICK_PALETTES[] =
{
    { L"Kick", 0x66ea2, 0x66ec2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick Extra 1", 0x66ec2, 0x66ee2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick Extra 2", 0x66ee2, 0x66f02, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick Super Trail Light", 0x66f02, 0x66f22, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick Super Trail Dark", 0x66f22, 0x66f42, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x66f42, 0x66f62, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches Extra 1", 0x66f62, 0x66f82, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches Extra 2", 0x66f82, 0x66fa2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches Super Trail Light", 0x66fa2, 0x66fc2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches Super Trail Dark", 0x66fc2, 0x66fe2, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x66fe2, 0x67002, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks Extra 1", 0x67002, 0x67022, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks Extra 2", 0x67022, 0x67042, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks Super Trail Light", 0x67042, 0x67062, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x67062, 0x67082, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x67082, 0x670a2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x670a2, 0x670c2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x670c2, 0x670e2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch Super Trail Light", 0x670e2, 0x67102, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x67102, 0x67122, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x67122, 0x67142, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x67142, 0x67162, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x67162, 0x67182, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick Super Trail Light", 0x67182, 0x671a2, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x671a2, 0x671c2, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWCHUNLI_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x7665e, 0x7667e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Burned 2",                       0x7667e, 0x7669e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Psycho Power Burned 1",          0x7669e, 0x766be, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Psycho Power Burned 2",          0x766be, 0x766de, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch CC Shadow 1",              0x766de, 0x766fe, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Punch CC Shadow 2",              0x766fe, 0x7671e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick CC Shadow 1",               0x7671e, 0x7673e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Kick CC Shadow 2",               0x7673e, 0x7675e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches CC Shadow 1",          0x7675e, 0x7677e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Punches CC Shadow 2",          0x7677e, 0x7679e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x7679e, 0x767be, indexCPS2Sprites_ChunLi, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x767be, 0x767de, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x767de, 0x767fe, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x767fe, 0x7681e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x7681e, 0x7683e, indexCPS2Sprites_ChunLi, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x7683e, 0x7685e, indexCPS2Sprites_ChunLi, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_PUNCH_PALETTES[] =
{
    { L"Punch", 0x65f02, 0x65f22, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch Extra 1", 0x65f22, 0x65f42, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch Extra 2", 0x65f42, 0x65f62, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch Super Trail Light", 0x65f62, 0x65f82, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch Super Trail Dark", 0x65f82, 0x65fa2, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_KICK_PALETTES[] =
{
    { L"Kick", 0x65fa2, 0x65fc2, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick Extra 1", 0x65fc2, 0x65fe2, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick Extra 2", 0x65fe2, 0x66002, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick Super Trail Light", 0x66002, 0x66022, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick Super Trail Dark", 0x66022, 0x66042, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x66042, 0x66062, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches Extra 1", 0x66062, 0x66082, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches Extra 2", 0x66082, 0x660a2, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches Super Trail Light", 0x660a2, 0x660c2, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches Super Trail Dark", 0x660c2, 0x660e2, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x660e2, 0x66102, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks Extra 1", 0x66102, 0x66122, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks Extra 2", 0x66122, 0x66142, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks Super Trail Light", 0x66142, 0x66162, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x66162, 0x66182, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x66182, 0x661a2, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x661a2, 0x661c2, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x661c2, 0x661e2, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch Super Trail Light", 0x661e2, 0x66202, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x66202, 0x66222, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x66222, 0x66242, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x66242, 0x66262, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x66262, 0x66282, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick Super Trail Light", 0x66282, 0x662a2, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x662a2, 0x662c2, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWMBISON_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x75e5e, 0x75e7e, indexCPS2Sprites_Bison, 0x00 },
    { L"Burned 2",                       0x75e7e, 0x75e9e, indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho Power Burned 1",          0x75e9e, 0x75ebe, indexCPS2Sprites_Bison, 0x00 },
    { L"Psycho Power Burned 2",          0x75ebe, 0x75ede, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch CC Shadow 1",              0x75ede, 0x75f00 - 0x02, indexCPS2Sprites_Bison, 0x00 },
    { L"Punch CC Shadow 2",              0x75f00 - 0x02, 0x75f1e, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick CC Shadow 1",               0x75f1e, 0x75f3e, indexCPS2Sprites_Bison, 0x00 },
    { L"Kick CC Shadow 2",               0x75f3e, 0x75f5e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches CC Shadow 1",          0x75f5e, 0x75f7e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Punches CC Shadow 2",          0x75f7e, 0x75f9e, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x75f9e, 0x75fbe, indexCPS2Sprites_Bison, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x75fbe, 0x75fde, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x75fde, 0x76000 - 0x02, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x76000 - 0x02, 0x7601e, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x7601e, 0x7603e, indexCPS2Sprites_Bison, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x7603e, 0x7605e, indexCPS2Sprites_Bison, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_PUNCH_PALETTES[] =
{
    { L"Punch", 0x662c2, 0x662e2, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch Extra 1", 0x662e2, 0x66302 },
    { L"Punch Extra 2", 0x66302, 0x66322 },
    { L"Punch Super Trail Light", 0x66322, 0x66342, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch Super Trail Dark", 0x66342, 0x66362, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_KICK_PALETTES[] =
{
    { L"Kick", 0x66362, 0x66382, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick Extra 1", 0x66382, 0x663a2 },
    { L"Kick Extra 2", 0x663a2, 0x663c2 },
    { L"Kick Super Trail Light", 0x663c2, 0x663e2, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick Super Trail Dark", 0x663e2, 0x66402, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x66402, 0x66422, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches Extra 1", 0x66422, 0x66442 },
    { L"2 Punches Extra 2", 0x66442, 0x66462 },
    { L"2 Punches Super Trail Light", 0x66462, 0x66482, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches Super Trail Dark", 0x66482, 0x664a2, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x664a2, 0x664c2, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks Extra 1", 0x664c2, 0x664e2 },
    { L"2 Kicks Extra 2", 0x664e2, 0x66502 },
    { L"2 Kicks Super Trail Light", 0x66502, 0x66522, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x66522, 0x66542, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x66542, 0x66562, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x66562, 0x66582 },
    { L"Auto Guard Punch Extra 2", 0x66582, 0x665a2 },
    { L"Auto Guard Punch Super Trail Light", 0x665a2, 0x665c2, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x665c2, 0x665e2, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x665e2, 0x66602, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x66602, 0x66622 },
    { L"Auto Guard Kick Extra 2", 0x66622, 0x66642 },
    { L"Auto Guard Kick Super Trail Light", 0x66642, 0x66662, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x66662, 0x66682, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_WWSAGAT_STATUS_PALETTES[] =
{
    { L"Burned 1",                       0x7605e, 0x7607e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Burned 2",                       0x7607e, 0x7609e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Psycho Power Burned 1",          0x7609e, 0x760be, indexCPS2Sprites_Sagat, 0x00 },
    { L"Psycho Power Burned 2",          0x760be, 0x760de, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch CC Shadow 1",              0x760de, 0x760fe, indexCPS2Sprites_Sagat, 0x00 },
    { L"Punch CC Shadow 2",              0x760fe, 0x7611e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick CC Shadow 1",               0x7611e, 0x7613e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Kick CC Shadow 2",               0x7613e, 0x7615e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches CC Shadow 1",          0x7615e, 0x7617e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Punches CC Shadow 2",          0x7617e, 0x7619e, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks CC Shadow 1",            0x7619e, 0x761be, indexCPS2Sprites_Sagat, 0x00 },
    { L"2 Kicks CC Shadow 2",            0x761be, 0x761de, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch CC Shadow 1",   0x761de, 0x761fe, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Punch CC Shadow 2",   0x761fe, 0x7621e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick CC Shadow 1",    0x7621e, 0x7623e, indexCPS2Sprites_Sagat, 0x00 },
    { L"Auto Guard Kick CC Shadow 2",    0x7623e, 0x7625e, indexCPS2Sprites_Sagat, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_PUNCH_PALETTES[] =
{
    { L"Punch", 0x671c2, 0x713a0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch Extra 1", 0x713a0 - 0xA1BC - 0x02, 0x713c0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch Extra 2", 0x713c0 - 0xA1BC - 0x02, 0x713e0 - 0xA1BC - 0x02 },
    { L"Punch Super Trail Light", 0x713e0 - 0xA1BC - 0x02, 0x71400 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch Super Trail Dark", 0x71400 - 0xA1BC - 0x02, 0x71420 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_KICK_PALETTES[] =
{
    { L"Kick", 0x71420 - 0xA1BC - 0x02, 0x71440 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick Extra 1", 0x71440 - 0xA1BC - 0x02, 0x71460 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick Extra 2", 0x71460 - 0xA1BC - 0x02, 0x71480 - 0xA1BC - 0x02 },
    { L"Kick Super Trail Light", 0x71480 - 0xA1BC - 0x02, 0x714a0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick Super Trail Dark", 0x714a0 - 0xA1BC - 0x02, 0x714c0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_2PUNCHES_PALETTES[] =
{
    { L"2 Punches", 0x714c0 - 0xA1BC - 0x02, 0x714e0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches Extra 1", 0x714e0 - 0xA1BC - 0x02, 0x71500 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches Extra 2", 0x71500 - 0xA1BC - 0x02, 0x71520 - 0xA1BC - 0x02 },
    { L"2 Punches Super Trail Light", 0x71520 - 0xA1BC - 0x02, 0x71540 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches Super Trail Dark", 0x71540 - 0xA1BC - 0x02, 0x71560 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_2KICKS_PALETTES[] =
{
    { L"2 Kicks", 0x71560 - 0xA1BC - 0x02, 0x71580 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks Extra 1", 0x71580 - 0xA1BC - 0x02, 0x715a0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks Extra 2", 0x715a0 - 0xA1BC - 0x02, 0x715c0 - 0xA1BC - 0x02 },
    { L"2 Kicks Super Trail Light", 0x715c0 - 0xA1BC - 0x02, 0x715e0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks Super Trail Dark", 0x715e0 - 0xA1BC - 0x02, 0x71600 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Auto Guard Punch", 0x71600 - 0xA1BC - 0x02, 0x71620 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch Extra 1", 0x71620 - 0xA1BC - 0x02, 0x71640 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch Extra 2", 0x71640 - 0xA1BC - 0x02, 0x71660 - 0xA1BC - 0x02 },
    { L"Auto Guard Punch Super Trail Light", 0x71660 - 0xA1BC - 0x02, 0x71680 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch Super Trail Dark", 0x71680 - 0xA1BC - 0x02, 0x716a0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_AUTOGUARDKICK_PALETTES[] =
{
    { L"Auto Guard Kick", 0x716a0 - 0xA1BC - 0x02, 0x716c0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick Extra 1", 0x716c0 - 0xA1BC - 0x02, 0x716e0 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick Extra 2", 0x716e0 - 0xA1BC - 0x02, 0x71700 - 0xA1BC - 0x02 },
    { L"Auto Guard Kick Super Trail Light", 0x71700 - 0xA1BC - 0x02, 0x71720 - 0xA1BC - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick Super Trail Dark", 0x71720 - 0xA1BC - 0x02, 0x67582, indexCPS2Sprites_Sakura, 0x00 },
};

const sGame_PaletteDataset SFA2_A_ALTSAKURA_STATUS_PALETTES[] =
{
    { L"Burned 1", 0x7685e, 0x74880 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Burned 2", 0x74880 + 0x2000 - 0x02, 0x748a0 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Psycho Power Burned 1", 0x748a0 + 0x2000 - 0x02, 0x748c0 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Psycho Power Burned 2", 0x748c0 + 0x2000 - 0x02, 0x748e0 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch CC Shadow 1", 0x748e0 + 0x2000 - 0x02, 0x74900 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Punch CC Shadow 2", 0x74900 + 0x2000 - 0x02, 0x74920 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick CC Shadow 1", 0x74920 + 0x2000 - 0x02, 0x74940 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Kick CC Shadow 2", 0x74940 + 0x2000 - 0x02, 0x74960 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches CC Shadow 1", 0x74960 + 0x2000 - 0x02, 0x74980 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Punches CC Shadow 2", 0x74980 + 0x2000 - 0x02, 0x749a0 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks CC Shadow 1", 0x749a0 + 0x2000 - 0x02, 0x749c0 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"2 Kicks CC Shadow 2", 0x749c0 + 0x2000 - 0x02, 0x749e0 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch CC Shadow 1", 0x749e0 + 0x2000 - 0x02, 0x74a00 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Punch CC Shadow 2", 0x74a00 + 0x2000 - 0x02, 0x74a20 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick CC Shadow 1", 0x74a20 + 0x2000 - 0x02, 0x74a40 + 0x2000 - 0x02, indexCPS2Sprites_Sakura, 0x00 },
    { L"Auto Guard Kick CC Shadow 2", 0x74a40 + 0x2000 - 0x02, 0x76a5e, indexCPS2Sprites_Sakura, 0x00 },
};

const sDescTreeNode SFA2_A_WWRYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_WWKEN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_WWCHUNLI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_WWMBISON_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_WWSAGAT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_KICK_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_EVILRYU_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_KICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_EVILRYU_REV2_COLLECTION[] =
{
    { L"Punch",          DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_PUNCH_PALETTES) },
    { L"Kick",           DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_KICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_KICK_PALETTES) },
    { L"2 Punches",      DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_2PUNCHES_PALETTES) },
    { L"2 Kicks",        DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_REV2_AUTOGUARDKICK_PALETTES) },
};

const sDescTreeNode SFA2_A_ALTSAKURA_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_PUNCH_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_KICK_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_2PUNCHES_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_2KICKS_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_AUTOGUARDKICK_PALETTES) },
};

#pragma endregion

const sGame_PaletteDataset SFA2_A_DAN_MOVE_PALETTES[] =
{
    { L"Dan P1", 0x1b77e, 0x1b79e, indexCPS2Sprites_Dan, 0x00 },
    { L"Dan P2", 0x1b79e, 0x1b7be, indexCPS2Sprites_Dan, 0x00 },
};

const sDescTreeNode SFA2_A_DAN_MOVE_COLLECTION[] =
{
    { L"Sagat Throw", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_PALETTES, ARRAYSIZE(SFA2_A_DAN_MOVE_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_SHINAKUMA_MOVE_PALETTES[] =
{
    { L"Shin Akuma",     0x1bbde, 0x1bbfe, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken",        0x1bbfe, 0x1bc1e, indexCPS2Sprites_Akuma, 0x01 },
    { L"Shoryuken",      0x1bc1e, 0x1bc3e },
    { L"Ashura Senku 1", 0x1bc3e, 0x1bc5e, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x1bc5e, 0x1bc7e, indexCPS2Sprites_Akuma, 0x00 },
};

const sDescTreeNode SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION[] =
{
    { L"Hidden Boss", DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_MOVE_PALETTES, ARRAYSIZE(SFA2_A_SHINAKUMA_MOVE_PALETTES) },
};

#pragma region SFA2 Rev2 palettes

const sGame_PaletteDataset SFA2_A_REV2_SHINAKUMA_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Shin Akuma Portrait", 0x224de, 0x2253e, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sDescTreeNode SFA2_A_REV2_SHINAKUMA_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_SHINAKUMA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_SHINAKUMA_PUNCH_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_PUNCH_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x237de, 0x2383e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_KICK_PORTRAIT_PALETTES[] =
{
    { L"Evil Ryu Portrait", 0x2383e, 0x2389e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_2PUNCHES_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x2389e, 0x23900 - 0x02, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_2KICKS_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x23900 - 0x02, 0x2395e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x2395e, 0x239be, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFA2_A_REV2_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Evil Ryu Portrait", 0x239be, 0x23a1e, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFA2_A_REV2_EVILRYU_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_REV2_WWDHALSIM_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x2359e, 0x235fe, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFA2_A_REV2_WWDHALSIM_KICK_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x235fe, 0x2365e, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sDescTreeNode SFA2_A_REV2_WWDHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWDHALSIM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWDHALSIM_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWDHALSIM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWDHALSIM_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFA2_A_REV2_WWZANGIEF_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Zangief (WW) Portrait", 0x2335e, 0x233be, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFA2_A_REV2_WWZANGIEF_KICK_PORTRAIT_PALETTES[] =
{
     { L"Zangief (WW) Portrait", 0x233be, 0x2341e, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sDescTreeNode SFA2_A_REV2_WWZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWZANGIEF_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWZANGIEF_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWZANGIEF_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFA2_A_REV2_WWZANGIEF_KICK_PORTRAIT_PALETTES) },
};

#pragma endregion

#pragma region SFZ2A08 palettes

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_PUNCH_PALETTES[] =
{
    { L"Shin Akuma",     0x12142, 0x12162, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken",        0x12162, 0x12182, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken",      0x12182, 0x121a2 },
    { L"Ashura Senku 1", 0x121a2, 0x121c2, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x121c2, 0x121e2, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_KICK_PALETTES[] =
{
    { L"Shin Akuma", 0x121e2, 0x12202, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x12202, 0x12222, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken", 0x12222, 0x12242 },
    { L"Ashura Senku 1", 0x12242, 0x12262, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x12262, 0x12282, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2PUNCHES_PALETTES[] =
{
    { L"Shin Akuma", 0x12282, 0x122a2, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x122a2, 0x122c2, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken", 0x122c2, 0x122e2 },
    { L"Ashura Senku 1", 0x122e2, 0x12302, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x12302, 0x12322, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2KICKS_PALETTES[] =
{
    { L"Shin Akuma", 0x12322, 0x12342, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x12342, 0x12362, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken", 0x12362, 0x12382 },
    { L"Ashura Senku 1", 0x12382, 0x123A2, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x123A2, 0x123C2, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PALETTES[] =
{
    { L"Shin Akuma", 0x123C2, 0x123E2, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x123E2, 0x12402, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken", 0x12402, 0x12422 },
    { L"Ashura Senku 1", 0x12422, 0x12442, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x12442, 0x12462, indexCPS2Sprites_Akuma, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PALETTES[] =
{
    { L"Shin Akuma", 0x12462, 0x12482, indexCPS2Sprites_Akuma, 0x00 },
    { L"Hadoken", 0x12482, 0x124a2, indexCPS2Sprites_Akuma, 1 },
    { L"Shoryuken", 0x124a2, 0x124c2 },
    { L"Ashura Senku 1", 0x124c2, 0x124e2, indexCPS2Sprites_Akuma, 0x00 },
    { L"Ashura Senku 2", 0x124e2, 0x12502, indexCPS2Sprites_Akuma, 0x00 },
};

const sDescTreeNode SFZ2A_A_SHINAKUMA_FULL_MOVE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_PUNCH_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_KICK_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_KICK_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2PUNCHES_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2PUNCHES_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2KICKS_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2KICKS_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PALETTES) }, 
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Shin Akuma Portrait", 0x1a062, 0x1a0c2, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_KICK_PORTRAIT_PALETTES[] =
{
   { L"Shin Akuma Portrait", 0x1a0c2, 0x1a122, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Shin Akuma Portrait", 0x1a122, 0x1a182, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_2KICKS_PORTRAIT_PALETTES[] =
{
   { L"Shin Akuma Portrait", 0x1a182, 0x1a1e2, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Shin Akuma Portrait", 0x1a1e2, 0x1a242, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sGame_PaletteDataset SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Shin Akuma Portrait", 0x1a242, 0x1a2a2, indexCPS2Sprites_SFA2Portraits, 0x1e },
};

const sDescTreeNode SFZ2A_A_SHINAKUMA_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_SHINAKUMA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_PUNCH_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x1a722, 0x1a782, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_KICK_PORTRAIT_PALETTES[] =
{
    { L"Evil Ryu Portrait", 0x1a782, 0x1a7e2, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_2PUNCHES_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x1a7e2, 0x1a842, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_2KICKS_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x1a842, 0x1a8a2, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
   { L"Evil Ryu Portrait", 0x1a8a2, 0x1a902, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Evil Ryu Portrait", 0x1a902, 0x1a962, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFZ2A_A_EVILRYU_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_EVILRYU_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWRYU_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Ryu (WW) Portrait", 0x1b022, 0x1b082, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sGame_PaletteDataset SFZ2A_A_WWLRYU_KICK_PORTRAIT_PALETTES[] =
{
    { L"Ryu (WW) Portrait", 0x1b082, 0x1b0e2, indexCPS2Sprites_SFA2Portraits, 0x00 },
};

const sDescTreeNode SFZ2A_A_WWRYU_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWRYU_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWRYU_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWLRYU_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWLRYU_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWCHUNLI_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (WW) Portrait", 0x1b262, 0x1b2c2, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sGame_PaletteDataset SFZ2A_A_WWCHUNLI_KICK_PORTRAIT_PALETTES[] =
{
    { L"Chun-Li (WW) Portrait", 0x1b2c2, 0x1b322, indexCPS2Sprites_SFA2Portraits, 0x1c },
};

const sDescTreeNode SFZ2A_A_WWCHUNLI_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWCHUNLI_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWCHUNLI_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWCHUNLI_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWCHUNLI_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWKEN_PUNCH_PORTRAIT_PALETTES[] =
{
   { L"Ken (WW) Portrait", 0x1ade2, 0x1ae42, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sGame_PaletteDataset SFZ2A_A_WWKEN_KICK_PORTRAIT_PALETTES[] =
{
    { L"Ken (WW) Portrait", 0x1ae42, 0x1aea2, indexCPS2Sprites_SFA2Portraits, 0x27 },
};

const sDescTreeNode SFZ2A_A_WWKEN_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWKEN_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWKEN_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWKEN_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWKEN_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x1a4e2, 0x1a542, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_KICK_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x1a542, 0x1a5a2, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x1a5a2, 0x1a602, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x1a602, 0x1a662, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x1a662, 0x1a6c2, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sGame_PaletteDataset SFZ2A_A_WWDHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Dhalsim (WW) Portrait", 0x1a6c2, 0x1a722, indexCPS2Sprites_SFA2Portraits, 0x25 },
};

const sDescTreeNode SFZ2A_A_WWDHALSIM_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWDHALSIM_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Zangief (WW) Portrait", 0x1a2a2, 0x1a302, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_KICK_PORTRAIT_PALETTES[] =
{
     { L"Zangief (WW) Portrait", 0x1a302, 0x1a362, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Zangief (WW) Portrait", 0x1a362, 0x1a3c2, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Zangief (WW) Portrait", 0x1a3c2, 0x1a422, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Zangief (WW) Portrait", 0x1a422, 0x1a482, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sGame_PaletteDataset SFZ2A_A_WWZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Zangief (WW) Portrait",  0x1a482, 0x1a4e2, indexCPS2Sprites_SFA2Portraits, 0x01 },
};

const sDescTreeNode SFZ2A_A_WWZANGIEF_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWZANGIEF_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWSAGAT_PUNCH_PORTRAIT_PALETTES[] =
{
     { L"Sagat (WW) Portrait", 0x1aba2, 0x1ac02, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sGame_PaletteDataset SFZ2A_A_WWSAGAT_KICK_PORTRAIT_PALETTES[] =
{
    { L"Sagat (WW) Portrait", 0x1ac02, 0x1ac62, indexCPS2Sprites_SFA2Portraits, 0x42 },
};

const sDescTreeNode SFZ2A_A_WWSAGAT_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWSAGAT_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWSAGAT_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWSAGAT_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWSAGAT_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_WWMBISON_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"M.Bison (WW) Portrait", 0x1a962, 0x1a9c2, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sGame_PaletteDataset SFZ2A_A_WWMBISON_KICK_PORTRAIT_PALETTES[] =
{
    { L"M.Bison (WW) Portrait", 0x1a9c2, 0x1aa22, indexCPS2Sprites_SFA2Portraits, 0x26 },
};

const sDescTreeNode SFZ2A_A_WWMBISON_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWMBISON_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWMBISON_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWMBISON_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_WWMBISON_KICK_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_PUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sakura (Alt) Portrait", 0x1b4a2, 0x1b502, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_KICK_PORTRAIT_PALETTES[] =
{
    { L"Sakura (Alt) Portrait", 0x1b502, 0x1b562, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_2PUNCHES_PORTRAIT_PALETTES[] =
{
    { L"Sakura (Alt) Portrait", 0x1b562, 0x1b5c2, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_2KICKS_PORTRAIT_PALETTES[] =
{
    { L"Sakura (Alt) Portrait", 0x1b5c2, 0x1b622, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES[] =
{
    { L"Sakura (Alt) Portrait", 0x1b622, 0x1b682, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sGame_PaletteDataset SFZ2A_A_ALTSAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES[] =
{
    { L"Sakura (Alt) Portrait", 0x1b682, 0x1b6e2, indexCPS2Sprites_SFA2Portraits, 0x22 },
};

const sDescTreeNode SFZ2A_A_ALTSAKURA_PORTRAIT_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_PUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_PUNCH_PORTRAIT_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_KICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_KICK_PORTRAIT_PALETTES) },
    { L"2 Punches", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_2PUNCHES_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_2PUNCHES_PORTRAIT_PALETTES) },
    { L"2 Kicks", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_2KICKS_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_2KICKS_PORTRAIT_PALETTES) },
    { L"Auto Guard Punch", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_AUTOGUARDPUNCH_PORTRAIT_PALETTES) },
    { L"Auto Guard Kick", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES, ARRAYSIZE(SFZ2A_A_ALTSAKURA_AUTOGUARDKICK_PORTRAIT_PALETTES) },
};

#pragma endregion

#define k_pszUnitName_AltSakura         L"Sakura (Alt)"
#define k_pszUnitName_Stages07          L"Stages (ROM07 Parts)"
#define k_pszUnitName_Stages08          L"Stages (ROM08 Parts)"
// Note that the name is undifferentiated for now
#define k_pszUnitName_Bonus08           L"Bonus Palettes"
#define k_pszUnitName_EvilRyu_Rev2      L"Evil Ryu (US Only)"
#define k_pszUnitName_EvilRyu_SFZ2A     L"Evil Ryu"
#define k_pszUnitName_WWMBison          L"M. Bison (WW)"
#define k_pszUnitName_WWChunLi          L"Chun-Li (WW)"
#define k_pszUnitName_WWDhalsim         L"Dhalsim (WW)"
#define k_pszUnitName_WWKen             L"Ken (WW)"
#define k_pszUnitName_WWRyu             L"Ryu (WW)"
#define k_pszUnitName_WWSagat           L"Sagat (WW)"
#define k_pszUnitName_WWZangief         L"Zangief (WW)"

const sDescTreeNode SFA2_A_STATUSEFFECTS_COLLECTION_REV1[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_RYU_STATUS_PALETTES) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_KEN_STATUS_PALETTES) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_STATUS_PALETTES) },
    { L"Charlie", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_STATUS_PALETTES) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_STATUS_PALETTES) },
    { L"Adon", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ADON_STATUS_PALETTES) },
    { L"Sodom", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SODOM_STATUS_PALETTES) },
    { L"Guy", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GUY_STATUS_PALETTES) },
    { L"Birdie", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_STATUS_PALETTES) },
    { L"Rose", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROSE_STATUS_PALETTES) },
    { L"M.Bison", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_MBISON_STATUS_PALETTES) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_STATUS_PALETTES) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DAN_STATUS_PALETTES) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_STATUS_PALETTES) },
    { L"Rolento", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_STATUS_PALETTES) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_STATUS_PALETTES) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_STATUS_PALETTES) },
    { L"Gen", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GEN_STATUS_PALETTES) },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES) },
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_STATUSEFFECTS_COLLECTION_REV2[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_RYU_STATUS_PALETTES) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_KEN_STATUS_PALETTES) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_STATUS_PALETTES) },
    { L"Charlie", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_STATUS_PALETTES) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_STATUS_PALETTES) },
    { L"Adon", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ADON_STATUS_PALETTES) },
    { L"Sodom", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SODOM_STATUS_PALETTES) },
    { L"Guy", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GUY_STATUS_PALETTES) },
    { L"Birdie", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_STATUS_PALETTES) },
    { L"Rose", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROSE_STATUS_PALETTES) },
    { L"M.Bison", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_MBISON_STATUS_PALETTES) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_STATUS_PALETTES) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DAN_STATUS_PALETTES) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_STATUS_PALETTES) },
    { L"Rolento", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_STATUS_PALETTES) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_STATUS_PALETTES) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_STATUS_PALETTES) },
    { L"Gen", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GEN_STATUS_PALETTES) },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES) },
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_STATUS_PALETTES) },
    { k_pszUnitName_WWDhalsim, DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_STATUS_PALETTES) },
    { k_pszUnitName_WWZangief, DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_STATUS_PALETTES) },
    { k_pszUnitName_EvilRyu_Rev2, DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_STATUSEFFECTS_COLLECTION_SFZ2A[] =
{
    { L"Ryu", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_RYU_STATUS_PALETTES) },
    { L"Ken", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_KEN_STATUS_PALETTES) },
    { L"Akuma", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_AKUMA_STATUS_PALETTES) },
    { L"Charlie", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHARLIE_STATUS_PALETTES) },
    { L"Chun-Li", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLI_STATUS_PALETTES) },
    { L"Adon", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ADON_STATUS_PALETTES) },
    { L"Sodom", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SODOM_STATUS_PALETTES) },
    { L"Guy", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GUY_STATUS_PALETTES) },
    { L"Birdie", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_BIRDIE_STATUS_PALETTES) },
    { L"Rose", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROSE_STATUS_PALETTES) },
    { L"M.Bison", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_MBISON_STATUS_PALETTES) },
    { L"Sagat", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAGAT_STATUS_PALETTES) },
    { L"Dan", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DAN_STATUS_PALETTES) },
    { L"Sakura", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_SAKURA_STATUS_PALETTES) },
    { L"Rolento", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ROLENTO_STATUS_PALETTES) },
    { L"Dhalsim", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_DHALSIM_STATUS_PALETTES) },
    { L"Zangief", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ZANGIEF_STATUS_PALETTES) },
    { L"Gen", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GEN_STATUS_PALETTES) },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_STATUS_PALETTES) },
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_STATUS_PALETTES, ARRAYSIZE(SFA2_A_GENCRANESTANCE_STATUS_PALETTES) },
    { k_pszUnitName_WWDhalsim, DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWDHALSIM_STATUS_PALETTES) },
    { k_pszUnitName_WWZangief, DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWZANGIEF_STATUS_PALETTES) },
    { k_pszUnitName_WWRyu, DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWRYU_STATUS_PALETTES) },
    { k_pszUnitName_WWKen, DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWKEN_STATUS_PALETTES) },
    { k_pszUnitName_WWChunLi, DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWCHUNLI_STATUS_PALETTES) },
    { k_pszUnitName_WWMBison, DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWMBISON_STATUS_PALETTES) },
    { k_pszUnitName_WWSagat, DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_STATUS_PALETTES, ARRAYSIZE(SFA2_A_WWSAGAT_STATUS_PALETTES) },
    { k_pszUnitName_EvilRyu_SFZ2A, DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_STATUS_PALETTES, ARRAYSIZE(SFA2_A_EVILRYU_STATUS_PALETTES) },
    { k_pszUnitName_AltSakura, DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_STATUS_PALETTES, ARRAYSIZE(SFA2_A_ALTSAKURA_STATUS_PALETTES) },
};

const sDescTreeNode SFA2_A_UNITS_07_REV1[] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { L"Akuma",           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { L"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { L"Gen",             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
    // Crane Stance Gen isn't really loadable, per Jed
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION, ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION) },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION) },
    { L"Rolento",         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION) },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION) },
    { L"Sakura",          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION) },
    { L"Sodom",           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION) },
    { L"Shin Akuma",      DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMAREV1_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMAREV1_COLLECTION) },
    { L"Status Effects",      DESC_NODETYPE_TREE, (void*)SFA2_A_STATUSEFFECTS_COLLECTION_REV1, ARRAYSIZE(SFA2_A_STATUSEFFECTS_COLLECTION_REV1) },
    { k_pszUnitName_Stages07, DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV1_COLLECTION, ARRAYSIZE(SFA2_A_STAGES07_REV1_COLLECTION) },
    { L"Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07REV1_COLLECTION,   ARRAYSIZE(SFA2_A_BONUS07REV1_COLLECTION)},
};

// Rev2 adds DhalsimWW, Evil Ryu, and ZangiefWW
const sDescTreeNode SFA2_A_UNITS_07_REV2[] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { L"Akuma",           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { L"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { k_pszUnitName_WWDhalsim,    DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_COLLECTION,     ARRAYSIZE(SFA2_A_WWDHALSIM_COLLECTION) },
    { L"Gen",             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
    // Crane Stance Gen isn't really loadable, per Jed
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION, ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION) },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION) },
    { L"Rolento",         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION) },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION) },
    { k_pszUnitName_EvilRyu_Rev2, DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_REV2_COLLECTION, ARRAYSIZE(SFA2_A_EVILRYU_REV2_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION) },
    { L"Sakura",          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION) },
    { L"Sodom",           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION) },
    { k_pszUnitName_WWZangief,    DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_COLLECTION,     ARRAYSIZE(SFA2_A_WWZANGIEF_COLLECTION) },
    { L"Status Effects",      DESC_NODETYPE_TREE, (void*)SFA2_A_STATUSEFFECTS_COLLECTION_REV2, ARRAYSIZE(SFA2_A_STATUSEFFECTS_COLLECTION_REV2) },
    { k_pszUnitName_Stages07,     DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_COLLECTION, ARRAYSIZE(SFA2_A_STAGES07_REV2_COLLECTION) },
    { L"Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07REV2_COLLECTION,   ARRAYSIZE(SFA2_A_BONUS07REV2_COLLECTION) },
};

// Z2 adds ChunLiWW, KenWW, MBisonWW, RyuWW, SagatWW, and SakuraAlt
const sDescTreeNode SFZ2A_A_UNITS_07[] =
{
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION) },
    { L"Akuma",           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION) },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION) },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION) },
    { L"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION) },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION) },
    { k_pszUnitName_WWChunLi,    DESC_NODETYPE_TREE, (void*)SFA2_A_WWCHUNLI_COLLECTION,      ARRAYSIZE(SFA2_A_WWCHUNLI_COLLECTION) },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION) },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION) },
    { k_pszUnitName_WWDhalsim,    DESC_NODETYPE_TREE, (void*)SFA2_A_WWDHALSIM_COLLECTION,     ARRAYSIZE(SFA2_A_WWDHALSIM_COLLECTION) },
    { L"Gen",             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION) },
    // Crane Stance Gen isn't really loadable, per Jed
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION, ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION) },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION) },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION) },
    { k_pszUnitName_WWKen,        DESC_NODETYPE_TREE, (void*)SFA2_A_WWKEN_COLLECTION,         ARRAYSIZE(SFA2_A_WWKEN_COLLECTION) },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION) },
    { k_pszUnitName_WWMBison,   DESC_NODETYPE_TREE, (void*)SFA2_A_WWMBISON_COLLECTION,      ARRAYSIZE(SFA2_A_WWMBISON_COLLECTION) },
    { L"Rolento",         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION) },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION) },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION) },
    { k_pszUnitName_WWRyu,        DESC_NODETYPE_TREE, (void*)SFA2_A_WWRYU_COLLECTION,         ARRAYSIZE(SFA2_A_WWRYU_COLLECTION) },
    { k_pszUnitName_EvilRyu_SFZ2A,        DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_COLLECTION,       ARRAYSIZE(SFA2_A_EVILRYU_COLLECTION) },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION) },
    { k_pszUnitName_WWSagat,      DESC_NODETYPE_TREE, (void*)SFA2_A_WWSAGAT_COLLECTION,       ARRAYSIZE(SFA2_A_WWSAGAT_COLLECTION) },
    { L"Sakura",          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION) },
    { k_pszUnitName_AltSakura, DESC_NODETYPE_TREE, (void*)SFA2_A_ALTSAKURA_COLLECTION,     ARRAYSIZE(SFA2_A_ALTSAKURA_COLLECTION) },
    { L"Sodom",           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION) },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION) },
    { k_pszUnitName_WWZangief,    DESC_NODETYPE_TREE, (void*)SFA2_A_WWZANGIEF_COLLECTION,     ARRAYSIZE(SFA2_A_WWZANGIEF_COLLECTION) },
    { L"Status Effects",      DESC_NODETYPE_TREE, (void*)SFA2_A_STATUSEFFECTS_COLLECTION_SFZ2A, ARRAYSIZE(SFA2_A_STATUSEFFECTS_COLLECTION_SFZ2A) },
    // EX/WW versions of Ryu, Ken, Chun-Li, Sagat, M.Bison at this point for SFZ2A
    { L"Bonus Palettes",  DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07ForSFZ2A_COLLECTION,   ARRAYSIZE(SFA2_A_BONUS07ForSFZ2A_COLLECTION) },
};

const sDescTreeNode SFA2_A_UNITS_08_REV1[] =
{
    { L"Boss: Shin Akuma",  DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION) },
    { L"Akuma Extras",      DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION) },
    { L"Birdie Extras",     DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION) },
    { L"Dhalsim Extras",    DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION) },
    { L"M.Bison Extras",    DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION) },
    { L"Rose Extras",       DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION) },
    { L"Dan Extras",        DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION) },

    { L"Adon Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION) },
    { L"Akuma Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION) },
    { L"Birdie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION) },
    { L"Charlie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION) },
    { L"Chun-Li Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Chun-Li (Original) Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION) },
    { L"Dan Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION) },
    { L"Dhalsim Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"Gen Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION) },
    { L"Guy Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION) },
    { L"Ken Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION) },
    { L"M.Bison Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Rolento Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION) },
    { L"Rose Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION) },
    { L"Ryu Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION) },
    { L"Sagat Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION) },
    { L"Sakura Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION) },
    { L"Sodom Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION) },
    { L"Zangief Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION) },

    { k_pszUnitName_Stages08, DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_COLLECTION, ARRAYSIZE(SFA2_A_STAGES08_REV1_COLLECTION) },
    { k_pszUnitName_Bonus08,    DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08REV1_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08REV1_COLLECTION) },
};

const sDescTreeNode SFA2_A_UNITS_08_REV2[] =
{
    { L"Boss: Shin Akuma",  DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION) },
    { L"Boss: Evil Ryu Extras (US ROM only!)",  DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_EVILRYU_MOVE_COLLECTION) },
    { L"Akuma Extras",       DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION) },
    { L"Birdie Extras",      DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION) },
    { L"Dhalsim Extras",     DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION) },
    { L"M.Bison Extras",     DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION) },
    { L"Rose Extras",        DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION) },
    { L"Dan Extras",         DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION) },

    { L"Adon Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION) },
    { L"Akuma Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION) },
    { L"Birdie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION) },
    { L"Charlie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION) },
    { L"Chun-Li Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Chun-Li (Original) Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION) },
    { L"Dan Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION) },
    { L"Dhalsim Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"Gen Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION) },
    { L"Guy Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION) },
    { L"Ken Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION) },
    { L"M.Bison Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Rolento Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION) },
    { L"Rose Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION) },
    { L"Ryu Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION) },
    { L"Sagat Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION) },
    { L"Sakura Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION) },
    { L"Sodom Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION) },
    { L"Zangief Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION) },

    { L"Shin Akuma Portraits",   DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_SHINAKUMA_PORTRAIT_COLLECTION,   ARRAYSIZE(SFA2_A_REV2_SHINAKUMA_PORTRAIT_COLLECTION) },
    { L"Evil Ryu Portraits",     DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_EVILRYU_PORTRAIT_COLLECTION,     ARRAYSIZE(SFA2_A_REV2_EVILRYU_PORTRAIT_COLLECTION) },
    { L"Dhalsim (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWDHALSIM_PORTRAIT_COLLECTION,   ARRAYSIZE(SFA2_A_REV2_WWDHALSIM_PORTRAIT_COLLECTION) },
    { L"Zangief (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_REV2_WWZANGIEF_PORTRAIT_COLLECTION,   ARRAYSIZE(SFA2_A_REV2_WWZANGIEF_PORTRAIT_COLLECTION) },
    
    { L"Stages (ROM08 Parts)",  DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_COLLECTION, ARRAYSIZE(SFA2_A_STAGES08_REV2_COLLECTION) },
    { L"Bonus Palettes",        DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08REV2_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08REV2_COLLECTION) },
};

const sDescTreeNode SFZ2A_A_UNITS_08[] =
{
    { L"Boss: Shin Akuma",   DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_FULL_MOVE_COLLECTION, ARRAYSIZE(SFZ2A_A_SHINAKUMA_FULL_MOVE_COLLECTION) },
    { L"Boss: Evil Ryu",     DESC_NODETYPE_TREE, (void*)SFA2_A_EVILRYU_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_EVILRYU_MOVE_COLLECTION) },
    { L"Akuma Extras",       DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION) },
    { L"Birdie Extras",      DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION) },
    { L"Dhalsim Extras",     DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION) },
    { L"M.Bison Extras",     DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION) },
    { L"Rose Extras",        DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION) },
    { L"Dan Extras",         DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION) },

    { L"Adon Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION) },
    { L"Akuma Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION) },
    { L"Birdie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION) },
    { L"Charlie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION) },
    { L"Chun-Li Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION) },
    { L"Chun-Li (Original) Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION) },
    { L"Dan Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION) },
    { L"Dhalsim Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION) },
    { L"Gen Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION) },
    { L"Guy Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION) },
    { L"Ken Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION) },
    { L"M.Bison Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION) },
    { L"Rolento Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION) },
    { L"Rose Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION) },
    { L"Ryu Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION) },
    { L"Sagat Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION) },
    { L"Sakura Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION) },
    { L"Sodom Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION) },
    { L"Zangief Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION) },

    { L"Shin Akuma Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_SHINAKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_SHINAKUMA_PORTRAIT_COLLECTION) },
    { L"Evil Ryu Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_EVILRYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_EVILRYU_PORTRAIT_COLLECTION) },
    { L"Ryu (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWRYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWRYU_PORTRAIT_COLLECTION) },
    { L"Chun-Li (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWCHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWCHUNLI_PORTRAIT_COLLECTION) },
    { L"Ken (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWKEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWKEN_PORTRAIT_COLLECTION) },
    { L"Dhalsim (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWDHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWDHALSIM_PORTRAIT_COLLECTION) },
    { L"Zangief (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWZANGIEF_PORTRAIT_COLLECTION) },
    { L"Sagat (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWSAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWSAGAT_PORTRAIT_COLLECTION) },
    { L"M. Bison (WW) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_WWMBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_WWMBISON_PORTRAIT_COLLECTION) },
    { L"Sakura (Alt) Portraits", DESC_NODETYPE_TREE, (void*)SFZ2A_A_ALTSAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFZ2A_A_ALTSAKURA_PORTRAIT_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08ForSFZ2A_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08ForSFZ2A_COLLECTION) },
    //{ L"Stages",                DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV1_COLLECTION, ARRAYSIZE(SFA2_A_STAGES08_REV1_COLLECTION) },
};

const sDescTreeNode SFA2_STEAM_UNITS_REV1_MONO[] =
{
    // ROM 07 stuff
    { L"Adon",            DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_COLLECTION,          ARRAYSIZE(SFA2_A_ADON_COLLECTION), 0x4c6783c },
    { L"Akuma",           DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_COLLECTION,         ARRAYSIZE(SFA2_A_AKUMA_COLLECTION), 0x4c6783c },
    { L"Birdie",          DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA2_A_BIRDIE_COLLECTION), 0x4c6783c },
    { L"Charlie",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA2_A_CHARLIE_COLLECTION), 0x4c6783c },
    { L"Chun-Li",         DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA2_A_CHUNLI_COLLECTION), 0x4c6783c },
    { L"Chun-Li (Original)", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_COLLECTION), 0x4c6783c },
    { L"Dan",             DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_COLLECTION,           ARRAYSIZE(SFA2_A_DAN_COLLECTION), 0x4c6783c },
    { L"Dhalsim",         DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA2_A_DHALSIM_COLLECTION), 0x4c6783c },
    { L"Gen",             DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_COLLECTION,           ARRAYSIZE(SFA2_A_GEN_COLLECTION), 0x4c6783c },
    // Crane Stance Gen isn't really loadable, per Jed
    { L"Gen (Crane Stance)", DESC_NODETYPE_TREE, (void*)SFA2_A_GENCRANESTANCE_COLLECTION, ARRAYSIZE(SFA2_A_GENCRANESTANCE_COLLECTION), 0x4c6783c },
    { L"Guy",             DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_COLLECTION,           ARRAYSIZE(SFA2_A_GUY_COLLECTION), 0x4c6783c },
    { L"Ken",             DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_COLLECTION,           ARRAYSIZE(SFA2_A_KEN_COLLECTION), 0x4c6783c },
    { L"M. Bison",        DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_COLLECTION,        ARRAYSIZE(SFA2_A_MBISON_COLLECTION), 0x4c6783c },
    { L"Rolento",         DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA2_A_ROLENTO_COLLECTION), 0x4c6783c },
    { L"Rose",            DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_COLLECTION,          ARRAYSIZE(SFA2_A_ROSE_COLLECTION), 0x4c6783c },
    { L"Ryu",             DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_COLLECTION,           ARRAYSIZE(SFA2_A_RYU_COLLECTION), 0x4c6783c },
    { L"Sagat",           DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA2_A_SAGAT_COLLECTION), 0x4c6783c },
    { L"Sakura",          DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA2_A_SAKURA_COLLECTION), 0x4c6783c },
    { L"Sodom",           DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_COLLECTION,         ARRAYSIZE(SFA2_A_SODOM_COLLECTION), 0x4c6783c },
    { L"Zangief",         DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA2_A_ZANGIEF_COLLECTION), 0x4c6783c },
    { L"Shin Akuma",      DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMAREV1_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMAREV1_COLLECTION), 0x4c6783c },

    { L"Status Effects",      DESC_NODETYPE_TREE, (void*)SFA2_A_STATUSEFFECTS_COLLECTION_REV1, ARRAYSIZE(SFA2_A_STATUSEFFECTS_COLLECTION_REV1), 0x4c6869c },

    // ROM 08 stuff
    { L"Boss: Shin Akuma",  DESC_NODETYPE_TREE, (void*)SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_SHINAKUMA_PARTIAL_MOVE_COLLECTION), 0x4CE8A1C },
    { L"Akuma Extras",      DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_MOVE_COLLECTION), 0x4CE8A1C },
    { L"Birdie Extras",     DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_MOVE_COLLECTION), 0x4CE8A1C },
    { L"Dhalsim Extras",    DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_MOVE_COLLECTION), 0x4CE8A1C },
    { L"M.Bison Extras",    DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_MOVE_COLLECTION), 0x4CE8A1C },
    { L"Rose Extras",       DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_MOVE_COLLECTION), 0x4CE8A1C },
    { L"Dan Extras",        DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_MOVE_COLLECTION, ARRAYSIZE(SFA2_A_DAN_MOVE_COLLECTION), 0x4CE8A1C },

    { L"Adon Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ADON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ADON_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Akuma Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_AKUMA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_AKUMA_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Birdie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_BIRDIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_BIRDIE_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Charlie Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHARLIE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHARLIE_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Chun-Li Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLI_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLI_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Chun-Li (Original) Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_CHUNLIORIGINAL_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Dan Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DAN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DAN_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Dhalsim Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_DHALSIM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_DHALSIM_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Gen Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GEN_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Guy Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_GUY_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_GUY_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Ken Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_KEN_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_KEN_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"M.Bison Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_MBISON_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_MBISON_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Rolento Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROLENTO_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROLENTO_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Rose Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ROSE_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ROSE_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Ryu Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_RYU_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_RYU_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Sagat Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAGAT_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAGAT_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Sakura Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SAKURA_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SAKURA_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Sodom Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_SODOM_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_SODOM_PORTRAIT_COLLECTION), 0x4CE8A1C },
    { L"Zangief Portraits", DESC_NODETYPE_TREE, (void*)SFA2_A_ZANGIEF_PORTRAIT_COLLECTION, ARRAYSIZE(SFA2_A_ZANGIEF_PORTRAIT_COLLECTION), 0x4CE8A1C },

    { L"ROM 07 Stages",             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES07_REV2_COLLECTION, ARRAYSIZE(SFA2_A_STAGES07_REV2_COLLECTION), 0x4C68A1C },
    { L"ROM 08 Stages",             DESC_NODETYPE_TREE, (void*)SFA2_A_STAGES08_REV2_COLLECTION, ARRAYSIZE(SFA2_A_STAGES08_REV2_COLLECTION), 0x4CE8A1C },

    { L"ROM 07 Bonus Palettes",     DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS07REV2_COLLECTION,   ARRAYSIZE(SFA2_A_BONUS07REV2_COLLECTION), 0x4C6869C },
    { L"ROM 08 Bonus Palettes",     DESC_NODETYPE_TREE, (void*)SFA2_A_BONUS08REV2_COLLECTION, ARRAYSIZE(SFA2_A_BONUS08REV2_COLLECTION), 0x4CE8A1C },
};
