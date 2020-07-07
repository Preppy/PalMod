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
    index_SFA3_Bonus,
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
    index_SFA3_Bonus,
   
    SFA3_A_EXTRALOC // Extra palettes
};

const sGame_PaletteDataset SFA3_A_RYU_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02C0D4, 0x02C0F4, 0x00},
    { _T("X-Ism Kick"),  0x02C174, 0x02C194, 0x00},
    { _T("A-Ism Punch"), 0x02C214, 0x02C234, 0x00},
    { _T("A-Ism Kick"),  0x02C2B4, 0x02C2D4, 0x00},
    { _T("V-Ism Punch"), 0x02C354, 0x02C374, 0x00},
    { _T("V-Ism Kick"),  0x02C3F4, 0x02C414, 0x00},
    { _T("Burned 1"), 0x32a14 + 0x00, 0x32a14 + 0x20, 0x00 },
    { _T("Burned 2"), 0x32a14 + 0x20, 0x32a14 + 0x40, 0x00 },
    { _T("Psycho Crusher Burned 1"), 0x32a14 + 0x40, 0x32a14 + 0x60, 0x00 },
    { _T("Psycho Crusher Burned 2"), 0x32a14 + 0x60, 0x32a14 + 0x80, 0x00 },
    { _T("V-Ism P1 After Effect 1"), 0x32a14 + 0x80, 0x32a14 + 0xA0, 0x00 },
    { _T("V-Ism P1 After Effect 2"), 0x32a14 + 0xA0, 0x32a14 + 0xC0, 0x00 },
    { _T("V-Ism P2 After Effect 1"), 0x32a14 + 0xC0, 0x32a14 + 0xE0, 0x00 },
    { _T("V-Ism P2 After Effect 2"), 0x32a14 + 0xe0, 0x32a14 + 0x100, 0x00 },
    { _T("X-Ism Punch Zapped"), 0x32a14 + 0x100, 0x32a14 + 0x120, 0x00 },
    { _T("X-Ism Kick Zapped"), 0x32a14 + 0x120, 0x32a14 + 0x140, 0x00 },
    { _T("A-Ism Punch Zapped"), 0x32a14 + 0x140, 0x32a14 + 0x160, 0x00 },
    { _T("A-Ism Kick Zapped"), 0x32a14 + 0x160, 0x32a14 + 0x180, 0x00 },
    { _T("V-Ism Punch Zapped"), 0x32a14 + 0x180, 0x32a14 + 0x1A0, 0x00 },
    { _T("V-Ism Kick Zapped"), 0x32a14 + 0x1A0, 0x32a14 + 0x1C0, 0x00 },
    { _T("Zapped Skeleton"), 0x32a14 + 0x1C0, 0x32a14 + 0x1E0, 0x00 },
    { _T("X-Ism Punch Mash"), 0x32a14 + 0x1e0, 0x32a14 + 0x200, 0x00 },
    { _T("X-Ism Kick Mash"), 0x32a14 + 0x200, 0x32a14 + 0x220, 0x00 },
    { _T("A-Ism Punch Mash"), 0x32a14 + 0x220, 0x32a14 + 0x240, 0x00 },
    { _T("A-Ism Kick Mash"), 0x32a14 + 0x240, 0x32a14 + 0x260, 0x00 },
    { _T("V-Ism Punch Mash"), 0x32a14 + 0x260, 0x32a14 + 0x280, 0x00 },
    { _T("V-Ism Kick Mash"), 0x32a14 + 0x280, 0x32a14 + 0x2A0, 0x00 },
    { _T("Priority Win"), 0x32a14 + 0x2A0, 0x32a14 + 0x2C0, 0x00 },
    { _T("Damage Reduction"), 0x32a14 + 0x2C0, 0x32a14 + 0x2E0, 0x00 },
    { _T("Just Defend"), 0x32a14 + 0x2e0, 0x32a14 + 0x300, 0x00 },
};

const sGame_PaletteDataset SFA3_A_KEN_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02C494, 0x02C4B4, 0x27},
    { _T("X-Ism Kick"),  0x02C534, 0x02C554, 0x27},
    { _T("A-Ism Punch"), 0x02C5D4, 0x02C5F4, 0x27},
    { _T("A-Ism Kick"),  0x02C674, 0x02C694, 0x27},
    { _T("V-Ism Punch"), 0x02C714, 0x02C734, 0x27},
    { _T("V-Ism Kick"),  0x02C7B4, 0x02C7D4, 0x27},
    { _T("Burned 1"), 0x32d14 + 0x00, 0x32d14 + 0x20, 0x27 },
    { _T("Burned 2"), 0x32d14 + 0x20, 0x32d14 + 0x40, 0x27 },
    { _T("Psycho Crusher Burned 1"), 0x32d14 + 0x40, 0x32d14 + 0x60, 0x27 },
    { _T("Psycho Crusher Burned 2"), 0x32d14 + 0x60, 0x32d14 + 0x80, 0x27 },
    { _T("V-Ism P1 After Effect 1"), 0x32d14 + 0x80, 0x32d14 + 0xA0, 0x27 },
    { _T("V-Ism P1 After Effect 2"), 0x32d14 + 0xA0, 0x32d14 + 0xC0, 0x27 },
    { _T("V-Ism P2 After Effect 1"), 0x32d14 + 0xC0, 0x32d14 + 0xE0, 0x27 },
    { _T("V-Ism P2 After Effect 2"), 0x32d14 + 0xe0, 0x32d14 + 0x100, 0x27 },
    { _T("X-Ism Punch Zapped"), 0x32d14 + 0x100, 0x32d14 + 0x120, 0x27 },
    { _T("X-Ism Kick Zapped"), 0x32d14 + 0x120, 0x32d14 + 0x140, 0x27 },
    { _T("A-Ism Punch Zapped"), 0x32d14 + 0x140, 0x32d14 + 0x160, 0x27 },
    { _T("A-Ism Kick Zapped"), 0x32d14 + 0x160, 0x32d14 + 0x180, 0x27 },
    { _T("V-Ism Punch Zapped"), 0x32d14 + 0x180, 0x32d14 + 0x1A0, 0x27 },
    { _T("V-Ism Kick Zapped"), 0x32d14 + 0x1A0, 0x32d14 + 0x1C0, 0x27 },
    { _T("Zapped Skeleton"), 0x32d14 + 0x1C0, 0x32d14 + 0x1E0, 0x27 },
    { _T("X-Ism Punch Mash"), 0x32d14 + 0x1e0, 0x32d14 + 0x200, 0x27 },
    { _T("X-Ism Kick Mash"), 0x32d14 + 0x200, 0x32d14 + 0x220, 0x27 },
    { _T("A-Ism Punch Mash"), 0x32d14 + 0x220, 0x32d14 + 0x240, 0x27 },
    { _T("A-Ism Kick Mash"), 0x32d14 + 0x240, 0x32d14 + 0x260, 0x27 },
    { _T("V-Ism Punch Mash"), 0x32d14 + 0x260, 0x32d14 + 0x280, 0x27 },
    { _T("V-Ism Kick Mash"), 0x32d14 + 0x280, 0x32d14 + 0x2A0, 0x27 },
    { _T("Priority Win"), 0x32d14 + 0x2A0, 0x32d14 + 0x2C0, 0x27 },
    { _T("Damage Reduction"), 0x32d14 + 0x2C0, 0x32d14 + 0x2E0, 0x27 },
    { _T("Just Defend"), 0x32d14 + 0x2e0, 0x32d14 + 0x300, 0x27 },
};

const sGame_PaletteDataset SFA3_A_GOUKI_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02C854, 0x02C874, 0x1E},
    { _T("X-Ism Kick"),  0x02C8F4, 0x02C914, 0x1E},
    { _T("A-Ism Punch"), 0x02C994, 0x02C9B4, 0x1E},
    { _T("A-Ism Kick"),  0x02CA34, 0x02CA54, 0x1E},
    { _T("V-Ism Punch"), 0x02CAD4, 0x02CAF4, 0x1E},
    { _T("V-Ism Kick"),  0x02CB74, 0x02CB94, 0x1E},
    { _T("Burned 1"), 0x33014 + 0x00, 0x33014 + 0x20, 0x1E },
    { _T("Burned 2"), 0x33014 + 0x20, 0x33014 + 0x40, 0x1E },
    { _T("Psycho Crusher Burned 1"), 0x33014 + 0x40, 0x33014 + 0x60, 0x1E },
    { _T("Psycho Crusher Burned 2"), 0x33014 + 0x60, 0x33014 + 0x80, 0x1E },
    { _T("V-Ism P1 After Effect 1"), 0x33014 + 0x80, 0x33014 + 0xA0, 0x1E },
    { _T("V-Ism P1 After Effect 2"), 0x33014 + 0xA0, 0x33014 + 0xC0, 0x1E },
    { _T("V-Ism P2 After Effect 1"), 0x33014 + 0xC0, 0x33014 + 0xE0, 0x1E },
    { _T("V-Ism P2 After Effect 2"), 0x33014 + 0xe0, 0x33014 + 0x100, 0x1E },
    { _T("X-Ism Punch Zapped"), 0x33014 + 0x100, 0x33014 + 0x120, 0x1E },
    { _T("X-Ism Kick Zapped"), 0x33014 + 0x120, 0x33014 + 0x140, 0x1E },
    { _T("A-Ism Punch Zapped"), 0x33014 + 0x140, 0x33014 + 0x160, 0x1E },
    { _T("A-Ism Kick Zapped"), 0x33014 + 0x160, 0x33014 + 0x180, 0x1E },
    { _T("V-Ism Punch Zapped"), 0x33014 + 0x180, 0x33014 + 0x1A0, 0x1E },
    { _T("V-Ism Kick Zapped"), 0x33014 + 0x1A0, 0x33014 + 0x1C0, 0x1E },
    { _T("Zapped Skeleton"), 0x33014 + 0x1C0, 0x33014 + 0x1E0, 0x1E },
    { _T("X-Ism Punch Mash"), 0x33014 + 0x1e0, 0x33014 + 0x200, 0x1E },
    { _T("X-Ism Kick Mash"), 0x33014 + 0x200, 0x33014 + 0x220, 0x1E },
    { _T("A-Ism Punch Mash"), 0x33014 + 0x220, 0x33014 + 0x240, 0x1E },
    { _T("A-Ism Kick Mash"), 0x33014 + 0x240, 0x33014 + 0x260, 0x1E },
    { _T("V-Ism Punch Mash"), 0x33014 + 0x260, 0x33014 + 0x280, 0x1E },
    { _T("V-Ism Kick Mash"), 0x33014 + 0x280, 0x33014 + 0x2A0, 0x1E },
    { _T("Priority Win"), 0x33014 + 0x2A0, 0x33014 + 0x2C0, 0x1E },
    { _T("Damage Reduction"), 0x33014 + 0x2C0, 0x33014 + 0x2E0, 0x1E },
    { _T("Just Defend"), 0x33014 + 0x2e0, 0x33014 + 0x300, 0x1E },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02CC14, 0x02CC34, 0x21},
    { _T("X-Ism Kick"),  0x02CCB4, 0x02CCD4, 0x21},
    { _T("A-Ism Punch"), 0x02CD54, 0x02CD74, 0x21},
    { _T("A-Ism Kick"),  0x02CDF4, 0x02CE14, 0x21},
    { _T("V-Ism Punch"), 0x02CE94, 0x02CEB4, 0x21},
    { _T("V-Ism Kick"),  0x02CF34, 0x02CF54, 0x21},
    { _T("Burned 1"), 0x33314 + 0x00, 0x33314 + 0x20, 0x21 },
    { _T("Burned 2"), 0x33314 + 0x20, 0x33314 + 0x40, 0x21 },
    { _T("Psycho Crusher Burned 1"), 0x33314 + 0x40, 0x33314 + 0x60, 0x21 },
    { _T("Psycho Crusher Burned 2"), 0x33314 + 0x60, 0x33314 + 0x80, 0x21 },
    { _T("V-Ism P1 After Effect 1"), 0x33314 + 0x80, 0x33314 + 0xA0, 0x21 },
    { _T("V-Ism P1 After Effect 2"), 0x33314 + 0xA0, 0x33314 + 0xC0, 0x21 },
    { _T("V-Ism P2 After Effect 1"), 0x33314 + 0xC0, 0x33314 + 0xE0, 0x21 },
    { _T("V-Ism P2 After Effect 2"), 0x33314 + 0xe0, 0x33314 + 0x100, 0x21 },
    { _T("X-Ism Punch Zapped"), 0x33314 + 0x100, 0x33314 + 0x120, 0x21 },
    { _T("X-Ism Kick Zapped"), 0x33314 + 0x120, 0x33314 + 0x140, 0x21 },
    { _T("A-Ism Punch Zapped"), 0x33314 + 0x140, 0x33314 + 0x160, 0x21 },
    { _T("A-Ism Kick Zapped"), 0x33314 + 0x160, 0x33314 + 0x180, 0x21 },
    { _T("V-Ism Punch Zapped"), 0x33314 + 0x180, 0x33314 + 0x1A0, 0x21 },
    { _T("V-Ism Kick Zapped"), 0x33314 + 0x1A0, 0x33314 + 0x1C0, 0x21 },
    { _T("Zapped Skeleton"), 0x33314 + 0x1C0, 0x33314 + 0x1E0, 0x21 },
    { _T("X-Ism Punch Mash"), 0x33314 + 0x1e0, 0x33314 + 0x200, 0x21 },
    { _T("X-Ism Kick Mash"), 0x33314 + 0x200, 0x33314 + 0x220, 0x21 },
    { _T("A-Ism Punch Mash"), 0x33314 + 0x220, 0x33314 + 0x240, 0x21 },
    { _T("A-Ism Kick Mash"), 0x33314 + 0x240, 0x33314 + 0x260, 0x21 },
    { _T("V-Ism Punch Mash"), 0x33314 + 0x260, 0x33314 + 0x280, 0x21 },
    { _T("V-Ism Kick Mash"), 0x33314 + 0x280, 0x33314 + 0x2A0, 0x21 },
    { _T("Priority Win"), 0x33314 + 0x2A0, 0x33314 + 0x2C0, 0x21 },
    { _T("Damage Reduction"), 0x33314 + 0x2C0, 0x33314 + 0x2E0, 0x21 },
    { _T("Just Defend"), 0x33314 + 0x2e0, 0x33314 + 0x300, 0x21 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02CFD4, 0x02CFF4, 0x1B},
    { _T("X-Ism Kick"),  0x02D074, 0x02D094, 0x1B},
    { _T("A-Ism Punch"), 0x02D114, 0x02D134, 0x1B, 0x04},
    { _T("A-Ism Kick"),  0x02D1B4, 0x02D1D4, 0x1B, 0x04},
    { _T("V-Ism Punch"), 0x02D254, 0x02D274, 0x1B, 0x04},
    { _T("V-Ism Kick"),  0x02D2F4, 0x02D314, 0x1B, 0x04},
    { _T("Burned 1"), 0x33614 + 0x00, 0x33614 + 0x20, 0x1B },
    { _T("Burned 2"), 0x33614 + 0x20, 0x33614 + 0x40, 0x1B },
    { _T("Psycho Crusher Burned 1"), 0x33614 + 0x40, 0x33614 + 0x60, 0x1B },
    { _T("Psycho Crusher Burned 2"), 0x33614 + 0x60, 0x33614 + 0x80, 0x1B },
    { _T("V-Ism P1 After Effect 1"), 0x33614 + 0x80, 0x33614 + 0xA0, 0x1B },
    { _T("V-Ism P1 After Effect 2"), 0x33614 + 0xA0, 0x33614 + 0xC0, 0x1B },
    { _T("V-Ism P2 After Effect 1"), 0x33614 + 0xC0, 0x33614 + 0xE0, 0x1B },
    { _T("V-Ism P2 After Effect 2"), 0x33614 + 0xe0, 0x33614 + 0x100, 0x1B },
    { _T("X-Ism Punch Zapped"), 0x33614 + 0x100, 0x33614 + 0x120, 0x1B },
    { _T("X-Ism Kick Zapped"), 0x33614 + 0x120, 0x33614 + 0x140, 0x1B },
    { _T("A-Ism Punch Zapped"), 0x33614 + 0x140, 0x33614 + 0x160, 0x1B },
    { _T("A-Ism Kick Zapped"), 0x33614 + 0x160, 0x33614 + 0x180, 0x1B },
    { _T("V-Ism Punch Zapped"), 0x33614 + 0x180, 0x33614 + 0x1A0, 0x1B },
    { _T("V-Ism Kick Zapped"), 0x33614 + 0x1A0, 0x33614 + 0x1C0, 0x1B },
    { _T("Zapped Skeleton"), 0x33614 + 0x1C0, 0x33614 + 0x1E0, 0x1B },
    { _T("X-Ism Punch Mash"), 0x33614 + 0x1e0, 0x33614 + 0x200, 0x1B },
    { _T("X-Ism Kick Mash"), 0x33614 + 0x200, 0x33614 + 0x220, 0x1B },
    { _T("A-Ism Punch Mash"), 0x33614 + 0x220, 0x33614 + 0x240, 0x1B },
    { _T("A-Ism Kick Mash"), 0x33614 + 0x240, 0x33614 + 0x260, 0x1B },
    { _T("V-Ism Punch Mash"), 0x33614 + 0x260, 0x33614 + 0x280, 0x1B },
    { _T("V-Ism Kick Mash"), 0x33614 + 0x280, 0x33614 + 0x2A0, 0x1B },
    { _T("Priority Win"), 0x33614 + 0x2A0, 0x33614 + 0x2C0, 0x1B },
    { _T("Damage Reduction"), 0x33614 + 0x2C0, 0x33614 + 0x2E0, 0x1B },
    { _T("Just Defend"), 0x33614 + 0x2e0, 0x33614 + 0x300, 0x1B },
};

