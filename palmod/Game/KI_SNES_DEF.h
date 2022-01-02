#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to KI_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<UINT16> KI_SNES_IMGIDS_USED =
{
    indexKISprites_Cinder,              // 0x6E
    indexKISprites_Eyedol,              // 0x6F
    indexKISprites_Fulgore,             // 0x70
    indexKISprites_Glacius,             // 0x71
    indexKISprites_Jago,                // 0x72
    indexKISprites_Orchid,              // 0x73
    indexKISprites_Riptor,              // 0x74
    indexKISprites_Sabrewulf,           // 0x75
    indexKISprites_Spinal,              // 0x76
    indexKISprites_Thunder,             // 0x77
    indexKISprites_TJCombo,             // 0x78
    indexKISprites_Bonus,               // 0x79
};

const sGame_PaletteDataset KI_SNES_Jago_PALETTES[] =
{
    { L"Jago 1", 0x1949, 0x1969, indexKISprites_Jago },
    { L"Jago 2", 0x1969, 0x1989, indexKISprites_Jago },
    { L"Jago 3", 0x1989, 0x19A9, indexKISprites_Jago },
    { L"Jago 4", 0x19A9, 0x19C9, indexKISprites_Jago },
    { L"Jago 5", 0x19C9, 0x19E9, indexKISprites_Jago },
    { L"Jago 6", 0x19E9, 0x1A09, indexKISprites_Jago },
    { L"Jago 7", 0x1A09, 0x1A29, indexKISprites_Jago },
    { L"Jago 8", 0x1A29, 0x1A49, indexKISprites_Jago },
};

const sGame_PaletteDataset KI_SNES_Combo_PALETTES[] =
{
    { L"Combo 1", 0x1A49, 0x1A69, indexKISprites_TJCombo },
    { L"Combo 2", 0x1A69, 0x1A89, indexKISprites_TJCombo },
    { L"Combo 3", 0x1A89, 0x1AA9, indexKISprites_TJCombo },
    { L"Combo 4", 0x1AA9, 0x1AC9, indexKISprites_TJCombo },
    { L"Combo 5", 0x1AC9, 0x1AE9, indexKISprites_TJCombo },
    { L"Combo 6", 0x1AE9, 0x1B09, indexKISprites_TJCombo },
    { L"Combo 7", 0x1B09, 0x1B29, indexKISprites_TJCombo },
    { L"Combo 8", 0x1B29, 0x1B49, indexKISprites_TJCombo },
};

const sGame_PaletteDataset KI_SNES_Spinal_PALETTES[] =
{
    { L"Spinal 1", 0x1B49, 0x1B69, indexKISprites_Spinal },
    { L"Spinal 2", 0x1B69, 0x1B89, indexKISprites_Spinal },
    { L"Spinal 3", 0x1B89, 0x1BA9, indexKISprites_Spinal },
    { L"Spinal 4", 0x1BA9, 0x1BC9, indexKISprites_Spinal },
    { L"Spinal 5", 0x1BC9, 0x1BE9, indexKISprites_Spinal },
    { L"Spinal 6", 0x1BE9, 0x1C09, indexKISprites_Spinal },
    { L"Spinal 7", 0x1C09, 0x1C29, indexKISprites_Spinal },
    { L"Spinal 8", 0x1C29, 0x1C49, indexKISprites_Spinal },
};

const sGame_PaletteDataset KI_SNES_Thunder_PALETTES[] =
{
    { L"Thunder 1", 0x1C49, 0x1C69, indexKISprites_Thunder },
    { L"Thunder 2", 0x1C69, 0x1C89, indexKISprites_Thunder },
    { L"Thunder 3", 0x1C89, 0x1CA9, indexKISprites_Thunder },
    { L"Thunder 4", 0x1CA9, 0x1CC9, indexKISprites_Thunder },
    { L"Thunder 5", 0x1CC9, 0x1CE9, indexKISprites_Thunder },
    { L"Thunder 6", 0x1CE9, 0x1D09, indexKISprites_Thunder },
    { L"Thunder 7", 0x1D09, 0x1D29, indexKISprites_Thunder },
    { L"Thunder 8", 0x1D29, 0x1D49, indexKISprites_Thunder },
};

