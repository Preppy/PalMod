#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to KOFEX2_GBA_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> KOFEX2_GBA_IMG_UNITS =
{
    indexKOF00Sprites_Andy,         // 0x206
    indexKOF00Sprites_Athena,       // 0x207
    indexKOF00Sprites_Bao,          // 0x208
    indexKOF00Sprites_Chang,        // 0x20b
    indexKOF00Sprites_Clark,        // 0x20e
    indexKOF00Sprites_Iori,         // 0x211
    indexKOF00Sprites_Kensou,       // 0x216
    indexKOF00Sprites_Kim,          // 0x217
    indexKOF00Sprites_Kyo,          // 0x21a
    indexKOF00Sprites_Leona,        // 0x21b
    indexKOF00Sprites_Mai,          // 0x21d
    indexKOF00Sprites_Ralf,         // 0x21f
    indexKOF00Sprites_Ryo,          // 0x222
    indexKOF00Sprites_Takuma,       // 0x225
    indexKOF00Sprites_Terry,        // 0x226
    indexKOF00Sprites_Yuri,         // 0x229
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_MAIN[] =
{
    { L"Main", 0x575508, 0x575528, indexKOF00Sprites_Kyo },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_ALT[] =
{
    { L"Alt", 0x575528, 0x575548, indexKOF00Sprites_Kyo },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_FLASH[] =
{
    { L"MASTER Mode", 0x5755a8, 0x5755c8, indexKOF00Sprites_Kyo },
    { L"Shocked", 0x575588, 0x5755a8, indexKOF00Sprites_Kyo },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_PORTRAIT[] =
{
    { L"Portrait", 0x7bd6bc, 0x7bd6dc },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_UNUSED[] =
{
    { L"Unused? 1", 0x575548, 0x575568, indexKOF00Sprites_Kyo },
    { L"Unused? 2", 0x575568, 0x575588, indexKOF00Sprites_Kyo },
    { L"Unused? 3", 0x5755e8, 0x575608, indexKOF00Sprites_Kyo },
    { L"Unused? 4", 0x575608, 0x575628, indexKOF00Sprites_Kyo },
    { L"Unused? 5", 0x575628, 0x575648, indexKOF00Sprites_Kyo },
    { L"Unused? 6", 0x575648, 0x575668, indexKOF00Sprites_Kyo },
    { L"Unused? 7", 0x575668, 0x575688, indexKOF00Sprites_Kyo },
    { L"Unused? 8", 0x575688, 0x5756a8, indexKOF00Sprites_Kyo },
    { L"Unused? 9", 0x575708, 0x575728, indexKOF00Sprites_Kyo },
    { L"Unused? 10", 0x575728, 0x575748, indexKOF00Sprites_Kyo },
    { L"Unused? Shocked", 0x5756a8, 0x5756c8, indexKOF00Sprites_Kyo },
    { L"Unused? MASTER Mode", 0x5756c8, 0x5756e8, indexKOF00Sprites_Kyo },
    { L"Unused? Purple Trail", 0x5755c8, 0x5755e8, indexKOF00Sprites_Kyo },
    { L"Unused? Purple Trail", 0x5756e8, 0x575708, indexKOF00Sprites_Kyo },
};

const sDescTreeNode KOFEX2_GBA_KYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KYO_MAIN, ARRAYSIZE(KOFEX2_GBA_KYO_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KYO_ALT, ARRAYSIZE(KOFEX2_GBA_KYO_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KYO_FLASH, ARRAYSIZE(KOFEX2_GBA_KYO_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KYO_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_KYO_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KYO_UNUSED, ARRAYSIZE(KOFEX2_GBA_KYO_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_MOE_MAIN[] =
{
    { L"Main", 0x5a43f4, 0x5a4414 },
};

const sGame_PaletteDataset KOFEX2_GBA_MOE_ALT[] =
{
    { L"Alt", 0x5a4414, 0x5a4434 },
};

const sGame_PaletteDataset KOFEX2_GBA_MOE_FLASH[] =
{
    { L"MASTER Mode", 0x5a4494, 0x5a44b4 },
    { L"Shocked", 0x5a4474, 0x5a4494 },
};

const sGame_PaletteDataset KOFEX2_GBA_MOE_PORTRAIT[] =
{
    { L"Portrait", 0x7bd6dc, 0x7bd6fc },
};

const sGame_PaletteDataset KOFEX2_GBA_MOE_UNUSED[] =
{
    { L"Unused? 1", 0x5a4434, 0x5a4454 },
    { L"Unused? 2", 0x5a4454, 0x5a4474 },
    { L"Unused? 3", 0x5a44d4, 0x5a44f4 },
    { L"Unused? 4", 0x5a44f4, 0x5a4514 },
    { L"Unused? 5", 0x5a4514, 0x5a4534 },
    { L"Unused? 6", 0x5a4534, 0x5a4554 },
    { L"Unused? 7", 0x5a4554, 0x5a4574 },
    { L"Unused? 8", 0x5a4574, 0x5a4594 },
    { L"Unused? 9", 0x5a45f4, 0x5a4614 },
    { L"Unused? 10", 0x5a4614, 0x5a4634 },
    { L"Unused? Shocked", 0x5a4594, 0x5a45b4 },
    { L"Unused? MASTER Mode", 0x5a45b4, 0x5a45d4 },
    { L"Unused? Purple Trail", 0x5a44b4, 0x5a44d4 },
    { L"Unused? Purple Trail", 0x5a45d4, 0x5a45f4 },
};

const sDescTreeNode KOFEX2_GBA_MOE_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MOE_MAIN, ARRAYSIZE(KOFEX2_GBA_MOE_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MOE_ALT, ARRAYSIZE(KOFEX2_GBA_MOE_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MOE_FLASH, ARRAYSIZE(KOFEX2_GBA_MOE_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MOE_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_MOE_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MOE_UNUSED, ARRAYSIZE(KOFEX2_GBA_MOE_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_REIJI_MAIN[] =
{
    { L"Main", 0x5872c4, 0x5872e4 },
};

const sGame_PaletteDataset KOFEX2_GBA_REIJI_ALT[] =
{
    { L"Alt", 0x5872e4, 0x587304 },
};

const sGame_PaletteDataset KOFEX2_GBA_REIJI_FLASH[] =
{
    { L"MASTER Mode", 0x587364, 0x587384 },
    { L"Shocked", 0x587344, 0x587364 },
};

const sGame_PaletteDataset KOFEX2_GBA_REIJI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd6fc, 0x7bd71c },
};

const sGame_PaletteDataset KOFEX2_GBA_REIJI_UNUSED[] =
{
    { L"Unused? 1", 0x587304, 0x587324 },
    { L"Unused? 2", 0x587324, 0x587344 },
    { L"Unused? 3", 0x5873a4, 0x5873c4 },
    { L"Unused? 4", 0x5873c4, 0x5873e4 },
    { L"Unused? 5", 0x5873e4, 0x587404 },
    { L"Unused? 6", 0x587404, 0x587424 },
    { L"Unused? 7", 0x587424, 0x587444 },
    { L"Unused? 8", 0x587444, 0x587464 },
    { L"Unused? 9", 0x5874c4, 0x5874e4 },
    { L"Unused? 10", 0x5874e4, 0x587504 },
    { L"Unused? Shocked", 0x587464, 0x587484 },
    { L"Unused? MASTER Mode", 0x587484, 0x5874a4 },
    { L"Unused? Purple Trail", 0x587384, 0x5873a4 },
    { L"Unused? Purple Trail", 0x5874a4, 0x5874c4 },
};

const sDescTreeNode KOFEX2_GBA_REIJI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_REIJI_MAIN, ARRAYSIZE(KOFEX2_GBA_REIJI_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_REIJI_ALT, ARRAYSIZE(KOFEX2_GBA_REIJI_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_REIJI_FLASH, ARRAYSIZE(KOFEX2_GBA_REIJI_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_REIJI_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_REIJI_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_REIJI_UNUSED, ARRAYSIZE(KOFEX2_GBA_REIJI_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_MAIN[] =
{
    { L"Main", 0x514ce0, 0x514d00, indexKOF00Sprites_Terry },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_ALT[] =
{
    { L"Alt", 0x514d00, 0x514d20, indexKOF00Sprites_Terry },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_FLASH[] =
{
    { L"MASTER Mode", 0x514d80, 0x514da0, indexKOF00Sprites_Terry },
    { L"Shocked", 0x514d60, 0x514d80, indexKOF00Sprites_Terry },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_PORTRAIT[] =
{
    { L"Portrait", 0x7bd71c, 0x7bd73c },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_UNUSED[] =
{
    { L"Unused? 1", 0x514d20, 0x514d40, indexKOF00Sprites_Terry },
    { L"Unused? 2", 0x514d40, 0x514d60, indexKOF00Sprites_Terry },
    { L"Unused? 3", 0x514dc0, 0x514de0, indexKOF00Sprites_Terry },
    { L"Unused? 4", 0x514de0, 0x514e00, indexKOF00Sprites_Terry },
    { L"Unused? 5", 0x514e00, 0x514e20, indexKOF00Sprites_Terry },
    { L"Unused? 6", 0x514e20, 0x514e40, indexKOF00Sprites_Terry },
    { L"Unused? 7", 0x514e40, 0x514e60, indexKOF00Sprites_Terry },
    { L"Unused? 8", 0x514e60, 0x514e80, indexKOF00Sprites_Terry },
    { L"Unused? 9", 0x514ee0, 0x514f00, indexKOF00Sprites_Terry },
    { L"Unused? 10", 0x514f00, 0x514f20, indexKOF00Sprites_Terry },
    { L"Unused? Shocked", 0x514e80, 0x514ea0, indexKOF00Sprites_Terry },
    { L"Unused? MASTER Mode", 0x514ea0, 0x514ec0, indexKOF00Sprites_Terry },
    { L"Unused? Purple Trail", 0x514da0, 0x514dc0, indexKOF00Sprites_Terry },
    { L"Unused? Purple Trail", 0x514ec0, 0x514ee0, indexKOF00Sprites_Terry },
};

const sDescTreeNode KOFEX2_GBA_TERRY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TERRY_MAIN, ARRAYSIZE(KOFEX2_GBA_TERRY_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TERRY_ALT, ARRAYSIZE(KOFEX2_GBA_TERRY_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TERRY_FLASH, ARRAYSIZE(KOFEX2_GBA_TERRY_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TERRY_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_TERRY_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TERRY_UNUSED, ARRAYSIZE(KOFEX2_GBA_TERRY_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_MAIN[] =
{
    { L"Main", 0x51a978, 0x51a998, indexKOF00Sprites_Andy },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_ALT[] =
{
    { L"Alt", 0x51a998, 0x51a9b8, indexKOF00Sprites_Andy },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_FLASH[] =
{
    { L"MASTER Mode", 0x51aa18, 0x51aa38, indexKOF00Sprites_Andy },
    { L"Shocked", 0x51a9f8, 0x51aa18, indexKOF00Sprites_Andy },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_PORTRAIT[] =
{
    { L"Portrait", 0x7bd73c, 0x7bd75c },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_UNUSED[] =
{
    { L"Unused? 1", 0x51a9b8, 0x51a9d8, indexKOF00Sprites_Andy },
    { L"Unused? 2", 0x51a9d8, 0x51a9f8, indexKOF00Sprites_Andy },
    { L"Unused? 3", 0x51aa58, 0x51aa78, indexKOF00Sprites_Andy },
    { L"Unused? 4", 0x51aa78, 0x51aa98, indexKOF00Sprites_Andy },
    { L"Unused? 5", 0x51aa98, 0x51aab8, indexKOF00Sprites_Andy },
    { L"Unused? 6", 0x51aab8, 0x51aad8, indexKOF00Sprites_Andy },
    { L"Unused? 7", 0x51aad8, 0x51aaf8, indexKOF00Sprites_Andy },
    { L"Unused? 8", 0x51aaf8, 0x51ab18, indexKOF00Sprites_Andy },
    { L"Unused? 9", 0x51ab78, 0x51ab98, indexKOF00Sprites_Andy },
    { L"Unused? 10", 0x51ab98, 0x51abb8, indexKOF00Sprites_Andy },
    { L"Unused? Shocked", 0x51ab18, 0x51ab38, indexKOF00Sprites_Andy },
    { L"Unused? MASTER Mode", 0x51ab38, 0x51ab58, indexKOF00Sprites_Andy },
    { L"Unused? Purple Trail", 0x51aa38, 0x51aa58, indexKOF00Sprites_Andy },
    { L"Unused? Purple Trail", 0x51ab58, 0x51ab78, indexKOF00Sprites_Andy },
};

const sDescTreeNode KOFEX2_GBA_ANDY_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ANDY_MAIN, ARRAYSIZE(KOFEX2_GBA_ANDY_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ANDY_ALT, ARRAYSIZE(KOFEX2_GBA_ANDY_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ANDY_FLASH, ARRAYSIZE(KOFEX2_GBA_ANDY_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ANDY_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_ANDY_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ANDY_UNUSED, ARRAYSIZE(KOFEX2_GBA_ANDY_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_MAIN[] =
{
    { L"Main", 0x520e8c, 0x520eac, indexKOF00Sprites_Mai },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_ALT[] =
{
    { L"Alt", 0x520eac, 0x520ecc, indexKOF00Sprites_Mai },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_FLASH[] =
{
    { L"MASTER Mode", 0x520f2c, 0x520f4c, indexKOF00Sprites_Mai },
    { L"Shocked", 0x520f0c, 0x520f2c, indexKOF00Sprites_Mai },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd75c, 0x7bd77c },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_UNUSED[] =
{
    { L"Unused? 1", 0x520ecc, 0x520eec, indexKOF00Sprites_Mai },
    { L"Unused? 2", 0x520eec, 0x520f0c, indexKOF00Sprites_Mai },
    { L"Unused? 3", 0x520f6c, 0x520f8c, indexKOF00Sprites_Mai },
    { L"Unused? 4", 0x520f8c, 0x520fac, indexKOF00Sprites_Mai },
    { L"Unused? 5", 0x520fac, 0x520fcc, indexKOF00Sprites_Mai },
    { L"Unused? 6", 0x520fcc, 0x520fec, indexKOF00Sprites_Mai },
    { L"Unused? 7", 0x520fec, 0x52100c, indexKOF00Sprites_Mai },
    { L"Unused? 8", 0x52100c, 0x52102c, indexKOF00Sprites_Mai },
    { L"Unused? 9", 0x52108c, 0x5210ac, indexKOF00Sprites_Mai },
    { L"Unused? 10", 0x5210ac, 0x5210cc, indexKOF00Sprites_Mai },
    { L"Unused? Shocked", 0x52102c, 0x52104c, indexKOF00Sprites_Mai },
    { L"Unused? MASTER Mode", 0x52104c, 0x52106c, indexKOF00Sprites_Mai },
    { L"Unused? Purple Trail", 0x520f4c, 0x520f6c, indexKOF00Sprites_Mai },
    { L"Unused? Purple Trail", 0x52106c, 0x52108c, indexKOF00Sprites_Mai },
};

const sDescTreeNode KOFEX2_GBA_MAI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MAI_MAIN, ARRAYSIZE(KOFEX2_GBA_MAI_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MAI_ALT, ARRAYSIZE(KOFEX2_GBA_MAI_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MAI_FLASH, ARRAYSIZE(KOFEX2_GBA_MAI_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MAI_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_MAI_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MAI_UNUSED, ARRAYSIZE(KOFEX2_GBA_MAI_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_MAIN[] =
{
    { L"Main", 0x53b4d4, 0x53b4f4, indexKOF00Sprites_Leona },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_ALT[] =
{
    { L"Alt", 0x53b4f4, 0x53b514, indexKOF00Sprites_Leona },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_FLASH[] =
{
    { L"MASTER Mode", 0x53b574, 0x53b594, indexKOF00Sprites_Leona },
    { L"Shocked", 0x53b554, 0x53b574, indexKOF00Sprites_Leona },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_PORTRAIT[] =
{
    { L"Portrait", 0x7bd77c, 0x7bd79c },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_UNUSED[] =
{
    { L"Unused? 1", 0x53b514, 0x53b534, indexKOF00Sprites_Leona },
    { L"Unused? 2", 0x53b534, 0x53b554, indexKOF00Sprites_Leona },
    { L"Unused? 3", 0x53b5b4, 0x53b5d4, indexKOF00Sprites_Leona },
    { L"Unused? 4", 0x53b5d4, 0x53b5f4, indexKOF00Sprites_Leona },
    { L"Unused? 5", 0x53b5f4, 0x53b614, indexKOF00Sprites_Leona },
    { L"Unused? 6", 0x53b614, 0x53b634, indexKOF00Sprites_Leona },
    { L"Unused? 7", 0x53b634, 0x53b654, indexKOF00Sprites_Leona },
    { L"Unused? 8", 0x53b654, 0x53b674, indexKOF00Sprites_Leona },
    { L"Unused? 9", 0x53b6d4, 0x53b6f4, indexKOF00Sprites_Leona },
    { L"Unused? 10", 0x53b6f4, 0x53b714, indexKOF00Sprites_Leona },
    { L"Unused? Shocked", 0x53b674, 0x53b694, indexKOF00Sprites_Leona },
    { L"Unused? MASTER Mode", 0x53b694, 0x53b6b4, indexKOF00Sprites_Leona },
    { L"Unused? Purple Trail", 0x53b594, 0x53b5b4, indexKOF00Sprites_Leona },
    { L"Unused? Purple Trail", 0x53b6b4, 0x53b6d4, indexKOF00Sprites_Leona },
};

const sDescTreeNode KOFEX2_GBA_LEONA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_LEONA_MAIN, ARRAYSIZE(KOFEX2_GBA_LEONA_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_LEONA_ALT, ARRAYSIZE(KOFEX2_GBA_LEONA_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_LEONA_FLASH, ARRAYSIZE(KOFEX2_GBA_LEONA_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_LEONA_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_LEONA_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_LEONA_UNUSED, ARRAYSIZE(KOFEX2_GBA_LEONA_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_MAIN[] =
{
    { L"Main", 0x54158c, 0x5415ac, indexKOF00Sprites_Ralf },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_ALT[] =
{
    { L"Alt", 0x5415ac, 0x5415cc, indexKOF00Sprites_Ralf },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_FLASH[] =
{
    { L"MASTER Mode", 0x54162c, 0x54164c, indexKOF00Sprites_Ralf },
    { L"Shocked", 0x54160c, 0x54162c, indexKOF00Sprites_Ralf },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_PORTRAIT[] =
{
    { L"Portrait", 0x7bd79c, 0x7bd7bc },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_UNUSED[] =
{
    { L"Unused? 1", 0x5415cc, 0x5415ec, indexKOF00Sprites_Ralf },
    { L"Unused? 2", 0x5415ec, 0x54160c, indexKOF00Sprites_Ralf },
    { L"Unused? 3", 0x54166c, 0x54168c, indexKOF00Sprites_Ralf },
    { L"Unused? 4", 0x54168c, 0x5416ac, indexKOF00Sprites_Ralf },
    { L"Unused? 5", 0x5416ac, 0x5416cc, indexKOF00Sprites_Ralf },
    { L"Unused? 6", 0x5416cc, 0x5416ec, indexKOF00Sprites_Ralf },
    { L"Unused? 7", 0x5416ec, 0x54170c, indexKOF00Sprites_Ralf },
    { L"Unused? 8", 0x54170c, 0x54172c, indexKOF00Sprites_Ralf },
    { L"Unused? 9", 0x54178c, 0x5417ac, indexKOF00Sprites_Ralf },
    { L"Unused? 10", 0x5417ac, 0x5417cc, indexKOF00Sprites_Ralf },
    { L"Unused? Shocked", 0x54172c, 0x54174c, indexKOF00Sprites_Ralf },
    { L"Unused? MASTER Mode", 0x54174c, 0x54176c, indexKOF00Sprites_Ralf },
    { L"Unused? Purple Trail", 0x54164c, 0x54166c, indexKOF00Sprites_Ralf },
    { L"Unused? Purple Trail", 0x54176c, 0x54178c, indexKOF00Sprites_Ralf },
};

const sDescTreeNode KOFEX2_GBA_RALF_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RALF_MAIN, ARRAYSIZE(KOFEX2_GBA_RALF_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RALF_ALT, ARRAYSIZE(KOFEX2_GBA_RALF_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RALF_FLASH, ARRAYSIZE(KOFEX2_GBA_RALF_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RALF_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_RALF_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RALF_UNUSED, ARRAYSIZE(KOFEX2_GBA_RALF_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_MAIN[] =
{
    { L"Main", 0x547410, 0x547430, indexKOF00Sprites_Clark },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_ALT[] =
{
    { L"Alt", 0x547430, 0x547450, indexKOF00Sprites_Clark },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_FLASH[] =
{
    { L"MASTER Mode", 0x5474b0, 0x5474d0, indexKOF00Sprites_Clark },
    { L"Shocked", 0x547490, 0x5474b0, indexKOF00Sprites_Clark },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_PORTRAIT[] =
{
    { L"Portrait", 0x7bd7bc, 0x7bd7dc },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_UNUSED[] =
{
    { L"Unused? 1", 0x547450, 0x547470, indexKOF00Sprites_Clark },
    { L"Unused? 2", 0x547470, 0x547490, indexKOF00Sprites_Clark },
    { L"Unused? 3", 0x5474f0, 0x547510, indexKOF00Sprites_Clark },
    { L"Unused? 4", 0x547510, 0x547530, indexKOF00Sprites_Clark },
    { L"Unused? 5", 0x547530, 0x547550, indexKOF00Sprites_Clark },
    { L"Unused? 6", 0x547550, 0x547570, indexKOF00Sprites_Clark },
    { L"Unused? 7", 0x547570, 0x547590, indexKOF00Sprites_Clark },
    { L"Unused? 8", 0x547590, 0x5475b0, indexKOF00Sprites_Clark },
    { L"Unused? 9", 0x547610, 0x547630, indexKOF00Sprites_Clark },
    { L"Unused? 10", 0x547630, 0x547650, indexKOF00Sprites_Clark },
    { L"Unused? Shocked", 0x5475b0, 0x5475d0, indexKOF00Sprites_Clark },
    { L"Unused? MASTER Mode", 0x5475d0, 0x5475f0, indexKOF00Sprites_Clark },
    { L"Unused? Purple Trail", 0x5474d0, 0x5474f0, indexKOF00Sprites_Clark },
    { L"Unused? Purple Trail", 0x5475f0, 0x547610, indexKOF00Sprites_Clark },
};

const sDescTreeNode KOFEX2_GBA_CLARK_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CLARK_MAIN, ARRAYSIZE(KOFEX2_GBA_CLARK_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CLARK_ALT, ARRAYSIZE(KOFEX2_GBA_CLARK_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CLARK_FLASH, ARRAYSIZE(KOFEX2_GBA_CLARK_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CLARK_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_CLARK_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CLARK_UNUSED, ARRAYSIZE(KOFEX2_GBA_CLARK_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_MAIN[] =
{
    { L"Main", 0x560b24, 0x560b44, indexKOF00Sprites_Kim },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_ALT[] =
{
    { L"Alt", 0x560b44, 0x560b64, indexKOF00Sprites_Kim },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_FLASH[] =
{
    { L"MASTER Mode", 0x560bc4, 0x560be4, indexKOF00Sprites_Kim },
    { L"Shocked", 0x560ba4, 0x560bc4, indexKOF00Sprites_Kim },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_PORTRAIT[] =
{
    { L"Portrait", 0x7bd7dc, 0x7bd7fc },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_UNUSED[] =
{
    { L"Unused? 1", 0x560b64, 0x560b84, indexKOF00Sprites_Kim },
    { L"Unused? 2", 0x560b84, 0x560ba4, indexKOF00Sprites_Kim },
    { L"Unused? 3", 0x560c04, 0x560c24, indexKOF00Sprites_Kim },
    { L"Unused? 4", 0x560c24, 0x560c44, indexKOF00Sprites_Kim },
    { L"Unused? 5", 0x560c44, 0x560c64, indexKOF00Sprites_Kim },
    { L"Unused? 6", 0x560c64, 0x560c84, indexKOF00Sprites_Kim },
    { L"Unused? 7", 0x560c84, 0x560ca4, indexKOF00Sprites_Kim },
    { L"Unused? 8", 0x560ca4, 0x560cc4, indexKOF00Sprites_Kim },
    { L"Unused? 9", 0x560d24, 0x560d44, indexKOF00Sprites_Kim },
    { L"Unused? 10", 0x560d44, 0x560d64, indexKOF00Sprites_Kim },
    { L"Unused? Shocked", 0x560cc4, 0x560ce4, indexKOF00Sprites_Kim },
    { L"Unused? MASTER Mode", 0x560ce4, 0x560d04, indexKOF00Sprites_Kim },
    { L"Unused? Purple Trail", 0x560be4, 0x560c04, indexKOF00Sprites_Kim },
    { L"Unused? Purple Trail", 0x560d04, 0x560d24, indexKOF00Sprites_Kim },
};

const sDescTreeNode KOFEX2_GBA_KIM_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KIM_MAIN, ARRAYSIZE(KOFEX2_GBA_KIM_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KIM_ALT, ARRAYSIZE(KOFEX2_GBA_KIM_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KIM_FLASH, ARRAYSIZE(KOFEX2_GBA_KIM_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KIM_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_KIM_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KIM_UNUSED, ARRAYSIZE(KOFEX2_GBA_KIM_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_MAIN[] =
{
    { L"Main", 0x56e19c, 0x56e1bc, indexKOF00Sprites_Chang },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_ALT[] =
{
    { L"Alt", 0x56e1bc, 0x56e1dc, indexKOF00Sprites_Chang },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_FLASH[] =
{
    { L"MASTER Mode", 0x56e23c, 0x56e25c, indexKOF00Sprites_Chang },
    { L"Shocked", 0x56e21c, 0x56e23c, indexKOF00Sprites_Chang },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_PORTRAIT[] =
{
    { L"Portrait", 0x7bd81c, 0x7bd83c },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_UNUSED[] =
{
    { L"Unused? 1", 0x56e1dc, 0x56e1fc, indexKOF00Sprites_Chang },
    { L"Unused? 2", 0x56e1fc, 0x56e21c, indexKOF00Sprites_Chang },
    { L"Unused? 3", 0x56e27c, 0x56e29c, indexKOF00Sprites_Chang },
    { L"Unused? 4", 0x56e29c, 0x56e2bc, indexKOF00Sprites_Chang },
    { L"Unused? 5", 0x56e2bc, 0x56e2dc, indexKOF00Sprites_Chang },
    { L"Unused? 6", 0x56e2dc, 0x56e2fc, indexKOF00Sprites_Chang },
    { L"Unused? 7", 0x56e2fc, 0x56e31c, indexKOF00Sprites_Chang },
    { L"Unused? 8", 0x56e31c, 0x56e33c, indexKOF00Sprites_Chang },
    { L"Unused? 9", 0x56e39c, 0x56e3bc, indexKOF00Sprites_Chang },
    { L"Unused? 10", 0x56e3bc, 0x56e3dc, indexKOF00Sprites_Chang },
    { L"Unused? Shocked", 0x56e33c, 0x56e35c, indexKOF00Sprites_Chang },
    { L"Unused? MASTER Mode", 0x56e35c, 0x56e37c, indexKOF00Sprites_Chang },
    { L"Unused? Purple Trail", 0x56e25c, 0x56e27c, indexKOF00Sprites_Chang },
    { L"Unused? Purple Trail", 0x56e37c, 0x56e39c, indexKOF00Sprites_Chang },
};

const sDescTreeNode KOFEX2_GBA_CHANG_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHANG_MAIN, ARRAYSIZE(KOFEX2_GBA_CHANG_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHANG_ALT, ARRAYSIZE(KOFEX2_GBA_CHANG_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHANG_FLASH, ARRAYSIZE(KOFEX2_GBA_CHANG_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHANG_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_CHANG_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHANG_UNUSED, ARRAYSIZE(KOFEX2_GBA_CHANG_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_CHOI_MAIN[] =
{
    { L"Main", 0x567abc, 0x567adc },
};

const sGame_PaletteDataset KOFEX2_GBA_CHOI_ALT[] =
{
    { L"Alt", 0x567adc, 0x567afc },
};

const sGame_PaletteDataset KOFEX2_GBA_CHOI_FLASH[] =
{
    { L"MASTER Mode", 0x567b5c, 0x567b7c },
    { L"Shocked", 0x567b3c, 0x567b5c },
};

const sGame_PaletteDataset KOFEX2_GBA_CHOI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd7fc, 0x7bd81c },
};

const sGame_PaletteDataset KOFEX2_GBA_CHOI_UNUSED[] =
{
    { L"Unused? 1", 0x567afc, 0x567b1c },
    { L"Unused? 2", 0x567b1c, 0x567b3c },
    { L"Unused? 3", 0x567b9c, 0x567bbc },
    { L"Unused? 4", 0x567bbc, 0x567bdc },
    { L"Unused? 5", 0x567bdc, 0x567bfc },
    { L"Unused? 6", 0x567bfc, 0x567c1c },
    { L"Unused? 7", 0x567c1c, 0x567c3c },
    { L"Unused? 8", 0x567c3c, 0x567c5c },
    { L"Unused? 9", 0x567cbc, 0x567cdc },
    { L"Unused? 10", 0x567cdc, 0x567cfc },
    { L"Unused? Shocked", 0x567c5c, 0x567c7c },
    { L"Unused? MASTER Mode", 0x567c7c, 0x567c9c },
    { L"Unused? Purple Trail", 0x567b7c, 0x567b9c },
    { L"Unused? Purple Trail", 0x567c9c, 0x567cbc },
};

const sDescTreeNode KOFEX2_GBA_CHOI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHOI_MAIN, ARRAYSIZE(KOFEX2_GBA_CHOI_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHOI_ALT, ARRAYSIZE(KOFEX2_GBA_CHOI_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHOI_FLASH, ARRAYSIZE(KOFEX2_GBA_CHOI_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHOI_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_CHOI_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHOI_UNUSED, ARRAYSIZE(KOFEX2_GBA_CHOI_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_MAIN[] =
{
    { L"Main", 0x54dc74, 0x54dc94, indexKOF00Sprites_Athena, 0x03 },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_ALT[] =
{
    { L"Alt", 0x54dc94, 0x54dcb4, indexKOF00Sprites_Athena, 0x03 },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_FLASH[] =
{
    { L"MASTER Mode", 0x54dd14, 0x54dd34, indexKOF00Sprites_Athena, 0x03 },
    { L"Shocked", 0x54dcf4, 0x54dd14, indexKOF00Sprites_Athena, 0x03 },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_PORTRAIT[] =
{
    { L"Portrait", 0x7bd83c, 0x7bd85c },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_UNUSED[] =
{
    { L"Unused? 1", 0x54dcb4, 0x54dcd4, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 2", 0x54dcd4, 0x54dcf4, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 3", 0x54dd54, 0x54dd74, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 4", 0x54dd74, 0x54dd94, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 5", 0x54dd94, 0x54ddb4, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 6", 0x54ddb4, 0x54ddd4, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 7", 0x54ddd4, 0x54ddf4, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 8", 0x54ddf4, 0x54de14, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 9", 0x54de74, 0x54de94, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? 10", 0x54de94, 0x54deb4, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? Shocked", 0x54de14, 0x54de34, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? MASTER Mode", 0x54de34, 0x54de54, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? Purple Trail", 0x54dd34, 0x54dd54, indexKOF00Sprites_Athena, 0x03 },
    { L"Unused? Purple Trail", 0x54de54, 0x54de74 , indexKOF00Sprites_Athena, 0x03},
};

const sDescTreeNode KOFEX2_GBA_ATHENA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ATHENA_MAIN, ARRAYSIZE(KOFEX2_GBA_ATHENA_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ATHENA_ALT, ARRAYSIZE(KOFEX2_GBA_ATHENA_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ATHENA_FLASH, ARRAYSIZE(KOFEX2_GBA_ATHENA_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ATHENA_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_ATHENA_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ATHENA_UNUSED, ARRAYSIZE(KOFEX2_GBA_ATHENA_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_MAIN[] =
{
    { L"Main", 0x554088, 0x5540a8, indexKOF00Sprites_Kensou },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_ALT[] =
{
    { L"Alt", 0x5540a8, 0x5540c8, indexKOF00Sprites_Kensou },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_FLASH[] =
{
    { L"MASTER Mode", 0x554128, 0x554148, indexKOF00Sprites_Kensou },
    { L"Shocked", 0x554108, 0x554128, indexKOF00Sprites_Kensou },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_PORTRAIT[] =
{
    { L"Portrait", 0x7bd85c, 0x7bd87c },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_UNUSED[] =
{
    { L"Unused? 1", 0x5540c8, 0x5540e8, indexKOF00Sprites_Kensou },
    { L"Unused? 2", 0x5540e8, 0x554108, indexKOF00Sprites_Kensou },
    { L"Unused? 3", 0x554168, 0x554188, indexKOF00Sprites_Kensou },
    { L"Unused? 4", 0x554188, 0x5541a8, indexKOF00Sprites_Kensou },
    { L"Unused? 5", 0x5541a8, 0x5541c8, indexKOF00Sprites_Kensou },
    { L"Unused? 6", 0x5541c8, 0x5541e8, indexKOF00Sprites_Kensou },
    { L"Unused? 7", 0x5541e8, 0x554208, indexKOF00Sprites_Kensou },
    { L"Unused? 8", 0x554208, 0x554228, indexKOF00Sprites_Kensou },
    { L"Unused? 9", 0x554288, 0x5542a8, indexKOF00Sprites_Kensou },
    { L"Unused? 10", 0x5542a8, 0x5542c8, indexKOF00Sprites_Kensou },
    { L"Unused? Shocked", 0x554228, 0x554248, indexKOF00Sprites_Kensou },
    { L"Unused? MASTER Mode", 0x554248, 0x554268, indexKOF00Sprites_Kensou },
    { L"Unused? Purple Trail", 0x554148, 0x554168, indexKOF00Sprites_Kensou },
    { L"Unused? Purple Trail", 0x554268, 0x554288, indexKOF00Sprites_Kensou },
};

const sDescTreeNode KOFEX2_GBA_KENSOU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KENSOU_MAIN, ARRAYSIZE(KOFEX2_GBA_KENSOU_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KENSOU_ALT, ARRAYSIZE(KOFEX2_GBA_KENSOU_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KENSOU_FLASH, ARRAYSIZE(KOFEX2_GBA_KENSOU_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KENSOU_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_KENSOU_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KENSOU_UNUSED, ARRAYSIZE(KOFEX2_GBA_KENSOU_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_MAIN[] =
{
    { L"Main", 0x55ad20, 0x55ad40, indexKOF00Sprites_Bao },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_ALT[] =
{
    { L"Alt", 0x55ad40, 0x55ad60, indexKOF00Sprites_Bao },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_FLASH[] =
{
    { L"MASTER Mode", 0x55adc0, 0x55ade0, indexKOF00Sprites_Bao },
    { L"Shocked", 0x55ada0, 0x55adc0, indexKOF00Sprites_Bao },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_PORTRAIT[] =
{
    { L"Portrait", 0x7bd87c, 0x7bd89c },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_UNUSED[] =
{
    { L"Unused? 1", 0x55ad60, 0x55ad80, indexKOF00Sprites_Bao },
    { L"Unused? 2", 0x55ad80, 0x55ada0, indexKOF00Sprites_Bao },
    { L"Unused? 3", 0x55ae00, 0x55ae20, indexKOF00Sprites_Bao },
    { L"Unused? 4", 0x55ae20, 0x55ae40, indexKOF00Sprites_Bao },
    { L"Unused? 5", 0x55ae40, 0x55ae60, indexKOF00Sprites_Bao },
    { L"Unused? 6", 0x55ae60, 0x55ae80, indexKOF00Sprites_Bao },
    { L"Unused? 7", 0x55ae80, 0x55aea0, indexKOF00Sprites_Bao },
    { L"Unused? 8", 0x55aea0, 0x55aec0, indexKOF00Sprites_Bao },
    { L"Unused? 9", 0x55af20, 0x55af40, indexKOF00Sprites_Bao },
    { L"Unused? 10", 0x55af40, 0x55af60, indexKOF00Sprites_Bao },
    { L"Unused? Shocked", 0x55aec0, 0x55aee0, indexKOF00Sprites_Bao },
    { L"Unused? MASTER Mode", 0x55aee0, 0x55af00, indexKOF00Sprites_Bao },
    { L"Unused? Purple Trail", 0x55ade0, 0x55ae00, indexKOF00Sprites_Bao },
    { L"Unused? Purple Trail", 0x55af00, 0x55af20, indexKOF00Sprites_Bao },
};

const sDescTreeNode KOFEX2_GBA_BAO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BAO_MAIN, ARRAYSIZE(KOFEX2_GBA_BAO_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BAO_ALT, ARRAYSIZE(KOFEX2_GBA_BAO_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BAO_FLASH, ARRAYSIZE(KOFEX2_GBA_BAO_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BAO_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_BAO_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BAO_UNUSED, ARRAYSIZE(KOFEX2_GBA_BAO_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_MAIN[] =
{
    { L"Main", 0x527a7c, 0x527a9c, indexKOF00Sprites_Ryo },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_ALT[] =
{
    { L"Alt", 0x527a9c, 0x527abc, indexKOF00Sprites_Ryo },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_FLASH[] =
{
    { L"MASTER Mode", 0x527b1c, 0x527b3c, indexKOF00Sprites_Ryo },
    { L"Shocked", 0x527afc, 0x527b1c, indexKOF00Sprites_Ryo },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_PORTRAIT[] =
{
    { L"Portrait", 0x7bd89c, 0x7bd8bc },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_UNUSED[] =
{
    { L"Unused? 1", 0x527abc, 0x527adc, indexKOF00Sprites_Ryo },
    { L"Unused? 2", 0x527adc, 0x527afc, indexKOF00Sprites_Ryo },
    { L"Unused? 3", 0x527b5c, 0x527b7c, indexKOF00Sprites_Ryo },
    { L"Unused? 4", 0x527b7c, 0x527b9c, indexKOF00Sprites_Ryo },
    { L"Unused? 5", 0x527b9c, 0x527bbc, indexKOF00Sprites_Ryo },
    { L"Unused? 6", 0x527bbc, 0x527bdc, indexKOF00Sprites_Ryo },
    { L"Unused? 7", 0x527bdc, 0x527bfc, indexKOF00Sprites_Ryo },
    { L"Unused? 8", 0x527bfc, 0x527c1c, indexKOF00Sprites_Ryo },
    { L"Unused? 9", 0x527c7c, 0x527c9c, indexKOF00Sprites_Ryo },
    { L"Unused? 10", 0x527c9c, 0x527cbc, indexKOF00Sprites_Ryo },
    { L"Unused? Shocked", 0x527c1c, 0x527c3c, indexKOF00Sprites_Ryo },
    { L"Unused? MASTER Mode", 0x527c3c, 0x527c5c, indexKOF00Sprites_Ryo },
    { L"Unused? Purple Trail", 0x527b3c, 0x527b5c, indexKOF00Sprites_Ryo },
    { L"Unused? Purple Trail", 0x527c5c, 0x527c7c, indexKOF00Sprites_Ryo },
};

const sDescTreeNode KOFEX2_GBA_RYO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RYO_MAIN, ARRAYSIZE(KOFEX2_GBA_RYO_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RYO_ALT, ARRAYSIZE(KOFEX2_GBA_RYO_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RYO_FLASH, ARRAYSIZE(KOFEX2_GBA_RYO_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RYO_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_RYO_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RYO_UNUSED, ARRAYSIZE(KOFEX2_GBA_RYO_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_MAIN[] =
{
    { L"Main", 0x52e6c8, 0x52e6e8, indexKOF00Sprites_Yuri },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_ALT[] =
{
    { L"Alt", 0x52e6e8, 0x52e708, indexKOF00Sprites_Yuri },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_FLASH[] =
{
    { L"MASTER Mode", 0x52e768, 0x52e788, indexKOF00Sprites_Yuri },
    { L"Shocked", 0x52e748, 0x52e768, indexKOF00Sprites_Yuri },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd8bc, 0x7bd8dc },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_UNUSED[] =
{
    { L"Unused? 1", 0x52e708, 0x52e728, indexKOF00Sprites_Yuri },
    { L"Unused? 2", 0x52e728, 0x52e748, indexKOF00Sprites_Yuri },
    { L"Unused? 3", 0x52e7a8, 0x52e7c8, indexKOF00Sprites_Yuri },
    { L"Unused? 4", 0x52e7c8, 0x52e7e8, indexKOF00Sprites_Yuri },
    { L"Unused? 5", 0x52e7e8, 0x52e808, indexKOF00Sprites_Yuri },
    { L"Unused? 6", 0x52e808, 0x52e828, indexKOF00Sprites_Yuri },
    { L"Unused? 7", 0x52e828, 0x52e848, indexKOF00Sprites_Yuri },
    { L"Unused? 8", 0x52e848, 0x52e868, indexKOF00Sprites_Yuri },
    { L"Unused? 9", 0x52e8c8, 0x52e8e8, indexKOF00Sprites_Yuri },
    { L"Unused? 10", 0x52e8e8, 0x52e908, indexKOF00Sprites_Yuri },
    { L"Unused? Shocked", 0x52e868, 0x52e888, indexKOF00Sprites_Yuri },
    { L"Unused? MASTER Mode", 0x52e888, 0x52e8a8, indexKOF00Sprites_Yuri },
    { L"Unused? Purple Trail", 0x52e788, 0x52e7a8, indexKOF00Sprites_Yuri },
    { L"Unused? Purple Trail", 0x52e8a8, 0x52e8c8, indexKOF00Sprites_Yuri },
};

const sDescTreeNode KOFEX2_GBA_YURI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_YURI_MAIN, ARRAYSIZE(KOFEX2_GBA_YURI_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_YURI_ALT, ARRAYSIZE(KOFEX2_GBA_YURI_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_YURI_FLASH, ARRAYSIZE(KOFEX2_GBA_YURI_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_YURI_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_YURI_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_YURI_UNUSED, ARRAYSIZE(KOFEX2_GBA_YURI_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_MAIN[] =
{
    { L"Main", 0x534aa4, 0x534ac4, indexKOF00Sprites_Takuma },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_ALT[] =
{
    { L"Alt", 0x534ac4, 0x534ae4, indexKOF00Sprites_Takuma },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_FLASH[] =
{
    { L"MASTER Mode", 0x534b44, 0x534b64, indexKOF00Sprites_Takuma },
    { L"Shocked", 0x534b24, 0x534b44, indexKOF00Sprites_Takuma },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_PORTRAIT[] =
{
    { L"Portrait", 0x7bd8dc, 0x7bd8fc },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_UNUSED[] =
{
    { L"Unused? 1", 0x534ae4, 0x534b04, indexKOF00Sprites_Takuma },
    { L"Unused? 2", 0x534b04, 0x534b24, indexKOF00Sprites_Takuma },
    { L"Unused? 3", 0x534b84, 0x534ba4, indexKOF00Sprites_Takuma },
    { L"Unused? 4", 0x534ba4, 0x534bc4, indexKOF00Sprites_Takuma },
    { L"Unused? 5", 0x534bc4, 0x534be4, indexKOF00Sprites_Takuma },
    { L"Unused? 6", 0x534be4, 0x534c04, indexKOF00Sprites_Takuma },
    { L"Unused? 7", 0x534c04, 0x534c24, indexKOF00Sprites_Takuma },
    { L"Unused? 8", 0x534c24, 0x534c44, indexKOF00Sprites_Takuma },
    { L"Unused? 9", 0x534ca4, 0x534cc4, indexKOF00Sprites_Takuma },
    { L"Unused? 10", 0x534cc4, 0x534ce4, indexKOF00Sprites_Takuma },
    { L"Unused? Shocked", 0x534c44, 0x534c64, indexKOF00Sprites_Takuma },
    { L"Unused? MASTER Mode", 0x534c64, 0x534c84, indexKOF00Sprites_Takuma },
    { L"Unused? Purple Trail", 0x534b64, 0x534b84, indexKOF00Sprites_Takuma },
    { L"Unused? Purple Trail", 0x534c84, 0x534ca4, indexKOF00Sprites_Takuma },
};

const sDescTreeNode KOFEX2_GBA_TAKUMA_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TAKUMA_MAIN, ARRAYSIZE(KOFEX2_GBA_TAKUMA_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TAKUMA_ALT, ARRAYSIZE(KOFEX2_GBA_TAKUMA_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TAKUMA_FLASH, ARRAYSIZE(KOFEX2_GBA_TAKUMA_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TAKUMA_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_TAKUMA_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TAKUMA_UNUSED, ARRAYSIZE(KOFEX2_GBA_TAKUMA_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_MAIN[] =
{
    { L"Main", 0x57bfc0, 0x57bfe0, indexKOF00Sprites_Iori },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_ALT[] =
{
    { L"Alt", 0x57bfe0, 0x57c000, indexKOF00Sprites_Iori },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_FLASH[] =
{
    { L"MASTER Mode", 0x57c060, 0x57c080, indexKOF00Sprites_Iori },
    { L"Shocked", 0x57c040, 0x57c060, indexKOF00Sprites_Iori },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd8fc, 0x7bd91c },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_UNUSED[] =
{
    { L"Unused? 1", 0x57c000, 0x57c020, indexKOF00Sprites_Iori },
    { L"Unused? 2", 0x57c020, 0x57c040, indexKOF00Sprites_Iori },
    { L"Unused? 3", 0x57c0a0, 0x57c0c0, indexKOF00Sprites_Iori },
    { L"Unused? 4", 0x57c0c0, 0x57c0e0, indexKOF00Sprites_Iori },
    { L"Unused? 5", 0x57c0e0, 0x57c100, indexKOF00Sprites_Iori },
    { L"Unused? 6", 0x57c100, 0x57c120, indexKOF00Sprites_Iori },
    { L"Unused? 7", 0x57c120, 0x57c140, indexKOF00Sprites_Iori },
    { L"Unused? 8", 0x57c140, 0x57c160, indexKOF00Sprites_Iori },
    { L"Unused? 9", 0x57c1c0, 0x57c1e0, indexKOF00Sprites_Iori },
    { L"Unused? 10", 0x57c1e0, 0x57c200, indexKOF00Sprites_Iori },
    { L"Unused? Shocked", 0x57c160, 0x57c180, indexKOF00Sprites_Iori },
    { L"Unused? MASTER Mode", 0x57c180, 0x57c1a0, indexKOF00Sprites_Iori },
    { L"Unused? Purple Trail", 0x57c080, 0x57c0a0, indexKOF00Sprites_Iori },
    { L"Unused? Purple Trail", 0x57c1a0, 0x57c1c0, indexKOF00Sprites_Iori },
};

const sDescTreeNode KOFEX2_GBA_IORI_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_IORI_MAIN, ARRAYSIZE(KOFEX2_GBA_IORI_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_IORI_ALT, ARRAYSIZE(KOFEX2_GBA_IORI_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_IORI_FLASH, ARRAYSIZE(KOFEX2_GBA_IORI_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_IORI_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_IORI_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_IORI_UNUSED, ARRAYSIZE(KOFEX2_GBA_IORI_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_JUN_MAIN[] =
{
    { L"Main", 0x5929c8, 0x5929e8 },
};

const sGame_PaletteDataset KOFEX2_GBA_JUN_ALT[] =
{
    { L"Alt", 0x5929e8, 0x592a08 },
};

const sGame_PaletteDataset KOFEX2_GBA_JUN_FLASH[] =
{
    { L"MASTER Mode", 0x592a68, 0x592a88 },
    { L"Shocked", 0x592a48, 0x592a68 },
};

const sGame_PaletteDataset KOFEX2_GBA_JUN_PORTRAIT[] =
{
    { L"Portrait", 0x7bd91c, 0x7bd93c },
};

const sGame_PaletteDataset KOFEX2_GBA_JUN_UNUSED[] =
{
    { L"Unused? 1", 0x592a08, 0x592a28 },
    { L"Unused? 2", 0x592a28, 0x592a48 },
    { L"Unused? 3", 0x592aa8, 0x592ac8 },
    { L"Unused? 4", 0x592ac8, 0x592ae8 },
    { L"Unused? 5", 0x592ae8, 0x592b08 },
    { L"Unused? 6", 0x592b08, 0x592b28 },
    { L"Unused? 7", 0x592b28, 0x592b48 },
    { L"Unused? 8", 0x592b48, 0x592b68 },
    { L"Unused? 9", 0x592bc8, 0x592be8 },
    { L"Unused? 10", 0x592be8, 0x592c08 },
    { L"Unused? Shocked", 0x592b68, 0x592b88 },
    { L"Unused? MASTER Mode", 0x592b88, 0x592ba8 },
    { L"Unused? Purple Trail", 0x592a88, 0x592aa8 },
    { L"Unused? Purple Trail", 0x592ba8, 0x592bc8 },
};

const sDescTreeNode KOFEX2_GBA_JUN_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_JUN_MAIN, ARRAYSIZE(KOFEX2_GBA_JUN_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_JUN_ALT, ARRAYSIZE(KOFEX2_GBA_JUN_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_JUN_FLASH, ARRAYSIZE(KOFEX2_GBA_JUN_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_JUN_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_JUN_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_JUN_UNUSED, ARRAYSIZE(KOFEX2_GBA_JUN_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_MIU_MAIN[] =
{
    { L"Main", 0x58cb7c, 0x58cb9c },
};

const sGame_PaletteDataset KOFEX2_GBA_MIU_ALT[] =
{
    { L"Alt", 0x58cb9c, 0x58cbbc },
};

const sGame_PaletteDataset KOFEX2_GBA_MIU_FLASH[] =
{
    { L"MASTER Mode", 0x58cc1c, 0x58cc3c },
    { L"Shocked", 0x58cbfc, 0x58cc1c },
};

const sGame_PaletteDataset KOFEX2_GBA_MIU_PORTRAIT[] =
{
    { L"Portrait", 0x7bd93c, 0x7bd95c },
};

const sGame_PaletteDataset KOFEX2_GBA_MIU_UNUSED[] =
{
    { L"Unused? 1", 0x58cbbc, 0x58cbdc },
    { L"Unused? 2", 0x58cbdc, 0x58cbfc },
    { L"Unused? 3", 0x58cc5c, 0x58cc7c },
    { L"Unused? 4", 0x58cc7c, 0x58cc9c },
    { L"Unused? 5", 0x58cc9c, 0x58ccbc },
    { L"Unused? 6", 0x58ccbc, 0x58ccdc },
    { L"Unused? 7", 0x58ccdc, 0x58ccfc },
    { L"Unused? 8", 0x58ccfc, 0x58cd1c },
    { L"Unused? 9", 0x58cd7c, 0x58cd9c },
    { L"Unused? 10", 0x58cd9c, 0x58cdbc },
    { L"Unused? Shocked", 0x58cd1c, 0x58cd3c },
    { L"Unused? MASTER Mode", 0x58cd3c, 0x58cd5c },
    { L"Unused? Purple Trail", 0x58cc3c, 0x58cc5c },
    { L"Unused? Purple Trail", 0x58cd5c, 0x58cd7c },
};

const sDescTreeNode KOFEX2_GBA_MIU_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MIU_MAIN, ARRAYSIZE(KOFEX2_GBA_MIU_MAIN) },
    { L"Alt", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MIU_ALT, ARRAYSIZE(KOFEX2_GBA_MIU_ALT) },
    { L"Flashing palettes", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MIU_FLASH, ARRAYSIZE(KOFEX2_GBA_MIU_FLASH) },
    { L"Portrait", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MIU_PORTRAIT, ARRAYSIZE(KOFEX2_GBA_MIU_PORTRAIT) },
    { L"Unused?", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MIU_UNUSED, ARRAYSIZE(KOFEX2_GBA_MIU_UNUSED) },
};

const sGame_PaletteDataset KOFEX2_GBA_BONUS_HUD[] =
{
    { L"HUD Icons & Text (1/3)", 0x6031e4, 0x603204 },
    { L"HUD Icons & Text (2/3)", 0x603204, 0x603224 },
    { L"HUD Icons & Text (3/3)", 0x603224, 0x603244 },
    { L"MASTER Meter Flash 1", 0x603264, 0x603284 },
    { L"MASTER Meter Flash 2", 0x6032a4, 0x6032c4 },
    { L"Meter Flash 1", 0x603244, 0x603264 },
    { L"Meter Flash 2", 0x603284, 0x6032a4 },
};

const sGame_PaletteDataset KOFEX2_GBA_BONUS_CSEL[] =
{
    { L"Selector (1/6)", 0x7bd3bc, 0x7bd3dc },
    { L"Selector (2/6)", 0x7bd3dc, 0x7bd3fc },
    { L"Selector (3/6)", 0x7bd3fc, 0x7bd41c },
    { L"Selector (4/6)", 0x7bd41c, 0x7bd43c },
    { L"Selector (5/6)", 0x7bd43c, 0x7bd45c },
    { L"Selector (6/6)", 0x7bd45c, 0x7bd47c },
    { L"Background", 0x7bd4dc, 0x7bd4fc },
    { L"Panels", 0x7bd4fc, 0x7bd51c },
    { L"Character Name", 0x7bd51c, 0x7bd53c },
    { L"Entry Text", 0x7bd4bc, 0x7bd4dc },
    { L"Text", 0x7bd150, 0x7bd170 },
    { L"Character Icons (Red/Purple)", 0x7bd59c, 0x7bd5bc },
    { L"Character Icons (Brown/Yellow)", 0x7bd5bc, 0x7bd5dc },
    { L"Character Icons (Black/Blue)", 0x7bd5dc, 0x7bd5fc },
    { L"Character Icons (Faded)", 0x7bd65c, 0x7bd67c },
    { L"Selected Character Icons (Red/Purple)", 0x7bd210, 0x7bd230 },
    { L"Selected Character Icons (Brown/Yellow)", 0x7bd230, 0x7bd250 },
    { L"Selected Character Icons (Black/Blue)", 0x7bd250, 0x7bd270 },
    { L"Character Icons Flashing", 0x7bd57c, 0x7bd59c },
};

const sDescTreeNode KOFEX2_GBA_BONUS_COLLECTION[] =
{
    { L"HUD", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BONUS_HUD, ARRAYSIZE(KOFEX2_GBA_BONUS_HUD) },
    { L"Character/Order Select", DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BONUS_CSEL, ARRAYSIZE(KOFEX2_GBA_BONUS_CSEL) },
};

const sDescTreeNode KOFEX2_GBA_UNITS[] =
{
    { L"Kyo Kusanagi", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KYO_COLLECTION, ARRAYSIZE(KOFEX2_GBA_KYO_COLLECTION) },
    { L"Moe Habana", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MOE_COLLECTION, ARRAYSIZE(KOFEX2_GBA_MOE_COLLECTION) },
    { L"Reiji Oogami", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_REIJI_COLLECTION, ARRAYSIZE(KOFEX2_GBA_REIJI_COLLECTION) },
    { L"Terry Bogard", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TERRY_COLLECTION, ARRAYSIZE(KOFEX2_GBA_TERRY_COLLECTION) },
    { L"Andy Bogard", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ANDY_COLLECTION, ARRAYSIZE(KOFEX2_GBA_ANDY_COLLECTION) },
    { L"Mai Shiranui", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MAI_COLLECTION, ARRAYSIZE(KOFEX2_GBA_MAI_COLLECTION) },
    { L"Leona Heidern", 	DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_LEONA_COLLECTION, ARRAYSIZE(KOFEX2_GBA_LEONA_COLLECTION) },
    { L"Ralf Jones", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RALF_COLLECTION, ARRAYSIZE(KOFEX2_GBA_RALF_COLLECTION) },
    { L"Clark Still", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CLARK_COLLECTION, ARRAYSIZE(KOFEX2_GBA_CLARK_COLLECTION) },
    { L"Kim Kaphwan", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KIM_COLLECTION, ARRAYSIZE(KOFEX2_GBA_KIM_COLLECTION) },
    { L"Chang Koehan", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHANG_COLLECTION, ARRAYSIZE(KOFEX2_GBA_CHANG_COLLECTION) },
    { L"Choi Bounge", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_CHOI_COLLECTION, ARRAYSIZE(KOFEX2_GBA_CHOI_COLLECTION) },
    { L"Athena Asamiya", 	DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_ATHENA_COLLECTION, ARRAYSIZE(KOFEX2_GBA_ATHENA_COLLECTION) },
    { L"Sie Kensou", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_KENSOU_COLLECTION, ARRAYSIZE(KOFEX2_GBA_KENSOU_COLLECTION) },
    { L"Bao", 				DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BAO_COLLECTION, ARRAYSIZE(KOFEX2_GBA_BAO_COLLECTION) },
    { L"Ryo Sakazaki", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_RYO_COLLECTION, ARRAYSIZE(KOFEX2_GBA_RYO_COLLECTION) },
    { L"Yuri Sakazaki", 	DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_YURI_COLLECTION, ARRAYSIZE(KOFEX2_GBA_YURI_COLLECTION) },
    { L"Takuma Sakazaki", 	DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_TAKUMA_COLLECTION, ARRAYSIZE(KOFEX2_GBA_TAKUMA_COLLECTION) },
    { L"Iori Yagami", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_IORI_COLLECTION, ARRAYSIZE(KOFEX2_GBA_IORI_COLLECTION) },
    { L"Jun Kagami", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_JUN_COLLECTION, ARRAYSIZE(KOFEX2_GBA_JUN_COLLECTION) },
    { L"Miu Kurosaki", 		DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_MIU_COLLECTION, ARRAYSIZE(KOFEX2_GBA_MIU_COLLECTION) },
    { L"Bonus",				DESC_NODETYPE_TREE, (void*)KOFEX2_GBA_BONUS_COLLECTION, ARRAYSIZE(KOFEX2_GBA_BONUS_COLLECTION) },
};
