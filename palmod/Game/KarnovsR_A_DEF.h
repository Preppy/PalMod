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

const std::vector<uint16_t> KARNOVSR_A_IMGIDS_USED =
{
    indexKarnovsRSprites_Clown,         // 0x00
    indexKarnovsRSprites_Feilin,        // 0x01
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

const sGame_PaletteDataset KarnovsR_A_FEILIN_PUNCH_PALETTES[] =
{
    { L"Feilin P", 0x65820, 0x65840, indexKarnovsRSprites_Feilin, 0, &pairNext },
    { L"Feilin P weak point: armor", 0x659C0, 0x659E0, indexKarnovsRSprites_Feilin, 1 },
    { L"Feilin P Portraits", 0x66040, 0x66060, indexKarnovsRSprites_Feilin, 3 },
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

const sGame_PaletteDataset KarnovsR_A_FEILIN_KICK_PALETTES[] =
{
    { L"Feilin K", 0x65A20, 0x65A40, indexKarnovsRSprites_Feilin, 0, &pairNext },
    { L"Feilin K weak point: armor", 0x65BC0, 0x65BE0, indexKarnovsRSprites_Feilin, 1 },
    { L"Feilin K Portraits", 0x662C0, 0x662E0, indexKarnovsRSprites_Feilin, 3 },
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

const sGame_PaletteDataset KarnovsR_A_FEILIN_SELECTICON_PALETTES[] =
{
    { L"Feilin", 0x65440, 0x65460, indexKarnovsRSprites_Feilin, 2 },
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

const sGame_PaletteDataset KarnovsR_A_OX_PALETTES[] =
{
    { L"Ox", 0x66BC0, 0x66Be0 },
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

const sDescTreeNode KarnovsR_A_FEILIN_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_FEILIN_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_FEILIN_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_FEILIN_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_FEILIN_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_FEILIN_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_FEILIN_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_RAY_COLLECTION[] =
{
    { L"Punch", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_PUNCH_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_PUNCH_PALETTES) },
    { L"Kick", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_KICK_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_KICK_PALETTES) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_SELECTICON_PALETTES, ARRAYSIZE(KarnovsR_A_RAY_SELECTICON_PALETTES) },
};

const sDescTreeNode KarnovsR_A_OX_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsR_A_OX_PALETTES, ARRAYSIZE(KarnovsR_A_OX_PALETTES) },
};

const sDescTreeNode KarnovsR_A_WEAKPOINT_COLLECTION[] =
{
    { k_krNameKey_Punch, DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_P, ARRAYSIZE(KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_P) },
    { k_krNameKey_Kick, DESC_NODETYPE_TREE, (void*)KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_K, ARRAYSIZE(KarnovsR_A_KARNOV_WEAKPOINT_PALETTES_K) },
};

const sDescTreeNode KarnovsR_A_UNITS_ARCADE[] =
{
    { L"Ray",         DESC_NODETYPE_TREE, (void*)KarnovsR_A_RAY_COLLECTION, ARRAYSIZE(KarnovsR_A_RAY_COLLECTION) },
    { L"Feilin",      DESC_NODETYPE_TREE, (void*)KarnovsR_A_FEILIN_COLLECTION, ARRAYSIZE(KarnovsR_A_FEILIN_COLLECTION) },
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
    { L"Ox",          DESC_NODETYPE_TREE, (void*)KarnovsR_A_OX_COLLECTION, ARRAYSIZE(KarnovsR_A_OX_COLLECTION) },
    { k_krNameKey_WeakpointUnit, DESC_NODETYPE_TREE, (void*)KarnovsR_A_WEAKPOINT_COLLECTION, ARRAYSIZE(KarnovsR_A_WEAKPOINT_COLLECTION) },
};

// Ray:
// Ray:Palettes:
const sGame_PaletteDataset KarnovsRRev_A_RAY_PALETTES[] =
{
    { L"P1", 0x71000, 0x71020, indexKarnovsRSprites_Ray, 0 },
    { L"P2", 0x71020, 0x71040, indexKarnovsRSprites_Ray, 0 },
    { L"P3", 0x71040, 0x71060, indexKarnovsRSprites_Ray, 0 },
    { L"P4", 0x71060, 0x71080, indexKarnovsRSprites_Ray, 0 },
    { L"P5", 0x71080, 0x710a0, indexKarnovsRSprites_Ray, 0 },
    { L"P6", 0x710a0, 0x710c0, indexKarnovsRSprites_Ray, 0 },
    { L"P7", 0x710c0, 0x710e0, indexKarnovsRSprites_Ray, 0 },
    { L"P8", 0x710e0, 0x71100, indexKarnovsRSprites_Ray, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_FEILIN_PALETTES[] =
{
// Feilin:
// Palettes:
    { L"P1", 0x71200, 0x71220, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P2", 0x71220, 0x71240, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P3", 0x71240, 0x71260, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P4", 0x71260, 0x71280, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P5", 0x71280, 0x712a0, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P6", 0x712a0, 0x712c0, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P7", 0x712c0, 0x712e0, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
    { L"P8", 0x712e0, 0x71300, indexKarnovsRSprites_Feilin, 0, &pairNext8 },
// Feilin:Weakspot - Armor:
    { L"Armor P1", 0x71300, 0x71320, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P2", 0x71320, 0x71340, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P3", 0x71340, 0x71360, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P4", 0x71360, 0x71380, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P5", 0x71380, 0x713a0, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P6", 0x713a0, 0x713c0, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P7", 0x713c0, 0x713e0, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
    { L"Armor P8", 0x713e0, 0x71400, indexKarnovsRSprites_Feilin, 1, &pairPrevious8 },
};

const sGame_PaletteDataset KarnovsRRev_A_RYOKO_PALETTES[] =
{
// Ryoko:
// Palettes:
    { L"P1", 0x71400, 0x71420, indexKarnovsRSprites_Ryoko, 0 },
    { L"P2", 0x71420, 0x71440, indexKarnovsRSprites_Ryoko, 0 },
    { L"P3", 0x71440, 0x71460, indexKarnovsRSprites_Ryoko, 0 },
    { L"P4", 0x71460, 0x71480, indexKarnovsRSprites_Ryoko, 0 },
    { L"P5", 0x71480, 0x714a0, indexKarnovsRSprites_Ryoko, 0 },
    { L"P6", 0x714a0, 0x714c0, indexKarnovsRSprites_Ryoko, 0 },
    { L"P7", 0x714c0, 0x714e0, indexKarnovsRSprites_Ryoko, 0 },
    { L"P8", 0x714e0, 0x71500, indexKarnovsRSprites_Ryoko, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_MATLOK_PALETTES[] =
{
// Matlok:
// Palettes:
    { L"P1", 0x71600, 0x71620, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P2", 0x71620, 0x71640, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P3", 0x71640, 0x71660, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P4", 0x71660, 0x71680, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P5", 0x71680, 0x716a0, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P6", 0x716a0, 0x716c0, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P7", 0x716c0, 0x716e0, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
    { L"P8", 0x716e0, 0x71700, indexKarnovsRSprites_Matlok, 0, &pairNext8 },
// Matlok:Weakpoint - Headphones:
    { L"Headphones P1", 0x71700, 0x71720, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P2", 0x71720, 0x71740, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P3", 0x71740, 0x71760, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P4", 0x71760, 0x71780, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P5", 0x71780, 0x717a0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P6", 0x717a0, 0x717c0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P7", 0x717c0, 0x717e0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Headphones P8", 0x717e0, 0x71800, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
};

const sGame_PaletteDataset KarnovsRRev_A_SAMCHAY_PALETTES[] =
{
// Samchay:
// Palettes
    { L"P1", 0x71800, 0x71820, indexKarnovsRSprites_Samchay, 0 },
    { L"P2", 0x71820, 0x71840, indexKarnovsRSprites_Samchay, 0 },
    { L"P3", 0x71840, 0x71860, indexKarnovsRSprites_Samchay, 0 },
    { L"P4", 0x71860, 0x71880, indexKarnovsRSprites_Samchay, 0 },
    { L"P5", 0x71880, 0x718a0, indexKarnovsRSprites_Samchay, 0 },
    { L"P6", 0x718a0, 0x718c0, indexKarnovsRSprites_Samchay, 0 },
    { L"P7", 0x718c0, 0x718e0, indexKarnovsRSprites_Samchay, 0 },
    { L"P8", 0x718e0, 0x71900, indexKarnovsRSprites_Samchay, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_LEE_PALETTES[] =
{
// Lee:
// Palettes:
    { L"P1", 0x71a00, 0x71a20, indexKarnovsRSprites_Lee, 0 },
    { L"P2", 0x71a20, 0x71a40, indexKarnovsRSprites_Lee, 0 },
    { L"P3", 0x71a40, 0x71a60, indexKarnovsRSprites_Lee, 0 },
    { L"P4", 0x71a60, 0x71a80, indexKarnovsRSprites_Lee, 0 },
    { L"P5", 0x71a80, 0x71aa0, indexKarnovsRSprites_Lee, 0 },
    { L"P6", 0x71aa0, 0x71ac0, indexKarnovsRSprites_Lee, 0 },
    { L"P7", 0x71ac0, 0x71ae0, indexKarnovsRSprites_Lee, 0 },
    { L"P8", 0x71ae0, 0x71b00, indexKarnovsRSprites_Lee, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_MIZOGUCHI_PALETTES[] =
{
// Mizoguchi:
// Palettes:
    { L"P1", 0x71c00, 0x71c20, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P2", 0x71c20, 0x71c40, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P3", 0x71c40, 0x71c60, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P4", 0x71c60, 0x71c80, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P5", 0x71c80, 0x71ca0, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P6", 0x71ca0, 0x71cc0, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P7", 0x71cc0, 0x71ce0, indexKarnovsRSprites_Mizoguchi, 0 },
    { L"P8", 0x71ce0, 0x71d00, indexKarnovsRSprites_Mizoguchi, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_JEAN_PALETTES[] =
{
// Jean:
// Palettes:
    { L"P1", 0x71e00, 0x71e20, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P2", 0x71e20, 0x71e40, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P3", 0x71e40, 0x71e60, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P4", 0x71e60, 0x71e80, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P5", 0x71e80, 0x71ea0, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P6", 0x71ea0, 0x71ec0, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P7", 0x71ec0, 0x71ee0, indexKarnovsRSprites_Jean, 0, &pairNext8 },
    { L"P8", 0x71ee0, 0x71f00, indexKarnovsRSprites_Jean, 0, &pairNext8 },
// Jean:Weakspot - Legband:
    { L"Legband P1", 0x71f00, 0x71f20, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P2", 0x71f20, 0x71f40, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P3", 0x71f40, 0x71f60, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P4", 0x71f60, 0x71f80, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P5", 0x71f80, 0x71fa0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P6", 0x71fa0, 0x71fc0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P7", 0x71fc0, 0x71fe0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Legband P8", 0x71fe0, 0x72000, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
};

const sGame_PaletteDataset KarnovsRRev_A_MARSTORIUS_PALETTES[] =
{
// Marstorious:
// Palettes:
    { L"P1", 0x72000, 0x72020, indexKarnovsRSprites_Marstorius, 0 },
    { L"P2", 0x72020, 0x72040, indexKarnovsRSprites_Marstorius, 0 },
    { L"P3", 0x72040, 0x72060, indexKarnovsRSprites_Marstorius, 0 },
    { L"P4", 0x72060, 0x72080, indexKarnovsRSprites_Marstorius, 0 },
    { L"P5", 0x72080, 0x720a0, indexKarnovsRSprites_Marstorius, 0 },
    { L"P6", 0x720a0, 0x720c0, indexKarnovsRSprites_Marstorius, 0 },
    { L"P7", 0x720c0, 0x720e0, indexKarnovsRSprites_Marstorius, 0 },
    { L"P8", 0x720e0, 0x72100, indexKarnovsRSprites_Marstorius, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_YUNGMIE_PALETTES[] =
{
// Yungmie:
// Palettes:
    { L"P1", 0x72200, 0x72220, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P2", 0x72220, 0x72240, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P3", 0x72240, 0x72260, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P4", 0x72260, 0x72280, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P5", 0x72280, 0x722a0, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P6", 0x722a0, 0x722c0, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P7", 0x722c0, 0x722e0, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
    { L"P8", 0x722e0, 0x72300, indexKarnovsRSprites_Yungmie, 0, &pairNext8 },
// Yungmie:Weakspot - Sash:
    { L"Sash P1", 0x72300, 0x72320, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P2", 0x72320, 0x72340, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P3", 0x72340, 0x72360, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P4", 0x72360, 0x72380, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P5", 0x72380, 0x723a0, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P6", 0x723a0, 0x723c0, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P7", 0x723c0, 0x723e0, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Sash P8", 0x723e0, 0x72400, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
};

const sGame_PaletteDataset KarnovsRRev_A_ZAZIE_PALETTES[] =
{
// Zazie:
// Palettes:
    { L"P1", 0x72400, 0x72420, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P2", 0x72420, 0x72440, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P3", 0x72440, 0x72460, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P4", 0x72460, 0x72480, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P5", 0x72480, 0x724a0, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P6", 0x724a0, 0x724c0, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P7", 0x724c0, 0x724e0, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
    { L"P8", 0x724e0, 0x72500, indexKarnovsRSprites_Zazie, 0, &pairNext8 },
// Zazie:Weakspot - Bandana:
    { L"Bandana P1", 0x72500, 0x72520, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P2", 0x72520, 0x72540, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P3", 0x72540, 0x72560, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P4", 0x72560, 0x72580, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P5", 0x72580, 0x725a0, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P6", 0x725a0, 0x725c0, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P7", 0x725c0, 0x725e0, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
    { L"Bandana P8", 0x725e0, 0x72600, indexKarnovsRSprites_Yungmie, 1, &pairPrevious8 },
};

const sGame_PaletteDataset KarnovsRRev_A_CLOWN_PALETTES[] =
{
// Clown:
// Palettes:
    { L"P1", 0x72600, 0x72620, indexKarnovsRSprites_Clown, 0 },
    { L"P2", 0x72620, 0x72640, indexKarnovsRSprites_Clown, 0 },
    { L"P3", 0x72640, 0x72660, indexKarnovsRSprites_Clown, 0 },
    { L"P4", 0x72660, 0x72680, indexKarnovsRSprites_Clown, 0 },
    { L"P5", 0x72680, 0x726a0, indexKarnovsRSprites_Clown, 0 },
    { L"P6", 0x726a0, 0x726c0, indexKarnovsRSprites_Clown, 0 },
    { L"P7", 0x726c0, 0x726e0, indexKarnovsRSprites_Clown, 0 },
    { L"P8", 0x726e0, 0x72700, indexKarnovsRSprites_Clown, 0 },
};

const sGame_PaletteDataset KarnovsRRev_A_KARNOV_PALETTES[] =
{
// Karnov:
// Palettes:
    { L"P1", 0x72800, 0x72820, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P2", 0x72820, 0x72840, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P3", 0x72840, 0x72860, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P4", 0x72860, 0x72880, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P5", 0x72880, 0x728a0, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P6", 0x728a0, 0x728c0, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P7", 0x728c0, 0x728e0, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
    { L"P8", 0x728e0, 0x72900, indexKarnovsRSprites_Karnov, 0, &pairNext8 },
// Karnov:Weakspot - Necklace:
    { L"Necklace P1", 0x72900, 0x72920, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P2", 0x72920, 0x72940, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P3", 0x72940, 0x72960, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P4", 0x72960, 0x72980, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P5", 0x72980, 0x729a0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P6", 0x729a0, 0x729c0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P7", 0x729c0, 0x729e0, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
    { L"Necklace P8", 0x729e0, 0x72a00, indexKarnovsRSprites_Bonus, 1, &pairPrevious8 },
};

const sDescTreeNode KarnovsRRev_A_KARNOV_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_KARNOV_PALETTES, ARRAYSIZE(KarnovsRRev_A_KARNOV_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_CLOWN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_CLOWN_PALETTES, ARRAYSIZE(KarnovsRRev_A_CLOWN_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_ZAZIE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_ZAZIE_PALETTES, ARRAYSIZE(KarnovsRRev_A_ZAZIE_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_YUNGMIE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_YUNGMIE_PALETTES, ARRAYSIZE(KarnovsRRev_A_YUNGMIE_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_MARSTORIUS_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_MARSTORIUS_PALETTES, ARRAYSIZE(KarnovsRRev_A_MARSTORIUS_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_JEAN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_JEAN_PALETTES, ARRAYSIZE(KarnovsRRev_A_JEAN_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_MIZOGUCHI_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_MIZOGUCHI_PALETTES, ARRAYSIZE(KarnovsRRev_A_MIZOGUCHI_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_LEE_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_LEE_PALETTES, ARRAYSIZE(KarnovsRRev_A_LEE_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_SAMCHAY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_SAMCHAY_PALETTES, ARRAYSIZE(KarnovsRRev_A_SAMCHAY_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_MATLOK_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_MATLOK_PALETTES, ARRAYSIZE(KarnovsRRev_A_MATLOK_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_RYOKO_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_RYOKO_PALETTES, ARRAYSIZE(KarnovsRRev_A_RYOKO_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_FEILIN_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_FEILIN_PALETTES, ARRAYSIZE(KarnovsRRev_A_FEILIN_PALETTES) },
};

const sDescTreeNode KarnovsRRev_A_RAY_COLLECTION[] =
{
    { L"Palettes", DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_RAY_PALETTES, ARRAYSIZE(KarnovsRRev_A_RAY_PALETTES) },
};

const sDescTreeNode KarnovsR_A_UNITS_REVOLUTION[] =
{
    { L"Ray",         DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_RAY_COLLECTION, ARRAYSIZE(KarnovsRRev_A_RAY_COLLECTION) },
    { L"Feilin",      DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_FEILIN_COLLECTION, ARRAYSIZE(KarnovsRRev_A_FEILIN_COLLECTION) },
    { L"Ryoko",       DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_RYOKO_COLLECTION, ARRAYSIZE(KarnovsRRev_A_RYOKO_COLLECTION) },
    { k_krNameKey_Matlok,  DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_MATLOK_COLLECTION, ARRAYSIZE(KarnovsRRev_A_MATLOK_COLLECTION) },
    { L"Samchay",     DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_SAMCHAY_COLLECTION, ARRAYSIZE(KarnovsRRev_A_SAMCHAY_COLLECTION) },
    { L"Lee",         DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_LEE_COLLECTION, ARRAYSIZE(KarnovsRRev_A_LEE_COLLECTION) },
    { L"Mizoguchi",   DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_MIZOGUCHI_COLLECTION, ARRAYSIZE(KarnovsRRev_A_MIZOGUCHI_COLLECTION) },
    { k_krNameKey_Jean,    DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_JEAN_COLLECTION, ARRAYSIZE(KarnovsRRev_A_JEAN_COLLECTION) },
    { L"Marstorius",  DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_MARSTORIUS_COLLECTION, ARRAYSIZE(KarnovsRRev_A_MARSTORIUS_COLLECTION) },
    { k_krNameKey_Yungmie, DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_YUNGMIE_COLLECTION, ARRAYSIZE(KarnovsRRev_A_YUNGMIE_COLLECTION) },
    { k_krNameKey_Zazie,   DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_ZAZIE_COLLECTION, ARRAYSIZE(KarnovsRRev_A_ZAZIE_COLLECTION) },
    { L"Clown",       DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_CLOWN_COLLECTION, ARRAYSIZE(KarnovsRRev_A_CLOWN_COLLECTION) },
    { k_krNameKey_Karnov,  DESC_NODETYPE_TREE, (void*)KarnovsRRev_A_KARNOV_COLLECTION, ARRAYSIZE(KarnovsRRev_A_KARNOV_COLLECTION) },
};