const sGame_PaletteDataset SFA3_A_ADON_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02D394, 0x02D3B4, 0x3D },
    { _T("X-Ism Kick"),  0x02D434, 0x02D454, 0x3D },
    { _T("A-Ism Punch"), 0x02D4D4, 0x02D4F4, 0x3D },
    { _T("A-Ism Kick"),  0x02D574, 0x02D594, 0x3D },
    { _T("V-Ism Punch"), 0x02D614, 0x02D634, 0x3D },
    { _T("V-Ism Kick"),  0x02D6B4, 0x02D6D4, 0x3D },
    { _T("Burned 1"), 0x339f4 + 0x00, 0x339f4 + 0x20, 0x3D },
    { _T("Burned 2"), 0x339f4 + 0x20, 0x339f4 + 0x40, 0x3D },
    { _T("Psycho Crusher Burned 1"), 0x339f4 + 0x40, 0x339f4 + 0x60, 0x3D },
    { _T("Psycho Crusher Burned 2"), 0x339f4 + 0x60, 0x339f4 + 0x80, 0x3D },
    { _T("V-Ism P1 After Effect 1"), 0x339f4 + 0x80, 0x339f4 + 0xA0, 0x3D },
    { _T("V-Ism P1 After Effect 2"), 0x339f4 + 0xA0, 0x339f4 + 0xC0, 0x3D },
    { _T("V-Ism P2 After Effect 1"), 0x339f4 + 0xC0, 0x339f4 + 0xE0, 0x3D },
    { _T("V-Ism P2 After Effect 2"), 0x339f4 + 0xe0, 0x339f4 + 0x100, 0x3D },
    { _T("X-Ism Punch Zapped"), 0x339f4 + 0x100, 0x339f4 + 0x120, 0x3D },
    { _T("X-Ism Kick Zapped"), 0x339f4 + 0x120, 0x339f4 + 0x140, 0x3D },
    { _T("A-Ism Punch Zapped"), 0x339f4 + 0x140, 0x339f4 + 0x160, 0x3D },
    { _T("A-Ism Kick Zapped"), 0x339f4 + 0x160, 0x339f4 + 0x180, 0x3D },
    { _T("V-Ism Punch Zapped"), 0x339f4 + 0x180, 0x339f4 + 0x1A0, 0x3D },
    { _T("V-Ism Kick Zapped"), 0x339f4 + 0x1A0, 0x339f4 + 0x1C0, 0x3D },
    { _T("Zapped Skeleton"), 0x339f4 + 0x1C0, 0x339f4 + 0x1E0, 0x3D },
    { _T("X-Ism Punch Mash"), 0x339f4 + 0x1e0, 0x339f4 + 0x200, 0x3D },
    { _T("X-Ism Kick Mash"), 0x339f4 + 0x200, 0x339f4 + 0x220, 0x3D },
    { _T("A-Ism Punch Mash"), 0x339f4 + 0x220, 0x339f4 + 0x240, 0x3D },
    { _T("A-Ism Kick Mash"), 0x339f4 + 0x240, 0x339f4 + 0x260, 0x3D },
    { _T("V-Ism Punch Mash"), 0x339f4 + 0x260, 0x339f4 + 0x280, 0x3D },
    { _T("V-Ism Kick Mash"), 0x339f4 + 0x280, 0x339f4 + 0x2A0, 0x3D },
    { _T("Priority Win"), 0x339f4 + 0x2A0, 0x339f4 + 0x2C0, 0x3D },
    { _T("Damage Reduction"), 0x339f4 + 0x2C0, 0x339f4 + 0x2E0, 0x3D },
    { _T("Just Defend"), 0x339f4 + 0x2e0, 0x339f4 + 0x300, 0x3D },
};

const sGame_PaletteDataset SFA3_A_SODOM_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02D754, 0x02D774, 0x3E},
    { _T("X-Ism Kick"),  0x02D7F4, 0x02D814, 0x3E},
    { _T("A-Ism Punch"), 0x02D894, 0x02D8B4, 0x3E},
    { _T("A-Ism Kick"),  0x02D934, 0x02D954, 0x3E},
    { _T("V-Ism Punch"), 0x02D9D4, 0x02D9F4, 0x3E},
    { _T("V-Ism Kick"),  0x02DA74, 0x02DA94, 0x3E},
    { _T("Burned 1"), 0x33cf4 + 0x00, 0x33cf4 + 0x20, 0x3E },
    { _T("Burned 2"), 0x33cf4 + 0x20, 0x33cf4 + 0x40, 0x3E },
    { _T("Psycho Crusher Burned 1"), 0x33cf4 + 0x40, 0x33cf4 + 0x60, 0x3E },
    { _T("Psycho Crusher Burned 2"), 0x33cf4 + 0x60, 0x33cf4 + 0x80, 0x3E },
    { _T("V-Ism P1 After Effect 1"), 0x33cf4 + 0x80, 0x33cf4 + 0xA0, 0x3E },
    { _T("V-Ism P1 After Effect 2"), 0x33cf4 + 0xA0, 0x33cf4 + 0xC0, 0x3E },
    { _T("V-Ism P2 After Effect 1"), 0x33cf4 + 0xC0, 0x33cf4 + 0xE0, 0x3E },
    { _T("V-Ism P2 After Effect 2"), 0x33cf4 + 0xe0, 0x33cf4 + 0x100, 0x3E },
    { _T("X-Ism Punch Zapped"), 0x33cf4 + 0x100, 0x33cf4 + 0x120, 0x3E },
    { _T("X-Ism Kick Zapped"), 0x33cf4 + 0x120, 0x33cf4 + 0x140, 0x3E },
    { _T("A-Ism Punch Zapped"), 0x33cf4 + 0x140, 0x33cf4 + 0x160, 0x3E },
    { _T("A-Ism Kick Zapped"), 0x33cf4 + 0x160, 0x33cf4 + 0x180, 0x3E },
    { _T("V-Ism Punch Zapped"), 0x33cf4 + 0x180, 0x33cf4 + 0x1A0, 0x3E },
    { _T("V-Ism Kick Zapped"), 0x33cf4 + 0x1A0, 0x33cf4 + 0x1C0, 0x3E },
    { _T("Zapped Skeleton"), 0x33cf4 + 0x1C0, 0x33cf4 + 0x1E0, 0x3E },
    { _T("X-Ism Punch Mash"), 0x33cf4 + 0x1e0, 0x33cf4 + 0x200, 0x3E },
    { _T("X-Ism Kick Mash"), 0x33cf4 + 0x200, 0x33cf4 + 0x220, 0x3E },
    { _T("A-Ism Punch Mash"), 0x33cf4 + 0x220, 0x33cf4 + 0x240, 0x3E },
    { _T("A-Ism Kick Mash"), 0x33cf4 + 0x240, 0x33cf4 + 0x260, 0x3E },
    { _T("V-Ism Punch Mash"), 0x33cf4 + 0x260, 0x33cf4 + 0x280, 0x3E },
    { _T("V-Ism Kick Mash"), 0x33cf4 + 0x280, 0x33cf4 + 0x2A0, 0x3E },
    { _T("Priority Win"), 0x33cf4 + 0x2A0, 0x33cf4 + 0x2C0, 0x3E },
    { _T("Damage Reduction"), 0x33cf4 + 0x2C0, 0x33cf4 + 0x2E0, 0x3E },
    { _T("Just Defend"), 0x33cf4 + 0x2e0, 0x33cf4 + 0x300, 0x3E },
};

