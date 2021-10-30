#pragma once

// To add characters or palette lists:
// * If you need a new character, add them to Cyberbots_A_UNITS.
// * Add an associated collection of their respective nodes
// * or expand nodes as needed
// * Then create the set of palettes for that character
// That should be it.  Good luck.

const UINT16 Cyberbots_A_IMGIDS_USED[] =
{
    indexCyberbots_Blodia,          // 0xA5
    indexCyberbots_Cyclone,         // 0xA6
    indexCyberbots_Fordy,           // 0xA7
    indexCyberbots_Gaits,           // 0xA8
    indexCyberbots_Guldin,          // 0xA9
    indexCyberbots_Helion,          // 0xAA
    indexCyberbots_Jackal,          // 0xAB
    indexCyberbots_KillerBee,       // 0xAC
    indexCyberbots_Lightning,       // 0xAD
    indexCyberbots_Reptos,          // 0xAE
    indexCyberbots_Riot,            // 0xAF
    indexCyberbots_Super8,          // 0xB0
    indexCyberbots_Swordsman,       // 0xB1
    indexCyberbots_Tarantula,       // 0xB2
    indexCyberbots_Unknown,         // 0xB3
    indexCyberbots_Vise,            // 0xB4
    indexCyberbots_Warlock,         // 0xB5
    indexCyberbots_Bonus,           // 0xB6

};

//---MACHINES---

//--BX-02 BLODIA--

