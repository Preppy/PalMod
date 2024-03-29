#pragma once

const std::vector<uint16_t> MAGICALDROPII_A_IMGIDS_USED =
{
    indexMagDrop2Sprites_BlkPierrot,        // 0xbc
    indexMagDrop2Sprites_Chariot,           // 0xbd
    indexMagDrop2Sprites_Devil,             // 0xbe
    indexMagDrop2Sprites_Empress,           // 0xbf
    indexMagDrop2Sprites_Fool,              // 0xc0
    indexMagDrop2Sprites_HighPriestess,     // 0xc1
    indexMagDrop2Sprites_Justice,           // 0xc2
    indexMagDrop2Sprites_Magician,          // 0xc3
    indexMagDrop2Sprites_Star,              // 0xc4
    indexMagDrop2Sprites_Strength,          // 0xc5
    indexMagDrop2Sprites_World,             // 0xc6
};

const sGame_PaletteDataset MAGICALDROPII_A_Fool_PALETTES_P1[] =
{
    { L"Fool P1", 0x31160, 0x31240, indexMagDrop2Sprites_Fool, 0x00 },
    { L"Fool P1 Icon", 0x31240, 0x31260, indexMagDrop2Sprites_Fool, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Fool_PALETTES_P2[] =
{
    { L"Fool P2", 0x31960, 0x31a40, indexMagDrop2Sprites_Fool, 0x00 },
    { L"Fool P2 Icon", 0x31a40, 0x31a60, indexMagDrop2Sprites_Fool, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Magician_PALETTES_P1[] =
{
    { L"Magician P1", 0x31440, 0x31500, indexMagDrop2Sprites_Magician, 0x00 },
    { L"Magician P1 Icon", 0x31520, 0x31540, indexMagDrop2Sprites_Magician, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Magician_PALETTES_P2[] =
{
    { L"Magician P2", 0x31c40, 0x31d00, indexMagDrop2Sprites_Magician, 0x00 },
    { L"Magician P2 Icon", 0x31d20, 0x31d40, indexMagDrop2Sprites_Magician, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_HighPriestess_PALETTES_P1[] =
{
    { L"High Priestess P1", 0x31260, 0x31360, indexMagDrop2Sprites_HighPriestess, 0x00 },
    { L"High Priestess P1 Icon", 0x31400, 0x31420, indexMagDrop2Sprites_HighPriestess, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_HighPriestess_PALETTES_P2[] =
{
    { L"High Priestess P2", 0x31a60, 0x31b60, indexMagDrop2Sprites_HighPriestess, 0x00 },
    { L"High Priestess P2 Icon", 0x31c00, 0x31c20, indexMagDrop2Sprites_HighPriestess, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Empress_PALETTES_P1[] =
{
    { L"Empress P1", 0x31680, 0x316e0, indexMagDrop2Sprites_Empress, 0x00 },
    { L"Empress P1 Icon", 0x31660, 0x31680, indexMagDrop2Sprites_Empress, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Empress_PALETTES_P2[] =
{
    { L"Empress P2", 0x31e80, 0x31ee0, indexMagDrop2Sprites_Empress, 0x00 },
    { L"Empress P2 Icon", 0x31e60, 0x31e80, indexMagDrop2Sprites_Empress, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Chariot_PALETTES_P1[] =
{
    { L"Chariot P1", 0x31360, 0x31400, indexMagDrop2Sprites_Chariot, 0x00 },
    { L"Chariot P1 Icon", 0x31420, 0x31440, indexMagDrop2Sprites_Chariot, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Chariot_PALETTES_P2[] =
{
    { L"Chariot P2", 0x31b60, 0x31c00, indexMagDrop2Sprites_Chariot, 0x00 },
    { L"Chariot P2 Icon", 0x31c20, 0x31c40, indexMagDrop2Sprites_Chariot, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Strength_PALETTES_P1[] =
{
    { L"Strength P1", 0x31580, 0x315e0, indexMagDrop2Sprites_Strength, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Strength_PALETTES_P2[] =
{
    { L"Strength P2", 0x31d80, 0x31de0, indexMagDrop2Sprites_Strength, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Justice_PALETTES_P1[] =
{
    { L"Justice P1", 0x315e0, 0x31640, indexMagDrop2Sprites_Justice, 0x00 },
    { L"Justice P1 Icon", 0x31640, 0x31660, indexMagDrop2Sprites_Justice, 0x008 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Justice_PALETTES_P2[] =
{
    { L"Justice P2", 0x31de0, 0x31e40, indexMagDrop2Sprites_Justice, 0x00 },
    { L"Justice P2 Icon", 0x31e40, 0x31e60, indexMagDrop2Sprites_Justice, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Devil_PALETTES_P1[] =
{
    { L"Devil P1", 0x31120, 0x31160, indexMagDrop2Sprites_Devil, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Devil_PALETTES_P2[] =
{
    { L"Devil P2", 0x31920, 0x31960, indexMagDrop2Sprites_Devil, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Star_PALETTES_P1[] =
{
    { L"Star P1", 0x31020, 0x31120, indexMagDrop2Sprites_Star, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_Star_PALETTES_P2[] =
{
    { L"Star P2", 0x31820, 0x31920, indexMagDrop2Sprites_Star, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_World_PALETTES_P1[] =
{
    { L"World P1", 0x31540, 0x31580, indexMagDrop2Sprites_World, 0x00 },
    { L"World P1 Icon", 0x31500, 0x31520, indexMagDrop2Sprites_World, 0x08 },
};

const sGame_PaletteDataset MAGICALDROPII_A_World_PALETTES_P2[] =
{
    { L"World P2", 0x31d40, 0x31d80, indexMagDrop2Sprites_World, 0x00 },
    { L"World P2 Icon", 0x31d00, 0x31d20, indexMagDrop2Sprites_World, 0x008 },
};

const sGame_PaletteDataset MAGICALDROPII_A_BlackPierrot_PALETTES_P1[] =
{
    { L"Black Pierrot P1", 0x317e0, 0x31800, indexMagDrop2Sprites_BlkPierrot, 0x00 },
};

const sGame_PaletteDataset MAGICALDROPII_A_BlackPierrot_PALETTES_P2[] =
{
    { L"Black Pierrot P2", 0x31fe0, 0x32000, indexMagDrop2Sprites_BlkPierrot, 0x00 },
};

//-BONUS-
//Ingame Extras
const sGame_PaletteDataset MAGICALDROPII_A_BONUS_PALETTES_INGAME[] =
{
    { L"P1 Clown", 0x31000, 0x31020 },
    { L"P2 Clown", 0x31800, 0x31820 },
    { L"Colors Balloons", 0x30200, 0x30280 },
    { L"Balloons Explosion", 0x302e0, 0x30300 },
    { L"Ice Balloons", 0x30280, 0x302a0 },
    { L"Rainbow Balloons", 0x302c0, 0x302e0 },
    { L"Game Over Wall", 0x302a0, 0x302c0 },
};

const sDescTreeNode MAGICALDROPII_A_FOOL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Fool_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Fool_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Fool_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Fool_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_MAGICIAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Magician_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Magician_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Magician_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Magician_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_HIGHPRIESTESS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_HighPriestess_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_HighPriestess_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_HighPriestess_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_HighPriestess_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_EMPRESS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Empress_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Empress_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Empress_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Empress_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_CHARIOT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Chariot_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Chariot_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Chariot_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Chariot_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_STRENGTH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Strength_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Strength_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Strength_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Strength_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_JUSTICE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Justice_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Justice_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Justice_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Justice_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_DEVIL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Devil_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Devil_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Devil_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Devil_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_STAR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Star_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_Star_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_Star_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_Star_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_WORLD_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_World_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_World_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_World_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_World_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_BLACKPIERROT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_BlackPierrot_PALETTES_P1, ARRAYSIZE(MAGICALDROPII_A_BlackPierrot_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_BlackPierrot_PALETTES_P2, ARRAYSIZE(MAGICALDROPII_A_BlackPierrot_PALETTES_P2) },
};

const sDescTreeNode MAGICALDROPII_A_BONUS_COLLECTION[] =
{
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_BONUS_PALETTES_INGAME, ARRAYSIZE(MAGICALDROPII_A_BONUS_PALETTES_INGAME) },
};

const sDescTreeNode MAGICALDROPII_A_UNITS[] =
{
    { L"Fool", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_FOOL_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_FOOL_COLLECTION) },
    { L"Magician", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_MAGICIAN_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_MAGICIAN_COLLECTION) },
    { L"High Priestess", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_HIGHPRIESTESS_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_HIGHPRIESTESS_COLLECTION) },
    { L"Empress", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_EMPRESS_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_EMPRESS_COLLECTION) },
    { L"Chariot", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_CHARIOT_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_CHARIOT_COLLECTION) },
    { L"Justice", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_JUSTICE_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_JUSTICE_COLLECTION) },
    { L"Strength", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_STRENGTH_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_STRENGTH_COLLECTION) },
    { L"Devil", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_DEVIL_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_DEVIL_COLLECTION) },
    { L"Star", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_STAR_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_STAR_COLLECTION) },
    { L"World", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_WORLD_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_WORLD_COLLECTION) },
    { L"Black Pierrot", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_BLACKPIERROT_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_BLACKPIERROT_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MAGICALDROPII_A_BONUS_COLLECTION, ARRAYSIZE(MAGICALDROPII_A_BONUS_COLLECTION) },
};
