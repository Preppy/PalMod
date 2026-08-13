#pragma once

// This is just stubbed in for now so I don't have to redo the "new game" process later

const std::vector<uint16_t> Punisher_A_IMGIDS_USED =
{
    // not much here so far
    indexCPS2Sprites_ThePunisher,           // 0x106
};

const sGame_PaletteDataset Punisher_A_Punisher_Palettes[] =
{
    // This preview looks funky on the CPS' version as the CPS' version stores the flashed
    // (inverted) palette instead of the non-flashed palette.
    { L"Frank Castle (and Flashing Palette)",   0x3ef88, 0x3efa8, indexCPS2Sprites_ThePunisher, 0x00 },
    { L"Nick Fury (Select Screen)",             0x3efa8, 0x3efc8, indexCPS2Sprites_ThePunisher, 0x01 },
    { L"Max",                                   0x3efc8, 0x3efe8, indexCPS2Sprites_ThePunisher, 0x02 },
    { L"Ruskin",                                0x3efe8, 0x3f008, indexCPS2Sprites_ThePunisher, 0x03 },
    { L"Nick Fury",                             0x3f008, 0x3f028, indexCPS2Sprites_ThePunisher, 0x04 },
        { L"?Leon",                             0x3f028, 0x3f048 },
        { L"?Yan Lee, Jack",                    0x3f048, 0x3f068 },
        { L"?Hawke, Jagger",                    0x3f068, 0x3f088 },
        { L"?Red Lamp",                         0x3f088, 0x3f0a8 },
        { L"?Saxon",                            0x3f0a8, 0x3f0c8 },
    { L"Jigsaw, Girl Running",                  0x3f0c8, 0x3f0e8, indexCPS2Sprites_ThePunisher, 0x05 },
    { L"Byron Hannigan, Luna",                  0x3f0e8, 0x3f108, indexCPS2Sprites_ThePunisher, 0x06 },
        { L"?Luis Allegre",                     0x3f108, 0x3f128 },
        { L"?Matt Skinner, Midori",             0x3f128, 0x3f148 },
        { L"?Leon Kolsky",                      0x3f148, 0x3f168 },
    { L"Bruno Costa, Tires, Scully?, Bogart?",  0x3f168, 0x3f188, indexCPS2Sprites_ThePunisher, 0x07 },
        { L"?Cool",                             0x3f188, 0x3f1a8 },
        { L"?Trench",                           0x3f1a8, 0x3f1c8 },
        { L"?Buddy, Wow Cat?",                  0x3f1c8, 0x3f1e8 },
    { L"Gaullee, Oil Drum",                     0x3f1e8, 0x3f208, indexCPS2Sprites_ThePunisher, 0x08 },
    { L"Level 1 Stuff",                         0x3f228, 0x3f248, indexCPS2Sprites_ThePunisher, 0x09 },
    { L"Guarddroid",                            0x3f6c8, 0x3f6e8, indexCPS2Sprites_ThePunisher, 0x0a, &pairNext },
    { L"Guarddroid 2",                          0x3f768, 0x3f788, indexCPS2Sprites_ThePunisher, 0x0b },
    { L"Frank / Nick",                          0x3f808, 0x3f828, indexCPS2Sprites_ThePunisher, 0x0c },
    { L"Red, Pretty Boy (Red)?",                0x3f8e8, 0x3f908, indexCPS2Sprites_ThePunisher, 0x0d },
    { L"Gus, Midori?",                          0x3f928, 0x3f948, indexCPS2Sprites_ThePunisher, 0x0e },
    { L"Bonebreaker, Mizuki?",                  0x3f948, 0x3f968, indexCPS2Sprites_ThePunisher, 0x0f },
    { L"Sword, Boxes, Pretty Boy (White)",      0x3f968, 0x3f988, indexCPS2Sprites_ThePunisher, 0x10 },
    //{ L"0x3f9e8 0046 army dude",                        0x3f9e8, 0x3fa08, indexCPS2Sprites_ThePunisher, 0x00 },
    //{ L"0x3fa48 0046 gun",                              0x3fa48, 0x3fa68, indexCPS2Sprites_ThePunisher, 0x00 },
    { L"BLAM!",                                 0x3fa68, 0x3fa88, indexCPS2Sprites_ThePunisher, 0x11 },
};

const sDescTreeNode Punisher_A_Punisher_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)Punisher_A_Punisher_Palettes, ARRAYSIZE(Punisher_A_Punisher_Palettes) },
};

const sDescTreeNode Punisher_A_UNITS[] =
{
    { L"The Punisher", DESC_NODETYPE_TREE, (void*)Punisher_A_Punisher_COLLECTION, ARRAYSIZE(Punisher_A_Punisher_COLLECTION) },
};
