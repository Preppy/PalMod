#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to JusticeLeagueTF_SNES_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const std::vector<uint16_t> JusticeLeagueTF_SNES_IMGIDS_USED =
{
    indexJLTFSprites_Aquaman,            // 0xE6
    indexJLTFSprites_Batman,             // 0xE7
    indexJLTFSprites_Cheetah,            // 0xE8
    indexJLTFSprites_Darkseid,           // 0xE9
    indexJLTFSprites_Despero,            // 0xEA
    indexJLTFSprites_Flash,              // 0xEB
    indexJLTFSprites_GreenArrow,         // 0xEC
    indexJLTFSprites_Superman,           // 0xED
    indexJLTFSprites_WonderWoman,        // 0xEE
    indexJLTFSprites_Bonus,              // 0xEF
    indexJLTFSprites_Stages,             // 0xF0
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_SUPERMAN_PALETTES_P1[] =
{
    { L"Superman P1", 0x127FCA, 0x127FEA, indexJLTFSprites_Superman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_SUPERMAN_PALETTES_P2[] =
{
    { L"Superman P2", 0x15FFCB, 0x15FFEB, indexJLTFSprites_Superman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_WW_PALETTES_P1[] =
{
    { L"Wonder Woman P1", 0x1B86C3, 0x1B86E3, indexJLTFSprites_WonderWoman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_WW_PALETTES_P2[] =
{
    { L"Wonder Woman P2", 0x1B86E5, 0x1B8705, indexJLTFSprites_WonderWoman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_FLASH_PALETTES_P1[] =
{
    { L"The Flash P1", 0x1B874B, 0x1B876B, indexJLTFSprites_Flash, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_FLASH_PALETTES_P2[] =
{
    { L"The Flash P2", 0x1B876D, 0x1B878D, indexJLTFSprites_Flash, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_GA_PALETTES_P1[] =
{
    { L"Green Arrow P1", 0x1B87D3, 0x1B87F3, indexJLTFSprites_GreenArrow, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_GA_PALETTES_P2[] =
{
    { L"Green Arrow P2", 0x1B87F5, 0x1B8815, indexJLTFSprites_GreenArrow, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_BATMAN_PALETTES_P1[] =
{
    { L"Batman P1", 0x1B885B, 0x1B887B, indexJLTFSprites_Batman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_BATMAN_PALETTES_P2[] =
{
    { L"Batman P2", 0x1B887D, 0x1B889D, indexJLTFSprites_Batman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_AQUAMAN_PALETTES_P1[] =
{
    { L"Aquaman P1", 0x1B88E3, 0x1B8903, indexJLTFSprites_Aquaman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_AQUAMAN_PALETTES_P2[] =
{
    { L"Aquaman P2", 0x1B8905, 0x1B8925, indexJLTFSprites_Aquaman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_CHEETAH_PALETTES_P1[] =
{
    { L"Cheetah P1", 0x1B896B, 0x1B898B, indexJLTFSprites_Cheetah, 0x00  },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_CHEETAH_PALETTES_P2[] =
{
    { L"Cheetah P2", 0x1B898D, 0x1B89AD, indexJLTFSprites_Cheetah, 0x00  },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_DESPERO_PALETTES_P1[] =
{
    { L"Despero P1", 0x1B89F3, 0x1B8A13, indexJLTFSprites_Despero, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_DESPERO_PALETTES_P2[] =
{
    { L"Despero P2", 0x1B8A15, 0x1B8A35, indexJLTFSprites_Despero, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_DARKSEID_PALETTES_P1[] =
{
    { L"Darkseid P1", 0x1B8A7B, 0x1B8A9B, indexJLTFSprites_Darkseid, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_DARKSEID_PALETTES_P2[] =
{
    { L"Darkseid P2", 0x1B8A9D, 0x1B8ABD, indexJLTFSprites_Darkseid, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_SUPERMAN_PALETTES_MOVES[] =
{
    { L"Superman Freeze Breath", 0x107FBA, 0x107FDA },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_SUPERMAN_PALETTES_EFFECTS[] =
{
    { L"Superman Burned", 0x1b867F, 0x1b869f, indexJLTFSprites_Superman, 0x00 },
    { L"Superman Frozen", 0x1b86a1, 0x1b86c1, indexJLTFSprites_Superman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_WW_PALETTES_EFFECTS[] =
{
    { L"Wonder Woman Burned", 0x1B8707, 0x1b8727, indexJLTFSprites_WonderWoman, 0x00 },
    { L"Wonder Woman Frozen", 0x1b8729, 0x1b8749, indexJLTFSprites_WonderWoman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_FLASH_PALETTES_EFFECTS[] =
{
    { L"The Flash Burned", 0x1B878F, 0x1B87af, indexJLTFSprites_Flash, 0x00 },
    { L"The Flash Frozen", 0x1B87b1, 0x1B87d1, indexJLTFSprites_Flash, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_GA_PALETTES_EFFECTS[] =
{
    { L"Green Arrow Burned", 0x1B8817, 0x1B8837, indexJLTFSprites_GreenArrow, 0x00 },
    { L"Green Arrow Frozen", 0x1B8839, 0x1B8859, indexJLTFSprites_GreenArrow, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_BATMAN_PALETTES_EFFECTS[] =
{
    { L"Batman Burned", 0x1B889F, 0x1B88bf, indexJLTFSprites_Batman, 0x00 },
    { L"Batman Frozen", 0x1B88c1, 0x1B88e1, indexJLTFSprites_Batman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_AQUAMAN_PALETTES_EFFECTS[] =
{
    { L"Aquaman Burned", 0x1B8927, 0x1B8947, indexJLTFSprites_Aquaman, 0x00 },
    { L"Aquaman Frozen", 0x1B8949, 0x1B8969, indexJLTFSprites_Aquaman, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_CHEETAH_PALETTES_EFFECTS[] =
{
    { L"Cheetah Burned", 0x1B89AF, 0x1B89cf, indexJLTFSprites_Cheetah, 0x00  },
    { L"Cheetah Frozen", 0x1B89d1, 0x1B89f1, indexJLTFSprites_Cheetah, 0x00  },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_DESPERO_PALETTES_EFFECTS[] =
{
    { L"Despero Burned", 0x1B8A37, 0x1B8A57, indexJLTFSprites_Despero, 0x00 },
    { L"Despero Frozen", 0x1B8A59, 0x1B8A79, indexJLTFSprites_Despero, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_DARKSEID_PALETTES_EFFECTS[] =
{
    { L"Darkseid Burned", 0x1B8ABF, 0x1B8Adf, indexJLTFSprites_Darkseid, 0x00 },
    { L"Darkseid Frozen", 0x1B8Ae1, 0x1B8b01, indexJLTFSprites_Darkseid, 0x00 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_BONUS_CS_PALETTES[] =
{
    { L"Character Select BG", 0x8634D, 0x8636D },
    { L"1P/2P Cursor", 0x4FF0F, 0x4FF2F },
    { L"CS Icons (Wonder Woman, Flash, Superman)", 0x8632D, 0x8634D },
    { L"CS Icons (Aquaman, Batman)", 0x863CD, 0x863ED },
    { L"CS Icon (Green Arrow)", 0x8636D, 0x8638D },
    { L"CS Icon (Cheetah)", 0x8638D, 0x863AD },
    { L"CS Icon (Despero)", 0x863AD, 0x863CD },
    { L"CS Icon (Darkseid)", 0x863ED, 0x8640D },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_BONUS_SSI_PALETTES[] =
{
    { L"Aquaman Stage Icon",        0x1D389E, 0x1D38BE, indexJLTFSprites_Stages, 0x00 },
    { L"Batman Stage Icon",         0x1D38C0, 0x1D38E0, indexJLTFSprites_Stages, 0x01 },
    { L"Flash Stage Icon",          0x1D38E2, 0x1D3902, indexJLTFSprites_Stages, 0x05 },
    { L"Superman Stage Icon",       0x1D3904, 0x1D3924, indexJLTFSprites_Stages, 0x07 },
    { L"Green Arrow Stage Icon",    0x1D3926, 0x1D3946, indexJLTFSprites_Stages, 0x06 },
    { L"Wonder Woman Stage Icon",   0x1D3948, 0x1D3968, indexJLTFSprites_Stages, 0x08 },
    { L"Cheetah Stage Icon",        0x1D396A, 0x1D398A, indexJLTFSprites_Stages, 0x02 },
    { L"Despero Stage Icon",        0x1D398C, 0x1D39AC, indexJLTFSprites_Stages, 0x04 },
    { L"Darkseid Stage Icon",       0x1D39AE, 0x1D39CE, indexJLTFSprites_Stages, 0x03 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_AQUAMAN[] =
{
    { L"Aquaman Stage", 0x87AF6, 0x87BD6, indexJLTFSprites_Stages, 0x0a , &pairFullyLinkedNode},
    { L"Aquaman Stage (Orange Fish extra)", 0x1BB186, 0x1BB1A6, indexJLTFSprites_Stages, 0x09 },
    { L"Aquaman Stage (Shark extra)", 0x1BB1A8, 0x1BB1C8, indexJLTFSprites_Stages, 0x0c },
    { L"Aquaman Stage (Manta extra)", 0x1BB1CA, 0x1BB1EA, indexJLTFSprites_Stages, 0x0b },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_BATMAN[] =
{
    { L"Batman Stage", 0x87EE9, 0x87FC9 },
    { L"Batman Stage (Pipe extra)", 0x1bac95, 0x1bacb5 },
    { L"Batman Stage (Bat extra)", 0x1bc7fd, 0x1bc81d },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_FLASH[] =
{
    { L"Flash Stage", 0xB7090, 0xB7130 },
    { L"Flash Stage (Vulture extra)", 0x1bbe2F, 0x1bbe4f },
    { L"Flash Stage (Leaf/Paper extra)", 0x1bc6bF, 0x1bc6df },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_SUPERMAN[] =
{
    { L"Superman Stage", 0xB7E8C, 0xB7F6C },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_GA[] =
{
    { L"Green Arrow Stage", 0xD7CD8, 0xD7DB8 },
    { L"Green Arrow Stage (Leaf extra)", 0x1bb93d, 0x1bb95d },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_WW[] =
{
    { L"Wonder Woman Stage", 0xD7DDA, 0xD7EBA },
    { L"Wonder Woman Stage (Vase extra)", 0x1B8B03, 0x1B8B23 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_CHEETAH[] =
{
    { L"Cheetah Stage", 0xD7EDC, 0xD7F9C },
    { L"Cheetah Stage (Tree log extra)", 0x1BA3FB, 0x1BA41B },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_DESPERO[] =
{
    { L"Despero Stage", 0x15F5DD, 0x15F6BD },
    { L"Despero Stage (Robot extra)", 0x1B92DD, 0x1B92FD },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_STAGE_PALETTES_DARKSEID[] =
{
    { L"Darkseid Stage", 0x15FB6F, 0x15FC0F },
    { L"Darkseid Stage (Pillar extra)", 0x1b9d41, 0x1b9d61 },
};

const sGame_PaletteDataset JusticeLeagueTF_SNES_BONUS_LOGO_PALETTES[] =
{
    { L"Acclaim Logo", 0x1A92A, 0x1A98A, indexJLTFSprites_Bonus, 0x00 },
    { L"Sunsoft logo", 0x1B260, 0x1B2A0, indexJLTFSprites_Bonus, 0x02 },
    { L"Blizzard Ent. logo", 0x1C150, 0x1C190, indexJLTFSprites_Bonus, 0x01 },
};

const sDescTreeNode JusticeLeagueTF_SNES_SUPERMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_SUPERMAN_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_SUPERMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_SUPERMAN_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_SUPERMAN_PALETTES_P2) },
    //{ L"Powers", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_SUPERMAN_PALETTES_MOVES, ARRAYSIZE(JusticeLeagueTF_SNES_SUPERMAN_PALETTES_MOVES) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_SUPERMAN_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_SUPERMAN_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_WW_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_WW_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_WW_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_WW_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_WW_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_WW_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_WW_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_FLASH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_FLASH_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_FLASH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_FLASH_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_FLASH_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_FLASH_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_FLASH_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_GA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_GA_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_GA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_GA_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_GA_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_GA_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_GA_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_BATMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BATMAN_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_BATMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BATMAN_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_BATMAN_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BATMAN_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_BATMAN_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_AQUAMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_AQUAMAN_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_AQUAMAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_AQUAMAN_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_AQUAMAN_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_AQUAMAN_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_AQUAMAN_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_CHEETAH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_CHEETAH_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_CHEETAH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_CHEETAH_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_CHEETAH_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_CHEETAH_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_CHEETAH_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_DESPERO_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DESPERO_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_DESPERO_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DESPERO_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_DESPERO_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DESPERO_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_DESPERO_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_DARKSEID_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DARKSEID_PALETTES_P1, ARRAYSIZE(JusticeLeagueTF_SNES_DARKSEID_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DARKSEID_PALETTES_P2, ARRAYSIZE(JusticeLeagueTF_SNES_DARKSEID_PALETTES_P2) },
    { L"Status Effects", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DARKSEID_PALETTES_EFFECTS, ARRAYSIZE(JusticeLeagueTF_SNES_DARKSEID_PALETTES_EFFECTS) },
};

const sDescTreeNode JusticeLeagueTF_SNES_STAGE_COLLECTION[] =
{
    { L"Aquaman Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_AQUAMAN, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_AQUAMAN) },
    { L"Batman Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_BATMAN, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_BATMAN) },
    { L"Flash Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_FLASH, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_FLASH) },
    { L"Superman Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_SUPERMAN, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_SUPERMAN) },
    { L"Green Arrow Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_GA, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_GA) },
    { L"Wonder Woman Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_WW, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_WW) },
    { L"Cheetah Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_CHEETAH, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_CHEETAH) },
    { L"Despero Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_DESPERO, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_DESPERO) },
    { L"Darkseid Stage", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_PALETTES_DARKSEID, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_PALETTES_DARKSEID) },
};

const sDescTreeNode JusticeLeagueTF_SNES_BONUS_COLLECTION[] =
{
    { L"Character Select", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BONUS_CS_PALETTES, ARRAYSIZE(JusticeLeagueTF_SNES_BONUS_CS_PALETTES) },
    { L"Stage Select Icons", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BONUS_SSI_PALETTES, ARRAYSIZE(JusticeLeagueTF_SNES_BONUS_SSI_PALETTES) },
    { L"Logos", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BONUS_LOGO_PALETTES, ARRAYSIZE(JusticeLeagueTF_SNES_BONUS_LOGO_PALETTES) },
};

const sDescTreeNode JusticeLeagueTF_SNES_UNITS[] =
{
    { L"Superman", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_SUPERMAN_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_SUPERMAN_COLLECTION) },
    { L"Wonder Woman", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_WW_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_WW_COLLECTION) },
    { L"The Flash", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_FLASH_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_FLASH_COLLECTION) },
    { L"Green Arrow", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_GA_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_GA_COLLECTION) },
    { L"Batman", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BATMAN_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_BATMAN_COLLECTION) },
    { L"Aquaman", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_AQUAMAN_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_AQUAMAN_COLLECTION) },
    { L"Cheetah", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_CHEETAH_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_CHEETAH_COLLECTION) },
    { L"Despero", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DESPERO_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_DESPERO_COLLECTION) },
    { L"Darkseid", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_DARKSEID_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_DARKSEID_COLLECTION) },

    { L"Stages", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_STAGE_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_STAGE_COLLECTION) },
    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)JusticeLeagueTF_SNES_BONUS_COLLECTION, ARRAYSIZE(JusticeLeagueTF_SNES_BONUS_COLLECTION) },
};

constexpr auto JusticeLeagueTF_SNES_NUMUNIT = ARRAYSIZE(JusticeLeagueTF_SNES_UNITS);

constexpr auto JusticeLeagueTF_SNES_EXTRALOC = JusticeLeagueTF_SNES_NUMUNIT;