const sGame_PaletteDataset KI_SNES_Glacius_PALETTES[] =
{
    { L"Glacius 1", 0x1D49, 0x1D69, indexKISprites_Glacius },
    { L"Glacius 2", 0x1D69, 0x1D89, indexKISprites_Glacius },
    { L"Glacius 3", 0x1D89, 0x1DA9, indexKISprites_Glacius },
    { L"Glacius 4", 0x1DA9, 0x1DC9, indexKISprites_Glacius },
    { L"Glacius 5", 0x1DC9, 0x1DE9, indexKISprites_Glacius },
    { L"Glacius 6", 0x1DE9, 0x1E09, indexKISprites_Glacius },
    { L"Glacius 7", 0x1E09, 0x1E29, indexKISprites_Glacius },
    { L"Glacius 8", 0x1E29, 0x1E49, indexKISprites_Glacius },
};

const sGame_PaletteDataset KI_SNES_Fulgore_PALETTES[] =
{
    { L"Fulgore 1", 0x1E49, 0x1E69, indexKISprites_Fulgore },
    { L"Fulgore 2", 0x1E69, 0x1E89, indexKISprites_Fulgore },
    { L"Fulgore 3", 0x1E89, 0x1EA9, indexKISprites_Fulgore },
    { L"Fulgore 4", 0x1EA9, 0x1EC9, indexKISprites_Fulgore },
    { L"Fulgore 5", 0x1EC9, 0x1EE9, indexKISprites_Fulgore },
    { L"Fulgore 6", 0x1EE9, 0x1F09, indexKISprites_Fulgore },
    { L"Fulgore 7", 0x1F09, 0x1F29, indexKISprites_Fulgore },
    { L"Fulgore 8", 0x1F29, 0x1F49, indexKISprites_Fulgore },
};

const sGame_PaletteDataset KI_SNES_Cinder_PALETTES[] =
{
    { L"Cinder 1", 0x1F49, 0x1F69, indexKISprites_Cinder },
    { L"Cinder 2", 0x1F69, 0x1F89, indexKISprites_Cinder },
    { L"Cinder 3", 0x1F89, 0x1FA9, indexKISprites_Cinder },
    { L"Cinder 4", 0x1FA9, 0x1FC9, indexKISprites_Cinder },
    { L"Cinder 5", 0x1FC9, 0x1FE9, indexKISprites_Cinder },
    { L"Cinder 6", 0x1FE9, 0x2009, indexKISprites_Cinder },
    { L"Cinder 7", 0x2009, 0x2029, indexKISprites_Cinder },
    { L"Cinder 8", 0x2029, 0x2049, indexKISprites_Cinder },
};

const sGame_PaletteDataset KI_SNES_Sabrewulf_PALETTES[] =
{
    { L"Sabrewulf 1", 0x2049, 0x2069, indexKISprites_Sabrewulf },
    { L"Sabrewulf 2", 0x2069, 0x2089, indexKISprites_Sabrewulf },
    { L"Sabrewulf 3", 0x2089, 0x20A9, indexKISprites_Sabrewulf },
    { L"Sabrewulf 4", 0x20A9, 0x20C9, indexKISprites_Sabrewulf },
    { L"Sabrewulf 5", 0x20C9, 0x20E9, indexKISprites_Sabrewulf },
    { L"Sabrewulf 6", 0x20E9, 0x2109, indexKISprites_Sabrewulf },
    { L"Sabrewulf 7", 0x2109, 0x2129, indexKISprites_Sabrewulf },
    { L"Sabrewulf 8", 0x2129, 0x2149, indexKISprites_Sabrewulf },
};

