#pragma once

const sGame_PaletteDataset NeoBomberman_A_Bomberman_PALETTES[] =
{
    { L"White Bomberman", 0x0c14ea, 0x0c152a, indexNeoBombermanSprites_Bomberman, 0x00 },
    { L"Black Bomberman", 0x0c3c0a, 0x0c3c4a, indexNeoBombermanSprites_Bomberman, 0x00 },
    { L"Red Bomberman", 0x0c3c4a, 0x0c3c8a, indexNeoBombermanSprites_Bomberman, 0x00 },
    { L"Blue Bomberman", 0x0c3c8a, 0x0c3cca, indexNeoBombermanSprites_Bomberman, 0x00 },
};

const sGame_PaletteDataset NeoBomberman_A_RubberBomber_PALETTES[] =
{
    { L"Rubber Bomber P1", 0x0c3e2a, 0x0c3e6a },
    { L"Rubber Bomber P2", 0x0cad6a, 0x0cadaa },
    { L"Rubber Bomber CPU", 0x0d560a, 0x0d564a },
};

const sGame_PaletteDataset NeoBomberman_A_FakeBomber_PALETTES[] =
{
    { L"Fake Bomber P1", 0x0c3d0a, 0x0c3d4a },
    { L"Fake Bomber P2", 0x0cac6a, 0x0cacaa },
    { L"Fake Bomber CPU", 0x0d550a, 0x0d554a },
};

const sGame_PaletteDataset NeoBomberman_A_CatBomber_PALETTES[] =
{
    { L"Cat Bomber P1", 0x0c3cca, 0x0c3d0a },
    { L"Cat Bomber P2", 0x0cac2a, 0x0cac6a },
    { L"Cat Bomber CPU", 0x0d4faa, 0x0d4fea },
};

const sGame_PaletteDataset NeoBomberman_A_Honey_PALETTES[] =
{
    { L"Honey P1", 0x0c178a, 0x0c17ca, indexNeoBombermanSprites_Honey },
    { L"Honey P2", 0x0cad2a, 0x0cad6a, indexNeoBombermanSprites_Honey },
    { L"Honey CPU", 0x0d564a, 0x0d568a, indexNeoBombermanSprites_Honey },
};

const sGame_PaletteDataset NeoBomberman_A_HayateBomber_PALETTES[] =
{
    { L"Hayate Bomber P1", 0x0c1a2a, 0x0c1a6a },
    { L"Hayate Bomber P2", 0x0cadaa, 0x0cadea },
    { L"Hayate Bomber CPU", 0x0d558a, 0x0d55ca },
};

const sGame_PaletteDataset NeoBomberman_A_Kotetsu_PALETTES[] =
{
    { L"Kotetsu P1", 0x0c186a, 0x0c18aa },
    { L"Kotetsu P2", 0x0cacea, 0x0cad2a },
    { L"Kotetsu CPU", 0x0d56ca, 0x0d570a },
};

const sGame_PaletteDataset NeoBomberman_A_GoldBomber_PALETTES[] =
{
    { L"Gold Bomber P1", 0x0cadea, 0x0cae2a },
    { L"Gold Bomber P2", 0x0cacaa, 0x0cacea },
    { L"Gold Bomber CPU", 0x0d554a, 0x0d558a },
};

const sGame_PaletteDataset NeoBomberman_A_AtomicBomber_PALETTES[] =
{
    { L"Atomic Bomber P1", 0x0c1a6a, 0x0c1aaa },
    { L"Atomic Bomber P2", 0x0cab6a, 0x0cabaa },
    { L"Atomic Bomber CPU", 0x0d4eea, 0x0d4f2a },
};

const sGame_PaletteDataset NeoBomberman_A_CharacterScreen_PALETTES[] =
{
    { L"White Bomberman", 0x0c3bca, 0x0c3c0a },
    { L"Honey P1", 0x0c3e6a, 0x0c3eaa },
    { L"Hayate Bomber P1", 0x0c3dea, 0x0c3e2a },
    { L"Kotetsu P1", 0x0c3eaa, 0x0c3eea },
    { L"Gold Bomber P1", 0x0c3daa, 0x0c3dea },
    { L"Atomic Bomber P1", 0x0c3b6a, 0x0c3baa },
};

