#pragma once

const std::vector<uint16_t> Kizuna_A_IMGIDS_USED =
{
    indexKizunaESprites_Chung,              // 0xA6
    indexKizunaESprites_Eagle,              // 0xA7
    indexKizunaESprites_Gordon,             // 0xA8
    indexKizunaESprites_Gozu,               // 0xA9
    indexKizunaESprites_Hayate,             // 0xAA
    indexKizunaESprites_Jazu,               // 0xAB
    indexKizunaESprites_Joker,              // 0xAC
    indexKizunaESprites_Kim,                // 0xAD
    indexKizunaESprites_KingLion,           // 0xAE
    indexKizunaESprites_Mezu,               // 0xAF
    indexKizunaESprites_Rosa,               // 0xB0
    indexKizunaESprites_Bonus,              // 0xB1
};

const sGame_PaletteDataset Kizuna_A_HAYATE_PALETTES_A[] =
{
    { L"Sho Hayate A", 0x170200, 0x170240, indexKizunaESprites_Hayate, 0x00 },
    { L"Burned A", 0x170240, 0x170280, indexKizunaESprites_Hayate, 0x00 },
    { L"Zapped A", 0x170280, 0x1702c0, indexKizunaESprites_Hayate, 0x00 },
    { L"Freezed A", 0x1702c0, 0x170300, indexKizunaESprites_Hayate, 0x00 },
    { L"Special Weapon Effect A", 0x170320, 0x170340 },
    { L"Special Effect A", 0x170340, 0x170360 },
    { L"Weapon Super Slash A", 0x170360, 0x170380 },
    { L"Weapon Slash A", 0x1703e0, 0x170400 },
    { L"Background A", 0x170400, 0x170440, indexKizunaESprites_Hayate, 0x00 },
    { L"Chicken A", 0x1704e0, 0x170500 },
};

const sGame_PaletteDataset Kizuna_A_HAYATE_PALETTES_B[] =
{
    { L"Sho Hayate B", 0x172900, 0x172940, indexKizunaESprites_Hayate, 0x00 },
    { L"Burned B", 0x172940, 0x172980, indexKizunaESprites_Hayate, 0x00 },
    { L"Zapped B", 0x172980, 0x1729c0, indexKizunaESprites_Hayate, 0x00 },
    { L"Freezed B", 0x1729c0, 0x172a00, indexKizunaESprites_Hayate, 0x00 },
    { L"Special Weapon Effect B", 0x172a20, 0x172a40 },
    { L"Special Effect B", 0x172a40, 0x172a60 },
    { L"Weapon Super Slash B", 0x172a60, 0x172a80 },
    { L"Weapon Slash B", 0x172ae0, 0x172b00 },
    { L"Background B", 0x172b00, 0x172b40, indexKizunaESprites_Hayate, 0x00 },
    { L"Chicken B", 0x172be0, 0x172c00 },
};

const sGame_PaletteDataset Kizuna_A_HAYATE_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c600, 0x17c640 },
    { L"Select/HUD A", 0x17c420, 0x17c440 },
    { L"Tag Out A", 0x17c1a0, 0x17c1c0 },
    { L"Victory B", 0x17ca00, 0x17ca40 },
    { L"Select/HUD B", 0x17ce20, 0x17ce40 },
    { L"Tag Out B", 0x17c2e0, 0x17c300 },
};

const sGame_PaletteDataset Kizuna_A_EAGLE_PALETTES_A[] =
{
    { L"Max Eagle A", 0x170500, 0x170540, indexKizunaESprites_Eagle, 0x00 },
    { L"Burned A", 0x170540, 0x170580, indexKizunaESprites_Eagle, 0x00 },
    { L"Zapped A", 0x170580, 0x1705c0, indexKizunaESprites_Eagle, 0x00 },
    { L"Freezed A", 0x1705c0, 0x170600, indexKizunaESprites_Eagle, 0x00 },
    { L"??? A", 0x170600, 0x170620 },
    { L"Ax Boom A", 0x170620, 0x170640 },
    { L"Flash Wing A", 0x170640, 0x170660 },
    { L"American Screw A", 0x170660, 0x170680 },
    { L"Weapon Slash A", 0x1706e0, 0x170700 },
    { L"Background A", 0x170700, 0x170720, indexKizunaESprites_Eagle, 0x00 },
    { L"Chicken A", 0x1707e0, 0x170800 },
};

const sGame_PaletteDataset Kizuna_A_EAGLE_PALETTES_B[] =
{
    { L"Max Eagle B", 0x172c00, 0x172c40, indexKizunaESprites_Eagle, 0x00 },
    { L"Burned B", 0x172c40, 0x172c80, indexKizunaESprites_Eagle, 0x00 },
    { L"Zapped B", 0x172c80, 0x172cc0, indexKizunaESprites_Eagle, 0x00 },
    { L"Freezed B", 0x172cc0, 0x172d00, indexKizunaESprites_Eagle, 0x00 },
    { L"??? B", 0x172d00, 0x172d20 },
    { L"Ax Boom B", 0x172d20, 0x172d40 },
    { L"Flash Wing B", 0x172d40, 0x172d60 },
    { L"American Screw B", 0x172d60, 0x172d80 },
    { L"Weapon Slash B", 0x172de0, 0x172e00 },
    { L"Background B", 0x172e00, 0x172e20, indexKizunaESprites_Eagle, 0x00 },
    { L"Chicken B", 0x172ee0, 0x172f00 },
};

const sGame_PaletteDataset Kizuna_A_EAGLE_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c640, 0x17c680 },
    { L"Select/HUD A", 0x17c4a0, 0x17c4c0 },
    { L"Tag Out A", 0x17c220, 0x17c240 },
    { L"Victory B", 0x17ca40, 0x17ca80 },
    { L"Select/HUD B", 0x17cea0, 0x17cec0 },
    { L"Tag Out B", 0x17c360, 0x17c380 },
};

