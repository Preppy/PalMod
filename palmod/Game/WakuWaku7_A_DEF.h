#pragma once

// ROM sort order is:
// Rai
// Arina
// Slash
// Dandy-J
// Tesse
// Mauru
// Politank
// Fernandeath (Fernandez in the US)
// Bonus-Kun

const std::vector<uint16_t> WAKUWAKU7_A_IMGIDS_USED =
{
    indexWakuWaku7Sprites_Arina,
    indexWakuWaku7Sprites_DandyJ,
    indexWakuWaku7Sprites_BonusKun,
    indexWakuWaku7Sprites_Fernandeath,
    indexWakuWaku7Sprites_Mauru,
    indexWakuWaku7Sprites_Politank,
    indexWakuWaku7Sprites_Rai,
    indexWakuWaku7Sprites_Slash,
    indexWakuWaku7Sprites_Tesse,
};

const sGame_PaletteDataset WakuWaku7_A_RAI_A_PALETTES[] =
{
    { L"Rai A", 0xc8d8, 0xc8f8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai A Flashing", 0xc978, 0xc998, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai A Burned 1", 0xcad8, 0xcaf8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai A Burned 2", 0xcb78, 0xcb98, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai A Poisoned 1", 0xcc58, 0xcc78, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai A Poisoned 2", 0xccf8, 0xcd18, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai A White Flash", 0xce78, 0xce98, indexWakuWaku7Sprites_Rai, 0x00 },

    { L"Rai A SEL Portrait", 0x11558, 0x115B8, indexWakuWaku7Sprites_Rai, 0x10 },
    { L"Rai A HUD Portrait", 0x176D8, 0x176F8, indexWakuWaku7Sprites_Rai, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_RAI_B_PALETTES[] =
{
    { L"Rai B", 0xc8f8, 0xc918, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai B Flashing", 0xc998, 0xc9b8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai B Burned 1", 0xcaf8, 0xcb18, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai B Burned 2", 0xcb98, 0xcbb8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai B Poisoned 1", 0xcc78, 0xcc98, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai B Poisoned 2", 0xcd18, 0xcd38, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai B White Flash", 0xce98, 0xceb8, indexWakuWaku7Sprites_Rai, 0x00 },

    { L"Rai B SEL Portrait", 0x115B8, 0x11618, indexWakuWaku7Sprites_Rai, 0x10 },
    { L"Rai B HUD Portrait", 0x176F8, 0x17718, indexWakuWaku7Sprites_Rai, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_RAI_C_PALETTES[] =
{
    { L"Rai C", 0xc918, 0xc938, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai C Flashing", 0xc9b8, 0xc9d8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai C Burned 1", 0xcb18, 0xcb38, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai C Burned 2", 0xcbb8, 0xcbd8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai C Poisoned 1", 0xcc98, 0xccb8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai C Poisoned 2", 0xcd38, 0xcd58, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai C White Flash", 0xceb8, 0xced8, indexWakuWaku7Sprites_Rai, 0x00 },

    { L"Rai C SEL Portrait", 0x11618, 0x11678, indexWakuWaku7Sprites_Rai, 0x10 },
    { L"Rai C HUD Portrait", 0x17718, 0x17738, indexWakuWaku7Sprites_Rai, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_RAI_D_PALETTES[] =
{
    { L"Rai D", 0xc938, 0xc958, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai D Flashing", 0xc9d8, 0xc9f8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai D Burned 1", 0xcb38, 0xcb58, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai D Burned 2", 0xcbd8, 0xcbf8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai D Poisoned 1", 0xccb8, 0xccd8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai D Poisoned 2", 0xcd58, 0xcd78, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai D White Flash", 0xced8, 0xcef8, indexWakuWaku7Sprites_Rai, 0x00 },

    { L"Rai D SEL Portrait", 0x11678, 0x116D8, indexWakuWaku7Sprites_Rai, 0x10 },
    { L"Rai D HUD Portrait", 0x17738, 0x17758, indexWakuWaku7Sprites_Rai, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_RAI_DARK_PALETTES[] =
{
    { L"Rai Dark", 0xc958, 0xc978, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Dark Flashing", 0xc9f8, 0xca18, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Dark Burned 1", 0xcb58, 0xcb78, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Dark Burned 2", 0xcbf8, 0xcc18, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Dark Poisoned 1", 0xccd8, 0xccf8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Dark Poisoned 2", 0xcd78, 0xcd98, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Dark White Flash", 0xcef8, 0xcf18, indexWakuWaku7Sprites_Rai, 0x00 },

    { L"Rai Dark SEL Portrait", 0x116D8, 0x11738, indexWakuWaku7Sprites_Rai, 0x10 },
    { L"Rai Dark HUD Portrait", 0x17758, 0x17778, indexWakuWaku7Sprites_Rai, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_RAI_BONUS_PALETTES[] =
{
    { L"Rai Projectiles", 0xD1B8, 0xD1F8 },

    { L"Fire Effects 1", 0xca98, 0xcab8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Fire Effects 2", 0xcab8, 0xcad8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Electric 1", 0xcc18, 0xcc38, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Electric 2", 0xcc38, 0xcc58, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Super Charge 1", 0xca18, 0xca38, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Super Charge 2", 0xca38, 0xca58, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Super Charge 3", 0xca58, 0xca78, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Super Charge 4", 0xca78, 0xca98, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 1", 0xcd98, 0xcdb8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 2", 0xcdb8, 0xcdd8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 3", 0xcdd8, 0xcdf8, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 4", 0xcdf8, 0xce18, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 5", 0xce18, 0xce38, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 6", 0xce38, 0xce58, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Doki Doki Flash 7", 0xce58, 0xce78, indexWakuWaku7Sprites_Rai, 0x00 },
    { L"Rai Extras 1", 0xcf98, 0xd038 },
    { L"Rai Extras 2", 0xd038, 0xd0d8 },
    { L"Rai Extras 3", 0xd178, 0xd1b8 },
};

const sGame_PaletteDataset WakuWaku7_A_ARINA_A_PALETTES[] =
{
    { L"Arina A", 0xd1f8, 0xd218, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina A Burned", 0xd438, 0xd458, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina A Poisoned", 0xd4f8, 0xd518, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina A White Flash", 0xd578, 0xd598, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina A SEL Portrait", 0x11BD8, 0x11C18, indexWakuWaku7Sprites_Arina, 0x10 },
    { L"Arina A HUD Portrait", 0x17778, 0x17798, indexWakuWaku7Sprites_Arina, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_ARINA_B_PALETTES[] =
{
    { L"Arina B", 0xd218, 0xd238, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina B Burned", 0xd458, 0xd478, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina B Poisoned", 0xd518, 0xd538, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina B White Flash", 0xd598, 0xd5b8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina B SEL Portrait", 0x11C18, 0x11C58, indexWakuWaku7Sprites_Arina, 0x10 },
    { L"Arina B HUD Portrait", 0x17798, 0x177B8, indexWakuWaku7Sprites_Arina, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_ARINA_C_PALETTES[] =
{
    { L"Arina C", 0xd238, 0xd258, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina C Burned", 0xd478, 0xd498, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina C Poisoned", 0xd538, 0xd558, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina C White Flash", 0xd5b8, 0xd5d8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina C SEL Portrait", 0x11C58, 0x11C98, indexWakuWaku7Sprites_Arina, 0x10 },
    { L"Arina C HUD Portrait", 0x177B8, 0x177D8, indexWakuWaku7Sprites_Arina, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_ARINA_D_PALETTES[] =
{
    { L"Arina D", 0xd258, 0xd278, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina D Burned", 0xd498, 0xd4b8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina D Poisoned", 0xd558, 0xd578, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina D White Flash", 0xd5d8, 0xd5f8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina D SEL Portrait", 0x11C98, 0x11CD8, indexWakuWaku7Sprites_Arina, 0x10 },
    { L"Arina D HUD Portrait", 0x177D8, 0x177F8, indexWakuWaku7Sprites_Arina, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_ARINA_DARK_PALETTES[] =
{
    { L"Arina Dark", 0xd5f8, 0xd618, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina Dark Burned", 0xd618, 0xd638, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina Dark Poisoned", 0xd638, 0xd658, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina Dark White Flash", 0xd658, 0xd678, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina Dark SEL Portrait", 0x11CD8, 0x11D18, indexWakuWaku7Sprites_Arina, 0x10 },
    { L"Arina Dark HUD Portrait", 0x177F8, 0x17818, indexWakuWaku7Sprites_Arina, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_ARINA_BONUS_PALETTES[] =
{
    { L"Fire Effects 1", 0xd3f8, 0xd418, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Fire Effects 2", 0xd418, 0xd438, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Electric 1", 0xd4b8, 0xd4d8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Electric 2", 0xd4d8, 0xd4f8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Super Charge 1", 0xd378, 0xd398, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Super Charge 2", 0xd398, 0xd3b8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Super Charge 3", 0xd3b8, 0xd3d8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Super Charge 4", 0xd3d8, 0xd3f8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 1", 0xd298, 0xd2b8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 2", 0xd2b8, 0xd2d8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 3", 0xd2d8, 0xd2f8, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 4", 0xd2f8, 0xd318, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 5", 0xd318, 0xd338, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 6", 0xd338, 0xd358, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Doki Doki 7", 0xd358, 0xd378, indexWakuWaku7Sprites_Arina, 0x00 },
    { L"Arina Friends", 0xd6f8, 0xd758, indexWakuWaku7Sprites_Arina, 0x02 },
    { L"Arina Beam 1", 0xd758, 0xd778, indexWakuWaku7Sprites_Arina, 0x01 },
    { L"Arina Beam 2", 0xd778, 0xd798, indexWakuWaku7Sprites_Arina, 0x01 },
    { L"Arina Beam 3", 0xd798, 0xd7b8, indexWakuWaku7Sprites_Arina, 0x01 },
    { L"Arina Beam 4", 0xd678, 0xd698, indexWakuWaku7Sprites_Arina, 0x01 },
    { L"EX Arina Beam", 0xd698, 0xd6b8, indexWakuWaku7Sprites_Arina, 0x05 },
    { L"Arina Special 1", 0xd7d8, 0xd7f8, indexWakuWaku7Sprites_Arina, 0x03 },
    { L"Arina Special 2", 0xd278, 0xd298, indexWakuWaku7Sprites_Arina, 0x04 },
    { L"Super Charge Effect", 0xd6b8, 0xd6d8, indexWakuWaku7Sprites_Arina, 0x06 },
    { L"Unused", 0xd858, 0xd878 },
};

const sGame_PaletteDataset WakuWaku7_A_DANDYJ_A_PALETTES[] =
{
    { L"Dandy-J A", 0xe078, 0xe098, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo A", 0xe4f8, 0xe518, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy-J A Burned", 0xe2b8, 0xe2d8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J A Poisoned", 0xe378, 0xe398, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J A White Flash", 0xe3f8, 0xe418, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo White Flash A", 0xe598, 0xe5b8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy J A SEL Portrait", 0x117F8, 0x11818, indexWakuWaku7Sprites_DandyJ, 0x10 },
    { L"Dandy J A HUD Portrait", 0x17978, 0x17998, indexWakuWaku7Sprites_DandyJ, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_DANDYJ_B_PALETTES[] =
{
    { L"Dandy-J B", 0xe098, 0xe0b8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo B", 0xe518, 0xe538, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy-J B Burned", 0xe2d8, 0xe2f8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J B Poisoned", 0xe398, 0xe3b8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J B White Flash", 0xe418, 0xe438, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo White Flash B", 0xe5b8, 0xe5d8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy J B SEL Portrait", 0x11818, 0x11838, indexWakuWaku7Sprites_DandyJ, 0x10 },
    { L"Dandy J B HUD Portrait", 0x17998, 0x179B8, indexWakuWaku7Sprites_DandyJ, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_DANDYJ_C_PALETTES[] =
{
    { L"Dandy-J C", 0xe0b8, 0xe0d8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo C", 0xe538, 0xe558, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy-J C Burned", 0xe2f8, 0xe318, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J C Poisoned", 0xe3b8, 0xe3d8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J C White Flash", 0xe438, 0xe458, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo White Flash C", 0xe5d8, 0xe5f8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy J C SEL Portrait", 0x11838, 0x11858, indexWakuWaku7Sprites_DandyJ, 0x10 },
    { L"Dandy J C HUD Portrait", 0x179B8, 0x179D8, indexWakuWaku7Sprites_DandyJ, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_DANDYJ_D_PALETTES[] =
{
    { L"Dandy-J D", 0xe0d8, 0xe0f8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo D", 0xe558, 0xe578, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy-J D Burned", 0xe318, 0xe338, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J D Poisoned", 0xe3d8, 0xe3f8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J D White Flash", 0xe458, 0xe478, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo White Flash D", 0xe5f8, 0xe618, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy J D SEL Portrait", 0x11858, 0x11878, indexWakuWaku7Sprites_DandyJ, 0x10 },
    { L"Dandy J D HUD Portrait", 0x179D8, 0x179F8, indexWakuWaku7Sprites_DandyJ, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_DANDYJ_DARK_PALETTES[] =
{
    { L"Dandy-J Dark", 0xe478, 0xe498, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo Dark", 0xe578, 0xe598, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy-J Dark Burned", 0xe498, 0xe4b8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J Dark Poisoned", 0xe4b8, 0xe4d8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Dandy-J Dark White Flash", 0xe4d8, 0xe4f8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo White Flash Dark", 0xe618, 0xe638, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy J Dark SEL Portrait", 0x11878, 0x11898, indexWakuWaku7Sprites_DandyJ, 0x10 },
    { L"Dandy J Dark HUD Portrait", 0x179F8, 0x17A18, indexWakuWaku7Sprites_DandyJ, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_DANDYJ_BONUS_PALETTES[] =
{
    { L"Fire Effects 1", 0xe278, 0xe298, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Fire Effects 2", 0xe298, 0xe2b8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo Fire Effects 1", 0xe6b8, 0xe6d8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Fire Effects 2", 0xe6d8, 0xe6f8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Electric 1", 0xe338, 0xe358, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Electric 2", 0xe358, 0xe378, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Super Charge 1", 0xe1f8, 0xe218, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Super Charge 2", 0xe218, 0xe238, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Super Charge 3", 0xe238, 0xe258, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Super Charge 4", 0xe258, 0xe278, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo Super Charge 1", 0xe638, 0xe658, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Super Charge 2", 0xe658, 0xe678, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Super Charge 3", 0xe678, 0xe698, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Super Charge 4", 0xe698, 0xe6b8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Doki Doki 1", 0xe118, 0xe138, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Doki Doki 2", 0xe138, 0xe158, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Doki Doki 3", 0xe158, 0xe178, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Doki Doki 4", 0xe178, 0xe198, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Doki Doki 5", 0xe198, 0xe1b8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Doki Doki 6", 0xe1b8, 0xe1d8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Doki Doki 7", 0xe1d8, 0xe1f8, indexWakuWaku7Sprites_DandyJ, 0x00 },
    { L"Natsumi and Ranpoo Doki Doki 1", 0xe6f8, 0xe718, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Doki Doki 2", 0xe718, 0xe738, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Doki Doki 3", 0xe738, 0xe758, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Doki Doki 4", 0xe758, 0xe778, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Doki Doki 5", 0xe778, 0xe798, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Doki Doki 6", 0xe798, 0xe7b8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Natsumi and Ranpoo Doki Doki 7", 0xe7b8, 0xe7d8, indexWakuWaku7Sprites_DandyJ, 0x12 },
    { L"Dandy-J Extras", 0xe8f8, 0xe918 },
};

const sGame_PaletteDataset WakuWaku7_A_MAURU_A_PALETTES[] =
{
    { L"Mauru A", 0xee18, 0xee38, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi A", 0xf298, 0xf2b8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru A Burned", 0xf058, 0xf078, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi A Burned", 0xf4d8, 0xf4f8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru A Poisoned", 0xf118, 0xf138, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi A Poisoned", 0xf598, 0xf5b8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru A White Flash", 0xf198, 0xf1b8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi A White Flash", 0xf618, 0xf638, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru A Special Flash", 0xf758, 0xf778, indexWakuWaku7Sprites_Mauru, 0x00 },
    { L"Mauru A SEL Portrait", 0x11d58, 0x11db8, indexWakuWaku7Sprites_Mauru, 0x10 },
    { L"Mauru A HUD Portrait", 0x178d8, 0x178f8, indexWakuWaku7Sprites_Mauru, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_MAURU_B_PALETTES[] =
{
    { L"Mauru B", 0xee38, 0xee58, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi B", 0xf2b8, 0xf2d8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru B Burned", 0xf078, 0xf098, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi B Burned", 0xf4f8, 0xf518, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru B Poisoned", 0xf138, 0xf158, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi B Poisoned", 0xf5b8, 0xf5d8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru B White Flash", 0xf1b8, 0xf1d8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi B White Flash", 0xf638, 0xf658, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru B Special Flash", 0xf778, 0xf798, indexWakuWaku7Sprites_Mauru, 0x00 },
    { L"Mauru B SEL Portrait", 0x11db8, 0x11e18, indexWakuWaku7Sprites_Mauru, 0x10 },
    { L"Mauru B HUD Portrait", 0x178f8, 0x17918, indexWakuWaku7Sprites_Mauru, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_MAURU_C_PALETTES[] =
{
    { L"Mauru C", 0xee58, 0xee78, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi C", 0xf2d8, 0xf2f8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru C Burned", 0xf098, 0xf0b8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi C Burned", 0xf518, 0xf538, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru C Poisoned", 0xf158, 0xf178, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi C Poisoned", 0xf5d8, 0xf5f8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru C White Flash", 0xf1d8, 0xf1f8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi C White Flash", 0xf658, 0xf678, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru C Special Flash", 0xf798, 0xf7b8, indexWakuWaku7Sprites_Mauru, 0x00 },
    { L"Mauru C SEL Portrait", 0x11e18, 0x11e78, indexWakuWaku7Sprites_Mauru, 0x10 },
    { L"Mauru C HUD Portrait", 0x17918, 0x17938, indexWakuWaku7Sprites_Mauru, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_MAURU_D_PALETTES[] =
{
    { L"Mauru D", 0xee78, 0xee98, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi D", 0xf2f8, 0xf318, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru D Burned", 0xf0b8, 0xf0d8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi D Burned", 0xf538, 0xf558, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru D Poisoned", 0xf178, 0xf198, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi D Poisoned", 0xf5f8, 0xf618, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru D White Flash", 0xf1f8, 0xf218, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi D White Flash", 0xf678, 0xf698, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru D Special Flash", 0xf7b8, 0xf7d8, indexWakuWaku7Sprites_Mauru, 0x00 },
    { L"Mauru D SEL Portrait", 0x11e78, 0x11ed8, indexWakuWaku7Sprites_Mauru, 0x10 },
    { L"Mauru D HUD Portrait", 0x17938, 0x17958, indexWakuWaku7Sprites_Mauru, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_MAURU_DARK_PALETTES[] =
{
    { L"Mauru Dark", 0xf218, 0xf238, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Dark", 0xf698, 0xf6b8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Dark Burned", 0xf238, 0xf258, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Dark Burned", 0xf6b8, 0xf6d8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Dark Poisoned", 0xf258, 0xf278, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Dark Poisoned", 0xf6d8, 0xf6f8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Dark White Flash", 0xf278, 0xf298, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Dark White Flash", 0xf6f8, 0xf718, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Dark Special Flash", 0xf7d8, 0xf7f8, indexWakuWaku7Sprites_Mauru, 0x00 },
    { L"Mauru Dark SEL Portrait", 0x11ED8, 0x11F38, indexWakuWaku7Sprites_Mauru, 0x10 },
    { L"Mauru Dark HUD Portrait", 0x17958, 0x17978, indexWakuWaku7Sprites_Mauru, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_MAURU_BONUS_PALETTES[] =
{
    { L"Mauru Fire Effects 1", 0xf018, 0xf038, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Fire Effects 1", 0xf498, 0xf4b8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Fire Effects 2", 0xf038, 0xf058, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Fire Effects 2", 0xf4b8, 0xf4d8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Electric 1", 0xf0d8, 0xf0f8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Electric 1", 0xf558, 0xf578, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Electric 2", 0xf0f8, 0xf118, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Electric 2", 0xf578, 0xf598, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Super Charge 1", 0xef98, 0xefb8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Super Charge 1", 0xf418, 0xf438, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Super Charge 2", 0xefb8, 0xefd8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Super Charge 2", 0xf438, 0xf458, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Super Charge 3", 0xefd8, 0xeff8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Super Charge 3", 0xf458, 0xf478, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Super Charge 4", 0xeff8, 0xf018, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Super Charge 4", 0xf478, 0xf498, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 1", 0xeeb8, 0xeed8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 1", 0xf338, 0xf358, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 2", 0xeed8, 0xeef8, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 2", 0xf358, 0xf378, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 3", 0xeef8, 0xef18, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 3", 0xf378, 0xf398, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 4", 0xef18, 0xef38, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 4", 0xf398, 0xf3b8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 5", 0xef38, 0xef58, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 5", 0xf3b8, 0xf3d8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 6", 0xef58, 0xef78, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 6", 0xf3d8, 0xf3f8, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Doki Doki 7", 0xef78, 0xef98, indexWakuWaku7Sprites_Mauru, 0x00, &pairNext },
    { L"Mugi Doki Doki 7", 0xf3f8, 0xf418, indexWakuWaku7Sprites_Mauru, 0x12 },
    { L"Mauru Extras 1", 0xf718, 0xf758 },
    { L"Mauru Extras 2", 0xf7f8, 0xf838 },
};

const sGame_PaletteDataset WakuWaku7_A_POLITANK_A_PALETTES[] =
{
    { L"Politank A", 0xF838, 0xF858, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke A", 0xFE38, 0xFE58, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank A Flashing", 0x10238, 0x102b8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke A Flashing", 0x10438, 0x104B8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank A Burned", 0xfa78, 0xfa98, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke A Burned", 0x10078, 0x10098, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank A Poisoned", 0xfb38, 0xfb58, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke A Poisoned", 0x10138, 0x10158, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank A White Flash", 0xfbb8, 0xfbd8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke A White Flash", 0x101b8, 0x101d8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank A SEL Portrait", 0x11958, 0x119d8, indexWakuWaku7Sprites_Politank, 0x10, &pairNext },
    { L"Chojuro and Hamusuke A SEL Portrait", 0x12358, 0x12458, indexWakuWaku7Sprites_Politank, 0x12, &pairPrevious },
    { L"Politank A HUD Portrait", 0x17A18, 0x17A38, indexWakuWaku7Sprites_Politank, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_POLITANK_B_PALETTES[] =
{
    { L"Politank B", 0xF858, 0xF878, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke B", 0xFE58, 0xFE78, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank B Flashing", 0x102B8, 0x10338, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke B Flashing", 0x104B8, 0x10538, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank B Burned", 0xfa98, 0xfab8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke B Burned", 0x10098, 0x100b8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank B Poisoned", 0xfb58, 0xfb78, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke B Poisoned", 0x10158, 0x10178, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank B White Flash", 0xfbd8, 0xfbf8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke B White Flash", 0x101d8, 0x101f8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank B SEL Portrait", 0x119d8, 0x11A58, indexWakuWaku7Sprites_Politank, 0x10, &pairNext },
    { L"Chojuro and Hamusuke B SEL Portrait", 0x12458, 0x12558, indexWakuWaku7Sprites_Politank, 0x12, &pairPrevious },
    { L"Politank B HUD Portrait", 0x17A38, 0x17A58, indexWakuWaku7Sprites_Politank, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_POLITANK_C_PALETTES[] =
{
    { L"Politank C", 0xF878, 0xF898, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke C", 0xFE78, 0xFE98, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank C Flashing", 0x10338, 0x103B8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke C Flashing", 0x10538, 0x105B8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank C Burned", 0xfab8, 0xfad8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke C Burned", 0x100b8, 0x100d8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank C Poisoned", 0xfb78, 0xfb98, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke C Poisoned", 0x10178, 0x10198, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank C White Flash", 0xfbf8, 0xfc18, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke C White Flash", 0x101f8, 0x10218, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank C SEL Portrait", 0x11a58, 0x11Ad8, indexWakuWaku7Sprites_Politank, 0x10, &pairNext },
    { L"Chojuro and Hamusuke C SEL Portrait", 0x12558, 0x12658, indexWakuWaku7Sprites_Politank, 0x12, &pairPrevious },
    { L"Politank C HUD Portrait", 0x17A58, 0x17A78, indexWakuWaku7Sprites_Politank, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_POLITANK_D_PALETTES[] =
{
    { L"Politank D", 0xF898, 0xF8B8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke D", 0xFE98, 0xFEB8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank D Flashing", 0x103B8, 0x10438, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke D Flashing", 0x105B8, 0x10638, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank D Burned", 0xfad8, 0xfaf8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke D Burned", 0x100d8, 0x100f8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank D Poisoned", 0xfb98, 0xfbb8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke D Poisoned", 0x10198, 0x101b8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank D White Flash", 0xfc18, 0xfc38, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke D White Flash", 0x10218, 0x10238, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank D SEL Portrait", 0x11ad8, 0x11b58, indexWakuWaku7Sprites_Politank, 0x10, &pairNext },
    { L"Chojuro and Hamusuke D SEL Portrait", 0x12658, 0x12758, indexWakuWaku7Sprites_Politank, 0x12, &pairPrevious },
    { L"Politank D HUD Portrait", 0x17A78, 0x17A98, indexWakuWaku7Sprites_Politank, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_POLITANK_DARK_PALETTES[] =
{
    { L"Politank Dark", 0xFC38, 0XFC58, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Dark", 0xFCD8, 0xFCF8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Dark Flashing", 0x10638, 0x106B8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Dark Flashing", 0x106B8, 0x10738, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },

    // No Dark effects

    { L"Politank Dark SEL Portrait", 0x11b58, 0x11bd8, indexWakuWaku7Sprites_Politank, 0x10, &pairNext },
    { L"Chojuro and Hamusuke Dark SEL Portrait", 0x12758, 0x12858, indexWakuWaku7Sprites_Politank, 0x12, &pairPrevious },
    { L"Politank Dark HUD Portrait", 0x17A98, 0x17AB8, indexWakuWaku7Sprites_Politank, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_POLITANK_BONUS_PALETTES[] =
{
    { L"Politank Fire Effects 1", 0xfa38, 0xfa58, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Fire Effects 1", 0x10038, 0x10058, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Fire Effects 2", 0xfa58, 0xfa78, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Fire Effects 2", 0x10058, 0x10078, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Electric 1", 0xfaf8, 0xfb18, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Electric 1", 0x100f8, 0x10118, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Electric 2", 0xfb18, 0xfb38, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Electric 2", 0x10118, 0x10138, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Super Charge 1", 0xf9b8, 0xf9d8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Super Charge 1", 0xffb8, 0xffd8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Super Charge 2", 0xf9d8, 0xf9f8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Super Charge 2", 0xffd8, 0xfff8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Super Charge 3", 0xf9f8, 0xfa18, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Super Charge 3", 0xfff8, 0x10018, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Super Charge 4", 0xfa18, 0xfa38, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Super Charge 4", 0x10018, 0x10038, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 1", 0xf8d8, 0xf8f8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 1", 0xfed8, 0xfef8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 2", 0xf8f8, 0xf918, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 2", 0xfef8, 0xff18, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 3", 0xf918, 0xf938, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 3", 0xff18, 0xff38, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 4", 0xf938, 0xf958, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 4", 0xff38, 0xff58, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 5", 0xf958, 0xf978, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 5", 0xff58, 0xff78, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 6", 0xf978, 0xf998, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 6", 0xff78, 0xff98, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Doki Doki 7", 0xf998, 0xf9b8, indexWakuWaku7Sprites_Politank, 0x00, &pairNext },
    { L"Chojuro and Hamusuke Doki Doki 7", 0xff98, 0xffb8, indexWakuWaku7Sprites_Politank, 0x13, &pairPrevious },
    { L"Politank Extras 1", 0xfc58, 0xfcb8 },
    { L"Politank Extras 2", 0xfcf8, 0xfd58 },
    { L"Politank Extras 3", 0x10738, 0x10798 },
};

const sGame_PaletteDataset WakuWaku7_A_SLASH_A_PALETTES[] =
{
    { L"Slash A", 0xd878, 0xd898, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash A Flashing", 0xd9f8, 0xda18, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash A Burned", 0xd978, 0xd998, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash A Poisoned", 0xdab8, 0xdad8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash A White Flash", 0xdb38, 0xdb58, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash A SEL Portrait", 0x11758, 0x11778, indexWakuWaku7Sprites_Slash, 0x10 },
    { L"Slash A HUD Portrait", 0x17AD8, 0x17AF8, indexWakuWaku7Sprites_Slash, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_SLASH_B_PALETTES[] =
{
    { L"Slash B", 0xd898, 0xd8b8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash B Flashing", 0xda18, 0xda38, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash B Burned", 0xd998, 0xd9b8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash B Poisoned", 0xdad8, 0xdaf8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash B White Flash", 0xdb58, 0xdb78, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash B SEL Portrait", 0x11778, 0x11798, indexWakuWaku7Sprites_Slash, 0x10 },
    { L"Slash B HUD Portrait", 0x17AF8, 0x17B18, indexWakuWaku7Sprites_Slash, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_SLASH_C_PALETTES[] =
{
    { L"Slash C", 0xd8b8, 0xd8d8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash C Flashing", 0xda38, 0xda58, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash C Burned", 0xd9b8, 0xd9d8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash C Poisoned", 0xdaf8, 0xdb18, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash C White Flash", 0xdb78, 0xdb98, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash C SEL Portrait", 0x11798, 0x117B8, indexWakuWaku7Sprites_Slash, 0x10 },
    { L"Slash C HUD Portrait", 0x17B18, 0x17B38, indexWakuWaku7Sprites_Slash, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_SLASH_D_PALETTES[] =
{
    { L"Slash D", 0xd8d8, 0xd8f8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash D Flashing", 0xda58, 0xda78, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash D Burned", 0xd9d8, 0xd9f8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash D Poisoned", 0xdb18, 0xdb38, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash D White Flash", 0xdb98, 0xdbb8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash D SEL Portrait", 0x117B8, 0x117D8, indexWakuWaku7Sprites_Slash, 0x10 },
    { L"Slash D HUD Portrait", 0x17B38, 0x17B58, indexWakuWaku7Sprites_Slash, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_SLASH_DARK_PALETTES[] =
{
    { L"Slash Dark", 0xdbb8, 0xdbd8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash Dark Flashing", 0xdbd8, 0xdbf8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash Dark Burned", 0xdbf8, 0xdc18, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash Dark Poisoned", 0xdc18, 0xdc38, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash Dark White Flash", 0xdc38, 0xdc58, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Slash Dark SEL Portrait", 0x117D8, 0x117F8, indexWakuWaku7Sprites_Slash, 0x10 },
    { L"Slash Dark HUD Portrait", 0x17B58, 0x17B78, indexWakuWaku7Sprites_Slash, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_SLASH_BONUS_PALETTES[] =
{
    { L"Fire Effects 1", 0xd938, 0xd958, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Fire Effects 2", 0xd958, 0xd978, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Electric 1", 0xda78, 0xda98, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Electric 2", 0xda98, 0xdab8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Super Charge 1", 0xdd58, 0xdd78, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Super Charge 2", 0xdd78, 0xdd98, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Super Charge 3", 0xdd98, 0xddb8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Super Charge 4", 0xddb8, 0xddd8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 1", 0xdc78, 0xdc98, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 2", 0xdc98, 0xdcb8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 3", 0xdcb8, 0xdcd8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 4", 0xdcd8, 0xdcf8, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 5", 0xdcf8, 0xdd18, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 6", 0xdd18, 0xdd38, indexWakuWaku7Sprites_Slash, 0x00 },
    { L"Doki Doki 7", 0xdd38, 0xdd58, indexWakuWaku7Sprites_Slash, 0x00 },

    { L"Slash Extras 1", 0xd8f8, 0xd918 },
    { L"Slash Extras 2", 0xdc58, 0xdc78 },
    { L"Slash Extras 3 (1/2) 0xddd8", 0xddd8, 0xdfd8 },
    { L"Slash Extras 3 (2/2) 0xdfd8", 0xdfd8, 0xe038 },
};

const sGame_PaletteDataset WakuWaku7_A_TESSE_A_PALETTES[] =
{
    { L"Tesse A", 0xe918, 0xe938, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse A Burned", 0xeb58, 0xeb78, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse A Poisoned", 0xec18, 0xec38, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse A White Flash", 0xec98, 0xecb8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse A SEL Portrait", 0x11898, 0x118B8, indexWakuWaku7Sprites_Tesse, 0x10 },
    { L"Tesse A HUD Portrait", 0x17818, 0x17838, indexWakuWaku7Sprites_Tesse, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_TESSE_B_PALETTES[] =
{
    { L"Tesse B", 0xE938, 0xE958, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse B Burned", 0xeb78, 0xeb98, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse B Poisoned", 0xec38, 0xec58, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse B White Flash", 0xecb8, 0xecd8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse B SEL Portrait", 0x118B8, 0x118D8, indexWakuWaku7Sprites_Tesse, 0x10 },
    { L"Tesse B HUD Portrait", 0x17838, 0x17858, indexWakuWaku7Sprites_Tesse, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_TESSE_C_PALETTES[] =
{
    { L"Tesse C", 0xE958, 0xE978, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse C Burned", 0xeb98, 0xebb8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse C Poisoned", 0xec58, 0xec78, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse C White Flash", 0xecd8, 0xecf8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse C SEL Portrait", 0x118D8, 0x118F8, indexWakuWaku7Sprites_Tesse, 0x10 },
    { L"Tesse C HUD Portrait", 0x17858, 0x17878, indexWakuWaku7Sprites_Tesse, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_TESSE_D_PALETTES[] =
{
    { L"Tesse D", 0xE978, 0xE998, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse D Burned", 0xebb8, 0xebd8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse D Poisoned", 0xec78, 0xec98, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse D White Flash", 0xecf8, 0xed18, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse D SEL Portrait", 0x118F8, 0x11918, indexWakuWaku7Sprites_Tesse, 0x10 },
    { L"Tesse D HUD Portrait", 0x17878, 0x17898, indexWakuWaku7Sprites_Tesse, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_TESSE_DARK_PALETTES[] =
{
    { L"Tesse Dark", 0xED18, 0xED38, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse Dark Burned", 0xed38, 0xed58, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse Dark Poisoned", 0xed58, 0xed78, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse Dark White Flash", 0xed78, 0xed98, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Tesse Dark SEL Portrait", 0x11918, 0x11938, indexWakuWaku7Sprites_Tesse, 0x10 },
    { L"Tesse Dark HUD Portrait", 0x17898, 0x178b8, indexWakuWaku7Sprites_Tesse, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_TESSE_BONUS_PALETTES[] =
{
    { L"Fire Effects 1", 0xeb18, 0xeb38, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Fire Effects 2", 0xeb38, 0xeb58, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Electric 1", 0xebd8, 0xebf8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Electric 2", 0xebf8, 0xec18, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Super Charge 1", 0xea98, 0xeab8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Super Charge 2", 0xeab8, 0xead8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Super Charge 3", 0xead8, 0xeaf8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Super Charge 4", 0xeaf8, 0xeb18, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 1", 0xe9b8, 0xe9d8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 2", 0xe9d8, 0xe9f8, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 3", 0xe9f8, 0xea18, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 4", 0xea18, 0xea38, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 5", 0xea38, 0xea58, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 6", 0xea58, 0xea78, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Doki Doki 7", 0xea78, 0xea98, indexWakuWaku7Sprites_Tesse, 0x00 },
    { L"Effects", 0xed98, 0xedb8, indexWakuWaku7Sprites_Tesse, 0x02 },
    { L"Arekore Poi", 0xedb8, 0xee18, indexWakuWaku7Sprites_Tesse, 0x01 },
};

const sGame_PaletteDataset WakuWaku7_A_FERNANDEATH_A_PALETTES[] =
{
    { L"Fernandeath A", 0x10838, 0x10858, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath A Burned", 0x10a78, 0x10a98, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath A Poisoned", 0x10b38, 0x10b58, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath A White Flash", 0x10bb8, 0x10bd8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath A SEL Portrait", 0x11FD8, 0x12098 },
    { L"Fernandeath A HUD Portrait", 0x17bf8, 0x17c18, indexWakuWaku7Sprites_Fernandeath, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_FERNANDEATH_B_PALETTES[] =
{
    { L"Fernandeath B", 0x10858, 0x10878, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath B Burned", 0x10a98, 0x10ab8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath B Poisoned", 0x10b58, 0x10b78, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath B White Flash", 0x10bd8, 0x10bf8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath B SEL Portrait", 0x12098, 0x12158 },
    { L"Fernandeath B HUD Portrait", 0x17c18, 0x17c38, indexWakuWaku7Sprites_Fernandeath, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_FERNANDEATH_C_PALETTES[] =
{
    { L"Fernandeath C", 0x10878, 0x10898, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath C Burned", 0x10ab8, 0x10ad8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath C Poisoned", 0x10b78, 0x10b98, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath C White Flash", 0x10bf8, 0x10c18, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath C SEL Portrait", 0x12158, 0x12218 },
    { L"Fernandeath C HUD Portrait", 0x17c38, 0x17c58, indexWakuWaku7Sprites_Fernandeath, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_FERNANDEATH_D_PALETTES[] =
{
    { L"Fernandeath D", 0x10898, 0x108B8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath D Burned", 0x10ad8, 0x10af8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath D Poisoned", 0x10b98, 0x10bb8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath D White Flash", 0x10c18, 0x10c38, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath D SEL Portrait", 0x12218, 0x122d8 },
    { L"Fernandeath D HUD Portrait", 0x17c58, 0x17c78, indexWakuWaku7Sprites_Fernandeath, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_FERNANDEATH_BONUS_PALETTES[] =
{
    { L"Fire Effects 1", 0x10a38, 0x10a58, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fire Effects 2", 0x10a58, 0x10a78, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Electric 1", 0x10af8, 0x10b18, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Electric 2", 0x10b18, 0x10b38, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Super Charge 1", 0x109b8, 0x109d8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Super Charge 2", 0x109d8, 0x109f8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Super Charge 3", 0x109f8, 0x10a18, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Super Charge 4", 0x10a18, 0x10a38, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 1", 0x108d8, 0x108f8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 2", 0x108f8, 0x10918, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 3", 0x10918, 0x10938, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 4", 0x10938, 0x10958, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 5", 0x10958, 0x10978, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 6", 0x10978, 0x10998, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Doki Doki 7", 0x10998, 0x109b8, indexWakuWaku7Sprites_Fernandeath, 0x00 },
    { L"Fernandeath Extras 1", 0x108b8, 0x108d8 },
    { L"Fernandeath Extras 2", 0x10c38, 0x10c78 },
};

const sGame_PaletteDataset WakuWaku7_A_BONUSKUN_A_PALETTES[] =
{
    { L"Bonus-Kun A", 0x10C78, 0x10C98, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken A Burned", 0x10eb8, 0x10ed8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken A Poisoned", 0x10f78, 0x10f98, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken A White Flash", 0x10ff8, 0x11018, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Kun SEL Portrait", 0x11F58, 0x11F78 },
    { L"Bonus-Kun A HUD Portrait", 0x17b78, 0x17b98, indexWakuWaku7Sprites_BonusKun, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_BONUSKUN_B_PALETTES[] =
{
    { L"Bonus-Kun B", 0x10C98, 0x10CB8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken B Burned", 0x10ed8, 0x10ef8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken B Poisoned", 0x10f98, 0x10fb8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken B White Flash", 0x11018, 0x11038, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Kun B SEL Portrait", 0x11F78, 0x11F98 },
    { L"Bonus-Kun B HUD Portrait", 0x17b98, 0x17bb8, indexWakuWaku7Sprites_BonusKun, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_BONUSKUN_C_PALETTES[] =
{
    { L"Bonus-Kun C", 0x10CB8, 0x10CD8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken C Burned", 0x10ef8, 0x10f18, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken C Poisoned", 0x10fb8, 0x10fd8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken C White Flash", 0x11038, 0x11058, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Kun C SEL Portrait", 0x11F98, 0x11FB8 },
    { L"Bonus-Kun C HUD Portrait", 0x17bb8, 0x17bd8, indexWakuWaku7Sprites_BonusKun, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_BONUSKUN_D_PALETTES[] =
{
    { L"Bonus-Kun D", 0x10CD8, 0x10CF8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken D Burned", 0x10f18, 0x10f38, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken D Poisoned", 0x10fd8, 0x10ff8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Ken D White Flash", 0x11058, 0x11078, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Kun D SEL Portrait", 0x11FB8, 0x11FD8 },
    { L"Bonus-Kun D HUD Portrait", 0x17bd8, 0x17bf8, indexWakuWaku7Sprites_BonusKun, 0x11 },
};

const sGame_PaletteDataset WakuWaku7_A_BONUSKUN_BONUS_PALETTES[] =
{
    { L"Fire Effects 1", 0x10e78, 0x10e98, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Fire Effects 2", 0x10e98, 0x10eb8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Electric 1", 0x10f38, 0x10f58, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Electric 2", 0x10f58, 0x10f78, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Super Charge 1", 0x10df8, 0x10e18, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Super Charge 2", 0x10e18, 0x10e38, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Super Charge 3", 0x10e38, 0x10e58, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Super Charge 4", 0x10e58, 0x10e78, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 1", 0x10d18, 0x10d38, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 2", 0x10d38, 0x10d58, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 3", 0x10d58, 0x10d78, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 4", 0x10d78, 0x10d98, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 5", 0x10d98, 0x10db8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 6", 0x10db8, 0x10dd8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Doki Doki 7", 0x10dd8, 0x10df8, indexWakuWaku7Sprites_BonusKun, 0x00 },
    { L"Bonus-Kun Extras", 0x11078, 0x11098 },
};

const sDescTreeNode WakuWaku7_A_RAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_RAI_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_RAI_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_RAI_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_RAI_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_RAI_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_RAI_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_RAI_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_RAI_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_RAI_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_RAI_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_RAI_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_RAI_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_ARINA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_ARINA_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_ARINA_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_ARINA_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_ARINA_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_ARINA_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_ARINA_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_ARINA_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_ARINA_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_ARINA_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_ARINA_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_ARINA_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_ARINA_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_DANDYJ_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_DANDYJ_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_DANDYJ_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_DANDYJ_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_DANDYJ_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_DANDYJ_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_DANDYJ_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_DANDYJ_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_DANDYJ_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_DANDYJ_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_DANDYJ_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_DANDYJ_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_DANDYJ_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_MAURU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_MAURU_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_MAURU_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_MAURU_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_MAURU_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_MAURU_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_MAURU_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_MAURU_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_MAURU_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_MAURU_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_MAURU_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_MAURU_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_MAURU_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_POLITANK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_POLITANK_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_POLITANK_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_POLITANK_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_POLITANK_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_POLITANK_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_POLITANK_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_POLITANK_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_POLITANK_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_POLITANK_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_POLITANK_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_POLITANK_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_POLITANK_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_SLASH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_SLASH_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_SLASH_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_SLASH_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_SLASH_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_SLASH_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_SLASH_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_SLASH_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_SLASH_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_SLASH_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_SLASH_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_SLASH_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_SLASH_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_TESSE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_TESSE_A_PALETTES,    ARRAYSIZE(WakuWaku7_A_TESSE_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_TESSE_B_PALETTES,    ARRAYSIZE(WakuWaku7_A_TESSE_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_TESSE_C_PALETTES,    ARRAYSIZE(WakuWaku7_A_TESSE_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,      (void*)WakuWaku7_A_TESSE_D_PALETTES,    ARRAYSIZE(WakuWaku7_A_TESSE_D_PALETTES) },
    { L"Dark", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_TESSE_DARK_PALETTES, ARRAYSIZE(WakuWaku7_A_TESSE_DARK_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_TESSE_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_TESSE_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_FERNANDEATH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_FERNANDEATH_A_PALETTES, ARRAYSIZE(WakuWaku7_A_FERNANDEATH_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_FERNANDEATH_B_PALETTES, ARRAYSIZE(WakuWaku7_A_FERNANDEATH_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_FERNANDEATH_C_PALETTES, ARRAYSIZE(WakuWaku7_A_FERNANDEATH_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_FERNANDEATH_D_PALETTES, ARRAYSIZE(WakuWaku7_A_FERNANDEATH_D_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_FERNANDEATH_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_FERNANDEATH_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_BONUSKUN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_BONUSKUN_A_PALETTES, ARRAYSIZE(WakuWaku7_A_BONUSKUN_A_PALETTES) },
    { L"B", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_BONUSKUN_B_PALETTES, ARRAYSIZE(WakuWaku7_A_BONUSKUN_B_PALETTES) },
    { L"C", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_BONUSKUN_C_PALETTES, ARRAYSIZE(WakuWaku7_A_BONUSKUN_C_PALETTES) },
    { L"D", DESC_NODETYPE_TREE,   (void*)WakuWaku7_A_BONUSKUN_D_PALETTES, ARRAYSIZE(WakuWaku7_A_BONUSKUN_D_PALETTES) },
    { L"Bonus", DESC_NODETYPE_TREE,  (void*)WakuWaku7_A_BONUSKUN_BONUS_PALETTES, ARRAYSIZE(WakuWaku7_A_BONUSKUN_BONUS_PALETTES) },
};

const sDescTreeNode WakuWaku7_A_UNITS[] =
{
    { L"Rai Bakuoh",     DESC_NODETYPE_TREE, (void*)WakuWaku7_A_RAI_COLLECTION,      ARRAYSIZE(WakuWaku7_A_RAI_COLLECTION) },
    { L"Arina Makihara", DESC_NODETYPE_TREE, (void*)WakuWaku7_A_ARINA_COLLECTION,    ARRAYSIZE(WakuWaku7_A_ARINA_COLLECTION) },
    { L"Dandy-J",        DESC_NODETYPE_TREE, (void*)WakuWaku7_A_DANDYJ_COLLECTION,   ARRAYSIZE(WakuWaku7_A_DANDYJ_COLLECTION) },
    { L"Mauru",          DESC_NODETYPE_TREE, (void*)WakuWaku7_A_MAURU_COLLECTION,    ARRAYSIZE(WakuWaku7_A_MAURU_COLLECTION) },
    { L"Politank-Z",     DESC_NODETYPE_TREE, (void*)WakuWaku7_A_POLITANK_COLLECTION, ARRAYSIZE(WakuWaku7_A_POLITANK_COLLECTION) },
    { L"Slash",          DESC_NODETYPE_TREE, (void*)WakuWaku7_A_SLASH_COLLECTION,    ARRAYSIZE(WakuWaku7_A_SLASH_COLLECTION) },
    { L"Tesse",          DESC_NODETYPE_TREE, (void*)WakuWaku7_A_TESSE_COLLECTION,    ARRAYSIZE(WakuWaku7_A_TESSE_COLLECTION) },
    { L"Fernandeath",    DESC_NODETYPE_TREE, (void*)WakuWaku7_A_FERNANDEATH_COLLECTION, ARRAYSIZE(WakuWaku7_A_FERNANDEATH_COLLECTION) },
    { L"Bonus-Kun",      DESC_NODETYPE_TREE, (void*)WakuWaku7_A_BONUSKUN_COLLECTION,  ARRAYSIZE(WakuWaku7_A_BONUSKUN_COLLECTION) },
};
