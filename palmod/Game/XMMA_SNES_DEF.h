#pragma once

const UINT16 XMMA_SNES_IMGIDS_USED[] =
{
    indexXMMASprites_Apocalypse,        // 0x48
    indexXMMASprites_Beast,             // 0x49
    indexXMMASprites_Cyclops,           // 0x4A
    indexXMMASprites_Exodus,            // 0x4B
    indexXMMASprites_Gambit,            // 0x4C
    indexXMMASprites_Juggernaut,        // 0x4D
    indexXMMASprites_Magneto,           // 0x4E
    indexXMMASprites_OmegaRed,          // 0x4F
    indexXMMASprites_ProfessorX,        // 0x50
    indexXMMASprites_Psylocke,          // 0x51
    indexXMMASprites_Sentinel,          // 0x52
    indexXMMASprites_Tusk,              // 0x53
    indexXMMASprites_Wolverine,         // 0x54
    indexXMMASprites_Bonus,             // 0x55
};

const sGame_PaletteDataset XMMA_SNES_PSYLOCKE_PALETTES[] =
{
    { L"Psylocke", 0x160100, 0x160120, indexXMMASprites_Psylocke },
    { L"Psylocke FX", 0x160E40, 0x160E60 },
    { L"Psylocke CSP", 0x161F40, 0x161F60 },
    { L"Psylocke Password Face", 0x161380, 0x1613A0 },
};

const sGame_PaletteDataset XMMA_SNES_CYCLOPS_PALETTES[] =
{
    { L"Cyclops", 0x160000, 0x160020, indexXMMASprites_Cyclops },
    { L"Optic Blast", 0x160380, 0x1603A0 },

    { L"Cyclops CSP", 0x161F60, 0x161F80 },
    { L"Cyclops Password Face", 0x1613A0, 0x1613C0 },
};

const sGame_PaletteDataset XMMA_SNES_WOLVERINE_PALETTES[] =
{
    { L"Wolverine", 0x160020, 0x160040, indexXMMASprites_Wolverine },
    { L"Wolverine CSP", 0x161F80, 0x161FA0 },
    { L"Wolverine Password Face", 0x1613C0, 0x1613E0 },
};

const sGame_PaletteDataset XMMA_SNES_GAMBIT_PALETTES[] =
{
    { L"Gambit", 0x160120, 0x160140, indexXMMASprites_Gambit },
    { L"Gambit Cards", 0x160780, 0x1607A0 },
    { L"Gambit CSP", 0x161FA0, 0x161FC0 },
    { L"Gambit Password Face", 0x161400, 0x161420 },
};

const sGame_PaletteDataset XMMA_SNES_BEAST_PALETTES[] =
{
    { L"Beast", 0x160660, 0x160680, indexXMMASprites_Beast },
    { L"Beast CSP", 0x161FC0, 0x161FE0 },
    { L"Beast Password Face", 0x1613E0, 0x161400 },
};

const sGame_PaletteDataset XMMA_SNES_SENTINEL_PALETTES[] =
{
    { L"Sentinel - Head (Wolverine stage)", 0x160440, 0x160460 },
    { L"Sentinel - Body (Wolverine stage)", 0x161A00, 0x161A20 },
    { L"Sentinel - Skeleton (Wolverine stage)", 0x1619E0, 0x161A00 },
    { L"Sentinel (Psyocke stage)", 0x161BE0, 0x161C00 },
    { L"Sentinel (Beast stage)", 0x160740, 0x160760 },
};

const sGame_PaletteDataset XMMA_SNES_APOCALYPSE_PALETTES[] =
{
    { L"Apocalypse", 0x1605A0, 0x1605C0, indexXMMASprites_Apocalypse },
    { L"Apocalypse Fire", 0x1609C0, 0x1609E0 },

    // This doesn't look right: overriding
    //{ L"Apocalypse Cutscene", 0x160B5A, 0x160B80 },
    { L"Apocalypse Cutscene", 0x160B60, 0x160B80 },
    { L"Apocalypse Password Face", 0x161340, 0x161360 },
};

const sGame_PaletteDataset XMMA_SNES_TUSK_PALETTES[] =
{
    { L"Tusk", 0x1605C0, 0x1605E0, indexXMMASprites_Tusk },
};

const sGame_PaletteDataset XMMA_SNES_JUGGERNAUT_PALETTES[] =
{
    // This doesn't look right: overriding
    //{ L"Juggernaut", 0x00A85C, 0x00A87A },
    //{ L"Juggernaut Cutscene", 0x161040, 0x161062 },
    
    // Unclear what these colors are for: will straighten out.
    { L"Juggernaut", 0x00A860, 0x00A880, indexXMMASprites_Juggernaut },
    //{ L"Juggernaut", 0x160560, 0x160580 },
    { L"Juggernaut Cutscene Portrait", 0x161040, 0x161060 },
};

const sGame_PaletteDataset XMMA_SNES_OMEGARED_PALETTES[] =
{
    { L"Omega Red", 0x160E00, 0x160E20, indexXMMASprites_OmegaRed },
    
    // This doesn't seem right: holding off for now
    // { L"Omega Red Glow", 0x175720, 0x175780 },
    { L"Omega Red Cutscene Portrait", 0x1615E0, 0x161600 },
};