const sGame_PaletteDataset Kizuna_A_GOZU_PALETTES_A[] =
{
    { L"Gozu A", 0x170800, 0x170840, indexKizunaESprites_Gozu, 0x00 },
    { L"Burned A", 0x170840, 0x170880, indexKizunaESprites_Gozu, 0x00 },
    { L"Zapped A", 0x170880, 0x1708c0, indexKizunaESprites_Gozu, 0x00 },
    { L"Freezed A", 0x1708c0, 0x170900, indexKizunaESprites_Gozu, 0x00 },
    { L"Special Effect 1 A", 0x170900, 0x170920, indexKizunaESprites_Gozu, 0x00 },
    { L"Special Effect 2 A", 0x170920, 0x170940 },
    { L"Flame Palette A", 0x170940, 0x170960, indexKizunaESprites_Gozu, 0x00 },
    { L"Flame Effects A", 0x170960, 0x170980 },
    { L"Mudo Goen Ha A", 0x170980, 0x1709a0 },
    { L"Jaga Rangeki Sho A", 0x1709a0, 0x1709c0 },
    { L"Metsu Sasso A", 0x1709c0, 0x1709e0 },
    { L"Weapon Slash A", 0x1709e0, 0x170a00 },
    { L"Background A", 0x170a00, 0x170a20, indexKizunaESprites_Gozu, 0x00 },
    { L"??? A", 0x170a40, 0x170a60 },
    { L"Background Smoke A", 0x170a60, 0x170a80 },
    { L"Skull/Smoke A", 0x170aa0, 0x170ac0 },
    { L"Chicken A", 0x170ae0, 0x170b00 },
};

const sGame_PaletteDataset Kizuna_A_GOZU_PALETTES_B[] =
{
    { L"Gozu B", 0x172f00, 0x172f40, indexKizunaESprites_Gozu, 0x00 },
    { L"Burned B", 0x172f40, 0x172f80, indexKizunaESprites_Gozu, 0x00 },
    { L"Zapped B", 0x172f80, 0x172fc0, indexKizunaESprites_Gozu, 0x00 },
    { L"Freezed B", 0x172fc0, 0x173000, indexKizunaESprites_Gozu, 0x00 },
    { L"Special Effect 1 B", 0x173000, 0x173020, indexKizunaESprites_Gozu, 0x00 },
    { L"Special Effect 2 B", 0x173020, 0x173040 },
    { L"Flame Palette B", 0x173040, 0x173060, indexKizunaESprites_Gozu, 0x00 },
    { L"Flame Effects B", 0x173060, 0x173080 },
    { L"Mudo Goen Ha B", 0x173080, 0x1730a0 },
    { L"Jaga Rangeki Sho B", 0x1730a0, 0x1730c0 },
    { L"Metsu Sasso B", 0x1730c0, 0x1730e0 },
    { L"Weapon Slash B", 0x1730e0, 0x173100 },
    { L"Background B", 0x173100, 0x173120, indexKizunaESprites_Gozu, 0x00 },
    { L"??? B", 0x173140, 0x173160 },
    { L"Background Smoke B", 0x173160, 0x173180 },
    { L"Skull/Smoke B", 0x1731a0, 0x1731c0 },
    { L"Chicken B", 0x1731e0, 0x173200 },
};

const sGame_PaletteDataset Kizuna_A_GOZU_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c680, 0x17c6a0 },
    { L"Select/HUD A", 0x17c440, 0x17c460 },
    { L"Tag Out A", 0x17c1c0, 0x17c1e0 },
    { L"Victory B", 0x17ca80, 0x17caa0 },
    { L"Select/HUD B", 0x17ce40, 0x17ce60 },
    { L"Tag Out B", 0x17c300, 0x17c320 },
};

const sGame_PaletteDataset Kizuna_A_MEZU_PALETTES_A[] =
{
    { L"Mezu A", 0x170b00, 0x170b40, indexKizunaESprites_Mezu, 0x00 },
    { L"Burned A", 0x170b40, 0x170b80, indexKizunaESprites_Mezu, 0x00 },
    { L"Zapped A", 0x170b80, 0x170bc0, indexKizunaESprites_Mezu, 0x00 },
    { L"Freezed A", 0x170bc0, 0x170c00, indexKizunaESprites_Mezu, 0x00 },
    { L"Special Effect 1 A", 0x170c00, 0x170c20, indexKizunaESprites_Mezu, 0x00 },
    { L"Ice Effects A", 0x170c20, 0x170c40 },
    { L"Special Effect 2 A", 0x170c40, 0x170c60, indexKizunaESprites_Mezu, 0x00 },
    { L"??? A", 0x170c60, 0x170c80 },
    { L"Jaga Rangeki Kyaku A", 0x170ca0, 0x170cc0 },
    { L"??? A", 0x170cc0, 0x170ce0 },
    { L"Weapon Slash A", 0x170ce0, 0x170d00 },
    { L"Background A", 0x170d00, 0x170d20, indexKizunaESprites_Mezu, 0x00 },
    { L"Mudo Suiryu Ha A", 0x170d20, 0x170d40 },
    { L"??? A", 0x170d40, 0x170d60 },
    { L"??? A", 0x170d60, 0x170d80 },
    { L"Smoke A", 0x170da0, 0x170dc0 },
    { L"Chicken A", 0x170de0, 0x170e00 },
};