const sGame_PaletteDataset SFA3_A_GUY_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02DB14, 0x02DB34, 0x3F},
    { _T("X-Ism Kick"),  0x02DBB4, 0x02DBD4, 0x3F},
    { _T("A-Ism Punch"), 0x02DC54, 0x02DC74, 0x3F},
    { _T("A-Ism Kick"),  0x02DCF4, 0x02DD14, 0x3F},
    { _T("V-Ism Punch"), 0x02DD94, 0x02DDB4, 0x3F},
    { _T("V-Ism Kick"),  0x02DE34, 0x02DE54, 0x3F},
    { _T("Burned 1"), 0x34194 + 0x00, 0x34194 + 0x20, 0x3f },
    { _T("Burned 2"), 0x34194 + 0x20, 0x34194 + 0x40, 0x3f },
    { _T("Psycho Crusher Burned 1"), 0x34194 + 0x40, 0x34194 + 0x60, 0x3f },
    { _T("Psycho Crusher Burned 2"), 0x34194 + 0x60, 0x34194 + 0x80, 0x3f },
    { _T("V-Ism P1 After Effect 1"), 0x34194 + 0x80, 0x34194 + 0xA0, 0x3f },
    { _T("V-Ism P1 After Effect 2"), 0x34194 + 0xA0, 0x34194 + 0xC0, 0x3f },
    { _T("V-Ism P2 After Effect 1"), 0x34194 + 0xC0, 0x34194 + 0xE0, 0x3f },
    { _T("V-Ism P2 After Effect 2"), 0x34194 + 0xe0, 0x34194 + 0x100, 0x3f },
    { _T("X-Ism Punch Zapped"), 0x34194 + 0x100, 0x34194 + 0x120, 0x3f },
    { _T("X-Ism Kick Zapped"), 0x34194 + 0x120, 0x34194 + 0x140, 0x3f },
    { _T("A-Ism Punch Zapped"), 0x34194 + 0x140, 0x34194 + 0x160, 0x3f },
    { _T("A-Ism Kick Zapped"), 0x34194 + 0x160, 0x34194 + 0x180, 0x3f },
    { _T("V-Ism Punch Zapped"), 0x34194 + 0x180, 0x34194 + 0x1A0, 0x3f },
    { _T("V-Ism Kick Zapped"), 0x34194 + 0x1A0, 0x34194 + 0x1C0, 0x3f },
    { _T("Zapped Skeleton"), 0x34194 + 0x1C0, 0x34194 + 0x1E0, 0x3f },
    { _T("X-Ism Punch Mash"), 0x34194 + 0x1e0, 0x34194 + 0x200, 0x3f },
    { _T("X-Ism Kick Mash"), 0x34194 + 0x200, 0x34194 + 0x220, 0x3f },
    { _T("A-Ism Punch Mash"), 0x34194 + 0x220, 0x34194 + 0x240, 0x3f },
    { _T("A-Ism Kick Mash"), 0x34194 + 0x240, 0x34194 + 0x260, 0x3f },
    { _T("V-Ism Punch Mash"), 0x34194 + 0x260, 0x34194 + 0x280, 0x3f },
    { _T("V-Ism Kick Mash"), 0x34194 + 0x280, 0x34194 + 0x2A0, 0x3f },
    { _T("Priority Win"), 0x34194 + 0x2A0, 0x34194 + 0x2C0, 0x3f },
    { _T("Damage Reduction"), 0x34194 + 0x2C0, 0x34194 + 0x2E0, 0x3f },
    { _T("Just Defend"), 0x34194 + 0x2e0, 0x34194 + 0x300, 0x3f },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02DED4, 0x02DEF4, 0x40},
    { _T("X-Ism Kick"),  0x02DF74, 0x02DF94, 0x40},
    { _T("A-Ism Punch"), 0x02E014, 0x02E034, 0x40},
    { _T("A-Ism Kick"),  0x02E0B4, 0x02E0D4, 0x40},
    { _T("V-Ism Punch"), 0x02E154, 0x02E174, 0x40},
    { _T("V-Ism Kick"),  0x02E1F4, 0x02E214, 0x40},
    { _T("Burned 1"), 0x34494 + 0x00, 0x34494 + 0x20, 0x40 },
    { _T("Burned 2"), 0x34494 + 0x20, 0x34494 + 0x40, 0x40 },
    { _T("Psycho Crusher Burned 1"), 0x34494 + 0x40, 0x34494 + 0x60, 0x40 },
    { _T("Psycho Crusher Burned 2"), 0x34494 + 0x60, 0x34494 + 0x80, 0x40 },
    { _T("V-Ism P1 After Effect 1"), 0x34494 + 0x80, 0x34494 + 0xA0, 0x40 },
    { _T("V-Ism P1 After Effect 2"), 0x34494 + 0xA0, 0x34494 + 0xC0, 0x40 },
    { _T("V-Ism P2 After Effect 1"), 0x34494 + 0xC0, 0x34494 + 0xE0, 0x40 },
    { _T("V-Ism P2 After Effect 2"), 0x34494 + 0xe0, 0x34494 + 0x100, 0x40 },
    { _T("X-Ism Punch Zapped"), 0x34494 + 0x100, 0x34494 + 0x120, 0x40 },
    { _T("X-Ism Kick Zapped"), 0x34494 + 0x120, 0x34494 + 0x140, 0x40 },
    { _T("A-Ism Punch Zapped"), 0x34494 + 0x140, 0x34494 + 0x160, 0x40 },
    { _T("A-Ism Kick Zapped"), 0x34494 + 0x160, 0x34494 + 0x180, 0x40 },
    { _T("V-Ism Punch Zapped"), 0x34494 + 0x180, 0x34494 + 0x1A0, 0x40 },
    { _T("V-Ism Kick Zapped"), 0x34494 + 0x1A0, 0x34494 + 0x1C0, 0x40 },
    { _T("Zapped Skeleton"), 0x34494 + 0x1C0, 0x34494 + 0x1E0, 0x40 },
    { _T("X-Ism Punch Mash"), 0x34494 + 0x1e0, 0x34494 + 0x200, 0x40 },
    { _T("X-Ism Kick Mash"), 0x34494 + 0x200, 0x34494 + 0x220, 0x40 },
    { _T("A-Ism Punch Mash"), 0x34494 + 0x220, 0x34494 + 0x240, 0x40 },
    { _T("A-Ism Kick Mash"), 0x34494 + 0x240, 0x34494 + 0x260, 0x40 },
    { _T("V-Ism Punch Mash"), 0x34494 + 0x260, 0x34494 + 0x280, 0x40 },
    { _T("V-Ism Kick Mash"), 0x34494 + 0x280, 0x34494 + 0x2A0, 0x40 },
    { _T("Priority Win"), 0x34494 + 0x2A0, 0x34494 + 0x2C0, 0x40 },
    { _T("Damage Reduction"), 0x34494 + 0x2C0, 0x34494 + 0x2E0, 0x40 },
    { _T("Just Defend"), 0x34494 + 0x2e0, 0x34494 + 0x300, 0x40 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMP[] =
{
    { _T("X-Ism Punch"), 0x02E294, 0x02E2B4, indexCPS2_Rose },
    { _T("X-ism Punch Dress Winpose"), 0x4ae14, 0x4ae34, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_XISMK[] =
{
    { _T("X-Ism Kick"),  0x02E334, 0x02E354, indexCPS2_Rose },
    { _T("X-ism Kick Dress Winpose"), 0x4ae34, 0x4ae54, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMP[] =
{
    { _T("A-Ism Punch"), 0x02E3D4, 0x02E3F4, indexCPS2_Rose },
    { _T("A-ism Punch Dress Winpose"), 0x4ae54, 0x4ae74, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_AISMK[] =
{
    { _T("A-Ism Kick"), 0x02E474, 0x02E494, indexCPS2_Rose },
    { _T("A-ism Kick Dress Winpose"), 0x4ae74, 0x4ae94, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMP[] =
{
    { _T("V-Ism Punch"), 0x02E514, 0x02E534, indexCPS2_Rose },
    { _T("V-ism Punch Dress Winpose"), 0x4ae94, 0x4aeb4, indexCPS2_Rose, 1 },
};

const sGame_PaletteDataset SFA3_A_ROSE_VISMK[] =
{
    { _T("V-Ism Kick"),  0x02E5B4, 0x02E5D4, indexCPS2_Rose },
    { _T("V-ism Kick Dress Winpose"), 0x4aeb4, 0x4aed4, indexCPS2_Rose, 1 },
};
    
const sGame_PaletteDataset SFA3_A_ROSE_STATUS[] =
{
    { _T("Burned 1"), 0x34794 + 0x00, 0x34794 + 0x20, 0x41 },
    { _T("Burned 2"), 0x34794 + 0x20, 0x34794 + 0x40, 0x41 },
    { _T("Psycho Crusher Burned 1"), 0x34794 + 0x40, 0x34794 + 0x60, 0x41 },
    { _T("Psycho Crusher Burned 2"), 0x34794 + 0x60, 0x34794 + 0x80, 0x41 },
    { _T("V-Ism P1 After Effect 1"), 0x34794 + 0x80, 0x34794 + 0xA0, 0x41 },
    { _T("V-Ism P1 After Effect 2"), 0x34794 + 0xA0, 0x34794 + 0xC0, 0x41 },
    { _T("V-Ism P2 After Effect 1"), 0x34794 + 0xC0, 0x34794 + 0xE0, 0x41 },
    { _T("V-Ism P2 After Effect 2"), 0x34794 + 0xe0, 0x34794 + 0x100, 0x41 },
    { _T("X-Ism Punch Zapped"), 0x34794 + 0x100, 0x34794 + 0x120, 0x41 },
    { _T("X-Ism Kick Zapped"), 0x34794 + 0x120, 0x34794 + 0x140, 0x41 },
    { _T("A-Ism Punch Zapped"), 0x34794 + 0x140, 0x34794 + 0x160, 0x41 },
    { _T("A-Ism Kick Zapped"), 0x34794 + 0x160, 0x34794 + 0x180, 0x41 },
    { _T("V-Ism Punch Zapped"), 0x34794 + 0x180, 0x34794 + 0x1A0, 0x41 },
    { _T("V-Ism Kick Zapped"), 0x34794 + 0x1A0, 0x34794 + 0x1C0, 0x41 },
    { _T("Zapped Skeleton"), 0x34794 + 0x1C0, 0x34794 + 0x1E0, 0x41 },
    { _T("X-Ism Punch Mash"), 0x34794 + 0x1e0, 0x34794 + 0x200, 0x41 },
    { _T("X-Ism Kick Mash"), 0x34794 + 0x200, 0x34794 + 0x220, 0x41 },
    { _T("A-Ism Punch Mash"), 0x34794 + 0x220, 0x34794 + 0x240, 0x41 },
    { _T("A-Ism Kick Mash"), 0x34794 + 0x240, 0x34794 + 0x260, 0x41 },
    { _T("V-Ism Punch Mash"), 0x34794 + 0x260, 0x34794 + 0x280, 0x41 },
    { _T("V-Ism Kick Mash"), 0x34794 + 0x280, 0x34794 + 0x2A0, 0x41 },
    { _T("Priority Win"), 0x34794 + 0x2A0, 0x34794 + 0x2C0, 0x41 },
    { _T("Damage Reduction"), 0x34794 + 0x2C0, 0x34794 + 0x2E0, 0x41 },
    { _T("Just Defend"), 0x34794 + 0x2e0, 0x34794 + 0x300, 0x41 },
};

const sGame_PaletteDataset SFA3_A_MBIPSON_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02E654, 0x02E674, 0x26},
    { _T("X-Ism Kick"),  0x02E6F4, 0x02E714, 0x26},
    { _T("A-Ism Punch"), 0x02E794, 0x02E7B4, 0x26},
    { _T("A-Ism Kick"),  0x02E834, 0x02E854, 0x26},
    { _T("V-Ism Punch"), 0x02E8D4, 0x02E8F4, 0x26},
    { _T("V-Ism Kick"),  0x02E974, 0x02E994, 0x26},
    { _T("Burned 1"), 0x34a94 + 0x00, 0x34a94 + 0x20, 0x26 },
    { _T("Burned 2"), 0x34a94 + 0x20, 0x34a94 + 0x40, 0x26 },
    { _T("Psycho Crusher Burned 1"), 0x34a94 + 0x40, 0x34a94 + 0x60, 0x26 },
    { _T("Psycho Crusher Burned 2"), 0x34a94 + 0x60, 0x34a94 + 0x80, 0x26 },
    { _T("V-Ism P1 After Effect 1"), 0x34a94 + 0x80, 0x34a94 + 0xA0, 0x26 },
    { _T("V-Ism P1 After Effect 2"), 0x34a94 + 0xA0, 0x34a94 + 0xC0, 0x26 },
    { _T("V-Ism P2 After Effect 1"), 0x34a94 + 0xC0, 0x34a94 + 0xE0, 0x26 },
    { _T("V-Ism P2 After Effect 2"), 0x34a94 + 0xe0, 0x34a94 + 0x100, 0x26 },
    { _T("X-Ism Punch Zapped"), 0x34a94 + 0x100, 0x34a94 + 0x120, 0x26 },
    { _T("X-Ism Kick Zapped"), 0x34a94 + 0x120, 0x34a94 + 0x140, 0x26 },
    { _T("A-Ism Punch Zapped"), 0x34a94 + 0x140, 0x34a94 + 0x160, 0x26 },
    { _T("A-Ism Kick Zapped"), 0x34a94 + 0x160, 0x34a94 + 0x180, 0x26 },
    { _T("V-Ism Punch Zapped"), 0x34a94 + 0x180, 0x34a94 + 0x1A0, 0x26 },
    { _T("V-Ism Kick Zapped"), 0x34a94 + 0x1A0, 0x34a94 + 0x1C0, 0x26 },
    { _T("Zapped Skeleton"), 0x34a94 + 0x1C0, 0x34a94 + 0x1E0, 0x26 },
    { _T("X-Ism Punch Mash"), 0x34a94 + 0x1e0, 0x34a94 + 0x200, 0x26 },
    { _T("X-Ism Kick Mash"), 0x34a94 + 0x200, 0x34a94 + 0x220, 0x26 },
    { _T("A-Ism Punch Mash"), 0x34a94 + 0x220, 0x34a94 + 0x240, 0x26 },
    { _T("A-Ism Kick Mash"), 0x34a94 + 0x240, 0x34a94 + 0x260, 0x26 },
    { _T("V-Ism Punch Mash"), 0x34a94 + 0x260, 0x34a94 + 0x280, 0x26 },
    { _T("V-Ism Kick Mash"), 0x34a94 + 0x280, 0x34a94 + 0x2A0, 0x26 },
    { _T("Priority Win"), 0x34a94 + 0x2A0, 0x34a94 + 0x2C0, 0x26 },
    { _T("Damage Reduction"), 0x34a94 + 0x2C0, 0x34a94 + 0x2E0, 0x26 },
    { _T("Just Defend"), 0x34a94 + 0x2e0, 0x34a94 + 0x300, 0x26 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02EA14, 0x02EA34, 0x42},
    { _T("X-Ism Kick"),  0x02EAB4, 0x02EAD4, 0x42},
    { _T("A-Ism Punch"), 0x02EB54, 0x02EB74, 0x42},
    { _T("A-Ism Kick"),  0x02EBF4, 0x02EC14, 0x42},
    { _T("V-Ism Punch"), 0x02EC94, 0x02ECB4, 0x42},
    { _T("V-Ism Kick"),  0x02ED34, 0x02ED54, 0x42},
    { _T("Burned 1"), 0x34d94 + 0x00, 0x34d94 + 0x20, 0x42 },
    { _T("Burned 2"), 0x34d94 + 0x20, 0x34d94 + 0x40, 0x42 },
    { _T("Psycho Crusher Burned 1"), 0x34d94 + 0x40, 0x34d94 + 0x60, 0x42 },
    { _T("Psycho Crusher Burned 2"), 0x34d94 + 0x60, 0x34d94 + 0x80, 0x42 },
    { _T("V-Ism P1 After Effect 1"), 0x34d94 + 0x80, 0x34d94 + 0xA0, 0x42 },
    { _T("V-Ism P1 After Effect 2"), 0x34d94 + 0xA0, 0x34d94 + 0xC0, 0x42 },
    { _T("V-Ism P2 After Effect 1"), 0x34d94 + 0xC0, 0x34d94 + 0xE0, 0x42 },
    { _T("V-Ism P2 After Effect 2"), 0x34d94 + 0xe0, 0x34d94 + 0x100, 0x42 },
    { _T("X-Ism Punch Zapped"), 0x34d94 + 0x100, 0x34d94 + 0x120, 0x42 },
    { _T("X-Ism Kick Zapped"), 0x34d94 + 0x120, 0x34d94 + 0x140, 0x42 },
    { _T("A-Ism Punch Zapped"), 0x34d94 + 0x140, 0x34d94 + 0x160, 0x42 },
    { _T("A-Ism Kick Zapped"), 0x34d94 + 0x160, 0x34d94 + 0x180, 0x42 },
    { _T("V-Ism Punch Zapped"), 0x34d94 + 0x180, 0x34d94 + 0x1A0, 0x42 },
    { _T("V-Ism Kick Zapped"), 0x34d94 + 0x1A0, 0x34d94 + 0x1C0, 0x42 },
    { _T("Zapped Skeleton"), 0x34d94 + 0x1C0, 0x34d94 + 0x1E0, 0x42 },
    { _T("X-Ism Punch Mash"), 0x34d94 + 0x1e0, 0x34d94 + 0x200, 0x42 },
    { _T("X-Ism Kick Mash"), 0x34d94 + 0x200, 0x34d94 + 0x220, 0x42 },
    { _T("A-Ism Punch Mash"), 0x34d94 + 0x220, 0x34d94 + 0x240, 0x42 },
    { _T("A-Ism Kick Mash"), 0x34d94 + 0x240, 0x34d94 + 0x260, 0x42 },
    { _T("V-Ism Punch Mash"), 0x34d94 + 0x260, 0x34d94 + 0x280, 0x42 },
    { _T("V-Ism Kick Mash"), 0x34d94 + 0x280, 0x34d94 + 0x2A0, 0x42 },
    { _T("Priority Win"), 0x34d94 + 0x2A0, 0x34d94 + 0x2C0, 0x42 },
    { _T("Damage Reduction"), 0x34d94 + 0x2C0, 0x34d94 + 0x2E0, 0x42 },
    { _T("Just Defend"), 0x34d94 + 0x2e0, 0x34d94 + 0x300, 0x42 },
};

const sGame_PaletteDataset SFA3_A_DAN_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02EDD4, 0x02EDF4, 0x23},
    { _T("X-Ism Kick"),  0x02EE74, 0x02EE94, 0x23},
    { _T("A-Ism Punch"), 0x02EF14, 0x02EF34, 0x23},
    { _T("A-Ism Kick"),  0x02EFB4, 0x02EFD4, 0x23},
    { _T("V-Ism Punch"), 0x02F054, 0x02F074, 0x23},
    { _T("V-Ism Kick"),  0x02F0F4, 0x02F114, 0x23},
    { _T("Burned 1"), 0x35094 + 0x00, 0x35094 + 0x20, 0x23 },
    { _T("Burned 2"), 0x35094 + 0x20, 0x35094 + 0x40, 0x23 },
    { _T("Psycho Crusher Burned 1"), 0x35094 + 0x40, 0x35094 + 0x60, 0x23 },
    { _T("Psycho Crusher Burned 2"), 0x35094 + 0x60, 0x35094 + 0x80, 0x23 },
    { _T("V-Ism P1 After Effect 1"), 0x35094 + 0x80, 0x35094 + 0xA0, 0x23 },
    { _T("V-Ism P1 After Effect 2"), 0x35094 + 0xA0, 0x35094 + 0xC0, 0x23 },
    { _T("V-Ism P2 After Effect 1"), 0x35094 + 0xC0, 0x35094 + 0xE0, 0x23 },
    { _T("V-Ism P2 After Effect 2"), 0x35094 + 0xe0, 0x35094 + 0x100, 0x23 },
    { _T("X-Ism Punch Zapped"), 0x35094 + 0x100, 0x35094 + 0x120, 0x23 },
    { _T("X-Ism Kick Zapped"), 0x35094 + 0x120, 0x35094 + 0x140, 0x23 },
    { _T("A-Ism Punch Zapped"), 0x35094 + 0x140, 0x35094 + 0x160, 0x23 },
    { _T("A-Ism Kick Zapped"), 0x35094 + 0x160, 0x35094 + 0x180, 0x23 },
    { _T("V-Ism Punch Zapped"), 0x35094 + 0x180, 0x35094 + 0x1A0, 0x23 },
    { _T("V-Ism Kick Zapped"), 0x35094 + 0x1A0, 0x35094 + 0x1C0, 0x23 },
    { _T("Zapped Skeleton"), 0x35094 + 0x1C0, 0x35094 + 0x1E0, 0x23 },
    { _T("X-Ism Punch Mash"), 0x35094 + 0x1e0, 0x35094 + 0x200, 0x23 },
    { _T("X-Ism Kick Mash"), 0x35094 + 0x200, 0x35094 + 0x220, 0x23 },
    { _T("A-Ism Punch Mash"), 0x35094 + 0x220, 0x35094 + 0x240, 0x23 },
    { _T("A-Ism Kick Mash"), 0x35094 + 0x240, 0x35094 + 0x260, 0x23 },
    { _T("V-Ism Punch Mash"), 0x35094 + 0x260, 0x35094 + 0x280, 0x23 },
    { _T("V-Ism Kick Mash"), 0x35094 + 0x280, 0x35094 + 0x2A0, 0x23 },
    { _T("Priority Win"), 0x35094 + 0x2A0, 0x35094 + 0x2C0, 0x23 },
    { _T("Damage Reduction"), 0x35094 + 0x2C0, 0x35094 + 0x2E0, 0x23 },
    { _T("Just Defend"), 0x35094 + 0x2e0, 0x35094 + 0x300, 0x23 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02F194, 0x02F1B4, 0x22},
    { _T("X-Ism Kick"),  0x02F234, 0x02F254, 0x22},
    { _T("A-Ism Punch"), 0x02F2D4, 0x02F2F4, 0x22},
    { _T("A-Ism Kick"),  0x02F374, 0x02F394, 0x22},
    { _T("V-Ism Punch"), 0x02F414, 0x02F434, 0x22},
    { _T("V-Ism Kick"),  0x02F4B4, 0x02F4D4, 0x22},
    { _T("Burned 1"), 0x35394 + 0x00, 0x35394 + 0x20, 0x22 },
    { _T("Burned 2"), 0x35394 + 0x20, 0x35394 + 0x40, 0x22 },
    { _T("Psycho Crusher Burned 1"), 0x35394 + 0x40, 0x35394 + 0x60, 0x22 },
    { _T("Psycho Crusher Burned 2"), 0x35394 + 0x60, 0x35394 + 0x80, 0x22 },
    { _T("V-Ism P1 After Effect 1"), 0x35394 + 0x80, 0x35394 + 0xA0, 0x22 },
    { _T("V-Ism P1 After Effect 2"), 0x35394 + 0xA0, 0x35394 + 0xC0, 0x22 },
    { _T("V-Ism P2 After Effect 1"), 0x35394 + 0xC0, 0x35394 + 0xE0, 0x22 },
    { _T("V-Ism P2 After Effect 2"), 0x35394 + 0xe0, 0x35394 + 0x100, 0x22 },
    { _T("X-Ism Punch Zapped"), 0x35394 + 0x100, 0x35394 + 0x120, 0x22 },
    { _T("X-Ism Kick Zapped"), 0x35394 + 0x120, 0x35394 + 0x140, 0x22 },
    { _T("A-Ism Punch Zapped"), 0x35394 + 0x140, 0x35394 + 0x160, 0x22 },
    { _T("A-Ism Kick Zapped"), 0x35394 + 0x160, 0x35394 + 0x180, 0x22 },
    { _T("V-Ism Punch Zapped"), 0x35394 + 0x180, 0x35394 + 0x1A0, 0x22 },
    { _T("V-Ism Kick Zapped"), 0x35394 + 0x1A0, 0x35394 + 0x1C0, 0x22 },
    { _T("Zapped Skeleton"), 0x35394 + 0x1C0, 0x35394 + 0x1E0, 0x22 },
    { _T("X-Ism Punch Mash"), 0x35394 + 0x1e0, 0x35394 + 0x200, 0x22 },
    { _T("X-Ism Kick Mash"), 0x35394 + 0x200, 0x35394 + 0x220, 0x22 },
    { _T("A-Ism Punch Mash"), 0x35394 + 0x220, 0x35394 + 0x240, 0x22 },
    { _T("A-Ism Kick Mash"), 0x35394 + 0x240, 0x35394 + 0x260, 0x22 },
    { _T("V-Ism Punch Mash"), 0x35394 + 0x260, 0x35394 + 0x280, 0x22 },
    { _T("V-Ism Kick Mash"), 0x35394 + 0x280, 0x35394 + 0x2A0, 0x22 },
    { _T("Priority Win"), 0x35394 + 0x2A0, 0x35394 + 0x2C0, 0x22 },
    { _T("Damage Reduction"), 0x35394 + 0x2C0, 0x35394 + 0x2E0, 0x22 },
    { _T("Just Defend"), 0x35394 + 0x2e0, 0x35394 + 0x300, 0x22 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02F554, 0x02F574, 0x43},
    { _T("X-Ism Kick"),  0x02F5F4, 0x02F614, 0x43},
    { _T("A-Ism Punch"), 0x02F694, 0x02F6B4, 0x43},
    { _T("A-Ism Kick"),  0x02F734, 0x02F754, 0x43},
    { _T("V-Ism Punch"), 0x02F7D4, 0x02F7F4, 0x43},
    { _T("V-Ism Kick"),  0x02F874, 0x02F894, 0x43},
    { _T("Burned 1"), 0x35694 + 0x00, 0x35694 + 0x20, 0x43 },
    { _T("Burned 2"), 0x35694 + 0x20, 0x35694 + 0x40, 0x43 },
    { _T("Psycho Crusher Burned 1"), 0x35694 + 0x40, 0x35694 + 0x60, 0x43 },
    { _T("Psycho Crusher Burned 2"), 0x35694 + 0x60, 0x35694 + 0x80, 0x43 },
    { _T("V-Ism P1 After Effect 1"), 0x35694 + 0x80, 0x35694 + 0xA0, 0x43 },
    { _T("V-Ism P1 After Effect 2"), 0x35694 + 0xA0, 0x35694 + 0xC0, 0x43 },
    { _T("V-Ism P2 After Effect 1"), 0x35694 + 0xC0, 0x35694 + 0xE0, 0x43 },
    { _T("V-Ism P2 After Effect 2"), 0x35694 + 0xe0, 0x35694 + 0x100, 0x43 },
    { _T("X-Ism Punch Zapped"), 0x35694 + 0x100, 0x35694 + 0x120, 0x43 },
    { _T("X-Ism Kick Zapped"), 0x35694 + 0x120, 0x35694 + 0x140, 0x43 },
    { _T("A-Ism Punch Zapped"), 0x35694 + 0x140, 0x35694 + 0x160, 0x43 },
    { _T("A-Ism Kick Zapped"), 0x35694 + 0x160, 0x35694 + 0x180, 0x43 },
    { _T("V-Ism Punch Zapped"), 0x35694 + 0x180, 0x35694 + 0x1A0, 0x43 },
    { _T("V-Ism Kick Zapped"), 0x35694 + 0x1A0, 0x35694 + 0x1C0, 0x43 },
    { _T("Zapped Skeleton"), 0x35694 + 0x1C0, 0x35694 + 0x1E0, 0x43 },
    { _T("X-Ism Punch Mash"), 0x35694 + 0x1e0, 0x35694 + 0x200, 0x43 },
    { _T("X-Ism Kick Mash"), 0x35694 + 0x200, 0x35694 + 0x220, 0x43 },
    { _T("A-Ism Punch Mash"), 0x35694 + 0x220, 0x35694 + 0x240, 0x43 },
    { _T("A-Ism Kick Mash"), 0x35694 + 0x240, 0x35694 + 0x260, 0x43 },
    { _T("V-Ism Punch Mash"), 0x35694 + 0x260, 0x35694 + 0x280, 0x43 },
    { _T("V-Ism Kick Mash"), 0x35694 + 0x280, 0x35694 + 0x2A0, 0x43 },
    { _T("Priority Win"), 0x35694 + 0x2A0, 0x35694 + 0x2C0, 0x43 },
    { _T("Damage Reduction"), 0x35694 + 0x2C0, 0x35694 + 0x2E0, 0x43 },
    { _T("Just Defend"), 0x35694 + 0x2e0, 0x35694 + 0x300, 0x43 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02F914, 0x02F934, 0x25},
    { _T("X-Ism Kick"),  0x02F9B4, 0x02F9D4, 0x25},
    { _T("A-Ism Punch"), 0x02FA54, 0x02FA74, 0x25},
    { _T("A-Ism Kick"),  0x02FAF4, 0x02FB14, 0x25},
    { _T("V-Ism Punch"), 0x02FB94, 0x02FBB4, 0x25},
    { _T("V-Ism Kick"),  0x02FC34, 0x02FC54, 0x25},
    { _T("Burned 1"), 0x35994 + 0x00, 0x35994 + 0x20, 0x25 },
    { _T("Burned 2"), 0x35994 + 0x20, 0x35994 + 0x40, 0x25 },
    { _T("Psycho Crusher Burned 1"), 0x35994 + 0x40, 0x35994 + 0x60, 0x25 },
    { _T("Psycho Crusher Burned 2"), 0x35994 + 0x60, 0x35994 + 0x80, 0x25 },
    { _T("V-Ism P1 After Effect 1"), 0x35994 + 0x80, 0x35994 + 0xA0, 0x25 },
    { _T("V-Ism P1 After Effect 2"), 0x35994 + 0xA0, 0x35994 + 0xC0, 0x25 },
    { _T("V-Ism P2 After Effect 1"), 0x35994 + 0xC0, 0x35994 + 0xE0, 0x25 },
    { _T("V-Ism P2 After Effect 2"), 0x35994 + 0xe0, 0x35994 + 0x100, 0x25 },
    { _T("X-Ism Punch Zapped"), 0x35994 + 0x100, 0x35994 + 0x120, 0x25 },
    { _T("X-Ism Kick Zapped"), 0x35994 + 0x120, 0x35994 + 0x140, 0x25 },
    { _T("A-Ism Punch Zapped"), 0x35994 + 0x140, 0x35994 + 0x160, 0x25 },
    { _T("A-Ism Kick Zapped"), 0x35994 + 0x160, 0x35994 + 0x180, 0x25 },
    { _T("V-Ism Punch Zapped"), 0x35994 + 0x180, 0x35994 + 0x1A0, 0x25 },
    { _T("V-Ism Kick Zapped"), 0x35994 + 0x1A0, 0x35994 + 0x1C0, 0x25 },
    { _T("Zapped Skeleton"), 0x35994 + 0x1C0, 0x35994 + 0x1E0, 0x25 },
    { _T("X-Ism Punch Mash"), 0x35994 + 0x1e0, 0x35994 + 0x200, 0x25 },
    { _T("X-Ism Kick Mash"), 0x35994 + 0x200, 0x35994 + 0x220, 0x25 },
    { _T("A-Ism Punch Mash"), 0x35994 + 0x220, 0x35994 + 0x240, 0x25 },
    { _T("A-Ism Kick Mash"), 0x35994 + 0x240, 0x35994 + 0x260, 0x25 },
    { _T("V-Ism Punch Mash"), 0x35994 + 0x260, 0x35994 + 0x280, 0x25 },
    { _T("V-Ism Kick Mash"), 0x35994 + 0x280, 0x35994 + 0x2A0, 0x25 },
    { _T("Priority Win"), 0x35994 + 0x2A0, 0x35994 + 0x2C0, 0x25 },
    { _T("Damage Reduction"), 0x35994 + 0x2C0, 0x35994 + 0x2E0, 0x25 },
    { _T("Just Defend"), 0x35994 + 0x2e0, 0x35994 + 0x300, 0x25 },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x02FCD4, 0x02FCF4, 0x01},
    { _T("X-Ism Kick"),  0x02FD74, 0x02FD94, 0x01},
    { _T("A-Ism Punch"), 0x02FE14, 0x02FE34, 0x01},
    { _T("A-Ism Kick"),  0x02FEB4, 0x02FED4, 0x01},
    { _T("V-Ism Punch"), 0x02FF54, 0x02FF74, 0x01},
    { _T("V-Ism Kick"),  0x02FFF4, 0x030014, 0x01},
    { _T("Burned 1"), 0x35c94 + 0x00, 0x35c94 + 0x20, 0x01 },
    { _T("Burned 2"), 0x35c94 + 0x20, 0x35c94 + 0x40, 0x01 },
    { _T("Psycho Crusher Burned 1"), 0x35c94 + 0x40, 0x35c94 + 0x60, 0x01 },
    { _T("Psycho Crusher Burned 2"), 0x35c94 + 0x60, 0x35c94 + 0x80, 0x01 },
    { _T("V-Ism P1 After Effect 1"), 0x35c94 + 0x80, 0x35c94 + 0xA0, 0x01 },
    { _T("V-Ism P1 After Effect 2"), 0x35c94 + 0xA0, 0x35c94 + 0xC0, 0x01 },
    { _T("V-Ism P2 After Effect 1"), 0x35c94 + 0xC0, 0x35c94 + 0xE0, 0x01 },
    { _T("V-Ism P2 After Effect 2"), 0x35c94 + 0xe0, 0x35c94 + 0x100, 0x01 },
    { _T("X-Ism Punch Zapped"), 0x35c94 + 0x100, 0x35c94 + 0x120, 0x01 },
    { _T("X-Ism Kick Zapped"), 0x35c94 + 0x120, 0x35c94 + 0x140, 0x01 },
    { _T("A-Ism Punch Zapped"), 0x35c94 + 0x140, 0x35c94 + 0x160, 0x01 },
    { _T("A-Ism Kick Zapped"), 0x35c94 + 0x160, 0x35c94 + 0x180, 0x01 },
    { _T("V-Ism Punch Zapped"), 0x35c94 + 0x180, 0x35c94 + 0x1A0, 0x01 },
    { _T("V-Ism Kick Zapped"), 0x35c94 + 0x1A0, 0x35c94 + 0x1C0, 0x01 },
    { _T("Zapped Skeleton"), 0x35c94 + 0x1C0, 0x35c94 + 0x1E0, 0x01 },
    { _T("X-Ism Punch Mash"), 0x35c94 + 0x1e0, 0x35c94 + 0x200, 0x01 },
    { _T("X-Ism Kick Mash"), 0x35c94 + 0x200, 0x35c94 + 0x220, 0x01 },
    { _T("A-Ism Punch Mash"), 0x35c94 + 0x220, 0x35c94 + 0x240, 0x01 },
    { _T("A-Ism Kick Mash"), 0x35c94 + 0x240, 0x35c94 + 0x260, 0x01 },
    { _T("V-Ism Punch Mash"), 0x35c94 + 0x260, 0x35c94 + 0x280, 0x01 },
    { _T("V-Ism Kick Mash"), 0x35c94 + 0x280, 0x35c94 + 0x2A0, 0x01 },
    { _T("Priority Win"), 0x35c94 + 0x2A0, 0x35c94 + 0x2C0, 0x01 },
    { _T("Damage Reduction"), 0x35c94 + 0x2C0, 0x35c94 + 0x2E0, 0x01 },
    { _T("Just Defend"), 0x35c94 + 0x2e0, 0x35c94 + 0x300, 0x01 },
};

const sGame_PaletteDataset SFA3_A_GEN_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x030094, 0x0300B4, 0x44},
    { _T("X-Ism Kick"),  0x030134, 0x030154, 0x44},
    { _T("A-Ism Punch"), 0x0301D4, 0x0301F4, 0x44},
    { _T("A-Ism Kick"),  0x030274, 0x030294, 0x44},
    { _T("V-Ism Punch"), 0x030314, 0x030334, 0x44},
    { _T("V-Ism Kick"),  0x0303B4, 0x0303D4, 0x44},
    { _T("Burned 1"), 0x35f94 + 0x00, 0x35f94 + 0x20, 0x44 },
    { _T("Burned 2"), 0x35f94 + 0x20, 0x35f94 + 0x40, 0x44 },
    { _T("Psycho Crusher Burned 1"), 0x35f94 + 0x40, 0x35f94 + 0x60, 0x44 },
    { _T("Psycho Crusher Burned 2"), 0x35f94 + 0x60, 0x35f94 + 0x80, 0x44 },
    { _T("V-Ism P1 After Effect 1"), 0x35f94 + 0x80, 0x35f94 + 0xA0, 0x44 },
    { _T("V-Ism P1 After Effect 2"), 0x35f94 + 0xA0, 0x35f94 + 0xC0, 0x44 },
    { _T("V-Ism P2 After Effect 1"), 0x35f94 + 0xC0, 0x35f94 + 0xE0, 0x44 },
    { _T("V-Ism P2 After Effect 2"), 0x35f94 + 0xe0, 0x35f94 + 0x100, 0x44 },
    { _T("X-Ism Punch Zapped"), 0x35f94 + 0x100, 0x35f94 + 0x120, 0x44 },
    { _T("X-Ism Kick Zapped"), 0x35f94 + 0x120, 0x35f94 + 0x140, 0x44 },
    { _T("A-Ism Punch Zapped"), 0x35f94 + 0x140, 0x35f94 + 0x160, 0x44 },
    { _T("A-Ism Kick Zapped"), 0x35f94 + 0x160, 0x35f94 + 0x180, 0x44 },
    { _T("V-Ism Punch Zapped"), 0x35f94 + 0x180, 0x35f94 + 0x1A0, 0x44 },
    { _T("V-Ism Kick Zapped"), 0x35f94 + 0x1A0, 0x35f94 + 0x1C0, 0x44 },
    { _T("Zapped Skeleton"), 0x35f94 + 0x1C0, 0x35f94 + 0x1E0, 0x44 },
    { _T("X-Ism Punch Mash"), 0x35f94 + 0x1e0, 0x35f94 + 0x200, 0x44 },
    { _T("X-Ism Kick Mash"), 0x35f94 + 0x200, 0x35f94 + 0x220, 0x44 },
    { _T("A-Ism Punch Mash"), 0x35f94 + 0x220, 0x35f94 + 0x240, 0x44 },
    { _T("A-Ism Kick Mash"), 0x35f94 + 0x240, 0x35f94 + 0x260, 0x44 },
    { _T("V-Ism Punch Mash"), 0x35f94 + 0x260, 0x35f94 + 0x280, 0x44 },
    { _T("V-Ism Kick Mash"), 0x35f94 + 0x280, 0x35f94 + 0x2A0, 0x44 },
    { _T("Priority Win"), 0x35f94 + 0x2A0, 0x35f94 + 0x2C0, 0x44 },
    { _T("Damage Reduction"), 0x35f94 + 0x2C0, 0x35f94 + 0x2E0, 0x44 },
    { _T("Just Defend"), 0x35f94 + 0x2e0, 0x35f94 + 0x300, 0x44 },
};

const sGame_PaletteDataset SFA3_A_BALROG_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x030454, 0x030474, 0x45},
    { _T("X-Ism Kick"),  0x0304F4, 0x030514, 0x45},
    { _T("A-Ism Punch"), 0x030594, 0x0305B4, 0x45},
    { _T("A-Ism Kick"),  0x030634, 0x030654, 0x45},
    { _T("V-Ism Punch"), 0x0306D4, 0x0306F4, 0x45},
    { _T("V-Ism Kick"),  0x030774, 0x030794, 0x45},
    { _T("Burned 1"), 0x36294 + 0x00, 0x36294 + 0x20, 0x45 },
    { _T("Burned 2"), 0x36294 + 0x20, 0x36294 + 0x40, 0x45 },
    { _T("Psycho Crusher Burned 1"), 0x36294 + 0x40, 0x36294 + 0x60, 0x45 },
    { _T("Psycho Crusher Burned 2"), 0x36294 + 0x60, 0x36294 + 0x80, 0x45 },
    { _T("V-Ism P1 After Effect 1"), 0x36294 + 0x80, 0x36294 + 0xA0, 0x45 },
    { _T("V-Ism P1 After Effect 2"), 0x36294 + 0xA0, 0x36294 + 0xC0, 0x45 },
    { _T("V-Ism P2 After Effect 1"), 0x36294 + 0xC0, 0x36294 + 0xE0, 0x45 },
    { _T("V-Ism P2 After Effect 2"), 0x36294 + 0xe0, 0x36294 + 0x100, 0x45 },
    { _T("X-Ism Punch Zapped"), 0x36294 + 0x100, 0x36294 + 0x120, 0x45 },
    { _T("X-Ism Kick Zapped"), 0x36294 + 0x120, 0x36294 + 0x140, 0x45 },
    { _T("A-Ism Punch Zapped"), 0x36294 + 0x140, 0x36294 + 0x160, 0x45 },
    { _T("A-Ism Kick Zapped"), 0x36294 + 0x160, 0x36294 + 0x180, 0x45 },
    { _T("V-Ism Punch Zapped"), 0x36294 + 0x180, 0x36294 + 0x1A0, 0x45 },
    { _T("V-Ism Kick Zapped"), 0x36294 + 0x1A0, 0x36294 + 0x1C0, 0x45 },
    { _T("Zapped Skeleton"), 0x36294 + 0x1C0, 0x36294 + 0x1E0, 0x45 },
    { _T("X-Ism Punch Mash"), 0x36294 + 0x1e0, 0x36294 + 0x200, 0x45 },
    { _T("X-Ism Kick Mash"), 0x36294 + 0x200, 0x36294 + 0x220, 0x45 },
    { _T("A-Ism Punch Mash"), 0x36294 + 0x220, 0x36294 + 0x240, 0x45 },
    { _T("A-Ism Kick Mash"), 0x36294 + 0x240, 0x36294 + 0x260, 0x45 },
    { _T("V-Ism Punch Mash"), 0x36294 + 0x260, 0x36294 + 0x280, 0x45 },
    { _T("V-Ism Kick Mash"), 0x36294 + 0x280, 0x36294 + 0x2A0, 0x45 },
    { _T("Priority Win"), 0x36294 + 0x2A0, 0x36294 + 0x2C0, 0x45 },
    { _T("Damage Reduction"), 0x36294 + 0x2C0, 0x36294 + 0x2E0, 0x45 },
    { _T("Just Defend"), 0x36294 + 0x2e0, 0x36294 + 0x300, 0x45 },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x030814, 0x030834, 0x24},
    { _T("X-Ism Kick"),  0x0308B4, 0x0308D4, 0x24},
    { _T("A-Ism Punch"), 0x030954, 0x030974, 0x24},
    { _T("A-Ism Kick"),  0x0309F4, 0x030A14, 0x24},
    { _T("V-Ism Punch"), 0x030A94, 0x030AB4, 0x24},
    { _T("V-Ism Kick"),  0x030B34, 0x030B54, 0x24},
    { _T("Burned 1"), 0x36594 + 0x00, 0x36594 + 0x20, 0x24 },
    { _T("Burned 2"), 0x36594 + 0x20, 0x36594 + 0x40, 0x24 },
    { _T("Psycho Crusher Burned 1"), 0x36594 + 0x40, 0x36594 + 0x60, 0x24 },
    { _T("Psycho Crusher Burned 2"), 0x36594 + 0x60, 0x36594 + 0x80, 0x24 },
    { _T("V-Ism P1 After Effect 1"), 0x36594 + 0x80, 0x36594 + 0xA0, 0x24 },
    { _T("V-Ism P1 After Effect 2"), 0x36594 + 0xA0, 0x36594 + 0xC0, 0x24 },
    { _T("V-Ism P2 After Effect 1"), 0x36594 + 0xC0, 0x36594 + 0xE0, 0x24 },
    { _T("V-Ism P2 After Effect 2"), 0x36594 + 0xe0, 0x36594 + 0x100, 0x24 },
    { _T("X-Ism Punch Zapped"), 0x36594 + 0x100, 0x36594 + 0x120, 0x24 },
    { _T("X-Ism Kick Zapped"), 0x36594 + 0x120, 0x36594 + 0x140, 0x24 },
    { _T("A-Ism Punch Zapped"), 0x36594 + 0x140, 0x36594 + 0x160, 0x24 },
    { _T("A-Ism Kick Zapped"), 0x36594 + 0x160, 0x36594 + 0x180, 0x24 },
    { _T("V-Ism Punch Zapped"), 0x36594 + 0x180, 0x36594 + 0x1A0, 0x24 },
    { _T("V-Ism Kick Zapped"), 0x36594 + 0x1A0, 0x36594 + 0x1C0, 0x24 },
    { _T("Zapped Skeleton"), 0x36594 + 0x1C0, 0x36594 + 0x1E0, 0x24 },
    { _T("X-Ism Punch Mash"), 0x36594 + 0x1e0, 0x36594 + 0x200, 0x24 },
    { _T("X-Ism Kick Mash"), 0x36594 + 0x200, 0x36594 + 0x220, 0x24 },
    { _T("A-Ism Punch Mash"), 0x36594 + 0x220, 0x36594 + 0x240, 0x24 },
    { _T("A-Ism Kick Mash"), 0x36594 + 0x240, 0x36594 + 0x260, 0x24 },
    { _T("V-Ism Punch Mash"), 0x36594 + 0x260, 0x36594 + 0x280, 0x24 },
    { _T("V-Ism Kick Mash"), 0x36594 + 0x280, 0x36594 + 0x2A0, 0x24 },
    { _T("Priority Win"), 0x36594 + 0x2A0, 0x36594 + 0x2C0, 0x24 },
    { _T("Damage Reduction"), 0x36594 + 0x2C0, 0x36594 + 0x2E0, 0x24 },
    { _T("Just Defend"), 0x36594 + 0x2e0, 0x36594 + 0x300, 0x24 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x030BD4, 0x030BF4, 0x46},
    { _T("X-Ism Kick"),  0x030C74, 0x030C94, 0x46},
    { _T("A-Ism Punch"), 0x030D14, 0x030D34, 0x46},
    { _T("A-Ism Kick"),  0x030DB4, 0x030DD4, 0x46},
    { _T("V-Ism Punch"), 0x030E54, 0x030E74, 0x46},
    { _T("V-Ism Kick"),  0x030EF4, 0x030F14, 0x46},
    { _T("Burned 1"), 0x36894 + 0x00, 0x36894 + 0x20, 0x46 },
    { _T("Burned 2"), 0x36894 + 0x20, 0x36894 + 0x40, 0x46 },
    { _T("Psycho Crusher Burned 1"), 0x36894 + 0x40, 0x36894 + 0x60, 0x46 },
    { _T("Psycho Crusher Burned 2"), 0x36894 + 0x60, 0x36894 + 0x80, 0x46 },
    { _T("V-Ism P1 After Effect 1"), 0x36894 + 0x80, 0x36894 + 0xA0, 0x46 },
    { _T("V-Ism P1 After Effect 2"), 0x36894 + 0xA0, 0x36894 + 0xC0, 0x46 },
    { _T("V-Ism P2 After Effect 1"), 0x36894 + 0xC0, 0x36894 + 0xE0, 0x46 },
    { _T("V-Ism P2 After Effect 2"), 0x36894 + 0xe0, 0x36894 + 0x100, 0x46 },
    { _T("X-Ism Punch Zapped"), 0x36894 + 0x100, 0x36894 + 0x120, 0x46 },
    { _T("X-Ism Kick Zapped"), 0x36894 + 0x120, 0x36894 + 0x140, 0x46 },
    { _T("A-Ism Punch Zapped"), 0x36894 + 0x140, 0x36894 + 0x160, 0x46 },
    { _T("A-Ism Kick Zapped"), 0x36894 + 0x160, 0x36894 + 0x180, 0x46 },
    { _T("V-Ism Punch Zapped"), 0x36894 + 0x180, 0x36894 + 0x1A0, 0x46 },
    { _T("V-Ism Kick Zapped"), 0x36894 + 0x1A0, 0x36894 + 0x1C0, 0x46 },
    { _T("Zapped Skeleton"), 0x36894 + 0x1C0, 0x36894 + 0x1E0, 0x46 },
    { _T("X-Ism Punch Mash"), 0x36894 + 0x1e0, 0x36894 + 0x200, 0x46 },
    { _T("X-Ism Kick Mash"), 0x36894 + 0x200, 0x36894 + 0x220, 0x46 },
    { _T("A-Ism Punch Mash"), 0x36894 + 0x220, 0x36894 + 0x240, 0x46 },
    { _T("A-Ism Kick Mash"), 0x36894 + 0x240, 0x36894 + 0x260, 0x46 },
    { _T("V-Ism Punch Mash"), 0x36894 + 0x260, 0x36894 + 0x280, 0x46 },
    { _T("V-Ism Kick Mash"), 0x36894 + 0x280, 0x36894 + 0x2A0, 0x46 },
    { _T("Priority Win"), 0x36894 + 0x2A0, 0x36894 + 0x2C0, 0x46 },
    { _T("Damage Reduction"), 0x36894 + 0x2C0, 0x36894 + 0x2E0, 0x46 },
    { _T("Just Defend"), 0x36894 + 0x2e0, 0x36894 + 0x300, 0x46 },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x030F94, 0x030FB4, 0x47},
    { _T("X-Ism Kick"),  0x031034, 0x031054, 0x47},
    { _T("A-Ism Punch"), 0x0310D4, 0x0310F4, 0x47},
    { _T("A-Ism Kick"),  0x031174, 0x031194, 0x47},
    { _T("V-Ism Punch"), 0x031214, 0x031234, 0x47},
    { _T("V-Ism Kick"),  0x0312B4, 0x0312D4, 0x47},
    { _T("Burned 1"), 0x36b94 + 0x00, 0x36b94 + 0x20, 0x47 },
    { _T("Burned 2"), 0x36b94 + 0x20, 0x36b94 + 0x40, 0x47 },
    { _T("Psycho Crusher Burned 1"), 0x36b94 + 0x40, 0x36b94 + 0x60, 0x47 },
    { _T("Psycho Crusher Burned 2"), 0x36b94 + 0x60, 0x36b94 + 0x80, 0x47 },
    { _T("V-Ism P1 After Effect 1"), 0x36b94 + 0x80, 0x36b94 + 0xA0, 0x47 },
    { _T("V-Ism P1 After Effect 2"), 0x36b94 + 0xA0, 0x36b94 + 0xC0, 0x47 },
    { _T("V-Ism P2 After Effect 1"), 0x36b94 + 0xC0, 0x36b94 + 0xE0, 0x47 },
    { _T("V-Ism P2 After Effect 2"), 0x36b94 + 0xe0, 0x36b94 + 0x100, 0x47 },
    { _T("X-Ism Punch Zapped"), 0x36b94 + 0x100, 0x36b94 + 0x120, 0x47 },
    { _T("X-Ism Kick Zapped"), 0x36b94 + 0x120, 0x36b94 + 0x140, 0x47 },
    { _T("A-Ism Punch Zapped"), 0x36b94 + 0x140, 0x36b94 + 0x160, 0x47 },
    { _T("A-Ism Kick Zapped"), 0x36b94 + 0x160, 0x36b94 + 0x180, 0x47 },
    { _T("V-Ism Punch Zapped"), 0x36b94 + 0x180, 0x36b94 + 0x1A0, 0x47 },
    { _T("V-Ism Kick Zapped"), 0x36b94 + 0x1A0, 0x36b94 + 0x1C0, 0x47 },
    { _T("Zapped Skeleton"), 0x36b94 + 0x1C0, 0x36b94 + 0x1E0, 0x47 },
    { _T("X-Ism Punch Mash"), 0x36b94 + 0x1e0, 0x36b94 + 0x200, 0x47 },
    { _T("X-Ism Kick Mash"), 0x36b94 + 0x200, 0x36b94 + 0x220, 0x47 },
    { _T("A-Ism Punch Mash"), 0x36b94 + 0x220, 0x36b94 + 0x240, 0x47 },
    { _T("A-Ism Kick Mash"), 0x36b94 + 0x240, 0x36b94 + 0x260, 0x47 },
    { _T("V-Ism Punch Mash"), 0x36b94 + 0x260, 0x36b94 + 0x280, 0x47 },
    { _T("V-Ism Kick Mash"), 0x36b94 + 0x280, 0x36b94 + 0x2A0, 0x47 },
    { _T("Priority Win"), 0x36b94 + 0x2A0, 0x36b94 + 0x2C0, 0x47 },
    { _T("Damage Reduction"), 0x36b94 + 0x2C0, 0x36b94 + 0x2E0, 0x47 },
    { _T("Just Defend"), 0x36b94 + 0x2e0, 0x36b94 + 0x300, 0x47 }, };

