#pragma once

#define k_krNameKey_Jean L"Jean"
#define k_krNameKey_Karnov L"Karnov"
#define k_krNameKey_Matlok L"Matlok"
#define k_krNameKey_Yungmie L"Yungmie"
#define k_krNameKey_Zazie L"Zazie"
#define k_krNameKey_WeakpointUnit L"Shared Weak Points"
#define k_krNameKey_Punch L"Punch"
#define k_krNameKey_Kick L"Kick"
#define k_krNameKey_Weakpoints_P_YungmieZazie L"P Yungmie's sash, Zazie's bandana"
#define k_krNameKey_Weakpoints_P_JeanMatlokKarnov L"P Jean's legband, Matlok's headphones, Karnov's necklace"
#define k_krNameKey_Weakpoints_K_YungmieZazie L"K Yungmie's sash, Zazie's bandana"
#define k_krNameKey_Weakpoints_K_JeanMatlokKarnov L"K Jean's legband, Matlok's headphones, Karnov's necklace"

const UINT16 KARNOVSR_A_IMGIDS_USED[] =
{
    indexKarnovsRSprites_Clown,         // 0x00
    indexKarnovsRSprites_Felin,         // 0x01
    indexKarnovsRSprites_Jean,          // 0x02
    indexKarnovsRSprites_Karnov,        // 0x03
    indexKarnovsRSprites_Lee,           // 0x04
    indexKarnovsRSprites_Marstorius,    // 0x05
    indexKarnovsRSprites_Matlok,        // 0x06
    indexKarnovsRSprites_Mizoguchi,     // 0x07
    indexKarnovsRSprites_Ray,           // 0x08
    indexKarnovsRSprites_Ryoko,         // 0x09
    indexKarnovsRSprites_Samchay,       // 0x0a
    indexKarnovsRSprites_Yungmie,       // 0x0b
    indexKarnovsRSprites_Zazie,         // 0x0c
    indexKarnovsRSprites_Bonus,         // 0x0d
    indexKarnovsRSprites_Stages,        // 0x0e
};

const sGame_PaletteDataset KarnovsR_A_RAY_PUNCH_PALETTES[] =
{
    { L"Ray P", 0x65800, 0x65820, indexKarnovsRSprites_Ray, 0 },
    { L"Ray P Portraits", 0x66000, 0x66040, indexKarnovsRSprites_Ray, 3 },
};