const sGame_PaletteDataset Kizuna_A_MEZU_PALETTES_B[] =
{
    { L"Mezu B", 0x173200, 0x173240, indexKizunaESprites_Mezu, 0x00 },
    { L"Burned B", 0x173240, 0x173280, indexKizunaESprites_Mezu, 0x00 },
    { L"Zapped B", 0x173280, 0x1732c0, indexKizunaESprites_Mezu, 0x00 },
    { L"Freezed B", 0x1732c0, 0x173300, indexKizunaESprites_Mezu, 0x00 },
    { L"Special Effect 1 B", 0x173300, 0x173320, indexKizunaESprites_Mezu, 0x00 },
    { L"Ice Effects B", 0x173320, 0x173340 },
    { L"Special Effect 2 B", 0x173340, 0x173360, indexKizunaESprites_Mezu, 0x00 },
    { L"??? B", 0x173360, 0x173380 },
    { L"Jaga Rangeki Kyaku B", 0x1733a0, 0x1733c0 },
    { L"??? B", 0x1733c0, 0x1733e0 },
    { L"Weapon Slash B", 0x1733e0, 0x173400 },
    { L"Background B", 0x173400, 0x173420, indexKizunaESprites_Mezu, 0x00 },
    { L"Mudo Suiryu Ha B", 0x173420, 0x173440 },
    { L"??? B", 0x173440, 0x173460 },
    { L"??? B", 0x173460, 0x173480 },
    { L"Smoke B", 0x1734a0, 0x1734c0 },
    { L"Chicken B", 0x1734e0, 0x173500 },
};

const sGame_PaletteDataset Kizuna_A_MEZU_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c6c0, 0x17c700 },
    { L"Select/HUD A", 0x17c4c0, 0x17c4e0 },
    { L"Tag Out A", 0x17c240, 0x17c260 },
    { L"Victory B", 0x17cac0, 0x17cb00 },
    { L"Select/HUD A", 0x17cec0, 0x17cee0 },
    { L"Tag Out B", 0x17c380, 0x17c3a0 },
};

const sGame_PaletteDataset Kizuna_A_ROSA_PALETTES_A[] =
{
    { L"Rosa A", 0x170e00, 0x170e40, indexKizunaESprites_Rosa, 0x00, &pairNext7 },
    { L"Burned A", 0x170e40, 0x170e80, indexKizunaESprites_Rosa, 0x00, &pairNext6 },
    { L"Zapped A", 0x170e80, 0x170ec0, indexKizunaESprites_Rosa, 0x00, &pairNext5 },
    { L"Freezed A", 0x170ec0, 0x170f00, indexKizunaESprites_Rosa, 0x00, &pairNext4 },
    { L"Surprise Task A", 0x170f00, 0x170f20 },
    { L"Crescent Slicer A", 0x170f20, 0x170f40 },
    { L"Meteor Barrage A", 0x170f40, 0x170f60 },
    { L"Sword A", 0x170f60, 0x170f80, indexKizunaESprites_Rosa, 0x01 },
    { L"??? A", 0x170fc0, 0x170fe0 },
    { L"??? A", 0x170fe0, 0x171000 },
    { L"Background A", 0x171000, 0x171040, indexKizunaESprites_Rosa, 0x00, &pairPrevious3 },
    { L"Shori no Akatsuki 1 A", 0x171040, 0x171060 },
    { L"Shori no Akatsuki 2 A", 0x171060, 0x171080 },
    { L"??? A", 0x171080, 0x1710a0 },
    { L"Chicken A", 0x1710e0, 0x171100 },
};

const sGame_PaletteDataset Kizuna_A_ROSA_PALETTES_B[] =
{
    { L"Rosa B", 0x173500, 0x173540, indexKizunaESprites_Rosa, 0x00, &pairNext7 },
    { L"Burned B", 0x173540, 0x173580, indexKizunaESprites_Rosa, 0x00, &pairNext6 },
    { L"Zapped B", 0x173580, 0x1735c0, indexKizunaESprites_Rosa, 0x00, &pairNext5 },
    { L"Freezed B", 0x1735c0, 0x173600, indexKizunaESprites_Rosa, 0x00, &pairNext4 },
    { L"Surprise Task B", 0x173600, 0x173620 },
    { L"Crescent Slicer B", 0x173620, 0x173640 },
    { L"Meteor Barrage B", 0x173640, 0x173660 },
    { L"Sword B", 0x173660, 0x173680, indexKizunaESprites_Rosa, 0x01 },
    { L"??? B", 0x1736c0, 0x1736e0 },
    { L"??? B", 0x1736e0, 0x173700 },
    { L"Background B", 0x173700, 0x173740, indexKizunaESprites_Rosa, 0x00, &pairPrevious3 },
    { L"Shori no Akatsuki 1 B", 0x173740, 0x173760 },
    { L"Shori no Akatsuki 2 B", 0x173760, 0x173780 },
    { L"??? B", 0x173780, 0x1737a0 },
    { L"Chicken B", 0x1737e0, 0x173800 },
};

const sGame_PaletteDataset Kizuna_A_ROSA_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c800, 0x17c840 },
    { L"Select/HUD A", 0x17c480, 0x17c4a0 },
    { L"Tag Out A", 0x17c200, 0x17c220 },
    { L"Victory B", 0x17cc00, 0x17cc40 },
    { L"Select/HUD B", 0x17ce80, 0x17cea0 },
    { L"Tag Out B", 0x17c340, 0x17c360 },
};

const sGame_PaletteDataset Kizuna_A_KIM_PALETTES_A[] =
{
    { L"Kim Sue Il A", 0x171100, 0x171140, indexKizunaESprites_Kim, 0x00 },
    { L"Burned A", 0x171140, 0x171180, indexKizunaESprites_Kim, 0x00 },
    { L"Zapped A", 0x171180, 0x1711c0, indexKizunaESprites_Kim, 0x00 },
    { L"Freezed A", 0x1711c0, 0x171200, indexKizunaESprites_Kim, 0x00 },
    { L"??? A", 0x171200, 0x171220 },
    { L"Houou Kyaku A", 0x171220, 0x171240 },
    { L"Emergency Tag A", 0x171240, 0x171260 },
    { L"Attack Effects A", 0x171260, 0x171280 },
    { L"Background A", 0x171300, 0x171340, indexKizunaESprites_Kim, 0x00 },
    { L"Chicken A", 0x1713e0, 0x171400 },
};