const sGame_PaletteDataset SFA3_A_RMIKA_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x031354, 0x031374, 0x48},
    { _T("X-Ism Kick"),  0x0313F4, 0x031414, 0x48},
    { _T("A-Ism Punch"), 0x031494, 0x0314B4, 0x48},
    { _T("A-Ism Kick"),  0x031534, 0x031554, 0x48},
    { _T("V-Ism Punch"), 0x0315D4, 0x0315F4, 0x48},
    { _T("V-Ism Kick"),  0x031674, 0x031694, 0x48},
    { _T("Burned 1"), 0x36e94 + 0x00, 0x36e94 + 0x20, 0x48 },
    { _T("Burned 2"), 0x36e94 + 0x20, 0x36e94 + 0x40, 0x48 },
    { _T("Psycho Crusher Burned 1"), 0x36e94 + 0x40, 0x36e94 + 0x60, 0x48 },
    { _T("Psycho Crusher Burned 2"), 0x36e94 + 0x60, 0x36e94 + 0x80, 0x48 },
    { _T("V-Ism P1 After Effect 1"), 0x36e94 + 0x80, 0x36e94 + 0xA0, 0x48 },
    { _T("V-Ism P1 After Effect 2"), 0x36e94 + 0xA0, 0x36e94 + 0xC0, 0x48 },
    { _T("V-Ism P2 After Effect 1"), 0x36e94 + 0xC0, 0x36e94 + 0xE0, 0x48 },
    { _T("V-Ism P2 After Effect 2"), 0x36e94 + 0xe0, 0x36e94 + 0x100, 0x48 },
    { _T("X-Ism Punch Zapped"), 0x36e94 + 0x100, 0x36e94 + 0x120, 0x48 },
    { _T("X-Ism Kick Zapped"), 0x36e94 + 0x120, 0x36e94 + 0x140, 0x48 },
    { _T("A-Ism Punch Zapped"), 0x36e94 + 0x140, 0x36e94 + 0x160, 0x48 },
    { _T("A-Ism Kick Zapped"), 0x36e94 + 0x160, 0x36e94 + 0x180, 0x48 },
    { _T("V-Ism Punch Zapped"), 0x36e94 + 0x180, 0x36e94 + 0x1A0, 0x48 },
    { _T("V-Ism Kick Zapped"), 0x36e94 + 0x1A0, 0x36e94 + 0x1C0, 0x48 },
    { _T("Zapped Skeleton"), 0x36e94 + 0x1C0, 0x36e94 + 0x1E0, 0x48 },
    { _T("X-Ism Punch Mash"), 0x36e94 + 0x1e0, 0x36e94 + 0x200, 0x48 },
    { _T("X-Ism Kick Mash"), 0x36e94 + 0x200, 0x36e94 + 0x220, 0x48 },
    { _T("A-Ism Punch Mash"), 0x36e94 + 0x220, 0x36e94 + 0x240, 0x48 },
    { _T("A-Ism Kick Mash"), 0x36e94 + 0x240, 0x36e94 + 0x260, 0x48 },
    { _T("V-Ism Punch Mash"), 0x36e94 + 0x260, 0x36e94 + 0x280, 0x48 },
    { _T("V-Ism Kick Mash"), 0x36e94 + 0x280, 0x36e94 + 0x2A0, 0x48 },
    { _T("Priority Win"), 0x36e94 + 0x2A0, 0x36e94 + 0x2C0, 0x48 },
    { _T("Damage Reduction"), 0x36e94 + 0x2C0, 0x36e94 + 0x2E0, 0x48 },
    { _T("Just Defend"), 0x36e94 + 0x2e0, 0x36e94 + 0x300, 0x48 },
};