const sGame_PaletteDataset KI_SNES_Orchid_PALETTES[] =
{
    { L"Orchid 1", 0x2149, 0x2169, indexKISprites_Orchid },
    { L"Orchid 2", 0x2169, 0x2189, indexKISprites_Orchid },
    { L"Orchid 3", 0x2189, 0x21A9, indexKISprites_Orchid },
    { L"Orchid 4", 0x21A9, 0x21C9, indexKISprites_Orchid },
    { L"Orchid 5", 0x21C9, 0x21E9, indexKISprites_Orchid },
    { L"Orchid 6", 0x21E9, 0x2209, indexKISprites_Orchid },
    { L"Orchid 7", 0x2209, 0x2229, indexKISprites_Orchid },
    { L"Orchid 8", 0x2229, 0x2249, indexKISprites_Orchid },
};

const sGame_PaletteDataset KI_SNES_Riptor_PALETTES[] =
{
    { L"Riptor 1", 0x2249, 0x2269, indexKISprites_Riptor },
    { L"Riptor 2", 0x2269, 0x2289, indexKISprites_Riptor },
    { L"Riptor 3", 0x2289, 0x22A9, indexKISprites_Riptor },
    { L"Riptor 4", 0x22A9, 0x22C9, indexKISprites_Riptor },
    { L"Riptor 5", 0x22C9, 0x22E9, indexKISprites_Riptor },
    { L"Riptor 6", 0x22E9, 0x2309, indexKISprites_Riptor },
    { L"Riptor 7", 0x2309, 0x2329, indexKISprites_Riptor },
    { L"Riptor 8", 0x2329, 0x2349, indexKISprites_Riptor },
};

const sGame_PaletteDataset KI_SNES_Eyedol_PALETTES[] =
{
    { L"Eyedol 1", 0x2349, 0x2369, indexKISprites_Eyedol },
    { L"Eyedol 2", 0x2369, 0x2389, indexKISprites_Eyedol },
};

