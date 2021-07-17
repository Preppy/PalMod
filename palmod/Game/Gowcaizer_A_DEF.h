#pragma once

// To add characters or palette lists:
// * Update the GowcaizerCharacterList array.
// * Uncomment DumpAllCharacters in InitDescTree
// * Run PalMod: the new headers will be printed to debug out
// That should be it.  Good luck.

const UINT16 Gowcaizer_A_IMGIDS_USED[] =
{
    indexKOF02UMSprites_Iori,
};

const sGame_PaletteDataset Gowcaizer_A_HELLSTINGER_PALETTES_P1[] =
{
    { L"HellStinger P1", 0x190de2, 0x190e02 },
};

const sGame_PaletteDataset Gowcaizer_A_HELLSTINGER_PALETTES_P2[] =
{
    { L"HellStinger P2", 0x190e02, 0x190e22 },
    { L"Unknown 1 P1", 0x190e22, 0x190e42 },
    { L"Unknown 1 P2", 0x190e42, 0x190e62 },
    { L"Gowcaizer P1", 0x190e62, 0x190e82 },
    { L"Gowcaizer P2", 0x190e82, 0x190ea2 },
    { L"Captain Atlantis P1", 0x190ea2, 0x190ec2 },
    { L"Captain Atlantis P2", 0x190ec2, 0x190ee2 },
    { L"Fudomaru P1", 0x190ee2, 0x190f02 },
    { L"Fudomaru P2", 0x190f02, 0x190f22 },
    { L"Karin P1", 0x190f22, 0x190f42 },
    { L"Karin P2", 0x190f42, 0x190f62 },
    { L"Shen Long P1", 0x190f62, 0x190f82 },
    { L"Shen Long P2", 0x190f82, 0x190fa2 },
    { L"Unknown 2 P1", 0x190fa2, 0x190fc2 },
    { L"Unknown 2 P2", 0x190fc2, 0x190fe2 },
    { L"Kyosuke Shigure P1", 0x190fe2, 0x191002 },
    { L"Kyosuke Shigure P2", 0x191002, 0x191022 },
    { L"Unknown 3 P1", 0x191022, 0x191042 },
    { L"Unknown 3 P2", 0x191042, 0x191062 },
    { L"Unknown 4 P1", 0x191062, 0x191082 },
    { L"Unknown 4 P2", 0x191082, 0x1910a2 },
    { L"Brider P1", 0x1910a2, 0x1910c2 },
    { L"Brider P2", 0x1910c2, 0x1910e2 },
    { L"Unknown 5 P1", 0x1910e2, 0x191102 },
    { L"Unknown 5 P2", 0x191102, 0x191122 },
    { L"Double Brider P1", 0x191122, 0x191142 },
    { L"Double Brider P2", 0x191142, 0x191162 },
    { L"Shaia Hishizaki P1", 0x191162, 0x191182 },
    { L"Shaia Hishizaki P2", 0x191182, 0x1911a2 },
    { L"Ball Boy P1", 0x1911a2, 0x1911c2 },
    { L"Ball Boy P2", 0x1911c2, 0x1911e2 },
    { L"Marion P1", 0x1911e2, 0x191202 },
    { L"Marion P2", 0x191202, 0x191222 },
    { L"Platonic Twins P1", 0x191222, 0x191242 },
    { L"Platonic Twins P2", 0x191242, 0x191262 },

    { L"Ohga P1", 0x191262, 0x191282 },
    { L"Ohga P2", 0x191282, 0x1912a2 },
    { L"Unknown 6 P1", 0x1912a2, 0x1912c2 },
    { L"Unknown 6 P2", 0x1912c2, 0x1912e2 },

    { L"HellStinger Intro P1", 0x196de2, 0x196e02 },
    { L"HellStinger Intro P2", 0x196e02, 0x196e22 },
    { L"HellStinger Intro Extra P1", 0x196e22, 0x196e42 },
    { L"HellStinger Intro Extra P2", 0x196e42, 0x196e62 },
    { L"Gowcaizer Intro P1", 0x196ee2, 0x196f02 },
    { L"Gowcaizer Intro P2", 0x196f02, 0x196f22 },
    { L"Unknown 7 P1", 0x196f22, 0x196f42 },
    { L"Unknown 7 P2", 0x196f42, 0x196f62 },
    { L"Unknown 8 P1", 0x196fa2, 0x196fc2 },
    { L"Karin Intro P1", 0x1971e2, 0x197202 },
    { L"Karin Intro P2", 0x197202, 0x197222 },
    { L"Karin Intro Extra 1 P1", 0x197222, 0x197242 },
    { L"Karin Intro Extra 1 P2", 0x197242, 0x197262 },
    { L"Karin Intro Extra 2 P1", 0x197262, 0x197282 },
    { L"Karin Intro Extra 2 P2", 0x197282, 0x1972a2 },
    { L"Fudomaru Intro P1", 0x1972a2, 0x1972c2 },
    { L"Fudomaru Intro P2", 0x1972c2, 0x1972e2 },
    { L"Fudomaru Intro Extra P1", 0x1972e2, 0x197302 },
    { L"Fudomaru Intro Extra P2", 0x197302, 0x197322 },
    { L"Brider Intro P1", 0x1975e2, 0x197602 },
    { L"Brider Intro P2", 0x197602, 0x197622 },
    { L"Shaia Intro P1", 0x1976e2, 0x197702 },
    { L"Shaia Intro P2", 0x197702, 0x197722 },
    { L"Platonic Twins Intro P1", 0x1977e2, 0x197822 },
    { L"Platonic Twins Intro Extra 1 P1", 0x197822, 0x197842 },
    { L"Platonic Twins Intro Extra 2 P1", 0x197842, 0x197862 },
    { L"Platonic Twins Intro P2", 0x197862, 0x1978a2 },
    { L"Platonic Twins Intro Extra 1 P2", 0x1978a2, 0x1978c2 },
    { L"Platonic Twins Intro Extra 2 P2", 0x1978c2, 0x1978e2 },
    { L"Ohga Intro P1", 0x197962, 0x197982 },
    { L"Ohga Intro Extra P1", 0x197982, 0x1979a2 },
    { L"Ohga Intro P2", 0x1979a2, 0x1979c2 },
    { L"Ohga Intro Extra P2", 0x1979c2, 0x1979e2 },


    { L"Busqueda (Gowcaizer) 1", 0x1354c0, 0x13bac0 },
    { L"Busqueda (Gowcaizer) 2", 0x1913e2, 0x196de2 },
    { L"Busqueda (Gowcaizer) 2.5", 0x1979e2, 0x19c7e2 },
    { L"Busqueda (Gowcaizer) 3", 0x1d6960, 0x1d6b40 },
    { L"Busqueda (Gowcaizer) 4", 0x1d706c, 0x1d726c },
    { L"Busqueda (Gowcaizer) 5", 0x1d778a, 0x1d798a },
    { L"Busqueda (Gowcaizer) 6", 0x1d8010, 0x1d8210 },
    { L"Busqueda (Gowcaizer) 7", 0x1d85c8, 0x1d87c8 },
    { L"Busqueda (Gowcaizer) 8", 0x1d8c30, 0x1d8e30 },
    { L"Busqueda (Gowcaizer) 9", 0x1d9886, 0x1d9a86 },
    { L"Busqueda (Gowcaizer) 10", 0x1da148, 0x1da328 },

    { L"Gowcaizers Stage BG Layer", 0x192BE2, 0x192FE2 },
    { L"Gowcaizers Stage: Ground", 0x135CC0, 0x135EC0 },
    { L"Gowcaizers Stage: Lava Sprites", 0x135EC0, 0x1361C0 },

    { L"C.Atlantas' Stage BG Layer", 0x192FE2, 0x1933E2 },
    { L"C.Atlantas' Stage: People", 0x1360C0, 0x1362C0 },
    { L"Fudomarus stage 1", 0x1933E2, 0x1937E2 },
    { L"Fudomarus stage 2, 0x1362C0", 0x1364C0 },
    { L"Stingers Stage: BG People", 0x1354C0, 0x1356C0 },
    { L"Stingers Stage: BG Sprites", 0x1358C0, 0x135AC0 },
    { L"Stingers Stage: FG Sprites", 0x135AC0, 0x135CC0 },
    { L"Karin Stage BG Layer", 0x1937E2, 0x193BE2 },
    { L"Shenlong Stage BG Layer", 0x193FE2, 0x1943E2 },
    { L"Shaia Stage BG Layer", 0x194FE2, 0x1953E2 },
    { L"Narion Stage BG Layer", 0x1953E2, 0x1957E2 },

    { L"How2Play: Controls + VS:BG;+ \"FIGHT!\" Text", 0x196BE2, 0x196DE2 },

    { L"Big Portraits 0 ;Stinger", 0x191FE2, 0x1921E2 },
    { L"Big Portraits 1 ;Gowcaizr, ", 0x191FE2, 0x1921E2 },
    { L"Big Portraits 2 ;Captain Atlantis", 0x1921E2, 0x1923E2 },
    { L"Big Portraits 3 ;Sword Guy", 0x1921E2, 0x1923E2 },
    { L"Big Portraits 4 ;Fudomaru", 0x1923E2, 0x1925E2 },
    { L"Big Portraits 5 ;Karin", 0x191FE2, 0x1921E2 },
    { L"Big Portraits 6 ;Shenlong", 0x199FE2, 0x19A1E2 },
    { L"Big Portraits 7 ;Kyosuke", 0x19A1E2, 0x19A3E2 },
    { L"Big Portraits 8 ;Brider", 0x19A3E2, 0x19A5E2 },
    { L"Big Portraits 9 ;Shaia", 0x19A7E2, 0x19A9E2 },
    { L"Big Portraits 10 ;Marion", 0x19A7E2, 0x19A9E2 },

    { L"Shaia Intro Art", 0x19B1E2, 0x19B3E2 },
    { L"Intro Text 1", 0x19B9E2, 0x19BBE2 },
    { L"Intro Text 2", 0x19BBE2, 0x19BDE2 },
    { L"Title: Big Text + Intro Text 3", 0x19BDE2, 0x19BFE2 },
    { L"Title: BG", 0x19BFE2, 0x19C1E2 },
    { L"Intro Gocaizr VS Stinger", 0x19C1E2, 0x19C3E2 },
    { L"Intro Gocaizr Big Portrait", 0x19C3E2, 0x19C5E2 },
    { L"Intro Text BG", 0x19C3E2, 0x19C5E2 },
    { L"FX Maybe ;I know Hitsparks are here", 0x1915A2, 0x1917A2 },
    { L"Gowcaizr P1 Chunk 3", 0x19C8A8, 0x1FFEA8 },
    { L"Gowcaizr P1 Chunk 1", 0x190DE2, 0x19FFE2 },
    { L"Gowcaizr P1 Chunk 2", 0x190CA2, 0x19C8A2 },
    { L"Gowcaizr P1 Chunk 3", 0x19C8A0, 0x200000 },
    { L"Gowcaizr P1 Chunk 4", 0x1354A2, 0x13BAA2 },
    { L"Gowcaizr Title 1", 0x19BEA2, 0x19C0A2 },
    { L"Gowcaizr Title 2", 0x19C0A2, 0x19C2A2 },

};

const sDescTreeNode Gowcaizer_A_HELLSTINGER_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_PALETTES_P1, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_PALETTES_P1) },
    { L"P1", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_PALETTES_P2, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_PALETTES_P2) },
};


const sDescTreeNode Gowcaizer_A_UNITS[] =
{
    { L"Hellstinger", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_COLLECTION, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_COLLECTION) },
    { L"Stages", DESC_NODETYPE_TREE, (void*)Gowcaizer_A_HELLSTINGER_COLLECTION, ARRAYSIZE(Gowcaizer_A_HELLSTINGER_COLLECTION) },
};

constexpr auto Gowcaizer_A_NUMUNIT = ARRAYSIZE(Gowcaizer_A_UNITS);

#define Gowcaizer_A_EXTRALOC Gowcaizer_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef Gowcaizer_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