const sGame_PaletteDataset SFA3_A_CODY_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x031714, 0x031734, 0x49},
    { _T("X-Ism Kick"),  0x0317B4, 0x0317D4, 0x49},
    { _T("A-Ism Punch"), 0x031854, 0x031874, 0x49},
    { _T("A-Ism Kick"),  0x0318F4, 0x031914, 0x49},
    { _T("V-Ism Punch"), 0x031994, 0x0319B4, 0x49},
    { _T("V-Ism Kick"),  0x031A34, 0x031A54, 0x49},
    { _T("Burned 1"), 0x37194 + 0x00, 0x37194 + 0x20, 0x49 },
    { _T("Burned 2"), 0x37194 + 0x20, 0x37194 + 0x40, 0x49 },
    { _T("Psycho Crusher Burned 1"), 0x37194 + 0x40, 0x37194 + 0x60, 0x49 },
    { _T("Psycho Crusher Burned 2"), 0x37194 + 0x60, 0x37194 + 0x80, 0x49 },
    { _T("V-Ism P1 After Effect 1"), 0x37194 + 0x80, 0x37194 + 0xA0, 0x49 },
    { _T("V-Ism P1 After Effect 2"), 0x37194 + 0xA0, 0x37194 + 0xC0, 0x49 },
    { _T("V-Ism P2 After Effect 1"), 0x37194 + 0xC0, 0x37194 + 0xE0, 0x49 },
    { _T("V-Ism P2 After Effect 2"), 0x37194 + 0xe0, 0x37194 + 0x100, 0x49 },
    { _T("X-Ism Punch Zapped"), 0x37194 + 0x100, 0x37194 + 0x120, 0x49 },
    { _T("X-Ism Kick Zapped"), 0x37194 + 0x120, 0x37194 + 0x140, 0x49 },
    { _T("A-Ism Punch Zapped"), 0x37194 + 0x140, 0x37194 + 0x160, 0x49 },
    { _T("A-Ism Kick Zapped"), 0x37194 + 0x160, 0x37194 + 0x180, 0x49 },
    { _T("V-Ism Punch Zapped"), 0x37194 + 0x180, 0x37194 + 0x1A0, 0x49 },
    { _T("V-Ism Kick Zapped"), 0x37194 + 0x1A0, 0x37194 + 0x1C0, 0x49 },
    { _T("Zapped Skeleton"), 0x37194 + 0x1C0, 0x37194 + 0x1E0, 0x49 },
    { _T("X-Ism Punch Mash"), 0x37194 + 0x1e0, 0x37194 + 0x200, 0x49 },
    { _T("X-Ism Kick Mash"), 0x37194 + 0x200, 0x37194 + 0x220, 0x49 },
    { _T("A-Ism Punch Mash"), 0x37194 + 0x220, 0x37194 + 0x240, 0x49 },
    { _T("A-Ism Kick Mash"), 0x37194 + 0x240, 0x37194 + 0x260, 0x49 },
    { _T("V-Ism Punch Mash"), 0x37194 + 0x260, 0x37194 + 0x280, 0x49 },
    { _T("V-Ism Kick Mash"), 0x37194 + 0x280, 0x37194 + 0x2A0, 0x49 },
    { _T("Priority Win"), 0x37194 + 0x2A0, 0x37194 + 0x2C0, 0x49 },
    { _T("Damage Reduction"), 0x37194 + 0x2C0, 0x37194 + 0x2E0, 0x49 },
    { _T("Just Defend"), 0x37194 + 0x2e0, 0x37194 + 0x300, 0x49 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMP[] =
{
    { _T("X-Ism Punch"), 0x031AD4, 0x031AF4, 0x4A },
    { _T("X-Ism Punch Claws"), 0x031AF4, 0x031B14 },
};

const sGame_PaletteDataset SFA3_A_VEGA_XISMK[] =
{
    { _T("X-Ism Kick"),  0x031B74, 0x031B94, 0x4A },
    { _T("X-Ism Kick Claws"), 0x031B94, 0x031BB4 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMP[] =
{
    { _T("A-Ism Punch"), 0x031C14, 0x031C34, 0x4A },
    { _T("A-Ism Punch Claws"), 0x031C34, 0x031C54 },
};

const sGame_PaletteDataset SFA3_A_VEGA_AISMK[] =
{
    { _T("A-Ism Kick"),  0x031CB4, 0x031CD4, 0x4A },
    { _T("A-Ism Kick Claws"), 0x031CD4, 0x031CF4 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMP[] =
{
    { _T("V-Ism Punch"), 0x031D54, 0x031D74, 0x4A },
    { _T("V-Ism Punch Claws"), 0x031D74, 0x031D94 },
};

const sGame_PaletteDataset SFA3_A_VEGA_VISMK[] =
{
    { _T("V-Ism Kick"),  0x031DF4, 0x031E14, 0x4A },
    { _T("V-Ism Kick Claws"), 0x031E14, 0x031E34 },
};

const sGame_PaletteDataset SFA3_A_VEGA_STATUS[] =
{
    { _T("Burned 1"), 0x37494 + 0x00, 0x37494 + 0x20, 0x4A },
    { _T("Burned 2"), 0x37494 + 0x20, 0x37494 + 0x40, 0x4A },
    { _T("Psycho Crusher Burned 1"), 0x37494 + 0x40, 0x37494 + 0x60, 0x4A },
    { _T("Psycho Crusher Burned 2"), 0x37494 + 0x60, 0x37494 + 0x80, 0x4A },
    { _T("V-Ism P1 After Effect 1"), 0x37494 + 0x80, 0x37494 + 0xA0, 0x4A },
    { _T("V-Ism P1 After Effect 2"), 0x37494 + 0xA0, 0x37494 + 0xC0, 0x4A },
    { _T("V-Ism P2 After Effect 1"), 0x37494 + 0xC0, 0x37494 + 0xE0, 0x4A },
    { _T("V-Ism P2 After Effect 2"), 0x37494 + 0xe0, 0x37494 + 0x100, 0x4A },
    { _T("X-Ism Punch Zapped"), 0x37494 + 0x100, 0x37494 + 0x120, 0x4A },
    { _T("X-Ism Kick Zapped"), 0x37494 + 0x120, 0x37494 + 0x140, 0x4A },
    { _T("A-Ism Punch Zapped"), 0x37494 + 0x140, 0x37494 + 0x160, 0x4A },
    { _T("A-Ism Kick Zapped"), 0x37494 + 0x160, 0x37494 + 0x180, 0x4A },
    { _T("V-Ism Punch Zapped"), 0x37494 + 0x180, 0x37494 + 0x1A0, 0x4A },
    { _T("V-Ism Kick Zapped"), 0x37494 + 0x1A0, 0x37494 + 0x1C0, 0x4A },
    { _T("Zapped Skeleton"), 0x37494 + 0x1C0, 0x37494 + 0x1E0, 0x4A },
    { _T("X-Ism Punch Mash"), 0x37494 + 0x1e0, 0x37494 + 0x200, 0x4A },
    { _T("X-Ism Kick Mash"), 0x37494 + 0x200, 0x37494 + 0x220, 0x4A },
    { _T("A-Ism Punch Mash"), 0x37494 + 0x220, 0x37494 + 0x240, 0x4A },
    { _T("A-Ism Kick Mash"), 0x37494 + 0x240, 0x37494 + 0x260, 0x4A },
    { _T("V-Ism Punch Mash"), 0x37494 + 0x260, 0x37494 + 0x280, 0x4A },
    { _T("V-Ism Kick Mash"), 0x37494 + 0x280, 0x37494 + 0x2A0, 0x4A },
    { _T("Priority Win"), 0x37494 + 0x2A0, 0x37494 + 0x2C0, 0x4A },
    { _T("Damage Reduction"), 0x37494 + 0x2C0, 0x37494 + 0x2E0, 0x4A },
    { _T("Just Defend"), 0x37494 + 0x2e0, 0x37494 + 0x300, 0x4A },
};

const sGame_PaletteDataset SFA3_A_KARIN_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x031E94, 0x031EB4, 0x4B},
    { _T("X-Ism Kick"),  0x031F34, 0x031F54, 0x4B},
    { _T("A-Ism Punch"), 0x031FD4, 0x031FF4, 0x4B},
    { _T("A-Ism Kick"),  0x032074, 0x032094, 0x4B},
    { _T("V-Ism Punch"), 0x032114, 0x032134, 0x4B},
    { _T("V-Ism Kick"),  0x0321B4, 0x0321D4, 0x4B},
    { _T("Burned 1"), 0x37934 + 0x00, 0x37934 + 0x20, 0x4B },
    { _T("Burned 2"), 0x37934 + 0x20, 0x37934 + 0x40, 0x4B },
    { _T("Psycho Crusher Burned 1"), 0x37934 + 0x40, 0x37934 + 0x60, 0x4B },
    { _T("Psycho Crusher Burned 2"), 0x37934 + 0x60, 0x37934 + 0x80, 0x4B },
    { _T("V-Ism P1 After Effect 1"), 0x37934 + 0x80, 0x37934 + 0xA0, 0x4B },
    { _T("V-Ism P1 After Effect 2"), 0x37934 + 0xA0, 0x37934 + 0xC0, 0x4B },
    { _T("V-Ism P2 After Effect 1"), 0x37934 + 0xC0, 0x37934 + 0xE0, 0x4B },
    { _T("V-Ism P2 After Effect 2"), 0x37934 + 0xe0, 0x37934 + 0x100, 0x4B },
    { _T("X-Ism Punch Zapped"), 0x37934 + 0x100, 0x37934 + 0x120, 0x4B },
    { _T("X-Ism Kick Zapped"), 0x37934 + 0x120, 0x37934 + 0x140, 0x4B },
    { _T("A-Ism Punch Zapped"), 0x37934 + 0x140, 0x37934 + 0x160, 0x4B },
    { _T("A-Ism Kick Zapped"), 0x37934 + 0x160, 0x37934 + 0x180, 0x4B },
    { _T("V-Ism Punch Zapped"), 0x37934 + 0x180, 0x37934 + 0x1A0, 0x4B },
    { _T("V-Ism Kick Zapped"), 0x37934 + 0x1A0, 0x37934 + 0x1C0, 0x4B },
    { _T("Zapped Skeleton"), 0x37934 + 0x1C0, 0x37934 + 0x1E0, 0x4B },
    { _T("X-Ism Punch Mash"), 0x37934 + 0x1e0, 0x37934 + 0x200, 0x4B },
    { _T("X-Ism Kick Mash"), 0x37934 + 0x200, 0x37934 + 0x220, 0x4B },
    { _T("A-Ism Punch Mash"), 0x37934 + 0x220, 0x37934 + 0x240, 0x4B },
    { _T("A-Ism Kick Mash"), 0x37934 + 0x240, 0x37934 + 0x260, 0x4B },
    { _T("V-Ism Punch Mash"), 0x37934 + 0x260, 0x37934 + 0x280, 0x4B },
    { _T("V-Ism Kick Mash"), 0x37934 + 0x280, 0x37934 + 0x2A0, 0x4B },
    { _T("Priority Win"), 0x37934 + 0x2A0, 0x37934 + 0x2C0, 0x4B },
    { _T("Damage Reduction"), 0x37934 + 0x2C0, 0x37934 + 0x2E0, 0x4B },
    { _T("Just Defend"), 0x37934 + 0x2e0, 0x37934 + 0x300, 0x4B }, };

const sGame_PaletteDataset SFA3_A_JUNI_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x032254, 0x032274, 0x4C},
    { _T("X-Ism Kick"),  0x0322F4, 0x032314, 0x4C},
    { _T("A-Ism Punch"), 0x032394, 0x0323B4, 0x4C},
    { _T("A-Ism Kick"),  0x032434, 0x032454, 0x4C},
    { _T("V-Ism Punch"), 0x0324D4, 0x0324F4, 0x4C},
    { _T("V-Ism Kick"),  0x032574, 0x032594, 0x4C},
    { _T("Burned 1"), 0x37ff4 + 0x00, 0x37ff4 + 0x20, 0x4C },
    { _T("Burned 2"), 0x37ff4 + 0x20, 0x37ff4 + 0x40, 0x4C },
    { _T("Psycho Crusher Burned 1"), 0x37ff4 + 0x40, 0x37ff4 + 0x60, 0x4C },
    { _T("Psycho Crusher Burned 2"), 0x37ff4 + 0x60, 0x37ff4 + 0x80, 0x4C },
    { _T("V-Ism P1 After Effect 1"), 0x37ff4 + 0x80, 0x37ff4 + 0xA0, 0x4C },
    { _T("V-Ism P1 After Effect 2"), 0x37ff4 + 0xA0, 0x37ff4 + 0xC0, 0x4C },
    { _T("V-Ism P2 After Effect 1"), 0x37ff4 + 0xC0, 0x37ff4 + 0xE0, 0x4C },
    { _T("V-Ism P2 After Effect 2"), 0x37ff4 + 0xe0, 0x37ff4 + 0x100, 0x4C },
    { _T("X-Ism Punch Zapped"), 0x37ff4 + 0x100, 0x37ff4 + 0x120, 0x4C },
    { _T("X-Ism Kick Zapped"), 0x37ff4 + 0x120, 0x37ff4 + 0x140, 0x4C },
    { _T("A-Ism Punch Zapped"), 0x37ff4 + 0x140, 0x37ff4 + 0x160, 0x4C },
    { _T("A-Ism Kick Zapped"), 0x37ff4 + 0x160, 0x37ff4 + 0x180, 0x4C },
    { _T("V-Ism Punch Zapped"), 0x37ff4 + 0x180, 0x37ff4 + 0x1A0, 0x4C },
    { _T("V-Ism Kick Zapped"), 0x37ff4 + 0x1A0, 0x37ff4 + 0x1C0, 0x4C },
    { _T("Zapped Skeleton"), 0x37ff4 + 0x1C0, 0x37ff4 + 0x1E0, 0x4C },
    { _T("X-Ism Punch Mash"), 0x37ff4 + 0x1e0, 0x37ff4 + 0x200, 0x4C },
    { _T("X-Ism Kick Mash"), 0x37ff4 + 0x200, 0x37ff4 + 0x220, 0x4C },
    { _T("A-Ism Punch Mash"), 0x37ff4 + 0x220, 0x37ff4 + 0x240, 0x4C },
    { _T("A-Ism Kick Mash"), 0x37ff4 + 0x240, 0x37ff4 + 0x260, 0x4C },
    { _T("V-Ism Punch Mash"), 0x37ff4 + 0x260, 0x37ff4 + 0x280, 0x4C },
    { _T("V-Ism Kick Mash"), 0x37ff4 + 0x280, 0x37ff4 + 0x2A0, 0x4C },
    { _T("Priority Win"), 0x37ff4 + 0x2A0, 0x37ff4 + 0x2C0, 0x4C },
    { _T("Damage Reduction"), 0x37ff4 + 0x2C0, 0x37ff4 + 0x2E0, 0x4C },
    { _T("Just Defend"), 0x37ff4 + 0x2e0, 0x37ff4 + 0x300, 0x4C },
};

const sGame_PaletteDataset SFA3_A_JULI_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x032614, 0x032634, 0x4D},
    { _T("X-Ism Kick"),  0x0326B4, 0x0326D4, 0x4D},
    { _T("A-Ism Punch"), 0x032754, 0x032774, 0x4D},
    { _T("A-Ism Kick"),  0x0327F4, 0x032814, 0x4D},
    { _T("V-Ism Punch"), 0x032894, 0x0328B4, 0x4D},
    { _T("V-Ism Kick"),  0x032934, 0x032954, 0x4D},
    { _T("Burned 1"), 0x37c34 + 0x00, 0x37c34 + 0x20, 0x4D },
    { _T("Burned 2"), 0x37c34 + 0x20, 0x37c34 + 0x40, 0x4D },
    { _T("Psycho Crusher Burned 1"), 0x37c34 + 0x40, 0x37c34 + 0x60, 0x4D },
    { _T("Psycho Crusher Burned 2"), 0x37c34 + 0x60, 0x37c34 + 0x80, 0x4D },
    { _T("V-Ism P1 After Effect 1"), 0x37c34 + 0x80, 0x37c34 + 0xA0, 0x4D },
    { _T("V-Ism P1 After Effect 2"), 0x37c34 + 0xA0, 0x37c34 + 0xC0, 0x4D },
    { _T("V-Ism P2 After Effect 1"), 0x37c34 + 0xC0, 0x37c34 + 0xE0, 0x4D },
    { _T("V-Ism P2 After Effect 2"), 0x37c34 + 0xe0, 0x37c34 + 0x100, 0x4D },
    { _T("X-Ism Punch Zapped"), 0x37c34 + 0x100, 0x37c34 + 0x120, 0x4D },
    { _T("X-Ism Kick Zapped"), 0x37c34 + 0x120, 0x37c34 + 0x140, 0x4D },
    { _T("A-Ism Punch Zapped"), 0x37c34 + 0x140, 0x37c34 + 0x160, 0x4D },
    { _T("A-Ism Kick Zapped"), 0x37c34 + 0x160, 0x37c34 + 0x180, 0x4D },
    { _T("V-Ism Punch Zapped"), 0x37c34 + 0x180, 0x37c34 + 0x1A0, 0x4D },
    { _T("V-Ism Kick Zapped"), 0x37c34 + 0x1A0, 0x37c34 + 0x1C0, 0x4D },
    { _T("Zapped Skeleton"), 0x37c34 + 0x1C0, 0x37c34 + 0x1E0, 0x4D },
    { _T("X-Ism Punch Mash"), 0x37c34 + 0x1e0, 0x37c34 + 0x200, 0x4D },
    { _T("X-Ism Kick Mash"), 0x37c34 + 0x200, 0x37c34 + 0x220, 0x4D },
    { _T("A-Ism Punch Mash"), 0x37c34 + 0x220, 0x37c34 + 0x240, 0x4D },
    { _T("A-Ism Kick Mash"), 0x37c34 + 0x240, 0x37c34 + 0x260, 0x4D },
    { _T("V-Ism Punch Mash"), 0x37c34 + 0x260, 0x37c34 + 0x280, 0x4D },
    { _T("V-Ism Kick Mash"), 0x37c34 + 0x280, 0x37c34 + 0x2A0, 0x4D },
    { _T("Priority Win"), 0x37c34 + 0x2A0, 0x37c34 + 0x2C0, 0x4D },
    { _T("Damage Reduction"), 0x37c34 + 0x2C0, 0x37c34 + 0x2E0, 0x4D },
    { _T("Just Defend"), 0x37c34 + 0x2e0, 0x37c34 + 0x300, 0x4D },
};