const sGame_PaletteDataset KarnovsR_A_FELIN_PUNCH_PALETTES[] =
{
    { L"Felin P", 0x65820, 0x65840, indexKarnovsRSprites_Felin, 0, &pairNext },
    { L"Felin P weak point: armor", 0x659C0, 0x659E0, indexKarnovsRSprites_Felin, 1 },
    { L"Felin P Portraits", 0x66040, 0x66060, indexKarnovsRSprites_Felin, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RYOKO_PUNCH_PALETTES[] =
{
    { L"Ryoko P", 0x65840, 0x65860, indexKarnovsRSprites_Ryoko, 0 },
    { L"Ryoko P Portraits", 0x66060, 0x66080, indexKarnovsRSprites_Ryoko, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MATLOK_PUNCH_PALETTES[] =
{
    { L"Matlok P", 0x65860, 0x65880, indexKarnovsRSprites_Matlok, 0, &pairHandledInCode },
    { L"Matlok P Portraits", 0x66080, 0x660C0, indexKarnovsRSprites_Matlok, 3 },
};

const sGame_PaletteDataset KarnovsR_A_SAMCHAY_PUNCH_PALETTES[] =
{
    { L"Samchay P", 0x65880, 0x658A0, indexKarnovsRSprites_Samchay, 0 },
    { L"Samchay P Portraits", 0x660C0, 0x66100, indexKarnovsRSprites_Samchay, 3 },
};

const sGame_PaletteDataset KarnovsR_A_LEE_PUNCH_PALETTES[] =
{
    { L"Lee P", 0x658A0, 0x658C0, indexKarnovsRSprites_Lee, 0 },
    { L"Lee P Portraits", 0x66100, 0x66120, indexKarnovsRSprites_Lee, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MIZOGUCHI_PUNCH_PALETTES[] =
{
    { L"Mizoguchi P", 0x658C0, 0x658E0, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"Mizoguchi", 0x66120, 0x66140, indexKarnovsRSprites_Mizoguchi, 3 },
};

const sGame_PaletteDataset KarnovsR_A_JEAN_PUNCH_PALETTES[] =
{
    { L"Jean P", 0x658E0, 0x65900, indexKarnovsRSprites_Jean, 0, &pairHandledInCode },
    { L"Jean P Portraits", 0x66140, 0x66180, indexKarnovsRSprites_Jean, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MARSTORIUS_PUNCH_PALETTES[] =
{
    { L"Marstorius P", 0x65900, 0x65920, indexKarnovsRSprites_Marstorius, 0 },
    { L"Marstorius P Portraits", 0x66180, 0x661C0, indexKarnovsRSprites_Marstorius, 3 },
};

const sGame_PaletteDataset KarnovsR_A_YUNGMIE_PUNCH_PALETTES[] =
{
    { L"Yungmie P", 0x65920, 0x65940, indexKarnovsRSprites_Yungmie, 0, &pairHandledInCode },
    { L"Yungmie P Portraits", 0x66200, 0x66220, indexKarnovsRSprites_Yungmie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_ZAZIE_PUNCH_PALETTES[] =
{
    { L"Zazie P", 0x65940, 0x65960, indexKarnovsRSprites_Zazie, 0, &pairHandledInCode },
    { L"Zazie P Portraits", 0x66220, 0x66260, indexKarnovsRSprites_Zazie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_CLOWN_PUNCH_PALETTES[] =
{
    { L"Clown P", 0x65960, 0x65980, indexKarnovsRSprites_Clown, 0 },
    { L"Clown P Portraits", 0x661C0, 0x66200, indexKarnovsRSprites_Clown, 3 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_PUNCH_PALETTES[] =
{
    { L"Karnov P", 0x65980, 0x659A0, indexKarnovsRSprites_Karnov, 0, &pairHandledInCode },
    { L"Karnov P Portraits", 0x66260, 0x66280, indexKarnovsRSprites_Karnov, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RAY_KICK_PALETTES[] =
{
    { L"Ray K", 0x65A00, 0x65A20, indexKarnovsRSprites_Ray, 0 },
    { L"Ray K Portraits", 0x66280, 0x662C0, indexKarnovsRSprites_Ray, 3 },
};

const sGame_PaletteDataset KarnovsR_A_FELIN_KICK_PALETTES[] =
{
    { L"Felin K", 0x65A20, 0x65A40, indexKarnovsRSprites_Felin, 0, &pairNext },
    { L"Felin K weak point: armor", 0x65BC0, 0x65BE0, indexKarnovsRSprites_Felin, 1 },
    { L"Felin K Portraits", 0x662C0, 0x662E0, indexKarnovsRSprites_Felin, 3 },
};

const sGame_PaletteDataset KarnovsR_A_RYOKO_KICK_PALETTES[] =
{
    { L"Ryoko K", 0x65A40, 0x65A60, indexKarnovsRSprites_Ryoko, 0},
    { L"Ryoko K Portraits", 0x662E0, 0x66300, indexKarnovsRSprites_Ryoko, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MATLOK_KICK_PALETTES[] =
{
    { L"Matlok K", 0x65A60, 0x65A80, indexKarnovsRSprites_Matlok, 0, &pairHandledInCode },
    { L"Matlok K Portraits", 0x66300, 0x66340, indexKarnovsRSprites_Matlok, 3 },
};

const sGame_PaletteDataset KarnovsR_A_SAMCHAY_KICK_PALETTES[] =
{
    { L"Samchay K", 0x65A80, 0x65AA0, indexKarnovsRSprites_Samchay, 0 },
    { L"Samchay K Portraits", 0x66340, 0x66380, indexKarnovsRSprites_Samchay, 3 },
};

const sGame_PaletteDataset KarnovsR_A_LEE_KICK_PALETTES[] =
{
    { L"Lee K", 0x65AA0, 0x65AC0, indexKarnovsRSprites_Lee, 0 },
    { L"Lee K Portraits", 0x66380, 0x663A0, indexKarnovsRSprites_Lee, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MIZOGUCHI_KICK_PALETTES[] =
{
    { L"Mizoguchi K", 0x65AC0, 0x65AE0, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"Mizoguchi K Portraits", 0x663A0, 0x663C0, indexKarnovsRSprites_Mizoguchi, 3 },
};

const sGame_PaletteDataset KarnovsR_A_JEAN_KICK_PALETTES[] =
{
    { L"Jean K", 0x65AE0, 0x65B00, indexKarnovsRSprites_Jean, 0, &pairHandledInCode },
    { L"Jean K Portraits", 0x663C0, 0x66400, indexKarnovsRSprites_Jean, 3 },
};

const sGame_PaletteDataset KarnovsR_A_MARSTORIUS_KICK_PALETTES[] =
{
    { L"Marstorius K", 0x65B00, 0x65B20, indexKarnovsRSprites_Marstorius, 0 },
    { L"Marstorius K Portraits", 0x66400, 0x66440, indexKarnovsRSprites_Marstorius, 3 },
};

const sGame_PaletteDataset KarnovsR_A_YUNGMIE_KICK_PALETTES[] =
{
    { L"Yungmie K", 0x65B20, 0x65B40, indexKarnovsRSprites_Yungmie, 0, &pairHandledInCode },
    { L"Yungmie K Portraits", 0x66480, 0x664A0, indexKarnovsRSprites_Yungmie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_ZAZIE_KICK_PALETTES[] =
{
    { L"Zazie K", 0x65B40, 0x65B60, indexKarnovsRSprites_Zazie, 0, &pairHandledInCode },
    { L"Zazie K Portraits", 0x664A0, 0x664E0, indexKarnovsRSprites_Zazie, 3 },
};

const sGame_PaletteDataset KarnovsR_A_CLOWN_KICK_PALETTES[] =
{
    { L"Clown K", 0x65B60, 0x65B80, indexKarnovsRSprites_Clown, 0 },
    { L"Clown K Portraits", 0x66440, 0x66480, indexKarnovsRSprites_Clown, 3 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_KICK_PALETTES[] =
{
    { L"Karnov K", 0x65B80, 0x65BA0, indexKarnovsRSprites_Karnov, 0, &pairHandledInCode },
    { L"Karnov K Portraits", 0x664E0, 0x66500, indexKarnovsRSprites_Karnov, 3 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_P[] =
{
    { k_krNameKey_Weakpoints_P_YungmieZazie,      0x659A0, 0x659C0, indexKarnovsRSprites_Yungmie, 1 },
    { k_krNameKey_Weakpoints_P_JeanMatlokKarnov,  0x659e0, 0x65a00, indexKarnovsRSprites_Bonus, 1 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_K[] =
{
    { k_krNameKey_Weakpoints_K_YungmieZazie,      0x65BA0, 0x65BC0, indexKarnovsRSprites_Yungmie, 1 },
    { k_krNameKey_Weakpoints_K_JeanMatlokKarnov,  0x65Be0, 0x65c00, indexKarnovsRSprites_Bonus, 1 },
};

const sGame_PaletteDataset KarnovsR_A_RAY_SELECTICON_PALETTES[] =
{
    { L"Ray", 0x65420, 0x65440, indexKarnovsRSprites_Ray, 2 },
};

const sGame_PaletteDataset KarnovsR_A_FELIN_SELECTICON_PALETTES[] =
{
    { L"Felin", 0x65440, 0x65460, indexKarnovsRSprites_Felin, 2 },
};

const sGame_PaletteDataset KarnovsR_A_RYOKO_SELECTICON_PALETTES[] =
{
    { L"Ryoko", 0x65460, 0x65480, indexKarnovsRSprites_Ryoko, 2 },
};

const sGame_PaletteDataset KarnovsR_A_MATLOK_SELECTICON_PALETTES[] =
{
    { L"Matlok", 0x65480, 0x654A0, indexKarnovsRSprites_Matlok, 2 },
};

const sGame_PaletteDataset KarnovsR_A_SAMCHAY_SELECTICON_PALETTES[] =
{
    { L"Samchay", 0x654A0, 0x654C0, indexKarnovsRSprites_Samchay, 2 },
};

const sGame_PaletteDataset KarnovsR_A_LEE_SELECTICON_PALETTES[] =
{
    { L"Lee", 0x654C0, 0x654E0, indexKarnovsRSprites_Lee, 2 },
};

const sGame_PaletteDataset KarnovsR_A_MIZOGUCHI_SELECTICON_PALETTES[] =
{
    { L"Mizoguchi", 0x654E0, 0x65500, indexKarnovsRSprites_Mizoguchi, 2 },
};

const sGame_PaletteDataset KarnovsR_A_JEAN_SELECTICON_PALETTES[] =
{
    { L"Jean", 0x65500, 0x65520, indexKarnovsRSprites_Jean, 2 },
};

const sGame_PaletteDataset KarnovsR_A_MARSTORIUS_SELECTICON_PALETTES[] =
{
    { L"Marstorius", 0x65520, 0x65540, indexKarnovsRSprites_Marstorius, 2 },
};

const sGame_PaletteDataset KarnovsR_A_YUNGMIE_SELECTICON_PALETTES[] =
{
    { L"Yungmie", 0x65540, 0x65560, indexKarnovsRSprites_Yungmie, 2 },
};

const sGame_PaletteDataset KarnovsR_A_ZAZIE_SELECTICON_PALETTES[] =
{
    { L"Zazie", 0x65560, 0x65580, indexKarnovsRSprites_Zazie, 2 },
};

const sGame_PaletteDataset KarnovsR_A_CLOWN_SELECTICON_PALETTES[] =
{
    { L"Clown", 0x65580, 0x655A0, indexKarnovsRSprites_Clown, 2 },
};

const sGame_PaletteDataset KarnovsR_A_KARNOV_SELECTICON_PALETTES[] =
{
    { L"Karnov", 0x655A0, 0x655C0, indexKarnovsRSprites_Karnov, 2 },
};

const sDescTreeNode KarnovsR_A_KARNOV_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_KARNOV_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_KARNOV_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_KARNOV_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_CLOWN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_CLOWN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_CLOWN_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_CLOWN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_ZAZIE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_ZAZIE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_ZAZIE_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_ZAZIE_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_YUNGMIE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_YUNGMIE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_YUNGMIE_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_YUNGMIE_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_MARSTORIUS_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_MARSTORIUS_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_MARSTORIUS_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_MARSTORIUS_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_JEAN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_JEAN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_JEAN_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_JEAN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_MIZOGUCHI_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_LEE_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_LEE_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_LEE_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_LEE_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_SAMCHAY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_SAMCHAY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_SAMCHAY_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_SAMCHAY_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_MATLOK_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_MATLOK_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_MATLOK_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_MATLOK_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_RYOKO_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_RYOKO_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_RYOKO_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_RYOKO_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_FELIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_FELIN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_FELIN_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_FELIN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_RAY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_WEAKPOINT_COLLECTION[] =
{
    { k_krNameKey_Punch, DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_P, ARRAYSIZE(KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_P) },
    { k_krNameKey_Kick, DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_K, ARRAYSIZE(KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_K) },
};

const sDescTreeNode KarnovsR_A_UNITS[] =
{
    { L"Ray",         DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_COLLECTION, ARRAYSIZE(KarnovsR_A_RAY_COLLECTION) },
    { L"Felin",       DESC_NODETYPE_TREE, (void*)KarnovsR_A_FELIN_COLLECTION, ARRAYSIZE(KarnovsR_A_FELIN_COLLECTION) },
    { L"Ryoko",       DESC_NODETYPE_TREE, (void*)KarnovsR_A_RYOKO_COLLECTION, ARRAYSIZE(KarnovsR_A_RYOKO_COLLECTION) },
    { k_krNameKey_Matlok,  DESC_NODETYPE_TREE, (void*)KarnovsR_A_MATLOK_COLLECTION, ARRAYSIZE(KarnovsR_A_MATLOK_COLLECTION) },
    { L"Samchay",     DESC_NODETYPE_TREE, (void*)KarnovsR_A_SAMCHAY_COLLECTION, ARRAYSIZE(KarnovsR_A_SAMCHAY_COLLECTION) },
    { L"Lee",         DESC_NODETYPE_TREE, (void*)KarnovsR_A_LEE_COLLECTION, ARRAYSIZE(KarnovsR_A_LEE_COLLECTION) },
    { L"Mizoguchi",   DESC_NODETYPE_TREE, (void*)KarnovsR_A_MIZOGUCHI_COLLECTION, ARRAYSIZE(KarnovsR_A_MIZOGUCHI_COLLECTION) },
    { k_krNameKey_Jean,    DESC_NODETYPE_TREE, (void*)KarnovsR_A_JEAN_COLLECTION, ARRAYSIZE(KarnovsR_A_JEAN_COLLECTION) },
    { L"Marstorius",  DESC_NODETYPE_TREE, (void*)KarnovsR_A_MARSTORIUS_COLLECTION, ARRAYSIZE(KarnovsR_A_MARSTORIUS_COLLECTION) },
    { k_krNameKey_Yungmie, DESC_NODETYPE_TREE, (void*)KarnovsR_A_YUNGMIE_COLLECTION, ARRAYSIZE(KarnovsR_A_YUNGMIE_COLLECTION) },
    { k_krNameKey_Zazie,   DESC_NODETYPE_TREE, (void*)KarnovsR_A_ZAZIE_COLLECTION, ARRAYSIZE(KarnovsR_A_ZAZIE_COLLECTION) },
    { L"Clown",       DESC_NODETYPE_TREE, (void*)KarnovsR_A_CLOWN_COLLECTION, ARRAYSIZE(KarnovsR_A_CLOWN_COLLECTION) },
    { k_krNameKey_Karnov,  DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_COLLECTION, ARRAYSIZE(KarnovsR_A_KARNOV_COLLECTION) },
    { k_krNameKey_WeakpointUnit, DESC_NODETYPE_TREE, (void*)KarnovsR_A_WEAKPOINT_COLLECTION, ARRAYSIZE(KarnovsR_A_WEAKPOINT_COLLECTION) },
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