const sGame_PaletteDataset Kizuna_A_KIM_PALETTES_B[] =
{
    { L"Kim Sue Il B", 0x173800, 0x173840, indexKizunaESprites_Kim, 0x00 },
    { L"Burned B", 0x173840, 0x173880, indexKizunaESprites_Kim, 0x00 },
    { L"Zapped B", 0x173880, 0x1738c0, indexKizunaESprites_Kim, 0x00 },
    { L"Freezed B", 0x1738c0, 0x173900, indexKizunaESprites_Kim, 0x00 },
    { L"??? B", 0x173900, 0x173920 },
    { L"Houou Kyaku B", 0x173920, 0x173940 },
    { L"Emergency Tag B", 0x173940, 0x173960 },
    { L"Attack Effects B", 0x173960, 0x173980 },
    { L"Background B", 0x173a00, 0x173a40, indexKizunaESprites_Kim, 0x00 },
    { L"Chicken B", 0x173ae0, 0x173b00 },
};

const sGame_PaletteDataset Kizuna_A_KIM_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c860, 0x17c8a0 },
    { L"Select/HUD A", 0x17c400, 0x17c420 },
    { L"Tag Out A", 0x17c180, 0x17c1a0 },
    { L"Victory B", 0x17cc60, 0x17cca0 },
    { L"Select/HUD B", 0x17ce00, 0x17ce20 },
    { L"Tag Out B", 0x17c2c0, 0x17c2e0 },
};

const sGame_PaletteDataset Kizuna_A_JOKER_PALETTES_A[] =
{
    { L"Joker A", 0x171400, 0x171440, indexKizunaESprites_Joker, 0x00 },
    { L"Burned A", 0x171440, 0x171460, indexKizunaESprites_Joker, 0x00 },
    { L"Zapped A", 0x171480, 0x1714c0, indexKizunaESprites_Joker, 0x00 },
    { L"Freezed A", 0x1714c0, 0x171500, indexKizunaESprites_Joker, 0x00 },
    { L"??? A", 0x171460, 0x171480 },
    { L"Crazy Toy A", 0x171500, 0x171520 },
    { L"Murder Hat A", 0x171520, 0x171540 },
    { L"Roller Dash A", 0x171540, 0x171560 },
    { L"Good Face A", 0x171560, 0x171580 },
    { L"Box A", 0x171580, 0x1715a0 },
    { L"Magician's Card A", 0x1715a0, 0x1715c0 },
    { L"Monkey A", 0x1715c0, 0x1715e0 },
    { L"Rabbit A", 0x1715e0, 0x171600 },
    { L"Background A", 0x171600, 0x171640, indexKizunaESprites_Joker, 0x00 },
    { L"Chicken A", 0x1716e0, 0x171700 },
};

const sGame_PaletteDataset Kizuna_A_JOKER_PALETTES_B[] =
{
    { L"Joker B", 0x173b00, 0x173b40, indexKizunaESprites_Joker, 0x00 },
    { L"Burned B", 0x173b40, 0x173b60, indexKizunaESprites_Joker, 0x00 },
    { L"Zapped B", 0x173b80, 0x173bc0, indexKizunaESprites_Joker, 0x00 },
    { L"Freezed B", 0x173bc0, 0x173c00, indexKizunaESprites_Joker, 0x00 },
    { L"??? B", 0x173b60, 0x173b80 },
    { L"Crazy Toy B", 0x173c00, 0x173c20 },
    { L"Murder Hat B", 0x173c20, 0x173c40 },
    { L"Roller Dash B", 0x173c40, 0x173c60 },
    { L"Good Face B", 0x173c60, 0x173c80 },
    { L"Box B", 0x173c80, 0x173ca0 },
    { L"Magician's Card B", 0x173ca0, 0x173cc0 },
    { L"Monkey B", 0x173cc0, 0x173ce0 },
    { L"Rabbit B", 0x173ce0, 0x173d00 },
    { L"Background B", 0x173d00, 0x173d40, indexKizunaESprites_Joker, 0x00 },
    { L"Chicken B", 0x173de0, 0x173e00 },
};

const sGame_PaletteDataset Kizuna_A_JOKER_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c700, 0x17c720 },
    { L"Select/HUD A", 0x17c460, 0x17c480 },
    { L"Tag Out A", 0x17c1e0, 0x17c200 },
    { L"Victory B", 0x17cb00, 0x17cb20 },
    { L"Select/HUD B", 0x17ce60, 0x17ce80 },
    { L"Tag Out B", 0x17c320, 0x17c340 },
};

const sGame_PaletteDataset Kizuna_A_CHUNG_PALETTES_A[] =
{
    { L"Chung Paifu A", 0x171700, 0x171740, indexKizunaESprites_Chung, 0x00 },
    { L"Burned A", 0x171740, 0x171780, indexKizunaESprites_Chung, 0x00 },
    { L"Zapped A", 0x171780, 0x1717c0, indexKizunaESprites_Chung, 0x00 },
    { L"Freezed A", 0x1717c0, 0x171800, indexKizunaESprites_Chung, 0x00 },
    { L"Emergency Tag A", 0x171800, 0x171820 },
    { L"Byakko Dan A", 0x171820, 0x171840 },
    { L"Rage Mode A", 0x171840, 0x171880, indexKizunaESprites_Chung, 0x00 },
    { L"Fire Attacks A", 0x171880, 0x1718a0 },
    { L"Keikei Henge 1 A", 0x1718a0, 0x1718c0 },
    { L"Sen Jushouda A", 0x1718c0, 0x1718e0 },
    { L"Background A", 0x171900, 0x171940, indexKizunaESprites_Chung, 0x00 },
    { L"Keikei Henge 2 A", 0x171940, 0x171960 },
    { L"Chicken A", 0x1719e0, 0x171a00 },
};