const sGame_PaletteDataset XMMA_SNES_EXODUS_PALETTES[] =
{
    { L"Exodus", 0x160A60, 0x160A80, indexXMMASprites_Exodus },
    { L"Exodus Cutscene", 0x1611A0, 0x1611C0 },
    { L"Exodus Story Face", 0x160BC0, 0x160BE0 },
};

const sGame_PaletteDataset XMMA_SNES_MAGNETO_PALETTES[] =
{
    { L"Magneto", 0x160600, 0x160620, indexXMMASprites_Magneto },
    { L"Magneto Platforms Beam and Debris", 0x160FDE, 0x16101E },
    { L"Magneto Cutscene", 0x163AC0, 0x163AE0 },
    { L"Magneto Story Face", 0x160BA0, 0x160BC0 },
    { L"Magnetic Field", 0x16364E, 0x163656 },
    { L"Magneto Password Face", 0x161320, 0x161340 },
};

const sGame_PaletteDataset XMMA_SNES_XAVIER_PALETTES[] =
{
    { L"Xavier Story Face", 0x160B80, 0x160BA0 },
    { L"Xavier Password Face", 0x161360, 0x161380 },
};

const sGame_PaletteDataset XMMA_SNES_BONUS_ENEMY_PALETTES[] =
{
    { L"Soldier (Tan)", 0x160280, 0x1602A0 },
    { L"Soldier (Green 1)", 0x1602A0, 0x1602C0 },
    { L"Soldier (Green 2)", 0x160260, 0x160280 },
    { L"Knife Soldier", 0x161420, 0x161440 },
    { L"River Knife Soldier", 0x160420, 0x160440 },
    { L"Big Soldier (Tan)", 0x161460, 0x161480 },
    { L"Big Soldier (Green)", 0x161480, 0x1614A0 },
    { L"Mini robos (Tusk stage)", 0x1609E0, 0x160A00 },
    { L"Beast stage mini-boss", 0x160800, 0x160820 },
    { L"Psylocke stage mini-boss", 0x1607A0, 0x1607C0 },
    { L"Wolverine stage mini-boss", 0x1600C0, 0x1600E0 },
};

const sGame_PaletteDataset XMMA_SNES_BONUS_BONUS_PALETTES[] =
{
    // This doesn't look right: overriding
    //{ L"Lifebar", 0x1617C0, 0x1617D8 },
    { L"Lifebar", 0x1617C0, 0x1617E0 },
    //{ L"Unknown (Lifebar 2?)", 0x1617E0, 0x161800 },

    // This doesn't look right: overriding
    //{ L"Planet (intro)", 0x163A80, 0x163A9E },
    { L"Planet (intro)", 0x163A80, 0x163AA0 },

    { L"X-MEN Logo (intro)", 0x161900, 0x161920 },
    
    // This doesn't look right: overriding
    //{ L"X-Men Select Mode Logo (intro)", 0x1616C0, 0x1616D2 },
    { L"X-Men Select Mode Logo (intro)", 0x1616C0, 0x1616E0 },

    { L"X-MEN Background (intro)", 0x161920, 0x161940 },

    // This doesn't look right: overriding
    //{ L"X-MEN Island Ocean", 0x163B6C, 0x163B7A },
    { L"X-MEN Island Ocean", 0x163B60, 0x163B80 },

    { L"X-MEN Island", 0x163B20, 0x163B60 },
    { L"X-MEN Island (Tusk Mission)", 0x163B80, 0x163BC0 },
    { L"Characters (intro)", 0x164280, 0x164320 },

    { L"Tusk Stage Preview", 0x1612A0, 0x161320 },
    
    // This doesn't look right: overriding
    //{ L"Characters background (intro)", 0x164322, 0x164340  },
    { L"Characters background (intro)", 0x164320, 0x164340  },
};

const sDescTreeNode XMMA_SNES_PSYLOCKE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_PSYLOCKE_PALETTES, ARRAYSIZE(XMMA_SNES_PSYLOCKE_PALETTES) },
};

const sDescTreeNode XMMA_SNES_CYCLOPS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_CYCLOPS_PALETTES, ARRAYSIZE(XMMA_SNES_CYCLOPS_PALETTES) },
};

const sDescTreeNode XMMA_SNES_WOLVERINE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_WOLVERINE_PALETTES, ARRAYSIZE(XMMA_SNES_WOLVERINE_PALETTES) },
};

const sDescTreeNode XMMA_SNES_GAMBIT_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_GAMBIT_PALETTES, ARRAYSIZE(XMMA_SNES_GAMBIT_PALETTES) },
};

const sDescTreeNode XMMA_SNES_BEAST_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_BEAST_PALETTES, ARRAYSIZE(XMMA_SNES_BEAST_PALETTES) },
};

const sDescTreeNode XMMA_SNES_SENTINEL_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_SENTINEL_PALETTES, ARRAYSIZE(XMMA_SNES_SENTINEL_PALETTES) },
};

