#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of VampireNightWarriors_A_MORRIGAN_PALETTES. 
// * Update every array using VampireNightWarriors_A_NUMUNIT below
// That should be it.  Good luck.

const std::vector<UINT16> VampireNightWarriors_A_IMGIDS_USED =
{
    // These are the playable characters
    indexCPS2Sprites_Anakaris,
    indexCPS2Sprites_Vamp_Bishamon,  // 0x68
    indexCPS2Sprites_Vamp_Demitri,   // 0x6A
    indexCPS2Sprites_Felicia,
    indexCPS2Sprites_Vamp_Phobos,    // 0x71 aka Huitzil
    indexCPS2Sprites_Vamp_Gallon,    // 0x6C aka Jon Talbain
    indexCPS2Sprites_Vamp_Zabel,     // 0x77 aka Lord Raptor
    indexCPS2Sprites_Morrigan,
    indexCPS2Sprites_Vamp_Pyron,     // 0x72
    indexCPS2Sprites_Vamp_Aulbath,   // 0x67 aka Rikuo
    indexCPS2Sprites_Vamp_Sasquatch, // 0x74
    indexCPS2Sprites_Vamp_Victor,    // 0x76
};

const sGame_PaletteDataset VampireNightWarriors_A_DEMITRI_PALETTES_P1[] =
{
    { L"P1 Demitri",    0x1182a, 0x1184a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"P1 Unknown",    0x1184a, 0x1186a },
    { L"P1 Fireball",   0x1186a, 0x1188a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"P1 Teledash 1", 0x1188a, 0x118aa, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"P1 Teledash 2", 0x118aa, 0x118ca, indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireNightWarriors_A_DEMITRI_PALETTES_P2[] =
{
    { L"P2 Demitri",    0x118ca, 0x118ea, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"P2 Unknown",    0x118ea, 0x1190a },
    { L"P2 Fireball",   0x1190a, 0x1192a, indexCPS2Sprites_Vamp_Demitri, 0x01 },
    { L"P2 Teledash 1", 0x1192a, 0x1194a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
    { L"P2 Teledash 2", 0x1194a, 0x1196a, indexCPS2Sprites_Vamp_Demitri, 0x0 },
};

const sGame_PaletteDataset VampireNightWarriors_A_GALLON_PALETTES_P1[] =
{
    { L"P1 Gallon",                 0x1196a, 0x1198a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"P1 Unknown",                0x1198a, 0x119aa },
    { L"P1 236P/41236KK/j.HP",      0x119aa, 0x119ca, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"P1 236P/28K/Outro Flash",   0x119ca, 0x119ea, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"P1 Unknown",                0x119ea, 0x11a0a },
};

const sGame_PaletteDataset VampireNightWarriors_A_GALLON_PALETTES_P2[] =
{
    { L"P2 Gallon",                 0x11a0a, 0x11a2a, indexCPS2Sprites_Vamp_Gallon, 0x0 },
    { L"P2 Unknown",                0x11a2a, 0x11a4a },
    { L"P2 236P/41236KK/j.HP",      0x11a4a, 0x11a6a, indexCPS2Sprites_Vamp_Gallon, 0x02 },
    { L"P2 236P/28K/Outro Flash",   0x11a6a, 0x11a8a, indexCPS2Sprites_Vamp_Gallon, 0x03 },
    { L"P2 Unknown",                0x11a8a, 0x11aaa },
};

const sGame_PaletteDataset VampireNightWarriors_A_VICTOR_PALETTES_P1[] =
{
    { L"P1 Victor",                 0x11aaa, 0x11aca, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"P1 Unknown",                0x11aea, 0x11b0a },
    { L"P1 Electric Flash",         0x11aca, 0x11aea, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"P1 Electricity 1?",         0x11b0a, 0x11b2a, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"P1 Electricity 2?",         0x11b2a, 0x11b4a, indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireNightWarriors_A_VICTOR_PALETTES_P2[] =
{
    { L"P2 Victor",                 0x11b4a, 0x11b6a, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"P2 Unknown",                0x11b6a, 0x11b8a },
    { L"P2 Electric Flash",         0x11b8a, 0x11baa, indexCPS2Sprites_Vamp_Victor, 0x0 },
    { L"P2 Electricity 1?",         0x11baa, 0x11bca, indexCPS2Sprites_Vamp_Victor, 0x09 },
    { L"P2 Electricity 2?",         0x11bca, 0x11bea, indexCPS2Sprites_Vamp_Victor, 0x09 },
};

const sGame_PaletteDataset VampireNightWarriors_A_ZABEL_PALETTES_P1[] =
{
    { L"P1 Zabel",                      0x11bea, 0x11c0a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"P1 Unknown 1",                  0x11c0a, 0x11c2a },
    { L"P1 64PP/63214KK/intro/winpose", 0x11c2a, 0x11c4a, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"P1 Unknown 2",                  0x11c4a, 0x11c6a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"P1 Unknown 3",                  0x11c6a, 0x11c8a },
};

const sGame_PaletteDataset VampireNightWarriors_A_ZABEL_PALETTES_P2[] =
{
    { L"P2 Zabel",                      0x11c8a, 0x11caa, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"P2 Unknown 1",                  0x11caa, 0x11cca },
    { L"P2 64PP/63214KK/intro/winpose", 0x11cca, 0x11cea, indexCPS2Sprites_Vamp_Zabel, 0x01 },
    { L"P2 Unknown 2",                  0x11cea, 0x11d0a, indexCPS2Sprites_Vamp_Zabel, 0x0 },
    { L"P2 Unknown 3",                  0x11d0a, 0x11d2a },
};

const sGame_PaletteDataset VampireNightWarriors_A_MORRIGAN_PALETTES_P1[] =
{
    { L"P1 Morrigan",                   0x11d2a, 0x11d4a, indexCPS2Sprites_Morrigan, 0x00 },
    { L"P1 Unknown",                    0x11d4a, 0x11d6a },
    { L"P1 Bats",                       0x11d6a, 0x11d8a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"P1 Unknown Extra",              0x11d8a, 0x11daa },
    { L"P1 Sparkles/Darkness Illusion", 0x11daa, 0x11dca, indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireNightWarriors_A_MORRIGAN_PALETTES_P2[] =
{
    { L"P2 Morrigan",                   0x11dca, 0x11dea, indexCPS2Sprites_Morrigan, 0x00 },
    { L"P2 Unknown",                    0x11dea, 0x11e0a },
    { L"P2 Bats",                       0x11e0a, 0x11e2a, indexCPS2Sprites_Morrigan, 0x09 },
    { L"P2 Unknown Extra",              0x11e2a, 0x11e4a },
    { L"P2 Sparkles/Darkness Illusion", 0x11e4a, 0x11e6a, indexCPS2Sprites_Morrigan, 0x2 },
};

const sGame_PaletteDataset VampireNightWarriors_A_ANAKARIS_PALETTES_P1[] =
{
    { L"P1 Anakaris",           0x11e6a, 0x11e8a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"P1 Unknown",            0x11e8a, 0x11eaa },
    { L"P1 2.HP/Mummies",       0x11eaa, 0x11eca, indexCPS2Sprites_Anakaris, 0x2 },
    { L"P1 Pharaoh Magic Orbs", 0x11eca, 0x11eea, indexCPS2Sprites_Anakaris, 0x3 },
    { L"P1 Unknown",            0x11eea, 0x11f0a },
};

const sGame_PaletteDataset VampireNightWarriors_A_ANAKARIS_PALETTES_P2[] =
{
    { L"P2 Anakaris",           0x11f0a, 0x11f2a, indexCPS2Sprites_Anakaris, 0x0 },
    { L"P2 Unknown",            0x11f2a, 0x11f4a },
    { L"P2 2.HP/Mummies",       0x11f4a, 0x11f6a, indexCPS2Sprites_Anakaris, 0x2 },
    { L"P2 Pharaoh Magic Orbs", 0x11f6a, 0x11f8a, indexCPS2Sprites_Anakaris, 0x3 },
    { L"P2 Unknown",            0x11f8a, 0x11faa },
};

const sGame_PaletteDataset VampireNightWarriors_A_FELICIA_PALETTES_P1[] =
{
    { L"P1 Felicia",            0x11faa, 0x11fca, indexCPS2Sprites_Felicia, 0x0 },
    { L"P1 Unknown 1",          0x11fca, 0x11fea },
    { L"P1 Bubble/Butterfly",   0x11fea, 0x1200a, indexCPS2Sprites_Felicia, 0x01 },
    { L"P1 Unknown 2",          0x1200a, 0x1202a },
    { L"P1 Unknown 3",          0x1202a, 0x1204a },
};

const sGame_PaletteDataset VampireNightWarriors_A_FELICIA_PALETTES_P2[] =
{
    { L"P2 Felicia",            0x1204a, 0x1206a, indexCPS2Sprites_Felicia, 0x0 },
    { L"P2 Unknown 1",          0x1206a, 0x1208a },
    { L"P2 Bubble/Butterfly",   0x1208a, 0x120aa, indexCPS2Sprites_Felicia, 0x01 },
    { L"P2 Unknown 2",          0x120aa, 0x120ca },
    { L"P2 Unknown 3",          0x120ca, 0x120ea },
};

const sGame_PaletteDataset VampireNightWarriors_A_BISHAMON_PALETTES_P1[] =
{
    { L"P1 Bishamon",           0x120ea, 0x1210a, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"P1 Unknown Extra",      0x1210a, 0x1212a },
    { L"P1 Ghosts/Hitsparks",   0x1212a, 0x1214a, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"P1 Unknown Extra",      0x1214a, 0x1216a },
    { L"P1 41236KK",            0x1216a, 0x1218a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireNightWarriors_A_BISHAMON_PALETTES_P2[] =
{
    { L"P2 Bishamon",           0x1218a, 0x121aa, indexCPS2Sprites_Vamp_Bishamon, 0x0 },
    { L"P2 Unknown Extra",      0x121aa, 0x121ca },
    { L"P2 Ghosts/Hitsparks",   0x121ca, 0x121ea, indexCPS2Sprites_Vamp_Bishamon, 0x02 },
    { L"P2 Unknown Extra",      0x121ea, 0x1220a },
    { L"P2 41236KK",            0x1220a, 0x1222a, indexCPS2Sprites_Vamp_Bishamon, 0x01 },
};

const sGame_PaletteDataset VampireNightWarriors_A_AULBATH_PALETTES_P1[] =
{
    { L"P1 Aulbath",    0x1222a, 0x1224a, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"P1 Unknown 1",  0x1224a, 0x1226a },
    { L"P1 Unknown 2",  0x1226a, 0x1228a },
    { L"P1 Unknown 3",  0x1228a, 0x122aa },
    { L"P1 Unknown 4",  0x122aa, 0x122ca },
};

const sGame_PaletteDataset VampireNightWarriors_A_AULBATH_PALETTES_P2[] =
{
    { L"P2 Aulbath",    0x122ca, 0x122ea, indexCPS2Sprites_Vamp_Aulbath, 0x0 },
    { L"P2 Unknown 1",  0x122ea, 0x1230a },
    { L"P2 Unknown 2",  0x1230a, 0x1232a },
    { L"P2 Unknown 3",  0x1232a, 0x1234a },
    { L"P2 Unknown 4",  0x1234a, 0x1236a },
};

const sGame_PaletteDataset VampireNightWarriors_A_SASQUATCH_PALETTES_P1[] =
{
    { L"P1 Sasquatch",      0x1236a, 0x1238a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"P1 Unknown",        0x1238a, 0x123aa },
    { L"P1 Smoke?",         0x123aa, 0x123ca, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"P1 Ice Effects?",   0x123ca, 0x123ea, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"P1 Unknown",        0x123ea, 0x1240a },
};

const sGame_PaletteDataset VampireNightWarriors_A_SASQUATCH_PALETTES_P2[] =
{
    { L"P2 Sasquatch",      0x1240a, 0x1242a, indexCPS2Sprites_Vamp_Sasquatch, 0x0 },
    { L"P2 Unknown",        0x1242a, 0x1244a },
    { L"P2 Smoke?",         0x1244a, 0x1246a, indexCPS2Sprites_Vamp_Sasquatch, 0x03 },
    { L"P2 Ice Effects?",   0x1246a, 0x1248a, indexCPS2Sprites_Vamp_Sasquatch, 0x01 },
    { L"P2 Unknown",        0x1248a, 0x124aa },
};

const sGame_PaletteDataset VampireNightWarriors_A_PHOBOS_PALETTES_P1[] =
{
    { L"P1 Phobos",          0x124aa, 0x124ca, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"P1 Unknown Extra 1", 0x124ca, 0x124ea },
    { L"P1 Unknown Extra 2", 0x124ea, 0x1250a },
    { L"P1 Unknown Extra 3", 0x1250a, 0x1252a },
    { L"P1 Unknown Extra 4", 0x1252a, 0x1254a },
};

const sGame_PaletteDataset VampireNightWarriors_A_PHOBOS_PALETTES_P2[] =
{
    { L"P2 Phobos",          0x1254a, 0x1256a, indexCPS2Sprites_Vamp_Phobos, 0x0 },
    { L"P2 Unknown Extra 1", 0x1256a, 0x1258a },
    { L"P2 Unknown Extra 2", 0x1258a, 0x125aa },
    { L"P2 Unknown Extra 3", 0x125aa, 0x125ca },
    { L"P2 Unknown Extra 4", 0x125ca, 0x125ea },
};

const sGame_PaletteDataset VampireNightWarriors_A_PYRON_PALETTES_P1[] =
{
    { L"P1 Pyron",           0x125ea, 0x1260a, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"P1 Unknown Extra 1", 0x1260a, 0x1262a },
    { L"P1 Unknown Extra 2", 0x1262a, 0x1264a },
    { L"P1 Unknown Extra 3", 0x1264a, 0x1266a },
    { L"P1 Unknown Extra 4", 0x1266a, 0x1268a },
};

const sGame_PaletteDataset VampireNightWarriors_A_PYRON_PALETTES_P2[] =
{
    { L"P2 Pyron",           0x1268a, 0x126aa, indexCPS2Sprites_Vamp_Pyron, 0x0 },
    { L"P2 Unknown Extra 1", 0x126aa, 0x126ca },
    { L"P2 Unknown Extra 2", 0x126ca, 0x126ea },
    { L"P2 Unknown Extra 3", 0x126ea, 0x1270a },
    { L"P2 Unknown Extra 4", 0x1270a, 0x1272a },
};

const sDescTreeNode VampireNightWarriors_A_DEMITRI_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_DEMITRI_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_DEMITRI_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_DEMITRI_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_DEMITRI_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_GALLON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_GALLON_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_GALLON_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_GALLON_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_GALLON_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_VICTOR_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_VICTOR_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_VICTOR_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_VICTOR_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_VICTOR_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_ZABEL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_ZABEL_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_ZABEL_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_ZABEL_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_ZABEL_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_MORRIGAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_MORRIGAN_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_MORRIGAN_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_MORRIGAN_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_MORRIGAN_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_ANAKARIS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_ANAKARIS_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_ANAKARIS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_ANAKARIS_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_ANAKARIS_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_FELICIA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_FELICIA_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_FELICIA_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_FELICIA_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_FELICIA_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_BISHAMON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_BISHAMON_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_BISHAMON_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_BISHAMON_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_BISHAMON_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_AULBATH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_AULBATH_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_AULBATH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_AULBATH_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_AULBATH_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_SASQUATCH_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_SASQUATCH_PALETTES_P1,       ARRAYSIZE(VampireNightWarriors_A_SASQUATCH_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_SASQUATCH_PALETTES_P2,       ARRAYSIZE(VampireNightWarriors_A_SASQUATCH_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_PHOBOS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_PHOBOS_PALETTES_P1, ARRAYSIZE(VampireNightWarriors_A_PHOBOS_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_PHOBOS_PALETTES_P2, ARRAYSIZE(VampireNightWarriors_A_PHOBOS_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_PYRON_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_PYRON_PALETTES_P1,         ARRAYSIZE(VampireNightWarriors_A_PYRON_PALETTES_P1) },
    { L"P2", DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_PYRON_PALETTES_P2,         ARRAYSIZE(VampireNightWarriors_A_PYRON_PALETTES_P2) },
};

const sDescTreeNode VampireNightWarriors_A_UNITS[] =
{
    { L"Demitri",            DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_DEMITRI_COLLECTION,       ARRAYSIZE(VampireNightWarriors_A_DEMITRI_COLLECTION) },
    { L"Gallon",             DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_GALLON_COLLECTION,        ARRAYSIZE(VampireNightWarriors_A_GALLON_COLLECTION) }, // Jon Talbain
    { L"Victor",             DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_VICTOR_COLLECTION,        ARRAYSIZE(VampireNightWarriors_A_VICTOR_COLLECTION) },
    { L"Zabel",              DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_ZABEL_COLLECTION,         ARRAYSIZE(VampireNightWarriors_A_ZABEL_COLLECTION) }, // Lord Raptor
    { L"Morrigan",           DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_MORRIGAN_COLLECTION,      ARRAYSIZE(VampireNightWarriors_A_MORRIGAN_COLLECTION) },
    { L"Anakaris",           DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_ANAKARIS_COLLECTION,      ARRAYSIZE(VampireNightWarriors_A_ANAKARIS_COLLECTION) },
    { L"Felicia",            DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_FELICIA_COLLECTION,       ARRAYSIZE(VampireNightWarriors_A_FELICIA_COLLECTION) },
    { L"Bishamon",           DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_BISHAMON_COLLECTION,      ARRAYSIZE(VampireNightWarriors_A_BISHAMON_COLLECTION) },
    { L"Aulbath",            DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_AULBATH_COLLECTION,       ARRAYSIZE(VampireNightWarriors_A_AULBATH_COLLECTION) }, // Rikuo
    { L"Sasquatch",          DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_SASQUATCH_COLLECTION,     ARRAYSIZE(VampireNightWarriors_A_SASQUATCH_COLLECTION) },

    { L"Phobos",             DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_PHOBOS_COLLECTION,        ARRAYSIZE(VampireNightWarriors_A_PHOBOS_COLLECTION) },
    { L"Pyron",              DESC_NODETYPE_TREE, (void*)VampireNightWarriors_A_PYRON_COLLECTION,         ARRAYSIZE(VampireNightWarriors_A_PYRON_COLLECTION) },
};

constexpr auto VampireNightWarriors_A_NUMUNIT = ARRAYSIZE(VampireNightWarriors_A_UNITS);

constexpr auto VampireNightWarriors_A_EXTRALOC = VampireNightWarriors_A_NUMUNIT;

// We extend this array with data groveled from the VampireNightWarriorsE.txt extensible extras file, if any.
const stExtraDef VampireNightWarriors_A_EXTRA[] =
{
    //Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