const sGame_PaletteDataset KI_SNES_Jago_Portraits[] =
{
    { L"Jago 1", 0x3e06 - 0x08, 0x3e86 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 2", 0x3e86 - 0x08, 0x3f06 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 3", 0x3f06 - 0x08, 0x3f86 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 4", 0x3f86 - 0x08, 0x4006 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 5", 0x4006 - 0x08, 0x4086 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 6", 0x4086 - 0x08, 0x4106 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 7", 0x4106 - 0x08, 0x4186 - 0x08, indexKISprites_Jago, 0x40 },
    { L"Jago 8", 0x4186 - 0x08, 0x4206 - 0x08, indexKISprites_Jago, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Combo_Portraits[] =
{
    { L"Combo 1", 0x4206 - 0x08, 0x4286 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 2", 0x4286 - 0x08, 0x4306 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 3", 0x4306 - 0x08, 0x4386 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 4", 0x4386 - 0x08, 0x4406 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 5", 0x4406 - 0x08, 0x4486 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 6", 0x4486 - 0x08, 0x4506 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 7", 0x4506 - 0x08, 0x4586 - 0x08, indexKISprites_TJCombo, 0x40 },
    { L"Combo 8", 0x4586 - 0x08, 0x4606 - 0x08, indexKISprites_TJCombo, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Spinal_Portraits[] =
{
    { L"Spinal 1", 0x4606 - 0x08, 0x4646 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 2", 0x4686 - 0x08, 0x46c6 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 3", 0x4706 - 0x08, 0x4746 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 4", 0x4786 - 0x08, 0x47c6 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 5", 0x4806 - 0x08, 0x4846 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 6", 0x4886 - 0x08, 0x48c6 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 7", 0x4906 - 0x08, 0x4946 - 0x08, indexKISprites_Spinal, 0x40 },
    { L"Spinal 8", 0x4986 - 0x08, 0x49c6 - 0x08, indexKISprites_Spinal, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Thunder_Portraits[] =
{
    { L"Thunder 1", 0x4a06 - 0x08, 0x4a86 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 2", 0x4a86 - 0x08, 0x4b06 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 3", 0x4b06 - 0x08, 0x4b86 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 4", 0x4b86 - 0x08, 0x4c06 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 5", 0x4c06 - 0x08, 0x4c86 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 6", 0x4c86 - 0x08, 0x4d06 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 7", 0x4d06 - 0x08, 0x4d86 - 0x08, indexKISprites_Thunder, 0x40 },
    { L"Thunder 8", 0x4d86 - 0x08, 0x4e06 - 0x08, indexKISprites_Thunder, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Glacius_Portraits[] =
{
    { L"Glacius 1", 0x4e06 - 0x08, 0x4e86 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 2", 0x4e86 - 0x08, 0x4f06 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 3", 0x4f06 - 0x08, 0x4f86 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 4", 0x4f86 - 0x08, 0x5006 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 5", 0x5006 - 0x08, 0x5086 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 6", 0x5086 - 0x08, 0x5106 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 7", 0x5106 - 0x08, 0x5186 - 0x08, indexKISprites_Glacius, 0x40 },
    { L"Glacius 8", 0x5186 - 0x08, 0x5206 - 0x08, indexKISprites_Glacius, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Fulgore_Portraits[] =
{
    { L"Fulgore 1", 0x5206 - 0x08, 0x5266 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 2", 0x5286 - 0x08, 0x52e6 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 3", 0x5306 - 0x08, 0x5366 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 4", 0x5386 - 0x08, 0x53e6 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 5", 0x5406 - 0x08, 0x5466 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 6", 0x5486 - 0x08, 0x54e6 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 7", 0x5506 - 0x08, 0x5566 - 0x08, indexKISprites_Fulgore, 0x40 },
    { L"Fulgore 8", 0x5586 - 0x08, 0x55e6 - 0x08, indexKISprites_Fulgore, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Cinder_Portraits[] =
{
    { L"Cinder 1", 0x5606 - 0x08, 0x5686 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 2", 0x5686 - 0x08, 0x5706 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 3", 0x5706 - 0x08, 0x5786 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 4", 0x5786 - 0x08, 0x5806 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 5", 0x5806 - 0x08, 0x5886 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 6", 0x5886 - 0x08, 0x5906 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 7", 0x5906 - 0x08, 0x5986 - 0x08, indexKISprites_Cinder, 0x40 },
    { L"Cinder 8", 0x5986 - 0x08, 0x5a06 - 0x08, indexKISprites_Cinder, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Sabrewulf_Portraits[] =
{
    { L"Sabrewulf 1", 0x5a06 - 0x08, 0x5a86 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 2", 0x5a86 - 0x08, 0x5b06 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 3", 0x5b06 - 0x08, 0x5b86 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 4", 0x5b86 - 0x08, 0x5c06 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 5", 0x5c06 - 0x08, 0x5c86 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 6", 0x5c86 - 0x08, 0x5d06 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 7", 0x5d06 - 0x08, 0x5d86 - 0x08, indexKISprites_Sabrewulf, 0x40 },
    { L"Sabrewulf 8", 0x5d86 - 0x08, 0x5e06 - 0x08, indexKISprites_Sabrewulf, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Orchid_Portraits[] =
{
    { L"Orchid 1", 0x5e06 - 0x08, 0x5e86 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 2", 0x5e86 - 0x08, 0x5f06 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 3", 0x5f06 - 0x08, 0x5f86 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 4", 0x5f86 - 0x08, 0x6006 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 5", 0x6006 - 0x08, 0x6086 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 6", 0x6086 - 0x08, 0x6106 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 7", 0x6106 - 0x08, 0x6186 - 0x08, indexKISprites_Orchid, 0x40 },
    { L"Orchid 8", 0x6186 - 0x08, 0x6206 - 0x08, indexKISprites_Orchid, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Riptor_Portraits[] =
{
    { L"Riptor 1", 0x6206 - 0x08, 0x6286 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 2", 0x6286 - 0x08, 0x6306 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 3", 0x6306 - 0x08, 0x6386 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 4", 0x6386 - 0x08, 0x6406 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 5", 0x6406 - 0x08, 0x6486 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 6", 0x6486 - 0x08, 0x6506 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 7", 0x6506 - 0x08, 0x6586 - 0x08, indexKISprites_Riptor, 0x40 },
    { L"Riptor 8", 0x6586 - 0x08, 0x6606 - 0x08, indexKISprites_Riptor, 0x40 },
};

const sGame_PaletteDataset KI_SNES_Eyedol_Portraits[] =
{
    { L"Eyedol 1", 0x6606 - 0x08, 0x6626 - 0x08, indexKISprites_Eyedol, 0x40 },
    { L"Eyedol 2", 0x6626 - 0x08, 0x6646 - 0x08, indexKISprites_Eyedol, 0x40 },
};

const sGame_PaletteDataset KI_SNES_BONUS_WinScreenBackgrounds[] =
{
    { L"Jago", 0x3ca6 - 0x08, 0x3cc6 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Combo", 0x3cc6 - 0x08, 0x3ce6 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Spinal", 0x3ce6 - 0x08, 0x3d06 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Thunder", 0x3d06 - 0x08, 0x3d26 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Glacius", 0x3d26 - 0x08, 0x3d46 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Fulgore", 0x3d46 - 0x08, 0x3d66 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Cinder", 0x3d66 - 0x08, 0x3d86 - 0x08, indexKISprites_Bonus, 0x00 },
    { L"Sabrewulf", 0x3d86 - 0x08, 0x3da6 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Orchid", 0x3da6 - 0x08, 0x3dc6 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Riptor", 0x3dc6 - 0x08, 0x3de6 - 0x08, indexKISprites_Bonus, 0x03 },
    { L"Eyedol", 0x3de6 - 0x08, 0x3e06 - 0x08, indexKISprites_Bonus, 0x03 },
};

const sGame_PaletteDataset KI_SNES_BONUS_CharactersSpecials[] =
{
    { L"Green Projectiles", 0x2558 - 0x08, 0x2566 - 0x08 },
    { L"Jago Yellow Endokuken", 0x258a - 0x08, 0x2598 - 0x08 },

    { L"Jago Car", 0x272a - 0x08, 0x274a - 0x08 },
    { L"Spinal Skeleport", 0x5566 - 0x08, 0x5586 - 0x08 },
    { L"Spinal Power Devour", 0x2598 - 0x08, 0x25ac - 0x08 },

    { L"Spinal/Thunder Storm", 0x274a - 0x08, 0x2756 - 0x08 },
    { L"Thunder Pheonix", 0x2566 - 0x08, 0x2572 - 0x08 },

    { L"Fulgore Reflect", 0x52e6 - 0x08, 0x5306 - 0x08, indexKISprites_Fulgore, 0x01 },
    { L"Fulgore Laser Storm Spark", 0x257e - 0x08, 0x258a - 0x08, indexKISprites_Fulgore, 0x02 },

    { L"Orchid Lasaken", 0x2572 - 0x08, 0x257e - 0x08 },
    { L"Orchid Fire Cat", 0x2848 - 0x08, 0x285a - 0x08 },
    { L"Orchid Frog", 0x285a - 0x08, 0x287a - 0x08 },
    { L"Orchid Eyes", 0x271e - 0x08, 0x272a - 0x08 },
    { L"Hitsparks", 0x25b8 - 0x08, 0x25bc - 0x08 },
    { L"Red Blood", 0x25c0 - 0x08, 0x25ce - 0x08 },
    { L"Purple Blood", 0x25ce - 0x08, 0x25dc - 0x08 },
    { L"Green Blood", 0x25dc - 0x08, 0x25ea - 0x08 },
    { L"Blue Blood", 0x25ea - 0x08, 0x25f8 - 0x08 },
};

const sGame_PaletteDataset KI_SNES_BONUS_GlaciusEffects[] =
{
    { L"Freezed Jago", 0x4846 - 0x08, 0x4866 - 0x08, indexKISprites_Jago, 0x00 },
    { L"Freezed Combo/Fulgore", 0x4866 - 0x08, 0x4886 - 0x08, indexKISprites_TJCombo, 0x00 },
    { L"Freezed Spinal", 0x4666 - 0x08, 0x4686 - 0x08, indexKISprites_Spinal, 0x00 },
    { L"Freezed Thunder", 0x46c6 - 0x08, 0x46e6 - 0x08, indexKISprites_Thunder, 0x00 },
    { L"Freezed Glacius", 0x48c6 - 0x08, 0x48e6 - 0x08, indexKISprites_Glacius, 0x00 },
    { L"Freezed Cinder", 0x48e6 - 0x08, 0x4906 - 0x08, indexKISprites_Cinder, 0x00 },
    { L"Freezed Sabrewulf", 0x4946 - 0x08, 0x4966 - 0x08, indexKISprites_Sabrewulf, 0x00 },
    { L"Freezed Orchid", 0x4966 - 0x08, 0x4986 - 0x08, indexKISprites_Orchid, 0x00 },
    { L"Freezed Riptor", 0x49c6 - 0x08, 0x49e6 - 0x08, indexKISprites_Riptor, 0x00 },
};

const sGame_PaletteDataset KI_SNES_BONUS_CinderEffects[] =
{
    { L"Burned Jago", 0x49e6 - 0x08, 0x4a06 - 0x08, indexKISprites_Jago, 0x00 },
    { L"Burned Combo", 0x53e6 - 0x08, 0x5406 - 0x08, indexKISprites_TJCombo, 0x00 },
    { L"Burned Spinal/Fulgore", 0x5466 - 0x08, 0x5486 - 0x08, indexKISprites_Spinal, 0x00 },
    { L"Burned Thunder", 0x54e6 - 0x08, 0x5506 - 0x08, indexKISprites_Thunder, 0x00 },
    { L"Burned Glacius", 0x27a8 - 0x08, 0x27c8 - 0x08, indexKISprites_Glacius, 0x00 },
    { L"Burned Cinder", 0x27c8 - 0x08, 0x27e8 - 0x08, indexKISprites_Cinder, 0x00 },
    { L"Burned Sabrewulf", 0x27e8 - 0x08, 0x2808 - 0x08, indexKISprites_Sabrewulf, 0x00 },
    { L"Burned Orchid", 0x2808 - 0x08, 0x2828 - 0x08, indexKISprites_Orchid, 0x00 },
    { L"Burned Riptor", 0x2828 - 0x08, 0x2848 - 0x08, indexKISprites_Riptor, 0x00 },
    { L"Meltdown", 0x4646 - 0x08, 0x4666 - 0x08, indexKISprites_Cinder, 0x01 },
};

const sGame_PaletteDataset KI_SNES_BONUS_SpinalEffects[] =
{
    { L"Morph Jago", 0x2391 - 0x08, 0x23b1 - 0x08, indexKISprites_Jago, 0x00 },
    { L"Morph Combo", 0x23b1 - 0x08, 0x23d1 - 0x08, indexKISprites_TJCombo, 0x00 },
    { L"Morph Spinal", 0x23d1 - 0x08, 0x23f1 - 0x08, indexKISprites_Spinal, 0x00 },
    { L"Morph Thunder", 0x23f1 - 0x08, 0x2411 - 0x08, indexKISprites_Thunder, 0x00 },
    { L"Morph Glacius", 0x2411 - 0x08, 0x2431 - 0x08, indexKISprites_Glacius, 0x00 },
    { L"Morph Fulgore", 0x2431 - 0x08, 0x2451 - 0x08, indexKISprites_Fulgore, 0x00 },
    { L"Morph Cinder", 0x2451 - 0x08, 0x2471 - 0x08, indexKISprites_Cinder, 0x00 },
    { L"Morph Sabrewulf", 0x2471 - 0x08, 0x2491 - 0x08, indexKISprites_Sabrewulf, 0x00 },
    { L"Morph Orchid", 0x2491 - 0x08, 0x24b1 - 0x08, indexKISprites_Orchid, 0x00 },
    { L"Morph Riptor", 0x24b1 - 0x08, 0x24d1 - 0x08, indexKISprites_Riptor, 0x00 },
    { L"Morph Eyedol", 0x24d1 - 0x08, 0x24f1 - 0x08, indexKISprites_Eyedol, 0x00 },
};

const sGame_PaletteDataset KI_SNES_BONUS_Palettes[] =
{
    { L"Info Portraits", 0x359c - 0x08, 0x36dc - 0x08, indexKISprites_Bonus, 0x01 },
    { L"Select Icons", 0x3bbe - 0x08, 0x3c5e - 0x08, indexKISprites_Bonus, 0x02 },
};

const sDescTreeNode KI_SNES_JAGO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Jago_PALETTES, ARRAYSIZE(KI_SNES_Jago_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Jago_Portraits, ARRAYSIZE(KI_SNES_Jago_Portraits) },
};

const sDescTreeNode KI_SNES_COMBO_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Combo_PALETTES, ARRAYSIZE(KI_SNES_Combo_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Combo_Portraits, ARRAYSIZE(KI_SNES_Combo_Portraits) },
};

const sDescTreeNode KI_SNES_SPINAL_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Spinal_PALETTES, ARRAYSIZE(KI_SNES_Spinal_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Spinal_Portraits, ARRAYSIZE(KI_SNES_Spinal_Portraits) },
};

const sDescTreeNode KI_SNES_THUNDER_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Thunder_PALETTES, ARRAYSIZE(KI_SNES_Thunder_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Thunder_Portraits, ARRAYSIZE(KI_SNES_Thunder_Portraits) },
};

const sDescTreeNode KI_SNES_GLACIUS_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Glacius_PALETTES, ARRAYSIZE(KI_SNES_Glacius_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Glacius_Portraits, ARRAYSIZE(KI_SNES_Glacius_Portraits) },
};

const sDescTreeNode KI_SNES_FULGORE_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Fulgore_PALETTES, ARRAYSIZE(KI_SNES_Fulgore_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Fulgore_Portraits, ARRAYSIZE(KI_SNES_Fulgore_Portraits) },
};

const sDescTreeNode KI_SNES_CINDER_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Cinder_PALETTES, ARRAYSIZE(KI_SNES_Cinder_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Cinder_Portraits, ARRAYSIZE(KI_SNES_Cinder_Portraits) },
};

const sDescTreeNode KI_SNES_SABREWULF_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Sabrewulf_PALETTES, ARRAYSIZE(KI_SNES_Sabrewulf_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Sabrewulf_Portraits, ARRAYSIZE(KI_SNES_Sabrewulf_Portraits) },
};

const sDescTreeNode KI_SNES_ORCHID_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Orchid_PALETTES, ARRAYSIZE(KI_SNES_Orchid_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Orchid_Portraits, ARRAYSIZE(KI_SNES_Orchid_Portraits) },
};

const sDescTreeNode KI_SNES_RIPTOR_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Riptor_PALETTES, ARRAYSIZE(KI_SNES_Riptor_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Riptor_Portraits, ARRAYSIZE(KI_SNES_Riptor_Portraits) },
};

const sDescTreeNode KI_SNES_EYEDOL_COLLECTION[] =
{
    { L"Main", DESC_NODETYPE_TREE, (void*)KI_SNES_Eyedol_PALETTES, ARRAYSIZE(KI_SNES_Eyedol_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KI_SNES_Eyedol_Portraits, ARRAYSIZE(KI_SNES_Eyedol_Portraits) },
};

const sDescTreeNode KI_SNES_BONUS_COLLECTION[] =
{
    { L"Win Screen Backgrounds", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_WinScreenBackgrounds, ARRAYSIZE(KI_SNES_BONUS_WinScreenBackgrounds) },
    { L"Character Specials", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_CharactersSpecials, ARRAYSIZE(KI_SNES_BONUS_CharactersSpecials) },
    { L"Glacius Effects", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_GlaciusEffects, ARRAYSIZE(KI_SNES_BONUS_GlaciusEffects) },
    { L"Cinder Effects", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_CinderEffects, ARRAYSIZE(KI_SNES_BONUS_CinderEffects) },
    { L"Spinal Effects", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_SpinalEffects, ARRAYSIZE(KI_SNES_BONUS_SpinalEffects) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_Palettes, ARRAYSIZE(KI_SNES_BONUS_Palettes) },
};

const sDescTreeNode KI_SNES_UNITS[] =
{
    { L"Jago", DESC_NODETYPE_TREE, (void*)KI_SNES_JAGO_COLLECTION, ARRAYSIZE(KI_SNES_JAGO_COLLECTION) },
    { L"Combo", DESC_NODETYPE_TREE, (void*)KI_SNES_COMBO_COLLECTION, ARRAYSIZE(KI_SNES_COMBO_COLLECTION) },
    { L"Spinal", DESC_NODETYPE_TREE, (void*)KI_SNES_SPINAL_COLLECTION, ARRAYSIZE(KI_SNES_SPINAL_COLLECTION) },
    { L"Thunder", DESC_NODETYPE_TREE, (void*)KI_SNES_THUNDER_COLLECTION, ARRAYSIZE(KI_SNES_THUNDER_COLLECTION) },
    { L"Glacius", DESC_NODETYPE_TREE, (void*)KI_SNES_GLACIUS_COLLECTION, ARRAYSIZE(KI_SNES_GLACIUS_COLLECTION) },
    { L"Fulgore", DESC_NODETYPE_TREE, (void*)KI_SNES_FULGORE_COLLECTION, ARRAYSIZE(KI_SNES_FULGORE_COLLECTION) },
    { L"Cinder", DESC_NODETYPE_TREE, (void*)KI_SNES_CINDER_COLLECTION, ARRAYSIZE(KI_SNES_CINDER_COLLECTION) },
    { L"Sabrewulf", DESC_NODETYPE_TREE, (void*)KI_SNES_SABREWULF_COLLECTION, ARRAYSIZE(KI_SNES_SABREWULF_COLLECTION) },
    { L"Orchid", DESC_NODETYPE_TREE, (void*)KI_SNES_ORCHID_COLLECTION, ARRAYSIZE(KI_SNES_ORCHID_COLLECTION) },
    { L"Riptor", DESC_NODETYPE_TREE, (void*)KI_SNES_RIPTOR_COLLECTION, ARRAYSIZE(KI_SNES_RIPTOR_COLLECTION) },
    { L"Eyedol", DESC_NODETYPE_TREE, (void*)KI_SNES_EYEDOL_COLLECTION, ARRAYSIZE(KI_SNES_EYEDOL_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)KI_SNES_BONUS_COLLECTION, ARRAYSIZE(KI_SNES_BONUS_COLLECTION) },
};

constexpr auto KI_SNES_NUMUNIT = ARRAYSIZE(KI_SNES_UNITS);

constexpr auto KI_SNES_EXTRALOC = KI_SNES_NUMUNIT;

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef KI_SNES_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