const sGame_PaletteDataset SFA3_A_STAGES_AKUMA_NODE[] =
{
    { _T("Rear Cave Wall"), 0x3C814, 0x3C8D4, indexCPS2_SFA3Assets, 0x0A },
    { _T("Rear Candle Glows 1"), 0x61394, 0x613B4, indexCPS2_SFA3Assets, 0x0B },
    { _T("Rear Candle Glows 2"), 0x613B4, 0x613D4, indexCPS2_SFA3Assets, 0x0B },
    { _T("Right Cave Wall Ceiling"), 0x47CD4, 0x47CF4, indexCPS2_SFA3Assets, 0x0C },
    { _T("Hang Tags / Shadow"), 0x38614, 0x38634, indexCPS2_SFA3Assets, 0x0D },
    { _T("Right Candles Glow 1"), 0x4C574, 0x4C594, indexCPS2_SFA3Assets, 0x0E },
    { _T("Right Candles Glow 2"), 0x4C5B4, 0x4C5D4, indexCPS2_SFA3Assets, 0x0E },
    { _T("Wall Glow"), 0x385B4, 0x385D4, indexCPS2_SFA3Assets, 0x0F },
    { _T("Main Ground"), 0x40F34, 0x41014, indexCPS2_SFA3Assets, 0x10 },
    { _T("Left Candles Glow 1"), 0x62A54, 0x62A74, indexCPS2_SFA3Assets, 0x11 },
    { _T("Left Candles Glow 2"), 0x62A74, 0x62A94, indexCPS2_SFA3Assets, 0x11 },
    { _T("Left Rope Candles 1"), 0x4C554, 0x4C574, indexCPS2_SFA3Assets, 0x12 },
    { _T("Left Rope Candles 2"), 0x4C594, 0x4C5B4, indexCPS2_SFA3Assets, 0x12 },
    { _T("Unknown Sprites 1"), 0x38574, 0x38594 },
    { _T("Unknown Sprites 2"), 0x38594, 0x385B4 },
    { _T("Unknown Sprites 3"), 0x385D4, 0x385F4 },
    { _T("Unknown Sprites 4"), 0x385F4, 0x38614 },
};

const sGame_PaletteDataset SFA3_A_STAGES_KEN_NODE[] =
{
    { _T("Read Building 1"), 0x3C4F4, 0x3C6D4, indexCPS2_SFA3Assets, 0x13 },
    { _T("Rear Building 2"), 0x3C6D4, 0x3C814, indexCPS2_SFA3Assets, 0x14 },
    { _T("Left Building / Palms 1"), 0x40B34, 0x40D34, indexCPS2_SFA3Assets, 0x15 },
    { _T("Left Building / Palms 2"), 0x40D34, 0x40F34, indexCPS2_SFA3Assets, 0x16 },
    
    { _T("Fountain / Flags / Palms 1"), 0x47934, 0x47B34, indexCPS2_SFA3Assets, 0x17 },
    { _T("Fountain / Flags / Palms 2"), 0x47B34, 0x47CD4, indexCPS2_SFA3Assets, 0x18 },
    { _T("Fountain Stream"), 0x38514, 0x38534, indexCPS2_SFA3Assets, 0x19 },
    { _T("Bartender"), 0x384D4, 0x384F4, indexCPS2_SFA3Assets, 0x1a },
    { _T("Girls Lounging"), 0x384B4, 0x384D4, indexCPS2_SFA3Assets, 0x1b },
    { _T("Couple @ Table"), 0x384F4, 0x38514, indexCPS2_SFA3Assets, 0x1c },
    { _T("Plants?"), 0x38534, 0x38554, indexCPS2_SFA3Assets, 0x1d },
    { _T("Post & Statue"), 0x38554, 0x38574, indexCPS2_SFA3Assets, 0x1e },
};