const sGame_PaletteDataset Kizuna_A_CHUNG_PALETTES_B[] =
{
    { L"Chung Paifu B", 0x173e00, 0x173e40, indexKizunaESprites_Chung, 0x00 },
    { L"Burned B", 0x173e40, 0x173e80, indexKizunaESprites_Chung, 0x00 },
    { L"Zapped B", 0x173e80, 0x173ec0, indexKizunaESprites_Chung, 0x00 },
    { L"Freezed B", 0x173ec0, 0x173f00, indexKizunaESprites_Chung, 0x00 },
    { L"Emergency Tag B", 0x173f00, 0x173f20 },
    { L"Byakko Dan B", 0x173f20, 0x173f40 },
    { L"Rage Mode B", 0x173f40, 0x173f80, indexKizunaESprites_Chung, 0x00 },
    { L"Fire Attacks B", 0x173f80, 0x173fa0 },
    { L"Keikei Henge 1 B", 0x173fa0, 0x173fc0 },
    { L"Sen Jushouda B", 0x173fc0, 0x173fe0 },
    { L"Background B", 0x174000, 0x174040, indexKizunaESprites_Chung, 0x00 },
    { L"Keikei Henge 2 B", 0x174040, 0x174060 },
    { L"Chicken B", 0x1740e0, 0x174100 },
};

const sGame_PaletteDataset Kizuna_A_CHUNGCOPY_PALETTES_A[] =
{
    { L"Chung Copy A", 0x172300, 0x172340, indexKizunaESprites_Chung, 0x00 },
    { L"Burned A", 0x172340, 0x172380, indexKizunaESprites_Chung, 0x00 },
    { L"Zapped A", 0x172380, 0x1723c0, indexKizunaESprites_Chung, 0x00 },
    { L"Freezed A", 0x1723c0, 0x172400, indexKizunaESprites_Chung, 0x00 },
    { L"Emergency Tag A", 0x172400, 0x172420 },
    { L"Byakko Dan A", 0x172420, 0x172440 },
    { L"Rage Mode A", 0x172440, 0x172480, indexKizunaESprites_Chung, 0x00 },
    { L"Fire Attacks A", 0x172480, 0x1724a0 },
    { L"Keikei Henge 1 A", 0x1724a0, 0x1724c0 },
    { L"Sen Jushouda A", 0x1724c0, 0x1724e0 },
    { L"Background A", 0x172500, 0x172540, indexKizunaESprites_Chung, 0x00 },
    { L"Keikei Henge 2 A", 0x172540, 0x172560 },
    { L"Chicken A", 0x1725e0, 0x172600 },
};

const sGame_PaletteDataset Kizuna_A_CHUNGCOPY_PALETTES_B[] =
{
    { L"Chung Copy B", 0x174a00, 0x174a40, indexKizunaESprites_Chung, 0x00 },
    { L"Burned B", 0x174a40, 0x174a80, indexKizunaESprites_Chung, 0x00 },
    { L"Zapped B", 0x174a80, 0x174ac0, indexKizunaESprites_Chung, 0x00 },
    { L"Freezed B", 0x174ac0, 0x174b00, indexKizunaESprites_Chung, 0x00 },
    { L"Emergency Tag B", 0x174b00, 0x174b20 },
    { L"Byakko Dan B", 0x174b20, 0x174b40 },
    { L"Rage Mode B", 0x174b40, 0x174b80, indexKizunaESprites_Chung, 0x00 },
    { L"Fire Attacks B", 0x174b80, 0x174ba0 },
    { L"Keikei Henge 1 B", 0x174ba0, 0x174bc0 },
    { L"Sen Jushouda B", 0x174bc0, 0x174be0 },
    { L"Background B", 0x174c00, 0x174c40, indexKizunaESprites_Chung, 0x00 },
    { L"Keikei Henge 2 B", 0x174c40, 0x174c60 },
    { L"Chicken B", 0x174ce0, 0x174d00 },
};

const sGame_PaletteDataset Kizuna_A_CHUNG_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c740, 0x17c780 },
    { L"Select/HUD A", 0x17c4e0, 0x17c500 },
    { L"Tag Out A", 0x17c260, 0x17c280 },
    { L"Victory B", 0x17cb40, 0x17cb80 },
    { L"Select/HUD B", 0x17cee0, 0x17cf00 },
    { L"Tag Out B", 0x17c3a0, 0x17c3c0 },
};

const sGame_PaletteDataset Kizuna_A_GORDON_PALETTES_A[] =
{
    { L"Gordon Bowman A", 0x171a00, 0x171a40, indexKizunaESprites_Gordon, 0x00 },
    { L"Burned A", 0x171a40, 0x171a80, indexKizunaESprites_Gordon, 0x00 },
    { L"Zapped A", 0x171a80, 0x171ac0, indexKizunaESprites_Gordon, 0x00 },
    { L"Freezed A", 0x171ac0, 0x171b00, indexKizunaESprites_Gordon, 0x00 },
    { L"Hard Pressure A", 0x171b00, 0x171b20 },
    { L"Heat Palette A", 0x171b40, 0x171b60 },
    { L"Spark Palette A", 0x171b80, 0x171ba0 },
    { L"Special Spark Bolt A", 0x171ba0, 0x171bc0 },
    { L"Spark Bolt 1 A", 0x171bc0, 0x171be0 },
    { L"Spark Bolt 2 A", 0x171be0, 0x171c00 },
    { L"Background A", 0x171c00, 0x171c20, indexKizunaESprites_Gordon, 0x00 },
    { L"Background Lose A", 0x171c40, 0x171c60, indexKizunaESprites_Gordon, 0x00 },
    { L"Chicken A", 0x171ce0, 0x171d00 },
};

