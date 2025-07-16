#pragma once

// This is just stubbed in for now so I don't have to redo the "new game" process later

const std::vector<uint16_t> Punisher_A_IMGIDS_USED =
{
};

const sGame_PaletteDataset Punisher_A_Punisher_Palettes[] =
{
    { L"Frank", 0x3ef88, 0x3efa8 },
};

const sDescTreeNode Punisher_A_Punisher_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Punisher_A_Punisher_Palettes, ARRAYSIZE(Punisher_A_Punisher_Palettes) },
};

const sDescTreeNode Punisher_A_UNITS[] =
{
    { L"The Punisher", DESC_NODETYPE_TREE, (void*)Punisher_A_Punisher_COLLECTION, ARRAYSIZE(Punisher_A_Punisher_COLLECTION) },
};
