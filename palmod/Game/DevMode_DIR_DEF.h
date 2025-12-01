#pragma once

const sGame_PaletteDataset DevMode_DIR_STUB_PALETTE[] =
{
    { L"Configure your Extras file and then reload!", 0x0, 0x20 },
};

const sDescTreeNode DevMode_DIR_STUB_COLLECTION[] =
{
    { L"Configure your Extras file", DESC_NODETYPE_TREE, (void*)DevMode_DIR_STUB_PALETTE, ARRAYSIZE(DevMode_DIR_STUB_PALETTE) },
};

const sDescTreeNode DevMode_DIR_UNITS[] =
{
    { L"Test only - Don't edit!", DESC_NODETYPE_TREE, (void*)DevMode_DIR_STUB_COLLECTION, ARRAYSIZE(DevMode_DIR_STUB_COLLECTION) },
};

const stExtraDef UNKNOWN_GAME_DIR_EXTRAS_LIST[] =
{
    // Start
    { UNIT_START_VALUE },

    { 0, L"Configure your Extras file.", 0, 0x20 },

    { INVALID_UNIT_VALUE_16 }
};
