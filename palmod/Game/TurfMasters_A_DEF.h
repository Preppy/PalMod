#pragma once

// 0x1ad730 - 0x1b96f0 palettes

const std::vector<uint16_t> TURFMASTERS_A_IMGIDS_USED =
{

};

const sGame_PaletteDataset TurfMasters_A_PALETTES[] =
{
    { L"Clubs Takeno, Adams, Stewart", 0x1ADA30, 0x1ada70 },
    { L"Clubs Spinner, Almedia, Landolt", 0x1ADAF0, 0x1adb30 },
    { L"Landolt's pants", 0x1B2670, 0x1b26b0 },

    // Support for this game is brand new.  I know at least this palette is loaded during an initial playthrough,
    // and thus it gave me the initial testing ground I needed to figure out the exact math for the color format.
    //{ L"TESTING REGION", 0x1addf0, 0x1ade30 },
};

const sDescTreeNode TurfMasters_A_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE,   (void*)TurfMasters_A_PALETTES, ARRAYSIZE(TurfMasters_A_PALETTES) },
};

const sDescTreeNode TurfMasters_A_UNITS[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)TurfMasters_A_COLLECTION, ARRAYSIZE(TurfMasters_A_COLLECTION) },
};