const sGame_PaletteDataset NeoBomberman_A_Effects_PALETTES[] =
{
    { L"P1 Water Effect", 0x0c72aa, 0x0c72ea },
    { L"P2 Water Effect", 0x0c72ea, 0x0c732a },
    { L"Bombermans & Kotetsu Skull Effect", 0x0c522a, 0x0c526a },
    { L"Rubber Skull Effect", 0x0c526a, 0x0c52aa },
    { L"Cat Skull Effect", 0x0c52aa, 0x0c52ea },
    { L"Honey Skull Effect", 0x0c52ea, 0x0c532a },
};

const sGame_PaletteDataset NeoBomberman_A_BONUS_PALETTES[] =
{
    { L"Battle Text 1/3", 0x0d48aa, 0x0d48ca },
    { L"Battle Text 2/3", 0x0d48ca, 0x0d48ea },
    { L"Battle Text 3/3", 0x0d48ea, 0x0d490a },
};

const sDescTreeNode NeoBomberman_A_Bomberman_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Bomberman_PALETTES, ARRAYSIZE(NeoBomberman_A_Bomberman_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_RubberBomber_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_RubberBomber_PALETTES, ARRAYSIZE(NeoBomberman_A_RubberBomber_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_FakeBomber_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_FakeBomber_PALETTES, ARRAYSIZE(NeoBomberman_A_FakeBomber_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_CatBomber_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_CatBomber_PALETTES, ARRAYSIZE(NeoBomberman_A_CatBomber_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_Honey_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Honey_PALETTES, ARRAYSIZE(NeoBomberman_A_Honey_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_HayateBomber_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_HayateBomber_PALETTES, ARRAYSIZE(NeoBomberman_A_HayateBomber_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_Kotetsu_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Kotetsu_PALETTES, ARRAYSIZE(NeoBomberman_A_Kotetsu_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_GoldBomber_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_GoldBomber_PALETTES, ARRAYSIZE(NeoBomberman_A_GoldBomber_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_AtomicBomber_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_AtomicBomber_PALETTES, ARRAYSIZE(NeoBomberman_A_AtomicBomber_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_CharacterScreen_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_CharacterScreen_PALETTES, ARRAYSIZE(NeoBomberman_A_CharacterScreen_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_Effects_COLLECTION[] =
{ 
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Effects_PALETTES, ARRAYSIZE(NeoBomberman_A_Effects_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_BONUS_COLLECTION[] =
{
    { L"Palettes",    DESC_NODETYPE_TREE, (void*)NeoBomberman_A_BONUS_PALETTES, ARRAYSIZE(NeoBomberman_A_BONUS_PALETTES) },
};

const sDescTreeNode NeoBomberman_A_UNITS[] =
{
    { L"Bomberman", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Bomberman_COLLECTION, ARRAYSIZE(NeoBomberman_A_Bomberman_COLLECTION) },
    { L"Rubber Bomber", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_RubberBomber_COLLECTION, ARRAYSIZE(NeoBomberman_A_RubberBomber_COLLECTION) },
    { L"Fake Bomber", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_FakeBomber_COLLECTION, ARRAYSIZE(NeoBomberman_A_FakeBomber_COLLECTION) },
    { L"Cat Bomber", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_CatBomber_COLLECTION, ARRAYSIZE(NeoBomberman_A_CatBomber_COLLECTION) },
    { L"Honey", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Honey_COLLECTION, ARRAYSIZE(NeoBomberman_A_Honey_COLLECTION) },
    { L"Hayate Bomber", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_HayateBomber_COLLECTION, ARRAYSIZE(NeoBomberman_A_HayateBomber_COLLECTION) },
    { L"Kotetsu", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Kotetsu_COLLECTION, ARRAYSIZE(NeoBomberman_A_Kotetsu_COLLECTION) },
    { L"Gold Bomber", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_GoldBomber_COLLECTION, ARRAYSIZE(NeoBomberman_A_GoldBomber_COLLECTION) },
    { L"Atomic Bomber", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_AtomicBomber_COLLECTION, ARRAYSIZE(NeoBomberman_A_AtomicBomber_COLLECTION) },
    { L"Character Screen", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_CharacterScreen_COLLECTION, ARRAYSIZE(NeoBomberman_A_CharacterScreen_COLLECTION) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_Effects_COLLECTION, ARRAYSIZE(NeoBomberman_A_Effects_COLLECTION) },
    { L"Bonus", DESC_NODETYPE_TREE, (void*)NeoBomberman_A_BONUS_COLLECTION, ARRAYSIZE(NeoBomberman_A_BONUS_COLLECTION) },
};

constexpr auto NeoBomberman_A_NUMUNIT = ARRAYSIZE(NeoBomberman_A_UNITS);
#define NeoBomberman_A_EXTRALOC NeoBomberman_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef NeoBomberman_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