const sGame_PaletteDataset Cyberbots_A_BLODIA_P1_PALETTES[] =
{
    { L"P1 Blodia Top", 0x4Fb86, 0x4Fba6, indexCyberbots_Blodia, 0x03, &pairFullyLinkedNode },
    { L"P1 Blodia Legs", 0x50406, 0x50426, indexCyberbots_Blodia, 0x01 },
    { L"P1 Blodia Arm", 0x50C06, 0x50C26, indexCyberbots_Blodia, 0x00 },
    { L"P1 Blodia Weapon", 0x51b06, 0x51b26, indexCyberbots_Blodia, 0x04 },
    { L"P1 Blodia Shield", 0x513e6, 0x51406, indexCyberbots_Blodia, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_BLODIA_P2_PALETTES[] =
{
    { L"P2 Blodia Top", 0x4Fc06, 0x4Fc26, indexCyberbots_Blodia, 0x03, &pairFullyLinkedNode },
    { L"P2 Blodia Legs", 0x50486, 0x504a6, indexCyberbots_Blodia, 0x01 },
    { L"P2 Blodia Arm", 0x50c86, 0x50ca6, indexCyberbots_Blodia, 0x00 },
    { L"P2 Blodia Weapon", 0x51c86, 0x51ca6, indexCyberbots_Blodia, 0x04 },
    { L"P2 Blodia Shield", 0x51446, 0x51466, indexCyberbots_Blodia, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_BLODIA_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Blodia Top Underwater", 0x4fe86, 0x4fea6, indexCyberbots_Blodia, 0x03, &pairFullyLinkedNode },
    { L"P1 Blodia Legs Underwater", 0x50706, 0x50726, indexCyberbots_Blodia, 0x01 },
    { L"P1 Blodia Arm Underwater", 0x50f06, 0x50f26, indexCyberbots_Blodia, 0x00 },
    { L"P1 Blodia Weapon Underwater", 0x51e06, 0x51e26, indexCyberbots_Blodia, 0x04 },
    { L"P1 Blodia Shield Underwater", 0x51626, 0x51646, indexCyberbots_Blodia, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_BLODIA_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Blodia Top Underwater", 0x4ff06, 0x4ff26, indexCyberbots_Blodia, 0x03, &pairFullyLinkedNode },
    { L"P2 Blodia Legs Underwater", 0x50786, 0x507a6, indexCyberbots_Blodia, 0x01 },
    { L"P2 Blodia Arm Underwater", 0x50f86, 0x50fa6, indexCyberbots_Blodia, 0x00 },
    { L"P2 Blodia Weapon Underwater", 0x51f86, 0x51fa6, indexCyberbots_Blodia, 0x04 },
    { L"P2 Blodia Shield Underwater", 0x51686, 0x516a6, indexCyberbots_Blodia, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_BLODIA_PORTRAIT_PALETTES[] =
{
    { L"P1 Blodia Portrait", 0x553e4, 0x55424, indexCyberbots_Blodia, 0x40 },
    { L"P2 Blodia Portrait", 0x565e4, 0x56624, indexCyberbots_Blodia, 0x40 },
};

//BX-04S SWORDSMAN--

const sGame_PaletteDataset Cyberbots_A_SWORDSMAN_P1_PALETTES[] =
{
    { L"P1 Swordsman Top", 0x4FC86, 0x4FCA6, indexCyberbots_Swordsman, 0x02, &pairFullyLinkedNode },
    { L"P1 Swordsman Treads", 0x50506, 0x50526, indexCyberbots_Swordsman, 0x03 },
    { L"P1 Swordsman Arm", 0x50D06, 0x50D26, indexCyberbots_Swordsman, 0x00 },
    { L"P1 Swordsman Weapon", 0x51B26, 0x51B46, indexCyberbots_Swordsman, 0x04 },
    { L"P1 Swordsman Shield", 0x514a6, 0x514c6, indexCyberbots_Swordsman, 0x01 },
    { L"P1 Swordsman Laser", 0x52446, 0x52466 },
};

const sGame_PaletteDataset Cyberbots_A_SWORDSMAN_P2_PALETTES[] =
{
    { L"P2 Swordsman Top", 0x4Fd06, 0x4Fd26, indexCyberbots_Swordsman, 0x02, &pairFullyLinkedNode },
    { L"P2 Swordsman Treads", 0x50586, 0x505a6, indexCyberbots_Swordsman, 0x03 },
    { L"P2 Swordsman Arm", 0x50d86, 0x50da6, indexCyberbots_Swordsman, 0x0 },
    { L"P2 Swordsman Weapon", 0x51ca6, 0x51cc6, indexCyberbots_Swordsman, 0x04 },
    { L"P2 Swordsman Shield", 0x51506, 0x51526, indexCyberbots_Swordsman, 0x01 },
    { L"P2 Swordsman Laser", 0x524c6, 0x524e6 },
};

const sGame_PaletteDataset Cyberbots_A_SWORDSMAN_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Swordsman Top Underwater", 0x4ff86, 0x4ffa6, indexCyberbots_Swordsman, 0x02, &pairFullyLinkedNode },
    { L"P1 Swordsman Treads Underwater", 0x50806, 0x50826, indexCyberbots_Swordsman, 0x03 },
    { L"P1 Swordsman Arm Underwater", 0x51006, 0x51026, indexCyberbots_Swordsman, 0x0 },
    { L"P1 Swordsman Weapon Underwater", 0x51e26, 0x51e46, indexCyberbots_Swordsman, 0x04 },
    { L"P1 Swordsman Shield Underwater", 0x516e6, 0x51706, indexCyberbots_Swordsman, 0x01 },
    { L"P1 Swordsman Laser Underwater", 0x52746, 0x52766 },
};

const sGame_PaletteDataset Cyberbots_A_SWORDSMAN_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Swordsman Top Underwater", 0x50006, 0x50026, indexCyberbots_Swordsman, 0x02, &pairFullyLinkedNode },
    { L"P2 Swordsman Treads Underwater", 0x50886, 0x508a6, indexCyberbots_Swordsman, 0x03 },
    { L"P2 Swordsman Arm Underwater", 0x51086, 0x510a6, indexCyberbots_Swordsman, 0x0 },
    { L"P2 Swordsman Weapon Underwater", 0x51fa6, 0x51fc6, indexCyberbots_Swordsman, 0x04 },
    { L"P2 Swordsman Shield Underwater", 0x51746, 0x51766, indexCyberbots_Swordsman, 0x01 },
    { L"P2 Swordsman Laser Underwater", 0x527c6, 0x527e6 },
};

const sGame_PaletteDataset Cyberbots_A_SWORDSMAN_PORTRAIT_PALETTES[] =
{
    { L"P1 Swordsman Portrait", 0x555e4, 0x55644, indexCyberbots_Swordsman, 0x40 },
    { L"P2 Swordsman Portrait", 0x567e4, 0x56844, indexCyberbots_Swordsman, 0x40 },
};

//BX-07R RIOT--

const sGame_PaletteDataset Cyberbots_A_RIOT_P1_PALETTES[] =
{
    { L"P1 Riot Top", 0x4Fd86, 0x4Fda6, indexCyberbots_Riot, 0x04, &pairFullyLinkedNode },
    { L"P1 Riot Jets", 0x50606, 0x50626, indexCyberbots_Riot, 0x01 },
    { L"P1 Riot Arm", 0x50e06, 0x50e26, indexCyberbots_Riot, 0x00 },
    { L"P1 Riot Weapon", 0x51b46, 0x51b66, indexCyberbots_Riot, 0x05 },
    { L"P1 Riot Shield", 0x51566, 0x51586, indexCyberbots_Riot, 0x03 },
    { L"P1 Riot Jet Effects", 0x51a06, 0x51a26, indexCyberbots_Riot, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_RIOT_P2_PALETTES[] =
{
    { L"P2 Riot Top", 0x4Fe06, 0x4Fe26, indexCyberbots_Riot, 0x04, &pairFullyLinkedNode },
    { L"P2 Riot Jets", 0x50686, 0x506a6, indexCyberbots_Riot, 0x01 },
    { L"P2 Riot Arm", 0x50e86, 0x50ea6, indexCyberbots_Riot, 0x0 },
    { L"P2 Riot Weapon", 0x51cc6, 0x51ce6, indexCyberbots_Riot, 0x05 },
    { L"P2 Riot Shield", 0x515c6, 0x515e6, indexCyberbots_Riot, 0x03 },
    { L"P2 Riot Jet Effects", 0x51a26, 0x51a46, indexCyberbots_Riot, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_RIOT_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Riot Top Underwater", 0x50086, 0x500a6, indexCyberbots_Riot, 0x04, &pairFullyLinkedNode },
    { L"P1 Riot Jets Underwater", 0x50906, 0x50926, indexCyberbots_Riot, 0x01 },
    { L"P1 Riot Arm Underwater", 0x51106, 0x51126, indexCyberbots_Riot, 0x0 },
    { L"P1 Riot Weapon Underwater", 0x51e46, 0x51e66, indexCyberbots_Riot, 0x05 },
    { L"P1 Riot Shield Underwater", 0x517a6, 0x517c6, indexCyberbots_Riot, 0x03 },
    { L"P1 Riot Jet Effects Underwater", 0x51ac6, 0x51ae6, indexCyberbots_Riot, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_RIOT_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Riot Top Underwater", 0x50106, 0x50126, indexCyberbots_Riot, 0x04, &pairFullyLinkedNode },
    { L"P2 Riot Jets Underwater", 0x50986, 0x509a6, indexCyberbots_Riot, 0x01 },
    { L"P2 Riot Arm Underwater", 0x51186, 0x511a6, indexCyberbots_Riot, 0x0 },
    { L"P2 Riot Weapon Underwater", 0x51fc6, 0x51fe6, indexCyberbots_Riot, 0x05 },
    { L"P2 Riot Shield Underwater", 0x51806, 0x51826, indexCyberbots_Riot, 0x03 },
    { L"P2 Riot Jet Effects Underwater", 0x51ae6, 0x51b06, indexCyberbots_Riot, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_RIOT_PORTRAIT_PALETTES[] =
{
    { L"P1 Riot Portrait", 0x55864, 0x558c4, indexCyberbots_Riot, 0x40 },
    { L"P2 Riot Portrait", 0x56a64, 0x56ac4, indexCyberbots_Riot, 0x40 },
};

//--RF-004 REPTOS--

const sGame_PaletteDataset Cyberbots_A_REPTOS_P1_PALETTES[] =
{
    { L"P1 Reptos Top", 0x4Fb46, 0x4Fb66, indexCyberbots_Reptos, 0x03, &pairFullyLinkedNode },
    { L"P1 Reptos Legs", 0x503c6, 0x503e6, indexCyberbots_Reptos, 0x01 },
    { L"P1 Reptos Arm", 0x50bc6, 0x50be6, indexCyberbots_Reptos, 0x0 },
    { L"P1 Reptos Weapon", 0x51b66, 0x51b86, indexCyberbots_Reptos, 0x04 },
    { L"P1 Reptos Shield", 0x513c6, 0x513e6, indexCyberbots_Reptos, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_REPTOS_P2_PALETTES[] =
{
    { L"P2 Reptos Top", 0x4Fbc6, 0x4Fbe6, indexCyberbots_Reptos, 0x03, &pairFullyLinkedNode },
    { L"P2 Reptos Legs", 0x50446, 0x50466, indexCyberbots_Reptos, 0x01 },
    { L"P2 Reptos Arm", 0x50c46, 0x50c66, indexCyberbots_Reptos, 0x0 },
    { L"P2 Reptos Weapon", 0x51ce6, 0x51d06, indexCyberbots_Reptos, 0x04 },
    { L"P2 Reptos Shield", 0x51426, 0x51446, indexCyberbots_Reptos, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_REPTOS_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Reptos Top Underwater", 0x4fe46, 0x4fe66, indexCyberbots_Reptos, 0x03, &pairFullyLinkedNode },
    { L"P1 Reptos Legs Underwater", 0x506c6, 0x506e6, indexCyberbots_Reptos, 0x01 },
    { L"P1 Reptos Arm Underwater", 0x50ec6, 0x50ee6, indexCyberbots_Reptos, 0x0 },
    { L"P1 Reptos Weapon Underwater", 0x51e66, 0x51e86, indexCyberbots_Reptos, 0x04 },
    { L"P1 Reptos Shield Underwater", 0x51606, 0x51626, indexCyberbots_Reptos, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_REPTOS_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Reptos Top Underwater", 0x4fec6, 0x4fee6, indexCyberbots_Reptos, 0x03, &pairFullyLinkedNode },
    { L"P2 Reptos Legs Underwater", 0x50746, 0x50766, indexCyberbots_Reptos, 0x01 },
    { L"P2 Reptos Arm Underwater", 0x50f46, 0x50f66, indexCyberbots_Reptos, 0x0 },
    { L"P2 Reptos Weapon Underwater", 0x51fe6, 0x52006, indexCyberbots_Reptos, 0x04 },
    { L"P2 Reptos Shield Underwater", 0x51666, 0x51686, indexCyberbots_Reptos, 0x02 },
};

const sGame_PaletteDataset Cyberbots_A_REPTOS_PORTRAIT_PALETTES[] =
{
    { L"P1 Reptos Portrait", 0x55464, 0x554a4, indexCyberbots_Reptos, 0x40 },
    { L"P2 Reptos Portrait", 0x56664, 0x566a4, indexCyberbots_Reptos, 0x40 },
};

//RF-009 LIGHTNING--

const sGame_PaletteDataset Cyberbots_A_LIGHTNING_P1_PALETTES[] =
{
    { L"P1 Lightning Top", 0x4Fc46, 0x4Fc66, indexCyberbots_Lightning, 0x2, &pairFullyLinkedNode },
    { L"P1 Lightning Treads", 0x504c6, 0x504e6, indexCyberbots_Lightning, 0x3 },
    { L"P1 Lightning Arm", 0x50cc6, 0x50ce6, indexCyberbots_Lightning, 0x0 },
    { L"P1 Lightning Weapon", 0x51b86, 0x51ba6, indexCyberbots_Lightning, 0x4 },
    { L"P1 Lightning Shield", 0x51486, 0x514a6, indexCyberbots_Lightning, 0x1 },
    { L"P1 Lightning Electricity", 0x52406, 0x52426 },
};

const sGame_PaletteDataset Cyberbots_A_LIGHTNING_P2_PALETTES[] =
{
    { L"P2 Lightning Top", 0x4Fcc6, 0x4Fce6, indexCyberbots_Lightning, 0x2, &pairFullyLinkedNode },
    { L"P2 Lightning Treads", 0x50546, 0x50566, indexCyberbots_Lightning, 0x3 },
    { L"P2 Lightning Arm", 0x50d46, 0x50d66, indexCyberbots_Lightning, 0x0 },
    { L"P2 Lightning Weapon", 0x51d06, 0x51d26, indexCyberbots_Lightning, 0x4 },
    { L"P2 Lightning Shield", 0x514e6, 0x51506, indexCyberbots_Lightning, 0x1 },
    { L"P2 Lightning Electricity", 0x52486, 0x524a6 },
};

const sGame_PaletteDataset Cyberbots_A_LIGHTNING_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Lightning Top Underwater", 0x4ff46, 0x4ff66, indexCyberbots_Lightning, 0x2, &pairFullyLinkedNode },
    { L"P1 Lightning Treads Underwater", 0x507c6, 0x507e6, indexCyberbots_Lightning, 0x3 },
    { L"P1 Lightning Arm Underwater", 0x50fc6, 0x50fe6, indexCyberbots_Lightning, 0x0 },
    { L"P1 Lightning Weapon Underwater", 0x51e86, 0x51ea6, indexCyberbots_Lightning, 0x4 },
    { L"P1 Lightning Shield Underwater", 0x516c6, 0x516e6, indexCyberbots_Lightning, 0x1 },
    { L"P1 Lightning Electricity Underwater", 0x52706, 0x52726 },
};

const sGame_PaletteDataset Cyberbots_A_LIGHTNING_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Lightning Top Underwater", 0x4ffc6, 0x4ffe6, indexCyberbots_Lightning, 0x2, &pairFullyLinkedNode },
    { L"P2 Lightning Treads Underwater", 0x50846, 0x50866, indexCyberbots_Lightning, 0x3 },
    { L"P2 Lightning Arm Underwater", 0x51046, 0x51066, indexCyberbots_Lightning, 0x0 },
    { L"P2 Lightning Weapon Underwater", 0x52006, 0x52026, indexCyberbots_Lightning, 0x4 },
    { L"P2 Lightning Shield Underwater", 0x51726, 0x51746, indexCyberbots_Lightning, 0x1 },
    { L"P2 Lightning Electricity Underwater", 0x52786, 0x527a6 },
};

const sGame_PaletteDataset Cyberbots_A_LIGHTNING_PORTRAIT_PALETTES[] =
{
    { L"P1 Lightning Portrait", 0x55664, 0x556e4, indexCyberbots_Lightning, 0x40 },
    { L"P2 Lightning Portrait", 0x56864, 0x568e4, indexCyberbots_Lightning, 0x40 },
};

//RF-027 JACKAL--

const sGame_PaletteDataset Cyberbots_A_JACKAL_P1_PALETTES[] =
{
    { L"P1 Jackal Top", 0x4Fd46, 0x4Fd66, indexCyberbots_Jackal, 0x3, &pairFullyLinkedNode },
    { L"P1 Jackal Legs", 0x505c6, 0x505e6, indexCyberbots_Jackal, 0x1 },
    { L"P1 Jackal Arm", 0x50dc6, 0x50de6, indexCyberbots_Jackal, 0x0 },
    { L"P1 Jackal Weapon", 0x51ba6, 0x51bc6, indexCyberbots_Jackal, 0x4 },
    { L"P1 Jackal Shield", 0x51546, 0x51566, indexCyberbots_Jackal, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_JACKAL_P2_PALETTES[] =
{
    { L"P2 Jackal Top", 0x4Fdc6, 0x4Fde6, indexCyberbots_Jackal, 0x3, &pairFullyLinkedNode },
    { L"P2 Jackal Legs", 0x50646, 0x50666, indexCyberbots_Jackal, 0x1 },
    { L"P2 Jackal Arm", 0x50e46, 0x50e66, indexCyberbots_Jackal, 0x0 },
    { L"P2 Jackal Weapon", 0x51d26, 0x51d46, indexCyberbots_Jackal, 0x4 },
    { L"P2 Jackal Shield", 0x515a6, 0x515c6, indexCyberbots_Jackal, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_JACKAL_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Jackal Top Underwater", 0x50046, 0x50066, indexCyberbots_Jackal, 0x3, &pairFullyLinkedNode },
    { L"P1 Jackal Legs Underwater", 0x508c6, 0x508e6, indexCyberbots_Jackal, 0x1 },
    { L"P1 Jackal Arm Underwater", 0x510c6, 0x510e6, indexCyberbots_Jackal, 0x0 },
    { L"P1 Jackal Weapon Underwater", 0x51ea6, 0x51ec6, indexCyberbots_Jackal, 0x4 },
    { L"P1 Jackal Shield Underwater", 0x51786, 0x517a6, indexCyberbots_Jackal, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_JACKAL_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Jackal Top Underwater", 0x500c6, 0x500e6, indexCyberbots_Jackal, 0x3, &pairFullyLinkedNode },
    { L"P2 Jackal Legs Underwater", 0x50946, 0x50966, indexCyberbots_Jackal, 0x1 },
    { L"P2 Jackal Arm Underwater", 0x51146, 0x51166, indexCyberbots_Jackal, 0x0 },
    { L"P2 Jackal Weapon Underwater", 0x52026, 0x52046, indexCyberbots_Jackal, 0x4 },
    { L"P2 Jackal Shield Underwater", 0x517e6, 0x51806, indexCyberbots_Jackal, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_JACKAL_PORTRAIT_PALETTES[] =
{
    { L"P1 Jackal Portrait", 0x556e4, 0x55724, indexCyberbots_Jackal, 0x40 },
    { L"P2 Jackal Portrait", 0x568e4, 0x56924, indexCyberbots_Jackal, 0x40 },
};

//FZ-100 FORDY--

const sGame_PaletteDataset Cyberbots_A_FORDY_P1_PALETTES[] =
{
    { L"P1 Fordy Top", 0x4FBA6, 0x4Fbc6, indexCyberbots_Fordy, 0x3, &pairFullyLinkedNode },
    { L"P1 Fordy Legs", 0x50426, 0x50446, indexCyberbots_Fordy, 0x1 },
    { L"P1 Fordy Arm", 0x50c26, 0x50c46, indexCyberbots_Fordy, 0x0 },
    { L"P1 Fordy Weapon", 0x51c26, 0x51c46, indexCyberbots_Fordy, 0x4 },
    { L"P1 Fordy Shield", 0x51406, 0x51426, indexCyberbots_Fordy, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_FORDY_P2_PALETTES[] =
{
    { L"P2 Fordy Top", 0x4Fc26, 0x4Fc46, indexCyberbots_Fordy, 0x3, &pairFullyLinkedNode },
    { L"P2 Fordy Legs", 0x504a6, 0x504c6, indexCyberbots_Fordy, 0x1 },
    { L"P2 Fordy Arm", 0x50ca6, 0x50cc6, indexCyberbots_Fordy, 0x0 },
    { L"P2 Fordy Weapon", 0x51da6, 0x51dc6, indexCyberbots_Fordy, 0x4 },
    { L"P2 Fordy Shield", 0x51466, 0x51486, indexCyberbots_Fordy, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_FORDY_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Fordy Top Underwater", 0x4fea6, 0x4fec6, indexCyberbots_Fordy, 0x3, &pairFullyLinkedNode },
    { L"P1 Fordy Legs Underwater", 0x50726, 0x50746, indexCyberbots_Fordy, 0x1 },
    { L"P1 Fordy Arm Underwater", 0x50f26, 0x50f46, indexCyberbots_Fordy, 0x0 },
    { L"P1 Fordy Weapon Underwater", 0x51f26, 0x51f46, indexCyberbots_Fordy, 0x4 },
    { L"P1 Fordy Shield Underwater", 0x51646, 0x51666, indexCyberbots_Fordy, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_FORDY_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Fordy Top Underwater", 0x4ff26, 0x4ff46, indexCyberbots_Fordy, 0x3, &pairFullyLinkedNode },
    { L"P2 Fordy Legs Underwater", 0x507a6, 0x507c6, indexCyberbots_Fordy, 0x1 },
    { L"P2 Fordy Arm Underwater", 0x50fa6, 0x50fc6, indexCyberbots_Fordy, 0x0 },
    { L"P2 Fordy Weapon Underwater", 0x520a6, 0x520c6, indexCyberbots_Fordy, 0x4 },
    { L"P2 Fordy Shield Underwater", 0x516a6, 0x516c6, indexCyberbots_Fordy, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_FORDY_PORTRAIT_PALETTES[] =
{
    { L"P1 Fordy Portrait", 0x554e4, 0x55564, indexCyberbots_Fordy, 0x40 },
    { L"P2 Fordy Portrait", 0x566e4, 0x56764, indexCyberbots_Fordy, 0x40 },
};

//FZ-202 TARANTULA--

const sGame_PaletteDataset Cyberbots_A_TARANTULA_P1_PALETTES[] =
{
    { L"P1 Tarantula Top", 0x4FCA6, 0x4FCC6, indexCyberbots_Tarantula, 0x3, &pairFullyLinkedNode },
    { L"P1 Tarantula Legs", 0x50526, 0x50546, indexCyberbots_Tarantula, 0x1 },
    { L"P1 Tarantula Arm", 0x50d26, 0x50d46, indexCyberbots_Tarantula, 0x0 },
    { L"P1 Tarantula Weapon", 0x51c46, 0x51c66, indexCyberbots_Tarantula, 0x4 },
    { L"P1 Tarantula Shield", 0x514c6, 0x514e6, indexCyberbots_Tarantula, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_TARANTULA_P2_PALETTES[] =
{
    { L"P2 Tarantula Top", 0x4Fd26, 0x4Fd46, indexCyberbots_Tarantula, 0x3, &pairFullyLinkedNode },
    { L"P2 Tarantula Legs", 0x505a6, 0x505c6, indexCyberbots_Tarantula, 0x1 },
    { L"P2 Tarantula Arm", 0x50da6, 0x50dc6, indexCyberbots_Tarantula, 0x0 },
    { L"P2 Tarantula Weapon", 0x51dc6, 0x51de6, indexCyberbots_Tarantula, 0x4 },
    { L"P2 Tarantula Shield", 0x51526, 0x51546, indexCyberbots_Tarantula, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_TARANTULA_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Tarantula Top Underwater", 0x4ffa6, 0x4ffc6, indexCyberbots_Tarantula, 0x3, &pairFullyLinkedNode },
    { L"P1 Tarantula Legs Underwater", 0x50826, 0x50846, indexCyberbots_Tarantula, 0x1 },
    { L"P1 Tarantula Arm Underwater", 0x51026, 0x51046, indexCyberbots_Tarantula, 0x0 },
    { L"P1 Tarantula Weapon Underwater", 0x51f46, 0x51f66, indexCyberbots_Tarantula, 0x4 },
    { L"P1 Tarantula Shield Underwater", 0x51706, 0x51726, indexCyberbots_Tarantula, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_TARANTULA_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Tarantula Top Underwater", 0x50026, 0x50046, indexCyberbots_Tarantula, 0x3, &pairFullyLinkedNode },
    { L"P2 Tarantula Legs Underwater", 0x508a6, 0x508c6, indexCyberbots_Tarantula, 0x1 },
    { L"P2 Tarantula Arm Underwater", 0x510a6, 0x510c6, indexCyberbots_Tarantula, 0x0 },
    { L"P2 Tarantula Weapon Underwater", 0x520c6, 0x520e6, indexCyberbots_Tarantula, 0x4 },
    { L"P2 Tarantula Shield Underwater", 0x51766, 0x51786, indexCyberbots_Tarantula, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_TARANTULA_PORTRAIT_PALETTES[] =
{
    { L"P1 Tarantula Portrait", 0x558e4, 0x55964, indexCyberbots_Tarantula, 0x40 },
    { L"P2 Tarantula Portrait", 0x56ae4, 0x56b64, indexCyberbots_Tarantula, 0x40 },
};

//FZ-900J KILLER BEE--

const sGame_PaletteDataset Cyberbots_A_KILLERBEE_P1_PALETTES[] =
{
    { L"P1 Killer Bee Top", 0x4FDA6, 0x4FDC6, indexCyberbots_KillerBee, 0x3, &pairFullyLinkedNode },
    { L"P1 Killer Bee Jets", 0x50626, 0x50646, indexCyberbots_KillerBee, 0x1 },
    { L"P1 Killer Bee Arm", 0x50e26, 0x50e46, indexCyberbots_KillerBee, 0x0 },
    { L"P1 Killer Bee Weapon", 0x51c66, 0x51c86, indexCyberbots_KillerBee, 0x4 },
    { L"P1 Killer Bee Shield", 0x51586, 0x515a6, indexCyberbots_KillerBee, 0x2 },
    { L"P1 Killer Bee Laser", 0x52566, 0x52586 },
};

const sGame_PaletteDataset Cyberbots_A_KILLERBEE_P2_PALETTES[] =
{
    { L"P2 Killer Bee Top", 0x4Fe26, 0x4Fe46, indexCyberbots_KillerBee, 0x3, &pairFullyLinkedNode },
    { L"P2 Killer Bee Jets", 0x506a6, 0x506c6, indexCyberbots_KillerBee, 0x1 },
    { L"P2 Killer Bee Arm", 0x50ea6, 0x50ec6, indexCyberbots_KillerBee, 0x0 },
    { L"P2 Killer Bee Weapon", 0x51de6, 0x51e06, indexCyberbots_KillerBee, 0x4 },
    { L"P2 Killer Bee Shield", 0x515e6, 0x51606, indexCyberbots_KillerBee, 0x2 },
    { L"P2 Killer Bee Laser", 0x525e6, 0x52606 },
};

const sGame_PaletteDataset Cyberbots_A_KILLERBEE_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Killer Bee Top Underwater", 0x500a6, 0x500c6, indexCyberbots_KillerBee, 0x3, &pairFullyLinkedNode },
    { L"P1 Killer Bee Jets Underwater", 0x50926, 0x50946, indexCyberbots_KillerBee, 0x1 },
    { L"P1 Killer Bee Arm Underwater", 0x51126, 0x51146, indexCyberbots_KillerBee, 0x0 },
    { L"P1 Killer Bee Weapon Underwater", 0x51f66, 0x51f86, indexCyberbots_KillerBee, 0x4 },
    { L"P1 Killer Bee Shield Underwater", 0x517c6, 0x517e6, indexCyberbots_KillerBee, 0x2 },
    { L"P1 Killer Bee Laser Underwater", 0x52866, 0x52886 },
};

const sGame_PaletteDataset Cyberbots_A_KILLERBEE_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Killer Bee Top Underwater", 0x50126, 0x50146, indexCyberbots_KillerBee, 0x3, &pairFullyLinkedNode },
    { L"P2 Killer Bee Jets Underwater", 0x509a6, 0x509c6, indexCyberbots_KillerBee, 0x1 },
    { L"P2 Killer Bee Arm Underwater", 0x511a6, 0x511c6, indexCyberbots_KillerBee, 0x0 },
    { L"P2 Killer Bee Weapon Underwater", 0x520e6, 0x52106, indexCyberbots_KillerBee, 0x4 },
    { L"P2 Killer Bee Shield Underwater", 0x51826, 0x51846, indexCyberbots_KillerBee, 0x2 },
    { L"P2 Killer Bee Laser Underwater", 0x528e6, 0x52906 },
};

const sGame_PaletteDataset Cyberbots_A_KILLERBEE_PORTRAIT_PALETTES[] =
{
    { L"P1 Killer Bee Portrait", 0X55b64, 0X55be4, indexCyberbots_KillerBee, 0x40 },
    { L"P2 Killer Bee Portrait", 0X56d64, 0X56de4, indexCyberbots_KillerBee, 0x40 },
};

//GP-N1 GULDIN--

const sGame_PaletteDataset Cyberbots_A_GULDIN_P1_PALETTES[] =
{
    { L"P1 Guldin Top", 0x4Fb66, 0x4FB86, indexCyberbots_Guldin, 0x1, &pairFullyLinkedNode },
    { L"P1 Guldin Treads", 0x503e6, 0x50406, indexCyberbots_Guldin, 0x2 },
    { L"P1 Guldin Arm", 0x50be6, 0x50c06, indexCyberbots_Guldin, 0x0 },
    { L"P1 Guldin Weapon", 0x51bc6, 0x51be6, indexCyberbots_Guldin, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_GULDIN_P2_PALETTES[] =
{
    { L"P2 Guldin Top", 0x4Fbe6, 0x4Fc06, indexCyberbots_Guldin, 0x1, &pairFullyLinkedNode },
    { L"P2 Guldin Treads", 0x50466, 0x50486, indexCyberbots_Guldin, 0x2 },
    { L"P2 Guldin Arm", 0x50c66, 0x50c86, indexCyberbots_Guldin, 0x0 },
    { L"P2 Guldin Weapon", 0x51d46, 0x51d66, indexCyberbots_Guldin, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_GULDIN_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Guldin Top Underwater", 0x4fe66, 0x4fe86, indexCyberbots_Guldin, 0x1, &pairFullyLinkedNode },
    { L"P1 Guldin Treads Underwater", 0x506e6, 0x50706, indexCyberbots_Guldin, 0x2 },
    { L"P1 Guldin Arm Underwater", 0x50ee6, 0x50f06, indexCyberbots_Guldin, 0x0 },
    { L"P1 Guldin Weapon Underwater", 0x51ec6, 0x51ee6, indexCyberbots_Guldin, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_GULDIN_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Guldin Top Underwater", 0x4fee6, 0x4ff06, indexCyberbots_Guldin, 0x1, &pairFullyLinkedNode },
    { L"P2 Guldin Treads Underwater", 0x50766, 0x50786, indexCyberbots_Guldin, 0x2 },
    { L"P2 Guldin Arm Underwater", 0x50f66, 0x50f86, indexCyberbots_Guldin, 0x0 },
    { L"P2 Guldin Weapon Underwater", 0x52046, 0x52066, indexCyberbots_Guldin, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_GULDIN_PORTRAIT_PALETTES[] =
{
    { L"P1 Guldin Portrait", 0x55564, 0x555e4, indexCyberbots_Guldin, 0x40 },
    { L"P2 Guldin Portrait", 0x56764, 0x567e4, indexCyberbots_Guldin, 0x40 },
};

//GP-V4 VISE--

const sGame_PaletteDataset Cyberbots_A_VISE_P1_PALETTES[] =
{
    { L"P1 Vise Top", 0x4Fc66, 0x4Fc86, indexCyberbots_Vise, 0x1, &pairFullyLinkedNode },
    { L"P1 Vise Treads", 0x504e6, 0x50506, indexCyberbots_Vise, 0x2 },
    { L"P1 Vise Arm", 0x50ce6, 0x50d06, indexCyberbots_Vise, 0x0 },
    { L"P1 Vise Weapon", 0x51be6, 0x51c06, indexCyberbots_Vise, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_VISE_P2_PALETTES[] =
{
    { L"P2 Vise Top", 0x4Fce6, 0x4Fd06, indexCyberbots_Vise, 0x1, &pairFullyLinkedNode },
    { L"P2 Vise Treads", 0x50566, 0x50586, indexCyberbots_Vise, 0x2 },
    { L"P2 Vise Arm", 0x50d66, 0x50d86, indexCyberbots_Vise, 0x0 },
    { L"P2 Vise Weapon", 0x51d66, 0x51d86, indexCyberbots_Vise, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_VISE_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Vise Top Underwater", 0x4ff66, 0x4ff86, indexCyberbots_Vise, 0x1, &pairFullyLinkedNode },
    { L"P1 Vise Treads Underwater", 0x507e6, 0x50806, indexCyberbots_Vise, 0x2 },
    { L"P1 Vise Arm Underwater", 0x50fe6, 0x51006, indexCyberbots_Vise, 0x0 },
    { L"P1 Vise Weapon Underwater", 0x51ee6, 0x51f06, indexCyberbots_Vise, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_VISE_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Vise Top Underwater", 0x4ffe6, 0x50006, indexCyberbots_Vise, 0x1, &pairFullyLinkedNode },
    { L"P2 Vise Treads Underwater", 0x50866, 0x50886, indexCyberbots_Vise, 0x2 },
    { L"P2 Vise Arm Underwater", 0x51066, 0x51086, indexCyberbots_Vise, 0x0 },
    { L"P2 Vise Weapon Underwater", 0x52066, 0x52086, indexCyberbots_Vise, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_VISE_PORTRAIT_PALETTES[] =
{
    { L"P1 Vise Portrait", 0x55764, 0x557e4, indexCyberbots_Vise, 0x40 },
    { L"P2 Vise Portrait", 0x56964, 0x569e4, indexCyberbots_Vise, 0x40 },
};

//GP-D2 CYCLONE--

const sGame_PaletteDataset Cyberbots_A_CYCLONE_P1_PALETTES[] =
{
    { L"P1 Cyclone Top", 0x4Fd66, 0x4Fd86, indexCyberbots_Cyclone, 0x3, &pairFullyLinkedNode },
    { L"P1 Cyclone Legs", 0x505e6, 0x50606, indexCyberbots_Cyclone, 0x2 },
    { L"P1 Cyclone Arm", 0x50de6, 0x50e06, indexCyberbots_Cyclone, 0x0 },
    { L"P1 Cyclone Weapon", 0x51c06, 0x51c26, indexCyberbots_Cyclone, 0x4 },
};

const sGame_PaletteDataset Cyberbots_A_CYCLONE_P2_PALETTES[] =
{
    { L"P2 Cyclone Top", 0x4Fde6, 0x4Fe06, indexCyberbots_Cyclone, 0x3, &pairFullyLinkedNode },
    { L"P2 Cyclone Legs", 0x50666, 0x50686, indexCyberbots_Cyclone, 0x2 },
    { L"P2 Cyclone Arm", 0x50e66, 0x50e86, indexCyberbots_Cyclone, 0x0 },
    { L"P2 Cyclone Weapon", 0x51d86, 0x51da6, indexCyberbots_Cyclone, 0x4 },
};

const sGame_PaletteDataset Cyberbots_A_CYCLONE_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Cyclone Top Underwater", 0x50066, 0x50086, indexCyberbots_Cyclone, 0x3, &pairFullyLinkedNode },
    { L"P1 Cyclone Legs Underwater", 0x508e6, 0x50906, indexCyberbots_Cyclone, 0x2 },
    { L"P1 Cyclone Arm Underwater", 0x510e6, 0x51106, indexCyberbots_Cyclone, 0x0 },
    { L"P1 Cyclone Weapon Underwater", 0x51f06, 0x51f26, indexCyberbots_Cyclone, 0x4 },
};

const sGame_PaletteDataset Cyberbots_A_CYCLONE_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Cyclone Top Underwater", 0x500e6, 0x50106, indexCyberbots_Cyclone, 0x3, &pairFullyLinkedNode },
    { L"P2 Cyclone Legs Underwater", 0x50966, 0x50986, indexCyberbots_Cyclone, 0x2 },
    { L"P2 Cyclone Arm Underwater", 0x51166, 0x51186, indexCyberbots_Cyclone, 0x0 },
    { L"P2 Cyclone Weapon Underwater", 0x52086, 0x520a6, indexCyberbots_Cyclone, 0x4 },
};

//Shared-- This could be linked to the normal palette display
const sGame_PaletteDataset Cyberbots_A_CYCLONE_SHARED_PALETTES[] =
{
    { L"Cyclone Drill", 0x51906, 0x51926, indexCyberbots_Cyclone, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_CYCLONE_PORTRAIT_PALETTES[] =
{
    { L"P1 Cyclone Portrait", 0x557e4, 0x55824, indexCyberbots_Cyclone, 0x40 },
    { L"P2 Cyclone Portrait", 0x569e4, 0x56a24, indexCyberbots_Cyclone, 0x40 },
};

//P-10033 GAITS--

const sGame_PaletteDataset Cyberbots_A_GAITS_P1_PALETTES[] =
{
    { L"P1 Gaits", 0x502c6, 0x502e6, indexCyberbots_Gaits, 0x0, &pairFullyLinkedNode },
    { L"P1 Gaits Shield", 0x51946, 0x51966, indexCyberbots_Gaits, 0x4 },
    { L"P1 Gaits Teleport", 0x50a66, 0x50a86, indexCyberbots_Gaits, 0x5 },
    { L"P1 Gaits Dash Attack", 0x51266, 0x51286, indexCyberbots_Gaits, 0x1 },
    { L"P1 Gaits Rising Uppercut", 0x521a6, 0x521c6, indexCyberbots_Gaits, 0x3 },
    { L"P1 Gaits Electricity", 0x52986, 0x529a6, indexCyberbots_Gaits, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_GAITS_P2_PALETTES[] =
{
    { L"P2 Gaits", 0x50186, 0x501a6, indexCyberbots_Gaits, 0x0, &pairFullyLinkedNode },
    { L"P2 Gaits Shield", 0x51846, 0x51866, indexCyberbots_Gaits, 0x4 },
    { L"P2 Gaits Teleport", 0x509e6, 0x50a06, indexCyberbots_Gaits, 0x5 },
    { L"P2 Gaits Dash Attack", 0x511e6, 0x51206, indexCyberbots_Gaits, 0x1 },
    { L"P2 Gaits Rising Uppercut", 0x52126, 0x52146, indexCyberbots_Gaits, 0x3 },
    { L"P2 Gaits Electricity", 0x52926, 0x52946, indexCyberbots_Gaits, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_GAITS_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Gaits Underwater", 0x50366, 0x50386, indexCyberbots_Gaits, 0x0, &pairFullyLinkedNode },
    { L"P1 Gaits Shield Underwater", 0x51966, 0x51986, indexCyberbots_Gaits, 0x4 },
    { L"P1 Gaits Teleport Underwater", 0x50b66, 0x50b86, indexCyberbots_Gaits, 0x5 },
    { L"P1 Gaits Dash Attack Underwater", 0x51366, 0x51386, indexCyberbots_Gaits, 0x1 },
    { L"P1 Gaits Rising Uppercut Underwater", 0x522a6, 0x522c6, indexCyberbots_Gaits, 0x3 },
    { L"P1 Gaits Electricity Underwater", 0x52a46, 0x52a66, indexCyberbots_Gaits, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_GAITS_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Gaits Underwater", 0x50226, 0x50246, indexCyberbots_Gaits, 0x0, &pairFullyLinkedNode },
    { L"P2 Gaits Shield Underwater", 0x51866, 0x51886, indexCyberbots_Gaits, 0x4 },
    { L"P2 Gaits Teleport Underwater", 0x50ae6, 0x50b06, indexCyberbots_Gaits, 0x5 },
    { L"P2 Gaits Dash Attack Underwater", 0x512e6, 0x51306, indexCyberbots_Gaits, 0x1 },
    { L"P2 Gaits Rising Uppercut Underwater", 0x52226, 0x52246, indexCyberbots_Gaits, 0x3 },
    { L"P2 Gaits Electricity Underwater", 0x529e6, 0x52a06, indexCyberbots_Gaits, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_GAITS_PORTRAIT_PALETTES[] =
{
    { L"P1 Gaits Portrait", 0x55a64, 0x55aa4, indexCyberbots_Gaits, 0x40 },
    { L"P2 Gaits Portrait", 0x56c64, 0x56ca4, indexCyberbots_Gaits, 0x40 },
};

//S-008 SUPER-8--

const sGame_PaletteDataset Cyberbots_A_SUPER8_P1_PALETTES[] =
{
    { L"P1 Super-8", 0x502e6, 0x50306, indexCyberbots_Super8, 0x0, &pairFullyLinkedNode },
    { L"P1 Super-8 Weapon", 0x50a86, 0x50aa6, indexCyberbots_Super8, 0x4 },
    { L"P1 Super-8 Rocket", 0x51286, 0x512a6, indexCyberbots_Super8, 0x3 },
    { L"P1 Super-8 Magnet", 0x521c6, 0x521e6, indexCyberbots_Super8, 0x2 },
    { L"P1 Super-8 Laser", 0x529a6, 0x529c6, indexCyberbots_Super8, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_SUPER8_P2_PALETTES[] =
{
    { L"P2 Super-8", 0x501a6, 0x501c6, indexCyberbots_Super8, 0x0, &pairFullyLinkedNode },
    { L"P2 Super-8 Weapon", 0x50a06, 0x50a26, indexCyberbots_Super8, 0x4 },
    { L"P2 Super-8 Rocket", 0x51206, 0x51226, indexCyberbots_Super8, 0x3 },
    { L"P2 Super-8 Magnet", 0x52146, 0x52166, indexCyberbots_Super8, 0x2 },
    { L"P2 Super-8 Laser", 0x52946, 0x52966, indexCyberbots_Super8, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_SUPER8_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Super-8 Underwater", 0x50386, 0x503a6, indexCyberbots_Super8, 0x0, &pairFullyLinkedNode },
    { L"P1 Super-8 Weapon Underwater", 0x50b86, 0x50ba6, indexCyberbots_Super8, 0x4 },
    { L"P1 Super-8 Rocket Underwater", 0x51386, 0x513a6, indexCyberbots_Super8, 0x3 },
    { L"P1 Super-8 Magnet Underwater", 0x522c6, 0x522e6, indexCyberbots_Super8, 0x2 },
    { L"P1 Super-8 Laser Underwater", 0x52a66, 0x52a86, indexCyberbots_Super8, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_SUPER8_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Super-8 Underwater", 0x50246, 0x50266, indexCyberbots_Super8, 0x0, &pairFullyLinkedNode },
    { L"P2 Super-8 Weapon Underwater", 0x50b06, 0x50b26, indexCyberbots_Super8, 0x4 },
    { L"P2 Super-8 Rocket Underwater", 0x51306, 0x51326, indexCyberbots_Super8, 0x3 },
    { L"P2 Super-8 Magnet Underwater", 0x52246, 0x52266, indexCyberbots_Super8, 0x2 },
    { L"P2 Super-8 Laser Underwater", 0x52a06, 0x52a26, indexCyberbots_Super8, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_SUPER8_PORTRAIT_PALETTES[] =
{
    { L"P1 Super-8 Portrait", 0x55a04, 0x55a44, indexCyberbots_Super8, 0x40 },
    { L"P2 Super-8 Portrait", 0x56c04, 0x56c44, indexCyberbots_Super8, 0x40 },
};

//UVA-02 HELION--

const sGame_PaletteDataset Cyberbots_A_HELION_P1_PALETTES[] =
{
    { L"P1 Helion", 0x50286, 0x502a6, indexCyberbots_Helion, 0x0, &pairFullyLinkedNode },
    { L"P1 Helion Effects", 0x50a46, 0x50a66, indexCyberbots_Helion, 0x2 },
    { L"P1 Helion Laser", 0x51246, 0x51266, indexCyberbots_Helion, 0x3 },
    { L"P1 Helion Bombs", 0x52186, 0x521a6, indexCyberbots_Helion, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_HELION_P2_PALETTES[] =
{
    { L"P2 Helion", 0x50146, 0x50166, indexCyberbots_Helion, 0x0, &pairFullyLinkedNode },
    { L"P2 Helion Effects", 0x509c6, 0x509e6, indexCyberbots_Helion, 0x2 },
    { L"P2 Helion Laser", 0x511c6, 0x511e6, indexCyberbots_Helion, 0x3 },
    { L"P2 Helion Bombs", 0x52106, 0x52126, indexCyberbots_Helion, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_HELION_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Helion Underwater", 0x50326, 0x50346, indexCyberbots_Helion, 0x0, &pairFullyLinkedNode },
    { L"P1 Helion Effects Underwater", 0x50b46, 0x50b66, indexCyberbots_Helion, 0x2 },
    { L"P1 Helion Laser Underwater", 0x51346, 0x51366, indexCyberbots_Helion, 0x3 },
    { L"P1 Helion Bombs Underwater", 0x52286, 0x522a6, indexCyberbots_Helion, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_HELION_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Helion Underwater", 0x501e6, 0x50206, indexCyberbots_Helion, 0x0, &pairFullyLinkedNode },
    { L"P2 Helion Effects Underwater", 0x50ac6, 0x50ae6, indexCyberbots_Helion, 0x2 },
    { L"P2 Helion Laser Underwater", 0x512c6, 0x512e6, indexCyberbots_Helion, 0x3 },
    { L"P2 Helion Bombs Underwater", 0x52206, 0x52226, indexCyberbots_Helion, 0x1 },
};

const sGame_PaletteDataset Cyberbots_A_HELION_SHARED_PALETTES[] =
{
    { L"Helion Laser", 0x51886, 0x518a6, indexCyberbots_Helion, 0x3 },
    { L"Helion Laser Underwater", 0x518a6, 0x518c6, indexCyberbots_Helion, 0x3 },
};

const sGame_PaletteDataset Cyberbots_A_HELION_PORTRAIT_PALETTES[] =
{
    { L"P1 Helion Portrait", 0x55964, 0x559a4, indexCyberbots_Helion, 0x40 },
    { L"P2 Helion Portrait", 0x56b64, 0x56ba4, indexCyberbots_Helion, 0x40 },
};

//X-O WARLOCK--

const sGame_PaletteDataset Cyberbots_A_WARLOCK_P1_PALETTES[] =
{
    { L"P1 Warlock", 0x50306, 0x50326, indexCyberbots_Warlock, 0x0, &pairFullyLinkedNode },
    { L"P1 Warlock Effects", 0x50aa6, 0x50ac6, indexCyberbots_Warlock, 0x1 },
    { L"P1 Warlock Soul Blade", 0x521e6, 0x52206 },
};

const sGame_PaletteDataset Cyberbots_A_WARLOCK_P2_PALETTES[] =
{
    { L"P2 Warlock", 0x501c6, 0x501e6, indexCyberbots_Warlock, 0x0, &pairFullyLinkedNode },
    { L"P2 Warlock Effects", 0x50a26, 0x50a46, indexCyberbots_Warlock, 0x1 },
    { L"P2 Warlock Soul Blade", 0x52166, 0x52186 },
};

const sGame_PaletteDataset Cyberbots_A_WARLOCK_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Warlock Underwater", 0x503a6, 0x503c6, indexCyberbots_Warlock, 0x0, &pairFullyLinkedNode },
    { L"P1 Warlock Effects Underwater", 0x50ba6, 0x50bc6, indexCyberbots_Warlock, 0x1 },
    { L"P1 Warlock Soul Blade Underwater", 0x522e6, 0x52306 },
};

const sGame_PaletteDataset Cyberbots_A_WARLOCK_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Warlock Underwater", 0x50266, 0x50286, indexCyberbots_Warlock, 0x0, &pairFullyLinkedNode },
    { L"P2 Warlock Effects Underwater", 0x50b26, 0x50b46, indexCyberbots_Warlock, 0x1 },
    { L"P2 Warlock Soul Blade Underwater", 0x52266, 0x52286 },
};

const sGame_PaletteDataset Cyberbots_A_WARLOCK_SHARED_PALETTES[] =
{
    {L"Warlock Soul Drain", 0x51926, 0x51946, indexCyberbots_Warlock, 0x2 },
};

const sGame_PaletteDataset Cyberbots_A_WARLOCK_PORTRAIT_PALETTES[] =
{
    { L"P1 Warlock Portrait", 0x55ae4, 0x55b24, indexCyberbots_Warlock, 0x40 },
    { L"P2 Warlock Portrait", 0x56ce4, 0x56d24, indexCyberbots_Warlock, 0x40 },
};

//UNKNOWN 404--

const sGame_PaletteDataset Cyberbots_A_404_P1_PALETTES[] =
{
    { L"P1 Unknown", 0x502a6, 0x502c6, indexCyberbots_Unknown, 0x00 },
};

const sGame_PaletteDataset Cyberbots_A_404_P2_PALETTES[] =
{
    { L"P2 Unknown", 0x50166, 0x50186, indexCyberbots_Unknown, 0x00 },
};

const sGame_PaletteDataset Cyberbots_A_404_P1_UNDERWATER_PALETTES[] =
{
    { L"P1 Unknown Underwater", 0x50346, 0x50366, indexCyberbots_Unknown, 0x00 },
};

const sGame_PaletteDataset Cyberbots_A_404_P2_UNDERWATER_PALETTES[] =
{
    { L"P2 Unknown Underwater", 0x50206, 0x50226, indexCyberbots_Unknown, 0x00 },
};

// ---Pilots---

//--Jin--
const sGame_PaletteDataset Cyberbots_A_PILOTS_JIN_PALETTES[] =
{
    { L"Jin Select/Intro", 0x54fe4, 0x55024, indexCyberbots_Bonus, 0x61 },
    { L"Jin VS/Cutscenes", 0x549e4, 0x54a44, indexCyberbots_Bonus, 0x62 },
    { L"Jin HUD", 0x54ee4, 0x54f04, indexCyberbots_Bonus, 0x60 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_MARY_PALETTES[] =
{
    { L"Mary Select/Intro", 0x550e4, 0x55124, indexCyberbots_Bonus, 0x71 },
    { L"Mary VS/Cutscenes", 0x54aa4, 0x54b04, indexCyberbots_Bonus, 0x72 },
    { L"Mary HUD", 0x54f24, 0x54f44, indexCyberbots_Bonus, 0x70 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_SANTANA_PALETTES[] =
{
    { L"Santana Select/Intro", 0x55064, 0x550a4, indexCyberbots_Bonus, 0x81 },
    { L"Santana VS/Cutscenes", 0x54a44, 0x54aa4, indexCyberbots_Bonus, 0x82 },
    { L"Santana HUD", 0x54f04, 0x54f24, indexCyberbots_Bonus, 0x80 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_GAWAINE_PALETTES[] =
{
    { L"Gawaine Select/Intro", 0x551e4, 0x55264, indexCyberbots_Bonus, 0x51 },
    { L"Gawaine VS/Cutscenes", 0x54b64, 0x54bc4, indexCyberbots_Bonus, 0x52 },
    { L"Gawaine HUD", 0x54f64, 0x54f84, indexCyberbots_Bonus, 0x50 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_BAOMAO_PALETTES[] =
{
    { L"Bao & Mao Select/Intro", 0x55264, 0x552c4, indexCyberbots_Bonus, 0x11 },
    { L"Bao & Mao VS/Cutscenes (1/2)", 0x54bc4, 0x54c24, indexCyberbots_Bonus, 0x12, &pairNext },
    { L"Bao & Mao VS/Cutscenes (2/2)", 0x54e04, 0x54e64 , indexCyberbots_Bonus, 0x13, &pairPrevious },
    { L"Bao & Mao HUD", 0x54f84, 0x54fa4, indexCyberbots_Bonus, 0x10 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_ARIETA_PALETTES[] =
{
    { L"Arieta Select/Intro", 0x55164, 0x551c4, indexCyberbots_Bonus, 0x01 },
    { L"Arieta VS/Cutscenes", 0x54b04, 0x54b64, indexCyberbots_Bonus, 0x02 },
    { L"Arieta HUD", 0x54f44, 0x54f64, indexCyberbots_Bonus, 0x00 },
};

// Bosses
const sGame_PaletteDataset Cyberbots_A_PILOTS_DEVILOTTE_PALETTES[] =
{
    { L"Devilotte", 0x54c24, 0x54c84, indexCyberbots_Bonus, 0x30 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_CHIYOMARU_PALETTES[] =
{
    { L"Chiyomaru & Tessan", 0x54c84, 0x54ce4, indexCyberbots_Bonus, 0x20 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_SHADE_PALETTES[] =
{
    { L"Shade", 0x54ce4, 0x54d44, indexCyberbots_Bonus, 0x90 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_GOD_PALETTES[] =
{
    { L"G.O.D.", 0x54d44, 0x54da4, indexCyberbots_Bonus, 0x40 },
};

const sGame_PaletteDataset Cyberbots_A_PILOTS_EXTRA_PALETTES[] =
{
    { L"Extra BG (Arieta)", 0x54e64, 0x54e84 },
    { L"Shared BG (BaoMao/Mary)", 0x54e84, 0x54ea4, indexCyberbots_Bonus, 0xa0 },
};

//-BONUS---

const sGame_PaletteDataset Cyberbots_A_BONUS_INTRO_PALETTES[] =
{
    { L"QSound Screen", 0x49762, 0x497c2 },
    { L"Intro Background Effect", 0x3fa9e, 0x3fabe },
    { L"Intro CGI Blodia", 0x3fade, 0x3fafe },
    { L"Intro CGI Blodia Eyes", 0x3fa7e, 0x3fa9e },
    { L"Title Screen", 0x3fa3e, 0x3fa7e },
    { L"Insert Coin", 0x3fb1e, 0x3fb3e },
};

const sGame_PaletteDataset Cyberbots_A_BONUS_SELECTSCREEN_PALETTES[] =
{
    { L"Select Background", 0x4db84, 0x4dd84 },
	{ L"Select Cursor", 0x41a7e, 0x41a9e },
	{ L"Select Timer", 0x41abe, 0x41ade },
	{ L"Select Text", 0x41ade, 0x41afe },
	{ L"Select Pilot Names", 0x41afe, 0x41b1e },
	{ L"Pilots Select Icons", 0x4187e, 0x4193e },
};

const sGame_PaletteDataset Cyberbots_A_BONUS_MACHINESELECT_PALETTES[] =
{
    { L"P1 Blodia Select Screen", 0x417de, 0x4181e },
    { L"P2 Blodia Select Screen", 0x419de, 0x41a1e },
    { L"P1 Riot Select Screen", 0x4173e, 0x417be },
    { L"P2 Riot Select Screen", 0x4193e, 0x419be },
    { L"P1 Swordsman Select Screen", 0x4181e, 0x4187e },
    { L"P1 Swordsman Arm Select Screen", 0x417be, 0x417de },
    { L"P2 Swordsman Select Screen", 0x41a1e, 0x41a7e },
    { L"P2 Swordsman Arm Select Screen", 0x419be, 0x419de },
    { L"P1 Reptos Select Screen", 0x41bbe, 0x41bfe },
    { L"P2 Reptos Select Screen", 0x41dbe, 0x41dfe },
    { L"P1 Lightning Select Screen", 0x41b3e, 0x41bbe },
    { L"P1 Lightning Electricity Select Screen", 0x41bfe, 0x41c1e },
    { L"P2 Lightning Select Screen", 0x41d3e, 0x41dbe },
    { L"P2 Lightning Electricity Select Screen", 0x41dfe, 0x41e1e },
    { L"P1 Jackal Select Screen", 0x41c1e, 0x41c5e },
    { L"P2 Jackal Select Screen", 0x41e1e, 0x41e5e },
    { L"P1 Fordy Select Screen", 0x41fbe, 0x41ffe },
    { L"P2 Fordy Select Screen", 0x421be, 0x421fe },
    { L"P1 Killer Bee Select Screen", 0x41f3e, 0x41fbe },
    { L"P2 Killer Bee Select Screen", 0x4213e, 0x421be },
    { L"P1 Tarantula Select Screen", 0x4201e, 0x4207e },
    { L"P2 Tarantula Select Screen", 0x4221e, 0x4227e },
    { L"P1 Guldin Select Screen", 0x423de, 0x4241e },
    { L"P2 Guldin Select Screen", 0x425de, 0x4261e },
    { L"P1 Cyclone Select Screen", 0x4241e, 0x4247e },
    { L"P2 Cyclone Select Screen", 0x4261e, 0x4267e },
    { L"P1 Vise Select Screen", 0x4233e, 0x423be },
    { L"P2 Vise Select Screen", 0x4253e, 0x425be },
};

const sGame_PaletteDataset Cyberbots_A_BONUS_EFFECTS_PALETTES[] =
{
    { L"Shadow/Boost Effects 1", 0x51986, 0x519a6 },
    { L"Shadow/Boost Effects 2", 0x519e6, 0x51a06 },
    { L"Shadow/Boost Effects 1 Underwater", 0x51a46, 0x51a66 },
    { L"Shadow/Boost Effects 2 Underwater", 0x51aa6, 0x51ac6 },
};	

const sDescTreeNode Cyberbots_A_BLODIA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BLODIA_P1_PALETTES, ARRAYSIZE(Cyberbots_A_BLODIA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BLODIA_P2_PALETTES, ARRAYSIZE(Cyberbots_A_BLODIA_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BLODIA_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_BLODIA_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BLODIA_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_BLODIA_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BLODIA_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_BLODIA_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_SWORDSMAN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SWORDSMAN_P1_PALETTES, ARRAYSIZE(Cyberbots_A_SWORDSMAN_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SWORDSMAN_P2_PALETTES, ARRAYSIZE(Cyberbots_A_SWORDSMAN_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SWORDSMAN_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_SWORDSMAN_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SWORDSMAN_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_SWORDSMAN_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SWORDSMAN_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_SWORDSMAN_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_RIOT_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_RIOT_P1_PALETTES, ARRAYSIZE(Cyberbots_A_RIOT_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_RIOT_P2_PALETTES, ARRAYSIZE(Cyberbots_A_RIOT_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_RIOT_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_RIOT_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_RIOT_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_RIOT_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_RIOT_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_RIOT_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_REPTOS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_REPTOS_P1_PALETTES, ARRAYSIZE(Cyberbots_A_REPTOS_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_REPTOS_P2_PALETTES, ARRAYSIZE(Cyberbots_A_REPTOS_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_REPTOS_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_REPTOS_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_REPTOS_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_REPTOS_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_REPTOS_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_REPTOS_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_LIGHTNING_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_LIGHTNING_P1_PALETTES, ARRAYSIZE(Cyberbots_A_LIGHTNING_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_LIGHTNING_P2_PALETTES, ARRAYSIZE(Cyberbots_A_LIGHTNING_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_LIGHTNING_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_LIGHTNING_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_LIGHTNING_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_LIGHTNING_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_LIGHTNING_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_LIGHTNING_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_JACKAL_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JACKAL_P1_PALETTES, ARRAYSIZE(Cyberbots_A_JACKAL_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JACKAL_P2_PALETTES, ARRAYSIZE(Cyberbots_A_JACKAL_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JACKAL_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_JACKAL_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JACKAL_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_JACKAL_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JACKAL_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_JACKAL_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_FORDY_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_FORDY_P1_PALETTES, ARRAYSIZE(Cyberbots_A_FORDY_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_FORDY_P2_PALETTES, ARRAYSIZE(Cyberbots_A_FORDY_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_FORDY_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_FORDY_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_FORDY_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_FORDY_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_FORDY_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_FORDY_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_TARANTULA_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_TARANTULA_P1_PALETTES, ARRAYSIZE(Cyberbots_A_TARANTULA_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_TARANTULA_P2_PALETTES, ARRAYSIZE(Cyberbots_A_TARANTULA_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_TARANTULA_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_TARANTULA_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_TARANTULA_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_TARANTULA_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_TARANTULA_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_TARANTULA_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_KILLERBEE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_KILLERBEE_P1_PALETTES, ARRAYSIZE(Cyberbots_A_KILLERBEE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_KILLERBEE_P2_PALETTES, ARRAYSIZE(Cyberbots_A_KILLERBEE_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_KILLERBEE_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_KILLERBEE_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_KILLERBEE_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_KILLERBEE_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_KILLERBEE_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_KILLERBEE_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_GULDIN_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GULDIN_P1_PALETTES, ARRAYSIZE(Cyberbots_A_GULDIN_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GULDIN_P2_PALETTES, ARRAYSIZE(Cyberbots_A_GULDIN_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GULDIN_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_GULDIN_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GULDIN_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_GULDIN_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GULDIN_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_GULDIN_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_VISE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_VISE_P1_PALETTES, ARRAYSIZE(Cyberbots_A_VISE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_VISE_P2_PALETTES, ARRAYSIZE(Cyberbots_A_VISE_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_VISE_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_VISE_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_VISE_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_VISE_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_VISE_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_VISE_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_CYCLONE_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_P1_PALETTES, ARRAYSIZE(Cyberbots_A_CYCLONE_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_P2_PALETTES, ARRAYSIZE(Cyberbots_A_CYCLONE_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_CYCLONE_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_CYCLONE_P2_UNDERWATER_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_SHARED_PALETTES, ARRAYSIZE(Cyberbots_A_CYCLONE_SHARED_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_CYCLONE_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_GAITS_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAITS_P1_PALETTES, ARRAYSIZE(Cyberbots_A_GAITS_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAITS_P2_PALETTES, ARRAYSIZE(Cyberbots_A_GAITS_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAITS_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_GAITS_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAITS_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_GAITS_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAITS_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_GAITS_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_SUPER8_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SUPER8_P1_PALETTES, ARRAYSIZE(Cyberbots_A_SUPER8_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SUPER8_P2_PALETTES, ARRAYSIZE(Cyberbots_A_SUPER8_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SUPER8_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_SUPER8_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SUPER8_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_SUPER8_P2_UNDERWATER_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SUPER8_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_SUPER8_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_HELION_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_P1_PALETTES, ARRAYSIZE(Cyberbots_A_HELION_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_P2_PALETTES, ARRAYSIZE(Cyberbots_A_HELION_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_HELION_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_HELION_P2_UNDERWATER_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_SHARED_PALETTES, ARRAYSIZE(Cyberbots_A_HELION_SHARED_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_HELION_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_WARLOCK_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_P1_PALETTES, ARRAYSIZE(Cyberbots_A_WARLOCK_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_P2_PALETTES, ARRAYSIZE(Cyberbots_A_WARLOCK_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_WARLOCK_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_WARLOCK_P2_UNDERWATER_PALETTES) },
    { L"Shared", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_SHARED_PALETTES, ARRAYSIZE(Cyberbots_A_WARLOCK_SHARED_PALETTES) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_PORTRAIT_PALETTES, ARRAYSIZE(Cyberbots_A_WARLOCK_PORTRAIT_PALETTES) },
};

const sDescTreeNode Cyberbots_A_404_COLLECTION[] =
{
    { L"P1", DESC_NODETYPE_TREE, (void*)Cyberbots_A_404_P1_PALETTES, ARRAYSIZE(Cyberbots_A_404_P1_PALETTES) },
    { L"P2", DESC_NODETYPE_TREE, (void*)Cyberbots_A_404_P2_PALETTES, ARRAYSIZE(Cyberbots_A_404_P2_PALETTES) },
    { L"P1 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_404_P1_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_404_P1_UNDERWATER_PALETTES) },
    { L"P2 Underwater", DESC_NODETYPE_TREE, (void*)Cyberbots_A_404_P2_UNDERWATER_PALETTES, ARRAYSIZE(Cyberbots_A_404_P2_UNDERWATER_PALETTES) },
};

const sDescTreeNode Cyberbots_A_PILOTS_COLLECTION[] =
{
    { L"Jin Saotome", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_JIN_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_JIN_PALETTES) },
    { L"Mary Miyabi", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_MARY_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_MARY_PALETTES) },
    { L"Santana Laurence", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_SANTANA_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_SANTANA_PALETTES) },
    { L"Gawaine Murdock", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_GAWAINE_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_GAWAINE_PALETTES) },
    { L"Bao and Mao", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_BAOMAO_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_BAOMAO_PALETTES) },
    { L"Arieta", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_ARIETA_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_ARIETA_PALETTES) },
    { L"Princess Devilotte", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_DEVILOTTE_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_DEVILOTTE_PALETTES) },
    { L"Chiyomaru and Tessan", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_CHIYOMARU_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_CHIYOMARU_PALETTES) },
    { L"Shade", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_SHADE_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_SHADE_PALETTES) },
    { L"G.O.D.", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_GOD_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_GOD_PALETTES) },
    { L"Extras", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_EXTRA_PALETTES, ARRAYSIZE(Cyberbots_A_PILOTS_EXTRA_PALETTES) },
};

const sDescTreeNode Cyberbots_A_BONUS_COLLECTION[] =
{
    { L"Intro", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BONUS_INTRO_PALETTES, ARRAYSIZE(Cyberbots_A_BONUS_INTRO_PALETTES) },
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BONUS_SELECTSCREEN_PALETTES, ARRAYSIZE(Cyberbots_A_BONUS_SELECTSCREEN_PALETTES) },
    { L"Machine Select", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BONUS_MACHINESELECT_PALETTES, ARRAYSIZE(Cyberbots_A_BONUS_MACHINESELECT_PALETTES) },
    { L"Effects", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BONUS_EFFECTS_PALETTES, ARRAYSIZE(Cyberbots_A_BONUS_EFFECTS_PALETTES) },
};

const sDescTreeNode Cyberbots_A_UNITS[] =
{
    { L"BX-02 BLODIA", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BLODIA_COLLECTION, ARRAYSIZE(Cyberbots_A_BLODIA_COLLECTION) },
    { L"S-008 SUPER-8", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SUPER8_COLLECTION, ARRAYSIZE(Cyberbots_A_SUPER8_COLLECTION) },
    { L"UVA-02 HELION", DESC_NODETYPE_TREE, (void*)Cyberbots_A_HELION_COLLECTION, ARRAYSIZE(Cyberbots_A_HELION_COLLECTION) },
    { L"RF-004 REPTOS", DESC_NODETYPE_TREE, (void*)Cyberbots_A_REPTOS_COLLECTION, ARRAYSIZE(Cyberbots_A_REPTOS_COLLECTION) },
    { L"FZ-900J KILLER BEE", DESC_NODETYPE_TREE, (void*)Cyberbots_A_KILLERBEE_COLLECTION, ARRAYSIZE(Cyberbots_A_KILLERBEE_COLLECTION) },
    { L"GP-N1 GULDIN", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GULDIN_COLLECTION, ARRAYSIZE(Cyberbots_A_GULDIN_COLLECTION) },
    { L"FZ-100 FORDY", DESC_NODETYPE_TREE, (void*)Cyberbots_A_FORDY_COLLECTION, ARRAYSIZE(Cyberbots_A_FORDY_COLLECTION) },
    { L"GP-V4 VISE", DESC_NODETYPE_TREE, (void*)Cyberbots_A_VISE_COLLECTION, ARRAYSIZE(Cyberbots_A_VISE_COLLECTION) },
    { L"P-10033 GAITS", DESC_NODETYPE_TREE, (void*)Cyberbots_A_GAITS_COLLECTION, ARRAYSIZE(Cyberbots_A_GAITS_COLLECTION) },

    { L"BX-04S SWORDSMAN", DESC_NODETYPE_TREE, (void*)Cyberbots_A_SWORDSMAN_COLLECTION, ARRAYSIZE(Cyberbots_A_SWORDSMAN_COLLECTION) },
    { L"BX-07R RIOT", DESC_NODETYPE_TREE, (void*)Cyberbots_A_RIOT_COLLECTION, ARRAYSIZE(Cyberbots_A_RIOT_COLLECTION) },
    { L"RF-009 LIGHTNING", DESC_NODETYPE_TREE, (void*)Cyberbots_A_LIGHTNING_COLLECTION, ARRAYSIZE(Cyberbots_A_LIGHTNING_COLLECTION) },
    { L"RF-027 JACKAL", DESC_NODETYPE_TREE, (void*)Cyberbots_A_JACKAL_COLLECTION, ARRAYSIZE(Cyberbots_A_JACKAL_COLLECTION) },
    { L"FZ-202 TARANTULA", DESC_NODETYPE_TREE, (void*)Cyberbots_A_TARANTULA_COLLECTION, ARRAYSIZE(Cyberbots_A_TARANTULA_COLLECTION) },
    { L"GP-D2 CYCLONE", DESC_NODETYPE_TREE, (void*)Cyberbots_A_CYCLONE_COLLECTION, ARRAYSIZE(Cyberbots_A_CYCLONE_COLLECTION) },
    { L"X-O WARLOCK", DESC_NODETYPE_TREE, (void*)Cyberbots_A_WARLOCK_COLLECTION, ARRAYSIZE(Cyberbots_A_WARLOCK_COLLECTION) },
    { L"UNKNOWN 404", DESC_NODETYPE_TREE, (void*)Cyberbots_A_404_COLLECTION, ARRAYSIZE(Cyberbots_A_404_COLLECTION) },

    { L"Pilots", DESC_NODETYPE_TREE, (void*)Cyberbots_A_PILOTS_COLLECTION, ARRAYSIZE(Cyberbots_A_PILOTS_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)Cyberbots_A_BONUS_COLLECTION, ARRAYSIZE(Cyberbots_A_BONUS_COLLECTION) },
};

constexpr auto Cyberbots_A_NUMUNIT = ARRAYSIZE(Cyberbots_A_UNITS);

constexpr auto Cyberbots_A_EXTRALOC = Cyberbots_A_NUMUNIT;

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef Cyberbots_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
