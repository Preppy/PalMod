#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to KOFEX2_GBA_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> KOFEX2_GBA_IMG_UNITS =
{
    // Ignore the internals of this array for now.
    // This data gets filled in once you have images integrated into imgdat
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_MAIN[] =
{
    { L"Main", 0x575508, 0x575528 },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_ALT[] =
{
    { L"Alt", 0x575528, 0x575548 },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_FLASH[] =
{
    { L"MASTER Mode", 0x5755a8, 0x5755c8 },
    { L"Shocked", 0x575588, 0x5755a8 },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_PORTRAIT[] =
{
    { L"Portrait", 0x7bd6bc, 0x7bd6dc },
};

const sGame_PaletteDataset KOFEX2_GBA_KYO_UNUSED[] =
{
    { L"Unused? 1", 0x575548, 0x575568 },
    { L"Unused? 2", 0x575568, 0x575588 },
    { L"Unused? 3", 0x5755e8, 0x575608 },
    { L"Unused? 4", 0x575608, 0x575628 },
    { L"Unused? 5", 0x575628, 0x575648 },
    { L"Unused? 6", 0x575648, 0x575668 },
    { L"Unused? 7", 0x575668, 0x575688 },
    { L"Unused? 8", 0x575688, 0x5756a8 },
    { L"Unused? 9", 0x575708, 0x575728 },
    { L"Unused? 10", 0x575728, 0x575748 },
    { L"Unused? Shocked", 0x5756a8, 0x5756c8 },
    { L"Unused? MASTER Mode", 0x5756c8, 0x5756e8 },
    { L"Unused? Purple Trail", 0x5755c8, 0x5755e8 },
    { L"Unused? Purple Trail", 0x5756e8, 0x575708 },
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
    { L"Main", 0x514ce0, 0x514d00 },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_ALT[] =
{
    { L"Alt", 0x514d00, 0x514d20 },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_FLASH[] =
{
    { L"MASTER Mode", 0x514d80, 0x514da0 },
    { L"Shocked", 0x514d60, 0x514d80 },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_PORTRAIT[] =
{
    { L"Portrait", 0x7bd71c, 0x7bd73c },
};

const sGame_PaletteDataset KOFEX2_GBA_TERRY_UNUSED[] =
{
    { L"Unused? 1", 0x514d20, 0x514d40 },
    { L"Unused? 2", 0x514d40, 0x514d60 },
    { L"Unused? 3", 0x514dc0, 0x514de0 },
    { L"Unused? 4", 0x514de0, 0x514e00 },
    { L"Unused? 5", 0x514e00, 0x514e20 },
    { L"Unused? 6", 0x514e20, 0x514e40 },
    { L"Unused? 7", 0x514e40, 0x514e60 },
    { L"Unused? 8", 0x514e60, 0x514e80 },
    { L"Unused? 9", 0x514ee0, 0x514f00 },
    { L"Unused? 10", 0x514f00, 0x514f20 },
    { L"Unused? Shocked", 0x514e80, 0x514ea0 },
    { L"Unused? MASTER Mode", 0x514ea0, 0x514ec0 },
    { L"Unused? Purple Trail", 0x514da0, 0x514dc0 },
    { L"Unused? Purple Trail", 0x514ec0, 0x514ee0 },
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
    { L"Main", 0x51a978, 0x51a998 },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_ALT[] =
{
    { L"Alt", 0x51a998, 0x51a9b8 },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_FLASH[] =
{
    { L"MASTER Mode", 0x51aa18, 0x51aa38 },
    { L"Shocked", 0x51a9f8, 0x51aa18 },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_PORTRAIT[] =
{
    { L"Portrait", 0x7bd73c, 0x7bd75c },
};

const sGame_PaletteDataset KOFEX2_GBA_ANDY_UNUSED[] =
{
    { L"Unused? 1", 0x51a9b8, 0x51a9d8 },
    { L"Unused? 2", 0x51a9d8, 0x51a9f8 },
    { L"Unused? 3", 0x51aa58, 0x51aa78 },
    { L"Unused? 4", 0x51aa78, 0x51aa98 },
    { L"Unused? 5", 0x51aa98, 0x51aab8 },
    { L"Unused? 6", 0x51aab8, 0x51aad8 },
    { L"Unused? 7", 0x51aad8, 0x51aaf8 },
    { L"Unused? 8", 0x51aaf8, 0x51ab18 },
    { L"Unused? 9", 0x51ab78, 0x51ab98 },
    { L"Unused? 10", 0x51ab98, 0x51abb8 },
    { L"Unused? Shocked", 0x51ab18, 0x51ab38 },
    { L"Unused? MASTER Mode", 0x51ab38, 0x51ab58 },
    { L"Unused? Purple Trail", 0x51aa38, 0x51aa58 },
    { L"Unused? Purple Trail", 0x51ab58, 0x51ab78 },
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
    { L"Main", 0x520e8c, 0x520eac },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_ALT[] =
{
    { L"Alt", 0x520eac, 0x520ecc },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_FLASH[] =
{
    { L"MASTER Mode", 0x520f2c, 0x520f4c },
    { L"Shocked", 0x520f0c, 0x520f2c },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd75c, 0x7bd77c },
};

const sGame_PaletteDataset KOFEX2_GBA_MAI_UNUSED[] =
{
    { L"Unused? 1", 0x520ecc, 0x520eec },
    { L"Unused? 2", 0x520eec, 0x520f0c },
    { L"Unused? 3", 0x520f6c, 0x520f8c },
    { L"Unused? 4", 0x520f8c, 0x520fac },
    { L"Unused? 5", 0x520fac, 0x520fcc },
    { L"Unused? 6", 0x520fcc, 0x520fec },
    { L"Unused? 7", 0x520fec, 0x52100c },
    { L"Unused? 8", 0x52100c, 0x52102c },
    { L"Unused? 9", 0x52108c, 0x5210ac },
    { L"Unused? 10", 0x5210ac, 0x5210cc },
    { L"Unused? Shocked", 0x52102c, 0x52104c },
    { L"Unused? MASTER Mode", 0x52104c, 0x52106c },
    { L"Unused? Purple Trail", 0x520f4c, 0x520f6c },
    { L"Unused? Purple Trail", 0x52106c, 0x52108c },
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
    { L"Main", 0x53b4d4, 0x53b4f4 },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_ALT[] =
{
    { L"Alt", 0x53b4f4, 0x53b514 },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_FLASH[] =
{
    { L"MASTER Mode", 0x53b574, 0x53b594 },
    { L"Shocked", 0x53b554, 0x53b574 },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_PORTRAIT[] =
{
    { L"Portrait", 0x7bd77c, 0x7bd79c },
};

const sGame_PaletteDataset KOFEX2_GBA_LEONA_UNUSED[] =
{
    { L"Unused? 1", 0x53b514, 0x53b534 },
    { L"Unused? 2", 0x53b534, 0x53b554 },
    { L"Unused? 3", 0x53b5b4, 0x53b5d4 },
    { L"Unused? 4", 0x53b5d4, 0x53b5f4 },
    { L"Unused? 5", 0x53b5f4, 0x53b614 },
    { L"Unused? 6", 0x53b614, 0x53b634 },
    { L"Unused? 7", 0x53b634, 0x53b654 },
    { L"Unused? 8", 0x53b654, 0x53b674 },
    { L"Unused? 9", 0x53b6d4, 0x53b6f4 },
    { L"Unused? 10", 0x53b6f4, 0x53b714 },
    { L"Unused? Shocked", 0x53b674, 0x53b694 },
    { L"Unused? MASTER Mode", 0x53b694, 0x53b6b4 },
    { L"Unused? Purple Trail", 0x53b594, 0x53b5b4 },
    { L"Unused? Purple Trail", 0x53b6b4, 0x53b6d4 },
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
    { L"Main", 0x54158c, 0x5415ac },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_ALT[] =
{
    { L"Alt", 0x5415ac, 0x5415cc },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_FLASH[] =
{
    { L"MASTER Mode", 0x54162c, 0x54164c },
    { L"Shocked", 0x54160c, 0x54162c },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_PORTRAIT[] =
{
    { L"Portrait", 0x7bd79c, 0x7bd7bc },
};

const sGame_PaletteDataset KOFEX2_GBA_RALF_UNUSED[] =
{
    { L"Unused? 1", 0x5415cc, 0x5415ec },
    { L"Unused? 2", 0x5415ec, 0x54160c },
    { L"Unused? 3", 0x54166c, 0x54168c },
    { L"Unused? 4", 0x54168c, 0x5416ac },
    { L"Unused? 5", 0x5416ac, 0x5416cc },
    { L"Unused? 6", 0x5416cc, 0x5416ec },
    { L"Unused? 7", 0x5416ec, 0x54170c },
    { L"Unused? 8", 0x54170c, 0x54172c },
    { L"Unused? 9", 0x54178c, 0x5417ac },
    { L"Unused? 10", 0x5417ac, 0x5417cc },
    { L"Unused? Shocked", 0x54172c, 0x54174c },
    { L"Unused? MASTER Mode", 0x54174c, 0x54176c },
    { L"Unused? Purple Trail", 0x54164c, 0x54166c },
    { L"Unused? Purple Trail", 0x54176c, 0x54178c },
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
    { L"Main", 0x547410, 0x547430 },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_ALT[] =
{
    { L"Alt", 0x547430, 0x547450 },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_FLASH[] =
{
    { L"MASTER Mode", 0x5474b0, 0x5474d0 },
    { L"Shocked", 0x547490, 0x5474b0 },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_PORTRAIT[] =
{
    { L"Portrait", 0x7bd7bc, 0x7bd7dc },
};

const sGame_PaletteDataset KOFEX2_GBA_CLARK_UNUSED[] =
{
    { L"Unused? 1", 0x547450, 0x547470 },
    { L"Unused? 2", 0x547470, 0x547490 },
    { L"Unused? 3", 0x5474f0, 0x547510 },
    { L"Unused? 4", 0x547510, 0x547530 },
    { L"Unused? 5", 0x547530, 0x547550 },
    { L"Unused? 6", 0x547550, 0x547570 },
    { L"Unused? 7", 0x547570, 0x547590 },
    { L"Unused? 8", 0x547590, 0x5475b0 },
    { L"Unused? 9", 0x547610, 0x547630 },
    { L"Unused? 10", 0x547630, 0x547650 },
    { L"Unused? Shocked", 0x5475b0, 0x5475d0 },
    { L"Unused? MASTER Mode", 0x5475d0, 0x5475f0 },
    { L"Unused? Purple Trail", 0x5474d0, 0x5474f0 },
    { L"Unused? Purple Trail", 0x5475f0, 0x547610 },
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
    { L"Main", 0x560b24, 0x560b44 },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_ALT[] =
{
    { L"Alt", 0x560b44, 0x560b64 },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_FLASH[] =
{
    { L"MASTER Mode", 0x560bc4, 0x560be4 },
    { L"Shocked", 0x560ba4, 0x560bc4 },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_PORTRAIT[] =
{
    { L"Portrait", 0x7bd7dc, 0x7bd7fc },
};

const sGame_PaletteDataset KOFEX2_GBA_KIM_UNUSED[] =
{
    { L"Unused? 1", 0x560b64, 0x560b84 },
    { L"Unused? 2", 0x560b84, 0x560ba4 },
    { L"Unused? 3", 0x560c04, 0x560c24 },
    { L"Unused? 4", 0x560c24, 0x560c44 },
    { L"Unused? 5", 0x560c44, 0x560c64 },
    { L"Unused? 6", 0x560c64, 0x560c84 },
    { L"Unused? 7", 0x560c84, 0x560ca4 },
    { L"Unused? 8", 0x560ca4, 0x560cc4 },
    { L"Unused? 9", 0x560d24, 0x560d44 },
    { L"Unused? 10", 0x560d44, 0x560d64 },
    { L"Unused? Shocked", 0x560cc4, 0x560ce4 },
    { L"Unused? MASTER Mode", 0x560ce4, 0x560d04 },
    { L"Unused? Purple Trail", 0x560be4, 0x560c04 },
    { L"Unused? Purple Trail", 0x560d04, 0x560d24 },
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
    { L"Main", 0x56e19c, 0x56e1bc },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_ALT[] =
{
    { L"Alt", 0x56e1bc, 0x56e1dc },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_FLASH[] =
{
    { L"MASTER Mode", 0x56e23c, 0x56e25c },
    { L"Shocked", 0x56e21c, 0x56e23c },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_PORTRAIT[] =
{
    { L"Portrait", 0x7bd81c, 0x7bd83c },
};

const sGame_PaletteDataset KOFEX2_GBA_CHANG_UNUSED[] =
{
    { L"Unused? 1", 0x56e1dc, 0x56e1fc },
    { L"Unused? 2", 0x56e1fc, 0x56e21c },
    { L"Unused? 3", 0x56e27c, 0x56e29c },
    { L"Unused? 4", 0x56e29c, 0x56e2bc },
    { L"Unused? 5", 0x56e2bc, 0x56e2dc },
    { L"Unused? 6", 0x56e2dc, 0x56e2fc },
    { L"Unused? 7", 0x56e2fc, 0x56e31c },
    { L"Unused? 8", 0x56e31c, 0x56e33c },
    { L"Unused? 9", 0x56e39c, 0x56e3bc },
    { L"Unused? 10", 0x56e3bc, 0x56e3dc },
    { L"Unused? Shocked", 0x56e33c, 0x56e35c },
    { L"Unused? MASTER Mode", 0x56e35c, 0x56e37c },
    { L"Unused? Purple Trail", 0x56e25c, 0x56e27c },
    { L"Unused? Purple Trail", 0x56e37c, 0x56e39c },
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
    { L"Main", 0x54dc74, 0x54dc94 },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_ALT[] =
{
    { L"Alt", 0x54dc94, 0x54dcb4 },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_FLASH[] =
{
    { L"MASTER Mode", 0x54dd14, 0x54dd34 },
    { L"Shocked", 0x54dcf4, 0x54dd14 },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_PORTRAIT[] =
{
    { L"Portrait", 0x7bd83c, 0x7bd85c },
};

const sGame_PaletteDataset KOFEX2_GBA_ATHENA_UNUSED[] =
{
    { L"Unused? 1", 0x54dcb4, 0x54dcd4 },
    { L"Unused? 2", 0x54dcd4, 0x54dcf4 },
    { L"Unused? 3", 0x54dd54, 0x54dd74 },
    { L"Unused? 4", 0x54dd74, 0x54dd94 },
    { L"Unused? 5", 0x54dd94, 0x54ddb4 },
    { L"Unused? 6", 0x54ddb4, 0x54ddd4 },
    { L"Unused? 7", 0x54ddd4, 0x54ddf4 },
    { L"Unused? 8", 0x54ddf4, 0x54de14 },
    { L"Unused? 9", 0x54de74, 0x54de94 },
    { L"Unused? 10", 0x54de94, 0x54deb4 },
    { L"Unused? Shocked", 0x54de14, 0x54de34 },
    { L"Unused? MASTER Mode", 0x54de34, 0x54de54 },
    { L"Unused? Purple Trail", 0x54dd34, 0x54dd54 },
    { L"Unused? Purple Trail", 0x54de54, 0x54de74 },
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
    { L"Main", 0x554088, 0x5540a8 },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_ALT[] =
{
    { L"Alt", 0x5540a8, 0x5540c8 },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_FLASH[] =
{
    { L"MASTER Mode", 0x554128, 0x554148 },
    { L"Shocked", 0x554108, 0x554128 },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_PORTRAIT[] =
{
    { L"Portrait", 0x7bd85c, 0x7bd87c },
};

const sGame_PaletteDataset KOFEX2_GBA_KENSOU_UNUSED[] =
{
    { L"Unused? 1", 0x5540c8, 0x5540e8 },
    { L"Unused? 2", 0x5540e8, 0x554108 },
    { L"Unused? 3", 0x554168, 0x554188 },
    { L"Unused? 4", 0x554188, 0x5541a8 },
    { L"Unused? 5", 0x5541a8, 0x5541c8 },
    { L"Unused? 6", 0x5541c8, 0x5541e8 },
    { L"Unused? 7", 0x5541e8, 0x554208 },
    { L"Unused? 8", 0x554208, 0x554228 },
    { L"Unused? 9", 0x554288, 0x5542a8 },
    { L"Unused? 10", 0x5542a8, 0x5542c8 },
    { L"Unused? Shocked", 0x554228, 0x554248 },
    { L"Unused? MASTER Mode", 0x554248, 0x554268 },
    { L"Unused? Purple Trail", 0x554148, 0x554168 },
    { L"Unused? Purple Trail", 0x554268, 0x554288 },
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
    { L"Main", 0x55ad20, 0x55ad40 },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_ALT[] =
{
    { L"Alt", 0x55ad40, 0x55ad60 },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_FLASH[] =
{
    { L"MASTER Mode", 0x55adc0, 0x55ade0 },
    { L"Shocked", 0x55ada0, 0x55adc0 },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_PORTRAIT[] =
{
    { L"Portrait", 0x7bd87c, 0x7bd89c },
};

const sGame_PaletteDataset KOFEX2_GBA_BAO_UNUSED[] =
{
    { L"Unused? 1", 0x55ad60, 0x55ad80 },
    { L"Unused? 2", 0x55ad80, 0x55ada0 },
    { L"Unused? 3", 0x55ae00, 0x55ae20 },
    { L"Unused? 4", 0x55ae20, 0x55ae40 },
    { L"Unused? 5", 0x55ae40, 0x55ae60 },
    { L"Unused? 6", 0x55ae60, 0x55ae80 },
    { L"Unused? 7", 0x55ae80, 0x55aea0 },
    { L"Unused? 8", 0x55aea0, 0x55aec0 },
    { L"Unused? 9", 0x55af20, 0x55af40 },
    { L"Unused? 10", 0x55af40, 0x55af60 },
    { L"Unused? Shocked", 0x55aec0, 0x55aee0 },
    { L"Unused? MASTER Mode", 0x55aee0, 0x55af00 },
    { L"Unused? Purple Trail", 0x55ade0, 0x55ae00 },
    { L"Unused? Purple Trail", 0x55af00, 0x55af20 },
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
    { L"Main", 0x527a7c, 0x527a9c },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_ALT[] =
{
    { L"Alt", 0x527a9c, 0x527abc },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_FLASH[] =
{
    { L"MASTER Mode", 0x527b1c, 0x527b3c },
    { L"Shocked", 0x527afc, 0x527b1c },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_PORTRAIT[] =
{
    { L"Portrait", 0x7bd89c, 0x7bd8bc },
};

const sGame_PaletteDataset KOFEX2_GBA_RYO_UNUSED[] =
{
    { L"Unused? 1", 0x527abc, 0x527adc },
    { L"Unused? 2", 0x527adc, 0x527afc },
    { L"Unused? 3", 0x527b5c, 0x527b7c },
    { L"Unused? 4", 0x527b7c, 0x527b9c },
    { L"Unused? 5", 0x527b9c, 0x527bbc },
    { L"Unused? 6", 0x527bbc, 0x527bdc },
    { L"Unused? 7", 0x527bdc, 0x527bfc },
    { L"Unused? 8", 0x527bfc, 0x527c1c },
    { L"Unused? 9", 0x527c7c, 0x527c9c },
    { L"Unused? 10", 0x527c9c, 0x527cbc },
    { L"Unused? Shocked", 0x527c1c, 0x527c3c },
    { L"Unused? MASTER Mode", 0x527c3c, 0x527c5c },
    { L"Unused? Purple Trail", 0x527b3c, 0x527b5c },
    { L"Unused? Purple Trail", 0x527c5c, 0x527c7c },
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
    { L"Main", 0x52e6c8, 0x52e6e8 },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_ALT[] =
{
    { L"Alt", 0x52e6e8, 0x52e708 },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_FLASH[] =
{
    { L"MASTER Mode", 0x52e768, 0x52e788 },
    { L"Shocked", 0x52e748, 0x52e768 },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd8bc, 0x7bd8dc },
};

const sGame_PaletteDataset KOFEX2_GBA_YURI_UNUSED[] =
{
    { L"Unused? 1", 0x52e708, 0x52e728 },
    { L"Unused? 2", 0x52e728, 0x52e748 },
    { L"Unused? 3", 0x52e7a8, 0x52e7c8 },
    { L"Unused? 4", 0x52e7c8, 0x52e7e8 },
    { L"Unused? 5", 0x52e7e8, 0x52e808 },
    { L"Unused? 6", 0x52e808, 0x52e828 },
    { L"Unused? 7", 0x52e828, 0x52e848 },
    { L"Unused? 8", 0x52e848, 0x52e868 },
    { L"Unused? 9", 0x52e8c8, 0x52e8e8 },
    { L"Unused? 10", 0x52e8e8, 0x52e908 },
    { L"Unused? Shocked", 0x52e868, 0x52e888 },
    { L"Unused? MASTER Mode", 0x52e888, 0x52e8a8 },
    { L"Unused? Purple Trail", 0x52e788, 0x52e7a8 },
    { L"Unused? Purple Trail", 0x52e8a8, 0x52e8c8 },
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
    { L"Main", 0x534aa4, 0x534ac4 },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_ALT[] =
{
    { L"Alt", 0x534ac4, 0x534ae4 },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_FLASH[] =
{
    { L"MASTER Mode", 0x534b44, 0x534b64 },
    { L"Shocked", 0x534b24, 0x534b44 },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_PORTRAIT[] =
{
    { L"Portrait", 0x7bd8dc, 0x7bd8fc },
};

const sGame_PaletteDataset KOFEX2_GBA_TAKUMA_UNUSED[] =
{
    { L"Unused? 1", 0x534ae4, 0x534b04 },
    { L"Unused? 2", 0x534b04, 0x534b24 },
    { L"Unused? 3", 0x534b84, 0x534ba4 },
    { L"Unused? 4", 0x534ba4, 0x534bc4 },
    { L"Unused? 5", 0x534bc4, 0x534be4 },
    { L"Unused? 6", 0x534be4, 0x534c04 },
    { L"Unused? 7", 0x534c04, 0x534c24 },
    { L"Unused? 8", 0x534c24, 0x534c44 },
    { L"Unused? 9", 0x534ca4, 0x534cc4 },
    { L"Unused? 10", 0x534cc4, 0x534ce4 },
    { L"Unused? Shocked", 0x534c44, 0x534c64 },
    { L"Unused? MASTER Mode", 0x534c64, 0x534c84 },
    { L"Unused? Purple Trail", 0x534b64, 0x534b84 },
    { L"Unused? Purple Trail", 0x534c84, 0x534ca4 },
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
    { L"Main", 0x57bfc0, 0x57bfe0 },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_ALT[] =
{
    { L"Alt", 0x57bfe0, 0x57c000 },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_FLASH[] =
{
    { L"MASTER Mode", 0x57c060, 0x57c080 },
    { L"Shocked", 0x57c040, 0x57c060 },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_PORTRAIT[] =
{
    { L"Portrait", 0x7bd8fc, 0x7bd91c },
};

const sGame_PaletteDataset KOFEX2_GBA_IORI_UNUSED[] =
{
    { L"Unused? 1", 0x57c000, 0x57c020 },
    { L"Unused? 2", 0x57c020, 0x57c040 },
    { L"Unused? 3", 0x57c0a0, 0x57c0c0 },
    { L"Unused? 4", 0x57c0c0, 0x57c0e0 },
    { L"Unused? 5", 0x57c0e0, 0x57c100 },
    { L"Unused? 6", 0x57c100, 0x57c120 },
    { L"Unused? 7", 0x57c120, 0x57c140 },
    { L"Unused? 8", 0x57c140, 0x57c160 },
    { L"Unused? 9", 0x57c1c0, 0x57c1e0 },
    { L"Unused? 10", 0x57c1e0, 0x57c200 },
    { L"Unused? Shocked", 0x57c160, 0x57c180 },
    { L"Unused? MASTER Mode", 0x57c180, 0x57c1a0 },
    { L"Unused? Purple Trail", 0x57c080, 0x57c0a0 },
    { L"Unused? Purple Trail", 0x57c1a0, 0x57c1c0 },
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
