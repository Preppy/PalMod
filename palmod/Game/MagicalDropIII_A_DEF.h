#pragma once

// 0x00 = Fool
// 0x01 = Magician
// 0x02 = High Priestess
// 0x03 = Empress
// 0x04 = Emperor
// 0x05 = Hierophant
// 0x06 = Lovers
// 0x07 = Chariot
// 0x08 = Strength
// 0x09 = Hermit
// 0x0a = Fortune
// 0x0b = Justice
// 0x0c = Hanged Man
// 0x0d = Death
// 0x0e = Temperance
// 0x0f = Devil
// 0x10 = Tower
// 0x11 = Star
// 0x12 = Moon
// 0x13 = Sun
// 0x14 = Judgement
// 0x15 = World
// 0x16 = Black Pierrot
// 0x17 = Strength's Father
// 0x18 = BONUS

const UINT16 MAGICALDROPIII_A_IMGIDS_USED[] =
{
    indexMagDrop3Sprites_BlkPierrot,    // 0x53
    indexMagDrop3Sprites_Chariot,       // 0x54
    indexMagDrop3Sprites_Death,         // 0x55
    indexMagDrop3Sprites_Devil,         // 0x56
    indexMagDrop3Sprites_Emperor,       // 0x57
    indexMagDrop3Sprites_Empress,       // 0x58
    indexMagDrop3Sprites_Fool,          // 0x59
    indexMagDrop3Sprites_Fortune,       // 0x5A
    indexMagDrop3Sprites_HangedMan,     // 0x5B
    indexMagDrop3Sprites_Hermit,        // 0x5C
    indexMagDrop3Sprites_Hierophant,    // 0x5D
    indexMagDrop3Sprites_HighPriestess, // 0x5E
    indexMagDrop3Sprites_Judgement,     // 0x5F
    indexMagDrop3Sprites_Justice,       // 0x60
    indexMagDrop3Sprites_Lovers,        // 0x61
    indexMagDrop3Sprites_Magician,      // 0x62
    indexMagDrop3Sprites_Moon,          // 0x63
    indexMagDrop3Sprites_Star,          // 0x64
    indexMagDrop3Sprites_Strength,      // 0x65
    indexMagDrop3Sprites_StrFather,     // 0x66
    indexMagDrop3Sprites_Sun,           // 0x67
    indexMagDrop3Sprites_Temperance,    // 0x68
    indexMagDrop3Sprites_Tower,         // 0x69
    indexMagDrop3Sprites_World,         // 0x6A
    indexMagDrop3Sprites_Bonus,         // 0x6B
};

//Fool
const sGame_PaletteDataset MAGICALDROPIII_A_FOOL_PALETTES_A[] =
{
    { L"Fool A", 0x6cc20, 0x6cc40, indexMagDrop3Sprites_Fool },
    { L"Fool A Portrait", 0x6a200, 0x6a260, indexMagDrop3Sprites_Fool, 0x40 },
    { L"Fool A Map", 0x6a6c0, 0x6a6e0, indexMagDrop3Sprites_Fool, 0x38 },
    { L"Fool A Pre-Fight Icon", 0x6acc0, 0x6ace0, indexMagDrop3Sprites_Fool, 0x41 },

};

const sGame_PaletteDataset MAGICALDROPIII_A_FOOL_PALETTES_B[] =
{
    { L"Fool B", 0x6cc40, 0x6cc60, indexMagDrop3Sprites_Fool },
    { L"Fool B Portrait", 0x6a260, 0x6a2c0, indexMagDrop3Sprites_Fool, 0x40 },
    { L"Fool B Map", 0x6a6e0, 0x6a700, indexMagDrop3Sprites_Fool, 0x38 },
    { L"Fool B Pre-Fight Icon", 0x6ace0, 0x6ad00, indexMagDrop3Sprites_Fool, 0x41 },
};