const sGame_PaletteDataset SFA3_A_STAGES_RYU_NODE[] =
{
    { _T("Sunset / Sea"), 0x3C4B4, 0x3C4F4, indexCPS2_SFA3Assets, 0 },
    { _T("Castle"), 0x383F4, 0x38434, indexCPS2_SFA3Assets, 0x03 },
    { _T("Forest / Cliff Tree / Waterfall Hill"), 0x477F4, 0x47934, indexCPS2_SFA3Assets, 0x04 },
    { _T("Waterfall Landing Anim 1"), 0x63FB4, 0x63FD4, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Landing Anim 2"), 0x63FD4, 0x63FF4, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Landing Anim 3"), 0x63FF4, 0x64014, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Landing Anim 4"), 0x64014, 0x64034, indexCPS2_SFA3Assets, 0x01, &pairUnhandled },
    { _T("Waterfall Stream Anim 1"), 0x63F34, 0x63F54, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Waterfall Stream Anim 2"), 0x63F54, 0x63F74, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Waterfall Stream Anim 3"), 0x63F74, 0x63F94, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Waterfall Stream Anim 4"), 0x63F94, 0x63FB4, indexCPS2_SFA3Assets, 0x02, &pairUnhandled },
    { _T("Main Ground / Big Tree Branches"), 0x40994, 0x40B34, indexCPS2_SFA3Assets, 0x05 },
    { _T("Tree Trunk Right Side"), 0x38454, 0x38474, indexCPS2_SFA3Assets, 0x06 },
    { _T("Tree Leaves"), 0x38474, 0x38494, indexCPS2_SFA3Assets, 0x07 },
    { _T("Grass Left Side"), 0x38434, 0x38454, indexCPS2_SFA3Assets, 0x08 },
    { _T("Fighter Shadow"), 0x38494, 0x384B4, indexCPS2_SFA3Assets, 0x09 },
};

const sGame_PaletteDataset SFA3_A_STAGES_NASH_NODE[] =
{
    { _T("Cockpit/Top (Plane)/Landing Gear"), 0x47CF4, 0x47DF4, indexCPS2_SFA3Assets, 0x1f },
    { _T("Plane and Floor Part 1"), 0x41014, 0x41214, indexCPS2_SFA3Assets, 0x20 },
    { _T("Plane and Floor Part 2"), 0x41214, 0x413D4, indexCPS2_SFA3Assets, 0x21 },
    { _T("Rear Windows Metal Ceiling Part 1"), 0x3C8D4, 0x3CA74, indexCPS2_SFA3Assets, 0x22 },
    { _T("Rear Windows Metal Ceiling Part 2"), 0x3CAD4, 0x3CC74, indexCPS2_SFA3Assets, 0x23 },
    { _T("Mechanic Spectators"), 0x38634, 0x38654, indexCPS2_SFA3Assets, 0x25 },
    { _T("Rolling Stairs Thing"), 0x38654, 0x38674, indexCPS2_SFA3Assets, 0x24 },
    { _T("Missile"), 0x38674, 0x38694, indexCPS2_SFA3Assets, 0x26 },
    { _T("Missile Tails"), 0x38694, 0x386B4, indexCPS2_SFA3Assets, 0x27 },
    { _T("Missile Heads"), 0x386B4, 0x386D4, indexCPS2_SFA3Assets, 0x28 },
    { _T("Under Plane???"), 0x386D4, 0x386F4, indexCPS2_SFA3Assets, 0x29 },
};

const sGame_PaletteDataset SFA3_A_STAGES_CHUNLI_NODE[] =
{
    { _T("Far Background - 8x8 (1/2)"), 0x3CC74, 0x3CE74, indexCPS2_SFA3Assets, 0x2A },
    { _T("Far Background - 8x8 (2/2)"), 0x3CE74, 0x3CFD4, indexCPS2_SFA3Assets, 0x2B },
    { _T("Mid Background - 16x16 (1/2)"), 0x413D4, 0x415D4, indexCPS2_SFA3Assets, 0x2C },
    { _T("Mid Background - 16x16 (2/2)"), 0x415D4, 0x417D4, indexCPS2_SFA3Assets, 0x2D },
    { _T("Close Background - 32x32"), 0x47DF4, 0x47ED4, indexCPS2_SFA3Assets, 0x2E },
    { _T("Instructor"), 0x386F4, 0x38714, indexCPS2_SFA3Assets, 0x2F },
    { _T("Lamp Post"), 0x38714, 0x38734, indexCPS2_SFA3Assets, 0x30 },
    { _T("Sign"), 0x38734, 0x38754, indexCPS2_SFA3Assets, 0x31 },
    { _T("Flag"), 0x38754, 0x38774, indexCPS2_SFA3Assets, 0x32 },
    { _T("Tree"), 0x38774, 0x38794, indexCPS2_SFA3Assets, 0x33 },
    { _T("Shadow"), 0x38794, 0x387B4, indexCPS2_SFA3Assets, 0x34 },
};

const sGame_PaletteDataset SFA3_A_RYU_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4ce14, 0x4ce94, indexCPS2_SFA3Assets, 0xb4 },
    { _T("X-Ism Kick"), 0x4ce94, 0x4cf14, indexCPS2_SFA3Assets, 0xb4 },
    { _T("A-Ism Punch"), 0x4cf14, 0x4cf94, indexCPS2_SFA3Assets, 0xb4 },
    { _T("A-Ism Kick"), 0x4cf94, 0x4d014, indexCPS2_SFA3Assets, 0xb4 },
    { _T("V-Ism Punch"), 0x4d014, 0x4d094, indexCPS2_SFA3Assets, 0xb4 },
    { _T("V-Ism Kick"), 0x4d094, 0x4d114, indexCPS2_SFA3Assets, 0xb4 },
};

const sGame_PaletteDataset SFA3_A_KEN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4d114, 0x4d194, indexCPS2_SFA3Assets, 0xaf },
    { _T("X-Ism Kick"), 0x4d194, 0x4d214, indexCPS2_SFA3Assets, 0xaf },
    { _T("A-Ism Punch"), 0x4d214, 0x4d294, indexCPS2_SFA3Assets, 0xaf },
    { _T("A-Ism Kick"), 0x4d294, 0x4d314, indexCPS2_SFA3Assets, 0xaf },
    { _T("V-Ism Punch"), 0x4d314, 0x4d394, indexCPS2_SFA3Assets, 0xaf },
    { _T("V-Ism Kick"), 0x4d394, 0x4d414, indexCPS2_SFA3Assets, 0xaf },
};

const sGame_PaletteDataset SFA3_A_AKUMA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4d414, 0x4d494, indexCPS2_SFA3Assets, 0xa1 },
    { _T("X-Ism Kick"), 0x4d494, 0x4d514, indexCPS2_SFA3Assets, 0xa1 },
    { _T("A-Ism Punch"), 0x4d514, 0x4d594, indexCPS2_SFA3Assets, 0xa1 },
    { _T("A-Ism Kick"), 0x4d594, 0x4d614, indexCPS2_SFA3Assets, 0xa1 },
    { _T("V-Ism Punch"), 0x4d614, 0x4d694, indexCPS2_SFA3Assets, 0xa1 },
    { _T("V-Ism Kick"), 0x4d694, 0x4d714, indexCPS2_SFA3Assets, 0xa1 },
};

const sGame_PaletteDataset SFA3_A_CHARLIE_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4d714, 0x4d794, indexCPS2_SFA3Assets, 0xa5 },
    { _T("X-Ism Kick"), 0x4d794, 0x4d814, indexCPS2_SFA3Assets, 0xa5 },
    { _T("A-Ism Punch"), 0x4d814, 0x4d894, indexCPS2_SFA3Assets, 0xa5 },
    { _T("A-Ism Kick"), 0x4d894, 0x4d914, indexCPS2_SFA3Assets, 0xa5 },
    { _T("V-Ism Punch"), 0x4d914, 0x4d994, indexCPS2_SFA3Assets, 0xa5 },
    { _T("V-Ism Kick"), 0x4d994, 0x4da14, indexCPS2_SFA3Assets, 0xa5 },
};

const sGame_PaletteDataset SFA3_A_CHUNLI_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4da14, 0x4da94, indexCPS2_SFA3Assets, 0xa6 },
    { _T("X-Ism Kick"), 0x4da94, 0x4db14, indexCPS2_SFA3Assets, 0xa6 },
    { _T("A-Ism Punch"), 0x4db14, 0x4db94, indexCPS2_SFA3Assets, 0xa7 },
    { _T("A-Ism Kick"), 0x4db94, 0x4dc14, indexCPS2_SFA3Assets, 0xa7 },
    { _T("V-Ism Punch"), 0x4dc14, 0x4dc94, indexCPS2_SFA3Assets, 0xa7 },
    { _T("V-Ism Kick"), 0x4dc94, 0x4dd14, indexCPS2_SFA3Assets, 0xa7 },
};

const sGame_PaletteDataset SFA3_A_ADON_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4dd14, 0x4dd94, indexCPS2_SFA3Assets, 0xa0 },
    { _T("X-Ism Kick"), 0x4dd94, 0x4de14, indexCPS2_SFA3Assets, 0xa0 },
    { _T("A-Ism Punch"), 0x4de14, 0x4de94, indexCPS2_SFA3Assets, 0xa0 },
    { _T("A-Ism Kick"), 0x4de94, 0x4df14, indexCPS2_SFA3Assets, 0xa0 },
    { _T("V-Ism Punch"), 0x4df14, 0x4df94, indexCPS2_SFA3Assets, 0xa0 },
    { _T("V-Ism Kick"), 0x4df94, 0x4e014, indexCPS2_SFA3Assets, 0xa0 },
};

const sGame_PaletteDataset SFA3_A_SODOM_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e014, 0x4e094, indexCPS2_SFA3Assets, 0xb7 },
    { _T("X-Ism Kick"), 0x4e094, 0x4e114, indexCPS2_SFA3Assets, 0xb7 },
    { _T("A-Ism Punch"), 0x4e114, 0x4e194, indexCPS2_SFA3Assets, 0xb7 },
    { _T("A-Ism Kick"), 0x4e194, 0x4e214, indexCPS2_SFA3Assets, 0xb7 },
    { _T("V-Ism Punch"), 0x4e214, 0x4e294, indexCPS2_SFA3Assets, 0xb7 },
    { _T("V-Ism Kick"), 0x4e294, 0x4e314, indexCPS2_SFA3Assets, 0xb7 },
};

const sGame_PaletteDataset SFA3_A_GUY_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e314, 0x4e394, indexCPS2_SFA3Assets, 0xad },
    { _T("X-Ism Kick"), 0x4e394, 0x4e414, indexCPS2_SFA3Assets, 0xad },
    { _T("A-Ism Punch"), 0x4e414, 0x4e494, indexCPS2_SFA3Assets, 0xad },
    { _T("A-Ism Kick"), 0x4e494, 0x4e514, indexCPS2_SFA3Assets, 0xad },
    { _T("V-Ism Punch"), 0x4e514, 0x4e594, indexCPS2_SFA3Assets, 0xad },
    { _T("V-Ism Kick"), 0x4e594, 0x4e614, indexCPS2_SFA3Assets, 0xad },
};

const sGame_PaletteDataset SFA3_A_BIRDIE_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e614, 0x4e694, indexCPS2_SFA3Assets, 0xa2 },
    { _T("X-Ism Kick"), 0x4e694, 0x4e714, indexCPS2_SFA3Assets, 0xa2 },
    { _T("A-Ism Punch"), 0x4e714, 0x4e794, indexCPS2_SFA3Assets, 0xa2 },
    { _T("A-Ism Kick"), 0x4e794, 0x4e814, indexCPS2_SFA3Assets, 0xa2 },
    { _T("V-Ism Punch"), 0x4e814, 0x4e894, indexCPS2_SFA3Assets, 0xa2 },
    { _T("V-Ism Kick"), 0x4e894, 0x4e914, indexCPS2_SFA3Assets, 0xa2 },
};

const sGame_PaletteDataset SFA3_A_ROSE_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4e914, 0x4e994, indexCPS2_SFA3Assets, 0xb3 },
    { _T("X-Ism Kick"), 0x4e994, 0x4ea14, indexCPS2_SFA3Assets, 0xb3 },
    { _T("A-Ism Punch"), 0x4ea14, 0x4ea94, indexCPS2_SFA3Assets, 0xb3 },
    { _T("A-Ism Kick"), 0x4ea94, 0x4eb14, indexCPS2_SFA3Assets, 0xb3 },
    { _T("V-Ism Punch"), 0x4eb14, 0x4eb94, indexCPS2_SFA3Assets, 0xb3 },
    { _T("V-Ism Kick"), 0x4eb94, 0x4ec14, indexCPS2_SFA3Assets, 0xb3 },
};

const sGame_PaletteDataset SFA3_A_MBISON_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4ec14, 0x4ec94, indexCPS2_SFA3Assets, 0xb0 },
    { _T("X-Ism Kick"), 0x4ec94, 0x4ed14, indexCPS2_SFA3Assets, 0xb0 },
    { _T("A-Ism Punch"), 0x4ed14, 0x4ed94, indexCPS2_SFA3Assets, 0xb0 },
    { _T("A-Ism Kick"), 0x4ed94, 0x4ee14, indexCPS2_SFA3Assets, 0xb0 },
    { _T("V-Ism Punch"), 0x4ee14, 0x4ee94, indexCPS2_SFA3Assets, 0xb0 },
    { _T("V-Ism Kick"), 0x4ee94, 0x4ef14, indexCPS2_SFA3Assets, 0xb0 },
};

const sGame_PaletteDataset SFA3_A_SAGAT_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4ef14, 0x4ef94, indexCPS2_SFA3Assets, 0xb5 },
    { _T("X-Ism Kick"), 0x4ef94, 0x4f014, indexCPS2_SFA3Assets, 0xb5 },
    { _T("A-Ism Punch"), 0x4f014, 0x4f094, indexCPS2_SFA3Assets, 0xb5 },
    { _T("A-Ism Kick"), 0x4f094, 0x4f114, indexCPS2_SFA3Assets, 0xb5 },
    { _T("V-Ism Punch"), 0x4f114, 0x4f194, indexCPS2_SFA3Assets, 0xb5 },
    { _T("V-Ism Kick"), 0x4f194, 0x4f214, indexCPS2_SFA3Assets, 0xb5 },
};

const sGame_PaletteDataset SFA3_A_DAN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4f214, 0x4f294, indexCPS2_SFA3Assets, 0xa9 },
    { _T("X-Ism Kick"), 0x4f294, 0x4f314, indexCPS2_SFA3Assets, 0xa9 },
    { _T("A-Ism Punch"), 0x4f314, 0x4f394, indexCPS2_SFA3Assets, 0xa9 },
    { _T("A-Ism Kick"), 0x4f394, 0x4f414, indexCPS2_SFA3Assets, 0xa9 },
    { _T("V-Ism Punch"), 0x4f414, 0x4f494, indexCPS2_SFA3Assets, 0xa9 },
    { _T("V-Ism Kick"), 0x4f494, 0x4f514, indexCPS2_SFA3Assets, 0xa9 },
};

const sGame_PaletteDataset SFA3_A_SAKURA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4f514, 0x4f594, indexCPS2_SFA3Assets, 0xb6 },
    { _T("X-Ism Kick"), 0x4f594, 0x4f614, indexCPS2_SFA3Assets, 0xb6 },
    { _T("A-Ism Punch"), 0x4f614, 0x4f694, indexCPS2_SFA3Assets, 0xb6 },
    { _T("A-Ism Kick"), 0x4f694, 0x4f714, indexCPS2_SFA3Assets, 0xb6 },
    { _T("V-Ism Punch"), 0x4f714, 0x4f794, indexCPS2_SFA3Assets, 0xb6 },
    { _T("V-Ism Kick"), 0x4f794, 0x4f814, indexCPS2_SFA3Assets, 0xb6 },
};

const sGame_PaletteDataset SFA3_A_ROLENTO_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4f814, 0x4f894, indexCPS2_SFA3Assets, 0xb2 },
    { _T("X-Ism Kick"), 0x4f894, 0x4f914, indexCPS2_SFA3Assets, 0xb2 },
    { _T("A-Ism Punch"), 0x4f914, 0x4f994, indexCPS2_SFA3Assets, 0xb2 },
    { _T("A-Ism Kick"), 0x4f994, 0x4fa14, indexCPS2_SFA3Assets, 0xb2 },
    { _T("V-Ism Punch"), 0x4fa14, 0x4fa94, indexCPS2_SFA3Assets, 0xb2 },
    { _T("V-Ism Kick"), 0x4fa94, 0x4fb14, indexCPS2_SFA3Assets, 0xb2 },
};

const sGame_PaletteDataset SFA3_A_DHALSIM_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4fb14, 0x4fb94, indexCPS2_SFA3Assets, 0xaa },
    { _T("X-Ism Kick"), 0x4fb94, 0x4fc14, indexCPS2_SFA3Assets, 0xaa },
    { _T("A-Ism Punch"), 0x4fc14, 0x4fc94, indexCPS2_SFA3Assets, 0xaa },
    { _T("A-Ism Kick"), 0x4fc94, 0x4fd14, indexCPS2_SFA3Assets, 0xaa },
    { _T("V-Ism Punch"), 0x4fd14, 0x4fd94, indexCPS2_SFA3Assets, 0xaa },
    { _T("V-Ism Kick"), 0x4fd94, 0x4fe14, indexCPS2_SFA3Assets, 0xaa },
};

const sGame_PaletteDataset SFA3_A_ZANGIEF_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x4fe14, 0x4fe94, indexCPS2_SFA3Assets, 0xb9 },
    { _T("X-Ism Kick"), 0x4fe94, 0x4ff14, indexCPS2_SFA3Assets, 0xb9 },
    { _T("A-Ism Punch"), 0x4ff14, 0x4ff94, indexCPS2_SFA3Assets, 0xb9 },
    { _T("A-Ism Kick"), 0x4ff94, 0x50014, indexCPS2_SFA3Assets, 0xb9 },
    { _T("V-Ism Punch"), 0x50014, 0x50094, indexCPS2_SFA3Assets, 0xb9 },
    { _T("V-Ism Kick"), 0x50094, 0x50114, indexCPS2_SFA3Assets, 0xb9 },
};