const sGame_PaletteDataset Kizuna_A_GORDON_PALETTES_B[] =
{
    { L"Gordon Bowman B", 0x174100, 0x174140, indexKizunaESprites_Gordon, 0x00 },
    { L"Burned B", 0x174140, 0x174180, indexKizunaESprites_Gordon, 0x00 },
    { L"Zapped B", 0x174180, 0x1741c0, indexKizunaESprites_Gordon, 0x00 },
    { L"Freezed B", 0x1741c0, 0x174200, indexKizunaESprites_Gordon, 0x00 },
    { L"Hard Pressure B", 0x174200, 0x174220 },
    { L"Heat Palette B", 0x174240, 0x174260 },
    { L"Spark Palette B", 0x174280, 0x1742a0 },
    { L"Special Spark Bolt B", 0x1742a0, 0x1742c0 },
    { L"Spark Bolt 1 B", 0x1742c0, 0x1742e0 },
    { L"Spark Bolt 2 B", 0x1742e0, 0x174300 },
    { L"Background B", 0x174300, 0x174320, indexKizunaESprites_Gordon, 0x00 },
    { L"Background Lose B", 0x174340, 0x174360, indexKizunaESprites_Gordon, 0x00 },
    { L"Chicken B", 0x1743e0, 0x174400 },
};

const sGame_PaletteDataset Kizuna_A_GORDON_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c780, 0x17c7a0 },
    { L"Select/HUD A", 0x17c500, 0x17c520 },
    { L"Tag Out A", 0x17c280, 0x17c2a0 },
    { L"Victory B", 0x17cb80, 0x17cba0 },
    { L"Select/HUD B", 0x17cf00, 0x17cf20 },
    { L"Tag Out B", 0x17c3c0, 0x17c3e0 },
};

const sGame_PaletteDataset Kizuna_A_KINGLION_PALETTES_A[] =
{
    { L"King Lion A", 0x171d00, 0x171d40, indexKizunaESprites_KingLion, 0x00 },
    { L"Burned A", 0x171d40, 0x171d80, indexKizunaESprites_KingLion, 0x00 },
    { L"Zapped A", 0x171d80, 0x171dc0, indexKizunaESprites_KingLion, 0x00 },
    { L"Freezed A", 0x171dc0, 0x171e00, indexKizunaESprites_KingLion, 0x00 },
    { L"King Straight-Upper A", 0x171e40, 0x171e60 },
    { L"Weapon Super Slash A", 0x171e60, 0x171e80 },
    { L"Beast Blow A", 0x171e80, 0x171ea0 },
    { L"God Bless A", 0x171ea0, 0x171ec0 },
    { L"Weapon Slash A", 0x171ee0, 0x171f00 },
    { L"Background A", 0x171f00, 0x171f20, indexKizunaESprites_KingLion, 0x00 },
    { L"Chicken A", 0x171fe0, 0x172000 },
};

const sGame_PaletteDataset Kizuna_A_KINGLION_PALETTES_B[] =
{
    { L"King Lion B", 0x174400, 0x174440, indexKizunaESprites_KingLion, 0x00 },
    { L"Burned B", 0x174440, 0x174480, indexKizunaESprites_KingLion, 0x00 },
    { L"Zapped B", 0x174480, 0x1744c0, indexKizunaESprites_KingLion, 0x00 },
    { L"Freezed B", 0x1744c0, 0x174500 },
    { L"King Straight-Upper B", 0x174540, 0x174560 },
    { L"Weapon Super Slash B", 0x174560, 0x174580 },
    { L"Beast Blow B", 0x174580, 0x1745a0 },
    { L"God Bless B", 0x1745a0, 0x1745c0 },
    { L"Weapon Slash B", 0x1745e0, 0x174600 },
    { L"Background B", 0x174600, 0x174620, indexKizunaESprites_KingLion, 0x00 },
    { L"Chicken B", 0x1746e0, 0x174700 },
};

const sGame_PaletteDataset Kizuna_A_KINGLION_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c7a0, 0x17c7e0 },
    { L"Select/HUD A", 0x17c540, 0x17c560 },
    { L"Tag Out A", 0x17c2a0, 0x17c2c0 },
    { L"Victory B", 0x17cba0, 0x17cbe0 },
    { L"Select/HUD B", 0x17cf40, 0x17cf60 },
    { L"Tag Out B", 0x17c3e0, 0x17c400 },
};

const sGame_PaletteDataset Kizuna_A_KINGLEO_PALETTES_A[] =
{
    { L"King Leo A", 0x172000, 0x172040, indexKizunaESprites_KingLion, 0x00 },
    { L"Burned A", 0x172040, 0x172080, indexKizunaESprites_KingLion, 0x00 },
    { L"Zapped A", 0x172080, 0x1720c0, indexKizunaESprites_KingLion, 0x00 },
    { L"Freezed A", 0x1720c0, 0x172100, indexKizunaESprites_KingLion, 0x00 },
    { L"King Straight-Upper A", 0x172140, 0x172160 },
    { L"Weapon Super Slash A", 0x172160, 0x172180 },
    { L"Attack Effects A", 0x172180, 0x1721a0 },
    { L"God Bless A", 0x1721a0, 0x1721c0 },
    { L"Intro Cape A", 0x1721c0, 0x1721e0 },
    { L"Weapon Slash A", 0x1721e0, 0x172200 },
    { L"Chicken A", 0x1722e0, 0x172300 },
};