//Magician
const sGame_PaletteDataset MAGICALDROPIII_A_MAGICIAN_PALETTES_A[] =
{
    { L"Magician A", 0x6c1e0, 0x6c280, indexMagDrop3Sprites_Magician },
    { L"Magician A Portrait", 0x6c660, 0x6c6a0, indexMagDrop3Sprites_Magician, 0x40 },
    { L"Magician A Map", 0x6a700, 0x6a720, indexMagDrop3Sprites_Magician, 0x38 },
    { L"Magician A Pre-Fight Icon", 0x6ad00, 0x6ad20, indexMagDrop3Sprites_Magician, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_MAGICIAN_PALETTES_B[] =
{
    { L"Magician B", 0x6c280, 0x6c320, indexMagDrop3Sprites_Magician },
    { L"Magician B Portrait", 0x6c6a0, 0x6c6e0, indexMagDrop3Sprites_Magician, 0x40 },
    { L"Magician B Map", 0x6a720, 0x6a740, indexMagDrop3Sprites_Magician, 0x38 },
    { L"Magician B Pre-Fight Icon", 0x6ad20, 0x6ad40, indexMagDrop3Sprites_Magician, 0x41 },
};

//High Priestess
const sGame_PaletteDataset MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_A[] =
{
    { L"High Priestess A", 0x6bd00, 0x6bd80 },
    { L"High Priestess A Portrait", 0x6a0c0, 0x6a120 },
    { L"High Priestess A Map", 0x6a740, 0x6a760 },
    { L"High Priestess A Pre-Fight Icon", 0x6ad40, 0x6ad60 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_B[] =
{
    { L"High Priestess B", 0x6bd80, 0x6be00 },
    { L"High Priestess B Map", 0x6a760, 0x6a780 },
    { L"High Priestess B Pre-Fight Icon", 0x6ad60, 0x6ad80 },
};

//Empress
const sGame_PaletteDataset MAGICALDROPIII_A_EMPRESS_PALETTES_A[] =
{
    { L"Empress A", 0x6c8e0, 0x6c940 },
    { L"Empress Win Extra A", 0x6c940, 0x6c960 },
    { L"Empress A Portrait", 0x6b040, 0x6b060 },
    { L"Empress A Map", 0x6a780, 0x6a7a0 },
    { L"Empress A Pre-Fight Icon", 0x6ad80, 0x6ada0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_EMPRESS_PALETTES_B[] =
{
    { L"Empress B", 0x6c960, 0x6c9c0 },
    { L"Empress Win Extra B", 0x6c9c0, 0x6c9e0 },
    { L"Empress B Portrait", 0x6b060, 0x6b080 },
    { L"Empress B Map", 0x6a7a0, 0x6a7c0 },
    { L"Empress B Pre-Fight Icon", 0x6ada0, 0x6adc0 },
};

//Emperor
const sGame_PaletteDataset MAGICALDROPIII_A_EMPEROR_PALETTES_A[] =
{
    { L"Emperor A", 0x69500, 0x69540 },
    { L"Emperor A Portrait", 0x6b900, 0x6b940 },
    { L"Emperor A Map", 0x6a7c0, 0x6a7e0 },
    { L"Emperor A Pre-Fight Icon", 0x6adc0, 0x6ade0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_EMPEROR_PALETTES_B[] =
{
    { L"Emperor B", 0x69540, 0x69580 },
    { L"Emperor B Portrait", 0x6b940, 0x6b980 },
    { L"Emperor B Map", 0x6a7e0, 0x6a800 },
    { L"Emperor B Pre-Fight Icon", 0x6ade0, 0x6ae00 },
};

//Hierophant
const sGame_PaletteDataset MAGICALDROPIII_A_HIEROPHANT_PALETTES_A[] =
{
    { L"Hierophant A", 0x696c0, 0x69820 },
    { L"Hierophant A Map", 0x6a800, 0x6a820 },
    { L"Hierophant A Pre-Fight Icon", 0x6ae00, 0x6ae20 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HIEROPHANT_PALETTES_B[] =
{
    { L"Hierophant B", 0x69820, 0x69980 },
    { L"Hierophant B Map", 0x6a820, 0x6a840 },
    { L"Hierophant B Pre-Fight Icon", 0x6ae20, 0x6ae40 },
};

//Lovers
const sGame_PaletteDataset MAGICALDROPIII_A_LOVERS_PALETTES_A[] =
{
    { L"Lovers A", 0x69000, 0x690c0 },
    { L"Lovers A Map", 0x6a840, 0x6a860 },
    { L"Lovers A Pre-Fight Icon", 0x6ae40, 0x6ae60 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_LOVERS_PALETTES_B[] =
{
    { L"Lovers B", 0x690c0, 0x69180 },
    { L"Lovers B Map", 0x6a860, 0x6a880 },
    { L"Lovers B Pre-Fight Icon", 0x6ae60, 0x6ae80 },
};

//Chariot
const sGame_PaletteDataset MAGICALDROPIII_A_CHARIOT_PALETTES_A[] =
{
    { L"Chariot A", 0x69200, 0x69280 },
    { L"Chariot A Portrait", 0x6a180, 0x6a1c0 },
    { L"Chariot A Map", 0x6a880, 0x6a8a0 },
    { L"Chariot A Pre-Fight Icon", 0x6ae80, 0x6aea0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_CHARIOT_PALETTES_B[] =
{
    { L"Chariot B", 0x69280, 0x69300 },
    { L"Chariot B Portrait", 0x6a1c0, 0x6a200 },
    { L"Chariot B Map", 0x6a8a0, 0x6a8c0 },
    { L"Chariot B Pre-Fight Icon", 0x6aea0, 0x6aec0 },
};

//Strength
const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTH_PALETTES_A[] =
{
    { L"Strength A", 0x69980, 0x699e0 },
    { L"Strength A Map", 0x6a8c0, 0x6a8e0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTH_PALETTES_B[] =
{
    { L"Strength B", 0x699e0, 0x69a40 },
    { L"Strength B Map", 0x6a8e0, 0x6a900 },
};

//Hermit
const sGame_PaletteDataset MAGICALDROPIII_A_HERMIT_PALETTES_A[] =
{
    { L"Hermit A", 0x69300, 0x69400 },
    { L"Hermit A Portrait", 0x6b4c0, 0x6b520 },
    { L"Hermit A Map", 0x6a900, 0x6a920 },
    { L"Hermit A Pre-Fight Icon", 0x6af00, 0x6af20 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HERMIT_PALETTES_B[] =
{
    { L"Hermit B", 0x69400, 0x69500 },
    { L"Hermit B Portrait", 0x6b520, 0x6b580 },
    { L"Hermit B Map", 0x6a920, 0x6a940 },
    { L"Hermit B Pre-Fight Icon", 0x6af20, 0x6af40 },
};

//Fortune
const sGame_PaletteDataset MAGICALDROPIII_A_FORTUNE_PALETTES_A[] =
{
    { L"Fortune A", 0x6c6e0, 0x6c7a0 },
    { L"Fortune Wheel A", 0x6c7a0, 0x6c7e0 },
    { L"Fortune A Map", 0x6a940, 0x6a960 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_FORTUNE_PALETTES_B[] =
{
    { L"Fortune B", 0x6c7e0, 0x6c8a0 },
    { L"Fortune Wheel B", 0x6c8a0, 0x6c8e0 },
    { L"Fortune B Map", 0x6a960, 0x6a980 },
};

//Justice
const sGame_PaletteDataset MAGICALDROPIII_A_JUSTICE_PALETTES_A[] =
{
    { L"Justice A", 0x6c320, 0x6c380 },
    { L"Justice A Portrait", 0x6a2c0, 0x6a300 },
    { L"Justice A Map", 0x6a980, 0x6a9a0 },
    { L"Justice A Pre-Fight Icon", 0x6af80, 0x6afa0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_JUSTICE_PALETTES_B[] =
{
    { L"Justice B", 0x6c380, 0x6c3e0 },
    { L"Justice B Portrait", 0x6a300, 0x6a340 },
    { L"Justice B Map", 0x6a9a0, 0x6a9c0 },
    { L"Justice B Pre-Fight Icon", 0x6afa0, 0x6afc0 },
};

//Hanged Man
const sGame_PaletteDataset MAGICALDROPIII_A_HANGEDMAN_PALETTES_A[] =
{
    { L"Hanged Man A", 0x69180, 0x691c0, indexMagDrop3Sprites_HangedMan },
    { L"Hanged Man A Portrait", 0x6b5e0, 0x6b620, indexMagDrop3Sprites_HangedMan, 0x40 },
    { L"Hanged Man A Map", 0x6a9c0, 0x6a9e0, indexMagDrop3Sprites_HangedMan, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HANGEDMAN_PALETTES_B[] =
{
    { L"Hanged Man B", 0x691c0, 0x69200, indexMagDrop3Sprites_HangedMan },
    { L"Hanged Man B Portrait", 0x6b620, 0x6b660, indexMagDrop3Sprites_HangedMan, 0x40 },
    { L"Hanged Man B Map", 0x6a9e0, 0x6aa00, indexMagDrop3Sprites_HangedMan, 0x38 },
};

//Death
const sGame_PaletteDataset MAGICALDROPIII_A_DEATH_PALETTES_A[] =
{
    { L"Death A", 0x69a80, 0x69b20 },
    { L"Death Losing Flash 1 A", 0x69b20, 0x69b40 },
    { L"Death Losing Flash 2 A", 0x69b40, 0x69b60 },
    { L"Death A Map", 0x6aa00, 0x6aa20 },
    { L"Death A Pre-Fight Icon", 0x6b000, 0x6b020 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_DEATH_PALETTES_B[] =
{
    { L"Death B", 0x69b60, 0x69c00 },
    { L"Death Losing Flash 1 B", 0x69c00, 0x69c20 },
    { L"Death Losing Flash 2 B", 0x69c20, 0x69c40 },
    { L"Death B Map", 0x6aa20, 0x6aa40 },
    { L"Death B Pre-Fight Icon", 0x6b020, 0x6b040 },
};

//Temperance
const sGame_PaletteDataset MAGICALDROPIII_A_TEMPERANCE_PALETTES_A[] =
{
    { L"Temperance A", 0x6a140, 0x6a160 },
    { L"Temperance A Map", 0x6aa60, 0x6aa80 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_TEMPERANCE_PALETTES_B[] =
{
    { L"Temperance B", 0x6a120, 0x6a140 },
    { L"Temperance B Map", 0x6aa40, 0x6aa60 },
};

//Devil
const sGame_PaletteDataset MAGICALDROPIII_A_DEVIL_PALETTES_A[] =
{
    { L"Devil A", 0x69c80, 0x69d00 },
    { L"Devil A Portrait", 0x6b840, 0x6b8a0 },
    { L"Devil A Map", 0x6aa80, 0x6aaa0 },
    { L"Devil A Pre-Fight Icon", 0x6b080, 0x6b0a0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_DEVIL_PALETTES_B[] =
{
    { L"Devil B", 0x69d00, 0x69d80 },
    { L"Devil B Portrait", 0x6b8a0, 0x6b900 },
    { L"Devil B Map", 0x6aaa0, 0x6aac0 },
    { L"Devil B Pre-Fight Icon", 0x6b0a0, 0x6b0c0 },
};

//Tower
const sGame_PaletteDataset MAGICALDROPIII_A_TOWER_PALETTES_A[] =
{
    { L"Tower A", 0x69580, 0x69620 },
    { L"Tower A Portrait", 0x6b5c0, 0x6b5e0 },
    { L"Tower A Map", 0x6aac0, 0x6aae0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_TOWER_PALETTES_B[] =
{
    { L"Tower B", 0x69620, 0x696c0 },
    { L"Tower B Map", 0x6aae0, 0x6ab00 },
};

//Star
const sGame_PaletteDataset MAGICALDROPIII_A_STAR_PALETTES_A[] =
{
    { L"Star A", 0x69d80, 0x69e20 },
    { L"Star A Map", 0x6ab00, 0x6ab20 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_STAR_PALETTES_B[] =
{
    { L"Star B", 0x69e20, 0x69ec0 },
    { L"Star B Map", 0x6ab20, 0x6ab40 },
};

//Moon
const sGame_PaletteDataset MAGICALDROPIII_A_MOON_PALETTES_A[] =
{
    { L"Moon A", 0x6d020, 0x6d0a0 },
    { L"Moon A Map", 0x6ab60, 0x6ab80 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_MOON_PALETTES_B[] =
{
    { L"Moon B", 0x6cfa0, 0x6d020 },
    { L"Moon B Map", 0x6ab40, 0x6ab60 },
};

//Sun
const sGame_PaletteDataset MAGICALDROPIII_A_SUN_PALETTES_A[] =
{
    { L"Sun A", 0x69a40, 0x69a60 },
    { L"Sun A Map", 0x6ab80, 0x6aba0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_SUN_PALETTES_B[] =
{
    { L"Sun B", 0x69a60, 0x69a80 },
    { L"Sun B Portrait", 0x6b5a0, 0x6b5c0 },
    { L"Sun B Map", 0x6aba0, 0x6abc0 },
};

//Judgment
const sGame_PaletteDataset MAGICALDROPIII_A_JUDGEMENT_PALETTES_A[] =
{
    { L"Judgement A", 0x6be00, 0x6be40 },
    { L"Judgement A Portrait", 0x6c3e0, 0x6c420 },
    { L"Judgement A Map", 0x6abc0, 0x6abe0 },
    { L"Judgement A Pre-Fight Icon", 0x6b1c0, 0x6b1e0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_JUDGEMENT_PALETTES_B[] =
{
    { L"Judgement B", 0x6be40, 0x6be80 },
    { L"Judgement B Portrait", 0x6c420, 0x6c460 },
    { L"Judgement B Map", 0x6abe0, 0x6ac00 },
    { L"Judgement B Pre-Fight Icon", 0x6b1e0, 0x6b200 },
};

//World
const sGame_PaletteDataset MAGICALDROPIII_A_WORLD_PALETTES_A[] =
{
    { L"World A", 0x69ec0, 0x69f00 },
    { L"World A Portrait", 0x6a000, 0x6a020 },
    { L"World A Map", 0x6ac00, 0x6ac20 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_WORLD_PALETTES_B[] =
{
    { L"World B", 0x69f00, 0x69f40 },
    { L"World B Map", 0x6ac20, 0x6ac40 },
};

//Black Pierrot
const sGame_PaletteDataset MAGICALDROPIII_A_BLACKPIERROT_PALETTES_A[] =
{
    { L"Black Pierrot A", 0x6cc60, 0x6cc80 },
    { L"Black Pierrot A Map", 0x6ac40, 0x6ac60 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_BLACKPIERROT_PALETTES_B[] =
{
    { L"Black Pierrot B", 0x6cc80, 0x6cca0 },
    { L"Black Pierrot B Map", 0x6ac60, 0x6ac80 },
};

//Strength's Father
const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_A[] =
{
    { L"Strenght's Father A", 0x69c40, 0x69c60 },
    { L"Strenght's Father A Map", 0x6ac80, 0x6aca0 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_B[] =
{
    { L"Strenght's Father B", 0x69c60, 0x69c80 },
    { L"Strenght's Father B Map", 0x6aca0, 0x6acc0 },
};

//-BONUS-

//Select Screen
const sGame_PaletteDataset MAGICALDROPIII_A_BONUS_PALETTES_SELECTSCREEN[] =
{
    { L"Mode Unselected", 0x69fa0, 0x69fc0 },
    { L"Mode Selected 1/4", 0x69f60, 0x69f80 },
    { L"Mode Selected 2/4", 0x69f80, 0x69fa0 },
    { L"Mode Selected 3/4", 0x69fc0, 0x69fe0 },
    { L"Mode Selected 4/4", 0x69fe0, 0x6a000 },
    { L"Main Background", 0x685c0, 0x68600 },
    { L"Portrait Background", 0x685a0, 0x685c0 },
    { L"Tutorial Things", 0x68440, 0x684e0 },
    { L"Tutorial Boards", 0x68560, 0x685a0 },
    { L"Name Board", 0x684e0, 0x68500 },
    { L"Data East Logo", 0x680c0, 0x68120 },
};

//Select Icons
const sGame_PaletteDataset MAGICALDROPIII_A_BONUS_PALETTES_SELECTICONS[] =
{
    { L"Select Icons 1/10", 0x6a3c0, 0x6a500 },
    { L"Select Icons 2/10", 0x6aec0, 0x6af00 },
    { L"Select Icons 3/10", 0x6b480, 0x6b4c0 },
    { L"Select Icons 4/10", 0x6b580, 0x6b5a0 },
    { L"Select Icons 5/10", 0x6b800, 0x6b840 },
    { L"Select Icons 6/10", 0x6cee0, 0x6cf00 },
    { L"Select Icons 7/10", 0x6c0a0, 0x6c0e0 },
    { L"Select Icons 8/10", 0x6cec0, 0x6cee0 },
    { L"Select Icons 9/10", 0x6a640, 0x6a660 },
    { L"Select Icons 10/10", 0x6a680, 0x6a6a0 },
};

//Ingame Extras
const sGame_PaletteDataset MAGICALDROPIII_A_BONUS_PALETTES_INGAME[] =
{
    { L"P1 Clown", 0x68a00, 0x68a20 },
    { L"P2 Clown", 0x68a20, 0x68a40 },
    { L"Color Ballons", 0x68200, 0x68280 },
    { L"Ballons Explosion", 0x68420, 0x68440 },
    { L"Ice Ballons", 0x68280, 0x682a0 },
    { L"Ice Color Ballons", 0x682e0, 0x68360 },
    { L"Number Blocks", 0x68360, 0x68380 },
    { L"Rainbow Ballons", 0x682c0, 0x682e0 },
    { L"Fire Ballons", 0x683c0, 0x683e0 },
    { L"Game Over Wall", 0x682a0, 0x682c0 },
};

const sDescTreeNode MAGICALDROPIII_A_FOOL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_FOOL_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_FOOL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_FOOL_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_FOOL_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_MAGICIAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_MAGICIAN_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_MAGICIAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_MAGICIAN_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_MAGICIAN_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_HIGHPRIESTESS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_EMPRESS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_EMPRESS_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_EMPRESS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_EMPRESS_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_EMPRESS_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_EMPEROR_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_EMPEROR_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_EMPEROR_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_EMPEROR_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_EMPEROR_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_HIEROPHANT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HIEROPHANT_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_HIEROPHANT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HIEROPHANT_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_HIEROPHANT_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_LOVERS_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_LOVERS_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_LOVERS_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_LOVERS_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_LOVERS_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_CHARIOT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_CHARIOT_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_CHARIOT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_CHARIOT_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_CHARIOT_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_STRENGTH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STRENGTH_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_STRENGTH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STRENGTH_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_STRENGTH_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_HERMIT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HERMIT_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_HERMIT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HERMIT_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_HERMIT_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_FORTUNE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_FORTUNE_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_FORTUNE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_FORTUNE_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_FORTUNE_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_JUSTICE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_JUSTICE_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_JUSTICE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_JUSTICE_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_JUSTICE_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_HANGEDMAN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HANGEDMAN_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_HANGEDMAN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HANGEDMAN_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_HANGEDMAN_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_DEATH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_DEATH_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_DEATH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_DEATH_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_DEATH_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_TEMPERANCE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_TEMPERANCE_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_TEMPERANCE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_TEMPERANCE_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_TEMPERANCE_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_DEVIL_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_DEVIL_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_DEVIL_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_DEVIL_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_DEVIL_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_TOWER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_TOWER_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_TOWER_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_TOWER_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_TOWER_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_STAR_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STAR_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_STAR_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STAR_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_STAR_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_MOON_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_MOON_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_MOON_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_MOON_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_MOON_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_SUN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_SUN_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_SUN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_SUN_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_SUN_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_JUDGEMENT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_JUDGEMENT_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_JUDGEMENT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_JUDGEMENT_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_JUDGEMENT_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_WORLD_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_WORLD_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_WORLD_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_WORLD_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_WORLD_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_BLACKPIERROT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BLACKPIERROT_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_BLACKPIERROT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BLACKPIERROT_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_BLACKPIERROT_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_STRENGTHSFATHER_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_A, ARRAYSIZE(MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_B, ARRAYSIZE(MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_B) },
};

const sDescTreeNode MAGICALDROPIII_A_BONUS_COLLECTION[] =
{
    { L"Select Screen", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BONUS_PALETTES_SELECTSCREEN, ARRAYSIZE(MAGICALDROPIII_A_BONUS_PALETTES_SELECTSCREEN) },
    { L"Select Icons", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BONUS_PALETTES_SELECTICONS, ARRAYSIZE(MAGICALDROPIII_A_BONUS_PALETTES_SELECTICONS) },
    { L"In-game Extras", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BONUS_PALETTES_INGAME, ARRAYSIZE(MAGICALDROPIII_A_BONUS_PALETTES_INGAME) },
};

const sDescTreeNode MAGICALDROPIII_A_UNITS[] =
{
    { L"Fool", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_FOOL_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_FOOL_COLLECTION) },
    { L"Magician", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_MAGICIAN_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_MAGICIAN_COLLECTION) },
    { L"High Priestess", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HIGHPRIESTESS_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_HIGHPRIESTESS_COLLECTION) },
    { L"Empress", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_EMPRESS_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_EMPRESS_COLLECTION) },
    { L"Emperor", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_EMPEROR_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_EMPEROR_COLLECTION) },
    { L"Hierophant", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HIEROPHANT_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_HIEROPHANT_COLLECTION) },
    { L"Lovers", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_LOVERS_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_LOVERS_COLLECTION) },
    { L"Chariot", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_CHARIOT_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_CHARIOT_COLLECTION) },
    { L"Strength", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STRENGTH_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_STRENGTH_COLLECTION) },
    { L"Hermit", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HERMIT_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_HERMIT_COLLECTION) },
    { L"Fortune", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_FORTUNE_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_FORTUNE_COLLECTION) },
    { L"Justice", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_JUSTICE_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_JUSTICE_COLLECTION) },
    { L"Hanged Man", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HANGEDMAN_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_HANGEDMAN_COLLECTION) },
    { L"Death", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_DEATH_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_DEATH_COLLECTION) },
    { L"Temperance", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_TEMPERANCE_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_TEMPERANCE_COLLECTION) },
    { L"Devil", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_DEVIL_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_DEVIL_COLLECTION) },
    { L"Tower", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_TOWER_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_TOWER_COLLECTION) },
    { L"Star", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STAR_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_STAR_COLLECTION) },
    { L"Moon", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_MOON_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_MOON_COLLECTION) },
    { L"Sun", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_SUN_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_SUN_COLLECTION) },
    { L"Judgement", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_JUDGEMENT_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_JUDGEMENT_COLLECTION) },
    { L"World", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_WORLD_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_WORLD_COLLECTION) },
    { L"Black Pierrot", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BLACKPIERROT_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_BLACKPIERROT_COLLECTION) },
    { L"Strength's Father", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_STRENGTHSFATHER_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_STRENGTHSFATHER_COLLECTION) },

    { L"Bonus Palettes", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_BONUS_COLLECTION, ARRAYSIZE(MAGICALDROPIII_A_BONUS_COLLECTION) },
};

constexpr auto MAGICALDROPIII_A_NUMUNIT = ARRAYSIZE(MAGICALDROPIII_A_UNITS);

#define MAGICALDROPIII_A_EXTRALOC MAGICALDROPIII_A_NUMUNIT

// We extend this array with data groveled from the extensible extras file, if any.
const stExtraDef MAGICALDROPIII_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
