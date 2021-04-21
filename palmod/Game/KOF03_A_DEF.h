#pragma once

// To add characters or palette lists:
// * Update the SupportedPaletteListIndex with the new index name.
// * Add an array below along the lines of KOF03_A_KYO_PALETTE_A. 
// * Update every array using KOF03_A_NUMUNIT below
// That should be it.  Good luck.

const UINT16 KOF03_A_IMG_UNITS[] =
{
    indexKOFSprites_02UM_Clark,
    indexKOFSprites_02UM_Chang,     // 0x80
    indexKOFSprites_02UM_Daimon,    // 0x87
    indexKOFSprites_02UM_Iori,
    indexKOFSprites_02UM_K,         // 0x92
    indexKOFSprites_02UM_Kim,       // 0x96
    indexKOFSprites_02UM_Leona,
    indexKOFSprites_02UM_Maxima,    // 0xA2
    indexKOFSprites_02UM_Ralf,

    indexKOFSprites_02UM_Joe,
    indexKOFSprites_02UM_Kusanagi,
    indexKOFSprites_02UM_Mai,

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
    indexKOF03Sprites_Goro,         // 0xef
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
    { L"Ash Crimson A", 0x002000, 0x002020, indexKOF03Sprites_Ash, 0x00 },
    { L"Nivose/Termidor/Sans Culottes A", 0x002020, 0x002040 },
    { L"Ventose A", 0x002100, 0x002120 },
    { L"Ash Electricity A", 0x002040, 0x002060, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul A", 0x002080, 0x0020a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai A", 0x0020c0, 0x0020e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Sans Culottes Glow A", 0x0021c0, 0x0021e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory A", 0x01f120, 0x01f160 },
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_B[] =
{
    { L"Ash Crimson B", 0x002200, 0x002220, indexKOF03Sprites_Ash, 0x00 },
    { L"Nivose/Termidor/Sans Culottes B", 0x002220, 0x002240 },
    { L"Ventose B", 0x002300, 0x002320 },
    { L"Ash Electricity B", 0x002240, 0x002260, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul B", 0x002280, 0x0022a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai B", 0x0022c0, 0x0022e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Sans Culottes Glow B", 0x0023c0, 0x0023e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory B", 0x01f160, 0x01f1a0 },
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_C[] =
{
    { L"Ash Crimson C", 0x002400, 0x002420, indexKOF03Sprites_Ash, 0x00 },
    { L"Nivose/Termidor/Sans Culottes C", 0x002420, 0x002440 },
    { L"Ventose C", 0x002500, 0x002520 },
    { L"Ash Electricity C", 0x002440, 0x002460, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul C", 0x002480, 0x0024a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai C ", 0x0024c0, 0x0024e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Sans Culottes Glow C", 0x0025c0, 0x0025e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory C", 0x01f1a0, 0x01f1e0 },
};

const sGame_PaletteDataset KOF03_A_ASH_PALETTES_D[] =
{
    { L"Ash Crimson D", 0x002600, 0x002620, indexKOF03Sprites_Ash, 0x00 },
    { L"Nivose/Termidor/Sans Culottes D", 0x002620, 0x002640 },
    { L"Ventose D", 0x002700, 0x002720 },
    { L"Ash Electricity D", 0x002640, 0x002660, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Soul D", 0x002680, 0x0026a0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Shikai D", 0x0026c0, 0x0026e0 , indexKOF03Sprites_Ash, 0x00},
    { L"Ash Sans Culottes Glow D", 0x0027c0, 0x0027e0, indexKOF03Sprites_Ash, 0x00 },
    { L"Ash Victory D", 0x01f1e0, 0x01f220 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_A[] =
{
    { L"Duo Lon A", 0x002800, 0x002820, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu A", 0x002900, 0x002920 },
    { L"Duo Lon Electricity A", 0x002840, 0x002860, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul A", 0x002880, 0x0028a0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai A", 0x0028c0, 0x0028e0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow A", 0x0029c0, 0x0029e0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Victory A", 0x01f220, 0x01f260 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_B[] =
{
    { L"Duo Lon B", 0x002a00, 0x002a20, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu B", 0x002b00, 0x002b20 },
    { L"Duo Lon Electricity B", 0x002A40, 0x002A60, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul B", 0x002A80, 0x002Aa0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai B", 0x002Ac0, 0x002Ae0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow B", 0x002bc0, 0x002be0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Victory B", 0x01f260, 0x01f2a0 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_C[] =
{
    { L"Duo Lon C", 0x002c00, 0x002c20, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu C", 0x002d00, 0x002d20 },
    { L"Duo Lon Electricity C", 0x002C40, 0x002C60, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul C", 0x002C80, 0x002Ca0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai C", 0x002Cc0, 0x002Ce0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow C", 0x002dc0, 0x002de0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Victory C", 0x01f2a0, 0x01f2e0 },
};

const sGame_PaletteDataset KOF03_A_DUO_PALETTES_D[] =
{
    { L"Duo Lon D", 0x002e00, 0x002e20, indexKOF03Sprites_Duo, 0x00 },
    { L"Hiden~Genmu D", 0x002f00, 0x002f20 },
    { L"Duo Lon Electricity D", 0x002E40, 0x002E60, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Soul D", 0x002E80, 0x002Ea0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Shikai D", 0x002Ec0, 0x002Ee0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon Taijuu Aiken Glow D", 0x002fc0, 0x002fe0, indexKOF03Sprites_Duo, 0x00 },
    { L"Duo Lon victory D", 0x01f2e0, 0x01f320 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_A[] =
{
    { L"Shen Woo A", 0x003000, 0x003020, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken A", 0x003020, 0x003040 },
    { L"Bakushin Burst A", 0x003100, 0x003120 },
    { L"Bakushin Glow A", 0x0031c0, 0x0031e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity A", 0x003040, 0x003060, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul A", 0x003080, 0x0030a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai A", 0x0030c0, 0x0030e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory A", 0x01f320, 0x01f360 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_B[] =
{
    { L"Shen Woo B", 0x003200, 0x003220, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken B", 0x003220, 0x003240 },
    { L"Bakushin Burst B", 0x003300, 0x003320 },
    { L"Bakushin Glow B", 0x0033c0, 0x0033e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity B", 0x003240, 0x003260, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul B", 0x003280, 0x0032a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai B", 0x0032c0, 0x0032e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory B", 0x01f360, 0x01f3a0 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_C[] =
{
    { L"Shen Woo C", 0x003400, 0x003420, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken C", 0x003420, 0x003440 },
    { L"Bakushin Burst C", 0x003500, 0x003520 },
    { L"Bakushin Glow C", 0x0035c0, 0x0035e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity C", 0x003440, 0x003460, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul C", 0x003480, 0x0034a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai C", 0x0034c0, 0x0034e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory C", 0x01f3a0, 0x01f3e0 },
};

const sGame_PaletteDataset KOF03_A_SHEN_PALETTES_D[] =
{
    { L"Shen Woo D", 0x003600, 0x003620, indexKOF03Sprites_Shen, 0x00 },
    { L"Zetsu Gekiken D", 0x003620, 0x003640 },
    { L"Bakushin Burst D", 0x003700, 0x003720 },
    { L"Bakushin Glow D", 0x0037c0, 0x0037e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Electricity D", 0x003640, 0x003660, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Soul D", 0x003680, 0x0036a0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Shikai D", 0x0036c0, 0x0036e0, indexKOF03Sprites_Shen, 0x00 },
    { L"Shen Woo Victory D", 0x01f3e0, 0x01f420 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_A[] =
{
    { L"Terry Bogard A", 0x003800, 0x003820, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf A", 0x003900, 0x003920 },
    { L"Power Wave/Geyser A", 0x003920, 0x003940 },
    { L"Burn Knuckle A", 0x003940, 0x003952 },
    { L"Power Stream A", 0x003980, 0x0039a0 },
    { L"Terry Electricity A", 0x003840, 0x003860, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul A", 0x003880, 0x0038a0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai A", 0x0038c0, 0x0038e0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory A", 0x01f420, 0x01f460 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_B[] =
{
    { L"Terry Bogard B", 0x003a00, 0x003a20, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf B", 0x003b00, 0x003b20 },
    { L"Power Wave/Geyser B", 0x003b20, 0x003b40 },
    { L"Burn Knuckle B", 0x003b40, 0x003b52 },
    { L"Power Stream B", 0x003b80, 0x003ba0 },
    { L"Terry Electricity B", 0x003A40, 0x003A60, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul B", 0x003A80, 0x003Aa0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai B", 0x003Ac0, 0x003Ae0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory B", 0x01f460, 0x01f4a0 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_C[] =
{
    { L"Terry Bogard C", 0x003c00, 0x003c20, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf C", 0x003d00, 0x003d20 },
    { L"Power Wave/Geyser C", 0x003d20, 0x003d40 },
    { L"Burn Knuckle C", 0x003d40, 0x003d52 },
    { L"Power Stream C", 0x003d80, 0x003da0 },
    { L"Terry Electricity C", 0x003C40, 0x003C60, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul C", 0x003C80, 0x003Ca0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai C", 0x003Cc0, 0x003Ce0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory C", 0x01f4a0, 0x01f4e0 },
};

const sGame_PaletteDataset KOF03_A_TERRY_PALETTES_D[] =
{
    { L"Terry Bogard D", 0x003e00, 0x003e20, indexKOF03Sprites_Terry, 0x00 },
    { L"Buster Wolf D", 0x003f00, 0x003f20 },
    { L"Power Wave/Geyser D", 0x003f20, 0x003f40 },
    { L"Burn Knuckle D", 0x003f40, 0x003f52 },
    { L"Power Stream D", 0x003f80, 0x003fa0 },
    { L"Terry Electricity D", 0x003E40, 0x003E60, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Soul D", 0x003E80, 0x003Ea0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Shikai D", 0x003Ec0, 0x003Ee0, indexKOF03Sprites_Terry, 0x00 },
    { L"Terry Victory D", 0x01f4e0, 0x01f520 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_A[] =
{
    { L"Joe Higashi A", 0x004000, 0x004020, indexKOFSprites_02UM_Joe },
    { L"Hurricane Upper A", 0x004100, 0x004112 },
    { L"Slash Kick/Screw Upper A", 0x004120, 0x004132 },
    { L"Joe A Electricity", 0x004040, 0x004060, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe A Soul", 0x004080, 0x0040a0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe A Shikai", 0x0040c0, 0x0040e0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe Victory A", 0x01f520, 0x01f560 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_B[] =
{
    { L"Joe Higashi B", 0x004200, 0x004220, indexKOFSprites_02UM_Joe },
    { L"Hurricane Upper B", 0x004300, 0x004312 },
    { L"Slash Kick/Screw Upper B", 0x004320, 0x004332 },
    { L"Joe B Electricity", 0x004240, 0x004260, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe B Soul", 0x004280, 0x0042a0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe B Shikai", 0x0042c0, 0x0042e0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe Victory B", 0x01f560, 0x01f5a0 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_C[] =
{
    { L"Joe Higashi C", 0x004400, 0x004420, indexKOFSprites_02UM_Joe },
    { L"Hurricane Upper C", 0x004500, 0x004512 },
    { L"Slash Kick/Screw Upper C", 0x004520, 0x004532 },
    { L"Joe C Electricity", 0x004440, 0x004460, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe C Soul", 0x004480, 0x0044a0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe C Shikai", 0x0044c0, 0x0044e0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe Victory C ", 0x01f5a0, 0x01f5e0 },
};

const sGame_PaletteDataset KOF03_A_JOE_PALETTES_D[] =
{
    { L"Joe Higashi D", 0x004600, 0x004620, indexKOFSprites_02UM_Joe },
    { L"Hurricane Upper D", 0x004700, 0x004712 },
    { L"Slash Kick/Screw Upper D", 0x004720, 0x004732 },
    { L"Joe D Electricity", 0x004640, 0x004660, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe D Soul", 0x004680, 0x0046a0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe D Shikai", 0x0046c0, 0x0046e0, indexKOFSprites_02UM_Joe, 0x00 },
    { L"Joe Victory D", 0x01f5e0, 0x01f620 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_A[] =
{
    { L"Tizoc A", 0x004800, 0x004820, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM A", 0x004940, 0x004960 },
    { L"Griffon Big Fall LDM A", 0x004920, 0x004940 },
    { L"Tizoc A Electricity", 0x004840, 0x004860, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc A Soul", 0x004880, 0x0048a0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc A Shikai", 0x0048c0, 0x0048e0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory A", 0x01f620, 0x01f660 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_B[] =
{
    { L"Tizoc B", 0x004a00, 0x004a20, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM B", 0x004b40, 0x004b60 },
    { L"Griffon Big Fall LDM B", 0x004b20, 0x004b40 },
    { L"Tizoc B Electricity", 0x004A40, 0x004A60, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc B Soul", 0x004A80, 0x004Aa0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc B Shikai", 0x004Ac0, 0x004Ae0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory B", 0x01f660, 0x01f6a0 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_C[] =
{
    { L"Tizoc C", 0x004c00, 0x004c20, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM C", 0x004d40, 0x004d60 },
    { L"Griffon Big Fall LDM C", 0x004d20, 0x004d40 },
    { L"Tizoc C Electricity", 0x004C40, 0x004C60, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc C Soul", 0x004C80, 0x004Ca0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory C", 0x01f6a0, 0x01f6e0 },
};

const sGame_PaletteDataset KOF03_A_TIZOC_PALETTES_D[] =
{
    { L"Tizoc D", 0x004e00, 0x004e20, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Griffon Big Fall DM D", 0x004f40, 0x004f60 },
    { L"Griffon Big Fall LDM D", 0x004f20, 0x004f40 },
    { L"Tizoc C Shikai", 0x004Cc0, 0x004Ce0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc D Electricity", 0x004E40, 0x004E60, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc D Soul", 0x004E80, 0x004Ea0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc D Shikai", 0x004Ec0, 0x004Ee0, indexKOF03Sprites_Tizoc, 0x00 },
    { L"Tizoc Victory D", 0x01f6e0, 0x01f720 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_A[] =
{
    { L"Ryo Sakazaki A", 0x005000, 0x005020, indexKOFXISprites_Ryo },
    { L"Haoh Shoukou Ken A", 0x005100, 0x005120 },
    { L"Ko'ou Ken A", 0x005120, 0x005140 },
    { L"Ryo A Electricity", 0x005040, 0x005060, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo A Soul", 0x005080, 0x0050a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo A Shikai", 0x0050c0, 0x0050e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory A", 0x01f720, 0x01f760 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_B[] =
{
    { L"Ryo Sakazaki B", 0x005200, 0x005220, indexKOFXISprites_Ryo, 0x00 },
    { L"Haoh Shoukou Ken B", 0x005300, 0x005320 },
    { L"Ko'ou Ken B", 0x005320, 0x005340 },
    { L"Ryo B Electricity", 0x005240, 0x005260, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo B Soul", 0x005280, 0x0052a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo B Shikai", 0x0052c0, 0x0052e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory B", 0x01f760, 0x01f7a0 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_C[] =
{
    { L"Ryo Sakazaki C", 0x005400, 0x005420, indexKOFXISprites_Ryo, 0x00 },
    { L"Haoh Shoukou Ken C", 0x005500, 0x005520 },
    { L"Ko'ou Ken C", 0x005520, 0x005540 },
    { L"Ryo C Electricity", 0x005440, 0x005460, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo C Soul", 0x005480, 0x0054a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo C Shikai", 0x0054c0, 0x0054e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory C", 0x01f7a0, 0x01f7e0 },
};

const sGame_PaletteDataset KOF03_A_RYO_PALETTES_D[] =
{
    { L"Ryo Sakazaki D", 0x005600, 0x005620, indexKOFXISprites_Ryo, 0x00 },
    { L"Haoh Shoukou Ken D", 0x005700, 0x005720 },
    { L"Ko'ou Ken D", 0x005720, 0x005740 },
    { L"Ryo D Electricity", 0x005640, 0x005660, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo D Soul", 0x005680, 0x0056a0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo D Shikai", 0x0056c0, 0x0056e0, indexKOFXISprites_Ryo, 0x00 },
    { L"Ryo Victory D", 0x01f7e0, 0x01f820 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_A[] =
{
    { L"Robert Garcia A", 0x005800, 0x005820, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken A", 0x005920, 0x005936 },
    { L"RyuGeki Ken Impact A", 0x005900, 0x005910 },
    { L"RG Haoh Shokou Ken A", 0x005940, 0x005952 },
    { L"Intro Bouquet A", 0x005960, 0x005980 },
    { L"Robert A Electricity", 0x005840, 0x005860, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert A Soul", 0x005880, 0x0058a0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert A Shikai", 0x0058c0, 0x0058e0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory A", 0x01f820, 0x01f860 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_B[] =
{
    { L"Robert Garcia B", 0x005a00, 0x005a20, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken B", 0x005b20, 0x005b36 },
    { L"RyuGeki Ken Impact B", 0x005b00, 0x005b10 },
    { L"RG Haoh Shokou Ken B", 0x005b40, 0x005b52 },
    { L"Intro Bouquet B", 0x005b60, 0x005b80 },
    { L"Robert B Electricity", 0x005a40, 0x005a60, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert B Soul", 0x005a80, 0x005aa0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert B Shikai", 0x005ac0, 0x005ae0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory B", 0x01f860, 0x01f8a0 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_C[] =
{
    { L"Robert Garcia C", 0x005c00, 0x005c20, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken C", 0x005d20, 0x005d36 },
    { L"RyuGeki Ken Impact C", 0x005d00, 0x005d10 },
    { L"RG Haoh Shokou Ken C", 0x005d40, 0x005d52 },
    { L"Intro Bouquet C", 0x005d60, 0x005d80 },
    { L"Robert C Electricity", 0x005c40, 0x005c60, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert C Soul", 0x005c80, 0x005ca0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert C Shikai", 0x005cc0, 0x005ce0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory C", 0x01f8a0, 0x01f8e0 },
};

const sGame_PaletteDataset KOF03_A_ROBERT_PALETTES_D[] =
{
    { L"Robert Garcia D", 0x005e00, 0x005e20, indexKOF03Sprites_Robert, 0x00 },
    { L"RyuuGeki Ken D", 0x005f20, 0x005f36 },
    { L"RyuGeki Ken Impact D", 0x005f00, 0x005f10 },
    { L"RG Haoh Shokou Ken D", 0x005f40, 0x005f52 },
    { L"Intro Bouquet D", 0x005f60, 0x005f80 },
    { L"Robert D Electricity", 0x005e40, 0x005e60, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert D Soul", 0x005e80, 0x005ea0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert D Shikai", 0x005ec0, 0x005ee0, indexKOF03Sprites_Robert, 0x00 },
    { L"Robert Victory D", 0x01f8e0, 0x01f920 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_A[] =
{
    { L"Yuri Sakazaki A", 0x006000, 0x006020, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken A", 0x006128, 0x006140 },
    { L"YS Ko'ou Ken A", 0x006140, 0x006160 },
    { L"YS Haou SHokou Ken A", 0x006160, 0x006180 },
    { L"Yuri A Electricity", 0x006040, 0x006060, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri A Soul", 0x006080, 0x0060a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri A Shikai", 0x0060c0, 0x0060e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory A", 0x01f920, 0x01f960 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_B[] =
{
    { L"Yuri Sakazaki B", 0x006200, 0x006220, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken B", 0x006328, 0x006340 },
    { L"YS Ko'ou Ken B", 0x006340, 0x006360 },
    { L"YS Haou SHokou Ken B", 0x006360, 0x006380 },
    { L"Yuri B Electricity", 0x006240, 0x006260, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri B Soul", 0x006280, 0x0062a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri B Shikai", 0x0062c0, 0x0062e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory B", 0x01f960, 0x01f9a0 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_C[] =
{
    { L"Yuri Sakazaki C", 0x006400, 0x006420, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken C", 0x006528, 0x006540 },
    { L"YS Ko'ou Ken C", 0x006540, 0x006560 },
    { L"YS Haou SHokou Ken C", 0x006560, 0x006580 },
    { L"Yuri C Electricity", 0x006440, 0x006460, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri C Soul", 0x006480, 0x0064a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri C Shikai", 0x0064c0, 0x0064e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory C", 0x01f9a0, 0x01f9e0 },
};

const sGame_PaletteDataset KOF03_A_YURI_PALETTES_D[] =
{
    { L"Yuri Sakazaki D", 0x006600, 0x006620, indexKOFXISprites_Yuri },
    { L"Saiha/Raiou Ken D", 0x006728, 0x006740 },
    { L"YS Ko'ou Ken D", 0x006740, 0x006760 },
    { L"YS Haou SHokou Ken D", 0x006760, 0x006780 },
    { L"Yuri D Electricity", 0x006640, 0x006660, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri D Soul", 0x006680, 0x0066a0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri D Shikai", 0x0066c0, 0x0066e0, indexKOFXISprites_Yuri, 0x00 },
    { L"Yuri Victory D", 0x01f9e0, 0x01fa20 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_A[] =
{
    { L"Kim Kapwhan A", 0x006800, 0x006820, indexKOFSprites_02UM_Kim },
    { L"Kim A Electricity", 0x006840, 0x006860, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim A Soul", 0x006880, 0x0068a0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim A Shikai", 0x0068c0, 0x0068e0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim Victory A", 0x01fa20, 0x01fa60 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_B[] =
{
    { L"Kim Kapwhan B", 0x006a00, 0x006a20, indexKOFSprites_02UM_Kim },
    { L"Kim B Electricity", 0x006a40, 0x006a60, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim B Soul", 0x006a80, 0x006aa0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim B Shikai", 0x006ac0, 0x006ae0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim Victory B", 0x01fa60, 0x01faa0 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_C[] =
{
    { L"Kim Kapwhan C", 0x006c00, 0x006c20, indexKOFSprites_02UM_Kim },
    { L"Kim C Electricity", 0x006c40, 0x006c60, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim C Soul", 0x006c80, 0x006ca0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim C Shikai", 0x006cc0, 0x006ce0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim Victory C", 0x01faa0, 0x01fae0 },
};

const sGame_PaletteDataset KOF03_A_KIM_PALETTES_D[] =
{
    { L"Kim Kapwhan D", 0x006e00, 0x006e20, indexKOFSprites_02UM_Kim },
    { L"Kim D Electricity", 0x006e40, 0x006e60, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim D Soul", 0x006e80, 0x006ea0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim D Shikai", 0x006ec0, 0x006ee0, indexKOFSprites_02UM_Kim, 0x00 },
    { L"Kim Victory D", 0x01fae0, 0x01fb20 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_A[] =
{
    { L"Chang Koehan A", 0x007000, 0x007020, indexKOFSprites_02UM_Chang },
    { L"Chang A Electricity", 0x007040, 0x007060, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang A Soul", 0x007080, 0x0070a0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang A Shikai", 0x0070c0, 0x0070e0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang Victory A", 0x01fb20, 0x01fb60 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_B[] =
{
    { L"Chang Koehan B", 0x007200, 0x007220, indexKOFSprites_02UM_Chang },
    { L"Chang B Electricity", 0x007240, 0x007260, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang B Soul", 0x007280, 0x0072a0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang B Shikai", 0x0072c0, 0x0072e0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang Victory B", 0x01fb60, 0x01fba0 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_C[] =
{
    { L"Chang Koehan C", 0x007400, 0x007420, indexKOFSprites_02UM_Chang },
    { L"Chang C Electricity", 0x007440, 0x007460, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang C Soul", 0x007480, 0x0074a0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang C Shikai", 0x0074c0, 0x0074e0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang Victory C", 0x01fba0, 0x01fbe0 },
};

const sGame_PaletteDataset KOF03_A_CHANG_PALETTES_D[] =
{
    { L"Chang Koehan D", 0x007600, 0x007620, indexKOFSprites_02UM_Chang },
    { L"Chang D Electricity", 0x007640, 0x007660, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang D Soul", 0x007680, 0x0076a0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang D Shikai", 0x0076c0, 0x0076e0, indexKOFSprites_02UM_Chang, 0x00 },
    { L"Chang Victory D", 0x01fbe0, 0x01fc20 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_A[] =
{
    { L"Jhun Hoon A", 0x007800, 0x007820, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks A", 0x007928, 0x007938 },
    { L"Haiki Geki A", 0x007940, 0x007960 },
    { L"Ho'ou Ressou Kyaku A", 0x007900, 0x007912 },
    { L"Ressou Hiten Kyaku A", 0x007960, 0x007972 },
    { L"Jhun A Electricity", 0x007840, 0x007860, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun A Soul", 0x007880, 0x0078a0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun A Shikai", 0x0078c0, 0x0078e0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory A", 0x01fc20, 0x01fc60 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_B[] =
{
    { L"Jhun Hoon B", 0x007a00, 0x007a20, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks B", 0x007b28, 0x007b38 },
    { L"Haiki Geki B", 0x007b40, 0x007b60 },
    { L"Ho'ou Ressou Kyaku B", 0x007b00, 0x007b12 },
    { L"Ressou Hiten Kyaku B", 0x007b60, 0x007b72 },
    { L"Jhun B Electricity", 0x007a40, 0x007a60, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun B Soul", 0x007a80, 0x007aa0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun B Shikai", 0x007ac0, 0x007ae0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory B", 0x01fc60, 0x01fca0 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_C[] =
{
    { L"Jhun Hoon C", 0x007c00, 0x007c20, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks C", 0x007d28, 0x007d38 },
    { L"Haiki Geki C", 0x007d40, 0x007d60 },
    { L"Ho'ou Ressou Kyaku C", 0x007d00, 0x007d12 },
    { L"Ressou Hiten Kyaku C", 0x007d60, 0x007d72 },
    { L"Jhun C Electricity", 0x007c40, 0x007c60, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun C Soul", 0x007c80, 0x007ca0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun C Shikai", 0x007cc0, 0x007ce0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory C", 0x01fca0, 0x01fce0 },
};

const sGame_PaletteDataset KOF03_A_JHUN_PALETTES_D[] =
{
    { L"Jhun Hoon D", 0x007e00, 0x007e20, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Slash Kicks D", 0x007f28, 0x007f38 },
    { L"Haiki Geki D", 0x007f40, 0x007f60 },
    { L"Ho'ou Ressou Kyaku D", 0x007f00, 0x007f12 },
    { L"Ressou Hiten Kyaku D", 0x007f60, 0x007f72 },
    { L"Jhun D Electricity", 0x007e40, 0x007e60, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun D Soul", 0x007e80, 0x007ea0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun D Shikai", 0x007ec0, 0x007ee0, indexKOF03Sprites_JhunHoon, 0x00 },
    { L"Jhun Victory D", 0x01fce0, 0x01fd20 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_A[] =
{
    { L"Leona Heidern A", 0x008000, 0x008020, indexKOFSprites_02UM_Leona },
    { L"Ground Saber A", 0x008100, 0x008112 },
    { L"Baltic Launcher A", 0x008120, 0x008132 },
    { L"Moon Slasher A", 0x008180, 0x0081a0 },
    { L"x-Calibur A", 0x008160, 0x008180 },
    { L"Earring Bakudan A", 0x0081c0, 0x0081e0 },
    { L"Victory Slasher A", 0x008140, 0x008160 },
    { L"Rebel Spark A", 0x0081b0, 0x0081c0 },
    { L"Leona Electricity A", 0x8040, 0x8060, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Soul A", 0x8080, 0x80a0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Shikai A", 0x80c0, 0x80e0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Victory A", 0x01fd20, 0x01fd60 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_B[] =
{
    { L"Leona Heidern B", 0x008200, 0x008220, indexKOFSprites_02UM_Leona },
    { L"Ground Saber B", 0x008300, 0x008312 },
    { L"Baltic Launcher B", 0x008320, 0x008332 },
    { L"Moon Slasher B", 0x008380, 0x0083a0 },
    { L"x-Calibur B", 0x008360, 0x008380 },
    { L"Earring Bakudan B", 0x0083c0, 0x0083e0 },
    { L"Victory Slasher B", 0x008340, 0x008360 },
    { L"Rebel Spark B", 0x0083b0, 0x0083c0 },
    { L"Leona Electricity B", 0x8240, 0x8260, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Soul B", 0x8280, 0x82a0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Shikai B", 0x82c0, 0x82e0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Victory B", 0x01fd60, 0x01fda0 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_C[] =
{
    { L"Leona Heidern C", 0x008400, 0x008420, indexKOFSprites_02UM_Leona },
    { L"Ground Saber C", 0x008500, 0x008512 },
    { L"Baltic Launcher C", 0x008520, 0x008532 },
    { L"Moon Slasher C", 0x008580, 0x0085a0 },
    { L"x-Calibur C", 0x008560, 0x008580 },
    { L"Earring Bakudan C", 0x0085c0, 0x0085e0 },
    { L"Victory Slasher C", 0x008540, 0x008560 },
    { L"Rebel Spark C", 0x0085b0, 0x0085c0 },
    { L"Leona Electricity C", 0x8440, 0x8460, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Soul C", 0x8480, 0x84a0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Shikai C", 0x84c0, 0x84e0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Victory C", 0x01fda0, 0x01fde0 },
};

const sGame_PaletteDataset KOF03_A_LEONA_PALETTES_D[] =
{
    { L"Leona Heidern D", 0x008600, 0x008620, indexKOFSprites_02UM_Leona },
    { L"Ground Saber D", 0x008700, 0x008712 },
    { L"Baltic Launcher D", 0x008720, 0x008732 },
    { L"Moon Slasher D", 0x008780, 0x0087a0 },
    { L"x-Calibur D", 0x008760, 0x008780 },
    { L"Earring Bakudan D", 0x0087c0, 0x0087e0 },
    { L"Victory Slasher D", 0x008740, 0x008760 },
    { L"Rebel Spark D", 0x0087b0, 0x0087c0 },
    { L"Leona Electricity D", 0x8640, 0x8660, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Soul D", 0x8680, 0x86a0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Shikai D", 0x86c0, 0x86e0, indexKOFSprites_02UM_Leona, 0x00 },
    { L"Leona Victory D", 0x01fde0, 0x01fe20 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_A[] =
{
    { L"Ralf Jones A", 0x008800, 0x008820, indexKOFSprites_02UM_Ralf },
    { L"Ralf Electricity A", 0x8840, 0x8860, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Soul A", 0x8880, 0x88a0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Shikai A", 0x88c0, 0x88e0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Victory A", 0x01fe20, 0x01fe60 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_B[] =
{
    { L"Ralf Jones B", 0x008a00, 0x008a20, indexKOFSprites_02UM_Ralf },
    { L"Ralf Electricity B", 0x8a40, 0x8a60, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Soul B", 0x8a80, 0x8aa0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Shikai B", 0x8ac0, 0x8ae0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Victory B", 0x01fe60, 0x01fea0 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_C[] =
{
    { L"Ralf Jones C", 0x008c00, 0x008c20, indexKOFSprites_02UM_Ralf },
    { L"Ralf Electricity C", 0x8c40, 0x8c60, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Soul C", 0x8c80, 0x8ca0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Shikai C", 0x8cc0, 0x8ce0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Victory C", 0x01fea0, 0x01fee0 },
};

const sGame_PaletteDataset KOF03_A_RALF_PALETTES_D[] =
{
    { L"Ralf Jones D", 0x008e00, 0x008e20, indexKOFSprites_02UM_Ralf },
    { L"Ralf Electricity D", 0x8e40, 0x8e60, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Soul D", 0x8e80, 0x8ea0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Shikai D", 0x8ec0, 0x8ee0, indexKOFSprites_02UM_Ralf, 0x00 },
    { L"Ralf Victory D", 0x01fee0, 0x01ff20 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_A[] =
{
    { L"Clark Steel A", 0x009000, 0x009020, indexKOFSprites_02UM_Clark },
    { L"Clark Electricity A", 0x9040, 0x9060, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Soul A", 0x9080, 0x90a0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Shikai A", 0x90c0, 0x90e0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Victory A", 0x01ff20, 0x01ff60 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_B[] =
{
    { L"Clark Steel B", 0x009200, 0x009220, indexKOFSprites_02UM_Clark },
    { L"Clark Electricity B", 0x9240, 0x9260, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Soul B", 0x9280, 0x92a0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Shikai B", 0x92c0, 0x92e0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Victory B", 0x01ff60, 0x01ffa0 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_C[] =
{
    { L"Clark Steel C", 0x009400, 0x009420, indexKOFSprites_02UM_Clark },
    { L"Clark Electricity C", 0x9440, 0x9460, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Soul C", 0x9480, 0x94a0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Shikai C", 0x94c0, 0x94e0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Victory C", 0x01ffa0, 0x01ffe0 },
};

const sGame_PaletteDataset KOF03_A_CLARK_PALETTES_D[] =
{
    { L"Clark Steel D", 0x009600, 0x009620, indexKOFSprites_02UM_Clark },
    { L"Clark Electricity D", 0x9640, 0x9660, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Soul D", 0x9680, 0x96a0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Shikai D", 0x96c0, 0x96e0, indexKOFSprites_02UM_Clark, 0x00 },
    { L"Clark Victory D", 0x01ffe0, 0x020020 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_A[] =
{
    { L"Gato A", 0x009800, 0x009820, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga A", 0x009960, 0x009976 },
    { L"Tatsu Kiba Wave A", 0x009980, 0x009990 },
    { L"Tatsu Kiba Burst A", 0x009906, 0x009920 },
    { L"Tatsu Kiba Flame A", 0x009920, 0x009940 },
    { L"Gato Electricity A", 0x9840, 0x9860, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul A", 0x9880, 0x98a0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai A", 0x98c0, 0x98e0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory A", 0x020020, 0x020060, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_B[] =
{
    { L"Gato B", 0x009a00, 0x009a20, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga B", 0x009b60, 0x009b76 },
    { L"Tatsu Kiba Wave B", 0x009b80, 0x009b90 },
    { L"Tatsu Kiba Burst B", 0x009b06, 0x009b20 },
    { L"Tatsu Kiba Flame B", 0x009b20, 0x009b40 },
    { L"Gato Electricity B", 0x9A40, 0x9A60, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul B", 0x9A80, 0x9Aa0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai B", 0x9Ac0, 0x9Ae0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory B", 0x020060, 0x0200a0, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_C[] =
{
    { L"Gato C", 0x009c00, 0x009c20, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga C", 0x009d60, 0x009d76 },
    { L"Tatsu Kiba Wave C", 0x009d80, 0x009d90 },
    { L"Tatsu Kiba Burst C", 0x009d06, 0x009d20 },
    { L"Tatsu Kiba Flame C", 0x009d20, 0x009d40 },
    { L"Gato Electricity C", 0x9C40, 0x9C60, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul C", 0x9C80, 0x9Ca0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai C", 0x9Cc0, 0x9Ce0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory C", 0x0200a0, 0x0200e0, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_GATO_PALETTES_D[] =
{
    { L"Gato D", 0x009e00, 0x009e20, indexKOF03Sprites_Gato, 0x00 },
    { L"Kouga D", 0x009f60, 0x009f76 },
    { L"Tatsu Kiba Wave D", 0x009f80, 0x009f90 },
    { L"Tatsu Kiba Burst D", 0x009f06, 0x009f20 },
    { L"Tatsu Kiba Flame D", 0x009f20, 0x009f40 },
    { L"Gato Electricity D", 0x9E40, 0x9E60, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Soul D", 0x9E80, 0x9Ea0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Shikai D", 0x9Ec0, 0x9Ee0, indexKOF03Sprites_Gato, 0x00 },
    { L"Gato Victory D", 0x0200e0, 0x020120, indexKOF03Sprites_Gato, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_A[] =
{
    { L"Billy Kane A", 0x00a000, 0x00a020 },
    { L"Fire Wheel A", 0x00a100, 0x00a120 },
    { L"Billy Electricity A", 0xa040, 0xa060, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul A", 0xa080, 0xa0a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai A", 0xa0c0, 0xa0e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory A", 0x020120, 0x020160 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_B[] =
{
    { L"Billy Kane B", 0x00a200, 0x00a220 },
    { L"Fire Wheel B", 0x00a300, 0x00a320 },
    { L"Billy Electricity B", 0xa240, 0xa260, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul B", 0xa280, 0xa2a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai B", 0xa2c0, 0xa2e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory B", 0x020160, 0x0201a0 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_C[] =
{
    { L"Billy Kane C", 0x00a400, 0x00a420 },
    { L"Fire Wheel C", 0x00a500, 0x00a520 },
    { L"Billy Electricity C", 0xa440, 0xa460, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul C", 0xa480, 0xa4a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai C", 0xa4c0, 0xa4e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory C", 0x0201a0, 0x0201e0 },
};

const sGame_PaletteDataset KOF03_A_BILLY_PALETTES_D[] =
{
    { L"Billy Kane D", 0x00a600, 0x00a620 },
    { L"Fire Wheel D", 0x00a700, 0x00a720 },
    { L"Billy Electricity D", 0xa640, 0xa660, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Soul D", 0xa880, 0xa8a0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Shikai D", 0xa8c0, 0xa8e0, indexKOF03Sprites_Billy, 0x00 },
    { L"Billy Victory D", 0x0201e0, 0x020220 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_A[] =
{
    { L"Ryuji Yamazaki A", 0x00a800, 0x00a820, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat A", 0x00a960, 0x00a972 },
    { L"Guillotine/Drill/Sadomazo A", 0x00a900, 0x00a920 },
    { L"Bai Gaeshi A", 0x00a920, 0x00a940 },
    { L"Suna Kake A", 0x00a940, 0x00a952 },
    { L"Yamazaki Electricity A", 0xaa40, 0xaa60, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul A", 0xaa80, 0xaaa0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai A", 0xaac0, 0xaae0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory A", 0x020220, 0x020260 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_B[] =
{
    { L"Ryuji Yamazaki B", 0x00aa00, 0x00aa20, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat B", 0x00ab60, 0x00ab72 },
    { L"Guillotine/Drill/Sadomazo B", 0x00ab00, 0x00ab20 },
    { L"Bai Gaeshi B", 0x00ab20, 0x00ab40 },
    { L"Suna Kake B", 0x00ab40, 0x00ab52 },
    { L"Yamazaki Electricity B", 0xaC40, 0xaC60, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul B", 0xaC80, 0xaCa0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai B", 0xaCc0, 0xaCe0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory B", 0x020260, 0x0202a0 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_C[] =
{
    { L"Ryuji Yamazaki C", 0x00ac00, 0x00ac20, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat C", 0x00ad60, 0x00ad72 },
    { L"Guillotine/Drill/Sadomazo C", 0x00ad00, 0x00ad20 },
    { L"Bai Gaeshi C", 0x00ad20, 0x00ad40 },
    { L"Suna Kake C", 0x00ad40, 0x00ad52 },
    { L"Yamazaki Electricity C", 0xaE40, 0xaE60, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul C", 0xaE80, 0xaEa0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai C", 0xaEc0, 0xaEe0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory C", 0x0202a0, 0x0202e0 },
};

const sGame_PaletteDataset KOF03_A_RYUJI_PALETTES_D[] =
{
    { L"Ryuji Yamazaki D", 0x00ae00, 0x00ae20, indexKOF03Sprites_Yamazaki },
    { L"Intro Coat D", 0x00af60, 0x00af72 },
    { L"Guillotine/Drill/Sadomazo D", 0x00af00, 0x00af20 },
    { L"Bai Gaeshi D", 0x00af20, 0x00af40 },
    { L"Suna Kake D", 0x00af40, 0x00af52 },
    { L"Yamazaki Electricity D", 0xB040, 0xB060, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Soul D", 0xB080, 0xB0a0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Shikai D", 0xB0c0, 0xB0e0, indexKOF03Sprites_Yamazaki, 0x00 },
    { L"Yamazaki Victory D", 0x0202e0, 0x020320 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_A[] =
{
    { L"King A", 0x00b000, 0x00b020, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike A", 0x00b100, 0x00b112 },
    { L"Venom Strike Impact A", 0x00b120, 0x00b132 },
    { L"Tornado Kick/Trap Shot A", 0x00b150, 0x00b160 },
    { L"Phantom Strike A", 0x00b180, 0x00b192 },
    { L"Phantom Strike Impact A", 0x00b1a0, 0x00b1b2 },
    { L"King Electricity A", 0xb240, 0xb260, indexKOF03Sprites_King, 0x00 },
    { L"King Soul A", 0xb280, 0xb2a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai A", 0xb2c0, 0xb2e0, indexKOF03Sprites_King, 0x00 },
    { L"King Victory A", 0x020320, 0x020360, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_B[] =
{
    { L"King B", 0x00b200, 0x00b220, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike B", 0x00b300, 0x00b312 },
    { L"Venom Strike Impact B", 0x00b320, 0x00b332 },
    { L"Tornado Kick/Trap Shot B", 0x00b350, 0x00b360 },
    { L"Phantom Strike B", 0x00b380, 0x00b392 },
    { L"Phantom Strike Impact B", 0x00b3a0, 0x00b3b2 },
    { L"King Electricity B", 0xb440, 0xb460, indexKOF03Sprites_King, 0x00 },
    { L"King Soul B", 0xb480, 0xb4a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai B", 0xb4c0, 0xb4e0, indexKOF03Sprites_King, 0x00 },
    { L"King Victory B", 0x020360, 0x0203a0, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_C[] =
{
    { L"King C", 0x00b400, 0x00b420, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike C", 0x00b500, 0x00b512 },
    { L"Venom Strike Impact C", 0x00b520, 0x00b532 },
    { L"Tornado Kick/Trap Shot C", 0x00b550, 0x00b560 },
    { L"Phantom Strike C", 0x00b580, 0x00b592 },
    { L"Phantom Strike Impact C", 0x00b5a0, 0x00b5b2 },
    { L"King Electricity C", 0xb640, 0xb660, indexKOF03Sprites_King, 0x00 },
    { L"King Soul C", 0xb680, 0xb6a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai C", 0xb6c0, 0xb6e0, indexKOF03Sprites_King, 0x00 },
    { L"King Victory C", 0x0203a0, 0x0203e0, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_KING_PALETTES_D[] =
{
    { L"King D", 0x00b600, 0x00b620, indexKOF03Sprites_King, 0x00 },
    { L"Venom Strike D", 0x00b700, 0x00b712 },
    { L"Venom Strike Impact D", 0x00b720, 0x00b732 },
    { L"Tornado Kick/Trap Shot D", 0x00b750, 0x00b760 },
    { L"Phantom Strike D", 0x00b780, 0x00b792 },
    { L"Phantom Strike Impact D", 0x00b7a0, 0x00b7b2 },
    { L"King Electricity D", 0xb840, 0xb860, indexKOF03Sprites_King, 0x00 },
    { L"King Soul D", 0xb880, 0xb8a0, indexKOF03Sprites_King, 0x00 },
    { L"King Shikai D", 0xb8c0, 0xb8e0, indexKOF03Sprites_King, 0x00 },

    { L"King Victory D", 0x0203e0, 0x020420, indexKOF03Sprites_King, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_A[] =
{
    { L"Mai Shiranui A", 0x00b800, 0x00b820, indexKOFSprites_02UM_Mai },
    { L"Flames A", 0x00b900, 0x00b920 },
    { L"Kachou Sen/Sachiyo Dori A", 0x00b928, 0x00b938 },
    { L"Mai Victory A", 0x020420, 0x020460 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_B[] =
{
    { L"Mai Shiranui B", 0x00ba00, 0x00ba20, indexKOFSprites_02UM_Mai },
    { L"Flames B", 0x00bb00, 0x00bb20 },
    { L"Kachou Sen/Sachiyo Dori B", 0x00bb28, 0x00bb38 },
    { L"Mai Victory B", 0x020460, 0x0204a0 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_C[] =
{
    { L"Mai Shiranui C", 0x00bc00, 0x00bc20, indexKOFSprites_02UM_Mai },
    { L"Flames C", 0x00bd00, 0x00bd20 },
    { L"Kachou Sen/Sachiyo Dori C", 0x00bd28, 0x00bd38 },
    { L"Mai Victory C", 0x0204a0, 0x0204e0 },
};

const sGame_PaletteDataset KOF03_A_SHIRANUI_PALETTES_D[] =
{
    { L"Mai Shiranui D", 0x00be00, 0x00be20, indexKOFSprites_02UM_Mai },
    { L"Flames D", 0x00bf00, 0x00bf20 },
    { L"Kachou Sen/Sachiyo Dori D", 0x00bf28, 0x00bf38 },
    { L"Mai Victory D", 0x0204e0, 0x020520 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_A[] =
{
    { L"Blue Mary A", 0x00c000, 0x00c020, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton A", 0x00c020, 0x00c040 },
    { L"Twister Rose A", 0x00c120, 0x00c140 },
    { L"Mary Victory A", 0x020520, 0x020560 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_B[] =
{
    { L"Blue Mary B", 0x00c200, 0x00c220, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton B", 0x00c220, 0x00c240 },
    { L"Twister Rose B", 0x00c320, 0x00c340 },
    { L"Mary Victory B", 0x020560, 0x0205a0 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_C[] =
{
    { L"Blue Mary C", 0x00c400, 0x00c420, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton C", 0x00c420, 0x00c440 },
    { L"Twister Rose C", 0x00c520, 0x00c540 },
    { L"Mary Victory C", 0x0205a0, 0x0205e0 },
};

const sGame_PaletteDataset KOF03_A_BLUEMARY_PALETTES_D[] =
{
    { L"Blue Mary D", 0x00c600, 0x00c620, indexKOFXISprites_BlueMary },
    { L"Intro Jacket and Anton D", 0x00c620, 0x00c640 },
    { L"Twister Rose D", 0x00c720, 0x00c740 },
    { L"Mary Victory D", 0x0205e0, 0x020620 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_A[] =
{
    { L"Benimaru Nikaido A", 0x00c800, 0x00c820, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri A", 0x00c900, 0x00c912 },
    { L"Raijin Ken A", 0x00c940, 0x00c952 },
    { L"Raimei Tou A", 0x00c980, 0x00c9a0 },
    { L"Raimei Tou Charge/Raikou Ken A", 0x00c920, 0x00c932 },
    { L"Gen'ei Hurricane A", 0x00c9c0, 0x00c9e0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory A", 0x020620, 0x020660, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_B[] =
{
    { L"Benimaru Nikaido B", 0x00ca00, 0x00ca20, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri B", 0x00cb00, 0x00cb12 },
    { L"Raijin Ken B", 0x00cb40, 0x00cb52 },
    { L"Raimei Tou B", 0x00cb80, 0x00cba0 },
    { L"Raimei Tou Charge/Raikou Ken B", 0x00cb20, 0x00cb32 },
    { L"Gen'ei Hurricane B", 0x00cbc0, 0x00cbe0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory B", 0x020660, 0x0206a0, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_C[] =
{
    { L"Benimaru Nikaido C", 0x00cc00, 0x00cc20, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri C", 0x00cd00, 0x00cd12 },
    { L"Raijin Ken C", 0x00cd40, 0x00cd52 },
    { L"Raimei Tou C", 0x00cd80, 0x00cda0 },
    { L"Raimei Tou Charge/Raikou Ken C", 0x00cd20, 0x00cd32 },
    { L"Gen'ei Hurricane C", 0x00cdc0, 0x00cde0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory C", 0x0206a0, 0x0206e0, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_BENIMARU_PALETTES_D[] =
{
    { L"Benimaru Nikaido D", 0x00ce00, 0x00ce20, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Handou Sandan Geri D", 0x00cf00, 0x00cf12 },
    { L"Raijin Ken D", 0x00cf40, 0x00cf52 },
    { L"Raimei Tou D", 0x00cf80, 0x00cfa0 },
    { L"Raimei Tou Charge/Raikou Ken D", 0x00cf20, 0x00cf32 },
    { L"Gen'ei Hurricane D", 0x00cfc0, 0x00cfe0, indexKOF03Sprites_Benimaru, 0x00 },
    { L"Benimaru Victory D", 0x0206e0, 0x020720, indexKOF03Sprites_Benimaru, 0x30 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_A[] =
{
    { L"Shingo Yabuki A", 0x00d000, 0x00d020, indexKOFXISprites_Shingo },
    { L"Shingo Victory A", 0x020720, 0x020760 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_B[] =
{
    { L"Shingo Yabuki B", 0x00d200, 0x00d220, indexKOFXISprites_Shingo },
    { L"Shingo Victory B", 0x020760, 0x0207a0 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_C[] =
{
    { L"Shingo Yabuki C", 0x00d400, 0x00d420, indexKOFXISprites_Shingo },
    { L"Shingo Victory C", 0x0207a0, 0x0207e0 },
};

const sGame_PaletteDataset KOF03_A_SHINGO_PALETTES_D[] =
{
    { L"Shingo Yabuki D", 0x00d600, 0x00d620, indexKOFXISprites_Shingo },
    { L"Shingo Victory D", 0x0207e0, 0x020820 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_A[] =
{
    { L"Goro Daimon A", 0x00d800, 0x00d820, indexKOFSprites_02UM_Daimon },
    { L"Goro Victory A", 0x020820, 0x020860 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_B[] =
{
    { L"Goro Daimon B", 0x00da00, 0x00da20, indexKOFSprites_02UM_Daimon },
    { L"Goro Victory B", 0x020860, 0x0208a0 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_C[] =
{
    { L"Goro Daimon C", 0x00dc00, 0x00dc20, indexKOFSprites_02UM_Daimon },
    { L"Goro Victory C", 0x0208a0, 0x0208e0 },
};

const sGame_PaletteDataset KOF03_A_GORO_PALETTES_D[] =
{
    { L"Goro Daimon D", 0x00de00, 0x00de20, indexKOFSprites_02UM_Daimon },
    { L"Goro Victory D", 0x0208e0, 0x020920 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_A[] =
{
    { L"Athena Asamiya A", 0x00e000, 0x00e020, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy A", 0x00e1c0, 0x00e1e0 },
    { L"Psychic 10 1-2-3 A", 0x00e120, 0x00e140 },
    { L"Psychic 10 4~10 A", 0x00e100, 0x00e120 },
    { L"Psychic 10~Sailor Punch A", 0x00e160, 0x00e180 },
    { L"Psychic 10~Psycho Sword A", 0x00e1a0, 0x00e1c0 },
    { L"Psychic 10~Flaming Sword A", 0x00e180, 0x00e1a0 },
    { L"Psychic 10~Healing Athena A", 0x00e1e0, 0x00e200 },
    { L"Psychic 10~Psycho Bomber A", 0x00e140, 0x00e160 },
    { L"Athena Victory A", 0x020920, 0x020960 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_B[] =
{
    { L"Athena Asamiya B", 0x00e200, 0x00e220, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy B", 0x00e3c0, 0x00e3e0 },
    { L"Psychic 10 1-2-3 B", 0x00e320, 0x00e340 },
    { L"Psychic 10 4~10 B", 0x00e300, 0x00e320 },
    { L"Psychic 10~Sailor Punch B", 0x00e360, 0x00e380 },
    { L"Psychic 10~Psycho Sword B", 0x00e3a0, 0x00e3c0 },
    { L"Psychic 10~Flaming Sword B", 0x00e380, 0x00e3a0 },
    { L"Psychic 10~Healing Athena B", 0x00e3e0, 0x00e400 },
    { L"Psychic 10~Psycho Bomber B", 0x00e340, 0x00e360 },
    { L"Athena Victory B", 0x020960, 0x0209a0 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_C[] =
{
    { L"Athena Asamiya C", 0x00e400, 0x00e420, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy C", 0x00e5c0, 0x00e5e0 },
    { L"Psychic 10 1-2-3 C", 0x00e520, 0x00e540 },
    { L"Psychic 10 4~10 C", 0x00e500, 0x00e520 },
    { L"Psychic 10~Sailor Punch C", 0x00e560, 0x00e580 },
    { L"Psychic 10~Psycho Sword C", 0x00e5a0, 0x00e5c0 },
    { L"Psychic 10~Flaming Sword C", 0x00e580, 0x00e5a0 },
    { L"Psychic 10~Healing Athena C", 0x00e5e0, 0x00e600 },
    { L"Psychic 10~Psycho Bomber C", 0x00e540, 0x00e560 },
    { L"Athena Victory C", 0x0209a0, 0x0209e0 },
};

const sGame_PaletteDataset KOF03_A_ATHENA_PALETTES_D[] =
{
    { L"Athena Asamiya D", 0x00e600, 0x00e620, indexKOF03Sprites_Athena, 0x00 },
    { L"Psycho Energy D", 0x00e7c0, 0x00e7e0 },
    { L"Psychic 10 1-2-3 D", 0x00e720, 0x00e740 },
    { L"Psychic 10 4~10 D", 0x00e700, 0x00e720 },
    { L"Psychic 10~Sailor Punch D", 0x00e760, 0x00e780 },
    { L"Psychic 10~Psycho Sword D", 0x00e7a0, 0x00e7c0 },
    { L"Psychic 10~Flaming Sword D", 0x00e780, 0x00e7a0 },
    { L"Psychic 10~Healing Athena D", 0x00e7e0, 0x00e800 },
    { L"Psychic 10~Psycho Bomber D", 0x00e740, 0x00e760 },
    { L"Athena Victory D", 0x0209e0, 0x020a20 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_A[] =
{
    { L"Hinako Shijo A", 0x00e800, 0x00e820, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt A", 0x00e900, 0x00e920 },
    { L"Hinako Victory A", 0x020a20, 0x020a60 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_B[] =
{
    { L"Hinako Shijo B", 0x00ea00, 0x00ea20, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt B", 0x00eb00, 0x00eb20 },
    { L"Hinako Victory B", 0x020a60, 0x020aa0 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_C[] =
{
    { L"Hinako Shijo C", 0x00ec00, 0x00ec20, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt C", 0x00ed00, 0x00ed20 },
    { L"Hinako Victory C", 0x020aa0, 0x020ae0 },
};

const sGame_PaletteDataset KOF03_A_HINAKO_PALETTES_D[] =
{
    { L"Hinako Shijo D", 0x00ee00, 0x00ee20, indexKOF03Sprites_Hinako, 0x00 },
    { L"Ceremonial Salt D", 0x00ef00, 0x00ef20 },
    { L"Hinako Victory D", 0x020ae0, 0x020b20 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_A[] =
{
    { L"Malin A", 0x00f000, 0x00f020, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons A", 0x00f020, 0x00f040 },
    { L"Intro Outfit A", 0x00f100, 0x00f120 },
    { L"Mizuchi (LDM) A", 0x00f120, 0x00f140 },
    { L"Onigumo (Yoyo) A", 0x00f140, 0x00f160 },
    { L"Malin Victory A", 0x020b20, 0x020b60 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_B[] =
{
    { L"Malin B", 0x00f200, 0x00f220, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons B", 0x00f220, 0x00f240 },
    { L"Intro Outfit B", 0x00f300, 0x00f320 },
    { L"Mizuchi (LDM) B", 0x00f320, 0x00f340 },
    { L"Onigumo (Yoyo) B", 0x00f340, 0x00f360 },
    { L"Malin Victory B", 0x020b60, 0x020ba0 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_C[] =
{
    { L"Malin C", 0x00f400, 0x00f420, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons C", 0x00f420, 0x00f440 },
    { L"Intro Outfit C", 0x00f500, 0x00f520 },
    { L"Mizuchi (LDM) C", 0x00f520, 0x00f540 },
    { L"Onigumo (Yoyo) C", 0x00f540, 0x00f560 },
    { L"Malin Victory C", 0x020ba0, 0x020be0 },
};

const sGame_PaletteDataset KOF03_A_MALIN_PALETTES_D[] =
{
    { L"Malin D", 0x00f600, 0x00f620, indexKOF03Sprites_Malin, 0x00 },
    { L"Weapons D", 0x00f620, 0x00f640 },
    { L"Intro Outfit D", 0x00f700, 0x00f720 },
    { L"Mizuchi (LDM) D", 0x00f720, 0x00f740 },
    { L"Onigumo (Yoyo) D", 0x00f740, 0x00f760 },
    { L"Malin Victory D", 0x020be0, 0x020c20 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_A[] =
{
    { L"K' A", 0x00f800, 0x00f820, indexKOF03Sprites_K },
    { L"Heat A", 0x00f900, 0x00f920 },
    { L"K' Victory A", 0x020c20, 0x020c60 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_B[] =
{
    { L"K' B", 0x00fa00, 0x00fa20, indexKOF03Sprites_K },
    { L"Heat B", 0x00fb00, 0x00fb20 },
    { L"K' Victory B", 0x020c60, 0x020ca0 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_C[] =
{
    { L"K' C", 0x00fc00, 0x00fc20, indexKOF03Sprites_K },
    { L"Heat C", 0x00fd00, 0x00fd20 },
    { L"K' Victory C", 0x020ca0, 0x020ce0 },
};

const sGame_PaletteDataset KOF03_A_K_PALETTES_D[] =
{
    { L"K' D", 0x00fe00, 0x00fe20, indexKOF03Sprites_K },
    { L"Heat D", 0x00ff00, 0x00ff20 },
    { L"K' Victory D", 0x020ce0, 0x020d20 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_A[] =
{
    { L"Maxima A", 0x010000, 0x010020, indexKOFSprites_02UM_Maxima },
    { L"Victory Pose Steam A", 0x010140, 0x010160 },
    { L"Vapour Cannon A", 0x0101a0, 0x0101c0 },
    { L"Bunker Buster 1 A", 0x010120, 0x010140 },
    { L"Bunker Buster 2 A", 0x010160, 0x010180 },
    { L"Bunker Buster 3 A", 0x010180, 0x0101a0 },
    { L"Final Cannon A", 0x010100, 0x010120 },
    { L"Maxima Victory A", 0x020d20, 0x020d60 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_B[] =
{
    { L"Maxima B", 0x010200, 0x010220, indexKOFSprites_02UM_Maxima },
    { L"Victory Pose Steam B", 0x010340, 0x010360 },
    { L"Vapour Cannon B", 0x0103a0, 0x0103c0 },
    { L"Bunker Buster 1 B", 0x010320, 0x010340 },
    { L"Bunker Buster 2 B", 0x010360, 0x010380 },
    { L"Bunker Buster 3 B", 0x010380, 0x0103a0 },
    { L"Final Cannon B", 0x010300, 0x010320 },
    { L"Maxima Victory B", 0x020d60, 0x020da0 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_C[] =
{
    { L"Maxima C", 0x010400, 0x010420, indexKOFSprites_02UM_Maxima },
    { L"Victory Pose Steam C", 0x010540, 0x010560 },
    { L"Vapour Cannon C", 0x0105a0, 0x0105c0 },
    { L"Bunker Buster 1 C", 0x010520, 0x010540 },
    { L"Bunker Buster 2 C", 0x010560, 0x010580 },
    { L"Bunker Buster 3 C", 0x010580, 0x0105a0 },
    { L"Final Cannon C", 0x010500, 0x010520 },
    { L"Maxima Victory C", 0x020da0, 0x020de0 },
};

const sGame_PaletteDataset KOF03_A_MAXIMA_PALETTES_D[] =
{
    { L"Maxima D", 0x010600, 0x010620, indexKOFSprites_02UM_Maxima },
    { L"Victory Pose Steam D", 0x010740, 0x010760 },
    { L"Vapour Cannon D", 0x0107a0, 0x0107c0 },
    { L"Bunker Buster 1 D", 0x010720, 0x010740 },
    { L"Bunker Buster 2 D", 0x010760, 0x010780 },
    { L"Bunker Buster 3 D", 0x010780, 0x0107a0 },
    { L"Final Cannon D", 0x010700, 0x010720 },
    { L"Maxima Victory D", 0x020de0, 0x020e20 },
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
    { L"Intro/Victory Flame A", 0x011130, 0x011140 },
    { L"Rekkas/Shiki A", 0x011140, 0x011160 },
    { L"Oniyaki A", 0x011160, 0x011180 },
    { L"Orochinagi/Mu Shiki A", 0x011180, 0x0111a0 },
    { L"Mu Shiki Shadows A", 0x011100, 0x011120 },
    { L"Kyo Victory A", 0x020f20, 0x020f60 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_B[] =
{
    { L"Kyo Kusanagi B", 0x011200, 0x011220, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame B", 0x011330, 0x011340 },
    { L"Rekkas/Shiki B", 0x011340, 0x011360 },
    { L"Oniyaki B", 0x011360, 0x011380 },
    { L"Orochinagi/Mu Shiki B", 0x011380, 0x0113a0 },
    { L"Mu Shiki Shadows B", 0x011300, 0x011320 },
    { L"Kyo Victory B", 0x020f60, 0x020fa0 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_C[] =
{
    { L"Kyo Kusanagi C", 0x011400, 0x011420, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame C", 0x011530, 0x011540 },
    { L"Rekkas/Shiki C", 0x011540, 0x011560 },
    { L"Oniyaki C", 0x011560, 0x011580 },
    { L"Orochinagi/Mu Shiki C", 0x011580, 0x0115a0 },
    { L"Mu Shiki Shadows C", 0x011500, 0x011520 },
    { L"Kyo Victory C", 0x020fa0, 0x020fe0 },
};

const sGame_PaletteDataset KOF03_A_KYO_PALETTES_D[] =
{
    { L"Kyo Kusanagi D", 0x011600, 0x011620, indexKOF03Sprites_Kyo },
    { L"Intro/Victory Flame D", 0x011730, 0x011740 },
    { L"Rekkas/Shiki D", 0x011740, 0x011760 },
    { L"Oniyaki D", 0x011760, 0x011780 },
    { L"Orochinagi/Mu Shiki D", 0x011780, 0x0117a0 },
    { L"Mu Shiki Shadows D", 0x011700, 0x011720 },
    { L"Kyo Victory D", 0x020fe0, 0x021020 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_A[] =
{
    { L"Iori Yagami A", 0x011800, 0x011820, indexKOFSprites_02UM_Iori },
    { L"IY-Yami Barai A", 0x011920, 0x011932 },
    { L"IY-Oniyaki A", 0x011900, 0x011920 },
    { L"Saika/Sakazuki A", 0x011960, 0x011980 },
    { L"Shingi no Ni A", 0x0119a0, 0x0119c0 },
    { L"Iori Victory A", 0x021020, 0x021060 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_B[] =
{
    { L"Iori Yagami B", 0x011a00, 0x011a20, indexKOFSprites_02UM_Iori },
    { L"IY-Yami Barai B", 0x011b20, 0x011b32 },
    { L"IY-Oniyaki B", 0x011b00, 0x011b20 },
    { L"Saika/Sakazuki B", 0x011b60, 0x011b80 },
    { L"Shingi no Ni B", 0x011ba0, 0x011bc0 },
    { L"Iori Victory B", 0x021060, 0x0210a0 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_C[] =
{
    { L"Iori Yagami C", 0x011c00, 0x011c20, indexKOFSprites_02UM_Iori },
    { L"IY-Yami Barai C", 0x011d20, 0x011d32 },
    { L"IY-Oniyaki C", 0x011d00, 0x011d20 },
    { L"Saika/Sakazuki C", 0x011d60, 0x011d80 },
    { L"Shingi no Ni C", 0x011da0, 0x011dc0 },
    { L"Iori Victory C", 0x0210a0, 0x0210e0 },
};

const sGame_PaletteDataset KOF03_A_IORI_PALETTES_D[] =
{
    { L"Iori Yagami D", 0x011e00, 0x011e20, indexKOFSprites_02UM_Iori },
    { L"IY-Yami Barai D", 0x011f20, 0x011f32 },
    { L"IY-Oniyaki D", 0x011f00, 0x011f20 },
    { L"Saika/Sakazuki D", 0x011f60, 0x011f80 },
    { L"Shingi no Ni D", 0x011fa0, 0x011fc0 },
    { L"Iori Victory D", 0x0210e0, 0x021120 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_A[] =
{
    { L"Chizuru Kagura A", 0x012000, 0x012020, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue A", 0x012100, 0x012120 },
    { L"Chizuru Victory A", 0x021120, 0x021160 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_B[] =
{
    { L"Chizuru Kagura B", 0x012200, 0x012220, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue B", 0x012300, 0x012320 },
    { L"Chizuru Victory B", 0x021160, 0x0211a0 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_C[] =
{
    { L"Chizuru Kagura C", 0x012400, 0x012420, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue C", 0x012500, 0x012520 },
    { L"Chizuru Victory C", 0x0211a0, 0x0211e0 },
};

const sGame_PaletteDataset KOF03_A_CHIZURU_PALETTES_D[] =
{
    { L"Chizuru Kagura D", 0x012600, 0x012620, indexKOF03Sprites_Chizuru, 0x00 },
    { L"Reigi no Ishizue D", 0x012700, 0x012720 },
    { L"Chizuru Victory D", 0x0211e0, 0x021220 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_A[] =
{
    { L"KUSANAGI A", 0x012800, 0x012820, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. A", 0x012980, 0x0129a0 },
    { L"K-Oniyaki A", 0x012960, 0x012980 },
    { L"Orochinagi Body A", 0x012900, 0x012920 },
    { L"Orochinagi Flame/LDM ch. A", 0x012940, 0x012960 },
    { L"Orochinagi Charge A", 0x012930, 0x012940 },
    { L"KUSANAGI Victory A", 0x021220, 0x021260 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_B[] =
{
    { L"KUSANAGI B", 0x012a00, 0x012a20, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. B", 0x012b80, 0x012ba0 },
    { L"K-Oniyaki B", 0x012b60, 0x012b80 },
    { L"Orochinagi Body B", 0x012b00, 0x012b20 },
    { L"Orochinagi Flame/LDM ch. B", 0x012b40, 0x012b60 },
    { L"Orochinagi Charge B", 0x012b30, 0x012b40 },
    { L"KUSANAGI Victory B", 0x021260, 0x0212a0 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_C[] =
{
    { L"KUSANAGI C", 0x012c00, 0x012c20, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. C", 0x012d80, 0x012da0 },
    { L"K-Oniyaki C", 0x012d60, 0x012d80 },
    { L"Orochinagi Body C", 0x012d00, 0x012d20 },
    { L"Orochinagi Flame/LDM ch. C", 0x012d40, 0x012d60 },
    { L"Orochinagi Charge C", 0x012d30, 0x012d40 },
    { L"KUSANAGI Victory C", 0x0212a0, 0x0212e0 },
};

const sGame_PaletteDataset KOF03_A_KUSANAGI_PALETTES_D[] =
{
    { L"KUSANAGI D", 0x012e00, 0x012e20, indexKOF03Sprites_KUSANAGI },
    { L"K-Yami Barai/Oroch. br. D", 0x012f80, 0x012fa0 },
    { L"K-Oniyaki D", 0x012f60, 0x012f80 },
    { L"Orochinagi Body D", 0x012f00, 0x012f20 },
    { L"Orochinagi Flame/LDM ch. D", 0x012f40, 0x012f60 },
    { L"Orochinagi Charge D", 0x012f30, 0x012f40 },
    { L"KUSANAGI Victory D", 0x0212e0, 0x021320 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_A[] =
{
    { L"Adelheid Bernstein A", 0x013000, 0x013020, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen A", 0x013160, 0x013172 },
    { L"G. Wand A", 0x013100, 0x013112 },
    { L"G. Kreis A", 0x013120, 0x013140 },
    { L"G. Sklaven A", 0x013140, 0x013160 },
    { L"Adelheid Victory A", 0x021320, 0x021360 },
    { L"Rose A", 0x021620, 0x021660 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_B[] =
{
    { L"Adelheid Bernstein B", 0x013200, 0x013220, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen B", 0x013360, 0x013372 },
    { L"G. Wand B", 0x013300, 0x013312 },
    { L"G. Kreis B", 0x013320, 0x013340 },
    { L"G. Sklaven B", 0x013340, 0x013360 },
    { L"Adelheid Victory B", 0x021360, 0x0213a0 },
    { L"Rose B", 0x021660, 0x0216a0 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_C[] =
{
    { L"Adelheid Bernstein C", 0x013400, 0x013420, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen C", 0x013560, 0x013572 },
    { L"G. Wand C", 0x013500, 0x013512 },
    { L"G. Kreis C", 0x013520, 0x013540 },
    { L"G. Sklaven C", 0x013540, 0x013560 },
    { L"Adelheid Victory C", 0x0213a0, 0x0213e0 },
    { L"Rose C", 0x0216a0, 0x0216e0 },
};

const sGame_PaletteDataset KOF03_A_ADELHEID_PALETTES_D[] =
{
    { L"Adelheid Bernstein D", 0x013600, 0x013620, indexKOFXISprites_Adelheid },
    { L"G. Kicken/G.Springen D", 0x013760, 0x013772 },
    { L"G. Wand D", 0x013700, 0x013712 },
    { L"G. Kreis D", 0x013720, 0x013740 },
    { L"G. Sklaven D", 0x013740, 0x013760 },
    { L"Adelheid Victory D", 0x0213e0, 0x021420 },
    { L"Rose D", 0x0216e0, 0x021720 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_A[] =
{
    { L"Mukai A", 0x013800, 0x013820, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou A", 0x013900, 0x013920 },
    { L"Shikai A", 0x013920, 0x013940 },
    { L"Mukai Victory A", 0x021420, 0x021460 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_B[] =
{
    { L"Mukai B", 0x013a00, 0x013a20, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou B", 0x013b00, 0x013b20 },
    { L"Shikai B", 0x013b20, 0x013b40 },
    { L"Mukai Victory B", 0x021460, 0x0214a0 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_C[] =
{
    { L"Mukai C", 0x013c00, 0x013c20, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou C", 0x013d00, 0x013d20 },
    { L"Shikai C", 0x013d20, 0x013d40 },
    { L"Mukai Victory C", 0x0214a0, 0x0214e0 },
};

const sGame_PaletteDataset KOF03_A_MUKAI_PALETTES_D[] =
{
    { L"Mukai D", 0x013e00, 0x013e20, indexKOF03Sprites_Mukai, 0x00 },
    { L"Touha/Chishou/Tenshou D", 0x013f00, 0x013f20 },
    { L"Shikai D", 0x013f20, 0x013f40 },
    { L"Mukai Victory D", 0x0214e0, 0x021520 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_A[] =
{
    { L"Maki Kagura A", 0x014000, 0x014020, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai A", 0x014100, 0x014112 },
    { L"M-Chizuru A", 0x014120, 0x014140, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue A", 0x014140, 0x014152 },
    { L"Maki Victory A", 0x021520, 0x021560 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_B[] =
{
    { L"Maki Kagura B", 0x014200, 0x014220, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai B", 0x014300, 0x014312 },
    { L"M-Chizuru B", 0x014320, 0x014340, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue B", 0x014340, 0x014352 },
    { L"Maki Victory B", 0x021560, 0x0215a0 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_C[] =
{
    { L"Maki Kagura C", 0x014400, 0x014420, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai C", 0x014500, 0x014512 },
    { L"M-Chizuru C", 0x014520, 0x014540, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue C", 0x014540, 0x014552 },
    { L"Maki Victory C", 0x0215a0, 0x0215e0 },
};

const sGame_PaletteDataset KOF03_A_MAKI_PALETTES_D[] =
{
    { L"Maki Kagura D", 0x014600, 0x014620, indexKOF03Sprites_Maki, 0x00 },
    { L"Iotsu no Utamai D", 0x014700, 0x014712 },
    { L"M-Chizuru D", 0x014720, 0x014740, indexKOF03Sprites_Chizuru, 0x00 },
    { L"M-Reigi no Ishizue D", 0x014740, 0x014752 },
    { L"Maki Victory D", 0x0215e0, 0x021620 },
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
    { L"Ash Select Portrait", 0x021b00, 0x021b40 },
    { L"Duo Lon Select Portrait", 0x021b40, 0x021b80 },
    { L"Shen Select Portrait", 0x021b80, 0x021ba0 },
    { L"Terry Select Portrait", 0x021ba0, 0x021be0 },
    { L"Joe Select Portrait", 0x021be0, 0x021c20 },
    { L"Tizoc Select Portrait", 0x021c20, 0x021c60 },
    { L"Ryo Select Portrait", 0x021c60, 0x021ca0 },
    { L"Robert Select Portrait", 0x021ca0, 0x021ce0 },
    { L"Yuri Select Portrait", 0x021ce0, 0x021d20 },
    { L"Kim Select Portrait", 0x021d20, 0x021d60 },
    { L"Chang Select Portrait", 0x021d60, 0x021da0 },
    { L"Jhun Select Portrait", 0x021da0, 0x021de0 },
    { L"Leona Select Portrait", 0x021de0, 0x021e20 },
    { L"Ralf Select Portrait", 0x021e20, 0x021e60 },
    { L"Clark Select Portrait", 0x021e60, 0x021ea0 },
    { L"Gato Select Portrait", 0x021ea0, 0x021ee0 },
    { L"Billy Select Portrait", 0x021ee0, 0x021f20 },
    { L"Yamazaki Select Portrait", 0x021f20, 0x021f60 },
    { L"King Select Portrait", 0x021f60, 0x021fa0 },
    { L"May Select Portrait", 0x021fa0, 0x021fe0 },
    { L"Mary Select Portrait", 0x021fe0, 0x022020 },
    { L"Benimaru Select Portrait", 0x022020, 0x022060 },
    { L"Shingo Select Portrait", 0x022060, 0x0220a0 },
    { L"Goro Select Portrait", 0x0220a0, 0x0220e0 },
    { L"Athena Select Portrait", 0x0220e0, 0x022120 },
    { L"Hinako Select Portrait", 0x022120, 0x022160 },
    { L"Malin Select Portrait", 0x022160, 0x0221a0 },
    { L"K' Select Portrait", 0x0221a0, 0x0221e0 },
    { L"Maxima Select Portrait", 0x0221e0, 0x022220 },
    { L"Whip Select Portrait", 0x022220, 0x022260 },
    { L"Kyo Select Portrait", 0x022260, 0x0222a0 },
    { L"Iori Select Portrait", 0x0222a0, 0x0222e0 },
    { L"Chizuru Select Portrait", 0x0222e0, 0x022320 },
    { L"KUSANAGI Select Portrait", 0x022320, 0x022360 },
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
    { L"Ryuki Yamazaki", DESC_NODETYPE_TREE, (void*)KOF03_A_RYUJI_COLLECTION, ARRAYSIZE(KOF03_A_RYUJI_COLLECTION) },

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