const sGame_PaletteDataset SFA3_A_GEN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x50114, 0x50194, indexCPS2_SFA3Assets, 0xac },
    { _T("X-Ism Kick"), 0x50194, 0x50214, indexCPS2_SFA3Assets, 0xac },
    { _T("A-Ism Punch"), 0x50214, 0x50294, indexCPS2_SFA3Assets, 0xac },
    { _T("A-Ism Kick"), 0x50294, 0x50314, indexCPS2_SFA3Assets, 0xac },
    { _T("V-Ism Punch"), 0x50314, 0x50394, indexCPS2_SFA3Assets, 0xac },
    { _T("V-Ism Kick"), 0x50394, 0x50414, indexCPS2_SFA3Assets, 0xac },
};

const sGame_PaletteDataset SFA3_A_CAMMY_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x50a14, 0x50a94, indexCPS2_SFA3Assets, 0xa4 },
    { _T("X-Ism Kick"), 0x50a94, 0x50b14, indexCPS2_SFA3Assets, 0xa4 },
    { _T("A-Ism Punch"), 0x50b14, 0x50b94, indexCPS2_SFA3Assets, 0xa4 },
    { _T("A-Ism Kick"), 0x50b94, 0x50c14, indexCPS2_SFA3Assets, 0xa4 },
    { _T("V-Ism Punch"), 0x50c14, 0x50c94, indexCPS2_SFA3Assets, 0xa4 },
    { _T("V-Ism Kick"), 0x50c94, 0x50d14, indexCPS2_SFA3Assets, 0xa4 },
};

const sGame_PaletteDataset SFA3_A_EHONDA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x50d14, 0x50d94, indexCPS2_SFA3Assets, 0xab },
    { _T("X-Ism Kick"), 0x50d94, 0x50e14, indexCPS2_SFA3Assets, 0xab },
    { _T("A-Ism Punch"), 0x50e14, 0x50e94, indexCPS2_SFA3Assets, 0xab },
    { _T("A-Ism Kick"), 0x50e94, 0x50f14, indexCPS2_SFA3Assets, 0xab },
    { _T("V-Ism Punch"), 0x50f14, 0x50f94, indexCPS2_SFA3Assets, 0xab },
    { _T("V-Ism Kick"), 0x50f94, 0x51014, indexCPS2_SFA3Assets, 0xab },
};

const sGame_PaletteDataset SFA3_A_BLANKA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51014, 0x51094, indexCPS2_SFA3Assets, 0xa3 },
    { _T("X-Ism Kick"), 0x51094, 0x51114, indexCPS2_SFA3Assets, 0xa3 },
    { _T("A-Ism Punch"), 0x51114, 0x51194, indexCPS2_SFA3Assets, 0xa3 },
    { _T("A-Ism Kick"), 0x51194, 0x51214, indexCPS2_SFA3Assets, 0xa3 },
    { _T("V-Ism Punch"), 0x51214, 0x51294, indexCPS2_SFA3Assets, 0xa3 },
    { _T("V-Ism Kick"), 0x51294, 0x51314, indexCPS2_SFA3Assets, 0xa3 },
};

const sGame_PaletteDataset SFA3_A_RMIKA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51314, 0x51394, indexCPS2_SFA3Assets, 0xb1 },
    { _T("X-Ism Kick"), 0x51394, 0x51414, indexCPS2_SFA3Assets, 0xb1 },
    { _T("A-Ism Punch"), 0x51414, 0x51494, indexCPS2_SFA3Assets, 0xb1 },
    { _T("A-Ism Kick"), 0x51494, 0x51514, indexCPS2_SFA3Assets, 0xb1 },
    { _T("V-Ism Punch"), 0x51514, 0x51594, indexCPS2_SFA3Assets, 0xb1 },
    { _T("V-Ism Kick"), 0x51594, 0x51614, indexCPS2_SFA3Assets, 0xb1 },
};

const sGame_PaletteDataset SFA3_A_CODY_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51614, 0x51694, indexCPS2_SFA3Assets, 0xa8 },
    { _T("X-Ism Kick"), 0x51694, 0x51714, indexCPS2_SFA3Assets, 0xa8 },
    { _T("A-Ism Punch"), 0x51714, 0x51794, indexCPS2_SFA3Assets, 0xa8 },
    { _T("A-Ism Kick"), 0x51794, 0x51814, indexCPS2_SFA3Assets, 0xa8 },
    { _T("V-Ism Punch"), 0x51814, 0x51894, indexCPS2_SFA3Assets, 0xa8 },
    { _T("V-Ism Kick"), 0x51894, 0x51914, indexCPS2_SFA3Assets, 0xa8 },
};

const sGame_PaletteDataset SFA3_A_VEGA_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51914, 0x51994, indexCPS2_SFA3Assets, 0xb8 },
    { _T("X-Ism Kick"), 0x51994, 0x51a14, indexCPS2_SFA3Assets, 0xb8 },
    { _T("A-Ism Punch"), 0x51a14, 0x51a94, indexCPS2_SFA3Assets, 0xb8 },
    { _T("A-Ism Kick"), 0x51a94, 0x51b14, indexCPS2_SFA3Assets, 0xb8 },
    { _T("V-Ism Punch"), 0x51b14, 0x51b94, indexCPS2_SFA3Assets, 0xb8 },
    { _T("V-Ism Kick"), 0x51b94, 0x51c14, indexCPS2_SFA3Assets, 0xb8 },
};

const sGame_PaletteDataset SFA3_A_KARIN_PORTRAIT_PALETTES[] =
{
    { _T("X-Ism Punch"), 0x51c14, 0x51c94, indexCPS2_SFA3Assets, 0xae },
    { _T("X-Ism Kick"), 0x51c94, 0x51d14, indexCPS2_SFA3Assets, 0xae },
    { _T("A-Ism Punch"), 0x51d14, 0x51d94, indexCPS2_SFA3Assets, 0xae },
    { _T("A-Ism Kick"), 0x51d94, 0x51e14, indexCPS2_SFA3Assets, 0xae },
    { _T("V-Ism Punch"), 0x51e14, 0x51e94, indexCPS2_SFA3Assets, 0xae },
    { _T("V-Ism Kick"), 0x51e94, 0x51f14, indexCPS2_SFA3Assets, 0xae },
};

const sDescTreeNode SFA3_A_RYU_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PALETTES,       ARRAYSIZE(SFA3_A_RYU_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_RYU_PORTRAIT_PALETTES) },};

const sDescTreeNode SFA3_A_KEN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PALETTES,       ARRAYSIZE(SFA3_A_KEN_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_KEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_GOUKI_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_PALETTES,     ARRAYSIZE(SFA3_A_GOUKI_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_AKUMA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_AKUMA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_CHARLIE_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PALETTES,   ARRAYSIZE(SFA3_A_CHARLIE_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CHARLIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_CHUNLI_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PALETTES,    ARRAYSIZE(SFA3_A_CHUNLI_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CHUNLI_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ADON_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PALETTES,      ARRAYSIZE(SFA3_A_ADON_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ADON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_SODOM_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PALETTES,     ARRAYSIZE(SFA3_A_SODOM_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_SODOM_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_GUY_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PALETTES,       ARRAYSIZE(SFA3_A_GUY_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_GUY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_BIRDIE_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PALETTES,    ARRAYSIZE(SFA3_A_BIRDIE_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_BIRDIE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ROSE_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMP,      ARRAYSIZE(SFA3_A_ROSE_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_XISMK,      ARRAYSIZE(SFA3_A_ROSE_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMP,      ARRAYSIZE(SFA3_A_ROSE_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_AISMK,      ARRAYSIZE(SFA3_A_ROSE_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMP,      ARRAYSIZE(SFA3_A_ROSE_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_VISMK,      ARRAYSIZE(SFA3_A_ROSE_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_STATUS,     ARRAYSIZE(SFA3_A_ROSE_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ROSE_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_MBIPSON_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_MBIPSON_PALETTES,   ARRAYSIZE(SFA3_A_MBIPSON_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_MBISON_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_MBISON_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_SAGAT_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PALETTES,     ARRAYSIZE(SFA3_A_SAGAT_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_SAGAT_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_DAN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PALETTES,       ARRAYSIZE(SFA3_A_DAN_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_DAN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_SAKURA_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PALETTES,    ARRAYSIZE(SFA3_A_SAKURA_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_SAKURA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ROLENTO_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PALETTES,   ARRAYSIZE(SFA3_A_ROLENTO_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ROLENTO_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_DHALSIM_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PALETTES,   ARRAYSIZE(SFA3_A_DHALSIM_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_DHALSIM_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_ZANGIEF_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PALETTES,   ARRAYSIZE(SFA3_A_ZANGIEF_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_ZANGIEF_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_GEN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PALETTES,       ARRAYSIZE(SFA3_A_GEN_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_GEN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_BALROG_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_PALETTES,    ARRAYSIZE(SFA3_A_BALROG_PALETTES) },
};

const sDescTreeNode SFA3_A_CAMMY_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PALETTES,     ARRAYSIZE(SFA3_A_CAMMY_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CAMMY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_EHONDA_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PALETTES,    ARRAYSIZE(SFA3_A_EHONDA_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_EHONDA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_BLANKA_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PALETTES,    ARRAYSIZE(SFA3_A_BLANKA_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_BLANKA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_RMIKA_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PALETTES,     ARRAYSIZE(SFA3_A_RMIKA_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_RMIKA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_CODY_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PALETTES,      ARRAYSIZE(SFA3_A_CODY_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_CODY_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_VEGA_COLLECTION[] =
{
    { _T("X-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMP,      ARRAYSIZE(SFA3_A_VEGA_XISMP) },
    { _T("X-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_XISMK,      ARRAYSIZE(SFA3_A_VEGA_XISMK) },
    { _T("A-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMP,      ARRAYSIZE(SFA3_A_VEGA_AISMP) },
    { _T("A-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_AISMK,      ARRAYSIZE(SFA3_A_VEGA_AISMK) },
    { _T("V-Ism Punch"),    DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMP,      ARRAYSIZE(SFA3_A_VEGA_VISMP) },
    { _T("V-Ism Kick"),     DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_VISMK,      ARRAYSIZE(SFA3_A_VEGA_VISMK) },
    { _T("Status Effects"), DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_STATUS,     ARRAYSIZE(SFA3_A_VEGA_STATUS) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_VEGA_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_KARIN_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PALETTES,     ARRAYSIZE(SFA3_A_KARIN_PALETTES) },
    { _T("Select Portraits"), DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_PORTRAIT_PALETTES, ARRAYSIZE(SFA3_A_KARIN_PORTRAIT_PALETTES) },
};

const sDescTreeNode SFA3_A_JUNI_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_PALETTES,      ARRAYSIZE(SFA3_A_JUNI_PALETTES) },
};

const sDescTreeNode SFA3_A_JULI_COLLECTION[] =
{
    { _T("Palettes"), DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_PALETTES,      ARRAYSIZE(SFA3_A_JULI_PALETTES) },
};

const sDescTreeNode SFA3_A_BONUS_COLLECTION[] =
{
    { _T("Akuma Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_AKUMA_NODE, ARRAYSIZE(SFA3_A_STAGES_AKUMA_NODE) },
    { _T("Chun-Li Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_CHUNLI_NODE, ARRAYSIZE(SFA3_A_STAGES_CHUNLI_NODE) },
    { _T("Ken Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_KEN_NODE, ARRAYSIZE(SFA3_A_STAGES_KEN_NODE) },
    { _T("Ryu Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_RYU_NODE, ARRAYSIZE(SFA3_A_STAGES_RYU_NODE) },
    { _T("Nash Stage"), DESC_NODETYPE_TREE, (void*)SFA3_A_STAGES_NASH_NODE, ARRAYSIZE(SFA3_A_STAGES_NASH_NODE) },
};

const sDescTreeNode SFA3_A_UNITS[SFA3_A_NUM_IND] =
{
    { _T("Adon"),            DESC_NODETYPE_TREE, (void*)SFA3_A_ADON_COLLECTION,          ARRAYSIZE(SFA3_A_ADON_COLLECTION) },
    { _T("Balrog"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BALROG_COLLECTION,        ARRAYSIZE(SFA3_A_BALROG_COLLECTION) },
    { _T("Birdie"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BIRDIE_COLLECTION,        ARRAYSIZE(SFA3_A_BIRDIE_COLLECTION) },
    { _T("Blanka"),          DESC_NODETYPE_TREE, (void*)SFA3_A_BLANKA_COLLECTION,        ARRAYSIZE(SFA3_A_BLANKA_COLLECTION) },
    { _T("Cammy"),           DESC_NODETYPE_TREE, (void*)SFA3_A_CAMMY_COLLECTION,         ARRAYSIZE(SFA3_A_CAMMY_COLLECTION) },
    { _T("Charlie"),         DESC_NODETYPE_TREE, (void*)SFA3_A_CHARLIE_COLLECTION,       ARRAYSIZE(SFA3_A_CHARLIE_COLLECTION) },
    { _T("Chun-Li"),         DESC_NODETYPE_TREE, (void*)SFA3_A_CHUNLI_COLLECTION,        ARRAYSIZE(SFA3_A_CHUNLI_COLLECTION) },
    { _T("Cody"),            DESC_NODETYPE_TREE, (void*)SFA3_A_CODY_COLLECTION,          ARRAYSIZE(SFA3_A_CODY_COLLECTION) },
    { _T("Dan"),             DESC_NODETYPE_TREE, (void*)SFA3_A_DAN_COLLECTION,           ARRAYSIZE(SFA3_A_DAN_COLLECTION) },
    { _T("Dhalsim"),         DESC_NODETYPE_TREE, (void*)SFA3_A_DHALSIM_COLLECTION,       ARRAYSIZE(SFA3_A_DHALSIM_COLLECTION) },
    { _T("E. Honda"),        DESC_NODETYPE_TREE, (void*)SFA3_A_EHONDA_COLLECTION,        ARRAYSIZE(SFA3_A_EHONDA_COLLECTION) },
    { _T("Gen"),             DESC_NODETYPE_TREE, (void*)SFA3_A_GEN_COLLECTION,           ARRAYSIZE(SFA3_A_GEN_COLLECTION) },
    { _T("Gouki"),           DESC_NODETYPE_TREE, (void*)SFA3_A_GOUKI_COLLECTION,         ARRAYSIZE(SFA3_A_GOUKI_COLLECTION) },
    { _T("Guy"),             DESC_NODETYPE_TREE, (void*)SFA3_A_GUY_COLLECTION,           ARRAYSIZE(SFA3_A_GUY_COLLECTION) },
    { _T("Juli"),            DESC_NODETYPE_TREE, (void*)SFA3_A_JULI_COLLECTION,          ARRAYSIZE(SFA3_A_JULI_COLLECTION) },
    { _T("Juni"),            DESC_NODETYPE_TREE, (void*)SFA3_A_JUNI_COLLECTION,          ARRAYSIZE(SFA3_A_JUNI_COLLECTION) },
    { _T("Karin"),           DESC_NODETYPE_TREE, (void*)SFA3_A_KARIN_COLLECTION,         ARRAYSIZE(SFA3_A_KARIN_COLLECTION) },
    { _T("Ken"),             DESC_NODETYPE_TREE, (void*)SFA3_A_KEN_COLLECTION,           ARRAYSIZE(SFA3_A_KEN_COLLECTION) },
    { _T("M. Bison"),        DESC_NODETYPE_TREE, (void*)SFA3_A_MBIPSON_COLLECTION,       ARRAYSIZE(SFA3_A_MBIPSON_COLLECTION) },
    { _T("R. Mika"),         DESC_NODETYPE_TREE, (void*)SFA3_A_RMIKA_COLLECTION,         ARRAYSIZE(SFA3_A_RMIKA_COLLECTION) },
    { _T("Rolento"),         DESC_NODETYPE_TREE, (void*)SFA3_A_ROLENTO_COLLECTION,       ARRAYSIZE(SFA3_A_ROLENTO_COLLECTION) },
    { _T("Rose"),            DESC_NODETYPE_TREE, (void*)SFA3_A_ROSE_COLLECTION,          ARRAYSIZE(SFA3_A_ROSE_COLLECTION) },
    { _T("Ryu"),             DESC_NODETYPE_TREE, (void*)SFA3_A_RYU_COLLECTION,           ARRAYSIZE(SFA3_A_RYU_COLLECTION) },
    { _T("Sagat"),           DESC_NODETYPE_TREE, (void*)SFA3_A_SAGAT_COLLECTION,         ARRAYSIZE(SFA3_A_SAGAT_COLLECTION) },
    { _T("Sakura"),          DESC_NODETYPE_TREE, (void*)SFA3_A_SAKURA_COLLECTION,        ARRAYSIZE(SFA3_A_SAKURA_COLLECTION) },
    { _T("Sodom"),           DESC_NODETYPE_TREE, (void*)SFA3_A_SODOM_COLLECTION,         ARRAYSIZE(SFA3_A_SODOM_COLLECTION) },
    { _T("Vega"),            DESC_NODETYPE_TREE, (void*)SFA3_A_VEGA_COLLECTION,          ARRAYSIZE(SFA3_A_VEGA_COLLECTION) },
    { _T("Zangief"),         DESC_NODETYPE_TREE, (void*)SFA3_A_ZANGIEF_COLLECTION,       ARRAYSIZE(SFA3_A_ZANGIEF_COLLECTION) },
    { _T("Bonus Stuff"),     DESC_NODETYPE_TREE, (void*)SFA3_A_BONUS_COLLECTION,         ARRAYSIZE(SFA3_A_BONUS_COLLECTION) },
};

// We extend this array with data groveled from the SFA3e.txt extensible extras file, if any.
const stExtraDef SFA3_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
