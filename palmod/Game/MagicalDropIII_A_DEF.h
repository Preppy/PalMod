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

const std::vector<uint16_t> MAGICALDROPIII_A_IMGIDS_USED =
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
    { L"High Priestess A", 0x6bd00, 0x6bd80, indexMagDrop3Sprites_HighPriestess, 0x01, &pairNext },
    { L"High Priestess A Portrait", 0x6a0c0, 0x6a120, indexMagDrop3Sprites_HighPriestess, 0x40 },
    { L"High Priestess A Map", 0x6a740, 0x6a760, indexMagDrop3Sprites_HighPriestess, 0x38 },
    { L"High Priestess A Pre-Fight Icon", 0x6ad40, 0x6ad60, indexMagDrop3Sprites_HighPriestess, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HIGHPRIESTESS_PALETTES_B[] =
{
    { L"High Priestess B", 0x6bd80, 0x6be00, indexMagDrop3Sprites_HighPriestess, 0x02 },
    { L"High Priestess B Map", 0x6a760, 0x6a780, indexMagDrop3Sprites_HighPriestess, 0x38 },
    { L"High Priestess B Pre-Fight Icon", 0x6ad60, 0x6ad80, indexMagDrop3Sprites_HighPriestess, 0x41 },
};

//Empress
const sGame_PaletteDataset MAGICALDROPIII_A_EMPRESS_PALETTES_A[] =
{
    { L"Empress A", 0x6c8e0, 0x6c940, indexMagDrop3Sprites_Empress, 0x00, &pairNext2 },
    { L"Empress Win Extra A", 0x6c940, 0x6c960, indexMagDrop3Sprites_Empress, 0x01 },
    { L"Empress A Portrait", 0x6b040, 0x6b060, indexMagDrop3Sprites_Empress, 0x40, &pairPrevious2 },
    { L"Empress A Map", 0x6a780, 0x6a7a0, indexMagDrop3Sprites_Empress, 0x38 },
    { L"Empress A Pre-Fight Icon", 0x6ad80, 0x6ada0, indexMagDrop3Sprites_Empress, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_EMPRESS_PALETTES_B[] =
{
    { L"Empress B", 0x6c960, 0x6c9c0, indexMagDrop3Sprites_Empress, 0x00, &pairNext2 },
    { L"Empress Win Extra B", 0x6c9c0, 0x6c9e0, indexMagDrop3Sprites_Empress, 0x01 },
    { L"Empress B Portrait", 0x6b060, 0x6b080, indexMagDrop3Sprites_Empress, 0x40, &pairPrevious2 },
    { L"Empress B Map", 0x6a7a0, 0x6a7c0, indexMagDrop3Sprites_Empress, 0x38 },
    { L"Empress B Pre-Fight Icon", 0x6ada0, 0x6adc0, indexMagDrop3Sprites_Empress, 0x41 },
};

//Emperor
const sGame_PaletteDataset MAGICALDROPIII_A_EMPEROR_PALETTES_A[] =
{
    { L"Emperor A", 0x69500, 0x69540, indexMagDrop3Sprites_Emperor, 0x00 },
    { L"Emperor A Portrait", 0x6b900, 0x6b940, indexMagDrop3Sprites_Emperor, 0x40 },
    { L"Emperor A Map", 0x6a7c0, 0x6a7e0, indexMagDrop3Sprites_Emperor, 0x38 },
    { L"Emperor A Pre-Fight Icon", 0x6adc0, 0x6ade0, indexMagDrop3Sprites_Emperor, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_EMPEROR_PALETTES_B[] =
{
    { L"Emperor B", 0x69540, 0x69580, indexMagDrop3Sprites_Emperor, 0x00 },
    { L"Emperor B Portrait", 0x6b940, 0x6b980, indexMagDrop3Sprites_Emperor, 0x40 },
    { L"Emperor B Map", 0x6a7e0, 0x6a800, indexMagDrop3Sprites_Emperor, 0x38 },
    { L"Emperor B Pre-Fight Icon", 0x6ade0, 0x6ae00, indexMagDrop3Sprites_Emperor, 0x41 },
};

//Hierophant
const sGame_PaletteDataset MAGICALDROPIII_A_HIEROPHANT_PALETTES_A[] =
{
    { L"Hierophant A", 0x696c0, 0x69820, indexMagDrop3Sprites_Hierophant, 0x00 },
    { L"Hierophant A Map", 0x6a800, 0x6a820, indexMagDrop3Sprites_Hierophant, 0x38 },
    { L"Hierophant A Pre-Fight Icon", 0x6ae00, 0x6ae20, indexMagDrop3Sprites_Hierophant, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HIEROPHANT_PALETTES_B[] =
{
    { L"Hierophant B", 0x69820, 0x69980, indexMagDrop3Sprites_Hierophant, 0x00 },
    { L"Hierophant B Map", 0x6a820, 0x6a840, indexMagDrop3Sprites_Hierophant, 0x38 },
    { L"Hierophant B Pre-Fight Icon", 0x6ae20, 0x6ae40, indexMagDrop3Sprites_Hierophant, 0x41 },
};

//Lovers
const sGame_PaletteDataset MAGICALDROPIII_A_LOVERS_PALETTES_A[] =
{
    { L"Lovers A", 0x69000, 0x690c0, indexMagDrop3Sprites_Lovers, 0x00 },
    { L"Lovers A Map", 0x6a840, 0x6a860, indexMagDrop3Sprites_Lovers, 0x38 },
    { L"Lovers A Pre-Fight Icon", 0x6ae40, 0x6ae60, indexMagDrop3Sprites_Lovers, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_LOVERS_PALETTES_B[] =
{
    { L"Lovers B", 0x690c0, 0x69180, indexMagDrop3Sprites_Lovers, 0x00 },
    { L"Lovers B Map", 0x6a860, 0x6a880, indexMagDrop3Sprites_Lovers, 0x38 },
    { L"Lovers B Pre-Fight Icon", 0x6ae60, 0x6ae80, indexMagDrop3Sprites_Lovers, 0x41 },
};

//Chariot
const sGame_PaletteDataset MAGICALDROPIII_A_CHARIOT_PALETTES_A[] =
{
    { L"Chariot A", 0x69200, 0x69280, indexMagDrop3Sprites_Chariot, 0x00 },
    { L"Chariot A Portrait", 0x6a180, 0x6a1c0, indexMagDrop3Sprites_Chariot, 0x40 },
    { L"Chariot A Map", 0x6a880, 0x6a8a0, indexMagDrop3Sprites_Chariot, 0x38 },
    { L"Chariot A Pre-Fight Icon", 0x6ae80, 0x6aea0, indexMagDrop3Sprites_Chariot, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_CHARIOT_PALETTES_B[] =
{
    { L"Chariot B", 0x69280, 0x69300, indexMagDrop3Sprites_Chariot, 0x00 },
    { L"Chariot B Portrait", 0x6a1c0, 0x6a200, indexMagDrop3Sprites_Chariot, 0x40 },
    { L"Chariot B Map", 0x6a8a0, 0x6a8c0, indexMagDrop3Sprites_Chariot, 0x38 },
    { L"Chariot B Pre-Fight Icon", 0x6aea0, 0x6aec0, indexMagDrop3Sprites_Chariot, 0x41 },
};

//Strength
const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTH_PALETTES_A[] =
{
    { L"Strength A", 0x69c40, 0x69c60, indexMagDrop3Sprites_Strength, 0x00 },
    { L"Strength A Map", 0x6a8c0, 0x6a8e0, indexMagDrop3Sprites_Strength, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTH_PALETTES_B[] =
{
    { L"Strength B", 0x69c60, 0x69c80, indexMagDrop3Sprites_Strength, 0x00 },
    { L"Strength B Map", 0x6a8e0, 0x6a900, indexMagDrop3Sprites_Strength, 0x38 },
};

//Hermit
const sGame_PaletteDataset MAGICALDROPIII_A_HERMIT_PALETTES_A[] =
{
    { L"Hermit A", 0x69300, 0x69400, indexMagDrop3Sprites_Hermit, 0x00 },
    { L"Hermit A Portrait", 0x6b4c0, 0x6b520, indexMagDrop3Sprites_Hermit, 0x40 },
    { L"Hermit A Map", 0x6a900, 0x6a920, indexMagDrop3Sprites_Hermit, 0x38 },
    { L"Hermit A Pre-Fight Icon", 0x6af00, 0x6af20, indexMagDrop3Sprites_Hermit, 0x41 },
    { L"Hermit A Losing Flash 2", 0x6c9e0, 0x6ca00, indexMagDrop3Sprites_Hermit, 0x01 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HERMIT_PALETTES_B[] =
{
    { L"Hermit B", 0x69400, 0x69500, indexMagDrop3Sprites_Hermit, 0x00 },
    { L"Hermit B Portrait", 0x6b520, 0x6b580, indexMagDrop3Sprites_Hermit, 0x40 },
    { L"Hermit B Map", 0x6a920, 0x6a940, indexMagDrop3Sprites_Hermit, 0x38 },
    { L"Hermit B Pre-Fight Icon", 0x6af20, 0x6af40, indexMagDrop3Sprites_Hermit, 0x41 },
    { L"Hermit B Losing Flash 2", 0x6ca00, 0x6ca20, indexMagDrop3Sprites_Hermit, 0x01 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_HERMIT_PALETTES_SHARED[] =
{
    { L"Hermit Shared Losing Flash 1", 0x6a6a0, 0x6a6c0, indexMagDrop3Sprites_Hermit, 0x01 },
};

//Fortune
const sGame_PaletteDataset MAGICALDROPIII_A_FORTUNE_PALETTES_A[] =
{
    { L"Fortune A", 0x6c6e0, 0x6c7a0, indexMagDrop3Sprites_Fortune, 0x00 },
    { L"Fortune Wheel A", 0x6c7a0, 0x6c7e0, indexMagDrop3Sprites_Fortune, 0x01 },
    { L"Fortune A Map", 0x6a940, 0x6a960, indexMagDrop3Sprites_Fortune, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_FORTUNE_PALETTES_B[] =
{
    { L"Fortune B", 0x6c7e0, 0x6c8a0, indexMagDrop3Sprites_Fortune, 0x00 },
    { L"Fortune Wheel B", 0x6c8a0, 0x6c8e0, indexMagDrop3Sprites_Fortune, 0x01 },
    { L"Fortune B Map", 0x6a960, 0x6a980, indexMagDrop3Sprites_Fortune, 0x38 },
};

//Justice
const sGame_PaletteDataset MAGICALDROPIII_A_JUSTICE_PALETTES_A[] =
{
    { L"Justice A", 0x6c320, 0x6c380, indexMagDrop3Sprites_Justice, 0x00 },
    { L"Justice A Portrait", 0x6a2c0, 0x6a300, indexMagDrop3Sprites_Justice, 0x40 },
    { L"Justice A Map", 0x6a980, 0x6a9a0, indexMagDrop3Sprites_Justice, 0x38 },
    { L"Justice A Pre-Fight Icon", 0x6af80, 0x6afa0, indexMagDrop3Sprites_Justice, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_JUSTICE_PALETTES_B[] =
{
    { L"Justice B", 0x6c380, 0x6c3e0, indexMagDrop3Sprites_Justice, 0x00 },
    { L"Justice B Portrait", 0x6a300, 0x6a340, indexMagDrop3Sprites_Justice, 0x40 },
    { L"Justice B Map", 0x6a9a0, 0x6a9c0, indexMagDrop3Sprites_Justice, 0x38 },
    { L"Justice B Pre-Fight Icon", 0x6afa0, 0x6afc0, indexMagDrop3Sprites_Justice, 0x41 },
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
    { L"Death A", 0x69a80, 0x69b20, indexMagDrop3Sprites_Death, 0x00 },
    { L"Death Losing Flash 1 A", 0x69b20, 0x69b40, indexMagDrop3Sprites_Death, 0x01 },
    { L"Death Losing Flash 2 A", 0x69b40, 0x69b60, indexMagDrop3Sprites_Death, 0x01 },
    { L"Death A Map", 0x6aa00, 0x6aa20, indexMagDrop3Sprites_Death, 0x38 },
    { L"Death A Pre-Fight Icon", 0x6b000, 0x6b020, indexMagDrop3Sprites_Death, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_DEATH_PALETTES_B[] =
{
    { L"Death B", 0x69b60, 0x69c00, indexMagDrop3Sprites_Death, 0x00 },
    { L"Death Losing Flash 1 B", 0x69c00, 0x69c20, indexMagDrop3Sprites_Death, 0x01 },
    { L"Death Losing Flash 2 B", 0x69c20, 0x69c40, indexMagDrop3Sprites_Death, 0x01 },
    { L"Death B Map", 0x6aa20, 0x6aa40, indexMagDrop3Sprites_Death, 0x38 },
    { L"Death B Pre-Fight Icon", 0x6b020, 0x6b040, indexMagDrop3Sprites_Death, 0x41 },
};

//Temperance
const sGame_PaletteDataset MAGICALDROPIII_A_TEMPERANCE_PALETTES_A[] =
{
    { L"Temperance A", 0x6a140, 0x6a160, indexMagDrop3Sprites_Temperance, 0x00 },
    { L"Temperance A Map", 0x6aa60, 0x6aa80, indexMagDrop3Sprites_Temperance, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_TEMPERANCE_PALETTES_B[] =
{
    { L"Temperance B", 0x6a120, 0x6a140, indexMagDrop3Sprites_Temperance, 0x00 },
    { L"Temperance B Map", 0x6aa40, 0x6aa60, indexMagDrop3Sprites_Temperance, 0x38 },
};

//Devil
const sGame_PaletteDataset MAGICALDROPIII_A_DEVIL_PALETTES_A[] =
{
    { L"Devil A", 0x69c80, 0x69d00, indexMagDrop3Sprites_Devil, 0x00 },
    { L"Devil A Portrait", 0x6b840, 0x6b8a0, indexMagDrop3Sprites_Devil, 0x40 },
    { L"Devil A Map", 0x6aa80, 0x6aaa0, indexMagDrop3Sprites_Devil, 0x38 },
    { L"Devil A Pre-Fight Icon", 0x6b080, 0x6b0a0, indexMagDrop3Sprites_Devil, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_DEVIL_PALETTES_B[] =
{
    { L"Devil B", 0x69d00, 0x69d80, indexMagDrop3Sprites_Devil, 0x00 },
    { L"Devil B Portrait", 0x6b8a0, 0x6b900, indexMagDrop3Sprites_Devil, 0x40 },
    { L"Devil B Map", 0x6aaa0, 0x6aac0, indexMagDrop3Sprites_Devil, 0x38 },
    { L"Devil B Pre-Fight Icon", 0x6b0a0, 0x6b0c0, indexMagDrop3Sprites_Devil, 0x41 },
};

//Tower
const sGame_PaletteDataset MAGICALDROPIII_A_TOWER_PALETTES_A[] =
{
    { L"Tower A", 0x69580, 0x69620, indexMagDrop3Sprites_Tower, 0x00 },
    { L"Tower A Portrait", 0x6b5c0, 0x6b5e0, indexMagDrop3Sprites_Tower, 0x40 },
    { L"Tower A Map", 0x6aac0, 0x6aae0, indexMagDrop3Sprites_Tower, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_TOWER_PALETTES_B[] =
{
    { L"Tower B", 0x69620, 0x696c0, indexMagDrop3Sprites_Tower, 0x00 },
    { L"Tower B Portrait", 0x6cf00, 0x6cf20, indexMagDrop3Sprites_Tower, 0x40 },
    { L"Tower B Map", 0x6aae0, 0x6ab00, indexMagDrop3Sprites_Tower, 0x38 },
};

//Star
const sGame_PaletteDataset MAGICALDROPIII_A_STAR_PALETTES_A[] =
{
    { L"Star A", 0x69d80, 0x69e20, indexMagDrop3Sprites_Star, 0x01, &pairNext2 },
    { L"Star A Map", 0x6ab00, 0x6ab20, indexMagDrop3Sprites_Star, 0x38 },
    { L"Star A Pre-Fight Icon", 0x6b100, 0x6b120, indexMagDrop3Sprites_Star, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_STAR_PALETTES_B[] =
{
    { L"Star B", 0x69e20, 0x69ec0, indexMagDrop3Sprites_Star, 0x02 },
    { L"Star B Map", 0x6ab20, 0x6ab40, indexMagDrop3Sprites_Star, 0x38 },
};

//Moon
const sGame_PaletteDataset MAGICALDROPIII_A_MOON_PALETTES_A[] =
{
    { L"Moon A", 0x6d020, 0x6d0a0, indexMagDrop3Sprites_Moon, 0x00 },
    { L"Moon A Map", 0x6ab60, 0x6ab80, indexMagDrop3Sprites_Moon, 0x38 },
    { L"Moon A Pre-Fight Icon", 0x6b160, 0x6b180, indexMagDrop3Sprites_Moon, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_MOON_PALETTES_B[] =
{
    { L"Moon B", 0x6cfa0, 0x6d020, indexMagDrop3Sprites_Moon, 0x00 },
    { L"Moon B Map", 0x6ab40, 0x6ab60, indexMagDrop3Sprites_Moon, 0x38 },
    { L"Moon B Pre-Fight Icon", 0x6b140, 0x6b160, indexMagDrop3Sprites_Moon, 0x41 },
};

//Sun
const sGame_PaletteDataset MAGICALDROPIII_A_SUN_PALETTES_A[] =
{
    { L"Sun A", 0x69a40, 0x69a60, indexMagDrop3Sprites_Sun, 0x01  },
    { L"Sun A Map", 0x6ab80, 0x6aba0, indexMagDrop3Sprites_Sun, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_SUN_PALETTES_B[] =
{
    { L"Sun B", 0x69a60, 0x69a80, indexMagDrop3Sprites_Sun, 0x02, &pairNext },
    { L"Sun B Portrait", 0x6b5a0, 0x6b5c0, indexMagDrop3Sprites_Sun, 0x42 },
    { L"Sun B Map", 0x6aba0, 0x6abc0, indexMagDrop3Sprites_Sun, 0x38 },
};

//Judgment
const sGame_PaletteDataset MAGICALDROPIII_A_JUDGEMENT_PALETTES_A[] =
{
    { L"Judgement A", 0x6be00, 0x6be40, indexMagDrop3Sprites_Judgement, 0x00 },
    { L"Judgement A Portrait", 0x6c3e0, 0x6c420, indexMagDrop3Sprites_Judgement, 0x40 },
    { L"Judgement A Map", 0x6abc0, 0x6abe0, indexMagDrop3Sprites_Judgement, 0x38 },
    { L"Judgement A Pre-Fight Icon", 0x6b1c0, 0x6b1e0, indexMagDrop3Sprites_Judgement, 0x41 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_JUDGEMENT_PALETTES_B[] =
{
    { L"Judgement B", 0x6be40, 0x6be80, indexMagDrop3Sprites_Judgement, 0x00 },
    { L"Judgement B Portrait", 0x6c420, 0x6c460, indexMagDrop3Sprites_Judgement, 0x40 },
    { L"Judgement B Map", 0x6abe0, 0x6ac00, indexMagDrop3Sprites_Judgement, 0x38 },
    { L"Judgement B Pre-Fight Icon", 0x6b1e0, 0x6b200, indexMagDrop3Sprites_Judgement, 0x41 },
};

//World
const sGame_PaletteDataset MAGICALDROPIII_A_WORLD_PALETTES_A[] =
{
    { L"World A", 0x69ec0, 0x69f00, indexMagDrop3Sprites_World, 0x01, &pairNext2 },
    { L"World A Map", 0x6ac00, 0x6ac20, indexMagDrop3Sprites_World, 0x38 },
    { L"World A Portrait", 0x6a000, 0x6a020, indexMagDrop3Sprites_World, 0x40 }, // there is not a pair at 0x6a020 nor in that small chunk there
};

const sGame_PaletteDataset MAGICALDROPIII_A_WORLD_PALETTES_B[] =
{
    { L"World B", 0x69f00, 0x69f40, indexMagDrop3Sprites_World, 0x02 },
    { L"World B Map", 0x6ac20, 0x6ac40, indexMagDrop3Sprites_World, 0x38 },
};

//Black Pierrot
const sGame_PaletteDataset MAGICALDROPIII_A_BLACKPIERROT_PALETTES_A[] =
{
    { L"Black Pierrot A", 0x6cc60, 0x6cc80, indexMagDrop3Sprites_BlkPierrot, 0x00 },
    { L"Black Pierrot A Map", 0x6ac40, 0x6ac60, indexMagDrop3Sprites_BlkPierrot, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_BLACKPIERROT_PALETTES_B[] =
{
    { L"Black Pierrot B", 0x6cc80, 0x6cca0, indexMagDrop3Sprites_BlkPierrot, 0x00 },
    { L"Black Pierrot B Map", 0x6ac60, 0x6ac80, indexMagDrop3Sprites_BlkPierrot, 0x38 },
};

//Strength's Father
const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_A[] =
{
    { L"Strength's Father A", 0x69980, 0x699e0, indexMagDrop3Sprites_StrFather, 0x00 },
    { L"Strength's Father A Map", 0x6ac80, 0x6aca0, indexMagDrop3Sprites_StrFather, 0x38 },
};

const sGame_PaletteDataset MAGICALDROPIII_A_STRENGTHSFATHER_PALETTES_B[] =
{
    { L"Strength's Father B", 0x699e0, 0x69a40, indexMagDrop3Sprites_StrFather, 0x00 },
    { L"Strength's Father B Map", 0x6aca0, 0x6acc0, indexMagDrop3Sprites_StrFather, 0x38 },
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
    { L"Main Background", 0x685c0, 0x68600, indexMagDrop3Sprites_Bonus, 0x12 },
    { L"Portrait Background", 0x685a0, 0x685c0, indexMagDrop3Sprites_Bonus, 0x13 },
    { L"Tutorial Things", 0x68440, 0x684e0 },
    { L"Tutorial Boards", 0x68560, 0x685a0 },
    { L"Name Board", 0x684e0, 0x68500 },
    { L"Data East Logo", 0x680c0, 0x68120, indexMagDrop3Sprites_Bonus, 0x11 },
};

//Select Icons
const sGame_PaletteDataset MAGICALDROPIII_A_BONUS_PALETTES_SELECTICONS[] =
{
    { L"Select Icons 1/10", 0x6a3c0, 0x6a500, indexMagDrop3Sprites_Bonus, 0x01, &pairFullyLinkedNode },
    { L"Select Icons 2/10", 0x6aec0, 0x6af00, indexMagDrop3Sprites_Bonus, 0x02 },
    { L"Select Icons 3/10", 0x6b480, 0x6b4c0, indexMagDrop3Sprites_Bonus, 0x03 },
    { L"Select Icons 4/10", 0x6b580, 0x6b5a0, indexMagDrop3Sprites_Bonus, 0x04 },
    { L"Select Icons 5/10", 0x6b800, 0x6b840, indexMagDrop3Sprites_Bonus, 0x05 },
    { L"Select Icons 6/10", 0x6cee0, 0x6cf00, indexMagDrop3Sprites_Bonus, 0x06 },
    { L"Select Icons 7/10", 0x6c0a0, 0x6c0e0, indexMagDrop3Sprites_Bonus, 0x07 },
    { L"Select Icons 8/10", 0x6cec0, 0x6cee0, indexMagDrop3Sprites_Bonus, 0x08 },
    { L"Select Icons 9/10", 0x6a640, 0x6a660, indexMagDrop3Sprites_Bonus, 0x09 },
    { L"Select Icons 10/10", 0x6a680, 0x6a6a0, indexMagDrop3Sprites_Bonus, 0x10 },
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
    { L"Shared", DESC_NODETYPE_TREE, (void*)MAGICALDROPIII_A_HERMIT_PALETTES_SHARED, ARRAYSIZE(MAGICALDROPIII_A_HERMIT_PALETTES_SHARED) },
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
