#pragma once

const sGame_PaletteDataset KarnovsR_A_RAY_PUNCH_PALETTES[] =
{
    { _T("Ray P"), 0x65800, 0x65820, indexKarnovsRSprites_Ray, 0 },
    { _T("Ray P Portraits"), 0x66000, 0x66040, indexKarnovsRSprites_Ray, 3 },
};

const sGame_PaletteDataset KarnovsR_A_FELIN_PUNCH_PALETTES[] =
{
    { _T("Felin P"), 0x65820, 0x65840, indexKarnovsRSprites_Felin, 0, &pairNext },
    { _T("Felin 2nd palette P"), 0x659C0, 0x659E0, indexKarnovsRSprites_Felin, 1 },
    { _T("Felin P Portraits"), 0x66040, 0x66060, indexKarnovsRSprites_Felin, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RYOKO_PUNCH_PALETTES[] =
{
    { _T("Ryoko P"), 0x65840, 0x65860, indexKarnovsRSprites_Ryoko, 0 },
    { _T("Ryoko P Portraits"), 0x66060, 0x66080, indexKarnovsRSprites_Ryoko, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MATLOK_PUNCH_PALETTES[] =
{
    { _T("Matlok P"), 0x65860, 0x65880, indexKarnovsRSprites_Matlok, 0 },
    { _T("Matlok P Portraits"), 0x66080, 0x660C0, indexKarnovsRSprites_Matlok, 3 },
};

const sGame_PaletteDataset KarnovsR_A_SAMCHAY_PUNCH_PALETTES[] =
{
    { _T("Samchay P"), 0x65880, 0x658A0, indexKarnovsRSprites_Samchay, 0 },
    { _T("Samchay P Portraits"), 0x660C0, 0x66100, indexKarnovsRSprites_Samchay, 3 },
};

const sGame_PaletteDataset KarnovsR_A_LEE_PUNCH_PALETTES[] =
{
    { _T("Lee P"), 0x658A0, 0x658C0, indexKarnovsRSprites_Lee, 0 },
    { _T("Lee P Portraits"), 0x66100, 0x66120, indexKarnovsRSprites_Lee, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MIZOGUCHI_PUNCH_PALETTES[] =
{
    { _T("Mizoguchi P"), 0x658C0, 0x658E0, indexKarnovsRSprites_Mizoguchi, 0 },
    { _T("Mizoguchi"), 0x66120, 0x66140, indexKarnovsRSprites_Mizoguchi, 3 },
};

const sGame_PaletteDataset KarnovsR_A_JEAN_PUNCH_PALETTES[] =
{
    { _T("Jean P"), 0x658E0, 0x65900, indexKarnovsRSprites_Jean, 0 },
    { _T("Jean P Portraits"), 0x66140, 0x66180, indexKarnovsRSprites_Jean, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MARSTORIUS_PUNCH_PALETTES[] =
{
    { _T("Marstorius P"), 0x65900, 0x65920, indexKarnovsRSprites_Marstorius, 0 },
    { _T("Marstorius P Portraits"), 0x66180, 0x661C0, indexKarnovsRSprites_Marstorius, 3 },
};

const sGame_PaletteDataset KarnovsR_A_YUNGMIE_PUNCH_PALETTES[] =
{
    { _T("Yungmie P"), 0x65920, 0x65940, indexKarnovsRSprites_Yungmie, 0, &pairNext },
    // Yungmie 2p looks like it also effects Zazie
    { _T("Yungmie 2nd palette P"), 0x659A0, 0x659C0, indexKarnovsRSprites_Yungmie, 1 },
    { _T("Yungmie P Portraits"), 0x66200, 0x66220, indexKarnovsRSprites_Yungmie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_ZAZIE_PUNCH_PALETTES[] =
{
    { _T("Zazie P"), 0x65940, 0x65960, indexKarnovsRSprites_Zazie, 0 },
    { _T("Zazie P Portraits"), 0x66220, 0x66260, indexKarnovsRSprites_Zazie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_CLOWN_PUNCH_PALETTES[] =
{
    { _T("Clown P"), 0x65960, 0x65980, indexKarnovsRSprites_Clown, 0 },
    { _T("Clown P Portraits"), 0x661C0, 0x66200, indexKarnovsRSprites_Clown, 3 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_PUNCH_PALETTES[] =
{
    { _T("Karnov P"), 0x65980, 0x659A0, indexKarnovsRSprites_Karnov, 0 },
    { _T("Karnov P Portraits"), 0x66260, 0x66280, indexKarnovsRSprites_Karnov, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RAY_KICK_PALETTES[] =
{
    { _T("Ray K"), 0x65A00, 0x65A20, indexKarnovsRSprites_Ray, 0 },
    { _T("Ray K Portraits"), 0x66280, 0x662C0, indexKarnovsRSprites_Ray, 3 },
};

const sGame_PaletteDataset KarnovsR_A_FELIN_KICK_PALETTES[] =
{
    { _T("Felin K"), 0x65A20, 0x65A40, indexKarnovsRSprites_Felin, 0, &pairNext },
    { _T("Felin 2nd palette K"), 0x65BC0, 0x65BE0, indexKarnovsRSprites_Felin, 1 },
    { _T("Felin K Portraits"), 0x662C0, 0x662E0, indexKarnovsRSprites_Felin, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RYOKO_KICK_PALETTES[] =
{
    { _T("Ryoko K"), 0x65A40, 0x65A60, indexKarnovsRSprites_Ryoko, 0},
    { _T("Ryoko K Portraits"), 0x662E0, 0x66300, indexKarnovsRSprites_Ryoko, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MATLOK_KICK_PALETTES[] =
{
    { _T("Matlok K"), 0x65A60, 0x65A80, indexKarnovsRSprites_Matlok, 0 },
    { _T("Matlok K Portraits"), 0x66300, 0x66340, indexKarnovsRSprites_Matlok, 3 },
};

const sGame_PaletteDataset KarnovsR_A_SAMCHAY_KICK_PALETTES[] =
{
    { _T("Samchay K"), 0x65A80, 0x65AA0, indexKarnovsRSprites_Samchay, 0 },
    { _T("Samchay K Portraits"), 0x66340, 0x66380, indexKarnovsRSprites_Samchay, 3 },
};

const sGame_PaletteDataset KarnovsR_A_LEE_KICK_PALETTES[] =
{
    { _T("Lee K"), 0x65AA0, 0x65AC0, indexKarnovsRSprites_Lee, 0 },
    { _T("Lee K Portraits"), 0x66380, 0x663A0, indexKarnovsRSprites_Lee, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MIZOGUCHI_KICK_PALETTES[] =
{
    { _T("Mizoguchi K"), 0x65AC0, 0x65AE0, indexKarnovsRSprites_Mizoguchi, 0 },
    { _T("Mizoguchi K Portraits"), 0x663A0, 0x663C0, indexKarnovsRSprites_Mizoguchi, 3 },
};

const sGame_PaletteDataset KarnovsR_A_JEAN_KICK_PALETTES[] =
{
    { _T("Jean K"), 0x65AE0, 0x65B00, indexKarnovsRSprites_Jean, 0 },
    { _T("Jean K Portraits"), 0x663C0, 0x66400, indexKarnovsRSprites_Jean, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MARSTORIUS_KICK_PALETTES[] =
{
    { _T("Marstorius K"), 0x65B00, 0x65B20, indexKarnovsRSprites_Marstorius, 0 },
    { _T("Marstorius K Portraits"), 0x66400, 0x66440, indexKarnovsRSprites_Marstorius, 3 },
};

const sGame_PaletteDataset KarnovsR_A_YUNGMIE_KICK_PALETTES[] =
{
    { _T("Yungmie K"), 0x65B20, 0x65B40, indexKarnovsRSprites_Yungmie, 0, &pairNext },
    // Yungmie 2p looks like it also effects Zazie
    { _T("Yungmie 2nd palette K "), 0x65BA0, 0x65BC0, indexKarnovsRSprites_Yungmie, 1 },
    { _T("Yungmie K Portraits"), 0x66480, 0x664A0, indexKarnovsRSprites_Yungmie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_ZAZIE_KICK_PALETTES[] =
{
    { _T("Zazie K"), 0x65B40, 0x65B60, indexKarnovsRSprites_Zazie, 0 },
    { _T("Zazie K Portraits"), 0x664A0, 0x664E0, indexKarnovsRSprites_Zazie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_CLOWN_KICK_PALETTES[] =
{
    { _T("Clown K"), 0x65B60, 0x65B80, indexKarnovsRSprites_Clown, 0 },
    { _T("Clown K Portraits"), 0x66440, 0x66480, indexKarnovsRSprites_Clown, 3 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_KICK_PALETTES[] =
{
    { _T("Karnov K"), 0x65B80, 0x65BA0, indexKarnovsRSprites_Karnov, 0 },
    { _T("Karnov K Portraits"), 0x664E0, 0x66500, indexKarnovsRSprites_Karnov, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RAY_SELECTICON_PALETTES[] =
{
    { _T("Ray"), 0x65420, 0x65440, indexKarnovsRSprites_Ray, 2 },
};

const sGame_PaletteDataset KarnovsR_A_FELIN_SELECTICON_PALETTES[] =
{
    { _T("Felin"), 0x65440, 0x65460, indexKarnovsRSprites_Felin, 2 },
};

const sGame_PaletteDataset KarnovsR_A_RYOKO_SELECTICON_PALETTES[] =
{
    { _T("Ryoko"), 0x65460, 0x65480, indexKarnovsRSprites_Ryoko, 2 },
};

const sGame_PaletteDataset KarnovsR_A_MATLOK_SELECTICON_PALETTES[] =
{
    { _T("Matlok"), 0x65480, 0x654A0, indexKarnovsRSprites_Matlok, 2 },
};

const sGame_PaletteDataset KarnovsR_A_SAMCHAY_SELECTICON_PALETTES[] =
{
    { _T("Samchay"), 0x654A0, 0x654C0, indexKarnovsRSprites_Samchay, 2 },
};

const sGame_PaletteDataset KarnovsR_A_LEE_SELECTICON_PALETTES[] =
{
    { _T("Lee"), 0x654C0, 0x654E0, indexKarnovsRSprites_Lee, 2 },
};

const sGame_PaletteDataset KarnovsR_A_MIZOGUCHI_SELECTICON_PALETTES[] =
{
    { _T("Mizoguchi"), 0x654E0, 0x65500, indexKarnovsRSprites_Mizoguchi, 2 },
};

const sGame_PaletteDataset KarnovsR_A_JEAN_SELECTICON_PALETTES[] =
{
    { _T("Jean"), 0x65500, 0x65520, indexKarnovsRSprites_Jean, 2 },
};

const sGame_PaletteDataset KarnovsR_A_MARSTORIUS_SELECTICON_PALETTES[] =
{
    { _T("Marstorius"), 0x65520, 0x65540, indexKarnovsRSprites_Marstorius, 2 },
};

const sGame_PaletteDataset KarnovsR_A_YUNGMIE_SELECTICON_PALETTES[] =
{
    { _T("Yungmie"), 0x65540, 0x65560, indexKarnovsRSprites_Yungmie, 2 },
};

const sGame_PaletteDataset KarnovsR_A_ZAZIE_SELECTICON_PALETTES[] =
{
    { _T("Zazie"), 0x65560, 0x65580, indexKarnovsRSprites_Zazie, 2 },
};

const sGame_PaletteDataset KarnovsR_A_CLOWN_SELECTICON_PALETTES[] =
{
    { _T("Clown"), 0x65580, 0x655A0, indexKarnovsRSprites_Clown, 2 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_SELECTICON_PALETTES[] =
{
    { _T("Karnov"), 0x655A0, 0x655C0, indexKarnovsRSprites_Karnov, 2 },
};

const sDescTreeNode KarnovsR_A_KARNOV_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_KARNOV_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_KARNOV_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_KARNOV_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_CLOWN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_CLOWN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_CLOWN_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_CLOWN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_ZAZIE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_ZAZIE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_ZAZIE_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_ZAZIE_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_YUNGMIE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_YUNGMIE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_YUNGMIE_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_YUNGMIE_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_MARSTORIUS_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_MARSTORIUS_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_MARSTORIUS_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_MARSTORIUS_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_JEAN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_JEAN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_JEAN_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_JEAN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_MIZOGUCHI_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_LEE_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_LEE_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_LEE_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_LEE_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_SAMCHAY_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_SAMCHAY_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_SAMCHAY_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_SAMCHAY_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_MATLOK_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_MATLOK_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_MATLOK_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_MATLOK_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_RYOKO_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_RYOKO_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_RYOKO_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_RYOKO_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_FELIN_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_FELIN_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_FELIN_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_FELIN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_RAY_COLLECTION[] =
{
    { _T("Punch"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_PUNCH_PALETTES) },
    { _T("Kick"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_KICK_PALETTES) },
    { _T("Select Icons"), DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_UNITS[] =
{
    { _T("Ray"),         DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_COLLECTION, ARRAYSIZE(KarnovsR_A_RAY_COLLECTION) },
    { _T("Felin"),       DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_COLLECTION, ARRAYSIZE(KarnovsR_A_FELIN_COLLECTION) },
    { _T("Ryoko"),       DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_COLLECTION, ARRAYSIZE(KarnovsR_A_RYOKO_COLLECTION) },
    { _T("Matlok"),      DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_COLLECTION, ARRAYSIZE(KarnovsR_A_MATLOK_COLLECTION) },
    { _T("Samchay"),     DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_COLLECTION, ARRAYSIZE(KarnovsR_A_SAMCHAY_COLLECTION) },
    { _T("Lee"),         DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_COLLECTION, ARRAYSIZE(KarnovsR_A_LEE_COLLECTION) },
    { _T("Mizoguchi"),   DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_COLLECTION, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_COLLECTION) },
    { _T("Jean"),        DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_COLLECTION, ARRAYSIZE(KarnovsR_A_JEAN_COLLECTION) },
    { _T("Marstorius"),  DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_COLLECTION, ARRAYSIZE(KarnovsR_A_MARSTORIUS_COLLECTION) },
    { _T("Yungmie"),     DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_COLLECTION, ARRAYSIZE(KarnovsR_A_YUNGMIE_COLLECTION) },
    { _T("Zazie"),       DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_COLLECTION, ARRAYSIZE(KarnovsR_A_ZAZIE_COLLECTION) },
    { _T("Clown"),       DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_COLLECTION, ARRAYSIZE(KarnovsR_A_CLOWN_COLLECTION) },
    { _T("Karnov"),      DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_COLLECTION, ARRAYSIZE(KarnovsR_A_KARNOV_COLLECTION) },
};

constexpr auto KarnovsR_A_NUMUNIT = ARRAYSIZE(KarnovsR_A_UNITS);
#define KarnovsR_A_EXTRALOC KarnovsR_A_NUMUNIT

const stExtraDef KarnovsR_A_EXTRA[] =
{
    //Start

    { UNIT_START_VALUE },

    //Extra

    { INVALID_UNIT_VALUE }
};
