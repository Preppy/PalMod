#pragma once

const std::vector<uint16_t> AODK_A_IMGIDS_USED =
{
    indexAoDKSprites_Bobby,                 // 0xB2
    indexAoDKSprites_Fuuma,                 // 0xB3
    indexAoDKSprites_Goh,                   // 0xB4
    indexAoDKSprites_Joe,                   // 0xB5
    indexAoDKSprites_Kisarah,               // 0xB6
    indexAoDKSprites_Lee,                   // 0xB7
    indexAoDKSprites_Leonhalt,              // 0xB8
    indexAoDKSprites_Sheen,                 // 0xB9
    indexAoDKSprites_Stages,                // 0xBA
    indexAoDKSprites_Bonus,                 // 0xBB
};

const sGame_PaletteDataset AODK_A_GOH_A[] =
{
    { L"Goh A", 0x101200, 0x101220, indexAoDKSprites_Goh, 0x00 },
    { L"Goh A - Portrait 1", 0x101400, 0x101420, indexAoDKSprites_Goh, 0x40, &pairNext },
    { L"Goh A - Portrait 2", 0x101420, 0x101440, indexAoDKSprites_Goh, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_GOH_B[] =
{
    { L"Goh B", 0x101220, 0x101240, indexAoDKSprites_Goh, 0x00 },
    { L"Goh B - Portrait 1", 0x101e20, 0x101e40, indexAoDKSprites_Goh, 0x40, &pairNext },
    { L"Goh B - Portrait 2", 0x101440, 0x101460, indexAoDKSprites_Goh, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_JOE_A[] =
{
    { L"Joe A", 0x101300, 0x101320, indexAoDKSprites_Joe, 0x00, &pairNext },
    { L"Joe A - Katsuo", 0x101da0, 0x101dc0, indexAoDKSprites_Joe, 0x01, &pairPrevious },
    { L"Joe A - Portrait 1", 0x1014e0, 0x101500, indexAoDKSprites_Joe, 0x40, &pairNext },
    { L"Joe A - Portrait 2", 0x101500, 0x101520, indexAoDKSprites_Joe, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_JOE_B[] =
{
    { L"Joe B", 0x101320, 0x101340, indexAoDKSprites_Joe, 0x00, &pairNext },
    { L"Joe B - Katsuo", 0x101dc0, 0x101de0, indexAoDKSprites_Joe, 0x01, &pairPrevious },
    { L"Joe B - Portrait 1", 0x101e60, 0x101e80, indexAoDKSprites_Joe, 0x40, &pairNext },
    { L"Joe B - Portrait 2", 0x101520, 0x101540, indexAoDKSprites_Joe, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_KISARAH_A[] =
{
    { L"Kisarah A", 0x1013c0, 0x1013e0, indexAoDKSprites_Kisarah, 0x00 },
    { L"Kisarah A - Portrait 1", 0x101680, 0x1016a0, indexAoDKSprites_Kisarah, 0x40, &pairNext },
    { L"Kisarah A - Portrait 2", 0x1016a0, 0x1016c0, indexAoDKSprites_Kisarah, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_KISARAH_B[] =
{
    { L"Kisarah B", 0x1013e0, 0x101400, indexAoDKSprites_Kisarah, 0x00 },
    { L"Kisarah B - Portrait 1", 0x101ec0, 0x101ee0, indexAoDKSprites_Kisarah, 0x40, &pairNext },
    { L"Kisarah B - Portrait 2", 0x1016c0, 0x1016e0, indexAoDKSprites_Kisarah, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_KISARAH_SHARED[] =
{
    { L"Kisarah Shared - Jealousy Bomber", 0x101cc0, 0x101ce0, indexAoDKSprites_Kisarah, 0x01 },
};

const sGame_PaletteDataset AODK_A_BOBBY_A[] =
{
    { L"Bobby A", 0x101340, 0x101360, indexAoDKSprites_Bobby, 0x00 },
    { L"Bobby A - Portrait 1", 0x101540, 0x101560, indexAoDKSprites_Bobby, 0x40, &pairNext },
    { L"Bobby A - Portrait 2", 0x1015e0, 0x101600, indexAoDKSprites_Bobby, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_BOBBY_B[] =
{
    { L"Bobby B", 0x101360, 0x101380, indexAoDKSprites_Bobby, 0x00 },
    { L"Bobby B - Portrait 1", 0x101e80, 0x101ea0, indexAoDKSprites_Bobby, 0x40, &pairNext },
    { L"Bobby B - Portrait 2", 0x101600, 0x101620, indexAoDKSprites_Bobby, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_FUUMA_A[] =
{
    { L"Fuuma A", 0x101280, 0x1012a0, indexAoDKSprites_Fuuma, 0x00 },
    { L"Fuuma A - Portrait 1", 0x101460, 0x101480, indexAoDKSprites_Fuuma, 0x40, &pairNext },
    { L"Fuuma A - Portrait 2", 0x101480, 0x1014a0, indexAoDKSprites_Fuuma, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_FUUMA_B[] =
{
    { L"Fuuma B", 0x1012a0, 0x1012c0, indexAoDKSprites_Fuuma, 0x00 },
    { L"Fuuma B - Portrait 1", 0x101e40, 0x101e60, indexAoDKSprites_Fuuma, 0x40, &pairNext },
    { L"Fuuma B - Portrait 2", 0x1014a0, 0x1014c0, indexAoDKSprites_Fuuma, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_LEE_A[] =
{
    { L"Lee A", 0x1012c0, 0x1012e0, indexAoDKSprites_Lee, 0x00 },
    { L"Lee A - Portrait 1", 0x101620, 0x101640, indexAoDKSprites_Lee, 0x40, &pairNext },
    { L"Lee A - Portrait 2", 0x101640, 0x101660, indexAoDKSprites_Lee, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_LEE_B[] =
{
    { L"Lee B", 0x1012e0, 0x101300, indexAoDKSprites_Lee, 0x00 },
    { L"Lee B - Portrait 1", 0x101ea0, 0x101ec0, indexAoDKSprites_Lee, 0x40, &pairNext },
    { L"Lee B - Portrait 2", 0x101660, 0x101680, indexAoDKSprites_Lee, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_LEONHALT_A[] =
{
    { L"Leonhalt A", 0x101380, 0x1013a0, indexAoDKSprites_Leonhalt, 0x00, &pairNext },
    { L"Leonhalt A - Tiger", 0x101c00, 0x101c20, indexAoDKSprites_Leonhalt, 0x01, &pairPrevious },
    { L"Leonhalt A - Portrait 1", 0x1018c0, 0x1018e0, indexAoDKSprites_Leonhalt, 0x40, &pairNext },
    { L"Leonhalt A - Portrait 2", 0x101900, 0x101920, indexAoDKSprites_Leonhalt, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_LEONHALT_B[] =
{
    { L"Leonhalt B", 0x1013a0, 0x1013c0, indexAoDKSprites_Leonhalt, 0x00, &pairNext },
    { L"Leonhalt B - Tiger", 0x101c20, 0x101c40, indexAoDKSprites_Leonhalt, 0x01, &pairPrevious },
    { L"Leonhalt B - Portrait 1", 0x101f00, 0x101f20, indexAoDKSprites_Leonhalt, 0x40, &pairNext },
    { L"Leonhalt B - Portrait 2", 0x101920, 0x101940, indexAoDKSprites_Leonhalt, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_SHEEN_A[] =
{
    { L"Sheen A", 0x101240, 0x101260, indexAoDKSprites_Sheen, 0x00 },
    { L"Sheen A - Portrait 1", 0x1016e0, 0x101700, indexAoDKSprites_Sheen, 0x40, &pairNext },
    { L"Sheen A - Portrait 2", 0x101840, 0x101860, indexAoDKSprites_Sheen, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_SHEEN_B[] =
{
    { L"Sheen B", 0x101260, 0x101280, indexAoDKSprites_Sheen, 0x00 },
    { L"Sheen B - Portrait 1", 0x101ee0, 0x101f00, indexAoDKSprites_Sheen, 0x40, &pairNext },
    { L"Sheen B - Portrait 2", 0x101860, 0x101880, indexAoDKSprites_Sheen, 0x41, &pairPrevious },
};

const sGame_PaletteDataset AODK_A_BONUS_PALETTES_SELECT[] =
{
    { L"Various Text 1", 0x101020, 0x101040 },
    { L"Various Text 2", 0x101040, 0x101060 },
    { L"Tutorial Background", 0x108020, 0x108040 },
    { L"Tutorial Buttons & Joystick", 0x101100, 0x101120 },
    { L"Tutorial Letters", 0x101060, 0x101080 },
    { L"Tutorial Border", 0x101080, 0x1010a0 },
    { L"Tutorial Text", 0x1010a0, 0x1010c0 },
    { L"Select Screen Background", 0x108800, 0x108820 },
    { L"Select Screen Logo", 0x101880, 0x1018a0 },
    { L"Select Cursor 1P", 0x1010c0, 0x1010e0 },
    { L"Select Cursor 2P", 0x101000, 0x101020 },
    { L"Continue Text", 0x108600, 0x108620 },
    { L"Continue Numbers", 0x108620, 0x108640 },
};

const sGame_PaletteDataset AODK_A_BONUS_PALETTES_INGAME[] =
{
    { L"HUD", 0x101120, 0x101200 },
    { L"Big Text", 0x1018a0, 0x1018c0 },
    { L"Hitsparks", 0x1019c0, 0x1019e0 },
    { L"Male Spectator", 0x101d60, 0x101d80 },
    { L"Female Spectator", 0x101d80, 0x101da0 },
    { L"Molotov Cocktail", 0x101a40, 0x101a60 },
    { L"Katana Blades", 0x101aa0, 0x101ac0 },
    { L"Shovel", 0x101a60, 0x101a80 },
    { L"Club", 0x101a00, 0x101a20 },
    { L"Lose Portraits Damages", 0x101800, 0x101820, indexAoDKSprites_Bonus, 0x00 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_PARKING[] =
{
    { L"The Parking Lot (1/2) 0x103400", 0x103400, 0x103600 },
    { L"The Parking Lot (2/2) 0x103600", 0x103600, 0x103720 },
    { L"The Parking Lot - Extra", 0x101b60, 0x101b80 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_SUBWAY[] =
{
    { L"The Train Subway (1/2) 0x105000", 0x105000, 0x105200 },
    { L"The Train Subway (2/2) 0x105200", 0x105200, 0x105400 },
    { L"The Train Subway - Extra", 0x101b40, 0x101b60 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_STREETS[] =
{
    { L"The City Streets (1/2) 0x102000", 0x102000, 0x102200 },
    { L"The City Streets (2/2) 0x102200", 0x102200, 0x102400 },
    { L"The City Streets - Extra", 0x101a20, 0x101a40 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_BASKETBALL[] =
{
    { L"The Basketball Court (1/2) 0x104400", 0x104400, 0x104600 },
    { L"The Basketball Court (2/2) 0x104600", 0x104600, 0x104620 },
    { L"The Basketball Court - Extra", 0x101a80, 0x101aa0 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_FOREST[] =
{
    { L"The Forest (1/2) 0x104000", 0x104000, 0x104200 },
    { L"The Forest (2/2) 0x104200", 0x104200, 0x104240 },
    { L"The Forest - Extra", 0x101b00, 0x101b20 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_DOJO[] =
{
    { L"The Dojo (1/2) 0x102800", 0x102800, 0x102a00 },
    { L"The Dojo (2/2) 0x102a00", 0x102a00, 0x102b60 },
    { L"The Dojo - Extra", 0x101b20, 0x101b40 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_WASTELANDS[] =
{
    { L"The Wastelands (1/2) 0x105400", 0x105400, 0x105600 },
    { L"The Wastelands (2/2) 0x105600", 0x105600, 0x105800 },
    { L"The Wastelands - Extra", 0x101ae0, 0x101b00 },
};

const sGame_PaletteDataset AODK_A_STAGES_PALETTES_WRESTLING[] =
{
    { L"The Wrestling Ring (1/2) 0x102460", 0x102460, 0x102660 },
    { L"The Wrestling Ring (2/2) 0x102660", 0x102660, 0x102800 },
};


const sDescTreeNode AODK_A_GOH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_GOH_A, ARRAYSIZE(AODK_A_GOH_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_GOH_B, ARRAYSIZE(AODK_A_GOH_B) },
};

const sDescTreeNode AODK_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_JOE_A, ARRAYSIZE(AODK_A_JOE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_JOE_B, ARRAYSIZE(AODK_A_JOE_B) },
};

const sDescTreeNode AODK_A_KISARAH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_KISARAH_A, ARRAYSIZE(AODK_A_KISARAH_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_KISARAH_B, ARRAYSIZE(AODK_A_KISARAH_B) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)AODK_A_KISARAH_SHARED, ARRAYSIZE(AODK_A_KISARAH_SHARED) },
};

const sDescTreeNode AODK_A_BOBBY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_BOBBY_A, ARRAYSIZE(AODK_A_BOBBY_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_BOBBY_B, ARRAYSIZE(AODK_A_BOBBY_B) },
};

const sDescTreeNode AODK_A_FUUMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_FUUMA_A, ARRAYSIZE(AODK_A_FUUMA_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_FUUMA_B, ARRAYSIZE(AODK_A_FUUMA_B) },
};

const sDescTreeNode AODK_A_LEE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_LEE_A, ARRAYSIZE(AODK_A_LEE_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_LEE_B, ARRAYSIZE(AODK_A_LEE_B) },
};

const sDescTreeNode AODK_A_LEONHALT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_LEONHALT_A, ARRAYSIZE(AODK_A_LEONHALT_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_LEONHALT_B, ARRAYSIZE(AODK_A_LEONHALT_B) },
};

const sDescTreeNode AODK_A_SHEEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)AODK_A_SHEEN_A, ARRAYSIZE(AODK_A_SHEEN_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)AODK_A_SHEEN_B, ARRAYSIZE(AODK_A_SHEEN_B) },
};

const sDescTreeNode AODK_A_STAGES_COLLECTION[] =
{
    { L"The Parking Lot", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_PARKING, ARRAYSIZE(AODK_A_STAGES_PALETTES_PARKING) },
    { L"The Train Subway", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_SUBWAY, ARRAYSIZE(AODK_A_STAGES_PALETTES_SUBWAY) },
    { L"The City Streets", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_STREETS, ARRAYSIZE(AODK_A_STAGES_PALETTES_STREETS) },
    { L"The Basketball Court", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_BASKETBALL, ARRAYSIZE(AODK_A_STAGES_PALETTES_BASKETBALL) },
    { L"The Forest", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_FOREST, ARRAYSIZE(AODK_A_STAGES_PALETTES_FOREST) },
    { L"The Dojo", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_DOJO, ARRAYSIZE(AODK_A_STAGES_PALETTES_DOJO) },
    { L"The Wastelands", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_WASTELANDS, ARRAYSIZE(AODK_A_STAGES_PALETTES_WASTELANDS) },
    { L"The Wrestling Ring", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_PALETTES_WRESTLING, ARRAYSIZE(AODK_A_STAGES_PALETTES_WRESTLING) },
};

const sDescTreeNode AODK_A_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)AODK_A_BONUS_PALETTES_SELECT, ARRAYSIZE(AODK_A_BONUS_PALETTES_SELECT) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)AODK_A_BONUS_PALETTES_INGAME, ARRAYSIZE(AODK_A_BONUS_PALETTES_INGAME) },
};

const sDescTreeNode AODK_A_UNITS[] =
{
    { L"Goh Kidokoro", DESC_NODETYPE_TREE, (void*)AODK_A_GOH_COLLECTION, ARRAYSIZE(AODK_A_GOH_COLLECTION) },
    { L"Joe Kusanagi", DESC_NODETYPE_TREE, (void*)AODK_A_JOE_COLLECTION, ARRAYSIZE(AODK_A_JOE_COLLECTION) },
    { L"Kisarah Westfield", DESC_NODETYPE_TREE, (void*)AODK_A_KISARAH_COLLECTION, ARRAYSIZE(AODK_A_KISARAH_COLLECTION) },
    { L"Bobby Nelson", DESC_NODETYPE_TREE, (void*)AODK_A_BOBBY_COLLECTION, ARRAYSIZE(AODK_A_BOBBY_COLLECTION) },
    { L"Fuuma Kotaro", DESC_NODETYPE_TREE, (void*)AODK_A_FUUMA_COLLECTION, ARRAYSIZE(AODK_A_FUUMA_COLLECTION) },
    { L"Lee Hae Gwon", DESC_NODETYPE_TREE, (void*)AODK_A_LEE_COLLECTION, ARRAYSIZE(AODK_A_LEE_COLLECTION) },
    { L"Leonhalt Domador", DESC_NODETYPE_TREE, (void*)AODK_A_LEONHALT_COLLECTION, ARRAYSIZE(AODK_A_LEONHALT_COLLECTION) },
    { L"Sheen Genus", DESC_NODETYPE_TREE, (void*)AODK_A_SHEEN_COLLECTION, ARRAYSIZE(AODK_A_SHEEN_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)AODK_A_STAGES_COLLECTION, ARRAYSIZE(AODK_A_STAGES_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)AODK_A_BONUS_COLLECTION, ARRAYSIZE(AODK_A_BONUS_COLLECTION) },
};