const sGame_PaletteDataset Kizuna_A_KINGLEO_PALETTES_B[] =
{
    { L"King Leo B", 0x174700, 0x174740, indexKizunaESprites_KingLion, 0x00 },
    { L"Burned B", 0x174740, 0x174780, indexKizunaESprites_KingLion, 0x00 },
    { L"Zapped B", 0x174780, 0x1747c0, indexKizunaESprites_KingLion, 0x00 },
    { L"Freezed B", 0x1747c0, 0x174800, indexKizunaESprites_KingLion, 0x00 },
    { L"King Straight-Upper B", 0x174840, 0x174860 },
    { L"Weapon Super Slash B", 0x174860, 0x174880 },
    { L"Attack Effects B", 0x174880, 0x1748a0 },
    { L"God Bless B", 0x1748a0, 0x1748c0 },
    { L"Intro Cape B", 0x1748c0, 0x1748e0 },
    { L"Weapon Slash B", 0x1748e0, 0x174900 },
    { L"Chicken B", 0x1749e0, 0x174a00 },
};

const sGame_PaletteDataset Kizuna_A_KINGLEO_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c8a0, 0x17c8e0 },
    { L"Select/HUD A", 0x17c560, 0x17c580 },
    { L"Victory B", 0x17cca0, 0x17cce0 },
    { L"Select/HUD B", 0x17cf60, 0x17cf80 },
};

