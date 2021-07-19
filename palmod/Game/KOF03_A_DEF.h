#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF03_A_KYO_PALETTE_A. 
// * Update every array using KOF03_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 KOF03_A_IMGIDS_USED[] =
{
    indexKOF02UMSprites_Clark,
    indexKOF02UMSprites_Chang,     // 0x80
    indexKOF02UMSprites_Daimon,    // 0x87
    indexKOF02UMSprites_Iori,
    indexKOF02UMSprites_K,         // 0x92
    indexKOF02UMSprites_Kim,       // 0x96
    indexKOF02UMSprites_Leona,
    indexKOF02UMSprites_Maxima,    // 0xA2
    indexKOF02UMSprites_Ralf,

    indexKOF02UMSprites_Joe,
    indexKOF02UMSprites_Kusanagi,
    indexKOF02UMSprites_Mai,

    indexKOFXISprites_Adelheid,
    indexKOFXISprites_BlueMary,
    indexKOFXISprites_Kyo,
    indexKOFXISprites_Ryo,
    indexKOFXISprites_Shingo,
    indexKOFXISprites_Yuri,

    indexKOF03Sprites_Adelheid,     // 0xe4
    indexKOF03Sprites_Ash,          // 0xe5
    indexKOF03Sprites_Athena,       // 0xe6
    indexKOF03Sprites_Benimaru,     // 0xe7
    indexKOF03Sprites_Billy,        // 0xe8
    indexKOF03Sprites_BlueMary,     // 0xe9
    indexKOF03Sprites_Chang,        // 0xea
    indexKOF03Sprites_Chizuru,      // 0xeb
    indexKOF03Sprites_Clark,        // 0xec
    indexKOF03Sprites_Duo,          // 0xed
    indexKOF03Sprites_Gato,         // 0xee
    indexKOF03Sprites_GoroDaimon,   // 0xef
    indexKOF03Sprites_Hinako,       // 0xf0
    indexKOF03Sprites_Iori,         // 0xf1
    indexKOF03Sprites_JhunHoon,     // 0xf2
    indexKOF03Sprites_Joe,          // 0xf3
    indexKOF03Sprites_K,            // 0xf4
    indexKOF03Sprites_Kim,          // 0xf5
    indexKOF03Sprites_King,         // 0xf6
    indexKOF03Sprites_KUSANAGI,     // 0xf7
    indexKOF03Sprites_Kyo,          // 0xf8
    indexKOF03Sprites_Leona,        // 0xf9
    indexKOF03Sprites_Mai,          // 0xfa
    indexKOF03Sprites_Maki,         // 0xfb
    indexKOF03Sprites_Malin,        // 0xfc
    indexKOF03Sprites_Maxima,       // 0xfd
    indexKOF03Sprites_Mukai,        // 0xfe
    indexKOF03Sprites_Ralf,         // 0xff
    indexKOF03Sprites_Robert,       // 0x100 :o
    indexKOF03Sprites_Ryo,          // 0x101
    indexKOF03Sprites_Shen,         // 0x102
    indexKOF03Sprites_Shingo,       // 0x103
    indexKOF03Sprites_Terry,        // 0x104
    indexKOF03Sprites_Tizoc,        // 0x105
    indexKOF03Sprites_Whip,         // 0x106
    indexKOF03Sprites_Yamazaki,     // 0x107
    indexKOF03Sprites_Yuri,         // 0x108
    indexKOF03Sprites_TeamBackgrounds, // 0x109
    indexKOF03Sprites_Portraits,    // 0x10a
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_A[] =
{
    { L"Ash Crimson A", 0x2000, 0x2020, indexKOF03Sprites_Ash, 0x00 },
    { L"Fire Effects A", 0x2020, 0x2040, indexKOF03Sprites_Ash, 0x08 },
    { L"Ventose A", 0x2100, 0x2120, indexKOF03Sprites_Ash, 0x09 },
    { L"Ash Electricity A", 0x2040, 0x2060, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul A", 0x2080, 0x20a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai A", 0x20c0, 0x20e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Sans Culottes Glow A", 0x21c0, 0x21e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory A", 0x01f120, 0x01f160, indexKOF03Sprites_Ash, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_B[] =
{
    { L"Ash Crimson B", 0x2200, 0x2220, indexKOF03Sprites_Ash, 0x00 },
    { L"Fire Effects B", 0x2220, 0x2240, indexKOF03Sprites_Ash, 0x08 },
    { L"Ventose B", 0x2300, 0x2320, indexKOF03Sprites_Ash, 0x09 },
    { L"Ash Electricity B", 0x2240, 0x2260, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul B", 0x2280, 0x22a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai B", 0x22c0, 0x22e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Sans Culottes Glow B", 0x23c0, 0x23e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory B", 0x01f160, 0x01f1a0, indexKOF03Sprites_Ash, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_C[] =
{
    { L"Ash Crimson C", 0x2400, 0x2420, indexKOF03Sprites_Ash, 0x00 },
    { L"Fire Effects C", 0x2420, 0x2440, indexKOF03Sprites_Ash, 0x08 },
    { L"Ventose C", 0x2500, 0x2520, indexKOF03Sprites_Ash, 0x09 },
    { L"Ash Electricity C", 0x2440, 0x2460, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul C", 0x2480, 0x24a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai C ", 0x24c0, 0x24e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Sans Culottes Glow C", 0x25c0, 0x25e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory C", 0x01f1a0, 0x01f1e0, indexKOF03Sprites_Ash, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_D[] =
{
    { L"Ash Crimson D", 0x2600, 0x2620, indexKOF03Sprites_Ash, 0x00 },
    { L"Fire Effects D", 0x2620, 0x2640, indexKOF03Sprites_Ash, 0x08 },
    { L"Ventose D", 0x2700, 0x2720, indexKOF03Sprites_Ash, 0x09 },
    { L"Ash Electricity D", 0x2640, 0x2660, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul D", 0x2680, 0x26a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai D", 0x26c0, 0x26e0 , indexKOF03Sprites_Ash, 0x00},
    { L"Ash Sans Culottes Glow D", 0x27c0, 0x27e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory D", 0x01f1e0, 0x01f220, indexKOF03Sprites_Ash, 0x30 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_A[] =
{
    { L"Duo Lon A", 0x2800, 0x2820, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu A", 0x2900, 0x2920 },
    { L"Duo Lon Electricity A", 0x2840, 0x2860, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul A", 0x2880, 0x28a0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai A", 0x28c0, 0x28e0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow A", 0x29c0, 0x29e0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Victory A", 0x01f220, 0x01f260, indexKOF03Sprites_Duo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_B[] =
{
    { L"Duo Lon B", 0x2a00, 0x2a20, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu B", 0x2b00, 0x2b20 },
    { L"Duo Lon Electricity B", 0x2A40, 0x2A60, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul B", 0x2A80, 0x2Aa0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai B", 0x2Ac0, 0x2Ae0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow B", 0x2bc0, 0x2be0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Victory B", 0x01f260, 0x01f2a0, indexKOF03Sprites_Duo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_C[] =
{
    { L"Duo Lon C", 0x2c00, 0x2c20, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu C", 0x2d00, 0x2d20 },
    { L"Duo Lon Electricity C", 0x2C40, 0x2C60, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul C", 0x2C80, 0x2Ca0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai C", 0x2Cc0, 0x2Ce0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow C", 0x2dc0, 0x2de0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Victory C", 0x01f2a0, 0x01f2e0, indexKOF03Sprites_Duo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_D[] =
{
    { L"Duo Lon D", 0x2e00, 0x2e20, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu D", 0x2f00, 0x2f20 },
    { L"Duo Lon Electricity D", 0x2E40, 0x2E60, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul D", 0x2E80, 0x2Ea0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai D", 0x2Ec0, 0x2Ee0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow D", 0x2fc0, 0x2fe0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon victory D", 0x01f2e0, 0x01f320, indexKOF03Sprites_Duo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_A[] =
{
    { L"Shen Woo A", 0x3000, 0x3020, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken A", 0x3020, 0x3040 },
    { L"Bakushin Burst A", 0x3100, 0x3120 },
    { L"Bakushin Glow A", 0x31c0, 0x31e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity A", 0x3040, 0x3060, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul A", 0x3080, 0x30a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai A", 0x30c0, 0x30e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory A", 0x01f320, 0x01f360, indexKOF03Sprites_Shen, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_B[] =
{
    { L"Shen Woo B", 0x3200, 0x3220, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken B", 0x3220, 0x3240 },
    { L"Bakushin Burst B", 0x3300, 0x3320 },
    { L"Bakushin Glow B", 0x33c0, 0x33e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity B", 0x3240, 0x3260, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul B", 0x3280, 0x32a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai B", 0x32c0, 0x32e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory B", 0x01f360, 0x01f3a0, indexKOF03Sprites_Shen, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_C[] =
{
    { L"Shen Woo C", 0x3400, 0x3420, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken C", 0x3420, 0x3440 },
    { L"Bakushin Burst C", 0x3500, 0x3520 },
    { L"Bakushin Glow C", 0x35c0, 0x35e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity C", 0x3440, 0x3460, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul C", 0x3480, 0x34a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai C", 0x34c0, 0x34e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory C", 0x01f3a0, 0x01f3e0, indexKOF03Sprites_Shen, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_D[] =
{
    { L"Shen Woo D", 0x3600, 0x3620, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken D", 0x3620, 0x3640 },
    { L"Bakushin Burst D", 0x3700, 0x3720 },
    { L"Bakushin Glow D", 0x37c0, 0x37e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity D", 0x3640, 0x3660, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul D", 0x3680, 0x36a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai D", 0x36c0, 0x36e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory D", 0x01f3e0, 0x01f420, indexKOF03Sprites_Shen, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_A[] =
{
    { L"Terry Bogard A", 0x3800, 0x3820, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf A", 0x3900, 0x3920 },
    { L"Power Wave/Geyser A", 0x3920, 0x3940 },
    { L"Burn Knuckle A", 0x3940, 0x3960 },
    { L"Power Stream A", 0x3980, 0x39a0 },
    { L"Terry Electricity A", 0x3840, 0x3860, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul A", 0x3880, 0x38a0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai A", 0x38c0, 0x38e0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory A", 0x01f420, 0x01f460, indexKOF03Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_B[] =
{
    { L"Terry Bogard B", 0x3a00, 0x3a20, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf B", 0x3b00, 0x3b20 },
    { L"Power Wave/Geyser B", 0x3b20, 0x3b40 },
    { L"Burn Knuckle B", 0x3b40, 0x3b60 },
    { L"Power Stream B", 0x3b80, 0x3ba0 },
    { L"Terry Electricity B", 0x3A40, 0x3A60, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul B", 0x3A80, 0x3Aa0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai B", 0x3Ac0, 0x3Ae0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory B", 0x01f460, 0x01f4a0, indexKOF03Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_C[] =
{
    { L"Terry Bogard C", 0x3c00, 0x3c20, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf C", 0x3d00, 0x3d20 },
    { L"Power Wave/Geyser C", 0x3d20, 0x3d40 },
    { L"Burn Knuckle C", 0x3d40, 0x3d60 },
    { L"Power Stream C", 0x3d80, 0x3da0 },
    { L"Terry Electricity C", 0x3C40, 0x3C60, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul C", 0x3C80, 0x3Ca0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai C", 0x3Cc0, 0x3Ce0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory C", 0x01f4a0, 0x01f4e0, indexKOF03Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_D[] =
{
    { L"Terry Bogard D", 0x3e00, 0x3e20, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf D", 0x3f00, 0x3f20 },
    { L"Power Wave/Geyser D", 0x3f20, 0x3f40 },
    { L"Burn Knuckle D", 0x3f40, 0x3f60 },
    { L"Power Stream D", 0x3f80, 0x3fa0 },
    { L"Terry Electricity D", 0x3E40, 0x3E60, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul D", 0x3E80, 0x3Ea0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai D", 0x3Ec0, 0x3Ee0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory D", 0x01f4e0, 0x01f520, indexKOF03Sprites_Terry, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_A[] =
{
    { L"Joe Higashi A", 0x4000, 0x4020, indexKOF02UMSprites_Joe },
    { L"Hurricane Upper A", 0x4100, 0x4120 },
    { L"Slash Kick/Screw Upper A", 0x4120, 0x4140 },
    { L"Joe A Electricity", 0x4040, 0x4060, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe A Soul", 0x4080, 0x40a0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe A Shikai", 0x40c0, 0x40e0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe Victory A", 0x01f520, 0x01f560, indexKOF03Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_B[] =
{
    { L"Joe Higashi B", 0x4200, 0x4220, indexKOF02UMSprites_Joe },
    { L"Hurricane Upper B", 0x4300, 0x4320 },
    { L"Slash Kick/Screw Upper B", 0x4320, 0x4340 },
    { L"Joe B Electricity", 0x4240, 0x4260, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe B Soul", 0x4280, 0x42a0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe B Shikai", 0x42c0, 0x42e0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe Victory B", 0x01f560, 0x01f5a0, indexKOF03Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_C[] =
{
    { L"Joe Higashi C", 0x4400, 0x4420, indexKOF02UMSprites_Joe },
    { L"Hurricane Upper C", 0x4500, 0x4520 },
    { L"Slash Kick/Screw Upper C", 0x4520, 0x4540 },
    { L"Joe C Electricity", 0x4440, 0x4460, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe C Soul", 0x4480, 0x44a0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe C Shikai", 0x44c0, 0x44e0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe Victory C ", 0x01f5a0, 0x01f5e0, indexKOF03Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_D[] =
{
    { L"Joe Higashi D", 0x4600, 0x4620, indexKOF02UMSprites_Joe },
    { L"Hurricane Upper D", 0x4700, 0x4720 },
    { L"Slash Kick/Screw Upper D", 0x4720, 0x4740 },
    { L"Joe D Electricity", 0x4640, 0x4660, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe D Soul", 0x4680, 0x46a0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe D Shikai", 0x46c0, 0x46e0, indexKOF02UMSprites_Joe, 0x00 },
    { L"Joe Victory D", 0x01f5e0, 0x01f620, indexKOF03Sprites_Joe, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_A[] =
{
    { L"Tizoc A", 0x4800, 0x4820, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM A", 0x4940, 0x4960 },
    { L"Griffon Big Fall LDM A", 0x4920, 0x4940 },
    { L"Tizoc A Electricity", 0x4840, 0x4860, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc A Soul", 0x4880, 0x48a0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc A Shikai", 0x48c0, 0x48e0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory A", 0x01f620, 0x01f660, indexKOF03Sprites_Tizoc, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_B[] =
{
    { L"Tizoc B", 0x4a00, 0x4a20, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM B", 0x4b40, 0x4b60 },
    { L"Griffon Big Fall LDM B", 0x4b20, 0x4b40 },
    { L"Tizoc B Electricity", 0x4A40, 0x4A60, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc B Soul", 0x4A80, 0x4Aa0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc B Shikai", 0x4Ac0, 0x4Ae0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory B", 0x01f660, 0x01f6a0, indexKOF03Sprites_Tizoc, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_C[] =
{
    { L"Tizoc C", 0x4c00, 0x4c20, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM C", 0x4d40, 0x4d60 },
    { L"Griffon Big Fall LDM C", 0x4d20, 0x4d40 },
    { L"Tizoc C Electricity", 0x4C40, 0x4C60, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc C Soul", 0x4C80, 0x4Ca0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory C", 0x01f6a0, 0x01f6e0, indexKOF03Sprites_Tizoc, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_D[] =
{
    { L"Tizoc D", 0x4e00, 0x4e20, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM D", 0x4f40, 0x4f60 },
    { L"Griffon Big Fall LDM D", 0x4f20, 0x4f40 },
    { L"Tizoc C Shikai", 0x4Cc0, 0x4Ce0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc D Electricity", 0x4E40, 0x4E60, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc D Soul", 0x4E80, 0x4Ea0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc D Shikai", 0x4Ec0, 0x4Ee0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory D", 0x01f6e0, 0x01f720, indexKOF03Sprites_Tizoc, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_A[] =
{
    { L"Ryo Sakazaki A", 0x5000, 0x5020, indexKOFXISprites_Ryo },
    { L"Haoh Shoukou Ken A", 0x5100, 0x5120 },
    { L"Ko'ou Ken A", 0x5120, 0x5140 },
    { L"Ryo A Electricity", 0x5040, 0x5060, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo A Soul", 0x5080, 0x50a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo A Shikai", 0x50c0, 0x50e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory A", 0x01f720, 0x01f760, indexKOF03Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_B[] =
{
    { L"Ryo Sakazaki B", 0x5200, 0x5220, indexKOFXISprites_Ryo, 0x00 },
    { L"Haoh Shoukou Ken B", 0x5300, 0x5320 },
    { L"Ko'ou Ken B", 0x5320, 0x5340 },
    { L"Ryo B Electricity", 0x5240, 0x5260, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo B Soul", 0x5280, 0x52a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo B Shikai", 0x52c0, 0x52e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory B", 0x01f760, 0x01f7a0, indexKOF03Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_C[] =
{
    { L"Ryo Sakazaki C", 0x5400, 0x5420, indexKOFXISprites_Ryo, 0x00 },
    { L"Haoh Shoukou Ken C", 0x5500, 0x5520 },
    { L"Ko'ou Ken C", 0x5520, 0x5540 },
    { L"Ryo C Electricity", 0x5440, 0x5460, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo C Soul", 0x5480, 0x54a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo C Shikai", 0x54c0, 0x54e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory C", 0x01f7a0, 0x01f7e0, indexKOF03Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_D[] =
{
    { L"Ryo Sakazaki D", 0x5600, 0x5620, indexKOFXISprites_Ryo, 0x00 },
    { L"Haoh Shoukou Ken D", 0x5700, 0x5720 },
    { L"Ko'ou Ken D", 0x5720, 0x5740 },
    { L"Ryo D Electricity", 0x5640, 0x5660, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo D Soul", 0x5680, 0x56a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo D Shikai", 0x56c0, 0x56e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory D", 0x01f7e0, 0x01f820, indexKOF03Sprites_Ryo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_A[] =
{
    { L"Robert Garcia A", 0x5800, 0x5820, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken A", 0x5920, 0x5940 },
    { L"RyuGeki Ken Impact A", 0x5900, 0x5920 },
    { L"RG Haoh Shokou Ken A", 0x5940, 0x5960 },
    { L"Intro Bouquet A", 0x5960, 0x5980 },
    { L"Robert A Electricity", 0x5840, 0x5860, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert A Soul", 0x5880, 0x58a0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert A Shikai", 0x58c0, 0x58e0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory A", 0x01f820, 0x01f860, indexKOF03Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_B[] =
{
    { L"Robert Garcia B", 0x5a00, 0x5a20, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken B", 0x5b20, 0x5b40 },
    { L"RyuGeki Ken Impact B", 0x5b00, 0x5b20 },
    { L"RG Haoh Shokou Ken B", 0x5b40, 0x5b60 },
    { L"Intro Bouquet B", 0x5b60, 0x5b80 },
    { L"Robert B Electricity", 0x5a40, 0x5a60, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert B Soul", 0x5a80, 0x5aa0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert B Shikai", 0x5ac0, 0x5ae0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory B", 0x01f860, 0x01f8a0, indexKOF03Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_C[] =
{
    { L"Robert Garcia C", 0x5c00, 0x5c20, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken C", 0x5d20, 0x5d40 },
    { L"RyuGeki Ken Impact C", 0x5d00, 0x5d20 },
    { L"RG Haoh Shokou Ken C", 0x5d40, 0x5d60 },
    { L"Intro Bouquet C", 0x5d60, 0x5d80 },
    { L"Robert C Electricity", 0x5c40, 0x5c60, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert C Soul", 0x5c80, 0x5ca0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert C Shikai", 0x5cc0, 0x5ce0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory C", 0x01f8a0, 0x01f8e0, indexKOF03Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_D[] =
{
    { L"Robert Garcia D", 0x5e00, 0x5e20, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken D", 0x5f20, 0x5f40 },
    { L"RyuGeki Ken Impact D", 0x5f00, 0x5f20 },
    { L"RG Haoh Shokou Ken D", 0x5f40, 0x5f60 },
    { L"Intro Bouquet D", 0x5f60, 0x5f80 },
    { L"Robert D Electricity", 0x5e40, 0x5e60, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert D Soul", 0x5e80, 0x5ea0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert D Shikai", 0x5ec0, 0x5ee0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory D", 0x01f8e0, 0x01f920, indexKOF03Sprites_Robert, 0x30 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_A[] =
{
    { L"Yuri Sakazaki A", 0x6000, 0x6020, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken A", 0x6120, 0x6140 },
    { L"YS Ko'ou Ken A", 0x6140, 0x6160 },
    { L"YS Haou SHokou Ken A", 0x6160, 0x6180 },
    { L"Yuri A Electricity", 0x6040, 0x6060, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri A Soul", 0x6080, 0x60a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri A Shikai", 0x60c0, 0x60e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory A", 0x01f920, 0x01f960, indexKOF03Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_B[] =
{
    { L"Yuri Sakazaki B", 0x6200, 0x6220, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken B", 0x6320, 0x6340 },
    { L"YS Ko'ou Ken B", 0x6340, 0x6360 },
    { L"YS Haou SHokou Ken B", 0x6360, 0x6380 },
    { L"Yuri B Electricity", 0x6240, 0x6260, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri B Soul", 0x6280, 0x62a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri B Shikai", 0x62c0, 0x62e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory B", 0x01f960, 0x01f9a0, indexKOF03Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_C[] =
{
    { L"Yuri Sakazaki C", 0x6400, 0x6420, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken C", 0x6520, 0x6540 },
    { L"YS Ko'ou Ken C", 0x6540, 0x6560 },
    { L"YS Haou SHokou Ken C", 0x6560, 0x6580 },
    { L"Yuri C Electricity", 0x6440, 0x6460, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri C Soul", 0x6480, 0x64a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri C Shikai", 0x64c0, 0x64e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory C", 0x01f9a0, 0x01f9e0, indexKOF03Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_D[] =
{
    { L"Yuri Sakazaki D", 0x6600, 0x6620, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken D", 0x6720, 0x6740 },
    { L"YS Ko'ou Ken D", 0x6740, 0x6760 },
    { L"YS Haou SHokou Ken D", 0x6760, 0x6780 },
    { L"Yuri D Electricity", 0x6640, 0x6660, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri D Soul", 0x6680, 0x66a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri D Shikai", 0x66c0, 0x66e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory D", 0x01f9e0, 0x01fa20, indexKOF03Sprites_Yuri, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_A[] =
{
    { L"Kim Kapwhan A", 0x6800, 0x6820, indexKOF02UMSprites_Kim },
    { L"Kim A Electricity", 0x6840, 0x6860, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim A Soul", 0x6880, 0x68a0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim A Shikai", 0x68c0, 0x68e0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim Victory A", 0x01fa20, 0x01fa60, indexKOF03Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_B[] =
{
    { L"Kim Kapwhan B", 0x6a00, 0x6a20, indexKOF02UMSprites_Kim },
    { L"Kim B Electricity", 0x6a40, 0x6a60, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim B Soul", 0x6a80, 0x6aa0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim B Shikai", 0x6ac0, 0x6ae0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim Victory B", 0x01fa60, 0x01faa0, indexKOF03Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_C[] =
{
    { L"Kim Kapwhan C", 0x6c00, 0x6c20, indexKOF02UMSprites_Kim },
    { L"Kim C Electricity", 0x6c40, 0x6c60, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim C Soul", 0x6c80, 0x6ca0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim C Shikai", 0x6cc0, 0x6ce0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim Victory C", 0x01faa0, 0x01fae0, indexKOF03Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_D[] =
{
    { L"Kim Kapwhan D", 0x6e00, 0x6e20, indexKOF02UMSprites_Kim },
    { L"Kim D Electricity", 0x6e40, 0x6e60, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim D Soul", 0x6e80, 0x6ea0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim D Shikai", 0x6ec0, 0x6ee0, indexKOF02UMSprites_Kim, 0x00 },
    { L"Kim Victory D", 0x01fae0, 0x01fb20, indexKOF03Sprites_Kim, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_A[] =
{
    { L"Chang Koehan A", 0x7000, 0x7020, indexKOF02UMSprites_Chang },
    { L"Chang A Electricity", 0x7040, 0x7060, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang A Soul", 0x7080, 0x70a0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang A Shikai", 0x70c0, 0x70e0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang Victory A", 0x01fb20, 0x01fb60, indexKOF03Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_B[] =
{
    { L"Chang Koehan B", 0x7200, 0x7220, indexKOF02UMSprites_Chang },
    { L"Chang B Electricity", 0x7240, 0x7260, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang B Soul", 0x7280, 0x72a0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang B Shikai", 0x72c0, 0x72e0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang Victory B", 0x01fb60, 0x01fba0, indexKOF03Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_C[] =
{
    { L"Chang Koehan C", 0x7400, 0x7420, indexKOF02UMSprites_Chang },
    { L"Chang C Electricity", 0x7440, 0x7460, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang C Soul", 0x7480, 0x74a0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang C Shikai", 0x74c0, 0x74e0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang Victory C", 0x01fba0, 0x01fbe0, indexKOF03Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_D[] =
{
    { L"Chang Koehan D", 0x7600, 0x7620, indexKOF02UMSprites_Chang },
    { L"Chang D Electricity", 0x7640, 0x7660, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang D Soul", 0x7680, 0x76a0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang D Shikai", 0x76c0, 0x76e0, indexKOF02UMSprites_Chang, 0x00 },
    { L"Chang Victory D", 0x01fbe0, 0x01fc20, indexKOF03Sprites_Chang, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_A[] =
{
    { L"Jhun Hoon A", 0x7800, 0x7820, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks A", 0x7920, 0x7940 },
    { L"Haiki Geki A", 0x7940, 0x7960 },
    { L"Ho'ou Ressou Kyaku A", 0x7900, 0x7920 },
    { L"Ressou Hiten Kyaku A", 0x7960, 0x7980 },
    { L"Jhun A Electricity", 0x7840, 0x7860, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun A Soul", 0x7880, 0x78a0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun A Shikai", 0x78c0, 0x78e0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory A", 0x01fc20, 0x01fc60, indexKOF03Sprites_JhunHoon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_B[] =
{
    { L"Jhun Hoon B", 0x7a00, 0x7a20, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks B", 0x7b20, 0x7b40 },
    { L"Haiki Geki B", 0x7b40, 0x7b60 },
    { L"Ho'ou Ressou Kyaku B", 0x7b00, 0x7b20 },
    { L"Ressou Hiten Kyaku B", 0x7b60, 0x7b80 },
    { L"Jhun B Electricity", 0x7a40, 0x7a60, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun B Soul", 0x7a80, 0x7aa0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun B Shikai", 0x7ac0, 0x7ae0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory B", 0x01fc60, 0x01fca0, indexKOF03Sprites_JhunHoon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_C[] =
{
    { L"Jhun Hoon C", 0x7c00, 0x7c20, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks C", 0x7d20, 0x7d40 },
    { L"Haiki Geki C", 0x7d40, 0x7d60 },
    { L"Ho'ou Ressou Kyaku C", 0x7d00, 0x7d20 },
    { L"Ressou Hiten Kyaku C", 0x7d60, 0x7d80 },
    { L"Jhun C Electricity", 0x7c40, 0x7c60, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun C Soul", 0x7c80, 0x7ca0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun C Shikai", 0x7cc0, 0x7ce0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory C", 0x01fca0, 0x01fce0, indexKOF03Sprites_JhunHoon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_D[] =
{
    { L"Jhun Hoon D", 0x7e00, 0x7e20, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks D", 0x7f20, 0x7f40 },
    { L"Haiki Geki D", 0x7f40, 0x7f60 },
    { L"Ho'ou Ressou Kyaku D", 0x7f00, 0x7f20 },
    { L"Ressou Hiten Kyaku D", 0x7f60, 0x7f80 },
    { L"Jhun D Electricity", 0x7e40, 0x7e60, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun D Soul", 0x7e80, 0x7ea0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun D Shikai", 0x7ec0, 0x7ee0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory D", 0x01fce0, 0x01fd20, indexKOF03Sprites_JhunHoon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_A[] =
{
    { L"Leona Heidern A", 0x8000, 0x8020, indexKOF02UMSprites_Leona },
    { L"Ground Saber A", 0x8100, 0x8120 },
    { L"Baltic Launcher A", 0x8120, 0x8140 },
    { L"Moon Slasher A", 0x8180, 0x81a0 },
    { L"x-Calibur A", 0x8160, 0x8180 },
    { L"Earring Bakudan A", 0x81c0, 0x81e0 },
    { L"Victory Slasher A", 0x8140, 0x8160 },
    { L"Rebel Spark A", 0x81a0, 0x81c0 },
    { L"Leona Electricity A", 0x8040, 0x8060, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Soul A", 0x8080, 0x80a0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Shikai A", 0x80c0, 0x80e0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Victory A", 0x01fd20, 0x01fd60, indexKOF03Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_B[] =
{
    { L"Leona Heidern B", 0x8200, 0x8220, indexKOF02UMSprites_Leona },
    { L"Ground Saber B", 0x8300, 0x8320 },
    { L"Baltic Launcher B", 0x8320, 0x8340 },
    { L"Moon Slasher B", 0x8380, 0x83a0 },
    { L"x-Calibur B", 0x8360, 0x8380 },
    { L"Earring Bakudan B", 0x83c0, 0x83e0 },
    { L"Victory Slasher B", 0x8340, 0x8360 },
    { L"Rebel Spark B", 0x83a0, 0x83c0 },
    { L"Leona Electricity B", 0x8240, 0x8260, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Soul B", 0x8280, 0x82a0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Shikai B", 0x82c0, 0x82e0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Victory B", 0x01fd60, 0x01fda0, indexKOF03Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_C[] =
{
    { L"Leona Heidern C", 0x8400, 0x8420, indexKOF02UMSprites_Leona },
    { L"Ground Saber C", 0x8500, 0x8520 },
    { L"Baltic Launcher C", 0x8520, 0x8540 },
    { L"Moon Slasher C", 0x8580, 0x85a0 },
    { L"x-Calibur C", 0x8560, 0x8580 },
    { L"Earring Bakudan C", 0x85c0, 0x85e0 },
    { L"Victory Slasher C", 0x8540, 0x8560 },
    { L"Rebel Spark C", 0x85a0, 0x85c0 },
    { L"Leona Electricity C", 0x8440, 0x8460, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Soul C", 0x8480, 0x84a0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Shikai C", 0x84c0, 0x84e0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Victory C", 0x01fda0, 0x01fde0, indexKOF03Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_D[] =
{
    { L"Leona Heidern D", 0x8600, 0x8620, indexKOF02UMSprites_Leona },
    { L"Ground Saber D", 0x8700, 0x8720 },
    { L"Baltic Launcher D", 0x8720, 0x8740 },
    { L"Moon Slasher D", 0x8780, 0x87a0 },
    { L"x-Calibur D", 0x8760, 0x8780 },
    { L"Earring Bakudan D", 0x87c0, 0x87e0 },
    { L"Victory Slasher D", 0x8740, 0x8760 },
    { L"Rebel Spark D", 0x87a0, 0x87c0 },
    { L"Leona Electricity D", 0x8640, 0x8660, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Soul D", 0x8680, 0x86a0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Shikai D", 0x86c0, 0x86e0, indexKOF02UMSprites_Leona, 0x00 },
    { L"Leona Victory D", 0x01fde0, 0x01fe20, indexKOF03Sprites_Leona, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_A[] =
{
    { L"Ralf Jones A", 0x8800, 0x8820, indexKOF02UMSprites_Ralf },
    { L"Ralf Electricity A", 0x8840, 0x8860, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Soul A", 0x8880, 0x88a0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Shikai A", 0x88c0, 0x88e0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Victory A", 0x01fe20, 0x01fe60, indexKOF03Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_B[] =
{
    { L"Ralf Jones B", 0x8a00, 0x8a20, indexKOF02UMSprites_Ralf },
    { L"Ralf Electricity B", 0x8a40, 0x8a60, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Soul B", 0x8a80, 0x8aa0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Shikai B", 0x8ac0, 0x8ae0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Victory B", 0x01fe60, 0x01fea0, indexKOF03Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_C[] =
{
    { L"Ralf Jones C", 0x8c00, 0x8c20, indexKOF02UMSprites_Ralf },
    { L"Ralf Electricity C", 0x8c40, 0x8c60, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Soul C", 0x8c80, 0x8ca0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Shikai C", 0x8cc0, 0x8ce0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Victory C", 0x01fea0, 0x01fee0, indexKOF03Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_D[] =
{
    { L"Ralf Jones D", 0x8e00, 0x8e20, indexKOF02UMSprites_Ralf },
    { L"Ralf Electricity D", 0x8e40, 0x8e60, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Soul D", 0x8e80, 0x8ea0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Shikai D", 0x8ec0, 0x8ee0, indexKOF02UMSprites_Ralf, 0x00 },
    { L"Ralf Victory D", 0x01fee0, 0x01ff20, indexKOF03Sprites_Ralf, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_A[] =
{
    { L"Clark Steel A", 0x9000, 0x9020, indexKOF02UMSprites_Clark },
    { L"Clark Electricity A", 0x9040, 0x9060, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Soul A", 0x9080, 0x90a0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Shikai A", 0x90c0, 0x90e0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Victory A", 0x01ff20, 0x01ff60, indexKOF03Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_B[] =
{
    { L"Clark Steel B", 0x9200, 0x9220, indexKOF02UMSprites_Clark },
    { L"Clark Electricity B", 0x9240, 0x9260, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Soul B", 0x9280, 0x92a0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Shikai B", 0x92c0, 0x92e0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Victory B", 0x01ff60, 0x01ffa0, indexKOF03Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_C[] =
{
    { L"Clark Steel C", 0x9400, 0x9420, indexKOF02UMSprites_Clark },
    { L"Clark Electricity C", 0x9440, 0x9460, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Soul C", 0x9480, 0x94a0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Shikai C", 0x94c0, 0x94e0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Victory C", 0x01ffa0, 0x01ffe0, indexKOF03Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_D[] =
{
    { L"Clark Steel D", 0x9600, 0x9620, indexKOF02UMSprites_Clark },
    { L"Clark Electricity D", 0x9640, 0x9660, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Soul D", 0x9680, 0x96a0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Shikai D", 0x96c0, 0x96e0, indexKOF02UMSprites_Clark, 0x00 },
    { L"Clark Victory D", 0x01ffe0, 0x020020, indexKOF03Sprites_Clark, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_A[] =
{
    { L"Gato A", 0x9800, 0x9820, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga A", 0x9960, 0x9980 },
    { L"Tatsu Kiba Wave A", 0x9980, 0x99a0 },
    { L"Tatsu Kiba Burst A", 0x9900, 0x9920 },
    { L"Tatsu Kiba Flame A", 0x9920, 0x9940 },
    { L"Gato Electricity A", 0x9840, 0x9860, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul A", 0x9880, 0x98a0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai A", 0x98c0, 0x98e0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory A", 0x020020, 0x020060, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_B[] =
{
    { L"Gato B", 0x9a00, 0x9a20, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga B", 0x9b60, 0x9b80 },
    { L"Tatsu Kiba Wave B", 0x9b80, 0x9ba0 },
    { L"Tatsu Kiba Burst B", 0x9b00, 0x9b20 },
    { L"Tatsu Kiba Flame B", 0x9b20, 0x9b40 },
    { L"Gato Electricity B", 0x9A40, 0x9A60, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul B", 0x9A80, 0x9Aa0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai B", 0x9Ac0, 0x9Ae0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory B", 0x020060, 0x0200a0, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_C[] =
{
    { L"Gato C", 0x9c00, 0x9c20, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga C", 0x9d60, 0x9d80 },
    { L"Tatsu Kiba Wave C", 0x9d80, 0x9da0 },
    { L"Tatsu Kiba Burst C", 0x9d00, 0x9d20 },
    { L"Tatsu Kiba Flame C", 0x9d20, 0x9d40 },
    { L"Gato Electricity C", 0x9C40, 0x9C60, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul C", 0x9C80, 0x9Ca0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai C", 0x9Cc0, 0x9Ce0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory C", 0x0200a0, 0x0200e0, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_D[] =
{
    { L"Gato D", 0x9e00, 0x9e20, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga D", 0x9f60, 0x9f80 },
    { L"Tatsu Kiba Wave D", 0x9f80, 0x9fa0 },
    { L"Tatsu Kiba Burst D", 0x9f00, 0x9f20 },
    { L"Tatsu Kiba Flame D", 0x9f20, 0x9f40 },
    { L"Gato Electricity D", 0x9E40, 0x9E60, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul D", 0x9E80, 0x9Ea0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai D", 0x9Ec0, 0x9Ee0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory D", 0x0200e0, 0x020120, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_A[] =
{
    { L"Billy Kane A", 0xa000, 0xa020 },
    { L"Fire Wheel A", 0xa100, 0xa120 },
    { L"Billy Electricity A", 0xa040, 0xa060, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul A", 0xa080, 0xa0a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai A", 0xa0c0, 0xa0e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory A", 0x020120, 0x020160, indexKOF03Sprites_Billy, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_B[] =
{
    { L"Billy Kane B", 0xa200, 0xa220 },
    { L"Fire Wheel B", 0xa300, 0xa320 },
    { L"Billy Electricity B", 0xa240, 0xa260, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul B", 0xa280, 0xa2a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai B", 0xa2c0, 0xa2e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory B", 0x020160, 0x0201a0, indexKOF03Sprites_Billy, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_C[] =
{
    { L"Billy Kane C", 0xa400, 0xa420 },
    { L"Fire Wheel C", 0xa500, 0xa520 },
    { L"Billy Electricity C", 0xa440, 0xa460, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul C", 0xa480, 0xa4a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai C", 0xa4c0, 0xa4e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory C", 0x0201a0, 0x0201e0, indexKOF03Sprites_Billy, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_D[] =
{
    { L"Billy Kane D", 0xa600, 0xa620 },
    { L"Fire Wheel D", 0xa700, 0xa720 },
    { L"Billy Electricity D", 0xa640, 0xa660, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul D", 0xa880, 0xa8a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai D", 0xa8c0, 0xa8e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory D", 0x0201e0, 0x020220, indexKOF03Sprites_Billy, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_A[] =
{
    { L"Ryuji Yamazaki A", 0xa800, 0xa820, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat A", 0xa960, 0xa980 },
    { L"Guillotine/Drill/Sadomazo A", 0xa900, 0xa920 },
    { L"Bai Gaeshi A", 0xa920, 0xa940 },
    { L"Suna Kake A", 0xa940, 0xa960 },
    { L"Yamazaki Electricity A", 0xaa40, 0xaa60, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul A", 0xaa80, 0xaaa0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai A", 0xaac0, 0xaae0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory A", 0x020220, 0x020260, indexKOF03Sprites_Yamazaki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_B[] =
{
    { L"Ryuji Yamazaki B", 0xaa00, 0xaa20, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat B", 0xab60, 0xab80 },
    { L"Guillotine/Drill/Sadomazo B", 0xab00, 0xab20 },
    { L"Bai Gaeshi B", 0xab20, 0xab40 },
    { L"Suna Kake B", 0xab40, 0xab60 },
    { L"Yamazaki Electricity B", 0xaC40, 0xaC60, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul B", 0xaC80, 0xaCa0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai B", 0xaCc0, 0xaCe0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory B", 0x020260, 0x0202a0, indexKOF03Sprites_Yamazaki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_C[] =
{
    { L"Ryuji Yamazaki C", 0xac00, 0xac20, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat C", 0xad60, 0xad80 },
    { L"Guillotine/Drill/Sadomazo C", 0xad00, 0xad20 },
    { L"Bai Gaeshi C", 0xad20, 0xad40 },
    { L"Suna Kake C", 0xad40, 0xad60 },
    { L"Yamazaki Electricity C", 0xaE40, 0xaE60, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul C", 0xaE80, 0xaEa0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai C", 0xaEc0, 0xaEe0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory C", 0x0202a0, 0x0202e0, indexKOF03Sprites_Yamazaki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_D[] =
{
    { L"Ryuji Yamazaki D", 0xae00, 0xae20, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat D", 0xaf60, 0xaf80 },
    { L"Guillotine/Drill/Sadomazo D", 0xaf00, 0xaf20 },
    { L"Bai Gaeshi D", 0xaf20, 0xaf40 },
    { L"Suna Kake D", 0xaf40, 0xaf60 },
    { L"Yamazaki Electricity D", 0xB040, 0xB060, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul D", 0xB080, 0xB0a0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai D", 0xB0c0, 0xB0e0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory D", 0x0202e0, 0x020320, indexKOF03Sprites_Yamazaki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_A[] =
{
    { L"King A", 0xb000, 0xb020, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike A", 0xb100, 0xb120 },
    { L"Venom Strike Impact A", 0xb120, 0xb140 },
    { L"Tornado Kick/Trap Shot A", 0xb140, 0xb160 },
    { L"Phantom Strike A", 0xb180, 0xb1a0 },
    { L"Phantom Strike Impact A", 0xb1a0, 0xb1c0 },
    { L"King Electricity A", 0xb240, 0xb260, indexKOF03Sprites_King, 0x00 },
    { L"King Soul A", 0xb280, 0xb2a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai A", 0xb2c0, 0xb2e0, indexKOF03Sprites_King, 0x00 },
    { L"King Victory A", 0x020320, 0x020360, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_B[] =
{
    { L"King B", 0xb200, 0xb220, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike B", 0xb300, 0xb320 },
    { L"Venom Strike Impact B", 0xb320, 0xb340 },
    { L"Tornado Kick/Trap Shot B", 0xb340, 0xb360 },
    { L"Phantom Strike B", 0xb380, 0xb3a0 },
    { L"Phantom Strike Impact B", 0xb3a0, 0xb3c0 },
    { L"King Electricity B", 0xb440, 0xb460, indexKOF03Sprites_King, 0x00 },
    { L"King Soul B", 0xb480, 0xb4a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai B", 0xb4c0, 0xb4e0, indexKOF03Sprites_King, 0x00 },
    { L"King Victory B", 0x020360, 0x0203a0, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_C[] =
{
    { L"King C", 0xb400, 0xb420, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike C", 0xb500, 0xb520 },
    { L"Venom Strike Impact C", 0xb520, 0xb540 },
    { L"Tornado Kick/Trap Shot C", 0xb540, 0xb560 },
    { L"Phantom Strike C", 0xb580, 0xb5a0 },
    { L"Phantom Strike Impact C", 0xb5a0, 0xb5c0 },
    { L"King Electricity C", 0xb640, 0xb660, indexKOF03Sprites_King, 0x00 },
    { L"King Soul C", 0xb680, 0xb6a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai C", 0xb6c0, 0xb6e0, indexKOF03Sprites_King, 0x00 },
    { L"King Victory C", 0x0203a0, 0x0203e0, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_D[] =
{
    { L"King D", 0xb600, 0xb620, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike D", 0xb700, 0xb720 },
    { L"Venom Strike Impact D", 0xb720, 0xb740 },
    { L"Tornado Kick/Trap Shot D", 0xb740, 0xb760 },
    { L"Phantom Strike D", 0xb780, 0xb7a0 },
    { L"Phantom Strike Impact D", 0xb7a0, 0xb7c0 },
    { L"King Electricity D", 0xb840, 0xb860, indexKOF03Sprites_King, 0x00 },
    { L"King Soul D", 0xb880, 0xb8a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai D", 0xb8c0, 0xb8e0, indexKOF03Sprites_King, 0x00 },

    { L"King Victory D", 0x0203e0, 0x020420, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_A[] =
{
    { L"Mai Shiranui A", 0xb800, 0xb820, indexKOF02UMSprites_Mai },
    { L"Flames A", 0xb900, 0xb920 },
    { L"Kachou Sen/Sachiyo Dori A", 0xb920, 0xb940 },
    { L"Mai Victory A", 0x020420, 0x020460, indexKOF03Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_B[] =
{
    { L"Mai Shiranui B", 0xba00, 0xba20, indexKOF02UMSprites_Mai },
    { L"Flames B", 0xbb00, 0xbb20 },
    { L"Kachou Sen/Sachiyo Dori B", 0xbb20, 0xbb40 },
    { L"Mai Victory B", 0x020460, 0x0204a0, indexKOF03Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_C[] =
{
    { L"Mai Shiranui C", 0xbc00, 0xbc20, indexKOF02UMSprites_Mai },
    { L"Flames C", 0xbd00, 0xbd20 },
    { L"Kachou Sen/Sachiyo Dori C", 0xbd20, 0xbd40 },
    { L"Mai Victory C", 0x0204a0, 0x0204e0, indexKOF03Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_D[] =
{
    { L"Mai Shiranui D", 0xbe00, 0xbe20, indexKOF02UMSprites_Mai },
    { L"Flames D", 0xbf00, 0xbf20 },
    { L"Kachou Sen/Sachiyo Dori D", 0xbf20, 0xbf40 },
    { L"Mai Victory D", 0x0204e0, 0x020520, indexKOF03Sprites_Mai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0xc000, 0xc020, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton A", 0xc020, 0xc040 },
    { L"Twister Rose A", 0xc120, 0xc140 },
    { L"Mary Victory A", 0x020520, 0x020560, indexKOF03Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B", 0xc200, 0xc220, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton B", 0xc220, 0xc240 },
    { L"Twister Rose B", 0xc320, 0xc340 },
    { L"Mary Victory B", 0x020560, 0x0205a0, indexKOF03Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C", 0xc400, 0xc420, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton C", 0xc420, 0xc440 },
    { L"Twister Rose C", 0xc520, 0xc540 },
    { L"Mary Victory C", 0x0205a0, 0x0205e0, indexKOF03Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0xc600, 0xc620, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton D", 0xc620, 0xc640 },
    { L"Twister Rose D", 0xc720, 0xc740 },
    { L"Mary Victory D", 0x0205e0, 0x020620, indexKOF03Sprites_BlueMary, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru Nikaido A", 0xc800, 0xc820, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri A", 0xc900, 0xc920 },
    { L"Raijin Ken A", 0xc940, 0xc960 },
    { L"Raimei Tou A", 0xc980, 0xc9a0 },
    { L"Raimei Tou Charge/Raikou Ken A", 0xc920, 0xc940 },
    { L"Gen'ei Hurricane A", 0xc9c0, 0xc9e0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory A", 0x020620, 0x020660, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru Nikaido B", 0xca00, 0xca20, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri B", 0xcb00, 0xcb20 },
    { L"Raijin Ken B", 0xcb40, 0xcb60 },
    { L"Raimei Tou B", 0xcb80, 0xcba0 },
    { L"Raimei Tou Charge/Raikou Ken B", 0xcb20, 0xcb40 },
    { L"Gen'ei Hurricane B", 0xcbc0, 0xcbe0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory B", 0x020660, 0x0206a0, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru Nikaido C", 0xcc00, 0xcc20, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri C", 0xcd00, 0xcd20 },
    { L"Raijin Ken C", 0xcd40, 0xcd60 },
    { L"Raimei Tou C", 0xcd80, 0xcda0 },
    { L"Raimei Tou Charge/Raikou Ken C", 0xcd20, 0xcd40 },
    { L"Gen'ei Hurricane C", 0xcdc0, 0xcde0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory C", 0x0206a0, 0x0206e0, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru Nikaido D", 0xce00, 0xce20, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri D", 0xcf00, 0xcf20 },
    { L"Raijin Ken D", 0xcf40, 0xcf60 },
    { L"Raimei Tou D", 0xcf80, 0xcfa0 },
    { L"Raimei Tou Charge/Raikou Ken D", 0xcf20, 0xcf40 },
    { L"Gen'ei Hurricane D", 0xcfc0, 0xcfe0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory D", 0x0206e0, 0x020720, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_A[] =
{
    { L"Shingo Yabuki A", 0xd000, 0xd020, indexKOFXISprites_Shingo },
    { L"Shingo Victory A", 0x020720, 0x020760, indexKOF03Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_B[] =
{
    { L"Shingo Yabuki B", 0xd200, 0xd220, indexKOFXISprites_Shingo },
    { L"Shingo Victory B", 0x020760, 0x0207a0, indexKOF03Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_C[] =
{
    { L"Shingo Yabuki C", 0xd400, 0xd420, indexKOFXISprites_Shingo },
    { L"Shingo Victory C", 0x0207a0, 0x0207e0, indexKOF03Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_D[] =
{
    { L"Shingo Yabuki D", 0xd600, 0xd620, indexKOFXISprites_Shingo },
    { L"Shingo Victory D", 0x0207e0, 0x020820, indexKOF03Sprites_Shingo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_A[] =
{
    { L"Goro Daimon A", 0xd800, 0xd820, indexKOF02UMSprites_Daimon },
    { L"Goro Victory A", 0x020820, 0x020860, indexKOF03Sprites_GoroDaimon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_B[] =
{
    { L"Goro Daimon B", 0xda00, 0xda20, indexKOF02UMSprites_Daimon },
    { L"Goro Victory B", 0x020860, 0x0208a0, indexKOF03Sprites_GoroDaimon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_C[] =
{
    { L"Goro Daimon C", 0xdc00, 0xdc20, indexKOF02UMSprites_Daimon },
    { L"Goro Victory C", 0x0208a0, 0x0208e0, indexKOF03Sprites_GoroDaimon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_D[] =
{
    { L"Goro Daimon D", 0xde00, 0xde20, indexKOF02UMSprites_Daimon },
    { L"Goro Victory D", 0x0208e0, 0x020920, indexKOF03Sprites_GoroDaimon, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_A[] =
{
    { L"Athena Asamiya A", 0xe000, 0xe020, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy A", 0xe1c0, 0xe1e0 },
    { L"Psychic 10 1-2-3 A", 0xe120, 0xe140 },
    { L"Psychic 10 4~10 A", 0xe100, 0xe120 },
    { L"Psychic 10~Sailor Punch A", 0xe160, 0xe180 },
    { L"Psychic 10~Psycho Sword A", 0xe1a0, 0xe1c0 },
    { L"Psychic 10~Flaming Sword A", 0xe180, 0xe1a0 },
    { L"Psychic 10~Healing Athena A", 0xe1e0, 0xe200 },
    { L"Psychic 10~Psycho Bomber A", 0xe140, 0xe160 },
    { L"Athena Victory A", 0x020920, 0x020960, indexKOF03Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_B[] =
{
    { L"Athena Asamiya B", 0xe200, 0xe220, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy B", 0xe3c0, 0xe3e0 },
    { L"Psychic 10 1-2-3 B", 0xe320, 0xe340 },
    { L"Psychic 10 4~10 B", 0xe300, 0xe320 },
    { L"Psychic 10~Sailor Punch B", 0xe360, 0xe380 },
    { L"Psychic 10~Psycho Sword B", 0xe3a0, 0xe3c0 },
    { L"Psychic 10~Flaming Sword B", 0xe380, 0xe3a0 },
    { L"Psychic 10~Healing Athena B", 0xe3e0, 0xe400 },
    { L"Psychic 10~Psycho Bomber B", 0xe340, 0xe360 },
    { L"Athena Victory B", 0x020960, 0x0209a0, indexKOF03Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_C[] =
{
    { L"Athena Asamiya C", 0xe400, 0xe420, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy C", 0xe5c0, 0xe5e0 },
    { L"Psychic 10 1-2-3 C", 0xe520, 0xe540 },
    { L"Psychic 10 4~10 C", 0xe500, 0xe520 },
    { L"Psychic 10~Sailor Punch C", 0xe560, 0xe580 },
    { L"Psychic 10~Psycho Sword C", 0xe5a0, 0xe5c0 },
    { L"Psychic 10~Flaming Sword C", 0xe580, 0xe5a0 },
    { L"Psychic 10~Healing Athena C", 0xe5e0, 0xe600 },
    { L"Psychic 10~Psycho Bomber C", 0xe540, 0xe560 },
    { L"Athena Victory C", 0x0209a0, 0x0209e0, indexKOF03Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_D[] =
{
    { L"Athena Asamiya D", 0xe600, 0xe620, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy D", 0xe7c0, 0xe7e0 },
    { L"Psychic 10 1-2-3 D", 0xe720, 0xe740 },
    { L"Psychic 10 4~10 D", 0xe700, 0xe720 },
    { L"Psychic 10~Sailor Punch D", 0xe760, 0xe780 },
    { L"Psychic 10~Psycho Sword D", 0xe7a0, 0xe7c0 },
    { L"Psychic 10~Flaming Sword D", 0xe780, 0xe7a0 },
    { L"Psychic 10~Healing Athena D", 0xe7e0, 0xe800 },
    { L"Psychic 10~Psycho Bomber D", 0xe740, 0xe760 },
    { L"Athena Victory D", 0x0209e0, 0x020a20, indexKOF03Sprites_Athena, 0x30 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_A[] =
{
    { L"Hinako Shijo A", 0xe800, 0xe820, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt A", 0xe900, 0xe920 },
    { L"Hinako Victory A", 0x020a20, 0x020a60, indexKOF03Sprites_Hinako, 0x30 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_B[] =
{
    { L"Hinako Shijo B", 0xea00, 0xea20, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt B", 0xeb00, 0xeb20 },
    { L"Hinako Victory B", 0x020a60, 0x020aa0, indexKOF03Sprites_Hinako, 0x30 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_C[] =
{
    { L"Hinako Shijo C", 0xec00, 0xec20, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt C", 0xed00, 0xed20 },
    { L"Hinako Victory C", 0x020aa0, 0x020ae0, indexKOF03Sprites_Hinako, 0x30 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_D[] =
{
    { L"Hinako Shijo D", 0xee00, 0xee20, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt D", 0xef00, 0xef20 },
    { L"Hinako Victory D", 0x020ae0, 0x020b20, indexKOF03Sprites_Hinako, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_A[] =
{
    { L"Malin A", 0xf000, 0xf020, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons A", 0xf020, 0xf040 },
    { L"Intro Outfit A", 0xf100, 0xf120 },
    { L"Mizuchi (LDM) A", 0xf120, 0xf140 },
    { L"Onigumo (Yoyo) A", 0xf140, 0xf160 },
    { L"Malin Victory A", 0x020b20, 0x020b60, indexKOF03Sprites_Malin, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_B[] =
{
    { L"Malin B", 0xf200, 0xf220, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons B", 0xf220, 0xf240 },
    { L"Intro Outfit B", 0xf300, 0xf320 },
    { L"Mizuchi (LDM) B", 0xf320, 0xf340 },
    { L"Onigumo (Yoyo) B", 0xf340, 0xf360 },
    { L"Malin Victory B", 0x020b60, 0x020ba0, indexKOF03Sprites_Malin, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_C[] =
{
    { L"Malin C", 0xf400, 0xf420, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons C", 0xf420, 0xf440 },
    { L"Intro Outfit C", 0xf500, 0xf520 },
    { L"Mizuchi (LDM) C", 0xf520, 0xf540 },
    { L"Onigumo (Yoyo) C", 0xf540, 0xf560 },
    { L"Malin Victory C", 0x020ba0, 0x020be0, indexKOF03Sprites_Malin, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_D[] =
{
    { L"Malin D", 0xf600, 0xf620, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons D", 0xf620, 0xf640 },
    { L"Intro Outfit D", 0xf700, 0xf720 },
    { L"Mizuchi (LDM) D", 0xf720, 0xf740 },
    { L"Onigumo (Yoyo) D", 0xf740, 0xf760 },
    { L"Malin Victory D", 0x020be0, 0x020c20, indexKOF03Sprites_Malin, 0x30 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_A[] =
{
    { L"K' A", 0xf800, 0xf820, indexKOF03Sprites_K },
    { L"Heat A", 0xf900, 0xf920 },
    { L"K' Victory A", 0x020c20, 0x020c60, indexKOF03Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_B[] =
{
    { L"K' B", 0xfa00, 0xfa20, indexKOF03Sprites_K },
    { L"Heat B", 0xfb00, 0xfb20 },
    { L"K' Victory B", 0x020c60, 0x020ca0, indexKOF03Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_C[] =
{
    { L"K' C", 0xfc00, 0xfc20, indexKOF03Sprites_K },
    { L"Heat C", 0xfd00, 0xfd20 },
    { L"K' Victory C", 0x020ca0, 0x020ce0, indexKOF03Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_D[] =
{
    { L"K' D", 0xfe00, 0xfe20, indexKOF03Sprites_K },
    { L"Heat D", 0xff00, 0xff20 },
    { L"K' Victory D", 0x020ce0, 0x020d20, indexKOF03Sprites_K, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_A[] =
{
    { L"Maxima A", 0x010000, 0x010020, indexKOF02UMSprites_Maxima },
    { L"Victory Pose Steam A", 0x010140, 0x010160 },
    { L"Vapour Cannon A", 0x0101a0, 0x0101c0 },
    { L"Bunker Buster 1 A", 0x010120, 0x010140 },
    { L"Bunker Buster 2 A", 0x010160, 0x010180 },
    { L"Bunker Buster 3 A", 0x010180, 0x0101a0 },
    { L"Final Cannon A", 0x010100, 0x010120 },
    { L"Maxima Victory A", 0x020d20, 0x020d60, indexKOF03Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_B[] =
{
    { L"Maxima B", 0x010200, 0x010220, indexKOF02UMSprites_Maxima },
    { L"Victory Pose Steam B", 0x010340, 0x010360 },
    { L"Vapour Cannon B", 0x0103a0, 0x0103c0 },
    { L"Bunker Buster 1 B", 0x010320, 0x010340 },
    { L"Bunker Buster 2 B", 0x010360, 0x010380 },
    { L"Bunker Buster 3 B", 0x010380, 0x0103a0 },
    { L"Final Cannon B", 0x010300, 0x010320 },
    { L"Maxima Victory B", 0x020d60, 0x020da0, indexKOF03Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_C[] =
{
    { L"Maxima C", 0x010400, 0x010420, indexKOF02UMSprites_Maxima },
    { L"Victory Pose Steam C", 0x010540, 0x010560 },
    { L"Vapour Cannon C", 0x0105a0, 0x0105c0 },
    { L"Bunker Buster 1 C", 0x010520, 0x010540 },
    { L"Bunker Buster 2 C", 0x010560, 0x010580 },
    { L"Bunker Buster 3 C", 0x010580, 0x0105a0 },
    { L"Final Cannon C", 0x010500, 0x010520 },
    { L"Maxima Victory C", 0x020da0, 0x020de0, indexKOF03Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_D[] =
{
    { L"Maxima D", 0x010600, 0x010620, indexKOF02UMSprites_Maxima },
    { L"Victory Pose Steam D", 0x010740, 0x010760 },
    { L"Vapour Cannon D", 0x0107a0, 0x0107c0 },
    { L"Bunker Buster 1 D", 0x010720, 0x010740 },
    { L"Bunker Buster 2 D", 0x010760, 0x010780 },
    { L"Bunker Buster 3 D", 0x010780, 0x0107a0 },
    { L"Final Cannon D", 0x010700, 0x010720 },
    { L"Maxima Victory D", 0x020de0, 0x020e20, indexKOF03Sprites_Maxima, 0x30 },
};

const sGame_PaletteDataset KOF03_A_WHIP_PALETTES_A[] =
{
    { L"Whip A", 0x010800, 0x010820, indexKOF03Sprites_Whip },
    { L"Desert Eagle A", 0x010900, 0x010920 },
    { L"Whip Victory A", 0x020e20, 0x020e60, indexKOF03Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF03_A_WHIP_PALETTES_B[] =
{
    { L"Whip B", 0x010a00, 0x010a20, indexKOF03Sprites_Whip },
    { L"Desert Eagle B", 0x010b00, 0x010b20 },
    { L"Whip Victory B", 0x020e60, 0x020ea0, indexKOF03Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF03_A_WHIP_PALETTES_C[] =
{
    { L"Whip C", 0x010c00, 0x010c20, indexKOF03Sprites_Whip },
    { L"Desert Eagle C", 0x010d00, 0x010d20 },
    { L"Whip Victory C", 0x020ea0, 0x020ee0, indexKOF03Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF03_A_WHIP_PALETTES_D[] =
{
    { L"Whip D", 0x010e00, 0x010e20, indexKOF03Sprites_Whip },
    { L"Desert Eagle D", 0x010f00, 0x010f20 },
    { L"Whip Victory D", 0x020ee0, 0x020f20, indexKOF03Sprites_Whip, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_A[] =
{
    { L"Kyo Kusanagi A", 0x011000, 0x011020, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame A", 0x011120, 0x011140 },
    { L"Rekkas/Shiki A", 0x011140, 0x011160 },
    { L"Oniyaki A", 0x011160, 0x011180 },
    { L"Orochinagi/Mu Shiki A", 0x011180, 0x0111a0 },
    { L"Mu Shiki Shadows A", 0x011100, 0x011120 },
    { L"Kyo Victory A", 0x020f20, 0x020f60, indexKOF03Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_B[] =
{
    { L"Kyo Kusanagi B", 0x011200, 0x011220, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame B", 0x011320, 0x011340 },
    { L"Rekkas/Shiki B", 0x011340, 0x011360 },
    { L"Oniyaki B", 0x011360, 0x011380 },
    { L"Orochinagi/Mu Shiki B", 0x011380, 0x0113a0 },
    { L"Mu Shiki Shadows B", 0x011300, 0x011320 },
    { L"Kyo Victory B", 0x020f60, 0x020fa0, indexKOF03Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_C[] =
{
    { L"Kyo Kusanagi C", 0x011400, 0x011420, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame C", 0x011520, 0x011540 },
    { L"Rekkas/Shiki C", 0x011540, 0x011560 },
    { L"Oniyaki C", 0x011560, 0x011580 },
    { L"Orochinagi/Mu Shiki C", 0x011580, 0x0115a0 },
    { L"Mu Shiki Shadows C", 0x011500, 0x011520 },
    { L"Kyo Victory C", 0x020fa0, 0x020fe0, indexKOF03Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_D[] =
{
    { L"Kyo Kusanagi D", 0x011600, 0x011620, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame D", 0x011720, 0x011740 },
    { L"Rekkas/Shiki D", 0x011740, 0x011760 },
    { L"Oniyaki D", 0x011760, 0x011780 },
    { L"Orochinagi/Mu Shiki D", 0x011780, 0x0117a0 },
    { L"Mu Shiki Shadows D", 0x011700, 0x011720 },
    { L"Kyo Victory D", 0x020fe0, 0x021020, indexKOF03Sprites_Kyo, 0x30 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_A[] =
{
    { L"Iori Yagami A", 0x011800, 0x011820, indexKOF02UMSprites_Iori },
    { L"IY-Yami Barai A", 0x011920, 0x011940 },
    { L"IY-Oniyaki A", 0x011900, 0x011920 },
    { L"Saika/Sakazuki A", 0x011960, 0x011980 },
    { L"Shingi no Ni A", 0x0119a0, 0x0119c0 },
    { L"Iori Victory A", 0x021020, 0x021060, indexKOF03Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_B[] =
{
    { L"Iori Yagami B", 0x011a00, 0x011a20, indexKOF02UMSprites_Iori },
    { L"IY-Yami Barai B", 0x011b20, 0x011b40 },
    { L"IY-Oniyaki B", 0x011b00, 0x011b20 },
    { L"Saika/Sakazuki B", 0x011b60, 0x011b80 },
    { L"Shingi no Ni B", 0x011ba0, 0x011bc0 },
    { L"Iori Victory B", 0x021060, 0x0210a0, indexKOF03Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_C[] =
{
    { L"Iori Yagami C", 0x011c00, 0x011c20, indexKOF02UMSprites_Iori },
    { L"IY-Yami Barai C", 0x011d20, 0x011d40 },
    { L"IY-Oniyaki C", 0x011d00, 0x011d20 },
    { L"Saika/Sakazuki C", 0x011d60, 0x011d80 },
    { L"Shingi no Ni C", 0x011da0, 0x011dc0 },
    { L"Iori Victory C", 0x0210a0, 0x0210e0, indexKOF03Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_D[] =
{
    { L"Iori Yagami D", 0x011e00, 0x011e20, indexKOF02UMSprites_Iori },
    { L"IY-Yami Barai D", 0x011f20, 0x011f40 },
    { L"IY-Oniyaki D", 0x011f00, 0x011f20 },
    { L"Saika/Sakazuki D", 0x011f60, 0x011f80 },
    { L"Shingi no Ni D", 0x011fa0, 0x011fc0 },
    { L"Iori Victory D", 0x0210e0, 0x021120, indexKOF03Sprites_Iori, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_A[] =
{
    { L"Chizuru Kagura A", 0x012000, 0x012020, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue A", 0x012100, 0x012120 },
    { L"Chizuru Victory A", 0x021120, 0x021160, indexKOF03Sprites_Chizuru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_B[] =
{
    { L"Chizuru Kagura B", 0x012200, 0x012220, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue B", 0x012300, 0x012320 },
    { L"Chizuru Victory B", 0x021160, 0x0211a0, indexKOF03Sprites_Chizuru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_C[] =
{
    { L"Chizuru Kagura C", 0x012400, 0x012420, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue C", 0x012500, 0x012520 },
    { L"Chizuru Victory C", 0x0211a0, 0x0211e0, indexKOF03Sprites_Chizuru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_D[] =
{
    { L"Chizuru Kagura D", 0x012600, 0x012620, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue D", 0x012700, 0x012720 },
    { L"Chizuru Victory D", 0x0211e0, 0x021220, indexKOF03Sprites_Chizuru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_A[] =
{
    { L"KUSANAGI A", 0x012800, 0x012820, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. A", 0x012980, 0x0129a0 },
    { L"K-Oniyaki A", 0x012960, 0x012980 },
    { L"Orochinagi Body A", 0x012900, 0x012920 },
    { L"Orochinagi Flame/LDM ch. A", 0x012940, 0x012960 },
    { L"Orochinagi Charge A", 0x012920, 0x012940 },
    { L"KUSANAGI Victory A", 0x021220, 0x021260, indexKOF03Sprites_KUSANAGI, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_B[] =
{
    { L"KUSANAGI B", 0x012a00, 0x012a20, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. B", 0x012b80, 0x012ba0 },
    { L"K-Oniyaki B", 0x012b60, 0x012b80 },
    { L"Orochinagi Body B", 0x012b00, 0x012b20 },
    { L"Orochinagi Flame/LDM ch. B", 0x012b40, 0x012b60 },
    { L"Orochinagi Charge B", 0x012b20, 0x012b40 },
    { L"KUSANAGI Victory B", 0x021260, 0x0212a0, indexKOF03Sprites_KUSANAGI, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_C[] =
{
    { L"KUSANAGI C", 0x012c00, 0x012c20, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. C", 0x012d80, 0x012da0 },
    { L"K-Oniyaki C", 0x012d60, 0x012d80 },
    { L"Orochinagi Body C", 0x012d00, 0x012d20 },
    { L"Orochinagi Flame/LDM ch. C", 0x012d40, 0x012d60 },
    { L"Orochinagi Charge C", 0x012d20, 0x012d40 },
    { L"KUSANAGI Victory C", 0x0212a0, 0x0212e0, indexKOF03Sprites_KUSANAGI, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_D[] =
{
    { L"KUSANAGI D", 0x012e00, 0x012e20, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. D", 0x012f80, 0x012fa0 },
    { L"K-Oniyaki D", 0x012f60, 0x012f80 },
    { L"Orochinagi Body D", 0x012f00, 0x012f20 },
    { L"Orochinagi Flame/LDM ch. D", 0x012f40, 0x012f60 },
    { L"Orochinagi Charge D", 0x012f20, 0x012f40 },
    { L"KUSANAGI Victory D", 0x0212e0, 0x021320, indexKOF03Sprites_KUSANAGI, 0x30 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_A[] =
{
    { L"Adelheid Bernstein A", 0x013000, 0x013020, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen A", 0x013160, 0x013180 },
    { L"G. Wand A", 0x013100, 0x013120 },
    { L"G. Kreis A", 0x013120, 0x013140 },
    { L"G. Sklaven A", 0x013140, 0x013160 },
    { L"Adelheid Victory A", 0x021320, 0x021360, indexKOF03Sprites_Adelheid, 0x30, &pairNext },
    { L"Rose A", 0x021620, 0x021660, indexKOF03Sprites_Adelheid, 0x31 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_B[] =
{
    { L"Adelheid Bernstein B", 0x013200, 0x013220, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen B", 0x013360, 0x013380 },
    { L"G. Wand B", 0x013300, 0x013320 },
    { L"G. Kreis B", 0x013320, 0x013340 },
    { L"G. Sklaven B", 0x013340, 0x013360 },
    { L"Adelheid Victory B", 0x021360, 0x0213a0, indexKOF03Sprites_Adelheid, 0x30, &pairNext },
    { L"Rose B", 0x021660, 0x0216a0, indexKOF03Sprites_Adelheid, 0x31 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_C[] =
{
    { L"Adelheid Bernstein C", 0x013400, 0x013420, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen C", 0x013560, 0x013580 },
    { L"G. Wand C", 0x013500, 0x013520 },
    { L"G. Kreis C", 0x013520, 0x013540 },
    { L"G. Sklaven C", 0x013540, 0x013560 },
    { L"Adelheid Victory C", 0x0213a0, 0x0213e0, indexKOF03Sprites_Adelheid, 0x30, &pairNext },
    { L"Rose C", 0x0216a0, 0x0216e0, indexKOF03Sprites_Adelheid, 0x31 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_D[] =
{
    { L"Adelheid Bernstein D", 0x013600, 0x013620, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen D", 0x013760, 0x013780 },
    { L"G. Wand D", 0x013700, 0x013720 },
    { L"G. Kreis D", 0x013720, 0x013740 },
    { L"G. Sklaven D", 0x013740, 0x013760 },
    { L"Adelheid Victory D", 0x0213e0, 0x021420, indexKOF03Sprites_Adelheid, 0x30, &pairNext },
    { L"Rose D", 0x0216e0, 0x021720, indexKOF03Sprites_Adelheid, 0x31 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_A[] =
{
    { L"Mukai A", 0x013800, 0x013820, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou A", 0x013900, 0x013920 },
    { L"Shikai A", 0x013920, 0x013940 },
    { L"Mukai Victory A", 0x021420, 0x021460, indexKOF03Sprites_Mukai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_B[] =
{
    { L"Mukai B", 0x013a00, 0x013a20, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou B", 0x013b00, 0x013b20 },
    { L"Shikai B", 0x013b20, 0x013b40 },
    { L"Mukai Victory B", 0x021460, 0x0214a0, indexKOF03Sprites_Mukai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_C[] =
{
    { L"Mukai C", 0x013c00, 0x013c20, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou C", 0x013d00, 0x013d20 },
    { L"Shikai C", 0x013d20, 0x013d40 },
    { L"Mukai Victory C", 0x0214a0, 0x0214e0, indexKOF03Sprites_Mukai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_D[] =
{
    { L"Mukai D", 0x013e00, 0x013e20, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou D", 0x013f00, 0x013f20 },
    { L"Shikai D", 0x013f20, 0x013f40 },
    { L"Mukai Victory D", 0x0214e0, 0x021520, indexKOF03Sprites_Mukai, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_A[] =
{
    { L"Maki Kagura A", 0x014000, 0x014020, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai A", 0x014100, 0x014120 },
    { L"M-Chizuru A", 0x014120, 0x014140, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue A", 0x014140, 0x014160 },
    { L"Maki Victory A", 0x021520, 0x021560, indexKOF03Sprites_Maki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_B[] =
{
    { L"Maki Kagura B", 0x014200, 0x014220, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai B", 0x014300, 0x014320 },
    { L"M-Chizuru B", 0x014320, 0x014340, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue B", 0x014340, 0x014360 },
    { L"Maki Victory B", 0x021560, 0x0215a0, indexKOF03Sprites_Maki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_C[] =
{
    { L"Maki Kagura C", 0x014400, 0x014420, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai C", 0x014500, 0x014520 },
    { L"M-Chizuru C", 0x014520, 0x014540, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue C", 0x014540, 0x014560 },
    { L"Maki Victory C", 0x0215a0, 0x0215e0, indexKOF03Sprites_Maki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_D[] =
{
    { L"Maki Kagura D", 0x014600, 0x014620, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai D", 0x014700, 0x014720 },
    { L"M-Chizuru D", 0x014720, 0x014740, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue D", 0x014740, 0x014760 },
    { L"Maki Victory D", 0x0215e0, 0x021620, indexKOF03Sprites_Maki, 0x30 },
};

const sGame_PaletteDataset KOF03_A_TEAMBG_PALETTES[] =
{
    { L"Hero Team BG", 0x021980, 0x0219a0 },
    { L"Fatal Fury Team BG", 0x0219a0, 0x0219c0 },
    { L"Art of Fighting Team BG", 0x0219c0, 0x0219e0 },
    { L"Korea Team BG", 0x0219e0, 0x021a00 },
    { L"Ikari Warriors Team BG", 0x021a00, 0x021a20 },
    { L"Sacred Treasures Team BG", 0x021a20, 0x021a40 },
    { L"Outlaw Team BG", 0x021a40, 0x021a60 },
    { L"Woman Fighters Team BG", 0x021a60, 0x021a80 },
    { L"Benimaru Team", 0x021a80, 0x021aa0 },
    { L"High School Girls Team BG", 0x021aa0, 0x021ac0 },
    { L"K' Team BG", 0x021ac0, 0x021ae0 },
    { L"Boss Team BG", 0x021ae0, 0x021b00 },
};

const sGame_PaletteDataset KOF03_A_PORTRAIT_PALETTES[] =
{
    { L"Ash Select Portrait",       0x21b00, 0x21b40, indexKOF03Sprites_Ash, 0x32 },
    { L"Duo Lon Select Portrait",   0x21b40, 0x21b80, indexKOF03Sprites_Duo, 0x32 },
    { L"Shen Select Portrait",      0x21b80, 0x21bc0, indexKOF03Sprites_Shen, 0x32 },
    { L"Terry Select Portrait",     0x21bc0, 0x21c00, indexKOF03Sprites_Terry, 0x32 },
    { L"Joe Select Portrait",       0x21c00, 0x21c40, indexKOF03Sprites_Joe, 0x32 },
    { L"Tizoc Select Portrait",     0x21c40, 0x21c80, indexKOF03Sprites_Tizoc, 0x32 },
    { L"Ryo Select Portrait",       0x21c80, 0x21cc0, indexKOF03Sprites_Ryo, 0x32 },
    { L"Robert Select Portrait",    0x21cc0, 0x21d00, indexKOF03Sprites_Robert, 0x32 },
    { L"Yuri Select Portrait",      0x21d00, 0x21d40, indexKOF03Sprites_Yuri, 0x32 },
    { L"Kim Select Portrait",       0x21d40, 0x21d80, indexKOF03Sprites_Kim, 0x32 },
    { L"Chang Select Portrait",     0x21d80, 0x21dc0, indexKOF03Sprites_Chang, 0x32 },
    { L"Jhun Select Portrait",      0x21dc0, 0x21e00, indexKOF03Sprites_JhunHoon, 0x32 },
    { L"Leona Select Portrait",     0x21e00, 0x21e40, indexKOF03Sprites_Leona, 0x32 },
    { L"Ralf Select Portrait",      0x21e40, 0x21e80, indexKOF03Sprites_Ralf, 0x32 },
    { L"Clark Select Portrait",     0x21e80, 0x21ec0, indexKOF03Sprites_Clark, 0x32 },
    { L"Gato Select Portrait",      0x21ec0, 0x21f00, indexKOF03Sprites_Gato, 0x32 },
    { L"Billy Select Portrait",     0x21f00, 0x21f40, indexKOF03Sprites_Billy, 0x32 },
    { L"Yamazaki Select Portrait",  0x21f40, 0x21f80, indexKOF03Sprites_Yamazaki, 0x32 },
    { L"King Select Portrait",      0x21f80, 0x21fc0, indexKOF03Sprites_King, 0x32 },
    { L"Mau Select Portrait",       0x21fc0, 0x22000, indexKOF03Sprites_Mai, 0x32 },
    { L"Blue Mary Select Portrait", 0x22000, 0x22040, indexKOF03Sprites_BlueMary, 0x32 },
    { L"Benimaru Select Portrait",  0x22040, 0x22080, indexKOF03Sprites_Benimaru, 0x32 },
    { L"Shingo Select Portrait",    0x22080, 0x220c0, indexKOF03Sprites_Shingo, 0x32 },
    { L"Goro Select Portrait",      0x220c0, 0x22100, indexKOF03Sprites_GoroDaimon, 0x32 },
    { L"Athena Select Portrait",    0x22100, 0x22140, indexKOF03Sprites_Athena, 0x32 },
    { L"Hinako Select Portrait",    0x22140, 0x22180, indexKOF03Sprites_Hinako, 0x32 },
    { L"Malin Select Portrait",     0x22180, 0x221c0, indexKOF03Sprites_Malin, 0x32 },
    { L"K' Select Portrait",        0x221c0, 0x22200, indexKOF03Sprites_K, 0x32 },
    { L"Maxima Select Portrait",    0x22200, 0x22240, indexKOF03Sprites_Maxima, 0x32 },
    { L"Whip Select Portrait",      0x22240, 0x22280, indexKOF03Sprites_Whip, 0x32 },
    { L"Kyo Select Portrait",       0x22280, 0x222c0, indexKOF03Sprites_Kyo, 0x32 },
    { L"Iori Select Portrait",      0x222c0, 0x22300, indexKOF03Sprites_Iori, 0x32 },
    { L"Chizuru Select Portrait",   0x22300, 0x22340, indexKOF03Sprites_Chizuru, 0x32 },
    { L"KUSANAGI Select Portrait",  0x22340, 0x22380, indexKOF03Sprites_KUSANAGI, 0x32 },
};

const sDescTreeNode KOF03_A_ASH_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_ASH_PALETTES_A, ARRAYSIZE(KOF03_A_ASH_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_ASH_PALETTES_B, ARRAYSIZE(KOF03_A_ASH_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_ASH_PALETTES_C, ARRAYSIZE(KOF03_A_ASH_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_ASH_PALETTES_D, ARRAYSIZE(KOF03_A_ASH_PALETTES_D) },
};

const sDescTreeNode KOF03_A_DUO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_DUO_PALETTES_A, ARRAYSIZE(KOF03_A_DUO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_DUO_PALETTES_B, ARRAYSIZE(KOF03_A_DUO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_DUO_PALETTES_C, ARRAYSIZE(KOF03_A_DUO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_DUO_PALETTES_D, ARRAYSIZE(KOF03_A_DUO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_SHEN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_SHEN_PALETTES_A, ARRAYSIZE(KOF03_A_SHEN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_SHEN_PALETTES_B, ARRAYSIZE(KOF03_A_SHEN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_SHEN_PALETTES_C, ARRAYSIZE(KOF03_A_SHEN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_SHEN_PALETTES_D, ARRAYSIZE(KOF03_A_SHEN_PALETTES_D) },
};

const sDescTreeNode KOF03_A_TERRY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_TERRY_PALETTES_A, ARRAYSIZE(KOF03_A_TERRY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_TERRY_PALETTES_B, ARRAYSIZE(KOF03_A_TERRY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_TERRY_PALETTES_C, ARRAYSIZE(KOF03_A_TERRY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_TERRY_PALETTES_D, ARRAYSIZE(KOF03_A_TERRY_PALETTES_D) },
};

const sDescTreeNode KOF03_A_JOE_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_JOE_PALETTES_A, ARRAYSIZE(KOF03_A_JOE_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_JOE_PALETTES_B, ARRAYSIZE(KOF03_A_JOE_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_JOE_PALETTES_C, ARRAYSIZE(KOF03_A_JOE_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_JOE_PALETTES_D, ARRAYSIZE(KOF03_A_JOE_PALETTES_D) },
};

const sDescTreeNode KOF03_A_TIZOC_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_TIZOC_PALETTES_A, ARRAYSIZE(KOF03_A_TIZOC_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_TIZOC_PALETTES_B, ARRAYSIZE(KOF03_A_TIZOC_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_TIZOC_PALETTES_C, ARRAYSIZE(KOF03_A_TIZOC_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_TIZOC_PALETTES_D, ARRAYSIZE(KOF03_A_TIZOC_PALETTES_D) },
};

const sDescTreeNode KOF03_A_RYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_RYO_PALETTES_A, ARRAYSIZE(KOF03_A_RYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_RYO_PALETTES_B, ARRAYSIZE(KOF03_A_RYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_RYO_PALETTES_C, ARRAYSIZE(KOF03_A_RYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_RYO_PALETTES_D, ARRAYSIZE(KOF03_A_RYO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_ROBERT_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_ROBERT_PALETTES_A, ARRAYSIZE(KOF03_A_ROBERT_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_ROBERT_PALETTES_B, ARRAYSIZE(KOF03_A_ROBERT_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_ROBERT_PALETTES_C, ARRAYSIZE(KOF03_A_ROBERT_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_ROBERT_PALETTES_D, ARRAYSIZE(KOF03_A_ROBERT_PALETTES_D) },
};

const sDescTreeNode KOF03_A_YURI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_YURI_PALETTES_A, ARRAYSIZE(KOF03_A_YURI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_YURI_PALETTES_B, ARRAYSIZE(KOF03_A_YURI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_YURI_PALETTES_C, ARRAYSIZE(KOF03_A_YURI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_YURI_PALETTES_D, ARRAYSIZE(KOF03_A_YURI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_LEONA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_LEONA_PALETTES_A, ARRAYSIZE(KOF03_A_LEONA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_LEONA_PALETTES_B, ARRAYSIZE(KOF03_A_LEONA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_LEONA_PALETTES_C, ARRAYSIZE(KOF03_A_LEONA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_LEONA_PALETTES_D, ARRAYSIZE(KOF03_A_LEONA_PALETTES_D) },
};

const sDescTreeNode KOF03_A_RALF_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_RALF_PALETTES_A, ARRAYSIZE(KOF03_A_RALF_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_RALF_PALETTES_B, ARRAYSIZE(KOF03_A_RALF_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_RALF_PALETTES_C, ARRAYSIZE(KOF03_A_RALF_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_RALF_PALETTES_D, ARRAYSIZE(KOF03_A_RALF_PALETTES_D) },
};

const sDescTreeNode KOF03_A_CLARK_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_CLARK_PALETTES_A, ARRAYSIZE(KOF03_A_CLARK_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_CLARK_PALETTES_B, ARRAYSIZE(KOF03_A_CLARK_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_CLARK_PALETTES_C, ARRAYSIZE(KOF03_A_CLARK_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_CLARK_PALETTES_D, ARRAYSIZE(KOF03_A_CLARK_PALETTES_D) },
};

const sDescTreeNode KOF03_A_KING_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_KING_PALETTES_A, ARRAYSIZE(KOF03_A_KING_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_KING_PALETTES_B, ARRAYSIZE(KOF03_A_KING_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_KING_PALETTES_C, ARRAYSIZE(KOF03_A_KING_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_KING_PALETTES_D, ARRAYSIZE(KOF03_A_KING_PALETTES_D) },
};

const sDescTreeNode KOF03_A_SHIRANUI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_SHIRANUI_PALETTES_A, ARRAYSIZE(KOF03_A_SHIRANUI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_SHIRANUI_PALETTES_B, ARRAYSIZE(KOF03_A_SHIRANUI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_SHIRANUI_PALETTES_C, ARRAYSIZE(KOF03_A_SHIRANUI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_SHIRANUI_PALETTES_D, ARRAYSIZE(KOF03_A_SHIRANUI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_BLUEMARY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_BLUEMARY_PALETTES_A, ARRAYSIZE(KOF03_A_BLUEMARY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_BLUEMARY_PALETTES_B, ARRAYSIZE(KOF03_A_BLUEMARY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_BLUEMARY_PALETTES_C, ARRAYSIZE(KOF03_A_BLUEMARY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_BLUEMARY_PALETTES_D, ARRAYSIZE(KOF03_A_BLUEMARY_PALETTES_D) },
};

const sDescTreeNode KOF03_A_KIM_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_KIM_PALETTES_A, ARRAYSIZE(KOF03_A_KIM_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_KIM_PALETTES_B, ARRAYSIZE(KOF03_A_KIM_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_KIM_PALETTES_C, ARRAYSIZE(KOF03_A_KIM_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_KIM_PALETTES_D, ARRAYSIZE(KOF03_A_KIM_PALETTES_D) },
};

const sDescTreeNode KOF03_A_CHANG_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_CHANG_PALETTES_A, ARRAYSIZE(KOF03_A_CHANG_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_CHANG_PALETTES_B, ARRAYSIZE(KOF03_A_CHANG_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_CHANG_PALETTES_C, ARRAYSIZE(KOF03_A_CHANG_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_CHANG_PALETTES_D, ARRAYSIZE(KOF03_A_CHANG_PALETTES_D) },
};

const sDescTreeNode KOF03_A_JHUN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_JHUN_PALETTES_A, ARRAYSIZE(KOF03_A_JHUN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_JHUN_PALETTES_B, ARRAYSIZE(KOF03_A_JHUN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_JHUN_PALETTES_C, ARRAYSIZE(KOF03_A_JHUN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_JHUN_PALETTES_D, ARRAYSIZE(KOF03_A_JHUN_PALETTES_D) },
};

const sDescTreeNode KOF03_A_RYUJI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_RYUJI_PALETTES_A, ARRAYSIZE(KOF03_A_RYUJI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_RYUJI_PALETTES_B, ARRAYSIZE(KOF03_A_RYUJI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_RYUJI_PALETTES_C, ARRAYSIZE(KOF03_A_RYUJI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_RYUJI_PALETTES_D, ARRAYSIZE(KOF03_A_RYUJI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_BILLY_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_BILLY_PALETTES_A, ARRAYSIZE(KOF03_A_BILLY_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_BILLY_PALETTES_B, ARRAYSIZE(KOF03_A_BILLY_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_BILLY_PALETTES_C, ARRAYSIZE(KOF03_A_BILLY_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_BILLY_PALETTES_D, ARRAYSIZE(KOF03_A_BILLY_PALETTES_D) },
};

const sDescTreeNode KOF03_A_GATO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_GATO_PALETTES_A, ARRAYSIZE(KOF03_A_GATO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_GATO_PALETTES_B, ARRAYSIZE(KOF03_A_GATO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_GATO_PALETTES_C, ARRAYSIZE(KOF03_A_GATO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_GATO_PALETTES_D, ARRAYSIZE(KOF03_A_GATO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_BENIMARU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_BENIMARU_PALETTES_A, ARRAYSIZE(KOF03_A_BENIMARU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_BENIMARU_PALETTES_B, ARRAYSIZE(KOF03_A_BENIMARU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_BENIMARU_PALETTES_C, ARRAYSIZE(KOF03_A_BENIMARU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_BENIMARU_PALETTES_D, ARRAYSIZE(KOF03_A_BENIMARU_PALETTES_D) },
};

const sDescTreeNode KOF03_A_SHINGO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_SHINGO_PALETTES_A, ARRAYSIZE(KOF03_A_SHINGO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_SHINGO_PALETTES_B, ARRAYSIZE(KOF03_A_SHINGO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_SHINGO_PALETTES_C, ARRAYSIZE(KOF03_A_SHINGO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_SHINGO_PALETTES_D, ARRAYSIZE(KOF03_A_SHINGO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_GORO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_GORO_PALETTES_A, ARRAYSIZE(KOF03_A_GORO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_GORO_PALETTES_B, ARRAYSIZE(KOF03_A_GORO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_GORO_PALETTES_C, ARRAYSIZE(KOF03_A_GORO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_GORO_PALETTES_D, ARRAYSIZE(KOF03_A_GORO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_ATHENA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_ATHENA_PALETTES_A, ARRAYSIZE(KOF03_A_ATHENA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_ATHENA_PALETTES_B, ARRAYSIZE(KOF03_A_ATHENA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_ATHENA_PALETTES_C, ARRAYSIZE(KOF03_A_ATHENA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_ATHENA_PALETTES_D, ARRAYSIZE(KOF03_A_ATHENA_PALETTES_D) },
};

const sDescTreeNode KOF03_A_HINAKO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_HINAKO_PALETTES_A, ARRAYSIZE(KOF03_A_HINAKO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_HINAKO_PALETTES_B, ARRAYSIZE(KOF03_A_HINAKO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_HINAKO_PALETTES_C, ARRAYSIZE(KOF03_A_HINAKO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_HINAKO_PALETTES_D, ARRAYSIZE(KOF03_A_HINAKO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_MALIN_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_MALIN_PALETTES_A, ARRAYSIZE(KOF03_A_MALIN_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_MALIN_PALETTES_B, ARRAYSIZE(KOF03_A_MALIN_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_MALIN_PALETTES_C, ARRAYSIZE(KOF03_A_MALIN_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_MALIN_PALETTES_D, ARRAYSIZE(KOF03_A_MALIN_PALETTES_D) },
};

const sDescTreeNode KOF03_A_K_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_K_PALETTES_A, ARRAYSIZE(KOF03_A_K_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_K_PALETTES_B, ARRAYSIZE(KOF03_A_K_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_K_PALETTES_C, ARRAYSIZE(KOF03_A_K_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_K_PALETTES_D, ARRAYSIZE(KOF03_A_K_PALETTES_D) },
};

const sDescTreeNode KOF03_A_MAXIMA_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_MAXIMA_PALETTES_A, ARRAYSIZE(KOF03_A_MAXIMA_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_MAXIMA_PALETTES_B, ARRAYSIZE(KOF03_A_MAXIMA_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_MAXIMA_PALETTES_C, ARRAYSIZE(KOF03_A_MAXIMA_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_MAXIMA_PALETTES_D, ARRAYSIZE(KOF03_A_MAXIMA_PALETTES_D) },
};

const sDescTreeNode KOF03_A_WHIP_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_WHIP_PALETTES_A, ARRAYSIZE(KOF03_A_WHIP_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_WHIP_PALETTES_B, ARRAYSIZE(KOF03_A_WHIP_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_WHIP_PALETTES_C, ARRAYSIZE(KOF03_A_WHIP_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_WHIP_PALETTES_D, ARRAYSIZE(KOF03_A_WHIP_PALETTES_D) },
};

const sDescTreeNode KOF03_A_KYO_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_KYO_PALETTES_A, ARRAYSIZE(KOF03_A_KYO_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_KYO_PALETTES_B, ARRAYSIZE(KOF03_A_KYO_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_KYO_PALETTES_C, ARRAYSIZE(KOF03_A_KYO_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_KYO_PALETTES_D, ARRAYSIZE(KOF03_A_KYO_PALETTES_D) },
};

const sDescTreeNode KOF03_A_IORI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_IORI_PALETTES_A, ARRAYSIZE(KOF03_A_IORI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_IORI_PALETTES_B, ARRAYSIZE(KOF03_A_IORI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_IORI_PALETTES_C, ARRAYSIZE(KOF03_A_IORI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_IORI_PALETTES_D, ARRAYSIZE(KOF03_A_IORI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_KUSANAGI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_KUSANAGI_PALETTES_A, ARRAYSIZE(KOF03_A_KUSANAGI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_KUSANAGI_PALETTES_B, ARRAYSIZE(KOF03_A_KUSANAGI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_KUSANAGI_PALETTES_C, ARRAYSIZE(KOF03_A_KUSANAGI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_KUSANAGI_PALETTES_D, ARRAYSIZE(KOF03_A_KUSANAGI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_CHIZURU_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_CHIZURU_PALETTES_A, ARRAYSIZE(KOF03_A_CHIZURU_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_CHIZURU_PALETTES_B, ARRAYSIZE(KOF03_A_CHIZURU_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_CHIZURU_PALETTES_C, ARRAYSIZE(KOF03_A_CHIZURU_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_CHIZURU_PALETTES_D, ARRAYSIZE(KOF03_A_CHIZURU_PALETTES_D) },
};

const sDescTreeNode KOF03_A_MAKI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_MAKI_PALETTES_A, ARRAYSIZE(KOF03_A_MAKI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_MAKI_PALETTES_B, ARRAYSIZE(KOF03_A_MAKI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_MAKI_PALETTES_C, ARRAYSIZE(KOF03_A_MAKI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_MAKI_PALETTES_D, ARRAYSIZE(KOF03_A_MAKI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_ADELHEID_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_ADELHEID_PALETTES_A, ARRAYSIZE(KOF03_A_ADELHEID_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_ADELHEID_PALETTES_B, ARRAYSIZE(KOF03_A_ADELHEID_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_ADELHEID_PALETTES_C, ARRAYSIZE(KOF03_A_ADELHEID_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_ADELHEID_PALETTES_D, ARRAYSIZE(KOF03_A_ADELHEID_PALETTES_D) },
};

const sDescTreeNode KOF03_A_MUKAI_COLLECTION[] =
{
    { L"A", DESC_NODETYPE_TREE, (void*)KOF03_A_MUKAI_PALETTES_A, ARRAYSIZE(KOF03_A_MUKAI_PALETTES_A) },
    { L"B", DESC_NODETYPE_TREE, (void*)KOF03_A_MUKAI_PALETTES_B, ARRAYSIZE(KOF03_A_MUKAI_PALETTES_B) },
    { L"C", DESC_NODETYPE_TREE, (void*)KOF03_A_MUKAI_PALETTES_C, ARRAYSIZE(KOF03_A_MUKAI_PALETTES_C) },
    { L"D", DESC_NODETYPE_TREE, (void*)KOF03_A_MUKAI_PALETTES_D, ARRAYSIZE(KOF03_A_MUKAI_PALETTES_D) },
};

const sDescTreeNode KOF03_A_TEAMBG_COLLECTION[] =
{
    { L"Backgrounds", DESC_NODETYPE_TREE, (void*)KOF03_A_TEAMBG_PALETTES, ARRAYSIZE(KOF03_A_TEAMBG_PALETTES) },
};

const sDescTreeNode KOF03_A_PORTRAIT_COLLECTION[] =
{
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF03_A_PORTRAIT_PALETTES, ARRAYSIZE(KOF03_A_PORTRAIT_PALETTES) },
};

const sGame_PaletteDataset KOF03_A_BONUS_PALETTES[] =
{
    { L"Burning", 0x01d640, 0x01d660 },
    { L"Ash Fire Burning", 0x01d680, 0x01d6a0 },
};

const sDescTreeNode KOF03_A_BONUS_COLLECTION[] =
{
    { L"Bonus", DESC_NODETYPE_TREE, (void*)KOF03_A_BONUS_PALETTES, ARRAYSIZE(KOF03_A_BONUS_PALETTES) },
};

const sDescTreeNode KOF03_A_UNITS[] =
{
    // This is sorted by team
    { L"Ash Crimson", DESC_NODETYPE_TREE, (void*)KOF03_A_ASH_COLLECTION, ARRAYSIZE(KOF03_A_ASH_COLLECTION) },
    { L"Duo Lon", DESC_NODETYPE_TREE, (void*)KOF03_A_DUO_COLLECTION, ARRAYSIZE(KOF03_A_DUO_COLLECTION) },
    { L"Shen Woo", DESC_NODETYPE_TREE, (void*)KOF03_A_SHEN_COLLECTION, ARRAYSIZE(KOF03_A_SHEN_COLLECTION) },

    { L"Ryo Sakazaki", DESC_NODETYPE_TREE, (void*)KOF03_A_RYO_COLLECTION, ARRAYSIZE(KOF03_A_RYO_COLLECTION) },
    { L"Robert Garcia", DESC_NODETYPE_TREE, (void*)KOF03_A_ROBERT_COLLECTION, ARRAYSIZE(KOF03_A_ROBERT_COLLECTION) },
    { L"Yuri Sakazaki", DESC_NODETYPE_TREE, (void*)KOF03_A_YURI_COLLECTION, ARRAYSIZE(KOF03_A_YURI_COLLECTION) },

    { L"Terry Bogard", DESC_NODETYPE_TREE, (void*)KOF03_A_TERRY_COLLECTION, ARRAYSIZE(KOF03_A_TERRY_COLLECTION) },
    { L"Joe Higashi", DESC_NODETYPE_TREE, (void*)KOF03_A_JOE_COLLECTION, ARRAYSIZE(KOF03_A_JOE_COLLECTION) },
    { L"Tizoc", DESC_NODETYPE_TREE, (void*)KOF03_A_TIZOC_COLLECTION, ARRAYSIZE(KOF03_A_TIZOC_COLLECTION) },

    { L"Kim Kaphwan", DESC_NODETYPE_TREE, (void*)KOF03_A_KIM_COLLECTION, ARRAYSIZE(KOF03_A_KIM_COLLECTION) },
    { L"Chang Koehan", DESC_NODETYPE_TREE, (void*)KOF03_A_CHANG_COLLECTION, ARRAYSIZE(KOF03_A_CHANG_COLLECTION) },
    { L"Jhun Hoon", DESC_NODETYPE_TREE, (void*)KOF03_A_JHUN_COLLECTION, ARRAYSIZE(KOF03_A_JHUN_COLLECTION) },

    { L"Leona Heidern", DESC_NODETYPE_TREE, (void*)KOF03_A_LEONA_COLLECTION, ARRAYSIZE(KOF03_A_LEONA_COLLECTION) },
    { L"Ralf Jones", DESC_NODETYPE_TREE, (void*)KOF03_A_RALF_COLLECTION, ARRAYSIZE(KOF03_A_RALF_COLLECTION) },
    { L"Clark Still", DESC_NODETYPE_TREE, (void*)KOF03_A_CLARK_COLLECTION, ARRAYSIZE(KOF03_A_CLARK_COLLECTION) },

    { L"Iori Yagami", DESC_NODETYPE_TREE, (void*)KOF03_A_IORI_COLLECTION, ARRAYSIZE(KOF03_A_IORI_COLLECTION) },
    { L"Kyo Kusanagi", DESC_NODETYPE_TREE, (void*)KOF03_A_KYO_COLLECTION, ARRAYSIZE(KOF03_A_KYO_COLLECTION) },

    { L"Gato", DESC_NODETYPE_TREE, (void*)KOF03_A_GATO_COLLECTION, ARRAYSIZE(KOF03_A_GATO_COLLECTION) },
    { L"Billy Kane", DESC_NODETYPE_TREE, (void*)KOF03_A_BILLY_COLLECTION, ARRAYSIZE(KOF03_A_BILLY_COLLECTION) },
    { L"Ryuji Yamazaki", DESC_NODETYPE_TREE, (void*)KOF03_A_RYUJI_COLLECTION, ARRAYSIZE(KOF03_A_RYUJI_COLLECTION) },

    { L"King", DESC_NODETYPE_TREE, (void*)KOF03_A_KING_COLLECTION, ARRAYSIZE(KOF03_A_KING_COLLECTION) },
    { L"Mai Shiranui", DESC_NODETYPE_TREE, (void*)KOF03_A_SHIRANUI_COLLECTION, ARRAYSIZE(KOF03_A_SHIRANUI_COLLECTION) },
    { L"Blue Mary", DESC_NODETYPE_TREE, (void*)KOF03_A_BLUEMARY_COLLECTION, ARRAYSIZE(KOF03_A_BLUEMARY_COLLECTION) },

    { L"Benimaru Nikaido", DESC_NODETYPE_TREE, (void*)KOF03_A_BENIMARU_COLLECTION, ARRAYSIZE(KOF03_A_BENIMARU_COLLECTION) },
    { L"Shingo Yabuki", DESC_NODETYPE_TREE, (void*)KOF03_A_SHINGO_COLLECTION, ARRAYSIZE(KOF03_A_SHINGO_COLLECTION) },
    { L"Goro Daimon", DESC_NODETYPE_TREE, (void*)KOF03_A_GORO_COLLECTION, ARRAYSIZE(KOF03_A_GORO_COLLECTION) },

    { L"Athena Asamiya", DESC_NODETYPE_TREE, (void*)KOF03_A_ATHENA_COLLECTION, ARRAYSIZE(KOF03_A_ATHENA_COLLECTION) },
    { L"Hinako Shijou", DESC_NODETYPE_TREE, (void*)KOF03_A_HINAKO_COLLECTION, ARRAYSIZE(KOF03_A_HINAKO_COLLECTION) },
    { L"Malin", DESC_NODETYPE_TREE, (void*)KOF03_A_MALIN_COLLECTION, ARRAYSIZE(KOF03_A_MALIN_COLLECTION) },

    { L"K'", DESC_NODETYPE_TREE, (void*)KOF03_A_K_COLLECTION, ARRAYSIZE(KOF03_A_K_COLLECTION) },
    { L"Maxima", DESC_NODETYPE_TREE, (void*)KOF03_A_MAXIMA_COLLECTION, ARRAYSIZE(KOF03_A_MAXIMA_COLLECTION) },
    { L"Whip", DESC_NODETYPE_TREE, (void*)KOF03_A_WHIP_COLLECTION, ARRAYSIZE(KOF03_A_WHIP_COLLECTION) },

    { L"KUSANAGI", DESC_NODETYPE_TREE, (void*)KOF03_A_KUSANAGI_COLLECTION, ARRAYSIZE(KOF03_A_KUSANAGI_COLLECTION) },
    { L"Adelheid Bernstein", DESC_NODETYPE_TREE, (void*)KOF03_A_ADELHEID_COLLECTION, ARRAYSIZE(KOF03_A_ADELHEID_COLLECTION) },
    { L"Mukai", DESC_NODETYPE_TREE, (void*)KOF03_A_MUKAI_COLLECTION, ARRAYSIZE(KOF03_A_MUKAI_COLLECTION) },

    { L"Chizuru Kagura", DESC_NODETYPE_TREE, (void*)KOF03_A_CHIZURU_COLLECTION, ARRAYSIZE(KOF03_A_CHIZURU_COLLECTION) },
    { L"Maki Kagura", DESC_NODETYPE_TREE, (void*)KOF03_A_MAKI_COLLECTION, ARRAYSIZE(KOF03_A_MAKI_COLLECTION) },

    { L"Team Backgrounds", DESC_NODETYPE_TREE, (void*)KOF03_A_TEAMBG_COLLECTION, ARRAYSIZE(KOF03_A_TEAMBG_COLLECTION) },
    { L"Portraits", DESC_NODETYPE_TREE, (void*)KOF03_A_PORTRAIT_COLLECTION, ARRAYSIZE(KOF03_A_PORTRAIT_COLLECTION) },

    { L"Bonus", DESC_NODETYPE_TREE, (void*)KOF03_A_BONUS_COLLECTION, ARRAYSIZE(KOF03_A_BONUS_COLLECTION) },
};

constexpr auto KOF03_A_NUMUNIT = ARRAYSIZE(KOF03_A_UNITS);
#define KOF03_A_EXTRALOC KOF03_A_NUMUNIT

// We extend this array with data groveled from the extras file, if any.
const stExtraDef KOF03_A_EXTRA[] =
{
    // Start
    { UNIT_START_VALUE },

    { INVALID_UNIT_VALUE }
};