const sDescTreeNode XMMA_SNES_APOCALYPSE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_APOCALYPSE_PALETTES, ARRAYSIZE(XMMA_SNES_APOCALYPSE_PALETTES) },
};

const sDescTreeNode XMMA_SNES_TUSK_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_TUSK_PALETTES, ARRAYSIZE(XMMA_SNES_TUSK_PALETTES) },
};

const sDescTreeNode XMMA_SNES_JUGGERNAUT_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_JUGGERNAUT_PALETTES, ARRAYSIZE(XMMA_SNES_JUGGERNAUT_PALETTES) },
};

const sDescTreeNode XMMA_SNES_OMEGARED_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_OMEGARED_PALETTES, ARRAYSIZE(XMMA_SNES_OMEGARED_PALETTES) },
};

const sDescTreeNode XMMA_SNES_EXODUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_EXODUS_PALETTES, ARRAYSIZE(XMMA_SNES_EXODUS_PALETTES) },
};

const sDescTreeNode XMMA_SNES_MAGNETO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_MAGNETO_PALETTES, ARRAYSIZE(XMMA_SNES_MAGNETO_PALETTES) },
};

const sDescTreeNode XMMA_SNES_XAVIER_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_XAVIER_PALETTES, ARRAYSIZE(XMMA_SNES_XAVIER_PALETTES) },
};

const sDescTreeNode XMMA_SNES_BONUS_COLLECTION[] =
{
    { L"Enemies", DESC_NODETYPE_TREE, (void*)XMMA_SNES_BONUS_ENEMY_PALETTES, ARRAYSIZE(XMMA_SNES_BONUS_ENEMY_PALETTES) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_BONUS_BONUS_PALETTES, ARRAYSIZE(XMMA_SNES_BONUS_BONUS_PALETTES) },
};

const sDescTreeNode XMMA_SNES_UNITS[] =
{
    { L"Psylocke", DESC_NODETYPE_TREE, (void*)XMMA_SNES_PSYLOCKE_COLLECTION, ARRAYSIZE(XMMA_SNES_PSYLOCKE_COLLECTION) },
    { L"Cyclops", DESC_NODETYPE_TREE, (void*)XMMA_SNES_CYCLOPS_COLLECTION, ARRAYSIZE(XMMA_SNES_CYCLOPS_COLLECTION) },
    { L"Wolverine", DESC_NODETYPE_TREE, (void*)XMMA_SNES_WOLVERINE_COLLECTION, ARRAYSIZE(XMMA_SNES_WOLVERINE_COLLECTION) },
    { L"Gambit", DESC_NODETYPE_TREE, (void*)XMMA_SNES_GAMBIT_COLLECTION, ARRAYSIZE(XMMA_SNES_GAMBIT_COLLECTION) },
    { L"Beast", DESC_NODETYPE_TREE, (void*)XMMA_SNES_BEAST_COLLECTION, ARRAYSIZE(XMMA_SNES_BEAST_COLLECTION) },
    { L"Sentinel", DESC_NODETYPE_TREE, (void*)XMMA_SNES_SENTINEL_COLLECTION, ARRAYSIZE(XMMA_SNES_SENTINEL_COLLECTION) },
    { L"Apocalypse", DESC_NODETYPE_TREE, (void*)XMMA_SNES_APOCALYPSE_COLLECTION, ARRAYSIZE(XMMA_SNES_APOCALYPSE_COLLECTION) },
    { L"Tusk", DESC_NODETYPE_TREE, (void*)XMMA_SNES_TUSK_COLLECTION, ARRAYSIZE(XMMA_SNES_TUSK_COLLECTION) },
    { L"Juggernaut", DESC_NODETYPE_TREE, (void*)XMMA_SNES_JUGGERNAUT_COLLECTION, ARRAYSIZE(XMMA_SNES_JUGGERNAUT_COLLECTION) },
    { L"Omega Red", DESC_NODETYPE_TREE, (void*)XMMA_SNES_OMEGARED_COLLECTION, ARRAYSIZE(XMMA_SNES_OMEGARED_COLLECTION) },
    { L"Exodus", DESC_NODETYPE_TREE, (void*)XMMA_SNES_EXODUS_COLLECTION, ARRAYSIZE(XMMA_SNES_EXODUS_COLLECTION) },
    { L"Magneto", DESC_NODETYPE_TREE, (void*)XMMA_SNES_MAGNETO_COLLECTION, ARRAYSIZE(XMMA_SNES_MAGNETO_COLLECTION) },
    { L"Xavier", DESC_NODETYPE_TREE, (void*)XMMA_SNES_XAVIER_COLLECTION, ARRAYSIZE(XMMA_SNES_XAVIER_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)XMMA_SNES_BONUS_COLLECTION, ARRAYSIZE(XMMA_SNES_BONUS_COLLECTION) },
};

constexpr auto XMMA_SNES_NUMUNIT = ARRAYSIZE(XMMA_SNES_UNITS);

#define XMMA_SNES_EXTRALOC XMMA_SNES_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef XMMA_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