const sGame_PaletteDataset Kizuna_A_JAZU_PALETTES_A[] =
{
    { L"Jazu A", 0x172600, 0x172640 , indexKizunaESprites_Jazu, 0x00, &pairNext},
    { L"Jazu Mask A", 0x1727c0, 0x1727e0, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Burned A", 0x172640, 0x172660, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Burned Mask A", 0x172800, 0x172820, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Zapped A", 0x172680, 0x1726a0, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Zapped Mask A", 0x172840, 0x172860, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Freezed A", 0x1726c0, 0x1726e0, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Freezed Mask A", 0x172880, 0x1728a0, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Special Effect 1 A", 0x172700, 0x172720, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Special Effect 1 Mask A", 0x1726e0, 0x172700, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Special Effect 2 A", 0x172740, 0x172760, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Special Effect 2 Mask A", 0x172760, 0x172780, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Crow Winpose A", 0x172660, 0x172680 },
    { L"Goen Dan A", 0x172720, 0x172740 },
    { L"Yoen Ken-Kyaku A", 0x1727a0, 0x1727c0 },
    { L"Weapon Slash A", 0x1727e0, 0x172800 },
    { L"Mudo Enryu Ha A", 0x172820, 0x172840 },
    { L"Smoke A", 0x1728a0, 0x1728c0 },
    { L"Sayo Ma A", 0x1728c0, 0x1728e0 },
    { L"Jaga Zetsumei Chu Palette A", 0x172780, 0x1727a0 },
    { L"Jaga Zetsumei Chu Pentagram A", 0x172860, 0x172880 },
    { L"Jaga Zetsumei Chu Flames A", 0x1726a0, 0x1726c0 },
    { L"Chicken", 0x1728e0, 0x172900 },
};

const sGame_PaletteDataset Kizuna_A_JAZU_PALETTES_B[] =
{
    { L"Jazu B", 0x174d00, 0x174d40, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Jazu Mask B", 0x174ec0, 0x174ee0, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Burned B", 0x174d40, 0x174d60, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Burned Mask B", 0x174f00, 0x174f20, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Zapped B", 0x174d80, 0x174da0, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Zapped Mask B", 0x174f40, 0x174f60, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Freezed B", 0x174dc0, 0x174de0, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Freezed Mask B", 0x174f80, 0x174fa0, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Special Effect 1 B", 0x174e00, 0x174e20, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Special Effect 1 Mask B", 0x174de0, 0x174e00, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Special Effect 2 B", 0x174e40, 0x174e60, indexKizunaESprites_Jazu, 0x00, &pairNext },
    { L"Special Effect 2 Mask B", 0x174e60, 0x174e80, indexKizunaESprites_Jazu, 0x01, &pairPreviousFlipped },
    { L"Crow Winpose B", 0x174d60, 0x174d80 },
    { L"Goen Dan B", 0x174e20, 0x174e40 },
    { L"Yoen Ken-Kyaku B", 0x174ea0, 0x174ec0 },
    { L"Weapon Slash B", 0x174ee0, 0x174f00 },
    { L"Mudo Enryu Ha B", 0x174f20, 0x174f40 },
    { L"Smoke B", 0x174fa0, 0x174fc0 },
    { L"Sayo Ma B", 0x174fc0, 0x174fe0 },
    { L"Jaga Zetsumei Chu Palette B", 0x174e80, 0x174ea0 },
    { L"Jaga Zetsumei Chu Pentagram B", 0x174f60, 0x174f80 },
    { L"Jaga Zetsumei Chu Flames B", 0x174da0, 0x174dc0 },
    { L"Chicken B", 0x174fe0, 0x175000 },
};

const sGame_PaletteDataset Kizuna_A_JAZU_PALETTES_PORTRAITS[] =
{
    { L"Victory A", 0x17c8e0, 0x17c940 },
    { L"Select/HUD A", 0x17c520, 0x17c540 },
    { L"Victory B", 0x17cce0, 0x17cd40 },
    { L"Select/HUD B", 0x17cf20, 0x17cf40 },
};

const sGame_PaletteDataset Kizuna_A_BONUS_IGE_PALETTES[] =
{
    { L"Shared - Shadow", 0x1703a0, 0x1703c0 },
};

const sDescTreeNode Kizuna_A_HAYATE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_PALETTES_A, ARRAYSIZE(Kizuna_A_HAYATE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_PALETTES_B, ARRAYSIZE(Kizuna_A_HAYATE_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_HAYATE_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_EAGLE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_PALETTES_A, ARRAYSIZE(Kizuna_A_EAGLE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_PALETTES_B, ARRAYSIZE(Kizuna_A_EAGLE_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_EAGLE_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_GOZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_PALETTES_A, ARRAYSIZE(Kizuna_A_GOZU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_PALETTES_B, ARRAYSIZE(Kizuna_A_GOZU_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_GOZU_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_MEZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_PALETTES_A, ARRAYSIZE(Kizuna_A_MEZU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_PALETTES_B, ARRAYSIZE(Kizuna_A_MEZU_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_MEZU_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_ROSA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_PALETTES_A, ARRAYSIZE(Kizuna_A_ROSA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_PALETTES_B, ARRAYSIZE(Kizuna_A_ROSA_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_ROSA_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_PALETTES_A, ARRAYSIZE(Kizuna_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_PALETTES_B, ARRAYSIZE(Kizuna_A_KIM_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_KIM_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_JOKER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_PALETTES_A, ARRAYSIZE(Kizuna_A_JOKER_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_PALETTES_B, ARRAYSIZE(Kizuna_A_JOKER_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_JOKER_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_CHUNG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_PALETTES_A, ARRAYSIZE(Kizuna_A_CHUNG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_PALETTES_B, ARRAYSIZE(Kizuna_A_CHUNG_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_CHUNG_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_CHUNGCOPY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNGCOPY_PALETTES_A, ARRAYSIZE(Kizuna_A_CHUNGCOPY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNGCOPY_PALETTES_B, ARRAYSIZE(Kizuna_A_CHUNGCOPY_PALETTES_B) },
};

const sDescTreeNode Kizuna_A_GORDON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_PALETTES_A, ARRAYSIZE(Kizuna_A_GORDON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_PALETTES_B, ARRAYSIZE(Kizuna_A_GORDON_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_GORDON_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_KINGLION_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_PALETTES_A, ARRAYSIZE(Kizuna_A_KINGLION_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_PALETTES_B, ARRAYSIZE(Kizuna_A_KINGLION_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_KINGLION_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_KINGLEO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLEO_PALETTES_A, ARRAYSIZE(Kizuna_A_KINGLEO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLEO_PALETTES_B, ARRAYSIZE(Kizuna_A_KINGLEO_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLEO_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_KINGLEO_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_JAZU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)Kizuna_A_JAZU_PALETTES_A, ARRAYSIZE(Kizuna_A_JAZU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)Kizuna_A_JAZU_PALETTES_B, ARRAYSIZE(Kizuna_A_JAZU_PALETTES_B) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Kizuna_A_JAZU_PALETTES_PORTRAITS, ARRAYSIZE(Kizuna_A_JAZU_PALETTES_PORTRAITS) },
};

const sDescTreeNode Kizuna_A_BONUS_COLLECTION[] =
{
    { L"In-Game Effects", DESC_NODETYPE_TREE, (void*)Kizuna_A_BONUS_IGE_PALETTES, ARRAYSIZE(Kizuna_A_BONUS_IGE_PALETTES) },
};

const sDescTreeNode Kizuna_A_UNITS[] =
{
    { L"Hayate", DESC_NODETYPE_TREE, (void*)Kizuna_A_HAYATE_COLLECTION, ARRAYSIZE(Kizuna_A_HAYATE_COLLECTION) },
    { L"Eagle", DESC_NODETYPE_TREE, (void*)Kizuna_A_EAGLE_COLLECTION, ARRAYSIZE(Kizuna_A_EAGLE_COLLECTION) },
    { L"Gozu", DESC_NODETYPE_TREE, (void*)Kizuna_A_GOZU_COLLECTION, ARRAYSIZE(Kizuna_A_GOZU_COLLECTION) },
    { L"Mezu", DESC_NODETYPE_TREE, (void*)Kizuna_A_MEZU_COLLECTION, ARRAYSIZE(Kizuna_A_MEZU_COLLECTION) },
    { L"Rosa", DESC_NODETYPE_TREE, (void*)Kizuna_A_ROSA_COLLECTION, ARRAYSIZE(Kizuna_A_ROSA_COLLECTION) },
    { L"Kim", DESC_NODETYPE_TREE, (void*)Kizuna_A_KIM_COLLECTION, ARRAYSIZE(Kizuna_A_KIM_COLLECTION) },
    { L"Joker", DESC_NODETYPE_TREE, (void*)Kizuna_A_JOKER_COLLECTION, ARRAYSIZE(Kizuna_A_JOKER_COLLECTION) },
    { L"Chung", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNG_COLLECTION, ARRAYSIZE(Kizuna_A_CHUNG_COLLECTION) },
    { L"Gordon", DESC_NODETYPE_TREE, (void*)Kizuna_A_GORDON_COLLECTION, ARRAYSIZE(Kizuna_A_GORDON_COLLECTION) },
    { L"King Lion", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLION_COLLECTION, ARRAYSIZE(Kizuna_A_KINGLION_COLLECTION) },
    { L"King Leo", DESC_NODETYPE_TREE, (void*)Kizuna_A_KINGLEO_COLLECTION, ARRAYSIZE(Kizuna_A_KINGLEO_COLLECTION) },
    { L"Jazu", DESC_NODETYPE_TREE, (void*)Kizuna_A_JAZU_COLLECTION, ARRAYSIZE(Kizuna_A_JAZU_COLLECTION) },
    { L"Chung (Unused Copy)", DESC_NODETYPE_TREE, (void*)Kizuna_A_CHUNGCOPY_COLLECTION, ARRAYSIZE(Kizuna_A_CHUNGCOPY_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)Kizuna_A_BONUS_COLLECTION, ARRAYSIZE(Kizuna_A_BONUS_COLLECTION) },
};
